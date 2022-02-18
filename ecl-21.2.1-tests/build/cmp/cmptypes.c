/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;CMPTYPES.LSP                                  */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/cmp/cmptypes.eclh"
/*      function definition for MAKE-REF                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1make_ref(cl_narg narg, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  cl_object v1;
  cl_object v2;
  cl_object v3;
  cl_object v4;
  cl_object v5;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  {
   cl_object keyvars[10];
   cl_parse_key(args,5,L1make_refkeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   v1 = keyvars[0];
   if (Null(keyvars[6])) {
    v2 = ecl_make_fixnum(0);
   } else {
    v2 = keyvars[1];
   }
   v3 = keyvars[2];
   v4 = keyvars[3];
   v5 = keyvars[4];
  }
  if (ECL_FIXNUMP(v2)) { goto L2; }
  ecl_function_dispatch(cl_env_copy,VV[183])(4, v2, ECL_SYM("FIXNUM",374), VV[0], VV[0]) /*  STRUCTURE-TYPE-ERROR */;
L2:;
  value0 = si_make_structure(6, VV[4], v1, v2, v3, v4, v5);
  return value0;
 }
}
/*      local function LAMBDA1                                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC2__lambda1(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[0]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(4), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[0]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(4));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA5                                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC3__lambda5(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[0]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(3), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[0]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(3));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA9                                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC4__lambda9(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[0]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(2), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[0]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(2));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA13                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC5__lambda13(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[0]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(1), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[0]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(1));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA17                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC6__lambda17(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[0]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(0), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[0]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(0));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA22                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC7__lambda22(cl_object v1)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(v1)) { goto L1; }
  ecl_function_dispatch(cl_env_copy,VV[184])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L1:;
  value0 = VV[12];
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for %MAKE-VAR                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L8_make_var(cl_narg narg, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  cl_object v1;
  cl_object v2;
  cl_object v3;
  cl_object v4;
  cl_object v5;
  cl_object v6;
  cl_object v7;
  cl_object v8;
  cl_object v9;
  cl_object v10;
  cl_object v11;
  cl_object v12;
  cl_object v13;
  cl_object v14;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  {
   cl_object keyvars[28];
   cl_parse_key(args,14,L8_make_varkeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   v1 = keyvars[0];
   if (Null(keyvars[15])) {
    v2 = ecl_make_fixnum(0);
   } else {
    v2 = keyvars[1];
   }
   v3 = keyvars[2];
   v4 = keyvars[3];
   v5 = keyvars[4];
   v6 = keyvars[5];
   v7 = keyvars[6];
   if (Null(keyvars[21])) {
    v8 = ecl_symbol_value(VV[17]);
   } else {
    v8 = keyvars[7];
   }
   v9 = keyvars[8];
   v10 = keyvars[9];
   if (Null(keyvars[24])) {
    v11 = ECL_SYM("OBJECT",2105);
   } else {
    v11 = keyvars[10];
   }
   if (Null(keyvars[25])) {
    v12 = ECL_T;
   } else {
    v12 = keyvars[11];
   }
   if (Null(keyvars[26])) {
    v13 = ecl_make_fixnum(-1);
   } else {
    v13 = keyvars[12];
   }
   v14 = keyvars[13];
  }
  if (ECL_FIXNUMP(v2)) { goto L6; }
  ecl_function_dispatch(cl_env_copy,VV[183])(4, v2, ECL_SYM("FIXNUM",374), VV[13], VV[0]) /*  STRUCTURE-TYPE-ERROR */;
L6:;
  value0 = si_make_structure(15, VV[18], v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14);
  return value0;
 }
}
/*      local function LAMBDA24                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC9__lambda24(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[13]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(13), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[13]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(13));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA28                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC10__lambda28(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[13]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(12), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[13]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(12));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA32                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC11__lambda32(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[13]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(11), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[13]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(11));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA36                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC12__lambda36(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[13]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(10), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[13]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(10));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA40                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC13__lambda40(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[13]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(9), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[13]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(9));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA44                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC14__lambda44(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[13]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(8), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[13]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(8));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA48                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC15__lambda48(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[13]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(7), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[13]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(7));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA52                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC16__lambda52(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[13]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(6), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[13]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(6));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA56                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC17__lambda56(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[13]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(5), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[13]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(5));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA60                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC18__lambda60(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[13]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(4), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[13]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(4));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA64                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC19__lambda64(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[13]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(3), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[13]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(3));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA68                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC20__lambda68(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[13]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(2), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[13]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(2));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA72                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC21__lambda72(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[13]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(1), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[13]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(1));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA76                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC22__lambda76(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[13]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(0), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[13]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(0));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for MAKE-FUN                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L23make_fun(cl_narg narg, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  cl_object v1;
  cl_object v2;
  cl_object v3;
  cl_object v4;
  cl_object v5;
  cl_object v6;
  cl_object v7;
  cl_object v8;
  cl_object v9;
  cl_object v10;
  cl_object v11;
  cl_object v12;
  cl_object v13;
  cl_object v14;
  cl_object v15;
  cl_object v16;
  cl_object v17;
  cl_object v18;
  cl_object v19;
  cl_object v20;
  cl_object v21;
  cl_object v22;
  cl_object v23;
  cl_object v24;
  cl_object v25;
  cl_object v26;
  cl_object v27;
  cl_object v28;
  cl_object v29;
  cl_object v30;
  cl_object v31;
  cl_object v32;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  {
   cl_object keyvars[64];
   cl_parse_key(args,32,L23make_funkeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   v1 = keyvars[0];
   if (Null(keyvars[33])) {
    v2 = ecl_make_fixnum(0);
   } else {
    v2 = keyvars[1];
   }
   v3 = keyvars[2];
   v4 = keyvars[3];
   v5 = keyvars[4];
   v6 = keyvars[5];
   if (Null(keyvars[38])) {
    v7 = ecl_make_fixnum(0);
   } else {
    v7 = keyvars[6];
   }
   if (Null(keyvars[39])) {
    v8 = ecl_make_fixnum(0);
   } else {
    v8 = keyvars[7];
   }
   v9 = keyvars[8];
   v10 = keyvars[9];
   v11 = keyvars[10];
   v12 = keyvars[11];
   v13 = keyvars[12];
   v14 = keyvars[13];
   v15 = keyvars[14];
   v16 = keyvars[15];
   v17 = keyvars[16];
   if (Null(keyvars[49])) {
    v18 = ecl_make_fixnum(0);
   } else {
    v18 = keyvars[17];
   }
   if (Null(keyvars[50])) {
    v19 = ecl_make_fixnum(65536);
   } else {
    v19 = keyvars[18];
   }
   if (Null(keyvars[51])) {
    v20 = VV[37];
   } else {
    v20 = keyvars[19];
   }
   if (Null(keyvars[52])) {
    v21 = ecl_symbol_value(VV[17]);
   } else {
    v21 = keyvars[20];
   }
   v22 = keyvars[21];
   v23 = keyvars[22];
   v24 = keyvars[23];
   v25 = keyvars[24];
   v26 = keyvars[25];
   if (Null(keyvars[58])) {
    v27 = ecl_car(ecl_symbol_value(ECL_SYM("*SOURCE-LOCATION*",1202)));
   } else {
    v27 = keyvars[26];
   }
   if (Null(keyvars[59])) {
    value0 = ecl_cdr(ecl_symbol_value(ECL_SYM("*SOURCE-LOCATION*",1202)));
    if ((value0)!=ECL_NIL) { goto L11; }
    v28 = ecl_symbol_value(VV[38]);
    goto L9;
L11:;
    v28 = value0;
    goto L9;
L9:;
   } else {
    v28 = keyvars[27];
   }
   if (Null(keyvars[60])) {
    v29 = ecl_function_dispatch(cl_env_copy,VV[201])(0) /*  CMP-ENV-COPY */;
   } else {
    v29 = keyvars[28];
   }
   v30 = keyvars[29];
   v31 = keyvars[30];
   v32 = keyvars[31];
  }
  if (ECL_FIXNUMP(v2)) { goto L14; }
  ecl_function_dispatch(cl_env_copy,VV[183])(4, v2, ECL_SYM("FIXNUM",374), VV[34], VV[0]) /*  STRUCTURE-TYPE-ERROR */;
L14:;
  value0 = si_make_structure(33, VV[39], v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32);
  return value0;
 }
}
/*      local function LAMBDA80                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC24__lambda80(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(31), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(31));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA84                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC25__lambda84(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(30), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(30));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA88                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC26__lambda88(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(29), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(29));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA92                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC27__lambda92(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(28), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(28));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA96                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC28__lambda96(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(27), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(27));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA100                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC29__lambda100(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(26), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(26));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA104                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC30__lambda104(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(25), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(25));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA108                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC31__lambda108(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(24), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(24));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA112                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC32__lambda112(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(23), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(23));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA116                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC33__lambda116(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(22), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(22));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA120                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC34__lambda120(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(21), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(21));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA124                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC35__lambda124(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(20), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(20));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA128                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC36__lambda128(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(19), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(19));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA132                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC37__lambda132(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(18), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(18));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA136                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC38__lambda136(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(17), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(17));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA140                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC39__lambda140(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(16), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(16));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA144                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC40__lambda144(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(15), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(15));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA148                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC41__lambda148(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(14), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(14));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA152                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC42__lambda152(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(13), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(13));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA156                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC43__lambda156(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(12), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(12));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA160                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC44__lambda160(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(11), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(11));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA164                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC45__lambda164(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(10), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(10));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA168                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC46__lambda168(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(9), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(9));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA172                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC47__lambda172(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(8), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(8));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA176                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC48__lambda176(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(7), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(7));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA180                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC49__lambda180(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(6), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(6));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA184                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC50__lambda184(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(5), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(5));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA188                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC51__lambda188(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(4), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(4));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA192                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC52__lambda192(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(3), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(3));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA196                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC53__lambda196(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(2), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(2));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA200                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC54__lambda200(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(1), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(1));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA204                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC55__lambda204(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(0), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[34]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(0));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for MAKE-BLK                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L56make_blk(cl_narg narg, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  cl_object v1;
  cl_object v2;
  cl_object v3;
  cl_object v4;
  cl_object v5;
  cl_object v6;
  cl_object v7;
  cl_object v8;
  cl_object v9;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  {
   cl_object keyvars[18];
   cl_parse_key(args,9,L56make_blkkeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   v1 = keyvars[0];
   if (Null(keyvars[10])) {
    v2 = ecl_make_fixnum(0);
   } else {
    v2 = keyvars[1];
   }
   v3 = keyvars[2];
   v4 = keyvars[3];
   v5 = keyvars[4];
   v6 = keyvars[5];
   v7 = keyvars[6];
   v8 = keyvars[7];
   if (Null(keyvars[17])) {
    v9 = VV[37];
   } else {
    v9 = keyvars[8];
   }
  }
  if (ECL_FIXNUMP(v2)) { goto L3; }
  ecl_function_dispatch(cl_env_copy,VV[183])(4, v2, ECL_SYM("FIXNUM",374), VV[73], VV[0]) /*  STRUCTURE-TYPE-ERROR */;
