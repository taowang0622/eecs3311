/*
 * Code for class EV_MENU_ITEM_LIST_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1670_19008(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1670_19009(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1670_19010(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1670_19011(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1670_19012(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1670_19013(EIF_REFERENCE);
extern void F1670_19014(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1670_19015(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1670_19016(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1670_19017(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1670_19018(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1670_19019(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1670_19021(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1670_19022(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1670_19023(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1670_19025(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1670_19026(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1670_19027(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1670_19028(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE F1670_19029_body(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1670_19029(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1670_25398(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1670_25399(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit1670(void);
extern EIF_REFERENCE _A1670_244_2();
extern EIF_REFERENCE _A1670_245_2();

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

/* {EV_MENU_ITEM_LIST_IMP}.old_make */
void F1670_19008 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "old_make";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1669, Current, 0, 1, 25588);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1669, Current, 25588);
	RTCC(arg1, 1669, l_feature_name, 1, RTWCT(15518, dtype, Dftype(Current)), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_interface_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(15511, dtype))(Current, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("interface_assigned", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15518, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("base_make_called", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15528, dtype))(Current)).it_b);
		if (tb1) {
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
#undef up1
#undef ur1
#undef arg1
}

/* {EV_MENU_ITEM_LIST_IMP}.make */
void F1670_19009 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui1_1x = {{0}, SK_INT8};
#define ui1_1 ui1_1x.it_i1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_8 ti1_1;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 1669, Current, 0, 0, 25589);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1669, Current, 25589);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 15918, 0xF80000F5, 0); /* ev_children */
	tr1 = RTLNSMART(RTWCT(15918, dtype, Dftype(Current)).id);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3119, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(15918, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(15513, 1979))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("is_initialized", EX_POST);
		ti1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15521, dtype))(Current)).it_i1);
		ui1_1 = ti1_1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(15527, dtype))(Current, ui1_1x)).it_b);
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
	RTLO(2);
	RTEE;
#undef ui4_1
#undef ui1_1
}

/* {EV_MENU_ITEM_LIST_IMP}.on_menu_char */
EIF_TYPED_VALUE F1670_19010 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "on_menu_char";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_c1
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(8);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc4);
	RTLR(5,tr2);
	RTLR(6,loc2);
	RTLR(7,ur1);
	RTLIU(8);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 1669, Current, 4, 2, 25590);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1669, Current, 25590);
	RTCC(arg2, 1669, l_feature_name, 2, eif_new_type(1504, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = *(EIF_POINTER *)(arg2 + RTVA(12138, "item", arg2));
	tp2 = *(EIF_POINTER *)(Current + RTWA(12138, dtype));
	if ((EIF_BOOLEAN)(tp1 == tp2)) {
		RTHOOK(2);
		RTDBGAL(Current, 1, 0xF80000ED, 0, 0); /* loc1 */
		tr1 = RTLN(eif_new_type(237, 0x01).id);
		ui4_1 = ((EIF_INTEGER_32) 2L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4555, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(2,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(3);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '&';
		uw1 = tw1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4847, "append_character", loc1))(loc1, uw1x);
		RTHOOK(4);
		tw1 = (EIF_CHARACTER_32) arg1;
		uw1 = tw1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4847, "append_character", loc1))(loc1, uw1x);
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4859, "to_lower", loc1))(loc1);
		RTHOOK(6);
		RTDBGAL(Current, 4, 0xF8000092, 0, 0); /* loc4 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15918, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1753, "cursor", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		loc4 = (EIF_REFERENCE) RTCCL(tr2);
		RTHOOK(7);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15918, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(7,1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1780, "start", tr1))(tr1);
		RTHOOK(8);
		RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
		loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		for (;;) {
			RTHOOK(9);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15918, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(9,1);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1794, "after", tr1))(tr1)).it_b);
			if (tb1) break;
			RTHOOK(10);
			RTDBGAL(Current, 2, 0xF80000ED, 0, 0); /* loc2 */
			loc2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15918, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(10,1);
			tr1 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1747, "item", loc2))(loc2)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTNHOOK(10,2);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16097, "text", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(10,3);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc2 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(11);
			if ((EIF_BOOLEAN)(loc2 != NULL)) {
				RTHOOK(12);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4859, "to_lower", loc2))(loc2);
				RTHOOK(13);
				tb2 = '\0';
				ti4_1 = *(EIF_INTEGER_32 *)(loc2 + RTVA(4824, "count", loc2));
				ti4_2 = *(EIF_INTEGER_32 *)(loc1 + RTVA(4824, "count", loc1));
				if ((EIF_BOOLEAN) (ti4_1 > ti4_2)) {
					ur1 = RTCCL(loc1);
					ui4_1 = ((EIF_INTEGER_32) 1L);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4605, "substring_index", loc2))(loc2, ur1x, ui4_1x)).it_i4);
					tb2 = (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
				}
				if (tb2) {
					RTHOOK(14);
					tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
					if ((EIF_BOOLEAN)(Result == tp1)) {
						RTHOOK(15);
						RTDBGAL(Current, 0, 0x40000000, 1,0); /* Result */
						ui4_1 = loc3;
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6690, 983))(Current)).it_i4);
						ui4_2 = ti4_1;
						Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(10852, dtype))(Current, ui4_1x, ui4_2x)).it_p);
					} else {
						RTHOOK(16);
						RTDBGAL(Current, 0, 0x40000000, 1,0); /* Result */
						up1 = Result;
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10850, dtype))(Current, up1x)).it_i4);
						ui4_1 = ti4_1;
						ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6691, 983))(Current)).it_i4);
						ui4_2 = ti4_2;
						tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(10852, dtype))(Current, ui4_1x, ui4_2x)).it_p);
						Result = (EIF_POINTER) tp1;
					}
				}
			}
			RTHOOK(17);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15918, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(17,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1796, "forth", tr1))(tr1);
			RTHOOK(18);
			RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
			loc3++;
		}
		RTHOOK(19);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15918, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(19,1);
		ur1 = RTCCL(loc4);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1755, "go_to", tr1))(tr1, ur1x);
	} else {
		RTHOOK(20);
		RTDBGAL(Current, 0, 0x40000000, 1,0); /* Result */
		uc1 = arg1;
		ur1 = RTCCL(arg2);
		Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(15912, dtype))(Current, uc1x, ur1x)).it_p);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
