/*
 * Code for class EV_IMAGE_LIST_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1397_14733(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1397_14734(EIF_REFERENCE);
extern void F1397_14735(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1397_14736(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1397_14737(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1397_14738(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1397_14739(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1397_14740(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1397_14741(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1397_14742(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1397_14743(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1397_14744(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1397_14745(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1397_14746(EIF_REFERENCE);
extern void EIF_Minit1397(void);

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

/* {EV_IMAGE_LIST_IMP}.make_with_size */
void F1397_14733 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "make_with_size";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1396, Current, 0, 2, 21507);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1396, Current, 21507);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ui4_1 = arg1;
	ui4_2 = arg2;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11635, dtype))(Current)).it_i4);
	ui4_3 = ti4_1;
	ub1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(12211, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ub1x);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(12248, dtype))(Current);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 12259, 0xF8000151, 0); /* image_list_info */
	tr1 = RTLNSMART(RTWCT(12259, dtype, Dftype(Current)).id);
	ui4_1 = ((EIF_INTEGER_32) 4L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3011, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(3,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(12259, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 12256, 0xF800017D, 0); /* filenames_index */
	tr1 = RTLNSMART(RTWCT(12256, dtype, Dftype(Current)).id);
	ui4_1 = ((EIF_INTEGER_32) 4L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3011, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(4,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(12256, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAA(Current, dtype, 12257, 0xF8000389, 0); /* bitmap_ids_index */
	tr1 = RTLNSMART(RTWCT(12257, dtype, Dftype(Current)).id);
	ui4_1 = ((EIF_INTEGER_32) 4L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3011, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(5,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(12257, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	RTDBGAA(Current, dtype, 12258, 0xF8000389, 0); /* image_id_to_bitmap_id_index */
	tr1 = RTLNSMART(RTWCT(12258, dtype, Dftype(Current)).id);
	ui4_1 = ((EIF_INTEGER_32) 4L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3011, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(6,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(12258, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ub1
#undef arg2
#undef arg1
}

/* {EV_IMAGE_LIST_IMP}.add_transparent_pixmap */
void F1397_14734 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "add_transparent_pixmap";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE ui4_5x = {{0}, SK_INT32};
#define ui4_5 ui4_5x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc3);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,ur1);
	RTLR(4,loc2);
	RTLR(5,Current);
	RTLR(6,loc4);
	RTLR(7,loc5);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 1396, Current, 5, 0, 21508);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1396, Current, 21508);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 3, 0xF80005E7, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(1511, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(14495, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0xF8000580, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(1408, 0x01).id);
	ur1 = RTCCL(loc3);
	ui4_1 = ((EIF_INTEGER_32) 16L);
	ui4_2 = ((EIF_INTEGER_32) 16L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(12336, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(Current, 2, 0xF8000580, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(1408, 0x01).id);
	ur1 = RTCCL(loc3);
	ui4_1 = ((EIF_INTEGER_32) 16L);
	ui4_2 = ((EIF_INTEGER_32) 16L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(12336, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x);
	RTNHOOK(3,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14348, "select_bitmap", loc3))(loc3, ur1x);
	RTHOOK(5);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ui4_2 = ((EIF_INTEGER_32) 0L);
	ui4_3 = ((EIF_INTEGER_32) 16L);
	ui4_4 = ((EIF_INTEGER_32) 16L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12260, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(5,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9039, "whiteness", tr1))(tr1)).it_i4);
	ui4_5 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14400, "pat_blt", loc3))(loc3, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x);
	RTHOOK(6);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14354, "unselect_bitmap", loc3))(loc3);
	RTHOOK(7);
	RTDBGAL(Current, 4, 0xF80005D1, 0, 0); /* loc4 */
	tr1 = RTLN(eif_new_type(1489, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(12553, Dtype(tr1)))(tr1);
	RTNHOOK(7,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(8);
	ur1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(13815, "set_color_bitmap", loc4))(loc4, ur1x);
	RTHOOK(9);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(13814, "set_mask_bitmap", loc4))(loc4, ur1x);
	RTHOOK(10);
	ub1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(13816, "set_is_icon", loc4))(loc4, ub1x);
	RTHOOK(11);
	RTDBGAL(Current, 5, 0xF8000583, 0, 0); /* loc5 */
	tr1 = RTLN(eif_new_type(1411, 0x01).id);
	ur1 = RTCCL(loc4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(12387, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(11,1);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(12);
	ur1 = RTCCL(loc5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(12221, dtype))(Current, ur1x);
	RTHOOK(13);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(13823, "delete", loc4))(loc4);
	RTHOOK(14);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11509, "delete", loc1))(loc1);
	RTHOOK(15);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11509, "delete", loc2))(loc2);
	RTHOOK(16);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11509, "delete", loc3))(loc3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef ub1
}

