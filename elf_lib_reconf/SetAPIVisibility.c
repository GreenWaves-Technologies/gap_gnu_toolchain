#include <err.h>
#include <fcntl.h>
#include <libelf.h>
#include <gelf.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <sysexits.h>
#include <unistd.h>
#include <errno.h>

#define ELF_ST_BIND(val)                (((unsigned int)(val)) >> 4)
#define ELF_ST_TYPE(val)                ((val) & 0xF)
#define ELF_ST_INFO(bind,type)          (((bind) << 4) + ((type) & 0xF))


#define PRINT_FMT1 "%-21s %d\n"
#define PRINT_FMT_NL "    %-21s 0x%jx\n"
#define PRINT_FMT_NNL "    %-21s 0x%jx"
#define PRINT_EHDR_FIELD(Ehdr, N) do {\
	printf(PRINT_FMT_NL, #N , (uintmax_t)Ehdr.N);\
} while (0)

#define PRINT_PHDR_FIELD(Phdr, N) do {\
	printf(PRINT_FMT_NL, #N , (uintmax_t)Phdr.N);\
} while (0)

#define PRINT_PHDR_FIELD_NNL(Phdr, N) do {\
	printf(PRINT_FMT_NNL, #N , (uintmax_t)Phdr.N);\
} while (0)

typedef struct {
	char **API;
	unsigned short *Len;
	unsigned int API_Count;
	unsigned int *NewIndex;
	unsigned int Sym_Count;
} API_T;

typedef struct {
	char *InFileName;
	char *APIFileName;
	char *OutFileName;
	API_T *API;
	int ElfInfos;
	int HideNonAPI;
	int RenameLocals;
	int RenameFunc;
	char *Prefix;
	int Verbose;
} Config_T;

static Config_T Config;

static int InAPI(const char *Name, API_T *API)

{
	unsigned int L = strlen(Name);

	for (int i=0; i<API->API_Count; i++) {
		if ((L == API->Len[i]) && (strcmp(Name, API->API[i]) == 0)) return (i+1);

	}
	return 0;
}

static char *ReportElfType(Elf_Kind Ek)

{
	switch (Ek) {
		case ELF_K_AR: 		return "ELF ar(1) archive";
		case ELF_K_ELF: 	return "ELF object";
		case ELF_K_NONE: 	return "ELF data";
		default: 		return "ELF unrecognized";
	}
}

static char *ReportElfPhdrType(int T)

{
#define C(V) case PT_##V : return(#V);
	switch (T) {
		C( NULL ); C( LOAD ); C( DYNAMIC ); C( INTERP ); C( NOTE );
		C( SHLIB ); C( PHDR ); C( TLS ); C(NUM); C(LOOS);
		C(GNU_EH_FRAME); C(GNU_STACK); C(GNU_RELRO); C(LOSUNW); C(HIOS);
		C(LOPROC); C(HIPROC);
		default : return"PT_unknown";
	}
#undef C
}

static const char *ReportIndexType (GElf_Ehdr *Ehdr, unsigned int type)
{
	static char buff[32];

	switch (type) {
		case SHN_UNDEF:     return "UND";
		case SHN_ABS:       return "ABS";
		case SHN_COMMON:    return "COM";
		default:
			if (type >= SHN_LOPROC && type <= SHN_HIPROC)
				sprintf (buff, "PRC[0x%04x]", type & 0xffff);
			else if (type >= SHN_LOOS && type <= SHN_HIOS)
				sprintf (buff, "OS [0x%04x]", type & 0xffff);
			else if (type >= SHN_LORESERVE)
				sprintf (buff, "RSV[0x%04x]", type & 0xffff);
			else if (type >= Ehdr->e_shnum)
				sprintf (buff, "bad section index[%3d]", type);
			else
				sprintf (buff, "U %d", type);
			return buff;
	}
}


static char *SymbolType(unsigned int V)

{
	switch (V) {
		case STT_NOTYPE: return "NOTYPE";	/* Symbol type is unspecified */
		case STT_OBJECT: return "OBJECT";	/* Symbol is a data object */
		case STT_FUNC: return "FUNC";		/* Symbol is a code object */
		case STT_SECTION: return "SECTION";	/* Symbol associated with a section */
		case STT_FILE: return "FILE";		/* Symbol's name is file name */
		case STT_COMMON: return "COMMON";	/* Symbol is a common data object */
		case STT_TLS: return "TLS";		/* Symbol is thread-local data object*/
		case STT_NUM: return "NUM";		/* Number of defined types.  */
		// case STT_LOOS: return "Loos";	/* Start of OS-specific */
		case STT_GNU_IFUNC: return "Gnu_Ifunc";	/* Symbol is indirect code object */
		case STT_HIOS: return "Hios";		/* End of OS-specific */
		case STT_LOPROC: return "LoProc";	/* Start of processor-specific */
		case STT_HIPROC: return "HiProc";	/* End of processor-specific */
		default: return "Unknown";
	}
}

static char *SymbolBinding(unsigned int V)

{
	switch (V) {
		case STB_LOCAL: return "LOCAL";			/* Local symbol */
		case STB_GLOBAL: return "GLOBAL";		/* Global symbol */
		case STB_WEAK: return "WEAK";			/* Weak symbol */
		case STB_NUM: return "NUM";			/* Number of defined types.  */
		// case STB_LOOS: return "Loos";		/* Start of OS-specific */
		case STB_GNU_UNIQUE: return "GnuUni";		/* Unique symbol.  */
		case STB_HIOS: return "Hios";			/* End of OS-specific */
		case STB_LOPROC: return "LoProc";		/* Start of processor-specific */
		case STB_HIPROC: return "HiProc";		/* End of processor-specific */
		default: return "Unknown";
	}
}

static int Is__func__Object(const char *Name)

{
	size_t L = strlen(Name);

	if (L>8 && (strncmp(Name, "__func__.", 9)==0)) return 1; else return 0;
}


static int CheckSectionName(Elf *E, int shstrtab_index, GElf_Shdr *Shdr, const char *ExpectedName)

