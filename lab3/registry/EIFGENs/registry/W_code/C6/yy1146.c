/*
 * Code for class YY_BUFFER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1146_11416(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1146_11417(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1146_11418(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1146_11419(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1146_11420(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1146_11421(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1146_11422(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1146_11423(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1146_11424(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1146_11425(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1146_11426(EIF_REFERENCE);
extern void F1146_11427(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1146_11428(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1146_11429(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1146_11430(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1146_11431(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1146_11432(EIF_REFERENCE);
extern void F1146_11433(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1146_11434(EIF_REFERENCE);
extern void F1146_11435(EIF_REFERENCE);
extern void F1146_11436(EIF_REFERENCE);
extern void F1146_11437(EIF_REFERENCE);
extern void F1146_11438(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1146_11439(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1146_11440(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1146_11441(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1146_11442(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1146_11443(EIF_REFERENCE);
extern void F1146_25320(EIF_REFERENCE, int);
extern void EIF_Minit1146(void);

#ifdef __cplusplus
}
#endif

#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {YY_BUFFER}.make */
void F1146_11416 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 1145, Current, 2, 1, 17707);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1145, Current, 17707);
	RTCC(arg1, 1145, l_feature_name, 1, eif_new_type(231, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("str_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4681, "count", arg1));
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 2L));
	RTHOOK(3);
	RTDBGAL(Current, 1, 0xF800055E, 0, 0); /* loc1 */
	ui4_1 = loc2;
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9263, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(4);
	ur1 = RTCCL(arg1);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(12052, "fill_from_string", loc1))(loc1, ur1x, ui4_1x);
	RTHOOK(5);
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9266, dtype))(Current)).it_c1);
	uc1 = tc1;
	ui4_1 = (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(9169, "put", loc1))(loc1, uc1x, ui4_1x);
	RTHOOK(6);
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9266, dtype))(Current)).it_c1);
	uc1 = tc1;
	ui4_1 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(9169, "put", loc1))(loc1, uc1x, ui4_1x);
	RTHOOK(7);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9241, dtype))(Current, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("capacity_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9245, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4681, "count", arg1));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("count_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9244, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4681, "count", arg1));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("beginning_of_line", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(9250, dtype));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef uc1
#undef arg1
}

/* {YY_BUFFER}.make_from_buffer */
void F1146_11417 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_from_buffer";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1145, Current, 0, 1, 17708);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1145, Current, 17708);
	RTCC(arg1, 1145, l_feature_name, 1, RTWCT(9243, dtype, Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("buff_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_buff", EX_PRE);
		tb1 = '\0';
		tb2 = '\0';
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9168, "count", arg1))(arg1)).it_i4);
		if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 2L))) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9168, "count", arg1))(arg1)).it_i4);
			ui4_1 = (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9167, "item", arg1))(arg1, ui4_1x)).it_c1);
			tb2 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\000');
		}
		if (tb2) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9168, "count", arg1))(arg1)).it_i4);
			ui4_1 = ti4_1;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9167, "item", arg1))(arg1, ui4_1x)).it_c1);
			tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\000');
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 9245, 0x10000000, 1); /* capacity */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9168, "count", arg1))(arg1)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(9245, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 2L));
	RTHOOK(4);
	RTDBGAA(Current, dtype, 9244, 0x10000000, 1); /* count */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9245, dtype));
	*(EIF_INTEGER_32 *)(Current + RTWA(9244, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 9243, 0xF800055E, 0); /* content */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(9243, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	RTHOOK(6);
	RTDBGAA(Current, dtype, 9249, 0x10000000, 1); /* index */
	*(EIF_INTEGER_32 *)(Current + RTWA(9249, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(7);
	RTDBGAA(Current, dtype, 9247, 0x10000000, 1); /* line */
	*(EIF_INTEGER_32 *)(Current + RTWA(9247, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(8);
	RTDBGAA(Current, dtype, 9248, 0x10000000, 1); /* column */
	*(EIF_INTEGER_32 *)(Current + RTWA(9248, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(9);
	RTDBGAA(Current, dtype, 9246, 0x10000000, 1); /* position */
	*(EIF_INTEGER_32 *)(Current + RTWA(9246, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(10);
	RTDBGAA(Current, dtype, 9250, 0x04000000, 1); /* beginning_of_line */
	*(EIF_BOOLEAN *)(Current + RTWA(9250, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("content_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9243, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("capacity_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9245, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9168, "count", arg1))(arg1)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 2L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("count_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9244, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9168, "count", arg1))(arg1)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 2L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("beginning_of_line", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(9250, dtype));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ui4_1
#undef arg1
}

/* {YY_BUFFER}.name */
EIF_TYPED_VALUE F1146_11418 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "name";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1145, Current, 0, 0, 17709);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1145, Current, 17709);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80000E7, 0,0); /* Result */
	Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9267, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("name_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

/* {YY_BUFFER}.content */
EIF_TYPED_VALUE F1146_11419 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(9243,Dtype(Current)));
	return r;
}


/* {YY_BUFFER}.count */
EIF_TYPED_VALUE F1146_11420 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(9244,Dtype(Current)));
	return r;
}


/* {YY_BUFFER}.capacity */
EIF_TYPED_VALUE F1146_11421 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(9245,Dtype(Current)));
	return r;
}


/* {YY_BUFFER}.position */
EIF_TYPED_VALUE F1146_11422 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(9246,Dtype(Current)));
	return r;
}


/* {YY_BUFFER}.line */
EIF_TYPED_VALUE F1146_11423 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(9247,Dtype(Current)));
	return r;
}


