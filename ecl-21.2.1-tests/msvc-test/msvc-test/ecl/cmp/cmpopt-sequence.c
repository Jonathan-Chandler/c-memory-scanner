/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;CMPOPT-SEQUENCE.LSP                           */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/cmp/cmpopt-sequence.eclh"
/*      function definition for CONSTANT-FUNCTION-EXPRESSION          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1constant_function_expression(cl_object v1form)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_CONSP(v1form))) { goto L2; }
  {
   cl_object v2;
   v2 = ecl_car(v1form);
   if (!((v2)==(ECL_SYM("QUOTE",681)))) { goto L9; }
   value0 = VV[0];
   goto L7;
L9:;
   value0 = ECL_NIL;
   goto L7;
L7:;
   if ((value0)!=ECL_NIL) { goto L6; }
   if (!((v2)==(ECL_SYM("FUNCTION",398)))) { goto L13; }
   value0 = VV[1];
   goto L11;
L13:;
   value0 = ECL_NIL;
   goto L11;
L11:;
   if ((value0)!=ECL_NIL) { goto L6; }
   if (!((v2)==(ECL_SYM("LAMBDA",454)))) { goto L16; }
   value0 = VV[2];
   cl_env_copy->nvalues = 1;
   return value0;
L16:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L6:;
   cl_env_copy->nvalues = 1;
   return value0;
  }
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for SEQ-OPT-TEST-FUNCTION                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L5seq_opt_test_function(cl_object v1test_flag, cl_object v2test)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v2test,env0);                /*  TEST            */
  if (!(v1test_flag==ECL_NIL)) { goto L1; }
  T0 = L5seq_opt_test_function(ECL_SYM("TEST",1343), VV[4]);
  cl_env_copy->nvalues = 2;
  cl_env_copy->values[1] = ECL_NIL;
  cl_env_copy->values[0] = T0;
  return cl_env_copy->values[0];
L1:;
  if (!((v1test_flag)==(ECL_SYM("TEST-NOT",1344)))) { goto L3; }
  {
   cl_object v4;                                  /*  INIT            */
   volatile cl_object env1 = env0;
   value0 = L5seq_opt_test_function(ECL_SYM("TEST",1343), ECL_CONS_CAR(CLV0));
   {
    const int v5 = cl_env_copy->nvalues;
    CLV1 = env1 = CONS(value0,env1);              /*  FUNCTION        */
    cl_object v6;
    v6 = (v5<=1)? ECL_NIL : cl_env_copy->values[1];
    v4 = v6;
   }
   {
    cl_object v5;
    v5 = ecl_make_cclosure_va((cl_objectfn)LC2__lambda1,env1,Cblock,2);
    T0 = v5;
   }
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v4;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
L3:;
  if (Null(L1constant_function_expression(ECL_CONS_CAR(CLV0)))) { goto L7; }
  {
   cl_object v3;
   v3 = ecl_make_cclosure_va((cl_objectfn)LC3__lambda2,env0,Cblock,2);
   T0 = v3;
  }
  cl_env_copy->nvalues = 2;
  cl_env_copy->values[1] = ECL_NIL;
  cl_env_copy->values[0] = T0;
  return cl_env_copy->values[0];
L7:;
  {
   cl_object env1 = env0;
   T0 = cl_gensym(1, _ecl_static_0);
   CLV1 = env1 = CONS(T0,env1);                   /*  TEST-FUNCTION   */
   {
    cl_object v3;
    v3 = ecl_make_cclosure_va((cl_objectfn)LC4__lambda3,env1,Cblock,2);
    T0 = v3;
   }
   T1 = cl_list(2, ECL_CONS_CAR(CLV1), ECL_CONS_CAR(CLV0));
   T2 = ecl_list1(T1);
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = T2;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      closure LAMBDA1                                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC2__lambda1(cl_narg narg, cl_object v1v1, cl_object v2v2, ...)
{
 cl_object T0;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV1 = env0;                                     /*  FUNCTION        */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=2)) FEwrong_num_arguments_anonym();
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,ECL_CONS_CAR(CLV1))(2, v1v1, v2v2);
  value0 = cl_list(2, ECL_SYM("NOT",586), T0);
  return value0;
 }
 }
}
/*      closure LAMBDA2                                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC3__lambda2(cl_narg narg, cl_object v1v1, cl_object v2v2, ...)
{
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV0 = env0;                                     /*  TEST            */
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=2)) FEwrong_num_arguments_anonym();
 {
TTL:
  value0 = cl_list(4, ECL_SYM("FUNCALL",396), ECL_CONS_CAR(CLV0), v1v1, v2v2);
  return value0;
 }
 }
}
/*      closure LAMBDA3                                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC4__lambda3(cl_narg narg, cl_object v1v1, cl_object v2v2, ...)
{
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV1 = env0;                                     /*  TEST-FUNCTION   */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=2)) FEwrong_num_arguments_anonym();
 {
TTL:
  value0 = cl_list(4, ECL_SYM("FUNCALL",396), ECL_CONS_CAR(CLV1), v1v1, v2v2);
  return value0;
 }
 }
}
/*      function definition for SEQ-OPT-KEY-FUNCTION                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L8seq_opt_key_function(cl_object v1key)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v1key,env0);                 /*  KEY             */
  if (!(ECL_CONS_CAR(CLV0)==ECL_NIL)) { goto L1; }
  T0 = (ECL_SYM("IDENTITY",428)->symbol.gfdef);
  cl_env_copy->nvalues = 2;
  cl_env_copy->values[1] = ECL_NIL;
  cl_env_copy->values[0] = T0;
  return cl_env_copy->values[0];
