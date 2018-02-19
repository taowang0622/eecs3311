/*
 * Code for class EV_PIXEL_BUFFER_PIXEL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1019_9609(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1019_9610(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1019_9611(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1019_9612(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1019_9613(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1019_9614(EIF_REFERENCE);
extern void F1019_9615(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1019_9616(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1019_9617(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1019_9618(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1019_9619(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1019_9620(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1019_9621(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1019_9622(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1019_9623(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1019_9624(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1019_9625(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1019_9626(EIF_REFERENCE);
extern void F1019_9627(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1019_9628(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1019_9629(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1019_9630(EIF_REFERENCE);
static EIF_TYPED_VALUE F1019_9631_body(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1019_9631(EIF_REFERENCE);
extern void EIF_Minit1019(void);

#ifdef __cplusplus
}
#endif

#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_PIXEL_BUFFER_PIXEL}.default_create */
void F1019_9609 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "default_create";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1018, Current, 0, 0, 15906);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1018, Current, 15906);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLN(eif_new_type(123, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1578, "is_windows", tr1))(tr1)).it_b);
	if (tb1) {
		RTHOOK(2);
		RTDBGAA(Current, dtype, 7455, 0x30000000, 1); /* red_shift */
		*(EIF_NATURAL_8 *)(Current + RTWA(7455, dtype)) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 16L);
		RTHOOK(3);
		RTDBGAA(Current, dtype, 7456, 0x30000000, 1); /* green_shift */
		*(EIF_NATURAL_8 *)(Current + RTWA(7456, dtype)) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 8L);
		RTHOOK(4);
		RTDBGAA(Current, dtype, 7457, 0x30000000, 1); /* blue_shift */
		*(EIF_NATURAL_8 *)(Current + RTWA(7457, dtype)) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
		RTHOOK(5);
		RTDBGAA(Current, dtype, 7458, 0x30000000, 1); /* alpha_shift */
		*(EIF_NATURAL_8 *)(Current + RTWA(7458, dtype)) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 24L);
	} else {
		RTHOOK(6);
		RTDBGAA(Current, dtype, 7455, 0x30000000, 1); /* red_shift */
		*(EIF_NATURAL_8 *)(Current + RTWA(7455, dtype)) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 24L);
		RTHOOK(7);
		RTDBGAA(Current, dtype, 7456, 0x30000000, 1); /* green_shift */
		*(EIF_NATURAL_8 *)(Current + RTWA(7456, dtype)) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 16L);
		RTHOOK(8);
		RTDBGAA(Current, dtype, 7457, 0x30000000, 1); /* blue_shift */
		*(EIF_NATURAL_8 *)(Current + RTWA(7457, dtype)) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 8L);
		RTHOOK(9);
		RTDBGAA(Current, dtype, 7458, 0x30000000, 1); /* alpha_shift */
		*(EIF_NATURAL_8 *)(Current + RTWA(7458, dtype)) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {EV_PIXEL_BUFFER_PIXEL}.red */
EIF_TYPED_VALUE F1019_9610 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "red";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1018, Current, 0, 0, 15884);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1018, Current, 15884);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x30000000, 1,0); /* Result */
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(7462, dtype));
	tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(7455, dtype));
	ti4_1 = (EIF_INTEGER_32) tu1_1;
	ui4_1 = ti4_1;
	tu4_2 = eif_bit_shift_right(tu4_1,ui4_1);
	tu1_1 = (EIF_NATURAL_8) (tu4_2);
	Result = (EIF_NATURAL_8) tu1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT8; r.it_n1 = Result; return r; }
#undef ui4_1
}

/* {EV_PIXEL_BUFFER_PIXEL}.green */
EIF_TYPED_VALUE F1019_9611 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "green";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1018, Current, 0, 0, 15885);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1018, Current, 15885);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x30000000, 1,0); /* Result */
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(7462, dtype));
	tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(7456, dtype));
	ti4_1 = (EIF_INTEGER_32) tu1_1;
	ui4_1 = ti4_1;
	tu4_2 = eif_bit_shift_right(tu4_1,ui4_1);
	tu1_1 = (EIF_NATURAL_8) (tu4_2);
	Result = (EIF_NATURAL_8) tu1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT8; r.it_n1 = Result; return r; }
#undef ui4_1
}