/* {YY_BUFFER}.column */
EIF_TYPED_VALUE F1146_11424 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(9248,Dtype(Current)));
	return r;
}


/* {YY_BUFFER}.index */
EIF_TYPED_VALUE F1146_11425 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(9249,Dtype(Current)));
	return r;
}


/* {YY_BUFFER}.beginning_of_line */
EIF_TYPED_VALUE F1146_11426 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(9250,Dtype(Current)));
	return r;
}


/* {YY_BUFFER}.set_string */
void F1146_11427 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_string";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 1145, Current, 1, 1, 17718);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1145, Current, 17718);
	RTCC(arg1, 1145, l_feature_name, 1, eif_new_type(231, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4681, "count", arg1));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9245, dtype));
	if ((EIF_BOOLEAN) (loc1 > ti4_1)) {
		RTHOOK(4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9243, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		ui4_1 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9173, "resize", tr1))(tr1, ui4_1x);
	}
	RTHOOK(5);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9243, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(5,1);
	ur1 = RTCCL(arg1);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(12052, "fill_from_string", tr1))(tr1, ur1x, ui4_1x);
	RTHOOK(6);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9243, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(6,1);
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9266, dtype))(Current)).it_c1);
	uc1 = tc1;
	ui4_1 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(9169, "put", tr1))(tr1, uc1x, ui4_1x);
	RTHOOK(7);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9243, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(7,1);
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9266, dtype))(Current)).it_c1);
	uc1 = tc1;
	ui4_1 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(9169, "put", tr1))(tr1, uc1x, ui4_1x);
	RTHOOK(8);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9243, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9241, dtype))(Current, ur1x);
	RTHOOK(9);
	RTDBGAA(Current, dtype, 9244, 0x10000000, 1); /* count */
	*(EIF_INTEGER_32 *)(Current + RTWA(9244, dtype)) = (EIF_INTEGER_32) loc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("capacity_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9245, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(9245, dtype));
		ti4_3 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4681, "count", arg1));
		ui4_1 = ti4_3;
		ti4_3 = eif_max_int32 (ti4_2,ui4_1);
		if ((EIF_BOOLEAN)(ti4_1 == ti4_3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("count_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9244, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4681, "count", arg1));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("beginning_of_line", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(9250, dtype));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef uc1
#undef arg1
}

/* {YY_BUFFER}.set_position */
void F1146_11428 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "set_position";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1145, Current, 0, 3, 17719);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1145, Current, 17719);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("p_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("l_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("c_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 9246, 0x10000000, 1); /* position */
	*(EIF_INTEGER_32 *)(Current + RTWA(9246, dtype)) = (EIF_INTEGER_32) arg1;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 9247, 0x10000000, 1); /* line */
	*(EIF_INTEGER_32 *)(Current + RTWA(9247, dtype)) = (EIF_INTEGER_32) arg2;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 9248, 0x10000000, 1); /* column */
	*(EIF_INTEGER_32 *)(Current + RTWA(9248, dtype)) = (EIF_INTEGER_32) arg3;
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("position_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9246, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("line_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9247, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("column_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9248, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* {YY_BUFFER}.set_index */
void F1146_11429 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_index";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1145, Current, 0, 1, 17720);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1145, Current, 17720);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("i_small_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9244, dtype));
		RTTE((EIF_BOOLEAN) (arg1 <= (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 2L))), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("i_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 9249, 0x10000000, 1); /* index */
	*(EIF_INTEGER_32 *)(Current + RTWA(9249, dtype)) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("index_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9249, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {YY_BUFFER}.set_beginning_of_line */
void F1146_11430 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_beginning_of_line";
	RTEX;
#define arg1 arg1x.it_b
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1145, Current, 0, 1, 17721);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1145, Current, 17721);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 9250, 0x04000000, 1); /* beginning_of_line */
	*(EIF_BOOLEAN *)(Current + RTWA(9250, dtype)) = (EIF_BOOLEAN) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("beginning_of_line_set", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(9250, dtype));
		if ((EIF_BOOLEAN)(tb1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {YY_BUFFER}.filled */
EIF_TYPED_VALUE F1146_11431 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(9255,Dtype(Current)));
	return r;
}


