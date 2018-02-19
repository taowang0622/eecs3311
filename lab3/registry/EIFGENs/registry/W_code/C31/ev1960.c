/*
 * Code for class EV_MENU_SEPARATOR_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1960_25139(EIF_REFERENCE);
extern void F1960_25140(EIF_REFERENCE);
extern void F1960_25141(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1960_25142(EIF_REFERENCE);
extern void F1960_25143(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1960_25144(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1960_25145(EIF_REFERENCE);
static EIF_TYPED_VALUE F1960_25146_body(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1960_25146(EIF_REFERENCE);
extern void EIF_Minit1960(void);

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

/* {EV_MENU_SEPARATOR_IMP}.radio_group */
EIF_TYPED_VALUE F1960_25139 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(19862,Dtype(Current)));
	return r;
}


/* {EV_MENU_SEPARATOR_IMP}.create_radio_group */
void F1960_25140 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "create_radio_group";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
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
	
	RTEAA(l_feature_name, 1959, Current, 0, 0, 31126);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1959, Current, 31126);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("radio_group_void", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19862, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTTE((EIF_BOOLEAN)(tr1 == NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 19862, 0xF8000143, 0); /* radio_group */
	tr1 = RTLNSMART(RTWCT(19862, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2753, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(19862, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("radio_group_not_void", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19862, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
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
	RTLO(2);
	RTEE;
#undef up1
}

/* {EV_MENU_SEPARATOR_IMP}.set_radio_group */
void F1960_25141 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_radio_group";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
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
	
	RTEAA(l_feature_name, 1959, Current, 0, 1, 31119);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1959, Current, 31119);
	RTCC(arg1, 1959, l_feature_name, 1, RTWCT(19862, dtype, Dftype(Current)), 0x02);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_list_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 19862, 0xF8000143, 0); /* radio_group */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(19862, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("assigned", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19862, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
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
#undef up1
#undef arg1
}

/* {EV_MENU_SEPARATOR_IMP}.remove_radio_group */
void F1960_25142 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "remove_radio_group";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
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
	
	RTEAA(l_feature_name, 1959, Current, 0, 0, 31120);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1959, Current, 31120);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 19862, 0xF8000143, 0); /* radio_group */
	*(EIF_REFERENCE *)(Current + RTWA(19862, dtype)) = (EIF_REFERENCE) NULL;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("radio_group_void", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19862, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 == NULL)) {
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
#undef up1
}

/* {EV_MENU_SEPARATOR_IMP}.on_draw_item */
void F1960_25143 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "on_draw_item";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(12);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(5,Current);
	RTLR(6,tr2);
	RTLR(7,loc5);
	RTLR(8,ur1);
	RTLR(9,ur2);
	RTLR(10,ur3);
	RTLR(11,loc6);
	RTLIU(12);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_INT32, &loc11);
	RTLU(SK_INT32, &loc12);
	
	RTEAA(l_feature_name, 1959, Current, 12, 1, 31121);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1959, Current, 31121);
	RTCC(arg1, 1959, l_feature_name, 1, eif_new_type(1850, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF80005EC, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18154, "dc", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 2, 0xF80005D4, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18155, "rect_item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(Current, 7, 0x10000000, 1, 0); /* loc7 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(13887, "width", loc2))(loc2)).it_i4);
	loc7 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	RTDBGAL(Current, 8, 0x10000000, 1, 0); /* loc8 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(13888, "height", loc2))(loc2)).it_i4);
	loc8 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	RTDBGAL(Current, 9, 0x10000000, 1, 0); /* loc9 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(13883, "top", loc2))(loc2)).it_i4);
	loc9 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(6);
	RTDBGAL(Current, 10, 0x10000000, 1, 0); /* loc10 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(13881, "left", loc2))(loc2)).it_i4);
	loc10 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(7);
	RTDBGAL(Current, 11, 0x10000000, 1, 0); /* loc11 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(13885, "right", loc2))(loc2)).it_i4);
	loc11 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(8);
	RTDBGAL(Current, 12, 0x10000000, 1, 0); /* loc12 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(13886, "bottom", loc2))(loc2)).it_i4);
	loc12 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(9);
	RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
	loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc8 / ((EIF_INTEGER_32) 2L));
	RTHOOK(10);
	RTDBGAL(Current, 3, 0xF80006F0, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(1776, 0x01).id);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11472, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(10,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11720, "color_menu", tr2))(tr2)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(16837, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(10,2);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(11);
	if ((EIF_BOOLEAN) (loc4 > ((EIF_INTEGER_32) 1L))) {
		RTHOOK(12);
		RTDBGAL(Current, 5, 0xF80005D4, 0, 0); /* loc5 */
		tr1 = RTLN(eif_new_type(1492, 0x01).id);
		ui4_1 = loc10;
		ui4_2 = loc9;
		ui4_3 = loc11;
		ui4_4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc9 + loc4) - ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(13876, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
		RTNHOOK(12,1);
		loc5 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(13);
		ur1 = RTCCL(loc1);
		ur2 = RTCCL(loc5);
		ur3 = RTCCL(loc3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(19848, dtype))(Current, ur1x, ur2x, ur3x);
	}
	RTHOOK(14);
	RTDBGAL(Current, 6, 0xF800057D, 0, 0); /* loc6 */
	loc6 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17997, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(15);
	ur1 = RTCCL(loc6);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14344, "select_pen", loc1))(loc1, ur1x);
	RTHOOK(16);
	ui4_1 = loc10;
	ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc9 + loc4) - ((EIF_INTEGER_32) 1L));
	ui4_3 = loc11;
	ui4_4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc9 + loc4) - ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14376, "line", loc1))(loc1, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
	RTHOOK(17);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14349, "unselect_pen", loc1))(loc1);
	RTHOOK(18);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11509, "delete", loc6))(loc6);
	RTHOOK(19);
	RTDBGAL(Current, 6, 0xF800057D, 0, 0); /* loc6 */
	loc6 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17998, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(20);
	ur1 = RTCCL(loc6);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14344, "select_pen", loc1))(loc1, ur1x);
	RTHOOK(21);
	ui4_1 = loc10;
	ui4_2 = (EIF_INTEGER_32) (loc9 + loc4);
	ui4_3 = loc11;
	ui4_4 = (EIF_INTEGER_32) (loc9 + loc4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14376, "line", loc1))(loc1, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
	RTHOOK(22);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14349, "unselect_pen", loc1))(loc1);
	RTHOOK(23);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11509, "delete", loc6))(loc6);
	RTHOOK(24);
	if ((EIF_BOOLEAN) (loc4 < loc8)) {
		RTHOOK(25);
		RTDBGAL(Current, 5, 0xF80005D4, 0, 0); /* loc5 */
		tr1 = RTLN(eif_new_type(1492, 0x01).id);
		ui4_1 = loc10;
		ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc9 + loc4) + ((EIF_INTEGER_32) 1L));
		ui4_3 = loc11;
		ui4_4 = loc12;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(13876, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
		RTNHOOK(25,1);
		loc5 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(26);
		ur1 = RTCCL(loc1);
		ur2 = RTCCL(loc5);
		ur3 = RTCCL(loc3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(19848, dtype))(Current, ur1x, ur2x, ur3x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(27);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(15);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg1
}

/* {EV_MENU_SEPARATOR_IMP}.on_measure_item */
void F1960_25144 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "on_measure_item";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
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
	
	RTEAA(l_feature_name, 1959, Current, 0, 1, 31122);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1959, Current, 31122);
	RTCC(arg1, 1959, l_feature_name, 1, eif_new_type(1469, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(13274, "set_item_width", arg1))(arg1, ui4_1x);
	RTHOOK(2);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19843, Dtype(Current)))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(13275, "set_item_height", arg1))(arg1, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ui4_1
#undef arg1
}

/* {EV_MENU_SEPARATOR_IMP}.desired_height */
EIF_TYPED_VALUE F1960_25145 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "desired_height";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1959, Current, 0, 0, 31123);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1959, Current, 31123);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11433, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr2 = RTMS_EX_H("W",1,87);
	ur1 = tr2;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(17684, "string_height", tr1))(tr1, ur1x)).it_i4);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L)) + ((EIF_INTEGER_32) 2L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ur1
}

/* {EV_MENU_SEPARATOR_IMP}.interface */
static EIF_TYPED_VALUE F1960_25146_body (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "interface";
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
	
	RTEAA(l_feature_name, 1959, Current, 0, 0, 31124);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1959, Current, 31124);
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

EIF_TYPED_VALUE F1960_25146 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(15575,Dtype(Current)));
	if (!r.it_r) {
		if (RTAT(RTWCT(15575, Dtype(Current), Dftype(Current)))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			RTLIU(1);
			r.it_r = (F1960_25146_body (Current)).it_r;
			*(EIF_REFERENCE *)(Current + RTWA(15575,Dtype(Current))) = r.it_r;
			RTAR(Current, r.it_r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit1960 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
