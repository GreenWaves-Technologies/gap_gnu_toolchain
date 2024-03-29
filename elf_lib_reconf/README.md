This ELF utility is meant to prepare a SW library (a group of obj files) for external distribution limiting the visibilty of the internals in 2 ways:

-1- Turning every symbols being a function or a variable not part of a user provided API list into locals. In this way at link time any attempt to
use symbols outside the API will generate an error
-2- Obfuscating all the local symbols, including the one that have turned local by the API filter. Original names are replaced by a prefix to which is appended
an index. This is allowing relevant naming of functions and variables at dev time while at external usage time these names are replaced by meaning less ones.

As a preliminary step before applying these transformations all obj files of a library must be grouped into a single one using partial link (gcc ld with -r option).


1) Install libelf:
	sudo apt-get install libelf-dev

2) Build App:
	gcc SetAPIVisibility.c -lelf -o SetAPI

3) Usage: ./SetApi InElfFileName [-a APIFileName] [-o OutElfFileName] [-r] [-p PrefixName] [-h] [-v] [-e]

	InElfFileName		A single ELF file likely obtained as a result of partial link (gcc -r option). It must contain a single .symtab section and aa single .strtab section.
	-a APIFileName		A text file containing the list of symbols (C functions and/or variables) from InElfFileName that should be visible to the
				outside world. All API symbols are assumed to be globals. All global symbols in InElfFileName not in APIFileName are turned
				to local.  C style comments are ok in this API file.
	-o OutElfFileName	An optional ELF output file name. If not present InElfFileName is used as an output ELF file.
	-h			Turn all GLOBAL and defined symbols not in API list to LOCAL. Symbol table is reorganized and changes are propagated to reloc sections.
	-r 			Rename all LOCAL symbols, applied after API changes.
	-p PrefixName		Use PrefixName to replace all local symbols, new name is PrefixName<int> where <int> goes from 1 to last renamed symbols.
				Default is PrefixName = "_X"
	-f			Turn all function names associated to C preprocessor __func__ directive to all _ .
	-e			If present an ELF dump info is performed before and after API changes have been performed.
	-v			Verbose mode.