L1:;
  if (Null(L1constant_function_expression(ECL_CONS_CAR(CLV0)))) { goto L4; }
  {
   cl_object v2;
   v2 = ecl_make_cclosure_va((cl_objectfn)LC6__lambda4,env0,Cblock,1);
   T0 = v2;
  }
  cl_env_copy->nvalues = 2;
  cl_env_copy->values[1] = ECL_NIL;
  cl_env_copy->values[0] = T0;
  return cl_env_copy->values[0];
L4:;
  {
   cl_object env1 = env0;
   T0 = cl_gensym(1, _ecl_static_1);
   CLV1 = env1 = CONS(T0,env1);                   /*  KEY-FUNCTION    */
   {
    cl_object v2;
    v2 = ecl_make_cclosure_va((cl_objectfn)LC7__lambda5,env1,Cblock,1);
    T0 = v2;
   }
   T1 = cl_list(3, ECL_SYM("OR",616), ECL_CONS_CAR(CLV0), VV[6]);
   T2 = cl_list(2, ECL_CONS_CAR(CLV1), T1);
   T3 = ecl_list1(T2);
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = T3;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      closure LAMBDA4                                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC6__lambda4(cl_narg narg, cl_object v1elt, ...)
{
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV0 = env0;                                     /*  KEY             */
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  value0 = cl_list(3, ECL_SYM("FUNCALL",396), ECL_CONS_CAR(CLV0), v1elt);
  return value0;
 }
 }
}
/*      closure LAMBDA5                                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC7__lambda5(cl_narg narg, cl_object v1elt, ...)
{
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV1 = env0;                                     /*  KEY-FUNCTION    */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  value0 = cl_list(3, ECL_SYM("FUNCALL",396), ECL_CONS_CAR(CLV1), v1elt);
  return value0;
 }
 }
}
/*      function definition for SEQ-OPT-PARSE-ARGS                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L9seq_opt_parse_args(cl_narg narg, cl_object v1function, cl_object v2args, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 {
  cl_object v3start_end;
  ecl_va_list args; ecl_va_start(args,v2args,narg,2);
  {
   cl_object keyvars[2];
   cl_parse_key(args,1,L9seq_opt_parse_argskeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   if (Null(keyvars[1])) {
    v3start_end = ECL_T;
   } else {
    v3start_end = keyvars[0];
   }
  }
  {
   cl_object v4key_flag;
   v4key_flag = ECL_NIL;
   {
    cl_object v5key;
    v5key = ECL_NIL;
    {
     cl_object v6test;
     v6test = VV[8];
     {
      cl_object v7test_flag;
      v7test_flag = ECL_NIL;
      {
       cl_object v8start;
       v8start = ecl_make_fixnum(0);
       {
        cl_object v9end;
        v9end = ECL_NIL;
        {
         cl_object v10keyword;
         v10keyword = ECL_NIL;
L9:;
         if ((v2args)!=ECL_NIL) { goto L11; }
         goto L10;
L11:;
         if (ECL_ATOM(v2args)) { goto L16; }
         T0 = ecl_cdr(v2args);
         if (T0==ECL_NIL) { goto L16; }
         if ((v10keyword)==(ECL_SYM("ALLOW-OTHER-KEYS",1219))) { goto L16; }
         {
          cl_object v11;
          v11 = v2args;
          {
          cl_object v12;
          v12 = v11;
          if (ecl_unlikely(!ECL_LISTP(v12))) FEtype_error_list(v12);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          }
          if (Null(v11)) { goto L25; }
          {
          cl_object v12;
          v12 = ECL_CONS_CDR(v11);
          v2args = v12;
          v11 = ECL_CONS_CAR(v11);
          }
L25:;
          v10keyword = v11;
         }
         if ((cl_keywordp(v10keyword))!=ECL_NIL) { goto L14; }
         goto L15;
L16:;
L15:;
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 1;
         return value0;
L14:;
         if (!((v10keyword)==(ECL_SYM("KEY",1288)))) { goto L31; }
         if ((v4key_flag)!=ECL_NIL) { goto L13; }
         {
          cl_object v11;
          v11 = v2args;
          {
          cl_object v12;
          v12 = v11;
          if (ecl_unlikely(!ECL_LISTP(v12))) FEtype_error_list(v12);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          }
          if (Null(v11)) { goto L40; }
          {
          cl_object v12;
          v12 = ECL_CONS_CDR(v11);
          v2args = v12;
          v11 = ECL_CONS_CAR(v11);
          }
L40:;
          v5key = v11;
         }
         v4key_flag = ECL_T;
         goto L13;
L31:;
         if ((v10keyword)==(ECL_SYM("TEST",1343))) { goto L49; }
         if (!((v10keyword)==(ECL_SYM("TEST-NOT",1344)))) { goto L47; }
         goto L48;
L49:;
L48:;
         if (!(v7test_flag==ECL_NIL)) { goto L51; }
         {
          cl_object v11;
          v11 = v2args;
          {
          cl_object v12;
          v12 = v11;
          if (ecl_unlikely(!ECL_LISTP(v12))) FEtype_error_list(v12);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          }
          if (Null(v11)) { goto L59; }
          {
          cl_object v12;
          v12 = ECL_CONS_CDR(v11);
          v2args = v12;
          v11 = ECL_CONS_CAR(v11);
          }
L59:;
          v6test = v11;
         }
         v7test_flag = v10keyword;
         goto L13;
L51:;
         if ((v7test_flag)==(v10keyword)) { goto L13; }
         ecl_function_dispatch(cl_env_copy,VV[52])(2, VV[9], v1function) /*  CMPWARN */;
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 1;
         return value0;