#undef uw1
#undef uc1
#undef arg2
#undef arg1
}

/* {EV_MENU_ITEM_LIST_IMP}.rebuild_control */
void F1670_19011 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "rebuild_control";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 1669, Current, 2, 0, 25591);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1669, Current, 25591);
	RTIV(Current, RTAL);
	for (;;) {
		RTHOOK(1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(14190, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 0L))) break;
		RTHOOK(2);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(14185, dtype))(Current, ui4_1x);
	}
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15918, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1780, "start", tr1))(tr1);
	RTHOOK(4);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15918, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1794, "after", tr1))(tr1)).it_b);
		if (tb1) break;
		RTHOOK(6);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15918, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,1);
		ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVA(3132, "index", tr1));
		loc2 = (EIF_INTEGER_32) ti4_2;
		RTHOOK(7);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15918, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(7,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1747, "item", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr2);
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(15905, dtype))(Current, ur1x, ui4_1x);
		RTHOOK(8);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15918, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(8,1);
		ui4_1 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2671, "go_i_th", tr1))(tr1, ui4_1x);
		RTHOOK(9);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15918, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(9,1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1796, "forth", tr1))(tr1);
		RTHOOK(10);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTHOOK(11);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(15909, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
}

/* {EV_MENU_ITEM_LIST_IMP}.ev_children */
EIF_TYPED_VALUE F1670_19012 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(15918,Dtype(Current)));
	return r;
}


/* {EV_MENU_ITEM_LIST_IMP}.radio_group */
EIF_TYPED_VALUE F1670_19013 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(15904,Dtype(Current)));
	return r;
}


/* {EV_MENU_ITEM_LIST_IMP}.insert_item */
void F1670_19014 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "insert_item";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,ur1);
	RTLR(5,loc3);
	RTLR(6,loc2);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 1669, Current, 3, 2, 25594);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1669, Current, 25594);
	RTCC(arg1, 1669, l_feature_name, 1, eif_new_type(1895, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("v_imp_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("pos_within_bounds", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L))) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15859, dtype))(Current)).it_i4);
			tb1 = (EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15918, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	ui4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2671, "go_i_th", tr1))(tr1, ui4_1x);
	RTHOOK(4);
	RTDBGAL(Current, 1, 0xF80007A4, 0, 0); /* loc1 */
	loc1 = RTCCL(arg1);
	loc1 = RTRV(eif_new_type(1956, 0x00), loc1);
	RTHOOK(5);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(6);
		ur1 = RTCCL(loc1);
		ui4_1 = arg2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(15906, dtype))(Current, ur1x, ui4_1x);
	} else {
		RTHOOK(7);
		RTDBGAL(Current, 3, 0xF80007A1, 0, 0); /* loc3 */
		loc3 = RTCCL(arg1);
		loc3 = RTRV(eif_new_type(1953, 0x00), loc3);
		RTHOOK(8);
		RTCT0(NULL, EX_CHECK);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(9);
		RTDBGAL(Current, 2, 0xF80007A5, 0, 0); /* loc2 */
		loc2 = RTCCL(loc3);
		loc2 = RTRV(eif_new_type(1957, 0x00), loc2);
		RTHOOK(10);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTHOOK(11);
			ur1 = RTCCL(loc2);
			ui4_1 = arg2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(15907, dtype))(Current, ur1x, ui4_1x);
		} else {
			RTHOOK(12);
			ur1 = RTCCL(loc3);
			ui4_1 = arg2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(15908, dtype))(Current, ur1x, ui4_1x);
		}
		RTHOOK(13);
		tb1 = '\01';
		tb2 = *(EIF_BOOLEAN *)(loc3 + RTVA(19804, "is_sensitive", loc3));
		if (!(EIF_BOOLEAN) !tb2) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15913, dtype))(Current)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			RTHOOK(14);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(16060, "disable_sensitive", loc3))(loc3);
		}
	}
	RTHOOK(15);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(15909, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef arg2
#undef arg1
}

