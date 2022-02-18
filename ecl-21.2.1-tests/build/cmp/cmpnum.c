/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;CMPNUM.LSP                                    */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/cmp/cmpnum.eclh"
/*      local function LAMBDA3                                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC1__lambda3(cl_object v1, cl_object v2)
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
   cl_object v4op_code;
   cl_object v5op1;
   cl_object v6op2;
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
   ecl_function_dispatch(cl_env_copy,VV[38])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L6:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4op_code = v7;
   }
   if (!(v3==ECL_NIL)) { goto L12; }
   ecl_function_dispatch(cl_env_copy,VV[38])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L12:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5op1 = v7;
   }
   if (!(v3==ECL_NIL)) { goto L18; }
   ecl_function_dispatch(cl_env_copy,VV[38])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L18:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v6op2 = v7;
   }
   if (Null(v3)) { goto L23; }
   ecl_function_dispatch(cl_env_copy,VV[39])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L23:;
   if (Null(cl_constantp(2, v4op_code, ecl_symbol_value(VV[0])))) { goto L29; }
   {
    cl_object v7;
    v7 = ecl_function_dispatch(cl_env_copy,ECL_SYM("CONSTANT-FORM-VALUE",2118))(2, v4op_code, ecl_symbol_value(VV[0])) /*  CONSTANT-FORM-VALUE */;
    if (!((v7)==(ecl_make_fixnum(0)))) { goto L32; }
    value0 = cl_list(4, ECL_SYM("PROGN",673), v5op1, v6op2, ecl_make_fixnum(0));
    goto L27;
L32:;
    if (!((v7)==(ecl_make_fixnum(15)))) { goto L34; }
    value0 = cl_list(4, ECL_SYM("PROGN",673), v5op1, v6op2, ecl_make_fixnum(-1));
    goto L27;
L34:;
    if (!((v7)==(ecl_make_fixnum(3)))) { goto L36; }
    value0 = cl_list(3, ECL_SYM("PROG1",671), v5op1, v6op2);
    goto L27;
L36:;
    if (!((v7)==(ecl_make_fixnum(5)))) { goto L38; }
    value0 = cl_list(3, ECL_SYM("PROGN",673), v5op1, v6op2);
    goto L27;
L38:;
    if (!((v7)==(ecl_make_fixnum(12)))) { goto L40; }
    T0 = cl_list(2, ECL_SYM("LOGNOT",505), v5op1);
    value0 = cl_list(3, ECL_SYM("PROG1",671), T0, v6op2);
    goto L27;
L40:;
    if (!((v7)==(ecl_make_fixnum(10)))) { goto L42; }
    T0 = cl_list(2, ECL_SYM("LOGNOT",505), v6op2);
    value0 = cl_list(3, ECL_SYM("PROGN",673), v5op1, T0);
    goto L27;
L42:;
    if (!((v7)==(ecl_make_fixnum(1)))) { goto L44; }
    value0 = cl_list(3, ECL_SYM("LOGAND",494), v5op1, v6op2);
    goto L27;
L44:;
    if (!((v7)==(ecl_make_fixnum(7)))) { goto L46; }
    value0 = cl_list(3, ECL_SYM("LOGIOR",502), v5op1, v6op2);
    goto L27;
L46:;
    if (!((v7)==(ecl_make_fixnum(6)))) { goto L48; }
    value0 = cl_list(3, ECL_SYM("LOGXOR",509), v5op1, v6op2);
    goto L27;
L48:;
    if (!((v7)==(ecl_make_fixnum(9)))) { goto L50; }
    value0 = cl_list(3, ECL_SYM("LOGEQV",499), v5op1, v6op2);
    goto L27;
L50:;
    if (!((v7)==(ecl_make_fixnum(14)))) { goto L52; }
    value0 = cl_list(3, ECL_SYM("LOGNAND",503), v5op1, v6op2);
    goto L27;
L52:;
    if (!((v7)==(ecl_make_fixnum(8)))) { goto L54; }
    value0 = cl_list(3, ECL_SYM("LOGNOR",504), v5op1, v6op2);
    goto L27;
L54:;
    if (!((v7)==(ecl_make_fixnum(4)))) { goto L56; }
    value0 = cl_list(3, ECL_SYM("LOGANDC1",495), v5op1, v6op2);
    goto L27;
L56:;
    if (!((v7)==(ecl_make_fixnum(2)))) { goto L58; }
    value0 = cl_list(3, ECL_SYM("LOGANDC2",496), v5op1, v6op2);
    goto L27;
L58:;
    if (!((v7)==(ecl_make_fixnum(13)))) { goto L60; }
    value0 = cl_list(3, ECL_SYM("LOGORC1",506), v5op1, v6op2);
    goto L27;
L60:;
    if (!((v7)==(ecl_make_fixnum(11)))) { goto L62; }
    value0 = cl_list(3, ECL_SYM("LOGORC2",507), v5op1, v6op2);
    goto L27;
L62:;
    value0 = ECL_NIL;
    goto L27;
   }
L29:;
   value0 = ECL_NIL;
   goto L27;
L27:;
   if ((value0)!=ECL_NIL) { goto L26; }
   value0 = v1;
   cl_env_copy->nvalues = 1;
   return value0;