L47:;
         if (!((v10keyword)==(ECL_SYM("START",1337)))) { goto L68; }
         if ((v3start_end)!=ECL_NIL) { goto L70; }
         ecl_function_dispatch(cl_env_copy,VV[52])(3, VV[10], v10keyword, v1function) /*  CMPWARN */;
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 1;
         return value0;
L70:;
         {
          cl_object v11;
          v11 = v2args;
          {
          cl_object v12;
          v12 = v11;
          if (ecl_unlikely(!ECL_LISTP(v12))) FEtype_error_list(v12);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          }
          if (Null(v11)) { goto L78; }
          {
          cl_object v12;
          v12 = ECL_CONS_CDR(v11);
          v2args = v12;
          v11 = ECL_CONS_CAR(v11);
          }
L78:;
          v8start = v11;
         }
         goto L13;
L68:;
         if (!((v10keyword)==(ECL_SYM("END",1247)))) { goto L84; }
         if ((v3start_end)!=ECL_NIL) { goto L86; }
         ecl_function_dispatch(cl_env_copy,VV[52])(3, VV[10], v10keyword, v1function) /*  CMPWARN */;
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 1;
         return value0;
L86:;
         {
          cl_object v11;
          v11 = v2args;
          {
          cl_object v12;
          v12 = v11;
          if (ecl_unlikely(!ECL_LISTP(v12))) FEtype_error_list(v12);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          }
          if (Null(v11)) { goto L94; }
          {
          cl_object v12;
          v12 = ECL_CONS_CDR(v11);
          v2args = v12;
          v11 = ECL_CONS_CAR(v11);
          }
L94:;
          v9end = v11;
         }
         goto L13;
L84:;
         if (!((v10keyword)==(VV[11]))) { goto L100; }
         {
          cl_object v11;
          v11 = v2args;
          {
          cl_object v12;
          v12 = v11;
          if (ecl_unlikely(!ECL_LISTP(v12))) FEtype_error_list(v12);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          }
          if (Null(v11)) { goto L108; }
          {
          cl_object v12;
          v12 = ECL_CONS_CDR(v11);
          v2args = v12;
          v11 = ECL_CONS_CAR(v11);
          }
L108:;
          T0 = v11;
         }
         if (T0==ECL_NIL) { goto L13; }
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 1;
         return value0;
L100:;
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 1;
         return value0;
L13:;
         goto L9;
L10:;
         {
          cl_object v12;                          /*  KEY-FUNCTION    */
          cl_object v13;                          /*  KEY-INIT        */
          value0 = L8seq_opt_key_function(v5key);
          {
          const int v14 = cl_env_copy->nvalues;
          v12 = value0;
          cl_object v15;
          v15 = (v14<=1)? ECL_NIL : cl_env_copy->values[1];
          v13 = v15;
          }
          {
          cl_object v15;                          /*  TEST-FUNCTION   */
          cl_object v16;                          /*  TEST-INIT       */
          value0 = L5seq_opt_test_function(v7test_flag, v6test);
          {
          const int v17 = cl_env_copy->nvalues;
          v15 = value0;
          cl_object v18;
          v18 = (v17<=1)? ECL_NIL : cl_env_copy->values[1];
          v16 = v18;
          }
          T0 = ecl_nconc(v13,v16);
          cl_env_copy->nvalues = 8;
          cl_env_copy->values[7] = v9end;
          cl_env_copy->values[6] = v8start;
          cl_env_copy->values[5] = v6test;
          cl_env_copy->values[4] = v7test_flag;
          cl_env_copy->values[3] = v4key_flag;
          cl_env_copy->values[2] = T0;
          cl_env_copy->values[1] = v15;
          cl_env_copy->values[0] = v12;
          return cl_env_copy->values[0];
          }
         }
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 1;
         return value0;
        }
       }
      }
     }
    }
   }
  }
 }
}
/*      local function DO-IN-SEQ                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC10do_in_seq(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   cl_object v5;
   cl_object v6_elt;
   cl_object v7sequence;
   cl_object v8;
   cl_object v9start;
   cl_object v10;
   cl_object v11end;
   cl_object v12;
   cl_object v13output;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[54])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v14;
    v14 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4 = v14;
   }
   v5 = v4;
   if (!(v5==ECL_NIL)) { goto L10; }
   ecl_function_dispatch(cl_env_copy,VV[54])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L10:;
   {
    cl_object v14;
    v14 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v6_elt = v14;
   }
   if (!(v5==ECL_NIL)) { goto L16; }
   ecl_function_dispatch(cl_env_copy,VV[54])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L16:;
   {
    cl_object v14;
    v14 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v7sequence = v14;
   }
   v8 = ecl_function_dispatch(cl_env_copy,VV[55])(2, v5, ECL_SYM("START",1337)) /*  SEARCH-KEYWORD */;
   if (!((v8)==(ECL_SYM("MISSING-KEYWORD",2015)))) { goto L23; }
   v9start = ecl_make_fixnum(0);
   goto L22;
