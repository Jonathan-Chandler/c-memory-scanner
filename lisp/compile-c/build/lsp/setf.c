/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:LSP;SETF.LSP                                      */
#include <ecl/ecl-cmp.h>
#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/lsp/setf.eclh"
/*      function definition for DO-SETF-METHOD-EXPANSION              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1do_setf_method_expansion(cl_narg narg, cl_object v1name, cl_object v2lambda, cl_object v3args, ...)
{
 cl_object T0, T1, T2, T3, T4, T5;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<3)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>4)) FEwrong_num_arguments_anonym();
 {
  cl_object v4stores_no;
  va_list args; va_start(args,v3args);
  {
   int i = 3;
   if (i >= narg) {
    v4stores_no = ecl_make_fixnum(1);
   } else {
    i++;
    v4stores_no = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v5vars;
   cl_object v6inits;
   cl_object v7all;
   cl_object v8stores;
   v5vars = ECL_NIL;
   v6inits = ECL_NIL;
   v7all = ECL_NIL;
   v8stores = ECL_NIL;
   {
    cl_object v9;
    v9 = v3args;
    goto L10;
L9:;
    {
     cl_object v10item;
     v10item = ecl_car(v9);
     if (ECL_FIXNUMP(v10item)) { goto L14; }
     if ((cl_keywordp(v10item))!=ECL_NIL) { goto L14; }
     v6inits = CONS(v10item,v6inits);
     v10item = cl_gensym(0);
     v5vars = CONS(v10item,v5vars);
L14:;
     v7all = CONS(v10item,v7all);
    }
    v9 = ecl_cdr(v9);
L10:;
    if (Null(v9)) { goto L26; }
    goto L9;
L26:;
   }
   {
    cl_object v9i;
    v9i = ecl_make_fixnum(0);
    goto L31;
L30:;
    T0 = cl_gensym(0);
    v8stores = CONS(T0,v8stores);
    v9i = ecl_one_plus(v9i);
L31:;
    if (!(ecl_lower(v9i,v4stores_no))) { goto L37; }
    goto L30;
L37:;
   }
   {
    cl_object v9all;
    v9all = cl_nreverse(v7all);
    T0 = cl_nreverse(v5vars);
    T1 = cl_nreverse(v6inits);
    if (Null(v2lambda)) { goto L41; }
    T3 = ecl_append(v8stores,v9all);
    T2 = cl_apply(2, v2lambda, T3);
    goto L40;
L41:;
    T3 = cl_list(2, ECL_SYM("SETF",752), v1name);
    T4 = cl_list(2, ECL_SYM("FUNCTION",398), T3);
    T5 = ecl_append(v8stores,v9all);
    T2 = cl_listX(3, ECL_SYM("FUNCALL",396), T4, T5);
L40:;
    T3 = CONS(v1name,v9all);
    cl_env_copy->nvalues = 5;
    cl_env_copy->values[4] = T3;
    cl_env_copy->values[3] = T2;
    cl_env_copy->values[2] = v8stores;
    cl_env_copy->values[1] = T1;
    cl_env_copy->values[0] = T0;
    return cl_env_copy->values[0];
   }
  }
 }
}
/*      function definition for DO-DEFSETF                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_do_defsetf(cl_narg narg, cl_object v1access_fn, cl_object v2function, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 cl_object CLV0, CLV1, CLV2;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>3)) FEwrong_num_arguments_anonym();
 {
  va_list args; va_start(args,v2function);
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v1access_fn,env0);           /*  ACCESS-FN       */
  CLV1 = env0 = CONS(v2function,env0);            /*  FUNCTION        */
  {
   int i = 2;
   if (i >= narg) {
    CLV2 = env0 = CONS(ecl_make_fixnum(1),env0);  /*  STORES-NO       */
   } else {
    i++;
    CLV2 = env0 = CONS(va_arg(args,cl_object),env0); /*  STORES-NO    */
   }
  }
  va_end(args);
  if (!(ECL_SYMBOLP(ECL_CONS_CAR(CLV1)))) { goto L1; }
  {
   cl_object v3;
   v3 = ecl_make_cclosure_va((cl_objectfn)LC2__lambda13,env0,Cblock,1);
   T0 = v3;
  }
  value0 = si_do_defsetf(3, ECL_CONS_CAR(CLV0), T0, ECL_CONS_CAR(CLV2));
  return value0;
L1:;
  {
   cl_object v3;
   v3 = ecl_make_cclosure_va((cl_objectfn)LC3__lambda14,env0,Cblock,1);
   T0 = v3;
  }
  value0 = si_do_define_setf_method(ECL_CONS_CAR(CLV0), T0);
  return value0;
 }
}
/*      closure LAMBDA13                                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC2__lambda13(cl_narg narg, cl_object v1store, ...)
{
 cl_object T0, T1;
 cl_object CLV0, CLV1, CLV2;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV2 = env0;
 CLV1 = _ecl_cdr(CLV2);                           /*  FUNCTION        */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2args;
  ecl_va_list args; ecl_va_start(args,v1store,narg,1);
  v2args = cl_grab_rest_args(args);
  ecl_va_end(args);
  T0 = ecl_list1(v1store);
  T1 = ecl_append(v2args,T0);
  value0 = CONS(ECL_CONS_CAR(CLV1),T1);
  cl_env_copy->nvalues = 1;
  return value0;
 }
 }
}
/*      closure LAMBDA14                                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC3__lambda14(cl_narg narg, cl_object v1env, ...)
{
 cl_object CLV0, CLV1, CLV2;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV2 = env0;                                     /*  STORES-NO       */
 CLV1 = _ecl_cdr(CLV2);
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2args;
  ecl_va_list args; ecl_va_start(args,v1env,narg,1);
  v2args = cl_grab_rest_args(args);
  ecl_va_end(args);
  value0 = L1do_setf_method_expansion(4, ECL_CONS_CAR(CLV0), ECL_CONS_CAR(CLV1), v2args, ECL_CONS_CAR(CLV2));
  return value0;
 }
 }
}
/*      function definition for DO-DEFINE-SETF-METHOD                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object si_do_define_setf_method(cl_object v1access_fn, cl_object v2function)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = si_put_sysprop(v1access_fn, ECL_SYM("SETF-METHOD",1157), v2function);
  return value0;
 }
}
/*      local function DEFSETF                                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC4defsetf(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4access_fn;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[59])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4access_fn = v5;
   }
   {
    cl_object v5function;
    cl_object v6documentation;
    cl_object v7stores;
    v5function = ECL_NIL;
    v6documentation = ECL_NIL;
    v7stores = ECL_NIL;
    if (Null(ecl_car(v3))) { goto L12; }
    T0 = ecl_car(v3);
    if (ECL_SYMBOLP(T0)) { goto L15; }
    T0 = ecl_car(v3);
    if (Null(cl_functionp(T0))) { goto L12; }
    goto L13;
L15:;
L13:;
    T0 = ecl_car(v3);
    v5function = cl_list(2, ECL_SYM("QUOTE",681), T0);
    v6documentation = ecl_cadr(v3);
    T0 = cl_gensym(0);
    v7stores = ecl_list1(T0);
    goto L11;
L12:;
    {
     cl_object v8args;
     cl_object v9body;
     cl_object v10decls;
     v8args = ecl_car(v3);
     v9body = ecl_cddr(v3);
     v10decls = ECL_NIL;
     value0 = ecl_function_dispatch(cl_env_copy,VV[60])(2, v9body, ECL_T) /*  FIND-DECLARATIONS */;
     {
      const int v11 = cl_env_copy->nvalues;
      v10decls = value0;
      cl_object v12;
      v12 = (v11<=1)? ECL_NIL : cl_env_copy->values[1];
      v9body = v12;
      v12 = (v11<=2)? ECL_NIL : cl_env_copy->values[2];
      v6documentation = v12;
     }
     v7stores = ecl_cadr(v3);
     T0 = ecl_append(v7stores,v8args);
     T1 = cl_listX(3, ECL_SYM("BLOCK",139), v4access_fn, v9body);
     T2 = ecl_list1(T1);
     T3 = ecl_append(v10decls,T2);
     T4 = cl_listX(3, ECL_SYM("LAMBDA",454), T0, T3);
     v5function = cl_list(2, ECL_SYM("FUNCTION",398), T4);
    }
L11:;
    if (Null(ecl_symbol_value(ECL_SYM("*REGISTER-WITH-PDE-HOOK*",1203)))) { goto L31; }
    T1 = cl_copy_tree(ecl_symbol_value(ECL_SYM("*SOURCE-LOCATION*",1202)));
    T2 = cl_list(2, ECL_SYM("QUOTE",681), v4access_fn);
    {
     cl_fixnum v8;
     v8 = ecl_length(v7stores);
     T3 = cl_list(4, ECL_SYM("DO-DEFSETF",2020), T2, v5function, ecl_make_fixnum(v8));
     T0 = ecl_function_dispatch(cl_env_copy,ecl_symbol_value(ECL_SYM("*REGISTER-WITH-PDE-HOOK*",1203)))(3, T1, v1, T3);
     goto L30;
    }
L31:;
    T1 = cl_list(2, ECL_SYM("QUOTE",681), v4access_fn);
    {
     cl_fixnum v9;
     v9 = ecl_length(v7stores);
     T0 = cl_list(4, ECL_SYM("DO-DEFSETF",2020), T1, v5function, ecl_make_fixnum(v9));
    }