L3:;
  value0 = si_make_structure(10, VV[76], v1, v2, v3, v4, v5, v6, v7, v8, v9);
  return value0;
 }
}
/*      local function LAMBDA208                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC57__lambda208(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[73]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(8), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[73]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(8));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA212                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC58__lambda212(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[73]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(7), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[73]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(7));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA216                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC59__lambda216(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[73]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(6), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[73]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(6));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA220                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC60__lambda220(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[73]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(5), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[73]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(5));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA224                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC61__lambda224(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[73]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(4), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[73]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(4));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA228                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC62__lambda228(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[73]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(3), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[73]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(3));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA232                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC63__lambda232(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[73]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(2), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[73]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(2));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA236                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC64__lambda236(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[73]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(1), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[73]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(1));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA240                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC65__lambda240(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[73]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(0), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[73]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(0));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for MAKE-TAG                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L66make_tag(cl_narg narg, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  cl_object v1;
  cl_object v2;
  cl_object v3;
  cl_object v4;
  cl_object v5;
  cl_object v6;
  cl_object v7;
  cl_object v8;
  cl_object v9;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  {
   cl_object keyvars[18];
   cl_parse_key(args,9,L66make_tagkeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   v1 = keyvars[0];
   if (Null(keyvars[10])) {
    v2 = ecl_make_fixnum(0);
   } else {
    v2 = keyvars[1];
   }
   v3 = keyvars[2];
   v4 = keyvars[3];
   v5 = keyvars[4];
   v6 = keyvars[5];
   v7 = keyvars[6];
   v8 = keyvars[7];
   v9 = keyvars[8];
  }
  if (ECL_FIXNUMP(v2)) { goto L2; }
  ecl_function_dispatch(cl_env_copy,VV[183])(4, v2, ECL_SYM("FIXNUM",374), VV[87], VV[0]) /*  STRUCTURE-TYPE-ERROR */;
L2:;
  value0 = si_make_structure(10, VV[90], v1, v2, v3, v4, v5, v6, v7, v8, v9);
  return value0;
 }
}
/*      local function LAMBDA244                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC67__lambda244(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[87]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(8), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[87]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(8));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA248                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC68__lambda248(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[87]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(7), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[87]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(7));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA252                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC69__lambda252(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[87]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(6), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[87]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(6));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA256                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC70__lambda256(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[87]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(5), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[87]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(5));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA260                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC71__lambda260(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[87]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(4), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[87]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(4));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA264                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC72__lambda264(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[87]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(3), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[87]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(3));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA268                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC73__lambda268(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[87]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(2), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[87]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(2));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA272                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC74__lambda272(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[87]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(1), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[87]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(1));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA276                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC75__lambda276(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[87]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(0), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[87]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(0));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for MAKE-INFO                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L76make_info(cl_narg narg, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  cl_object v1;
  cl_object v2;
  cl_object v3;
  cl_object v4;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  {
   cl_object keyvars[8];
   cl_parse_key(args,4,L76make_infokeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   v1 = keyvars[0];
   if (Null(keyvars[5])) {
    v2 = VV[37];
   } else {
    v2 = keyvars[1];
   }
   v3 = keyvars[2];
   v4 = keyvars[3];
  }
  value0 = si_make_structure(5, VV[104], v1, v2, v3, v4);
  return value0;
 }
}
/*      local function LAMBDA280                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC77__lambda280(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[101]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(3), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[101]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(3));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA284                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC78__lambda284(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[101]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(2), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[101]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(2));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA288                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC79__lambda288(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[101]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(1), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[101]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(1));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA292                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC80__lambda292(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[101]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(0), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[101]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(0));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for MAKE-INLINE-INFO                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L81make_inline_info(cl_narg narg, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  cl_object v1;
  cl_object v2;
  cl_object v3;
  cl_object v4;
  cl_object v5;
  cl_object v6;
  cl_object v7;
  cl_object v8;
  cl_object v9;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  {
   cl_object keyvars[18];
   cl_parse_key(args,9,L81make_inline_infokeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   v1 = keyvars[0];
   v2 = keyvars[1];
   v3 = keyvars[2];
   v4 = keyvars[3];
   v5 = keyvars[4];
   v6 = keyvars[5];
   v7 = keyvars[6];
   v8 = keyvars[7];
   v9 = keyvars[8];
  }
  value0 = si_make_structure(10, VV[113], v1, v2, v3, v4, v5, v6, v7, v8, v9);
  return value0;
 }
}
/*      local function LAMBDA296                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC82__lambda296(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[110]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(8), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[110]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(8));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA300                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC83__lambda300(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[110]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(7), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[110]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(7));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA304                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC84__lambda304(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[110]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(6), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[110]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(6));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA308                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC85__lambda308(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[110]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(5), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[110]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(5));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA312                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC86__lambda312(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[110]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(4), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[110]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(4));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA316                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC87__lambda316(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[110]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(3), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[110]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(3));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA320                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC88__lambda320(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[110]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(2), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[110]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(2));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA324                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC89__lambda324(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[110]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(1), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[110]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(1));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA328                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC90__lambda328(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[110]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(0), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[110]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(0));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for DO-MAKE-C1FORM                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L91do_make_c1form(cl_narg narg, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  cl_object v1;
  cl_object v2;
  cl_object v3;
  cl_object v4;
  cl_object v5;
  cl_object v6;
  cl_object v7;
  cl_object v8;
  cl_object v9;
  cl_object v10;
  cl_object v11;
  cl_object v12;
  cl_object v13;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  {
   cl_object keyvars[26];
   cl_parse_key(args,13,L91do_make_c1formkeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   v1 = keyvars[0];
   if (Null(keyvars[14])) {
    v2 = VV[37];
   } else {
    v2 = keyvars[1];
   }
   v3 = keyvars[2];
   v4 = keyvars[3];
   v5 = keyvars[4];
   v6 = keyvars[5];
   if (Null(keyvars[19])) {
    v7 = ecl_function_dispatch(cl_env_copy,VV[201])(0) /*  CMP-ENV-COPY */;
   } else {
    v7 = keyvars[6];
   }
   v8 = keyvars[7];
   v9 = keyvars[8];
   v10 = keyvars[9];
   v11 = keyvars[10];
   v12 = keyvars[11];
   if (Null(keyvars[25])) {
    v13 = ecl_make_fixnum(0);
   } else {
    v13 = keyvars[12];
   }
  }
  value0 = si_make_structure(14, VV[128], v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13);
  return value0;
 }
}
/*      local function LAMBDA332                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC92__lambda332(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[124]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(12), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[124]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(12));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA336                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC93__lambda336(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[124]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(11), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[124]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(11));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA340                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC94__lambda340(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[124]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(10), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[124]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(10));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA344                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC95__lambda344(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[124]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(9), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[124]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(9));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA348                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC96__lambda348(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[124]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(8), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[124]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(8));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA352                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC97__lambda352(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[124]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(7), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[124]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(7));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA356                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC98__lambda356(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[124]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(6), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[124]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(6));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA360                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC99__lambda360(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[124]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(5), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[124]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(5));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA364                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC100__lambda364(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[124]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(4), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[124]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(4));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA368                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC101__lambda368(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[124]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(3), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[124]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(3));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA372                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC102__lambda372(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[124]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(2), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[124]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(2));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA376                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC103__lambda376(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[124]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(1), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[124]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(1));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA380                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC104__lambda380(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[124]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(0), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[124]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(0));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for MAKE-VV                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L105make_vv(cl_narg narg, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  cl_object v1;
  cl_object v2;
  cl_object v3;
  cl_object v4;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  {
   cl_object keyvars[8];
   cl_parse_key(args,4,L105make_vvkeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   v1 = keyvars[0];
   v2 = keyvars[1];
   if (Null(keyvars[6])) {
    v3 = ECL_T;
   } else {
    v3 = keyvars[2];
   }
   v4 = keyvars[3];
  }
  value0 = si_make_structure(5, VV[146], v1, v2, v3, v4);
  return value0;
 }
}
/*      local function LAMBDA384                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC106__lambda384(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[143]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(3), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[143]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(3));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA388                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC107__lambda388(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[143]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(2), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[143]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(2));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA392                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC108__lambda392(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[143]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(1), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[143]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(1));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA396                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC109__lambda396(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[143]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(0), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[143]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(0));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for MAKE-MACHINE                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L110make_machine(cl_narg narg, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  cl_object v1;
  cl_object v2;
  cl_object v3;
  cl_object v4;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  {
   cl_object keyvars[8];
   cl_parse_key(args,4,L110make_machinekeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   v1 = keyvars[0];
   v2 = keyvars[1];
   v3 = keyvars[2];
   v4 = keyvars[3];
  }
  value0 = si_make_structure(5, VV[155], v1, v2, v3, v4);
  return value0;
 }
}
/*      local function LAMBDA400                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC111__lambda400(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[152]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(3), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[152]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(3));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA404                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC112__lambda404(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[152]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(2), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[152]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(2));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA408                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC113__lambda408(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[152]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(1), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[152]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(1));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA412                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC114__lambda412(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[152]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(0), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[152]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(0));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for %MAKE-REP-TYPE                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L115_make_rep_type(cl_narg narg, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  cl_object v1;
  cl_object v2;
  cl_object v3;
  cl_object v4;
  cl_object v5;
  cl_object v6;
  cl_object v7;
  cl_object v8;
  cl_object v9;
  cl_object v10;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  {
   cl_object keyvars[20];
   cl_parse_key(args,10,L115_make_rep_typekeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   if (Null(keyvars[10])) {
    v1 = ecl_make_fixnum(0);
   } else {
    v1 = keyvars[0];
   }
   if (Null(keyvars[11])) {
    v2 = ECL_T;
   } else {
    v2 = keyvars[1];
   }
   if (Null(keyvars[12])) {
    v3 = ECL_T;
   } else {
    v3 = keyvars[2];
   }
   v4 = keyvars[3];
   v5 = keyvars[4];
   v6 = keyvars[5];
   v7 = keyvars[6];
   v8 = keyvars[7];
   v9 = keyvars[8];
   v10 = keyvars[9];
  }
  value0 = si_make_structure(11, VV[164], v1, v2, v3, v4, v5, v6, v7, v8, v9, v10);
  return value0;
 }
}
/*      local function LAMBDA416                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC116__lambda416(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[161]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(9), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[161]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(9));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA420                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC117__lambda420(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[161]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(8), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[161]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(8));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA424                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC118__lambda424(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[161]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(7), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[161]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(7));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA428                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC119__lambda428(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[161]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(6), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[161]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(6));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA432                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC120__lambda432(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[161]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(5), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[161]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(5));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA436                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC121__lambda436(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[161]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(4), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[161]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(4));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA440                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC122__lambda440(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[161]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(3), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[161]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(3));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA444                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC123__lambda444(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[161]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(2), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[161]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(2));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA448                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC124__lambda448(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[161]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(1), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[161]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(1));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA452                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC125__lambda452(cl_object v1, cl_object v2si__x)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   v3 = cl_gensym(0);
   v4 = cl_gensym(0);
   T0 = cl_list(2, ECL_SYM("QUOTE",681), VV[161]);
   T1 = cl_list(6, ECL_SYM("COMPARE-AND-SWAP-STRUCTURE",1514), v2si__x, T0, ecl_make_fixnum(0), v3, v4);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), VV[161]);
   T3 = cl_list(4, ECL_SYM("STRUCTURE-REF",1169), v2si__x, T2, ecl_make_fixnum(0));
   cl_env_copy->nvalues = 6;
   cl_env_copy->values[5] = T3;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = v4;
   cl_env_copy->values[2] = v3;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}

#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/cmp/cmptypes.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclr5f9myZ7_XVMmqq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;CMPTYPES.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclr5f9myZ7_XVMmqq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  ecl_function_dispatch(cl_env_copy,VV[176])(15, VV[0], _ecl_static_0, ECL_NIL, ECL_NIL, VVtemp[1], VVtemp[2], VV[1], ECL_NIL, ECL_NIL, VV[2], VVtemp[3], ecl_make_fixnum(5), ECL_NIL, ECL_NIL, VV[3]) /*  DEFINE-STRUCTURE */;
  VV[4]= cl_find_class(1, VV[0]);
  ecl_cmp_defun(VV[177]);                         /*  MAKE-REF        */
  {
   cl_object v1package;
   v1package = cl_symbol_package(VV[6]);
   if (Null(v1package)) { goto L10; }
   if (Null(si_package_locked_p(v1package))) { goto L10; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L10; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[6], ECL_SYM("PACKAGE",1311), v1package);
  }
