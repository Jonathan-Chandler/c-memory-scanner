/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:LSP;PREDLIB.LSP                                   */
#include <ecl/ecl-cmp.h>
#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/lsp/predlib.eclh"
/*      function definition for CONSTANTLY-T                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1constantly_t(cl_narg narg, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  value0 = ECL_T;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for CONSTANTLY-NIL                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2constantly_nil(cl_narg narg, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for CONSTANTLY                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_constantly(cl_object v1n)
{
 cl_object env0 = ECL_NIL;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v1n,env0);                   /*  N               */
  if (!((ECL_CONS_CAR(CLV0))==(ECL_NIL))) { goto L1; }
  value0 = ecl_fdefinition(VV[1]);
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  if (!(ecl_eql(ECL_CONS_CAR(CLV0),ECL_T))) { goto L4; }
  value0 = ecl_fdefinition(VV[0]);
  cl_env_copy->nvalues = 1;
  return value0;
L4:;
  {
   cl_object v2;
   v2 = ecl_make_cclosure_va((cl_objectfn)LC3__lambda3,env0,Cblock,0);
   value0 = v2;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      closure LAMBDA3                                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC3__lambda3(cl_narg narg, ...)
{
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV0 = env0;                                     /*  N               */
 { /* ... closure scanning finished */
 {
  value0 = ECL_CONS_CAR(CLV0);
  cl_env_copy->nvalues = 1;
  return value0;
 }
 }
}
/*      function definition for SUBTYPEP-CLEAR-CACHE                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L4subtypep_clear_cache()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  si_fill_array_with_elt(ecl_symbol_value(VV[4]), ECL_NIL, ecl_make_fixnum(0), ECL_NIL);
  value0 = si_fill_array_with_elt(ecl_symbol_value(VV[5]), ECL_NIL, ecl_make_fixnum(0), ECL_NIL);
  return value0;
 }
}
/*      function definition for CREATE-TYPE-NAME                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L5create_type_name(cl_object v1name)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_memql(v1name,ecl_symbol_value(ECL_SYM("*ALIEN-DECLARATIONS*",1647))))) { goto L1; }
  value0 = cl_error(2, VV[7], v1name);
  return value0;
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for DO-DEFTYPE                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_do_deftype(cl_narg narg, cl_object v1name, cl_object v2form, cl_object v3function, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg!=3)) FEwrong_num_arguments_anonym();
 {
TTL:
  if (ECL_SYMBOLP(v1name)) { goto L1; }
  L30error_type_specifier(v1name);
L1:;
  L5create_type_name(v1name);
  si_put_sysprop(v1name, VV[9], v2form);
  if (Null(cl_functionp(v3function))) { goto L7; }
  T0 = v3function;
  goto L6;
L7:;
  T0 = cl_constantly(v3function);
L6:;
  si_put_sysprop(v1name, VV[10], T0);
  L4subtypep_clear_cache();
  value0 = v1name;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function DEFTYPE                                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC9deftype(cl_object v1, cl_object v2env)
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
   cl_object v4name;
   cl_object v5lambda_list;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[90])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4name = v6;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[90])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5lambda_list = v6;
   }
   {
    cl_object v6;
    cl_object v7;
    v6 = ecl_make_cfun((cl_objectfn_fixed)LC7verify_tree,ECL_NIL,Cblock,1);
    v7 = ecl_make_cfun((cl_objectfn_fixed)LC6set_default,ECL_NIL,Cblock,1);
    v5lambda_list = LC8maptree(v7, v5lambda_list, v6);
   }
   {
    cl_object v7;                                 /*  DECLS           */
    cl_object v8;                                 /*  BODY            */
    cl_object v9;                                 /*  DOCUMENTATION   */
    value0 = ecl_function_dispatch(cl_env_copy,VV[91])(1, v3) /*  FIND-DECLARATIONS */;
    {
     const int v10 = cl_env_copy->nvalues;
     v7 = value0;
     cl_object v11;
     v11 = (v10<=1)? ECL_NIL : cl_env_copy->values[1];
     v8 = v11;
     v11 = (v10<=2)? ECL_NIL : cl_env_copy->values[2];
     v9 = v11;
    }
    {
     cl_object v11;                               /*  WHOLE           */
     cl_object v12;                               /*  DL              */
     cl_object v13;                               /*  ARG-CHECK       */
     cl_object v14;                               /*  IGNORABLES      */
     value0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("DESTRUCTURE",1066))(2, v5lambda_list, ECL_SYM("DEFTYPE",290)) /*  DESTRUCTURE */;
     {
      const int v15 = cl_env_copy->nvalues;
      cl_object v16;
      v16 = (v15<=1)? ECL_NIL : cl_env_copy->values[1];
      v11 = v16;
      v16 = (v15<=2)? ECL_NIL : cl_env_copy->values[2];
      v12 = v16;
      v16 = (v15<=3)? ECL_NIL : cl_env_copy->values[3];
      v13 = v16;
      v16 = (v15<=4)? ECL_NIL : cl_env_copy->values[4];
      v14 = v16;
     }
     {
      cl_object v15function;
      T0 = cl_listX(3, v11, ECL_SYM("&AUX",9), v12);
      T1 = CONS(ECL_SYM("IGNORABLE",429),v14);
      T2 = cl_list(2, ECL_SYM("DECLARE",276), T1);
      T3 = ecl_append(v13,v8);
      T4 = cl_listX(3, ECL_SYM("BLOCK",139), v4name, T3);
      T5 = ecl_list1(T4);
      T6 = ecl_append(v7,T5);
      T7 = cl_listX(4, ECL_SYM("LAMBDA",454), T0, T2, T6);
      v15function = cl_list(2, ECL_SYM("FUNCTION",398), T7);
      if (!(v5lambda_list==ECL_NIL)) { goto L19; }
      if (!(ECL_CONSP(v8))) { goto L19; }
      T0 = ecl_cdr(v8);
      if (!(T0==ECL_NIL)) { goto L19; }
      {
       cl_object v16form;
       v16form = ecl_car(v8);
       if (Null(cl_constantp(2, v16form, v2env))) { goto L19; }
       T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("CONSTANT-FORM-VALUE",2118))(2, v16form, v2env) /*  CONSTANT-FORM-VALUE */;
       v15function = ecl_function_dispatch(cl_env_copy,ECL_SYM("MAYBE-QUOTE",1742))(1, T0) /*  MAYBE-QUOTE */;
      }
L19:;
      T0 = ecl_function_dispatch(cl_env_copy,VV[92])(3, v4name, ECL_SYM("TYPE",871), v9) /*  EXPAND-SET-DOCUMENTATION */;
      T1 = cl_list(2, ECL_SYM("QUOTE",681), v4name);
      T2 = cl_listX(4, ECL_SYM("DEFTYPE",290), v4name, v5lambda_list, v8);
      T3 = cl_list(2, ECL_SYM("QUOTE",681), T2);
      T4 = cl_list(4, ECL_SYM("DO-DEFTYPE",1645), T1, T3, v15function);
      T5 = ecl_list1(T4);
      T6 = ecl_append(T0,T5);
      value0 = cl_listX(3, ECL_SYM("EVAL-WHEN",342), VV[15], T6);
      return value0;
     }
    }
   }
  }
 }
}
/*      local function MAPTREE                                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC8maptree(cl_object v1function, cl_object v2tree, cl_object v3test)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_function_dispatch(cl_env_copy,v3test)(1, v2tree))) { goto L1; }
  value0 = ecl_function_dispatch(cl_env_copy,v1function)(1, v2tree);
  return value0;
L1:;
  if (!(ECL_CONSP(v2tree))) { goto L3; }
  T1 = ecl_car(v2tree);
  T0 = LC8maptree(v1function, T1, v3test);
  T2 = ecl_cdr(v2tree);
  T1 = LC8maptree(v1function, T2, v3test);
  value0 = CONS(T0,T1);
  cl_env_copy->nvalues = 1;
  return value0;
L3:;
  value0 = v2tree;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function VERIFY-TREE                                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC7verify_tree(cl_object v1elt)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_CONSP(v1elt))) { goto L2; }
  {
   cl_object v2;
   v2 = ecl_car(v1elt);
   if (!((v2)==(ECL_SYM("&KEY",12)))) { goto L9; }
   value0 = VV[13];
   goto L7;
L9:;
   value0 = ECL_NIL;
   goto L7;
L7:;
   if ((value0)!=ECL_NIL) { goto L6; }
   if (!((v2)==(ECL_SYM("&OPTIONAL",13)))) { goto L12; }
   value0 = VV[14];
   cl_env_copy->nvalues = 1;
   return value0;
L12:;
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
/*      local function SET-DEFAULT                                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC6set_default(cl_object v1list_)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_CONSP(v1list_))) { goto L1; }
  {
   cl_object v2variable;
   v2variable = ecl_car(v1list_);
   if (!(ECL_SYMBOLP(v2variable))) { goto L5; }
   if ((ecl_memql(v2variable,VV[11]))!=ECL_NIL) { goto L5; }
   T0 = cl_list(2, v2variable, VV[12]);
   goto L4;
L5:;
   T0 = v2variable;
L4:;
   T2 = ecl_cdr(v1list_);
   T1 = LC6set_default(T2);
   value0 = CONS(T0,T1);
   cl_env_copy->nvalues = 1;
   return value0;
  }
L1:;
  value0 = v1list_;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function LAMBDA79                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC10__lambda79(cl_object v1)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2;
   cl_object v3start;
   cl_object v4start_p;
   cl_object v5end;
   v2 = v1;
   if (Null(v2)) { goto L3; }
   v3start = ecl_car(v2);
   goto L2;
L3:;
   v3start = ECL_SYM("*",20);
L2:;
   if (Null(v2)) { goto L7; }
   v2 = ecl_cdr(v2);
   v4start_p = ECL_T;
   goto L5;
L7:;
   v4start_p = ECL_NIL;
   goto L5;
L5:;
   if (Null(v2)) { goto L12; }
   {
    cl_object v6;
    v6 = ecl_car(v2);
    v2 = ecl_cdr(v2);
    v5end = v6;
    goto L11;
   }
L12:;
   v5end = ECL_SYM("*",20);
L11:;
   if (Null(v2)) { goto L17; }
   ecl_function_dispatch(cl_env_copy,VV[93])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L17:;
   if (Null(v4start_p)) { goto L19; }
   {
    cl_object v6rat_start;
    cl_object v7real_start;
    cl_object v8rat_end;
    cl_object v9real_end;
    v6rat_start = ECL_NIL;
    v7real_start = ECL_NIL;
    v8rat_end = ECL_NIL;
    v9real_end = ECL_NIL;
    if (!(ECL_CONSP(v3start))) { goto L26; }
    v3start = ecl_car(v3start);
    T0 = cl_rational(v3start);
    v6rat_start = ecl_list1(T0);
    T0 = cl_float(1, v3start);
    v7real_start = ecl_list1(T0);
    goto L25;
L26:;
    if (!(ecl_numberp(v3start))) { goto L33; }
    v6rat_start = cl_rational(v3start);
    v7real_start = cl_float(1, v3start);
    goto L25;
L33:;
    v6rat_start = v3start;
    v7real_start = v3start;
L25:;
    if (!(ECL_CONSP(v5end))) { goto L42; }
    v5end = ecl_car(v5end);
    T0 = cl_rational(v5end);
    v8rat_end = ecl_list1(T0);
    T0 = cl_float(1, v5end);
    v9real_end = ecl_list1(T0);
    goto L41;
L42:;
    if (!(ecl_numberp(v5end))) { goto L49; }
    v8rat_end = cl_rational(v5end);
    v9real_end = cl_float(1, v5end);
    goto L41;
L49:;
    v8rat_end = v5end;
    v9real_end = v5end;
L41:;
    T0 = cl_list(3, ECL_SYM("RATIONAL",689), v6rat_start, v8rat_end);
    T1 = cl_list(3, ECL_SYM("FLOAT",376), v7real_start, v9real_end);
    value0 = cl_list(3, ECL_SYM("OR",616), T0, T1);
    return value0;
   }
L19:;
   value0 = VV[18];
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function LAMBDA97                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC11__lambda97(cl_object v1)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(v1)) { goto L1; }
  value0 = CONS(ECL_SYM("SINGLE-FLOAT",780),v1);
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  value0 = ECL_SYM("SINGLE-FLOAT",780);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function LAMBDA102                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC12__lambda102(cl_object v1)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2;
   cl_object v3n;
   v2 = v1;
   if (!(v2==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[90])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v4;
    v4 = ecl_car(v2);
    v2 = ecl_cdr(v2);
    v3n = v4;
   }
   if (Null(v2)) { goto L8; }
   ecl_function_dispatch(cl_env_copy,VV[93])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L8:;
   T0 = ecl_one_minus(v3n);
   value0 = cl_list(3, ECL_SYM("INTEGER",439), ecl_make_fixnum(0), T0);
   return value0;
  }
 }
}
/*      local function LAMBDA106                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC13__lambda106(cl_object v1)
{
 cl_object T0, T1, T2, T3, T4, T5;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2;
   cl_object v3s;
   v2 = v1;
   if (Null(v2)) { goto L3; }
   {
    cl_object v4;
    v4 = ecl_car(v2);
    v2 = ecl_cdr(v2);
    v3s = v4;
    goto L2;
   }
L3:;
   v3s = ECL_SYM("*",20);
L2:;
   if (Null(v2)) { goto L8; }
   ecl_function_dispatch(cl_env_copy,VV[93])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L8:;
   if (v3s==ECL_NIL) { goto L12; }
   if (!((v3s)==(ECL_SYM("*",20)))) { goto L10; }
   goto L11;
L12:;
L11:;
   value0 = VV[19];
   cl_env_copy->nvalues = 1;
   return value0;
L10:;
   T0 = ecl_one_minus(v3s);
   T1 = ecl_expt(ecl_make_fixnum(2),T0);
   T2 = ecl_negate(T1);
   T3 = ecl_one_minus(v3s);
   T4 = ecl_expt(ecl_make_fixnum(2),T3);
   T5 = ecl_one_minus(T4);
   value0 = cl_list(3, ECL_SYM("INTEGER",439), T2, T5);
   return value0;
  }
 }
}
/*      local function LAMBDA110                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC14__lambda110(cl_object v1)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2;
   cl_object v3s;
   v2 = v1;
   if (Null(v2)) { goto L3; }
   {
    cl_object v4;
    v4 = ecl_car(v2);
    v2 = ecl_cdr(v2);
    v3s = v4;
    goto L2;
   }
L3:;
   v3s = ECL_SYM("*",20);
L2:;
   if (Null(v2)) { goto L8; }
   ecl_function_dispatch(cl_env_copy,VV[93])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L8:;
   if (v3s==ECL_NIL) { goto L12; }
   if (!((v3s)==(ECL_SYM("*",20)))) { goto L10; }
   goto L11;
L12:;
L11:;
   value0 = VV[20];
   cl_env_copy->nvalues = 1;
   return value0;
L10:;
   T0 = ecl_expt(ecl_make_fixnum(2),v3s);
   T1 = ecl_one_minus(T0);
   value0 = cl_list(3, ECL_SYM("INTEGER",439), ecl_make_fixnum(0), T1);
   return value0;
  }
 }
}
/*      local function LAMBDA126                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC15__lambda126(cl_object v1)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2;
   cl_object v3element_type;
   cl_object v4size;
   v2 = v1;
   if (Null(v2)) { goto L3; }
   {
    cl_object v5;
    v5 = ecl_car(v2);
    v2 = ecl_cdr(v2);
    v3element_type = v5;
    goto L2;
   }
L3:;
   v3element_type = ECL_SYM("*",20);
L2:;
   if (Null(v2)) { goto L9; }
   {
    cl_object v5;
    v5 = ecl_car(v2);
    v2 = ecl_cdr(v2);
    v4size = v5;
    goto L8;
   }
L9:;
   v4size = ECL_SYM("*",20);
L8:;
   if (Null(v2)) { goto L14; }
   ecl_function_dispatch(cl_env_copy,VV[93])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L14:;
   T0 = ecl_list1(v4size);
   value0 = cl_list(3, ECL_SYM("ARRAY",98), v3element_type, T0);
   return value0;
  }
 }
}
/*      local function LAMBDA133                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC16__lambda133(cl_object v1)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2;
   cl_object v3size;
   v2 = v1;
   if (Null(v2)) { goto L3; }
   {
    cl_object v4;
    v4 = ecl_car(v2);
    v2 = ecl_cdr(v2);
    v3size = v4;
    goto L2;
   }
L3:;
   v3size = ECL_SYM("*",20);
L2:;
   if (Null(v2)) { goto L8; }
   ecl_function_dispatch(cl_env_copy,VV[93])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L8:;
   if (!((v3size)==(ECL_SYM("*",20)))) { goto L10; }
   value0 = VV[22];
   cl_env_copy->nvalues = 1;
   return value0;
L10:;
   T0 = ecl_list1(v3size);
   T1 = cl_list(3, ECL_SYM("ARRAY",98), ECL_SYM("BASE-CHAR",122), T0);
   T2 = ecl_list1(v3size);
   T3 = cl_list(3, ECL_SYM("ARRAY",98), ECL_SYM("CHARACTER",224), T2);
   value0 = cl_list(3, ECL_SYM("OR",616), T1, T3);
   return value0;
  }
 }
}
/*      local function LAMBDA137                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC17__lambda137(cl_object v1)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2;
   cl_object v3size;
   v2 = v1;
   if (Null(v2)) { goto L3; }
   {
    cl_object v4;
    v4 = ecl_car(v2);
    v2 = ecl_cdr(v2);
    v3size = v4;
    goto L2;
   }
L3:;
   v3size = ECL_SYM("*",20);
L2:;
   if (Null(v2)) { goto L8; }
   ecl_function_dispatch(cl_env_copy,VV[93])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L8:;
   if (!((v3size)==(ECL_SYM("*",20)))) { goto L10; }
   value0 = VV[23];
   cl_env_copy->nvalues = 1;
   return value0;
L10:;
   T0 = ecl_list1(v3size);
   value0 = cl_list(3, ECL_SYM("ARRAY",98), ECL_SYM("BASE-CHAR",122), T0);
   return value0;
  }
 }
}
/*      local function LAMBDA141                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC18__lambda141(cl_object v1)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2;
   cl_object v3size;
   v2 = v1;
   if (Null(v2)) { goto L3; }
   {
    cl_object v4;
    v4 = ecl_car(v2);
    v2 = ecl_cdr(v2);
    v3size = v4;
    goto L2;
   }
L3:;
   v3size = ECL_SYM("*",20);
L2:;
   if (Null(v2)) { goto L8; }
   ecl_function_dispatch(cl_env_copy,VV[93])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L8:;
   if (!((v3size)==(ECL_SYM("*",20)))) { goto L10; }
   value0 = VV[24];
   cl_env_copy->nvalues = 1;
   return value0;
L10:;
   T0 = ecl_list1(v3size);
   value0 = cl_list(3, ECL_SYM("ARRAY",98), ECL_SYM("CHARACTER",224), T0);
   return value0;
  }
 }
}
/*      local function LAMBDA145                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC19__lambda145(cl_object v1)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2;
   cl_object v3size;
   v2 = v1;
   if (Null(v2)) { goto L3; }
   {
    cl_object v4;
    v4 = ecl_car(v2);
    v2 = ecl_cdr(v2);
    v3size = v4;
    goto L2;
   }
L3:;
   v3size = ECL_SYM("*",20);
L2:;
   if (Null(v2)) { goto L8; }
   ecl_function_dispatch(cl_env_copy,VV[93])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L8:;
   if (!((v3size)==(ECL_SYM("*",20)))) { goto L10; }
   value0 = VV[25];
   cl_env_copy->nvalues = 1;
   return value0;
L10:;
   T0 = ecl_list1(v3size);
   value0 = cl_list(3, ECL_SYM("ARRAY",98), ECL_SYM("BIT",125), T0);
   return value0;
  }
 }
}
/*      local function LAMBDA149                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC20__lambda149(cl_object v1)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2;
   cl_object v3size;
   v2 = v1;
   if (Null(v2)) { goto L3; }
   {
    cl_object v4;
    v4 = ecl_car(v2);
    v2 = ecl_cdr(v2);
    v3size = v4;
    goto L2;
   }
L3:;
   v3size = ECL_SYM("*",20);
L2:;
   if (Null(v2)) { goto L8; }
   ecl_function_dispatch(cl_env_copy,VV[93])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L8:;
   if (!((v3size)==(ECL_SYM("*",20)))) { goto L10; }
   value0 = VV[26];
   cl_env_copy->nvalues = 1;
   return value0;
L10:;
   T0 = ecl_list1(v3size);
   value0 = cl_list(3, ECL_SYM("SIMPLE-ARRAY",765), ECL_T, T0);
   return value0;
  }
 }
}
/*      local function LAMBDA153                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC21__lambda153(cl_object v1)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2;
   cl_object v3size;
   v2 = v1;
   if (Null(v2)) { goto L3; }
   {
    cl_object v4;
    v4 = ecl_car(v2);
    v2 = ecl_cdr(v2);
    v3size = v4;
    goto L2;
   }
L3:;
   v3size = ECL_SYM("*",20);
L2:;
   if (Null(v2)) { goto L8; }
   ecl_function_dispatch(cl_env_copy,VV[93])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L8:;
   if (Null(v3size)) { goto L10; }
   T0 = ecl_list1(v3size);
   T1 = cl_list(3, ECL_SYM("SIMPLE-ARRAY",765), ECL_SYM("BASE-CHAR",122), T0);
   T2 = ecl_list1(v3size);
   T3 = cl_list(3, ECL_SYM("SIMPLE-ARRAY",765), ECL_SYM("CHARACTER",224), T2);
   value0 = cl_list(3, ECL_SYM("OR",616), T1, T3);
   return value0;
L10:;
   value0 = VV[27];
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function LAMBDA157                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC22__lambda157(cl_object v1)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2;
   cl_object v3size;
   v2 = v1;
   if (Null(v2)) { goto L3; }
   {
    cl_object v4;
    v4 = ecl_car(v2);
    v2 = ecl_cdr(v2);
    v3size = v4;
    goto L2;
   }
L3:;
   v3size = ECL_SYM("*",20);
L2:;
   if (Null(v2)) { goto L8; }
   ecl_function_dispatch(cl_env_copy,VV[93])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L8:;
   if (Null(v3size)) { goto L10; }
   T0 = ecl_list1(v3size);
   value0 = cl_list(3, ECL_SYM("SIMPLE-ARRAY",765), ECL_SYM("BASE-CHAR",122), T0);
   return value0;
L10:;
   value0 = VV[28];
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function LAMBDA161                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC23__lambda161(cl_object v1)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2;
   cl_object v3size;
   v2 = v1;
   if (Null(v2)) { goto L3; }
   {
    cl_object v4;
    v4 = ecl_car(v2);
    v2 = ecl_cdr(v2);
    v3size = v4;
    goto L2;
   }
L3:;
   v3size = ECL_SYM("*",20);
L2:;
   if (Null(v2)) { goto L8; }
   ecl_function_dispatch(cl_env_copy,VV[93])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L8:;
   if (Null(v3size)) { goto L10; }
   T0 = ecl_list1(v3size);
   value0 = cl_list(3, ECL_SYM("SIMPLE-ARRAY",765), ECL_SYM("BIT",125), T0);
   return value0;
L10:;
   value0 = VV[29];
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for SIMPLE-ARRAY-P                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L24simple_array_p(cl_object v1x)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_ARRAYP(v1x))) { goto L2; }
  if ((ECL_ARRAYP(v1x)? (void)0: FEtype_error_array(v1x),ECL_ADJUSTABLE_ARRAY_P(v1x))) { goto L2; }
  if ((ECL_ARRAYP(v1x)?(void)0:FEtype_error_array(v1x),ECL_ARRAY_HAS_FILL_POINTER_P(v1x))) { goto L2; }
  T0 = cl_array_displacement(v1x);
  value0 = Null(T0)?ECL_T:ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for COMPLEX-ARRAY-P                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L25complex_array_p(cl_object v1x)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_ARRAYP(v1x))) { goto L2; }
  value0 = ecl_make_bool((ECL_ARRAYP(v1x)? (void)0: FEtype_error_array(v1x),ECL_ADJUSTABLE_ARRAY_P(v1x)));
  if ((value0)!=ECL_NIL) { goto L5; }
  value0 = ecl_make_bool((ECL_ARRAYP(v1x)?(void)0:FEtype_error_array(v1x),ECL_ARRAY_HAS_FILL_POINTER_P(v1x)));
  if ((value0)!=ECL_NIL) { goto L5; }
  value0 = cl_array_displacement(v1x);
  return value0;
L5:;
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for RATIOP                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_ratiop(cl_object v1x)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_make_bool(ecl_t_of(v1x) == t_ratio);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for SHORT-FLOAT-P                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_short_float_p(cl_object v1x)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_make_bool(ecl_t_of(v1x) == t_singlefloat);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for SINGLE-FLOAT-P                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_single_float_p(cl_object v1x)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_make_bool(ecl_t_of(v1x) == t_singlefloat);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for DOUBLE-FLOAT-P                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_double_float_p(cl_object v1x)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_make_bool(ecl_t_of(v1x) == t_doublefloat);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for LONG-FLOAT-P                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_long_float_p(cl_object v1x)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_make_bool(ecl_t_of(v1x) == t_longfloat);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for COMPLEX-SINGLE-FLOAT-P                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L26complex_single_float_p(cl_object v1x)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_make_bool(ecl_t_of(v1x) == t_csfloat);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for COMPLEX-DOUBLE-FLOAT-P                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L27complex_double_float_p(cl_object v1x)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_make_bool(ecl_t_of(v1x) == t_cdfloat);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for COMPLEX-LONG-FLOAT-P                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L28complex_long_float_p(cl_object v1x)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_make_bool(ecl_t_of(v1x) == t_clfloat);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for UPGRADED-ARRAY-ELEMENT-TYPE           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_upgraded_array_element_type(cl_narg narg, cl_object v1element_type, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2env;
  va_list args; va_start(args,v1element_type);
  {
   int i = 1;
   if (i >= narg) {
    v2env = ECL_NIL;
   } else {
    i++;
    v2env = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   int8_t v3hash;
   cl_object v4record;
   {
    cl_object v5;
    T0 = si_hash_eql(1, v1element_type);
    v5 = ecl_boole(ECL_BOOLAND,(ecl_make_fixnum(127)),(T0));
    {
     cl_fixnum v6;
     v6 = 0;
     if (!(ECL_FIXNUMP(v5))) { goto L8; }
     v6 = ecl_fixnum(v5);
     if (!((v6)<=(127))) { goto L13; }
     T0 = ecl_make_bool((v6)>=(0));
     goto L5;
L13:;
     T0 = ECL_NIL;
     goto L5;
L8:;
     T0 = ECL_NIL;
     goto L5;
    }
L5:;
    if (ecl_unlikely(!((T0)!=ECL_NIL)))
         FEwrong_type_argument(VV[38],v5);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v3hash = ecl_fixnum(v5);
   }
   {
    cl_object v5;
    v5 = ecl_symbol_value(VV[5]);
    T0 = v5;
    {
     int8_t v6;
     {
      int8_t v7;
      v7 = v3hash;
      if (ecl_unlikely(((cl_fixnum)(v7))>=(v5)->vector.dim))
           FEwrong_index(ECL_NIL,v5,-1,ecl_make_fixnum((cl_fixnum)(v7)),(v5)->vector.dim);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v6 = v7;
     }
     v4record = ecl_aref_unsafe(T0,(cl_fixnum)(v6));
    }
   }
   if (Null(v4record)) { goto L21; }
   T0 = ecl_car(v4record);
   if (!((T0)==(v1element_type))) { goto L21; }
   value0 = ecl_cdr(v4record);
   cl_env_copy->nvalues = 1;
   return value0;
L21:;
   {
    cl_object v5answer;
    if (Null(si_memq(v1element_type,VV[39]))) { goto L25; }
    v5answer = v1element_type;
    goto L24;
L25:;
    {
     cl_object v6;
     v6 = ecl_symbol_value(VV[37]);
     goto L30;
L29:;
     {
      cl_object v7v;
      v7v = ecl_car(v6);
      if (Null(cl_subtypep(2, v1element_type, v7v))) { goto L34; }
      v5answer = v7v;
      goto L24;
L34:;
     }
     v6 = ecl_cdr(v6);
L30:;
     if (Null(v6)) { goto L38; }
     goto L29;
L38:;
     v5answer = ECL_T;
    }
L24:;
    {
     cl_object v6;
     v6 = ecl_symbol_value(VV[5]);
     T0 = v6;
     {
      int8_t v7;
      {
       int8_t v8;
       v8 = v3hash;
       if (ecl_unlikely(((cl_fixnum)(v8))>=(v6)->vector.dim))
           FEwrong_index(ECL_NIL,v6,-1,ecl_make_fixnum((cl_fixnum)(v8)),(v6)->vector.dim);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v7 = v8;
      }
      T1 = CONS(v1element_type,v5answer);
      ecl_aset_unsafe(T0,(cl_fixnum)(v7),T1);
     }
    }
    value0 = v5answer;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for UPGRADED-COMPLEX-PART-TYPE            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_upgraded_complex_part_type(cl_narg narg, cl_object v1real_type, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2env;
  va_list args; va_start(args,v1real_type);
  {
   int i = 1;
   if (i >= narg) {
    v2env = ECL_NIL;
   } else {
    i++;
    v2env = va_arg(args,cl_object);
   }
  }
  va_end(args);
  if (Null(cl_subtypep(2, v1real_type, ECL_SYM("NULL",607)))) { goto L2; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  if (Null(cl_subtypep(2, v1real_type, ECL_SYM("RATIONAL",689)))) { goto L4; }
  value0 = ECL_SYM("RATIONAL",689);
  cl_env_copy->nvalues = 1;
  return value0;
L4:;
  if (Null(cl_subtypep(2, v1real_type, ECL_SYM("SINGLE-FLOAT",780)))) { goto L6; }
  value0 = ECL_SYM("SINGLE-FLOAT",780);
  cl_env_copy->nvalues = 1;
  return value0;
L6:;
  if (Null(cl_subtypep(2, v1real_type, ECL_SYM("DOUBLE-FLOAT",317)))) { goto L8; }
  value0 = ECL_SYM("DOUBLE-FLOAT",317);
  cl_env_copy->nvalues = 1;
  return value0;
L8:;
  if (Null(cl_subtypep(2, v1real_type, ECL_SYM("LONG-FLOAT",510)))) { goto L10; }
  value0 = ECL_SYM("LONG-FLOAT",510);
  cl_env_copy->nvalues = 1;
  return value0;
L10:;
  if (Null(cl_subtypep(2, v1real_type, ECL_SYM("FLOAT",376)))) { goto L12; }
  value0 = ECL_SYM("FLOAT",376);
  cl_env_copy->nvalues = 1;
  return value0;
L12:;
  if (Null(cl_subtypep(2, v1real_type, ECL_SYM("REAL",705)))) { goto L14; }
  value0 = ECL_SYM("REAL",705);
  cl_env_copy->nvalues = 1;
  return value0;
L14:;
  value0 = cl_error(2, VV[40], v1real_type);
  return value0;
 }
}
/*      function definition for IN-INTERVAL-P                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L29in_interval_p(cl_object v1x, cl_object v2interval)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3low;
   cl_object v4high;
   v3low = ECL_NIL;
   v4high = ECL_NIL;
   if (!(ecl_endp(v2interval))) { goto L4; }
   v3low = ECL_SYM("*",20);
   v4high = ECL_SYM("*",20);
   goto L3;
L4:;
   T0 = ecl_cdr(v2interval);
   if (!(ecl_endp(T0))) { goto L9; }
   v3low = ecl_car(v2interval);
   v4high = ECL_SYM("*",20);
   goto L3;
L9:;
   v3low = ecl_car(v2interval);
   v4high = ecl_cadr(v2interval);
L3:;
   {
    cl_object v5;
    v5 = ecl_make_bool((v3low)==(ECL_SYM("*",20)));
    if (Null(v5)) { goto L19; }
    goto L17;
L19:;
    if (!(ECL_CONSP(v3low))) { goto L21; }
    T0 = ecl_car(v3low);
    if (!(ecl_lowereq(v1x,T0))) { goto L17; }
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
L21:;
    {
     cl_object v6;
     if (!(ecl_lower(v1x,v3low))) { goto L25; }
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 1;
     return value0;
L25:;
     v6 = ECL_NIL;
     if (Null(v6)) { goto L17; }
    }
   }
L17:;
   {
    cl_object v5;
    v5 = ecl_make_bool((v4high)==(ECL_SYM("*",20)));
    if (Null(v5)) { goto L30; }
    goto L28;
L30:;
    if (!(ECL_CONSP(v4high))) { goto L32; }
    T0 = ecl_car(v4high);
    if (!(ecl_greatereq(v1x,T0))) { goto L28; }
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
L32:;
    {
     cl_object v6;
     if (!(ecl_greater(v1x,v4high))) { goto L36; }
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 1;
     return value0;
L36:;
     v6 = ECL_NIL;
     if (Null(v6)) { goto L28; }
    }
   }
L28:;
   value0 = ECL_T;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for ERROR-TYPE-SPECIFIER                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L30error_type_specifier(cl_object v1type)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_error(2, VV[41], v1type);
  return value0;
 }
}
/*      function definition for MATCH-DIMENSIONS                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L31match_dimensions(cl_object v1array, cl_object v2pat)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_make_bool((v2pat)==(ECL_SYM("*",20)));
  if ((value0)!=ECL_NIL) { goto L2; }
  {
   int8_t v3rank;
   v3rank = ecl_fixnum(cl_array_rank(v1array));
   if (!(ecl_numberp(v2pat))) { goto L5; }
   value0 = ecl_make_bool(ecl_number_equalp(ecl_make_int8_t(v3rank),v2pat));
   cl_env_copy->nvalues = 1;
   return value0;
L5:;
   if (!(ECL_LISTP(v2pat))) { goto L7; }
   {
    cl_object v4i;
    v4i = ecl_make_fixnum(0);
    goto L12;
L11:;
    if (!(ECL_CONSP(v2pat))) { goto L17; }
    T0 = ecl_car(v2pat);
    if ((T0)==(ECL_SYM("*",20))) { goto L14; }
    {
     cl_fixnum v5;
     v5 = ecl_array_dimension(v1array,ecl_to_size(v4i));
     T0 = ecl_car(v2pat);
     if ((ecl_make_fixnum(v5))==(T0)) { goto L14; }
     goto L15;
    }
L17:;
    goto L15;
L15:;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
L14:;
    v2pat = ecl_cdr(v2pat);
    v4i = ecl_one_plus(v4i);
L12:;
    if (!(ecl_lower(v4i,ecl_make_int8_t(v3rank)))) { goto L24; }
    goto L11;
L24:;
    value0 = ecl_make_bool(v2pat==ECL_NIL);
    cl_env_copy->nvalues = 1;
    return value0;
   }
L7:;
   if (!(ECL_ATOM(v2pat))) { goto L26; }
   value0 = cl_error(2, VV[42], v2pat);
   return value0;
L26:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
L2:;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for TYPEP                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_typep(cl_narg narg, cl_object v1object, cl_object v2type, ...)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>3)) FEwrong_num_arguments_anonym();
 {
  cl_object v3env;
  va_list args; va_start(args,v2type);
  {
   int i = 2;
   if (i >= narg) {
    v3env = ECL_NIL;
   } else {
    i++;
    v3env = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v4tp;
   cl_object v5i;
   cl_object v6c;
   v4tp = ECL_NIL;
   v5i = ECL_NIL;
   v6c = ECL_NIL;
   if (!(ECL_SYMBOLP(v2type))) { goto L6; }
   {
    cl_object v7f;
    v7f = si_get_sysprop(v2type, VV[36]);
    if (Null(v7f)) { goto L9; }
    value0 = ecl_function_dispatch(cl_env_copy,v7f)(1, v1object);
    return value0;
L9:;
    v4tp = v2type;
    v5i = ECL_NIL;
    goto L5;
   }
L6:;
   if (!(ECL_CONSP(v2type))) { goto L14; }
   v4tp = ecl_car(v2type);
   v5i = ecl_cdr(v2type);
   goto L5;
L14:;
   if (!(ECL_INSTANCEP(v2type))) { goto L19; }
   T0 = cl_class_of(v1object);
   value0 = si_subclassp(2, T0, v2type);
   return value0;
L19:;
   L30error_type_specifier(v2type);
L5:;
   if (!((v4tp)==(ECL_SYM("EQL",336)))) { goto L26; }
   goto L23;
   goto L24;
L26:;
   goto L24;
L24:;
   if (!((v4tp)==(ECL_SYM("MEMBER",554)))) { goto L21; }
   goto L22;
L23:;
L22:;
   if (Null(ecl_memql(v1object,v5i))) { goto L30; }
   value0 = ECL_T;
   cl_env_copy->nvalues = 1;
   return value0;
L30:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L21:;
   if (!((v4tp)==(ECL_SYM("NOT",586)))) { goto L32; }
   T0 = ecl_car(v5i);
   T1 = cl_typep(2, v1object, T0);
   value0 = Null(T1)?ECL_T:ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L32:;
   if (!((v4tp)==(ECL_SYM("OR",616)))) { goto L34; }
   {
    cl_object v7;
    v7 = v5i;
    goto L39;
L38:;
    {
     cl_object v8e;
     v8e = ecl_car(v7);
     if (Null(cl_typep(2, v1object, v8e))) { goto L43; }
     value0 = ECL_T;
     cl_env_copy->nvalues = 1;
     return value0;
L43:;
    }
    v7 = ecl_cdr(v7);
L39:;
    if (Null(v7)) { goto L47; }
    goto L38;
L47:;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
   }
L34:;
   if (!((v4tp)==(ECL_SYM("AND",89)))) { goto L49; }
   {
    cl_object v8;
    v8 = v5i;
    goto L54;
L53:;
    {
     cl_object v9e;
     v9e = ecl_car(v8);
     if ((cl_typep(2, v1object, v9e))!=ECL_NIL) { goto L58; }
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 1;
     return value0;
L58:;
    }
    v8 = ecl_cdr(v8);
L54:;
    if (Null(v8)) { goto L62; }
    goto L53;
L62:;
    value0 = ECL_T;
    cl_env_copy->nvalues = 1;
    return value0;
   }
L49:;
   if (!((v4tp)==(ECL_SYM("SATISFIES",737)))) { goto L64; }
   T0 = ecl_car(v5i);
   value0 = ecl_function_dispatch(cl_env_copy,T0)(1, v1object);
   return value0;
L64:;
   if (!(ecl_eql(v4tp,ECL_T))) { goto L72; }
   goto L69;
   goto L70;
L72:;
   goto L70;
L70:;
   if (!((v4tp)==(ECL_SYM("*",20)))) { goto L67; }
   goto L68;
L69:;
L68:;
   value0 = ECL_T;
   cl_env_copy->nvalues = 1;
   return value0;
L67:;
   if (!((v4tp)==(ECL_NIL))) { goto L75; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L75:;
   if (!((v4tp)==(ECL_SYM("BIGNUM",124)))) { goto L78; }
   if (!(ECL_FIXNUMP(v1object)||ECL_BIGNUMP(v1object))) { goto L81; }
   {
    bool v9;
    v9 = ECL_FIXNUMP(v1object);
    value0 = (v9)?ECL_NIL:ECL_T;
    cl_env_copy->nvalues = 1;
    return value0;
   }
L81:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L78:;
   if (!((v4tp)==(ECL_SYM("STANDARD-CHAR",796)))) { goto L83; }
   if (!(ECL_CHARACTERP(v1object))) { goto L86; }
   value0 = cl_standard_char_p(v1object);
   return value0;
L86:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L83:;
   if (!((v4tp)==(ECL_SYM("INTEGER",439)))) { goto L88; }
   if (!(ECL_FIXNUMP(v1object)||ECL_BIGNUMP(v1object))) { goto L91; }
   value0 = L29in_interval_p(v1object, v5i);
   return value0;
L91:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L88:;
   if (!((v4tp)==(ECL_SYM("RATIO",688)))) { goto L93; }
   if (Null(si_ratiop(v1object))) { goto L96; }
   value0 = L29in_interval_p(v1object, v5i);
   return value0;
L96:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L93:;
   if (!((v4tp)==(ECL_SYM("RATIONAL",689)))) { goto L98; }
   if (Null(cl_rationalp(v1object))) { goto L101; }
   value0 = L29in_interval_p(v1object, v5i);
   return value0;
L101:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L98:;
   if (!((v4tp)==(ECL_SYM("FLOAT",376)))) { goto L103; }
   if (!(floatp(v1object))) { goto L106; }
   value0 = L29in_interval_p(v1object, v5i);
   return value0;
L106:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L103:;
   if (!((v4tp)==(ECL_SYM("REAL",705)))) { goto L108; }
   if ((cl_rationalp(v1object))!=ECL_NIL) { goto L113; }
   if (!(floatp(v1object))) { goto L111; }
   goto L112;
L113:;
L112:;
   value0 = L29in_interval_p(v1object, v5i);
   return value0;
L111:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L108:;
   if (!((v4tp)==(ECL_SYM("SHORT-FLOAT",758)))) { goto L115; }
   if (!(ECL_SINGLE_FLOAT_P(v1object))) { goto L118; }
   value0 = L29in_interval_p(v1object, v5i);
   return value0;
L118:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L115:;
   if (!((v4tp)==(ECL_SYM("SINGLE-FLOAT",780)))) { goto L120; }
   if (!(ECL_SINGLE_FLOAT_P(v1object))) { goto L123; }
   value0 = L29in_interval_p(v1object, v5i);
   return value0;
L123:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L120:;
   if (!((v4tp)==(ECL_SYM("DOUBLE-FLOAT",317)))) { goto L125; }
   if (!(ECL_DOUBLE_FLOAT_P(v1object))) { goto L128; }
   value0 = L29in_interval_p(v1object, v5i);
   return value0;
L128:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L125:;
   if (!((v4tp)==(ECL_SYM("LONG-FLOAT",510)))) { goto L130; }
   if (!(ECL_LONG_FLOAT_P(v1object))) { goto L133; }
   value0 = L29in_interval_p(v1object, v5i);
   return value0;
L133:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L130:;
   if (!((v4tp)==(ECL_SYM("COMPLEX",243)))) { goto L135; }
   if (Null(cl_complexp(v1object))) { goto L138; }
   value0 = ecl_make_bool(v5i==ECL_NIL);
   if ((value0)!=ECL_NIL) { goto L141; }
   T0 = cl_realpart(v1object);
   T1 = ecl_car(v5i);
   if (Null(cl_typep(2, T0, T1))) { goto L144; }
   T0 = cl_imagpart(v1object);
   T1 = ecl_car(v5i);
   value0 = cl_typep(2, T0, T1);
   return value0;
L144:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L141:;
   cl_env_copy->nvalues = 1;
   return value0;
L138:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L135:;
   if (!((v4tp)==(ECL_SYM("SEQUENCE",743)))) { goto L146; }
   value0 = ecl_make_bool(ECL_LISTP(v1object));
   if ((value0)!=ECL_NIL) { goto L149; }
   value0 = ecl_make_bool(ECL_VECTORP(v1object));
   cl_env_copy->nvalues = 1;
   return value0;
L149:;
   cl_env_copy->nvalues = 1;
   return value0;
L146:;
   if (!((v4tp)==(ECL_SYM("CONS",253)))) { goto L151; }
   if (!(ECL_CONSP(v1object))) { goto L154; }
   if (ecl_endp(v5i)) { goto L157; }
   {
    cl_object v10car_type;
    v10car_type = ecl_car(v5i);
    if ((v10car_type)==(ECL_SYM("*",20))) { goto L160; }
    T0 = ecl_car(v1object);
    if (Null(cl_typep(2, T0, v10car_type))) { goto L154; }
    goto L156;
L160:;
    goto L156;
   }
L157:;
L156:;
   T0 = ecl_cdr(v5i);
   value0 = ecl_make_bool(ecl_endp(T0));
   if ((value0)!=ECL_NIL) { goto L163; }
   {
    cl_object v10cdr_type;
    v10cdr_type = ecl_cadr(v5i);
    value0 = ecl_make_bool((v10cdr_type)==(ECL_SYM("*",20)));
    if ((value0)!=ECL_NIL) { goto L167; }
    T0 = ecl_cdr(v1object);
    value0 = cl_typep(2, T0, v10cdr_type);
    return value0;
L167:;
    cl_env_copy->nvalues = 1;
    return value0;
   }
L163:;
   cl_env_copy->nvalues = 1;
   return value0;
L154:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L151:;
   if (!((v4tp)==(ECL_SYM("BASE-STRING",123)))) { goto L169; }
   if (Null(si_base_string_p(v1object))) { goto L172; }
   value0 = ecl_make_bool(v5i==ECL_NIL);
   if ((value0)!=ECL_NIL) { goto L175; }
   value0 = L31match_dimensions(v1object, v5i);
   return value0;
L175:;
   cl_env_copy->nvalues = 1;
   return value0;
L172:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L169:;
   if (!((v4tp)==(ECL_SYM("STRING",807)))) { goto L177; }
   if (!(ECL_STRINGP(v1object))) { goto L180; }
   value0 = ecl_make_bool(v5i==ECL_NIL);
   if ((value0)!=ECL_NIL) { goto L183; }
   value0 = L31match_dimensions(v1object, v5i);
   return value0;
L183:;
   cl_env_copy->nvalues = 1;
   return value0;
L180:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L177:;
   if (!((v4tp)==(ECL_SYM("BIT-VECTOR",136)))) { goto L185; }
   if (!(ECL_BIT_VECTOR_P(v1object))) { goto L188; }
   value0 = ecl_make_bool(v5i==ECL_NIL);
   if ((value0)!=ECL_NIL) { goto L191; }
   value0 = L31match_dimensions(v1object, v5i);
   return value0;
L191:;
   cl_env_copy->nvalues = 1;
   return value0;
L188:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L185:;
   if (!((v4tp)==(ECL_SYM("SIMPLE-BASE-STRING",766)))) { goto L193; }
   if (Null(si_base_string_p(v1object))) { goto L196; }
   if (Null(cl_simple_string_p(v1object))) { goto L196; }
   value0 = ecl_make_bool(v5i==ECL_NIL);
   if ((value0)!=ECL_NIL) { goto L200; }
   value0 = L31match_dimensions(v1object, v5i);
   return value0;
L200:;
   cl_env_copy->nvalues = 1;
   return value0;
L196:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L193:;
   if (!((v4tp)==(ECL_SYM("SIMPLE-STRING",773)))) { goto L202; }
   if (Null(cl_simple_string_p(v1object))) { goto L205; }
   value0 = ecl_make_bool(v5i==ECL_NIL);
   if ((value0)!=ECL_NIL) { goto L208; }
   value0 = L31match_dimensions(v1object, v5i);
   return value0;
L208:;
   cl_env_copy->nvalues = 1;
   return value0;
L205:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L202:;
   if (!((v4tp)==(ECL_SYM("SIMPLE-BIT-VECTOR",767)))) { goto L210; }
   if (Null(cl_simple_bit_vector_p(v1object))) { goto L213; }
   value0 = ecl_make_bool(v5i==ECL_NIL);
   if ((value0)!=ECL_NIL) { goto L216; }
   value0 = L31match_dimensions(v1object, v5i);
   return value0;
L216:;
   cl_env_copy->nvalues = 1;
   return value0;
L213:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L210:;
   if (!((v4tp)==(ECL_SYM("SIMPLE-VECTOR",776)))) { goto L218; }
   if (Null(cl_simple_vector_p(v1object))) { goto L221; }
   value0 = ecl_make_bool(v5i==ECL_NIL);
   if ((value0)!=ECL_NIL) { goto L224; }
   value0 = L31match_dimensions(v1object, v5i);
   return value0;
L224:;
   cl_env_copy->nvalues = 1;
   return value0;
L221:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L218:;
   if (!((v4tp)==(ECL_SYM("COMPLEX-ARRAY",1853)))) { goto L226; }
   if (Null(L25complex_array_p(v1object))) { goto L229; }
   if (ecl_endp(v5i)) { goto L232; }
   T0 = ecl_car(v5i);
   if ((T0)==(ECL_SYM("*",20))) { goto L232; }
   T0 = cl_array_element_type(v1object);
   T1 = ecl_car(v5i);
   T2 = cl_upgraded_array_element_type(1, T1);
   if (!((T0)==(T2))) { goto L229; }
   goto L231;
L232:;
L231:;
   T0 = ecl_cdr(v5i);
   value0 = ecl_make_bool(ecl_endp(T0));
   if ((value0)!=ECL_NIL) { goto L236; }
   T0 = ecl_cadr(v5i);
   value0 = L31match_dimensions(v1object, T0);
   return value0;
L236:;
   cl_env_copy->nvalues = 1;
   return value0;
L229:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L226:;
   if (!((v4tp)==(ECL_SYM("SIMPLE-ARRAY",765)))) { goto L238; }
   if (Null(L24simple_array_p(v1object))) { goto L241; }
   if (ecl_endp(v5i)) { goto L244; }
   T0 = ecl_car(v5i);
   if ((T0)==(ECL_SYM("*",20))) { goto L244; }
   T0 = cl_array_element_type(v1object);
   T1 = ecl_car(v5i);
   T2 = cl_upgraded_array_element_type(1, T1);
   if (!((T0)==(T2))) { goto L241; }
   goto L243;
L244:;
L243:;
   T0 = ecl_cdr(v5i);
   value0 = ecl_make_bool(ecl_endp(T0));
   if ((value0)!=ECL_NIL) { goto L248; }
   T0 = ecl_cadr(v5i);
   value0 = L31match_dimensions(v1object, T0);
   return value0;
L248:;
   cl_env_copy->nvalues = 1;
   return value0;
L241:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L238:;
   if (!((v4tp)==(ECL_SYM("ARRAY",98)))) { goto L250; }
   if (!(ECL_ARRAYP(v1object))) { goto L253; }
   if (ecl_endp(v5i)) { goto L256; }
   T0 = ecl_car(v5i);
   if ((T0)==(ECL_SYM("*",20))) { goto L256; }
   T0 = cl_array_element_type(v1object);
   T1 = ecl_car(v5i);
   T2 = cl_upgraded_array_element_type(1, T1);
   if (!((T0)==(T2))) { goto L253; }
   goto L255;
L256:;
L255:;
   T0 = ecl_cdr(v5i);
   value0 = ecl_make_bool(ecl_endp(T0));
   if ((value0)!=ECL_NIL) { goto L260; }
   T0 = ecl_cadr(v5i);
   value0 = L31match_dimensions(v1object, T0);
   return value0;
L260:;
   cl_env_copy->nvalues = 1;
   return value0;
L253:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L250:;
   if (Null(si_get_sysprop(v4tp, VV[10]))) { goto L262; }
   T1 = si_get_sysprop(v4tp, VV[10]);
   T0 = ecl_function_dispatch(cl_env_copy,T1)(1, v5i);
   value0 = cl_typep(2, v1object, T0);
   return value0;
L262:;
   if (!(ECL_CONSP(v5i))) { goto L266; }
   value0 = L30error_type_specifier(v2type);
   return value0;
L266:;
   v6c = cl_find_class(2, v2type, ECL_NIL);
   if (Null(v6c)) { goto L268; }
   T0 = cl_class_of(v1object);
   value0 = si_subclassp(2, T0, v6c);
   return value0;
L268:;
   value0 = L30error_type_specifier(v2type);
   return value0;
  }
 }
}
/*      function definition for SUBCLASSP                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_subclassp(cl_narg narg, cl_object v1low, cl_object v2high, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg!=2)) FEwrong_num_arguments_anonym();
 {
TTL:
  value0 = ecl_make_bool((v1low)==(v2high));
  if ((value0)!=ECL_NIL) { goto L2; }
  T0 = ecl_instance_ref((v1low),(7));
  value0 = si_memq(v2high,T0);
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for OF-CLASS-P                            */
/*      optimize speed 3, debug 1, space 1, safety 0                  */
cl_object si_of_class_p(cl_narg narg, cl_object v1object, cl_object v2class, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v3x_class;
  v3x_class = cl_class_of(v1object);
  if (!((v3x_class)==(v2class))) { goto L2; }
  value0 = ECL_T;
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  {
   cl_object v4x_cpl;
   v4x_cpl = (v3x_class)->instance.slots[7];
   if (!(ECL_INSTANCEP(v2class))) { goto L5; }
   value0 = si_memq(v2class,v4x_cpl);
   cl_env_copy->nvalues = 1;
   return value0;
L5:;
   {
    cl_object v5;
    v5 = v4x_cpl;
    goto L10;
L9:;
    {
     cl_object v6c;
     v6c = _ecl_car(v5);
     T0 = (v6c)->instance.slots[3];
     if (!((T0)==(v2class))) { goto L14; }
     value0 = ECL_T;
     cl_env_copy->nvalues = 1;
     return value0;
L14:;
    }
    v5 = _ecl_cdr(v5);
L10:;
    if (Null(v5)) { goto L18; }
    goto L9;
L18:;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for NORMALIZE-TYPE                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L32normalize_type(cl_object v1type)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2tp;
   cl_object v3i;
   cl_object v4fd;
   v2tp = ECL_NIL;
   v3i = ECL_NIL;
   v4fd = ECL_NIL;
   if (!(ECL_SYMBOLP(v1type))) { goto L4; }
   v4fd = si_get_sysprop(v1type, VV[10]);
   if (Null(v4fd)) { goto L6; }
   v1type = ecl_function_dispatch(cl_env_copy,v4fd)(1, ECL_NIL);
   goto TTL;
L6:;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = v1type;
   return cl_env_copy->values[0];
L4:;
   if (Null(ecl_function_dispatch(cl_env_copy,VV[100])(1, v1type) /*  CLASSP */)) { goto L11; }
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = v1type;
   return cl_env_copy->values[0];
L11:;
   if (!(ECL_ATOM(v1type))) { goto L13; }
   value0 = L30error_type_specifier(v1type);
   return value0;
L13:;
   v2tp = ecl_car(v1type);
   v3i = ecl_cdr(v1type);
   v4fd = si_get_sysprop(v2tp, VV[10]);
   if (Null(v4fd)) { goto L15; }
   v1type = ecl_function_dispatch(cl_env_copy,v4fd)(1, v3i);
   goto TTL;
L15:;
   if (!((v2tp)==(ECL_SYM("INTEGER",439)))) { goto L24; }
   T0 = ecl_cadr(v3i);
   if (!(ECL_CONSP(T0))) { goto L24; }
   T0 = ecl_car(v3i);
   T1 = ecl_caadr(v3i);
   T2 = ecl_one_minus(T1);
   T3 = cl_list(2, T0, T2);
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = T3;
   cl_env_copy->values[0] = v2tp;
   return cl_env_copy->values[0];
L24:;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v3i;
   cl_env_copy->values[0] = v2tp;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for EXPAND-DEFTYPE                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L33expand_deftype(cl_object v1type)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2base;
   cl_object v3args;
   v2base = ECL_NIL;
   v3args = ECL_NIL;
   if (!(ECL_ATOM(v1type))) { goto L4; }
   v2base = v1type;
   v3args = ECL_NIL;
   goto L3;
L4:;
   v2base = ecl_car(v1type);
   v3args = ecl_cdr(v1type);
L3:;
   {
    cl_object v4fn;
    v4fn = si_get_sysprop(v2base, VV[10]);
    if (Null(v4fn)) { goto L13; }
    v1type = ecl_function_dispatch(cl_env_copy,v4fn)(1, v3args);
    goto TTL;
L13:;
    value0 = v1type;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for COERCE                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_coerce(cl_object v1object, cl_object v2type)
{
 cl_object T0, T1, T2, T3, T4, T5;
 volatile cl_object lex0[2];
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  lex0[0] = v1object;                             /*  OBJECT          */
  lex0[1] = v2type;                               /*  TYPE            */
TTL:
  {
   cl_object v3aux;
   v3aux = ECL_NIL;
   if (Null(cl_typep(2, lex0[0], lex0[1]))) { goto L2; }
   value0 = lex0[0];
   cl_env_copy->nvalues = 1;
   return value0;
L2:;
   {
    cl_object v4type;
    v4type = L33expand_deftype(lex0[1]);
    if (!(ECL_ATOM(v4type))) { goto L5; }
    {
     cl_object v5;
     v5 = v4type;
     if (!(ecl_eql(v5,ECL_T))) { goto L8; }
     value0 = lex0[0];
     cl_env_copy->nvalues = 1;
     return value0;
L8:;
     if (!((v5)==(ECL_SYM("LIST",483)))) { goto L11; }
     {
      cl_object v6;
      cl_object v7io;
      cl_object v8l;
      v6 = ecl_function_dispatch(cl_env_copy,VV[102])(1, lex0[0]) /*  MAKE-SEQ-ITERATOR */;
      v7io = v6;
      v8l = ECL_NIL;
      goto L18;
L17:;
      {
       cl_object v9;
       v9 = ecl_function_dispatch(cl_env_copy,VV[103])(2, lex0[0], v7io) /*  SEQ-ITERATOR-NEXT */;
       T0 = ecl_function_dispatch(cl_env_copy,VV[104])(2, lex0[0], v7io) /*  SEQ-ITERATOR-REF */;
       v8l = CONS(T0,v8l);
       v7io = v9;
      }
L18:;
      if (v7io==ECL_NIL) { goto L23; }
      goto L17;
L23:;
      value0 = v8l;
      cl_env_copy->nvalues = 1;
      return value0;
     }
L11:;
     if (!((v5)==(ECL_SYM("CHARACTER",224)))) { goto L30; }
     goto L27;
     goto L28;
L30:;
     goto L28;
L28:;
     if (!((v5)==(ECL_SYM("BASE-CHAR",122)))) { goto L25; }
     goto L26;
L27:;
L26:;
     value0 = cl_character(lex0[0]);
     return value0;
L25:;
     if (!((v5)==(ECL_SYM("FLOAT",376)))) { goto L33; }
     value0 = cl_float(1, lex0[0]);
     return value0;
L33:;
     if (!((v5)==(ECL_SYM("SHORT-FLOAT",758)))) { goto L35; }
     {
      cl_object v9c__value;
      v9c__value = lex0[0];
      value0 = ecl_make_single_float(ecl_to_float(v9c__value));
      cl_env_copy->nvalues = 1;
      return value0;
     }
L35:;
     if (!((v5)==(ECL_SYM("SINGLE-FLOAT",780)))) { goto L38; }
     {
      cl_object v10c__value;
      v10c__value = lex0[0];
      value0 = ecl_make_single_float(ecl_to_float(v10c__value));
      cl_env_copy->nvalues = 1;
      return value0;
     }
L38:;
     if (!((v5)==(ECL_SYM("DOUBLE-FLOAT",317)))) { goto L41; }
     {
      cl_object v11c__value;
      v11c__value = lex0[0];
      value0 = ecl_make_double_float(ecl_to_double(v11c__value));
      cl_env_copy->nvalues = 1;
      return value0;
     }
L41:;
     if (!((v5)==(ECL_SYM("LONG-FLOAT",510)))) { goto L44; }
     {
      cl_object v12c__value;
      v12c__value = lex0[0];
      value0 = ecl_make_long_float(ecl_to_long_double(v12c__value));
      cl_env_copy->nvalues = 1;
      return value0;
     }
L44:;
     if (!((v5)==(ECL_SYM("COMPLEX",243)))) { goto L47; }
     T0 = cl_realpart(lex0[0]);
     T1 = cl_imagpart(lex0[0]);
     value0 = cl_complex(2, T0, T1);
     return value0;
L47:;
     if (!((v5)==(ECL_SYM("COMPLEX-SINGLE-FLOAT",1872)))) { goto L49; }
     {
      float v13;
      {
       cl_object v14c__value;
       v14c__value = cl_realpart(lex0[0]);
       v13 = ecl_to_float(v14c__value);
      }
      {
       float v14;
       {
        cl_object v15c__value;
        v15c__value = cl_imagpart(lex0[0]);
        v14 = ecl_to_float(v15c__value);
       }
       value0 = cl_complex(2, ecl_make_single_float(v13), ecl_make_single_float(v14));
       return value0;
      }
     }
L49:;
     if (!((v5)==(ECL_SYM("COMPLEX-DOUBLE-FLOAT",1873)))) { goto L55; }
     {
      double v15;
      {
       cl_object v16c__value;
       v16c__value = cl_realpart(lex0[0]);
       v15 = ecl_to_double(v16c__value);
      }
      {
       double v16;
       {
        cl_object v17c__value;
        v17c__value = cl_imagpart(lex0[0]);
        v16 = ecl_to_double(v17c__value);
       }
       value0 = cl_complex(2, ecl_make_double_float(v15), ecl_make_double_float(v16));
       return value0;
      }
     }
L55:;
     if (!((v5)==(ECL_SYM("COMPLEX-LONG-FLOAT",1874)))) { goto L61; }
     {
      long double v17;
      {
       cl_object v18c__value;
       v18c__value = cl_realpart(lex0[0]);
       v17 = ecl_to_long_double(v18c__value);
      }
      {
       long double v18;
       {
        cl_object v19c__value;
        v19c__value = cl_imagpart(lex0[0]);
        v18 = ecl_to_long_double(v19c__value);
       }
       value0 = cl_complex(2, ecl_make_long_float(v17), ecl_make_long_float(v18));
       return value0;
      }
     }
L61:;
     if (!((v5)==(ECL_SYM("FUNCTION",398)))) { goto L67; }
     value0 = si_coerce_to_function(lex0[0]);
     return value0;
L67:;
     if (Null(ecl_memql(v5,VV[52]))) { goto L69; }
     value0 = cl_concatenate(2, v4type, lex0[0]);
     return value0;
L69:;
     if (ECL_LISTP(lex0[0])) { goto L73; }
     if (!(ECL_VECTORP(lex0[0]))) { goto L71; }
     goto L72;
L73:;
L72:;
     value0 = cl_concatenate(2, v4type, lex0[0]);
     return value0;
L71:;
     value0 = LC34fail(lex0);
     return value0;
    }
L5:;
    v3aux = ecl_car(v4type);
    if (!((v3aux)==(ECL_SYM("COMPLEX",243)))) { goto L75; }
    if (Null(v4type)) { goto L78; }
    T0 = cl_realpart(lex0[0]);
    T1 = ecl_cadr(v4type);
    T2 = cl_coerce(T0, T1);
    T3 = cl_imagpart(lex0[0]);
    T4 = ecl_cadr(v4type);
    T5 = cl_coerce(T3, T4);
    value0 = cl_complex(2, T2, T5);
    return value0;
L78:;
    T0 = cl_realpart(lex0[0]);
    T1 = cl_imagpart(lex0[0]);
    value0 = cl_complex(2, T0, T1);
    return value0;
L75:;
    if (Null(ecl_memql(v3aux,VV[53]))) { goto L80; }
    v3aux = cl_coerce(lex0[0], v3aux);
    if ((cl_typep(2, v3aux, v4type))!=ECL_NIL) { goto L84; }
    LC34fail(lex0);
L84:;
    value0 = v3aux;
    cl_env_copy->nvalues = 1;
    return value0;
L80:;
    if (!((v3aux)==(ECL_SYM("AND",89)))) { goto L86; }
    {
     cl_object v19;
     v19 = ecl_cdr(v4type);
     goto L92;
L91:;
     {
      cl_object v20type;
      v20type = ecl_car(v19);
      v3aux = cl_coerce(v3aux, v20type);
     }
     v19 = ecl_cdr(v19);
L92:;
     if (Null(v19)) { goto L100; }
     goto L91;
L100:;
    }
    if ((cl_typep(2, v3aux, v4type))!=ECL_NIL) { goto L102; }
    LC34fail(lex0);
L102:;
    value0 = v3aux;
    cl_env_copy->nvalues = 1;
    return value0;
L86:;
    if (ECL_LISTP(lex0[0])) { goto L106; }
    if (!(ECL_VECTORP(lex0[0]))) { goto L104; }
    goto L105;
L106:;
L105:;
    value0 = cl_concatenate(2, v4type, lex0[0]);
    return value0;
L104:;
    value0 = LC34fail(lex0);
    return value0;
   }
  }
 }
}
/*      local function FAIL                                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC34fail(volatile cl_object *lex0)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_error(3, VV[49], lex0[0], lex0[1]);
  return value0;
 }
}
/*      function definition for NEW-TYPE-TAG                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L35new_type_tag()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v1;
   v1 = ecl_symbol_value(VV[55]);
   cl_set(VV[55],cl_ash(ecl_symbol_value(VV[55]), ecl_make_fixnum(1)));
   value0 = v1;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for FIND-REGISTERED-TAG                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L36find_registered_tag(cl_narg narg, cl_object v1type, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2test;
  va_list args; va_start(args,v1type);
  {
   int i = 1;
   if (i >= narg) {
    v2test = (ECL_SYM("EQUAL",337)->symbol.gfdef);
   } else {
    i++;
    v2test = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v3pos;
   {
    cl_object v4;
    v4 = ecl_symbol_value(VV[58]);
    {
     cl_object v5;
     v5 = v4;
     goto L7;
L6:;
     {
      cl_object v6;
      cl_object v7;
      {
       cl_object v8;
       v8 = v5;
       if (ecl_unlikely(ECL_ATOM(v8))) FEtype_error_cons(v8);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v6 = v8;
      }
      v7 = ECL_CONS_CAR(v6);
      if (Null(v7)) { goto L9; }
      {
       cl_object v8;
       {
        cl_object v9;
        v9 = v7;
        if (ecl_unlikely(ECL_ATOM(v9))) FEtype_error_cons(v9);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        T0 = v9;
       }
       v8 = ECL_CONS_CAR(T0);
       if (Null(ecl_function_dispatch(cl_env_copy,v2test)(2, v1type, v8))) { goto L9; }
       v3pos = v7;
       goto L2;
      }
     }
L9:;
     v5 = ECL_CONS_CDR(v5);
L7:;
     if (v5==ECL_NIL) { goto L22; }
     goto L6;
L22:;
     v3pos = ECL_NIL;
    }
   }
L2:;
   if (Null(v3pos)) { goto L25; }
   value0 = ecl_cdr(v3pos);
   cl_env_copy->nvalues = 1;
   return value0;
L25:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for MAYBE-SAVE-TYPES                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L37maybe_save_types()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_symbol_value(VV[54]))) { goto L1; }
  cl_set(VV[54],ECL_NIL);
  cl_set(VV[58],cl_copy_tree(ecl_symbol_value(VV[58])));
  cl_set(VV[56],cl_copy_tree(ecl_symbol_value(VV[56])));
  value0 = ecl_symbol_value(VV[56]);
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for UPDATE-TYPES                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L38update_types(cl_object v1type_mask, cl_object v2new_tag)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  L37maybe_save_types();
  {
   cl_object v3;
   v3 = ecl_symbol_value(VV[58]);
   goto L5;
L4:;
   {
    cl_object v4i;
    v4i = ecl_car(v3);
    T0 = ecl_cdr(v4i);
    T1 = ecl_boole(ECL_BOOLAND,(T0),(v1type_mask));
    if (ecl_zerop(T1)) { goto L9; }
    {
     cl_object v5;
     v5 = v4i;
     {
      cl_object v6;
      T0 = ecl_cdr(v4i);
      v6 = ecl_boole(ECL_BOOLIOR,(v2new_tag),(T0));
      (ECL_CONS_CDR(v5)=v6,v5);
     }
    }
L9:;
   }
   v3 = ecl_cdr(v3);
L5:;
   if (Null(v3)) { goto L16; }
   goto L4;
L16:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for FIND-TYPE-BOUNDS                      */
/*      optimize speed 1, debug 1, space 1, safety 0                  */
static cl_object L39find_type_bounds(cl_object v1type, cl_object v2in_our_family_p, cl_object v3type___, cl_object v4minimize_super)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v5subtype_tag;
  cl_object v6disjoint_tag;
  cl_object v7supertype_tag;
  v5subtype_tag = ecl_make_fixnum(0);
  v6disjoint_tag = ecl_make_fixnum(0);
  if (Null(v4minimize_super)) { goto L4; }
  v7supertype_tag = ecl_make_fixnum(-1);
  goto L3;
L4:;
  v7supertype_tag = ecl_make_fixnum(0);
L3:;
  {
   cl_object v8;
   v8 = ECL_SYM_VAL(cl_env_copy,VV[58]);
   goto L10;
L9:;
   {
    cl_object v9i;
    v9i = _ecl_car(v8);
    {
     cl_object v10;
     cl_object v11;
     v10 = ECL_CONS_CAR(v9i);
     v11 = ECL_CONS_CDR(v9i);
     if (Null((cl_env_copy->function=v2in_our_family_p)->cfun.entry(1, v10))) { goto L14; }
     if (Null((cl_env_copy->function=v3type___)->cfun.entry(2, v1type, v10))) { goto L18; }
     if (Null(v4minimize_super)) { goto L20; }
     T0 = ecl_boole(ECL_BOOLANDC2,(v11),(v7supertype_tag));
     if (!(ecl_zerop(T0))) { goto L14; }
     v7supertype_tag = v11;
     goto L14;
L20:;
     v7supertype_tag = ecl_boole(ECL_BOOLIOR,(v11),(v7supertype_tag));
     goto L14;
L18:;
     if (Null((cl_env_copy->function=v3type___)->cfun.entry(2, v10, v1type))) { goto L25; }
     v5subtype_tag = ecl_boole(ECL_BOOLIOR,(v11),(v5subtype_tag));
     goto L14;
L25:;
     v6disjoint_tag = ecl_boole(ECL_BOOLIOR,(v6disjoint_tag),(v11));
    }
L14:;
   }
   v8 = _ecl_cdr(v8);
L10:;
   if (Null(v8)) { goto L31; }
   goto L9;
L31:;
  }
  if (!(ecl_number_equalp(v7supertype_tag,ecl_make_fixnum(-1)))) { goto L34; }
  T0 = ecl_make_fixnum(0);
  goto L33;
L34:;
  T1 = ecl_boole(ECL_BOOLIOR,(v6disjoint_tag),(v5subtype_tag));
  T0 = ecl_boole(ECL_BOOLANDC2,(v7supertype_tag),(T1));
L33:;
  cl_env_copy->nvalues = 2;
  cl_env_copy->values[1] = v5subtype_tag;
  cl_env_copy->values[0] = T0;
  return cl_env_copy->values[0];
 }
}
/*      function definition for REGISTER-TYPE                         */
/*      optimize speed 1, debug 1, space 1, safety 0                  */
static cl_object L40register_type(cl_object v1type, cl_object v2in_our_family_p, cl_object v3type___)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 value0 = L36find_registered_tag(1, v1type);
 if ((value0)!=ECL_NIL) { goto L2; }
 {
  cl_object v5;                                   /*  TAG-SUPER       */
  cl_object v6;                                   /*  TAG-SUB         */
  value0 = L39find_type_bounds(v1type, v2in_our_family_p, v3type___, ECL_NIL);
  {
   const int v7 = cl_env_copy->nvalues;
   v5 = value0;
   cl_object v8;
   v8 = (v7<=1)? ECL_NIL : cl_env_copy->values[1];
   v6 = v8;
  }
  {
   cl_object v7tag;
   v7tag = L35new_type_tag();
   T0 = ecl_boole(ECL_BOOLANDC2,(v5),(v6));
   L38update_types(T0, v7tag);
   v7tag = ecl_boole(ECL_BOOLIOR,(v7tag),(v6));
   value0 = L44push_type(v1type, v7tag);
   return value0;
  }
 }
L2:;
 cl_env_copy->nvalues = 1;
 return value0;
}
/*      function definition for REGISTER-MEMBER-TYPE                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L41register_member_type(cl_object v1object)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2pos;
   v2pos = ecl_assql(v1object,ecl_symbol_value(VV[56]));
   {
    cl_object v3;
    if (Null(v2pos)) { goto L4; }
    v3 = ecl_cdr(v2pos);
    goto L2;
L4:;
    v3 = ECL_NIL;
    goto L2;
L2:;
    if (Null(v3)) { goto L6; }
    value0 = v3;
    cl_env_copy->nvalues = 1;
    return value0;
L6:;
    if ((cl_realp(v1object))!=ECL_NIL) { goto L8; }
    value0 = L42simple_member_type(v1object);
    return value0;
L8:;
    if (!(floatp(v1object))) { goto L10; }
    if (!(ecl_zerop(v1object))) { goto L10; }
    T0 = cl_float_sign(1, v1object);
    if (!(ecl_minusp(T0))) { goto L13; }
    value0 = L42simple_member_type(v1object);
    return value0;
L13:;
    T0 = L43number_member_type(v1object);
    T1 = ecl_negate(v1object);
    T2 = L41register_member_type(T1);
    value0 = ecl_boole(ECL_BOOLANDC2,(T0),(T2));
    cl_env_copy->nvalues = 1;
    return value0;
L10:;
    value0 = L43number_member_type(v1object);
    return value0;
   }
  }
 }
}
/*      function definition for SIMPLE-MEMBER-TYPE                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L42simple_member_type(cl_object v1object)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2tag;
   v2tag = L35new_type_tag();
   L37maybe_save_types();
   cl_set(VV[56],cl_acons(v1object, v2tag, ecl_symbol_value(VV[56])));
   {
    cl_object v3;
    v3 = ecl_symbol_value(VV[58]);
    goto L9;
L8:;
    {
     cl_object v4i;
     v4i = ecl_car(v3);
     {
      cl_object v5type;
      v5type = ecl_car(v4i);
      if (Null(cl_typep(2, v1object, v5type))) { goto L13; }
      {
       cl_object v6;
       v6 = v4i;
       {
        cl_object v7;
        T0 = ecl_cdr(v4i);
        v7 = ecl_boole(ECL_BOOLIOR,(v2tag),(T0));
        (ECL_CONS_CDR(v6)=v7,v6);
       }
      }
     }
L13:;
    }
    v3 = ecl_cdr(v3);
L9:;
    if (Null(v3)) { goto L21; }
    goto L8;
L21:;
   }
   value0 = v2tag;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for NUMBER-MEMBER-TYPE                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L43number_member_type(cl_object v1object)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2base_type;
   cl_object v3type;
   if (!(ECL_FIXNUMP(v1object)||ECL_BIGNUMP(v1object))) { goto L2; }
   v2base_type = ECL_SYM("INTEGER",439);
   goto L1;
L2:;
   v2base_type = cl_type_of(v1object);
L1:;
   v3type = cl_list(3, v2base_type, v1object, v1object);
   value0 = L36find_registered_tag(1, v3type);
   if ((value0)!=ECL_NIL) { goto L6; }
   value0 = L58register_interval_type(v3type);
   return value0;
L6:;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for PUSH-TYPE                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L44push_type(cl_object v1type, cl_object v2tag)
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
   v3 = ecl_symbol_value(VV[56]);
   goto L5;
L4:;
   {
    cl_object v4i;
    v4i = ecl_car(v3);
    T0 = ecl_car(v4i);
    if (Null(cl_typep(2, T0, v1type))) { goto L9; }
    T0 = ecl_cdr(v4i);
    v2tag = ecl_boole(ECL_BOOLIOR,(v2tag),(T0));
L9:;
   }
   v3 = ecl_cdr(v3);
L5:;
   if (Null(v3)) { goto L14; }
   goto L4;
L14:;
  }
  T0 = CONS(v1type,v2tag);
  cl_set(VV[58],CONS(T0,ecl_symbol_value(VV[58])));
  value0 = v2tag;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for REGISTER-SATISFIES-TYPE               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L45register_satisfies_type(cl_object v1type)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  cl_env_copy->values[0] = ECL_SYM("SATISFIES",737);
  cl_env_copy->nvalues = 1;
  cl_throw(VV[62]);
 }
}
/*      function definition for REGISTER-CLASS                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L48register_class(cl_object v1class)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L36find_registered_tag(1, v1class);
  if ((value0)!=ECL_NIL) { goto L2; }
  {
   cl_object v2name;
   v2name = (cl_env_copy->function=(ECL_SYM("CLASS-NAME",936)->symbol.gfdef))->cfun.entry(1, v1class) /*  CLASS-NAME */;
   if (Null(v2name)) { goto L7; }
   T0 = cl_find_class(2, v2name, ECL_NIL);
   if (!((v1class)==(T0))) { goto L7; }
   value0 = L36find_registered_tag(1, v2name);
   if ((value0)!=ECL_NIL) { goto L11; }
   value0 = L63find_built_in_tag(v2name);
   goto L4;
