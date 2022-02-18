/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;CMPOPT-BITS.LSP                               */
#include <ecl/ecl-cmp.h>
#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/cmp/cmpopt-bits.eclh"
/*      function definition for INLINE-BYTESPEC                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1inline_bytespec(cl_object v1bytespec)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_CONSP(v1bytespec))) { goto L2; }
  T0 = ecl_car(v1bytespec);
  if (!((ECL_SYM("BYTE",164))==(T0))) { goto L2; }
  {
   cl_fixnum v2;
   v2 = ecl_length(v1bytespec);
   if (!((v2)==(3))) { goto L2; }
  }
  value0 = ecl_function_dispatch(cl_env_copy,VV[25])(0) /*  POLICY-INLINE-BIT-OPERATIONS */;
  return value0;
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function LAMBDA3                                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC2__lambda3(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5, T6;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4bytespec;
   cl_object v5integer;
   T0 = ecl_car(v1);
   if (!((T0)==(ECL_SYM("FUNCALL",396)))) { goto L2; }
   T0 = ecl_caadr(v1);
   if (!((T0)==(ECL_SYM("FUNCTION",398)))) { goto L2; }
   v3 = ecl_cddr(v1);
   goto L1;
L2:;
   v3 = ecl_cdr(v1);
L1:;
   if (!(v3==ECL_NIL)) { goto L6; }
   ecl_function_dispatch(cl_env_copy,VV[26])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L6:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4bytespec = v6;
   }
   if (!(v3==ECL_NIL)) { goto L12; }
   ecl_function_dispatch(cl_env_copy,VV[26])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L12:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5integer = v6;
   }
   if (Null(v3)) { goto L17; }
   ecl_function_dispatch(cl_env_copy,VV[27])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L17:;
   if (Null(L1inline_bytespec(v4bytespec))) { goto L19; }
   T0 = ecl_cadr(v4bytespec);
   T1 = cl_list(3, VV[1], T0, ECL_SYM("UNSIGNED-BYTE",887));
   T2 = ecl_caddr(v4bytespec);
   T3 = cl_list(3, VV[2], T2, ECL_SYM("UNSIGNED-BYTE",887));
   T4 = cl_list(2, T1, T3);
   T5 = cl_list(3, ECL_SYM("ASH",112), v5integer, VV[4]);
   T6 = cl_list(3, ECL_SYM("LOGAND",494), VV[3], T5);
   value0 = cl_list(3, VV[0], T4, T6);
   return value0;
L19:;
   value0 = v1;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function LAMBDA9                                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC3__lambda9(cl_object v1, cl_object v2)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4bytespec;
   cl_object v5integer;
   T0 = ecl_car(v1);
   if (!((T0)==(ECL_SYM("FUNCALL",396)))) { goto L2; }
   T0 = ecl_caadr(v1);
   if (!((T0)==(ECL_SYM("FUNCTION",398)))) { goto L2; }
   v3 = ecl_cddr(v1);
   goto L1;
L2:;
   v3 = ecl_cdr(v1);
L1:;
   if (!(v3==ECL_NIL)) { goto L6; }
   ecl_function_dispatch(cl_env_copy,VV[26])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L6:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4bytespec = v6;
   }
   if (!(v3==ECL_NIL)) { goto L12; }
   ecl_function_dispatch(cl_env_copy,VV[26])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L12:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5integer = v6;
   }
   if (Null(v3)) { goto L17; }
   ecl_function_dispatch(cl_env_copy,VV[27])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L17:;
   if (Null(L1inline_bytespec(v4bytespec))) { goto L19; }
   T0 = cl_list(3, ECL_SYM("MASK-FIELD",552), v4bytespec, v5integer);
   T1 = cl_list(2, ECL_SYM("ZEROP",928), T0);
   value0 = cl_list(2, ECL_SYM("NOT",586), T1);
   return value0;
