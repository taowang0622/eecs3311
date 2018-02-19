/*
 * Code for class WEL_SC_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1041_9849(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1041_9850(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1041_9851(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1041_9852(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1041_9853(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1041_9854(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1041_9855(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1041_9856(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1041_9857(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1041_9858(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1041_9859(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1041_9860(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1041_9861(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1041_9862(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1041_9863(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1041_9864(EIF_REFERENCE);
extern void EIF_Minit1041(void);

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

/* {WEL_SC_CONSTANTS}.sc_size */
EIF_TYPED_VALUE F1041_9849 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_size";
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
	
	RTEAA(l_feature_name, 1040, Current, 0, 0, 16175);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1040, Current, 16175);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_SIZE;
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

/* {WEL_SC_CONSTANTS}.sc_move */
EIF_TYPED_VALUE F1041_9850 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_move";
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
	
	RTEAA(l_feature_name, 1040, Current, 0, 0, 16176);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1040, Current, 16176);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_MOVE;
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

/* {WEL_SC_CONSTANTS}.sc_minimize */
EIF_TYPED_VALUE F1041_9851 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_minimize";
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
	
	RTEAA(l_feature_name, 1040, Current, 0, 0, 16177);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1040, Current, 16177);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_MINIMIZE;
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

/* {WEL_SC_CONSTANTS}.sc_maximize */
EIF_TYPED_VALUE F1041_9852 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_maximize";
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
	
	RTEAA(l_feature_name, 1040, Current, 0, 0, 16178);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1040, Current, 16178);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_MAXIMIZE;
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

/* {WEL_SC_CONSTANTS}.sc_nextwindow */
EIF_TYPED_VALUE F1041_9853 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_nextwindow";
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
	
	RTEAA(l_feature_name, 1040, Current, 0, 0, 16179);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1040, Current, 16179);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_NEXTWINDOW;
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

/* {WEL_SC_CONSTANTS}.sc_prevwindow */
EIF_TYPED_VALUE F1041_9854 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_prevwindow";
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
	
	RTEAA(l_feature_name, 1040, Current, 0, 0, 16180);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1040, Current, 16180);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_PREVWINDOW;
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

/* {WEL_SC_CONSTANTS}.sc_close */
EIF_TYPED_VALUE F1041_9855 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_close";
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
	
	RTEAA(l_feature_name, 1040, Current, 0, 0, 16181);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1040, Current, 16181);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_CLOSE;
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

/* {WEL_SC_CONSTANTS}.sc_vscroll */
EIF_TYPED_VALUE F1041_9856 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_vscroll";
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
	
	RTEAA(l_feature_name, 1040, Current, 0, 0, 16182);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1040, Current, 16182);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_VSCROLL;
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

/* {WEL_SC_CONSTANTS}.sc_hscroll */
EIF_TYPED_VALUE F1041_9857 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_hscroll";
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
	
	RTEAA(l_feature_name, 1040, Current, 0, 0, 16183);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1040, Current, 16183);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_HSCROLL;
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

/* {WEL_SC_CONSTANTS}.sc_mousemenu */
EIF_TYPED_VALUE F1041_9858 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_mousemenu";
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
	
	RTEAA(l_feature_name, 1040, Current, 0, 0, 16168);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1040, Current, 16168);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_MOUSEMENU;
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

/* {WEL_SC_CONSTANTS}.sc_keymenu */
EIF_TYPED_VALUE F1041_9859 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_keymenu";
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
	
	RTEAA(l_feature_name, 1040, Current, 0, 0, 16169);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1040, Current, 16169);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_KEYMENU;
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

/* {WEL_SC_CONSTANTS}.sc_arrange */
EIF_TYPED_VALUE F1041_9860 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_arrange";
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
	
	RTEAA(l_feature_name, 1040, Current, 0, 0, 16170);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1040, Current, 16170);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_ARRANGE;
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

/* {WEL_SC_CONSTANTS}.sc_restore */
EIF_TYPED_VALUE F1041_9861 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_restore";
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
	
	RTEAA(l_feature_name, 1040, Current, 0, 0, 16171);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1040, Current, 16171);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_RESTORE;
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

/* {WEL_SC_CONSTANTS}.sc_tasklist */
EIF_TYPED_VALUE F1041_9862 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_tasklist";
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
	
	RTEAA(l_feature_name, 1040, Current, 0, 0, 16172);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1040, Current, 16172);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_TASKLIST;
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

/* {WEL_SC_CONSTANTS}.sc_screensave */
EIF_TYPED_VALUE F1041_9863 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_screensave";
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
	
	RTEAA(l_feature_name, 1040, Current, 0, 0, 16173);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1040, Current, 16173);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_SCREENSAVE;
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

/* {WEL_SC_CONSTANTS}.sc_hotkey */
EIF_TYPED_VALUE F1041_9864 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_hotkey";
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
	
	RTEAA(l_feature_name, 1040, Current, 0, 0, 16174);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1040, Current, 16174);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_HOTKEY;
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

void EIF_Minit1041 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