/* {EV_IMAGE_LIST_IMP}.pixmap_position */
void F1397_14735 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "pixmap_position";
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
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1396, Current, 2, 1, 21509);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1396, Current, 21509);
	RTCC(arg1, 1396, l_feature_name, 1, eif_new_type(1612, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_pixmap_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 12213, 0x10000000, 1); /* last_position */
	*(EIF_INTEGER_32 *)(Current + RTWA(12213, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	RTHOOK(3);
	RTDBGAL(Current, 1, 0xF8000719, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14684, "implementation", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	loc1 = RTRV(eif_new_type(1817, 0x00), loc1);
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(5);
		RTDBGAL(Current, 2, 0xF80000B8, 0, 0); /* loc2 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17490, "pixmap_filename", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(6);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12256, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(6,1);
			ur1 = RTCCL(loc2);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3015, "has", tr1))(tr1, ur1x)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(7);
			RTDBGAA(Current, dtype, 12213, 0x10000000, 1); /* last_position */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12256, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(7,1);
			ur1 = RTCCL(loc2);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1741, "item", tr1))(tr1, ur1x)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(12213, dtype)) = (EIF_INTEGER_32) ti4_1;
		} else {
			RTHOOK(8);
			tb1 = '\0';
			ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(17463, "private_bitmap_id", loc1));
			if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L))) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12257, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(8,1);
				ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(17463, "private_bitmap_id", loc1));
				ui4_1 = ti4_1;
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3015, "has", tr1))(tr1, ui4_1x)).it_b);
				tb1 = tb2;
			}
			if (tb1) {
				RTHOOK(9);
				RTDBGAA(Current, dtype, 12213, 0x10000000, 1); /* last_position */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12257, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(9,1);
				ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(17463, "private_bitmap_id", loc1));
				ui4_1 = ti4_1;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1741, "item", tr1))(tr1, ui4_1x)).it_i4);
				*(EIF_INTEGER_32 *)(Current + RTWA(12213, dtype)) = (EIF_INTEGER_32) ti4_1;
			}
		}
	}
	RTHOOK(10);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(12213, dtype));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) -1L))) {
		RTHOOK(11);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(12253, dtype))(Current, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
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

/* {EV_IMAGE_LIST_IMP}.add_pixmap */
void F1397_14736 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "add_pixmap";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,Current);
	RTLR(5,ur1);
	RTLR(6,loc3);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_INT32, &loc4);
	
	RTEAA(l_feature_name, 1396, Current, 4, 1, 21510);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1396, Current, 21510);
	RTCC(arg1, 1396, l_feature_name, 1, eif_new_type(1612, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF8000719, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14684, "implementation", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	loc1 = RTRV(eif_new_type(1817, 0x00), loc1);
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(3);
		RTDBGAL(Current, 2, 0xF80000B8, 0, 0); /* loc2 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17490, "pixmap_filename", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(4);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTHOOK(5);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12256, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(5,1);
			ur1 = RTCCL(loc2);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3015, "has", tr1))(tr1, ur1x)).it_b);
			if (tb1) {
				RTHOOK(6);
				RTDBGAA(Current, dtype, 12213, 0x10000000, 1); /* last_position */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12256, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(6,1);
				ur1 = RTCCL(loc2);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1741, "item", tr1))(tr1, ur1x)).it_i4);
				*(EIF_INTEGER_32 *)(Current + RTWA(12213, dtype)) = (EIF_INTEGER_32) ti4_1;
			} else {
				RTHOOK(7);
				RTDBGAL(Current, 3, 0xF8000580, 0, 0); /* loc3 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17462, "private_bitmap", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc3 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(8);
				if ((EIF_BOOLEAN)(loc3 != NULL)) {
					RTHOOK(9);
					RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11504, "object_id", loc3))(loc3)).it_i4);
					loc4 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(10);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12257, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(10,1);
					ui4_1 = loc4;
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3015, "has", tr1))(tr1, ui4_1x)).it_b);
					if (tb1) {
						RTHOOK(11);
						RTDBGAA(Current, dtype, 12213, 0x10000000, 1); /* last_position */
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12257, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(11,1);
						ui4_1 = loc4;
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1741, "item", tr1))(tr1, ui4_1x)).it_i4);
						*(EIF_INTEGER_32 *)(Current + RTWA(12213, dtype)) = (EIF_INTEGER_32) ti4_1;
					} else {
						RTHOOK(12);
						ur1 = RTCCL(arg1);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(12252, dtype))(Current, ur1x);
						RTHOOK(13);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12257, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(13,1);
						ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(12213, dtype));
						ui4_1 = ti4_1;
						ui4_2 = loc4;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1744, "put", tr1))(tr1, ui4_1x, ui4_2x);
						RTHOOK(14);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12258, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(14,1);
						ui4_1 = loc4;
						ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(12213, dtype));
						ui4_2 = ti4_1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1744, "put", tr1))(tr1, ui4_1x, ui4_2x);
						RTHOOK(15);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12256, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(15,1);
						ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(12213, dtype));
						ui4_1 = ti4_1;
						ur1 = RTCCL(loc2);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1744, "put", tr1))(tr1, ui4_1x, ur1x);
					}
				} else {
					RTHOOK(16);
					ur1 = RTCCL(arg1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(12252, dtype))(Current, ur1x);
					RTHOOK(17);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12256, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(17,1);
					ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(12213, dtype));
					ui4_1 = ti4_1;
					ur1 = RTCCL(loc2);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1744, "put", tr1))(tr1, ui4_1x, ur1x);
				}
			}
		} else {
			RTHOOK(18);
			ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(17463, "private_bitmap_id", loc1));
			if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L))) {
				RTHOOK(19);
				RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
				ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(17463, "private_bitmap_id", loc1));
				loc4 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(20);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12257, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(20,1);
				ui4_1 = loc4;
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3015, "has", tr1))(tr1, ui4_1x)).it_b);
				if (tb1) {
					RTHOOK(21);
					RTDBGAA(Current, dtype, 12213, 0x10000000, 1); /* last_position */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12257, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(21,1);
					ui4_1 = loc4;
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1741, "item", tr1))(tr1, ui4_1x)).it_i4);
					*(EIF_INTEGER_32 *)(Current + RTWA(12213, dtype)) = (EIF_INTEGER_32) ti4_1;
				} else {
					RTHOOK(22);
					ur1 = RTCCL(arg1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(12252, dtype))(Current, ur1x);
					RTHOOK(23);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12257, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(23,1);
					ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(12213, dtype));
					ui4_1 = ti4_1;
					ui4_2 = loc4;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1744, "put", tr1))(tr1, ui4_1x, ui4_2x);
					RTHOOK(24);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12258, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(24,1);
					ui4_1 = loc4;
					ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(12213, dtype));
					ui4_2 = ti4_1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1744, "put", tr1))(tr1, ui4_1x, ui4_2x);
				}
			} else {
				RTHOOK(25);
				ur1 = RTCCL(arg1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(12252, dtype))(Current, ur1x);
			}
		}
	} else {
		RTHOOK(26);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(12252, dtype))(Current, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(27);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {EV_IMAGE_LIST_IMP}.extend_pixmap */
void F1397_14737 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "extend_pixmap";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,ur1);
	RTLR(5,Current);
	RTLR(6,loc3);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 1396, Current, 3, 1, 21511);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1396, Current, 21511);
	RTCC(arg1, 1396, l_feature_name, 1, eif_new_type(1612, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF8000719, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14684, "implementation", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	loc1 = RTRV(eif_new_type(1817, 0x00), loc1);
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(3);
		RTDBGAL(Current, 2, 0xF80000B8, 0, 0); /* loc2 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17490, "pixmap_filename", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTHOOK(4);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(12254, dtype))(Current, ur1x);
	RTHOOK(5);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12256, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,1);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(12213, dtype));
		ui4_1 = ti4_1;
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1744, "put", tr1))(tr1, ui4_1x, ur1x);
	} else {
		RTHOOK(7);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTHOOK(8);
			RTDBGAL(Current, 3, 0xF8000580, 0, 0); /* loc3 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17462, "private_bitmap", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc3 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(9);
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				RTHOOK(10);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12257, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(10,1);
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(12213, dtype));
				ui4_1 = ti4_1;
				ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11504, "object_id", loc3))(loc3)).it_i4);
				ui4_2 = ti4_2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1744, "put", tr1))(tr1, ui4_1x, ui4_2x);
				RTHOOK(11);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12258, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(11,1);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11504, "object_id", loc3))(loc3)).it_i4);
				ui4_1 = ti4_1;
				ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(12213, dtype));
				ui4_2 = ti4_2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1744, "put", tr1))(tr1, ui4_1x, ui4_2x);
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {EV_IMAGE_LIST_IMP}.internal_add_pixmap */
void F1397_14738 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "internal_add_pixmap";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
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
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,loc5);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLR(4,Current);
	RTLR(5,loc2);
	RTLR(6,ur1);
	RTLR(7,loc3);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 1396, Current, 5, 1, 21512);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1396, Current, 21512);
	RTCC(arg1, 1396, l_feature_name, 1, eif_new_type(1612, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_pixmap_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 5, 0xF80004F8, 0, 0); /* loc5 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14684, "implementation", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc5 = RTCCL(tr1);
	loc5 = RTRV(eif_new_type(1272, 0x00), loc5);
	RTHOOK(3);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc5 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(4);
	RTDBGAL(Current, 4, 0xF8000151, 0, 0); /* loc4 */
	loc4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12259, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(5);
	RTDBGAL(Current, 2, 0xF8000582, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10805, "icon", loc5))(loc5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	if ((EIF_BOOLEAN)(loc2 == NULL)) {
		RTHOOK(7);
		RTDBGAL(Current, 2, 0xF8000582, 0, 0); /* loc2 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10806, "cursor", loc5))(loc5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTHOOK(8);
	if ((EIF_BOOLEAN)(loc2 == NULL)) {
		RTHOOK(9);
		RTDBGAL(Current, 2, 0xF8000582, 0, 0); /* loc2 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10815, "build_icon", loc5))(loc5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(10);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11505, "enable_reference_tracking", loc2))(loc2);
	} else {
		RTHOOK(11);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11507, "increment_reference", loc2))(loc2);
	}
	RTHOOK(12);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11504, "object_id", loc2))(loc2)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(13);
	tb1 = '\01';
	if (!(EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
		ui4_1 = loc1;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3015, "has", loc4))(loc4, ui4_1x)).it_b);
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		RTHOOK(14);
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(12221, dtype))(Current, ur1x);
		RTHOOK(15);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,185,217,217,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNTS(typres0.id, 3, 1);
		}
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(12213, dtype));
		((EIF_TYPED_VALUE *)tr1+1)->it_i4 = ti4_1;
		((EIF_TYPED_VALUE *)tr1+2)->it_i4 = ((EIF_INTEGER_32) 1L);
		ur1 = RTCCL(tr1);
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1744, "put", loc4))(loc4, ur1x, ui4_1x);
	} else {
		RTHOOK(16);
		RTDBGAL(Current, 3, 0xF80000B9, 0, 0); /* loc3 */
		ui4_1 = loc1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1741, "item", loc4))(loc4, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(17);
		RTCT0(NULL, EX_CHECK);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(18);
		RTDBGAA(Current, dtype, 12213, 0x10000000, 1); /* last_position */
		ti4_1 = eif_integer_32_item(RTCW(loc3),1);
		*(EIF_INTEGER_32 *)(Current + RTWA(12213, dtype)) = (EIF_INTEGER_32) ti4_1;
	}
	RTHOOK(19);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11506, "decrement_reference", loc2))(loc2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

/* {EV_IMAGE_LIST_IMP}.internal_pixmap_position */
void F1397_14739 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "internal_pixmap_position";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
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
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc5);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLR(4,Current);
	RTLR(5,loc2);
	RTLR(6,loc3);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 1396, Current, 5, 1, 21513);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1396, Current, 21513);
	RTCC(arg1, 1396, l_feature_name, 1, eif_new_type(1612, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_pixmap_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 5, 0xF80004F8, 0, 0); /* loc5 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14684, "implementation", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc5 = RTCCL(tr1);
	loc5 = RTRV(eif_new_type(1272, 0x00), loc5);
	RTHOOK(3);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc5 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(4);
	RTDBGAL(Current, 4, 0xF8000151, 0, 0); /* loc4 */
	loc4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12259, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(5);
	RTDBGAL(Current, 2, 0xF8000582, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10805, "icon", loc5))(loc5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	if ((EIF_BOOLEAN)(loc2 == NULL)) {
		RTHOOK(7);
		RTDBGAL(Current, 2, 0xF8000582, 0, 0); /* loc2 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10806, "cursor", loc5))(loc5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTHOOK(8);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTHOOK(9);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11504, "object_id", loc2))(loc2)).it_i4);
		loc1 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(10);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
			ui4_1 = loc1;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3015, "has", loc4))(loc4, ui4_1x)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(11);
			RTDBGAL(Current, 3, 0xF80000B9, 0, 0); /* loc3 */
			ui4_1 = loc1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1741, "item", loc4))(loc4, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc3 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(12);
			RTCT0(NULL, EX_CHECK);
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			RTHOOK(13);
			RTDBGAA(Current, dtype, 12213, 0x10000000, 1); /* last_position */
			ti4_1 = eif_integer_32_item(RTCW(loc3),1);
			*(EIF_INTEGER_32 *)(Current + RTWA(12213, dtype)) = (EIF_INTEGER_32) ti4_1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
#undef up1
#undef ui4_1
#undef arg1
}