L26:;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for SIMPLIFY-ARITHMETIC                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2simplify_arithmetic(cl_object v1operator, cl_object v2args, cl_object v3whole)
{
 cl_object T0, T1, T2, T3, T4;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = (ECL_SYM("NUMBERP",609)->symbol.gfdef);
  if (Null(cl_every(2, T0, v2args))) { goto L1; }
  value0 = cl_apply(2, v1operator, v2args);
  return value0;
L1:;
  {
   cl_fixnum v4l;
   v4l = ecl_length(v2args);
   if (!((v4l)>(2))) { goto L5; }
   {
    cl_object v5;
    v5 = v1operator;
    T0 = ecl_car(v2args);
    T1 = ecl_cadr(v2args);
    T2 = cl_list(2, T0, T1);
    T3 = L2simplify_arithmetic(v1operator, T2, ECL_NIL);
    T4 = ecl_cddr(v2args);
    v2args = CONS(T3,T4);
    v3whole = ECL_NIL;
    v1operator = v5;
   }
   goto TTL;
L5:;
   if (!((v4l)==(2))) { goto L11; }
   value0 = v3whole;
   if ((value0)!=ECL_NIL) { goto L14; }
   value0 = CONS(v1operator,v2args);
   cl_env_copy->nvalues = 1;
   return value0;
L14:;
   cl_env_copy->nvalues = 1;
   return value0;
L11:;
   if (!((v4l)==(1))) { goto L16; }
   if ((v1operator)==(ECL_SYM("*",20))) { goto L20; }
   if (!((v1operator)==(ECL_SYM("+",16)))) { goto L18; }
   goto L19;
L20:;
L19:;
   value0 = ecl_car(v2args);
   cl_env_copy->nvalues = 1;
   return value0;
L18:;
   value0 = v3whole;
   if ((value0)!=ECL_NIL) { goto L23; }
   value0 = CONS(v1operator,v2args);
   cl_env_copy->nvalues = 1;
   return value0;
L23:;
   cl_env_copy->nvalues = 1;
   return value0;
L16:;
   if (!((v1operator)==(ECL_SYM("*",20)))) { goto L25; }
   value0 = ecl_make_fixnum(1);
   cl_env_copy->nvalues = 1;
   return value0;
L25:;
   if (!((v1operator)==(ECL_SYM("+",16)))) { goto L27; }
   value0 = ecl_make_fixnum(0);
   cl_env_copy->nvalues = 1;
   return value0;
L27:;
   value0 = v3whole;
   if ((value0)!=ECL_NIL) { goto L31; }
   T0 = CONS(v1operator,v2args);
   goto L29;
L31:;
   T0 = value0;
   goto L29;
L29:;
   T1 = cl_list(2, v1operator, T0);
   value0 = cl_error(5, VV[1], VV[2], VV[3], ECL_SYM("FORMAT-ARGUMENTS",1262), T1);
   return value0;
  }
 }
}
/*      local function LAMBDA11                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC3__lambda11(cl_object v1, cl_object v2)
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
   T0 = ecl_car(v1);
   if (!((T0)==(ECL_SYM("FUNCALL",396)))) { goto L2; }
   T0 = ecl_caadr(v1);
   if (!((T0)==(ECL_SYM("FUNCTION",398)))) { goto L2; }
   v3 = ecl_cddr(v1);
   goto L1;
L2:;
   v3 = ecl_cdr(v1);
L1:;
   value0 = L2simplify_arithmetic(ECL_SYM("*",20), v3, v1);
   return value0;
  }
 }
}
/*      local function LAMBDA15                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC4__lambda15(cl_object v1, cl_object v2)
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
   T0 = ecl_car(v1);
   if (!((T0)==(ECL_SYM("FUNCALL",396)))) { goto L2; }
   T0 = ecl_caadr(v1);
   if (!((T0)==(ECL_SYM("FUNCTION",398)))) { goto L2; }
   v3 = ecl_cddr(v1);
   goto L1;
L2:;
   v3 = ecl_cdr(v1);
L1:;
   value0 = L2simplify_arithmetic(ECL_SYM("+",16), v3, v1);
   return value0;
  }
 }
}
/*      local function LAMBDA19                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC5__lambda19(cl_object v1, cl_object v2)
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
   T0 = ecl_car(v1);
   if (!((T0)==(ECL_SYM("FUNCALL",396)))) { goto L2; }
   T0 = ecl_caadr(v1);
   if (!((T0)==(ECL_SYM("FUNCTION",398)))) { goto L2; }
   v3 = ecl_cddr(v1);
   goto L1;
L2:;
   v3 = ecl_cdr(v1);
L1:;
   value0 = L2simplify_arithmetic(ECL_SYM("/",23), v3, v1);
   return value0;
  }
 }
}
/*      local function LAMBDA23                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC6__lambda23(cl_object v1, cl_object v2)
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
   T0 = ecl_car(v1);
   if (!((T0)==(ECL_SYM("FUNCALL",396)))) { goto L2; }
   T0 = ecl_caadr(v1);
   if (!((T0)==(ECL_SYM("FUNCTION",398)))) { goto L2; }
   v3 = ecl_cddr(v1);
   goto L1;
L2:;
   v3 = ecl_cdr(v1);
L1:;
   value0 = L2simplify_arithmetic(ECL_SYM("-",19), v3, v1);
   return value0;
  }
 }
}
/*      function definition for MAXIMUM-NUMBER-TYPE                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L7maximum_number_type(cl_narg narg, cl_object v1t1, cl_object v2t2, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 {
  cl_object v3only_real;
  cl_object v4integer_result;
  ecl_va_list args; ecl_va_start(args,v2t2,narg,2);
  {
   cl_object keyvars[4];
   cl_parse_key(args,2,L7maximum_number_typekeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   v3only_real = keyvars[0];
   v4integer_result = keyvars[1];
  }
  {
   cl_object v5;
   cl_object v6;
   cl_object v7t1_eq;
   cl_object v8t2_eq;
   cl_object v9output;
   if (Null(v3only_real)) { goto L2; }
   v5 = ECL_SYM("REAL",705);
   goto L1;
L2:;
   v5 = ECL_SYM("NUMBER",608);
L1:;
   if (Null(v3only_real)) { goto L5; }
   v6 = VV[5];
   goto L4;
L5:;
   v6 = VV[6];
L4:;
   v7t1_eq = ECL_NIL;
   v8t2_eq = ECL_NIL;
   v9output = ECL_NIL;
   {
    cl_object v10;
    v10 = v6;
    goto L14;
L13:;
    {
     cl_object v11i;
     v11i = ecl_car(v10);
     if (!(v7t1_eq==ECL_NIL)) { goto L18; }
     if (Null(ecl_function_dispatch(cl_env_copy,VV[44])(2, v11i, v1t1) /*  TYPE>= */)) { goto L18; }
     if (!(ecl_equalp(v1t1,v2t2))) { goto L21; }
     v8t2_eq = v11i;