L23:;
   v9start = v8;
L22:;
   v10 = ecl_function_dispatch(cl_env_copy,VV[55])(2, v5, ECL_SYM("END",1247)) /*  SEARCH-KEYWORD */;
   if (!((v10)==(ECL_SYM("MISSING-KEYWORD",2015)))) { goto L27; }
   v11end = ECL_NIL;
   goto L26;
L27:;
   v11end = v10;
L26:;
   v12 = ecl_function_dispatch(cl_env_copy,VV[55])(2, v5, ECL_SYM("OUTPUT",1309)) /*  SEARCH-KEYWORD */;
   if (!((v12)==(ECL_SYM("MISSING-KEYWORD",2015)))) { goto L31; }
   v13output = ECL_NIL;
   goto L30;
L31:;
   v13output = v12;
L30:;
   ecl_function_dispatch(cl_env_copy,VV[56])(2, v5, VV[13]) /*  CHECK-KEYWORD */;
   {
    cl_object v14_start;
    cl_object v15_iterator;
    cl_object v16_counter;
    cl_object v17_sequence;
    v14_start = cl_gensym(1, _ecl_static_2);
    v15_iterator = cl_gensym(1, _ecl_static_3);
    v16_counter = cl_gensym(1, _ecl_static_4);
    v17_sequence = cl_gensym(1, _ecl_static_5);
    {
     cl_object v18counter;
     cl_object v19test;
     if (Null(v11end)) { goto L39; }
     T0 = cl_list(3, ECL_SYM("OR",616), v11end, ECL_SYM("MOST-POSITIVE-FIXNUM",569));
     v18counter = cl_list(3, ECL_SYM("-",19), T0, v14_start);
     goto L38;
L39:;
     v18counter = ecl_make_fixnum(0);
L38:;
     if (Null(v11end)) { goto L42; }
     T0 = cl_list(2, ECL_SYM("PLUSP",644), v16_counter);
     v19test = cl_list(3, ECL_SYM("AND",89), v15_iterator, T0);
     goto L41;
L42:;
     v19test = v15_iterator;
L41:;
     T0 = cl_list(2, v17_sequence, v7sequence);
     T1 = cl_list(2, v14_start, v9start);
     T2 = cl_list(3, VV[14], v17_sequence, v14_start);
     T3 = cl_list(2, v15_iterator, T2);
     T4 = cl_list(2, v16_counter, v18counter);
     T5 = cl_list(4, T0, T1, T3, T4);
     T6 = cl_list(4, VV[15], v17_sequence, v14_start, v16_counter);
     T7 = cl_list(2, ECL_SYM("IGNORABLE",429), v16_counter);
     T8 = cl_list(2, ECL_SYM("FIXNUM",374), v16_counter);
     T9 = cl_list(4, ECL_SYM("DECLARE",276), T6, T7, T8);
     T10 = cl_list(2, ECL_SYM("RETURN",726), v13output);
     T11 = cl_list(3, ECL_SYM("UNLESS",885), v19test, T10);
     T12 = cl_list(3, VV[16], v17_sequence, v15_iterator);
     T13 = cl_list(2, v6_elt, T12);
     T14 = ecl_list1(T13);
     T15 = cl_listX(3, ECL_SYM("LET",479), T14, v3);
     T16 = cl_list(3, VV[17], v17_sequence, v15_iterator);
     T17 = cl_list(3, ECL_SYM("SETF",752), v15_iterator, T16);
     if (Null(v11end)) { goto L45; }
     T18 = cl_list(2, ECL_SYM("DECF",273), v16_counter);
     goto L44;
L45:;
     T18 = ECL_NIL;
L44:;
     T19 = cl_list(5, ECL_SYM("LOOP",514), T11, T15, T17, T18);
     value0 = cl_list(4, ECL_SYM("LET*",480), T5, T9, T19);
     return value0;
    }
   }
  }
 }
}
/*      local function DO-IN-LIST                                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC11do_in_list(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4;
   cl_object v5;
   cl_object v6_elt;
   cl_object v7_sublist;
   cl_object v8list;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[54])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v9;
    v9 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4 = v9;
   }
   v5 = v4;
   if (!(v5==ECL_NIL)) { goto L10; }
   ecl_function_dispatch(cl_env_copy,VV[54])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L10:;
   {
    cl_object v9;
    v9 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v6_elt = v9;
   }
   if (!(v5==ECL_NIL)) { goto L16; }
   ecl_function_dispatch(cl_env_copy,VV[54])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L16:;
   {
    cl_object v9;
    v9 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v7_sublist = v9;
   }
   if (!(v5==ECL_NIL)) { goto L22; }
   ecl_function_dispatch(cl_env_copy,VV[54])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L22:;
   {
    cl_object v9;
    v9 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v8list = v9;
   }
   T0 = cl_list(2, VV[19], v7_sublist);
   T1 = cl_list(3, v7_sublist, v8list, T0);
   T2 = ecl_list1(T1);
   T3 = cl_list(2, ECL_SYM("NULL",607), v7_sublist);
   T4 = CONS(T3,v5);
   T5 = cl_list(3, VV[20], v7_sublist, ECL_SYM("CONS",253));
   T6 = cl_list(2, v7_sublist, T5);
   T7 = cl_list(2, VV[21], v7_sublist);
   T8 = cl_list(2, v6_elt, T7);
   T9 = cl_list(2, T6, T8);
   T10 = cl_listX(3, ECL_SYM("LET*",480), T9, v3);
   value0 = cl_list(4, ECL_SYM("DO*",310), T2, T4, T10);
   return value0;
  }
 }
}
/*      function definition for EXPAND-MEMBER                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L12expand_member(cl_narg narg, cl_object v1value, cl_object v2list, ...)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 {
  cl_object v3sequence_args;
  ecl_va_list args; ecl_va_start(args,v2list,narg,2);
  v3sequence_args = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   cl_object v5;                                  /*  KEY-FUNCTION    */
   cl_object v6;                                  /*  TEST-FUNCTION   */
   cl_object v7;                                  /*  INIT            */
   cl_object v8;                                  /*  KEY-FLAG        */
   cl_object v9;                                  /*  TEST-FLAG       */
   cl_object v10;                                 /*  TEST            */
   value0 = L9seq_opt_parse_args(4, ECL_SYM("MEMBER",554), v3sequence_args, VV[23], ECL_NIL);
   {
    const int v11 = cl_env_copy->nvalues;
    v5 = value0;
    cl_object v12;
    v12 = (v11<=1)? ECL_NIL : cl_env_copy->values[1];
    v6 = v12;
    v12 = (v11<=2)? ECL_NIL : cl_env_copy->values[2];
    v7 = v12;
    v12 = (v11<=3)? ECL_NIL : cl_env_copy->values[3];
    v8 = v12;
    v12 = (v11<=4)? ECL_NIL : cl_env_copy->values[4];
    v9 = v12;
    v12 = (v11<=5)? ECL_NIL : cl_env_copy->values[5];
    v10 = v12;
   }
   if (!(v5==ECL_NIL)) { goto L2; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L2:;
   if ((v8)!=ECL_NIL) { goto L4; }
   if (v10==ECL_NIL) { goto L9; }
   if (Null(L1constant_function_expression(v10))) { goto L6; }
   goto L8;
L9:;
L8:;
   if (Null(ecl_function_dispatch(cl_env_copy,VV[59])(1, v2list) /*  CONSTANT-EXPRESSION-P */)) { goto L6; }
   v2list = ecl_function_dispatch(cl_env_copy,VV[60])(1, v2list) /*  CMP-EVAL */;
   {
    cl_fixnum v11;
    v11 = ecl_length(v2list);
    if (!((v11)<=(4))) { goto L11; }
   }
   {
    cl_object v11_value;
    v11_value = cl_gensym(1, _ecl_static_6);
    T0 = cl_list(2, v11_value, v1value);
    T1 = ecl_list1(T0);
    {
     cl_object v12l;
     v12l = v2list;
     {
      cl_object v13elt;
      v13elt = ECL_NIL;
      {
       cl_object v14;
       cl_object v15;
       v14 = ecl_list1(ECL_NIL);
       v15 = v14;
L20:;
       if (!(ECL_ATOM(v12l))) { goto L22; }
       goto L21;
L22:;
       v13elt = ecl_car(v12l);
       {
        cl_object v16;
        v16 = v15;
        if (ecl_unlikely(ECL_ATOM(v16))) FEtype_error_cons(v16);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        T3 = v16;
       }
       T5 = cl_list(2, ECL_SYM("QUOTE",681), v13elt);
       T4 = ecl_function_dispatch(cl_env_copy,v6)(2, v11_value, T5);
       T5 = cl_list(2, ECL_SYM("QUOTE",681), v12l);
       T6 = cl_list(3, ECL_SYM("AND",89), T4, T5);
       v15 = ecl_list1(T6);
       (ECL_CONS_CDR(T3)=v15,T3);
       v12l = _ecl_cdr(v12l);
       goto L20;
L21:;
       T2 = ecl_cdr(v14);
       goto L15;
      }
     }
    }
L15:;
    T3 = CONS(ECL_SYM("OR",616),T2);
    value0 = cl_list(3, ECL_SYM("LET",479), T1, T3);
    return value0;
   }
L11:;
   if (ECL_CONSP(v2list)) { goto L37; }
   if (Null((cl_env_copy->function=ecl_fdefinition(ECL_SYM("SYMBOL",842)))->cfun.entry(1, v2list) /*  SYMBOL */)) { goto L6; }
   goto L36;
L37:;
L36:;
   v2list = cl_list(2, ECL_SYM("QUOTE",681), v2list);
L6:;
   if (v9==ECL_NIL) { goto L41; }
   if (!((v9)==(ECL_SYM("TEST",1343)))) { goto L4; }
   goto L40;
L41:;
L40:;
   if (!(ecl_equal(v10,VV[24]))) { goto L48; }
   goto L45;
   goto L46;
L48:;
   goto L46;
L46:;
   if (!(ecl_equal(v10,VV[26]))) { goto L43; }
   goto L44;
L45:;
L44:;
   T0 = cl_list(2, v1value, v2list);
   value0 = cl_listX(3, ECL_SYM("C-INLINE",2063), T0, VV[28]);
   return value0;
L43:;
   if (!(ecl_equal(v10,VV[8]))) { goto L56; }
   goto L53;
   goto L54;
L56:;
   goto L54;
L54:;
   if (!(ecl_equal(v10,VV[4]))) { goto L51; }
   goto L52;
L53:;
L52:;
   T0 = cl_list(2, v1value, v2list);
   value0 = cl_listX(3, ECL_SYM("C-INLINE",2063), T0, VV[31]);
   return value0;
L51:;
   if (!(ecl_equal(v10,VV[32]))) { goto L63; }
   goto L60;
   goto L61;
L63:;
   goto L61;
L61:;
   if (!(ecl_equal(v10,VV[34]))) { goto L4; }
   goto L59;
L60:;
L59:;
   T0 = cl_list(2, v1value, v2list);
   value0 = cl_listX(3, ECL_SYM("C-INLINE",2063), T0, VV[36]);
   return value0;
L4:;
   {
    cl_object v11_value;
    cl_object v12_list;
    cl_object v13_sublist;
    cl_object v14_elt;
    v11_value = cl_gensym(1, _ecl_static_6);
    v12_list = cl_gensym(1, _ecl_static_7);
    v13_sublist = cl_gensym(1, _ecl_static_8);
    v14_elt = cl_gensym(1, _ecl_static_9);
    T0 = cl_list(2, v11_value, v1value);
    T1 = cl_list(2, v12_list, v2list);
    T2 = cl_listX(3, T0, T1, v7);
    T3 = cl_list(3, v14_elt, v13_sublist, v12_list);
    T5 = ecl_function_dispatch(cl_env_copy,v5)(1, v14_elt);
    T4 = ecl_function_dispatch(cl_env_copy,v6)(2, v11_value, T5);
    T5 = cl_list(2, ECL_SYM("RETURN",726), v13_sublist);
    T6 = cl_list(3, ECL_SYM("WHEN",907), T4, T5);
    T7 = cl_list(3, VV[22], T3, T6);
    value0 = cl_list(3, ECL_SYM("LET",479), T2, T7);
    return value0;
   }
  }
 }
}
/*      local function LAMBDA68                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC13__lambda68(cl_object v1, cl_object v2)
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
   cl_object v4value;
   cl_object v5list;
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
   ecl_function_dispatch(cl_env_copy,VV[54])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L6:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4value = v6;
   }
   if (!(v3==ECL_NIL)) { goto L12; }
   ecl_function_dispatch(cl_env_copy,VV[54])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L12:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5list = v6;
   }
   if (Null(ecl_function_dispatch(cl_env_copy,VV[61])(0) /*  POLICY-INLINE-SEQUENCE-FUNCTIONS */)) { goto L17; }
   T0 = ecl_fdefinition(VV[37]);
   T1 = ecl_cdr(v1);
   value0 = cl_apply(2, T0, T1);
   if ((value0)!=ECL_NIL) { goto L20; }
   value0 = v1;
   cl_env_copy->nvalues = 1;
   return value0;