/* {EV_IMAGE_LIST_IMP}.internal_extend_pixmap */
void F1397_14740 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "internal_extend_pixmap";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc4);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,Current);
	RTLR(5,loc2);
	RTLR(6,ur1);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 1396, Current, 4, 1, 21514);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1396, Current, 21514);
	RTCC(arg1, 1396, l_feature_name, 1, eif_new_type(1612, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_pixmap_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 4, 0xF80004F8, 0, 0); /* loc4 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14684, "implementation", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc4 = RTCCL(tr1);
	loc4 = RTRV(eif_new_type(1272, 0x00), loc4);
	RTHOOK(3);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc4 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(4);
	RTDBGAL(Current, 3, 0xF8000151, 0, 0); /* loc3 */
	loc3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12259, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(5);
	RTDBGAL(Current, 2, 0xF8000582, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10805, "icon", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	if ((EIF_BOOLEAN)(loc2 == NULL)) {
		RTHOOK(7);
		RTDBGAL(Current, 2, 0xF8000582, 0, 0); /* loc2 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10806, "cursor", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = RTCCL(tr1);
		loc2 = RTRV(eif_new_type(1410, 0x00), loc2);
	}
	RTHOOK(8);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTHOOK(9);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11504, "object_id", loc2))(loc2)).it_i4);
		loc1 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(10);
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(12221, dtype))(Current, ur1x);
		RTHOOK(11);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,185,217,217,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNTS(typres0.id, 3, 1);
		}
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(12213, dtype));
		((EIF_TYPED_VALUE *)tr1+1)->it_i4 = ti4_1;
		((EIF_TYPED_VALUE *)tr1+2)->it_i4 = ((EIF_INTEGER_32) 1L);
		ur1 = RTCCL(tr1);
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1744, "put", loc3))(loc3, ur1x, ui4_1x);
	} else {
		RTHOOK(12);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(12255, dtype))(Current, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

/* {EV_IMAGE_LIST_IMP}.add_pixmap_bitmap */
void F1397_14741 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "add_pixmap_bitmap";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE ui4_5x = {{0}, SK_INT32};
#define ui4_5 ui4_5x.it_i4
	EIF_TYPED_VALUE ui4_6x = {{0}, SK_INT32};
#define ui4_6 ui4_6x.it_i4
	EIF_TYPED_VALUE ui4_7x = {{0}, SK_INT32};
#define ui4_7 ui4_7x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(12);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,loc1);
	RTLR(5,ur1);
	RTLR(6,loc3);
	RTLR(7,loc4);
	RTLR(8,loc5);
	RTLR(9,loc7);
	RTLR(10,loc6);
	RTLR(11,ur2);
	RTLIU(12);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	
	RTEAA(l_feature_name, 1396, Current, 7, 1, 21515);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1396, Current, 21515);
	RTCC(arg1, 1396, l_feature_name, 1, eif_new_type(1612, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 2, 0xF80004F8, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14684, "implementation", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = RTCCL(tr1);
	loc2 = RTRV(eif_new_type(1272, 0x00), loc2);
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc2 == NULL)) {
		RTHOOK(3);
		RTCT0(NULL, EX_CHECK);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
	}
	RTHOOK(4);
	tb1 = '\01';
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10819, "height", loc2))(loc2)).it_i4);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(12229, dtype));
	if (!((EIF_BOOLEAN)(ti4_1 != ti4_2))) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10818, "width", loc2))(loc2)).it_i4);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(12228, dtype));
		tb1 = (EIF_BOOLEAN)(ti4_1 != ti4_2);
	}
	if (tb1) {
		RTHOOK(5);
		RTDBGAL(Current, 1, 0xF800064C, 0, 0); /* loc1 */
		tr1 = RTLN(eif_new_type(1612, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		RTNHOOK(5,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(6);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(18, "copy", loc1))(loc1, ur1x);
		RTHOOK(7);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(12228, dtype));
		ui4_1 = ti4_1;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(12229, dtype));
		ui4_2 = ti4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15367, "stretch", loc1))(loc1, ui4_1x, ui4_2x);
		RTHOOK(8);
		RTDBGAL(Current, 2, 0xF80004F8, 0, 0); /* loc2 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14684, "implementation", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = RTCCL(tr1);
		loc2 = RTRV(eif_new_type(1272, 0x00), loc2);
		RTHOOK(9);
		RTCT0(NULL, EX_CHECK);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
	}
	RTHOOK(10);
	RTDBGAL(Current, 3, 0xF8000580, 0, 0); /* loc3 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10803, "get_bitmap", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(11);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10807, "has_mask", loc2))(loc2)).it_b);
	if (tb1) {
		RTHOOK(12);
		RTDBGAL(Current, 4, 0xF8000580, 0, 0); /* loc4 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10804, "get_mask_bitmap", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc4 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(13);
		RTCT0(NULL, EX_CHECK);
		if ((EIF_BOOLEAN)(loc4 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(14);
		RTDBGAL(Current, 5, 0xF80005E7, 0, 0); /* loc5 */
		tr1 = RTLN(eif_new_type(1511, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(14495, Dtype(tr1)))(tr1);
		RTNHOOK(14,1);
		loc5 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(15);
		ur1 = RTCCL(loc4);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14348, "select_bitmap", loc5))(loc5, ur1x);
		RTHOOK(16);
		RTDBGAL(Current, 7, 0xF80005E7, 0, 0); /* loc7 */
		tr1 = RTLN(eif_new_type(1511, 0x01).id);
		ur1 = RTCCL(loc5);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(14496, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(16,1);
		loc7 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(17);
		RTDBGAL(Current, 6, 0xF8000580, 0, 0); /* loc6 */
		tr1 = RTLN(eif_new_type(1408, 0x01).id);
		ur1 = RTCCL(loc7);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12342, "width", loc4))(loc4)).it_i4);
		ui4_1 = ti4_1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12343, "height", loc4))(loc4)).it_i4);
		ui4_2 = ti4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(12336, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x);
		RTNHOOK(17,1);
		loc6 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(18);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11505, "enable_reference_tracking", loc6))(loc6);
		RTHOOK(19);
		ur1 = RTCCL(loc6);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14348, "select_bitmap", loc7))(loc7, ur1x);
		RTHOOK(20);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		ui4_2 = ((EIF_INTEGER_32) 0L);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12342, "width", loc4))(loc4)).it_i4);
		ui4_3 = ti4_1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12343, "height", loc4))(loc4)).it_i4);
		ui4_4 = ti4_2;
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9039, 1128))(Current)).it_i4);
		ui4_5 = ti4_3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14400, "pat_blt", loc7))(loc7, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x);
		RTHOOK(21);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		ui4_2 = ((EIF_INTEGER_32) 0L);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12342, "width", loc4))(loc4)).it_i4);
		ui4_3 = ti4_1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12343, "height", loc4))(loc4)).it_i4);
		ui4_4 = ti4_2;
		ur1 = RTCCL(loc5);
		ui4_5 = ((EIF_INTEGER_32) 0L);
		ui4_6 = ((EIF_INTEGER_32) 0L);
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9028, 1128))(Current)).it_i4);
		ui4_7 = ti4_3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14394, "bit_blt", loc7))(loc7, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ur1x, ui4_5x, ui4_6x, ui4_7x);
		RTHOOK(22);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14354, "unselect_bitmap", loc5))(loc5);
		RTHOOK(23);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11509, "delete", loc5))(loc5);
		RTHOOK(24);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14354, "unselect_bitmap", loc7))(loc7);
		RTHOOK(25);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11509, "delete", loc7))(loc7);
		RTHOOK(26);
		ur1 = RTCCL(loc3);
		ur2 = RTCCL(loc6);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(12218, dtype))(Current, ur1x, ur2x);
		RTHOOK(27);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11506, "decrement_reference", loc6))(loc6);
		RTHOOK(28);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11506, "decrement_reference", loc4))(loc4);
		RTHOOK(29);
		RTDBGAL(Current, 4, 0xF8000580, 0, 0); /* loc4 */
		loc4 = (EIF_REFERENCE) NULL;
	} else {
		RTHOOK(30);
		ur1 = RTCCL(loc3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(12216, dtype))(Current, ur1x);
	}
	RTHOOK(31);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11506, "decrement_reference", loc3))(loc3);
	RTHOOK(32);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(33);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14682, "destroy", loc1))(loc1);
		RTHOOK(34);
		RTDBGAL(Current, 1, 0xF800064C, 0, 0); /* loc1 */
		loc1 = (EIF_REFERENCE) NULL;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(35);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(10);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef ui4_6
#undef ui4_7
#undef arg1
}

/* {EV_IMAGE_LIST_IMP}.filenames_index */
EIF_TYPED_VALUE F1397_14742 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(12256,Dtype(Current)));
	return r;
}


/* {EV_IMAGE_LIST_IMP}.bitmap_ids_index */
EIF_TYPED_VALUE F1397_14743 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(12257,Dtype(Current)));
	return r;
}


/* {EV_IMAGE_LIST_IMP}.image_id_to_bitmap_id_index */
EIF_TYPED_VALUE F1397_14744 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(12258,Dtype(Current)));
	return r;
}


/* {EV_IMAGE_LIST_IMP}.image_list_info */
EIF_TYPED_VALUE F1397_14745 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(12259,Dtype(Current)));
	return r;
}


/* {EV_IMAGE_LIST_IMP}.raster_constants */
RTOID (F1397_14746)
EIF_TYPED_VALUE F1397_14746 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "raster_constants";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1397_14746);

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1396, Current, 0, 0, 21520);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1396, Current, 21520);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000468, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(1128, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef Result
}

void EIF_Minit1397 (void)
{
	GTCX
	RTOTS (14746,F1397_14746)
}


#ifdef __cplusplus
}
#endif