/* {EV_MENU_ITEM_LIST_IMP}.quick_insert_item */
void F1670_19015 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "quick_insert_item";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(5,tr1);
	RTLR(6,tr2);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_INT32, &loc4);
	
	RTEAA(l_feature_name, 1669, Current, 4, 2, 25595);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1669, Current, 25595);
	RTCC(arg1, 1669, l_feature_name, 1, eif_new_type(1953, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("menu_item_imp_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_pos", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9778, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9788, dtype))(Current)).it_i4);
	ui4_1 = ti4_2;
	ti4_2 = eif_bit_or(ti4_1,ui4_1);
	loc4 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(4);
	RTDBGAL(Current, 1, 0xF80007A4, 0, 0); /* loc1 */
	loc1 = RTCCL(arg1);
	loc1 = RTRV(eif_new_type(1956, 0x00), loc1);
	RTHOOK(5);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(6);
		tp1 = *(EIF_POINTER *)(Current + RTWA(12138, dtype));
		up1 = tp1;
		ui4_1 = (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9779, dtype))(Current)).it_i4);
		ui4_2 = loc4;
		ti4_2 = eif_bit_or(ti4_1,ui4_2);
		ui4_2 = ti4_2;
		tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		up2 = tp2;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(19777, "object_id", loc1))(loc1)).it_i4);
		ui4_3 = ti4_1;
		tp3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(12146, dtype))(Current, ui4_3x)).it_p);
		up3 = tp3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(14210, dtype))(Current, up1x, ui4_1x, ui4_2x, up2x, up3x);
	} else {
		RTHOOK(7);
		tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(19804, "is_sensitive", arg1));
		if (tb1) {
			RTHOOK(8);
			RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9780, dtype))(Current)).it_i4);
			ui4_1 = ti4_1;
			ti4_1 = eif_bit_or(loc4,ui4_1);
			loc4 = (EIF_INTEGER_32) ti4_1;
		} else {
			RTHOOK(9);
			RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9781, dtype))(Current)).it_i4);
			ui4_1 = ti4_1;
			ti4_1 = eif_bit_or(loc4,ui4_1);
			loc4 = (EIF_INTEGER_32) ti4_1;
		}
		RTHOOK(10);
		RTDBGAL(Current, 2, 0xF80007A5, 0, 0); /* loc2 */
		loc2 = RTCCL(arg1);
		loc2 = RTRV(eif_new_type(1957, 0x00), loc2);
		RTHOOK(11);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTHOOK(12);
			tp1 = *(EIF_POINTER *)(Current + RTWA(12138, dtype));
			up1 = tp1;
			ui4_1 = (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9789, dtype))(Current)).it_i4);
			ui4_2 = loc4;
			ti4_2 = eif_bit_or(ti4_1,ui4_2);
			ui4_2 = ti4_2;
			tp2 = *(EIF_POINTER *)(loc2 + RTVA(12138, "wel_item", loc2));
			up2 = tp2;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(19777, "object_id", loc2))(loc2)).it_i4);
			ui4_3 = ti4_1;
			tp3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(12146, dtype))(Current, ui4_3x)).it_p);
			up3 = tp3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(14210, dtype))(Current, up1x, ui4_1x, ui4_2x, up2x, up3x);
		} else {
			RTHOOK(13);
			RTDBGAL(Current, 3, 0xF800072E, 0, 0); /* loc3 */
			loc3 = RTCCL(arg1);
			loc3 = RTRV(eif_new_type(1838, 0x00), loc3);
			RTHOOK(14);
			tb1 = '\0';
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17943, "is_selected", loc3))(loc3)).it_b);
				tb1 = tb2;
			}
			if (tb1) {
				RTHOOK(15);
				RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9784, dtype))(Current)).it_i4);
				ui4_1 = ti4_1;
				ti4_1 = eif_bit_or(loc4,ui4_1);
				loc4 = (EIF_INTEGER_32) ti4_1;
			}
			RTHOOK(16);
			tp1 = *(EIF_POINTER *)(Current + RTWA(12138, dtype));
			up1 = tp1;
			ui4_1 = (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
			ui4_2 = loc4;
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(10648, "id", arg1));
			ui4_3 = ti4_1;
			tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(12146, dtype))(Current, ui4_3x)).it_p);
			up2 = tp2;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(19777, "object_id", arg1))(arg1)).it_i4);
			ui4_3 = ti4_1;
			tp3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(12146, dtype))(Current, ui4_3x)).it_p);
			up3 = tp3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(14210, dtype))(Current, up1x, ui4_1x, ui4_2x, up2x, up3x);
			if (RTAL & CK_CHECK) {
				RTHOOK(17);
				RTCT("inserted", EX_CHECK);
				ui4_1 = (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(14203, dtype))(Current, ui4_1x)).it_i4);
				ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(10648, "id", arg1));
				if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
					RTCK;
				} else {
					RTCF;
				}
				RTHOOK(18);
				RTCT("inserted_on_same_place", EX_CHECK);
				ui4_1 = (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(14203, dtype))(Current, ui4_1x)).it_i4);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15918, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ui4_1 = arg2;
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1742, "at", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				ti4_2 = *(EIF_INTEGER_32 *)(tr2 + RTVA(10648, "id", tr2));
				if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
					RTCK;
				} else {
					RTCF;
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
#undef up1
#undef up2
#undef up3
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg2
#undef arg1
}

