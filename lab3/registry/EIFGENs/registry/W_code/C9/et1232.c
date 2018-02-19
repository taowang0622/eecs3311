/*
 * Code for class ETF_TYPE_CONSTRAINTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1232_12725(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1232_12726(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1232_12727(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1232_12728(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1232_12729(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1232_12730(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1232_12731(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1232_12732(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1232_12733(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit1232(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ETF_TYPE_CONSTRAINTS}.is_day */
EIF_TYPED_VALUE F1232_12725 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_day";
	RTEX;
#define arg1 arg1x.it_i8
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i8 = * (EIF_INTEGER_64 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1231, Current, 0, 1, 18947);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1231, Current, 18947);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT(NULL, EX_PRE);
		tr1 = RTMS_EX_H("etf_v: DAY = 1 .. 31",20,1979586353);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10499, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (((EIF_BOOLEAN) ((EIF_INTEGER_64) ((EIF_INTEGER_32) 1L) <= arg1)) && ((EIF_BOOLEAN) (arg1 <= (EIF_INTEGER_64) ((EIF_INTEGER_32) 31L))));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT(NULL, EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(Result == ((EIF_BOOLEAN) ((EIF_INTEGER_64) ((EIF_INTEGER_32) 1L) <= arg1))) && ((EIF_BOOLEAN) (arg1 <= (EIF_INTEGER_64) ((EIF_INTEGER_32) 31L))))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef arg1
}

/* {ETF_TYPE_CONSTRAINTS}.is_month */
EIF_TYPED_VALUE F1232_12726 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_month";
	RTEX;
#define arg1 arg1x.it_i8
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i8 = * (EIF_INTEGER_64 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1231, Current, 0, 1, 18948);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1231, Current, 18948);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT(NULL, EX_PRE);
		tr1 = RTMS_EX_H("etf_v: MONTH = 1 .. 12",22,1418352178);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10499, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (((EIF_BOOLEAN) ((EIF_INTEGER_64) ((EIF_INTEGER_32) 1L) <= arg1)) && ((EIF_BOOLEAN) (arg1 <= (EIF_INTEGER_64) ((EIF_INTEGER_32) 12L))));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT(NULL, EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(Result == ((EIF_BOOLEAN) ((EIF_INTEGER_64) ((EIF_INTEGER_32) 1L) <= arg1))) && ((EIF_BOOLEAN) (arg1 <= (EIF_INTEGER_64) ((EIF_INTEGER_32) 12L))))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef arg1
}

/* {ETF_TYPE_CONSTRAINTS}.is_year */
EIF_TYPED_VALUE F1232_12727 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_year";
	RTEX;
#define arg1 arg1x.it_i8
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i8 = * (EIF_INTEGER_64 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1231, Current, 0, 1, 18949);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1231, Current, 18949);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT(NULL, EX_PRE);
		tr1 = RTMS_EX_H("etf_v: YEAR = 1900 .. 3000",26,1901613616);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10499, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (((EIF_BOOLEAN) ((EIF_INTEGER_64) ((EIF_INTEGER_32) 1900L) <= arg1)) && ((EIF_BOOLEAN) (arg1 <= (EIF_INTEGER_64) ((EIF_INTEGER_32) 3000L))));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT(NULL, EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(Result == ((EIF_BOOLEAN) ((EIF_INTEGER_64) ((EIF_INTEGER_32) 1900L) <= arg1))) && ((EIF_BOOLEAN) (arg1 <= (EIF_INTEGER_64) ((EIF_INTEGER_32) 3000L))))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef arg1
}

