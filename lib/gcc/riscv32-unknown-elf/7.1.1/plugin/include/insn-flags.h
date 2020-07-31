/* Generated automatically by the program `genflags'
   from the machine description file `md'.  */

#ifndef GCC_INSN_FLAGS_H
#define GCC_INSN_FLAGS_H

#define HAVE_addsf3 (TARGET_HARD_FLOAT)
#define HAVE_adddf3 ((TARGET_HARD_FLOAT) && (TARGET_DOUBLE_FLOAT))
#define HAVE_addhf3 ((TARGET_HARD_FLOAT) && ((TARGET_HARD_FLOAT&&Has_F16)))
#define HAVE_addohf3 ((TARGET_HARD_FLOAT) && ((TARGET_HARD_FLOAT&&Has_F16ALT)))
#define HAVE_addsi3 1
#define HAVE_adddi3 ((!TARGET_64BIT&&Has_64Int))
#define HAVE_subsf3 (TARGET_HARD_FLOAT)
#define HAVE_subdf3 ((TARGET_HARD_FLOAT) && (TARGET_DOUBLE_FLOAT))
#define HAVE_subhf3 ((TARGET_HARD_FLOAT) && ((TARGET_HARD_FLOAT&&Has_F16)))
#define HAVE_subohf3 ((TARGET_HARD_FLOAT) && ((TARGET_HARD_FLOAT&&Has_F16ALT)))
#define HAVE_subdi3 ((TARGET_64BIT||Has_64Int))
#define HAVE_subsi3 1
#define HAVE_mulsf3 (TARGET_HARD_FLOAT)
#define HAVE_muldf3 ((TARGET_HARD_FLOAT) && (TARGET_DOUBLE_FLOAT))
#define HAVE_mulhf3 ((TARGET_HARD_FLOAT) && ((TARGET_HARD_FLOAT&&Has_F16)))
#define HAVE_mulohf3 ((TARGET_HARD_FLOAT) && ((TARGET_HARD_FLOAT&&Has_F16ALT)))
#define HAVE_mulsi3 ((Pulp_Cpu>=PULP_V0) || TARGET_MUL || (Pulp_Cpu==PULP_SLIM))
#define HAVE_muldi3 (TARGET_MUL && TARGET_64BIT)
#define HAVE_muldi3_highpart (TARGET_MUL && TARGET_64BIT)
#define HAVE_umuldi3_highpart (TARGET_MUL && TARGET_64BIT)
#define HAVE_usmuldi3_highpart (TARGET_MUL && TARGET_64BIT)
#define HAVE_mulsi3_highpart ((TARGET_MUL||(Pulp_Cpu>=PULP_V2)||(Pulp_Cpu==PULP_SLIM)) && !TARGET_64BIT)
#define HAVE_umulsi3_highpart ((TARGET_MUL||(Pulp_Cpu>=PULP_V2)||(Pulp_Cpu==PULP_SLIM)) && !TARGET_64BIT)
#define HAVE_usmulsi3_highpart ((TARGET_MUL||(Pulp_Cpu>=PULP_V2)||(Pulp_Cpu==PULP_SLIM)) && !TARGET_64BIT)
#define HAVE_mulsi3_64extended ((Pulp_Cpu==PULP_GAP9) && Has_64Int)
#define HAVE_mulsi3_u64extended ((Pulp_Cpu==PULP_GAP9) && Has_64Int)
#define HAVE_divsi3 ((TARGET_DIV || ((Pulp_Cpu >= PULP_V2)||(Pulp_Cpu==PULP_SLIM))))
#define HAVE_udivsi3 ((TARGET_DIV || ((Pulp_Cpu >= PULP_V2)||(Pulp_Cpu==PULP_SLIM))))
#define HAVE_modsi3 ((TARGET_DIV || ((Pulp_Cpu >= PULP_V2)||(Pulp_Cpu==PULP_SLIM))))
#define HAVE_umodsi3 ((TARGET_DIV || ((Pulp_Cpu >= PULP_V2)||(Pulp_Cpu==PULP_SLIM))))
#define HAVE_divdi3 (TARGET_DIV && TARGET_64BIT)
#define HAVE_udivdi3 (TARGET_DIV && TARGET_64BIT)
#define HAVE_moddi3 (TARGET_DIV && TARGET_64BIT)
#define HAVE_umoddi3 (TARGET_DIV && TARGET_64BIT)
#define HAVE_divsf3 ((TARGET_HARD_FLOAT && TARGET_FDIV) && (TARGET_HARD_FLOAT))
#define HAVE_divdf3 ((TARGET_HARD_FLOAT && TARGET_FDIV) && (TARGET_DOUBLE_FLOAT))
#define HAVE_divhf3 ((TARGET_HARD_FLOAT && TARGET_FDIV) && ((TARGET_HARD_FLOAT&&Has_F16)))
#define HAVE_divohf3 ((TARGET_HARD_FLOAT && TARGET_FDIV) && ((TARGET_HARD_FLOAT&&Has_F16ALT)))
#define HAVE_sqrtsf2 ((TARGET_HARD_FLOAT && TARGET_FDIV) && (TARGET_HARD_FLOAT))
#define HAVE_sqrtdf2 ((TARGET_HARD_FLOAT && TARGET_FDIV) && (TARGET_DOUBLE_FLOAT))
#define HAVE_sqrthf2 ((TARGET_HARD_FLOAT && TARGET_FDIV) && ((TARGET_HARD_FLOAT&&Has_F16)))
#define HAVE_sqrtohf2 ((TARGET_HARD_FLOAT && TARGET_FDIV) && ((TARGET_HARD_FLOAT&&Has_F16ALT)))
#define HAVE_fmasf4 (TARGET_HARD_FLOAT)
#define HAVE_fmadf4 ((TARGET_HARD_FLOAT) && (TARGET_DOUBLE_FLOAT))
#define HAVE_fmahf4 ((TARGET_HARD_FLOAT) && ((TARGET_HARD_FLOAT&&Has_F16)))
#define HAVE_fmaohf4 ((TARGET_HARD_FLOAT) && ((TARGET_HARD_FLOAT&&Has_F16ALT)))
#define HAVE_fmssf4 (TARGET_HARD_FLOAT)
#define HAVE_fmsdf4 ((TARGET_HARD_FLOAT) && (TARGET_DOUBLE_FLOAT))
#define HAVE_fmshf4 ((TARGET_HARD_FLOAT) && ((TARGET_HARD_FLOAT&&Has_F16)))
#define HAVE_fmsohf4 ((TARGET_HARD_FLOAT) && ((TARGET_HARD_FLOAT&&Has_F16ALT)))
#define HAVE_fnmssf4 (TARGET_HARD_FLOAT)
#define HAVE_fnmsdf4 ((TARGET_HARD_FLOAT) && (TARGET_DOUBLE_FLOAT))
#define HAVE_fnmshf4 ((TARGET_HARD_FLOAT) && ((TARGET_HARD_FLOAT&&Has_F16)))
#define HAVE_fnmsohf4 ((TARGET_HARD_FLOAT) && ((TARGET_HARD_FLOAT&&Has_F16ALT)))
#define HAVE_fnmasf4 (TARGET_HARD_FLOAT)
#define HAVE_fnmadf4 ((TARGET_HARD_FLOAT) && (TARGET_DOUBLE_FLOAT))
#define HAVE_fnmahf4 ((TARGET_HARD_FLOAT) && ((TARGET_HARD_FLOAT&&Has_F16)))
#define HAVE_fnmaohf4 ((TARGET_HARD_FLOAT) && ((TARGET_HARD_FLOAT&&Has_F16ALT)))
#define HAVE_mulohfsf3 ((TARGET_HARD_FLOAT && Has_FAUX && (OHFmode == OHFmode && Has_F16ALT)) && ((TARGET_HARD_FLOAT&&Has_F16ALT)))
#define HAVE_maddohfsf3_internal ((TARGET_HARD_FLOAT && Has_FAUX && (OHFmode == OHFmode && Has_F16ALT)) && ((TARGET_HARD_FLOAT&&Has_F16ALT)))
#define HAVE_abssf2 (TARGET_HARD_FLOAT)
#define HAVE_absdf2 ((TARGET_HARD_FLOAT) && (TARGET_DOUBLE_FLOAT))
#define HAVE_abshf2 ((TARGET_HARD_FLOAT) && ((TARGET_HARD_FLOAT&&Has_F16)))
#define HAVE_absohf2 ((TARGET_HARD_FLOAT) && ((TARGET_HARD_FLOAT&&Has_F16ALT)))
#define HAVE_abssi2 ((Pulp_Cpu>=PULP_V0))
#define HAVE_absdi2 (((Pulp_Cpu==PULP_GAP9) && Has_64Int))
#define HAVE_copysignsf3 (TARGET_HARD_FLOAT)
#define HAVE_copysigndf3 ((TARGET_HARD_FLOAT) && (TARGET_DOUBLE_FLOAT))
#define HAVE_copysignhf3 ((TARGET_HARD_FLOAT) && ((TARGET_HARD_FLOAT&&Has_F16)))
#define HAVE_copysignohf3 ((TARGET_HARD_FLOAT) && ((TARGET_HARD_FLOAT&&Has_F16ALT)))
#define HAVE_negsf2 (TARGET_HARD_FLOAT)
#define HAVE_negdf2 ((TARGET_HARD_FLOAT) && (TARGET_DOUBLE_FLOAT))
#define HAVE_neghf2 ((TARGET_HARD_FLOAT) && ((TARGET_HARD_FLOAT&&Has_F16)))
#define HAVE_negohf2 ((TARGET_HARD_FLOAT) && ((TARGET_HARD_FLOAT&&Has_F16ALT)))
#define HAVE_sminsf3 (TARGET_HARD_FLOAT)
#define HAVE_smindf3 ((TARGET_HARD_FLOAT) && (TARGET_DOUBLE_FLOAT))
#define HAVE_sminhf3 ((TARGET_HARD_FLOAT) && ((TARGET_HARD_FLOAT&&Has_F16)))
#define HAVE_sminohf3 ((TARGET_HARD_FLOAT) && ((TARGET_HARD_FLOAT&&Has_F16ALT)))
#define HAVE_smaxsf3 (TARGET_HARD_FLOAT)
#define HAVE_smaxdf3 ((TARGET_HARD_FLOAT) && (TARGET_DOUBLE_FLOAT))
#define HAVE_smaxhf3 ((TARGET_HARD_FLOAT) && ((TARGET_HARD_FLOAT&&Has_F16)))
#define HAVE_smaxohf3 ((TARGET_HARD_FLOAT) && ((TARGET_HARD_FLOAT&&Has_F16ALT)))
#define HAVE_sminsi3 (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOMINMAX))
#define HAVE_smindi3 (((Pulp_Cpu==PULP_GAP9) && !TARGET_MASK_NOMINMAX && Has_64Int))
#define HAVE_smaxsi3 (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOMINMAX))
#define HAVE_smaxdi3 (((Pulp_Cpu==PULP_GAP9) && !TARGET_MASK_NOMINMAX && Has_64Int))
#define HAVE_uminsi3 (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOMINMAX))
#define HAVE_umindi3 (((Pulp_Cpu==PULP_GAP9) && !TARGET_MASK_NOMINMAX && Has_64Int))
#define HAVE_umaxsi3 (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOMINMAX))
#define HAVE_umaxdi3 (((Pulp_Cpu==PULP_GAP9) && !TARGET_MASK_NOMINMAX && Has_64Int))
#define HAVE_avgsi3 (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOMINMAX))
#define HAVE_avgusi3 (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOMINMAX))
#define HAVE_popcountsi2 (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOBITOP))
#define HAVE_popcountdi2 (((Pulp_Cpu==PULP_GAP9) && Has_64Int && !TARGET_MASK_NOBITOP))
#define HAVE_clrsbsi2 (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOBITOP))
#define HAVE_fl1si2 (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOBITOP))
#define HAVE_ctzsi2 (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOBITOP))
#define HAVE_rotrsi3 (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOBITOP))
#define HAVE_truncsihi2 1
#define HAVE_truncsiqi2 1
#define HAVE_mulhisi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOMAC))
#define HAVE_umulhisi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOMAC))
#define HAVE_mulsForced_si3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOMAC))
#define HAVE_muluForced_si3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOMAC))
#define HAVE_smulhi3_highpart (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOMAC))
#define HAVE_umulhi3_highpart (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOMAC))
#define HAVE_mulhhs_si3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOMAC))
#define HAVE_mulhhu_si3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOMAC))
#define HAVE_mulsNr_si3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOMULMACNORMROUND && riscv_valid_norm_round_imm_op(operands[3], NULL, 31)))
#define HAVE_mulsRNr_si3 ((!TARGET_MASK_NOMULMACNORMROUND && riscv_valid_norm_round_imm_op(operands[3], operands[4], 31)))
#define HAVE_mulsRNr_hi3 ((!TARGET_MASK_NOMULMACNORMROUND && riscv_valid_norm_round_imm_op(operands[3], operands[4], 15)))
#define HAVE_muluNr_si3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOMULMACNORMROUND && riscv_valid_norm_round_imm_op(operands[3], NULL, 31)))
#define HAVE_muluRNr_si3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOMULMACNORMROUND && riscv_valid_norm_round_imm_op(operands[3], operands[4], 31)))
#define HAVE_mulsForcedNr_si3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOMULMACNORMROUND && riscv_valid_norm_round_imm_op(operands[3], NULL, 31)))
#define HAVE_mulsForcedRNr_si3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOMULMACNORMROUND && riscv_valid_norm_round_imm_op(operands[3], NULL, 31)))
#define HAVE_muluForcedNr_si3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOMULMACNORMROUND && riscv_valid_norm_round_imm_op(operands[3], NULL, 31)))
#define HAVE_muluForcedRNr_si3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOMULMACNORMROUND && riscv_valid_norm_round_imm_op(operands[3], NULL, 31)))
#define HAVE_mulhhsNr_si3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOMULMACNORMROUND && riscv_valid_norm_round_imm_op(operands[3], NULL, 31)))
#define HAVE_mulhhuNr_si3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOMULMACNORMROUND && riscv_valid_norm_round_imm_op(operands[3], NULL, 31)))
#define HAVE_mulhhsRNr_si3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOMULMACNORMROUND && riscv_valid_norm_round_imm_op(operands[3], operands[4], 31)))
#define HAVE_mulhhuRNr_si3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOMULMACNORMROUND && riscv_valid_norm_round_imm_op(operands[3], operands[4], 31)))
#define HAVE_macshi_si4 (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPARTMAC))
#define HAVE_macuhi_si4 (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPARTMAC))
#define HAVE_macsForced_si3 (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOMAC))
#define HAVE_macuForced_si3 (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOMAC))
#define HAVE_machlsu_si4 (((Pulp_Cpu==PULP_V0) && !TARGET_MASK_NOPARTMAC))
#define HAVE_machlu_si4 (((Pulp_Cpu==PULP_V0) && !TARGET_MASK_NOPARTMAC))
#define HAVE_machhs_si4 (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPARTMAC))
#define HAVE_machhu_si4 (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPARTMAC))
#define HAVE_machls_si4 (((Pulp_Cpu==PULP_V0) && !TARGET_MASK_NOPARTMAC))
#define HAVE_macsNr_si3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOMULMACNORMROUND && riscv_valid_norm_round_imm_op(operands[4], NULL, 31)))
#define HAVE_macuNr_si3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOMULMACNORMROUND && riscv_valid_norm_round_imm_op(operands[4], NULL, 31)))
#define HAVE_macsForcedNr_si3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOMULMACNORMROUND && riscv_valid_norm_round_imm_op(operands[4], NULL, 31)))
#define HAVE_macsForcedRNr_si3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOMULMACNORMROUND && riscv_valid_norm_round_imm_op(operands[4], operands[5], 31)))
#define HAVE_macuForcedNr_si3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOMULMACNORMROUND && riscv_valid_norm_round_imm_op(operands[4], NULL, 31)))
#define HAVE_macuForcedRNr_si3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOMULMACNORMROUND && riscv_valid_norm_round_imm_op(operands[4], operands[5], 31)))
#define HAVE_macsRNr_si3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOMULMACNORMROUND && riscv_valid_norm_round_imm_op(operands[4], operands[5], 31)))
#define HAVE_macuRNr_si3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOMULMACNORMROUND && riscv_valid_norm_round_imm_op(operands[4], operands[5], 31)))
#define HAVE_machhsNr_si3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOMULMACNORMROUND && riscv_valid_norm_round_imm_op(operands[4], NULL, 31)))
#define HAVE_machhuNr_si3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOMULMACNORMROUND && riscv_valid_norm_round_imm_op(operands[4], NULL, 31)))
#define HAVE_machhsRNr_si3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOMULMACNORMROUND && riscv_valid_norm_round_imm_op(operands[4], operands[5], 31)))
#define HAVE_machhuRNr_si3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOMULMACNORMROUND && riscv_valid_norm_round_imm_op(operands[4], operands[5], 31)))
#define HAVE_maddsisi4 (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOMAC))
#define HAVE_msubsisi4 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOMAC))
#define HAVE_madddisisi4 (((Pulp_Cpu==PULP_GAP9) && !TARGET_MASK_NOMAC && Has_64Int))
#define HAVE_msubdisisi4 (((Pulp_Cpu==PULP_GAP9) && !TARGET_MASK_NOMAC && Has_64Int))
#define HAVE_madddiusiusi4 (((Pulp_Cpu==PULP_GAP9) && !TARGET_MASK_NOMAC && Has_64Int))
#define HAVE_msubdiusiusi4 (((Pulp_Cpu==PULP_GAP9) && !TARGET_MASK_NOMAC && Has_64Int))
#define HAVE_addN_si3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOADDSUBNORMROUND && riscv_valid_norm_round_imm_op(operands[3], NULL, 31)))
#define HAVE_addNu_si3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOADDSUBNORMROUND && riscv_valid_norm_round_imm_op(operands[3], NULL, 31)))
#define HAVE_addN_reg_si3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOADDSUBNORMROUND))
#define HAVE_addNu_reg_si3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOADDSUBNORMROUND))
#define HAVE_subN_si3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOADDSUBNORMROUND && riscv_valid_norm_round_imm_op(operands[3], NULL, 31)))
#define HAVE_subNu_si3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOADDSUBNORMROUND && riscv_valid_norm_round_imm_op(operands[3], NULL, 31)))
#define HAVE_subN_reg_si3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOADDSUBNORMROUND))
#define HAVE_subNu_reg_si3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOADDSUBNORMROUND))
#define HAVE_addRN_si3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOADDSUBNORMROUND && riscv_valid_norm_round_imm_op(operands[3], operands[4], 31)))
#define HAVE_addRNu_si3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOADDSUBNORMROUND && riscv_valid_norm_round_imm_op(operands[3], operands[4], 31)))
#define HAVE_addRN_reg_si3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOADDSUBNORMROUND))
#define HAVE_addRNu_reg_si3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOADDSUBNORMROUND))
#define HAVE_subRN_si3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOADDSUBNORMROUND && riscv_valid_norm_round_imm_op(operands[3], operands[4], 31)))
#define HAVE_subRNu_si3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOADDSUBNORMROUND && riscv_valid_norm_round_imm_op(operands[3], operands[4], 31)))
#define HAVE_subRN_reg_si3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOADDSUBNORMROUND))
#define HAVE_subRNu_reg_si3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOADDSUBNORMROUND))
#define HAVE_clip_maxmin ((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOCLIP && riscv_valid_clip_operands (operands[2], operands[3], 1))
#define HAVE_clip_minmax ((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOCLIP && riscv_valid_clip_operands (operands[3], operands[2], 1))
#define HAVE_clip_minmax_reg ((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOCLIP)
#define HAVE_clip_maxmin_reg ((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOCLIP)
#define HAVE_clipu_maxmin ((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOCLIP && riscv_valid_clip_operands (operands[2], operands[3], 0))
#define HAVE_clipu_minmax ((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOCLIP && riscv_valid_clip_operands (operands[3], operands[2], 0))
#define HAVE_clipu_maxmin_reg ((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOCLIP)
#define HAVE_clipu_minmax_reg ((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOCLIP)
#define HAVE_bclrsi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOBITOP && riscv_valid_bit_field_imm_operand(operands[2], NULL, 0, NULL, NULL)))
#define HAVE_bclrsi3_reg (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOBITOP))
#define HAVE_bsetsi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOBITOP && riscv_valid_bit_field_imm_operand(operands[2], NULL, 1, NULL, NULL)))
#define HAVE_bsetsi3_reg (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOBITOP))
#define HAVE_extvsi (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOBITOP))
#define HAVE_bextracts_reg_si3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOBITOP))
#define HAVE_bextracts_reg_alt_si3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOBITOP))
#define HAVE_bextractu_reg_alt_si3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOBITOP))
#define HAVE_extzvsi (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOBITOP))
#define HAVE_bextractu_reg_si3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOBITOP))
#define HAVE_insvsi (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOBITOP))
#define HAVE_invsipat1 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOBITOP) \
   && riscv_bitmask (INTVAL (operands[4]), NULL, VOIDmode) == INTVAL (operands[5]) \
   && INTVAL(operands[2]) == ~INTVAL(operands[4]))