L30:;
    T1 = ecl_function_dispatch(cl_env_copy,VV[61])(3, v4access_fn, ECL_SYM("SETF",752), v6documentation) /*  EXPAND-SET-DOCUMENTATION */;
    T2 = cl_list(2, ECL_SYM("QUOTE",681), v4access_fn);
    T3 = ecl_list1(T2);
    T4 = ecl_append(T1,T3);
    value0 = cl_listX(4, ECL_SYM("EVAL-WHEN",342), VV[0], T0, T4);
    return value0;
   }
  }
 }
}
/*      local function DEFINE-SETF-EXPANDER                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC5define_setf_expander(cl_object v1, cl_object v2)
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
   cl_object v4access_fn;
   cl_object v5args;
   cl_object v6body;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[59])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4access_fn = v7;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[59])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5args = v7;
   }
   v6body = v3;
   {
    cl_object v7env;
    v7env = si_memq(ECL_SYM("&ENVIRONMENT",11),v5args);
    if (Null(v7env)) { goto L17; }
    T0 = ecl_cadr(v7env);
    T1 = cl_ldiff(v5args, v7env);
    T2 = ecl_cddr(v7env);
    T3 = ecl_nconc(T1,T2);
    v5args = CONS(T0,T3);
    goto L15;
L17:;
    v7env = cl_gensym(0);
    v5args = CONS(v7env,v5args);
    T0 = cl_list(2, ECL_SYM("IGNORE",430), v7env);
    T1 = cl_list(2, ECL_SYM("DECLARE",276), T0);
    v6body = CONS(T1,v6body);
   }
L15:;
   {
    cl_object v8;                                 /*  DECLS           */
    cl_object v9;                                 /*  BODY            */
    cl_object v10;                                /*  DOCUMENTATION   */
    value0 = ecl_function_dispatch(cl_env_copy,VV[60])(2, v6body, ECL_T) /*  FIND-DECLARATIONS */;
    {
     const int v11 = cl_env_copy->nvalues;
     v8 = value0;
     cl_object v12;
     v12 = (v11<=1)? ECL_NIL : cl_env_copy->values[1];
     v9 = v12;
     v12 = (v11<=2)? ECL_NIL : cl_env_copy->values[2];
     v10 = v12;
    }
    T0 = cl_list(2, ECL_SYM("QUOTE",681), v4access_fn);
    T1 = cl_listX(3, ECL_SYM("BLOCK",139), v4access_fn, v9);
    T2 = ecl_list1(T1);
    T3 = ecl_append(v8,T2);
    T4 = cl_listX(3, ECL_SYM("LAMBDA",454), v5args, T3);
    T5 = cl_list(2, ECL_SYM("FUNCTION",398), T4);
    T6 = cl_list(3, ECL_SYM("DO-DEFINE-SETF-METHOD",2021), T0, T5);
    T7 = ecl_function_dispatch(cl_env_copy,VV[61])(3, v4access_fn, ECL_SYM("SETF",752), v10) /*  EXPAND-SET-DOCUMENTATION */;
    T8 = cl_list(2, ECL_SYM("QUOTE",681), v4access_fn);
    T9 = ecl_list1(T8);
    T10 = ecl_append(T7,T9);
    value0 = cl_listX(4, ECL_SYM("EVAL-WHEN",342), VV[0], T6, T10);
    return value0;
   }
  }
 }
}
/*      function definition for GET-SETF-EXPANSION                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L6get_setf_expansion(cl_narg narg, cl_object v1form, ...)
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
  va_list args; va_start(args,v1form);
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
   cl_object v3f;
   v3f = ECL_NIL;
   if (!(ECL_SYMBOLP(v1form))) { goto L3; }
   v3f = cl_macroexpand_1(2, v1form, v2env);
   if (Null(v3f)) { goto L5; }
   if (ecl_equal(v3f,v1form)) { goto L5; }
   value0 = L6get_setf_expansion(2, v3f, v2env);
   return value0;
L5:;
   {
    cl_object v4store;
    v4store = cl_gensym(0);
    T0 = ecl_list1(v4store);
    T1 = cl_list(3, ECL_SYM("SETQ",753), v1form, v4store);
    cl_env_copy->nvalues = 5;
    cl_env_copy->values[4] = v1form;
    cl_env_copy->values[3] = T1;
    cl_env_copy->values[2] = T0;
    cl_env_copy->values[1] = ECL_NIL;
    cl_env_copy->values[0] = ECL_NIL;
    return cl_env_copy->values[0];
   }
L3:;
   if (!(ECL_CONSP(v1form))) { goto L12; }
   T0 = ecl_car(v1form);
   if (ECL_SYMBOLP(T0)) { goto L10; }
   goto L11;
L12:;
L11:;
   value0 = cl_error(2, VV[3], v1form);
   return value0;
L10:;
   T0 = ecl_car(v1form);
   v3f = si_get_sysprop(T0, ECL_SYM("SETF-METHOD",1157));
   if (Null(v3f)) { goto L14; }
   T0 = ecl_cdr(v1form);
   value0 = cl_apply(3, v3f, v2env, T0);
   return value0;
L14:;
   v3f = cl_macroexpand_1(2, v1form, v2env);
   if (Null(v3f)) { goto L17; }
   if (ecl_equal(v3f,v1form)) { goto L17; }
   value0 = L6get_setf_expansion(2, v3f, v2env);
   return value0;
L17:;
   T0 = ecl_car(v1form);
   T1 = ecl_cdr(v1form);
   value0 = L1do_setf_method_expansion(3, T0, ECL_NIL, T1);
   return value0;
  }
 }
}
/*      local function LAMBDA35                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC7__lambda35(cl_object v1y, cl_object v2x)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(3, ECL_SYM("RPLACA",734), v2x, v1y);
  value0 = cl_list(3, ECL_SYM("PROGN",673), T0, v1y);
  return value0;
 }
}
/*      local function LAMBDA36                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC8__lambda36(cl_object v1y, cl_object v2x)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(3, ECL_SYM("RPLACD",735), v2x, v1y);
  value0 = cl_list(3, ECL_SYM("PROGN",673), T0, v1y);
  return value0;
 }
}
/*      local function LAMBDA37                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC9__lambda37(cl_object v1y, cl_object v2x)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(2, ECL_SYM("CAR",182), v2x);
  T1 = cl_list(3, ECL_SYM("RPLACA",734), T0, v1y);
  value0 = cl_list(3, ECL_SYM("PROGN",673), T1, v1y);
  return value0;
 }
}
/*      local function LAMBDA38                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC10__lambda38(cl_object v1y, cl_object v2x)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(2, ECL_SYM("CAR",182), v2x);
  T1 = cl_list(3, ECL_SYM("RPLACD",735), T0, v1y);
  value0 = cl_list(3, ECL_SYM("PROGN",673), T1, v1y);
  return value0;
 }
}
/*      local function LAMBDA39                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC11__lambda39(cl_object v1y, cl_object v2x)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(2, ECL_SYM("CDR",200), v2x);
  T1 = cl_list(3, ECL_SYM("RPLACA",734), T0, v1y);
  value0 = cl_list(3, ECL_SYM("PROGN",673), T1, v1y);
  return value0;
 }
}
/*      local function LAMBDA40                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC12__lambda40(cl_object v1y, cl_object v2x)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(2, ECL_SYM("CDR",200), v2x);
  T1 = cl_list(3, ECL_SYM("RPLACD",735), T0, v1y);
  value0 = cl_list(3, ECL_SYM("PROGN",673), T1, v1y);
  return value0;
 }
}
/*      local function LAMBDA41                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC13__lambda41(cl_object v1y, cl_object v2x)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(2, ECL_SYM("CAAR",173), v2x);
  T1 = cl_list(3, ECL_SYM("RPLACA",734), T0, v1y);
  value0 = cl_list(3, ECL_SYM("PROGN",673), T1, v1y);
  return value0;
 }
}
/*      local function LAMBDA42                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC14__lambda42(cl_object v1y, cl_object v2x)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(2, ECL_SYM("CAAR",173), v2x);
  T1 = cl_list(3, ECL_SYM("RPLACD",735), T0, v1y);
  value0 = cl_list(3, ECL_SYM("PROGN",673), T1, v1y);
  return value0;
 }
}
/*      local function LAMBDA43                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC15__lambda43(cl_object v1y, cl_object v2x)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(2, ECL_SYM("CDAR",192), v2x);
  T1 = cl_list(3, ECL_SYM("RPLACA",734), T0, v1y);
  value0 = cl_list(3, ECL_SYM("PROGN",673), T1, v1y);
  return value0;
 }
}
/*      local function LAMBDA44                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC16__lambda44(cl_object v1y, cl_object v2x)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(2, ECL_SYM("CDAR",192), v2x);
  T1 = cl_list(3, ECL_SYM("RPLACD",735), T0, v1y);
  value0 = cl_list(3, ECL_SYM("PROGN",673), T1, v1y);
  return value0;
 }
}
/*      local function LAMBDA45                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC17__lambda45(cl_object v1y, cl_object v2x)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(2, ECL_SYM("CADR",180), v2x);
  T1 = cl_list(3, ECL_SYM("RPLACA",734), T0, v1y);
  value0 = cl_list(3, ECL_SYM("PROGN",673), T1, v1y);
  return value0;
 }
}
/*      local function LAMBDA46                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC18__lambda46(cl_object v1y, cl_object v2x)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(2, ECL_SYM("CADR",180), v2x);
  T1 = cl_list(3, ECL_SYM("RPLACD",735), T0, v1y);
  value0 = cl_list(3, ECL_SYM("PROGN",673), T1, v1y);
  return value0;
 }
}
/*      local function LAMBDA47                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC19__lambda47(cl_object v1y, cl_object v2x)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(2, ECL_SYM("CDDR",199), v2x);
  T1 = cl_list(3, ECL_SYM("RPLACA",734), T0, v1y);
  value0 = cl_list(3, ECL_SYM("PROGN",673), T1, v1y);
  return value0;
 }
}
/*      local function LAMBDA48                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC20__lambda48(cl_object v1y, cl_object v2x)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(2, ECL_SYM("CDDR",199), v2x);
  T1 = cl_list(3, ECL_SYM("RPLACD",735), T0, v1y);
  value0 = cl_list(3, ECL_SYM("PROGN",673), T1, v1y);
  return value0;
 }
}
/*      local function LAMBDA49                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC21__lambda49(cl_object v1y, cl_object v2x)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(2, ECL_SYM("CAAAR",169), v2x);
  T1 = cl_list(3, ECL_SYM("RPLACA",734), T0, v1y);
  value0 = cl_list(3, ECL_SYM("PROGN",673), T1, v1y);
  return value0;
 }
}
/*      local function LAMBDA50                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC22__lambda50(cl_object v1y, cl_object v2x)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(2, ECL_SYM("CAAAR",169), v2x);
  T1 = cl_list(3, ECL_SYM("RPLACD",735), T0, v1y);
  value0 = cl_list(3, ECL_SYM("PROGN",673), T1, v1y);
  return value0;
 }
}
/*      local function LAMBDA51                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC23__lambda51(cl_object v1y, cl_object v2x)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(2, ECL_SYM("CDAAR",188), v2x);
  T1 = cl_list(3, ECL_SYM("RPLACA",734), T0, v1y);
  value0 = cl_list(3, ECL_SYM("PROGN",673), T1, v1y);
  return value0;
 }
}
/*      local function LAMBDA52                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC24__lambda52(cl_object v1y, cl_object v2x)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(2, ECL_SYM("CDAAR",188), v2x);
  T1 = cl_list(3, ECL_SYM("RPLACD",735), T0, v1y);
  value0 = cl_list(3, ECL_SYM("PROGN",673), T1, v1y);
  return value0;
 }
}
/*      local function LAMBDA53                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC25__lambda53(cl_object v1y, cl_object v2x)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(2, ECL_SYM("CADAR",176), v2x);
  T1 = cl_list(3, ECL_SYM("RPLACA",734), T0, v1y);
  value0 = cl_list(3, ECL_SYM("PROGN",673), T1, v1y);
  return value0;
 }
}
/*      local function LAMBDA54                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC26__lambda54(cl_object v1y, cl_object v2x)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(2, ECL_SYM("CADAR",176), v2x);
  T1 = cl_list(3, ECL_SYM("RPLACD",735), T0, v1y);
  value0 = cl_list(3, ECL_SYM("PROGN",673), T1, v1y);
  return value0;
 }
}
/*      local function LAMBDA55                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC27__lambda55(cl_object v1y, cl_object v2x)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(2, ECL_SYM("CDDAR",195), v2x);
  T1 = cl_list(3, ECL_SYM("RPLACA",734), T0, v1y);
  value0 = cl_list(3, ECL_SYM("PROGN",673), T1, v1y);
  return value0;
 }
}
/*      local function LAMBDA56                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC28__lambda56(cl_object v1y, cl_object v2x)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(2, ECL_SYM("CDDAR",195), v2x);
  T1 = cl_list(3, ECL_SYM("RPLACD",735), T0, v1y);
  value0 = cl_list(3, ECL_SYM("PROGN",673), T1, v1y);
  return value0;
 }
}
/*      local function LAMBDA57                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC29__lambda57(cl_object v1y, cl_object v2x)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(2, ECL_SYM("CAADR",172), v2x);
  T1 = cl_list(3, ECL_SYM("RPLACA",734), T0, v1y);
  value0 = cl_list(3, ECL_SYM("PROGN",673), T1, v1y);
  return value0;
 }
}
/*      local function LAMBDA58                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC30__lambda58(cl_object v1y, cl_object v2x)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(2, ECL_SYM("CAADR",172), v2x);
  T1 = cl_list(3, ECL_SYM("RPLACD",735), T0, v1y);
  value0 = cl_list(3, ECL_SYM("PROGN",673), T1, v1y);
  return value0;
 }
}
/*      local function LAMBDA59                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC31__lambda59(cl_object v1y, cl_object v2x)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(2, ECL_SYM("CDADR",191), v2x);
  T1 = cl_list(3, ECL_SYM("RPLACA",734), T0, v1y);
  value0 = cl_list(3, ECL_SYM("PROGN",673), T1, v1y);
  return value0;
 }
}
/*      local function LAMBDA60                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC32__lambda60(cl_object v1y, cl_object v2x)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(2, ECL_SYM("CDADR",191), v2x);
  T1 = cl_list(3, ECL_SYM("RPLACD",735), T0, v1y);
  value0 = cl_list(3, ECL_SYM("PROGN",673), T1, v1y);
  return value0;
 }
}
/*      local function LAMBDA61                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC33__lambda61(cl_object v1y, cl_object v2x)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(2, ECL_SYM("CADDR",179), v2x);
  T1 = cl_list(3, ECL_SYM("RPLACA",734), T0, v1y);
  value0 = cl_list(3, ECL_SYM("PROGN",673), T1, v1y);
  return value0;
 }
}
/*      local function LAMBDA62                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC34__lambda62(cl_object v1y, cl_object v2x)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(2, ECL_SYM("CADDR",179), v2x);
  T1 = cl_list(3, ECL_SYM("RPLACD",735), T0, v1y);
  value0 = cl_list(3, ECL_SYM("PROGN",673), T1, v1y);
  return value0;
 }
}
/*      local function LAMBDA63                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC35__lambda63(cl_object v1y, cl_object v2x)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(2, ECL_SYM("CDDDR",198), v2x);
  T1 = cl_list(3, ECL_SYM("RPLACA",734), T0, v1y);
  value0 = cl_list(3, ECL_SYM("PROGN",673), T1, v1y);
  return value0;
 }
}
/*      local function LAMBDA64                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC36__lambda64(cl_object v1y, cl_object v2x)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(2, ECL_SYM("CDDDR",198), v2x);
  T1 = cl_list(3, ECL_SYM("RPLACD",735), T0, v1y);
  value0 = cl_list(3, ECL_SYM("PROGN",673), T1, v1y);
  return value0;
 }
}
/*      local function LAMBDA65                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC37__lambda65(cl_object v1y, cl_object v2x)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(3, ECL_SYM("RPLACA",734), v2x, v1y);
  value0 = cl_list(3, ECL_SYM("PROGN",673), T0, v1y);
  return value0;
 }
}
/*      local function LAMBDA66                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC38__lambda66(cl_object v1y, cl_object v2x)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(2, ECL_SYM("CDR",200), v2x);
  T1 = cl_list(3, ECL_SYM("RPLACA",734), T0, v1y);
  value0 = cl_list(3, ECL_SYM("PROGN",673), T1, v1y);
  return value0;
 }
}
/*      local function LAMBDA67                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC39__lambda67(cl_object v1y, cl_object v2x)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(2, ECL_SYM("CDDR",199), v2x);
  T1 = cl_list(3, ECL_SYM("RPLACA",734), T0, v1y);
  value0 = cl_list(3, ECL_SYM("PROGN",673), T1, v1y);
  return value0;
 }
}
/*      local function LAMBDA68                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC40__lambda68(cl_object v1y, cl_object v2x)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(2, ECL_SYM("CDDDR",198), v2x);
  T1 = cl_list(3, ECL_SYM("RPLACA",734), T0, v1y);
  value0 = cl_list(3, ECL_SYM("PROGN",673), T1, v1y);
  return value0;
 }
}
/*      local function LAMBDA69                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC41__lambda69(cl_object v1y, cl_object v2x)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(2, ECL_SYM("CDDDDR",197), v2x);
  T1 = cl_list(3, ECL_SYM("RPLACA",734), T0, v1y);
  value0 = cl_list(3, ECL_SYM("PROGN",673), T1, v1y);
  return value0;
 }
}
/*      local function LAMBDA70                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC42__lambda70(cl_object v1y, cl_object v2x)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(3, ECL_SYM("NTHCDR",606), ecl_make_fixnum(5), v2x);
  T1 = cl_list(3, ECL_SYM("RPLACA",734), T0, v1y);
  value0 = cl_list(3, ECL_SYM("PROGN",673), T1, v1y);
  return value0;
 }
}
/*      local function LAMBDA71                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC43__lambda71(cl_object v1y, cl_object v2x)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(3, ECL_SYM("NTHCDR",606), ecl_make_fixnum(6), v2x);
  T1 = cl_list(3, ECL_SYM("RPLACA",734), T0, v1y);
  value0 = cl_list(3, ECL_SYM("PROGN",673), T1, v1y);
  return value0;
 }
}
/*      local function LAMBDA72                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC44__lambda72(cl_object v1y, cl_object v2x)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(3, ECL_SYM("NTHCDR",606), ecl_make_fixnum(7), v2x);
  T1 = cl_list(3, ECL_SYM("RPLACA",734), T0, v1y);
  value0 = cl_list(3, ECL_SYM("PROGN",673), T1, v1y);
  return value0;
 }
}
/*      local function LAMBDA73                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC45__lambda73(cl_object v1y, cl_object v2x)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(3, ECL_SYM("NTHCDR",606), ecl_make_fixnum(8), v2x);
  T1 = cl_list(3, ECL_SYM("RPLACA",734), T0, v1y);
  value0 = cl_list(3, ECL_SYM("PROGN",673), T1, v1y);
  return value0;
 }
}
/*      local function LAMBDA74                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC46__lambda74(cl_object v1y, cl_object v2x)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(3, ECL_SYM("NTHCDR",606), ecl_make_fixnum(9), v2x);
  T1 = cl_list(3, ECL_SYM("RPLACA",734), T0, v1y);
  value0 = cl_list(3, ECL_SYM("PROGN",673), T1, v1y);
  return value0;
 }
}
/*      local function LAMBDA75                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC47__lambda75(cl_object v1y, cl_object v2x)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(3, ECL_SYM("RPLACD",735), v2x, v1y);
  value0 = cl_list(3, ECL_SYM("PROGN",673), T0, v1y);
  return value0;
 }
}
/*      local function LAMBDA81                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC48__lambda81(cl_narg narg, cl_object v1v, cl_object v2s, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>3)) FEwrong_num_arguments_anonym();
 {
  cl_object v3env;
  va_list args; va_start(args,v2s);
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
  value0 = cl_list(4, ECL_SYM("FSET",1084), v2s, v1v, ECL_T);
  return value0;
 }
}
/*      local function LAMBDA84                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC49__lambda84(cl_narg narg, cl_object v1v, cl_object v2s, cl_object v3p, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<3)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>4)) FEwrong_num_arguments_anonym();
 {
  cl_object v4d;
  va_list args; va_start(args,v3p);
  {
   int i = 3;
   if (i >= narg) {
    v4d = ECL_NIL;
   } else {
    i++;
    v4d = va_arg(args,cl_object);
   }
  }
  va_end(args);
  if (Null(v4d)) { goto L2; }
  T0 = cl_list(4, ECL_SYM("PUTPROP",1142), v2s, v1v, v3p);
  value0 = cl_list(3, ECL_SYM("PROGN",673), v4d, T0);
  return value0;
L2:;
  value0 = cl_list(4, ECL_SYM("PUTPROP",1142), v2s, v1v, v3p);
  return value0;
 }
}
/*      local function LAMBDA86                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC50__lambda86(cl_object v1v, cl_object v2n, cl_object v3l)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(3, ECL_SYM("NTHCDR",606), v2n, v3l);
  T1 = cl_list(3, ECL_SYM("RPLACA",734), T0, v1v);
  value0 = cl_list(3, ECL_SYM("PROGN",673), T1, v1v);
  return value0;
 }
}
/*      local function LAMBDA93                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC51__lambda93(cl_narg narg, cl_object v1v, cl_object v2k, cl_object v3h, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<3)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>4)) FEwrong_num_arguments_anonym();
 {
  cl_object v4d;
  va_list args; va_start(args,v3h);
  {
   int i = 3;
   if (i >= narg) {
    v4d = ECL_NIL;
   } else {
    i++;
    v4d = va_arg(args,cl_object);
   }
  }
  va_end(args);
  value0 = cl_list(4, ECL_SYM("HASH-SET",1092), v2k, v3h, v1v);
  return value0;
 }
}
/*      local function LAMBDA95                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC52__lambda95(cl_object v1function, cl_object v2fname)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_list(4, ECL_SYM("PUT-SYSPROP",1141), v2fname, VV[5], v1function);
  return value0;
 }
}
/*      local function LAMBDA98                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC53__lambda98(cl_narg narg, cl_object v1env, cl_object v2place, cl_object v3indicator, ...)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<3)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>4)) FEwrong_num_arguments_anonym();
 {
  cl_object v4default;
  cl_object v5default_p;
  va_list args; va_start(args,v3indicator);
  {
   int i = 3;
   if (i >= narg) {
    v4default = ECL_NIL;
    v5default_p = ECL_NIL;
   } else {
    i++;
    v4default = va_arg(args,cl_object);
    v5default_p = ECL_T;
   }
  }
  va_end(args);
  {
   cl_object v7;                                  /*  VARS            */
   cl_object v8;                                  /*  VALS            */
   cl_object v9;                                  /*  STORES          */
   cl_object v10;                                 /*  STORE-FORM      */
   cl_object v11;                                 /*  ACCESS-FORM     */
   value0 = L6get_setf_expansion(2, v2place, v1env);
   {
    v7 = value0;
    v8 = cl_env_copy->values[1];
    v9 = cl_env_copy->values[2];
    v10 = cl_env_copy->values[3];
    v11 = cl_env_copy->values[4];
   }
   {
    cl_object v12itemp;
    cl_object v13store;
    cl_object v14def;
    v12itemp = cl_gensym(0);
    v13store = cl_gensym(0);
    v14def = cl_gensym(0);
    if (Null(v5default_p)) { goto L7; }
    T0 = ecl_list1(v14def);
    goto L6;
L7:;
    T0 = ECL_NIL;
L6:;
    T1 = CONS(v12itemp,T0);
    T2 = ecl_append(v7,T1);
    if (Null(v5default_p)) { goto L11; }
    T3 = ecl_list1(v4default);
    goto L9;
L11:;
    T3 = ECL_NIL;
    goto L9;
L9:;
    T4 = CONS(v3indicator,T3);
    T5 = ecl_append(v8,T4);
    T6 = ecl_list1(v13store);
    T7 = ecl_car(v9);
    T8 = cl_list(4, ECL_SYM("PUT-F",1139), v11, v13store, v12itemp);
    T9 = cl_list(2, T7, T8);
    T10 = ecl_list1(T9);
    T11 = cl_list(4, ECL_SYM("LET",479), T10, v10, v13store);
    T12 = cl_list(4, ECL_SYM("GETF",414), v11, v12itemp, v4default);
    cl_env_copy->nvalues = 5;
    cl_env_copy->values[4] = T12;
    cl_env_copy->values[3] = T11;
    cl_env_copy->values[2] = T6;
    cl_env_copy->values[1] = T5;
    cl_env_copy->values[0] = T2;
    return cl_env_copy->values[0];
   }
  }
 }
}
/*      local function LAMBDA99                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC54__lambda99(cl_narg narg, cl_object v1sequence2, cl_object v2sequence1, cl_object v3start1, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<3)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>4)) FEwrong_num_arguments_anonym();
 {
  cl_object v4end1;
  va_list args; va_start(args,v3start1);
  {
   int i = 3;
   if (i >= narg) {
    v4end1 = ECL_NIL;
   } else {
    i++;
    v4end1 = va_arg(args,cl_object);
   }
  }
  va_end(args);
  T0 = cl_list(7, ECL_SYM("REPLACE",719), v2sequence1, v1sequence2, ECL_SYM("START1",1338), v3start1, ECL_SYM("END1",1248), v4end1);
  value0 = cl_list(3, ECL_SYM("PROGN",673), T0, v1sequence2);
  return value0;
 }
}
/*      local function LAMBDA100                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC55__lambda100(cl_object v1env, cl_object v2type, cl_object v3place)
{
 cl_object T0, T1, T2, T3, T4;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v5;                                  /*  VARS            */
   cl_object v6;                                  /*  VALS            */
   cl_object v7;                                  /*  STORES          */
   cl_object v8;                                  /*  STORE-FORM      */
   cl_object v9;                                  /*  ACCESS-FORM     */
   value0 = L6get_setf_expansion(2, v3place, v1env);
   {
    v5 = value0;
    v6 = cl_env_copy->values[1];
    v7 = cl_env_copy->values[2];
    v8 = cl_env_copy->values[3];
    v9 = cl_env_copy->values[4];
   }
   T0 = ecl_car(v7);
   T1 = cl_list(3, ECL_SYM("THE",858), v2type, T0);
   T2 = ecl_car(v7);
   T3 = cl_subst(3, T1, T2, v8);
   T4 = cl_list(3, ECL_SYM("THE",858), v2type, v9);
   cl_env_copy->nvalues = 5;
   cl_env_copy->values[4] = T4;
   cl_env_copy->values[3] = T3;
   cl_env_copy->values[2] = v7;
   cl_env_copy->values[1] = v6;
   cl_env_copy->values[0] = v5;
   return cl_env_copy->values[0];
  }
 }
}
/*      local function LAMBDA101                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC56__lambda101(cl_narg narg, cl_object v1env, cl_object v2fn, ...)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 {
  cl_object v3rest;
  ecl_va_list args; ecl_va_start(args,v2fn,narg,2);
  v3rest = cl_grab_rest_args(args);
  ecl_va_end(args);
  if (!(ECL_CONSP(v2fn))) { goto L4; }
  T0 = ecl_car(v2fn);
  if ((T0)==(ECL_SYM("FUNCTION",398))) { goto L7; }
  T0 = ecl_car(v2fn);
  if (!((T0)==(ECL_SYM("QUOTE",681)))) { goto L4; }
  goto L6;
L7:;
L6:;
  T0 = ecl_cadr(v2fn);
  if (!(ECL_SYMBOLP(T0))) { goto L4; }
  T0 = ecl_cddr(v2fn);
  if (T0==ECL_NIL) { goto L1; }
  goto L2;
L4:;
  goto L2;
L2:;
  cl_error(2, VV[6], v2fn);
L1:;
  {
   cl_object v5;                                  /*  VARS            */
   cl_object v6;                                  /*  VALS            */
   cl_object v7;                                  /*  STORES          */
   cl_object v8;                                  /*  STORE-FORM      */
   cl_object v9;                                  /*  ACCESS-FORM     */
   T0 = ecl_cadr(v2fn);
   T1 = CONS(T0,v3rest);
   value0 = L6get_setf_expansion(2, T1, v1env);
   {
    v5 = value0;
    v6 = cl_env_copy->values[1];
    v7 = cl_env_copy->values[2];
    v8 = cl_env_copy->values[3];
    v9 = cl_env_copy->values[4];
   }
   T0 = ecl_last(v8,1);
   T1 = ecl_car(T0);
   T2 = ecl_last(v5,1);
   T3 = ecl_car(T2);
   if (!((T1)==(T3))) { goto L11; }
   T0 = ecl_car(v8);
   T1 = cl_list(2, ECL_SYM("FUNCTION",398), T0);
   T2 = ecl_cdr(v8);
   T3 = cl_listX(3, ECL_SYM("APPLY",91), T1, T2);
   T4 = ecl_cadr(v2fn);
   T5 = cl_list(2, ECL_SYM("FUNCTION",398), T4);
   T6 = ecl_cdr(v9);
   T7 = cl_listX(3, ECL_SYM("APPLY",91), T5, T6);
   cl_env_copy->nvalues = 5;
   cl_env_copy->values[4] = T7;
   cl_env_copy->values[3] = T3;
   cl_env_copy->values[2] = v7;
   cl_env_copy->values[1] = v6;
   cl_env_copy->values[0] = v5;
   return cl_env_copy->values[0];