/* {YY_BUFFER}.interactive */
EIF_TYPED_VALUE F1146_11432 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(9256,Dtype(Current)));
	return r;
}


/* {YY_BUFFER}.set_interactive */
void F1146_11433 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_interactive";
	RTEX;
#define arg1 arg1x.it_b
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1145, Current, 0, 1, 17695);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1145, Current, 17695);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 9256, 0x04000000, 1); /* interactive */
	*(EIF_BOOLEAN *)(Current + RTWA(9256, dtype)) = (EIF_BOOLEAN) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("interactive_set", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(9256, dtype));
		if ((EIF_BOOLEAN)(tb1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {YY_BUFFER}.fill */
void F1146_11434 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "fill";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1145, Current, 0, 0, 17696);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1145, Current, 17696);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 9255, 0x04000000, 1); /* filled */
	*(EIF_BOOLEAN *)(Current + RTWA(9255, Dtype(Current))) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {YY_BUFFER}.flush */
void F1146_11435 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "flush";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1145, Current, 0, 0, 17697);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1145, Current, 17697);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9243, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9266, dtype))(Current)).it_c1);
	uc1 = tc1;
	ui4_1 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(9169, "put", tr1))(tr1, uc1x, ui4_1x);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9243, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9266, dtype))(Current)).it_c1);
	uc1 = tc1;
	ui4_1 = ((EIF_INTEGER_32) 2L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(9169, "put", tr1))(tr1, uc1x, ui4_1x);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 9244, 0x10000000, 1); /* count */
	*(EIF_INTEGER_32 *)(Current + RTWA(9244, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 9249, 0x10000000, 1); /* index */
	*(EIF_INTEGER_32 *)(Current + RTWA(9249, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(5);
	RTDBGAA(Current, dtype, 9247, 0x10000000, 1); /* line */
	*(EIF_INTEGER_32 *)(Current + RTWA(9247, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(6);
	RTDBGAA(Current, dtype, 9248, 0x10000000, 1); /* column */
	*(EIF_INTEGER_32 *)(Current + RTWA(9248, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(7);
	RTDBGAA(Current, dtype, 9246, 0x10000000, 1); /* position */
	*(EIF_INTEGER_32 *)(Current + RTWA(9246, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(8);
	RTDBGAA(Current, dtype, 9250, 0x04000000, 1); /* beginning_of_line */
	*(EIF_BOOLEAN *)(Current + RTWA(9250, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(9);
	RTDBGAA(Current, dtype, 9255, 0x04000000, 1); /* filled */
	*(EIF_BOOLEAN *)(Current + RTWA(9255, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("flushed", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9244, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("beginning_of_line", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(9250, dtype));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("filled", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(9255, dtype));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef ui4_1
#undef uc1
}

/* {YY_BUFFER}.wipe_out */
void F1146_11436 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "wipe_out";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1145, Current, 0, 0, 17698);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1145, Current, 17698);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(9259, dtype))(Current);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 9255, 0x04000000, 1); /* filled */
	*(EIF_BOOLEAN *)(Current + RTWA(9255, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("wiped_out", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9244, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("beginning_of_line", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(9250, dtype));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("not_filled", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(9255, dtype));
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {YY_BUFFER}.compact_left */
void F1146_11437 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "compact_left";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 1145, Current, 1, 0, 17699);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1145, Current, 17699);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(9244, dtype));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9249, dtype));
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - ti4_1) + ((EIF_INTEGER_32) 1L));
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9245, dtype));
	if ((EIF_BOOLEAN) (loc1 >= ti4_1)) {
		RTHOOK(3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(9264, dtype))(Current);
	}
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9249, dtype));
	if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 1L))) {
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9243, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9249, dtype));
		ui4_1 = ti4_1;
		ui4_2 = ((EIF_INTEGER_32) 1L);
		ui4_3 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(9171, "move_left", tr1))(tr1, ui4_1x, ui4_2x, ui4_3x);
		RTHOOK(6);
		RTDBGAA(Current, dtype, 9249, 0x10000000, 1); /* index */
		*(EIF_INTEGER_32 *)(Current + RTWA(9249, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		RTHOOK(7);
		RTDBGAA(Current, dtype, 9244, 0x10000000, 1); /* count */
		*(EIF_INTEGER_32 *)(Current + RTWA(9244, dtype)) = (EIF_INTEGER_32) loc1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("compacted_left", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9249, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("not_full", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9245, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(9244, dtype));
		if ((EIF_BOOLEAN) (ti4_1 > ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ui4_1
#undef ui4_2
#undef ui4_3
}

/* {YY_BUFFER}.compact_right */
void F1146_11438 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "compact_right";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 1145, Current, 2, 0, 17700);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1145, Current, 17700);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	loc2 = *(EIF_INTEGER_32 *)(Current + RTWA(9244, dtype));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9249, dtype));
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 - ti4_1) + ((EIF_INTEGER_32) 1L));
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9245, dtype));
	if ((EIF_BOOLEAN) (loc2 >= ti4_1)) {
		RTHOOK(3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(9264, dtype))(Current);
	}
	RTHOOK(4);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(9249, dtype));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9245, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(9244, dtype));
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + ti4_1) - ti4_2);
	RTHOOK(5);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9249, dtype));
	if ((EIF_BOOLEAN)(ti4_1 != loc1)) {
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9243, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,1);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9249, dtype));
		ui4_1 = ti4_1;
		ui4_2 = loc1;
		ui4_3 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 2L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(9172, "move_right", tr1))(tr1, ui4_1x, ui4_2x, ui4_3x);
		RTHOOK(7);
		RTDBGAA(Current, dtype, 9249, 0x10000000, 1); /* index */
		*(EIF_INTEGER_32 *)(Current + RTWA(9249, dtype)) = (EIF_INTEGER_32) loc1;
		RTHOOK(8);
		RTDBGAA(Current, dtype, 9244, 0x10000000, 1); /* count */
		*(EIF_INTEGER_32 *)(Current + RTWA(9244, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + loc2) - ((EIF_INTEGER_32) 1L));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("compacted_right", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9244, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(9245, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("not_full", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9249, dtype));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ui4_1
#undef ui4_2
#undef ui4_3
}