{
  	const char *Name = elf_strptr(E, shstrtab_index, Shdr->sh_name);
  	return !strcmp(Name, ExpectedName);
}

Elf_Scn *GetSection(Elf *E, GElf_Shdr *Shdr, unsigned int Type, const char *Name, char *Banner)

{
	Elf_Scn *Scn = 0, *Sec = 0;
	GElf_Ehdr Ehdr;
	size_t Shstrndx;
	unsigned int Promoted = 0;

	if (gelf_getehdr(E, &Ehdr) == NULL) errx(EX_SOFTWARE , "GetSection:getehdr() failed :%s.", elf_errmsg(-1));
	if (elf_getshdrstrndx(E, &Shstrndx) != 0) errx(EX_SOFTWARE, "GetSection:elf_getshdrstrndx() failed: %s.", elf_errmsg(-1));
	while ((Scn = elf_nextscn(E, Scn)) != NULL) {
    		gelf_getshdr(Scn, Shdr);
		if (gelf_getshdr (Scn, Shdr ) != Shdr) errx(EX_SOFTWARE, "GetSection:getshdr() failed: %s.", elf_errmsg (-1));
		if (Shdr->sh_type != Type ||
		    CheckSectionName(E, Shstrndx, Shdr, Name) == 0) continue;
		if (Sec) errx(EX_SOFTWARE, "More than one %s in this ELF, this is not supported: %s.", Name, elf_errmsg ( -1));
		Sec = Scn;
	}
	if (Sec) {
		if (gelf_getshdr (Sec, Shdr ) != Shdr) errx(EX_SOFTWARE, "GetSection:getshdr() failed: %s.", elf_errmsg (-1));
		if (Config.Verbose) {
			printf("%s: Found Section %-4.4jd %s, sh_info: %u\n" , Banner, (uintmax_t) elf_ndxscn(Sec), Name, (unsigned int) Shdr->sh_info);
		}
	} else Shdr = 0;
	return Sec;
}

char *ReportSymbMisc(Elf *E, GElf_Shdr *Shdr, GElf_Sym *Sym, API_T *API)

{
	static char Str[2048];

	if (ELF_ST_TYPE(Sym->st_info) == STT_OBJECT || ELF_ST_TYPE(Sym->st_info) == STT_FUNC) {
		const char *SymName = elf_strptr(E, Shdr->sh_link, Sym->st_name);
		int Api = API && InAPI(SymName, API);
		if (ELF_ST_BIND(Sym->st_info) == STB_GLOBAL) {
			if (API) {
				if (!Api) return "G to L"; else return "G In API";
			} else return "G";
		} else {
			if (Api) return "L In API";
			else if (Is__func__Object(SymName)) {
				Elf_Scn *Sdata = 0;
				unsigned int At = Sym->st_value;
				unsigned int SecIndex = Sym->st_shndx;

				if ((Sdata = elf_getscn(E, SecIndex)) == NULL) errx(EX_SOFTWARE, "ReportSymbMisc: Section %d not found in this ELF.", SecIndex);
				Elf_Data *SdataData = elf_getdata(Sdata, NULL);
				if (SdataData == 0) errx(EX_SOFTWARE, "ReportSymbMisc: Unable to get .sdata section data.");
				sprintf(Str, "__func__ \"%s\"", (char *)(SdataData->d_buf) + At);
				return Str;
			}
			else return "L";
		}
	}
	return "";
}
void ReportSymbolTable(Elf *E, API_T *API)

{
	Elf_Scn *Scn = 0;
	GElf_Shdr Shdr;
	GElf_Ehdr Ehdr;
	size_t Shstrndx;
	int N_Sectab = 0;

	if (gelf_getehdr(E, &Ehdr) == NULL) errx(EX_SOFTWARE , "ReportSymbolTable:getehdr() failed :%s.", elf_errmsg(-1));
	if (elf_getshdrstrndx(E, &Shstrndx) != 0) errx(EX_SOFTWARE, "ReportSymbolTable:elf_getshdrstrndx() failed: %s.", elf_errmsg(-1));
	while ((Scn = elf_nextscn(E, Scn)) != NULL) {
		if (gelf_getshdr (Scn, &Shdr ) != &Shdr) errx(EX_SOFTWARE, "ReportSymbolTable:getshdr() failed: %s.", elf_errmsg (-1));
		if (Shdr.sh_type != SHT_SYMTAB) continue;

		N_Sectab ++;
		if (N_Sectab > 1) errx(EX_SOFTWARE, "ReportSymbolTable: More than 1 .symtab in this ELF, this is not supported: %s.", elf_errmsg (-1));

		char *SecName;
		if ((SecName = elf_strptr (E , Shstrndx, Shdr.sh_name)) == NULL) errx(EX_SOFTWARE, "ReportSymbolTable:elf_strptr() failed: %s.", elf_errmsg ( -1));
		printf("Section %-4.4jd %s sh_info: %u\n" , (uintmax_t) elf_ndxscn(Scn), SecName, (unsigned int) Shdr.sh_info);

		Elf_Data *Data = elf_getdata(Scn, NULL);
		int Count = Shdr.sh_size / Shdr.sh_entsize;
	
		for (int i = 0; i<Count; i++) {
			GElf_Sym Sym;
	
			gelf_getsym(Data, i, &Sym);
			printf("  [%4d] %40s [%8d] Type: %7s, Bind: %6s, Value: %08lx, Size: %6d, Ndx: %s %8s\n",
				i,
				elf_strptr(E, Shdr.sh_link, Sym.st_name),
				Sym.st_name,
				SymbolType(ELF_ST_TYPE(Sym.st_info)),
				SymbolBinding(ELF_ST_BIND(Sym.st_info)),
				Sym.st_value, (int) Sym.st_size,
				ReportIndexType(&Ehdr, Sym.st_shndx),
				ReportSymbMisc(E, &Shdr, &Sym, API)
			      );
		}
	}
}

void ReportRelocSections(Elf *E)