L11:;
   T0 = ecl_butlast(v8,1);
   T1 = ecl_last(T0,1);
   T2 = ecl_car(T1);
   T3 = ecl_last(v5,1);
   T4 = ecl_car(T3);
   if (!((T2)==(T4))) { goto L13; }
   T0 = ecl_car(v8);
   T1 = cl_list(2, ECL_SYM("FUNCTION",398), T0);
   T2 = cl_butlast(2, v8, ecl_make_fixnum(2));
   T3 = ecl_cdr(T2);
   T4 = ecl_butlast(v8,1);
   T5 = ecl_last(T4,1);
   T6 = ecl_car(T5);
   T7 = ecl_last(v8,1);
   T8 = ecl_car(T7);
   T9 = cl_list(2, ECL_SYM("LIST",483), T8);
   T10 = cl_list(3, ECL_SYM("APPEND",90), T6, T9);
   T11 = ecl_list1(T10);
   T12 = ecl_append(T3,T11);
   T13 = cl_listX(3, ECL_SYM("APPLY",91), T1, T12);
   T14 = ecl_cadr(v2fn);
   T15 = cl_list(2, ECL_SYM("FUNCTION",398), T14);
   T16 = ecl_cdr(v9);
   T17 = cl_listX(3, ECL_SYM("APPLY",91), T15, T16);
   cl_env_copy->nvalues = 5;
   cl_env_copy->values[4] = T17;
   cl_env_copy->values[3] = T13;
   cl_env_copy->values[2] = v7;
   cl_env_copy->values[1] = v6;
   cl_env_copy->values[0] = v5;
   return cl_env_copy->values[0];
L13:;
   value0 = cl_error(2, VV[6], v2fn);
   return value0;
  }
 }
}
/*      local function LAMBDA102                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC57__lambda102(cl_object v1env, cl_object v2bytespec, cl_object v3int)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7;
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
   value0 = L6get_setf_expansion(2, v3int, v1env);
   {
    v5 = value0;
    v6 = cl_env_copy->values[1];
    v7 = cl_env_copy->values[2];
    v8 = cl_env_copy->values[3];
    v9 = cl_env_copy->values[4];
   }
   {
    cl_object v10btemp;
    cl_object v11store;
    cl_object v12stemp;
    v10btemp = cl_gensym(0);
    v11store = cl_gensym(0);
    v12stemp = ecl_car(v7);
    T0 = CONS(v10btemp,v5);
    T1 = CONS(v2bytespec,v6);
    T2 = ecl_list1(v11store);
    T3 = cl_list(4, ECL_SYM("DPB",320), v11store, v10btemp, v9);
    T4 = cl_list(2, v12stemp, T3);
    T5 = ecl_list1(T4);
    T6 = cl_list(4, ECL_SYM("LET",479), T5, v8, v11store);
    T7 = cl_list(3, ECL_SYM("LDB",459), v10btemp, v9);
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
/*      local function LAMBDA103                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC58__lambda103(cl_object v1env, cl_object v2bytespec, cl_object v3int)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7;
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
   value0 = L6get_setf_expansion(2, v3int, v1env);
   {
    v5 = value0;
    v6 = cl_env_copy->values[1];
    v7 = cl_env_copy->values[2];
    v8 = cl_env_copy->values[3];
    v9 = cl_env_copy->values[4];
   }
   {
    cl_object v10btemp;
    cl_object v11store;
    cl_object v12stemp;
    v10btemp = cl_gensym(0);
    v11store = cl_gensym(0);
    v12stemp = ecl_car(v7);
    T0 = CONS(v10btemp,v5);
    T1 = CONS(v2bytespec,v6);
    T2 = ecl_list1(v11store);
    T3 = cl_list(4, ECL_SYM("DEPOSIT-FIELD",300), v11store, v10btemp, v9);
    T4 = cl_list(2, v12stemp, T3);
    T5 = ecl_list1(T4);
    T6 = cl_list(4, ECL_SYM("LET",479), T5, v8, v11store);
    T7 = cl_list(3, ECL_SYM("MASK-FIELD",552), v10btemp, v9);
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
/*      function definition for TRIVIAL-SETF-FORM                     */
/*      optimize speed 3, debug 1, space 1, safety 0                  */
static cl_object L59trivial_setf_form(cl_object v1place, cl_object v2vars, cl_object v3stores, cl_object v4store_form, cl_object v5access_form)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 if (!(ECL_ATOM(v1place))) { goto L2; }
 if (!(v2vars==ECL_NIL)) { goto L2; }
 if (!((v5access_form)==(v1place))) { goto L2; }
 {
  cl_fixnum v6;
  v6 = ecl_length(v3stores);
  if (!((v6)==(1))) { goto L2; }
 }
 if (!(ECL_LISTP(v4store_form))) { goto L2; }
 {
  cl_fixnum v6;
  v6 = ecl_length(v4store_form);
  if (!((v6)==(3))) { goto L2; }
 }
 {
  cl_object v6;
  v6 = _ecl_car(v4store_form);
  if (!((v6)==(ECL_SYM("SETQ",753)))) { goto L14; }
  goto L11;
  goto L12;
L14:;
  goto L12;
L12:;
  if (!((v6)==(ECL_SYM("SETF",752)))) { goto L2; }
  goto L9;
L11:;
 }
L9:;
 T0 = _ecl_cadr(v4store_form);
 if (!((T0)==(v1place))) { goto L2; }
 T0 = _ecl_caddr(v4store_form);
 T1 = _ecl_car(v3stores);
 value0 = ecl_make_bool((T0)==(T1));
 cl_env_copy->nvalues = 1;
 return value0;