#define HAVE_binsert_reg_si3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOBITOP))
#define HAVE_andsi3 (!TARGET_64BIT)
#define HAVE_iorsi3 (!TARGET_64BIT)
#define HAVE_xorsi3 (!TARGET_64BIT)
#define HAVE_anddi3 (TARGET_64BIT)
#define HAVE_iordi3 (TARGET_64BIT)
#define HAVE_xordi3 (TARGET_64BIT)
#define HAVE_and_di3 (Has_64Int&&!TARGET_64BIT)
#define HAVE_ior_di3 (Has_64Int&&!TARGET_64BIT)
#define HAVE_xor_di3 (Has_64Int&&!TARGET_64BIT)
#define HAVE_one_cmplsi2 (!TARGET_64BIT)
#define HAVE_one_cmpldi2 (TARGET_64BIT)
#define HAVE_truncdfsf2 (TARGET_DOUBLE_FLOAT)
#define HAVE_truncdfhf2 (TARGET_DOUBLE_FLOAT && Has_F16)
#define HAVE_truncdfohf2 (TARGET_DOUBLE_FLOAT && Has_F16ALT)
#define HAVE_truncsfhf2 (TARGET_HARD_FLOAT && Has_F16)
#define HAVE_truncsfohf2 (TARGET_HARD_FLOAT && Has_F16ALT)
#define HAVE_zero_extendsidi2 (TARGET_64BIT)
#define HAVE_zero_extendhisi2 1
#define HAVE_zero_extendhidi2 (TARGET_64BIT)
#define HAVE_zero_extendqihi2 1
#define HAVE_zero_extendqisi2 1
#define HAVE_zero_extendqidi2 (TARGET_64BIT)
#define HAVE_zero_extend_qidi2 (!TARGET_64BIT && Has_64Int)
#define HAVE_zero_extend_hidi2 (!TARGET_64BIT && Has_64Int)
#define HAVE_zero_extend_sidi2 (!TARGET_64BIT && Has_64Int)
#define HAVE_extendsidi2 (TARGET_64BIT)
#define HAVE_extendqihi2 1
#define HAVE_extendqisi2 1
#define HAVE_extendqidi2 (TARGET_64BIT)
#define HAVE_extendhihi2 1
#define HAVE_extendhisi2 1
#define HAVE_extendhidi2 (TARGET_64BIT)
#define HAVE_extendsfdf2 (TARGET_DOUBLE_FLOAT)
#define HAVE_extendhfsf2 (TARGET_HARD_FLOAT && Has_F16)
#define HAVE_extendohfsf2 (TARGET_HARD_FLOAT && Has_F16ALT)
#define HAVE_extendhfohf2 (TARGET_HARD_FLOAT && Has_F16 && Has_F16ALT)
#define HAVE_extendohfhf2 (TARGET_HARD_FLOAT && Has_F16 && Has_F16ALT)
#define HAVE_sign_extend_qidi2 (!TARGET_64BIT && Has_64Int)
#define HAVE_sign_extend_hidi2 (!TARGET_64BIT && Has_64Int)
#define HAVE_sign_extend_sidi2 (!TARGET_64BIT && Has_64Int)
#define HAVE_fix_truncsfsi2 (TARGET_HARD_FLOAT)
#define HAVE_fix_truncsfdi2 ((TARGET_HARD_FLOAT) && ((TARGET_64BIT) && (TARGET_HARD_FLOAT)))
#define HAVE_fix_truncdfsi2 ((TARGET_HARD_FLOAT) && (TARGET_DOUBLE_FLOAT))
#define HAVE_fix_truncdfdi2 ((TARGET_HARD_FLOAT) && ((TARGET_64BIT) && (TARGET_DOUBLE_FLOAT)))
#define HAVE_fixuns_truncsfsi2 (TARGET_HARD_FLOAT)
#define HAVE_fixuns_truncsfdi2 ((TARGET_HARD_FLOAT) && ((TARGET_64BIT) && (TARGET_HARD_FLOAT)))
#define HAVE_fixuns_truncdfsi2 ((TARGET_HARD_FLOAT) && (TARGET_DOUBLE_FLOAT))
#define HAVE_fixuns_truncdfdi2 ((TARGET_HARD_FLOAT) && ((TARGET_64BIT) && (TARGET_DOUBLE_FLOAT)))
#define HAVE_floatsisf2 (TARGET_HARD_FLOAT)
#define HAVE_floatdisf2 ((TARGET_HARD_FLOAT) && ((TARGET_HARD_FLOAT) && (TARGET_64BIT)))
#define HAVE_floatsidf2 ((TARGET_HARD_FLOAT) && (TARGET_DOUBLE_FLOAT))
#define HAVE_floatdidf2 ((TARGET_HARD_FLOAT) && ((TARGET_DOUBLE_FLOAT) && (TARGET_64BIT)))
#define HAVE_floatunssisf2 (TARGET_HARD_FLOAT)
#define HAVE_floatunsdisf2 ((TARGET_HARD_FLOAT) && ((TARGET_HARD_FLOAT) && (TARGET_64BIT)))
#define HAVE_floatunssidf2 ((TARGET_HARD_FLOAT) && (TARGET_DOUBLE_FLOAT))
#define HAVE_floatunsdidf2 ((TARGET_HARD_FLOAT) && ((TARGET_DOUBLE_FLOAT) && (TARGET_64BIT)))
#define HAVE_lrintsfsi2 (TARGET_HARD_FLOAT)
#define HAVE_lroundsfsi2 (TARGET_HARD_FLOAT)
#define HAVE_lrintsfdi2 ((TARGET_HARD_FLOAT) && ((TARGET_64BIT) && (TARGET_HARD_FLOAT)))
#define HAVE_lroundsfdi2 ((TARGET_HARD_FLOAT) && ((TARGET_64BIT) && (TARGET_HARD_FLOAT)))
#define HAVE_lrintdfsi2 ((TARGET_HARD_FLOAT) && (TARGET_DOUBLE_FLOAT))
#define HAVE_lrounddfsi2 ((TARGET_HARD_FLOAT) && (TARGET_DOUBLE_FLOAT))
#define HAVE_lrintdfdi2 ((TARGET_HARD_FLOAT) && ((TARGET_64BIT) && (TARGET_DOUBLE_FLOAT)))
#define HAVE_lrounddfdi2 ((TARGET_HARD_FLOAT) && ((TARGET_64BIT) && (TARGET_DOUBLE_FLOAT)))
#define HAVE_lrinthfsi2 ((TARGET_HARD_FLOAT) && ((TARGET_HARD_FLOAT&&Has_F16)))
#define HAVE_lroundhfsi2 ((TARGET_HARD_FLOAT) && ((TARGET_HARD_FLOAT&&Has_F16)))
#define HAVE_lrinthfdi2 ((TARGET_HARD_FLOAT) && ((TARGET_64BIT) && ((TARGET_HARD_FLOAT&&Has_F16))))
#define HAVE_lroundhfdi2 ((TARGET_HARD_FLOAT) && ((TARGET_64BIT) && ((TARGET_HARD_FLOAT&&Has_F16))))
#define HAVE_lrintohfsi2 ((TARGET_HARD_FLOAT) && ((TARGET_HARD_FLOAT&&Has_F16ALT)))
#define HAVE_lroundohfsi2 ((TARGET_HARD_FLOAT) && ((TARGET_HARD_FLOAT&&Has_F16ALT)))
#define HAVE_lrintohfdi2 ((TARGET_HARD_FLOAT) && ((TARGET_64BIT) && ((TARGET_HARD_FLOAT&&Has_F16ALT))))
#define HAVE_lroundohfdi2 ((TARGET_HARD_FLOAT) && ((TARGET_64BIT) && ((TARGET_HARD_FLOAT&&Has_F16ALT))))
#define HAVE_fix_truncohfsi2 (TARGET_HARD_FLOAT && Has_F16ALT)
#define HAVE_fix_truncohfdi2 ((TARGET_HARD_FLOAT && Has_F16ALT) && (TARGET_64BIT))
#define HAVE_fix_trunchfsi2 (TARGET_HARD_FLOAT && Has_F16)
#define HAVE_fix_trunchfdi2 ((TARGET_HARD_FLOAT && Has_F16) && (TARGET_64BIT))
#define HAVE_fixuns_truncohfsi2 (TARGET_HARD_FLOAT && Has_F16ALT)
#define HAVE_fixuns_truncohfdi2 ((TARGET_HARD_FLOAT && Has_F16ALT) && (TARGET_64BIT))
#define HAVE_fixuns_trunchfsi2 (TARGET_HARD_FLOAT && Has_F16)
#define HAVE_fixuns_trunchfdi2 ((TARGET_HARD_FLOAT && Has_F16) && (TARGET_64BIT))
#define HAVE_floatsihf2 ((TARGET_HARD_FLOAT && ((HFmode == HFmode && Has_F16) || (HFmode == OHFmode && Has_F16ALT))) && ((TARGET_HARD_FLOAT&&Has_F16)))
#define HAVE_floatdihf2 ((TARGET_HARD_FLOAT && ((HFmode == HFmode && Has_F16) || (HFmode == OHFmode && Has_F16ALT))) && (((TARGET_HARD_FLOAT&&Has_F16)) && (TARGET_64BIT)))
#define HAVE_floatsiohf2 ((TARGET_HARD_FLOAT && ((OHFmode == HFmode && Has_F16) || (OHFmode == OHFmode && Has_F16ALT))) && ((TARGET_HARD_FLOAT&&Has_F16ALT)))
#define HAVE_floatdiohf2 ((TARGET_HARD_FLOAT && ((OHFmode == HFmode && Has_F16) || (OHFmode == OHFmode && Has_F16ALT))) && (((TARGET_HARD_FLOAT&&Has_F16ALT)) && (TARGET_64BIT)))
#define HAVE_floatunssihf2 ((TARGET_HARD_FLOAT && ((HFmode == HFmode && Has_F16) || (HFmode == OHFmode && Has_F16ALT))) && ((TARGET_HARD_FLOAT&&Has_F16)))
#define HAVE_floatunsdihf2 ((TARGET_HARD_FLOAT && ((HFmode == HFmode && Has_F16) || (HFmode == OHFmode && Has_F16ALT))) && (((TARGET_HARD_FLOAT&&Has_F16)) && (TARGET_64BIT)))
#define HAVE_floatunssiohf2 ((TARGET_HARD_FLOAT && ((OHFmode == HFmode && Has_F16) || (OHFmode == OHFmode && Has_F16ALT))) && ((TARGET_HARD_FLOAT&&Has_F16ALT)))
#define HAVE_floatunsdiohf2 ((TARGET_HARD_FLOAT && ((OHFmode == HFmode && Has_F16) || (OHFmode == OHFmode && Has_F16ALT))) && (((TARGET_HARD_FLOAT&&Has_F16ALT)) && (TARGET_64BIT)))
#define HAVE_got_loadsi (Pmode == SImode)
#define HAVE_got_loaddi (Pmode == DImode)
#define HAVE_tls_add_tp_lesi (Pmode == SImode)
#define HAVE_tls_add_tp_ledi (Pmode == DImode)
#define HAVE_got_load_tls_gdsi (Pmode == SImode)
#define HAVE_got_load_tls_gddi (Pmode == DImode)
#define HAVE_got_load_tls_iesi (Pmode == SImode)
#define HAVE_got_load_tls_iedi (Pmode == DImode)
#define HAVE_auipcsi (Pmode == SImode)
#define HAVE_auipcdi (Pmode == DImode)
#define HAVE_loadqi_ind_reg_reg (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOINDREGREG && ((reload_completed || reload_in_progress) || !(QImode == QImode || QImode == HImode))))
#define HAVE_loadhi_ind_reg_reg (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOINDREGREG && ((reload_completed || reload_in_progress) || !(HImode == QImode || HImode == HImode))))
#define HAVE_loadhf_ind_reg_reg ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOINDREGREG && ((reload_completed || reload_in_progress) || !(HFmode == QImode || HFmode == HImode)))) && ((Has_F16)))
#define HAVE_loadohf_ind_reg_reg ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOINDREGREG && ((reload_completed || reload_in_progress) || !(OHFmode == QImode || OHFmode == HImode)))) && ((Has_F16ALT)))
#define HAVE_loadsi_ind_reg_reg (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOINDREGREG && ((reload_completed || reload_in_progress) || !(SImode == QImode || SImode == HImode))))
#define HAVE_loadsf_ind_reg_reg ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOINDREGREG && ((reload_completed || reload_in_progress) || !(SFmode == QImode || SFmode == HImode)))) && ((!TARGET_HARD_FLOAT || TARGET_FPREGS_ON_GRREGS)))
#define HAVE_loadv2hi_ind_reg_reg (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOINDREGREG && ((reload_completed || reload_in_progress) || !(V2HImode == QImode || V2HImode == HImode))))
#define HAVE_loadv2hf_ind_reg_reg ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOINDREGREG && ((reload_completed || reload_in_progress) || !(V2HFmode == QImode || V2HFmode == HImode)))) && ((Has_F16)))
#define HAVE_loadv2ohf_ind_reg_reg ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOINDREGREG && ((reload_completed || reload_in_progress) || !(V2OHFmode == QImode || V2OHFmode == HImode)))) && ((Has_F16ALT)))
#define HAVE_loadv4qi_ind_reg_reg (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOINDREGREG && ((reload_completed || reload_in_progress) || !(V4QImode == QImode || V4QImode == HImode))))
#define HAVE_loadqi_ext_ind_reg_reg (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOINDREGREG))
#define HAVE_loadqi_uext_ind_reg_reg (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOINDREGREG))
#define HAVE_loadhi_ext_ind_reg_reg (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOINDREGREG))
#define HAVE_loadhi_uext_ind_reg_reg (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOINDREGREG))
#define HAVE_loadhf_ext_ind_reg_reg ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOINDREGREG)) && ((Has_F16)))
#define HAVE_loadhf_uext_ind_reg_reg ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOINDREGREG)) && ((Has_F16)))
#define HAVE_loadohf_ext_ind_reg_reg ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOINDREGREG)) && ((Has_F16ALT)))
#define HAVE_loadohf_uext_ind_reg_reg ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOINDREGREG)) && ((Has_F16ALT)))
#define HAVE_loadsi_ext_ind_reg_reg (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOINDREGREG))
#define HAVE_loadsi_uext_ind_reg_reg (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOINDREGREG))
#define HAVE_loadsf_ext_ind_reg_reg ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOINDREGREG)) && ((!TARGET_HARD_FLOAT || TARGET_FPREGS_ON_GRREGS)))
#define HAVE_loadsf_uext_ind_reg_reg ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOINDREGREG)) && ((!TARGET_HARD_FLOAT || TARGET_FPREGS_ON_GRREGS)))
#define HAVE_loadv2hi_ext_ind_reg_reg (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOINDREGREG))
#define HAVE_loadv2hi_uext_ind_reg_reg (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOINDREGREG))
#define HAVE_loadv2hf_ext_ind_reg_reg ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOINDREGREG)) && ((Has_F16)))
#define HAVE_loadv2hf_uext_ind_reg_reg ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOINDREGREG)) && ((Has_F16)))
#define HAVE_loadv2ohf_ext_ind_reg_reg ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOINDREGREG)) && ((Has_F16ALT)))
#define HAVE_loadv2ohf_uext_ind_reg_reg ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOINDREGREG)) && ((Has_F16ALT)))
#define HAVE_loadv4qi_ext_ind_reg_reg (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOINDREGREG))
#define HAVE_loadv4qi_uext_ind_reg_reg (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOINDREGREG))
#define HAVE_storeqi_ind_reg_reg (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOINDREGREG))
#define HAVE_storehi_ind_reg_reg (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOINDREGREG))
#define HAVE_storehf_ind_reg_reg ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOINDREGREG)) && ((Has_F16)))
#define HAVE_storeohf_ind_reg_reg ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOINDREGREG)) && ((Has_F16ALT)))
#define HAVE_storesi_ind_reg_reg (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOINDREGREG))
#define HAVE_storesf_ind_reg_reg ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOINDREGREG)) && ((!TARGET_HARD_FLOAT || TARGET_FPREGS_ON_GRREGS)))
#define HAVE_storev2hi_ind_reg_reg (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOINDREGREG))
#define HAVE_storev2hf_ind_reg_reg ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOINDREGREG)) && ((Has_F16)))
#define HAVE_storev2ohf_ind_reg_reg ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOINDREGREG)) && ((Has_F16ALT)))
#define HAVE_storev4qi_ind_reg_reg (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOINDREGREG))
#define HAVE_load_evt_unit ((Pulp_Cpu>=PULP_V2 || Pulp_Cpu==PULP_SLIM))
#define HAVE_load_evt_unit_internal ((Pulp_Cpu>=PULP_V2 || Pulp_Cpu==PULP_SLIM))
#define HAVE_read_spr ((Pulp_Cpu>=PULP_V2 || (Pulp_Cpu==PULP_SLIM)))
#define HAVE_read_spr_vol ((Pulp_Cpu>=PULP_V2 || (Pulp_Cpu==PULP_SLIM)))
#define HAVE_write_spr ((Pulp_Cpu>=PULP_V2 || (Pulp_Cpu==PULP_SLIM)))
#define HAVE_read_then_write_spr ((Pulp_Cpu>=PULP_V2 || (Pulp_Cpu==PULP_SLIM)))
#define HAVE_spr_bit_set ((Pulp_Cpu>=PULP_V2 || (Pulp_Cpu==PULP_SLIM)))
#define HAVE_read_then_spr_bit_set ((Pulp_Cpu>=PULP_V2 || (Pulp_Cpu==PULP_SLIM)))
#define HAVE_spr_bit_clr ((Pulp_Cpu>=PULP_V2 || (Pulp_Cpu==PULP_SLIM)))
#define HAVE_read_then_spr_bit_clr ((Pulp_Cpu>=PULP_V2 || (Pulp_Cpu==PULP_SLIM)))
#define HAVE_read_fcsr (TARGET_HARD_FLOAT)
#define HAVE_write_fcsr (TARGET_HARD_FLOAT)
#define HAVE_writesivol ((Pulp_Cpu>=PULP_V2))
#define HAVE_writesi ((Pulp_Cpu>=PULP_V2))
#define HAVE_readsivol ((Pulp_Cpu>=PULP_V2))
#define HAVE_OffsetedRead ((Pulp_Cpu>=PULP_V2))
#define HAVE_OffsetedReadHalf ((Pulp_Cpu>=PULP_V2))
#define HAVE_OffsetedReadByte ((Pulp_Cpu>=PULP_V2))
#define HAVE_OffsetedWrite ((Pulp_Cpu>=PULP_V2))
#define HAVE_OffsetedWritePtrInternal ((Pulp_Cpu>=PULP_V2))
#define HAVE_OffsetedWriteHalf ((Pulp_Cpu>=PULP_V2))
#define HAVE_OffsetedWriteByte ((Pulp_Cpu>=PULP_V2))
#define HAVE_OffsetedReadOMP ((Pulp_Cpu>=PULP_V2))
#define HAVE_OffsetedReadNonVol ((Pulp_Cpu>=PULP_V2))
#define HAVE_loadqi_ind_postinc (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD && ((reload_completed || reload_in_progress) || !(QImode == QImode || QImode == HImode))))
#define HAVE_loadhi_ind_postinc (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD && ((reload_completed || reload_in_progress) || !(HImode == QImode || HImode == HImode))))
#define HAVE_loadhf_ind_postinc ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD && ((reload_completed || reload_in_progress) || !(HFmode == QImode || HFmode == HImode)))) && ((Has_F16)))
#define HAVE_loadohf_ind_postinc ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD && ((reload_completed || reload_in_progress) || !(OHFmode == QImode || OHFmode == HImode)))) && ((Has_F16ALT)))
#define HAVE_loadsi_ind_postinc (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD && ((reload_completed || reload_in_progress) || !(SImode == QImode || SImode == HImode))))
#define HAVE_loadsf_ind_postinc ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD && ((reload_completed || reload_in_progress) || !(SFmode == QImode || SFmode == HImode)))) && ((!TARGET_HARD_FLOAT || TARGET_FPREGS_ON_GRREGS)))
#define HAVE_loadv2hi_ind_postinc (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD && ((reload_completed || reload_in_progress) || !(V2HImode == QImode || V2HImode == HImode))))
#define HAVE_loadv2hf_ind_postinc ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD && ((reload_completed || reload_in_progress) || !(V2HFmode == QImode || V2HFmode == HImode)))) && ((Has_F16)))
#define HAVE_loadv2ohf_ind_postinc ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD && ((reload_completed || reload_in_progress) || !(V2OHFmode == QImode || V2OHFmode == HImode)))) && ((Has_F16ALT)))
#define HAVE_loadv4qi_ind_postinc (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD && ((reload_completed || reload_in_progress) || !(V4QImode == QImode || V4QImode == HImode))))
#define HAVE_loadqi_ext_ind_postinc (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD))
#define HAVE_loadqi_uext_ind_postinc (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD))
#define HAVE_loadhi_ext_ind_postinc (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD))
#define HAVE_loadhi_uext_ind_postinc (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD))
#define HAVE_loadhf_ext_ind_postinc ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD)) && ((Has_F16)))
#define HAVE_loadhf_uext_ind_postinc ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD)) && ((Has_F16)))
#define HAVE_loadohf_ext_ind_postinc ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD)) && ((Has_F16ALT)))
#define HAVE_loadohf_uext_ind_postinc ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD)) && ((Has_F16ALT)))
#define HAVE_loadsi_ext_ind_postinc (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD))
#define HAVE_loadsi_uext_ind_postinc (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD))
#define HAVE_loadsf_ext_ind_postinc ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD)) && ((!TARGET_HARD_FLOAT || TARGET_FPREGS_ON_GRREGS)))
#define HAVE_loadsf_uext_ind_postinc ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD)) && ((!TARGET_HARD_FLOAT || TARGET_FPREGS_ON_GRREGS)))
#define HAVE_loadv2hi_ext_ind_postinc (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD))
#define HAVE_loadv2hi_uext_ind_postinc (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD))
#define HAVE_loadv2hf_ext_ind_postinc ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD)) && ((Has_F16)))
#define HAVE_loadv2hf_uext_ind_postinc ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD)) && ((Has_F16)))
#define HAVE_loadv2ohf_ext_ind_postinc ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD)) && ((Has_F16ALT)))
#define HAVE_loadv2ohf_uext_ind_postinc ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD)) && ((Has_F16ALT)))
#define HAVE_loadv4qi_ext_ind_postinc (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD))
#define HAVE_loadv4qi_uext_ind_postinc (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD))
#define HAVE_loadqi_ind_postdec (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD && ((reload_completed || reload_in_progress) || !(QImode == QImode || QImode == HImode))))
#define HAVE_loadhi_ind_postdec (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD && ((reload_completed || reload_in_progress) || !(HImode == QImode || HImode == HImode))))
#define HAVE_loadhf_ind_postdec ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD && ((reload_completed || reload_in_progress) || !(HFmode == QImode || HFmode == HImode)))) && ((Has_F16)))
#define HAVE_loadohf_ind_postdec ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD && ((reload_completed || reload_in_progress) || !(OHFmode == QImode || OHFmode == HImode)))) && ((Has_F16ALT)))
#define HAVE_loadsi_ind_postdec (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD && ((reload_completed || reload_in_progress) || !(SImode == QImode || SImode == HImode))))
#define HAVE_loadsf_ind_postdec ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD && ((reload_completed || reload_in_progress) || !(SFmode == QImode || SFmode == HImode)))) && ((!TARGET_HARD_FLOAT || TARGET_FPREGS_ON_GRREGS)))
#define HAVE_loadv2hi_ind_postdec (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD && ((reload_completed || reload_in_progress) || !(V2HImode == QImode || V2HImode == HImode))))
#define HAVE_loadv2hf_ind_postdec ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD && ((reload_completed || reload_in_progress) || !(V2HFmode == QImode || V2HFmode == HImode)))) && ((Has_F16)))
#define HAVE_loadv2ohf_ind_postdec ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD && ((reload_completed || reload_in_progress) || !(V2OHFmode == QImode || V2OHFmode == HImode)))) && ((Has_F16ALT)))
#define HAVE_loadv4qi_ind_postdec (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD && ((reload_completed || reload_in_progress) || !(V4QImode == QImode || V4QImode == HImode))))
#define HAVE_loadqi_ext_ind_postdec (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD))
#define HAVE_loadqi_uext_ind_postdec (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD))
#define HAVE_loadhi_ext_ind_postdec (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD))
#define HAVE_loadhi_uext_ind_postdec (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD))
#define HAVE_loadhf_ext_ind_postdec ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD)) && ((Has_F16)))
#define HAVE_loadhf_uext_ind_postdec ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD)) && ((Has_F16)))
#define HAVE_loadohf_ext_ind_postdec ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD)) && ((Has_F16ALT)))
#define HAVE_loadohf_uext_ind_postdec ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD)) && ((Has_F16ALT)))
#define HAVE_loadsi_ext_ind_postdec (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD))
#define HAVE_loadsi_uext_ind_postdec (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD))
#define HAVE_loadsf_ext_ind_postdec ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD)) && ((!TARGET_HARD_FLOAT || TARGET_FPREGS_ON_GRREGS)))
#define HAVE_loadsf_uext_ind_postdec ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD)) && ((!TARGET_HARD_FLOAT || TARGET_FPREGS_ON_GRREGS)))
#define HAVE_loadv2hi_ext_ind_postdec (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD))
#define HAVE_loadv2hi_uext_ind_postdec (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD))
#define HAVE_loadv2hf_ext_ind_postdec ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD)) && ((Has_F16)))
#define HAVE_loadv2hf_uext_ind_postdec ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD)) && ((Has_F16)))
#define HAVE_loadv2ohf_ext_ind_postdec ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD)) && ((Has_F16ALT)))
#define HAVE_loadv2ohf_uext_ind_postdec ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD)) && ((Has_F16ALT)))
#define HAVE_loadv4qi_ext_ind_postdec (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD))
#define HAVE_loadv4qi_uext_ind_postdec (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD))
#define HAVE_loadqi_ind_post_mod (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD && ((reload_completed || reload_in_progress) || !(QImode == QImode || QImode == HImode))))
#define HAVE_loadhi_ind_post_mod (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD && ((reload_completed || reload_in_progress) || !(HImode == QImode || HImode == HImode))))
#define HAVE_loadhf_ind_post_mod ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD && ((reload_completed || reload_in_progress) || !(HFmode == QImode || HFmode == HImode)))) && ((Has_F16)))
#define HAVE_loadohf_ind_post_mod ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD && ((reload_completed || reload_in_progress) || !(OHFmode == QImode || OHFmode == HImode)))) && ((Has_F16ALT)))
#define HAVE_loadsi_ind_post_mod (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD && ((reload_completed || reload_in_progress) || !(SImode == QImode || SImode == HImode))))
#define HAVE_loadsf_ind_post_mod ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD && ((reload_completed || reload_in_progress) || !(SFmode == QImode || SFmode == HImode)))) && ((!TARGET_HARD_FLOAT || TARGET_FPREGS_ON_GRREGS)))
#define HAVE_loadv2hi_ind_post_mod (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD && ((reload_completed || reload_in_progress) || !(V2HImode == QImode || V2HImode == HImode))))
#define HAVE_loadv2hf_ind_post_mod ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD && ((reload_completed || reload_in_progress) || !(V2HFmode == QImode || V2HFmode == HImode)))) && ((Has_F16)))
#define HAVE_loadv2ohf_ind_post_mod ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD && ((reload_completed || reload_in_progress) || !(V2OHFmode == QImode || V2OHFmode == HImode)))) && ((Has_F16ALT)))
#define HAVE_loadv4qi_ind_post_mod (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD && ((reload_completed || reload_in_progress) || !(V4QImode == QImode || V4QImode == HImode))))
#define HAVE_loadqi_ext_ind_post_mod (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD))
#define HAVE_loadqi_uext_ind_post_mod (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD))
#define HAVE_loadhi_ext_ind_post_mod (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD))
#define HAVE_loadhi_uext_ind_post_mod (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD))
#define HAVE_loadhf_ext_ind_post_mod ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD)) && ((Has_F16)))
#define HAVE_loadhf_uext_ind_post_mod ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD)) && ((Has_F16)))
#define HAVE_loadohf_ext_ind_post_mod ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD)) && ((Has_F16ALT)))
#define HAVE_loadohf_uext_ind_post_mod ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD)) && ((Has_F16ALT)))
#define HAVE_loadsi_ext_ind_post_mod (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD))
#define HAVE_loadsi_uext_ind_post_mod (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD))
#define HAVE_loadsf_ext_ind_post_mod ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD)) && ((!TARGET_HARD_FLOAT || TARGET_FPREGS_ON_GRREGS)))
#define HAVE_loadsf_uext_ind_post_mod ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD)) && ((!TARGET_HARD_FLOAT || TARGET_FPREGS_ON_GRREGS)))
#define HAVE_loadv2hi_ext_ind_post_mod (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD))
#define HAVE_loadv2hi_uext_ind_post_mod (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD))
#define HAVE_loadv2hf_ext_ind_post_mod ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD)) && ((Has_F16)))
#define HAVE_loadv2hf_uext_ind_post_mod ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD)) && ((Has_F16)))
#define HAVE_loadv2ohf_ext_ind_post_mod ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD)) && ((Has_F16ALT)))
#define HAVE_loadv2ohf_uext_ind_post_mod ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD)) && ((Has_F16ALT)))
#define HAVE_loadv4qi_ext_ind_post_mod (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD))
#define HAVE_loadv4qi_uext_ind_post_mod (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD))
#define HAVE_storeqi_ind_postinc (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD))
#define HAVE_storehi_ind_postinc (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD))
#define HAVE_storehf_ind_postinc ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD)) && ((Has_F16)))
#define HAVE_storeohf_ind_postinc ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD)) && ((Has_F16ALT)))
#define HAVE_storesi_ind_postinc (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD))
#define HAVE_storesf_ind_postinc ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD)) && ((!TARGET_HARD_FLOAT || TARGET_FPREGS_ON_GRREGS)))
#define HAVE_storev2hi_ind_postinc (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD))
#define HAVE_storev2hf_ind_postinc ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD)) && ((Has_F16)))
#define HAVE_storev2ohf_ind_postinc ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD)) && ((Has_F16ALT)))
#define HAVE_storev4qi_ind_postinc (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD))
#define HAVE_storeqi_ind_postdec (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD))
#define HAVE_storehi_ind_postdec (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD))
#define HAVE_storehf_ind_postdec ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD)) && ((Has_F16)))
#define HAVE_storeohf_ind_postdec ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD)) && ((Has_F16ALT)))
#define HAVE_storesi_ind_postdec (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD))
#define HAVE_storesf_ind_postdec ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD)) && ((!TARGET_HARD_FLOAT || TARGET_FPREGS_ON_GRREGS)))
#define HAVE_storev2hi_ind_postdec (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD))
#define HAVE_storev2hf_ind_postdec ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD)) && ((Has_F16)))
#define HAVE_storev2ohf_ind_postdec ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD)) && ((Has_F16ALT)))
#define HAVE_storev4qi_ind_postdec (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD))
#define HAVE_storeqi_ind_postmod (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD))
#define HAVE_storehi_ind_postmod (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD))
#define HAVE_storehf_ind_postmod ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD)) && ((Has_F16)))
#define HAVE_storeohf_ind_postmod ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD)) && ((Has_F16ALT)))
#define HAVE_storesi_ind_postmod (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD))
#define HAVE_storesf_ind_postmod ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD)) && ((!TARGET_HARD_FLOAT || TARGET_FPREGS_ON_GRREGS)))
#define HAVE_storev2hi_ind_postmod (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD))
#define HAVE_storev2hf_ind_postmod ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD)) && ((Has_F16)))
#define HAVE_storev2ohf_ind_postmod ((((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD)) && ((Has_F16ALT)))
#define HAVE_storev4qi_ind_postmod (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOPOSTMOD))
#define HAVE_movv2hi_internal ((register_operand (operands[0], V2HImode) || reg_or_0_operand (operands[1], V2HImode)) && \
    !riscv_filter_pulp_operand(operands[0], !(Pulp_Cpu>=PULP_V0)) && \
    !riscv_filter_pulp_operand(operands[1], !(Pulp_Cpu>=PULP_V0)))