{
	Elf_Scn *Scn = 0;
	GElf_Shdr Shdr;
	GElf_Ehdr Ehdr;
	size_t Shstrndx;

	if (gelf_getehdr(E, &Ehdr) == NULL) errx(EX_SOFTWARE , "ReportRelocSections:getehdr() failed :%s.", elf_errmsg(-1));
	if (elf_getshdrstrndx(E, &Shstrndx) != 0) errx(EX_SOFTWARE, "ReportRelocSections:elf_getshdrstrndx() failed: %s.", elf_errmsg(-1));
	while ((Scn = elf_nextscn(E, Scn)) != NULL) {
		if (gelf_getshdr (Scn, &Shdr ) != &Shdr) errx(EX_SOFTWARE, "ReportRelocSections:getshdr() failed: %s.", elf_errmsg (-1));
		if (Shdr.sh_type != SHT_REL && Shdr.sh_type != SHT_RELA) continue;

		int IsRela = (Shdr.sh_type == SHT_RELA);

		char *SecName;
		if ((SecName = elf_strptr (E , Shstrndx, Shdr.sh_name)) == NULL) errx(EX_SOFTWARE, "ReportRelocSections:elf_strptr() failed: %s.", elf_errmsg ( -1));
		printf("Section %-4.4jd %s, sh_info: %u\n" , (uintmax_t) elf_ndxscn(Scn), SecName, (unsigned int) Shdr.sh_info);

		Elf_Data *Data = elf_getdata(Scn, NULL);
		int Count = Shdr.sh_size / Shdr.sh_entsize;
	
		if (IsRela) {
			for (int i = 0; i<Count; i++) {
				GElf_Rela Rel;
		
				gelf_getrela(Data, i, &Rel);
				printf("[%4d] r_info: %8x, r_offset: %8X, Symb: %8x, Type: %d\n",
					i, (int) Rel.r_info, (int) Rel.r_offset, (int) ELF64_R_SYM(Rel.r_info), (int) ELF64_R_TYPE(Rel.r_info));
			}
		} else {
			for (int i = 0; i<Count; i++) {
				GElf_Rel Rel;
		
				gelf_getrel(Data, i, &Rel);
				printf("[%4d] r_offset: %8X, Symb: %8x, Type: %d\n",
					i, (int) Rel.r_offset, (int) ELF64_R_SYM(Rel.r_info), (int) ELF64_R_TYPE(Rel.r_info));
			}
		}
	}
}

void ElfInfos(char *FileName, Elf *E, API_T *API, char *Banner)

{
	GElf_Ehdr Ehdr;
	size_t S;

	printf("%s\n", Banner);
	printf("%s: %s\n", FileName, ReportElfType(elf_kind(E)));

	if (elf_kind(E) != ELF_K_ELF) errx(EX_DATAERR, "ElfInfos:\"%s\" is not an ELF object.", FileName);

	{
		int i;
		if ((i = gelf_getclass(E)) == ELFCLASSNONE ) errx(EX_SOFTWARE, "ElfInfos:getclass () failed: %s.", elf_errmsg(-1));
		printf ( "%s: %d - bit ELF object\n", FileName, (i == ELFCLASS32)?32:64);
	}

	{
		char *Id;
		if ((Id = elf_getident(E, NULL)) == NULL) errx(EX_SOFTWARE, "ElfInfos:getident () failed: %s." , elf_errmsg ( -1));
		printf("%3s e_ident[0..%1d] %7s", " ", EI_ABIVERSION, " " );
		for (int i=0; i<=EI_ABIVERSION ; i ++) printf ( " [’%c’ %X] " , isprint(Id[i])?Id[i]:'?' , Id[i]);
		printf("\n");
	}
	/* ELF Executable Header, Ehdr */
	if (gelf_getehdr(E, &Ehdr) == NULL) errx(EX_SOFTWARE , "ElfInfos:getehdr() failed :%s.", elf_errmsg(-1));
	{
		PRINT_EHDR_FIELD(Ehdr, e_type);
		PRINT_EHDR_FIELD(Ehdr, e_machine);
		PRINT_EHDR_FIELD(Ehdr, e_version);
		PRINT_EHDR_FIELD(Ehdr, e_entry);
		PRINT_EHDR_FIELD(Ehdr, e_phoff);
		PRINT_EHDR_FIELD(Ehdr, e_shoff);
		PRINT_EHDR_FIELD(Ehdr, e_flags);
		PRINT_EHDR_FIELD(Ehdr, e_ehsize);
		PRINT_EHDR_FIELD(Ehdr, e_phentsize);
		PRINT_EHDR_FIELD(Ehdr, e_shentsize);
	}


	if (elf_getshdrnum(E, &S) != 0) errx(EX_SOFTWARE, "ElfInfos:getshdrnum () failed: %s.", elf_errmsg (-1));
	printf(PRINT_FMT_NL, "( shnum )", (uintmax_t)S);

	if (elf_getshdrstrndx(E , &S ) != 0) errx(EX_SOFTWARE, "ElfInfos:getshdrstrndx () failed: %s.", elf_errmsg(-1));
	printf(PRINT_FMT_NL, "( shstrndx )", (uintmax_t)S);

	if (elf_getphdrnum(E , &S) != 0) errx(EX_SOFTWARE, "ElfInfos:getphdrnum () failed: %s.", elf_errmsg(-1));
	printf(PRINT_FMT_NL, "( phnum )", (uintmax_t)S);

	/* ELF Program Headers, Phdr */
	size_t PhdrN;
	if (elf_getphdrnum(E , &PhdrN) != 0) errx(EX_DATAERR, "ElfInfos:elf_getphdrnum () failed: %s.", elf_errmsg(-1));
	for (int i=0; i<PhdrN; i++) {
		GElf_Phdr Phdr;
		if (gelf_getphdr(E, i, &Phdr) != &Phdr) errx(EX_SOFTWARE, "ElfInfos:getphdr () failed: %s.", elf_errmsg(-1));
		printf(PRINT_FMT1, "ELF Program Header", i);
		PRINT_PHDR_FIELD_NNL(Phdr, p_type); printf(" %s\n", ReportElfPhdrType(Phdr.p_type));
		PRINT_PHDR_FIELD(Phdr, p_offset);
		PRINT_PHDR_FIELD(Phdr, p_vaddr);
		PRINT_PHDR_FIELD(Phdr, p_paddr);
		PRINT_PHDR_FIELD(Phdr, p_filesz);
		PRINT_PHDR_FIELD(Phdr, p_memsz);
		PRINT_PHDR_FIELD_NNL(Phdr, p_flags); printf(" [%c%c%c]\n", (Phdr.p_flags&PF_X)?'X':' ', (Phdr.p_flags&PF_R)?'R':' ', (Phdr.p_flags&PF_W)?'W':' ');
		PRINT_PHDR_FIELD(Phdr, p_align);
	}
	ReportSymbolTable(E, API);
	ReportRelocSections(E);
	printf("==========================================================================================================================\n");
}