L2:;
 value0 = ECL_NIL;
 cl_env_copy->nvalues = 1;
 return value0;
}
/*      function definition for TRY-SIMPLER-EXPANSION                 */
/*      optimize speed 3, debug 1, space 1, safety 0                  */
static cl_object L60try_simpler_expansion(cl_object v1place, cl_object v2vars, cl_object v3vals, cl_object v4stores, cl_object v5newvalue, cl_object v6store_form)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 if (!(ECL_CONSP(v1place))) { goto L1; }
 if (!(ECL_CONSP(v6store_form))) { goto L1; }
 {
  cl_fixnum v7;
  v7 = ecl_length(v1place);
  {
   cl_fixnum v8;
   v8 = ecl_length(v6store_form);
   {
    cl_fixnum v9;
    v9 = (v8)-1;
    if (!((v7)==(v9))) { goto L1; }
   }
  }
 }
 {
  cl_object v7;
  cl_object v8output;
  cl_object v9v;
  {
   cl_object v10;
   v10 = v6store_form;
   if (Null(v10)) { goto L8; }
   {
    cl_object v11;
    v11 = ECL_CONS_CDR(v10);
    v6store_form = v11;
    v10 = ECL_CONS_CAR(v10);
   }
L8:;
   v7 = v10;
  }
  v8output = ECL_NIL;
  v9v = ECL_NIL;
  {
   cl_object v10;
   v10 = _ecl_cdr(v1place);
   goto L19;
L18:;
   {
    cl_object v11i;
    v11i = _ecl_car(v10);
    if (ECL_CONSP(v6store_form)) { goto L23; }
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
L23:;
    v9v = ECL_CONS_CAR(v6store_form);
    v6store_form = ECL_CONS_CDR(v6store_form);
    if ((v9v)==(v11i)) { goto L29; }
    {
     cl_object v12;
     v12 = v2vars;
     if (Null(v12)) { goto L38; }
     {
      cl_object v13;
      v13 = ECL_CONS_CDR(v12);
      v2vars = v13;
      v12 = ECL_CONS_CAR(v12);
     }
L38:;
     T0 = v12;
    }
    if (!((v9v)==(T0))) { goto L33; }
    {
     cl_object v12;
     v12 = v3vals;
     if (Null(v12)) { goto L47; }
     {
      cl_object v13;
      v13 = ECL_CONS_CDR(v12);
      v3vals = v13;
      v12 = ECL_CONS_CAR(v12);
     }
L47:;
     T0 = v12;
    }
    if ((T0)==(v11i)) { goto L29; }
    goto L30;
L33:;
    goto L30;
L30:;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
L29:;
    v8output = CONS(v11i,v8output);
   }
   v10 = _ecl_cdr(v10);
L19:;
   if (Null(v10)) { goto L57; }
   goto L18;
L57:;
   T0 = _ecl_car(v4stores);
   T1 = _ecl_car(v6store_form);
   if (!((T0)==(T1))) { goto L59; }
   T0 = CONS(v5newvalue,v8output);
   T1 = cl_nreverse(T0);
   value0 = CONS(v7,T1);
   cl_env_copy->nvalues = 1;
   return value0;
L59:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
L1:;
 value0 = ECL_NIL;
 cl_env_copy->nvalues = 1;
 return value0;
}
/*      function definition for SETF-EXPAND-1                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L61setf_expand_1(cl_object v1place, cl_object v2newvalue, cl_object v3env)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v5;                                  /*  VARS            */
   cl_object v6;                                  /*  VALS            */
   cl_object v7;                                  /*  STORES          */
   cl_object v8;                                  /*  STORE-FORM      */
   cl_object v9;                                  /*  ACCESS-FORM     */
   value0 = L6get_setf_expansion(2, v1place, v3env);
   {
    v5 = value0;
    v6 = cl_env_copy->values[1];
    v7 = cl_env_copy->values[2];
    v8 = cl_env_copy->values[3];
    v9 = cl_env_copy->values[4];
   }
   if (Null(L59trivial_setf_form(v1place, v5, v7, v8, v9))) { goto L2; }
   value0 = cl_list(3, ECL_SYM("SETQ",753), v1place, v2newvalue);
   return value0;
L2:;
   {
    cl_object v10;
    v10 = L60try_simpler_expansion(v1place, v5, v6, v7, v2newvalue, v8);
    if (Null(v10)) { goto L5; }
    value0 = v10;
    cl_env_copy->nvalues = 1;
    return value0;
L5:;
    T0 = (ECL_SYM("LIST",483)->symbol.gfdef);
    T1 = (cl_env_copy->function=(ECL_SYM("MAPCAR",547)->symbol.gfdef))->cfun.entry(3, T0, v5, v6) /*  MAPCAR */;
    T2 = cl_list(4, ECL_SYM("MULTIPLE-VALUE-BIND",574), v7, v2newvalue, v8);
    value0 = cl_list(3, ECL_SYM("LET*",480), T1, T2);
    return value0;
   }
  }
 }
}
/*      function definition for SETF-EXPAND                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L62setf_expand(cl_object v1l, cl_object v2env)
{
 cl_object T0, T1, T2, T3, T4;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ecl_endp(v1l))) { goto L1; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  T0 = ecl_cdr(v1l);
  if (!(ecl_endp(T0))) { goto L3; }
  value0 = cl_error(2, VV[9], v1l);
  return value0;
L3:;
  T0 = ecl_car(v1l);
  T1 = ecl_cadr(v1l);
  T2 = L61setf_expand_1(T0, T1, v2env);
  T3 = ecl_cddr(v1l);
  T4 = L62setf_expand(T3, v2env);
  value0 = CONS(T2,T4);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function SETF                                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC63setf(cl_object v1, cl_object v2env)
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
   v3 = ecl_cdr(v1);
   if (!(ecl_endp(v3))) { goto L2; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L2:;
   T0 = ecl_cdr(v3);
   if (!(ecl_endp(T0))) { goto L4; }
   value0 = cl_error(2, VV[9], v3);
   return value0;
L4:;
   T0 = ecl_cddr(v3);
   if (!(ecl_endp(T0))) { goto L6; }
   T0 = ecl_car(v3);
   T1 = ecl_cadr(v3);
   value0 = L61setf_expand_1(T0, T1, v2env);
   return value0;
L6:;
   T0 = L62setf_expand(v3, v2env);
   value0 = CONS(ECL_SYM("PROGN",673),T0);
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function WITH-SETF-EXPANSIONS                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC64with_setf_expansions(cl_object v1, cl_object v2)
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
   cl_object v4;
   cl_object v5;
   cl_object v6pairs;
   cl_object v7stores;
   cl_object v8store_forms;
   cl_object v9access_forms;
   cl_object v10;
   cl_object v11;
   cl_object v12args;
   cl_object v13env;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[59])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v14;
    v14 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4 = v14;
   }
   v5 = v4;
   if (!(v5==ECL_NIL)) { goto L10; }
   ecl_function_dispatch(cl_env_copy,VV[59])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L10:;
   {
    cl_object v14;
    v14 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v6pairs = v14;
   }
   if (!(v5==ECL_NIL)) { goto L16; }
   ecl_function_dispatch(cl_env_copy,VV[59])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L16:;
   {
    cl_object v14;
    v14 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v7stores = v14;
   }
   if (!(v5==ECL_NIL)) { goto L22; }
   ecl_function_dispatch(cl_env_copy,VV[59])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L22:;
   {
    cl_object v14;
    v14 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v8store_forms = v14;
   }
   if (!(v5==ECL_NIL)) { goto L28; }
   ecl_function_dispatch(cl_env_copy,VV[59])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L28:;
   {
    cl_object v14;
    v14 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v9access_forms = v14;
   }
   if (!(v3==ECL_NIL)) { goto L34; }
   ecl_function_dispatch(cl_env_copy,VV[59])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L34:;
   {
    cl_object v14;
    v14 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v10 = v14;
   }
   v11 = v10;
   if (!(v11==ECL_NIL)) { goto L41; }
   ecl_function_dispatch(cl_env_copy,VV[59])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L41:;
   {
    cl_object v14;
    v14 = ecl_car(v11);
    v11 = ecl_cdr(v11);
    v12args = v14;
   }
   if (Null(v11)) { goto L47; }
   {
    cl_object v14;
    v14 = ecl_car(v11);
    v11 = ecl_cdr(v11);
    v13env = v14;
    goto L46;
   }
L47:;
   v13env = ECL_NIL;
L46:;
   if (Null(v11)) { goto L52; }
   ecl_function_dispatch(cl_env_copy,VV[66])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L52:;
   if (Null(v5)) { goto L54; }
   ecl_function_dispatch(cl_env_copy,VV[66])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L54:;
   T0 = cl_list(4, v6pairs, v7stores, v8store_forms, v9access_forms);
   T1 = cl_list(3, VV[4], VV[13], v13env);
   T2 = cl_list(2, ECL_SYM("MULTIPLE-VALUE-LIST",576), T1);
   T3 = cl_list(3, ECL_SYM("LAMBDA",454), VV[12], T2);
   T4 = cl_list(2, ECL_SYM("REVERSE",729), v12args);
   T5 = cl_list(3, ECL_SYM("MAPCAR",547), T3, T4);
   T6 = cl_listX(4, ECL_SYM("REDUCE",708), VV[11], T5, VV[14]);
   value0 = cl_listX(4, ECL_SYM("DESTRUCTURING-BIND",302), T0, T6, v3);
   return value0;
  }
 }
}
/*      local function PSETF                                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC68psetf(cl_object v1, cl_object v2env)
{
 cl_object T0, T1, T2, T3;
 volatile cl_object lex0[1];
 cl_object env0 = ECL_NIL;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v2env,env0);                 /*  ENV             */
  {
   cl_object v3;
   v3 = ecl_cdr(v1);
   {
    cl_object v5;                                 /*  PLACES          */
    cl_object v6;                                 /*  FORMS           */
    {
     cl_object v7args;
     cl_object v8places;
     cl_object v9forms;
     v7args = v3;
     v8places = ECL_NIL;
     v9forms = ECL_NIL;
     goto L8;
L7:;
     T0 = ecl_cdr(v7args);
     if (!(ecl_endp(T0))) { goto L10; }
     cl_error(2, VV[16], v7args);
L10:;
     T0 = ecl_car(v7args);
     v8places = CONS(T0,v8places);
     T0 = ecl_cadr(v7args);
     v9forms = CONS(T0,v9forms);
     v7args = ecl_cddr(v7args);
L8:;
     if (ecl_endp(v7args)) { goto L18; }
     goto L7;
L18:;
     T0 = cl_nreverse(v8places);
     T1 = cl_nreverse(v9forms);
     cl_env_copy->nvalues = 2;
     cl_env_copy->values[1] = T1;
     cl_env_copy->values[0] = T0;
     value0 = cl_env_copy->values[0];
    }
    {
     v5 = value0;
     v6 = cl_env_copy->values[1];
    }
    {
     cl_object v7;
     cl_object v8;
     cl_object v9pairs;
     cl_object v10stores;
     cl_object v11access_forms;
     {
      cl_object v12;
      v12 = ecl_make_cfun((cl_objectfn_fixed)LC65__lambda178,ECL_NIL,Cblock,2);
      T0 = v12;
     }
     {
      cl_object v12;
      {
       cl_object v13;
       v13 = ecl_make_cclosure_va((cl_objectfn)LC66__lambda195,env0,Cblock,1);
       v12 = v13;
      }
      {
       cl_object v13;
       cl_object v14;
       cl_object v15;
       v13 = cl_reverse(v5);
       v14 = ECL_NIL;
       {
        cl_object v16;
        v16 = v13;
        if (ecl_unlikely(!ECL_LISTP(v16))) FEtype_error_list(v16);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v15 = v16;
       }
       {
        cl_object v16;
        cl_object v17;
        v16 = ecl_list1(ECL_NIL);
        v17 = v16;
L31:;
        if (!(ecl_endp(v15))) { goto L33; }
        goto L32;
L33:;
        v14 = _ecl_car(v15);
        {
         cl_object v18;
         v18 = _ecl_cdr(v15);
         if (ecl_unlikely(!ECL_LISTP(v18))) FEtype_error_list(v18);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         v15 = v18;
        }
        {
         cl_object v18;
         v18 = v17;
         if (ecl_unlikely(ECL_ATOM(v18))) FEtype_error_cons(v18);
         value0 = ECL_NIL;
         cl_env_copy->nvalues = 0;
         T2 = v18;
        }
        T3 = ecl_function_dispatch(cl_env_copy,v12)(1, v14);
        v17 = ecl_list1(T3);
        (ECL_CONS_CDR(T2)=v17,T2);
        goto L31;
L32:;
        T1 = ecl_cdr(v16);
        goto L22;
       }
      }
     }
L22:;
     v7 = cl_reduce(4, T0, T1, VV[17], VV[18]);
     v8 = v7;
     if (!(v8==ECL_NIL)) { goto L51; }
     ecl_function_dispatch(cl_env_copy,VV[59])(1, v7) /*  DM-TOO-FEW-ARGUMENTS */;
L51:;
     {
      cl_object v12;
      v12 = ecl_car(v8);
      v8 = ecl_cdr(v8);
      v9pairs = v12;
     }
     if (!(v8==ECL_NIL)) { goto L57; }
     ecl_function_dispatch(cl_env_copy,VV[59])(1, v7) /*  DM-TOO-FEW-ARGUMENTS */;
L57:;
     {
      cl_object v12;
      v12 = ecl_car(v8);
      v8 = ecl_cdr(v8);
      v10stores = v12;
     }
     if (!(v8==ECL_NIL)) { goto L62; }
     ecl_function_dispatch(cl_env_copy,VV[59])(1, v7) /*  DM-TOO-FEW-ARGUMENTS */;
L62:;
     {
      cl_object v12;
      v12 = ecl_car(v8);
      v8 = ecl_cdr(v8);
      T0 = v12;
     }
     lex0[0] = T0;                                /*  STORE-FORMS     */
     if (!(v8==ECL_NIL)) { goto L69; }
     ecl_function_dispatch(cl_env_copy,VV[59])(1, v7) /*  DM-TOO-FEW-ARGUMENTS */;
L69:;
     {
      cl_object v12;
      v12 = ecl_car(v8);
      v8 = ecl_cdr(v8);
      v11access_forms = v12;
     }
     if (Null(v8)) { goto L74; }
     ecl_function_dispatch(cl_env_copy,VV[66])(1, v7) /*  DM-TOO-MANY-ARGUMENTS */;
L74:;
     T0 = LC67thunk(lex0, v9pairs, v10stores, v6);
     value0 = cl_listX(3, ECL_SYM("PROG1",671), ECL_NIL, T0);
     return value0;
    }
   }
  }
 }
}
/*      local function LAMBDA178                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC65__lambda178(cl_object v1x, cl_object v2y)
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
   v3 = (ECL_SYM("LIST",483)->symbol.gfdef);
   {
    cl_object v4;
    cl_object v5;
    cl_object v6;
    v4 = ecl_car(v2y);
    v5 = ECL_NIL;
    {
     cl_object v7;
     v7 = v4;
     if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v6 = v7;
    }
    {
     cl_object v7;
     cl_object v8;
     cl_object v9;
     v7 = ecl_cadr(v2y);
     v8 = ECL_NIL;
     {
      cl_object v10;
      v10 = v7;
      if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v9 = v10;
     }
     {
      cl_object v10;
      cl_object v11;
      v10 = ecl_list1(ECL_NIL);
      v11 = v10;
L15:;
      if (!(ecl_endp(v6))) { goto L17; }
      goto L16;
L17:;
      v5 = _ecl_car(v6);
      {
       cl_object v12;
       v12 = _ecl_cdr(v6);
       if (ecl_unlikely(!ECL_LISTP(v12))) FEtype_error_list(v12);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v6 = v12;
      }
      if (!(ecl_endp(v9))) { goto L25; }
      goto L16;
L25:;
      v8 = _ecl_car(v9);
      {
       cl_object v12;
       v12 = _ecl_cdr(v9);
       if (ecl_unlikely(!ECL_LISTP(v12))) FEtype_error_list(v12);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v9 = v12;
      }
      {
       cl_object v12;
       v12 = v11;
       if (ecl_unlikely(ECL_ATOM(v12))) FEtype_error_cons(v12);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       T1 = v12;
      }
      T2 = ecl_function_dispatch(cl_env_copy,v3)(2, v5, v8);
      v11 = ecl_list1(T2);
      (ECL_CONS_CDR(T1)=v11,T1);
      goto L15;
L16:;
      T0 = ecl_cdr(v10);
      goto L1;
     }
    }
   }
  }
L1:;
  T1 = ecl_car(v1x);
  T2 = CONS(T0,T1);
  T3 = ecl_caddr(v2y);
  T4 = ecl_cadr(v1x);
  T5 = CONS(T3,T4);
  T6 = ecl_cadddr(v2y);
  T7 = ecl_caddr(v1x);
  T8 = CONS(T6,T7);
  T9 = ecl_cddddr(v2y);
  T10 = ecl_car(T9);
  T11 = ecl_cadddr(v1x);
  T12 = CONS(T10,T11);
  value0 = cl_list(4, T2, T5, T8, T12);
  return value0;
 }
}
/*      closure LAMBDA195                                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC66__lambda195(cl_narg narg, cl_object v1place, ...)
{
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV0 = env0;                                     /*  ENV             */
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  {
   struct ecl_stack_frame _ecl_inner_frame_aux;
   cl_object _ecl_inner_frame = ecl_stack_frame_open(cl_env_copy,(cl_object)&_ecl_inner_frame_aux,0);
   {
    cl_object v2;
    v2 = _ecl_inner_frame;
    {
     cl_object v3;
     v3 = ECL_SYM("LIST",483);
     cl_env_copy->values[0] = L6get_setf_expansion(2, v1place, ECL_CONS_CAR(CLV0));
     ecl_stack_frame_push_values(v2);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;cl_env_copy->values[0]=ecl_apply_from_stack_frame(v2,v3);
     value0 = cl_env_copy->values[0];
    }
   }
   ecl_stack_frame_close(_ecl_inner_frame);
  }
  return value0;
 }
 }
}
/*      local function THUNK                                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC67thunk(volatile cl_object *lex0, cl_object v1pairs, cl_object v2stores, cl_object v3access_forms)
{
 cl_object T0, T1, T2, T3, T4, T5, T6;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(v2stores)) { goto L1; }
  T0 = ecl_car(v1pairs);
  T1 = ecl_car(v2stores);
  T2 = ecl_car(v3access_forms);
  T4 = ecl_cdr(v1pairs);
  T5 = ecl_cdr(v2stores);
  T6 = ecl_cdr(v3access_forms);
  T3 = LC67thunk(lex0, T4, T5, T6);
  T4 = cl_listX(4, ECL_SYM("MULTIPLE-VALUE-BIND",574), T1, T2, T3);
  T5 = cl_list(3, ECL_SYM("LET",479), T0, T4);
  value0 = ecl_list1(T5);
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  value0 = lex0[0];
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function WITH-EXPANSION-SETTER                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC69with_expansion_setter(cl_object v1, cl_object v2)
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
   cl_object v4;
   cl_object v5;
   cl_object v6name;
   cl_object v7store_forms;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[59])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v8;
    v8 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4 = v8;
   }
   v5 = v4;
   if (!(v5==ECL_NIL)) { goto L10; }
   ecl_function_dispatch(cl_env_copy,VV[59])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L10:;
   {
    cl_object v8;
    v8 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v6name = v8;
   }
   if (!(v5==ECL_NIL)) { goto L16; }
   ecl_function_dispatch(cl_env_copy,VV[59])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L16:;
   {
    cl_object v8;
    v8 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v7store_forms = v8;
   }
   if (Null(v5)) { goto L21; }
   ecl_function_dispatch(cl_env_copy,VV[66])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L21:;
   T0 = CONS(v6name,VV[25]);
   T1 = cl_list(5, ECL_SYM("LIST*",484), VV[22], VV[23], VV[24], T0);
   T2 = cl_list(2, ECL_SYM("LIST",483), T1);
   T3 = cl_list(4, ECL_SYM("IF",948), VV[21], T2, v7store_forms);
   T4 = cl_list(3, v6name, VV[20], T3);
   T5 = ecl_list1(T4);
   value0 = cl_listX(3, ECL_SYM("LABELS",453), T5, v3);
   return value0;
  }
 }
}
/*      local function SHIFTF                                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC73shiftf(cl_object v1, cl_object v2env)
{
 cl_object T0, T1, T2, T3, T4, T5, T6;
 volatile cl_object lex0[1];
 cl_object env0 = ECL_NIL;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v2env,env0);                 /*  ENV             */
  {
   cl_object v3;
   v3 = ecl_cdr(v1);
   {
    cl_object v4;
    cl_object v5;
    cl_object v6pairs;
    cl_object v7stores;
    cl_object v8access_forms;
    {
     cl_object v9;
     v9 = ecl_make_cfun((cl_objectfn_fixed)LC70__lambda231,ECL_NIL,Cblock,2);
     T0 = v9;
    }
    {
     cl_object v9;
     {
      cl_object v10;
      v10 = ecl_make_cclosure_va((cl_objectfn)LC71__lambda248,env0,Cblock,1);
      v9 = v10;
     }
     {
      cl_object v10;
      cl_object v11;
      cl_object v12;
      T2 = ecl_butlast(v3,1);
      v10 = cl_reverse(T2);
      v11 = ECL_NIL;
      {
       cl_object v13;
       v13 = v10;
       if (ecl_unlikely(!ECL_LISTP(v13))) FEtype_error_list(v13);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v12 = v13;
      }
      {
       cl_object v13;
       cl_object v14;
       v13 = ecl_list1(ECL_NIL);
       v14 = v13;
L13:;
       if (!(ecl_endp(v12))) { goto L15; }
       goto L14;
L15:;
       v11 = _ecl_car(v12);
       {
        cl_object v15;
        v15 = _ecl_cdr(v12);
        if (ecl_unlikely(!ECL_LISTP(v15))) FEtype_error_list(v15);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v12 = v15;
       }
       {
        cl_object v15;
        v15 = v14;
        if (ecl_unlikely(ECL_ATOM(v15))) FEtype_error_cons(v15);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        T2 = v15;
       }
       T3 = ecl_function_dispatch(cl_env_copy,v9)(1, v11);
       v14 = ecl_list1(T3);
       (ECL_CONS_CDR(T2)=v14,T2);
       goto L13;
L14:;
       T1 = ecl_cdr(v13);
       goto L4;
      }
     }
    }
L4:;
    v4 = cl_reduce(4, T0, T1, VV[17], VV[18]);
    v5 = v4;
    if (!(v5==ECL_NIL)) { goto L33; }
    ecl_function_dispatch(cl_env_copy,VV[59])(1, v4) /*  DM-TOO-FEW-ARGUMENTS */;
L33:;
    {
     cl_object v9;
     v9 = ecl_car(v5);
     v5 = ecl_cdr(v5);
     v6pairs = v9;
    }
    if (!(v5==ECL_NIL)) { goto L39; }
    ecl_function_dispatch(cl_env_copy,VV[59])(1, v4) /*  DM-TOO-FEW-ARGUMENTS */;
L39:;
    {
     cl_object v9;
     v9 = ecl_car(v5);
     v5 = ecl_cdr(v5);
     v7stores = v9;
    }
    if (!(v5==ECL_NIL)) { goto L44; }
    ecl_function_dispatch(cl_env_copy,VV[59])(1, v4) /*  DM-TOO-FEW-ARGUMENTS */;
L44:;
    {
     cl_object v9;
     v9 = ecl_car(v5);
     v5 = ecl_cdr(v5);
     T0 = v9;
    }
    lex0[0] = T0;                                 /*  STORE-FORMS     */
    if (!(v5==ECL_NIL)) { goto L51; }
    ecl_function_dispatch(cl_env_copy,VV[59])(1, v4) /*  DM-TOO-FEW-ARGUMENTS */;
L51:;
    {
     cl_object v9;
     v9 = ecl_car(v5);
     v5 = ecl_cdr(v5);
     v8access_forms = v9;
    }
    if (Null(v5)) { goto L56; }
    ecl_function_dispatch(cl_env_copy,VV[66])(1, v4) /*  DM-TOO-MANY-ARGUMENTS */;
L56:;
    T0 = (ECL_SYM("APPEND",90)->symbol.gfdef);
    T1 = cl_reduce(2, T0, v6pairs);
    T2 = ecl_car(v8access_forms);
    T4 = ecl_cdr(v8access_forms);
    T5 = ecl_last(v3,1);
    T6 = ecl_append(T4,T5);
    T3 = LC72thunk(lex0, v7stores, T6);
    T4 = cl_listX(3, ECL_SYM("MULTIPLE-VALUE-PROG1",577), T2, T3);
    value0 = cl_list(3, ECL_SYM("LET*",480), T1, T4);
    return value0;
   }
  }
 }
}
/*      local function LAMBDA231                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC70__lambda231(cl_object v1x, cl_object v2y)
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
   v3 = (ECL_SYM("LIST",483)->symbol.gfdef);
   {
    cl_object v4;
    cl_object v5;
    cl_object v6;
    v4 = ecl_car(v2y);
    v5 = ECL_NIL;
    {
     cl_object v7;
     v7 = v4;
     if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v6 = v7;
    }
    {
     cl_object v7;
     cl_object v8;
     cl_object v9;
     v7 = ecl_cadr(v2y);
     v8 = ECL_NIL;
     {
      cl_object v10;
      v10 = v7;
      if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v9 = v10;
     }
     {
      cl_object v10;
      cl_object v11;
      v10 = ecl_list1(ECL_NIL);
      v11 = v10;
L15:;
      if (!(ecl_endp(v6))) { goto L17; }
      goto L16;
L17:;
      v5 = _ecl_car(v6);
      {
       cl_object v12;
       v12 = _ecl_cdr(v6);
       if (ecl_unlikely(!ECL_LISTP(v12))) FEtype_error_list(v12);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v6 = v12;
      }
      if (!(ecl_endp(v9))) { goto L25; }
      goto L16;
L25:;
      v8 = _ecl_car(v9);
      {
       cl_object v12;
       v12 = _ecl_cdr(v9);
       if (ecl_unlikely(!ECL_LISTP(v12))) FEtype_error_list(v12);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v9 = v12;
      }
      {
       cl_object v12;
       v12 = v11;
       if (ecl_unlikely(ECL_ATOM(v12))) FEtype_error_cons(v12);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       T1 = v12;
      }
      T2 = ecl_function_dispatch(cl_env_copy,v3)(2, v5, v8);
      v11 = ecl_list1(T2);
      (ECL_CONS_CDR(T1)=v11,T1);
      goto L15;
L16:;
      T0 = ecl_cdr(v10);
      goto L1;
     }
    }
   }
  }
L1:;
  T1 = ecl_car(v1x);
  T2 = CONS(T0,T1);
  T3 = ecl_caddr(v2y);
  T4 = ecl_cadr(v1x);
  T5 = CONS(T3,T4);
  T6 = ecl_cadddr(v2y);
  T7 = ecl_caddr(v1x);
  T8 = CONS(T6,T7);
  T9 = ecl_cddddr(v2y);
  T10 = ecl_car(T9);
  T11 = ecl_cadddr(v1x);
  T12 = CONS(T10,T11);
  value0 = cl_list(4, T2, T5, T8, T12);
  return value0;
 }
}
/*      closure LAMBDA248                                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC71__lambda248(cl_narg narg, cl_object v1place, ...)
{
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV0 = env0;                                     /*  ENV             */
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  {
   struct ecl_stack_frame _ecl_inner_frame_aux;
   cl_object _ecl_inner_frame = ecl_stack_frame_open(cl_env_copy,(cl_object)&_ecl_inner_frame_aux,0);
   {
    cl_object v2;
    v2 = _ecl_inner_frame;
    {
     cl_object v3;
     v3 = ECL_SYM("LIST",483);
     cl_env_copy->values[0] = L6get_setf_expansion(2, v1place, ECL_CONS_CAR(CLV0));
     ecl_stack_frame_push_values(v2);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;cl_env_copy->values[0]=ecl_apply_from_stack_frame(v2,v3);
     value0 = cl_env_copy->values[0];
    }
   }
   ecl_stack_frame_close(_ecl_inner_frame);
  }
  return value0;
 }
 }
}
/*      local function THUNK                                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC72thunk(volatile cl_object *lex0, cl_object v1stores, cl_object v2access_forms)
{
 cl_object T0, T1, T2, T3, T4;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(v1stores)) { goto L1; }
  T0 = ecl_car(v1stores);
  T1 = ecl_car(v2access_forms);
  T3 = ecl_cdr(v1stores);
  T4 = ecl_cdr(v2access_forms);
  T2 = LC72thunk(lex0, T3, T4);
  T3 = cl_listX(4, ECL_SYM("MULTIPLE-VALUE-BIND",574), T0, T1, T2);
  value0 = ecl_list1(T3);
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  value0 = lex0[0];
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function ROTATEF                                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC77rotatef(cl_object v1, cl_object v2env)
{
 cl_object T0, T1, T2, T3, T4, T5, T6;
 volatile cl_object lex0[1];
 cl_object env0 = ECL_NIL;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v2env,env0);                 /*  ENV             */
  {
   cl_object v3;
   v3 = ecl_cdr(v1);
   {
    cl_object v4;
    cl_object v5;
    cl_object v6pairs;
    cl_object v7stores;
    cl_object v8access_forms;
    {
     cl_object v9;
     v9 = ecl_make_cfun((cl_objectfn_fixed)LC74__lambda271,ECL_NIL,Cblock,2);
     T0 = v9;
    }
    {
     cl_object v9;
     {
      cl_object v10;
      v10 = ecl_make_cclosure_va((cl_objectfn)LC75__lambda288,env0,Cblock,1);
      v9 = v10;
     }
     {
      cl_object v10;
      cl_object v11;
      cl_object v12;
      v10 = cl_reverse(v3);
      v11 = ECL_NIL;
      {
       cl_object v13;
       v13 = v10;
       if (ecl_unlikely(!ECL_LISTP(v13))) FEtype_error_list(v13);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v12 = v13;
      }
      {
       cl_object v13;
       cl_object v14;
       v13 = ecl_list1(ECL_NIL);
       v14 = v13;
L13:;
       if (!(ecl_endp(v12))) { goto L15; }
       goto L14;
L15:;
       v11 = _ecl_car(v12);
       {
        cl_object v15;
        v15 = _ecl_cdr(v12);
        if (ecl_unlikely(!ECL_LISTP(v15))) FEtype_error_list(v15);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v12 = v15;
       }
       {
        cl_object v15;
        v15 = v14;
        if (ecl_unlikely(ECL_ATOM(v15))) FEtype_error_cons(v15);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        T2 = v15;
       }
       T3 = ecl_function_dispatch(cl_env_copy,v9)(1, v11);
       v14 = ecl_list1(T3);
       (ECL_CONS_CDR(T2)=v14,T2);
       goto L13;
L14:;
       T1 = ecl_cdr(v13);
       goto L4;
      }
     }
    }
L4:;
    v4 = cl_reduce(4, T0, T1, VV[17], VV[18]);
    v5 = v4;
    if (!(v5==ECL_NIL)) { goto L33; }
    ecl_function_dispatch(cl_env_copy,VV[59])(1, v4) /*  DM-TOO-FEW-ARGUMENTS */;
L33:;
    {
     cl_object v9;
     v9 = ecl_car(v5);
     v5 = ecl_cdr(v5);
     v6pairs = v9;
    }
    if (!(v5==ECL_NIL)) { goto L39; }
    ecl_function_dispatch(cl_env_copy,VV[59])(1, v4) /*  DM-TOO-FEW-ARGUMENTS */;
L39:;
    {
     cl_object v9;
     v9 = ecl_car(v5);
     v5 = ecl_cdr(v5);
     v7stores = v9;
    }
    if (!(v5==ECL_NIL)) { goto L44; }
    ecl_function_dispatch(cl_env_copy,VV[59])(1, v4) /*  DM-TOO-FEW-ARGUMENTS */;
L44:;
    {
     cl_object v9;
     v9 = ecl_car(v5);
     v5 = ecl_cdr(v5);
     T0 = v9;
    }
    lex0[0] = T0;                                 /*  STORE-FORMS     */
    if (!(v5==ECL_NIL)) { goto L51; }
    ecl_function_dispatch(cl_env_copy,VV[59])(1, v4) /*  DM-TOO-FEW-ARGUMENTS */;
L51:;
    {
     cl_object v9;
     v9 = ecl_car(v5);
     v5 = ecl_cdr(v5);
     v8access_forms = v9;
    }
    if (Null(v5)) { goto L56; }
    ecl_function_dispatch(cl_env_copy,VV[66])(1, v4) /*  DM-TOO-MANY-ARGUMENTS */;
L56:;
    T0 = (ECL_SYM("APPEND",90)->symbol.gfdef);
    T1 = cl_reduce(2, T0, v6pairs);
    T3 = ecl_cdr(v8access_forms);
    T4 = ecl_car(v8access_forms);
    T5 = ecl_list1(T4);
    T6 = ecl_append(T3,T5);
    T2 = LC76thunk(lex0, v7stores, T6);
    T3 = ecl_append(T2,VV[28]);
    value0 = cl_listX(3, ECL_SYM("LET*",480), T1, T3);
    return value0;
   }
  }
 }
}
/*      local function LAMBDA271                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC74__lambda271(cl_object v1x, cl_object v2y)
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
   v3 = (ECL_SYM("LIST",483)->symbol.gfdef);
   {
    cl_object v4;
    cl_object v5;
    cl_object v6;
    v4 = ecl_car(v2y);
    v5 = ECL_NIL;
    {
     cl_object v7;
     v7 = v4;
     if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v6 = v7;
    }
    {
     cl_object v7;
     cl_object v8;
     cl_object v9;
     v7 = ecl_cadr(v2y);
     v8 = ECL_NIL;
     {
      cl_object v10;
      v10 = v7;
      if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v9 = v10;
     }
     {
      cl_object v10;
      cl_object v11;
      v10 = ecl_list1(ECL_NIL);
      v11 = v10;
L15:;
      if (!(ecl_endp(v6))) { goto L17; }
      goto L16;
L17:;
      v5 = _ecl_car(v6);
      {
       cl_object v12;
       v12 = _ecl_cdr(v6);
       if (ecl_unlikely(!ECL_LISTP(v12))) FEtype_error_list(v12);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v6 = v12;
      }
      if (!(ecl_endp(v9))) { goto L25; }
      goto L16;
L25:;
      v8 = _ecl_car(v9);
      {
       cl_object v12;
       v12 = _ecl_cdr(v9);
       if (ecl_unlikely(!ECL_LISTP(v12))) FEtype_error_list(v12);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v9 = v12;
      }
      {
       cl_object v12;
       v12 = v11;
       if (ecl_unlikely(ECL_ATOM(v12))) FEtype_error_cons(v12);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       T1 = v12;
      }
      T2 = ecl_function_dispatch(cl_env_copy,v3)(2, v5, v8);
      v11 = ecl_list1(T2);
      (ECL_CONS_CDR(T1)=v11,T1);
      goto L15;
L16:;
      T0 = ecl_cdr(v10);
      goto L1;
     }
    }
   }
  }
L1:;
  T1 = ecl_car(v1x);
  T2 = CONS(T0,T1);
  T3 = ecl_caddr(v2y);
  T4 = ecl_cadr(v1x);
  T5 = CONS(T3,T4);
  T6 = ecl_cadddr(v2y);
  T7 = ecl_caddr(v1x);
  T8 = CONS(T6,T7);
  T9 = ecl_cddddr(v2y);
  T10 = ecl_car(T9);
  T11 = ecl_cadddr(v1x);
  T12 = CONS(T10,T11);
  value0 = cl_list(4, T2, T5, T8, T12);
  return value0;
 }
}
/*      closure LAMBDA288                                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC75__lambda288(cl_narg narg, cl_object v1place, ...)
{
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV0 = env0;                                     /*  ENV             */
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  {
   struct ecl_stack_frame _ecl_inner_frame_aux;
   cl_object _ecl_inner_frame = ecl_stack_frame_open(cl_env_copy,(cl_object)&_ecl_inner_frame_aux,0);
   {
    cl_object v2;
    v2 = _ecl_inner_frame;
    {
     cl_object v3;
     v3 = ECL_SYM("LIST",483);
     cl_env_copy->values[0] = L6get_setf_expansion(2, v1place, ECL_CONS_CAR(CLV0));
     ecl_stack_frame_push_values(v2);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;cl_env_copy->values[0]=ecl_apply_from_stack_frame(v2,v3);
     value0 = cl_env_copy->values[0];
    }
   }
   ecl_stack_frame_close(_ecl_inner_frame);
  }
  return value0;
 }
 }
}
/*      local function THUNK                                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC76thunk(volatile cl_object *lex0, cl_object v1stores, cl_object v2access_forms)
{
 cl_object T0, T1, T2, T3, T4;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(v1stores)) { goto L1; }
  T0 = ecl_car(v1stores);
  T1 = ecl_car(v2access_forms);
  T3 = ecl_cdr(v1stores);
  T4 = ecl_cdr(v2access_forms);
  T2 = LC76thunk(lex0, T3, T4);
  T3 = cl_listX(4, ECL_SYM("MULTIPLE-VALUE-BIND",574), T0, T1, T2);
  value0 = ecl_list1(T3);
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  value0 = lex0[0];
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function DEFINE-MODIFY-MACRO                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC78define_modify_macro(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4name;
   cl_object v5lambdalist;
   cl_object v6function;
   cl_object v7docstring;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[59])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v8;
    v8 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4name = v8;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[59])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v8;
    v8 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5lambdalist = v8;
   }
   if (!(v3==ECL_NIL)) { goto L15; }
   ecl_function_dispatch(cl_env_copy,VV[59])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L15:;
   {
    cl_object v8;
    v8 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v6function = v8;
   }
   if (Null(v3)) { goto L21; }
   {
    cl_object v8;
    v8 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v7docstring = v8;
    goto L20;
   }
L21:;
   v7docstring = ECL_NIL;
L20:;
   if (Null(v3)) { goto L26; }
   ecl_function_dispatch(cl_env_copy,VV[66])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L26:;
   {
    cl_object v8varlist;
    cl_object v9restvar;
    v8varlist = ECL_NIL;
    v9restvar = ECL_NIL;
    {
     cl_object v10lambdalistr;
     cl_object v11next;
     v10lambdalistr = v5lambdalist;
     v11next = ECL_NIL;
     goto L35;
L34:;
     v11next = ecl_car(v10lambdalistr);
     {
      cl_object v12;
      v12 = ecl_make_bool((v11next)==(ECL_SYM("&OPTIONAL",13)));
      if (Null(v12)) { goto L41; }
      goto L39;
L41:;
      if (!((v11next)==(ECL_SYM("&REST",14)))) { goto L43; }
      T0 = ecl_cadr(v10lambdalistr);
      if (!(ECL_SYMBOLP(T0))) { goto L46; }
      v9restvar = ecl_cadr(v10lambdalistr);
      goto L45;
L46:;
      T0 = ecl_cadr(v10lambdalistr);
      cl_error(3, VV[30], v4name, T0);
L45:;
      T0 = ecl_cddr(v10lambdalistr);
      if (!(T0==ECL_NIL)) { goto L49; }
      goto L30;
L49:;
      cl_error(2, VV[31], v10lambdalistr);
      goto L39;
L43:;
      if ((v11next)==(ECL_SYM("&KEY",12))) { goto L53; }
      if ((v11next)==(ECL_SYM("&ALLOW-OTHER-KEYS",8))) { goto L53; }
      if (!((v11next)==(ECL_SYM("&AUX",9)))) { goto L51; }
      goto L52;
L53:;
L52:;
      cl_error(2, VV[32], v11next);
      goto L39;
L51:;
      if (!(ECL_SYMBOLP(v11next))) { goto L56; }
      v8varlist = CONS(v11next,v8varlist);
      goto L39;
L56:;
      if (!(ECL_LISTP(v11next))) { goto L59; }
      T0 = ecl_car(v11next);
      if (!(ECL_SYMBOLP(T0))) { goto L59; }
      T0 = ecl_car(v11next);
      v8varlist = CONS(T0,v8varlist);
      goto L39;
L59:;
      cl_error(2, VV[33], v11next);
     }
L39:;
     v10lambdalistr = ecl_cdr(v10lambdalistr);
L35:;
     if (v10lambdalistr==ECL_NIL) { goto L65; }
     goto L34;
L65:;
    }
L30:;
    v8varlist = cl_nreverse(v8varlist);
    T0 = cl_listX(4, ECL_SYM("&ENVIRONMENT",11), VV[34], VV[35], v5lambdalist);
    if (Null(v7docstring)) { goto L71; }
    T1 = ecl_list1(v7docstring);
    goto L69;
L71:;
    T1 = ECL_NIL;
    goto L69;
L69:;
    T2 = ecl_list1(v9restvar);
    T3 = ecl_append(v8varlist,T2);
    T4 = CONS(ECL_SYM("LIST*",484),T3);
    T5 = cl_list(3, ECL_SYM("MAPCAR",547), VV[40], T4);
    T6 = cl_list(2, VV[39], T5);
    T7 = ecl_list1(T6);
    T8 = cl_list(2, ECL_SYM("QUOTE",681), v6function);
    T9 = cl_listX(3, ECL_SYM("LIST*",484), T8, VV[42]);
    T10 = cl_listX(3, ECL_SYM("SUBST",833), T9, VV[43]);
    T11 = cl_list(2, ECL_SYM("QUOTE",681), v6function);
    T12 = cl_listX(3, ECL_SYM("LIST*",484), T11, VV[42]);
    T13 = cl_list(3, ECL_SYM("LIST",483), VV[23], T12);
    T14 = cl_list(3, ECL_SYM("LIST*",484), T13, VV[47]);
    T15 = cl_list(3, ECL_SYM("SETQ",753), VV[46], T14);
    T16 = cl_list(3, VV[45], T15, VV[48]);
    T17 = cl_list(3, ECL_SYM("DO",309), VV[44], T16);
    T18 = cl_list(4, ECL_SYM("IF",948), VV[41], T10, T17);
    T19 = cl_list(3, ECL_SYM("LET",479), T7, T18);
    T20 = cl_list(4, ECL_SYM("MULTIPLE-VALUE-BIND",574), VV[37], VV[38], T19);
    T21 = cl_list(2, VV[36], T20);
    T22 = ecl_append(T1,T21);
    value0 = cl_listX(4, ECL_SYM("DEFMACRO",285), v4name, T0, T22);
    return value0;
   }
  }
 }
}
/*      local function REMF                                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC79remf(cl_object v1, cl_object v2env)
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
   cl_object v4place;
   cl_object v5indicator;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[59])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4place = v6;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[59])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5indicator = v6;
   }
   if (Null(v3)) { goto L14; }
   ecl_function_dispatch(cl_env_copy,VV[66])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L14:;
   {
    cl_object v7;                                 /*  VARS            */
    cl_object v8;                                 /*  VALS            */
    cl_object v9;                                 /*  STORES          */
    cl_object v10;                                /*  STORE-FORM      */
    cl_object v11;                                /*  ACCESS-FORM     */
    value0 = L6get_setf_expansion(2, v4place, v2env);
    {
     v7 = value0;
     v8 = cl_env_copy->values[1];
     v9 = cl_env_copy->values[2];
     v10 = cl_env_copy->values[3];
     v11 = cl_env_copy->values[4];
    }
    {
     cl_object v12s;
     v12s = cl_gensym(0);
     T0 = (ECL_SYM("LIST",483)->symbol.gfdef);
     T1 = (cl_env_copy->function=(ECL_SYM("MAPCAR",547)->symbol.gfdef))->cfun.entry(3, T0, v7, v8) /*  MAPCAR */;
     T2 = cl_list(2, v12s, v5indicator);
     T3 = ecl_list1(T2);
     T4 = ecl_append(T1,T3);
     T5 = CONS(VV[50],v7);
     T6 = cl_list(2, ECL_SYM("DECLARE",276), T5);
     T7 = ecl_car(v9);
     T8 = cl_list(2, T7, VV[51]);
     T9 = cl_list(3, ECL_SYM("REM-F",1144), v11, v12s);
     T10 = cl_list(5, ECL_SYM("MULTIPLE-VALUE-BIND",574), T8, T9, v10, VV[51]);
     value0 = cl_list(4, ECL_SYM("LET*",480), T4, T6, T10);
     return value0;
    }
   }
  }
 }
}
/*      local function INCF                                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC81incf(cl_object v1, cl_object v2env)
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
   cl_object v4_reference;
   cl_object v5delta;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[59])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4_reference = v6;
   }
   if (Null(v3)) { goto L9; }
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5delta = v6;
    goto L8;
   }
L9:;
   v5delta = ecl_make_fixnum(1);
L8:;
   if (Null(v3)) { goto L14; }
   ecl_function_dispatch(cl_env_copy,VV[66])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L14:;
   {
    cl_object v7;                                 /*  VARS            */
    cl_object v8;                                 /*  VALS            */
    cl_object v9;                                 /*  STORES          */
    cl_object v10;                                /*  SETTER          */
    cl_object v11;                                /*  GETTER          */
    value0 = L6get_setf_expansion(2, v4_reference, v2env);
    {
     v7 = value0;
     v8 = cl_env_copy->values[1];
     v9 = cl_env_copy->values[2];
     v10 = cl_env_copy->values[3];
     v11 = cl_env_copy->values[4];
    }
    {
     cl_object v12all_vars;
     {
      cl_object v13;
      v13 = ecl_make_cfun((cl_objectfn_fixed)LC80__lambda332,ECL_NIL,Cblock,1);
      T0 = v13;
     }
     T1 = CONS(v5delta,ECL_NIL);
     v12all_vars = (cl_env_copy->function=(ECL_SYM("MAPCAR",547)->symbol.gfdef))->cfun.entry(2, T0, T1) /*  MAPCAR */;
     if (!(ECL_SYMBOLP(v11))) { goto L19; }
     T0 = (ECL_SYM("CAR",182)->symbol.gfdef);
     T1 = (cl_env_copy->function=(ECL_SYM("MAPCAR",547)->symbol.gfdef))->cfun.entry(2, T0, v12all_vars) /*  MAPCAR */;
     T2 = cl_listX(3, ECL_SYM("+",16), v11, T1);
     T3 = ecl_car(v9);
     T4 = (ECL_SYM("FIRST",373)->symbol.gfdef);
     T5 = (cl_env_copy->function=(ECL_SYM("MAPCAR",547)->symbol.gfdef))->cfun.entry(2, T4, v12all_vars) /*  MAPCAR */;
     T6 = CONS(VV[50],T5);
     T7 = cl_list(2, ECL_SYM("DECLARE",276), T6);
     T8 = cl_list(4, ECL_SYM("LET*",480), v12all_vars, T7, v10);
     value0 = cl_subst(3, T2, T3, T8);
     return value0;
L19:;
     {
      cl_object v13d;
      cl_object v14v;
      cl_object v15let_list;
      v13d = v7;
      v14v = v8;
      v15let_list = ECL_NIL;
      goto L28;
L27:;
      {
       cl_object v16;
       v16 = ecl_cdr(v13d);
       {
        cl_object v17;
        v17 = ecl_cdr(v14v);
        T0 = ecl_car(v13d);
        T1 = ecl_car(v14v);
        T2 = cl_list(2, T0, T1);
        v15let_list = CONS(T2,v15let_list);
        v14v = v17;
        v13d = v16;
       }
      }
L28:;
      if (v13d==ECL_NIL) { goto L34; }
      goto L27;
L34:;
      T0 = ecl_car(v9);
      T1 = (ECL_SYM("CAR",182)->symbol.gfdef);
      T2 = (cl_env_copy->function=(ECL_SYM("MAPCAR",547)->symbol.gfdef))->cfun.entry(2, T1, v12all_vars) /*  MAPCAR */;
      T3 = cl_listX(3, ECL_SYM("+",16), v11, T2);
      T4 = cl_list(2, T0, T3);
      T5 = ecl_append(v12all_vars,v15let_list);
      v15let_list = CONS(T4,T5);
      T0 = cl_nreverse(v15let_list);
      T1 = (ECL_SYM("FIRST",373)->symbol.gfdef);
      T2 = (cl_env_copy->function=(ECL_SYM("MAPCAR",547)->symbol.gfdef))->cfun.entry(2, T1, v12all_vars) /*  MAPCAR */;
      T3 = ecl_append(T2,v7);
      T4 = CONS(VV[50],T3);
      T5 = cl_list(2, ECL_SYM("DECLARE",276), T4);
      value0 = cl_list(4, ECL_SYM("LET*",480), T0, T5, v10);
      return value0;
     }
    }
   }
  }
 }
}
/*      local function LAMBDA332                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC80__lambda332(cl_object v1v)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_gensym(0);
  value0 = cl_list(2, T0, v1v);
  return value0;
 }
}
/*      local function DECF                                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC83decf(cl_object v1, cl_object v2env)
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
   cl_object v4_reference;
   cl_object v5delta;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[59])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4_reference = v6;
   }
   if (Null(v3)) { goto L9; }
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5delta = v6;
    goto L8;
   }
L9:;
   v5delta = ecl_make_fixnum(1);
L8:;
   if (Null(v3)) { goto L14; }
   ecl_function_dispatch(cl_env_copy,VV[66])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L14:;
   {
    cl_object v7;                                 /*  VARS            */
    cl_object v8;                                 /*  VALS            */
    cl_object v9;                                 /*  STORES          */
    cl_object v10;                                /*  SETTER          */
    cl_object v11;                                /*  GETTER          */
    value0 = L6get_setf_expansion(2, v4_reference, v2env);
    {
     v7 = value0;
     v8 = cl_env_copy->values[1];
     v9 = cl_env_copy->values[2];
     v10 = cl_env_copy->values[3];
     v11 = cl_env_copy->values[4];
    }
    {
     cl_object v12all_vars;
     {
      cl_object v13;
      v13 = ecl_make_cfun((cl_objectfn_fixed)LC82__lambda344,ECL_NIL,Cblock,1);
      T0 = v13;
     }
     T1 = CONS(v5delta,ECL_NIL);
     v12all_vars = (cl_env_copy->function=(ECL_SYM("MAPCAR",547)->symbol.gfdef))->cfun.entry(2, T0, T1) /*  MAPCAR */;
     if (!(ECL_SYMBOLP(v11))) { goto L19; }
     T0 = (ECL_SYM("CAR",182)->symbol.gfdef);
     T1 = (cl_env_copy->function=(ECL_SYM("MAPCAR",547)->symbol.gfdef))->cfun.entry(2, T0, v12all_vars) /*  MAPCAR */;
     T2 = cl_listX(3, ECL_SYM("-",19), v11, T1);
     T3 = ecl_car(v9);
     T4 = (ECL_SYM("FIRST",373)->symbol.gfdef);
     T5 = (cl_env_copy->function=(ECL_SYM("MAPCAR",547)->symbol.gfdef))->cfun.entry(2, T4, v12all_vars) /*  MAPCAR */;
     T6 = CONS(VV[50],T5);
     T7 = cl_list(2, ECL_SYM("DECLARE",276), T6);
     T8 = cl_list(4, ECL_SYM("LET*",480), v12all_vars, T7, v10);
     value0 = cl_subst(3, T2, T3, T8);
     return value0;
L19:;
     {
      cl_object v13d;
      cl_object v14v;
      cl_object v15let_list;
      v13d = v7;
      v14v = v8;
      v15let_list = ECL_NIL;
      goto L28;
L27:;
      {
       cl_object v16;
       v16 = ecl_cdr(v13d);
       {
        cl_object v17;
        v17 = ecl_cdr(v14v);
        T0 = ecl_car(v13d);
        T1 = ecl_car(v14v);
        T2 = cl_list(2, T0, T1);
        v15let_list = CONS(T2,v15let_list);
        v14v = v17;
        v13d = v16;
       }
      }
L28:;
      if (v13d==ECL_NIL) { goto L34; }
      goto L27;
L34:;
      T0 = ecl_car(v9);
      T1 = (ECL_SYM("CAR",182)->symbol.gfdef);
      T2 = (cl_env_copy->function=(ECL_SYM("MAPCAR",547)->symbol.gfdef))->cfun.entry(2, T1, v12all_vars) /*  MAPCAR */;
      T3 = cl_listX(3, ECL_SYM("-",19), v11, T2);
      T4 = cl_list(2, T0, T3);
      T5 = ecl_append(v12all_vars,v15let_list);
      v15let_list = CONS(T4,T5);
      T0 = cl_nreverse(v15let_list);
      T1 = (ECL_SYM("FIRST",373)->symbol.gfdef);
      T2 = (cl_env_copy->function=(ECL_SYM("MAPCAR",547)->symbol.gfdef))->cfun.entry(2, T1, v12all_vars) /*  MAPCAR */;
      T3 = ecl_append(T2,v7);
      T4 = CONS(VV[50],T3);
      T5 = cl_list(2, ECL_SYM("DECLARE",276), T4);
      value0 = cl_list(4, ECL_SYM("LET*",480), T0, T5, v10);
      return value0;
     }
    }
   }
  }
 }
}
/*      local function LAMBDA344                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC82__lambda344(cl_object v1v)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_gensym(0);
  value0 = cl_list(2, T0, v1v);
  return value0;
 }
}
/*      local function PUSH                                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC84push(cl_object v1, cl_object v2env)
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
   cl_object v4item;
   cl_object v5place;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[59])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4item = v6;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[59])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5place = v6;
   }
   if (Null(v3)) { goto L14; }
   ecl_function_dispatch(cl_env_copy,VV[66])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L14:;
   {
    cl_object v7;                                 /*  VARS            */
    cl_object v8;                                 /*  VALS            */
    cl_object v9;                                 /*  STORES          */
    cl_object v10;                                /*  STORE-FORM      */
    cl_object v11;                                /*  ACCESS-FORM     */
    value0 = L6get_setf_expansion(2, v5place, v2env);
    {
     v7 = value0;
     v8 = cl_env_copy->values[1];
     v9 = cl_env_copy->values[2];
     v10 = cl_env_copy->values[3];
     v11 = cl_env_copy->values[4];
    }
    if (Null(L59trivial_setf_form(v5place, v7, v9, v10, v11))) { goto L17; }
    T0 = cl_list(3, ECL_SYM("CONS",253), v4item, v5place);
    value0 = cl_list(3, ECL_SYM("SETQ",753), v5place, T0);
    return value0;