/* {EV_PIXEL_BUFFER_PIXEL}.blue */
EIF_TYPED_VALUE F1019_9612 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "blue";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1018, Current, 0, 0, 15886);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1018, Current, 15886);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x30000000, 1,0); /* Result */
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(7462, dtype));
	tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(7457, dtype));
	ti4_1 = (EIF_INTEGER_32) tu1_1;
	ui4_1 = ti4_1;
	tu4_2 = eif_bit_shift_right(tu4_1,ui4_1);
	tu1_1 = (EIF_NATURAL_8) (tu4_2);
	Result = (EIF_NATURAL_8) tu1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT8; r.it_n1 = Result; return r; }
#undef ui4_1
}

/* {EV_PIXEL_BUFFER_PIXEL}.alpha */
EIF_TYPED_VALUE F1019_9613 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "alpha";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1018, Current, 0, 0, 15887);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1018, Current, 15887);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x30000000, 1,0); /* Result */
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(7462, dtype));
	tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(7458, dtype));
	ti4_1 = (EIF_INTEGER_32) tu1_1;
	ui4_1 = ti4_1;
	tu4_2 = eif_bit_shift_right(tu4_1,ui4_1);
	tu1_1 = (EIF_NATURAL_8) (tu4_2);
	Result = (EIF_NATURAL_8) tu1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT8; r.it_n1 = Result; return r; }
#undef ui4_1
}

/* {EV_PIXEL_BUFFER_PIXEL}.rgba_value */
EIF_TYPED_VALUE F1019_9614 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "rgba_value";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT32, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_UINT32, &loc2);
	
	RTEAA(l_feature_name, 1018, Current, 2, 0, 15888);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1018, Current, 15888);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x38000000, 1,0); /* Result */
	Result = *(EIF_NATURAL_32 *)(Current + RTWA(7462, Dtype(Current)));
	RTHOOK(2);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1578, 123))(Current)).it_b);
	if (tb1) {
		RTHOOK(3);
		RTDBGAL(Current, 1, 0x38000000, 1, 0); /* loc1 */
		ui4_1 = ((EIF_INTEGER_32) 8L);
		tu4_1 = eif_bit_shift_left(Result,ui4_1);
		loc1 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(4);
		RTDBGAL(Current, 2, 0x38000000, 1, 0); /* loc2 */
		ui4_1 = ((EIF_INTEGER_32) 24L);
		tu4_1 = eif_bit_shift_right(Result,ui4_1);
		loc2 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(5);
		RTDBGAL(Current, 0, 0x38000000, 1,0); /* Result */
		uu4_1 = loc2;
		tu4_1 = eif_bit_or(loc1,uu4_1);
		Result = (EIF_NATURAL_32) tu4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef ui4_1
#undef uu4_1
}

/* {EV_PIXEL_BUFFER_PIXEL}.set_red */
void F1019_9615 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_red";
	RTEX;
#define arg1 arg1x.it_n1
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_TYPED_VALUE uu1_2x = {{0}, SK_UINT8};
#define uu1_2 uu1_2x.it_n1
	EIF_NATURAL_8 tu1_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n1 = * (EIF_NATURAL_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1018, Current, 0, 1, 15889);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1018, Current, 15889);
	RTIV(Current, RTAL);
	RTHOOK(1);
	uu1_1 = arg1;
	tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(7455, dtype));
	uu1_2 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7459, dtype))(Current, uu1_1x, uu1_2x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("red_set", EX_POST);
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7442, dtype))(Current)).it_n1);
		if ((EIF_BOOLEAN)(tu1_1 == arg1)) {
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
#undef uu1_1
#undef uu1_2
#undef arg1
}

/* {EV_PIXEL_BUFFER_PIXEL}.set_green */
void F1019_9616 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_green";
	RTEX;
#define arg1 arg1x.it_n1
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_TYPED_VALUE uu1_2x = {{0}, SK_UINT8};
#define uu1_2 uu1_2x.it_n1
	EIF_NATURAL_8 tu1_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n1 = * (EIF_NATURAL_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1018, Current, 0, 1, 15890);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1018, Current, 15890);
	RTIV(Current, RTAL);
	RTHOOK(1);
	uu1_1 = arg1;
	tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(7456, dtype));
	uu1_2 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7459, dtype))(Current, uu1_1x, uu1_2x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("green_set", EX_POST);
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7443, dtype))(Current)).it_n1);
		if ((EIF_BOOLEAN)(tu1_1 == arg1)) {
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
#undef uu1_1
#undef uu1_2
#undef arg1
}

/* {EV_PIXEL_BUFFER_PIXEL}.set_blue */
void F1019_9617 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_blue";
	RTEX;