L20:;
   cl_env_copy->nvalues = 1;
   return value0;
L17:;
   value0 = v1;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for EXPAND-ASSOC                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L14expand_assoc(cl_narg narg, cl_object v1value, cl_object v2list, ...)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 {
  cl_object v3sequence_args;
  ecl_va_list args; ecl_va_start(args,v2list,narg,2);
  v3sequence_args = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   cl_object v5;                                  /*  KEY-FUNCTION    */
   cl_object v6;                                  /*  TEST-FUNCTION   */
   cl_object v7;                                  /*  INIT            */
   cl_object v8;                                  /*  KEY-FLAG        */
   cl_object v9;                                  /*  TEST-FLAG       */
   cl_object v10;                                 /*  TEST            */
   value0 = L9seq_opt_parse_args(4, ECL_SYM("ASSOC",116), v3sequence_args, VV[23], ECL_NIL);
   {
    const int v11 = cl_env_copy->nvalues;
    v5 = value0;
    cl_object v12;
    v12 = (v11<=1)? ECL_NIL : cl_env_copy->values[1];
    v6 = v12;
    v12 = (v11<=2)? ECL_NIL : cl_env_copy->values[2];
    v7 = v12;
    v12 = (v11<=3)? ECL_NIL : cl_env_copy->values[3];
    v8 = v12;
    v12 = (v11<=4)? ECL_NIL : cl_env_copy->values[4];
    v9 = v12;
    v12 = (v11<=5)? ECL_NIL : cl_env_copy->values[5];
    v10 = v12;
   }
   if ((v8)!=ECL_NIL) { goto L2; }
   if (v9==ECL_NIL) { goto L5; }
   if (!((v9)==(ECL_SYM("TEST",1343)))) { goto L2; }
   goto L4;
L5:;
L4:;
   if (!(ecl_equal(v10,VV[24]))) { goto L12; }
   goto L9;
   goto L10;
L12:;
   goto L10;
L10:;
   if (!(ecl_equal(v10,VV[26]))) { goto L7; }
   goto L8;
L9:;
L8:;
   T0 = cl_list(2, v1value, v2list);
   value0 = cl_listX(3, ECL_SYM("C-INLINE",2063), T0, VV[38]);
   return value0;
L7:;
   if (!(ecl_equal(v10,VV[8]))) { goto L20; }
   goto L17;
   goto L18;
L20:;
   goto L18;
L18:;
   if (!(ecl_equal(v10,VV[4]))) { goto L15; }
   goto L16;
L17:;
L16:;
   T0 = cl_list(2, v1value, v2list);
   value0 = cl_listX(3, ECL_SYM("C-INLINE",2063), T0, VV[39]);
   return value0;
L15:;
   if (!(ecl_equal(v10,VV[32]))) { goto L28; }
   goto L25;
   goto L26;
L28:;
   goto L26;
L26:;
   if (!(ecl_equal(v10,VV[34]))) { goto L23; }
   goto L24;
L25:;
L24:;
   T0 = cl_list(2, v1value, v2list);
   value0 = cl_listX(3, ECL_SYM("C-INLINE",2063), T0, VV[40]);
   return value0;
L23:;
   if (!(ecl_equal(v10,VV[41]))) { goto L35; }
   goto L32;
   goto L33;
L35:;
   goto L33;
L33:;
   if (!(ecl_equal(v10,VV[43]))) { goto L2; }
   goto L31;
L32:;
L31:;
   T0 = cl_list(2, v1value, v2list);
   value0 = cl_listX(3, ECL_SYM("C-INLINE",2063), T0, VV[45]);
   return value0;
L2:;
   if (Null(v6)) { goto L38; }
   {
    cl_object v11_value;
    cl_object v12_list;
    cl_object v13_sublist;
    cl_object v14_elt;
    cl_object v15_car;
    v11_value = cl_gensym(1, _ecl_static_6);
    v12_list = cl_gensym(1, _ecl_static_7);
    v13_sublist = cl_gensym(1, _ecl_static_8);
    v14_elt = cl_gensym(1, _ecl_static_9);
    v15_car = cl_gensym(1, _ecl_static_10);
    T0 = cl_list(2, v11_value, v1value);
    T1 = cl_list(2, v12_list, v2list);
    T2 = cl_listX(3, T0, T1, v7);
    T3 = cl_list(3, v14_elt, v13_sublist, v12_list);
    T4 = cl_list(3, VV[20], v14_elt, ECL_SYM("CONS",253));
    T5 = cl_list(2, VV[21], T4);
    T6 = cl_list(2, v15_car, T5);
    T7 = ecl_list1(T6);
    T9 = ecl_function_dispatch(cl_env_copy,v5)(1, v15_car);
    T8 = ecl_function_dispatch(cl_env_copy,v6)(2, v11_value, T9);
    T9 = cl_list(2, ECL_SYM("RETURN",726), v14_elt);
    T10 = cl_list(3, ECL_SYM("WHEN",907), T8, T9);
    T11 = cl_list(3, ECL_SYM("LET",479), T7, T10);
    T12 = cl_list(3, ECL_SYM("WHEN",907), v14_elt, T11);
    T13 = cl_list(3, VV[22], T3, T12);
    value0 = cl_list(3, ECL_SYM("LET",479), T2, T13);
    return value0;
   }
L38:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function LAMBDA78                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC15__lambda78(cl_object v1, cl_object v2)
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
   cl_object v4value;
   cl_object v5list;
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
   ecl_function_dispatch(cl_env_copy,VV[54])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L6:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4value = v6;
   }
   if (!(v3==ECL_NIL)) { goto L12; }
   ecl_function_dispatch(cl_env_copy,VV[54])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L12:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5list = v6;
   }
   if (Null(ecl_function_dispatch(cl_env_copy,VV[61])(0) /*  POLICY-INLINE-SEQUENCE-FUNCTIONS */)) { goto L17; }
   T0 = ecl_fdefinition(VV[46]);
   T1 = ecl_cdr(v1);
   value0 = cl_apply(2, T0, T1);
   if ((value0)!=ECL_NIL) { goto L20; }
   value0 = v1;
   cl_env_copy->nvalues = 1;
   return value0;