L11:;
   goto L4;
L7:;
   value0 = ECL_NIL;
   goto L4;
  }
L4:;
  if ((value0)!=ECL_NIL) { goto L2; }
  if ((ecl_function_dispatch(cl_env_copy,ECL_SYM("CLASS-FINALIZED-P",1552))(1, v1class) /*  CLASS-FINALIZED-P */)!=ECL_NIL) { goto L15; }
  cl_env_copy->values[0] = ECL_NIL;
  cl_env_copy->nvalues = 1;
  cl_throw(VV[62]);
L15:;
  value0 = ECL_NIL;
  goto L13;
L13:;
  if ((value0)!=ECL_NIL) { goto L2; }
  {
   cl_object v2;
   v2 = ecl_make_cfun((cl_objectfn_fixed)LC46__lambda260,ECL_NIL,Cblock,1);
   T0 = v2;
  }
  {
   cl_object v2;
   v2 = ecl_make_cfun((cl_objectfn_fixed)LC47__lambda261,ECL_NIL,Cblock,2);
   T1 = v2;
  }
  value0 = L40register_type(v1class, T0, T1);
  return value0;
L2:;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function LAMBDA260                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC46__lambda260(cl_object v1c)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_make_bool(ECL_INSTANCEP(v1c));
  if ((value0)!=ECL_NIL) { goto L2; }
  value0 = ecl_make_bool(ECL_SYMBOLP(v1c));
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function LAMBDA261                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC47__lambda261(cl_object v1c1, cl_object v2c2)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_SYMBOLP(v1c1))) { goto L1; }
  v1c1 = cl_find_class(2, v1c1, ECL_NIL);