L21:;
     v7t1_eq = v11i;
     v9output = v11i;
L18:;
     if (!(v8t2_eq==ECL_NIL)) { goto L27; }
     if (Null(ecl_function_dispatch(cl_env_copy,VV[44])(2, v11i, v2t2) /*  TYPE>= */)) { goto L27; }
     v8t2_eq = v11i;
     v9output = v11i;
L27:;
    }
    v10 = ecl_cdr(v10);
L14:;
    if (Null(v10)) { goto L35; }
    goto L13;
L35:;
   }
   if (Null(v7t1_eq)) { goto L40; }
   if (Null(v8t2_eq)) { goto L40; }
   if ((v9output)!=ECL_NIL) { goto L37; }
   goto L38;
L40:;
   goto L38;
L38:;
   v9output = v5;
L37:;
   if (Null(v4integer_result)) { goto L44; }
   if ((v9output)==(ECL_SYM("FIXNUM",374))) { goto L47; }
   if (!((v9output)==(ECL_SYM("INTEGER",439)))) { goto L44; }
   goto L45;
L47:;
L45:;
   v9output = v4integer_result;
L44:;
   if (Null(v7t1_eq)) { goto L51; }
   T0 = v1t1;
   goto L50;
L51:;
   T0 = v5;
L50:;
   if (Null(v8t2_eq)) { goto L54; }
   T1 = v2t2;
   goto L53;
L54:;
   T1 = v5;