L19:;
   value0 = v1;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function LAMBDA15                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC4__lambda15(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4bytespec;
   cl_object v5integer;
   T0 = ecl_car(v1);
   if (!((T0)==(ECL_SYM("FUNCALL",396)))) { goto L2; }
   T0 = ecl_caadr(v1);
   if (!((T0)==(ECL_SYM("FUNCTION",398)))) { goto L2; }
   v3 = ecl_cddr(v1);
   goto L1;
L2:;
   v3 = ecl_cdr(v1);
L1:;
   if (!(v3==ECL_NIL)) { goto L6; }
   ecl_function_dispatch(cl_env_copy,VV[26])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L6:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4bytespec = v6;
   }
   if (!(v3==ECL_NIL)) { goto L12; }
   ecl_function_dispatch(cl_env_copy,VV[26])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L12:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5integer = v6;
   }
   if (Null(v3)) { goto L17; }
   ecl_function_dispatch(cl_env_copy,VV[27])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L17:;
   if (Null(L1inline_bytespec(v4bytespec))) { goto L19; }
   T0 = ecl_cadr(v4bytespec);
   T1 = cl_list(3, VV[5], T0, ECL_SYM("UNSIGNED-BYTE",887));
   T2 = ecl_caddr(v4bytespec);
   T3 = cl_list(3, VV[6], T2, ECL_SYM("UNSIGNED-BYTE",887));
   T4 = cl_list(2, T1, T3);
   T5 = cl_list(3, ECL_SYM("LOGAND",494), VV[7], v5integer);
   value0 = cl_list(3, VV[0], T4, T5);
   return value0;
L19:;
   value0 = v1;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function LAMBDA21                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC5__lambda21(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4newbyte;
   cl_object v5bytespec;
   cl_object v6integer;
   T0 = ecl_car(v1);
   if (!((T0)==(ECL_SYM("FUNCALL",396)))) { goto L2; }
   T0 = ecl_caadr(v1);
   if (!((T0)==(ECL_SYM("FUNCTION",398)))) { goto L2; }
   v3 = ecl_cddr(v1);
   goto L1;
L2:;
   v3 = ecl_cdr(v1);
L1:;
   if (!(v3==ECL_NIL)) { goto L6; }
   ecl_function_dispatch(cl_env_copy,VV[26])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L6:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4newbyte = v7;
   }
   if (!(v3==ECL_NIL)) { goto L12; }
   ecl_function_dispatch(cl_env_copy,VV[26])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L12:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5bytespec = v7;
   }
   if (!(v3==ECL_NIL)) { goto L18; }
   ecl_function_dispatch(cl_env_copy,VV[26])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L18:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v6integer = v7;
   }
   if (Null(v3)) { goto L23; }
   ecl_function_dispatch(cl_env_copy,VV[27])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L23:;
   if (Null(L1inline_bytespec(v5bytespec))) { goto L25; }
   T0 = ecl_cadr(v5bytespec);
   T1 = cl_list(3, VV[8], T0, ECL_SYM("UNSIGNED-BYTE",887));
   T2 = ecl_caddr(v5bytespec);
   T3 = cl_list(3, VV[9], T2, ECL_SYM("UNSIGNED-BYTE",887));
   T4 = cl_list(3, T1, T3, VV[10]);
   T5 = cl_list(3, ECL_SYM("ASH",112), v4newbyte, VV[9]);
   T6 = cl_list(3, ECL_SYM("LOGAND",494), T5, VV[11]);
   T7 = cl_list(3, ECL_SYM("LOGANDC2",496), v6integer, VV[11]);
   T8 = cl_list(3, ECL_SYM("LOGIOR",502), T6, T7);
   value0 = cl_list(3, VV[0], T4, T8);
   return value0;