/* {EV_MENU_ITEM_LIST_IMP}.remove_item */
void F1670_19016 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "remove_item";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(11);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLR(5,loc3);
	RTLR(6,loc4);
	RTLR(7,loc5);
	RTLR(8,tr2);
	RTLR(9,tr3);
	RTLR(10,loc6);
	RTLIU(11);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	
	RTEAA(l_feature_name, 1669, Current, 6, 1, 25596);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1669, Current, 25596);
	RTCC(arg1, 1669, l_feature_name, 1, eif_new_type(1895, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("v_imp_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 2, 0xF80007A1, 0, 0); /* loc2 */
	loc2 = RTCCL(arg1);
	loc2 = RTRV(eif_new_type(1953, 0x00), loc2);
	RTHOOK(3);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(4);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15918, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	ur1 = RTCCL(loc2);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1788, "index_of", tr1))(tr1, ur1x, ui4_1x)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15913, dtype))(Current)).it_b);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(6);
		tb1 = *(EIF_BOOLEAN *)(loc2 + RTVA(16056, "internal_non_sensitive", loc2));
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(7);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(16059, "enable_sensitive", loc2))(loc2);
		}
	}
	RTHOOK(8);
	RTDBGAL(Current, 3, 0xF80007A4, 0, 0); /* loc3 */
	loc3 = RTCCL(arg1);
	loc3 = RTRV(eif_new_type(1956, 0x00), loc3);
	RTHOOK(9);
	RTDBGAL(Current, 4, 0xF80007A3, 0, 0); /* loc4 */
	loc4 = RTCCL(arg1);
	loc4 = RTRV(eif_new_type(1955, 0x00), loc4);
	RTHOOK(10);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc3 != NULL) || (EIF_BOOLEAN)(loc4 != NULL))) {
		RTHOOK(11);
		RTDBGAL(Current, 5, 0xF8000143, 0, 0); /* loc5 */
		loc5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15904, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(12);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15918, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(12,1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1780, "start", tr1))(tr1);
		for (;;) {
			RTHOOK(13);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15918, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(13,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1747, "item", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			if (RTCEQ(tr2, loc2)) break;
			RTHOOK(14);
			RTDBGAL(Current, 3, 0xF80007A4, 0, 0); /* loc3 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15918, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(14,1);
			tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1747, "item", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			loc3 = RTCCL(tr3);
			loc3 = RTRV(eif_new_type(1956, 0x00), loc3);
			RTHOOK(15);
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				RTHOOK(16);
				RTDBGAL(Current, 5, 0xF8000143, 0, 0); /* loc5 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(19807, "radio_group", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc5 = (EIF_REFERENCE) RTCCL(tr1);
			}
			RTHOOK(17);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15918, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(17,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1796, "forth", tr1))(tr1);
		}
		RTHOOK(18);
		if ((EIF_BOOLEAN)(loc4 != NULL)) {
			RTHOOK(19);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(16077, "remove_from_radio_group", loc4))(loc4);
		} else {
			RTHOOK(20);
			RTDBGAL(Current, 3, 0xF80007A4, 0, 0); /* loc3 */
			loc3 = RTCCL(arg1);
			loc3 = RTRV(eif_new_type(1956, 0x00), loc3);
			RTHOOK(21);
			RTCT0(NULL, EX_CHECK);
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			RTHOOK(22);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(19807, "radio_group", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc6 = RTCCL(tr1);
			if (EIF_TEST(loc6)) {
				RTHOOK(23);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1699, "is_empty", loc6))(loc6)).it_b);
				if ((EIF_BOOLEAN) !tb1) {
					RTHOOK(24);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2669, "last", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(24,1);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(16074, "enable_select", tr1))(tr1);
					RTHOOK(25);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1780, "start", loc6))(loc6);
					for (;;) {
						RTHOOK(26);
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1699, "is_empty", loc6))(loc6)).it_b);
						if (tb1) break;
						RTHOOK(27);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1747, "item", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(27,1);
						ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(10648, "id", tr1));
						ui4_1 = ti4_1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(14192, dtype))(Current, ui4_1x);
						RTHOOK(28);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1747, "item", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(28,1);
						ur1 = RTCCL(loc5);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(16076, "set_radio_group", tr1))(tr1, ur1x);
					}
				}
				RTHOOK(29);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(19810, "remove_radio_group", loc3))(loc3);
			}
		}
	}
	RTHOOK(30);
	ui4_1 = (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(14185, dtype))(Current, ui4_1x);
	RTHOOK(31);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(14190, dtype))(Current)).it_i4);
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(32);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(15909, dtype))(Current);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(33);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef arg1
}