L53:;
   cl_env_copy->nvalues = 3;
   cl_env_copy->values[2] = T1;
   cl_env_copy->values[1] = T0;
   cl_env_copy->values[0] = v9output;
   return cl_env_copy->values[0];
  }
 }
}
/*      function definition for ENSURE-NUMBER-TYPE                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L8ensure_number_type(cl_narg narg, cl_object v1general_type, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2integer_result;
  ecl_va_list args; ecl_va_start(args,v1general_type,narg,1);
  {
   cl_object keyvars[2];
   cl_parse_key(args,1,L8ensure_number_typekeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   v2integer_result = keyvars[0];
  }
  value0 = L7maximum_number_type(4, v1general_type, v1general_type, VV[8], v2integer_result);
  return value0;
 }
}
/*      function definition for ENSURE-NONRATIONAL-TYPE               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L9ensure_nonrational_type(cl_object v1general_type)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L7maximum_number_type(2, v1general_type, ECL_SYM("SINGLE-FLOAT",780));
  return value0;
 }
}
/*      function definition for ENSURE-REAL-TYPE                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L10ensure_real_type(cl_object v1general_type)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L7maximum_number_type(4, v1general_type, ECL_SYM("INTEGER",439), VV[11], ECL_T);
  return value0;
 }
}
/*      function definition for ARITHMETIC-PROPAGATOR                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L11arithmetic_propagator(cl_object v1op1_type, cl_object v2others, cl_object v3integer_result)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v5;                                  /*  RESULT-TYPE     */
   cl_object v6;                                  /*  OP1-TYPE        */
   value0 = L8ensure_number_type(3, v1op1_type, VV[8], v3integer_result);
   {
    const int v7 = cl_env_copy->nvalues;
    v5 = value0;
    cl_object v8;
    v8 = (v7<=1)? ECL_NIL : cl_env_copy->values[1];
    v6 = v8;
   }
   {
    cl_object v7arg_types;
    v7arg_types = ecl_list1(v6);
    {
     cl_object v8x;
     cl_object v9;
     v8x = ECL_NIL;
     {
      cl_object v10;
      v10 = v2others;
      if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v9 = v10;
     }
     {
      cl_object v10op2_type;
      v10op2_type = ECL_NIL;
L8:;
      if (!(ecl_endp(v9))) { goto L10; }
      goto L9;
L10:;
      v8x = _ecl_car(v9);
      {
       cl_object v11;
       v11 = _ecl_cdr(v9);
       if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v9 = v11;
      }
      v10op2_type = v8x;
      value0 = L7maximum_number_type(4, v5, v10op2_type, VV[8], v3integer_result);
      {
       const int v11 = cl_env_copy->nvalues;
       v5 = value0;
       cl_object v12;
       v12 = (v11<=1)? ECL_NIL : cl_env_copy->values[1];
       v6 = v12;
       v12 = (v11<=2)? ECL_NIL : cl_env_copy->values[2];
       v10op2_type = v12;
      }
      v7arg_types = CONS(v10op2_type,v7arg_types);
      goto L8;
L9:;
      T0 = cl_nreverse(v7arg_types);
      cl_env_copy->nvalues = 2;
      cl_env_copy->values[1] = v5;
      cl_env_copy->values[0] = T0;
      return cl_env_copy->values[0];
     }
    }
   }
  }
 }
}
/*      local function LAMBDA46                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC12__lambda46(cl_narg narg, cl_object v1fname, cl_object v2op1, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 {
  cl_object v3others;
  ecl_va_list args; ecl_va_start(args,v2op1,narg,2);
  v3others = cl_grab_rest_args(args);
  ecl_va_end(args);
  value0 = L11arithmetic_propagator(v2op1, v3others, ECL_SYM("INTEGER",439));
  return value0;
 }
}
/*      local function LAMBDA50                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC13__lambda50(cl_narg narg, cl_object v1fname, cl_object v2op1, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 {
  cl_object v3others;
  ecl_va_list args; ecl_va_start(args,v2op1,narg,2);
  v3others = cl_grab_rest_args(args);
  ecl_va_end(args);
  value0 = L11arithmetic_propagator(v2op1, v3others, ECL_SYM("RATIONAL",689));
  return value0;
 }
}
/*      function definition for MOST-GENERIC-NUMBER-REP-TYPE          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L14most_generic_number_rep_type(cl_object v1r1, cl_object v2r2)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3r1;
   cl_object v4r2;
   v3r1 = ecl_function_dispatch(cl_env_copy,VV[51])(1, v1r1) /*  REP-TYPE-RECORD */;
   v4r2 = ecl_function_dispatch(cl_env_copy,VV[51])(1, v2r2) /*  REP-TYPE-RECORD */;
   T1 = ecl_function_dispatch(cl_env_copy,VV[52])(1, v3r1) /*  REP-TYPE-INDEX */;
   T2 = ecl_function_dispatch(cl_env_copy,VV[52])(1, v4r2) /*  REP-TYPE-INDEX */;
   if (!(ecl_lower(T1,T2))) { goto L4; }
   T0 = v4r2;
   goto L3;
L4:;
   T0 = v3r1;
L3:;
   value0 = ecl_function_dispatch(cl_env_copy,VV[53])(1, T0) /*  REP-TYPE-NAME */;
   return value0;
  }
 }
}
/*      function definition for INLINE-BINOP                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L15inline_binop(cl_object v1expected_type, cl_object v2arg1, cl_object v3arg2, cl_object v4consing, cl_object v5non_consing)
{
 cl_object T0, T1, T2, T3, T4, T5;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v6;
   cl_object v7;
   v6 = ecl_function_dispatch(cl_env_copy,VV[55])(1, v2arg1) /*  INLINED-ARG-TYPE */;
   v7 = ecl_function_dispatch(cl_env_copy,VV[55])(1, v3arg2) /*  INLINED-ARG-TYPE */;
   if (Null(ecl_function_dispatch(cl_env_copy,VV[56])(0) /*  POLICY-ASSUME-RIGHT-TYPE */)) { goto L3; }
   if (Null(ecl_function_dispatch(cl_env_copy,VV[57])(1, v1expected_type) /*  C-NUMBER-TYPE-P */)) { goto L3; }
   if (Null(ecl_function_dispatch(cl_env_copy,VV[57])(1, v6) /*  C-NUMBER-TYPE-P */)) { goto L3; }
   if (Null(ecl_function_dispatch(cl_env_copy,VV[57])(1, v7) /*  C-NUMBER-TYPE-P */)) { goto L3; }
   {
    cl_object v8arg1_rep;
    cl_object v9arg2_rep;
    cl_object v10out_rep;
    cl_object v11max_rep;
    cl_object v12max_name;
    v8arg1_rep = ecl_function_dispatch(cl_env_copy,VV[58])(1, v6) /*  LISP-TYPE->REP-TYPE */;
    v9arg2_rep = ecl_function_dispatch(cl_env_copy,VV[58])(1, v7) /*  LISP-TYPE->REP-TYPE */;
    v10out_rep = ecl_function_dispatch(cl_env_copy,VV[58])(1, v1expected_type) /*  LISP-TYPE->REP-TYPE */;
    T0 = L14most_generic_number_rep_type(v8arg1_rep, v9arg2_rep);
    v11max_rep = L14most_generic_number_rep_type(T0, v10out_rep);
    v12max_name = ecl_function_dispatch(cl_env_copy,VV[59])(1, v11max_rep) /*  REP-TYPE->C-NAME */;
    T0 = cl_list(2, v2arg1, v3arg2);
    T1 = cl_list(2, v8arg1_rep, v9arg2_rep);
    T2 = ecl_list1(v11max_rep);
    if ((v8arg1_rep)==(v11max_rep)) { goto L14; }
    T3 = v12max_name;
    goto L13;
L14:;
    T3 = ECL_NIL;
L13:;
    if ((v9arg2_rep)==(v11max_rep)) { goto L17; }
    T4 = v12max_name;
    goto L16;
L17:;
    T4 = ECL_NIL;
L16:;
    T5 = cl_format(5, ECL_NIL, VV[16], T3, v5non_consing, T4);
    value0 = ecl_function_dispatch(cl_env_copy,VV[60])(6, T0, T1, T2, T5, ECL_NIL, ECL_T) /*  PRODUCE-INLINE-LOC */;
    return value0;
   }
