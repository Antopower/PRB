/*
 * Generated by ISE 7.1.8.8986 GPL Edition - windows
 */

#include "eif_eiffel.h"
#include "eif_project.h"
#include "egc_include.h"

#ifdef __cplusplus
extern "C" {
#endif
extern void F1_23();
extern EIF_REFERENCE F1_14();
extern void F200_5713();
extern void F202_5863();
extern void F207_5932();
extern void F208_6072();
extern void F232_3282();
extern void F230_5620();
extern void F27_536();
extern EIF_REFERENCE F27_523();
extern EIF_BOOLEAN F27_535();
extern EIF_BOOLEAN F27_540();
extern void F27_545();
extern void F27_546();
extern void F27_547();
extern void F47_1124();
extern EIF_TYPED_VALUE F47_1125();

long *eif_area_table = (long *)0;
long *eif_lower_table = (long *)0;


extern void egc_init_plug (void); 
void egc_init_plug (void)
{
	egc_prof_enabled = (EIF_INTEGER) 0;
	egc_correct_mismatch = (void (*)(EIF_REFERENCE)) F1_23;
	egc_twin = (EIF_TYPED_VALUE (*)(EIF_REFERENCE)) F1_14;
	egc_strmake = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F200_5713;
	egc_str32make = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F207_5932;
	egc_arrmake = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F232_3282;
	egc_strset = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F202_5863;
	egc_str32set = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F208_6072;
	egc_routdisp_wb = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F230_5620;
#ifdef RTS_SCP_CAPABLE
	egc_is_scoop_capable = 0;
#endif
	egc_set_exception_data = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F27_536;
	egc_set_last_exception = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F27_535;
	egc_last_exception = (EIF_TYPED_VALUE (*)(EIF_REFERENCE)) F27_523;
	egc_is_code_ignored = (EIF_TYPED_VALUE (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F27_540;
	egc_once_raise = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F27_545;
	egc_init_exception_manager = (void (*)(EIF_REFERENCE)) F27_546;
	egc_free_preallocated_trace = (void (*)(EIF_REFERENCE)) F27_547;

	egc_str_dtype = 201;

	egc_str32_dtype = 207;
	egc_arr_dtype = 231;
	egc_tup_dtype = 155;
	egc_disp_rout_id = 2439;
	egc_copy_rout_id = 18;
	egc_is_equal_rout_id = 11;
	egc_bit_dtype = 24;

	egc_sp_char = (EIF_TYPE_INDEX)512;
	egc_sp_wchar = (EIF_TYPE_INDEX)811;
	egc_sp_bool = (EIF_TYPE_INDEX)493;
	egc_sp_uint8 = (EIF_TYPE_INDEX)607;
	egc_sp_uint16 = (EIF_TYPE_INDEX)567;
	egc_sp_uint32 = (EIF_TYPE_INDEX)532;
	egc_sp_uint64 = (EIF_TYPE_INDEX)447;
	egc_sp_int8 = (EIF_TYPE_INDEX)765;
	egc_sp_int16 = (EIF_TYPE_INDEX)705;
	egc_sp_int32 = (EIF_TYPE_INDEX)381;
	egc_sp_int64 = (EIF_TYPE_INDEX)645;
	egc_sp_real32 = (EIF_TYPE_INDEX)411;
	egc_sp_real64 = (EIF_TYPE_INDEX)323;
	egc_sp_pointer = (EIF_TYPE_INDEX)287;
	egc_sp_ref = (EIF_TYPE_INDEX)219;

	egc_uint8_ref_dtype = 177;
	egc_uint16_ref_dtype = 183;
	egc_uint32_ref_dtype = 180;
	egc_uint64_ref_dtype = 192;
	egc_int8_ref_dtype = 156;
	egc_int16_ref_dtype = 189;
	egc_int32_ref_dtype = 186;
	egc_int64_ref_dtype = 168;
	egc_bool_ref_dtype = 171;
	egc_real32_ref_dtype = 159;
	egc_char_ref_dtype = 165;
	egc_wchar_ref_dtype = 162;
	egc_real64_ref_dtype = 174;
	egc_point_ref_dtype = 195;

	egc_uint8_dtype = 178;
	egc_uint16_dtype = 184;
	egc_uint32_dtype = 181;
	egc_uint64_dtype = 193;
	egc_int8_dtype = 157;
	egc_int16_dtype = 190;
	egc_int32_dtype = 187;
	egc_int64_dtype = 169;
	egc_bool_dtype = 172;
	egc_real32_dtype = 160;
	egc_char_dtype = 166;
	egc_wchar_dtype = 163;
	egc_real64_dtype = 175;
	egc_point_dtype = 196;
#ifdef RTS_SCP_CAPABLE
#if RTS_SCP_CAPABLE == 1
	egc_scp_mngr_dtype = (EIF_TYPE_INDEX)0 - 1;
#else
	egc_scp_mngr_dtype = (EIF_TYPE_INDEX)0 - 1;
#endif
#endif

	egc_exception_dtype = 61;
	egc_except_emnger_dtype = 26;

	egc_ce_type = egc_ce_type_init;

	egc_ce_exp_type = egc_ce_exp_type_init;
	egc_fsystem = egc_fsystem_init;
	egc_system_mod_init = egc_system_mod_init_init;
	egc_partab = egc_partab_init;
	egc_partab_size = egc_partab_size_init;
	egc_foption = egc_foption_init;
	egc_frozen = egc_frozen_init;
	egc_fpatidtab = egc_fpatidtab_init;
	egc_address_table = egc_address_table_init;
	egc_fpattern = egc_fpattern_init;

	egc_einit = egc_einit_init;
	egc_tabinit = egc_tabinit_init;

	egc_fcall = egc_fcall_init;
	egc_forg_table = egc_forg_table_init;

	egc_system_name = "wrapper";
	egc_system_location = "C:\\Users\\utilisateur\\Documents\\Eiffel User Files\\7.1\\projects\\Wrapper\\EIFGENs\\wrapper\\W_code";
	egc_compiler_tag = 38;
	egc_project_version = 1358193013;
	egc_has_old_special_semantic = 0;
	egc_has_ieee_semantic = 1;
	scount = 838;

	egc_rcount = 1;
	egc_ridx = 0;
	egc_rlist = (char**) eif_malloc (sizeof(char*)*egc_rcount);
	egc_rcdt = (int32 *) eif_malloc (sizeof(int32)*egc_rcount);
	egc_rcorigin = (int32 *) eif_malloc (sizeof(int32)*egc_rcount);
	egc_rcoffset = (int32 *) eif_malloc (sizeof(int32)*egc_rcount);
	egc_rcarg = (int32 *) eif_malloc (sizeof(int32)*egc_rcount);
	egc_rlist[0] = "APPLICATION.make";
	egc_rcdt[0] = 0;
	egc_rcorigin[0] = 329;
	egc_rcoffset[0] = 0;
	egc_rcarg[0] = 0;
	
	
	egc_platform_level = 0x00000D00;
	egc_rt_extension_dt = 46;
	egc_rt_extension_notify = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F47_1124;
	egc_rt_extension_notify_argument = (EIF_TYPED_VALUE (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F47_1125;
}

void egc_rcdt_init (void)
{
	if (egc_rcdt[0] == 0) {
		egc_rcdt[0] = 836; /* APPLICATION */
	}
}

#ifdef __cplusplus
}
#endif