/* {EV_MENU_ITEM_LIST_IMP}.insert_separator_item */
void F1670_19017 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "insert_separator_item";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLR(5,loc1);
	RTLR(6,loc2);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1669, Current, 2, 2, 25597);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1669, Current, 25597);
	RTCC(arg1, 1669, l_feature_name, 1, eif_new_type(1956, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15918, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2671, "go_i_th", tr1))(tr1, ui4_1x);
	for (;;) {
		RTHOOK(2);
		tb1 = '\01';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15918, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1794, "after", tr1))(tr1)).it_b);
		if (!tb2) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15918, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(2,2);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1747, "item", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			ur1 = RTCCL(tr2);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(15910, dtype))(Current, ur1x)).it_b);
			tb1 = tb2;
		}
		if (tb1) break;
		RTHOOK(3);
		RTDBGAL(Current, 1, 0xF80007A3, 0, 0); /* loc1 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15918, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1747, "item", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		loc1 = RTCCL(tr2);
		loc1 = RTRV(eif_new_type(1955, 0x00), loc1);
		RTHOOK(4);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTHOOK(5);
			if ((EIF_BOOLEAN)(loc2 == NULL)) {
				RTHOOK(6);
				RTDBGAL(Current, 2, 0xF8000143, 0, 0); /* loc2 */
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,323,0xFF01,1955,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
					tr1 = RTLN(typres0.id);
				}
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2753, Dtype(tr1)))(tr1);
				RTNHOOK(6,1);
				loc2 = (EIF_REFERENCE) RTCCL(tr1);
			} else {
				RTHOOK(7);
				ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(10648, "id", loc1));
				ui4_1 = ti4_1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(14192, dtype))(Current, ui4_1x);
				RTHOOK(8);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(17945, "disable_select", loc1))(loc1);
			}
			RTHOOK(9);
			ur1 = RTCCL(loc2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(16076, "set_radio_group", loc1))(loc1, ur1x);
		}
		RTHOOK(10);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15918, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(10,1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1796, "forth", tr1))(tr1);
	}
	RTHOOK(11);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTHOOK(12);
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(19809, "set_radio_group", arg1))(arg1, ur1x);
	}
	RTHOOK(13);
	tp1 = *(EIF_POINTER *)(Current + RTWA(12138, dtype));
	up1 = tp1;
	ui4_1 = (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9779, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9778, dtype))(Current)).it_i4);
	ui4_2 = ti4_2;
	ti4_2 = eif_bit_or(ti4_1,ui4_2);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9788, dtype))(Current)).it_i4);
	ui4_2 = ti4_1;
	ti4_1 = eif_bit_or(ti4_2,ui4_2);
	ui4_2 = ti4_1;
	tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
	up2 = tp2;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(19777, "object_id", arg1))(arg1)).it_i4);
	ui4_3 = ti4_2;
	tp3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(12146, dtype))(Current, ui4_3x)).it_p);
	up3 = tp3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(14210, dtype))(Current, up1x, ui4_1x, ui4_2x, up2x, up3x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef up2
#undef up3
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg2
#undef arg1
}

/* {EV_MENU_ITEM_LIST_IMP}.insert_menu */
void F1670_19018 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "insert_menu";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 1669, Current, 1, 2, 25598);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1669, Current, 25598);
	RTCC(arg1, 1669, l_feature_name, 1, eif_new_type(1957, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9789, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9778, dtype))(Current)).it_i4);
	ui4_1 = ti4_2;
	ti4_2 = eif_bit_or(ti4_1,ui4_1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9788, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_1 = eif_bit_or(ti4_2,ui4_1);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + RTWA(12138, dtype));
	up1 = tp1;
	ui4_1 = (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
	ui4_2 = loc1;
	tp2 = *(EIF_POINTER *)(arg1 + RTVA(12138, "wel_item", arg1));
	up2 = tp2;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(19777, "object_id", arg1))(arg1)).it_i4);
	ui4_3 = ti4_1;
	tp3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(12146, dtype))(Current, ui4_3x)).it_p);
	up3 = tp3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(14210, dtype))(Current, up1x, ui4_1x, ui4_2x, up2x, up3x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef up2
#undef up3
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg2
#undef arg1
}