L1:;
  if (!(ECL_SYMBOLP(v2c2))) { goto L4; }
  v2c2 = cl_find_class(2, v2c2, ECL_NIL);
L4:;
  if (Null(v1c1)) { goto L8; }
  if (Null(v2c2)) { goto L8; }
  value0 = si_subclassp(2, v1c1, v2c2);
  return value0;
L8:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for REGISTER-ARRAY-TYPE                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L50register_array_type(cl_object v1type)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;                                  /*  ELT-TYPE        */
   value0 = L52parse_array_type(v1type);
   {
    const int v4 = cl_env_copy->nvalues;
    env0 = ECL_NIL;
    CLV0 = env0 = CONS(value0,env0);              /*  ARRAY-CLASS     */
    cl_object v5;
    v5 = (v4<=1)? ECL_NIL : cl_env_copy->values[1];
    v3 = v5;
    v5 = (v4<=2)? ECL_NIL : cl_env_copy->values[2];
    CLV1 = env0 = CONS(v5,env0);                  /*  DIMENSIONS      */
   }
   if (!((v3)==(ECL_SYM("*",20)))) { goto L2; }
   {
    cl_object v4;
    {
     cl_object v5;
     v5 = ecl_make_cclosure_va((cl_objectfn)LC49__lambda268,env0,Cblock,1);
     v4 = v5;
    }
    {
     cl_object v5;
     cl_object v6;
     cl_object v7;
     v5 = ecl_symbol_value(VV[37]);
     v6 = ECL_NIL;
     {
      cl_object v8;
      v8 = v5;
      value0 = ecl_make_bool(ECL_LISTP(v8));
      if ((value0)!=ECL_NIL) { goto L13; }
      T1 = ecl_make_bool(ECL_SYMBOLP(v8));
      goto L11;
L13:;
      T1 = value0;
      goto L11;
L11:;
      if (ecl_unlikely(!((T1)!=ECL_NIL)))
         FEwrong_type_argument(VV[63],v8);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v7 = v8;
     }
     {
      cl_object v8;
      cl_object v9;
      v8 = ecl_list1(ECL_NIL);
      v9 = v8;
L17:;
      v6 = _ecl_car(v7);
      {
       cl_object v10;
       v10 = _ecl_cdr(v7);
       value0 = ecl_make_bool(ECL_LISTP(v10));
       if ((value0)!=ECL_NIL) { goto L27; }
       T1 = ecl_make_bool(ECL_SYMBOLP(v10));
       goto L25;
L27:;
       T1 = value0;
       goto L25;
L25:;
       if (ecl_unlikely(!((T1)!=ECL_NIL)))
         FEwrong_type_argument(VV[63],v10);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v7 = v10;
      }
      {
       cl_object v10;
       v10 = v9;
       if (ecl_unlikely(ECL_ATOM(v10))) FEtype_error_cons(v10);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       T1 = v10;
      }
      T2 = ecl_function_dispatch(cl_env_copy,v4)(1, v6);
      v9 = ecl_list1(T2);
      (ECL_CONS_CDR(T1)=v9,T1);
      if (!(ecl_endp(v7))) { goto L35; }
      goto L18;
L35:;
      goto L17;
L18:;
      T0 = ecl_cdr(v8);
      goto L4;
     }
    }
   }