L20:;
   cl_env_copy->nvalues = 1;
   return value0;
L17:;
   value0 = v1;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for EXPAND-FIND                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L16expand_find(cl_narg narg, cl_object v1value, cl_object v2sequence, ...)
{
 cl_object T0, T1, T2, T3, T4, T5, T6;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 {
  cl_object v3sequence_args;
  ecl_va_list args; ecl_va_start(args,v2sequence,narg,2);
  v3sequence_args = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   cl_object v5;                                  /*  KEY-FUNCTION    */
   cl_object v6;                                  /*  TEST-FUNCTION   */
   cl_object v7;                                  /*  INIT            */
   cl_object v8;                                  /*  START           */
   cl_object v9;                                  /*  END             */
   value0 = L9seq_opt_parse_args(2, ECL_SYM("FIND",365), v3sequence_args);
   {
    const int v10 = cl_env_copy->nvalues;
    v5 = value0;
    cl_object v11;
    v11 = (v10<=1)? ECL_NIL : cl_env_copy->values[1];
    v6 = v11;
    v11 = (v10<=2)? ECL_NIL : cl_env_copy->values[2];
    v7 = v11;
    v11 = (v10<=6)? ECL_NIL : cl_env_copy->values[6];
    v8 = v11;
    v11 = (v10<=7)? ECL_NIL : cl_env_copy->values[7];
    v9 = v11;
   }
   if (Null(v6)) { goto L2; }
   {
    cl_object v10_value;
    cl_object v11_elt;
    v10_value = cl_gensym(1, _ecl_static_6);
    v11_elt = cl_gensym(1, _ecl_static_9);
    T0 = cl_list(2, v10_value, v1value);
    T1 = CONS(T0,v7);
    T2 = cl_list(6, v11_elt, v2sequence, ECL_SYM("START",1337), v8, ECL_SYM("END",1247), v9);
    T4 = ecl_function_dispatch(cl_env_copy,v5)(1, v11_elt);
    T3 = ecl_function_dispatch(cl_env_copy,v6)(2, v10_value, T4);
    T4 = cl_list(2, ECL_SYM("RETURN",726), v11_elt);
    T5 = cl_list(3, ECL_SYM("WHEN",907), T3, T4);
    T6 = cl_list(3, VV[18], T2, T5);
    value0 = cl_list(3, ECL_SYM("LET",479), T1, T6);
    return value0;
   }
L2:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function LAMBDA84                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC17__lambda84(cl_object v1, cl_object v2)
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
   cl_object v4value;
   cl_object v5sequence;
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
   ecl_function_dispatch(cl_env_copy,VV[54])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L6:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4value = v6;
   }
   if (!(v3==ECL_NIL)) { goto L12; }
   ecl_function_dispatch(cl_env_copy,VV[54])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L12:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5sequence = v6;
   }
   if (Null(ecl_function_dispatch(cl_env_copy,VV[61])(0) /*  POLICY-INLINE-SEQUENCE-FUNCTIONS */)) { goto L17; }
   T0 = ecl_fdefinition(VV[47]);
   T1 = ecl_cdr(v1);
   value0 = cl_apply(2, T0, T1);
   if ((value0)!=ECL_NIL) { goto L20; }
   value0 = v1;
   cl_env_copy->nvalues = 1;
   return value0;