/* {EV_MENU_ITEM_LIST_IMP}.insert_menu_item */
void F1670_19019 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "insert_menu_item";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLR(5,loc1);
	RTLR(6,ur1);
	RTLR(7,loc3);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 1669, Current, 3, 2, 25599);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1669, Current, 25599);
	RTCC(arg1, 1669, l_feature_name, 1, eif_new_type(1953, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = *(EIF_POINTER *)(Current + RTWA(12138, dtype));
	up1 = tp1;
	ui4_1 = (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9778, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9788, dtype))(Current)).it_i4);
	ui4_2 = ti4_2;
	ti4_2 = eif_bit_or(ti4_1,ui4_2);
	ui4_2 = ti4_2;
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(10648, "id", arg1));
	ui4_3 = ti4_1;
	tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(12146, dtype))(Current, ui4_3x)).it_p);
	up2 = tp2;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(19777, "object_id", arg1))(arg1)).it_i4);
	ui4_3 = ti4_1;
	tp3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(12146, dtype))(Current, ui4_3x)).it_p);
	up3 = tp3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(14210, dtype))(Current, up1x, ui4_1x, ui4_2x, up2x, up3x);
	if (RTAL & CK_CHECK) {
		RTHOOK(2);
		RTCT("inserted", EX_CHECK);
		ui4_1 = (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(14203, dtype))(Current, ui4_1x)).it_i4);
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(10648, "id", arg1));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("inserted_on_same_place", EX_CHECK);
		ui4_1 = (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(14203, dtype))(Current, ui4_1x)).it_i4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15918, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = arg2;
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1742, "at", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ti4_2 = *(EIF_INTEGER_32 *)(tr2 + RTVA(10648, "id", tr2));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(4);
	RTDBGAL(Current, 2, 0xF80007A3, 0, 0); /* loc2 */
	loc2 = RTCCL(arg1);
	loc2 = RTRV(eif_new_type(1955, 0x00), loc2);
	RTHOOK(5);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTHOOK(6);
		RTDBGAL(Current, 1, 0xF80007A4, 0, 0); /* loc1 */
		ui4_1 = arg2;
		loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(15911, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(7);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTHOOK(8);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(19807, "radio_group", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			if ((EIF_BOOLEAN)(tr1 == NULL)) {
				RTHOOK(9);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(19808, "create_radio_group", loc1))(loc1);
				RTHOOK(10);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(16074, "enable_select", loc2))(loc2);
			} else {
				RTHOOK(11);
				ti4_1 = *(EIF_INTEGER_32 *)(loc2 + RTVA(10648, "id", loc2));
				ui4_1 = ti4_1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(14192, dtype))(Current, ui4_1x);
				RTHOOK(12);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(17945, "disable_select", loc2))(loc2);
			}
			RTHOOK(13);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(19807, "radio_group", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(16076, "set_radio_group", loc2))(loc2, ur1x);
		} else {
			RTHOOK(14);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15904, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			if ((EIF_BOOLEAN)(tr1 == NULL)) {
				RTHOOK(15);
				RTDBGAA(Current, dtype, 15904, 0xF8000143, 0); /* radio_group */
				tr1 = RTLNSMART(RTWCT(15904, dtype, Dftype(Current)).id);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2753, Dtype(tr1)))(tr1);
				RTNHOOK(15,1);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + RTWA(15904, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(16);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(16074, "enable_select", loc2))(loc2);
			}
			RTHOOK(17);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16073, "selected_peer", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			if ((EIF_BOOLEAN)(tr1 != NULL)) {
				RTHOOK(18);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(17945, "disable_select", loc2))(loc2);
			}
			RTHOOK(19);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15904, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(16076, "set_radio_group", loc2))(loc2, ur1x);
		}
	}
	RTHOOK(20);
	RTDBGAL(Current, 3, 0xF80007A2, 0, 0); /* loc3 */
	loc3 = RTCCL(arg1);
	loc3 = RTRV(eif_new_type(1954, 0x00), loc3);
	RTHOOK(21);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		RTHOOK(22);
		tb1 = *(EIF_BOOLEAN *)(loc3 + RTVA(19805, "is_selected", loc3));
		if (tb1) {
			RTHOOK(23);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(16086, "enable_select", loc3))(loc3);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(24);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef up2
#undef up3
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg2
#undef arg1
}

/* {EV_MENU_ITEM_LIST_IMP}.is_menu_separator_imp */
EIF_TYPED_VALUE F1670_19021 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_menu_separator_imp";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1669, Current, 1, 1, 25600);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1669, Current, 25600);
	RTCC(arg1, 1669, l_feature_name, 1, eif_new_type(1895, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	loc1 = RTCCL(arg1);
	loc1 = RTRV(eif_new_type(1956, 0x01),loc1);
	Result = (EIF_BOOLEAN) EIF_TEST(loc1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {EV_MENU_ITEM_LIST_IMP}.separator_imp_by_index */
EIF_TYPED_VALUE F1670_19022 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "separator_imp_by_index";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1669, Current, 2, 1, 25601);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1669, Current, 25601);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_index_within_bounds", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L))) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15918, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(1,1);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1758, "count", tr1))(tr1)).it_i4);
			tb1 = (EIF_BOOLEAN) (arg1 <= ti4_1);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15918, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1780, "start", tr1))(tr1);
	RTHOOK(3);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		tb1 = '\01';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15918, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1779, "off", tr1))(tr1)).it_b);
		if (!tb2) {
			tb1 = (EIF_BOOLEAN)(arg1 == loc1);
		}
		if (tb1) break;
		RTHOOK(5);
		RTDBGAL(Current, 2, 0xF80007A4, 0, 0); /* loc2 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15918, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1747, "item", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		loc2 = RTCCL(tr2);
		loc2 = RTRV(eif_new_type(1956, 0x00), loc2);
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTHOOK(7);
			RTDBGAL(Current, 0, 0xF80007A4, 0,0); /* Result */
			Result = (EIF_REFERENCE) RTCCL(loc2);
		}
		RTHOOK(8);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15918, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(8,1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1796, "forth", tr1))(tr1);
		RTHOOK(9);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef arg1
}