static void UpdateRelocSections(Elf *E, API_T *API, Elf_Scn *SymbolTable)

{
	Elf_Scn *Scn = 0;
	GElf_Shdr Shdr, ShdrSt;
	GElf_Ehdr Ehdr;
	size_t Shstrndx;
	int FileUpdate = 0;

    	// gelf_getshdr(SymbolTable, &ShdrSt);
	if (gelf_getshdr(SymbolTable, &ShdrSt) != &ShdrSt) errx(EX_SOFTWARE, "UpdateRelocSections:getshdr() failed: %s.", elf_errmsg (-1));
	Elf_Data *SymData = elf_getdata(SymbolTable, NULL);

	if (gelf_getehdr(E, &Ehdr) == NULL) errx(EX_SOFTWARE , "UpdateRelocSections:getehdr() failed :%s.", elf_errmsg(-1));
	if (elf_getshdrstrndx(E, &Shstrndx) != 0) errx(EX_SOFTWARE, "UpdateRelocSections:elf_getshdrstrndx() failed: %s.", elf_errmsg(-1));
	while ((Scn = elf_nextscn(E, Scn)) != NULL) {
    		gelf_getshdr(Scn, &Shdr);
		if (gelf_getshdr (Scn, &Shdr ) != &Shdr) errx(EX_SOFTWARE, "UpdateRelocSections:getshdr() failed: %s.", elf_errmsg (-1));
		if (Shdr.sh_type != SHT_REL && Shdr.sh_type != SHT_RELA) continue;

		int IsRela = (Shdr.sh_type == SHT_RELA);
		int Updated = 0;
		char *SecName;
		if ((SecName = elf_strptr (E , Shstrndx, Shdr.sh_name)) == NULL) errx(EX_SOFTWARE, "UpdateRelocSections:elf_strptr() failed: %s.", elf_errmsg ( -1));
		// printf("Section %-4.4jd %s, sh_info: %u\n" , (uintmax_t) elf_ndxscn(Scn), SecName, (unsigned int) Shdr.sh_info);

		Elf_Data *RelData = elf_getdata(Scn, NULL);
		int Count = Shdr.sh_size / Shdr.sh_entsize;
	
		if (IsRela) {
			for (int i = 0; i<Count; i++) {
				GElf_Rela Rel;
		
				gelf_getrela(RelData, i, &Rel);
				/*
				printf("[%4d] r_info: %8x, r_offset: %8X, Symb: %8x, Type: %d\n",
					i, (int) Rel.r_info, (int) Rel.r_offset, (int) GELF_R_SYM(Rel.r_info), (int) GELF_R_TYPE(Rel.r_info));
				*/
				unsigned int Symb = GELF_R_SYM(Rel.r_info);
				if (Symb && Symb<API->Sym_Count && API->NewIndex[Symb] != Symb) {
					Rel.r_info = GELF_R_INFO(API->NewIndex[Symb], GELF_R_TYPE(Rel.r_info));
					gelf_update_rela(RelData, i, &Rel);
					Updated++;
					if (Config.Verbose) {
						GElf_Sym Sym;
						gelf_getsym(SymData, API->NewIndex[Symb], &Sym);
						const char *SymName = elf_strptr(E, ShdrSt.sh_link, Sym.st_name);
						printf("Section: %30s, RelocA %5d, replacing symbol index %5d by index %5d <%s>\n",
							SecName, i, Symb, API->NewIndex[Symb], SymName);
					}
				}
			}
		} else {
			for (int i = 0; i<Count; i++) {
				GElf_Rel Rel;
		
				gelf_getrel(RelData, i, &Rel);
				/*
				printf("[%4d] r_offset: %8X, Symb: %8x, Type: %d\n",
					i, (int) Rel.r_offset, (int) ELF32_R_SYM(Rel.r_info), (int) ELF32_R_TYPE(Rel.r_info));
				*/
				unsigned int Symb = GELF_R_SYM(Rel.r_info);
				if (Symb && Symb<API->Sym_Count && API->NewIndex[Symb] != Symb) {
					Rel.r_info = GELF_R_INFO(API->NewIndex[Symb], GELF_R_TYPE(Rel.r_info));
					gelf_update_rel(RelData, i, &Rel);
					Updated++;
					if (Config.Verbose) {
						GElf_Sym Sym;
						gelf_getsym(SymData, API->NewIndex[Symb], &Sym);
						const char *SymName = elf_strptr(E, ShdrSt.sh_link, Sym.st_name);
						printf("Section: %30s, Reloc  %5d, replacing symbol index %5d by index %5d <%s>\n",
							SecName, i, Symb, API->NewIndex[Symb], SymName);
					}
				}
			}
		}
		if (Updated) {
			elf_flagdata(RelData, ELF_C_SET, ELF_F_DIRTY);
			FileUpdate = 1;
		}
	}
	if (FileUpdate) {
		if (elf_update(E, ELF_C_WRITE) < 0) errx(EX_SOFTWARE , "UpdateRelocSections:elf_update () failed: %s.", elf_errmsg(-1));
	}
}

int SetSymbolVisibility(Elf *E, API_T *API)