L25:;
   value0 = v1;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function LAMBDA28                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC6__lambda28(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4newbyte;
   cl_object v5bytespec;
   cl_object v6integer;
   T0 = ecl_car(v1);
   if (!((T0)==(ECL_SYM("FUNCALL",396)))) { goto L2; }
   T0 = ecl_caadr(v1);
   if (!((T0)==(ECL_SYM("FUNCTION",398)))) { goto L2; }
   v3 = ecl_cddr(v1);
   goto L1;
L2:;
   v3 = ecl_cdr(v1);
L1:;
   if (!(v3==ECL_NIL)) { goto L6; }
   ecl_function_dispatch(cl_env_copy,VV[26])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L6:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4newbyte = v7;
   }
   if (!(v3==ECL_NIL)) { goto L12; }
   ecl_function_dispatch(cl_env_copy,VV[26])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L12:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5bytespec = v7;
   }
   if (!(v3==ECL_NIL)) { goto L18; }
   ecl_function_dispatch(cl_env_copy,VV[26])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L18:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v6integer = v7;
   }
   if (Null(v3)) { goto L23; }
   ecl_function_dispatch(cl_env_copy,VV[27])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L23:;
   if (Null(L1inline_bytespec(v5bytespec))) { goto L25; }
   T0 = ecl_cadr(v5bytespec);
   T1 = cl_list(3, VV[12], T0, ECL_SYM("UNSIGNED-BYTE",887));
   T2 = ecl_caddr(v5bytespec);
   T3 = cl_list(3, VV[13], T2, ECL_SYM("UNSIGNED-BYTE",887));
   T4 = cl_list(3, T1, T3, VV[14]);
   T5 = cl_list(3, ECL_SYM("LOGAND",494), v4newbyte, VV[15]);
   T6 = cl_list(3, ECL_SYM("LOGANDC2",496), v6integer, VV[15]);
   T7 = cl_list(3, ECL_SYM("LOGIOR",502), T5, T6);
   value0 = cl_list(3, VV[0], T4, T7);
   return value0;
L25:;
   value0 = v1;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function LAMBDA32                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC7__lambda32(cl_object v1env, cl_object v2bytespec, cl_object v3int)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v5;                                  /*  TEMPS           */
   cl_object v6;                                  /*  VALS            */
   cl_object v7;                                  /*  STORES          */
   cl_object v8;                                  /*  STORE-FORM      */
   cl_object v9;                                  /*  ACCESS-FORM     */
   value0 = (cl_env_copy->function=(ECL_SYM("GET-SETF-EXPANSION",412)->symbol.gfdef))->cfun.entry(2, v3int, v1env) /*  GET-SETF-EXPANSION */;
   {
    v5 = value0;
    v6 = cl_env_copy->values[1];
    v7 = cl_env_copy->values[2];
    v8 = cl_env_copy->values[3];
    v9 = cl_env_copy->values[4];
   }
   if (Null(L1inline_bytespec(v2bytespec))) { goto L2; }
   {
    cl_object v10bpos;
    cl_object v11bsize;
    cl_object v12store;
    cl_object v13btemp;
    cl_object v14stemp;
    v10bpos = cl_gensym(0);
    v11bsize = cl_gensym(0);
    v12store = cl_gensym(0);
    v13btemp = cl_list(3, ECL_SYM("BYTE",164), v10bpos, v11bsize);
    v14stemp = ecl_car(v7);
    T0 = cl_listX(3, v10bpos, v11bsize, v5);
    T1 = ecl_cadr(v2bytespec);
    T2 = ecl_caddr(v2bytespec);
    T3 = cl_listX(3, T1, T2, v6);
    T4 = ecl_list1(v12store);
    T5 = cl_list(4, ECL_SYM("DPB",320), v12store, v13btemp, v9);
    T6 = cl_list(2, v14stemp, T5);
    T7 = ecl_list1(T6);
    T8 = cl_list(4, ECL_SYM("LET",479), T7, v8, v12store);
    T9 = cl_list(3, ECL_SYM("LDB",459), v13btemp, v9);
    cl_env_copy->nvalues = 5;
    cl_env_copy->values[4] = T9;
    cl_env_copy->values[3] = T8;
    cl_env_copy->values[2] = T4;
    cl_env_copy->values[1] = T3;
    cl_env_copy->values[0] = T0;
    return cl_env_copy->values[0];
   }