/* {EV_MENU_ITEM_LIST_IMP}.propagate_on_menu_char */
EIF_TYPED_VALUE F1670_19023 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "propagate_on_menu_char";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_c1
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(7);
	RTLR(0,arg2);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc1);
	RTLR(6,ur1);
	RTLIU(7);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1669, Current, 2, 2, 25602);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1669, Current, 25602);
	RTCC(arg2, 1669, l_feature_name, 2, eif_new_type(1504, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 2, 0xF8000092, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15918, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1753, "cursor", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr2);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15918, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1780, "start", tr1))(tr1);
	for (;;) {
		RTHOOK(3);
		tb1 = '\01';
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		if (!(EIF_BOOLEAN)(Result != tp1)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15918, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(3,1);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1794, "after", tr1))(tr1)).it_b);
			tb1 = tb2;
		}
		if (tb1) break;
		RTHOOK(4);
		RTDBGAL(Current, 1, 0xF80007A5, 0, 0); /* loc1 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15918, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1747, "item", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		loc1 = RTCCL(tr2);
		loc1 = RTRV(eif_new_type(1957, 0x00), loc1);
		RTHOOK(5);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTHOOK(6);
			RTDBGAL(Current, 0, 0x40000000, 1,0); /* Result */
			uc1 = arg1;
			ur1 = RTCCL(arg2);
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15902, "on_menu_char", loc1))(loc1, uc1x, ur1x)).it_p);
			Result = (EIF_POINTER) tp1;
		}
		RTHOOK(7);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15918, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(7,1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1796, "forth", tr1))(tr1);
	}
	RTHOOK(8);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15918, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(8,1);
	ur1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1755, "go_to", tr1))(tr1, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef uc1
#undef arg2
#undef arg1
}

/* {EV_MENU_ITEM_LIST_IMP}.internal_replace */
void F1670_19025 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "internal_replace";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLR(3,tr1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1669, Current, 0, 2, 25603);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1669, Current, 25603);
	RTCC(arg1, 1669, l_feature_name, 1, eif_new_type(1953, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ui4_1 = (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(14185, dtype))(Current, ui4_1x);
	RTHOOK(2);
	ur1 = RTCCL(arg1);
	ui4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(15905, dtype))(Current, ur1x, ui4_1x);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15918, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	ui4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2671, "go_i_th", tr1))(tr1, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef arg2
#undef arg1
}

/* {EV_MENU_ITEM_LIST_IMP}.menu_opened */
void F1670_19026 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "menu_opened";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,tr4);
	RTLR(7,loc1);
	RTLR(8,ur1);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1669, Current, 2, 1, 25604);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1669, Current, 25604);
	RTCC(arg1, 1669, l_feature_name, 1, eif_new_type(1504, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_menu_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 2, 0xF8000172, 0, 0); /* loc2 */
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,185,0xFF01,0,0xFF01,1504,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0.id, 3, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	((EIF_TYPED_VALUE *)tr1+2)->it_r = arg1;
	RTAR(tr1,arg1);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	{
		static EIF_TYPE_INDEX typarr0[] = {340,217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr3) = 1L;
		memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
	}
	*((EIF_INTEGER_32 *)tr3+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	tr2 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2610, Dtype(tr3)))(tr3).it_r;
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,370,0xFF01,0xFFF9,1,185,0xFF01,1953,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr4 = RTLNRW(typres0.id, 0, (EIF_POINTER) _A1670_245_2, (EIF_POINTER)(0),19933, tr2, 0, 1, 1669, tr1, 1);
	}
	loc2 = (EIF_REFERENCE) RTCCL(tr4);
	RTHOOK(3);
	RTDBGAL(Current, 1, 0xF80007A1, 0, 0); /* loc1 */
	ur1 = RTCCL(loc2);
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(15917, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(4);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8944, "select_actions_internal", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tb1 = (EIF_BOOLEAN)(tr1 != NULL);
	}
	if (tb1) {
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8943, "select_actions", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		ur1 = NULL;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3149, "call", tr1))(tr1, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

/* {EV_MENU_ITEM_LIST_IMP}.menu_item_clicked */
void F1670_19027 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "menu_item_clicked";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(8);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,loc1);
	RTLR(7,ur1);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1669, Current, 2, 1, 25605);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1669, Current, 25605);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 2, 0xF8000172, 0, 0); /* loc2 */
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,185,0xFF01,0,217,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0.id, 3, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = arg1;
	ui4_1 = ((EIF_INTEGER_32) 1L);
	{
		static EIF_TYPE_INDEX typarr0[] = {340,217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr3) = 1L;
		memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
	}
	*((EIF_INTEGER_32 *)tr3+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	tr2 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2610, Dtype(tr3)))(tr3).it_r;
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,370,0xFF01,0xFFF9,1,185,0xFF01,1953,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr4 = RTLNRW(typres0.id, 0, (EIF_POINTER) _A1670_244_2, (EIF_POINTER)(0),19932, tr2, 0, 1, 1669, tr1, 1);
	}
	loc2 = (EIF_REFERENCE) RTCCL(tr4);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0xF80007A1, 0, 0); /* loc1 */
	ur1 = RTCCL(loc2);
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(15917, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(19797, "on_activate", loc1))(loc1);
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8151, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTHOOK(6);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8151, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(6,1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,185,0xFF01,1629,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr2 = RTLNTS(typres0.id, 2, 0);
			}
			tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15517, "attached_interface", loc1))(loc1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
			RTAR(tr2,tr3);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3149, "call", tr1))(tr1, ur1x);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef arg1
}