{
	Elf_Scn *SymbolTable = 0;
	GElf_Shdr Shdr;
	GElf_Ehdr Ehdr;
	unsigned int Promoted = 0;

	if (gelf_getehdr(E, &Ehdr) == NULL) errx(EX_SOFTWARE , "SetSymbolVisibility:getehdr() failed :%s.", elf_errmsg(-1));
	if ((SymbolTable = GetSection(E, &Shdr, SHT_SYMTAB, ".symtab", "SetSymbolVisibility")) == NULL) errx(EX_SOFTWARE, "No symbol table found in this ELF.");

	Elf_Data *SymData = elf_getdata(SymbolTable, NULL);
	if (elf_getdata(SymbolTable, SymData)) errx(EX_SOFTWARE, "SetSymbolVisibility:elf_getdata Library representation of symbol table is not contiguous.");
	int Count = Shdr.sh_size / Shdr.sh_entsize;
	
	for (int i = Shdr.sh_info; i<Count; i++) {
		GElf_Sym Sym;
	
		gelf_getsym(SymData, i, &Sym);

		/* Consider only object and functions with global scope */
		if (!(ELF_ST_TYPE(Sym.st_info) == STT_OBJECT || ELF_ST_TYPE(Sym.st_info) == STT_FUNC)) continue;
		if (ELF_ST_BIND(Sym.st_info) != STB_GLOBAL) continue;

		const char *SymName = elf_strptr(E, Shdr.sh_link, Sym.st_name);

		if (!InAPI(SymName, API)) Promoted++;
	}
	if (Promoted) {
		if (gelf_getshdr(SymbolTable, &Shdr ) != &Shdr) errx(EX_SOFTWARE, "SetSymbolVisibility:getshdr() failed: %s.", elf_errmsg (-1));
		int Count = Shdr.sh_size / Shdr.sh_entsize;
		Elf_Data *SymData = elf_getdata(SymbolTable, NULL);
		GElf_Sym *TmpSymb;
		TmpSymb = (GElf_Sym *) calloc(sizeof(GElf_Sym), Count); // -Shdr.sh_info);
		API->NewIndex = (unsigned int *) calloc(sizeof(unsigned int), Count);
		API->Sym_Count = Count;
		if (TmpSymb == 0 || API->NewIndex == 0) fprintf(stderr, "Failed to allocate memory\n");
		unsigned int NewLocal = Shdr.sh_info, NewGlobal = NewLocal + Promoted;
		// printf("Alloc Symb Tab Data[%d], NewLocal: %d, NewGlobal: %d\n", Count-Shdr.sh_info, NewLocal, NewGlobal);
		for (int i=0; i<Shdr.sh_info; i++) API->NewIndex[i] = i;
		for (int i = Shdr.sh_info; i<Count; i++) gelf_getsym(SymData, i, &TmpSymb[i]);
		for (int i = Shdr.sh_info; i<Count; i++) {
			const char *SymName = elf_strptr(E, Shdr.sh_link, TmpSymb[i].st_name);
			if (ELF_ST_BIND(TmpSymb[i].st_info) == STB_GLOBAL &&
			    (ELF_ST_TYPE(TmpSymb[i].st_info) == STT_OBJECT || ELF_ST_TYPE(TmpSymb[i].st_info) == STT_FUNC) &&
			    !InAPI(SymName, API)) {
				TmpSymb[i].st_info = GELF_ST_INFO(STB_LOCAL, GELF_ST_TYPE(TmpSymb[i].st_info));
				gelf_update_sym(SymData, NewLocal, &TmpSymb[i]);
				if (Config.Verbose) printf("Turning %s %s to LOCAL. Index: Old: %d, New: %d\n",
							   SymbolType(ELF_ST_TYPE(TmpSymb[i].st_info)), SymName, i, NewLocal);
				API->NewIndex[i] = NewLocal;
				NewLocal++;
			} else {
				gelf_update_sym(SymData, NewGlobal, &TmpSymb[i]);
				API->NewIndex[i] = NewGlobal;
				NewGlobal++;
			}
		}
		Shdr.sh_info += Promoted;
    		gelf_update_shdr(SymbolTable, &Shdr);
		elf_flagdata(SymData, ELF_C_SET, ELF_F_DIRTY);
		elf_flagshdr(SymbolTable, ELF_C_SET, ELF_F_DIRTY);
		if (elf_update(E, ELF_C_WRITE) < 0) errx(EX_SOFTWARE , "SetSymbolVisibility:elf_update () failed: %s.", elf_errmsg(-1));
		free(TmpSymb);

		UpdateRelocSections(E, API, SymbolTable);
	}
	return Promoted;
	
}

unsigned int SymbolLength(unsigned int PrefixLen, unsigned int N)

{
	unsigned int L = PrefixLen;
	do {
		L++;
		N = N/10;
	} while (N);
	return L;
}

int ObfuscateLocals(Elf *E)