L2:;
   {
    cl_object v15btemp;
    cl_object v16store;
    cl_object v17stemp;
    v15btemp = cl_gensym(0);
    v16store = cl_gensym(0);
    v17stemp = ecl_car(v7);
    T0 = CONS(v15btemp,v5);
    T1 = CONS(v2bytespec,v6);
    T2 = ecl_list1(v16store);
    T3 = cl_list(4, ECL_SYM("DPB",320), v16store, v15btemp, v9);
    T4 = cl_list(2, v17stemp, T3);
    T5 = ecl_list1(T4);
    T6 = cl_list(4, ECL_SYM("LET",479), T5, v8, v16store);
    T7 = cl_list(3, ECL_SYM("LDB",459), v15btemp, v9);
    cl_env_copy->nvalues = 5;
    cl_env_copy->values[4] = T7;
    cl_env_copy->values[3] = T6;
    cl_env_copy->values[2] = T2;
    cl_env_copy->values[1] = T1;
    cl_env_copy->values[0] = T0;
    return cl_env_copy->values[0];
   }
  }
 }
}
/*      local function LAMBDA33                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC8__lambda33(cl_object v1env, cl_object v2bytespec, cl_object v3int)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v5;                                  /*  TEMPS           */
   cl_object v6;                                  /*  VALS            */
   cl_object v7;                                  /*  STORES          */
   cl_object v8;                                  /*  STORE-FORM      */
   cl_object v9;                                  /*  ACCESS-FORM     */
   value0 = (cl_env_copy->function=(ECL_SYM("GET-SETF-EXPANSION",412)->symbol.gfdef))->cfun.entry(2, v3int, v1env) /*  GET-SETF-EXPANSION */;
   {
    v5 = value0;
    v6 = cl_env_copy->values[1];
    v7 = cl_env_copy->values[2];
    v8 = cl_env_copy->values[3];
    v9 = cl_env_copy->values[4];
   }
   if (Null(L1inline_bytespec(v2bytespec))) { goto L2; }
   {
    cl_object v10bpos;
    cl_object v11bsize;
    cl_object v12store;
    cl_object v13btemp;
    cl_object v14stemp;
    v10bpos = cl_gensym(0);
    v11bsize = cl_gensym(0);
    v12store = cl_gensym(0);
    v13btemp = cl_list(3, ECL_SYM("BYTE",164), v10bpos, v11bsize);
    v14stemp = ecl_car(v7);
    T0 = cl_listX(3, v10bpos, v11bsize, v5);
    T1 = ecl_cadr(v2bytespec);
    T2 = ecl_caddr(v2bytespec);
    T3 = cl_listX(3, T1, T2, v6);
    T4 = ecl_list1(v12store);
    T5 = cl_list(4, ECL_SYM("DEPOSIT-FIELD",300), v12store, v13btemp, v9);
    T6 = cl_list(2, v14stemp, T5);
    T7 = ecl_list1(T6);
    T8 = cl_list(4, ECL_SYM("LET",479), T7, v8, v12store);
    T9 = cl_list(3, ECL_SYM("MASK-FIELD",552), v13btemp, v9);
    cl_env_copy->nvalues = 5;
    cl_env_copy->values[4] = T9;
    cl_env_copy->values[3] = T8;
    cl_env_copy->values[2] = T4;
    cl_env_copy->values[1] = T3;
    cl_env_copy->values[0] = T0;
    return cl_env_copy->values[0];
   }
L2:;
   {
    cl_object v15btemp;
    cl_object v16store;
    cl_object v17stemp;
    v15btemp = cl_gensym(0);
    v16store = cl_gensym(0);
    v17stemp = ecl_car(v7);
    T0 = CONS(v15btemp,v5);
    T1 = CONS(v2bytespec,v6);
    T2 = ecl_list1(v16store);
    T3 = cl_list(4, ECL_SYM("DEPOSIT-FIELD",300), v16store, v15btemp, v9);
    T4 = cl_list(2, v17stemp, T3);
    T5 = ecl_list1(T4);
    T6 = cl_list(4, ECL_SYM("LET",479), T5, v8, v16store);
    T7 = cl_list(3, ECL_SYM("MASK-FIELD",552), v15btemp, v9);
    cl_env_copy->nvalues = 5;
    cl_env_copy->values[4] = T7;
    cl_env_copy->values[3] = T6;
    cl_env_copy->values[2] = T2;
    cl_env_copy->values[1] = T1;
    cl_env_copy->values[0] = T0;
    return cl_env_copy->values[0];
   }
  }
 }
}
/*      local function LAMBDA37                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC9__lambda37(cl_object v1, cl_object v2)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4argument;
   cl_object v5shift;
   T0 = ecl_car(v1);
   if (!((T0)==(ECL_SYM("FUNCALL",396)))) { goto L2; }
   T0 = ecl_caadr(v1);
   if (!((T0)==(ECL_SYM("FUNCTION",398)))) { goto L2; }
   v3 = ecl_cddr(v1);
   goto L1;
L2:;
   v3 = ecl_cdr(v1);
L1:;
   if (!(v3==ECL_NIL)) { goto L6; }
   ecl_function_dispatch(cl_env_copy,VV[26])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L6:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4argument = v6;
   }
   if (!(v3==ECL_NIL)) { goto L12; }
   ecl_function_dispatch(cl_env_copy,VV[26])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L12:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5shift = v6;
   }
   if (Null(v3)) { goto L17; }
   ecl_function_dispatch(cl_env_copy,VV[27])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L17:;
   if (!(ECL_FIXNUMP(v4argument)||ECL_BIGNUMP(v4argument))) { goto L19; }
   if (!(ECL_FIXNUMP(v5shift)||ECL_BIGNUMP(v5shift))) { goto L19; }
   value0 = cl_ash(v4argument, v5shift);
   return value0;
L19:;
   if (Null(ecl_function_dispatch(cl_env_copy,VV[28])(0) /*  POLICY-ASSUME-RIGHT-TYPE */)) { goto L22; }
   if (!(ECL_FIXNUMP(v5shift)||ECL_BIGNUMP(v5shift))) { goto L22; }
   if (!(ecl_zerop(v5shift))) { goto L25; }
   value0 = v4argument;
   cl_env_copy->nvalues = 1;
   return value0;