L4:;
   T1 = CONS(ECL_SYM("OR",616),T0);
   value0 = L65canonical_type(T1);
   return value0;
L2:;
   {
    cl_object v4;
    v1type = cl_list(3, ECL_CONS_CAR(CLV0), v3, ECL_CONS_CAR(CLV1));
    v4 = L36find_registered_tag(1, v1type);
    if (Null(v4)) { goto L41; }
    value0 = v4;
    cl_env_copy->nvalues = 1;
    return value0;
L41:;
    T0 = (VV[71]->symbol.gfdef);
    T1 = (VV[68]->symbol.gfdef);
    value0 = L40register_type(v1type, T0, T1);
    return value0;
   }
  }
 }
}
/*      closure LAMBDA268                                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC49__lambda268(cl_narg narg, cl_object v1type, ...)
{
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV1 = env0;                                     /*  DIMENSIONS      */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  value0 = cl_list(3, ECL_CONS_CAR(CLV0), v1type, ECL_CONS_CAR(CLV1));
  return value0;
 }
 }
}
/*      function definition for FAST-UPGRADED-ARRAY-ELEMENT-TYPE      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L51fast_upgraded_array_element_type(cl_object v1type)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!((v1type)==(ECL_SYM("*",20)))) { goto L1; }
  value0 = ECL_SYM("*",20);
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  if (Null(si_memq(v1type,VV[39]))) { goto L3; }
  value0 = v1type;
  cl_env_copy->nvalues = 1;
  return value0;
L3:;
  {
   cl_object v2;
   v2 = ecl_symbol_value(VV[37]);
   goto L8;
L7:;
   {
    cl_object v3other_type;
    v3other_type = ecl_car(v2);
    if (Null(L67fast_subtypep(v1type, v3other_type))) { goto L12; }
    value0 = v3other_type;
    cl_env_copy->nvalues = 1;
    return value0;
L12:;
   }
   v2 = ecl_cdr(v2);
L8:;
   if (Null(v2)) { goto L16; }
   goto L7;
L16:;
   value0 = ECL_T;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for PARSE-ARRAY-TYPE                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L52parse_array_type(cl_object v1input)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2type;
   cl_object v3name;
   cl_object v4elt_type;
   cl_object v5dims;
   v2type = v1input;
   {
    cl_object v6;
    v6 = v2type;
    {
     cl_object v7;
     v7 = v6;
     if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v6)) { goto L7; }
    {
     cl_object v7;
     v7 = ECL_CONS_CDR(v6);
     v2type = v7;
     v6 = ECL_CONS_CAR(v6);
    }
L7:;
    v3name = v6;
   }
   if (Null(v2type)) { goto L15; }
   {
    cl_object v6;
    v6 = v2type;
    {
     cl_object v7;
     v7 = v6;
     if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v6)) { goto L21; }
    {
     cl_object v7;
     v7 = ECL_CONS_CDR(v6);
     v2type = v7;
     v6 = ECL_CONS_CAR(v6);
    }
L21:;
    T0 = v6;
    goto L14;
   }
L15:;
   T0 = ECL_SYM("*",20);
L14:;
   v4elt_type = L51fast_upgraded_array_element_type(T0);
   if (Null(v2type)) { goto L28; }
   {
    cl_object v6;
    v6 = v2type;
    {
     cl_object v7;
     v7 = v6;
     if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v6)) { goto L34; }
    {
     cl_object v7;
     v7 = ECL_CONS_CDR(v6);
     v2type = v7;
     v6 = ECL_CONS_CAR(v6);
    }
L34:;
    v5dims = v6;
    goto L27;
   }
L28:;
   v5dims = ECL_SYM("*",20);
L27:;
   if (Null(v2type)) { goto L40; }
   cl_error(2, VV[64], v1input);
L40:;
   if (!(ecl_numberp(v5dims))) { goto L43; }
   if ((cl_L(3, ecl_make_fixnum(-1), v5dims, ecl_make_fixnum(64)))!=ECL_NIL) { goto L45; }
   cl_error(2, VV[65], v1input);
L45:;
   T0 = ecl_minus(ecl_make_fixnum(64),v5dims);
   v5dims = ecl_nthcdr(ecl_to_size(T0),VV[66]);
   goto L42;
L43:;
   if (!(ECL_CONSP(v5dims))) { goto L42; }
   {
    cl_object v6;
    v6 = v5dims;
    goto L52;
L51:;
    {
     cl_object v7i;
     v7i = ecl_car(v6);
     if ((v7i)==(ECL_SYM("*",20))) { goto L56; }
     if (!(ECL_FIXNUMP(v7i)||ECL_BIGNUMP(v7i))) { goto L60; }
     if ((cl_L(3, ecl_make_fixnum(-1), v7i, ecl_make_fixnum(536870911)))!=ECL_NIL) { goto L56; }
     goto L57;
L60:;
     goto L57;
L57:;
     cl_error(2, VV[67], v1input);
L56:;
    }
    v6 = ecl_cdr(v6);
L52:;
    if (Null(v6)) { goto L64; }
    goto L51;
L64:;
   }
L42:;
   cl_env_copy->nvalues = 3;
   cl_env_copy->values[2] = v5dims;
   cl_env_copy->values[1] = v4elt_type;
   cl_env_copy->values[0] = v3name;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for ARRAY-TYPE-<=                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L53array_type___(cl_object v1t1, cl_object v2t2)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_car(v1t1);
  T1 = ecl_car(v2t2);
  if (!((T0)==(T1))) { goto L4; }
  T0 = ecl_cadr(v1t1);
  T1 = ecl_cadr(v2t2);
  if ((T0)==(T1)) { goto L1; }
  goto L2;
L4:;
  goto L2;
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  {
   cl_object v3;
   cl_object v4;
   v3 = ecl_caddr(v1t1);
   v4 = ecl_caddr(v2t2);
   if (!((v4)==(ECL_SYM("*",20)))) { goto L8; }
   value0 = ECL_T;
   cl_env_copy->nvalues = 1;
   return value0;
L8:;
   if (!((v3)==(ECL_SYM("*",20)))) { goto L10; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L10:;
   {
    cl_object v5a;
    cl_object v6b;
    v5a = v3;
    v6b = v4;
    goto L16;
L15:;
    v5a = ecl_cdr(v5a);
    v6b = ecl_cdr(v6b);
L16:;
    if (ecl_endp(v5a)) { goto L21; }
    if (ecl_endp(v6b)) { goto L21; }
    T0 = ecl_car(v6b);
    if ((T0)==(ECL_SYM("*",20))) { goto L25; }
    T0 = ecl_car(v6b);
    T1 = ecl_car(v5a);
    if (!(ecl_eql(T0,T1))) { goto L21; }
    goto L22;
L25:;
L22:;
    goto L15;
L21:;
    if (!(v5a==ECL_NIL)) { goto L28; }
    value0 = ecl_make_bool(v6b==ECL_NIL);
    cl_env_copy->nvalues = 1;
    return value0;
L28:;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for ARRAY-TYPE-P                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L54array_type_p(cl_object v1type)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_CONSP(v1type))) { goto L2; }
  {
   cl_object v2;
   v2 = ecl_car(v1type);
   if (!((v2)==(ECL_SYM("COMPLEX-ARRAY",1853)))) { goto L9; }
   value0 = VV[69];
   goto L7;
L9:;
   value0 = ECL_NIL;
   goto L7;
L7:;
   if ((value0)!=ECL_NIL) { goto L6; }
   if (!((v2)==(ECL_SYM("SIMPLE-ARRAY",765)))) { goto L12; }
   value0 = VV[70];
   cl_env_copy->nvalues = 1;
   return value0;
L12:;
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
/*      function definition for REGISTER-ELEMENTARY-INTERVAL          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L57register_elementary_interval(cl_object v1type, cl_object v2b)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  v1type = cl_list(2, v1type, v2b);
  T0 = (ECL_SYM("EQUALP",338)->symbol.gfdef);
  value0 = L36find_registered_tag(2, v1type, T0);
  if ((value0)!=ECL_NIL) { goto L4; }
  {
   cl_object v4;                                  /*  TAG-SUPER       */
   cl_object v5;                                  /*  TAG-SUB         */
   {
    cl_object v6;
    v6 = ecl_make_cfun((cl_objectfn_fixed)LC55__lambda292,ECL_NIL,Cblock,1);
    T0 = v6;
   }
   {
    cl_object v6;
    v6 = ecl_make_cfun((cl_objectfn_fixed)LC56__lambda293,ECL_NIL,Cblock,2);
    T1 = v6;
   }
   value0 = L39find_type_bounds(v1type, T0, T1, ECL_T);
   {
    const int v6 = cl_env_copy->nvalues;
    v4 = value0;
    cl_object v7;
    v7 = (v6<=1)? ECL_NIL : cl_env_copy->values[1];
    v5 = v7;
   }
   {
    cl_object v6tag;
    v6tag = L35new_type_tag();
    T0 = ecl_boole(ECL_BOOLANDC2,(v4),(v5));
    L38update_types(T0, v6tag);
    v6tag = ecl_boole(ECL_BOOLIOR,(v6tag),(v5));
    value0 = L44push_type(v1type, v6tag);
    return value0;
   }
  }