#define arg1 arg1x.it_n1
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_TYPED_VALUE uu1_2x = {{0}, SK_UINT8};
#define uu1_2 uu1_2x.it_n1
	EIF_NATURAL_8 tu1_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n1 = * (EIF_NATURAL_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1018, Current, 0, 1, 15891);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1018, Current, 15891);
	RTIV(Current, RTAL);
	RTHOOK(1);
	uu1_1 = arg1;
	tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(7457, dtype));
	uu1_2 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7459, dtype))(Current, uu1_1x, uu1_2x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("blue_set", EX_POST);
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7444, dtype))(Current)).it_n1);
		if ((EIF_BOOLEAN)(tu1_1 == arg1)) {
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
#undef uu1_1
#undef uu1_2
#undef arg1
}

/* {EV_PIXEL_BUFFER_PIXEL}.set_alpha */
void F1019_9618 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_alpha";
	RTEX;
#define arg1 arg1x.it_n1
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_TYPED_VALUE uu1_2x = {{0}, SK_UINT8};
#define uu1_2 uu1_2x.it_n1
	EIF_NATURAL_8 tu1_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n1 = * (EIF_NATURAL_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1018, Current, 0, 1, 15892);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1018, Current, 15892);
	RTIV(Current, RTAL);
	RTHOOK(1);
	uu1_1 = arg1;
	tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(7458, dtype));
	uu1_2 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7459, dtype))(Current, uu1_1x, uu1_2x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("alpha_set", EX_POST);
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7445, dtype))(Current)).it_n1);
		if ((EIF_BOOLEAN)(tu1_1 == arg1)) {
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
#undef uu1_1
#undef uu1_2
#undef arg1
}

/* {EV_PIXEL_BUFFER_PIXEL}.set_values */
void F1019_9619 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "set_values";
	RTEX;
#define arg1 arg1x.it_n1
#define arg2 arg2x.it_n1
#define arg3 arg3x.it_n1
#define arg4 arg4x.it_n1
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_n1 = * (EIF_NATURAL_8 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_n1 = * (EIF_NATURAL_8 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_n1 = * (EIF_NATURAL_8 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n1 = * (EIF_NATURAL_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT8,&arg1);
	RTLU(SK_UINT8,&arg2);
	RTLU(SK_UINT8,&arg3);
	RTLU(SK_UINT8,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1018, Current, 0, 4, 15893);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1018, Current, 15893);
	RTIV(Current, RTAL);
	RTHOOK(1);
	uu1_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7447, dtype))(Current, uu1_1x);
	RTHOOK(2);
	uu1_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7448, dtype))(Current, uu1_1x);
	RTHOOK(3);
	uu1_1 = arg3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7449, dtype))(Current, uu1_1x);
	RTHOOK(4);
	uu1_1 = arg4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7450, dtype))(Current, uu1_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef uu1_1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {EV_PIXEL_BUFFER_PIXEL}.set_rgba_value */
void F1019_9620 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_rgba_value";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_n4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_TYPED_VALUE uu4_3x = {{0}, SK_UINT32};
#define uu4_3 uu4_3x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_UINT32, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 1018, Current, 3, 1, 15894);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1018, Current, 15894);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1578, 123))(Current)).it_b);
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(Current, 1, 0x38000000, 1, 0); /* loc1 */
		ui4_1 = ((EIF_INTEGER_32) 8L);
		tu4_1 = eif_bit_shift_right(arg1,ui4_1);
		loc1 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(3);
		RTDBGAL(Current, 2, 0x38000000, 1, 0); /* loc2 */
		ui4_1 = ((EIF_INTEGER_32) 24L);
		tu4_1 = eif_bit_shift_left(arg1,ui4_1);
		loc2 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(4);
		RTDBGAL(Current, 1, 0x38000000, 1, 0); /* loc1 */
		uu4_1 = loc2;
		tu4_1 = eif_bit_or(loc1,uu4_1);
		loc1 = (EIF_NATURAL_32) tu4_1;
	} else {
		RTHOOK(5);
		RTDBGAL(Current, 1, 0x38000000, 1, 0); /* loc1 */
		loc1 = (EIF_NATURAL_32) arg1;
	}
	RTHOOK(6);
	RTDBGAL(Current, 3, 0xF8000672, 0, 0); /* loc3 */
	loc3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7463, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(7);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		tb2 = *(EIF_BOOLEAN *)(loc3 + RTVA(15561, "is_locked", loc3));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(8);
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(7460, dtype));
		uu4_1 = tu4_1;
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(7461, dtype));
		uu4_2 = tu4_2;
		uu4_3 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15560, "set_pixel", loc3))(loc3, uu4_1x, uu4_2x, uu4_3x);
	}
	RTHOOK(9);
	RTDBGAA(Current, dtype, 7462, 0x38000000, 1); /* internal_color_value */
	*(EIF_NATURAL_32 *)(Current + RTWA(7462, dtype)) = (EIF_NATURAL_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("rgba_value_set", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7463, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7463, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(10,1);
			tb3 = *(EIF_BOOLEAN *)(tr1 + RTVA(15561, "is_locked", tr1));
			tb2 = tb3;
		}
		if (tb2) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7463, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(10,2);
			tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(7460, dtype));
			uu4_1 = tu4_1;
			tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(7461, dtype));
			uu4_2 = tu4_2;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15559, "get_pixel", tr1))(tr1, uu4_1x, uu4_2x)).it_n4);
			tb1 = (EIF_BOOLEAN)(tu4_1 == arg1);
		}
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
	RTLO(6);
	RTEE;