{
	int Trace = 0;
	Elf_Scn *SymbolTable = 0;
	Elf_Scn *StringTable = 0;
	GElf_Shdr ShdrSym, ShdrStr;
	GElf_Ehdr Ehdr;
	unsigned int Promoted = 0;

	if (gelf_getehdr(E, &Ehdr) == NULL) errx(EX_SOFTWARE , "ObfuscateLocals:getehdr() failed :%s.", elf_errmsg(-1));

	if ((SymbolTable = GetSection(E, &ShdrSym, SHT_SYMTAB, ".symtab", "ObfuscateLocals")) == NULL) errx(EX_SOFTWARE, "ObfuscateLocals: No symbol table found in this ELF.");
	if ((StringTable = GetSection(E, &ShdrStr, SHT_STRTAB, ".strtab", "ObfuscateLocals")) == NULL) errx(EX_SOFTWARE, "ObfuscateLocals: No string table found in this ELF.");

	Elf_Data *StrData = elf_getdata(StringTable, NULL);
	if (StrData == 0) errx(EX_SOFTWARE, "ObfuscateLocals: Unable to get .strtab section data.");
	if (elf_getdata(StringTable, StrData)) errx(EX_SOFTWARE, "ObfuscateLocals:elf_getdata Library representation of string table is not contiguous.");

	Elf_Data *SymData = elf_getdata(SymbolTable, NULL);
	if (SymData == 0) errx(EX_SOFTWARE, "ObfuscateLocals: Unable to get .symtab section data.");
	if (elf_getdata(SymbolTable, SymData)) errx(EX_SOFTWARE, "ObfuscateLocals:elf_getdata Library representation of symbol table is not contiguous.");

	int Count = ShdrSym.sh_size / ShdrSym.sh_entsize;
	
	size_t NewSymLen = 1, OrgSymLen = 1;
	int RenamedSym = 0;
	unsigned int PrefixLen = strlen(Config.Prefix);
	unsigned int At = 1;
	for (int i = 0; i<Count; i++) {
		GElf_Sym Sym;
	
		gelf_getsym(SymData, i, &Sym);
		const char *SymName = elf_strptr(E, ShdrSym.sh_link, Sym.st_name);
		size_t L;
	       
		if (Sym.st_name) L = strlen(SymName)+1; else L = 0;

		if (Trace) printf("%4d %40s => %3ld At %6d", i, SymName, L, Sym.st_name);

		OrgSymLen += L;
		/* Consider only object and functions with local scope */
		if (!(ELF_ST_TYPE(Sym.st_info) == STT_OBJECT || ELF_ST_TYPE(Sym.st_info) == STT_FUNC) || (ELF_ST_BIND(Sym.st_info) != STB_LOCAL)) {
			NewSymLen += L;
			if (Trace) printf(" New %6d\n", At);
		       	At += L;
			continue;
		}
		if (Trace) printf(" New %6d Renamed\n", At);
		RenamedSym++;
		L = SymbolLength(PrefixLen, RenamedSym) + 1;
		At += L;
		NewSymLen += L;
	}
	if (Config.Verbose) {
		printf("ObfuscateLocals: SymbolCount: %4d, StrtabSize: %7ld, RenamedSymbols: %4d, NewStrtabSize: %7ld\n", Count, OrgSymLen, RenamedSym, NewSymLen);
	}
	if (RenamedSym == 0) return 0;

	NewSymLen = OrgSymLen;
	char *NewStrTable = (char *) calloc(sizeof(char), NewSymLen);
	if (NewStrTable == 0) errx(EX_SOFTWARE, "ObfuscateLocals: Failed to allocate new string table, %ld bytes.",  NewSymLen);
	At = 1;
	NewStrTable[0] = 0;
	RenamedSym = 0;

	for (int i = 0; i<Count; i++) {
		GElf_Sym Sym;
	
		gelf_getsym(SymData, i, &Sym);
		const char *SymName = elf_strptr(E, ShdrSym.sh_link, Sym.st_name);
		size_t L;
		int OrgName = Sym.st_name;

		if (Sym.st_name) L = strlen(SymName)+1; else L = 0;

		if (Sym.st_name) {
			Sym.st_name = At;
			gelf_update_sym(SymData, i, &Sym);
		}
		/* Consider only object and functions with local scope */
		if (!(ELF_ST_TYPE(Sym.st_info) == STT_OBJECT || ELF_ST_TYPE(Sym.st_info) == STT_FUNC) || (ELF_ST_BIND(Sym.st_info) != STB_LOCAL)) {
			if (L) {
				strcpy(NewStrTable+At, SymName); At += L;
			}
			continue;
		}
		RenamedSym++;
		sprintf(NewStrTable+At, "%s%d", Config.Prefix, RenamedSym);
		At += SymbolLength(PrefixLen, RenamedSym) + 1;
		if (Config.Verbose) 
			printf("%4d %40s => %3ld OldIndex %6d, NewIndex %6d, NewName: %s%d\n", i, SymName, L, OrgName, Sym.st_name, Config.Prefix, RenamedSym);
	}
	StrData->d_buf = NewStrTable;
	StrData->d_size = NewSymLen;

	elf_flagdata(SymData, ELF_C_SET, ELF_F_DIRTY);
	elf_flagdata(StrData, ELF_C_SET, ELF_F_DIRTY);
	elf_flagshdr(SymbolTable, ELF_C_SET, ELF_F_DIRTY);
	if (elf_update(E, ELF_C_WRITE) < 0) errx(EX_SOFTWARE , "ObfuscateLocals:elf_update () failed: %s.", elf_errmsg(-1));
	return RenamedSym;
}

int Obfuscate__func__(Elf *E)

{
	int Trace = 0;
	Elf_Scn *SymbolTable = 0, *Sdata = 0;
	GElf_Shdr ShdrSym, ShdrSdata;
	GElf_Ehdr Ehdr;

	if (gelf_getehdr(E, &Ehdr) == NULL) errx(EX_SOFTWARE , "Obfuscate__func__:getehdr() failed :%s.", elf_errmsg(-1));
	if ((SymbolTable = GetSection(E, &ShdrSym, SHT_SYMTAB, ".symtab", "Obfuscate__func__")) == NULL) errx(EX_SOFTWARE, "Obfuscate__func__: No symbol table found in this ELF.");

	Elf_Data *SymData = elf_getdata(SymbolTable, NULL);
	if (SymData == 0) errx(EX_SOFTWARE, "Obfuscate__func__: Unable to get .symtab section data.");
	if (elf_getdata(SymbolTable, SymData)) errx(EX_SOFTWARE, "Obfuscate__func__:elf_getdata Library representation of symbol table is not contiguous.");

	unsigned int SecIndex = 0;
	int Count = ShdrSym.sh_size / ShdrSym.sh_entsize;
	int RenamedSym = 0;
	for (int i = 0; i<Count; i++) {
		GElf_Sym Sym;
		gelf_getsym(SymData, i, &Sym);
		const char *SymName = elf_strptr(E, ShdrSym.sh_link, Sym.st_name);
		if (Is__func__Object(SymName)) {
			if (SecIndex == 0) SecIndex = Sym.st_shndx;
			else if (Sym.st_shndx != SecIndex)
				errx(EX_SOFTWARE, "Obfuscate__func__: __func__ from different sections, at least %d and %d.", SecIndex, Sym.st_shndx);
			RenamedSym++;
		}
	}
	if (RenamedSym==0) return 0;
	if ((Sdata = elf_getscn(E, SecIndex)) == NULL) errx(EX_SOFTWARE, "Obfuscate__func__: Section %d not found in this ELF.", SecIndex);

	Elf_Data *SdataData = elf_getdata(Sdata, NULL);
	if (SdataData == 0) errx(EX_SOFTWARE, "Obfuscate__func__: Unable to get .sdata section data.");
	if (elf_getdata(Sdata, SdataData)) errx(EX_SOFTWARE, "Obfuscate__func__:elf_getdata Library representation of .sdata is not contiguous.");
	for (int i = 0; i<Count; i++) {
		GElf_Sym Sym;
		gelf_getsym(SymData, i, &Sym);
		const char *SymName = elf_strptr(E, ShdrSym.sh_link, Sym.st_name);
		if (Is__func__Object(SymName)) {
			unsigned int At = Sym.st_value;
			unsigned int L = strlen((char *)(SdataData->d_buf) + At);
			if (Config.Verbose) printf("[%4d] Symbol %s, At: %d, Contains: %s", i, SymName, At, (char *)(SdataData->d_buf) + At);
			for (int j=0; j<L; j++) ((char *)(SdataData->d_buf) + At)[j] = '_';
			if (Config.Verbose) printf(" Replaced by %s\n", (char *)(SdataData->d_buf) + At);
		}
	}
	elf_flagshdr(Sdata, ELF_C_SET, ELF_F_DIRTY);
	elf_flagdata(SdataData, ELF_C_SET, ELF_F_DIRTY);
	if (elf_update(E, ELF_C_WRITE) < 0) errx(EX_SOFTWARE , "Obfuscate__func__:elf_update () failed: %s.", elf_errmsg(-1));

	return RenamedSym;
}