L4:;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function LAMBDA292                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC55__lambda292(cl_object v1other_type)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_CONSP(v1other_type))) { goto L2; }
  T0 = ecl_cddr(v1other_type);
  value0 = ecl_make_bool(T0==ECL_NIL);
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function LAMBDA293                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC56__lambda293(cl_object v1i1, cl_object v2i2)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_car(v1i1);
  T1 = ecl_car(v2i2);
  if (!((T0)==(T1))) { goto L2; }
  T0 = ecl_cadr(v2i2);
  T1 = ecl_cadr(v1i1);
  value0 = L59bounds___(T0, T1);
  return value0;
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for REGISTER-INTERVAL-TYPE                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L58register_interval_type(cl_object v1interval)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2i;
   cl_object v3type;
   cl_object v4low;
   cl_object v5high;
   cl_object v6tag_high;
   cl_object v7tag_low;
   cl_object v8tag;
   v2i = v1interval;
   {
    cl_object v9;
    v9 = v2i;
    {
     cl_object v10;
     v10 = v9;
     if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v9)) { goto L7; }
    {
     cl_object v10;
     v10 = ECL_CONS_CDR(v9);
     v2i = v10;
     v9 = ECL_CONS_CAR(v9);
    }
L7:;
    v3type = v9;
   }
   if (Null(v2i)) { goto L14; }
   {
    cl_object v9;
    v9 = v2i;
    {
     cl_object v10;
     v10 = v9;
     if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v9)) { goto L20; }
    {
     cl_object v10;
     v10 = ECL_CONS_CDR(v9);
     v2i = v10;
     v9 = ECL_CONS_CAR(v9);
    }