4) Example:

	A library built from Lib_F0.c and Lib_F1.c

	Lib_F0.c:
		extern int MyVar;
		extern int MyGlobal;
		void LibF0()
		{
			MyVar = 1;
			MyGlobal = 2;
		}

	Lib_F1.c:
		extern void LibF0();
		int MyVar = 0;
		void LibF2()
		{
		}

		void LibF1()
		{
			LibF0();
			LibF2();
		}

	User App:
	Main.c
		extern void LibF1();
		extern void LibF2();
		extern int MyVar;
		int MyGlobal;

		void Foo3()
		{
			MyVar = 2;
		}
	
		int main()
		{
			LibF1();
			LibF2();
			Foo3();
		}

	4.1) Building MyLib.o and MyApp without visibility filters

		Compile: 	riscv32-unknown-elf-gcc -mchip=gap9 -c Lib_F0.c Lib_F1.c
		Partial Link:	riscv32-unknown-elf-ld -r Lib_F0.o Lib_F1.o -o MyLib.o
		Final Link:	riscv32-unknown-elf-gcc -mchip=gap9 Main.c MyLib.o -o MyApp

		Link is ok

	4.2) Building MyLib.o and MyApp with a visibility filter

		API text file:
			/* API of MyLib, only LibF1 should be visible
 			LibF0, LibF2 and MyVar should become private */

			LibF1


		Compile: 	riscv32-unknown-elf-gcc -mchip=gap9 -c Lib_F0.c Lib_F1.c
		Partial Link:	riscv32-unknown-elf-ld -r Lib_F0.o Lib_F1.o -o MyLib.o
		Apply API:	./SetAPI MyLib.o -a Api.txt -h -v -o MyLib1.o
					Turning FUNC LibF2 to LOCAL.
					Turning OBJECT MyVar to LOCAL.
					Turning FUNC LibF0 to LOCAL.
		Final Link:	riscv32-unknown-elf-gcc -mchip=gap9 Main.c MyLib1.o -o MyApp
					/tmp/cc0jiVJV.o: In function `Foo3':
					Main.c:(.text+0x6): undefined reference to `MyVar'
					Main.c:(.text+0xc): undefined reference to `MyVar'
					/tmp/cc0jiVJV.o: In function `main':
					Main.c:(.text+0x22): undefined reference to `LibF2'
					collect2: error: ld returned 1 exit status

		Link fails as expected

		If Main.c is changed to:
			extern void LibF1();
			extern void LibF2();
			extern int MyVar;
			int MyGlobal;

			void Foo3()
			{
				// MyVar = 2;
			}
			
			int main()
			{
				LibF1();
				// LibF2();
				Foo3();
			}

		and compiled: riscv32-unknown-elf-gcc -mchip=gap9 Main.c MyLib1.o -o MyApp
	
		Link is ok



Symbol table from MyLib.o:

Symbol table '.symtab' contains 19 entries:
   Num:    Value  Size Type    Bind   Vis      Ndx Name
     0: 00000000     0 NOTYPE  LOCAL  DEFAULT  UND 
     1: 00000000     0 SECTION LOCAL  DEFAULT    1 
     2: 00000000     0 SECTION LOCAL  DEFAULT    3 
     3: 00000000     0 SECTION LOCAL  DEFAULT    4 
     4: 00000000     0 SECTION LOCAL  DEFAULT    5 
     5: 00000000     0 SECTION LOCAL  DEFAULT    6 
     6: 00000000     0 SECTION LOCAL  DEFAULT    7 
     7: 00000000     0 FILE    LOCAL  DEFAULT  ABS Lib_F0.c
     8: 00000000     0 FILE    LOCAL  DEFAULT  ABS Lib_F1.c
     9: ffffffff     0 NOTYPE  GLOBAL DEFAULT  ABS pulp__L2
    10: ffffffff     0 NOTYPE  GLOBAL DEFAULT  ABS pulp__PE
    11: 00000022    14 FUNC    GLOBAL DEFAULT    1 LibF2
    12: 00000000     4 OBJECT  GLOBAL DEFAULT    4 MyVar
    13: 00000030    34 FUNC    GLOBAL DEFAULT    1 LibF1
    14: 00000000     0 NOTYPE  GLOBAL DEFAULT  UND MyGlobal
    15: 00000000    34 FUNC    GLOBAL DEFAULT    1 LibF0
    16: ffffffff     0 NOTYPE  GLOBAL DEFAULT  ABS pulp__FC
    17: ffffffff     0 NOTYPE  GLOBAL DEFAULT  ABS pulp__L1CL
    18: ffffffff     0 NOTYPE  GLOBAL DEFAULT  ABS pulp__L1FC

Symbol table from MyLib1.o:
Symbol table '.symtab' contains 19 entries:
   Num:    Value  Size Type    Bind   Vis      Ndx Name
     0: 00000000     0 NOTYPE  LOCAL  DEFAULT  UND 
     1: 00000000     0 SECTION LOCAL  DEFAULT    1 
     2: 00000000     0 SECTION LOCAL  DEFAULT    3 
     3: 00000000     0 SECTION LOCAL  DEFAULT    4 
     4: 00000000     0 SECTION LOCAL  DEFAULT    5 
     5: 00000000     0 SECTION LOCAL  DEFAULT    6 
     6: 00000000     0 SECTION LOCAL  DEFAULT    7 
     7: 00000000     0 FILE    LOCAL  DEFAULT  ABS Lib_F0.c
     8: 00000000     0 FILE    LOCAL  DEFAULT  ABS Lib_F1.c
     9: 00000022    14 FUNC    LOCAL  DEFAULT    1 LibF2
    10: 00000000     4 OBJECT  LOCAL  DEFAULT    4 MyVar
    11: 00000000    34 FUNC    LOCAL  DEFAULT    1 LibF0
    12: ffffffff     0 NOTYPE  GLOBAL DEFAULT  ABS pulp__L2
    13: ffffffff     0 NOTYPE  GLOBAL DEFAULT  ABS pulp__PE
    14: 00000030    34 FUNC    GLOBAL DEFAULT    1 LibF1
    15: 00000000     0 NOTYPE  GLOBAL DEFAULT  UND MyGlobal
    16: ffffffff     0 NOTYPE  GLOBAL DEFAULT  ABS pulp__FC
    17: ffffffff     0 NOTYPE  GLOBAL DEFAULT  ABS pulp__L1CL
    18: ffffffff     0 NOTYPE  GLOBAL DEFAULT  ABS pulp__L1FC

LibF2, LibF0 and MyVar are now LOCAL


If now one wants to obfuscate local symbols from MyLib.o:


		Apply API:	./SetAPI MyLib.o -a Api.txt -h -v -r -o MyLib1.o
					Turning FUNC LibF2 to LOCAL.
					Turning OBJECT MyVar to LOCAL.
					Turning FUNC LibF0 to LOCAL.

Symbol table from MyLib1.o:
Symbol table '.symtab' contains 19 entries:
   Num:    Value  Size Type    Bind   Vis      Ndx Name
     0: 00000000     0 NOTYPE  LOCAL  DEFAULT  UND 
     1: 00000000     0 SECTION LOCAL  DEFAULT    1 
     2: 00000000     0 SECTION LOCAL  DEFAULT    3 
     3: 00000000     0 SECTION LOCAL  DEFAULT    4 
     4: 00000000     0 SECTION LOCAL  DEFAULT    5 
     5: 00000000     0 SECTION LOCAL  DEFAULT    6 
     6: 00000000     0 SECTION LOCAL  DEFAULT    7 
     7: 00000000     0 FILE    LOCAL  DEFAULT  ABS Lib_F0.c
     8: 00000000     0 FILE    LOCAL  DEFAULT  ABS Lib_F1.c
     9: 00000022    14 FUNC    LOCAL  DEFAULT    1 _X1
    10: 00000000     4 OBJECT  LOCAL  DEFAULT    4 _X2
    11: 00000000    34 FUNC    LOCAL  DEFAULT    1 _X3
    12: ffffffff     0 NOTYPE  GLOBAL DEFAULT  ABS pulp__L2
    13: ffffffff     0 NOTYPE  GLOBAL DEFAULT  ABS pulp__PE
    14: 00000030    34 FUNC    GLOBAL DEFAULT    1 LibF1
    15: 00000000     0 NOTYPE  GLOBAL DEFAULT  UND MyGlobal
    16: ffffffff     0 NOTYPE  GLOBAL DEFAULT  ABS pulp__FC
    17: ffffffff     0 NOTYPE  GLOBAL DEFAULT  ABS pulp__L1CL
    18: ffffffff     0 NOTYPE  GLOBAL DEFAULT  ABS pulp__L1FC


LibF2, LibF0 and MyVar are now LOCAL and renamed to _X1 _X2 and _X3