#define HAVE_movv4qi_internal ((register_operand (operands[0], V4QImode) || reg_or_0_operand (operands[1], V4QImode)) && \
    !riscv_filter_pulp_operand(operands[0], !(Pulp_Cpu>=PULP_V0)) && \
    !riscv_filter_pulp_operand(operands[1], !(Pulp_Cpu>=PULP_V0)))
#define HAVE_fence 1
#define HAVE_fence_i 1
#define HAVE_ashlsi3 1
#define HAVE_ashrsi3 1
#define HAVE_lshrsi3 1
#define HAVE_ashldi3 (TARGET_64BIT || Has_64Int)
#define HAVE_ashrdi3 (TARGET_64BIT || Has_64Int)
#define HAVE_lshrdi3 (TARGET_64BIT || Has_64Int)
#define HAVE_ashlsidi3 (TARGET_64BIT || Has_64Int)
#define HAVE_ashrsidi3 (TARGET_64BIT || Has_64Int)
#define HAVE_lshrsidi3 (TARGET_64BIT || Has_64Int)
#define HAVE_vec_initv2hi_internal (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_vec_initv4qi_internal (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_vec_initv2hf_internal_x (((Pulp_Cpu==PULP_GAP9) && !TARGET_MASK_NOVECT && TARGET_FPREGS_ON_GRREGS) && (Has_F16))
#define HAVE_vec_initv2ohf_internal_x (((Pulp_Cpu==PULP_GAP9) && !TARGET_MASK_NOVECT && TARGET_FPREGS_ON_GRREGS) && (Has_F16ALT))
#define HAVE_movv2hf_internal ((TARGET_HARD_FLOAT && (register_operand (operands[0], V2HFmode) || reg_or_0_operand (operands[1], V2HFmode))) && (Has_F16))
#define HAVE_movv2ohf_internal ((TARGET_HARD_FLOAT && (register_operand (operands[0], V2OHFmode) || reg_or_0_operand (operands[1], V2OHFmode))) && (Has_F16ALT))
#define HAVE_movv1sf_internal (register_operand (operands[0], V1SFmode) || reg_or_0_operand (operands[1], V1SFmode))
#define HAVE_extendv2hfv2ohf2 (TARGET_HARD_FLOAT && Has_F16 && Has_F16ALT)
#define HAVE_extendv2ohfv2hf2 (TARGET_HARD_FLOAT && Has_F16 && Has_F16ALT)
#define HAVE_floatv2hiv2hf2_internal ((TARGET_HARD_FLOAT) && (Has_F16))
#define HAVE_floatv2hiv2ohf2_internal ((TARGET_HARD_FLOAT) && (Has_F16ALT))
#define HAVE_floatunsv2hiv2hf2_internal ((TARGET_HARD_FLOAT) && (Has_F16))
#define HAVE_floatunsv2hiv2ohf2_internal ((TARGET_HARD_FLOAT) && (Has_F16ALT))
#define HAVE_fix_truncv2hfv2hi2_internal ((TARGET_HARD_FLOAT) && (Has_F16))
#define HAVE_fix_truncv2ohfv2hi2_internal ((TARGET_HARD_FLOAT) && (Has_F16ALT))
#define HAVE_fixuns_truncv2hfv2hi2_internal ((TARGET_HARD_FLOAT) && (Has_F16))
#define HAVE_fixuns_truncv2ohfv2hi2_internal ((TARGET_HARD_FLOAT) && (Has_F16ALT))
#define HAVE_lshrimmv2hf (Has_F16)
#define HAVE_lshrimmv2ohf (Has_F16ALT)
#define HAVE_lshrimmv2hi 1
#define HAVE_lshrimmv4qi 1
#define HAVE_orv2hf (Has_F16)
#define HAVE_orv2ohf (Has_F16ALT)
#define HAVE_orv2hi 1
#define HAVE_orv4qi 1
#define HAVE_vec_pack_trunc_v1sf (TARGET_HARD_FLOAT && Has_F16)
#define HAVE_vec_pack_trunc_v1sf_to_v2hf_builtin (TARGET_HARD_FLOAT && Has_F16)
#define HAVE_vec_pack_trunc_v1sf_alt (TARGET_HARD_FLOAT && Has_F16ALT)
#define HAVE_vec_pack_trunc_v1sf_to_v2ohf_builtin (TARGET_HARD_FLOAT && Has_F16ALT)
#define HAVE_vec_unpacks_lo_v2hf (TARGET_HARD_FLOAT && Has_F16)
#define HAVE_vec_unpacks_lo_v2ohf (TARGET_HARD_FLOAT && Has_F16ALT)
#define HAVE_vec_pack_v2hf ((((Pulp_Cpu>=PULP_V2) && !(TARGET_MASK_NOVECT||TARGET_MASK_NOSHUFFLEPACK))) && (Has_F16))
#define HAVE_vec_pack_v2ohf ((((Pulp_Cpu>=PULP_V2) && !(TARGET_MASK_NOVECT||TARGET_MASK_NOSHUFFLEPACK))) && (Has_F16ALT))
#define HAVE_vec_pack_v2hi (((Pulp_Cpu>=PULP_V2) && !(TARGET_MASK_NOVECT||TARGET_MASK_NOSHUFFLEPACK)))
#define HAVE_vec_pack_v4qi_lo (((Pulp_Cpu>=PULP_V2) && !(TARGET_MASK_NOVECT||TARGET_MASK_NOSHUFFLEPACK)))
#define HAVE_vec_pack_v4qi_lo_first (((Pulp_Cpu>=PULP_V2) && !(TARGET_MASK_NOVECT||TARGET_MASK_NOSHUFFLEPACK)))
#define HAVE_vec_pack_v4qi_hi (((Pulp_Cpu>=PULP_V2) && !(TARGET_MASK_NOVECT||TARGET_MASK_NOSHUFFLEPACK)))
#define HAVE_vec_permv2hf_internal2_1 ((((Pulp_Cpu>=PULP_V2) && !(TARGET_MASK_NOVECT||TARGET_MASK_NOSHUFFLEPACK)  && riscv_valid_permute_operands (operands[1], operands[2], operands[3]))) && (Has_F16))
#define HAVE_vec_permv2ohf_internal2_1 ((((Pulp_Cpu>=PULP_V2) && !(TARGET_MASK_NOVECT||TARGET_MASK_NOSHUFFLEPACK)  && riscv_valid_permute_operands (operands[1], operands[2], operands[3]))) && (Has_F16ALT))
#define HAVE_vec_permv2hi_internal2_1 (((Pulp_Cpu>=PULP_V2) && !(TARGET_MASK_NOVECT||TARGET_MASK_NOSHUFFLEPACK)  && riscv_valid_permute_operands (operands[1], operands[2], operands[3])))
#define HAVE_vec_permv2hf_internal2 ((((Pulp_Cpu>=PULP_V2) && !(TARGET_MASK_NOVECT||TARGET_MASK_NOSHUFFLEPACK))) && (Has_F16))
#define HAVE_vec_permv2ohf_internal2 ((((Pulp_Cpu>=PULP_V2) && !(TARGET_MASK_NOVECT||TARGET_MASK_NOSHUFFLEPACK))) && (Has_F16ALT))
#define HAVE_vec_permv2hi_internal2 (((Pulp_Cpu>=PULP_V2) && !(TARGET_MASK_NOVECT||TARGET_MASK_NOSHUFFLEPACK)))
#define HAVE_vec_permv2hf_int1 ((((Pulp_Cpu>=PULP_V2) && !(TARGET_MASK_NOVECT||TARGET_MASK_NOSHUFFLEPACK))) && (Has_F16))
#define HAVE_vec_permv2ohf_int1 ((((Pulp_Cpu>=PULP_V2) && !(TARGET_MASK_NOVECT||TARGET_MASK_NOSHUFFLEPACK))) && (Has_F16ALT))
#define HAVE_vec_permv2hi_int1 (((Pulp_Cpu>=PULP_V2) && !(TARGET_MASK_NOVECT||TARGET_MASK_NOSHUFFLEPACK)))
#define HAVE_vec_permv2hf_low ((((Pulp_Cpu==PULP_GAP8||Pulp_Cpu==PULP_GAP9) && !(TARGET_MASK_NOVECT||TARGET_MASK_NOSHUFFLEPACK))) && (Has_F16))
#define HAVE_vec_permv2ohf_low ((((Pulp_Cpu==PULP_GAP8||Pulp_Cpu==PULP_GAP9) && !(TARGET_MASK_NOVECT||TARGET_MASK_NOSHUFFLEPACK))) && (Has_F16ALT))
#define HAVE_vec_permv2hi_low (((Pulp_Cpu==PULP_GAP8||Pulp_Cpu==PULP_GAP9) && !(TARGET_MASK_NOVECT||TARGET_MASK_NOSHUFFLEPACK)))
#define HAVE_vec_permv2hf_high ((((Pulp_Cpu==PULP_GAP8||Pulp_Cpu==PULP_GAP9) && !(TARGET_MASK_NOVECT||TARGET_MASK_NOSHUFFLEPACK))) && (Has_F16))
#define HAVE_vec_permv2ohf_high ((((Pulp_Cpu==PULP_GAP8||Pulp_Cpu==PULP_GAP9) && !(TARGET_MASK_NOVECT||TARGET_MASK_NOSHUFFLEPACK))) && (Has_F16ALT))
#define HAVE_vec_permv2hi_high (((Pulp_Cpu==PULP_GAP8||Pulp_Cpu==PULP_GAP9) && !(TARGET_MASK_NOVECT||TARGET_MASK_NOSHUFFLEPACK)))
#define HAVE_vec_permv4qi_internal2_1 (((Pulp_Cpu>=PULP_V2) && !(TARGET_MASK_NOVECT||TARGET_MASK_NOSHUFFLEPACK)  && riscv_valid_permute_operands (operands[1], operands[2], operands[3])))
#define HAVE_vec_permv4qi_internal2 (((Pulp_Cpu>=PULP_V2) && !(TARGET_MASK_NOVECT||TARGET_MASK_NOSHUFFLEPACK)))
#define HAVE_vec_permv4qi_int1 (((Pulp_Cpu>=PULP_V2) && !(TARGET_MASK_NOVECT||TARGET_MASK_NOSHUFFLEPACK)))
#define HAVE_vec_setv2hf_internal ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16))
#define HAVE_vec_setv2ohf_internal ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16ALT))
#define HAVE_vec_setv2hi_internal (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_vec_setv4qi_internal (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_vec_set_firstv2hf_internal ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16))
#define HAVE_vec_set_firstv2ohf_internal ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16ALT))
#define HAVE_vec_set_firstv2hi_internal (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_vec_set_firstv4qi_internal (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_vec_extract_sext_qi_v2hf ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16))
#define HAVE_vec_extract_sext_qi_v2ohf ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16ALT))
#define HAVE_vec_extract_sext_qi_v2hi (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_vec_extract_sext_qi_v4qi (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_vec_extract_sext_hi_v2hf ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16))
#define HAVE_vec_extract_sext_hi_v2ohf ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16ALT))
#define HAVE_vec_extract_sext_hi_v2hi (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_vec_extract_sext_hi_v4qi (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_vec_extract_sext_si_v2hf ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16))
#define HAVE_vec_extract_sext_si_v2ohf ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16ALT))
#define HAVE_vec_extract_sext_si_v2hi (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_vec_extract_sext_si_v4qi (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_vec_extract_zext_qi_v2hf ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16))
#define HAVE_vec_extract_zext_qi_v2ohf ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16ALT))
#define HAVE_vec_extract_zext_qi_v2hi (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_vec_extract_zext_qi_v4qi (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_vec_extract_zext_hi_v2hf ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16))
#define HAVE_vec_extract_zext_hi_v2ohf ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16ALT))
#define HAVE_vec_extract_zext_hi_v2hi (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_vec_extract_zext_hi_v4qi (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_vec_extract_zext_si_v2hf ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16))
#define HAVE_vec_extract_zext_si_v2ohf ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16ALT))
#define HAVE_vec_extract_zext_si_v2hi (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_vec_extract_zext_si_v4qi (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_vec_extractv2hf ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16))
#define HAVE_vec_extractv2ohf ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16ALT))
#define HAVE_vec_extractv2hi (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_vec_extractv4qi (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cplx_conjhi2 (((Pulp_Cpu==PULP_GAP8||Pulp_Cpu==PULP_GAP9) && !TARGET_MASK_NOVECT))
#define HAVE_cplx_conjsi3 (((Pulp_Cpu==PULP_GAP8||Pulp_Cpu==PULP_GAP9) && !TARGET_MASK_NOVECT))
#define HAVE_add_div2_v2hi3 (((Pulp_Cpu==PULP_GAP8||Pulp_Cpu==PULP_GAP9) && !TARGET_MASK_NOVECT))
#define HAVE_add_div2_v4qi3 (((Pulp_Cpu==PULP_GAP8) && !TARGET_MASK_NOVECT))
#define HAVE_add_div4_v2hi3 (((Pulp_Cpu==PULP_GAP8||Pulp_Cpu==PULP_GAP9) && !TARGET_MASK_NOVECT))
#define HAVE_add_div8_v2hi3 (((Pulp_Cpu==PULP_GAP9) && !TARGET_MASK_NOVECT))
#define HAVE_add_div4_v4qi3 (((Pulp_Cpu==PULP_GAP8) && !TARGET_MASK_NOVECT))
#define HAVE_sub_div2_v2hi3 (((Pulp_Cpu==PULP_GAP8||Pulp_Cpu==PULP_GAP9) && !TARGET_MASK_NOVECT))
#define HAVE_sub_div2_v4qi3 (((Pulp_Cpu==PULP_GAP8) && !TARGET_MASK_NOVECT))
#define HAVE_sub_div4_v2hi3 (((Pulp_Cpu==PULP_GAP8||Pulp_Cpu==PULP_GAP9) && !TARGET_MASK_NOVECT))
#define HAVE_sub_div8_v2hi3 (((Pulp_Cpu==PULP_GAP9) && !TARGET_MASK_NOVECT))
#define HAVE_sub_div4_v4qi3 (((Pulp_Cpu==PULP_GAP8) && !TARGET_MASK_NOVECT))
#define HAVE_subrotmj_v2hi3 (((Pulp_Cpu==PULP_GAP8||Pulp_Cpu==PULP_GAP9) && !TARGET_MASK_NOVECT))
#define HAVE_addv2hf3 ((TARGET_HARD_FLOAT && (Has_F16 || Has_F16ALT)) && (Has_F16))
#define HAVE_subv2hf3 ((TARGET_HARD_FLOAT && (Has_F16 || Has_F16ALT)) && (Has_F16))
#define HAVE_sminv2hf3 ((TARGET_HARD_FLOAT && (Has_F16 || Has_F16ALT)) && (Has_F16))
#define HAVE_smaxv2hf3 ((TARGET_HARD_FLOAT && (Has_F16 || Has_F16ALT)) && (Has_F16))
#define HAVE_mulv2hf3 ((TARGET_HARD_FLOAT && (Has_F16 || Has_F16ALT)) && (Has_F16))
#define HAVE_addv2ohf3 ((TARGET_HARD_FLOAT && (Has_F16 || Has_F16ALT)) && (Has_F16ALT))
#define HAVE_subv2ohf3 ((TARGET_HARD_FLOAT && (Has_F16 || Has_F16ALT)) && (Has_F16ALT))
#define HAVE_sminv2ohf3 ((TARGET_HARD_FLOAT && (Has_F16 || Has_F16ALT)) && (Has_F16ALT))
#define HAVE_smaxv2ohf3 ((TARGET_HARD_FLOAT && (Has_F16 || Has_F16ALT)) && (Has_F16ALT))
#define HAVE_mulv2ohf3 ((TARGET_HARD_FLOAT && (Has_F16 || Has_F16ALT)) && (Has_F16ALT))
#define HAVE_addscv2hf3 ((TARGET_HARD_FLOAT && (Has_F16 || Has_F16ALT)) && (Has_F16))
#define HAVE_subscv2hf3 ((TARGET_HARD_FLOAT && (Has_F16 || Has_F16ALT)) && (Has_F16))
#define HAVE_sminscv2hf3 ((TARGET_HARD_FLOAT && (Has_F16 || Has_F16ALT)) && (Has_F16))
#define HAVE_smaxscv2hf3 ((TARGET_HARD_FLOAT && (Has_F16 || Has_F16ALT)) && (Has_F16))
#define HAVE_mulscv2hf3 ((TARGET_HARD_FLOAT && (Has_F16 || Has_F16ALT)) && (Has_F16))
#define HAVE_addscv2ohf3 ((TARGET_HARD_FLOAT && (Has_F16 || Has_F16ALT)) && (Has_F16ALT))
#define HAVE_subscv2ohf3 ((TARGET_HARD_FLOAT && (Has_F16 || Has_F16ALT)) && (Has_F16ALT))
#define HAVE_sminscv2ohf3 ((TARGET_HARD_FLOAT && (Has_F16 || Has_F16ALT)) && (Has_F16ALT))
#define HAVE_smaxscv2ohf3 ((TARGET_HARD_FLOAT && (Has_F16 || Has_F16ALT)) && (Has_F16ALT))
#define HAVE_mulscv2ohf3 ((TARGET_HARD_FLOAT && (Has_F16 || Has_F16ALT)) && (Has_F16ALT))
#define HAVE_addv2hi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_subv2hi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_sminv2hi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_smaxv2hi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_addv4qi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_subv4qi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_sminv4qi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_smaxv4qi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_addscv2hi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_subscv2hi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_sminscv2hi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_smaxscv2hi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_addscv4qi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_subscv4qi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_sminscv4qi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_smaxscv4qi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_add_swap_scv2hi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_sub_swap_scv2hi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_smin_swap_scv2hi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_smax_swap_scv2hi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_add_swap_scv4qi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_sub_swap_scv4qi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_smin_swap_scv4qi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_smax_swap_scv4qi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_fmav2hf3_internal ((TARGET_HARD_FLOAT && (Has_F16 || Has_F16ALT)) && (Has_F16))
#define HAVE_fmav2ohf3_internal ((TARGET_HARD_FLOAT && (Has_F16 || Has_F16ALT)) && (Has_F16ALT))
#define HAVE_fmsv2hf4 ((TARGET_HARD_FLOAT && (Has_F16 || Has_F16ALT)) && (Has_F16))
#define HAVE_fmsv2ohf4 ((TARGET_HARD_FLOAT && (Has_F16 || Has_F16ALT)) && (Has_F16ALT))
#define HAVE_copysignv2hf3 ((TARGET_HARD_FLOAT &&  (Has_F16 || Has_F16ALT)) && (Has_F16))
#define HAVE_copysignv2ohf3 ((TARGET_HARD_FLOAT &&  (Has_F16 || Has_F16ALT)) && (Has_F16ALT))
#define HAVE_uminv2hi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_umaxv2hi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_uminv4qi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_umaxv4qi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_uminscv2hi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_umaxscv2hi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_uminscv4qi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_umaxscv4qi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_umin_swap_scv2hi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_umax_swap_scv2hi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_umin_swap_scv4qi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_umax_swap_scv4qi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_vlshrv2hi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_vashrv2hi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_vashlv2hi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_vlshrv4qi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_vashrv4qi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_vashlv4qi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_vlshrscv2hi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_vashrscv2hi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_vashlscv2hi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_vlshrscv4qi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_vashrscv4qi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_vashlscv4qi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_avgv2hi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_avgv4qi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_avgscv2hi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_avgscv4qi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_avgsc_swap_v2hi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_avgsc_swap_v4qi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_avgv2uhi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_avgv4uqi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_avgscv2uhi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_avgscv4uqi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_avgsc_swap_v2uhi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_avgsc_swap_v4uqi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_andv2hf3 ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16))
#define HAVE_iorv2hf3 ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16))
#define HAVE_exorv2hf3 ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16))
#define HAVE_andv2ohf3 ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16ALT))
#define HAVE_iorv2ohf3 ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16ALT))
#define HAVE_exorv2ohf3 ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16ALT))
#define HAVE_andv2hi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_iorv2hi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_exorv2hi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_andv4qi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_iorv4qi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_exorv4qi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_andscv2hf3 ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16))
#define HAVE_iorscv2hf3 ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16))
#define HAVE_exorscv2hf3 ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16))
#define HAVE_andscv2ohf3 ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16ALT))
#define HAVE_iorscv2ohf3 ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16ALT))
#define HAVE_exorscv2ohf3 ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16ALT))
#define HAVE_andscv2hi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_iorscv2hi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_exorscv2hi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_andscv4qi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_iorscv4qi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_exorscv4qi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_and_swap_scv2hf3 ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16))
#define HAVE_ior_swap_scv2hf3 ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16))
#define HAVE_exor_swap_scv2hf3 ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16))
#define HAVE_and_swap_scv2ohf3 ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16ALT))
#define HAVE_ior_swap_scv2ohf3 ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16ALT))
#define HAVE_exor_swap_scv2ohf3 ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16ALT))
#define HAVE_and_swap_scv2hi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_ior_swap_scv2hi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_exor_swap_scv2hi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_and_swap_scv4qi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_ior_swap_scv4qi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_exor_swap_scv4qi3 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_absv2hf2 ((TARGET_HARD_FLOAT && ((V2HFmode == V2HFmode && Has_F16) || (V2HFmode == V2OHFmode && Has_F16ALT))) && (Has_F16))
#define HAVE_absv2ohf2 ((TARGET_HARD_FLOAT && ((V2OHFmode == V2HFmode && Has_F16) || (V2OHFmode == V2OHFmode && Has_F16ALT))) && (Has_F16ALT))
#define HAVE_absv2hi2 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_absv4qi2 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_negv2hf2 ((TARGET_HARD_FLOAT && ((V2HFmode == V2HFmode && Has_F16) || (V2HFmode == V2OHFmode && Has_F16ALT))) && (Has_F16))
#define HAVE_negv2ohf2 ((TARGET_HARD_FLOAT && ((V2OHFmode == V2HFmode && Has_F16) || (V2OHFmode == V2OHFmode && Has_F16ALT))) && (Has_F16ALT))
#define HAVE_negv2hi2 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_negv4qi2 (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_bitrevsi (((Pulp_Cpu==PULP_GAP9) && !TARGET_MASK_NOBITOP && riscv_valid_bitrev_imm_op(operands[3], operands[2])))
#define HAVE_cplxmulsv2hi_low_first (((Pulp_Cpu==PULP_GAP9) && !TARGET_MASK_NOVECT))
#define HAVE_cplxmulsv2hi_div2_low_first (((Pulp_Cpu==PULP_GAP9) && !TARGET_MASK_NOVECT))
#define HAVE_cplxmulsv2hi_div4_low_first (((Pulp_Cpu==PULP_GAP9) && !TARGET_MASK_NOVECT))
#define HAVE_cplxmulsv2hi_div8_low_first (((Pulp_Cpu==PULP_GAP9) && !TARGET_MASK_NOVECT))
#define HAVE_cplxmulsv2hi_hi (((Pulp_Cpu==PULP_GAP9) && !TARGET_MASK_NOVECT))
#define HAVE_cplxmulsv2hi_div2_hi (((Pulp_Cpu==PULP_GAP9) && !TARGET_MASK_NOVECT))
#define HAVE_cplxmulsv2hi_div4_hi (((Pulp_Cpu==PULP_GAP9) && !TARGET_MASK_NOVECT))
#define HAVE_cplxmulsv2hi_div8_hi (((Pulp_Cpu==PULP_GAP9) && !TARGET_MASK_NOVECT))
#define HAVE_cplxmulsv2hi (((Pulp_Cpu==PULP_GAP8) && !TARGET_MASK_NOVECT))
#define HAVE_cplxmulsv2hi_div2 (((Pulp_Cpu==PULP_GAP8) && !TARGET_MASK_NOVECT))
#define HAVE_cplxmulsv2hi_div4 (((Pulp_Cpu==PULP_GAP8) && !TARGET_MASK_NOVECT))
#define HAVE_vec_vit_max_v2hi (((Pulp_Cpu==PULP_GAP8) && !(TARGET_MASK_NOVECT||TARGET_MASK_NOSHUFFLEPACK)))
#define HAVE_vec_vit_sel_v2hi (((Pulp_Cpu==PULP_GAP8) && !(TARGET_MASK_NOVECT||TARGET_MASK_NOSHUFFLEPACK)))
#define HAVE_dotpv2hi (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_dotspscv2hi_le (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_reduc_plus_scal_v2hi (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_dotupv2hi (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_dotupscv2hi_le (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_dotuspv2hi (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_dotuspscv2hi_le (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_dotpv4qi (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_reduc_plus_scal_v4qi (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_dotspscv4qi_le (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_dotupv4qi (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_dotupscv4qi_le (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_dotuspv4qi (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_dotuspscv4qi_le (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_sdot_prodv2hi (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_sdotspscv2hi_le (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_udot_prodv2hi (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_sdotupscv2hi_le (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_sdotuspv2hi (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_sdotuspscv2hi_le (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_sdot_prodv4qi (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_sdotspscv4qi_le (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_udot_prodv4qi (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_sdotupscv4qi_le (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_sdotuspv4qi (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_sdotuspscv4qi_le (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmpv2hf_eq ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16))
#define HAVE_cmpv2hf_ne ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16))
#define HAVE_cmpv2hf_le ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16))
#define HAVE_cmpv2hf_lt ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16))
#define HAVE_cmpv2hf_ge ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16))
#define HAVE_cmpv2hf_gt ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16))
#define HAVE_cmpv2ohf_eq ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16ALT))
#define HAVE_cmpv2ohf_ne ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16ALT))
#define HAVE_cmpv2ohf_le ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16ALT))
#define HAVE_cmpv2ohf_lt ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16ALT))
#define HAVE_cmpv2ohf_ge ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16ALT))
#define HAVE_cmpv2ohf_gt ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16ALT))
#define HAVE_vec_cmpeqv2hfv2hi ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16))
#define HAVE_vec_cmpeqv2ohfv2hi ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16ALT))
#define HAVE_cmpv2hf_sceq ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16))
#define HAVE_cmpv2hf_scne ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16))
#define HAVE_cmpv2hf_scle ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16))
#define HAVE_cmpv2hf_sclt ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16))
#define HAVE_cmpv2hf_scge ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16))
#define HAVE_cmpv2hf_scgt ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16))
#define HAVE_cmpv2hf_scgtu ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16))
#define HAVE_cmpv2hf_scltu ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16))
#define HAVE_cmpv2hf_scgeu ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16))
#define HAVE_cmpv2hf_scleu ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16))
#define HAVE_cmpv2ohf_sceq ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16ALT))
#define HAVE_cmpv2ohf_scne ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16ALT))
#define HAVE_cmpv2ohf_scle ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16ALT))
#define HAVE_cmpv2ohf_sclt ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16ALT))
#define HAVE_cmpv2ohf_scge ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16ALT))
#define HAVE_cmpv2ohf_scgt ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16ALT))
#define HAVE_cmpv2ohf_scgtu ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16ALT))
#define HAVE_cmpv2ohf_scltu ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16ALT))
#define HAVE_cmpv2ohf_scgeu ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16ALT))
#define HAVE_cmpv2ohf_scleu ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16ALT))
#define HAVE_cmp_swap_v2hf_sceq ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16))
#define HAVE_cmp_swap_v2hf_scne ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16))
#define HAVE_cmp_swap_v2hf_scle ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16))
#define HAVE_cmp_swap_v2hf_sclt ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16))
#define HAVE_cmp_swap_v2hf_scge ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16))
#define HAVE_cmp_swap_v2hf_scgt ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16))
#define HAVE_cmp_swap_v2hf_scgtu ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16))
#define HAVE_cmp_swap_v2hf_scltu ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16))
#define HAVE_cmp_swap_v2hf_scgeu ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16))
#define HAVE_cmp_swap_v2hf_scleu ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16))
#define HAVE_cmp_swap_v2ohf_sceq ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16ALT))
#define HAVE_cmp_swap_v2ohf_scne ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16ALT))
#define HAVE_cmp_swap_v2ohf_scle ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16ALT))
#define HAVE_cmp_swap_v2ohf_sclt ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16ALT))
#define HAVE_cmp_swap_v2ohf_scge ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16ALT))
#define HAVE_cmp_swap_v2ohf_scgt ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16ALT))
#define HAVE_cmp_swap_v2ohf_scgtu ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16ALT))
#define HAVE_cmp_swap_v2ohf_scltu ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16ALT))
#define HAVE_cmp_swap_v2ohf_scgeu ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16ALT))
#define HAVE_cmp_swap_v2ohf_scleu ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16ALT))
#define HAVE_cmpv2hi_eq (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmpv2hi_ne (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmpv2hi_le (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmpv2hi_lt (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmpv2hi_ge (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmpv2hi_gt (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmpv4qi_eq (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmpv4qi_ne (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmpv4qi_le (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmpv4qi_lt (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmpv4qi_ge (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmpv4qi_gt (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmpv2hi_gtu (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmpv2hi_ltu (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmpv2hi_geu (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmpv2hi_leu (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmpv4qi_gtu (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmpv4qi_ltu (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmpv4qi_geu (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmpv4qi_leu (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmpv2hi_sceq (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmpv2hi_scne (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmpv2hi_scle (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmpv2hi_sclt (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmpv2hi_scge (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmpv2hi_scgt (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmpv2hi_scgtu (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmpv2hi_scltu (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmpv2hi_scgeu (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmpv2hi_scleu (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmpv4qi_sceq (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmpv4qi_scne (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmpv4qi_scle (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmpv4qi_sclt (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmpv4qi_scge (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmpv4qi_scgt (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmpv4qi_scgtu (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmpv4qi_scltu (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmpv4qi_scgeu (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmpv4qi_scleu (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmp_swap_v2hi_sceq (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmp_swap_v2hi_scne (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmp_swap_v2hi_scle (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmp_swap_v2hi_sclt (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmp_swap_v2hi_scge (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmp_swap_v2hi_scgt (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmp_swap_v2hi_scgtu (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmp_swap_v2hi_scltu (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmp_swap_v2hi_scgeu (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmp_swap_v2hi_scleu (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmp_swap_v4qi_sceq (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmp_swap_v4qi_scne (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmp_swap_v4qi_scle (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmp_swap_v4qi_sclt (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmp_swap_v4qi_scge (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmp_swap_v4qi_scgt (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmp_swap_v4qi_scgtu (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmp_swap_v4qi_scltu (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmp_swap_v4qi_scgeu (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_cmp_swap_v4qi_scleu (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_flt_quietsfsi4 ((TARGET_HARD_FLOAT) && ((((!TARGET_64BIT) && (TARGET_HARD_FLOAT)) && (TARGET_HARD_FLOAT)) && (!TARGET_64BIT)))
#define HAVE_fle_quietsfsi4 ((TARGET_HARD_FLOAT) && ((((!TARGET_64BIT) && (TARGET_HARD_FLOAT)) && (TARGET_HARD_FLOAT)) && (!TARGET_64BIT)))
#define HAVE_flt_quietsfdi4 ((TARGET_HARD_FLOAT) && ((((TARGET_64BIT) && (TARGET_HARD_FLOAT)) && (TARGET_HARD_FLOAT)) && (TARGET_64BIT)))
#define HAVE_fle_quietsfdi4 ((TARGET_HARD_FLOAT) && ((((TARGET_64BIT) && (TARGET_HARD_FLOAT)) && (TARGET_HARD_FLOAT)) && (TARGET_64BIT)))
#define HAVE_flt_quietdfsi4 ((TARGET_HARD_FLOAT) && ((((!TARGET_64BIT) && (TARGET_DOUBLE_FLOAT)) && (TARGET_DOUBLE_FLOAT)) && (!TARGET_64BIT)))
#define HAVE_fle_quietdfsi4 ((TARGET_HARD_FLOAT) && ((((!TARGET_64BIT) && (TARGET_DOUBLE_FLOAT)) && (TARGET_DOUBLE_FLOAT)) && (!TARGET_64BIT)))
#define HAVE_flt_quietdfdi4 ((TARGET_HARD_FLOAT) && ((((TARGET_64BIT) && (TARGET_DOUBLE_FLOAT)) && (TARGET_DOUBLE_FLOAT)) && (TARGET_64BIT)))
#define HAVE_fle_quietdfdi4 ((TARGET_HARD_FLOAT) && ((((TARGET_64BIT) && (TARGET_DOUBLE_FLOAT)) && (TARGET_DOUBLE_FLOAT)) && (TARGET_64BIT)))
#define HAVE_flt_quiethfsi4 ((TARGET_HARD_FLOAT) && ((((!TARGET_64BIT) && ((TARGET_HARD_FLOAT&&Has_F16))) && ((TARGET_HARD_FLOAT&&Has_F16))) && (!TARGET_64BIT)))
#define HAVE_fle_quiethfsi4 ((TARGET_HARD_FLOAT) && ((((!TARGET_64BIT) && ((TARGET_HARD_FLOAT&&Has_F16))) && ((TARGET_HARD_FLOAT&&Has_F16))) && (!TARGET_64BIT)))
#define HAVE_flt_quiethfdi4 ((TARGET_HARD_FLOAT) && ((((TARGET_64BIT) && ((TARGET_HARD_FLOAT&&Has_F16))) && ((TARGET_HARD_FLOAT&&Has_F16))) && (TARGET_64BIT)))
#define HAVE_fle_quiethfdi4 ((TARGET_HARD_FLOAT) && ((((TARGET_64BIT) && ((TARGET_HARD_FLOAT&&Has_F16))) && ((TARGET_HARD_FLOAT&&Has_F16))) && (TARGET_64BIT)))
#define HAVE_flt_quietohfsi4 ((TARGET_HARD_FLOAT) && ((((!TARGET_64BIT) && ((TARGET_HARD_FLOAT&&Has_F16ALT))) && ((TARGET_HARD_FLOAT&&Has_F16ALT))) && (!TARGET_64BIT)))
#define HAVE_fle_quietohfsi4 ((TARGET_HARD_FLOAT) && ((((!TARGET_64BIT) && ((TARGET_HARD_FLOAT&&Has_F16ALT))) && ((TARGET_HARD_FLOAT&&Has_F16ALT))) && (!TARGET_64BIT)))
#define HAVE_flt_quietohfdi4 ((TARGET_HARD_FLOAT) && ((((TARGET_64BIT) && ((TARGET_HARD_FLOAT&&Has_F16ALT))) && ((TARGET_HARD_FLOAT&&Has_F16ALT))) && (TARGET_64BIT)))
#define HAVE_fle_quietohfdi4 ((TARGET_HARD_FLOAT) && ((((TARGET_64BIT) && ((TARGET_HARD_FLOAT&&Has_F16ALT))) && ((TARGET_HARD_FLOAT&&Has_F16ALT))) && (TARGET_64BIT)))
#define HAVE_jump 1
#define HAVE_indirect_jumpsi (Pmode == SImode)
#define HAVE_indirect_jumpdi (Pmode == DImode)
#define HAVE_tablejumpsi 1
#define HAVE_tablejumpdi (TARGET_64BIT)
#define HAVE_blockage 1
#define HAVE_simple_return 1
#define HAVE_simple_return_internal 1
#define HAVE_simple_it_return 1
#define HAVE_simple_itu_return 1
#define HAVE_simple_its_return 1
#define HAVE_simple_ith_return ((Pulp_Cpu>=PULP_V2))
#define HAVE_simple_itm_return 1
#define HAVE_eh_set_lr_si (! TARGET_64BIT)
#define HAVE_eh_set_lr_di (TARGET_64BIT)
#define HAVE_set_hwloop_lpstart 1
#define HAVE_set_hwloop_lpend 1
#define HAVE_set_hwloop_lc 1
#define HAVE_set_hwloop_lc_le 1
#define HAVE_hw_loop_prolog 1
#define HAVE_zero_cost_loop_end ((Pulp_Cpu>=PULP_V1) && !TARGET_MASK_NOHWLOOP && optimize)
#define HAVE_loop_end (((Pulp_Cpu>=PULP_V1) && !TARGET_MASK_NOHWLOOP))
#define HAVE_sibcall_internal (SIBLING_CALL_P (insn))
#define HAVE_sibcall_value_internal (SIBLING_CALL_P (insn))
#define HAVE_call_internal 1
#define HAVE_call_value_internal 1
#define HAVE_nop 1
#define HAVE_forced_nop 1
#define HAVE_trap 1
#define HAVE_gpr_save 1
#define HAVE_gpr_restore 1
#define HAVE_gpr_restore_return 1
#define HAVE_riscv_frflags (TARGET_HARD_FLOAT)
#define HAVE_riscv_fsflags (TARGET_HARD_FLOAT)
#define HAVE_stack_tiesi (!TARGET_64BIT)
#define HAVE_stack_tiedi (TARGET_64BIT)
#define HAVE_mem_thread_fence_1 1
#define HAVE_atomic_storesi (TARGET_ATOMIC)
#define HAVE_atomic_storedi ((TARGET_ATOMIC) && (TARGET_64BIT))
#define HAVE_atomic_addsi (TARGET_ATOMIC)
#define HAVE_atomic_orsi (TARGET_ATOMIC)
#define HAVE_atomic_xorsi (TARGET_ATOMIC)
#define HAVE_atomic_andsi (TARGET_ATOMIC)
#define HAVE_atomic_adddi ((TARGET_ATOMIC) && (TARGET_64BIT))
#define HAVE_atomic_ordi ((TARGET_ATOMIC) && (TARGET_64BIT))
#define HAVE_atomic_xordi ((TARGET_ATOMIC) && (TARGET_64BIT))
#define HAVE_atomic_anddi ((TARGET_ATOMIC) && (TARGET_64BIT))
#define HAVE_atomic_fetch_addsi (TARGET_ATOMIC)
#define HAVE_atomic_fetch_orsi (TARGET_ATOMIC)
#define HAVE_atomic_fetch_xorsi (TARGET_ATOMIC)
#define HAVE_atomic_fetch_andsi (TARGET_ATOMIC)
#define HAVE_atomic_fetch_adddi ((TARGET_ATOMIC) && (TARGET_64BIT))
#define HAVE_atomic_fetch_ordi ((TARGET_ATOMIC) && (TARGET_64BIT))
#define HAVE_atomic_fetch_xordi ((TARGET_ATOMIC) && (TARGET_64BIT))
#define HAVE_atomic_fetch_anddi ((TARGET_ATOMIC) && (TARGET_64BIT))
#define HAVE_atomic_exchangesi (TARGET_ATOMIC)
#define HAVE_atomic_exchangedi ((TARGET_ATOMIC) && (TARGET_64BIT))
#define HAVE_atomic_cas_value_strongsi (TARGET_ATOMIC)
#define HAVE_atomic_cas_value_strongdi ((TARGET_ATOMIC) && (TARGET_64BIT))
#define HAVE_mulditi3 (TARGET_MUL && TARGET_64BIT)
#define HAVE_umulditi3 (TARGET_MUL && TARGET_64BIT)
#define HAVE_usmulditi3 (TARGET_MUL && TARGET_64BIT)
#define HAVE_mulsidi3 ((TARGET_MUL||(Pulp_Cpu>=PULP_V2)||(Pulp_Cpu==PULP_SLIM)) && !TARGET_64BIT)
#define HAVE_umulsidi3 ((TARGET_MUL||(Pulp_Cpu>=PULP_V2)||(Pulp_Cpu==PULP_SLIM)) && !TARGET_64BIT)
#define HAVE_usmulsidi3 ((TARGET_MUL||(Pulp_Cpu>=PULP_V2)||(Pulp_Cpu==PULP_SLIM)) && !TARGET_64BIT)
#define HAVE_maddohfsf4 ((TARGET_HARD_FLOAT && Has_FAUX && (OHFmode == OHFmode && Has_F16ALT)) && ((TARGET_HARD_FLOAT&&Has_F16ALT)))
#define HAVE_clzsi2 (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOBITOP))
#define HAVE_paritysi2 (((Pulp_Cpu>=PULP_V0) && !TARGET_MASK_NOBITOP))
#define HAVE_movdi 1
#define HAVE_load_evt_unit_fenced ((Pulp_Cpu>=PULP_V2))
#define HAVE_pulp_omp_barrier ((Pulp_Cpu>=PULP_V2))
#define HAVE_pulp_omp_critical_start ((Pulp_Cpu>=PULP_V2))
#define HAVE_pulp_omp_critical_end ((Pulp_Cpu>=PULP_V2))
#define HAVE_OffsetedWritePtr ((Pulp_Cpu>=PULP_V2))
#define HAVE_OffsetedReadNonVol_m1 ((Pulp_Cpu>=PULP_V2 || (Pulp_Cpu==PULP_SLIM)))
#define HAVE_movsi 1
#define HAVE_movv2hi 1
#define HAVE_movv4qi 1
#define HAVE_movmisalignv4qi 1
#define HAVE_movmisalignv2hi 1
#define HAVE_movmisalignv2hf (Has_F16)
#define HAVE_movmisalignv2ohf (Has_F16ALT)
#define HAVE_movmisalignohf (Has_F16ALT)
#define HAVE_movmisalignsf 1
#define HAVE_movmisalignsi 1
#define HAVE_movhi 1
#define HAVE_movqi 1
#define HAVE_movhf 1
#define HAVE_movohf 1
#define HAVE_movsf 1
#define HAVE_movdf 1
#define HAVE_clear_cache 1
#define HAVE_movmemsi (!TARGET_MEMCPY)
#define HAVE_vec_initv2hf_internal_f (((Pulp_Cpu==PULP_GAP9) && !TARGET_MASK_NOVECT && TARGET_FPREGS_ON_GRREGS) && (Has_F16))
#define HAVE_vec_initv2ohf_internal_f (((Pulp_Cpu==PULP_GAP9) && !TARGET_MASK_NOVECT && TARGET_FPREGS_ON_GRREGS) && (Has_F16ALT))
#define HAVE_vec_initv2hf ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16))
#define HAVE_vec_initv2ohf ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16ALT))
#define HAVE_vec_initv2hi (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_vec_initv4qi (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_movv2hf (Has_F16)
#define HAVE_movv2ohf (Has_F16ALT)
#define HAVE_movv1sf 1
#define HAVE_floatv2hiv2hf2 ((TARGET_HARD_FLOAT) && (Has_F16))
#define HAVE_floatv2hiv2ohf2 ((TARGET_HARD_FLOAT) && (Has_F16ALT))
#define HAVE_floatunsv2hiv2hf2 ((TARGET_HARD_FLOAT) && (Has_F16))
#define HAVE_floatunsv2hiv2ohf2 ((TARGET_HARD_FLOAT) && (Has_F16ALT))
#define HAVE_fix_truncv2hfv2hi2 ((TARGET_HARD_FLOAT) && (Has_F16))
#define HAVE_fix_truncv2ohfv2hi2 ((TARGET_HARD_FLOAT) && (Has_F16ALT))
#define HAVE_fixuns_truncv2hfv2hi2 ((TARGET_HARD_FLOAT) && (Has_F16))
#define HAVE_fixuns_truncv2ohfv2hi2 ((TARGET_HARD_FLOAT) && (Has_F16ALT))
#define HAVE_vec_unpacks_hi_v2hf (TARGET_HARD_FLOAT && Has_F16)
#define HAVE_vec_unpacks_hi_v2ohf (TARGET_HARD_FLOAT && Has_F16ALT)
#define HAVE_vec_pack_v4qi (((Pulp_Cpu>=PULP_V2) && !(TARGET_MASK_NOVECT||TARGET_MASK_NOSHUFFLEPACK)))
#define HAVE_vec_permv2hf ((((Pulp_Cpu>=PULP_V2) && !(TARGET_MASK_NOVECT||TARGET_MASK_NOSHUFFLEPACK))) && (Has_F16))
#define HAVE_vec_permv2ohf ((((Pulp_Cpu>=PULP_V2) && !(TARGET_MASK_NOVECT||TARGET_MASK_NOSHUFFLEPACK))) && (Has_F16ALT))
#define HAVE_vec_permv2hi (((Pulp_Cpu>=PULP_V2) && !(TARGET_MASK_NOVECT||TARGET_MASK_NOSHUFFLEPACK)))
#define HAVE_vec_permv4qi (((Pulp_Cpu>=PULP_V2) && !(TARGET_MASK_NOVECT||TARGET_MASK_NOSHUFFLEPACK)))
#define HAVE_vec_set_firstv2hf ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16))
#define HAVE_vec_set_firstv2ohf ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16ALT))
#define HAVE_vec_set_firstv2hi (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_vec_set_firstv4qi (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_vec_setv2hf ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16))
#define HAVE_vec_setv2ohf ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16ALT))
#define HAVE_vec_setv2hi (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_vec_setv4qi (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_fmav2hf4 ((TARGET_HARD_FLOAT && (Has_F16 || Has_F16ALT)) && (Has_F16))
#define HAVE_fmav2ohf4 ((TARGET_HARD_FLOAT && (Has_F16 || Has_F16ALT)) && (Has_F16ALT))
#define HAVE_cplxmulsv2hi2 (((Pulp_Cpu==PULP_GAP9) && !TARGET_MASK_NOVECT))
#define HAVE_cplxmulsv2hi2_div2 (((Pulp_Cpu==PULP_GAP9) && !TARGET_MASK_NOVECT))
#define HAVE_cplxmulsv2hi2_div4 (((Pulp_Cpu==PULP_GAP9) && !TARGET_MASK_NOVECT))
#define HAVE_cplxmulsv2hi2_div8 (((Pulp_Cpu==PULP_GAP9) && !TARGET_MASK_NOVECT))
#define HAVE_vcondv2hiv2hf ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16))
#define HAVE_vcondv2hiv2ohf ((((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT)) && (Has_F16ALT))
#define HAVE_vcondv2hiv2hi (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_vcondv4qiv4qi (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_vconduv2hiv2hi (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_vconduv4qiv4qi (((Pulp_Cpu>=PULP_V2) && !TARGET_MASK_NOVECT))
#define HAVE_condjump 1
#define HAVE_cbranchsi4 1
#define HAVE_cbranchdi4 (!TARGET_64BIT && Has_64Int)
#define HAVE_cbranchsf4 ((TARGET_HARD_FLOAT && (SFmode == SFmode || SFmode == DFmode || (SFmode == OHFmode && Has_F16ALT) || (SFmode == HFmode && Has_F16))) && (TARGET_HARD_FLOAT))
#define HAVE_cbranchdf4 ((TARGET_HARD_FLOAT && (DFmode == SFmode || DFmode == DFmode || (DFmode == OHFmode && Has_F16ALT) || (DFmode == HFmode && Has_F16))) && (TARGET_DOUBLE_FLOAT))
#define HAVE_cbranchhf4 ((TARGET_HARD_FLOAT && (HFmode == SFmode || HFmode == DFmode || (HFmode == OHFmode && Has_F16ALT) || (HFmode == HFmode && Has_F16))) && ((TARGET_HARD_FLOAT&&Has_F16)))
#define HAVE_cbranchohf4 ((TARGET_HARD_FLOAT && (OHFmode == SFmode || OHFmode == DFmode || (OHFmode == OHFmode && Has_F16ALT) || (OHFmode == HFmode && Has_F16))) && ((TARGET_HARD_FLOAT&&Has_F16ALT)))
#define HAVE_cstoresi4 1
#define HAVE_cstoredi4 (!TARGET_64BIT && Has_64Int)
#define HAVE_cstoresf4 (TARGET_HARD_FLOAT)
#define HAVE_cstoredf4 ((TARGET_HARD_FLOAT) && (TARGET_DOUBLE_FLOAT))
#define HAVE_cstorehf4 ((TARGET_HARD_FLOAT) && ((TARGET_HARD_FLOAT&&Has_F16)))
#define HAVE_cstoreohf4 ((TARGET_HARD_FLOAT) && ((TARGET_HARD_FLOAT&&Has_F16ALT)))
#define HAVE_indirect_jump 1
#define HAVE_tablejump 1
#define HAVE_prologue 1
#define HAVE_epilogue 1
#define HAVE_sibcall_epilogue 1
#define HAVE_return (riscv_can_use_return_insn ())
#define HAVE_eh_return 1
#define HAVE_doloop_end 1
#define HAVE_sibcall 1
#define HAVE_sibcall_value 1
#define HAVE_call 1
#define HAVE_call_value 1
#define HAVE_untyped_call 1
#define HAVE_memory_barrier 1
#define HAVE_mem_thread_fence 1
#define HAVE_atomic_compare_and_swapsi (TARGET_ATOMIC)
#define HAVE_atomic_compare_and_swapdi ((TARGET_ATOMIC) && (TARGET_64BIT))
#define HAVE_atomic_test_and_set (TARGET_ATOMIC)
extern rtx        gen_addsf3                               (rtx, rtx, rtx);
extern rtx        gen_adddf3                               (rtx, rtx, rtx);
extern rtx        gen_addhf3                               (rtx, rtx, rtx);
extern rtx        gen_addohf3                              (rtx, rtx, rtx);
extern rtx        gen_addsi3                               (rtx, rtx, rtx);
extern rtx        gen_adddi3                               (rtx, rtx, rtx);
extern rtx        gen_subsf3                               (rtx, rtx, rtx);
extern rtx        gen_subdf3                               (rtx, rtx, rtx);
extern rtx        gen_subhf3                               (rtx, rtx, rtx);
extern rtx        gen_subohf3                              (rtx, rtx, rtx);
extern rtx        gen_subdi3                               (rtx, rtx, rtx);
extern rtx        gen_subsi3                               (rtx, rtx, rtx);
extern rtx        gen_mulsf3                               (rtx, rtx, rtx);
extern rtx        gen_muldf3                               (rtx, rtx, rtx);
extern rtx        gen_mulhf3                               (rtx, rtx, rtx);
extern rtx        gen_mulohf3                              (rtx, rtx, rtx);
extern rtx        gen_mulsi3                               (rtx, rtx, rtx);
extern rtx        gen_muldi3                               (rtx, rtx, rtx);
extern rtx        gen_muldi3_highpart                      (rtx, rtx, rtx);
extern rtx        gen_umuldi3_highpart                     (rtx, rtx, rtx);
extern rtx        gen_usmuldi3_highpart                    (rtx, rtx, rtx);
extern rtx        gen_mulsi3_highpart                      (rtx, rtx, rtx);
extern rtx        gen_umulsi3_highpart                     (rtx, rtx, rtx);
extern rtx        gen_usmulsi3_highpart                    (rtx, rtx, rtx);
extern rtx        gen_mulsi3_64extended                    (rtx, rtx, rtx);
extern rtx        gen_mulsi3_u64extended                   (rtx, rtx, rtx);
extern rtx        gen_divsi3                               (rtx, rtx, rtx);
extern rtx        gen_udivsi3                              (rtx, rtx, rtx);
extern rtx        gen_modsi3                               (rtx, rtx, rtx);
extern rtx        gen_umodsi3                              (rtx, rtx, rtx);
extern rtx        gen_divdi3                               (rtx, rtx, rtx);
extern rtx        gen_udivdi3                              (rtx, rtx, rtx);
extern rtx        gen_moddi3                               (rtx, rtx, rtx);
extern rtx        gen_umoddi3                              (rtx, rtx, rtx);
extern rtx        gen_divsf3                               (rtx, rtx, rtx);
extern rtx        gen_divdf3                               (rtx, rtx, rtx);
extern rtx        gen_divhf3                               (rtx, rtx, rtx);
extern rtx        gen_divohf3                              (rtx, rtx, rtx);
extern rtx        gen_sqrtsf2                              (rtx, rtx);
extern rtx        gen_sqrtdf2                              (rtx, rtx);
extern rtx        gen_sqrthf2                              (rtx, rtx);
extern rtx        gen_sqrtohf2                             (rtx, rtx);
extern rtx        gen_fmasf4                               (rtx, rtx, rtx, rtx);
extern rtx        gen_fmadf4                               (rtx, rtx, rtx, rtx);
extern rtx        gen_fmahf4                               (rtx, rtx, rtx, rtx);
extern rtx        gen_fmaohf4                              (rtx, rtx, rtx, rtx);
extern rtx        gen_fmssf4                               (rtx, rtx, rtx, rtx);
extern rtx        gen_fmsdf4                               (rtx, rtx, rtx, rtx);
extern rtx        gen_fmshf4                               (rtx, rtx, rtx, rtx);
extern rtx        gen_fmsohf4                              (rtx, rtx, rtx, rtx);
extern rtx        gen_fnmssf4                              (rtx, rtx, rtx, rtx);
extern rtx        gen_fnmsdf4                              (rtx, rtx, rtx, rtx);
extern rtx        gen_fnmshf4                              (rtx, rtx, rtx, rtx);
extern rtx        gen_fnmsohf4                             (rtx, rtx, rtx, rtx);
extern rtx        gen_fnmasf4                              (rtx, rtx, rtx, rtx);
extern rtx        gen_fnmadf4                              (rtx, rtx, rtx, rtx);
extern rtx        gen_fnmahf4                              (rtx, rtx, rtx, rtx);
extern rtx        gen_fnmaohf4                             (rtx, rtx, rtx, rtx);
static inline rtx gen_mulv1sfsf3                           (rtx, rtx, rtx);
static inline rtx
gen_mulv1sfsf3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_mulhfsf3                             (rtx, rtx, rtx);
static inline rtx
gen_mulhfsf3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_mulohfsf3                            (rtx, rtx, rtx);
static inline rtx gen_maddv1sfsf3_internal                 (rtx, rtx, rtx);
static inline rtx
gen_maddv1sfsf3_internal(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_maddhfsf3_internal                   (rtx, rtx, rtx);
static inline rtx
gen_maddhfsf3_internal(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_maddohfsf3_internal                  (rtx, rtx, rtx);
extern rtx        gen_abssf2                               (rtx, rtx);
extern rtx        gen_absdf2                               (rtx, rtx);
extern rtx        gen_abshf2                               (rtx, rtx);
extern rtx        gen_absohf2                              (rtx, rtx);
extern rtx        gen_abssi2                               (rtx, rtx);
extern rtx        gen_absdi2                               (rtx, rtx);
extern rtx        gen_copysignsf3                          (rtx, rtx, rtx);
extern rtx        gen_copysigndf3                          (rtx, rtx, rtx);
extern rtx        gen_copysignhf3                          (rtx, rtx, rtx);
extern rtx        gen_copysignohf3                         (rtx, rtx, rtx);
extern rtx        gen_negsf2                               (rtx, rtx);
extern rtx        gen_negdf2                               (rtx, rtx);
extern rtx        gen_neghf2                               (rtx, rtx);
extern rtx        gen_negohf2                              (rtx, rtx);
extern rtx        gen_sminsf3                              (rtx, rtx, rtx);
extern rtx        gen_smindf3                              (rtx, rtx, rtx);
extern rtx        gen_sminhf3                              (rtx, rtx, rtx);
extern rtx        gen_sminohf3                             (rtx, rtx, rtx);
extern rtx        gen_smaxsf3                              (rtx, rtx, rtx);
extern rtx        gen_smaxdf3                              (rtx, rtx, rtx);
extern rtx        gen_smaxhf3                              (rtx, rtx, rtx);
extern rtx        gen_smaxohf3                             (rtx, rtx, rtx);
extern rtx        gen_sminsi3                              (rtx, rtx, rtx);
extern rtx        gen_smindi3                              (rtx, rtx, rtx);
extern rtx        gen_smaxsi3                              (rtx, rtx, rtx);
extern rtx        gen_smaxdi3                              (rtx, rtx, rtx);
extern rtx        gen_uminsi3                              (rtx, rtx, rtx);
extern rtx        gen_umindi3                              (rtx, rtx, rtx);
extern rtx        gen_umaxsi3                              (rtx, rtx, rtx);
extern rtx        gen_umaxdi3                              (rtx, rtx, rtx);
extern rtx        gen_avgsi3                               (rtx, rtx, rtx);
extern rtx        gen_avgusi3                              (rtx, rtx, rtx);
extern rtx        gen_popcountsi2                          (rtx, rtx);
extern rtx        gen_popcountdi2                          (rtx, rtx);
extern rtx        gen_clrsbsi2                             (rtx, rtx);
extern rtx        gen_fl1si2                               (rtx, rtx);
extern rtx        gen_ctzsi2                               (rtx, rtx);
extern rtx        gen_rotrsi3                              (rtx, rtx, rtx);
extern rtx        gen_truncsihi2                           (rtx, rtx);
extern rtx        gen_truncsiqi2                           (rtx, rtx);
extern rtx        gen_mulhisi3                             (rtx, rtx, rtx);
extern rtx        gen_umulhisi3                            (rtx, rtx, rtx);
extern rtx        gen_mulsForced_si3                       (rtx, rtx, rtx);
extern rtx        gen_muluForced_si3                       (rtx, rtx, rtx);
extern rtx        gen_smulhi3_highpart                     (rtx, rtx, rtx);
extern rtx        gen_umulhi3_highpart                     (rtx, rtx, rtx);
extern rtx        gen_mulhhs_si3                           (rtx, rtx, rtx);
extern rtx        gen_mulhhu_si3                           (rtx, rtx, rtx);
extern rtx        gen_mulsNr_si3                           (rtx, rtx, rtx, rtx);
extern rtx        gen_mulsRNr_si3                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mulsRNr_hi3                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_muluNr_si3                           (rtx, rtx, rtx, rtx);
extern rtx        gen_muluRNr_si3                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mulsForcedNr_si3                     (rtx, rtx, rtx, rtx);
extern rtx        gen_mulsForcedRNr_si3                    (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_muluForcedNr_si3                     (rtx, rtx, rtx, rtx);
extern rtx        gen_muluForcedRNr_si3                    (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mulhhsNr_si3                         (rtx, rtx, rtx, rtx);
extern rtx        gen_mulhhuNr_si3                         (rtx, rtx, rtx, rtx);
extern rtx        gen_mulhhsRNr_si3                        (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mulhhuRNr_si3                        (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_macshi_si4                           (rtx, rtx, rtx, rtx);
extern rtx        gen_macuhi_si4                           (rtx, rtx, rtx, rtx);
extern rtx        gen_macsForced_si3                       (rtx, rtx, rtx, rtx);
extern rtx        gen_macuForced_si3                       (rtx, rtx, rtx, rtx);
extern rtx        gen_machlsu_si4                          (rtx, rtx, rtx, rtx);
extern rtx        gen_machlu_si4                           (rtx, rtx, rtx, rtx);
extern rtx        gen_machhs_si4                           (rtx, rtx, rtx, rtx);
extern rtx        gen_machhu_si4                           (rtx, rtx, rtx, rtx);
extern rtx        gen_machls_si4                           (rtx, rtx, rtx, rtx);
extern rtx        gen_macsNr_si3                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_macuNr_si3                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_macsForcedNr_si3                     (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_macsForcedRNr_si3                    (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_macuForcedNr_si3                     (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_macuForcedRNr_si3                    (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_macsRNr_si3                          (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_macuRNr_si3                          (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_machhsNr_si3                         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_machhuNr_si3                         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_machhsRNr_si3                        (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_machhuRNr_si3                        (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_maddsisi4                            (rtx, rtx, rtx, rtx);
extern rtx        gen_msubsisi4                            (rtx, rtx, rtx, rtx);
extern rtx        gen_madddisisi4                          (rtx, rtx, rtx, rtx);
extern rtx        gen_msubdisisi4                          (rtx, rtx, rtx, rtx);
extern rtx        gen_madddiusiusi4                        (rtx, rtx, rtx, rtx);
extern rtx        gen_msubdiusiusi4                        (rtx, rtx, rtx, rtx);
extern rtx        gen_addN_si3                             (rtx, rtx, rtx, rtx);
extern rtx        gen_addNu_si3                            (rtx, rtx, rtx, rtx);
extern rtx        gen_addN_reg_si3                         (rtx, rtx, rtx, rtx);
extern rtx        gen_addNu_reg_si3                        (rtx, rtx, rtx, rtx);
extern rtx        gen_subN_si3                             (rtx, rtx, rtx, rtx);
extern rtx        gen_subNu_si3                            (rtx, rtx, rtx, rtx);
extern rtx        gen_subN_reg_si3                         (rtx, rtx, rtx, rtx);
extern rtx        gen_subNu_reg_si3                        (rtx, rtx, rtx, rtx);
extern rtx        gen_addRN_si3                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_addRNu_si3                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_addRN_reg_si3                        (rtx, rtx, rtx, rtx);
extern rtx        gen_addRNu_reg_si3                       (rtx, rtx, rtx, rtx);
extern rtx        gen_subRN_si3                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_subRNu_si3                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_subRN_reg_si3                        (rtx, rtx, rtx, rtx);
extern rtx        gen_subRNu_reg_si3                       (rtx, rtx, rtx, rtx);
extern rtx        gen_clip_maxmin                          (rtx, rtx, rtx, rtx);
extern rtx        gen_clip_minmax                          (rtx, rtx, rtx, rtx);
extern rtx        gen_clip_minmax_reg                      (rtx, rtx, rtx);
extern rtx        gen_clip_maxmin_reg                      (rtx, rtx, rtx);
extern rtx        gen_clipu_maxmin                         (rtx, rtx, rtx, rtx);
extern rtx        gen_clipu_minmax                         (rtx, rtx, rtx, rtx);
extern rtx        gen_clipu_maxmin_reg                     (rtx, rtx, rtx);
extern rtx        gen_clipu_minmax_reg                     (rtx, rtx, rtx);
extern rtx        gen_bclrsi3                              (rtx, rtx, rtx);
extern rtx        gen_bclrsi3_reg                          (rtx, rtx, rtx);
extern rtx        gen_bsetsi3                              (rtx, rtx, rtx);
extern rtx        gen_bsetsi3_reg                          (rtx, rtx, rtx);
extern rtx        gen_extvsi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_bextracts_reg_si3                    (rtx, rtx, rtx);
extern rtx        gen_bextracts_reg_alt_si3                (rtx, rtx, rtx);
extern rtx        gen_bextractu_reg_alt_si3                (rtx, rtx, rtx);
extern rtx        gen_extzvsi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_bextractu_reg_si3                    (rtx, rtx, rtx);
extern rtx        gen_insvsi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_invsipat1                            (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_binsert_reg_si3                      (rtx, rtx, rtx, rtx);
extern rtx        gen_andsi3                               (rtx, rtx, rtx);
extern rtx        gen_iorsi3                               (rtx, rtx, rtx);
extern rtx        gen_xorsi3                               (rtx, rtx, rtx);
extern rtx        gen_anddi3                               (rtx, rtx, rtx);
extern rtx        gen_iordi3                               (rtx, rtx, rtx);
extern rtx        gen_xordi3                               (rtx, rtx, rtx);
extern rtx        gen_and_di3                              (rtx, rtx, rtx);
extern rtx        gen_ior_di3                              (rtx, rtx, rtx);
extern rtx        gen_xor_di3                              (rtx, rtx, rtx);
extern rtx        gen_one_cmplsi2                          (rtx, rtx);
extern rtx        gen_one_cmpldi2                          (rtx, rtx);
extern rtx        gen_truncdfsf2                           (rtx, rtx);
extern rtx        gen_truncdfhf2                           (rtx, rtx);
extern rtx        gen_truncdfohf2                          (rtx, rtx);
extern rtx        gen_truncsfhf2                           (rtx, rtx);
extern rtx        gen_truncsfohf2                          (rtx, rtx);
extern rtx        gen_zero_extendsidi2                     (rtx, rtx);
extern rtx        gen_zero_extendhisi2                     (rtx, rtx);
extern rtx        gen_zero_extendhidi2                     (rtx, rtx);
extern rtx        gen_zero_extendqihi2                     (rtx, rtx);
extern rtx        gen_zero_extendqisi2                     (rtx, rtx);
extern rtx        gen_zero_extendqidi2                     (rtx, rtx);
extern rtx        gen_zero_extend_qidi2                    (rtx, rtx);
extern rtx        gen_zero_extend_hidi2                    (rtx, rtx);
extern rtx        gen_zero_extend_sidi2                    (rtx, rtx);
extern rtx        gen_extendsidi2                          (rtx, rtx);
extern rtx        gen_extendqihi2                          (rtx, rtx);
extern rtx        gen_extendqisi2                          (rtx, rtx);
extern rtx        gen_extendqidi2                          (rtx, rtx);
extern rtx        gen_extendhihi2                          (rtx, rtx);
extern rtx        gen_extendhisi2                          (rtx, rtx);
extern rtx        gen_extendhidi2                          (rtx, rtx);
extern rtx        gen_extendsfdf2                          (rtx, rtx);
extern rtx        gen_extendhfsf2                          (rtx, rtx);
extern rtx        gen_extendohfsf2                         (rtx, rtx);
extern rtx        gen_extendhfohf2                         (rtx, rtx);
extern rtx        gen_extendohfhf2                         (rtx, rtx);
extern rtx        gen_sign_extend_qidi2                    (rtx, rtx);
extern rtx        gen_sign_extend_hidi2                    (rtx, rtx);
extern rtx        gen_sign_extend_sidi2                    (rtx, rtx);
extern rtx        gen_fix_truncsfsi2                       (rtx, rtx);
extern rtx        gen_fix_truncsfdi2                       (rtx, rtx);
extern rtx        gen_fix_truncdfsi2                       (rtx, rtx);
extern rtx        gen_fix_truncdfdi2                       (rtx, rtx);
extern rtx        gen_fixuns_truncsfsi2                    (rtx, rtx);
extern rtx        gen_fixuns_truncsfdi2                    (rtx, rtx);
extern rtx        gen_fixuns_truncdfsi2                    (rtx, rtx);
extern rtx        gen_fixuns_truncdfdi2                    (rtx, rtx);
extern rtx        gen_floatsisf2                           (rtx, rtx);
extern rtx        gen_floatdisf2                           (rtx, rtx);
extern rtx        gen_floatsidf2                           (rtx, rtx);
extern rtx        gen_floatdidf2                           (rtx, rtx);
extern rtx        gen_floatunssisf2                        (rtx, rtx);
extern rtx        gen_floatunsdisf2                        (rtx, rtx);
extern rtx        gen_floatunssidf2                        (rtx, rtx);
extern rtx        gen_floatunsdidf2                        (rtx, rtx);
extern rtx        gen_lrintsfsi2                           (rtx, rtx);
extern rtx        gen_lroundsfsi2                          (rtx, rtx);
extern rtx        gen_lrintsfdi2                           (rtx, rtx);
extern rtx        gen_lroundsfdi2                          (rtx, rtx);
extern rtx        gen_lrintdfsi2                           (rtx, rtx);
extern rtx        gen_lrounddfsi2                          (rtx, rtx);
extern rtx        gen_lrintdfdi2                           (rtx, rtx);
extern rtx        gen_lrounddfdi2                          (rtx, rtx);
extern rtx        gen_lrinthfsi2                           (rtx, rtx);
extern rtx        gen_lroundhfsi2                          (rtx, rtx);
extern rtx        gen_lrinthfdi2                           (rtx, rtx);
extern rtx        gen_lroundhfdi2                          (rtx, rtx);
extern rtx        gen_lrintohfsi2                          (rtx, rtx);
extern rtx        gen_lroundohfsi2                         (rtx, rtx);
extern rtx        gen_lrintohfdi2                          (rtx, rtx);
extern rtx        gen_lroundohfdi2                         (rtx, rtx);
extern rtx        gen_fix_truncohfsi2                      (rtx, rtx);
extern rtx        gen_fix_truncohfdi2                      (rtx, rtx);
extern rtx        gen_fix_trunchfsi2                       (rtx, rtx);
extern rtx        gen_fix_trunchfdi2                       (rtx, rtx);
extern rtx        gen_fixuns_truncohfsi2                   (rtx, rtx);
extern rtx        gen_fixuns_truncohfdi2                   (rtx, rtx);
extern rtx        gen_fixuns_trunchfsi2                    (rtx, rtx);
extern rtx        gen_fixuns_trunchfdi2                    (rtx, rtx);
static inline rtx gen_floatsiv1sf2                         (rtx, rtx);
static inline rtx
gen_floatsiv1sf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_floatdiv1sf2                         (rtx, rtx);
static inline rtx
gen_floatdiv1sf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_floatsihf2                           (rtx, rtx);
extern rtx        gen_floatdihf2                           (rtx, rtx);
extern rtx        gen_floatsiohf2                          (rtx, rtx);
extern rtx        gen_floatdiohf2                          (rtx, rtx);
static inline rtx gen_floatunssiv1sf2                      (rtx, rtx);
static inline rtx
gen_floatunssiv1sf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_floatunsdiv1sf2                      (rtx, rtx);
static inline rtx
gen_floatunsdiv1sf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_floatunssihf2                        (rtx, rtx);
extern rtx        gen_floatunsdihf2                        (rtx, rtx);
extern rtx        gen_floatunssiohf2                       (rtx, rtx);
extern rtx        gen_floatunsdiohf2                       (rtx, rtx);
extern rtx        gen_got_loadsi                           (rtx, rtx);
extern rtx        gen_got_loaddi                           (rtx, rtx);
extern rtx        gen_tls_add_tp_lesi                      (rtx, rtx, rtx, rtx);
extern rtx        gen_tls_add_tp_ledi                      (rtx, rtx, rtx, rtx);
extern rtx        gen_got_load_tls_gdsi                    (rtx, rtx);
extern rtx        gen_got_load_tls_gddi                    (rtx, rtx);
extern rtx        gen_got_load_tls_iesi                    (rtx, rtx);
extern rtx        gen_got_load_tls_iedi                    (rtx, rtx);
extern rtx        gen_auipcsi                              (rtx, rtx, rtx);
extern rtx        gen_auipcdi                              (rtx, rtx, rtx);
extern rtx        gen_loadqi_ind_reg_reg                   (rtx, rtx, rtx);
extern rtx        gen_loadhi_ind_reg_reg                   (rtx, rtx, rtx);
extern rtx        gen_loadhf_ind_reg_reg                   (rtx, rtx, rtx);
extern rtx        gen_loadohf_ind_reg_reg                  (rtx, rtx, rtx);
extern rtx        gen_loadsi_ind_reg_reg                   (rtx, rtx, rtx);
extern rtx        gen_loadsf_ind_reg_reg                   (rtx, rtx, rtx);
extern rtx        gen_loadv2hi_ind_reg_reg                 (rtx, rtx, rtx);
extern rtx        gen_loadv2hf_ind_reg_reg                 (rtx, rtx, rtx);
extern rtx        gen_loadv2ohf_ind_reg_reg                (rtx, rtx, rtx);
extern rtx        gen_loadv4qi_ind_reg_reg                 (rtx, rtx, rtx);
extern rtx        gen_loadqi_ext_ind_reg_reg               (rtx, rtx, rtx);
extern rtx        gen_loadqi_uext_ind_reg_reg              (rtx, rtx, rtx);
extern rtx        gen_loadhi_ext_ind_reg_reg               (rtx, rtx, rtx);
extern rtx        gen_loadhi_uext_ind_reg_reg              (rtx, rtx, rtx);
extern rtx        gen_loadhf_ext_ind_reg_reg               (rtx, rtx, rtx);
extern rtx        gen_loadhf_uext_ind_reg_reg              (rtx, rtx, rtx);
extern rtx        gen_loadohf_ext_ind_reg_reg              (rtx, rtx, rtx);
extern rtx        gen_loadohf_uext_ind_reg_reg             (rtx, rtx, rtx);
extern rtx        gen_loadsi_ext_ind_reg_reg               (rtx, rtx, rtx);
extern rtx        gen_loadsi_uext_ind_reg_reg              (rtx, rtx, rtx);
extern rtx        gen_loadsf_ext_ind_reg_reg               (rtx, rtx, rtx);
extern rtx        gen_loadsf_uext_ind_reg_reg              (rtx, rtx, rtx);
extern rtx        gen_loadv2hi_ext_ind_reg_reg             (rtx, rtx, rtx);
extern rtx        gen_loadv2hi_uext_ind_reg_reg            (rtx, rtx, rtx);
extern rtx        gen_loadv2hf_ext_ind_reg_reg             (rtx, rtx, rtx);
extern rtx        gen_loadv2hf_uext_ind_reg_reg            (rtx, rtx, rtx);
extern rtx        gen_loadv2ohf_ext_ind_reg_reg            (rtx, rtx, rtx);
extern rtx        gen_loadv2ohf_uext_ind_reg_reg           (rtx, rtx, rtx);
extern rtx        gen_loadv4qi_ext_ind_reg_reg             (rtx, rtx, rtx);
extern rtx        gen_loadv4qi_uext_ind_reg_reg            (rtx, rtx, rtx);
extern rtx        gen_storeqi_ind_reg_reg                  (rtx, rtx, rtx);
extern rtx        gen_storehi_ind_reg_reg                  (rtx, rtx, rtx);
extern rtx        gen_storehf_ind_reg_reg                  (rtx, rtx, rtx);
extern rtx        gen_storeohf_ind_reg_reg                 (rtx, rtx, rtx);
extern rtx        gen_storesi_ind_reg_reg                  (rtx, rtx, rtx);
extern rtx        gen_storesf_ind_reg_reg                  (rtx, rtx, rtx);
extern rtx        gen_storev2hi_ind_reg_reg                (rtx, rtx, rtx);
extern rtx        gen_storev2hf_ind_reg_reg                (rtx, rtx, rtx);
extern rtx        gen_storev2ohf_ind_reg_reg               (rtx, rtx, rtx);
extern rtx        gen_storev4qi_ind_reg_reg                (rtx, rtx, rtx);
extern rtx        gen_load_evt_unit                        (rtx, rtx, rtx);
extern rtx        gen_load_evt_unit_internal               (rtx, rtx, rtx);
extern rtx        gen_read_spr                             (rtx, rtx);
extern rtx        gen_read_spr_vol                         (rtx, rtx);
extern rtx        gen_write_spr                            (rtx, rtx);
extern rtx        gen_read_then_write_spr                  (rtx, rtx, rtx);
extern rtx        gen_spr_bit_set                          (rtx, rtx);
extern rtx        gen_read_then_spr_bit_set                (rtx, rtx, rtx);
extern rtx        gen_spr_bit_clr                          (rtx, rtx);
extern rtx        gen_read_then_spr_bit_clr                (rtx, rtx, rtx);
extern rtx        gen_read_fcsr                            (rtx);
extern rtx        gen_write_fcsr                           (rtx);
extern rtx        gen_writesivol                           (rtx, rtx, rtx);
extern rtx        gen_writesi                              (rtx, rtx, rtx);
extern rtx        gen_readsivol                            (rtx, rtx, rtx);
extern rtx        gen_OffsetedRead                         (rtx, rtx, rtx);
extern rtx        gen_OffsetedReadHalf                     (rtx, rtx, rtx);
extern rtx        gen_OffsetedReadByte                     (rtx, rtx, rtx);
extern rtx        gen_OffsetedWrite                        (rtx, rtx, rtx);
extern rtx        gen_OffsetedWritePtrInternal             (rtx, rtx, rtx);
extern rtx        gen_OffsetedWriteHalf                    (rtx, rtx, rtx);
extern rtx        gen_OffsetedWriteByte                    (rtx, rtx, rtx);
extern rtx        gen_OffsetedReadOMP                      (rtx, rtx, rtx);
extern rtx        gen_OffsetedReadNonVol                   (rtx, rtx, rtx);
extern rtx        gen_loadqi_ind_postinc                   (rtx, rtx);
extern rtx        gen_loadhi_ind_postinc                   (rtx, rtx);
extern rtx        gen_loadhf_ind_postinc                   (rtx, rtx);
extern rtx        gen_loadohf_ind_postinc                  (rtx, rtx);
extern rtx        gen_loadsi_ind_postinc                   (rtx, rtx);
extern rtx        gen_loadsf_ind_postinc                   (rtx, rtx);
extern rtx        gen_loadv2hi_ind_postinc                 (rtx, rtx);
extern rtx        gen_loadv2hf_ind_postinc                 (rtx, rtx);
extern rtx        gen_loadv2ohf_ind_postinc                (rtx, rtx);
extern rtx        gen_loadv4qi_ind_postinc                 (rtx, rtx);
extern rtx        gen_loadqi_ext_ind_postinc               (rtx, rtx);
extern rtx        gen_loadqi_uext_ind_postinc              (rtx, rtx);
extern rtx        gen_loadhi_ext_ind_postinc               (rtx, rtx);
extern rtx        gen_loadhi_uext_ind_postinc              (rtx, rtx);
extern rtx        gen_loadhf_ext_ind_postinc               (rtx, rtx);
extern rtx        gen_loadhf_uext_ind_postinc              (rtx, rtx);
extern rtx        gen_loadohf_ext_ind_postinc              (rtx, rtx);
extern rtx        gen_loadohf_uext_ind_postinc             (rtx, rtx);
extern rtx        gen_loadsi_ext_ind_postinc               (rtx, rtx);
extern rtx        gen_loadsi_uext_ind_postinc              (rtx, rtx);
extern rtx        gen_loadsf_ext_ind_postinc               (rtx, rtx);
extern rtx        gen_loadsf_uext_ind_postinc              (rtx, rtx);
extern rtx        gen_loadv2hi_ext_ind_postinc             (rtx, rtx);
extern rtx        gen_loadv2hi_uext_ind_postinc            (rtx, rtx);
extern rtx        gen_loadv2hf_ext_ind_postinc             (rtx, rtx);
extern rtx        gen_loadv2hf_uext_ind_postinc            (rtx, rtx);
extern rtx        gen_loadv2ohf_ext_ind_postinc            (rtx, rtx);
extern rtx        gen_loadv2ohf_uext_ind_postinc           (rtx, rtx);
extern rtx        gen_loadv4qi_ext_ind_postinc             (rtx, rtx);
extern rtx        gen_loadv4qi_uext_ind_postinc            (rtx, rtx);
extern rtx        gen_loadqi_ind_postdec                   (rtx, rtx);
extern rtx        gen_loadhi_ind_postdec                   (rtx, rtx);
extern rtx        gen_loadhf_ind_postdec                   (rtx, rtx);
extern rtx        gen_loadohf_ind_postdec                  (rtx, rtx);
extern rtx        gen_loadsi_ind_postdec                   (rtx, rtx);
extern rtx        gen_loadsf_ind_postdec                   (rtx, rtx);
extern rtx        gen_loadv2hi_ind_postdec                 (rtx, rtx);
extern rtx        gen_loadv2hf_ind_postdec                 (rtx, rtx);
extern rtx        gen_loadv2ohf_ind_postdec                (rtx, rtx);
extern rtx        gen_loadv4qi_ind_postdec                 (rtx, rtx);
extern rtx        gen_loadqi_ext_ind_postdec               (rtx, rtx);
extern rtx        gen_loadqi_uext_ind_postdec              (rtx, rtx);
extern rtx        gen_loadhi_ext_ind_postdec               (rtx, rtx);
extern rtx        gen_loadhi_uext_ind_postdec              (rtx, rtx);
extern rtx        gen_loadhf_ext_ind_postdec               (rtx, rtx);
extern rtx        gen_loadhf_uext_ind_postdec              (rtx, rtx);
extern rtx        gen_loadohf_ext_ind_postdec              (rtx, rtx);
extern rtx        gen_loadohf_uext_ind_postdec             (rtx, rtx);
extern rtx        gen_loadsi_ext_ind_postdec               (rtx, rtx);
extern rtx        gen_loadsi_uext_ind_postdec              (rtx, rtx);
extern rtx        gen_loadsf_ext_ind_postdec               (rtx, rtx);
extern rtx        gen_loadsf_uext_ind_postdec              (rtx, rtx);
extern rtx        gen_loadv2hi_ext_ind_postdec             (rtx, rtx);
extern rtx        gen_loadv2hi_uext_ind_postdec            (rtx, rtx);
extern rtx        gen_loadv2hf_ext_ind_postdec             (rtx, rtx);
extern rtx        gen_loadv2hf_uext_ind_postdec            (rtx, rtx);
extern rtx        gen_loadv2ohf_ext_ind_postdec            (rtx, rtx);
extern rtx        gen_loadv2ohf_uext_ind_postdec           (rtx, rtx);
extern rtx        gen_loadv4qi_ext_ind_postdec             (rtx, rtx);
extern rtx        gen_loadv4qi_uext_ind_postdec            (rtx, rtx);
extern rtx        gen_loadqi_ind_post_mod                  (rtx, rtx, rtx);
extern rtx        gen_loadhi_ind_post_mod                  (rtx, rtx, rtx);
extern rtx        gen_loadhf_ind_post_mod                  (rtx, rtx, rtx);
extern rtx        gen_loadohf_ind_post_mod                 (rtx, rtx, rtx);
extern rtx        gen_loadsi_ind_post_mod                  (rtx, rtx, rtx);
extern rtx        gen_loadsf_ind_post_mod                  (rtx, rtx, rtx);
extern rtx        gen_loadv2hi_ind_post_mod                (rtx, rtx, rtx);
extern rtx        gen_loadv2hf_ind_post_mod                (rtx, rtx, rtx);
extern rtx        gen_loadv2ohf_ind_post_mod               (rtx, rtx, rtx);
extern rtx        gen_loadv4qi_ind_post_mod                (rtx, rtx, rtx);
extern rtx        gen_loadqi_ext_ind_post_mod              (rtx, rtx, rtx);
extern rtx        gen_loadqi_uext_ind_post_mod             (rtx, rtx, rtx);
extern rtx        gen_loadhi_ext_ind_post_mod              (rtx, rtx, rtx);
extern rtx        gen_loadhi_uext_ind_post_mod             (rtx, rtx, rtx);
extern rtx        gen_loadhf_ext_ind_post_mod              (rtx, rtx, rtx);
extern rtx        gen_loadhf_uext_ind_post_mod             (rtx, rtx, rtx);
extern rtx        gen_loadohf_ext_ind_post_mod             (rtx, rtx, rtx);
extern rtx        gen_loadohf_uext_ind_post_mod            (rtx, rtx, rtx);
extern rtx        gen_loadsi_ext_ind_post_mod              (rtx, rtx, rtx);
extern rtx        gen_loadsi_uext_ind_post_mod             (rtx, rtx, rtx);
extern rtx        gen_loadsf_ext_ind_post_mod              (rtx, rtx, rtx);
extern rtx        gen_loadsf_uext_ind_post_mod             (rtx, rtx, rtx);
extern rtx        gen_loadv2hi_ext_ind_post_mod            (rtx, rtx, rtx);
extern rtx        gen_loadv2hi_uext_ind_post_mod           (rtx, rtx, rtx);
extern rtx        gen_loadv2hf_ext_ind_post_mod            (rtx, rtx, rtx);
extern rtx        gen_loadv2hf_uext_ind_post_mod           (rtx, rtx, rtx);
extern rtx        gen_loadv2ohf_ext_ind_post_mod           (rtx, rtx, rtx);
extern rtx        gen_loadv2ohf_uext_ind_post_mod          (rtx, rtx, rtx);
extern rtx        gen_loadv4qi_ext_ind_post_mod            (rtx, rtx, rtx);
extern rtx        gen_loadv4qi_uext_ind_post_mod           (rtx, rtx, rtx);
extern rtx        gen_storeqi_ind_postinc                  (rtx, rtx);
extern rtx        gen_storehi_ind_postinc                  (rtx, rtx);
extern rtx        gen_storehf_ind_postinc                  (rtx, rtx);
extern rtx        gen_storeohf_ind_postinc                 (rtx, rtx);
extern rtx        gen_storesi_ind_postinc                  (rtx, rtx);
extern rtx        gen_storesf_ind_postinc                  (rtx, rtx);
extern rtx        gen_storev2hi_ind_postinc                (rtx, rtx);
extern rtx        gen_storev2hf_ind_postinc                (rtx, rtx);
extern rtx        gen_storev2ohf_ind_postinc               (rtx, rtx);
extern rtx        gen_storev4qi_ind_postinc                (rtx, rtx);
extern rtx        gen_storeqi_ind_postdec                  (rtx, rtx);
extern rtx        gen_storehi_ind_postdec                  (rtx, rtx);
extern rtx        gen_storehf_ind_postdec                  (rtx, rtx);
extern rtx        gen_storeohf_ind_postdec                 (rtx, rtx);
extern rtx        gen_storesi_ind_postdec                  (rtx, rtx);
extern rtx        gen_storesf_ind_postdec                  (rtx, rtx);
extern rtx        gen_storev2hi_ind_postdec                (rtx, rtx);
extern rtx        gen_storev2hf_ind_postdec                (rtx, rtx);
extern rtx        gen_storev2ohf_ind_postdec               (rtx, rtx);
extern rtx        gen_storev4qi_ind_postdec                (rtx, rtx);
extern rtx        gen_storeqi_ind_postmod                  (rtx, rtx, rtx);
extern rtx        gen_storehi_ind_postmod                  (rtx, rtx, rtx);
extern rtx        gen_storehf_ind_postmod                  (rtx, rtx, rtx);
extern rtx        gen_storeohf_ind_postmod                 (rtx, rtx, rtx);
extern rtx        gen_storesi_ind_postmod                  (rtx, rtx, rtx);
extern rtx        gen_storesf_ind_postmod                  (rtx, rtx, rtx);
extern rtx        gen_storev2hi_ind_postmod                (rtx, rtx, rtx);
extern rtx        gen_storev2hf_ind_postmod                (rtx, rtx, rtx);
extern rtx        gen_storev2ohf_ind_postmod               (rtx, rtx, rtx);
extern rtx        gen_storev4qi_ind_postmod                (rtx, rtx, rtx);
extern rtx        gen_movv2hi_internal                     (rtx, rtx);
extern rtx        gen_movv4qi_internal                     (rtx, rtx);
extern rtx        gen_fence                                (void);
extern rtx        gen_fence_i                              (void);
extern rtx        gen_ashlsi3                              (rtx, rtx, rtx);
extern rtx        gen_ashrsi3                              (rtx, rtx, rtx);
extern rtx        gen_lshrsi3                              (rtx, rtx, rtx);
extern rtx        gen_ashldi3                              (rtx, rtx, rtx);
extern rtx        gen_ashrdi3                              (rtx, rtx, rtx);
extern rtx        gen_lshrdi3                              (rtx, rtx, rtx);
extern rtx        gen_ashlsidi3                            (rtx, rtx, rtx);
extern rtx        gen_ashrsidi3                            (rtx, rtx, rtx);
extern rtx        gen_lshrsidi3                            (rtx, rtx, rtx);
extern rtx        gen_vec_initv2hi_internal                (rtx, rtx);
extern rtx        gen_vec_initv4qi_internal                (rtx, rtx);
extern rtx        gen_vec_initv2hf_internal_x              (rtx, rtx);
extern rtx        gen_vec_initv2ohf_internal_x             (rtx, rtx);
extern rtx        gen_movv2hf_internal                     (rtx, rtx);
extern rtx        gen_movv2ohf_internal                    (rtx, rtx);
extern rtx        gen_movv1sf_internal                     (rtx, rtx);
extern rtx        gen_extendv2hfv2ohf2                     (rtx, rtx);
extern rtx        gen_extendv2ohfv2hf2                     (rtx, rtx);
extern rtx        gen_floatv2hiv2hf2_internal              (rtx, rtx);
extern rtx        gen_floatv2hiv2ohf2_internal             (rtx, rtx);
extern rtx        gen_floatunsv2hiv2hf2_internal           (rtx, rtx);
extern rtx        gen_floatunsv2hiv2ohf2_internal          (rtx, rtx);
extern rtx        gen_fix_truncv2hfv2hi2_internal          (rtx, rtx);
extern rtx        gen_fix_truncv2ohfv2hi2_internal         (rtx, rtx);
extern rtx        gen_fixuns_truncv2hfv2hi2_internal       (rtx, rtx);
extern rtx        gen_fixuns_truncv2ohfv2hi2_internal      (rtx, rtx);
extern rtx        gen_lshrimmv2hf                          (rtx, rtx, rtx);
extern rtx        gen_lshrimmv2ohf                         (rtx, rtx, rtx);
extern rtx        gen_lshrimmv2hi                          (rtx, rtx, rtx);
extern rtx        gen_lshrimmv4qi                          (rtx, rtx, rtx);
extern rtx        gen_orv2hf                               (rtx, rtx, rtx);
extern rtx        gen_orv2ohf                              (rtx, rtx, rtx);
extern rtx        gen_orv2hi                               (rtx, rtx, rtx);
extern rtx        gen_orv4qi                               (rtx, rtx, rtx);
extern rtx        gen_vec_pack_trunc_v1sf                  (rtx, rtx, rtx);
extern rtx        gen_vec_pack_trunc_v1sf_to_v2hf_builtin  (rtx, rtx, rtx);
extern rtx        gen_vec_pack_trunc_v1sf_alt              (rtx, rtx, rtx);
extern rtx        gen_vec_pack_trunc_v1sf_to_v2ohf_builtin (rtx, rtx, rtx);
extern rtx        gen_vec_unpacks_lo_v2hf                  (rtx, rtx);
extern rtx        gen_vec_unpacks_lo_v2ohf                 (rtx, rtx);
extern rtx        gen_vec_pack_v2hf                        (rtx, rtx, rtx);
extern rtx        gen_vec_pack_v2ohf                       (rtx, rtx, rtx);
extern rtx        gen_vec_pack_v2hi                        (rtx, rtx, rtx);
extern rtx        gen_vec_pack_v4qi_lo                     (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_pack_v4qi_lo_first               (rtx, rtx, rtx);
extern rtx        gen_vec_pack_v4qi_hi                     (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_permv2hf_internal2_1             (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_permv2ohf_internal2_1            (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_permv2hi_internal2_1             (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_permv2hf_internal2               (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_permv2ohf_internal2              (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_permv2hi_internal2               (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_permv2hf_int1                    (rtx, rtx, rtx);
extern rtx        gen_vec_permv2ohf_int1                   (rtx, rtx, rtx);
extern rtx        gen_vec_permv2hi_int1                    (rtx, rtx, rtx);
extern rtx        gen_vec_permv2hf_low                     (rtx, rtx, rtx);
extern rtx        gen_vec_permv2ohf_low                    (rtx, rtx, rtx);
extern rtx        gen_vec_permv2hi_low                     (rtx, rtx, rtx);
extern rtx        gen_vec_permv2hf_high                    (rtx, rtx, rtx);
extern rtx        gen_vec_permv2ohf_high                   (rtx, rtx, rtx);
extern rtx        gen_vec_permv2hi_high                    (rtx, rtx, rtx);
extern rtx        gen_vec_permv4qi_internal2_1             (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_permv4qi_internal2               (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_permv4qi_int1                    (rtx, rtx, rtx);
extern rtx        gen_vec_setv2hf_internal                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_setv2ohf_internal                (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_setv2hi_internal                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_setv4qi_internal                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_set_firstv2hf_internal           (rtx, rtx, rtx);
extern rtx        gen_vec_set_firstv2ohf_internal          (rtx, rtx, rtx);
extern rtx        gen_vec_set_firstv2hi_internal           (rtx, rtx, rtx);
extern rtx        gen_vec_set_firstv4qi_internal           (rtx, rtx, rtx);
extern rtx        gen_vec_extract_sext_qi_v2hf             (rtx, rtx, rtx);
extern rtx        gen_vec_extract_sext_qi_v2ohf            (rtx, rtx, rtx);
extern rtx        gen_vec_extract_sext_qi_v2hi             (rtx, rtx, rtx);
extern rtx        gen_vec_extract_sext_qi_v4qi             (rtx, rtx, rtx);
extern rtx        gen_vec_extract_sext_hi_v2hf             (rtx, rtx, rtx);
extern rtx        gen_vec_extract_sext_hi_v2ohf            (rtx, rtx, rtx);
extern rtx        gen_vec_extract_sext_hi_v2hi             (rtx, rtx, rtx);
extern rtx        gen_vec_extract_sext_hi_v4qi             (rtx, rtx, rtx);
extern rtx        gen_vec_extract_sext_si_v2hf             (rtx, rtx, rtx);
extern rtx        gen_vec_extract_sext_si_v2ohf            (rtx, rtx, rtx);
extern rtx        gen_vec_extract_sext_si_v2hi             (rtx, rtx, rtx);
extern rtx        gen_vec_extract_sext_si_v4qi             (rtx, rtx, rtx);
extern rtx        gen_vec_extract_zext_qi_v2hf             (rtx, rtx, rtx);
extern rtx        gen_vec_extract_zext_qi_v2ohf            (rtx, rtx, rtx);
extern rtx        gen_vec_extract_zext_qi_v2hi             (rtx, rtx, rtx);
extern rtx        gen_vec_extract_zext_qi_v4qi             (rtx, rtx, rtx);
extern rtx        gen_vec_extract_zext_hi_v2hf             (rtx, rtx, rtx);
extern rtx        gen_vec_extract_zext_hi_v2ohf            (rtx, rtx, rtx);
extern rtx        gen_vec_extract_zext_hi_v2hi             (rtx, rtx, rtx);
extern rtx        gen_vec_extract_zext_hi_v4qi             (rtx, rtx, rtx);
extern rtx        gen_vec_extract_zext_si_v2hf             (rtx, rtx, rtx);
extern rtx        gen_vec_extract_zext_si_v2ohf            (rtx, rtx, rtx);
extern rtx        gen_vec_extract_zext_si_v2hi             (rtx, rtx, rtx);
extern rtx        gen_vec_extract_zext_si_v4qi             (rtx, rtx, rtx);
extern rtx        gen_vec_extractv2hf                      (rtx, rtx, rtx);
extern rtx        gen_vec_extractv2ohf                     (rtx, rtx, rtx);
extern rtx        gen_vec_extractv2hi                      (rtx, rtx, rtx);
extern rtx        gen_vec_extractv4qi                      (rtx, rtx, rtx);
extern rtx        gen_cplx_conjhi2                         (rtx, rtx);
extern rtx        gen_cplx_conjsi3                         (rtx, rtx, rtx);
extern rtx        gen_add_div2_v2hi3                       (rtx, rtx, rtx);
extern rtx        gen_add_div2_v4qi3                       (rtx, rtx, rtx);
extern rtx        gen_add_div4_v2hi3                       (rtx, rtx, rtx);
extern rtx        gen_add_div8_v2hi3                       (rtx, rtx, rtx);
extern rtx        gen_add_div4_v4qi3                       (rtx, rtx, rtx);
extern rtx        gen_sub_div2_v2hi3                       (rtx, rtx, rtx);
extern rtx        gen_sub_div2_v4qi3                       (rtx, rtx, rtx);
extern rtx        gen_sub_div4_v2hi3                       (rtx, rtx, rtx);
extern rtx        gen_sub_div8_v2hi3                       (rtx, rtx, rtx);
extern rtx        gen_sub_div4_v4qi3                       (rtx, rtx, rtx);
extern rtx        gen_subrotmj_v2hi3                       (rtx, rtx, rtx);
extern rtx        gen_addv2hf3                             (rtx, rtx, rtx);
extern rtx        gen_subv2hf3                             (rtx, rtx, rtx);
extern rtx        gen_sminv2hf3                            (rtx, rtx, rtx);
extern rtx        gen_smaxv2hf3                            (rtx, rtx, rtx);
extern rtx        gen_mulv2hf3                             (rtx, rtx, rtx);
extern rtx        gen_addv2ohf3                            (rtx, rtx, rtx);
extern rtx        gen_subv2ohf3                            (rtx, rtx, rtx);
extern rtx        gen_sminv2ohf3                           (rtx, rtx, rtx);
extern rtx        gen_smaxv2ohf3                           (rtx, rtx, rtx);
extern rtx        gen_mulv2ohf3                            (rtx, rtx, rtx);
extern rtx        gen_addscv2hf3                           (rtx, rtx, rtx);
extern rtx        gen_subscv2hf3                           (rtx, rtx, rtx);
extern rtx        gen_sminscv2hf3                          (rtx, rtx, rtx);
extern rtx        gen_smaxscv2hf3                          (rtx, rtx, rtx);
extern rtx        gen_mulscv2hf3                           (rtx, rtx, rtx);
extern rtx        gen_addscv2ohf3                          (rtx, rtx, rtx);
extern rtx        gen_subscv2ohf3                          (rtx, rtx, rtx);
extern rtx        gen_sminscv2ohf3                         (rtx, rtx, rtx);
extern rtx        gen_smaxscv2ohf3                         (rtx, rtx, rtx);
extern rtx        gen_mulscv2ohf3                          (rtx, rtx, rtx);
extern rtx        gen_addv2hi3                             (rtx, rtx, rtx);
extern rtx        gen_subv2hi3                             (rtx, rtx, rtx);
extern rtx        gen_sminv2hi3                            (rtx, rtx, rtx);
extern rtx        gen_smaxv2hi3                            (rtx, rtx, rtx);
extern rtx        gen_addv4qi3                             (rtx, rtx, rtx);
extern rtx        gen_subv4qi3                             (rtx, rtx, rtx);
extern rtx        gen_sminv4qi3                            (rtx, rtx, rtx);
extern rtx        gen_smaxv4qi3                            (rtx, rtx, rtx);
extern rtx        gen_addscv2hi3                           (rtx, rtx, rtx);
extern rtx        gen_subscv2hi3                           (rtx, rtx, rtx);
extern rtx        gen_sminscv2hi3                          (rtx, rtx, rtx);
extern rtx        gen_smaxscv2hi3                          (rtx, rtx, rtx);
extern rtx        gen_addscv4qi3                           (rtx, rtx, rtx);
extern rtx        gen_subscv4qi3                           (rtx, rtx, rtx);
extern rtx        gen_sminscv4qi3                          (rtx, rtx, rtx);
extern rtx        gen_smaxscv4qi3                          (rtx, rtx, rtx);
extern rtx        gen_add_swap_scv2hi3                     (rtx, rtx, rtx);
extern rtx        gen_sub_swap_scv2hi3                     (rtx, rtx, rtx);
extern rtx        gen_smin_swap_scv2hi3                    (rtx, rtx, rtx);
extern rtx        gen_smax_swap_scv2hi3                    (rtx, rtx, rtx);
extern rtx        gen_add_swap_scv4qi3                     (rtx, rtx, rtx);
extern rtx        gen_sub_swap_scv4qi3                     (rtx, rtx, rtx);
extern rtx        gen_smin_swap_scv4qi3                    (rtx, rtx, rtx);
extern rtx        gen_smax_swap_scv4qi3                    (rtx, rtx, rtx);
extern rtx        gen_fmav2hf3_internal                    (rtx, rtx, rtx);
extern rtx        gen_fmav2ohf3_internal                   (rtx, rtx, rtx);
extern rtx        gen_fmsv2hf4                             (rtx, rtx, rtx, rtx);
extern rtx        gen_fmsv2ohf4                            (rtx, rtx, rtx, rtx);
extern rtx        gen_copysignv2hf3                        (rtx, rtx, rtx);
extern rtx        gen_copysignv2ohf3                       (rtx, rtx, rtx);
extern rtx        gen_uminv2hi3                            (rtx, rtx, rtx);
extern rtx        gen_umaxv2hi3                            (rtx, rtx, rtx);
extern rtx        gen_uminv4qi3                            (rtx, rtx, rtx);
extern rtx        gen_umaxv4qi3                            (rtx, rtx, rtx);
extern rtx        gen_uminscv2hi3                          (rtx, rtx, rtx);
extern rtx        gen_umaxscv2hi3                          (rtx, rtx, rtx);
extern rtx        gen_uminscv4qi3                          (rtx, rtx, rtx);
extern rtx        gen_umaxscv4qi3                          (rtx, rtx, rtx);
extern rtx        gen_umin_swap_scv2hi3                    (rtx, rtx, rtx);
extern rtx        gen_umax_swap_scv2hi3                    (rtx, rtx, rtx);
extern rtx        gen_umin_swap_scv4qi3                    (rtx, rtx, rtx);
extern rtx        gen_umax_swap_scv4qi3                    (rtx, rtx, rtx);
extern rtx        gen_vlshrv2hi3                           (rtx, rtx, rtx);
extern rtx        gen_vashrv2hi3                           (rtx, rtx, rtx);
extern rtx        gen_vashlv2hi3                           (rtx, rtx, rtx);
extern rtx        gen_vlshrv4qi3                           (rtx, rtx, rtx);
extern rtx        gen_vashrv4qi3                           (rtx, rtx, rtx);
extern rtx        gen_vashlv4qi3                           (rtx, rtx, rtx);
extern rtx        gen_vlshrscv2hi3                         (rtx, rtx, rtx);
extern rtx        gen_vashrscv2hi3                         (rtx, rtx, rtx);
extern rtx        gen_vashlscv2hi3                         (rtx, rtx, rtx);
extern rtx        gen_vlshrscv4qi3                         (rtx, rtx, rtx);
extern rtx        gen_vashrscv4qi3                         (rtx, rtx, rtx);
extern rtx        gen_vashlscv4qi3                         (rtx, rtx, rtx);
extern rtx        gen_avgv2hi3                             (rtx, rtx, rtx);
extern rtx        gen_avgv4qi3                             (rtx, rtx, rtx);
extern rtx        gen_avgscv2hi3                           (rtx, rtx, rtx);
extern rtx        gen_avgscv4qi3                           (rtx, rtx, rtx);
extern rtx        gen_avgsc_swap_v2hi3                     (rtx, rtx, rtx);
extern rtx        gen_avgsc_swap_v4qi3                     (rtx, rtx, rtx);
extern rtx        gen_avgv2uhi3                            (rtx, rtx, rtx);
extern rtx        gen_avgv4uqi3                            (rtx, rtx, rtx);
extern rtx        gen_avgscv2uhi3                          (rtx, rtx, rtx);
extern rtx        gen_avgscv4uqi3                          (rtx, rtx, rtx);
extern rtx        gen_avgsc_swap_v2uhi3                    (rtx, rtx, rtx);
extern rtx        gen_avgsc_swap_v4uqi3                    (rtx, rtx, rtx);
extern rtx        gen_andv2hf3                             (rtx, rtx, rtx);
extern rtx        gen_iorv2hf3                             (rtx, rtx, rtx);
extern rtx        gen_exorv2hf3                            (rtx, rtx, rtx);
extern rtx        gen_andv2ohf3                            (rtx, rtx, rtx);
extern rtx        gen_iorv2ohf3                            (rtx, rtx, rtx);
extern rtx        gen_exorv2ohf3                           (rtx, rtx, rtx);
extern rtx        gen_andv2hi3                             (rtx, rtx, rtx);
extern rtx        gen_iorv2hi3                             (rtx, rtx, rtx);
extern rtx        gen_exorv2hi3                            (rtx, rtx, rtx);
extern rtx        gen_andv4qi3                             (rtx, rtx, rtx);
extern rtx        gen_iorv4qi3                             (rtx, rtx, rtx);
extern rtx        gen_exorv4qi3                            (rtx, rtx, rtx);
extern rtx        gen_andscv2hf3                           (rtx, rtx, rtx);
extern rtx        gen_iorscv2hf3                           (rtx, rtx, rtx);
extern rtx        gen_exorscv2hf3                          (rtx, rtx, rtx);
extern rtx        gen_andscv2ohf3                          (rtx, rtx, rtx);
extern rtx        gen_iorscv2ohf3                          (rtx, rtx, rtx);
extern rtx        gen_exorscv2ohf3                         (rtx, rtx, rtx);
extern rtx        gen_andscv2hi3                           (rtx, rtx, rtx);
extern rtx        gen_iorscv2hi3                           (rtx, rtx, rtx);
extern rtx        gen_exorscv2hi3                          (rtx, rtx, rtx);
extern rtx        gen_andscv4qi3                           (rtx, rtx, rtx);
extern rtx        gen_iorscv4qi3                           (rtx, rtx, rtx);
extern rtx        gen_exorscv4qi3                          (rtx, rtx, rtx);
extern rtx        gen_and_swap_scv2hf3                     (rtx, rtx, rtx);
extern rtx        gen_ior_swap_scv2hf3                     (rtx, rtx, rtx);
extern rtx        gen_exor_swap_scv2hf3                    (rtx, rtx, rtx);
extern rtx        gen_and_swap_scv2ohf3                    (rtx, rtx, rtx);
extern rtx        gen_ior_swap_scv2ohf3                    (rtx, rtx, rtx);
extern rtx        gen_exor_swap_scv2ohf3                   (rtx, rtx, rtx);
extern rtx        gen_and_swap_scv2hi3                     (rtx, rtx, rtx);
extern rtx        gen_ior_swap_scv2hi3                     (rtx, rtx, rtx);
extern rtx        gen_exor_swap_scv2hi3                    (rtx, rtx, rtx);
extern rtx        gen_and_swap_scv4qi3                     (rtx, rtx, rtx);
extern rtx        gen_ior_swap_scv4qi3                     (rtx, rtx, rtx);
extern rtx        gen_exor_swap_scv4qi3                    (rtx, rtx, rtx);
extern rtx        gen_absv2hf2                             (rtx, rtx);
extern rtx        gen_absv2ohf2                            (rtx, rtx);
extern rtx        gen_absv2hi2                             (rtx, rtx);
extern rtx        gen_absv4qi2                             (rtx, rtx);
extern rtx        gen_negv2hf2                             (rtx, rtx);
extern rtx        gen_negv2ohf2                            (rtx, rtx);
extern rtx        gen_negv2hi2                             (rtx, rtx);
extern rtx        gen_negv4qi2                             (rtx, rtx);
extern rtx        gen_bitrevsi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_cplxmulsv2hi_low_first               (rtx, rtx, rtx);
extern rtx        gen_cplxmulsv2hi_div2_low_first          (rtx, rtx, rtx);
extern rtx        gen_cplxmulsv2hi_div4_low_first          (rtx, rtx, rtx);
extern rtx        gen_cplxmulsv2hi_div8_low_first          (rtx, rtx, rtx);
extern rtx        gen_cplxmulsv2hi_hi                      (rtx, rtx, rtx, rtx);
extern rtx        gen_cplxmulsv2hi_div2_hi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_cplxmulsv2hi_div4_hi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_cplxmulsv2hi_div8_hi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_cplxmulsv2hi                         (rtx, rtx, rtx);
extern rtx        gen_cplxmulsv2hi_div2                    (rtx, rtx, rtx);
extern rtx        gen_cplxmulsv2hi_div4                    (rtx, rtx, rtx);
extern rtx        gen_vec_vit_max_v2hi                     (rtx, rtx, rtx);
extern rtx        gen_vec_vit_sel_v2hi                     (rtx, rtx, rtx);
extern rtx        gen_dotpv2hi                             (rtx, rtx, rtx);
extern rtx        gen_dotspscv2hi_le                       (rtx, rtx, rtx);
extern rtx        gen_reduc_plus_scal_v2hi                 (rtx, rtx);
extern rtx        gen_dotupv2hi                            (rtx, rtx, rtx);
extern rtx        gen_dotupscv2hi_le                       (rtx, rtx, rtx);
extern rtx        gen_dotuspv2hi                           (rtx, rtx, rtx);
extern rtx        gen_dotuspscv2hi_le                      (rtx, rtx, rtx);
extern rtx        gen_dotpv4qi                             (rtx, rtx, rtx);
extern rtx        gen_reduc_plus_scal_v4qi                 (rtx, rtx);
extern rtx        gen_dotspscv4qi_le                       (rtx, rtx, rtx);
extern rtx        gen_dotupv4qi                            (rtx, rtx, rtx);
extern rtx        gen_dotupscv4qi_le                       (rtx, rtx, rtx);
extern rtx        gen_dotuspv4qi                           (rtx, rtx, rtx);
extern rtx        gen_dotuspscv4qi_le                      (rtx, rtx, rtx);
extern rtx        gen_sdot_prodv2hi                        (rtx, rtx, rtx, rtx);
extern rtx        gen_sdotspscv2hi_le                      (rtx, rtx, rtx, rtx);
extern rtx        gen_udot_prodv2hi                        (rtx, rtx, rtx, rtx);
extern rtx        gen_sdotupscv2hi_le                      (rtx, rtx, rtx, rtx);
extern rtx        gen_sdotuspv2hi                          (rtx, rtx, rtx, rtx);
extern rtx        gen_sdotuspscv2hi_le                     (rtx, rtx, rtx, rtx);
extern rtx        gen_sdot_prodv4qi                        (rtx, rtx, rtx, rtx);
extern rtx        gen_sdotspscv4qi_le                      (rtx, rtx, rtx, rtx);
extern rtx        gen_udot_prodv4qi                        (rtx, rtx, rtx, rtx);
extern rtx        gen_sdotupscv4qi_le                      (rtx, rtx, rtx, rtx);
extern rtx        gen_sdotuspv4qi                          (rtx, rtx, rtx, rtx);
extern rtx        gen_sdotuspscv4qi_le                     (rtx, rtx, rtx, rtx);
extern rtx        gen_cmpv2hf_eq                           (rtx, rtx, rtx);
extern rtx        gen_cmpv2hf_ne                           (rtx, rtx, rtx);
extern rtx        gen_cmpv2hf_le                           (rtx, rtx, rtx);
extern rtx        gen_cmpv2hf_lt                           (rtx, rtx, rtx);
extern rtx        gen_cmpv2hf_ge                           (rtx, rtx, rtx);
extern rtx        gen_cmpv2hf_gt                           (rtx, rtx, rtx);
extern rtx        gen_cmpv2ohf_eq                          (rtx, rtx, rtx);
extern rtx        gen_cmpv2ohf_ne                          (rtx, rtx, rtx);
extern rtx        gen_cmpv2ohf_le                          (rtx, rtx, rtx);
extern rtx        gen_cmpv2ohf_lt                          (rtx, rtx, rtx);
extern rtx        gen_cmpv2ohf_ge                          (rtx, rtx, rtx);
extern rtx        gen_cmpv2ohf_gt                          (rtx, rtx, rtx);
extern rtx        gen_vec_cmpeqv2hfv2hi                    (rtx, rtx, rtx);
extern rtx        gen_vec_cmpeqv2ohfv2hi                   (rtx, rtx, rtx);
extern rtx        gen_cmpv2hf_sceq                         (rtx, rtx, rtx);
extern rtx        gen_cmpv2hf_scne                         (rtx, rtx, rtx);
extern rtx        gen_cmpv2hf_scle                         (rtx, rtx, rtx);
extern rtx        gen_cmpv2hf_sclt                         (rtx, rtx, rtx);
extern rtx        gen_cmpv2hf_scge                         (rtx, rtx, rtx);
extern rtx        gen_cmpv2hf_scgt                         (rtx, rtx, rtx);
extern rtx        gen_cmpv2hf_scgtu                        (rtx, rtx, rtx);
extern rtx        gen_cmpv2hf_scltu                        (rtx, rtx, rtx);
extern rtx        gen_cmpv2hf_scgeu                        (rtx, rtx, rtx);
extern rtx        gen_cmpv2hf_scleu                        (rtx, rtx, rtx);
extern rtx        gen_cmpv2ohf_sceq                        (rtx, rtx, rtx);
extern rtx        gen_cmpv2ohf_scne                        (rtx, rtx, rtx);
extern rtx        gen_cmpv2ohf_scle                        (rtx, rtx, rtx);
extern rtx        gen_cmpv2ohf_sclt                        (rtx, rtx, rtx);
extern rtx        gen_cmpv2ohf_scge                        (rtx, rtx, rtx);
extern rtx        gen_cmpv2ohf_scgt                        (rtx, rtx, rtx);
extern rtx        gen_cmpv2ohf_scgtu                       (rtx, rtx, rtx);
extern rtx        gen_cmpv2ohf_scltu                       (rtx, rtx, rtx);
extern rtx        gen_cmpv2ohf_scgeu                       (rtx, rtx, rtx);
extern rtx        gen_cmpv2ohf_scleu                       (rtx, rtx, rtx);
extern rtx        gen_cmp_swap_v2hf_sceq                   (rtx, rtx, rtx);
extern rtx        gen_cmp_swap_v2hf_scne                   (rtx, rtx, rtx);
extern rtx        gen_cmp_swap_v2hf_scle                   (rtx, rtx, rtx);
extern rtx        gen_cmp_swap_v2hf_sclt                   (rtx, rtx, rtx);
extern rtx        gen_cmp_swap_v2hf_scge                   (rtx, rtx, rtx);
extern rtx        gen_cmp_swap_v2hf_scgt                   (rtx, rtx, rtx);
extern rtx        gen_cmp_swap_v2hf_scgtu                  (rtx, rtx, rtx);
extern rtx        gen_cmp_swap_v2hf_scltu                  (rtx, rtx, rtx);
extern rtx        gen_cmp_swap_v2hf_scgeu                  (rtx, rtx, rtx);
extern rtx        gen_cmp_swap_v2hf_scleu                  (rtx, rtx, rtx);
extern rtx        gen_cmp_swap_v2ohf_sceq                  (rtx, rtx, rtx);
extern rtx        gen_cmp_swap_v2ohf_scne                  (rtx, rtx, rtx);
extern rtx        gen_cmp_swap_v2ohf_scle                  (rtx, rtx, rtx);
extern rtx        gen_cmp_swap_v2ohf_sclt                  (rtx, rtx, rtx);
extern rtx        gen_cmp_swap_v2ohf_scge                  (rtx, rtx, rtx);
extern rtx        gen_cmp_swap_v2ohf_scgt                  (rtx, rtx, rtx);
extern rtx        gen_cmp_swap_v2ohf_scgtu                 (rtx, rtx, rtx);
extern rtx        gen_cmp_swap_v2ohf_scltu                 (rtx, rtx, rtx);
extern rtx        gen_cmp_swap_v2ohf_scgeu                 (rtx, rtx, rtx);
extern rtx        gen_cmp_swap_v2ohf_scleu                 (rtx, rtx, rtx);
extern rtx        gen_cmpv2hi_eq                           (rtx, rtx, rtx);
extern rtx        gen_cmpv2hi_ne                           (rtx, rtx, rtx);
extern rtx        gen_cmpv2hi_le                           (rtx, rtx, rtx);
extern rtx        gen_cmpv2hi_lt                           (rtx, rtx, rtx);
extern rtx        gen_cmpv2hi_ge                           (rtx, rtx, rtx);
extern rtx        gen_cmpv2hi_gt                           (rtx, rtx, rtx);
extern rtx        gen_cmpv4qi_eq                           (rtx, rtx, rtx);
extern rtx        gen_cmpv4qi_ne                           (rtx, rtx, rtx);
extern rtx        gen_cmpv4qi_le                           (rtx, rtx, rtx);
extern rtx        gen_cmpv4qi_lt                           (rtx, rtx, rtx);
extern rtx        gen_cmpv4qi_ge                           (rtx, rtx, rtx);
extern rtx        gen_cmpv4qi_gt                           (rtx, rtx, rtx);
extern rtx        gen_cmpv2hi_gtu                          (rtx, rtx, rtx);
extern rtx        gen_cmpv2hi_ltu                          (rtx, rtx, rtx);
extern rtx        gen_cmpv2hi_geu                          (rtx, rtx, rtx);
extern rtx        gen_cmpv2hi_leu                          (rtx, rtx, rtx);
extern rtx        gen_cmpv4qi_gtu                          (rtx, rtx, rtx);
extern rtx        gen_cmpv4qi_ltu                          (rtx, rtx, rtx);
extern rtx        gen_cmpv4qi_geu                          (rtx, rtx, rtx);
extern rtx        gen_cmpv4qi_leu                          (rtx, rtx, rtx);
extern rtx        gen_cmpv2hi_sceq                         (rtx, rtx, rtx);
extern rtx        gen_cmpv2hi_scne                         (rtx, rtx, rtx);
extern rtx        gen_cmpv2hi_scle                         (rtx, rtx, rtx);
extern rtx        gen_cmpv2hi_sclt                         (rtx, rtx, rtx);
extern rtx        gen_cmpv2hi_scge                         (rtx, rtx, rtx);
extern rtx        gen_cmpv2hi_scgt                         (rtx, rtx, rtx);
extern rtx        gen_cmpv2hi_scgtu                        (rtx, rtx, rtx);
extern rtx        gen_cmpv2hi_scltu                        (rtx, rtx, rtx);
extern rtx        gen_cmpv2hi_scgeu                        (rtx, rtx, rtx);
extern rtx        gen_cmpv2hi_scleu                        (rtx, rtx, rtx);
extern rtx        gen_cmpv4qi_sceq                         (rtx, rtx, rtx);
extern rtx        gen_cmpv4qi_scne                         (rtx, rtx, rtx);
extern rtx        gen_cmpv4qi_scle                         (rtx, rtx, rtx);
extern rtx        gen_cmpv4qi_sclt                         (rtx, rtx, rtx);
extern rtx        gen_cmpv4qi_scge                         (rtx, rtx, rtx);
extern rtx        gen_cmpv4qi_scgt                         (rtx, rtx, rtx);
extern rtx        gen_cmpv4qi_scgtu                        (rtx, rtx, rtx);
extern rtx        gen_cmpv4qi_scltu                        (rtx, rtx, rtx);
extern rtx        gen_cmpv4qi_scgeu                        (rtx, rtx, rtx);
extern rtx        gen_cmpv4qi_scleu                        (rtx, rtx, rtx);
extern rtx        gen_cmp_swap_v2hi_sceq                   (rtx, rtx, rtx);
extern rtx        gen_cmp_swap_v2hi_scne                   (rtx, rtx, rtx);
extern rtx        gen_cmp_swap_v2hi_scle                   (rtx, rtx, rtx);
extern rtx        gen_cmp_swap_v2hi_sclt                   (rtx, rtx, rtx);
extern rtx        gen_cmp_swap_v2hi_scge                   (rtx, rtx, rtx);
extern rtx        gen_cmp_swap_v2hi_scgt                   (rtx, rtx, rtx);
extern rtx        gen_cmp_swap_v2hi_scgtu                  (rtx, rtx, rtx);
extern rtx        gen_cmp_swap_v2hi_scltu                  (rtx, rtx, rtx);
extern rtx        gen_cmp_swap_v2hi_scgeu                  (rtx, rtx, rtx);
extern rtx        gen_cmp_swap_v2hi_scleu                  (rtx, rtx, rtx);
extern rtx        gen_cmp_swap_v4qi_sceq                   (rtx, rtx, rtx);
extern rtx        gen_cmp_swap_v4qi_scne                   (rtx, rtx, rtx);
extern rtx        gen_cmp_swap_v4qi_scle                   (rtx, rtx, rtx);
extern rtx        gen_cmp_swap_v4qi_sclt                   (rtx, rtx, rtx);
extern rtx        gen_cmp_swap_v4qi_scge                   (rtx, rtx, rtx);
extern rtx        gen_cmp_swap_v4qi_scgt                   (rtx, rtx, rtx);
extern rtx        gen_cmp_swap_v4qi_scgtu                  (rtx, rtx, rtx);
extern rtx        gen_cmp_swap_v4qi_scltu                  (rtx, rtx, rtx);
extern rtx        gen_cmp_swap_v4qi_scgeu                  (rtx, rtx, rtx);
extern rtx        gen_cmp_swap_v4qi_scleu                  (rtx, rtx, rtx);
extern rtx        gen_flt_quietsfsi4                       (rtx, rtx, rtx);
extern rtx        gen_fle_quietsfsi4                       (rtx, rtx, rtx);
extern rtx        gen_flt_quietsfdi4                       (rtx, rtx, rtx);
extern rtx        gen_fle_quietsfdi4                       (rtx, rtx, rtx);
extern rtx        gen_flt_quietdfsi4                       (rtx, rtx, rtx);
extern rtx        gen_fle_quietdfsi4                       (rtx, rtx, rtx);
extern rtx        gen_flt_quietdfdi4                       (rtx, rtx, rtx);
extern rtx        gen_fle_quietdfdi4                       (rtx, rtx, rtx);
extern rtx        gen_flt_quiethfsi4                       (rtx, rtx, rtx);
extern rtx        gen_fle_quiethfsi4                       (rtx, rtx, rtx);
extern rtx        gen_flt_quiethfdi4                       (rtx, rtx, rtx);
extern rtx        gen_fle_quiethfdi4                       (rtx, rtx, rtx);
extern rtx        gen_flt_quietohfsi4                      (rtx, rtx, rtx);
extern rtx        gen_fle_quietohfsi4                      (rtx, rtx, rtx);
extern rtx        gen_flt_quietohfdi4                      (rtx, rtx, rtx);
extern rtx        gen_fle_quietohfdi4                      (rtx, rtx, rtx);
extern rtx        gen_jump                                 (rtx);
extern rtx        gen_indirect_jumpsi                      (rtx);
extern rtx        gen_indirect_jumpdi                      (rtx);
extern rtx        gen_tablejumpsi                          (rtx, rtx);
extern rtx        gen_tablejumpdi                          (rtx, rtx);
extern rtx        gen_blockage                             (void);
extern rtx        gen_simple_return                        (void);
extern rtx        gen_simple_return_internal               (rtx);
extern rtx        gen_simple_it_return                     (void);
extern rtx        gen_simple_itu_return                    (void);
extern rtx        gen_simple_its_return                    (void);
extern rtx        gen_simple_ith_return                    (void);
extern rtx        gen_simple_itm_return                    (void);
extern rtx        gen_eh_set_lr_si                         (rtx);
extern rtx        gen_eh_set_lr_di                         (rtx);
extern rtx        gen_set_hwloop_lpstart                   (rtx, rtx, rtx);
extern rtx        gen_set_hwloop_lpend                     (rtx, rtx, rtx);
extern rtx        gen_set_hwloop_lc                        (rtx, rtx, rtx);
extern rtx        gen_set_hwloop_lc_le                     (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_hw_loop_prolog                       (rtx, rtx);
extern rtx        gen_zero_cost_loop_end                   (rtx, rtx, rtx);
extern rtx        gen_loop_end                             (rtx, rtx, rtx);
extern rtx        gen_sibcall_internal                     (rtx, rtx);
extern rtx        gen_sibcall_value_internal               (rtx, rtx, rtx);
extern rtx        gen_call_internal                        (rtx, rtx);
extern rtx        gen_call_value_internal                  (rtx, rtx, rtx);
extern rtx        gen_nop                                  (void);
extern rtx        gen_forced_nop                           (void);
extern rtx        gen_trap                                 (void);
extern rtx        gen_gpr_save                             (rtx);
extern rtx        gen_gpr_restore                          (rtx);
extern rtx        gen_gpr_restore_return                   (rtx);
extern rtx        gen_riscv_frflags                        (rtx);
extern rtx        gen_riscv_fsflags                        (rtx);
extern rtx        gen_stack_tiesi                          (rtx, rtx);
extern rtx        gen_stack_tiedi                          (rtx, rtx);
extern rtx        gen_mem_thread_fence_1                   (rtx, rtx);
extern rtx        gen_atomic_storesi                       (rtx, rtx, rtx);
extern rtx        gen_atomic_storedi                       (rtx, rtx, rtx);
extern rtx        gen_atomic_addsi                         (rtx, rtx, rtx);
extern rtx        gen_atomic_orsi                          (rtx, rtx, rtx);
extern rtx        gen_atomic_xorsi                         (rtx, rtx, rtx);
extern rtx        gen_atomic_andsi                         (rtx, rtx, rtx);
extern rtx        gen_atomic_adddi                         (rtx, rtx, rtx);
extern rtx        gen_atomic_ordi                          (rtx, rtx, rtx);
extern rtx        gen_atomic_xordi                         (rtx, rtx, rtx);
extern rtx        gen_atomic_anddi                         (rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_addsi                   (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_orsi                    (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_xorsi                   (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_andsi                   (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_adddi                   (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_ordi                    (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_xordi                   (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_anddi                   (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_exchangesi                    (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_exchangedi                    (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_cas_value_strongsi            (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_cas_value_strongdi            (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mulditi3                             (rtx, rtx, rtx);
extern rtx        gen_umulditi3                            (rtx, rtx, rtx);
extern rtx        gen_usmulditi3                           (rtx, rtx, rtx);
extern rtx        gen_mulsidi3                             (rtx, rtx, rtx);
extern rtx        gen_umulsidi3                            (rtx, rtx, rtx);
extern rtx        gen_usmulsidi3                           (rtx, rtx, rtx);
static inline rtx gen_maddv1sfsf4                          (rtx, rtx, rtx, rtx);
static inline rtx
gen_maddv1sfsf4(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
static inline rtx gen_maddhfsf4                            (rtx, rtx, rtx, rtx);
static inline rtx
gen_maddhfsf4(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
extern rtx        gen_maddohfsf4                           (rtx, rtx, rtx, rtx);
extern rtx        gen_clzsi2                               (rtx, rtx);
extern rtx        gen_paritysi2                            (rtx, rtx);
extern rtx        gen_movdi                                (rtx, rtx);
extern rtx        gen_load_evt_unit_fenced                 (rtx, rtx, rtx);
extern rtx        gen_pulp_omp_barrier                     (void);
extern rtx        gen_pulp_omp_critical_start              (void);
extern rtx        gen_pulp_omp_critical_end                (void);
extern rtx        gen_OffsetedWritePtr                     (rtx, rtx, rtx);
extern rtx        gen_OffsetedReadNonVol_m1                (rtx, rtx, rtx);
extern rtx        gen_movsi                                (rtx, rtx);
extern rtx        gen_movv2hi                              (rtx, rtx);
extern rtx        gen_movv4qi                              (rtx, rtx);
extern rtx        gen_movmisalignv4qi                      (rtx, rtx);
extern rtx        gen_movmisalignv2hi                      (rtx, rtx);
extern rtx        gen_movmisalignv2hf                      (rtx, rtx);
extern rtx        gen_movmisalignv2ohf                     (rtx, rtx);
extern rtx        gen_movmisalignohf                       (rtx, rtx);
extern rtx        gen_movmisalignsf                        (rtx, rtx);
extern rtx        gen_movmisalignsi                        (rtx, rtx);
extern rtx        gen_movhi                                (rtx, rtx);
extern rtx        gen_movqi                                (rtx, rtx);
extern rtx        gen_movhf                                (rtx, rtx);
extern rtx        gen_movohf                               (rtx, rtx);
extern rtx        gen_movsf                                (rtx, rtx);
extern rtx        gen_movdf                                (rtx, rtx);
extern rtx        gen_clear_cache                          (rtx, rtx);
extern rtx        gen_movmemsi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_initv2hf_internal_f              (rtx, rtx);
extern rtx        gen_vec_initv2ohf_internal_f             (rtx, rtx);
extern rtx        gen_vec_initv2hf                         (rtx, rtx);
extern rtx        gen_vec_initv2ohf                        (rtx, rtx);
extern rtx        gen_vec_initv2hi                         (rtx, rtx);
extern rtx        gen_vec_initv4qi                         (rtx, rtx);
extern rtx        gen_movv2hf                              (rtx, rtx);
extern rtx        gen_movv2ohf                             (rtx, rtx);
extern rtx        gen_movv1sf                              (rtx, rtx);
extern rtx        gen_floatv2hiv2hf2                       (rtx, rtx);
extern rtx        gen_floatv2hiv2ohf2                      (rtx, rtx);
extern rtx        gen_floatunsv2hiv2hf2                    (rtx, rtx);
extern rtx        gen_floatunsv2hiv2ohf2                   (rtx, rtx);
extern rtx        gen_fix_truncv2hfv2hi2                   (rtx, rtx);
extern rtx        gen_fix_truncv2ohfv2hi2                  (rtx, rtx);
extern rtx        gen_fixuns_truncv2hfv2hi2                (rtx, rtx);
extern rtx        gen_fixuns_truncv2ohfv2hi2               (rtx, rtx);
extern rtx        gen_vec_unpacks_hi_v2hf                  (rtx, rtx);
extern rtx        gen_vec_unpacks_hi_v2ohf                 (rtx, rtx);
extern rtx        gen_vec_pack_v4qi                        (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vec_permv2hf                         (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_permv2ohf                        (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_permv2hi                         (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_permv4qi                         (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_set_firstv2hf                    (rtx, rtx, rtx);
extern rtx        gen_vec_set_firstv2ohf                   (rtx, rtx, rtx);
extern rtx        gen_vec_set_firstv2hi                    (rtx, rtx, rtx);
extern rtx        gen_vec_set_firstv4qi                    (rtx, rtx, rtx);
extern rtx        gen_vec_setv2hf                          (rtx, rtx, rtx);
extern rtx        gen_vec_setv2ohf                         (rtx, rtx, rtx);
extern rtx        gen_vec_setv2hi                          (rtx, rtx, rtx);
extern rtx        gen_vec_setv4qi                          (rtx, rtx, rtx);
extern rtx        gen_fmav2hf4                             (rtx, rtx, rtx, rtx);
extern rtx        gen_fmav2ohf4                            (rtx, rtx, rtx, rtx);
extern rtx        gen_cplxmulsv2hi2                        (rtx, rtx, rtx);
extern rtx        gen_cplxmulsv2hi2_div2                   (rtx, rtx, rtx);
extern rtx        gen_cplxmulsv2hi2_div4                   (rtx, rtx, rtx);
extern rtx        gen_cplxmulsv2hi2_div8                   (rtx, rtx, rtx);
extern rtx        gen_vcondv2hiv2hf                        (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv2hiv2ohf                       (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv2hiv2hi                        (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv4qiv4qi                        (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv2hiv2hi                       (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv4qiv4qi                       (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_condjump                             (rtx, rtx);
extern rtx        gen_cbranchsi4                           (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchdi4                           (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchsf4                           (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchdf4                           (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchhf4                           (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchohf4                          (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoresi4                            (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoredi4                            (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoresf4                            (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoredf4                            (rtx, rtx, rtx, rtx);
extern rtx        gen_cstorehf4                            (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoreohf4                           (rtx, rtx, rtx, rtx);
extern rtx        gen_indirect_jump                        (rtx);
extern rtx        gen_tablejump                            (rtx, rtx);
extern rtx        gen_prologue                             (void);
extern rtx        gen_epilogue                             (void);
extern rtx        gen_sibcall_epilogue                     (void);
extern rtx        gen_return                               (void);
extern rtx        gen_eh_return                            (rtx);
extern rtx        gen_doloop_end                           (rtx, rtx);
extern rtx        gen_sibcall                              (rtx, rtx, rtx, rtx);
extern rtx        gen_sibcall_value                        (rtx, rtx, rtx, rtx);
extern rtx        gen_call                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_call_value                           (rtx, rtx, rtx, rtx);
extern rtx        gen_untyped_call                         (rtx, rtx, rtx);
extern rtx        gen_memory_barrier                       (void);
extern rtx        gen_mem_thread_fence                     (rtx);
extern rtx        gen_atomic_compare_and_swapsi            (rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_compare_and_swapdi            (rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_test_and_set                  (rtx, rtx, rtx);

#endif /* GCC_INSN_FLAGS_H */