L20:;
    v4low = v9;
    goto L13;
   }
L14:;
   v4low = ECL_SYM("*",20);
L13:;
   if (Null(v2i)) { goto L27; }
   {
    cl_object v9;
    v9 = v2i;
    {
     cl_object v10;
     v10 = v9;
     if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v9)) { goto L33; }
    {
     cl_object v10;
     v10 = ECL_CONS_CDR(v9);
     v2i = v10;
     v9 = ECL_CONS_CAR(v9);
    }
L33:;
    v5high = v9;
    goto L26;
   }
L27:;
   v5high = ECL_SYM("*",20);
L26:;
   if (!((v5high)==(ECL_SYM("*",20)))) { goto L40; }
   v6tag_high = ecl_make_fixnum(0);
   goto L39;
L40:;
   if (!((v3type)==(ECL_SYM("INTEGER",439)))) { goto L42; }
   if (!(ECL_CONSP(v5high))) { goto L46; }
   T0 = ecl_car(v5high);
   v5high = ecl_ceiling1(T0);
   goto L45;
L46:;
   T0 = ecl_one_plus(v5high);
   v5high = ecl_floor1(T0);
L45:;
   v6tag_high = L57register_elementary_interval(v3type, v5high);
   goto L39;
L42:;
   if (!(ECL_CONSP(v5high))) { goto L48; }
   T0 = ecl_car(v5high);
   v6tag_high = L57register_elementary_interval(v3type, T0);
   goto L39;
L48:;
   T0 = ecl_list1(v5high);
   v6tag_high = L57register_elementary_interval(v3type, T0);
L39:;
   if ((ECL_SYM("*",20))==(v4low)) { goto L54; }
   if (!((v3type)==(ECL_SYM("INTEGER",439)))) { goto L54; }
   if (!(ECL_FIXNUMP(v4low)||ECL_BIGNUMP(v4low))) { goto L52; }
   goto L53;
L54:;
L53:;
   T0 = v4low;
   goto L51;
L52:;
   if (!(ECL_CONSP(v4low))) { goto L57; }
   T1 = ecl_car(v4low);
   T2 = ecl_one_plus(T1);
   T0 = ecl_floor1(T2);
   goto L51;
L57:;
   T0 = ecl_ceiling1(v4low);
L51:;
   v7tag_low = L57register_elementary_interval(v3type, T0);
   v8tag = ecl_boole(ECL_BOOLANDC2,(v7tag_low),(v6tag_high));
   if ((v5high)==(ECL_SYM("*",20))) { goto L60; }
   L44push_type(v1interval, v8tag);
L60:;
   value0 = v8tag;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for BOUNDS-<=                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L59bounds___(cl_object v1b1, cl_object v2b2)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!((v1b1)==(ECL_SYM("*",20)))) { goto L1; }
  value0 = ECL_T;
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  if (!((v2b2)==(ECL_SYM("*",20)))) { goto L3; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L3:;
  if (!(ECL_CONSP(v1b1))) { goto L5; }
  if (!(ECL_CONSP(v2b2))) { goto L7; }
  T0 = ecl_car(v1b1);
  T1 = ecl_car(v2b2);
  value0 = ecl_make_bool(ecl_lowereq(T0,T1));
  cl_env_copy->nvalues = 1;
  return value0;
L7:;
  T0 = ecl_car(v1b1);
  value0 = ecl_make_bool(ecl_lower(T0,v2b2));
  cl_env_copy->nvalues = 1;
  return value0;
L5:;
  if (!(ECL_CONSP(v2b2))) { goto L9; }
  T0 = ecl_car(v2b2);
  value0 = ecl_make_bool(ecl_lowereq(v1b1,T0));
  cl_env_copy->nvalues = 1;
  return value0;
L9:;
  value0 = ecl_make_bool(ecl_lowereq(v1b1,v2b2));
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for BOUNDS-<                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L60bounds__(cl_object v1b1, cl_object v2b2)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!((v1b1)==(ECL_SYM("*",20)))) { goto L1; }
  {
   bool v3;
   v3 = (v2b2)==(ECL_SYM("*",20));
   value0 = (v3)?ECL_NIL:ECL_T;
   cl_env_copy->nvalues = 1;
   return value0;
  }
L1:;
  if (!((v2b2)==(ECL_SYM("*",20)))) { goto L3; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L3:;
  if (!(ECL_CONSP(v1b1))) { goto L5; }
  if (!(ECL_CONSP(v2b2))) { goto L7; }
  T0 = ecl_car(v1b1);
  T1 = ecl_car(v2b2);
  value0 = ecl_make_bool(ecl_lower(T0,T1));
  cl_env_copy->nvalues = 1;
  return value0;
L7:;
  T0 = ecl_car(v1b1);
  value0 = ecl_make_bool(ecl_lower(T0,v2b2));
  cl_env_copy->nvalues = 1;
  return value0;
L5:;
  if (!(ECL_CONSP(v2b2))) { goto L9; }
  T0 = ecl_car(v2b2);
  value0 = ecl_make_bool(ecl_lowereq(v1b1,T0));
  cl_env_copy->nvalues = 1;
  return value0;
L9:;
  value0 = ecl_make_bool(ecl_lower(v1b1,v2b2));
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for CANONICAL-COMPLEX-TYPE                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L61canonical_complex_type(cl_object v1real_type)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!((v1real_type)==(ECL_SYM("*",20)))) { goto L1; }
  v1real_type = ECL_SYM("REAL",705);
