/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;CMPOPT-CONS.LSP                               */
#include <ecl/ecl-cmp.h>
#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/cmp/cmpopt-cons.eclh"
/*      function definition for EXPAND-SIMPLE-OPTIMIZER               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1expand_simple_optimizer(cl_object v1values, cl_object v2arg_types, cl_object v3inline_form, cl_object v4env)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_function_dispatch(cl_env_copy,VV[9])(1, v4env) /*  POLICY-ASSUME-RIGHT-TYPE */)) { goto L2; }
  T0 = v1values;
  goto L1;
L2:;
  {
   cl_object v5v;
   cl_object v6;
   v5v = ECL_NIL;
   {
    cl_object v7;
    v7 = v1values;
    if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v6 = v7;
   }
   {
    cl_object v7value_and_type;
    cl_object v8;
    v7value_and_type = ECL_NIL;
    {
     cl_object v9;
     v9 = v2arg_types;
     if (ecl_unlikely(!ECL_LISTP(v9))) FEtype_error_list(v9);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v8 = v9;
    }
    {
     cl_object v9;
     cl_object v10;
     v9 = ecl_list1(ECL_NIL);
     v10 = v9;
L14:;
     if (!(ecl_endp(v6))) { goto L16; }
     goto L15;
L16:;
     v5v = _ecl_car(v6);
     {
      cl_object v11;
      v11 = _ecl_cdr(v6);
      if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v6 = v11;
     }
     if (!(ecl_endp(v8))) { goto L24; }
     goto L15;
L24:;
     v7value_and_type = _ecl_car(v8);
     {
      cl_object v11;
      v11 = _ecl_cdr(v8);
      if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v8 = v11;
     }
     {
      cl_object v11;
      v11 = v10;
      if (ecl_unlikely(ECL_ATOM(v11))) FEtype_error_cons(v11);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      T1 = v11;
     }
     if (!(ECL_CONSP(v7value_and_type))) { goto L38; }
     T3 = ecl_cadr(v7value_and_type);
     T2 = cl_list(3, ECL_SYM("CHECKED-VALUE",2040), T3, v5v);
     goto L37;
L38:;
     T2 = v5v;
L37:;
     v10 = ecl_list1(T2);
     (ECL_CONS_CDR(T1)=v10,T1);
     goto L14;
L15:;
     T0 = ecl_cdr(v9);
     goto L1;
    }
   }
  }
L1:;
  value0 = cl_listX(3, ECL_SYM("C-INLINE",2063), T0, v3inline_form);
  return value0;
 }
}
/*      function definition for SIMPLE-OPTIMIZER-FUNCTION             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L4simple_optimizer_function(cl_object v1name, cl_object v2args, cl_object v3inline_form)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v2args,env0);                /*  ARGS            */
  CLV1 = env0 = CONS(v3inline_form,env0);         /*  INLINE-FORM     */
  T1 = (ECL_SYM("SYMBOLP",849)->symbol.gfdef);
  if (Null(cl_every(2, T1, ECL_CONS_CAR(CLV0)))) { goto L2; }
  {
   cl_object v4;
   v4 = ecl_make_cclosure_va((cl_objectfn)LC2__lambda8,env0,Cblock,2);
   T0 = v4;
   goto L1;
  }
L2:;
  {
   cl_object v5;
   v5 = ecl_make_cclosure_va((cl_objectfn)LC3__lambda9,env0,Cblock,2);
   T0 = v5;
  }