#undef up1
#undef ui4_1
#undef uu4_1
#undef uu4_2
#undef uu4_3
#undef arg1
}

/* {EV_PIXEL_BUFFER_PIXEL}.set_pixel_buffer */
void F1019_9621 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_pixel_buffer";
	RTEX;
#define arg1 arg1x.it_r
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1018, Current, 0, 1, 15895);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1018, Current, 15895);
	RTCC(arg1, 1018, l_feature_name, 1, eif_new_type(1650, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_pixel_buffer_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 7463, 0xF8000672, 0); /* internal_pixel_buffer */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(7463, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
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

/* {EV_PIXEL_BUFFER_PIXEL}.sync_with_pixel_buffer_value */
void F1019_9622 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "sync_with_pixel_buffer_value";
	RTEX;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_n4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_n4 = * (EIF_NATURAL_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_UINT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1018, Current, 0, 2, 15896);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1018, Current, 15896);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7460, 0x38000000, 1); /* current_column_value */
	*(EIF_NATURAL_32 *)(Current + RTWA(7460, dtype)) = (EIF_NATURAL_32) arg1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 7461, 0x38000000, 1); /* current_row_value */
	*(EIF_NATURAL_32 *)(Current + RTWA(7461, dtype)) = (EIF_NATURAL_32) arg2;
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7463, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTHOOK(4);
		RTDBGAA(Current, dtype, 7462, 0x38000000, 1); /* internal_color_value */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7463, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		uu4_1 = arg1;
		uu4_2 = arg2;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15559, "get_pixel", tr1))(tr1, uu4_1x, uu4_2x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(7462, dtype)) = (EIF_NATURAL_32) tu4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef uu4_1
#undef uu4_2
#undef arg2
#undef arg1
}

/* {EV_PIXEL_BUFFER_PIXEL}.red_shift */
EIF_TYPED_VALUE F1019_9623 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = *(EIF_NATURAL_8 *)(Current + RTWA(7455,Dtype(Current)));
	return r;
}


/* {EV_PIXEL_BUFFER_PIXEL}.green_shift */
EIF_TYPED_VALUE F1019_9624 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = *(EIF_NATURAL_8 *)(Current + RTWA(7456,Dtype(Current)));
	return r;
}


/* {EV_PIXEL_BUFFER_PIXEL}.blue_shift */
EIF_TYPED_VALUE F1019_9625 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = *(EIF_NATURAL_8 *)(Current + RTWA(7457,Dtype(Current)));
	return r;
}


/* {EV_PIXEL_BUFFER_PIXEL}.alpha_shift */
EIF_TYPED_VALUE F1019_9626 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = *(EIF_NATURAL_8 *)(Current + RTWA(7458,Dtype(Current)));
	return r;
}