/* {ETF_TYPE_CONSTRAINTS}.is_date */
EIF_TYPED_VALUE F1232_12728 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_date";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1231, Current, 0, 1, 18950);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1231, Current, 18950);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,3,185,199,199,199,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 1231, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT(NULL, EX_PRE);
		tr1 = RTMS_EX_H("etf_v: DATE = TUPLE[d: DAY = 1 .. 31; m: MONTH = 1 .. 12; y: YEAR = 1900 .. 3000]",81,759255645);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10499, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tb1 = '\0';
	tb2 = '\0';
	ti8_1 = eif_integer_64_item(RTCW(arg1),1);
	ui8_1 = ti8_1;
	tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10491, dtype))(Current, ui8_1x)).it_b);
	if (tb3) {
		ti8_1 = eif_integer_64_item(RTCW(arg1),2);
		ui8_1 = ti8_1;
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10492, dtype))(Current, ui8_1x)).it_b);
		tb2 = tb3;
	}
	if (tb2) {
		ti8_1 = eif_integer_64_item(RTCW(arg1),3);
		ui8_1 = ti8_1;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10493, dtype))(Current, ui8_1x)).it_b);
		tb1 = tb2;
	}
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT(NULL, EX_POST);
		tb1 = '\0';
		tb2 = '\0';
		ti8_1 = eif_integer_64_item(RTCW(arg1),1);
		ui8_1 = ti8_1;
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10491, dtype))(Current, ui8_1x)).it_b);
		if ((EIF_BOOLEAN)(Result == tb3)) {
			ti8_1 = eif_integer_64_item(RTCW(arg1),2);
			ui8_1 = ti8_1;
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10492, dtype))(Current, ui8_1x)).it_b);
			tb2 = tb3;
		}
		if (tb2) {
			ti8_1 = eif_integer_64_item(RTCW(arg1),3);
			ui8_1 = ti8_1;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10493, dtype))(Current, ui8_1x)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef ui8_1
#undef arg1
}

/* {ETF_TYPE_CONSTRAINTS}.enum_items */
EIF_TYPED_VALUE F1232_12729 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "enum_items";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1231, Current, 0, 0, 18951);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1231, Current, 18951);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF800017D, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,381,217,0xFF01,231,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3011, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
}

/* {ETF_TYPE_CONSTRAINTS}.enum_items_inverse */
EIF_TYPED_VALUE F1232_12730 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "enum_items_inverse";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1231, Current, 0, 0, 18952);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1231, Current, 18952);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80007B4, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1972,0xFF01,231,199,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3011, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
}