L17:;
    if ((cl_constantp(2, v4item, v2env))!=ECL_NIL) { goto L19; }
    v8 = CONS(v4item,v8);
    v4item = cl_gensym(0);
    v7 = CONS(v4item,v7);
L19:;
    T0 = (ECL_SYM("LIST",483)->symbol.gfdef);
    T1 = ecl_append(v7,v9);
    T2 = cl_list(3, ECL_SYM("CONS",253), v4item, v11);
    T3 = ecl_list1(T2);
    T4 = ecl_append(v8,T3);
    T5 = (cl_env_copy->function=(ECL_SYM("MAPCAR",547)->symbol.gfdef))->cfun.entry(3, T0, T1, T4) /*  MAPCAR */;
    T6 = CONS(VV[50],v7);
    T7 = cl_list(2, ECL_SYM("DECLARE",276), T6);
    value0 = cl_list(4, ECL_SYM("LET*",480), T5, T7, v10);
    return value0;
   }
  }
 }
}
/*      local function PUSHNEW                                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC85pushnew(cl_object v1, cl_object v2env)
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
   cl_object v4item;
   cl_object v5place;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[59])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4item = v6;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[59])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5place = v6;
   }
   {
    cl_object v7;                                 /*  VARS            */
    cl_object v8;                                 /*  VALS            */
    cl_object v9;                                 /*  STORES          */
    cl_object v10;                                /*  STORE-FORM      */
    cl_object v11;                                /*  ACCESS-FORM     */
    value0 = L6get_setf_expansion(2, v5place, v2env);
    {
     v7 = value0;
     v8 = cl_env_copy->values[1];
     v9 = cl_env_copy->values[2];
     v10 = cl_env_copy->values[3];
     v11 = cl_env_copy->values[4];
    }
    if (Null(L59trivial_setf_form(v5place, v7, v9, v10, v11))) { goto L15; }
    T0 = cl_listX(4, ECL_SYM("ADJOIN",84), v4item, v5place, v3);
    value0 = cl_list(3, ECL_SYM("SETQ",753), v5place, T0);
    return value0;