L10:;
  {
   cl_object volatile v2;
   v2 = ecl_make_cfun((cl_objectfn_fixed)LC2__lambda1,ECL_NIL,Cblock,2);
   T0 = v2;
  }
  si_put_sysprop(VV[6], VV[7], T0);
  {
   cl_object v2package;
   v2package = cl_symbol_package(VV[8]);
   if (Null(v2package)) { goto L18; }
   if (Null(si_package_locked_p(v2package))) { goto L18; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L18; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[7], ECL_SYM("PACKAGE",1311), v2package);
  }
L18:;
  {
   cl_object volatile v3;
   v3 = ecl_make_cfun((cl_objectfn_fixed)LC3__lambda5,ECL_NIL,Cblock,2);
   T0 = v3;
  }
  si_put_sysprop(VV[8], VV[7], T0);
  {
   cl_object v3package;
   v3package = cl_symbol_package(VV[9]);
   if (Null(v3package)) { goto L26; }
   if (Null(si_package_locked_p(v3package))) { goto L26; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L26; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[8], ECL_SYM("PACKAGE",1311), v3package);
  }
L26:;
  {
   cl_object volatile v4;
   v4 = ecl_make_cfun((cl_objectfn_fixed)LC4__lambda9,ECL_NIL,Cblock,2);
   T0 = v4;
  }
  si_put_sysprop(VV[9], VV[7], T0);
  {
   cl_object v4package;
   v4package = cl_symbol_package(VV[10]);
   if (Null(v4package)) { goto L34; }
   if (Null(si_package_locked_p(v4package))) { goto L34; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L34; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[9], ECL_SYM("PACKAGE",1311), v4package);
  }
L34:;
  {
   cl_object volatile v5;
   v5 = ecl_make_cfun((cl_objectfn_fixed)LC5__lambda13,ECL_NIL,Cblock,2);
   T0 = v5;
  }
  si_put_sysprop(VV[10], VV[7], T0);
  {
   cl_object v5package;
   v5package = cl_symbol_package(VV[11]);
   if (Null(v5package)) { goto L42; }
   if (Null(si_package_locked_p(v5package))) { goto L42; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L42; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[10], ECL_SYM("PACKAGE",1311), v5package);
  }