static int CopyFile(char *From, char *To)

{
#define BUFFER_SIZE 1024
	unsigned char buffer[BUFFER_SIZE] = {0};
	ssize_t byte = 0;
    
	int rfd, wfd;
    
	if ((rfd = open(From, O_RDONLY)) == -1) {
		fprintf(stderr, "CopyFile:Failed to open input file %s\n", From);
		return -1;
	}
	if ((wfd = open(To, O_WRONLY | O_CREAT | O_TRUNC, 0777)) == -1) {	// 644
		fprintf(stderr, "CopyFile:Failed to create output file %s [%d]\n", To, wfd);
		return -1;
	}
	int N=0;
	while (1) {
		byte = read(rfd, buffer, sizeof(buffer));
		if (byte == -1) {
			fprintf(stderr, "CopyFile:Encountered an error\n");
			return -1;
		} else if (byte == 0) break;
		N+=byte;
		if (write(wfd, buffer, byte) == -1) {
			fprintf(stderr, "CopyFile:Failed to copying file\n");
			return -1;
		}
	}
	close(rfd);
	close(wfd);
	return 0;
#undef BUFFER_SIZE
}

Elf *Init(char *FileName, int *Fd)

{
	Elf *E;

	if (elf_version(EV_CURRENT) == EV_NONE) errx(EX_SOFTWARE , "Init:ELF library initialization failed: %s", elf_errmsg(-1));
	if ((*Fd = open(FileName, O_RDWR, 0)) < 0) {
		printf("Error is %s\n", strerror(errno));
		err(EX_NOINPUT, "Init:open %s failed [%d]", FileName, *Fd);
	}

	if ((E = elf_begin(*Fd, ELF_C_RDWR, NULL )) == NULL) errx(EX_SOFTWARE, "Init:elf_begin() failed: %s" , elf_errmsg ( -1));
	if (elf_kind(E) != ELF_K_ELF) errx(EX_DATAERR, "Init:\"%s\" is not an ELF object.", FileName);
	return E;
}

void Finish(Elf *E, int *Fd)

{
	elf_end(E);
	close(*Fd);
}

typedef enum {
	T_NAME=0,
	T_UNTERM=1,
	T_EOFT=2,
	T_UNKNOWN=3,
} Token_T;

static Token_T GetNextToken(FILE *Fi, char *Str, int *LineNo)

{
        int c, p=0;
	Str[0] = 0;

        /* Skip blanks */
        while (1) {
                c = fgetc(Fi);
                if (c==EOF) break;
                if (c=='/') {   // Comment
                        if ((c = fgetc(Fi)) && (c=='*')) {;
                                while (1) {
                                        while (((c = fgetc(Fi)) != EOF) && (c != '*')) {
                                        }
                                        if (c==EOF) return T_UNTERM;    // Unterminated comment
                                        c = fgetc(Fi);
                                        if (c=='/') {
                                                break;
                                        }
                                        ungetc(c, Fi);
                                }
                        } else if (c=='/') {
                                while (1) {
                                        while (((c = fgetc(Fi)) != EOF) && (c != '\n')) ;
                                        if (c==EOF) return T_UNTERM;    // Unterminated comment
                                        break;
				}
                        } else {
                                ungetc(c, Fi); break;
                        }
                } else if (!((c==' ') || (c=='\t') || (c=='\n') || (c=='\r'))) break;
                else if (c=='\n') {
                        *LineNo = *LineNo + 1;
                }

        }
	if (isalnum(c)) {
                while (isalnum(c)) {
                        Str[p++] = c;
                        c = fgetc(Fi);
                }
                ungetc(c, Fi);
                Str[p] = 0;
                return T_NAME;
        } else if (c==EOF)
                return T_EOFT;
        else {
		Str[p++] = c;
		Str[p] = 0;
		return T_UNKNOWN;
	}
}

API_T *ParseAPI(char *FileName)