L20:;
   cl_env_copy->nvalues = 1;
   return value0;
L17:;
   value0 = v1;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}

#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/cmp/cmpopt-sequence.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclrs5CU5b7_AdwZTr51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;CMPOPT-SEQUENCE.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclrs5CU5b7_AdwZTr51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_cmp_defun(VV[48]);                          /*  CONSTANT-FUNCTION-EXPRESSION */
  ecl_cmp_defun(VV[49]);                          /*  SEQ-OPT-TEST-FUNCTION */
  ecl_cmp_defun(VV[50]);                          /*  SEQ-OPT-KEY-FUNCTION */
  ecl_cmp_defun(VV[51]);                          /*  SEQ-OPT-PARSE-ARGS */
  ecl_cmp_defmacro(VV[53]);                       /*  DO-IN-SEQ       */
  ecl_cmp_defmacro(VV[57]);                       /*  DO-IN-LIST      */
  ecl_cmp_defun(VV[58]);                          /*  EXPAND-MEMBER   */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC13__lambda68,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("MEMBER",554), ECL_SYM("COMPILER-MACRO",240), T0);
 }
  ecl_cmp_defun(VV[62]);                          /*  EXPAND-ASSOC    */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC15__lambda78,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("ASSOC",116), ECL_SYM("COMPILER-MACRO",240), T0);
 }
  ecl_cmp_defun(VV[63]);                          /*  EXPAND-FIND     */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC17__lambda84,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("FIND",365), ECL_SYM("COMPILER-MACRO",240), T0);
 }
}