L3:;
   T0 = cl_list(2, v2arg1, v3arg2);
   value0 = ecl_function_dispatch(cl_env_copy,VV[60])(6, T0, VV[17], VV[18], v4consing, ECL_NIL, ECL_T) /*  PRODUCE-INLINE-LOC */;
   return value0;
  }
 }
}
/*      function definition for INLINE-ARITH-UNOP                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L16inline_arith_unop(cl_object v1expected_type, cl_object v2arg1, cl_object v3consing, cl_object v4non_consing)
{
 cl_object T0, T1, T2, T3, T4;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v5arg1_type;
   v5arg1_type = ecl_function_dispatch(cl_env_copy,VV[55])(1, v2arg1) /*  INLINED-ARG-TYPE */;
   if (Null(ecl_function_dispatch(cl_env_copy,VV[56])(0) /*  POLICY-ASSUME-RIGHT-TYPE */)) { goto L2; }
   if (Null(ecl_function_dispatch(cl_env_copy,VV[57])(1, v1expected_type) /*  C-NUMBER-TYPE-P */)) { goto L2; }
   if (Null(ecl_function_dispatch(cl_env_copy,VV[57])(1, v5arg1_type) /*  C-NUMBER-TYPE-P */)) { goto L2; }
   T0 = ecl_list1(v2arg1);
   T1 = ecl_function_dispatch(cl_env_copy,VV[58])(1, v5arg1_type) /*  LISP-TYPE->REP-TYPE */;
   T2 = ecl_list1(T1);
   T3 = ecl_function_dispatch(cl_env_copy,VV[58])(1, v1expected_type) /*  LISP-TYPE->REP-TYPE */;
   T4 = ecl_list1(T3);
   value0 = ecl_function_dispatch(cl_env_copy,VV[60])(6, T0, T2, T4, v4non_consing, ECL_NIL, ECL_T) /*  PRODUCE-INLINE-LOC */;
   return value0;
L2:;
   T0 = ecl_list1(v2arg1);
   value0 = ecl_function_dispatch(cl_env_copy,VV[60])(6, T0, VV[17], VV[18], v3consing, ECL_NIL, ECL_T) /*  PRODUCE-INLINE-LOC */;
   return value0;
  }
 }
}
/*      local function LAMBDA56                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC17__lambda56(cl_narg narg, cl_object v1return_type, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2arguments;
  ecl_va_list args; ecl_va_start(args,v1return_type,narg,1);
  v2arguments = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   cl_object v3arg1;
   v3arg1 = ECL_NIL;
   if (!(v2arguments==ECL_NIL)) { goto L2; }
   value0 = VV[22];
   cl_env_copy->nvalues = 1;
   return value0;
L2:;
   {
    cl_object v4;
    v4 = v2arguments;
    {
     cl_object v5;
     v5 = v4;
     if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v4)) { goto L10; }
    {
     cl_object v5;
     v5 = ECL_CONS_CDR(v4);
     v2arguments = v5;
     v4 = ECL_CONS_CAR(v4);
    }
L10:;
    v3arg1 = v4;
   }
   if (!(v2arguments==ECL_NIL)) { goto L16; }
   value0 = ecl_function_dispatch(cl_env_copy,VV[62])(1, v3arg1) /*  INLINED-ARG-LOC */;
   return value0;