/* {EV_MENU_ITEM_LIST_IMP}.menu_item_from_comparator */
EIF_TYPED_VALUE F1670_19028 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "menu_item_from_comparator";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc4);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc3);
	RTLR(6,ur1);
	RTLR(7,Result);
	RTLIU(8);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 1669, Current, 4, 1, 25606);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1669, Current, 25606);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,370,0xFF01,0xFFF9,1,185,0xFF01,1953,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 1669, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_comparator_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15859, dtype))(Current)).it_i4);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(Result != NULL) || (EIF_BOOLEAN) (loc1 > loc2))) break;
		RTHOOK(5);
		RTDBGAL(Current, 4, 0xF80007A1, 0, 0); /* loc4 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15918, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc1;
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1742, "at", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		loc4 = (EIF_REFERENCE) RTCCL(tr2);
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc4 != NULL)) {
			RTHOOK(7);
			RTDBGAL(Current, 3, 0xF80007A5, 0, 0); /* loc3 */
			loc3 = RTCCL(loc4);
			loc3 = RTRV(eif_new_type(1957, 0x00), loc3);
			RTHOOK(8);
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				RTHOOK(9);
				RTDBGAL(Current, 0, 0xF80007A1, 0,0); /* Result */
				ur1 = RTCCL(arg1);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15917, "menu_item_from_comparator", loc3))(loc3, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				Result = (EIF_REFERENCE) RTCCL(tr1);
			}
			RTHOOK(10);
			tb1 = '\0';
			if ((EIF_BOOLEAN)(Result == NULL)) {
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,185,0xFF01,1953,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
					tr1 = RTLNTS(typres0.id, 2, 0);
				}
				((EIF_TYPED_VALUE *)tr1+1)->it_r = loc4;
				RTAR(tr1,loc4);
				ur1 = RTCCL(tr1);
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4549, "item", arg1))(arg1, ur1x)).it_b);
				tb1 = tb2;
			}
			if (tb1) {
				RTHOOK(11);
				RTDBGAL(Current, 0, 0xF80007A1, 0,0); /* Result */
				Result = (EIF_REFERENCE) RTCCL(loc4);
			}
		}
		RTHOOK(12);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef arg1
}

/* {EV_MENU_ITEM_LIST_IMP}.interface */
static EIF_TYPED_VALUE F1670_19029_body (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 1669, Current, 0, 0, 25607);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1669, Current, 25607);
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

EIF_TYPED_VALUE F1670_19029 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(15518,Dtype(Current)));
	if (!r.it_r) {
		if (RTAT(RTWCT(15518, Dtype(Current), Dftype(Current)))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			RTLIU(1);
			r.it_r = (F1670_19029_body (Current)).it_r;
			*(EIF_REFERENCE *)(Current + RTWA(15518,Dtype(Current))) = r.it_r;
			RTAR(Current, r.it_r);
			RTLE;
		}
	}
	return r;
}


/* {EV_MENU_ITEM_LIST_IMP}.inline-agent#1 of menu_item_clicked */
EIF_TYPED_VALUE F1670_25398 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "inline-agent#1 of menu_item_clicked";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1669, Current, 0, 2, 25592);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1669, Current, 25592);
	RTCC(arg1, 1669, l_feature_name, 1, eif_new_type(1953, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(10648, "id", arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg2
#undef arg1
}

/* {EV_MENU_ITEM_LIST_IMP}.inline-agent#1 of menu_opened */
EIF_TYPED_VALUE F1670_25399 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "inline-agent#1 of menu_opened";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1669, Current, 1, 2, 25593);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1669, Current, 25593);
	RTCC(arg1, 1669, l_feature_name, 1, eif_new_type(1953, 0x01), 0x01);
	RTCC(arg2, 1669, l_feature_name, 2, eif_new_type(1504, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF80007A5, 0, 0); /* loc1 */
	loc1 = RTCCL(arg1);
	loc1 = RTRV(eif_new_type(1957, 0x00), loc1);
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(3);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		tp1 = *(EIF_POINTER *)(loc1 + RTVA(12138, "wel_item", loc1));
		tp2 = *(EIF_POINTER *)(arg2 + RTVA(12138, "item", arg2));
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tp1 == tp2);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg2
#undef arg1
}

void EIF_Minit1670 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