/* {YY_BUFFER}.new_default_buffer */
EIF_TYPED_VALUE F1146_11439 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "new_default_buffer";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1145, Current, 0, 1, 17701);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1145, Current, 17701);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("nb_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0xF800055E, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(1382, 0x01).id);
	ui4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(12046, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("buffer_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("buffer_count_set", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9168, "count", Result))(Result)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("buffer_count_large_enough", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9168, "count", Result))(Result)).it_i4);
		if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 2L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef arg1
}

/* {YY_BUFFER}.resize */
void F1146_11440 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "resize";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1145, Current, 0, 0, 17702);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1145, Current, 17702);
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(9245, dtype));
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(9245, dtype));
	if ((EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		RTDBGAA(Current, dtype, 9245, 0x10000000, 1); /* capacity */
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9265, dtype))(Current)).it_i4);
		*(EIF_INTEGER_32 *)(Current + RTWA(9245, dtype)) = (EIF_INTEGER_32) ti4_2;
	} else {
		RTHOOK(3);
		RTDBGAA(Current, dtype, 9245, 0x10000000, 1); /* capacity */
		(*(EIF_INTEGER_32 *)(Current + RTWA(9245, dtype))) *= ((EIF_INTEGER_32) 2L);
	}
	RTHOOK(4);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(9245, dtype));
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9243, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9168, "count", tr2))(tr2)).it_i4);
	if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 2L)) > ti4_3)) {
		RTHOOK(5);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9243, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(9245, dtype));
		ui4_1 = (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 2L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9173, "resize", tr2))(tr2, ui4_1x);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("resized", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(9245, dtype));
		RTCO(tr1);
		if ((EIF_BOOLEAN) (ti4_2 > ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef ui4_1
}

/* {YY_BUFFER}.default_capacity */
RTOID (F1146_11441)
EIF_TYPED_VALUE F1146_11441 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "default_capacity";
	RTEX;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOTDB(EIF_INTEGER_32, F1146_11441);
	dtype = Dtype(Current);

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1145, Current, 0, 0, 17703);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1145, Current, 17703);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16384L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("positive_default_capacity", EX_POST);
		if ((EIF_BOOLEAN) (Result > ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef Result
}

/* {YY_BUFFER}.end_of_buffer_character */
EIF_TYPED_VALUE F1146_11442 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\000';
	return r;
}

