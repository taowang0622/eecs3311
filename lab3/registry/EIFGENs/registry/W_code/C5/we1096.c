/*
 * Code for class WEL_TMPF_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1096_10496(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1096_10497(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1096_10498(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1096_10499(EIF_REFERENCE);
extern void EIF_Minit1096(void);

#ifdef __cplusplus
}
#endif

#include "wel.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_TMPF_CONSTANTS}.tmpf_fixed_pitch */
EIF_TYPED_VALUE F1096_10496 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tmpf_fixed_pitch";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1095, Current, 0, 0, 16812);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1095, Current, 16812);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TMPF_FIXED_PITCH;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_TMPF_CONSTANTS}.tmpf_vector */
EIF_TYPED_VALUE F1096_10497 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tmpf_vector";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1095, Current, 0, 0, 16813);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1095, Current, 16813);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TMPF_VECTOR;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_TMPF_CONSTANTS}.tmpf_device */
EIF_TYPED_VALUE F1096_10498 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tmpf_device";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1095, Current, 0, 0, 16814);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1095, Current, 16814);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TMPF_DEVICE;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_TMPF_CONSTANTS}.tmpf_truetype */
EIF_TYPED_VALUE F1096_10499 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tmpf_truetype";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1095, Current, 0, 0, 16815);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1095, Current, 16815);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TMPF_TRUETYPE;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

void EIF_Minit1096 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