L16:;
   {
    cl_object v4arg2;
    v4arg2 = ECL_NIL;
    {
     cl_object v5result;
     v5result = ECL_NIL;
L20:;
     {
      cl_object v6;
      v6 = v2arguments;
      {
       cl_object v7;
       v7 = v6;
       if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v6)) { goto L27; }
      {
       cl_object v7;
       v7 = ECL_CONS_CDR(v6);
       v2arguments = v7;
       v6 = ECL_CONS_CAR(v6);
      }
L27:;
      v4arg2 = v6;
     }
     v5result = L15inline_binop(v1return_type, v3arg1, v4arg2, VV[23], CODE_CHAR(43));
     if (Null(v2arguments)) { goto L36; }
     v3arg1 = ecl_function_dispatch(cl_env_copy,VV[63])(1, v5result) /*  SAVE-INLINE-LOC */;
     goto L35;
L36:;
     value0 = v5result;
     cl_env_copy->nvalues = 1;
     return value0;
L35:;
     goto L20;
    }
   }
  }
 }
}
/*      local function LAMBDA66                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC18__lambda66(cl_narg narg, cl_object v1return_type, cl_object v2arg1, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 {
  cl_object v3arguments;
  ecl_va_list args; ecl_va_start(args,v2arg1,narg,2);
  v3arguments = cl_grab_rest_args(args);
  ecl_va_end(args);
  if (!(v3arguments==ECL_NIL)) { goto L1; }
  value0 = L16inline_arith_unop(v1return_type, v2arg1, VV[24], VV[25]);
  return value0;
L1:;
  {
   cl_object v4arg2;
   v4arg2 = ECL_NIL;
   {
    cl_object v5result;
    v5result = ECL_NIL;
L5:;
    {
     cl_object v6;
     v6 = v3arguments;
     {
      cl_object v7;
      v7 = v6;
      if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
     }
     if (Null(v6)) { goto L12; }
     {
      cl_object v7;
      v7 = ECL_CONS_CDR(v6);
      v3arguments = v7;
      v6 = ECL_CONS_CAR(v6);
     }
L12:;
     v4arg2 = v6;
    }
    v5result = L15inline_binop(v1return_type, v2arg1, v4arg2, VV[26], CODE_CHAR(45));
    if (Null(v3arguments)) { goto L21; }
    v2arg1 = ecl_function_dispatch(cl_env_copy,VV[63])(1, v5result) /*  SAVE-INLINE-LOC */;
    goto L20;
L21:;
    value0 = v5result;
    cl_env_copy->nvalues = 1;
    return value0;
L20:;
    goto L5;
   }
  }
 }
}
/*      local function LAMBDA73                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC19__lambda73(cl_narg narg, cl_object v1return_type, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2arguments;
  ecl_va_list args; ecl_va_start(args,v1return_type,narg,1);
  v2arguments = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   cl_object v3arg1;
   v3arg1 = ECL_NIL;
   if (!(v2arguments==ECL_NIL)) { goto L2; }
   value0 = VV[27];
   cl_env_copy->nvalues = 1;
   return value0;
L2:;
   {
    cl_object v4;
    v4 = v2arguments;
    {
     cl_object v5;
     v5 = v4;
     if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v4)) { goto L10; }
    {
     cl_object v5;
     v5 = ECL_CONS_CDR(v4);
     v2arguments = v5;
     v4 = ECL_CONS_CAR(v4);
    }
L10:;
    v3arg1 = v4;
   }
   if (!(v2arguments==ECL_NIL)) { goto L16; }
   value0 = ecl_function_dispatch(cl_env_copy,VV[62])(1, v3arg1) /*  INLINED-ARG-LOC */;
   return value0;
L16:;
   {
    cl_object v4arg2;
    v4arg2 = ECL_NIL;
    {
     cl_object v5result;
     v5result = ECL_NIL;
L20:;
     {
      cl_object v6;
      v6 = v2arguments;
      {
       cl_object v7;
       v7 = v6;
       if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v6)) { goto L27; }
      {
       cl_object v7;
       v7 = ECL_CONS_CDR(v6);
       v2arguments = v7;
       v6 = ECL_CONS_CAR(v6);
      }
L27:;
      v4arg2 = v6;
     }
     v5result = L15inline_binop(v1return_type, v3arg1, v4arg2, VV[28], CODE_CHAR(42));
     if (Null(v2arguments)) { goto L36; }
     v3arg1 = ecl_function_dispatch(cl_env_copy,VV[63])(1, v5result) /*  SAVE-INLINE-LOC */;
     goto L35;
L36:;
     value0 = v5result;
     cl_env_copy->nvalues = 1;
     return value0;
L35:;
     goto L20;
    }
   }
  }
 }
}
/*      local function LAMBDA83                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC20__lambda83(cl_narg narg, cl_object v1return_type, cl_object v2arg1, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 {
  cl_object v3arguments;
  ecl_va_list args; ecl_va_start(args,v2arg1,narg,2);
  v3arguments = cl_grab_rest_args(args);
  ecl_va_end(args);
  if (!(v3arguments==ECL_NIL)) { goto L1; }
  value0 = L16inline_arith_unop(v1return_type, v2arg1, VV[29], VV[30]);
  return value0;
L1:;
  {
   cl_object v4arg2;
   v4arg2 = ECL_NIL;
   {
    cl_object v5result;
    v5result = ECL_NIL;
L5:;
    {
     cl_object v6;
     v6 = v3arguments;
     {
      cl_object v7;
      v7 = v6;
      if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
     }
     if (Null(v6)) { goto L12; }
     {
      cl_object v7;
      v7 = ECL_CONS_CDR(v6);
      v3arguments = v7;
      v6 = ECL_CONS_CAR(v6);
     }
L12:;
     v4arg2 = v6;
    }
    v5result = L15inline_binop(v1return_type, v2arg1, v4arg2, VV[31], CODE_CHAR(47));
    if (Null(v3arguments)) { goto L21; }
    v2arg1 = ecl_function_dispatch(cl_env_copy,VV[63])(1, v5result) /*  SAVE-INLINE-LOC */;
    goto L20;