/* {EV_PIXEL_BUFFER_PIXEL}.set_component_value */
void F1019_9627 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "set_component_value";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
#define arg1 arg1x.it_n1
#define arg2 arg2x.it_n1
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_TYPED_VALUE uu4_3x = {{0}, SK_UINT32};
#define uu4_3 uu4_3x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_n1 = * (EIF_NATURAL_8 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n1 = * (EIF_NATURAL_8 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT8,&arg1);
	RTLU(SK_UINT8,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_UINT32, &loc2);
	
	RTEAA(l_feature_name, 1018, Current, 2, 2, 15901);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1018, Current, 15901);
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg2) {
		case 24U:
			RTHOOK(2);
			RTDBGAL(Current, 1, 0x38000000, 1, 0); /* loc1 */
			loc1 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 16777215L);
			break;
		case 16U:
			RTHOOK(3);
			RTDBGAL(Current, 1, 0x38000000, 1, 0); /* loc1 */
			loc1 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4278255615));
			break;
		case 8U:
			RTHOOK(4);
			RTDBGAL(Current, 1, 0x38000000, 1, 0); /* loc1 */
			loc1 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4294902015));
			break;
		default:
			RTHOOK(5);
			RTDBGAL(Current, 1, 0x38000000, 1, 0); /* loc1 */
			loc1 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4294967040));
			break;
	}
	RTHOOK(6);
	RTDBGAA(Current, dtype, 7462, 0x38000000, 1); /* internal_color_value */
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(7462, dtype));
	uu4_1 = loc1;
	tu4_2 = eif_bit_and(tu4_1,uu4_1);
	*(EIF_NATURAL_32 *)(Current + RTWA(7462, dtype)) = (EIF_NATURAL_32) tu4_2;
	RTHOOK(7);
	RTDBGAL(Current, 2, 0x38000000, 1, 0); /* loc2 */
	tu4_1 = (EIF_NATURAL_32) arg1;
	loc2 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(8);
	RTDBGAL(Current, 2, 0x38000000, 1, 0); /* loc2 */
	ti4_1 = (EIF_INTEGER_32) arg2;
	ui4_1 = ti4_1;
	tu4_1 = eif_bit_shift_left(loc2,ui4_1);
	loc2 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(9);
	RTDBGAA(Current, dtype, 7462, 0x38000000, 1); /* internal_color_value */
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(7462, dtype));
	uu4_1 = loc2;
	tu4_2 = eif_bit_or(tu4_1,uu4_1);
	*(EIF_NATURAL_32 *)(Current + RTWA(7462, dtype)) = (EIF_NATURAL_32) tu4_2;
	RTHOOK(10);
	tb1 = '\0';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7463, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7463, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(10,1);
		tb2 = *(EIF_BOOLEAN *)(tr1 + RTVA(15561, "is_locked", tr1));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(11);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7463, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(11,1);
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(7460, dtype));
		uu4_1 = tu4_1;
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(7461, dtype));
		uu4_2 = tu4_2;
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(7462, dtype));
		uu4_3 = tu4_3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15560, "set_pixel", tr1))(tr1, uu4_1x, uu4_2x, uu4_3x);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("pixel_set", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7463, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7463, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(12,1);
			tb3 = *(EIF_BOOLEAN *)(tr1 + RTVA(15561, "is_locked", tr1));
			tb2 = tb3;
		}
		if (tb2) {
			tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(7462, dtype));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7463, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(12,2);
			tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(7460, dtype));
			uu4_1 = tu4_2;
			tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(7461, dtype));
			uu4_2 = tu4_3;
			tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15559, "get_pixel", tr1))(tr1, uu4_1x, uu4_2x)).it_n4);
			tb1 = (EIF_BOOLEAN)(tu4_1 == tu4_2);
		}
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
	RTLO(6);
	RTEE;
#undef up1
#undef ui4_1
#undef uu4_1
#undef uu4_2
#undef uu4_3
#undef arg2
#undef arg1
}

/* {EV_PIXEL_BUFFER_PIXEL}.current_column_value */
EIF_TYPED_VALUE F1019_9628 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(7460,Dtype(Current)));
	return r;
}


/* {EV_PIXEL_BUFFER_PIXEL}.current_row_value */
EIF_TYPED_VALUE F1019_9629 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(7461,Dtype(Current)));
	return r;
}


/* {EV_PIXEL_BUFFER_PIXEL}.internal_color_value */
EIF_TYPED_VALUE F1019_9630 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(7462,Dtype(Current)));
	return r;
}


/* {EV_PIXEL_BUFFER_PIXEL}.internal_pixel_buffer */
static EIF_TYPED_VALUE F1019_9631_body (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "internal_pixel_buffer";
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1018, Current, 0, 0, 15905);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1018, Current, 15905);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
}

EIF_TYPED_VALUE F1019_9631 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(7463,Dtype(Current)));
	if (!r.it_r) {
		if (RTAT(RTWCT(7463, Dtype(Current), Dftype(Current)))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			RTLIU(1);
			r.it_r = (F1019_9631_body (Current)).it_r;
			*(EIF_REFERENCE *)(Current + RTWA(7463,Dtype(Current))) = r.it_r;
			RTAR(Current, r.it_r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit1019 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