L1:;
  value0 = si_put_sysprop(v1name, ECL_SYM("COMPILER-MACRO",240), T0);
  return value0;
 }
}
/*      closure LAMBDA8                                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC2__lambda8(cl_narg narg, cl_object v1whole, cl_object v2env, ...)
{
 cl_object T0;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV1 = env0;                                     /*  INLINE-FORM     */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=2)) FEwrong_num_arguments_anonym();
 {
TTL:
  if (Null(ecl_function_dispatch(cl_env_copy,VV[10])(1, v2env) /*  POLICY-INLINE-ACCESSORS */)) { goto L1; }
  T0 = ecl_cdr(v1whole);
  value0 = cl_listX(3, ECL_SYM("C-INLINE",2063), T0, ECL_CONS_CAR(CLV1));
  return value0;
L1:;
  value0 = v1whole;
  cl_env_copy->nvalues = 1;
  return value0;
 }
 }
}
/*      closure LAMBDA9                                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC3__lambda9(cl_narg narg, cl_object v1whole, cl_object v2env, ...)
{
 cl_object T0;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV1 = env0;                                     /*  INLINE-FORM     */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=2)) FEwrong_num_arguments_anonym();
 {
TTL:
  if (Null(ecl_function_dispatch(cl_env_copy,VV[10])(1, v2env) /*  POLICY-INLINE-ACCESSORS */)) { goto L1; }
  T0 = ecl_cdr(v1whole);
  value0 = L1expand_simple_optimizer(T0, ECL_CONS_CAR(CLV0), ECL_CONS_CAR(CLV1), v2env);
  return value0;
L1:;
  value0 = v1whole;
  cl_env_copy->nvalues = 1;
  return value0;
 }
 }
}
/*      local function CONS-CAR                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC5cons_car(cl_object v1, cl_object v2)
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
   cl_object v4x;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[12])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4x = v5;
   }
   if (Null(v3)) { goto L8; }
   ecl_function_dispatch(cl_env_copy,VV[13])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L8:;
   T0 = ecl_list1(v4x);
   value0 = cl_listX(3, ECL_SYM("C-INLINE",2063), T0, VV[0]);
   return value0;
  }
 }
}
/*      local function CONS-CDR                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC6cons_cdr(cl_object v1, cl_object v2)
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
   cl_object v4x;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[12])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4x = v5;
   }
   if (Null(v3)) { goto L8; }
   ecl_function_dispatch(cl_env_copy,VV[13])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L8:;
   T0 = ecl_list1(v4x);
   value0 = cl_listX(3, ECL_SYM("C-INLINE",2063), T0, VV[2]);
   return value0;
  }
 }
}
/*      local function LAMBDA27                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC8__lambda27(cl_object v1, cl_object v2)
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
   {
    cl_object v4temp;
    v4temp = ECL_NIL;
    {
     cl_fixnum v5;
     v5 = ecl_length(v3);
     if (!((v5)==(2))) { goto L6; }
    }
    v4temp = LC7cons_to_lista(v3);
    if ((v3)==(v4temp)) { goto L6; }
    T0 = ecl_last(v4temp,1);
    if (!(ecl_equal(VV[4],T0))) { goto L10; }
    T0 = ecl_butlast(v4temp,1);
    value0 = CONS(ECL_SYM("LIST",483),T0);
    cl_env_copy->nvalues = 1;
    return value0;
L10:;
    value0 = CONS(ECL_SYM("LIST*",484),v4temp);
    cl_env_copy->nvalues = 1;
    return value0;
L6:;
    value0 = v1;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      local function CONS-TO-LISTA                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC7cons_to_lista(cl_object v1x)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2tem;
   v2tem = ecl_last(v1x,1);
   if (!(ECL_CONSP(v2tem))) { goto L2; }
   T0 = ecl_car(v2tem);
   if (!(ECL_CONSP(T0))) { goto L2; }
   T0 = ecl_caar(v2tem);
   if (!((T0)==(ECL_SYM("CONS",253)))) { goto L2; }
   T0 = ecl_cdar(v2tem);
   {
    cl_fixnum v3;
    v3 = ecl_length(T0);
    if (!((v3)==(2))) { goto L2; }
   }
   T0 = ecl_butlast(v1x,1);
   T1 = ecl_cdar(v2tem);
   v1x = ecl_append(T0,T1);
   goto TTL;
L2:;
   value0 = v1x;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function DEFINE-SIMPLE-OPTIMIZER                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC9define_simple_optimizer(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4name;
   cl_object v5args;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[12])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4name = v6;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[12])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5args = v6;
   }
   T0 = cl_list(2, ECL_SYM("QUOTE",681), v4name);
   T1 = cl_list(2, ECL_SYM("QUOTE",681), v5args);
   T2 = cl_list(2, ECL_SYM("QUOTE",681), v3);
   value0 = cl_list(4, VV[5], T0, T1, T2);
   return value0;
  }
 }
}
/*      local function LAMBDA39                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC10__lambda39(cl_object v1, cl_object v2)
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
   T0 = ecl_car(v1);
   if (!((T0)==(ECL_SYM("FUNCALL",396)))) { goto L2; }
   T0 = ecl_caadr(v1);
   if (!((T0)==(ECL_SYM("FUNCTION",398)))) { goto L2; }
   v3 = ecl_cddr(v1);
   goto L1;
L2:;
   v3 = ecl_cdr(v1);
L1:;
   {
    cl_object v4;
    v4 = ecl_car(v3);
    if (!((v4)==(ecl_make_fixnum(0)))) { goto L6; }
    T0 = ecl_cdr(v3);
    value0 = CONS(ECL_SYM("CAR",182),T0);
    cl_env_copy->nvalues = 1;
    return value0;
L6:;
    if (!((v4)==(ecl_make_fixnum(1)))) { goto L8; }
    T0 = ecl_cdr(v3);
    value0 = CONS(ECL_SYM("CADR",180),T0);
    cl_env_copy->nvalues = 1;
    return value0;
L8:;
    if (!((v4)==(ecl_make_fixnum(2)))) { goto L10; }
    T0 = ecl_cdr(v3);
    value0 = CONS(ECL_SYM("CADDR",179),T0);
    cl_env_copy->nvalues = 1;
    return value0;
L10:;
    if (!((v4)==(ecl_make_fixnum(3)))) { goto L12; }
    T0 = ecl_cdr(v3);
    value0 = CONS(ECL_SYM("CADDDR",178),T0);
    cl_env_copy->nvalues = 1;
    return value0;
L12:;
    if (!((v4)==(ecl_make_fixnum(4)))) { goto L14; }
    T0 = ecl_cdr(v3);
    T1 = CONS(ECL_SYM("CDDDDR",197),T0);
    value0 = cl_list(2, ECL_SYM("CAR",182), T1);
    return value0;
L14:;
    if (!((v4)==(ecl_make_fixnum(5)))) { goto L16; }
    T0 = ecl_cdr(v3);
    T1 = CONS(ECL_SYM("CDDDDR",197),T0);
    value0 = cl_list(2, ECL_SYM("CADR",180), T1);
    return value0;
L16:;
    if (!((v4)==(ecl_make_fixnum(6)))) { goto L18; }
    T0 = ecl_cdr(v3);
    T1 = CONS(ECL_SYM("CDDDDR",197),T0);
    value0 = cl_list(2, ECL_SYM("CADDR",179), T1);
    return value0;
L18:;
    if (!((v4)==(ecl_make_fixnum(7)))) { goto L20; }
    T0 = ecl_cdr(v3);
    T1 = CONS(ECL_SYM("CDDDDR",197),T0);
    value0 = cl_list(2, ECL_SYM("CADDDR",178), T1);
    return value0;
L20:;
    value0 = v1;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      local function LAMBDA44                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC11__lambda44(cl_object v1, cl_object v2)
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
   T0 = ecl_car(v1);
   if (!((T0)==(ECL_SYM("FUNCALL",396)))) { goto L2; }
   T0 = ecl_caadr(v1);
   if (!((T0)==(ECL_SYM("FUNCTION",398)))) { goto L2; }
   v3 = ecl_cddr(v1);
   goto L1;
L2:;
   v3 = ecl_cdr(v1);
L1:;
   {
    cl_object v4;
    v4 = ecl_car(v3);
    if (!((v4)==(ecl_make_fixnum(0)))) { goto L6; }
    value0 = ecl_cadr(v3);
    cl_env_copy->nvalues = 1;
    return value0;
L6:;
    if (!((v4)==(ecl_make_fixnum(1)))) { goto L8; }
    T0 = ecl_cdr(v3);
    value0 = CONS(ECL_SYM("CDR",200),T0);
    cl_env_copy->nvalues = 1;
    return value0;
L8:;
    if (!((v4)==(ecl_make_fixnum(2)))) { goto L10; }
    T0 = ecl_cdr(v3);
    value0 = CONS(ECL_SYM("CDDR",199),T0);
    cl_env_copy->nvalues = 1;
    return value0;
L10:;
    if (!((v4)==(ecl_make_fixnum(3)))) { goto L12; }
    T0 = ecl_cdr(v3);
    value0 = CONS(ECL_SYM("CDDDR",198),T0);
    cl_env_copy->nvalues = 1;
    return value0;
L12:;
    if (!((v4)==(ecl_make_fixnum(4)))) { goto L14; }
    T0 = ecl_cdr(v3);
    value0 = CONS(ECL_SYM("CDDDDR",197),T0);
    cl_env_copy->nvalues = 1;
    return value0;
L14:;
    if (!((v4)==(ecl_make_fixnum(5)))) { goto L16; }
    T0 = ecl_cdr(v3);
    T1 = CONS(ECL_SYM("CDDDDR",197),T0);
    value0 = cl_list(2, ECL_SYM("CDR",200), T1);
    return value0;
L16:;
    if (!((v4)==(ecl_make_fixnum(6)))) { goto L18; }
    T0 = ecl_cdr(v3);
    T1 = CONS(ECL_SYM("CDDDDR",197),T0);
    value0 = cl_list(2, ECL_SYM("CDDR",199), T1);
    return value0;
L18:;
    if (!((v4)==(ecl_make_fixnum(7)))) { goto L20; }
    T0 = ecl_cdr(v3);
    T1 = CONS(ECL_SYM("CDDDDR",197),T0);
    value0 = cl_list(2, ECL_SYM("CDDDR",198), T1);
    return value0;
L20:;
    value0 = v1;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      local function LAMBDA52                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC12__lambda52(cl_object v1, cl_object v2)
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
   cl_object v4x;
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
   ecl_function_dispatch(cl_env_copy,VV[12])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L6:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4x = v5;
   }
   if (Null(v3)) { goto L11; }
   ecl_function_dispatch(cl_env_copy,VV[13])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L11:;
   value0 = cl_list(3, ECL_SYM("NTH",604), ecl_make_fixnum(0), v4x);
   return value0;
  }
 }
}
/*      local function LAMBDA57                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC13__lambda57(cl_object v1, cl_object v2)
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
   cl_object v4x;
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
   ecl_function_dispatch(cl_env_copy,VV[12])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L6:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4x = v5;
   }
   if (Null(v3)) { goto L11; }
   ecl_function_dispatch(cl_env_copy,VV[13])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L11:;
   value0 = cl_list(3, ECL_SYM("NTH",604), ecl_make_fixnum(1), v4x);
   return value0;
  }
 }
}
/*      local function LAMBDA62                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC14__lambda62(cl_object v1, cl_object v2)
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
   cl_object v4x;
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
   ecl_function_dispatch(cl_env_copy,VV[12])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L6:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4x = v5;
   }
   if (Null(v3)) { goto L11; }
   ecl_function_dispatch(cl_env_copy,VV[13])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L11:;
   value0 = cl_list(3, ECL_SYM("NTH",604), ecl_make_fixnum(2), v4x);
   return value0;
  }
 }
}
/*      local function LAMBDA67                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC15__lambda67(cl_object v1, cl_object v2)
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
   cl_object v4x;
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
   ecl_function_dispatch(cl_env_copy,VV[12])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L6:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4x = v5;
   }
   if (Null(v3)) { goto L11; }
   ecl_function_dispatch(cl_env_copy,VV[13])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L11:;
   value0 = cl_list(3, ECL_SYM("NTH",604), ecl_make_fixnum(3), v4x);
   return value0;
  }
 }
}
/*      local function LAMBDA72                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC16__lambda72(cl_object v1, cl_object v2)
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
   cl_object v4x;
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
   ecl_function_dispatch(cl_env_copy,VV[12])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L6:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4x = v5;
   }
   if (Null(v3)) { goto L11; }
   ecl_function_dispatch(cl_env_copy,VV[13])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L11:;
   value0 = cl_list(3, ECL_SYM("NTH",604), ecl_make_fixnum(4), v4x);
   return value0;
  }
 }
}
/*      local function LAMBDA77                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC17__lambda77(cl_object v1, cl_object v2)
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
   cl_object v4x;
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
   ecl_function_dispatch(cl_env_copy,VV[12])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L6:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4x = v5;
   }
   if (Null(v3)) { goto L11; }
   ecl_function_dispatch(cl_env_copy,VV[13])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L11:;
   value0 = cl_list(3, ECL_SYM("NTH",604), ecl_make_fixnum(5), v4x);
   return value0;
  }
 }
}
/*      local function LAMBDA82                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC18__lambda82(cl_object v1, cl_object v2)
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
   cl_object v4x;
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
   ecl_function_dispatch(cl_env_copy,VV[12])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L6:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4x = v5;
   }
   if (Null(v3)) { goto L11; }
   ecl_function_dispatch(cl_env_copy,VV[13])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L11:;
   value0 = cl_list(3, ECL_SYM("NTH",604), ecl_make_fixnum(6), v4x);
   return value0;
  }
 }
}
/*      local function LAMBDA87                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC19__lambda87(cl_object v1, cl_object v2)
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
   cl_object v4x;
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
   ecl_function_dispatch(cl_env_copy,VV[12])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L6:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4x = v5;
   }
   if (Null(v3)) { goto L11; }
   ecl_function_dispatch(cl_env_copy,VV[13])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L11:;
   value0 = cl_list(3, ECL_SYM("NTH",604), ecl_make_fixnum(7), v4x);
   return value0;
  }
 }
}
/*      local function LAMBDA92                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC20__lambda92(cl_object v1, cl_object v2)
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
   cl_object v4x;
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
   ecl_function_dispatch(cl_env_copy,VV[12])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L6:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4x = v5;
   }
   if (Null(v3)) { goto L11; }
   ecl_function_dispatch(cl_env_copy,VV[13])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L11:;
   value0 = cl_list(3, ECL_SYM("NTH",604), ecl_make_fixnum(8), v4x);
   return value0;
  }
 }
}
/*      local function LAMBDA97                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC21__lambda97(cl_object v1, cl_object v2)
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
   cl_object v4x;
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
   ecl_function_dispatch(cl_env_copy,VV[12])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L6:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4x = v5;
   }
   if (Null(v3)) { goto L11; }
   ecl_function_dispatch(cl_env_copy,VV[13])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L11:;
   value0 = cl_list(3, ECL_SYM("NTH",604), ecl_make_fixnum(9), v4x);
   return value0;
  }
 }
}
/*      local function LAMBDA102                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC22__lambda102(cl_object v1, cl_object v2)
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
   cl_object v4x;
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
   ecl_function_dispatch(cl_env_copy,VV[12])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L6:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4x = v5;
   }
   if (Null(v3)) { goto L11; }
   ecl_function_dispatch(cl_env_copy,VV[13])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L11:;
   value0 = cl_list(2, ECL_SYM("CDR",200), v4x);
   return value0;
  }
 }
}
/*      local function LAMBDA106                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC23__lambda106(cl_object v1, cl_object v2env)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4place;
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
   ecl_function_dispatch(cl_env_copy,VV[12])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L6:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4place = v5;
   }
   if (Null(v3)) { goto L11; }
   ecl_function_dispatch(cl_env_copy,VV[13])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L11:;
   if (Null(ecl_function_dispatch(cl_env_copy,VV[10])(0) /*  POLICY-INLINE-ACCESSORS */)) { goto L13; }
   {
    cl_object v6;                                 /*  VARS            */
    cl_object v7;                                 /*  VALS            */
    cl_object v8;                                 /*  STORES          */
    cl_object v9;                                 /*  STORE-FORM      */
    cl_object v10;                                /*  ACCESS-FORM     */
    value0 = (cl_env_copy->function=(ECL_SYM("GET-SETF-EXPANSION",412)->symbol.gfdef))->cfun.entry(2, v4place, v2env) /*  GET-SETF-EXPANSION */;
    {
     v6 = value0;
     v7 = cl_env_copy->values[1];
     v8 = cl_env_copy->values[2];
     v9 = cl_env_copy->values[3];
     v10 = cl_env_copy->values[4];
    }
    {
     cl_object v11store_var;
     cl_object v12saved_place;
     v11store_var = ecl_car(v8);
     v12saved_place = cl_gensym(0);
     {
      cl_object v13;
      v13 = (ECL_SYM("LIST",483)->symbol.gfdef);
      {
       cl_object v14;
       cl_object v15;
       cl_object v16;
       T1 = ecl_list1(v12saved_place);
       v14 = ecl_append(v6,T1);
       v15 = ECL_NIL;
       {
        cl_object v17;
        v17 = v14;
        if (ecl_unlikely(!ECL_LISTP(v17))) FEtype_error_list(v17);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v16 = v17;
       }
       {
        cl_object v17;
        cl_object v18;
        cl_object v19;
        T1 = ecl_list1(v10);
        v17 = ecl_append(v7,T1);
        v18 = ECL_NIL;
        {
         cl_object v20;
         v20 = v17;
         if (ecl_unlikely(!ECL_LISTP(v20))) FEtype_error_list(v20);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         v19 = v20;
        }
        {
         cl_object v20;
         cl_object v21;
         v20 = ecl_list1(ECL_NIL);
         v21 = v20;
L32:;
         if (!(ecl_endp(v16))) { goto L34; }
         goto L33;
L34:;
         v15 = _ecl_car(v16);
         {
          cl_object v22;
          v22 = _ecl_cdr(v16);
          if (ecl_unlikely(!ECL_LISTP(v22))) FEtype_error_list(v22);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          v16 = v22;
         }
         if (!(ecl_endp(v19))) { goto L42; }
         goto L33;
L42:;
         v18 = _ecl_car(v19);
         {
          cl_object v22;
          v22 = _ecl_cdr(v19);
          if (ecl_unlikely(!ECL_LISTP(v22))) FEtype_error_list(v22);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          v19 = v22;
         }
         {
          cl_object v22;
          v22 = v21;
          if (ecl_unlikely(ECL_ATOM(v22))) FEtype_error_cons(v22);
          value0 = ECL_NIL;
          cl_env_copy->nvalues = 0;
          T1 = v22;
         }
         T2 = ecl_function_dispatch(cl_env_copy,v13)(2, v15, v18);
         v21 = ecl_list1(T2);
         (ECL_CONS_CDR(T1)=v21,T1);
         goto L32;
L33:;
         T0 = ecl_cdr(v20);
         goto L18;
        }
       }
      }
     }
L18:;
     T1 = CONS(VV[7],v6);
     T2 = cl_list(2, ECL_SYM("DECLARE",276), T1);
     T3 = cl_list(3, VV[8], v12saved_place, ECL_SYM("LIST",483));
     T4 = cl_list(2, VV[3], v12saved_place);
     T5 = cl_list(2, v11store_var, T4);
     T6 = ecl_list1(T5);
     T7 = cl_list(2, VV[7], v11store_var);
     T8 = cl_list(2, ECL_SYM("DECLARE",276), T7);
     T9 = cl_list(2, VV[1], v12saved_place);
     T10 = cl_list(3, ECL_SYM("SETQ",753), v12saved_place, T9);
     T11 = cl_list(5, ECL_SYM("LET",479), T6, T8, v9, T10);
     T12 = cl_list(3, ECL_SYM("WHEN",907), v12saved_place, T11);
     value0 = cl_list(6, ECL_SYM("LET*",480), T0, T2, T3, T12, v12saved_place);
     return value0;
    }
   }