L25:;
   value0 = cl_list(3, VV[16], v4argument, v5shift);
   return value0;
L22:;
   value0 = v1;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function LAMBDA43                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC10__lambda43(cl_object v1return_type, cl_object v2argument, cl_object v3orig_shift)
{
 cl_object T0, T1, T2, T3, T4, T5;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4arg_type;
   cl_object v5arg_c_type;
   cl_object v6return_c_type;
   cl_object v7shift;
   v4arg_type = ecl_function_dispatch(cl_env_copy,VV[29])(1, v2argument) /*  INLINED-ARG-TYPE */;
   v5arg_c_type = ecl_function_dispatch(cl_env_copy,VV[30])(1, v4arg_type) /*  LISP-TYPE->REP-TYPE */;
   v6return_c_type = ecl_function_dispatch(cl_env_copy,VV[30])(1, v1return_type) /*  LISP-TYPE->REP-TYPE */;
   T0 = ecl_function_dispatch(cl_env_copy,VV[31])(1, v3orig_shift) /*  INLINED-ARG-LOC */;
   v7shift = ecl_function_dispatch(cl_env_copy,VV[32])(1, T0) /*  LOC-IMMEDIATE-VALUE */;
   if (Null(ecl_function_dispatch(cl_env_copy,VV[33])(1, v5arg_c_type) /*  C-INTEGER-REP-TYPE-P */)) { goto L7; }
   if ((ecl_function_dispatch(cl_env_copy,VV[33])(1, v6return_c_type) /*  C-INTEGER-REP-TYPE-P */)!=ECL_NIL) { goto L5; }
   goto L6;
L7:;
L6:;
   T0 = cl_list(2, v2argument, v3orig_shift);
   value0 = ecl_function_dispatch(cl_env_copy,VV[34])(6, T0, VV[18], VV[19], VV[20], ECL_NIL, ECL_T) /*  PRODUCE-INLINE-LOC */;
   return value0;
L5:;
   {
    cl_object v8arg_bits;
    cl_object v9return_bits;
    cl_object v10max_type;
    v8arg_bits = ecl_function_dispatch(cl_env_copy,VV[35])(1, v5arg_c_type) /*  C-INTEGER-REP-TYPE-BITS */;
    v9return_bits = ecl_function_dispatch(cl_env_copy,VV[35])(1, v6return_c_type) /*  C-INTEGER-REP-TYPE-BITS */;
    if (!(ecl_plusp(v7shift))) { goto L12; }
    if (!(ecl_lower(v8arg_bits,v9return_bits))) { goto L12; }
    v10max_type = v6return_c_type;
    goto L11;
L12:;
    v10max_type = v5arg_c_type;
L11:;
    T0 = ecl_list1(v2argument);
    T1 = ecl_list1(v10max_type);
    T2 = ecl_list1(v1return_type);
    if (!(ecl_minusp(v7shift))) { goto L16; }
    T3 = VV[21];
    goto L15;
L16:;
    T3 = VV[22];
L15:;
    T4 = cl_abs(v7shift);
    T5 = cl_format(3, ECL_NIL, T3, T4);
    value0 = ecl_function_dispatch(cl_env_copy,VV[34])(6, T0, T1, T2, T5, ECL_NIL, ECL_T) /*  PRODUCE-INLINE-LOC */;
    return value0;
   }
  }
 }
}
/*      local function LAMBDA47                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC11__lambda47(cl_narg narg, cl_object v1fname, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2args;
  ecl_va_list args; ecl_va_start(args,v1fname,narg,1);
  v2args = cl_grab_rest_args(args);
  ecl_va_end(args);
  if (Null(v2args)) { goto L2; }
  {
   cl_object v3;
   v3 = VV[24];
   goto L7;
L6:;
   {
    cl_object v4int_type;
    v4int_type = ecl_car(v3);
    {
     cl_object v5value;
     cl_object v6;
     v5value = ECL_NIL;
     {
      cl_object v7;
      v7 = v2args;
      if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v6 = v7;
     }
L17:;
     if (!(ecl_endp(v6))) { goto L19; }
     goto L18;
L19:;
     v5value = _ecl_car(v6);
     {
      cl_object v7;
      v7 = _ecl_cdr(v6);
      if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v6 = v7;
     }
     if ((cl_subtypep(2, v5value, v4int_type))!=ECL_NIL) { goto L27; }
     goto L11;
L27:;
     goto L17;
L18:;
     goto L12;
    }
L12:;
    T0 = v4int_type;
    goto L1;
L11:;
   }
   v3 = ecl_cdr(v3);
L7:;
   if (Null(v3)) { goto L33; }
   goto L6;
L33:;
   T0 = ECL_SYM("INTEGER",439);
   goto L1;
  }
L2:;
  T0 = ECL_SYM("FIXNUM",374);
L1:;
  cl_env_copy->nvalues = 2;
  cl_env_copy->values[1] = T0;
  cl_env_copy->values[0] = v2args;
  return cl_env_copy->values[0];
 }
}

#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/cmp/cmpopt-bits.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _ecld8TurDb7_PZY6lq51(cl_object flag)
{
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 cl_object *VVtemp;
 if (flag != OBJNULL){
 Cblock = flag;
 #ifndef ECL_DYNAMIC_VV
 flag->cblock.data = VV;
 #endif
 flag->cblock.data_size = VM;
 flag->cblock.temp_data_size = VMtemp;
 flag->cblock.data_text = compiler_data_text;
 flag->cblock.cfuns_size = compiler_cfuns_size;
 flag->cblock.cfuns = compiler_cfuns;
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;CMPOPT-BITS.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_ecld8TurDb7_PZY6lq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  (void)0; /* No entry created for INLINE-BYTESPEC */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC2__lambda3,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("LDB",459), ECL_SYM("COMPILER-MACRO",240), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC3__lambda9,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("LDB-TEST",460), ECL_SYM("COMPILER-MACRO",240), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC4__lambda15,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("MASK-FIELD",552), ECL_SYM("COMPILER-MACRO",240), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC5__lambda21,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("DPB",320), ECL_SYM("COMPILER-MACRO",240), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC6__lambda28,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("DEPOSIT-FIELD",300), ECL_SYM("COMPILER-MACRO",240), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC7__lambda32,ECL_NIL,Cblock,3);
   T0 = v1;
  }
  si_do_define_setf_method(ECL_SYM("LDB",459), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC8__lambda33,ECL_NIL,Cblock,3);
   T0 = v1;
  }
  si_do_define_setf_method(ECL_SYM("MASK-FIELD",552), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC9__lambda37,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("ASH",112), ECL_SYM("COMPILER-MACRO",240), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC10__lambda43,ECL_NIL,Cblock,3);
   T0 = v1;
  }
  si_hash_set(VV[16], ecl_symbol_value(VV[17]), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC11__lambda47,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  si_hash_set(ECL_SYM("LOGAND",494), ecl_symbol_value(VV[23]), T0);
 }
}