L1:;
  {
   cl_object v2ucpt;
   cl_object v3type;
   v2ucpt = cl_upgraded_complex_part_type(1, v1real_type);
   v3type = cl_list(2, ECL_SYM("COMPLEX",243), v2ucpt);
   value0 = L36find_registered_tag(1, v3type);
   if ((value0)!=ECL_NIL) { goto L7; }
   if (!((v2ucpt)==(ECL_SYM("REAL",705)))) { goto L9; }
   T0 = L61canonical_complex_type(ECL_SYM("FLOAT",376));
   T1 = L61canonical_complex_type(ECL_SYM("RATIONAL",689));
   value0 = ecl_boole(ECL_BOOLIOR,(T0),(T1));
   cl_env_copy->nvalues = 1;
   return value0;
L9:;
   if (!((v2ucpt)==(ECL_SYM("FLOAT",376)))) { goto L11; }
   T0 = L61canonical_complex_type(ECL_SYM("SINGLE-FLOAT",780));
   T1 = L61canonical_complex_type(ECL_SYM("DOUBLE-FLOAT",317));
   T2 = L61canonical_complex_type(ECL_SYM("LONG-FLOAT",510));
   value0 = cl_logior(3, T0, T1, T2);
   return value0;
L11:;
   {
    cl_object v4tag;
    v4tag = L35new_type_tag();
    value0 = L44push_type(v3type, v4tag);
    return value0;
   }
L7:;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for REGISTER-CONS-TYPE                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L62register_cons_type(cl_narg narg, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v1car_type;
  cl_object v2cdr_type;
  va_list args; va_start(args,narg);
  {
   int i = 0;
   if (i >= narg) {
    v1car_type = ECL_SYM("*",20);
   } else {
    i++;
    v1car_type = va_arg(args,cl_object);
   }
   if (i >= narg) {
    v2cdr_type = ECL_SYM("*",20);
   } else {
    i++;
    v2cdr_type = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v3;
   cl_object v4;
   if (!((v1car_type)==(ECL_SYM("*",20)))) { goto L4; }
   v3 = ecl_make_fixnum(-1);
   goto L3;
L4:;
   v3 = L65canonical_type(v1car_type);
L3:;
   if (!((v2cdr_type)==(ECL_SYM("*",20)))) { goto L7; }
   v4 = ecl_make_fixnum(-1);
   goto L6;
L7:;
   v4 = L65canonical_type(v2cdr_type);
L6:;
   if (ecl_zerop(v3)) { goto L11; }
   if (!(ecl_zerop(v4))) { goto L9; }
   goto L10;
L11:;
L10:;
   value0 = ecl_make_fixnum(0);
   cl_env_copy->nvalues = 1;
   return value0;
L9:;
   if (!(ecl_number_equalp(v3,ecl_make_fixnum(-1)))) { goto L13; }
   if (!(ecl_number_equalp(v4,ecl_make_fixnum(-1)))) { goto L13; }
   value0 = L65canonical_type(ECL_SYM("CONS",253));
   return value0;
L13:;
   cl_env_copy->values[0] = ECL_SYM("CONS",253);
   cl_env_copy->nvalues = 1;
   cl_throw(VV[62]);
  }
 }
}
/*      function definition for FIND-BUILT-IN-TAG                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L63find_built_in_tag(cl_object v1name)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2record;
   v2record = ECL_NIL;
   if (!((v1name)==(ECL_T))) { goto L2; }
   value0 = ecl_make_fixnum(-1);
   cl_env_copy->nvalues = 1;
   return value0;
L2:;
   v2record = ecl_gethash_safe(v1name,ecl_symbol_value(VV[75]),v1name);
   if (!((v2record)==(v1name))) { goto L4; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L4:;
   {
    cl_object v3alias;
    cl_object v4tag;
    {
     cl_object v5;
     v5 = v2record;
     {
      cl_object v6;
      v6 = v5;
      if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
     }
     if (Null(v5)) { goto L12; }
     {
      cl_object v6;
      v6 = ECL_CONS_CDR(v5);
      v2record = v6;
      v5 = ECL_CONS_CAR(v5);
     }
L12:;
     v3alias = v5;
    }
    v4tag = ECL_NIL;
    if (Null(v3alias)) { goto L20; }
    v4tag = L65canonical_type(v3alias);
    goto L19;
L20:;
    {
     cl_object v5strict_supertype;
     cl_object v6strict_supertype_tag;
     value0 = ecl_car(v2record);
     if ((value0)!=ECL_NIL) { goto L25; }
     v5strict_supertype = ECL_T;
     goto L23;
L25:;
     v5strict_supertype = value0;
     goto L23;
L23:;
     v6strict_supertype_tag = L65canonical_type(v5strict_supertype);
     v4tag = L35new_type_tag();
     if ((v5strict_supertype)==(ECL_T)) { goto L19; }
     L64extend_type_tag(v4tag, v6strict_supertype_tag);
    }
L19:;
    value0 = L44push_type(v1name, v4tag);
    return value0;
   }
  }
 }
}
/*      function definition for EXTEND-TYPE-TAG                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L64extend_type_tag(cl_object v1tag, cl_object v2minimal_supertype_tag)
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
   v3 = ecl_symbol_value(VV[58]);
   goto L4;
L3:;
   {
    cl_object v4type;
    v4type = ecl_car(v3);
    {
     cl_object v5other_tag;
     v5other_tag = ecl_cdr(v4type);
     T0 = ecl_boole(ECL_BOOLANDC2,(v2minimal_supertype_tag),(v5other_tag));
     if (!(ecl_zerop(T0))) { goto L8; }
     {
      cl_object v6;
      v6 = v4type;
      {
       cl_object v7;
       v7 = ecl_boole(ECL_BOOLIOR,(v1tag),(v5other_tag));
       (ECL_CONS_CDR(v6)=v7,v6);
      }
     }
    }
L8:;
   }
   v3 = ecl_cdr(v3);
L4:;
   if (Null(v3)) { goto L16; }
   goto L3;
L16:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for CANONICAL-TYPE                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L65canonical_type(cl_object v1type)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2;
   v2 = L36find_registered_tag(1, v1type);
   if (Null(v2)) { goto L2; }
   value0 = v2;
   cl_env_copy->nvalues = 1;
   return value0;
L2:;
   if (!((v1type)==(ECL_T))) { goto L4; }
   value0 = ecl_make_fixnum(-1);
   cl_env_copy->nvalues = 1;
   return value0;
L4:;
   if (!((v1type)==(ECL_NIL))) { goto L6; }
   value0 = ecl_make_fixnum(0);
   cl_env_copy->nvalues = 1;
   return value0;
L6:;
   if (!(ECL_SYMBOLP(v1type))) { goto L8; }
   {
    cl_object v3expander;
    v3expander = si_get_sysprop(v1type, VV[10]);
    if (Null(v3expander)) { goto L11; }
    v1type = ecl_function_dispatch(cl_env_copy,v3expander)(1, ECL_NIL);
    goto TTL;
L11:;
    {
     cl_object v4;
     v4 = L63find_built_in_tag(v1type);
     if (Null(v4)) { goto L16; }
     value0 = v4;
     cl_env_copy->nvalues = 1;
     return value0;
L16:;
     {
      cl_object v5class;
      v5class = cl_find_class(2, v1type, ECL_NIL);
      if (Null(v5class)) { goto L19; }
      value0 = L48register_class(v5class);
      return value0;
L19:;
      cl_env_copy->values[0] = ECL_NIL;
      cl_env_copy->nvalues = 1;
      cl_throw(VV[62]);
     }
    }
   }
L8:;
   if (!(ECL_CONSP(v1type))) { goto L22; }
   {
    cl_object v6;
    v6 = ecl_car(v1type);
    if (!((v6)==(ECL_SYM("AND",89)))) { goto L25; }
    T0 = (ECL_SYM("LOGAND",494)->symbol.gfdef);
    {
     cl_object v7;
     v7 = (VV[82]->symbol.gfdef);
     {
      cl_object v8;
      cl_object v9;
      cl_object v10;
      v8 = ecl_cdr(v1type);
      v9 = ECL_NIL;
      {
       cl_object v11;
       v11 = v8;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v10 = v11;
      }
      {
       cl_object v11;
       cl_object v12;
       v11 = ecl_list1(ECL_NIL);
       v12 = v11;
L37:;
       if (!(ecl_endp(v10))) { goto L39; }
       goto L38;
L39:;
       v9 = _ecl_car(v10);
       {
        cl_object v13;
        v13 = _ecl_cdr(v10);
        if (ecl_unlikely(!ECL_LISTP(v13))) FEtype_error_list(v13);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v10 = v13;
       }
       {
        cl_object v13;
        v13 = v12;
        if (ecl_unlikely(ECL_ATOM(v13))) FEtype_error_cons(v13);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        T2 = v13;
       }
       T3 = ecl_function_dispatch(cl_env_copy,v7)(1, v9);
       v12 = ecl_list1(T3);
       (ECL_CONS_CDR(T2)=v12,T2);
       goto L37;
L38:;
       T1 = ecl_cdr(v11);
       goto L28;
      }
     }
    }
L28:;
    value0 = cl_apply(2, T0, T1);
    return value0;
L25:;
    if (!((v6)==(ECL_SYM("OR",616)))) { goto L55; }
    T0 = (ECL_SYM("LOGIOR",502)->symbol.gfdef);
    {
     cl_object v7;
     v7 = (VV[82]->symbol.gfdef);
     {
      cl_object v8;
      cl_object v9;
      cl_object v10;
      v8 = ecl_cdr(v1type);
      v9 = ECL_NIL;
      {
       cl_object v11;
       v11 = v8;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v10 = v11;
      }
      {
       cl_object v11;
       cl_object v12;
       v11 = ecl_list1(ECL_NIL);
       v12 = v11;
L67:;
       if (!(ecl_endp(v10))) { goto L69; }
       goto L68;
L69:;
       v9 = _ecl_car(v10);
       {
        cl_object v13;
        v13 = _ecl_cdr(v10);
        if (ecl_unlikely(!ECL_LISTP(v13))) FEtype_error_list(v13);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v10 = v13;
       }
       {
        cl_object v13;
        v13 = v12;
        if (ecl_unlikely(ECL_ATOM(v13))) FEtype_error_cons(v13);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        T2 = v13;
       }
       T3 = ecl_function_dispatch(cl_env_copy,v7)(1, v9);
       v12 = ecl_list1(T3);
       (ECL_CONS_CDR(T2)=v12,T2);
       goto L67;
L68:;
       T1 = ecl_cdr(v11);
       goto L58;
      }
     }
    }
L58:;
    value0 = cl_apply(2, T0, T1);
    return value0;
L55:;
    if (!((v6)==(ECL_SYM("NOT",586)))) { goto L85; }
    T0 = ecl_cadr(v1type);
    T1 = L65canonical_type(T0);
    value0 = ecl_boole(ECL_BOOLXOR,(T1),ecl_make_fixnum(-1));
    cl_env_copy->nvalues = 1;
    return value0;
L85:;
    if (!((v6)==(ECL_SYM("EQL",336)))) { goto L92; }
    goto L89;
    goto L90;
L92:;
    goto L90;
L90:;
    if (!((v6)==(ECL_SYM("MEMBER",554)))) { goto L87; }
    goto L88;
L89:;
L88:;
    T0 = (ECL_SYM("LOGIOR",502)->symbol.gfdef);
    {
     cl_object v7;
     v7 = (VV[60]->symbol.gfdef);
     {
      cl_object v8;
      cl_object v9;
      cl_object v10;
      v8 = ecl_cdr(v1type);
      v9 = ECL_NIL;
      {
       cl_object v11;
       v11 = v8;
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v10 = v11;
      }
      {
       cl_object v11;
       cl_object v12;
       v11 = ecl_list1(ECL_NIL);
       v12 = v11;
L105:;
       if (!(ecl_endp(v10))) { goto L107; }
       goto L106;
L107:;
       v9 = _ecl_car(v10);
       {
        cl_object v13;
        v13 = _ecl_cdr(v10);
        if (ecl_unlikely(!ECL_LISTP(v13))) FEtype_error_list(v13);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v10 = v13;
       }
       {
        cl_object v13;
        v13 = v12;
        if (ecl_unlikely(ECL_ATOM(v13))) FEtype_error_cons(v13);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        T2 = v13;
       }
       T3 = ecl_function_dispatch(cl_env_copy,v7)(1, v9);
       v12 = ecl_list1(T3);
       (ECL_CONS_CDR(T2)=v12,T2);
       goto L105;
L106:;
       T1 = ecl_cdr(v11);
       goto L96;
      }
     }
    }
L96:;
    value0 = cl_apply(2, T0, T1);
    return value0;
L87:;
    if (!((v6)==(ECL_SYM("SATISFIES",737)))) { goto L123; }
    value0 = L45register_satisfies_type(v1type);
    return value0;
L123:;
    if (Null(ecl_memql(v6,VV[76]))) { goto L125; }
    value0 = L58register_interval_type(v1type);
    return value0;
L125:;
    if (!((v6)==(ECL_SYM("FLOAT",376)))) { goto L127; }
    T0 = ecl_cdr(v1type);
    T1 = CONS(ECL_SYM("SINGLE-FLOAT",780),T0);
    T2 = ecl_cdr(v1type);
    T3 = CONS(ECL_SYM("DOUBLE-FLOAT",317),T2);
    T4 = ecl_cdr(v1type);
    T5 = CONS(ECL_SYM("LONG-FLOAT",510),T4);
    v1type = cl_list(4, ECL_SYM("OR",616), T1, T3, T5);
    goto TTL;
L127:;
    if (!((v6)==(ECL_SYM("REAL",705)))) { goto L132; }
    T0 = ecl_cdr(v1type);
    T1 = CONS(ECL_SYM("INTEGER",439),T0);
    T2 = ecl_cdr(v1type);
    T3 = CONS(ECL_SYM("RATIO",688),T2);
    T4 = ecl_cdr(v1type);
    T5 = CONS(ECL_SYM("SINGLE-FLOAT",780),T4);
    T6 = ecl_cdr(v1type);
    T7 = CONS(ECL_SYM("DOUBLE-FLOAT",317),T6);
    T8 = ecl_cdr(v1type);
    T9 = CONS(ECL_SYM("LONG-FLOAT",510),T8);
    v1type = cl_list(6, ECL_SYM("OR",616), T1, T3, T5, T7, T9);
    goto TTL;
L132:;
    if (!((v6)==(ECL_SYM("RATIONAL",689)))) { goto L137; }
    T0 = ecl_cdr(v1type);
    T1 = CONS(ECL_SYM("INTEGER",439),T0);
    T2 = ecl_cdr(v1type);
    T3 = CONS(ECL_SYM("RATIO",688),T2);
    v1type = cl_list(3, ECL_SYM("OR",616), T1, T3);
    goto TTL;
L137:;
    if (!((v6)==(ECL_SYM("COMPLEX",243)))) { goto L142; }
    value0 = L63find_built_in_tag(v1type);
    if ((value0)!=ECL_NIL) { goto L145; }
    T1 = ecl_cdr(v1type);
    if (!(ecl_endp(T1))) { goto L148; }
    T0 = ECL_SYM("REAL",705);
    goto L147;
L148:;
    T0 = ecl_cadr(v1type);
L147:;
    value0 = L61canonical_complex_type(T0);
    return value0;
L145:;
    cl_env_copy->nvalues = 1;
    return value0;
L142:;
    if (!((v6)==(ECL_SYM("CONS",253)))) { goto L150; }
    T0 = (VV[74]->symbol.gfdef);
    T1 = ecl_cdr(v1type);
    value0 = cl_apply(2, T0, T1);
    return value0;
L150:;
    if (!((v6)==(ECL_SYM("ARRAY",98)))) { goto L153; }
    T0 = ecl_cdr(v1type);
    T1 = CONS(ECL_SYM("COMPLEX-ARRAY",1853),T0);
    T2 = L50register_array_type(T1);
    T3 = ecl_cdr(v1type);
    T4 = CONS(ECL_SYM("SIMPLE-ARRAY",765),T3);
    T5 = L50register_array_type(T4);
    value0 = ecl_boole(ECL_BOOLIOR,(T2),(T5));
    cl_env_copy->nvalues = 1;
    return value0;
L153:;
    if (!((v6)==(ECL_SYM("COMPLEX-ARRAY",1853)))) { goto L160; }
    goto L157;
    goto L158;
L160:;
    goto L158;
L158:;
    if (!((v6)==(ECL_SYM("SIMPLE-ARRAY",765)))) { goto L155; }
    goto L156;
L157:;
L156:;
    value0 = L50register_array_type(v1type);
    return value0;
L155:;
    if (!((v6)==(ECL_SYM("FUNCTION",398)))) { goto L163; }
    v1type = ECL_SYM("FUNCTION",398);
    goto TTL;
L163:;
    {
     cl_object v7expander;
     T0 = ecl_car(v1type);
     v7expander = si_get_sysprop(T0, VV[10]);
     if (Null(v7expander)) { goto L168; }
     T0 = ecl_cdr(v1type);
     v1type = ecl_function_dispatch(cl_env_copy,v7expander)(1, T0);
     goto TTL;
L168:;
     T0 = ecl_car(v1type);
     if ((ecl_assql(T0,ecl_symbol_value(VV[58])))!=ECL_NIL) { goto L172; }
     cl_env_copy->values[0] = ECL_NIL;
     cl_env_copy->nvalues = 1;
     cl_throw(VV[62]);
L172:;
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 1;
     return value0;
    }
   }
L22:;
   if (Null(ecl_function_dispatch(cl_env_copy,VV[100])(1, v1type) /*  CLASSP */)) { goto L175; }
   value0 = L48register_class(v1type);
   return value0;
L175:;
   if (Null(cl_fboundp(VV[80]))) { goto L177; }
   if (Null(ecl_function_dispatch(cl_env_copy,VV[80])(1, v1type) /*  FUNCTION-TYPE-P */)) { goto L177; }
   value0 = ecl_function_dispatch(cl_env_copy,VV[114])(1, v1type) /*  REGISTER-FUNCTION-TYPE */;
   return value0;
L177:;
   if (Null(cl_fboundp(VV[81]))) { goto L180; }
   if (Null(ecl_function_dispatch(cl_env_copy,VV[81])(1, v1type) /*  VALUES-TYPE-P */)) { goto L180; }
   value0 = ecl_function_dispatch(cl_env_copy,VV[115])(1, v1type) /*  REGISTER-VALUES-TYPE */;
   return value0;
L180:;
   value0 = L30error_type_specifier(v1type);
   return value0;
  }
 }
}
/*      function definition for SAFE-CANONICAL-TYPE                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L66safe_canonical_type(cl_object volatile v1type)
{
 cl_object volatile env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = VV[62];
  {
   ecl_frs_push(cl_env_copy,value0);
   if (__ecl_frs_push_result) {                   /*  BEGIN CATCH 1   */
    value0 = cl_env_copy->values[0];
   } else {
    value0 = L65canonical_type(v1type);
   }
   ecl_frs_pop(cl_env_copy);                      /*  END CATCH 1     */
  }
  return value0;
 }
}
/*      function definition for FAST-SUBTYPEP                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L67fast_subtypep(cl_object v1t1, cl_object v2t2)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!((v1t1)==(v2t2))) { goto L1; }
  cl_env_copy->nvalues = 2;
  cl_env_copy->values[1] = ECL_T;
  cl_env_copy->values[0] = ECL_T;
  return cl_env_copy->values[0];
L1:;
  {
   cl_object v3tag1;
   cl_object v4tag2;
   v3tag1 = L66safe_canonical_type(v1t1);
   v4tag2 = L66safe_canonical_type(v2t2);
   if (!(ecl_numberp(v3tag1))) { goto L5; }
   if (!(ecl_numberp(v4tag2))) { goto L5; }
   v3tag1 = L66safe_canonical_type(v1t1);
   v4tag2 = L66safe_canonical_type(v2t2);
L5:;
   if (!(ecl_numberp(v3tag1))) { goto L11; }
   if (!(ecl_numberp(v4tag2))) { goto L11; }
   T0 = ecl_boole(ECL_BOOLANDC2,(v3tag1),(v4tag2));
   {
    bool v5;
    v5 = ecl_zerop(T0);
    cl_env_copy->nvalues = 2;
    cl_env_copy->values[1] = ECL_T;
    cl_env_copy->values[0] = ecl_make_bool(v5);
    return cl_env_copy->values[0];
   }
L11:;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for SUBTYPEP                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_subtypep(cl_narg narg, cl_object v1t1, cl_object v2t2, ...)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>3)) FEwrong_num_arguments_anonym();
 {
  cl_object v3env;
  va_list args; va_start(args,v2t2);
  {
   int i = 2;
   if (i >= narg) {
    v3env = ECL_NIL;
   } else {
    i++;
    v3env = va_arg(args,cl_object);
   }
  }
  va_end(args);
  if (!((v1t1)==(v2t2))) { goto L2; }
  cl_env_copy->nvalues = 2;
  cl_env_copy->values[1] = ECL_T;
  cl_env_copy->values[0] = ECL_T;
  return cl_env_copy->values[0];
L2:;
  if (!(ECL_INSTANCEP(v1t1))) { goto L4; }
  if (!(ECL_INSTANCEP(v2t2))) { goto L4; }
  if (Null(ecl_function_dispatch(cl_env_copy,VV[100])(1, v1t1) /*  CLASSP */)) { goto L4; }
  if (Null(ecl_function_dispatch(cl_env_copy,VV[100])(1, v2t2) /*  CLASSP */)) { goto L4; }
  T0 = si_subclassp(2, v1t1, v2t2);
  cl_env_copy->nvalues = 2;
  cl_env_copy->values[1] = ECL_T;
  cl_env_copy->values[0] = T0;
  return cl_env_copy->values[0];
