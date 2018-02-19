/*
 * Code for class WEL_UDM_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1066_10212(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1066_10213(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1066_10214(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1066_10215(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1066_10216(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1066_10217(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1066_10218(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1066_10219(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1066_10220(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1066_10221(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1066_10222(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1066_10223(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1066_10224(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1066_10225(EIF_REFERENCE);
extern void EIF_Minit1066(void);

#ifdef __cplusplus
}
#endif

#include "cctrl.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_UDM_CONSTANTS}.udm_getaccel */
EIF_TYPED_VALUE F1066_10212 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_getaccel";
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
	
	RTEAA(l_feature_name, 1065, Current, 0, 0, 16528);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1065, Current, 16528);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_GETACCEL;
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

/* {WEL_UDM_CONSTANTS}.udm_getbase */
EIF_TYPED_VALUE F1066_10213 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_getbase";
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
	
	RTEAA(l_feature_name, 1065, Current, 0, 0, 16529);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1065, Current, 16529);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_GETBASE;
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

/* {WEL_UDM_CONSTANTS}.udm_getbuddy */
EIF_TYPED_VALUE F1066_10214 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_getbuddy";
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
	
	RTEAA(l_feature_name, 1065, Current, 0, 0, 16530);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1065, Current, 16530);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_GETBUDDY;
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

/* {WEL_UDM_CONSTANTS}.udm_getpos */
EIF_TYPED_VALUE F1066_10215 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_getpos";
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
	
	RTEAA(l_feature_name, 1065, Current, 0, 0, 16531);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1065, Current, 16531);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_GETPOS;
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

/* {WEL_UDM_CONSTANTS}.udm_getrange */
EIF_TYPED_VALUE F1066_10216 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_getrange";
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
	
	RTEAA(l_feature_name, 1065, Current, 0, 0, 16532);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1065, Current, 16532);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_GETRANGE;
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

/* {WEL_UDM_CONSTANTS}.udm_getrange32 */
EIF_TYPED_VALUE F1066_10217 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_getrange32";
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
	
	RTEAA(l_feature_name, 1065, Current, 0, 0, 16533);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1065, Current, 16533);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_GETRANGE32;
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

/* {WEL_UDM_CONSTANTS}.udm_setaccel */
EIF_TYPED_VALUE F1066_10218 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_setaccel";
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
	
	RTEAA(l_feature_name, 1065, Current, 0, 0, 16534);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1065, Current, 16534);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_SETACCEL;
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

/* {WEL_UDM_CONSTANTS}.udm_setbase */
EIF_TYPED_VALUE F1066_10219 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_setbase";
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
	
	RTEAA(l_feature_name, 1065, Current, 0, 0, 16535);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1065, Current, 16535);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_SETBASE;
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

/* {WEL_UDM_CONSTANTS}.udm_setbuddy */
EIF_TYPED_VALUE F1066_10220 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_setbuddy";
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
	
	RTEAA(l_feature_name, 1065, Current, 0, 0, 16536);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1065, Current, 16536);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_SETBUDDY;
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

/* {WEL_UDM_CONSTANTS}.udm_setpos */
EIF_TYPED_VALUE F1066_10221 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_setpos";
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
	
	RTEAA(l_feature_name, 1065, Current, 0, 0, 16537);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1065, Current, 16537);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_SETPOS;
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

/* {WEL_UDM_CONSTANTS}.udm_setrange */
EIF_TYPED_VALUE F1066_10222 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_setrange";
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
	
	RTEAA(l_feature_name, 1065, Current, 0, 0, 16538);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1065, Current, 16538);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_SETRANGE;
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

/* {WEL_UDM_CONSTANTS}.udm_setrange32 */
EIF_TYPED_VALUE F1066_10223 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1135L);
	return r;
}

/* {WEL_UDM_CONSTANTS}.udm_getpos32 */
EIF_TYPED_VALUE F1066_10224 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1138L);
	return r;
}

/* {WEL_UDM_CONSTANTS}.udm_setpos32 */
EIF_TYPED_VALUE F1066_10225 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1137L);
	return r;
}

void EIF_Minit1066 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