L21:;
    value0 = v5result;
    cl_env_copy->nvalues = 1;
    return value0;
L20:;
    goto L5;
   }
  }
 }
}
/*      local function LAMBDA91                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC21__lambda91(cl_narg narg, cl_object v1fname, cl_object v2op1_type, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 {
  {
   cl_object v4;                                  /*  OUTPUT-TYPE     */
   cl_object v5;                                  /*  OP1-TYPE        */
   value0 = L9ensure_nonrational_type(v2op1_type);
   {
    const int v6 = cl_env_copy->nvalues;
    v4 = value0;
    cl_object v7;
    v7 = (v6<=1)? ECL_NIL : cl_env_copy->values[1];
    v5 = v7;
   }
   T0 = ecl_list1(v5);
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v4;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA96                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC22__lambda96(cl_narg narg, cl_object v1fname, cl_object v2op1_type, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 {
  {
   cl_object v4;                                  /*  OP1-TYPE        */
   value0 = L9ensure_nonrational_type(v2op1_type);
   {
    const int v5 = cl_env_copy->nvalues;
    cl_object v6;
    v6 = (v5<=1)? ECL_NIL : cl_env_copy->values[1];
    v4 = v6;
   }
   T0 = ecl_list1(v4);
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = ECL_SYM("NUMBER",608);
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA101                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC23__lambda101(cl_narg narg, cl_object v1fname, cl_object v2op1_type, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 {
  cl_object v3op2_type;
  cl_object v4op2_p;
  va_list args; va_start(args,v2op1_type);
  {
   int i = 2;
   if (i >= narg) {
    v3op2_type = ECL_T;
    v4op2_p = ECL_NIL;
   } else {
    i++;
    v3op2_type = va_arg(args,cl_object);
    v4op2_p = ECL_T;
   }
  }
  va_end(args);
  {
   cl_object v6;                                  /*  T1              */
   value0 = L9ensure_nonrational_type(v2op1_type);
   {
    const int v7 = cl_env_copy->nvalues;
    cl_object v8;
    v8 = (v7<=1)? ECL_NIL : cl_env_copy->values[1];
    v6 = v8;
   }
   if (Null(v4op2_p)) { goto L3; }
   {
    cl_object v8;                                 /*  RESULT          */
    cl_object v9;                                 /*  T1              */
    cl_object v10;                                /*  T2              */
    value0 = L7maximum_number_type(4, v6, v3op2_type, VV[11], ECL_T);
    {
     const int v11 = cl_env_copy->nvalues;
     v8 = value0;
     cl_object v12;
     v12 = (v11<=1)? ECL_NIL : cl_env_copy->values[1];
     v9 = v12;
     v12 = (v11<=2)? ECL_NIL : cl_env_copy->values[2];
     v10 = v12;
    }
    T0 = cl_list(2, v9, v10);
    cl_env_copy->nvalues = 2;
    cl_env_copy->values[1] = v8;
    cl_env_copy->values[0] = T0;
    return cl_env_copy->values[0];
   }
L3:;
   T0 = ecl_list1(v6);
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v6;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA106                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC24__lambda106(cl_narg narg, cl_object v1fname, cl_object v2base, cl_object v3exponent, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<3)) FEwrong_num_arguments_anonym();
 {
  {
   cl_object v4exponent;
   v4exponent = L10ensure_real_type(v3exponent);
   T0 = cl_list(2, v2base, v4exponent);
   if (!((v4exponent)==(ECL_SYM("INTEGER",439)))) { goto L3; }
   if (Null(cl_subtypep(2, v2base, ECL_SYM("FIXNUM",374)))) { goto L5; }
   T1 = ECL_SYM("INTEGER",439);
   goto L2;
L5:;
   T1 = v2base;
   goto L2;
L3:;
   if (Null(ecl_function_dispatch(cl_env_copy,VV[44])(2, VV[32], v2base) /*  TYPE>= */)) { goto L7; }
   {
    cl_object v5exponent;
    v5exponent = L9ensure_nonrational_type(v4exponent);
    T1 = L7maximum_number_type(2, v5exponent, v2base);
    goto L2;
   }
L7:;
   T1 = ECL_SYM("NUMBER",608);
L2:;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = T1;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA111                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC25__lambda111(cl_narg narg, cl_object v1fname, cl_object v2arg, ...)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 {
  {
   cl_object v4;                                  /*  OUTPUT          */
   cl_object v5;                                  /*  ARG             */
   value0 = L8ensure_number_type(1, v2arg);
   {
    const int v6 = cl_env_copy->nvalues;
    v4 = value0;
    cl_object v7;
    v7 = (v6<=1)? ECL_NIL : cl_env_copy->values[1];
    v5 = v7;
   }
   T0 = ecl_list1(v5);
   T2 = ecl_assql(v4,VV[33]);
   value0 = ecl_cdr(T2);
   if ((value0)!=ECL_NIL) { goto L4; }
   T1 = v4;
   goto L2;
L4:;
   T1 = value0;
   goto L2;
L2:;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = T1;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA116                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC26__lambda116(cl_narg narg, cl_object v1fname, cl_object v2arg, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 {
  {
   cl_object v4;                                  /*  OUTPUT          */
   cl_object v5;                                  /*  ARG             */
   value0 = L9ensure_nonrational_type(v2arg);
   {
    const int v6 = cl_env_copy->nvalues;
    v4 = value0;
    cl_object v7;
    v7 = (v6<=1)? ECL_NIL : cl_env_copy->values[1];
    v5 = v7;
   }
   T0 = ecl_list1(v5);
   if (Null(ecl_function_dispatch(cl_env_copy,VV[44])(2, VV[32], v5) /*  TYPE>= */)) { goto L3; }
   T1 = v4;
   goto L2;
L3:;
   T1 = ECL_SYM("NUMBER",608);
L2:;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = T1;
   cl_env_copy->values[0] = T0;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA121                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC27__lambda121(cl_narg narg, cl_object v1fname, cl_object v2arg, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 {
  if (Null(ecl_function_dispatch(cl_env_copy,VV[44])(2, VV[34], v2arg) /*  TYPE>= */)) { goto L1; }
  cl_env_copy->nvalues = 2;
  cl_env_copy->values[1] = VV[34];
  cl_env_copy->values[0] = VV[35];
  return cl_env_copy->values[0];
L1:;
  cl_env_copy->nvalues = 2;
  cl_env_copy->values[1] = VV[37];
  cl_env_copy->values[0] = VV[36];
  return cl_env_copy->values[0];
 }
}

#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/cmp/cmpnum.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclKPfIJTa7_PdVmqq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;CMPNUM.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclKPfIJTa7_PdVmqq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC1__lambda3,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("BOOLE",140), ECL_SYM("COMPILER-MACRO",240), T0);
 }
  ecl_cmp_defun(VV[40]);                          /*  SIMPLIFY-ARITHMETIC */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC3__lambda11,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("*",20), ECL_SYM("COMPILER-MACRO",240), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC4__lambda15,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("+",16), ECL_SYM("COMPILER-MACRO",240), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC5__lambda19,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("/",23), ECL_SYM("COMPILER-MACRO",240), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC6__lambda23,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("-",19), ECL_SYM("COMPILER-MACRO",240), T0);
 }
  ecl_cmp_defun(VV[41]);                          /*  MAXIMUM-NUMBER-TYPE */
  ecl_cmp_defun(VV[45]);                          /*  ENSURE-NUMBER-TYPE */
  ecl_cmp_defun(VV[46]);                          /*  ENSURE-NONRATIONAL-TYPE */
  ecl_cmp_defun(VV[47]);                          /*  ENSURE-REAL-TYPE */
  ecl_cmp_defun(VV[48]);                          /*  ARITHMETIC-PROPAGATOR */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC12__lambda46,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_hash_set(ECL_SYM("*",20), ecl_symbol_value(VV[14]), T0);
 }
  ecl_function_dispatch(cl_env_copy,VV[49])(2, ECL_SYM("*",20), VVtemp[1]) /*  COPY-TYPE-PROPAGATOR */;
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC13__lambda50,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_hash_set(ECL_SYM("/",23), ecl_symbol_value(VV[14]), T0);
 }
  ecl_cmp_defun(VV[50]);                          /*  MOST-GENERIC-NUMBER-REP-TYPE */
  ecl_cmp_defun(VV[54]);                          /*  INLINE-BINOP    */
  ecl_cmp_defun(VV[61]);                          /*  INLINE-ARITH-UNOP */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC17__lambda56,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  si_hash_set(ECL_SYM("+",16), ecl_symbol_value(VV[21]), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC18__lambda66,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_hash_set(ECL_SYM("-",19), ecl_symbol_value(VV[21]), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC19__lambda73,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  si_hash_set(ECL_SYM("*",20), ecl_symbol_value(VV[21]), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC20__lambda83,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_hash_set(ECL_SYM("/",23), ecl_symbol_value(VV[21]), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC21__lambda91,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_hash_set(ECL_SYM("COS",266), ecl_symbol_value(VV[14]), T0);
 }
  ecl_function_dispatch(cl_env_copy,VV[49])(2, ECL_SYM("COS",266), VVtemp[2]) /*  COPY-TYPE-PROPAGATOR */;
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC22__lambda96,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_hash_set(ECL_SYM("ACOS",82), ecl_symbol_value(VV[14]), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC23__lambda101,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_hash_set(ECL_SYM("ATAN",119), ecl_symbol_value(VV[14]), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC24__lambda106,ECL_NIL,Cblock,3);
   T0 = v1;
  }
  si_hash_set(ECL_SYM("EXPT",347), ecl_symbol_value(VV[14]), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC25__lambda111,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_hash_set(ECL_SYM("ABS",80), ecl_symbol_value(VV[14]), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC26__lambda116,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_hash_set(ECL_SYM("SQRT",794), ecl_symbol_value(VV[14]), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC27__lambda121,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_hash_set(ECL_SYM("ISQRT",450), ecl_symbol_value(VV[14]), T0);
 }
}
