/*
 * Code for class ETF_COMMAND
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1360_14304(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1360_14305(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1360_14306(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1360_14307(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1360_14308(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1360_14309(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1360_14310(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1360_14311(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1360_14312(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1360_14313(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1360_14314(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1360_14315(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1360_14316(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1360_14317(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit1360(void);

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

/* {ETF_COMMAND}.make */
void F1360_14304 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	struct eif_ex_1028 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	memset (&sloc1.overhead, 0, OVERHEAD + 0);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, eif_new_type(1028, 0x00).id);
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,ur1);
	RTLR(4,ur2);
	RTLR(5,ur3);
	RTLR(6,Current);
	RTLR(7,loc1);
	RTLR(8,tr1);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1359, Current, 1, 3, 21018);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1359, Current, 21018);
	RTCC(arg1, 1359, l_feature_name, 1, eif_new_type(231, 0x01), 0x01);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,185,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg2, 1359, l_feature_name, 2, typres0, 0x01);
	}
	RTCC(arg3, 1359, l_feature_name, 3, eif_new_type(1149, 0x01), 0x01);
	RTIV(Current, RTAL);
	wstdinit(loc1,loc1);
	RTLXI(loc1);
	RTHOOK(1);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	ur3 = RTCCL(arg3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(11874, 1358))(Current, ur1x, ur2x, ur3x);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 11886, 0xF8000408, 0); /* registry */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7592, "m", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11886, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef arg3
#undef arg2
#undef arg1
}

/* {ETF_COMMAND}.registry */
EIF_TYPED_VALUE F1360_14305 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(11886,Dtype(Current)));
	return r;
}


/* {ETF_COMMAND}.err_id_nonpositive */
RTOID (F1360_14306)


EIF_TYPED_VALUE F1360_14306 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F1360_14306,21021,RTMS_EX_H("id must be positive",19,1317141861));
}

/* {ETF_COMMAND}.err_id_unused */
RTOID (F1360_14307)


EIF_TYPED_VALUE F1360_14307 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F1360_14307,21022,RTMS_EX_H("id not identified with a person in database",43,1933128037));
}

/* {ETF_COMMAND}.err_id_same */
RTOID (F1360_14308)


EIF_TYPED_VALUE F1360_14308 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F1360_14308,21023,RTMS_EX_H("ids must be different",21,1554144372));
}

/* {ETF_COMMAND}.err_id_taken */
RTOID (F1360_14309)


EIF_TYPED_VALUE F1360_14309 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F1360_14309,21024,RTMS_EX_H("id already taken",16,1383821422));
}

/* {ETF_COMMAND}.err_name_start */
RTOID (F1360_14310)


EIF_TYPED_VALUE F1360_14310 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F1360_14310,21025,RTMS32_EX_H("n\000\000\000a\000\000\000m\000\000\000e\000\000\000 \000\000\000m\000\000\000u\000\000\000s\000\000\000t\000\000\000 \000\000\000s\000\000\000t\000\000\000a\000\000\000r\000\000\000t\000\000\000 \000\000\000w\000\000\000i\000\000\000t\000\000\000h\000\000\000 \000\000\000A\000\000\000-\000\000\000Z\000\000\000 \000\000\000o\000\000\000r\000\000\000 \000\000\000a\000\000\000-\000\000\000z\000\000\000",31,1801695610));
}

/* {ETF_COMMAND}.err_country_start */
RTOID (F1360_14311)


EIF_TYPED_VALUE F1360_14311 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F1360_14311,21026,RTMS32_EX_H("c\000\000\000o\000\000\000u\000\000\000n\000\000\000t\000\000\000r\000\000\000y\000\000\000 \000\000\000m\000\000\000u\000\000\000s\000\000\000t\000\000\000 \000\000\000s\000\000\000t\000\000\000a\000\000\000r\000\000\000t\000\000\000 \000\000\000w\000\000\000i\000\000\000t\000\000\000h\000\000\000 \000\000\000A\000\000\000-\000\000\000Z\000\000\000 \000\000\000o\000\000\000r\000\000\000 \000\000\000a\000\000\000-\000\000\000z\000\000\000",34,729793402));
}

/* {ETF_COMMAND}.err_invalid_date */
RTOID (F1360_14312)


EIF_TYPED_VALUE F1360_14312 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F1360_14312,21027,RTMS_EX_H("not a valid date in 1900..3000",30,139760432));
}

/* {ETF_COMMAND}.err_marry */
RTOID (F1360_14313)


EIF_TYPED_VALUE F1360_14313 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F1360_14313,21028,RTMS_EX_H("proposed marriage invalid",25,1141987940));
}

/* {ETF_COMMAND}.err_divorce */
RTOID (F1360_14314)


EIF_TYPED_VALUE F1360_14314 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F1360_14314,21029,RTMS_EX_H("these are not married",21,2131005796));
}

/* {ETF_COMMAND}.err_dead_already */
RTOID (F1360_14315)


EIF_TYPED_VALUE F1360_14315 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F1360_14315,21030,RTMS_EX_H("person with that id already dead",32,152307556));
}

/* {ETF_COMMAND}.is_valid_date */
EIF_TYPED_VALUE F1360_14316 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "is_valid_date";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1359, Current, 1, 3, 21030);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1359, Current, 21030);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF8000721, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(1825, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(17564, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tb1 = '\0';
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1900L)) && (EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 3000L))) && (EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L))) && (EIF_BOOLEAN) (arg2 <= ((EIF_INTEGER_32) 12L))) && (EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 1L)))) {
		ui4_1 = arg2;
		ui4_2 = arg1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(10486, "days_in_i_th_month", loc1))(loc1, ui4_1x, ui4_2x)).it_i4);
		tb1 = (EIF_BOOLEAN) (arg3 <= ti4_1);
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef ui4_2
#undef arg3
#undef arg2
#undef arg1
}

/* {ETF_COMMAND}.is_valid_string */
EIF_TYPED_VALUE F1360_14317 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_valid_string";
	RTEX;
	EIF_CHARACTER_8 loc1 = (EIF_CHARACTER_8) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
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
	RTLU(SK_CHAR8, &loc1);
	
	RTEAA(l_feature_name, 1359, Current, 1, 1, 21031);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1359, Current, 21031);
	RTCC(arg1, 1359, l_feature_name, 1, eif_new_type(231, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4572, "is_empty", arg1))(arg1)).it_b);
	if (tb1) {
		RTHOOK(3);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
		RTHOOK(4);
		RTDBGAL(Current, 1, 0x08000000, 1, 0); /* loc1 */
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4657, "at", arg1))(arg1, ui4_1x)).it_c1);
		loc1 = (EIF_CHARACTER_8) tc1;
		RTHOOK(5);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_CHARACTER_8) 'a' <= loc1) && (EIF_BOOLEAN) (loc1 <= (EIF_CHARACTER_8) 'z')) || (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_CHARACTER_8) 'A' <= loc1) && (EIF_BOOLEAN) (loc1 <= (EIF_CHARACTER_8) 'Z')));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef arg1
}

void EIF_Minit1360 (void)
{
	GTCX
	RTOTS (14306,F1360_14306)
	RTOTS (14307,F1360_14307)
	RTOTS (14308,F1360_14308)
	RTOTS (14309,F1360_14309)
	RTOTS (14310,F1360_14310)
	RTOTS (14311,F1360_14311)
	RTOTS (14312,F1360_14312)
	RTOTS (14313,F1360_14313)
	RTOTS (14314,F1360_14314)
	RTOTS (14315,F1360_14315)
}


#ifdef __cplusplus
}
#endif