/* {YY_BUFFER}.name_constant */
RTOID (F1146_11443)


EIF_TYPED_VALUE F1146_11443 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F1146_11443,17706,RTMS_EX_H("<string>",8,1911048254));
}

/* {YY_BUFFER}._invariant */
void F1146_25320 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 1145, Current, 0, 25319);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("content_not_void", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9243, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("content_count", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9243, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9168, "count", tr1))(tr1)).it_i4);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(9245, dtype));
	if ((EIF_BOOLEAN) (ti4_1 >= (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 2L)))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("positive_capacity", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9245, dtype));
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("valid_count", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9244, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(9244, dtype));
	ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(9245, dtype));
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (ti4_2 <= ti4_3))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("end_of_buffer", Current);
	tb1 = '\0';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9243, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9244, dtype));
	ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9167, "item", tr1))(tr1, ui4_1x)).it_c1);
	tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9266, dtype))(Current)).it_c1);
	if ((EIF_BOOLEAN)(tc1 == tc2)) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9243, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9244, dtype));
		ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 2L));
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9167, "item", tr1))(tr1, ui4_1x)).it_c1);
		tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9266, dtype))(Current)).it_c1);
		tb1 = (EIF_BOOLEAN)(tc1 == tc2);
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("valid_index", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9249, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(9249, dtype));
	ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(9244, dtype));
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (ti4_2 <= (EIF_INTEGER_32) (ti4_3 + ((EIF_INTEGER_32) 2L))))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("line_positive", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9247, dtype));
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 1L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("column_positive", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9248, dtype));
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 1L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("position_positive", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9246, dtype));
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 1L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
#undef up1
#undef ui4_1
}

void EIF_Minit1146 (void)
{
	GTCX
	RTOTS (11441,F1146_11441)
	RTOTS (11443,F1146_11443)
}


#ifdef __cplusplus
}
#endif