L15:;
    if ((cl_constantp(2, v4item, v2env))!=ECL_NIL) { goto L17; }
    v8 = CONS(v4item,v8);
    v4item = cl_gensym(0);
    v7 = CONS(v4item,v7);
L17:;
    T0 = (ECL_SYM("LIST",483)->symbol.gfdef);
    T1 = ecl_append(v7,v9);
    T2 = cl_listX(4, ECL_SYM("ADJOIN",84), v4item, v11, v3);
    T3 = ecl_list1(T2);
    T4 = ecl_append(v8,T3);
    T5 = (cl_env_copy->function=(ECL_SYM("MAPCAR",547)->symbol.gfdef))->cfun.entry(3, T0, T1, T4) /*  MAPCAR */;
    T6 = CONS(VV[50],v7);
    T7 = cl_list(2, ECL_SYM("DECLARE",276), T6);
    value0 = cl_list(4, ECL_SYM("LET*",480), T5, T7, v10);
    return value0;
   }
  }
 }
}
/*      local function POP                                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC86pop(cl_object v1, cl_object v2env)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   cl_object v4place;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[59])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4place = v5;
   }
   if (Null(v3)) { goto L8; }
   ecl_function_dispatch(cl_env_copy,VV[66])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L8:;
   {
    cl_object v6;                                 /*  VARS            */
    cl_object v7;                                 /*  VALS            */
    cl_object v8;                                 /*  STORES          */
    cl_object v9;                                 /*  STORE-FORM      */
    cl_object v10;                                /*  ACCESS-FORM     */
    value0 = L6get_setf_expansion(2, v4place, v2env);
    {
     v6 = value0;
     v7 = cl_env_copy->values[1];
     v8 = cl_env_copy->values[2];
     v9 = cl_env_copy->values[3];
     v10 = cl_env_copy->values[4];
    }
    {
     cl_object v11store_var;
     v11store_var = ecl_car(v8);
     T0 = (ECL_SYM("LIST",483)->symbol.gfdef);
     T1 = ecl_append(v6,v8);
     T2 = ecl_list1(v10);
     T3 = ecl_append(v7,T2);
     T4 = (cl_env_copy->function=(ECL_SYM("MAPCAR",547)->symbol.gfdef))->cfun.entry(3, T0, T1, T3) /*  MAPCAR */;
     T5 = CONS(VV[50],v6);
     T6 = cl_list(2, ECL_SYM("DECLARE",276), T5);
     T7 = cl_list(2, ECL_SYM("CAR",182), v11store_var);
     T8 = cl_list(3, ECL_SYM("TRULY-THE",2039), ECL_SYM("LIST",483), v11store_var);
     T9 = cl_list(2, ECL_SYM("CDR",200), T8);
     T10 = cl_list(3, ECL_SYM("SETQ",753), v11store_var, T9);
     T11 = cl_list(4, ECL_SYM("PROG1",671), T7, T10, v9);
     value0 = cl_list(4, ECL_SYM("LET*",480), T4, T6, T11);
     return value0;
    }
   }
  }
 }
}
/*      local function LAMBDA399                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC87__lambda399(cl_narg narg, cl_object v1env, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2values;
  ecl_va_list args; ecl_va_start(args,v1env,narg,1);
  v2values = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   cl_object v3all_vars;
   cl_object v4all_vals;
   cl_object v5all_stores;
   cl_object v6all_storing_forms;
   cl_object v7all_get_forms;
   v3all_vars = ECL_NIL;
   v4all_vals = ECL_NIL;
   v5all_stores = ECL_NIL;
   v6all_storing_forms = ECL_NIL;
   v7all_get_forms = ECL_NIL;
   {
    cl_object v8;
    v8 = cl_reverse(v2values);
    goto L10;
L9:;
    {
     cl_object v9item;
     v9item = ecl_car(v8);
     {
      cl_object v11;                              /*  VARS            */
      cl_object v12;                              /*  VALS            */
      cl_object v13;                              /*  STORES          */
      cl_object v14;                              /*  STORING-FORM    */
      cl_object v15;                              /*  GET-FORM        */
      value0 = L6get_setf_expansion(2, v9item, v1env);
      {
       v11 = value0;
       v12 = cl_env_copy->values[1];
       v13 = cl_env_copy->values[2];
       v14 = cl_env_copy->values[3];
       v15 = cl_env_copy->values[4];
      }
      {
       cl_object v16extra;
       v16extra = ecl_cdr(v13);
       if (ecl_endp(v16extra)) { goto L16; }
       v11 = ecl_append(v16extra,v11);
       {
        cl_fixnum v17;
        v17 = ecl_length(v16extra);
        T0 = cl_make_list(1, ecl_make_fixnum(v17));
        v12 = ecl_append(T0,v12);
       }
       T0 = ecl_car(v13);
       v13 = ecl_list1(T0);
      }