L42:;
  {
   cl_object volatile v6;
   v6 = ecl_make_cfun((cl_objectfn_fixed)LC6__lambda17,ECL_NIL,Cblock,2);
   T0 = v6;
  }
  si_put_sysprop(VV[11], VV[7], T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC7__lambda22,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  si_do_deftype(3, ECL_SYM("OBJECT",2105), VVtemp[11], T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  ecl_function_dispatch(cl_env_copy,VV[176])(15, VV[13], _ecl_static_1, ECL_NIL, ECL_NIL, VVtemp[12], VVtemp[13], VV[14], VV[0], ECL_NIL, VV[15], VVtemp[14], ecl_make_fixnum(14), ECL_NIL, ECL_NIL, VV[16]) /*  DEFINE-STRUCTURE */;
  VV[18]= cl_find_class(1, VV[13]);
  ecl_cmp_defun(VV[185]);                         /*  %MAKE-VAR       */
  {
   cl_object v1package;
   v1package = cl_symbol_package(VV[20]);
   if (Null(v1package)) { goto L61; }
   if (Null(si_package_locked_p(v1package))) { goto L61; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L61; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[15], ECL_SYM("PACKAGE",1311), v1package);
  }
L61:;
  {
   cl_object volatile v2;
   v2 = ecl_make_cfun((cl_objectfn_fixed)LC9__lambda24,ECL_NIL,Cblock,2);
   T0 = v2;
  }
  si_put_sysprop(VV[20], VV[7], T0);
  {
   cl_object v2package;
   v2package = cl_symbol_package(VV[21]);
   if (Null(v2package)) { goto L69; }
   if (Null(si_package_locked_p(v2package))) { goto L69; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L69; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[16], ECL_SYM("PACKAGE",1311), v2package);
  }
L69:;
  {
   cl_object volatile v3;
   v3 = ecl_make_cfun((cl_objectfn_fixed)LC10__lambda28,ECL_NIL,Cblock,2);
   T0 = v3;
  }
  si_put_sysprop(VV[21], VV[7], T0);
  {
   cl_object v3package;
   v3package = cl_symbol_package(VV[22]);
   if (Null(v3package)) { goto L77; }
   if (Null(si_package_locked_p(v3package))) { goto L77; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L77; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[17], ECL_SYM("PACKAGE",1311), v3package);
  }
L77:;
  {
   cl_object volatile v4;
   v4 = ecl_make_cfun((cl_objectfn_fixed)LC11__lambda32,ECL_NIL,Cblock,2);
   T0 = v4;
  }
  si_put_sysprop(VV[22], VV[7], T0);
  {
   cl_object v4package;
   v4package = cl_symbol_package(VV[23]);
   if (Null(v4package)) { goto L85; }
   if (Null(si_package_locked_p(v4package))) { goto L85; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L85; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[18], ECL_SYM("PACKAGE",1311), v4package);
  }
L85:;
  {
   cl_object volatile v5;
   v5 = ecl_make_cfun((cl_objectfn_fixed)LC12__lambda36,ECL_NIL,Cblock,2);
   T0 = v5;
  }
  si_put_sysprop(VV[23], VV[7], T0);
  {
   cl_object v5package;
   v5package = cl_symbol_package(VV[24]);
   if (Null(v5package)) { goto L93; }
   if (Null(si_package_locked_p(v5package))) { goto L93; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L93; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[19], ECL_SYM("PACKAGE",1311), v5package);
  }
L93:;
  {
   cl_object volatile v6;
   v6 = ecl_make_cfun((cl_objectfn_fixed)LC13__lambda40,ECL_NIL,Cblock,2);
   T0 = v6;
  }
  si_put_sysprop(VV[24], VV[7], T0);
  {
   cl_object v6package;
   v6package = cl_symbol_package(VV[25]);
   if (Null(v6package)) { goto L101; }
   if (Null(si_package_locked_p(v6package))) { goto L101; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L101; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[20], ECL_SYM("PACKAGE",1311), v6package);
  }
L101:;
  {
   cl_object volatile v7;
   v7 = ecl_make_cfun((cl_objectfn_fixed)LC14__lambda44,ECL_NIL,Cblock,2);
   T0 = v7;
  }
  si_put_sysprop(VV[25], VV[7], T0);
  {
   cl_object v7package;
   v7package = cl_symbol_package(VV[26]);
   if (Null(v7package)) { goto L109; }
   if (Null(si_package_locked_p(v7package))) { goto L109; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L109; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[21], ECL_SYM("PACKAGE",1311), v7package);
  }
L109:;
  {
   cl_object volatile v8;
   v8 = ecl_make_cfun((cl_objectfn_fixed)LC15__lambda48,ECL_NIL,Cblock,2);
   T0 = v8;
  }
  si_put_sysprop(VV[26], VV[7], T0);
  {
   cl_object v8package;
   v8package = cl_symbol_package(VV[27]);
   if (Null(v8package)) { goto L117; }
   if (Null(si_package_locked_p(v8package))) { goto L117; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L117; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[22], ECL_SYM("PACKAGE",1311), v8package);
  }
L117:;
  {
   cl_object volatile v9;
   v9 = ecl_make_cfun((cl_objectfn_fixed)LC16__lambda52,ECL_NIL,Cblock,2);
   T0 = v9;
  }
  si_put_sysprop(VV[27], VV[7], T0);
  {
   cl_object v9package;
   v9package = cl_symbol_package(VV[28]);
   if (Null(v9package)) { goto L125; }
   if (Null(si_package_locked_p(v9package))) { goto L125; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L125; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[23], ECL_SYM("PACKAGE",1311), v9package);
  }
L125:;
  {
   cl_object volatile v10;
   v10 = ecl_make_cfun((cl_objectfn_fixed)LC17__lambda56,ECL_NIL,Cblock,2);
   T0 = v10;
  }
  si_put_sysprop(VV[28], VV[7], T0);
  {
   cl_object v10package;
   v10package = cl_symbol_package(VV[29]);
   if (Null(v10package)) { goto L133; }
   if (Null(si_package_locked_p(v10package))) { goto L133; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L133; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[24], ECL_SYM("PACKAGE",1311), v10package);
  }
L133:;
  {
   cl_object volatile v11;
   v11 = ecl_make_cfun((cl_objectfn_fixed)LC18__lambda60,ECL_NIL,Cblock,2);
   T0 = v11;
  }
  si_put_sysprop(VV[29], VV[7], T0);
  {
   cl_object v11package;
   v11package = cl_symbol_package(VV[30]);
   if (Null(v11package)) { goto L141; }
   if (Null(si_package_locked_p(v11package))) { goto L141; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L141; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[25], ECL_SYM("PACKAGE",1311), v11package);
  }
L141:;
  {
   cl_object volatile v12;
   v12 = ecl_make_cfun((cl_objectfn_fixed)LC19__lambda64,ECL_NIL,Cblock,2);
   T0 = v12;
  }
  si_put_sysprop(VV[30], VV[7], T0);
  {
   cl_object v12package;
   v12package = cl_symbol_package(VV[31]);
   if (Null(v12package)) { goto L149; }
   if (Null(si_package_locked_p(v12package))) { goto L149; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L149; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[26], ECL_SYM("PACKAGE",1311), v12package);
  }
L149:;
  {
   cl_object volatile v13;
   v13 = ecl_make_cfun((cl_objectfn_fixed)LC20__lambda68,ECL_NIL,Cblock,2);
   T0 = v13;
  }
  si_put_sysprop(VV[31], VV[7], T0);
  {
   cl_object v13package;
   v13package = cl_symbol_package(VV[32]);
   if (Null(v13package)) { goto L157; }
   if (Null(si_package_locked_p(v13package))) { goto L157; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L157; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[27], ECL_SYM("PACKAGE",1311), v13package);
  }
L157:;
  {
   cl_object volatile v14;
   v14 = ecl_make_cfun((cl_objectfn_fixed)LC21__lambda72,ECL_NIL,Cblock,2);
   T0 = v14;
  }
  si_put_sysprop(VV[32], VV[7], T0);
  {
   cl_object v14package;
   v14package = cl_symbol_package(VV[33]);
   if (Null(v14package)) { goto L165; }
   if (Null(si_package_locked_p(v14package))) { goto L165; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L165; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[28], ECL_SYM("PACKAGE",1311), v14package);
  }
L165:;
  {
   cl_object volatile v15;
   v15 = ecl_make_cfun((cl_objectfn_fixed)LC22__lambda76,ECL_NIL,Cblock,2);
   T0 = v15;
  }
  si_put_sysprop(VV[33], VV[7], T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  ecl_function_dispatch(cl_env_copy,VV[176])(15, VV[34], _ecl_static_2, ECL_NIL, ECL_NIL, VVtemp[29], VVtemp[30], VV[35], VV[0], ECL_NIL, ECL_NIL, VVtemp[31], ecl_make_fixnum(32), ECL_NIL, ECL_NIL, VV[36]) /*  DEFINE-STRUCTURE */;
  VV[39]= cl_find_class(1, VV[34]);
  ecl_cmp_defun(VV[200]);                         /*  MAKE-FUN        */
  {
   cl_object v1package;
   v1package = cl_symbol_package(VV[41]);
   if (Null(v1package)) { goto L182; }
   if (Null(si_package_locked_p(v1package))) { goto L182; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L182; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[32], ECL_SYM("PACKAGE",1311), v1package);
  }
L182:;
  {
   cl_object volatile v2;
   v2 = ecl_make_cfun((cl_objectfn_fixed)LC24__lambda80,ECL_NIL,Cblock,2);
   T0 = v2;
  }
  si_put_sysprop(VV[41], VV[7], T0);
  {
   cl_object v2package;
   v2package = cl_symbol_package(VV[42]);
   if (Null(v2package)) { goto L190; }
   if (Null(si_package_locked_p(v2package))) { goto L190; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L190; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[33], ECL_SYM("PACKAGE",1311), v2package);
  }
L190:;
  {
   cl_object volatile v3;
   v3 = ecl_make_cfun((cl_objectfn_fixed)LC25__lambda84,ECL_NIL,Cblock,2);
   T0 = v3;
  }
  si_put_sysprop(VV[42], VV[7], T0);
  {
   cl_object v3package;
   v3package = cl_symbol_package(VV[43]);
   if (Null(v3package)) { goto L198; }
   if (Null(si_package_locked_p(v3package))) { goto L198; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L198; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[34], ECL_SYM("PACKAGE",1311), v3package);
  }
L198:;
  {
   cl_object volatile v4;
   v4 = ecl_make_cfun((cl_objectfn_fixed)LC26__lambda88,ECL_NIL,Cblock,2);
   T0 = v4;
  }
  si_put_sysprop(VV[43], VV[7], T0);
  {
   cl_object v4package;
   v4package = cl_symbol_package(VV[44]);
   if (Null(v4package)) { goto L206; }
   if (Null(si_package_locked_p(v4package))) { goto L206; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L206; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[35], ECL_SYM("PACKAGE",1311), v4package);
  }
L206:;
  {
   cl_object volatile v5;
   v5 = ecl_make_cfun((cl_objectfn_fixed)LC27__lambda92,ECL_NIL,Cblock,2);
   T0 = v5;
  }
  si_put_sysprop(VV[44], VV[7], T0);
  {
   cl_object v5package;
   v5package = cl_symbol_package(VV[45]);
   if (Null(v5package)) { goto L214; }
   if (Null(si_package_locked_p(v5package))) { goto L214; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L214; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[36], ECL_SYM("PACKAGE",1311), v5package);
  }
L214:;
  {
   cl_object volatile v6;
   v6 = ecl_make_cfun((cl_objectfn_fixed)LC28__lambda96,ECL_NIL,Cblock,2);
   T0 = v6;
  }
  si_put_sysprop(VV[45], VV[7], T0);
  {
   cl_object v6package;
   v6package = cl_symbol_package(VV[46]);
   if (Null(v6package)) { goto L222; }
   if (Null(si_package_locked_p(v6package))) { goto L222; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L222; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[37], ECL_SYM("PACKAGE",1311), v6package);
  }
L222:;
  {
   cl_object volatile v7;
   v7 = ecl_make_cfun((cl_objectfn_fixed)LC29__lambda100,ECL_NIL,Cblock,2);
   T0 = v7;
  }
  si_put_sysprop(VV[46], VV[7], T0);
  {
   cl_object v7package;
   v7package = cl_symbol_package(VV[47]);
   if (Null(v7package)) { goto L230; }
   if (Null(si_package_locked_p(v7package))) { goto L230; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L230; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[38], ECL_SYM("PACKAGE",1311), v7package);
  }
L230:;
  {
   cl_object volatile v8;
   v8 = ecl_make_cfun((cl_objectfn_fixed)LC30__lambda104,ECL_NIL,Cblock,2);
   T0 = v8;
  }
  si_put_sysprop(VV[47], VV[7], T0);
  {
   cl_object v8package;
   v8package = cl_symbol_package(VV[48]);
   if (Null(v8package)) { goto L238; }
   if (Null(si_package_locked_p(v8package))) { goto L238; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L238; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[39], ECL_SYM("PACKAGE",1311), v8package);
  }
L238:;
  {
   cl_object volatile v9;
   v9 = ecl_make_cfun((cl_objectfn_fixed)LC31__lambda108,ECL_NIL,Cblock,2);
   T0 = v9;
  }
  si_put_sysprop(VV[48], VV[7], T0);
  {
   cl_object v9package;
   v9package = cl_symbol_package(VV[49]);
   if (Null(v9package)) { goto L246; }
   if (Null(si_package_locked_p(v9package))) { goto L246; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L246; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[40], ECL_SYM("PACKAGE",1311), v9package);
  }
L246:;
  {
   cl_object volatile v10;
   v10 = ecl_make_cfun((cl_objectfn_fixed)LC32__lambda112,ECL_NIL,Cblock,2);
   T0 = v10;
  }
  si_put_sysprop(VV[49], VV[7], T0);
  {
   cl_object v10package;
   v10package = cl_symbol_package(VV[50]);
   if (Null(v10package)) { goto L254; }
   if (Null(si_package_locked_p(v10package))) { goto L254; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L254; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[41], ECL_SYM("PACKAGE",1311), v10package);
  }
L254:;
  {
   cl_object volatile v11;
   v11 = ecl_make_cfun((cl_objectfn_fixed)LC33__lambda116,ECL_NIL,Cblock,2);
   T0 = v11;
  }
  si_put_sysprop(VV[50], VV[7], T0);
  {
   cl_object v11package;
   v11package = cl_symbol_package(VV[51]);
   if (Null(v11package)) { goto L262; }
   if (Null(si_package_locked_p(v11package))) { goto L262; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L262; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[42], ECL_SYM("PACKAGE",1311), v11package);
  }
L262:;
  {
   cl_object volatile v12;
   v12 = ecl_make_cfun((cl_objectfn_fixed)LC34__lambda120,ECL_NIL,Cblock,2);
   T0 = v12;
  }
  si_put_sysprop(VV[51], VV[7], T0);
  {
   cl_object v12package;
   v12package = cl_symbol_package(VV[52]);
   if (Null(v12package)) { goto L270; }
   if (Null(si_package_locked_p(v12package))) { goto L270; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L270; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[43], ECL_SYM("PACKAGE",1311), v12package);
  }
L270:;
  {
   cl_object volatile v13;
   v13 = ecl_make_cfun((cl_objectfn_fixed)LC35__lambda124,ECL_NIL,Cblock,2);
   T0 = v13;
  }
  si_put_sysprop(VV[52], VV[7], T0);
  {
   cl_object v13package;
   v13package = cl_symbol_package(VV[53]);
   if (Null(v13package)) { goto L278; }
   if (Null(si_package_locked_p(v13package))) { goto L278; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L278; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[44], ECL_SYM("PACKAGE",1311), v13package);
  }
L278:;
  {
   cl_object volatile v14;
   v14 = ecl_make_cfun((cl_objectfn_fixed)LC36__lambda128,ECL_NIL,Cblock,2);
   T0 = v14;
  }
  si_put_sysprop(VV[53], VV[7], T0);
  {
   cl_object v14package;
   v14package = cl_symbol_package(VV[54]);
   if (Null(v14package)) { goto L286; }
   if (Null(si_package_locked_p(v14package))) { goto L286; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L286; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[45], ECL_SYM("PACKAGE",1311), v14package);
  }
L286:;
  {
   cl_object volatile v15;
   v15 = ecl_make_cfun((cl_objectfn_fixed)LC37__lambda132,ECL_NIL,Cblock,2);
   T0 = v15;
  }
  si_put_sysprop(VV[54], VV[7], T0);
  {
   cl_object v15package;
   v15package = cl_symbol_package(VV[55]);
   if (Null(v15package)) { goto L294; }
   if (Null(si_package_locked_p(v15package))) { goto L294; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L294; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[46], ECL_SYM("PACKAGE",1311), v15package);
  }
L294:;
  {
   cl_object volatile v16;
   v16 = ecl_make_cfun((cl_objectfn_fixed)LC38__lambda136,ECL_NIL,Cblock,2);
   T0 = v16;
  }
  si_put_sysprop(VV[55], VV[7], T0);
  {
   cl_object v16package;
   v16package = cl_symbol_package(VV[56]);
   if (Null(v16package)) { goto L302; }
   if (Null(si_package_locked_p(v16package))) { goto L302; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L302; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[47], ECL_SYM("PACKAGE",1311), v16package);
  }
L302:;
  {
   cl_object volatile v17;
   v17 = ecl_make_cfun((cl_objectfn_fixed)LC39__lambda140,ECL_NIL,Cblock,2);
   T0 = v17;
  }
  si_put_sysprop(VV[56], VV[7], T0);
  {
   cl_object v17package;
   v17package = cl_symbol_package(VV[57]);
   if (Null(v17package)) { goto L310; }
   if (Null(si_package_locked_p(v17package))) { goto L310; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L310; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[48], ECL_SYM("PACKAGE",1311), v17package);
  }
L310:;
  {
   cl_object volatile v18;
   v18 = ecl_make_cfun((cl_objectfn_fixed)LC40__lambda144,ECL_NIL,Cblock,2);
   T0 = v18;
  }
  si_put_sysprop(VV[57], VV[7], T0);
  {
   cl_object v18package;
   v18package = cl_symbol_package(VV[58]);
   if (Null(v18package)) { goto L318; }
   if (Null(si_package_locked_p(v18package))) { goto L318; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L318; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[49], ECL_SYM("PACKAGE",1311), v18package);
  }
L318:;
  {
   cl_object volatile v19;
   v19 = ecl_make_cfun((cl_objectfn_fixed)LC41__lambda148,ECL_NIL,Cblock,2);
   T0 = v19;
  }
  si_put_sysprop(VV[58], VV[7], T0);
  {
   cl_object v19package;
   v19package = cl_symbol_package(VV[59]);
   if (Null(v19package)) { goto L326; }
   if (Null(si_package_locked_p(v19package))) { goto L326; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L326; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[50], ECL_SYM("PACKAGE",1311), v19package);
  }
L326:;
  {
   cl_object volatile v20;
   v20 = ecl_make_cfun((cl_objectfn_fixed)LC42__lambda152,ECL_NIL,Cblock,2);
   T0 = v20;
  }
  si_put_sysprop(VV[59], VV[7], T0);
  {
   cl_object v20package;
   v20package = cl_symbol_package(VV[60]);
   if (Null(v20package)) { goto L334; }
   if (Null(si_package_locked_p(v20package))) { goto L334; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L334; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[51], ECL_SYM("PACKAGE",1311), v20package);
  }
L334:;
  {
   cl_object volatile v21;
   v21 = ecl_make_cfun((cl_objectfn_fixed)LC43__lambda156,ECL_NIL,Cblock,2);
   T0 = v21;
  }
  si_put_sysprop(VV[60], VV[7], T0);
  {
   cl_object v21package;
   v21package = cl_symbol_package(VV[61]);
   if (Null(v21package)) { goto L342; }
   if (Null(si_package_locked_p(v21package))) { goto L342; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L342; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[52], ECL_SYM("PACKAGE",1311), v21package);
  }
L342:;
  {
   cl_object volatile v22;
   v22 = ecl_make_cfun((cl_objectfn_fixed)LC44__lambda160,ECL_NIL,Cblock,2);
   T0 = v22;
  }
  si_put_sysprop(VV[61], VV[7], T0);
  {
   cl_object v22package;
   v22package = cl_symbol_package(VV[62]);
   if (Null(v22package)) { goto L350; }
   if (Null(si_package_locked_p(v22package))) { goto L350; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L350; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[53], ECL_SYM("PACKAGE",1311), v22package);
  }
L350:;
  {
   cl_object volatile v23;
   v23 = ecl_make_cfun((cl_objectfn_fixed)LC45__lambda164,ECL_NIL,Cblock,2);
   T0 = v23;
  }
  si_put_sysprop(VV[62], VV[7], T0);
  {
   cl_object v23package;
   v23package = cl_symbol_package(VV[63]);
   if (Null(v23package)) { goto L358; }
   if (Null(si_package_locked_p(v23package))) { goto L358; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L358; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[54], ECL_SYM("PACKAGE",1311), v23package);
  }
L358:;
  {
   cl_object volatile v24;
   v24 = ecl_make_cfun((cl_objectfn_fixed)LC46__lambda168,ECL_NIL,Cblock,2);
   T0 = v24;
  }
  si_put_sysprop(VV[63], VV[7], T0);
  {
   cl_object v24package;
   v24package = cl_symbol_package(VV[64]);
   if (Null(v24package)) { goto L366; }
   if (Null(si_package_locked_p(v24package))) { goto L366; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L366; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[55], ECL_SYM("PACKAGE",1311), v24package);
  }
L366:;
  {
   cl_object volatile v25;
   v25 = ecl_make_cfun((cl_objectfn_fixed)LC47__lambda172,ECL_NIL,Cblock,2);
   T0 = v25;
  }
  si_put_sysprop(VV[64], VV[7], T0);
  {
   cl_object v25package;
   v25package = cl_symbol_package(VV[65]);
   if (Null(v25package)) { goto L374; }
   if (Null(si_package_locked_p(v25package))) { goto L374; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L374; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[56], ECL_SYM("PACKAGE",1311), v25package);
  }
L374:;
  {
   cl_object volatile v26;
   v26 = ecl_make_cfun((cl_objectfn_fixed)LC48__lambda176,ECL_NIL,Cblock,2);
   T0 = v26;
  }
  si_put_sysprop(VV[65], VV[7], T0);
  {
   cl_object v26package;
   v26package = cl_symbol_package(VV[66]);
   if (Null(v26package)) { goto L382; }
   if (Null(si_package_locked_p(v26package))) { goto L382; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L382; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[57], ECL_SYM("PACKAGE",1311), v26package);
  }
L382:;
  {
   cl_object volatile v27;
   v27 = ecl_make_cfun((cl_objectfn_fixed)LC49__lambda180,ECL_NIL,Cblock,2);
   T0 = v27;
  }
  si_put_sysprop(VV[66], VV[7], T0);
  {
   cl_object v27package;
   v27package = cl_symbol_package(VV[67]);
   if (Null(v27package)) { goto L390; }
   if (Null(si_package_locked_p(v27package))) { goto L390; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L390; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[58], ECL_SYM("PACKAGE",1311), v27package);
  }
L390:;
  {
   cl_object volatile v28;
   v28 = ecl_make_cfun((cl_objectfn_fixed)LC50__lambda184,ECL_NIL,Cblock,2);
   T0 = v28;
  }
  si_put_sysprop(VV[67], VV[7], T0);
  {
   cl_object v28package;
   v28package = cl_symbol_package(VV[68]);
   if (Null(v28package)) { goto L398; }
   if (Null(si_package_locked_p(v28package))) { goto L398; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L398; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[59], ECL_SYM("PACKAGE",1311), v28package);
  }
L398:;
  {
   cl_object volatile v29;
   v29 = ecl_make_cfun((cl_objectfn_fixed)LC51__lambda188,ECL_NIL,Cblock,2);
   T0 = v29;
  }
  si_put_sysprop(VV[68], VV[7], T0);
  {
   cl_object v29package;
   v29package = cl_symbol_package(VV[69]);
   if (Null(v29package)) { goto L406; }
   if (Null(si_package_locked_p(v29package))) { goto L406; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L406; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[60], ECL_SYM("PACKAGE",1311), v29package);
  }
L406:;
  {
   cl_object volatile v30;
   v30 = ecl_make_cfun((cl_objectfn_fixed)LC52__lambda192,ECL_NIL,Cblock,2);
   T0 = v30;
  }
  si_put_sysprop(VV[69], VV[7], T0);
  {
   cl_object v30package;
   v30package = cl_symbol_package(VV[70]);
   if (Null(v30package)) { goto L414; }
   if (Null(si_package_locked_p(v30package))) { goto L414; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L414; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[61], ECL_SYM("PACKAGE",1311), v30package);
  }
L414:;
  {
   cl_object volatile v31;
   v31 = ecl_make_cfun((cl_objectfn_fixed)LC53__lambda196,ECL_NIL,Cblock,2);
   T0 = v31;
  }
  si_put_sysprop(VV[70], VV[7], T0);
  {
   cl_object v31package;
   v31package = cl_symbol_package(VV[71]);
   if (Null(v31package)) { goto L422; }
   if (Null(si_package_locked_p(v31package))) { goto L422; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L422; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[62], ECL_SYM("PACKAGE",1311), v31package);
  }
L422:;
  {
   cl_object volatile v32;
   v32 = ecl_make_cfun((cl_objectfn_fixed)LC54__lambda200,ECL_NIL,Cblock,2);
   T0 = v32;
  }
  si_put_sysprop(VV[71], VV[7], T0);
  {
   cl_object v32package;
   v32package = cl_symbol_package(VV[72]);
   if (Null(v32package)) { goto L430; }
   if (Null(si_package_locked_p(v32package))) { goto L430; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L430; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[63], ECL_SYM("PACKAGE",1311), v32package);
  }
L430:;
  {
   cl_object volatile v33;
   v33 = ecl_make_cfun((cl_objectfn_fixed)LC55__lambda204,ECL_NIL,Cblock,2);
   T0 = v33;
  }
  si_put_sysprop(VV[72], VV[7], T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  ecl_function_dispatch(cl_env_copy,VV[176])(15, VV[73], _ecl_static_3, ECL_NIL, ECL_NIL, VVtemp[64], VVtemp[65], VV[74], VV[0], ECL_NIL, ECL_NIL, VVtemp[66], ecl_make_fixnum(9), ECL_NIL, ECL_NIL, VV[75]) /*  DEFINE-STRUCTURE */;
  VV[76]= cl_find_class(1, VV[73]);
  ecl_cmp_defun(VV[234]);                         /*  MAKE-BLK        */
  {
   cl_object v1package;
   v1package = cl_symbol_package(VV[78]);
   if (Null(v1package)) { goto L447; }
   if (Null(si_package_locked_p(v1package))) { goto L447; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L447; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[67], ECL_SYM("PACKAGE",1311), v1package);
  }
L447:;
  {
   cl_object volatile v2;
   v2 = ecl_make_cfun((cl_objectfn_fixed)LC57__lambda208,ECL_NIL,Cblock,2);
   T0 = v2;
  }
  si_put_sysprop(VV[78], VV[7], T0);
  {
   cl_object v2package;
   v2package = cl_symbol_package(VV[79]);
   if (Null(v2package)) { goto L455; }
   if (Null(si_package_locked_p(v2package))) { goto L455; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L455; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[68], ECL_SYM("PACKAGE",1311), v2package);
  }
L455:;
  {
   cl_object volatile v3;
   v3 = ecl_make_cfun((cl_objectfn_fixed)LC58__lambda212,ECL_NIL,Cblock,2);
   T0 = v3;
  }
  si_put_sysprop(VV[79], VV[7], T0);
  {
   cl_object v3package;
   v3package = cl_symbol_package(VV[80]);
   if (Null(v3package)) { goto L463; }
   if (Null(si_package_locked_p(v3package))) { goto L463; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L463; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[69], ECL_SYM("PACKAGE",1311), v3package);
  }
L463:;
  {
   cl_object volatile v4;
   v4 = ecl_make_cfun((cl_objectfn_fixed)LC59__lambda216,ECL_NIL,Cblock,2);
   T0 = v4;
  }
  si_put_sysprop(VV[80], VV[7], T0);
  {
   cl_object v4package;
   v4package = cl_symbol_package(VV[81]);
   if (Null(v4package)) { goto L471; }
   if (Null(si_package_locked_p(v4package))) { goto L471; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L471; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[70], ECL_SYM("PACKAGE",1311), v4package);
  }
L471:;
  {
   cl_object volatile v5;
   v5 = ecl_make_cfun((cl_objectfn_fixed)LC60__lambda220,ECL_NIL,Cblock,2);
   T0 = v5;
  }
  si_put_sysprop(VV[81], VV[7], T0);
  {
   cl_object v5package;
   v5package = cl_symbol_package(VV[82]);
   if (Null(v5package)) { goto L479; }
   if (Null(si_package_locked_p(v5package))) { goto L479; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L479; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[71], ECL_SYM("PACKAGE",1311), v5package);
  }
L479:;
  {
   cl_object volatile v6;
   v6 = ecl_make_cfun((cl_objectfn_fixed)LC61__lambda224,ECL_NIL,Cblock,2);
   T0 = v6;
  }
  si_put_sysprop(VV[82], VV[7], T0);
  {
   cl_object v6package;
   v6package = cl_symbol_package(VV[83]);
   if (Null(v6package)) { goto L487; }
   if (Null(si_package_locked_p(v6package))) { goto L487; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L487; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[72], ECL_SYM("PACKAGE",1311), v6package);
  }
L487:;
  {
   cl_object volatile v7;
   v7 = ecl_make_cfun((cl_objectfn_fixed)LC62__lambda228,ECL_NIL,Cblock,2);
   T0 = v7;
  }
  si_put_sysprop(VV[83], VV[7], T0);
  {
   cl_object v7package;
   v7package = cl_symbol_package(VV[84]);
   if (Null(v7package)) { goto L495; }
   if (Null(si_package_locked_p(v7package))) { goto L495; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L495; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[73], ECL_SYM("PACKAGE",1311), v7package);
  }
L495:;
  {
   cl_object volatile v8;
   v8 = ecl_make_cfun((cl_objectfn_fixed)LC63__lambda232,ECL_NIL,Cblock,2);
   T0 = v8;
  }
  si_put_sysprop(VV[84], VV[7], T0);
  {
   cl_object v8package;
   v8package = cl_symbol_package(VV[85]);
   if (Null(v8package)) { goto L503; }
   if (Null(si_package_locked_p(v8package))) { goto L503; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L503; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[74], ECL_SYM("PACKAGE",1311), v8package);
  }
L503:;
  {
   cl_object volatile v9;
   v9 = ecl_make_cfun((cl_objectfn_fixed)LC64__lambda236,ECL_NIL,Cblock,2);
   T0 = v9;
  }
  si_put_sysprop(VV[85], VV[7], T0);
  {
   cl_object v9package;
   v9package = cl_symbol_package(VV[86]);
   if (Null(v9package)) { goto L511; }
   if (Null(si_package_locked_p(v9package))) { goto L511; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L511; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[75], ECL_SYM("PACKAGE",1311), v9package);
  }
L511:;
  {
   cl_object volatile v10;
   v10 = ecl_make_cfun((cl_objectfn_fixed)LC65__lambda240,ECL_NIL,Cblock,2);
   T0 = v10;
  }
  si_put_sysprop(VV[86], VV[7], T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  ecl_function_dispatch(cl_env_copy,VV[176])(15, VV[87], _ecl_static_4, ECL_NIL, ECL_NIL, VVtemp[76], VVtemp[77], VV[88], VV[0], ECL_NIL, ECL_NIL, VVtemp[78], ecl_make_fixnum(9), ECL_NIL, ECL_NIL, VV[89]) /*  DEFINE-STRUCTURE */;
  VV[90]= cl_find_class(1, VV[87]);
  ecl_cmp_defun(VV[244]);                         /*  MAKE-TAG        */
  {
   cl_object v1package;
   v1package = cl_symbol_package(VV[92]);
   if (Null(v1package)) { goto L528; }
   if (Null(si_package_locked_p(v1package))) { goto L528; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L528; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[79], ECL_SYM("PACKAGE",1311), v1package);
  }
L528:;
  {
   cl_object volatile v2;
   v2 = ecl_make_cfun((cl_objectfn_fixed)LC67__lambda244,ECL_NIL,Cblock,2);
   T0 = v2;
  }
  si_put_sysprop(VV[92], VV[7], T0);
  {
   cl_object v2package;
   v2package = cl_symbol_package(VV[93]);
   if (Null(v2package)) { goto L536; }
   if (Null(si_package_locked_p(v2package))) { goto L536; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L536; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[80], ECL_SYM("PACKAGE",1311), v2package);
  }
L536:;
  {
   cl_object volatile v3;
   v3 = ecl_make_cfun((cl_objectfn_fixed)LC68__lambda248,ECL_NIL,Cblock,2);
   T0 = v3;
  }
  si_put_sysprop(VV[93], VV[7], T0);
  {
   cl_object v3package;
   v3package = cl_symbol_package(VV[94]);
   if (Null(v3package)) { goto L544; }
   if (Null(si_package_locked_p(v3package))) { goto L544; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L544; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[81], ECL_SYM("PACKAGE",1311), v3package);
  }
L544:;
  {
   cl_object volatile v4;
   v4 = ecl_make_cfun((cl_objectfn_fixed)LC69__lambda252,ECL_NIL,Cblock,2);
   T0 = v4;
  }
  si_put_sysprop(VV[94], VV[7], T0);
  {
   cl_object v4package;
   v4package = cl_symbol_package(VV[95]);
   if (Null(v4package)) { goto L552; }
   if (Null(si_package_locked_p(v4package))) { goto L552; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L552; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[82], ECL_SYM("PACKAGE",1311), v4package);
  }
L552:;
  {
   cl_object volatile v5;
   v5 = ecl_make_cfun((cl_objectfn_fixed)LC70__lambda256,ECL_NIL,Cblock,2);
   T0 = v5;
  }
  si_put_sysprop(VV[95], VV[7], T0);
  {
   cl_object v5package;
   v5package = cl_symbol_package(VV[96]);
   if (Null(v5package)) { goto L560; }
   if (Null(si_package_locked_p(v5package))) { goto L560; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L560; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[83], ECL_SYM("PACKAGE",1311), v5package);
  }
L560:;
  {
   cl_object volatile v6;
   v6 = ecl_make_cfun((cl_objectfn_fixed)LC71__lambda260,ECL_NIL,Cblock,2);
   T0 = v6;
  }
  si_put_sysprop(VV[96], VV[7], T0);
  {
   cl_object v6package;
   v6package = cl_symbol_package(VV[97]);
   if (Null(v6package)) { goto L568; }
   if (Null(si_package_locked_p(v6package))) { goto L568; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L568; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[84], ECL_SYM("PACKAGE",1311), v6package);
  }
L568:;
  {
   cl_object volatile v7;
   v7 = ecl_make_cfun((cl_objectfn_fixed)LC72__lambda264,ECL_NIL,Cblock,2);
   T0 = v7;
  }
  si_put_sysprop(VV[97], VV[7], T0);
  {
   cl_object v7package;
   v7package = cl_symbol_package(VV[98]);
   if (Null(v7package)) { goto L576; }
   if (Null(si_package_locked_p(v7package))) { goto L576; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L576; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[85], ECL_SYM("PACKAGE",1311), v7package);
  }
L576:;
  {
   cl_object volatile v8;
   v8 = ecl_make_cfun((cl_objectfn_fixed)LC73__lambda268,ECL_NIL,Cblock,2);
   T0 = v8;
  }
  si_put_sysprop(VV[98], VV[7], T0);
  {
   cl_object v8package;
   v8package = cl_symbol_package(VV[99]);
   if (Null(v8package)) { goto L584; }
   if (Null(si_package_locked_p(v8package))) { goto L584; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L584; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[86], ECL_SYM("PACKAGE",1311), v8package);
  }
L584:;
  {
   cl_object volatile v9;
   v9 = ecl_make_cfun((cl_objectfn_fixed)LC74__lambda272,ECL_NIL,Cblock,2);
   T0 = v9;
  }
  si_put_sysprop(VV[99], VV[7], T0);
  {
   cl_object v9package;
   v9package = cl_symbol_package(VV[100]);
   if (Null(v9package)) { goto L592; }
   if (Null(si_package_locked_p(v9package))) { goto L592; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L592; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[87], ECL_SYM("PACKAGE",1311), v9package);
  }
L592:;
  {
   cl_object volatile v10;
   v10 = ecl_make_cfun((cl_objectfn_fixed)LC75__lambda276,ECL_NIL,Cblock,2);
   T0 = v10;
  }
  si_put_sysprop(VV[100], VV[7], T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  ecl_function_dispatch(cl_env_copy,VV[176])(15, VV[101], _ecl_static_5, ECL_NIL, ECL_NIL, VVtemp[88], VVtemp[89], VV[102], ECL_NIL, ECL_NIL, ECL_NIL, VVtemp[90], ecl_make_fixnum(4), ECL_NIL, ECL_NIL, VV[103]) /*  DEFINE-STRUCTURE */;
  VV[104]= cl_find_class(1, VV[101]);
  ecl_cmp_defun(VV[254]);                         /*  MAKE-INFO       */
  {
   cl_object v1package;
   v1package = cl_symbol_package(VV[106]);
   if (Null(v1package)) { goto L609; }
   if (Null(si_package_locked_p(v1package))) { goto L609; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L609; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[91], ECL_SYM("PACKAGE",1311), v1package);
  }
L609:;
  {
   cl_object volatile v2;
   v2 = ecl_make_cfun((cl_objectfn_fixed)LC77__lambda280,ECL_NIL,Cblock,2);
   T0 = v2;
  }
  si_put_sysprop(VV[106], VV[7], T0);
  {
   cl_object v2package;
   v2package = cl_symbol_package(VV[107]);
   if (Null(v2package)) { goto L617; }
   if (Null(si_package_locked_p(v2package))) { goto L617; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L617; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[92], ECL_SYM("PACKAGE",1311), v2package);
  }
L617:;
  {
   cl_object volatile v3;
   v3 = ecl_make_cfun((cl_objectfn_fixed)LC78__lambda284,ECL_NIL,Cblock,2);
   T0 = v3;
  }
  si_put_sysprop(VV[107], VV[7], T0);
  {
   cl_object v3package;
   v3package = cl_symbol_package(VV[108]);
   if (Null(v3package)) { goto L625; }
   if (Null(si_package_locked_p(v3package))) { goto L625; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L625; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[93], ECL_SYM("PACKAGE",1311), v3package);
  }
L625:;
  {
   cl_object volatile v4;
   v4 = ecl_make_cfun((cl_objectfn_fixed)LC79__lambda288,ECL_NIL,Cblock,2);
   T0 = v4;
  }
  si_put_sysprop(VV[108], VV[7], T0);
  {
   cl_object v4package;
   v4package = cl_symbol_package(VV[109]);
   if (Null(v4package)) { goto L633; }
   if (Null(si_package_locked_p(v4package))) { goto L633; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L633; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[94], ECL_SYM("PACKAGE",1311), v4package);
  }
L633:;
  {
   cl_object volatile v5;
   v5 = ecl_make_cfun((cl_objectfn_fixed)LC80__lambda292,ECL_NIL,Cblock,2);
   T0 = v5;
  }
  si_put_sysprop(VV[109], VV[7], T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  ecl_function_dispatch(cl_env_copy,VV[176])(15, VV[110], _ecl_static_6, ECL_NIL, ECL_NIL, VVtemp[95], VVtemp[96], VV[111], ECL_NIL, ECL_NIL, ECL_NIL, VVtemp[97], ecl_make_fixnum(9), ECL_NIL, ECL_NIL, VV[112]) /*  DEFINE-STRUCTURE */;
  VV[113]= cl_find_class(1, VV[110]);
  ecl_cmp_defun(VV[259]);                         /*  MAKE-INLINE-INFO */
  {
   cl_object v1package;
   v1package = cl_symbol_package(VV[115]);
   if (Null(v1package)) { goto L650; }
   if (Null(si_package_locked_p(v1package))) { goto L650; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L650; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[98], ECL_SYM("PACKAGE",1311), v1package);
  }
L650:;
  {
   cl_object volatile v2;
   v2 = ecl_make_cfun((cl_objectfn_fixed)LC82__lambda296,ECL_NIL,Cblock,2);
   T0 = v2;
  }
  si_put_sysprop(VV[115], VV[7], T0);
  {
   cl_object v2package;
   v2package = cl_symbol_package(VV[116]);
   if (Null(v2package)) { goto L658; }
   if (Null(si_package_locked_p(v2package))) { goto L658; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L658; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[99], ECL_SYM("PACKAGE",1311), v2package);
  }
L658:;
  {
   cl_object volatile v3;
   v3 = ecl_make_cfun((cl_objectfn_fixed)LC83__lambda300,ECL_NIL,Cblock,2);
   T0 = v3;
  }
  si_put_sysprop(VV[116], VV[7], T0);
  {
   cl_object v3package;
   v3package = cl_symbol_package(VV[117]);
   if (Null(v3package)) { goto L666; }
   if (Null(si_package_locked_p(v3package))) { goto L666; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L666; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[100], ECL_SYM("PACKAGE",1311), v3package);
  }
L666:;
  {
   cl_object volatile v4;
   v4 = ecl_make_cfun((cl_objectfn_fixed)LC84__lambda304,ECL_NIL,Cblock,2);
   T0 = v4;
  }
  si_put_sysprop(VV[117], VV[7], T0);
  {
   cl_object v4package;
   v4package = cl_symbol_package(VV[118]);
   if (Null(v4package)) { goto L674; }
   if (Null(si_package_locked_p(v4package))) { goto L674; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L674; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[101], ECL_SYM("PACKAGE",1311), v4package);
  }
L674:;
  {
   cl_object volatile v5;
   v5 = ecl_make_cfun((cl_objectfn_fixed)LC85__lambda308,ECL_NIL,Cblock,2);
   T0 = v5;
  }
  si_put_sysprop(VV[118], VV[7], T0);
  {
   cl_object v5package;
   v5package = cl_symbol_package(VV[119]);
   if (Null(v5package)) { goto L682; }
   if (Null(si_package_locked_p(v5package))) { goto L682; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L682; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[102], ECL_SYM("PACKAGE",1311), v5package);
  }
L682:;
  {
   cl_object volatile v6;
   v6 = ecl_make_cfun((cl_objectfn_fixed)LC86__lambda312,ECL_NIL,Cblock,2);
   T0 = v6;
  }
  si_put_sysprop(VV[119], VV[7], T0);
  {
   cl_object v6package;
   v6package = cl_symbol_package(VV[120]);
   if (Null(v6package)) { goto L690; }
   if (Null(si_package_locked_p(v6package))) { goto L690; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L690; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[103], ECL_SYM("PACKAGE",1311), v6package);
  }
L690:;
  {
   cl_object volatile v7;
   v7 = ecl_make_cfun((cl_objectfn_fixed)LC87__lambda316,ECL_NIL,Cblock,2);
   T0 = v7;
  }
  si_put_sysprop(VV[120], VV[7], T0);
  {
   cl_object v7package;
   v7package = cl_symbol_package(VV[121]);
   if (Null(v7package)) { goto L698; }
   if (Null(si_package_locked_p(v7package))) { goto L698; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L698; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[104], ECL_SYM("PACKAGE",1311), v7package);
  }
L698:;
  {
   cl_object volatile v8;
   v8 = ecl_make_cfun((cl_objectfn_fixed)LC88__lambda320,ECL_NIL,Cblock,2);
   T0 = v8;
  }
  si_put_sysprop(VV[121], VV[7], T0);
  {
   cl_object v8package;
   v8package = cl_symbol_package(VV[122]);
   if (Null(v8package)) { goto L706; }
   if (Null(si_package_locked_p(v8package))) { goto L706; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L706; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[105], ECL_SYM("PACKAGE",1311), v8package);
  }
L706:;
  {
   cl_object volatile v9;
   v9 = ecl_make_cfun((cl_objectfn_fixed)LC89__lambda324,ECL_NIL,Cblock,2);
   T0 = v9;
  }
  si_put_sysprop(VV[122], VV[7], T0);
  {
   cl_object v9package;
   v9package = cl_symbol_package(VV[123]);
   if (Null(v9package)) { goto L714; }
   if (Null(si_package_locked_p(v9package))) { goto L714; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L714; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[106], ECL_SYM("PACKAGE",1311), v9package);
  }
L714:;
  {
   cl_object volatile v10;
   v10 = ecl_make_cfun((cl_objectfn_fixed)LC90__lambda328,ECL_NIL,Cblock,2);
   T0 = v10;
  }
  si_put_sysprop(VV[123], VV[7], T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  ecl_function_dispatch(cl_env_copy,VV[176])(15, VV[124], _ecl_static_7, ECL_NIL, ECL_NIL, VVtemp[107], VVtemp[108], VV[125], VV[101], ECL_NIL, VV[126], VVtemp[109], ecl_make_fixnum(13), ECL_NIL, ECL_NIL, VV[127]) /*  DEFINE-STRUCTURE */;
  VV[128]= cl_find_class(1, VV[124]);
  ecl_cmp_defun(VV[269]);                         /*  DO-MAKE-C1FORM  */
  {
   cl_object v1package;
   v1package = cl_symbol_package(VV[130]);
   if (Null(v1package)) { goto L731; }
   if (Null(si_package_locked_p(v1package))) { goto L731; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L731; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[110], ECL_SYM("PACKAGE",1311), v1package);
  }
L731:;
  {
   cl_object volatile v2;
   v2 = ecl_make_cfun((cl_objectfn_fixed)LC92__lambda332,ECL_NIL,Cblock,2);
   T0 = v2;
  }
  si_put_sysprop(VV[130], VV[7], T0);
  {
   cl_object v2package;
   v2package = cl_symbol_package(VV[131]);
   if (Null(v2package)) { goto L739; }
   if (Null(si_package_locked_p(v2package))) { goto L739; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L739; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[111], ECL_SYM("PACKAGE",1311), v2package);
  }
L739:;
  {
   cl_object volatile v3;
   v3 = ecl_make_cfun((cl_objectfn_fixed)LC93__lambda336,ECL_NIL,Cblock,2);
   T0 = v3;
  }
  si_put_sysprop(VV[131], VV[7], T0);
  {
   cl_object v3package;
   v3package = cl_symbol_package(VV[132]);
   if (Null(v3package)) { goto L747; }
   if (Null(si_package_locked_p(v3package))) { goto L747; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L747; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[112], ECL_SYM("PACKAGE",1311), v3package);
  }
L747:;
  {
   cl_object volatile v4;
   v4 = ecl_make_cfun((cl_objectfn_fixed)LC94__lambda340,ECL_NIL,Cblock,2);
   T0 = v4;
  }
  si_put_sysprop(VV[132], VV[7], T0);
  {
   cl_object v4package;
   v4package = cl_symbol_package(VV[133]);
   if (Null(v4package)) { goto L755; }
   if (Null(si_package_locked_p(v4package))) { goto L755; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L755; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[113], ECL_SYM("PACKAGE",1311), v4package);
  }
L755:;
  {
   cl_object volatile v5;
   v5 = ecl_make_cfun((cl_objectfn_fixed)LC95__lambda344,ECL_NIL,Cblock,2);
   T0 = v5;
  }
  si_put_sysprop(VV[133], VV[7], T0);
  {
   cl_object v5package;
   v5package = cl_symbol_package(VV[134]);
   if (Null(v5package)) { goto L763; }
   if (Null(si_package_locked_p(v5package))) { goto L763; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L763; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[114], ECL_SYM("PACKAGE",1311), v5package);
  }
L763:;
  {
   cl_object volatile v6;
   v6 = ecl_make_cfun((cl_objectfn_fixed)LC96__lambda348,ECL_NIL,Cblock,2);
   T0 = v6;
  }
  si_put_sysprop(VV[134], VV[7], T0);
  {
   cl_object v6package;
   v6package = cl_symbol_package(VV[135]);
   if (Null(v6package)) { goto L771; }
   if (Null(si_package_locked_p(v6package))) { goto L771; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L771; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[115], ECL_SYM("PACKAGE",1311), v6package);
  }
L771:;
  {
   cl_object volatile v7;
   v7 = ecl_make_cfun((cl_objectfn_fixed)LC97__lambda352,ECL_NIL,Cblock,2);
   T0 = v7;
  }
  si_put_sysprop(VV[135], VV[7], T0);
  {
   cl_object v7package;
   v7package = cl_symbol_package(VV[136]);
   if (Null(v7package)) { goto L779; }
   if (Null(si_package_locked_p(v7package))) { goto L779; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L779; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[116], ECL_SYM("PACKAGE",1311), v7package);
  }
L779:;
  {
   cl_object volatile v8;
   v8 = ecl_make_cfun((cl_objectfn_fixed)LC98__lambda356,ECL_NIL,Cblock,2);
   T0 = v8;
  }
  si_put_sysprop(VV[136], VV[7], T0);
  {
   cl_object v8package;
   v8package = cl_symbol_package(VV[137]);
   if (Null(v8package)) { goto L787; }
   if (Null(si_package_locked_p(v8package))) { goto L787; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L787; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[117], ECL_SYM("PACKAGE",1311), v8package);
  }
L787:;
  {
   cl_object volatile v9;
   v9 = ecl_make_cfun((cl_objectfn_fixed)LC99__lambda360,ECL_NIL,Cblock,2);
   T0 = v9;
  }
  si_put_sysprop(VV[137], VV[7], T0);
  {
   cl_object v9package;
   v9package = cl_symbol_package(VV[138]);
   if (Null(v9package)) { goto L795; }
   if (Null(si_package_locked_p(v9package))) { goto L795; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L795; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[118], ECL_SYM("PACKAGE",1311), v9package);
  }
L795:;
  {
   cl_object volatile v10;
   v10 = ecl_make_cfun((cl_objectfn_fixed)LC100__lambda364,ECL_NIL,Cblock,2);
   T0 = v10;
  }
  si_put_sysprop(VV[138], VV[7], T0);
  {
   cl_object v10package;
   v10package = cl_symbol_package(VV[139]);
   if (Null(v10package)) { goto L803; }
   if (Null(si_package_locked_p(v10package))) { goto L803; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L803; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[119], ECL_SYM("PACKAGE",1311), v10package);
  }
L803:;
  {
   cl_object volatile v11;
   v11 = ecl_make_cfun((cl_objectfn_fixed)LC101__lambda368,ECL_NIL,Cblock,2);
   T0 = v11;
  }
  si_put_sysprop(VV[139], VV[7], T0);
  {
   cl_object v11package;
   v11package = cl_symbol_package(VV[140]);
   if (Null(v11package)) { goto L811; }
   if (Null(si_package_locked_p(v11package))) { goto L811; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L811; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[120], ECL_SYM("PACKAGE",1311), v11package);
  }
L811:;
  {
   cl_object volatile v12;
   v12 = ecl_make_cfun((cl_objectfn_fixed)LC102__lambda372,ECL_NIL,Cblock,2);
   T0 = v12;
  }
  si_put_sysprop(VV[140], VV[7], T0);
  {
   cl_object v12package;
   v12package = cl_symbol_package(VV[141]);
   if (Null(v12package)) { goto L819; }
   if (Null(si_package_locked_p(v12package))) { goto L819; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L819; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[121], ECL_SYM("PACKAGE",1311), v12package);
  }
L819:;
  {
   cl_object volatile v13;
   v13 = ecl_make_cfun((cl_objectfn_fixed)LC103__lambda376,ECL_NIL,Cblock,2);
   T0 = v13;
  }
  si_put_sysprop(VV[141], VV[7], T0);
  {
   cl_object v13package;
   v13package = cl_symbol_package(VV[142]);
   if (Null(v13package)) { goto L827; }
   if (Null(si_package_locked_p(v13package))) { goto L827; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L827; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[122], ECL_SYM("PACKAGE",1311), v13package);
  }
L827:;
  {
   cl_object volatile v14;
   v14 = ecl_make_cfun((cl_objectfn_fixed)LC104__lambda380,ECL_NIL,Cblock,2);
   T0 = v14;
  }
  si_put_sysprop(VV[142], VV[7], T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  ecl_function_dispatch(cl_env_copy,VV[176])(15, VV[143], _ecl_static_8, ECL_NIL, ECL_NIL, VVtemp[123], VVtemp[124], VV[144], ECL_NIL, ECL_NIL, ECL_NIL, VVtemp[125], ecl_make_fixnum(4), ECL_NIL, ECL_NIL, VV[145]) /*  DEFINE-STRUCTURE */;
  VV[146]= cl_find_class(1, VV[143]);
  ecl_cmp_defun(VV[283]);                         /*  MAKE-VV         */
  {
   cl_object v1package;
   v1package = cl_symbol_package(VV[148]);
   if (Null(v1package)) { goto L844; }
   if (Null(si_package_locked_p(v1package))) { goto L844; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L844; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[126], ECL_SYM("PACKAGE",1311), v1package);
  }
L844:;
  {
   cl_object volatile v2;
   v2 = ecl_make_cfun((cl_objectfn_fixed)LC106__lambda384,ECL_NIL,Cblock,2);
   T0 = v2;
  }
  si_put_sysprop(VV[148], VV[7], T0);
  {
   cl_object v2package;
   v2package = cl_symbol_package(VV[149]);
   if (Null(v2package)) { goto L852; }
   if (Null(si_package_locked_p(v2package))) { goto L852; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L852; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[127], ECL_SYM("PACKAGE",1311), v2package);
  }
L852:;
  {
   cl_object volatile v3;
   v3 = ecl_make_cfun((cl_objectfn_fixed)LC107__lambda388,ECL_NIL,Cblock,2);
   T0 = v3;
  }
  si_put_sysprop(VV[149], VV[7], T0);
  {
   cl_object v3package;
   v3package = cl_symbol_package(VV[150]);
   if (Null(v3package)) { goto L860; }
   if (Null(si_package_locked_p(v3package))) { goto L860; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L860; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[128], ECL_SYM("PACKAGE",1311), v3package);
  }
L860:;
  {
   cl_object volatile v4;
   v4 = ecl_make_cfun((cl_objectfn_fixed)LC108__lambda392,ECL_NIL,Cblock,2);
   T0 = v4;
  }
  si_put_sysprop(VV[150], VV[7], T0);
  {
   cl_object v4package;
   v4package = cl_symbol_package(VV[151]);
   if (Null(v4package)) { goto L868; }
   if (Null(si_package_locked_p(v4package))) { goto L868; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L868; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[129], ECL_SYM("PACKAGE",1311), v4package);
  }
L868:;
  {
   cl_object volatile v5;
   v5 = ecl_make_cfun((cl_objectfn_fixed)LC109__lambda396,ECL_NIL,Cblock,2);
   T0 = v5;
  }
  si_put_sysprop(VV[151], VV[7], T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  ecl_function_dispatch(cl_env_copy,VV[176])(15, VV[152], _ecl_static_9, ECL_NIL, ECL_NIL, VVtemp[130], VVtemp[131], VV[153], ECL_NIL, ECL_NIL, ECL_NIL, VVtemp[132], ecl_make_fixnum(4), ECL_NIL, ECL_NIL, VV[154]) /*  DEFINE-STRUCTURE */;
  VV[155]= cl_find_class(1, VV[152]);
  ecl_cmp_defun(VV[288]);                         /*  MAKE-MACHINE    */
  {
   cl_object v1package;
   v1package = cl_symbol_package(VV[157]);
   if (Null(v1package)) { goto L885; }
   if (Null(si_package_locked_p(v1package))) { goto L885; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L885; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[133], ECL_SYM("PACKAGE",1311), v1package);
  }
L885:;
  {
   cl_object volatile v2;
   v2 = ecl_make_cfun((cl_objectfn_fixed)LC111__lambda400,ECL_NIL,Cblock,2);
   T0 = v2;
  }
  si_put_sysprop(VV[157], VV[7], T0);
  {
   cl_object v2package;
   v2package = cl_symbol_package(VV[158]);
   if (Null(v2package)) { goto L893; }
   if (Null(si_package_locked_p(v2package))) { goto L893; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L893; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[134], ECL_SYM("PACKAGE",1311), v2package);
  }
L893:;
  {
   cl_object volatile v3;
   v3 = ecl_make_cfun((cl_objectfn_fixed)LC112__lambda404,ECL_NIL,Cblock,2);
   T0 = v3;
  }
  si_put_sysprop(VV[158], VV[7], T0);
  {
   cl_object v3package;
   v3package = cl_symbol_package(VV[159]);
   if (Null(v3package)) { goto L901; }
   if (Null(si_package_locked_p(v3package))) { goto L901; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L901; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[135], ECL_SYM("PACKAGE",1311), v3package);
  }
L901:;
  {
   cl_object volatile v4;
   v4 = ecl_make_cfun((cl_objectfn_fixed)LC113__lambda408,ECL_NIL,Cblock,2);
   T0 = v4;
  }
  si_put_sysprop(VV[159], VV[7], T0);
  {
   cl_object v4package;
   v4package = cl_symbol_package(VV[160]);
   if (Null(v4package)) { goto L909; }
   if (Null(si_package_locked_p(v4package))) { goto L909; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L909; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[136], ECL_SYM("PACKAGE",1311), v4package);
  }
L909:;
  {
   cl_object volatile v5;
   v5 = ecl_make_cfun((cl_objectfn_fixed)LC114__lambda412,ECL_NIL,Cblock,2);
   T0 = v5;
  }
  si_put_sysprop(VV[160], VV[7], T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  ecl_function_dispatch(cl_env_copy,VV[176])(15, VV[161], _ecl_static_10, ECL_NIL, ECL_NIL, VVtemp[137], VVtemp[138], VV[162], ECL_NIL, ECL_NIL, ECL_NIL, VVtemp[139], ecl_make_fixnum(10), ECL_NIL, ECL_NIL, VV[163]) /*  DEFINE-STRUCTURE */;
  VV[164]= cl_find_class(1, VV[161]);
  ecl_cmp_defun(VV[293]);                         /*  %MAKE-REP-TYPE  */
  {
   cl_object v1package;
   v1package = cl_symbol_package(VV[166]);
   if (Null(v1package)) { goto L926; }
   if (Null(si_package_locked_p(v1package))) { goto L926; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L926; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[140], ECL_SYM("PACKAGE",1311), v1package);
  }
L926:;
  {
   cl_object volatile v2;
   v2 = ecl_make_cfun((cl_objectfn_fixed)LC116__lambda416,ECL_NIL,Cblock,2);
   T0 = v2;
  }
  si_put_sysprop(VV[166], VV[7], T0);
  {
   cl_object v2package;
   v2package = cl_symbol_package(VV[167]);
   if (Null(v2package)) { goto L934; }
   if (Null(si_package_locked_p(v2package))) { goto L934; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L934; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[141], ECL_SYM("PACKAGE",1311), v2package);
  }
L934:;
  {
   cl_object volatile v3;
   v3 = ecl_make_cfun((cl_objectfn_fixed)LC117__lambda420,ECL_NIL,Cblock,2);
   T0 = v3;
  }
  si_put_sysprop(VV[167], VV[7], T0);
  {
   cl_object v3package;
   v3package = cl_symbol_package(VV[168]);
   if (Null(v3package)) { goto L942; }
   if (Null(si_package_locked_p(v3package))) { goto L942; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L942; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[142], ECL_SYM("PACKAGE",1311), v3package);
  }
L942:;
  {
   cl_object volatile v4;
   v4 = ecl_make_cfun((cl_objectfn_fixed)LC118__lambda424,ECL_NIL,Cblock,2);
   T0 = v4;
  }
  si_put_sysprop(VV[168], VV[7], T0);
  {
   cl_object v4package;
   v4package = cl_symbol_package(VV[169]);
   if (Null(v4package)) { goto L950; }
   if (Null(si_package_locked_p(v4package))) { goto L950; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L950; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[143], ECL_SYM("PACKAGE",1311), v4package);
  }
L950:;
  {
   cl_object volatile v5;
   v5 = ecl_make_cfun((cl_objectfn_fixed)LC119__lambda428,ECL_NIL,Cblock,2);
   T0 = v5;
  }
  si_put_sysprop(VV[169], VV[7], T0);
  {
   cl_object v5package;
   v5package = cl_symbol_package(VV[170]);
   if (Null(v5package)) { goto L958; }
   if (Null(si_package_locked_p(v5package))) { goto L958; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L958; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[144], ECL_SYM("PACKAGE",1311), v5package);
  }
L958:;
  {
   cl_object volatile v6;
   v6 = ecl_make_cfun((cl_objectfn_fixed)LC120__lambda432,ECL_NIL,Cblock,2);
   T0 = v6;
  }
  si_put_sysprop(VV[170], VV[7], T0);
  {
   cl_object v6package;
   v6package = cl_symbol_package(VV[171]);
   if (Null(v6package)) { goto L966; }
   if (Null(si_package_locked_p(v6package))) { goto L966; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L966; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[145], ECL_SYM("PACKAGE",1311), v6package);
  }
L966:;
  {
   cl_object volatile v7;
   v7 = ecl_make_cfun((cl_objectfn_fixed)LC121__lambda436,ECL_NIL,Cblock,2);
   T0 = v7;
  }
  si_put_sysprop(VV[171], VV[7], T0);
  {
   cl_object v7package;
   v7package = cl_symbol_package(VV[172]);
   if (Null(v7package)) { goto L974; }
   if (Null(si_package_locked_p(v7package))) { goto L974; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L974; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[146], ECL_SYM("PACKAGE",1311), v7package);
  }
L974:;
  {
   cl_object volatile v8;
   v8 = ecl_make_cfun((cl_objectfn_fixed)LC122__lambda440,ECL_NIL,Cblock,2);
   T0 = v8;
  }
  si_put_sysprop(VV[172], VV[7], T0);
  {
   cl_object v8package;
   v8package = cl_symbol_package(VV[173]);
   if (Null(v8package)) { goto L982; }
   if (Null(si_package_locked_p(v8package))) { goto L982; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L982; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[147], ECL_SYM("PACKAGE",1311), v8package);
  }
L982:;
  {
   cl_object volatile v9;
   v9 = ecl_make_cfun((cl_objectfn_fixed)LC123__lambda444,ECL_NIL,Cblock,2);
   T0 = v9;
  }
  si_put_sysprop(VV[173], VV[7], T0);
  {
   cl_object v9package;
   v9package = cl_symbol_package(VV[174]);
   if (Null(v9package)) { goto L990; }
   if (Null(si_package_locked_p(v9package))) { goto L990; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L990; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[148], ECL_SYM("PACKAGE",1311), v9package);
  }
L990:;
  {
   cl_object volatile v10;
   v10 = ecl_make_cfun((cl_objectfn_fixed)LC124__lambda448,ECL_NIL,Cblock,2);
   T0 = v10;
  }
  si_put_sysprop(VV[174], VV[7], T0);
  {
   cl_object v10package;
   v10package = cl_symbol_package(VV[175]);
   if (Null(v10package)) { goto L998; }
   if (Null(si_package_locked_p(v10package))) { goto L998; }
   if (!(ecl_symbol_value(ECL_SYM("*IGNORE-PACKAGE-LOCKS*",1119))==ECL_NIL)) { goto L998; }
   si_signal_simple_error(6, ECL_SYM("PACKAGE-ERROR",620), VVtemp[4], VVtemp[5], VVtemp[149], ECL_SYM("PACKAGE",1311), v10package);
  }
L998:;
  {
   cl_object volatile v11;
   v11 = ecl_make_cfun((cl_objectfn_fixed)LC125__lambda452,ECL_NIL,Cblock,2);
   T0 = v11;
  }
  si_put_sysprop(VV[175], VV[7], T0);
 }
}