{
	FILE *Fi;
	Token_T Tok;
	char Str[256];
	int LineNo = 1;
	int SymCount = 0;
	API_T *API = 0;

	Fi = fopen(FileName, "r");
	if (Fi == 0) {
		fprintf(stderr, "Failed to open API file %s\n", FileName); exit(EXIT_FAILURE);
	}

	while ((Tok = GetNextToken(Fi, Str, &LineNo)) == T_NAME) SymCount++;
	if (Tok != T_EOFT) {
		fprintf(stderr, "Unexpected content %s found in %s at line %d\n", Str, FileName, LineNo); exit(EXIT_FAILURE);
	}
	if (SymCount == 0) return 0;
	rewind(Fi);
	API = (API_T *) malloc(sizeof(API_T));
	if (API==0) {
		fprintf(stderr, "Memory allocation failure\n"); exit(EXIT_FAILURE);
	}
	API->API = (char **) calloc(sizeof(char *), SymCount);
	API->Len = (unsigned short *) calloc(sizeof(unsigned short), SymCount);
	API->API_Count = SymCount;
	API->NewIndex = 0;
	API->Sym_Count = SymCount;
	if (API->API==0 || API->Len==0) {
		fprintf(stderr, "Memory allocation failure\n"); exit(EXIT_FAILURE);
	}
	int At = 0;
	while ((Tok = GetNextToken(Fi, Str, &LineNo)) == T_NAME) {
		API->API[At] = strdup(Str);
		if (API->API[At]==0) {
			fprintf(stderr, "Memory allocation failure\n"); exit(EXIT_FAILURE);
		}
		API->Len[At] = strlen(Str);
		At++;
	}
	return API;
}

static void ReportOptions(Config_T *Opt)

{
	printf("%20s: %s\n", "InFileName", Opt->InFileName?Opt->InFileName:"None");
	printf("%20s: %s\n", "OutFileName", Opt->OutFileName?Opt->OutFileName:(Opt->InFileName?Opt->InFileName:"None"));
	printf("%20s: %s, %d Symbols\n", "APIFileName", Opt->APIFileName?Opt->APIFileName:"None", Opt->API?Opt->API->API_Count:0);
	printf("%20s: %s\n", "HideNonAPI", Opt->HideNonAPI?"Yes":"No");
	printf("%20s: %s\n", "RenameLocals", Opt->RenameLocals?"Yes":"No");
	printf("%20s: %s\n", "Prefix", Opt->Prefix);
	printf("%20s: %s\n", "RenameFunc", Opt->RenameFunc?"Yes":"No");
	printf("%20s: %s\n", "ElfInfos", Opt->ElfInfos?"Yes":"No");
	printf("\n");
}

static void Usage(char *ExecName)

{
	printf("Usage: %s -i InElfFileName [-a APIFileName] [-o OutElfFileName] [-h] [-r] [-p Prefix] [-e] [-v]\n", ExecName);
	printf("\t%20s: ELF input file name.\n", "-i InElfFileName");
	printf("\t%20s: Optional API file name, list of function and symbol names expected to be globally visible.\n", "-a APIFileName");
	printf("\t%20s: Optional ELF output file name, if not given input ELF is updated.\n", "-o OutElfFileName");
	printf("\t%20s: Turn all GLOBAL symbols not in API list to LOCAL.\n", "-h");
	printf("\t%20s: Rename all LOCAL symbols.\n", "-r");
	printf("\t%20s: Use this prefix to rename locals.\n", "-p Prefix");
	printf("\t%20s: Turn all occurences of __func__ to ____ instead of function name.\n", "-f");
	printf("\t%20s: Dump ELF informations before visibility update and after if APIFileName is present.\n", "-e");
	printf("\t%20s: Verbose mode, update are reported.\n", "-v");
}

static int ParseOptions(int argc, char **argv, Config_T *Opt)

{
	int O;

	Opt->InFileName = 0;
	Opt->APIFileName = 0;
	Opt->OutFileName = 0;
	Opt->API = 0;
	Opt->ElfInfos = 0;
	Opt->Verbose = 0;
	Opt->HideNonAPI = 0;
	Opt->RenameLocals = 0;
	Opt->RenameFunc = 0;
	Opt->Prefix = "_X";

	while ((O = getopt(argc, argv, ":i:a:eo:vhrp:f")) != -1) {
		switch (O) {
			case 'i':
				Opt->InFileName = optarg;
				break;
			case 'a':
				Opt->APIFileName = optarg;
				Opt->API = ParseAPI(optarg);
				break;
			case 'e':
				Opt->ElfInfos = 1;
				break;
			case 'o':
				Opt->OutFileName = optarg;
				break;
			case 'h':
				Opt->HideNonAPI = 1;
				break;
			case 'r':
				Opt->RenameLocals = 1;
				break;
			case 'p':
				Opt->Prefix = optarg;
				break;
			case 'f':
				Opt->RenameFunc = 1;
				break;
			case 'v':
				Opt->Verbose = 1;
				break;
			default:
				fprintf(stderr, "Usage: %s InElfFileName -a APIFileName -o OutElfFileName -r -p Prefix -f -e -v\n", argv[0]);
				return 0;
		}
	}
	if (optind < argc) {
		if (((argc - optind) == 1) && (Opt->InFileName == 0)) {
			Opt->InFileName = argv[optind];
		} else {
			printf("Unprocessed options: ");
			while (optind < argc) printf("%s ", argv[optind++]);
			printf("\n");
			Usage(argv[0]);
		}
	}

	return 1;
}

int main (int argc, char ** argv)

{
	Elf *E = 0;
	int Fd = 0;
	int Changed = 0;

	if (ParseOptions(argc, argv, &Config)==0) exit(EXIT_FAILURE);
	if (Config.Verbose) ReportOptions(&Config);
	if (Config.InFileName) {
		char *FileName;
		if (Config.OutFileName) {
			if (CopyFile(Config.InFileName, Config.OutFileName)) exit(EXIT_FAILURE);
			FileName = Config.OutFileName;
		} else FileName = Config.InFileName;
		E = Init(FileName, &Fd);

		if (Config.ElfInfos) ElfInfos(FileName, E, Config.API, "Initial ELF state");
		if (Config.API && Config.HideNonAPI) Changed += SetSymbolVisibility(E, Config.API);
		if (Config.RenameLocals) Changed += ObfuscateLocals(E);
		if (Config.RenameFunc) Changed += Obfuscate__func__(E);
		if (Config.ElfInfos && Changed) ElfInfos(FileName, E, Config.API, "Final ELF state");
	}
	exit(EXIT_SUCCESS);
}