L16:;
      v3all_vars = ecl_append(v11,v3all_vars);
      v4all_vals = ecl_append(v12,v4all_vals);
      v5all_stores = ecl_append(v13,v5all_stores);
      v6all_storing_forms = CONS(v14,v6all_storing_forms);
      v7all_get_forms = CONS(v15,v7all_get_forms);
     }
    }
    v8 = ecl_cdr(v8);
L10:;
    if (Null(v8)) { goto L35; }
    goto L9;
L35:;
   }
   T0 = CONS(ECL_SYM("VALUES",897),v6all_storing_forms);
   T1 = CONS(ECL_SYM("VALUES",897),v7all_get_forms);
   cl_env_copy->nvalues = 5;
   cl_env_copy->values[4] = T1;
   cl_env_copy->values[3] = T0;
   cl_env_copy->values[2] = v5all_stores;
   cl_env_copy->values[1] = v4all_vals;
   cl_env_copy->values[0] = v3all_vars;
   return cl_env_copy->values[0];
  }
 }
}

#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/lsp/setf.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclJhMvOva7_ih76lq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:LSP;SETF.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclJhMvOva7_ih76lq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  (void)0; /* No entry created for DO-SETF-METHOD-EXPANSION */
  (void)0; /* No entry created for DO-DEFSETF */
  (void)0; /* No entry created for DO-DEFINE-SETF-METHOD */
  ecl_cmp_defmacro(VV[58]);                       /*  DEFSETF         */
  ecl_cmp_defmacro(VV[62]);                       /*  DEFINE-SETF-EXPANDER */
  ecl_cmp_defun(VV[63]);                          /*  GET-SETF-EXPANSION */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC7__lambda35,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_do_defsetf(3, ECL_SYM("CAR",182), T0, ecl_make_fixnum(1));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC8__lambda36,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_do_defsetf(3, ECL_SYM("CDR",200), T0, ecl_make_fixnum(1));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC9__lambda37,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_do_defsetf(3, ECL_SYM("CAAR",173), T0, ecl_make_fixnum(1));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC10__lambda38,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_do_defsetf(3, ECL_SYM("CDAR",192), T0, ecl_make_fixnum(1));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC11__lambda39,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_do_defsetf(3, ECL_SYM("CADR",180), T0, ecl_make_fixnum(1));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC12__lambda40,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_do_defsetf(3, ECL_SYM("CDDR",199), T0, ecl_make_fixnum(1));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC13__lambda41,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_do_defsetf(3, ECL_SYM("CAAAR",169), T0, ecl_make_fixnum(1));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC14__lambda42,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_do_defsetf(3, ECL_SYM("CDAAR",188), T0, ecl_make_fixnum(1));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC15__lambda43,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_do_defsetf(3, ECL_SYM("CADAR",176), T0, ecl_make_fixnum(1));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC16__lambda44,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_do_defsetf(3, ECL_SYM("CDDAR",195), T0, ecl_make_fixnum(1));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC17__lambda45,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_do_defsetf(3, ECL_SYM("CAADR",172), T0, ecl_make_fixnum(1));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC18__lambda46,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_do_defsetf(3, ECL_SYM("CDADR",191), T0, ecl_make_fixnum(1));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC19__lambda47,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_do_defsetf(3, ECL_SYM("CADDR",179), T0, ecl_make_fixnum(1));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC20__lambda48,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_do_defsetf(3, ECL_SYM("CDDDR",198), T0, ecl_make_fixnum(1));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC21__lambda49,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_do_defsetf(3, ECL_SYM("CAAAAR",167), T0, ecl_make_fixnum(1));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC22__lambda50,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_do_defsetf(3, ECL_SYM("CDAAAR",186), T0, ecl_make_fixnum(1));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC23__lambda51,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_do_defsetf(3, ECL_SYM("CADAAR",174), T0, ecl_make_fixnum(1));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC24__lambda52,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_do_defsetf(3, ECL_SYM("CDDAAR",193), T0, ecl_make_fixnum(1));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC25__lambda53,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_do_defsetf(3, ECL_SYM("CAADAR",170), T0, ecl_make_fixnum(1));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC26__lambda54,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_do_defsetf(3, ECL_SYM("CDADAR",189), T0, ecl_make_fixnum(1));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC27__lambda55,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_do_defsetf(3, ECL_SYM("CADDAR",177), T0, ecl_make_fixnum(1));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC28__lambda56,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_do_defsetf(3, ECL_SYM("CDDDAR",196), T0, ecl_make_fixnum(1));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC29__lambda57,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_do_defsetf(3, ECL_SYM("CAAADR",168), T0, ecl_make_fixnum(1));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC30__lambda58,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_do_defsetf(3, ECL_SYM("CDAADR",187), T0, ecl_make_fixnum(1));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC31__lambda59,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_do_defsetf(3, ECL_SYM("CADADR",175), T0, ecl_make_fixnum(1));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC32__lambda60,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_do_defsetf(3, ECL_SYM("CDDADR",194), T0, ecl_make_fixnum(1));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC33__lambda61,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_do_defsetf(3, ECL_SYM("CAADDR",171), T0, ecl_make_fixnum(1));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC34__lambda62,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_do_defsetf(3, ECL_SYM("CDADDR",190), T0, ecl_make_fixnum(1));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC35__lambda63,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_do_defsetf(3, ECL_SYM("CADDDR",178), T0, ecl_make_fixnum(1));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC36__lambda64,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_do_defsetf(3, ECL_SYM("CDDDDR",197), T0, ecl_make_fixnum(1));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC37__lambda65,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_do_defsetf(3, ECL_SYM("FIRST",373), T0, ecl_make_fixnum(1));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC38__lambda66,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_do_defsetf(3, ECL_SYM("SECOND",742), T0, ecl_make_fixnum(1));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC39__lambda67,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_do_defsetf(3, ECL_SYM("THIRD",859), T0, ecl_make_fixnum(1));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC40__lambda68,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_do_defsetf(3, ECL_SYM("FOURTH",391), T0, ecl_make_fixnum(1));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC41__lambda69,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_do_defsetf(3, ECL_SYM("FIFTH",353), T0, ecl_make_fixnum(1));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC42__lambda70,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_do_defsetf(3, ECL_SYM("SIXTH",784), T0, ecl_make_fixnum(1));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC43__lambda71,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_do_defsetf(3, ECL_SYM("SEVENTH",754), T0, ecl_make_fixnum(1));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC44__lambda72,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_do_defsetf(3, ECL_SYM("EIGHTH",328), T0, ecl_make_fixnum(1));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC45__lambda73,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_do_defsetf(3, ECL_SYM("NINTH",585), T0, ecl_make_fixnum(1));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC46__lambda74,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_do_defsetf(3, ECL_SYM("TENTH",856), T0, ecl_make_fixnum(1));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC47__lambda75,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_do_defsetf(3, ECL_SYM("REST",721), T0, ecl_make_fixnum(1));
 }
  si_do_defsetf(3, ECL_SYM("SVREF",840), ECL_SYM("SVSET",1174), ecl_make_fixnum(1));
  si_do_defsetf(3, ECL_SYM("ELT",329), ECL_SYM("ELT-SET",1069), ecl_make_fixnum(1));
  si_do_defsetf(3, ECL_SYM("SYMBOL-VALUE",848), ECL_SYM("SET",745), ecl_make_fixnum(1));
  si_do_defsetf(3, ECL_SYM("SYMBOL-FUNCTION",843), ECL_SYM("FSET",1084), ecl_make_fixnum(1));
  si_do_defsetf(3, ECL_SYM("FDEFINITION",351), ECL_SYM("FSET",1084), ecl_make_fixnum(1));
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC48__lambda81,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_do_defsetf(3, ECL_SYM("MACRO-FUNCTION",520), T0, ecl_make_fixnum(1));
 }
  si_do_defsetf(3, ECL_SYM("AREF",94), ECL_SYM("ASET",1042), ecl_make_fixnum(1));
  si_do_defsetf(3, ECL_SYM("ROW-MAJOR-AREF",733), ECL_SYM("ROW-MAJOR-ASET",1147), ecl_make_fixnum(1));
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC49__lambda84,ECL_NIL,Cblock,3);
   T0 = v1;
  }
  si_do_defsetf(3, ECL_SYM("GET",404), T0, ecl_make_fixnum(1));
 }
  si_do_defsetf(3, ECL_SYM("GET-SYSPROP",1087), ECL_SYM("PUT-SYSPROP",1141), ecl_make_fixnum(1));
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC50__lambda86,ECL_NIL,Cblock,3);
   T0 = v1;
  }
  si_do_defsetf(3, ECL_SYM("NTH",604), T0, ecl_make_fixnum(1));
 }
  si_do_defsetf(3, ECL_SYM("CHAR",205), ECL_SYM("CHAR-SET",1054), ecl_make_fixnum(1));
  si_do_defsetf(3, ECL_SYM("SCHAR",740), ECL_SYM("SCHAR-SET",1150), ecl_make_fixnum(1));
  si_do_defsetf(3, ECL_SYM("BIT",125), ECL_SYM("ASET",1042), ecl_make_fixnum(1));
  si_do_defsetf(3, ECL_SYM("SBIT",738), ECL_SYM("ASET",1042), ecl_make_fixnum(1));
  si_do_defsetf(3, ECL_SYM("FILL-POINTER",364), ECL_SYM("FILL-POINTER-SET",1074), ecl_make_fixnum(1));
  si_do_defsetf(3, ECL_SYM("SYMBOL-PLIST",847), ECL_SYM("SET-SYMBOL-PLIST",1155), ecl_make_fixnum(1));
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC51__lambda93,ECL_NIL,Cblock,3);
   T0 = v1;
  }
  si_do_defsetf(3, ECL_SYM("GETHASH",415), T0, ecl_make_fixnum(1));
 }
  si_do_defsetf(3, ECL_SYM("INSTANCE-REF",1188), ECL_SYM("INSTANCE-SET",1189), ecl_make_fixnum(1));
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC52__lambda95,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_do_defsetf(3, ECL_SYM("COMPILER-MACRO-FUNCTION",241), T0, ecl_make_fixnum(1));
 }
  si_do_defsetf(3, ECL_SYM("READTABLE-CASE",703), ECL_SYM("READTABLE-CASE-SET",1143), ecl_make_fixnum(1));
  si_do_defsetf(3, ECL_SYM("STREAM-EXTERNAL-FORMAT",805), ECL_SYM("STREAM-EXTERNAL-FORMAT-SET",1780), ecl_make_fixnum(1));
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC53__lambda98,ECL_NIL,Cblock,3);
   T0 = v1;
  }
  si_do_define_setf_method(ECL_SYM("GETF",414), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC54__lambda99,ECL_NIL,Cblock,3);
   T0 = v1;
  }
  si_do_defsetf(3, ECL_SYM("SUBSEQ",831), T0, ecl_make_fixnum(1));
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC55__lambda100,ECL_NIL,Cblock,3);
   T0 = v1;
  }
  si_do_define_setf_method(ECL_SYM("THE",858), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC56__lambda101,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_do_define_setf_method(ECL_SYM("APPLY",91), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC57__lambda102,ECL_NIL,Cblock,3);
   T0 = v1;
  }
  si_do_define_setf_method(ECL_SYM("LDB",459), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC58__lambda103,ECL_NIL,Cblock,3);
   T0 = v1;
  }
  si_do_define_setf_method(ECL_SYM("MASK-FIELD",552), T0);
 }
  (void)0; /* No entry created for TRIVIAL-SETF-FORM */
  (void)0; /* No entry created for TRY-SIMPLER-EXPANSION */
  (void)0; /* No entry created for SETF-EXPAND-1 */
  (void)0; /* No entry created for SETF-EXPAND */
  ecl_cmp_defmacro(VV[64]);                       /*  SETF            */
  ecl_cmp_defmacro(VV[65]);                       /*  WITH-SETF-EXPANSIONS */
  ecl_cmp_defmacro(VV[67]);                       /*  PSETF           */
  ecl_cmp_defmacro(VV[68]);                       /*  WITH-EXPANSION-SETTER */
  ecl_cmp_defmacro(VV[69]);                       /*  SHIFTF          */
  ecl_cmp_defmacro(VV[70]);                       /*  ROTATEF         */
  ecl_cmp_defmacro(VV[71]);                       /*  DEFINE-MODIFY-MACRO */
  ecl_cmp_defmacro(VV[72]);                       /*  REMF            */
  ecl_cmp_defmacro(VV[73]);                       /*  INCF            */
  ecl_cmp_defmacro(VV[74]);                       /*  DECF            */
  ecl_cmp_defmacro(VV[75]);                       /*  PUSH            */
  ecl_cmp_defmacro(VV[76]);                       /*  PUSHNEW         */
  ecl_cmp_defmacro(VV[77]);                       /*  POP             */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC87__lambda399,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  si_do_define_setf_method(ECL_SYM("VALUES",897), T0);
 }
}