/* {ETF_TYPE_CONSTRAINTS}.evt_param_types_table */
EIF_TYPED_VALUE F1232_12731 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "evt_param_types_table";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ur4x = {{0}, SK_REF};
#define ur4 ur4x.it_r
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_TYPED_VALUE ui8_2x = {{0}, SK_INT64};
#define ui8_2 ui8_2x.it_i8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE tr7 = NULL;
	EIF_REFERENCE tr8 = NULL;
	EIF_REFERENCE tr9 = NULL;
	EIF_REFERENCE tr10 = NULL;
	EIF_REFERENCE tr11 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(22);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,ur1);
	RTLR(6,tr3);
	RTLR(7,ur2);
	RTLR(8,tr4);
	RTLR(9,tr5);
	RTLR(10,tr6);
	RTLR(11,tr7);
	RTLR(12,tr8);
	RTLR(13,tr9);
	RTLR(14,tr10);
	RTLR(15,ur3);
	RTLR(16,tr11);
	RTLR(17,ur4);
	RTLR(18,loc2);
	RTLR(19,loc3);
	RTLR(20,loc4);
	RTLR(21,loc5);
	RTLIU(22);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 1231, Current, 5, 0, 18953);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1231, Current, 18953);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000173, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,371,0xFF01,371,0xFF01,1217,0xFF01,231,0xFF01,231,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3011, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1703, "compare_objects", Result))(Result);
	RTHOOK(3);
	RTDBGAL(Current, 1, 0xF8000173, 0, 0); /* loc1 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,371,0xFF01,1217,0xFF01,231,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3011, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(3,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1703, "compare_objects", loc1))(loc1);
	RTHOOK(5);
	tr1 = RTLN(eif_new_type(1229, 0x01).id);
	tr2 = RTMS_EX_H("ID",2,18756);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1228, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(5,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10488, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(5,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("id",2,26980);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3041, "extend", loc1))(loc1, ur1x, ur2x);
	RTHOOK(6);
	tr1 = RTLN(eif_new_type(1229, 0x01).id);
	tr2 = RTMS_EX_H("NAME",4,1312902469);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1224, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(6,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10488, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(6,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("name1",5,1635404081);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3041, "extend", loc1))(loc1, ur1x, ur2x);
	RTHOOK(7);
	tr1 = RTLN(eif_new_type(1229, 0x01).id);
	tr2 = RTMS_EX_H("DATE",4,1145132101);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1225, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 3L);
	{
		static EIF_TYPE_INDEX typarr0[] = {280,0xFF01,1027,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr5) = 3L;
		memset(tr5, 0, RT_SPECIAL_VISIBLE_SIZE(tr5));
	}
	tr7 = RTLN(eif_new_type(1027, 0x01).id);
	tr8 = RTMS_EX_H("d",1,100);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1229, 0x01).id);
	tr10 = RTMS_EX_H("DAY",3,4473177);
	ur3 = tr10;
	tr11 = RTLN(eif_new_type(1226, 0x01).id);
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L);
	ui8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 31L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10485, Dtype(tr11)))(tr11, ui8_1x, ui8_2x);
	RTNHOOK(7,1);
	ur4 = RTCCL(tr11);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10488, Dtype(tr9)))(tr9, ur3x, ur4x);
	RTNHOOK(7,2);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7572, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(7,3);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+0) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr7 = RTLN(eif_new_type(1027, 0x01).id);
	tr8 = RTMS_EX_H("m",1,109);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1229, 0x01).id);
	tr10 = RTMS_EX_H("MONTH",5,1331124808);
	ur3 = tr10;
	tr11 = RTLN(eif_new_type(1226, 0x01).id);
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L);
	ui8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 12L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10485, Dtype(tr11)))(tr11, ui8_1x, ui8_2x);
	RTNHOOK(7,4);
	ur4 = RTCCL(tr11);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10488, Dtype(tr9)))(tr9, ur3x, ur4x);
	RTNHOOK(7,5);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7572, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(7,6);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+1) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr7 = RTLN(eif_new_type(1027, 0x01).id);
	tr8 = RTMS_EX_H("y",1,121);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1229, 0x01).id);
	tr10 = RTMS_EX_H("YEAR",4,1497710930);
	ur3 = tr10;
	tr11 = RTLN(eif_new_type(1226, 0x01).id);
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1900L);
	ui8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 3000L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10485, Dtype(tr11)))(tr11, ui8_1x, ui8_2x);
	RTNHOOK(7,7);
	ur4 = RTCCL(tr11);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10488, Dtype(tr9)))(tr9, ur3x, ur4x);
	RTNHOOK(7,8);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7572, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(7,9);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+2) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr4 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2610, Dtype(tr5)))(tr5).it_r;
	ur2 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(10483, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(7,10);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10488, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(7,11);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("dob",3,6582114);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3041, "extend", loc1))(loc1, ur1x, ur2x);
	RTHOOK(8);
	ur1 = RTCCL(loc1);
	tr1 = RTMS_EX_H("put",3,7370100);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3041, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(9);
	RTDBGAL(Current, 2, 0xF8000173, 0, 0); /* loc2 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,371,0xFF01,1217,0xFF01,231,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3011, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(9,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(10);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1703, "compare_objects", loc2))(loc2);
	RTHOOK(11);
	tr1 = RTLN(eif_new_type(1229, 0x01).id);
	tr2 = RTMS_EX_H("ID",2,18756);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1228, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(11,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10488, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(11,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("id",2,26980);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3041, "extend", loc2))(loc2, ur1x, ur2x);
	RTHOOK(12);
	tr1 = RTLN(eif_new_type(1229, 0x01).id);
	tr2 = RTMS_EX_H("NAME",4,1312902469);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1224, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(12,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10488, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(12,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("name1",5,1635404081);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3041, "extend", loc2))(loc2, ur1x, ur2x);
	RTHOOK(13);
	tr1 = RTLN(eif_new_type(1229, 0x01).id);
	tr2 = RTMS_EX_H("DATE",4,1145132101);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1225, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 3L);
	{
		static EIF_TYPE_INDEX typarr0[] = {280,0xFF01,1027,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr5) = 3L;
		memset(tr5, 0, RT_SPECIAL_VISIBLE_SIZE(tr5));
	}
	tr7 = RTLN(eif_new_type(1027, 0x01).id);
	tr8 = RTMS_EX_H("d",1,100);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1229, 0x01).id);
	tr10 = RTMS_EX_H("DAY",3,4473177);
	ur3 = tr10;
	tr11 = RTLN(eif_new_type(1226, 0x01).id);
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L);
	ui8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 31L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10485, Dtype(tr11)))(tr11, ui8_1x, ui8_2x);
	RTNHOOK(13,1);
	ur4 = RTCCL(tr11);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10488, Dtype(tr9)))(tr9, ur3x, ur4x);
	RTNHOOK(13,2);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7572, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(13,3);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+0) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr7 = RTLN(eif_new_type(1027, 0x01).id);
	tr8 = RTMS_EX_H("m",1,109);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1229, 0x01).id);
	tr10 = RTMS_EX_H("MONTH",5,1331124808);
	ur3 = tr10;
	tr11 = RTLN(eif_new_type(1226, 0x01).id);
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L);
	ui8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 12L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10485, Dtype(tr11)))(tr11, ui8_1x, ui8_2x);
	RTNHOOK(13,4);
	ur4 = RTCCL(tr11);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10488, Dtype(tr9)))(tr9, ur3x, ur4x);
	RTNHOOK(13,5);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7572, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(13,6);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+1) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr7 = RTLN(eif_new_type(1027, 0x01).id);
	tr8 = RTMS_EX_H("y",1,121);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1229, 0x01).id);
	tr10 = RTMS_EX_H("YEAR",4,1497710930);
	ur3 = tr10;
	tr11 = RTLN(eif_new_type(1226, 0x01).id);
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1900L);
	ui8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 3000L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10485, Dtype(tr11)))(tr11, ui8_1x, ui8_2x);
	RTNHOOK(13,7);
	ur4 = RTCCL(tr11);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10488, Dtype(tr9)))(tr9, ur3x, ur4x);
	RTNHOOK(13,8);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7572, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(13,9);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+2) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr4 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2610, Dtype(tr5)))(tr5).it_r;
	ur2 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(10483, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(13,10);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10488, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(13,11);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("dob",3,6582114);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3041, "extend", loc2))(loc2, ur1x, ur2x);
	RTHOOK(14);
	tr1 = RTLN(eif_new_type(1229, 0x01).id);
	tr2 = RTMS_EX_H("COUNTRY",7,832649305);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1224, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(14,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10488, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(14,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("country",7,361074809);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3041, "extend", loc2))(loc2, ur1x, ur2x);
	RTHOOK(15);
	ur1 = RTCCL(loc2);
	tr1 = RTMS_EX_H("put_alien",9,452192366);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3041, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(16);
	RTDBGAL(Current, 3, 0xF8000173, 0, 0); /* loc3 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,371,0xFF01,1217,0xFF01,231,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3011, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(16,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(17);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1703, "compare_objects", loc3))(loc3);
	RTHOOK(18);
	tr1 = RTLN(eif_new_type(1229, 0x01).id);
	tr2 = RTMS_EX_H("ID",2,18756);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1228, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(18,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10488, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(18,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("id1",3,6906929);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3041, "extend", loc3))(loc3, ur1x, ur2x);
	RTHOOK(19);
	tr1 = RTLN(eif_new_type(1229, 0x01).id);
	tr2 = RTMS_EX_H("ID",2,18756);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1228, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(19,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10488, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(19,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("id2",3,6906930);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3041, "extend", loc3))(loc3, ur1x, ur2x);
	RTHOOK(20);
	tr1 = RTLN(eif_new_type(1229, 0x01).id);
	tr2 = RTMS_EX_H("DATE",4,1145132101);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1225, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 3L);
	{
		static EIF_TYPE_INDEX typarr0[] = {280,0xFF01,1027,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr5) = 3L;
		memset(tr5, 0, RT_SPECIAL_VISIBLE_SIZE(tr5));
	}
	tr7 = RTLN(eif_new_type(1027, 0x01).id);
	tr8 = RTMS_EX_H("d",1,100);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1229, 0x01).id);
	tr10 = RTMS_EX_H("DAY",3,4473177);
	ur3 = tr10;
	tr11 = RTLN(eif_new_type(1226, 0x01).id);
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L);
	ui8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 31L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10485, Dtype(tr11)))(tr11, ui8_1x, ui8_2x);
	RTNHOOK(20,1);
	ur4 = RTCCL(tr11);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10488, Dtype(tr9)))(tr9, ur3x, ur4x);
	RTNHOOK(20,2);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7572, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(20,3);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+0) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr7 = RTLN(eif_new_type(1027, 0x01).id);
	tr8 = RTMS_EX_H("m",1,109);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1229, 0x01).id);
	tr10 = RTMS_EX_H("MONTH",5,1331124808);
	ur3 = tr10;
	tr11 = RTLN(eif_new_type(1226, 0x01).id);
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L);
	ui8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 12L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10485, Dtype(tr11)))(tr11, ui8_1x, ui8_2x);
	RTNHOOK(20,4);
	ur4 = RTCCL(tr11);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10488, Dtype(tr9)))(tr9, ur3x, ur4x);
	RTNHOOK(20,5);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7572, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(20,6);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+1) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr7 = RTLN(eif_new_type(1027, 0x01).id);
	tr8 = RTMS_EX_H("y",1,121);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1229, 0x01).id);
	tr10 = RTMS_EX_H("YEAR",4,1497710930);
	ur3 = tr10;
	tr11 = RTLN(eif_new_type(1226, 0x01).id);
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1900L);
	ui8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 3000L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10485, Dtype(tr11)))(tr11, ui8_1x, ui8_2x);
	RTNHOOK(20,7);
	ur4 = RTCCL(tr11);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10488, Dtype(tr9)))(tr9, ur3x, ur4x);
	RTNHOOK(20,8);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7572, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(20,9);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+2) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr4 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2610, Dtype(tr5)))(tr5).it_r;
	ur2 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(10483, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(20,10);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10488, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(20,11);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("date",4,1684108389);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3041, "extend", loc3))(loc3, ur1x, ur2x);
	RTHOOK(21);
	ur1 = RTCCL(loc3);
	tr1 = RTMS_EX_H("marry",5,1635727481);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3041, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(22);
	RTDBGAL(Current, 4, 0xF8000173, 0, 0); /* loc4 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,371,0xFF01,1217,0xFF01,231,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3011, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(22,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(23);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1703, "compare_objects", loc4))(loc4);
	RTHOOK(24);
	tr1 = RTLN(eif_new_type(1229, 0x01).id);
	tr2 = RTMS_EX_H("ID",2,18756);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1228, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(24,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10488, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(24,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("a_id1",5,1601487409);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3041, "extend", loc4))(loc4, ur1x, ur2x);
	RTHOOK(25);
	tr1 = RTLN(eif_new_type(1229, 0x01).id);
	tr2 = RTMS_EX_H("ID",2,18756);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1228, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(25,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10488, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(25,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("a_id2",5,1601487410);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3041, "extend", loc4))(loc4, ur1x, ur2x);
	RTHOOK(26);
	ur1 = RTCCL(loc4);
	tr1 = RTMS_EX_H("divorce",7,869244773);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3041, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(27);
	RTDBGAL(Current, 5, 0xF8000173, 0, 0); /* loc5 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,371,0xFF01,1217,0xFF01,231,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3011, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(27,1);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(28);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1703, "compare_objects", loc5))(loc5);
	RTHOOK(29);
	tr1 = RTLN(eif_new_type(1229, 0x01).id);
	tr2 = RTMS_EX_H("ID",2,18756);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1228, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(29,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10488, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(29,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("id",2,26980);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3041, "extend", loc5))(loc5, ur1x, ur2x);
	RTHOOK(30);
	ur1 = RTCCL(loc5);
	tr1 = RTMS_EX_H("die",3,6580581);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3041, "extend", Result))(Result, ur1x, ur2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(31);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ur2
#undef ur3
#undef ur4
#undef ui8_1
#undef ui8_2
#undef ui4_1
}

/* {ETF_TYPE_CONSTRAINTS}.evt_param_types_list */
EIF_TYPED_VALUE F1232_12732 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "evt_param_types_list";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ur4x = {{0}, SK_REF};
#define ur4 ur4x.it_r
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_TYPED_VALUE ui8_2x = {{0}, SK_INT64};
#define ui8_2 ui8_2x.it_i8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE tr7 = NULL;
	EIF_REFERENCE tr8 = NULL;
	EIF_REFERENCE tr9 = NULL;
	EIF_REFERENCE tr10 = NULL;
	EIF_REFERENCE tr11 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(22);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,ur1);
	RTLR(6,tr3);
	RTLR(7,ur2);
	RTLR(8,tr4);
	RTLR(9,tr5);
	RTLR(10,tr6);
	RTLR(11,tr7);
	RTLR(12,tr8);
	RTLR(13,tr9);
	RTLR(14,tr10);
	RTLR(15,ur3);
	RTLR(16,tr11);
	RTLR(17,ur4);
	RTLR(18,loc2);
	RTLR(19,loc3);
	RTLR(20,loc4);
	RTLR(21,loc5);
	RTLIU(22);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 1231, Current, 5, 0, 18954);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1231, Current, 18954);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000173, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,371,0xFF01,323,0xFF01,1217,0xFF01,231,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3011, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1703, "compare_objects", Result))(Result);
	RTHOOK(3);
	RTDBGAL(Current, 1, 0xF8000143, 0, 0); /* loc1 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,323,0xFF01,1217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2753, Dtype(tr1)))(tr1);
	RTNHOOK(3,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1703, "compare_objects", loc1))(loc1);
	RTHOOK(5);
	tr1 = RTLN(eif_new_type(1229, 0x01).id);
	tr2 = RTMS_EX_H("ID",2,18756);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1228, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(5,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10488, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(5,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", loc1))(loc1, ur1x);
	RTHOOK(6);
	tr1 = RTLN(eif_new_type(1229, 0x01).id);
	tr2 = RTMS_EX_H("NAME",4,1312902469);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1224, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(6,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10488, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(6,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", loc1))(loc1, ur1x);
	RTHOOK(7);
	tr1 = RTLN(eif_new_type(1229, 0x01).id);
	tr2 = RTMS_EX_H("DATE",4,1145132101);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1225, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 3L);
	{
		static EIF_TYPE_INDEX typarr0[] = {280,0xFF01,1027,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr5) = 3L;
		memset(tr5, 0, RT_SPECIAL_VISIBLE_SIZE(tr5));
	}
	tr7 = RTLN(eif_new_type(1027, 0x01).id);
	tr8 = RTMS_EX_H("d",1,100);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1229, 0x01).id);
	tr10 = RTMS_EX_H("DAY",3,4473177);
	ur3 = tr10;
	tr11 = RTLN(eif_new_type(1226, 0x01).id);
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L);
	ui8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 31L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10485, Dtype(tr11)))(tr11, ui8_1x, ui8_2x);
	RTNHOOK(7,1);
	ur4 = RTCCL(tr11);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10488, Dtype(tr9)))(tr9, ur3x, ur4x);
	RTNHOOK(7,2);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7572, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(7,3);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+0) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr7 = RTLN(eif_new_type(1027, 0x01).id);
	tr8 = RTMS_EX_H("m",1,109);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1229, 0x01).id);
	tr10 = RTMS_EX_H("MONTH",5,1331124808);
	ur3 = tr10;
	tr11 = RTLN(eif_new_type(1226, 0x01).id);
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L);
	ui8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 12L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10485, Dtype(tr11)))(tr11, ui8_1x, ui8_2x);
	RTNHOOK(7,4);
	ur4 = RTCCL(tr11);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10488, Dtype(tr9)))(tr9, ur3x, ur4x);
	RTNHOOK(7,5);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7572, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(7,6);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+1) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr7 = RTLN(eif_new_type(1027, 0x01).id);
	tr8 = RTMS_EX_H("y",1,121);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1229, 0x01).id);
	tr10 = RTMS_EX_H("YEAR",4,1497710930);
	ur3 = tr10;
	tr11 = RTLN(eif_new_type(1226, 0x01).id);
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1900L);
	ui8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 3000L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10485, Dtype(tr11)))(tr11, ui8_1x, ui8_2x);
	RTNHOOK(7,7);
	ur4 = RTCCL(tr11);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10488, Dtype(tr9)))(tr9, ur3x, ur4x);
	RTNHOOK(7,8);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7572, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(7,9);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+2) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr4 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2610, Dtype(tr5)))(tr5).it_r;
	ur2 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(10483, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(7,10);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10488, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(7,11);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", loc1))(loc1, ur1x);
	RTHOOK(8);
	ur1 = RTCCL(loc1);
	tr1 = RTMS_EX_H("put",3,7370100);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3041, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(9);
	RTDBGAL(Current, 2, 0xF8000143, 0, 0); /* loc2 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,323,0xFF01,1217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2753, Dtype(tr1)))(tr1);
	RTNHOOK(9,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(10);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1703, "compare_objects", loc2))(loc2);
	RTHOOK(11);
	tr1 = RTLN(eif_new_type(1229, 0x01).id);
	tr2 = RTMS_EX_H("ID",2,18756);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1228, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(11,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10488, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(11,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", loc2))(loc2, ur1x);
	RTHOOK(12);
	tr1 = RTLN(eif_new_type(1229, 0x01).id);
	tr2 = RTMS_EX_H("NAME",4,1312902469);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1224, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(12,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10488, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(12,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", loc2))(loc2, ur1x);
	RTHOOK(13);
	tr1 = RTLN(eif_new_type(1229, 0x01).id);
	tr2 = RTMS_EX_H("DATE",4,1145132101);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1225, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 3L);
	{
		static EIF_TYPE_INDEX typarr0[] = {280,0xFF01,1027,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr5) = 3L;
		memset(tr5, 0, RT_SPECIAL_VISIBLE_SIZE(tr5));
	}
	tr7 = RTLN(eif_new_type(1027, 0x01).id);
	tr8 = RTMS_EX_H("d",1,100);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1229, 0x01).id);
	tr10 = RTMS_EX_H("DAY",3,4473177);
	ur3 = tr10;
	tr11 = RTLN(eif_new_type(1226, 0x01).id);
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L);
	ui8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 31L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10485, Dtype(tr11)))(tr11, ui8_1x, ui8_2x);
	RTNHOOK(13,1);
	ur4 = RTCCL(tr11);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10488, Dtype(tr9)))(tr9, ur3x, ur4x);
	RTNHOOK(13,2);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7572, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(13,3);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+0) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr7 = RTLN(eif_new_type(1027, 0x01).id);
	tr8 = RTMS_EX_H("m",1,109);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1229, 0x01).id);
	tr10 = RTMS_EX_H("MONTH",5,1331124808);
	ur3 = tr10;
	tr11 = RTLN(eif_new_type(1226, 0x01).id);
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L);
	ui8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 12L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10485, Dtype(tr11)))(tr11, ui8_1x, ui8_2x);
	RTNHOOK(13,4);
	ur4 = RTCCL(tr11);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10488, Dtype(tr9)))(tr9, ur3x, ur4x);
	RTNHOOK(13,5);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7572, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(13,6);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+1) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr7 = RTLN(eif_new_type(1027, 0x01).id);
	tr8 = RTMS_EX_H("y",1,121);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1229, 0x01).id);
	tr10 = RTMS_EX_H("YEAR",4,1497710930);
	ur3 = tr10;
	tr11 = RTLN(eif_new_type(1226, 0x01).id);
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1900L);
	ui8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 3000L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10485, Dtype(tr11)))(tr11, ui8_1x, ui8_2x);
	RTNHOOK(13,7);
	ur4 = RTCCL(tr11);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10488, Dtype(tr9)))(tr9, ur3x, ur4x);
	RTNHOOK(13,8);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7572, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(13,9);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+2) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr4 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2610, Dtype(tr5)))(tr5).it_r;
	ur2 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(10483, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(13,10);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10488, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(13,11);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", loc2))(loc2, ur1x);
	RTHOOK(14);
	tr1 = RTLN(eif_new_type(1229, 0x01).id);
	tr2 = RTMS_EX_H("COUNTRY",7,832649305);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1224, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(14,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10488, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(14,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", loc2))(loc2, ur1x);
	RTHOOK(15);
	ur1 = RTCCL(loc2);
	tr1 = RTMS_EX_H("put_alien",9,452192366);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3041, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(16);
	RTDBGAL(Current, 3, 0xF8000143, 0, 0); /* loc3 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,323,0xFF01,1217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2753, Dtype(tr1)))(tr1);
	RTNHOOK(16,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(17);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1703, "compare_objects", loc3))(loc3);
	RTHOOK(18);
	tr1 = RTLN(eif_new_type(1229, 0x01).id);
	tr2 = RTMS_EX_H("ID",2,18756);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1228, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(18,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10488, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(18,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", loc3))(loc3, ur1x);
	RTHOOK(19);
	tr1 = RTLN(eif_new_type(1229, 0x01).id);
	tr2 = RTMS_EX_H("ID",2,18756);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1228, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(19,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10488, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(19,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", loc3))(loc3, ur1x);
	RTHOOK(20);
	tr1 = RTLN(eif_new_type(1229, 0x01).id);
	tr2 = RTMS_EX_H("DATE",4,1145132101);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1225, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 3L);
	{
		static EIF_TYPE_INDEX typarr0[] = {280,0xFF01,1027,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr5) = 3L;
		memset(tr5, 0, RT_SPECIAL_VISIBLE_SIZE(tr5));
	}
	tr7 = RTLN(eif_new_type(1027, 0x01).id);
	tr8 = RTMS_EX_H("d",1,100);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1229, 0x01).id);
	tr10 = RTMS_EX_H("DAY",3,4473177);
	ur3 = tr10;
	tr11 = RTLN(eif_new_type(1226, 0x01).id);
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L);
	ui8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 31L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10485, Dtype(tr11)))(tr11, ui8_1x, ui8_2x);
	RTNHOOK(20,1);
	ur4 = RTCCL(tr11);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10488, Dtype(tr9)))(tr9, ur3x, ur4x);
	RTNHOOK(20,2);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7572, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(20,3);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+0) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr7 = RTLN(eif_new_type(1027, 0x01).id);
	tr8 = RTMS_EX_H("m",1,109);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1229, 0x01).id);
	tr10 = RTMS_EX_H("MONTH",5,1331124808);
	ur3 = tr10;
	tr11 = RTLN(eif_new_type(1226, 0x01).id);
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L);
	ui8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 12L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10485, Dtype(tr11)))(tr11, ui8_1x, ui8_2x);
	RTNHOOK(20,4);
	ur4 = RTCCL(tr11);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10488, Dtype(tr9)))(tr9, ur3x, ur4x);
	RTNHOOK(20,5);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7572, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(20,6);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+1) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr7 = RTLN(eif_new_type(1027, 0x01).id);
	tr8 = RTMS_EX_H("y",1,121);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1229, 0x01).id);
	tr10 = RTMS_EX_H("YEAR",4,1497710930);
	ur3 = tr10;
	tr11 = RTLN(eif_new_type(1226, 0x01).id);
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1900L);
	ui8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 3000L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10485, Dtype(tr11)))(tr11, ui8_1x, ui8_2x);
	RTNHOOK(20,7);
	ur4 = RTCCL(tr11);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10488, Dtype(tr9)))(tr9, ur3x, ur4x);
	RTNHOOK(20,8);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7572, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(20,9);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+2) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr4 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2610, Dtype(tr5)))(tr5).it_r;
	ur2 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(10483, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(20,10);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10488, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(20,11);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", loc3))(loc3, ur1x);
	RTHOOK(21);
	ur1 = RTCCL(loc3);
	tr1 = RTMS_EX_H("marry",5,1635727481);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3041, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(22);
	RTDBGAL(Current, 4, 0xF8000143, 0, 0); /* loc4 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,323,0xFF01,1217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2753, Dtype(tr1)))(tr1);
	RTNHOOK(22,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(23);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1703, "compare_objects", loc4))(loc4);
	RTHOOK(24);
	tr1 = RTLN(eif_new_type(1229, 0x01).id);
	tr2 = RTMS_EX_H("ID",2,18756);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1228, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(24,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10488, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(24,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", loc4))(loc4, ur1x);
	RTHOOK(25);
	tr1 = RTLN(eif_new_type(1229, 0x01).id);
	tr2 = RTMS_EX_H("ID",2,18756);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1228, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(25,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10488, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(25,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", loc4))(loc4, ur1x);
	RTHOOK(26);
	ur1 = RTCCL(loc4);
	tr1 = RTMS_EX_H("divorce",7,869244773);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3041, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(27);
	RTDBGAL(Current, 5, 0xF8000143, 0, 0); /* loc5 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,323,0xFF01,1217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2753, Dtype(tr1)))(tr1);
	RTNHOOK(27,1);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(28);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1703, "compare_objects", loc5))(loc5);
	RTHOOK(29);
	tr1 = RTLN(eif_new_type(1229, 0x01).id);
	tr2 = RTMS_EX_H("ID",2,18756);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1228, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(29,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10488, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(29,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", loc5))(loc5, ur1x);
	RTHOOK(30);
	ur1 = RTCCL(loc5);
	tr1 = RTMS_EX_H("die",3,6580581);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3041, "extend", Result))(Result, ur1x, ur2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(31);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ur2
#undef ur3
#undef ur4
#undef ui8_1
#undef ui8_2
#undef ui4_1
}

/* {ETF_TYPE_CONSTRAINTS}.comment */
EIF_TYPED_VALUE F1232_12733 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "comment";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1231, Current, 0, 1, 18955);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1231, Current, 18955);
	RTCC(arg1, 1231, l_feature_name, 1, eif_new_type(231, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

void EIF_Minit1232 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