L4:;
  {
   cl_object v4cache;
   uint8_t v5hash;
   cl_object v6elt;
   v4cache = ecl_symbol_value(VV[4]);
   T0 = si_hash_eql(2, v1t1, v2t2);
   v5hash = ecl_to_uint8_t(ecl_boole(ECL_BOOLAND,(T0),(ecl_make_fixnum(255))));
   {
    cl_object v7;
    v7 = v4cache;
    T0 = v7;
    {
     cl_fixnum v8;
     {
      cl_object v9;
      v9 = ecl_make_uint8_t(v5hash);
      if (ecl_unlikely((ecl_fixnum(v9))>=(v7)->vector.dim))
           FEwrong_index(ECL_NIL,v7,-1,ecl_make_fixnum(ecl_fixnum(v9)),(v7)->vector.dim);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v8 = ecl_fixnum(v9);
     }
     v6elt = ecl_aref_unsafe(T0,v8);
    }
   }
   if (Null(v6elt)) { goto L17; }
   T0 = ecl_caar(v6elt);
   if (!((T0)==(v1t1))) { goto L17; }
   T0 = ecl_cdar(v6elt);
   if (!((T0)==(v2t2))) { goto L17; }
   v6elt = ecl_cdr(v6elt);
   T0 = ecl_car(v6elt);
   T1 = ecl_cdr(v6elt);
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = T1;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
L17:;
   ecl_bds_push(cl_env_copy,VV[55]);              /*  *HIGHEST-TYPE-TAG* */
   ecl_bds_bind(cl_env_copy,VV[54],ECL_T);        /*  *SAVE-TYPES-DATABASE* */
   ecl_bds_push(cl_env_copy,VV[56]);              /*  *MEMBER-TYPES*  */
   ecl_bds_push(cl_env_copy,VV[58]);              /*  *ELEMENTARY-TYPES* */
   {
    cl_object v8;                                 /*  TEST            */
    cl_object v9;                                 /*  CONFIDENT       */
    value0 = L67fast_subtypep(v1t1, v2t2);
    {
     const int v10 = cl_env_copy->nvalues;
     v8 = value0;
     cl_object v11;
     v11 = (v10<=1)? ECL_NIL : cl_env_copy->values[1];
     v9 = v11;
    }
    {
     cl_object v10;
     v10 = v4cache;
     T0 = v10;
     {
      cl_fixnum v11;
      {
       cl_object v12;
       v12 = ecl_make_uint8_t(v5hash);
       if (ecl_unlikely((ecl_fixnum(v12))>=(v10)->vector.dim))
           FEwrong_index(ECL_NIL,v10,-1,ecl_make_fixnum(ecl_fixnum(v12)),(v10)->vector.dim);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v11 = ecl_fixnum(v12);
      }
      T1 = CONS(v1t1,v2t2);
      T2 = cl_listX(3, T1, v8, v9);
      ecl_aset_unsafe(T0,v11,T2);
     }
    }
    cl_env_copy->nvalues = 2;
    cl_env_copy->values[1] = v9;
    cl_env_copy->values[0] = v8;
    ecl_bds_unwind_n(cl_env_copy,4);
    return cl_env_copy->values[0];
   }
  }
 }
}
/*      function definition for FAST-TYPE=                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L68fast_type_(cl_object v1t1, cl_object v2t2)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!((v1t1)==(v2t2))) { goto L1; }
  cl_env_copy->nvalues = 2;
  cl_env_copy->values[1] = ECL_T;
  cl_env_copy->values[0] = ECL_T;
  return cl_env_copy->values[0];
L1:;
  {
   cl_object v3;
   cl_object v4;
   cl_object v5;
   cl_object v6tag1;
   cl_object v7tag2;
   v3 = L66safe_canonical_type(v1t1);
   v4 = L66safe_canonical_type(v2t2);
   v5 = L66safe_canonical_type(ECL_SYM("COMPLEX",243));
   v6tag1 = v3;
   v7tag2 = v4;
   if (!(ecl_numberp(v6tag1))) { goto L8; }
   if (!(ecl_numberp(v7tag2))) { goto L8; }
   if (!(!ecl_number_equalp(v7tag2,v5))) { goto L8; }
   v6tag1 = L66safe_canonical_type(v1t1);
   v7tag2 = L66safe_canonical_type(v2t2);
L8:;
   if (!(ecl_numberp(v6tag1))) { goto L15; }
   if (!(ecl_numberp(v7tag2))) { goto L15; }
   if (!(!ecl_number_equalp(v7tag2,v5))) { goto L15; }
   {
    bool v8;
    v8 = ecl_number_equalp(v6tag1,v7tag2);
    cl_env_copy->nvalues = 2;
    cl_env_copy->values[1] = ECL_T;
    cl_env_copy->values[0] = ecl_make_bool(v8);
    return cl_env_copy->values[0];
   }
L15:;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for TYPE=                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L69type_(cl_object v1t1, cl_object v2t2)
{
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
   v3 = ecl_symbol_value(VV[55]);
   v4 = ecl_symbol_value(VV[56]);
   v5 = ecl_symbol_value(VV[58]);
   ecl_bds_bind(cl_env_copy,VV[55],v3);           /*  *HIGHEST-TYPE-TAG* */
   ecl_bds_bind(cl_env_copy,VV[54],ECL_T);        /*  *SAVE-TYPES-DATABASE* */
   ecl_bds_bind(cl_env_copy,VV[56],v4);           /*  *MEMBER-TYPES*  */
   ecl_bds_bind(cl_env_copy,VV[58],v5);           /*  *ELEMENTARY-TYPES* */
   value0 = L68fast_type_(v1t1, v2t2);
   ecl_bds_unwind_n(cl_env_copy,4);
   return value0;
  }
 }
}

#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/lsp/predlib.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclyAfyXkZ7_VA86lq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:LSP;PREDLIB.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclyAfyXkZ7_VA86lq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_cmp_defun(VV[85]);                          /*  CONSTANTLY-T    */
  ecl_cmp_defun(VV[86]);                          /*  CONSTANTLY-NIL  */
  (void)0; /* No entry created for CONSTANTLY */
  si_Xmake_special(VV[4]);
  cl_set(VV[4],si_make_vector(ECL_T, ecl_make_fixnum(256), ECL_NIL, ECL_NIL, ECL_NIL, ecl_make_fixnum(0)));
  si_Xmake_special(VV[5]);
  cl_set(VV[5],si_make_vector(ECL_T, ecl_make_fixnum(128), ECL_NIL, ECL_NIL, ECL_NIL, ecl_make_fixnum(0)));
  ecl_cmp_defun(VV[87]);                          /*  SUBTYPEP-CLEAR-CACHE */
  ecl_cmp_defun(VV[88]);                          /*  CREATE-TYPE-NAME */
  (void)0; /* No entry created for DO-DEFTYPE */
  ecl_cmp_defmacro(VV[89]);                       /*  DEFTYPE         */
  si_do_deftype(3, ECL_SYM("BOOLEAN",157), VVtemp[1], VVtemp[2]);
  si_do_deftype(3, VV[17], VVtemp[3], VVtemp[4]);
  si_do_deftype(3, ECL_SYM("FIXNUM",374), VVtemp[5], VVtemp[6]);
  si_do_deftype(3, ECL_SYM("BIGNUM",124), VVtemp[7], VVtemp[8]);
  si_do_deftype(3, ECL_SYM("BYTE8",1358), VVtemp[9], VVtemp[10]);
  si_do_deftype(3, ECL_SYM("INTEGER8",1363), VVtemp[11], VVtemp[12]);
  si_do_deftype(3, ECL_SYM("BYTE16",1359), VVtemp[13], VVtemp[14]);
  si_do_deftype(3, ECL_SYM("INTEGER16",1364), VVtemp[15], VVtemp[16]);
  si_do_deftype(3, ECL_SYM("BYTE32",1360), VVtemp[17], VVtemp[18]);
  si_do_deftype(3, ECL_SYM("INTEGER32",1365), VVtemp[19], VVtemp[20]);
  si_do_deftype(3, ECL_SYM("BYTE64",1361), VVtemp[21], VVtemp[22]);
  si_do_deftype(3, ECL_SYM("INTEGER64",1366), VVtemp[23], VVtemp[24]);
  si_do_deftype(3, ECL_SYM("CL-FIXNUM",1643), VVtemp[25], VVtemp[26]);
  si_do_deftype(3, ECL_SYM("CL-INDEX",1644), VVtemp[27], VVtemp[28]);
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC10__lambda79,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  si_do_deftype(3, ECL_SYM("REAL",705), VVtemp[29], T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC11__lambda97,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  si_do_deftype(3, ECL_SYM("SHORT-FLOAT",758), VVtemp[30], T0);
 }
  si_do_deftype(3, ECL_SYM("BIT",125), VVtemp[31], VVtemp[32]);
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC12__lambda102,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  si_do_deftype(3, ECL_SYM("MOD",562), VVtemp[33], T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC13__lambda106,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  si_do_deftype(3, ECL_SYM("SIGNED-BYTE",763), VVtemp[34], T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC14__lambda110,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  si_do_deftype(3, ECL_SYM("UNSIGNED-BYTE",887), VVtemp[35], T0);
 }
  si_do_deftype(3, ECL_SYM("NULL",607), VVtemp[36], VVtemp[37]);
  si_do_deftype(3, ECL_SYM("SEQUENCE",743), VVtemp[38], VVtemp[39]);
  si_do_deftype(3, ECL_SYM("LIST",483), VVtemp[40], VVtemp[41]);
  si_do_deftype(3, VV[21], VVtemp[42], VVtemp[43]);
  si_do_deftype(3, ECL_SYM("PROPERTY-LIST",1713), VVtemp[44], VVtemp[45]);
  si_do_deftype(3, ECL_SYM("ATOM",121), VVtemp[46], VVtemp[47]);
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC15__lambda126,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  si_do_deftype(3, ECL_SYM("VECTOR",900), VVtemp[48], T0);
 }
  si_do_deftype(3, ECL_SYM("EXTENDED-CHAR",348), VVtemp[49], VVtemp[50]);
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC16__lambda133,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  si_do_deftype(3, ECL_SYM("STRING",807), VVtemp[51], T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC17__lambda137,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  si_do_deftype(3, ECL_SYM("BASE-STRING",123), VVtemp[52], T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC18__lambda141,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  si_do_deftype(3, ECL_SYM("EXTENDED-STRING",1733), VVtemp[53], T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC19__lambda145,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  si_do_deftype(3, ECL_SYM("BIT-VECTOR",136), VVtemp[54], T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC20__lambda149,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  si_do_deftype(3, ECL_SYM("SIMPLE-VECTOR",776), VVtemp[55], T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC21__lambda153,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  si_do_deftype(3, ECL_SYM("SIMPLE-STRING",773), VVtemp[56], T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC22__lambda157,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  si_do_deftype(3, ECL_SYM("SIMPLE-BASE-STRING",766), VVtemp[57], T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC23__lambda161,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  si_do_deftype(3, ECL_SYM("SIMPLE-BIT-VECTOR",767), VVtemp[58], T0);
 }
  si_do_deftype(3, ECL_SYM("ARRAY-INDEX",1850), VVtemp[59], VVtemp[60]);
  si_do_deftype(3, ECL_SYM("VIRTUAL-STREAM",1852), VVtemp[61], VVtemp[62]);
  ecl_cmp_defun(VV[94]);                          /*  SIMPLE-ARRAY-P  */
  ecl_cmp_defun(VV[95]);                          /*  COMPLEX-ARRAY-P */
  (void)0; /* No entry created for RATIOP */
  (void)0; /* No entry created for SHORT-FLOAT-P */
  (void)0; /* No entry created for SINGLE-FLOAT-P */
  (void)0; /* No entry created for DOUBLE-FLOAT-P */
  (void)0; /* No entry created for LONG-FLOAT-P */
  ecl_cmp_defun(VV[96]);                          /*  COMPLEX-SINGLE-FLOAT-P */
  ecl_cmp_defun(VV[97]);                          /*  COMPLEX-DOUBLE-FLOAT-P */
  ecl_cmp_defun(VV[98]);                          /*  COMPLEX-LONG-FLOAT-P */
  si_Xmake_constant(VV[35], VVtemp[63]);
 {
  cl_object T0, T1;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object v1;
   v1 = ecl_symbol_value(VV[35]);
   goto L140;
L139:;
   {
    cl_object v2l;
    v2l = ecl_car(v1);
    T0 = ecl_car(v2l);
    T1 = ecl_cdr(v2l);
    si_put_sysprop(T0, VV[36], T1);
   }
   v1 = ecl_cdr(v1);
L140:;
   if (Null(v1)) { goto L147; }
   goto L139;
L147:;
  }
 }
  si_Xmake_constant(VV[37], VVtemp[64]);
  (void)0; /* No entry created for UPGRADED-ARRAY-ELEMENT-TYPE */
  (void)0; /* No entry created for UPGRADED-COMPLEX-PART-TYPE */
  (void)0; /* No entry created for IN-INTERVAL-P */
  (void)0; /* No entry created for ERROR-TYPE-SPECIFIER */
  (void)0; /* No entry created for MATCH-DIMENSIONS */
  (void)0; /* No entry created for TYPEP */
  (void)0; /* No entry created for SUBCLASSP */
  (void)0; /* No entry created for OF-CLASS-P */
  ecl_cmp_defun(VV[99]);                          /*  NORMALIZE-TYPE  */
  ecl_cmp_defun(VV[101]);                         /*  EXPAND-DEFTYPE  */
  (void)0; /* No entry created for COERCE */
  si_Xmake_special(VV[54]);
  cl_set(VV[54],ECL_NIL);
  si_Xmake_special(VV[55]);
  cl_set(VV[55],ecl_make_fixnum(1));
  si_Xmake_special(VV[56]);
  cl_set(VV[56],ECL_NIL);
  si_Xmake_special(VV[57]);
  cl_set(VV[57],ecl_make_fixnum(1));
  si_Xmake_special(VV[58]);
  cl_set(VV[58],ECL_NIL);
  (void)0; /* No entry created for NEW-TYPE-TAG */
  (void)0; /* No entry created for FIND-REGISTERED-TAG */
  (void)0; /* No entry created for MAYBE-SAVE-TYPES */
  ecl_cmp_defun(VV[105]);                         /*  UPDATE-TYPES    */
  (void)0; /* No entry created for FIND-TYPE-BOUNDS */
  (void)0; /* No entry created for REGISTER-TYPE */
  ecl_cmp_defun(VV[106]);                         /*  REGISTER-MEMBER-TYPE */
  (void)0; /* No entry created for SIMPLE-MEMBER-TYPE */
  ecl_cmp_defun(VV[107]);                         /*  NUMBER-MEMBER-TYPE */
  (void)0; /* No entry created for PUSH-TYPE */
  (void)0; /* No entry created for REGISTER-SATISFIES-TYPE */
  (void)0; /* No entry created for REGISTER-CLASS */
  (void)0; /* No entry created for REGISTER-ARRAY-TYPE */
  (void)0; /* No entry created for FAST-UPGRADED-ARRAY-ELEMENT-TYPE */
  (void)0; /* No entry created for PARSE-ARRAY-TYPE */
  ecl_cmp_defun(VV[108]);                         /*  ARRAY-TYPE-<=   */
  ecl_cmp_defun(VV[109]);                         /*  ARRAY-TYPE-P    */
  (void)0; /* No entry created for REGISTER-ELEMENTARY-INTERVAL */
  (void)0; /* No entry created for REGISTER-INTERVAL-TYPE */
  ecl_cmp_defun(VV[110]);                         /*  BOUNDS-<=       */
  ecl_cmp_defun(VV[111]);                         /*  BOUNDS-<        */
  (void)0; /* No entry created for CANONICAL-COMPLEX-TYPE */
  ecl_cmp_defun(VV[112]);                         /*  REGISTER-CONS-TYPE */
 {
  cl_object T0, T1;
  cl_object volatile env0 = ECL_NIL;
  T0 = cl_make_hash_table(4, ECL_SYM("TEST",1343), ECL_SYM("EQ",335), ECL_SYM("SIZE",1335), ecl_make_fixnum(128));
  T1 = si_hash_table_fill(T0, VVtemp[65]);
  si_Xmake_constant(VV[75], T1);
 }
  (void)0; /* No entry created for FIND-BUILT-IN-TAG */
  (void)0; /* No entry created for EXTEND-TYPE-TAG */
  ecl_cmp_defun(VV[113]);                         /*  CANONICAL-TYPE  */
  ecl_cmp_defun(VV[116]);                         /*  SAFE-CANONICAL-TYPE */
  (void)0; /* No entry created for FAST-SUBTYPEP */
  (void)0; /* No entry created for SUBTYPEP */
  (void)0; /* No entry created for FAST-TYPE= */
  ecl_cmp_defun(VV[117]);                         /*  TYPE=           */
}