L13:;
   value0 = v1;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}

#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/cmp/cmpopt-cons.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclANHj7oZ7_yHZ6lq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;CMPOPT-CONS.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclANHj7oZ7_yHZ6lq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  (void)0; /* No entry created for EXPAND-SIMPLE-OPTIMIZER */
  (void)0; /* No entry created for SIMPLE-OPTIMIZER-FUNCTION */
  ecl_cmp_defmacro(VV[11]);                       /*  CONS-CAR        */
  ecl_cmp_defmacro(VV[14]);                       /*  CONS-CDR        */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC8__lambda27,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("CONS",253), ECL_SYM("COMPILER-MACRO",240), T0);
 }
  ecl_cmp_defmacro(VV[15]);                       /*  DEFINE-SIMPLE-OPTIMIZER */
  L4simple_optimizer_function(ECL_SYM("RPLACA",734), VVtemp[1], VVtemp[2]);
  L4simple_optimizer_function(ECL_SYM("RPLACD",735), VVtemp[1], VVtemp[3]);
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC10__lambda39,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("NTH",604), ECL_SYM("COMPILER-MACRO",240), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC11__lambda44,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("NTHCDR",606), ECL_SYM("COMPILER-MACRO",240), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC12__lambda52,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("FIRST",373), ECL_SYM("COMPILER-MACRO",240), T0);
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC13__lambda57,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("SECOND",742), ECL_SYM("COMPILER-MACRO",240), T0);
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC14__lambda62,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("THIRD",859), ECL_SYM("COMPILER-MACRO",240), T0);
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC15__lambda67,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("FOURTH",391), ECL_SYM("COMPILER-MACRO",240), T0);
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC16__lambda72,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("FIFTH",353), ECL_SYM("COMPILER-MACRO",240), T0);
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC17__lambda77,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("SIXTH",784), ECL_SYM("COMPILER-MACRO",240), T0);
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC18__lambda82,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("SEVENTH",754), ECL_SYM("COMPILER-MACRO",240), T0);
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC19__lambda87,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("EIGHTH",328), ECL_SYM("COMPILER-MACRO",240), T0);
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC20__lambda92,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("NINTH",585), ECL_SYM("COMPILER-MACRO",240), T0);
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC21__lambda97,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("TENTH",856), ECL_SYM("COMPILER-MACRO",240), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC22__lambda102,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("REST",721), ECL_SYM("COMPILER-MACRO",240), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC23__lambda106,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(ECL_SYM("POP",645), ECL_SYM("COMPILER-MACRO",240), T0);
 }
}
