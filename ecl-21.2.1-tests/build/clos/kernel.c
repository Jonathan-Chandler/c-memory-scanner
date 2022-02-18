/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CLOS;KERNEL.LSP                                   */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/clos/kernel.eclh"
/*      function definition for SETF-FIND-CLASS                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1setf_find_class(cl_narg narg, cl_object v1new_value, cl_object v2name, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>4)) FEwrong_num_arguments_anonym();
 {
  cl_object v3errorp;
  cl_object v4env;
  va_list args; va_start(args,v2name);
  {
   int i = 2;
   if (i >= narg) {
    v3errorp = ECL_NIL;
   } else {
    i++;
    v3errorp = va_arg(args,cl_object);
   }
   if (i >= narg) {
    v4env = ECL_NIL;
   } else {
    i++;
    v4env = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v5old_class;
   v5old_class = cl_find_class(2, v2name, ECL_NIL);
   if (Null(v5old_class)) { goto L5; }
   if ((si_of_class_p(2, v5old_class, ECL_SYM("BUILT-IN-CLASS",931)))!=ECL_NIL) { goto L8; }
   if (!((v2name)==(ECL_SYM("CLASS",935)))) { goto L13; }
   goto L10;
   goto L11;
L13:;
   goto L11;
L11:;
   if (!((v2name)==(ECL_SYM("BUILT-IN-CLASS",931)))) { goto L5; }
   goto L6;
L10:;
   goto L6;
L8:;
L6:;
   if ((v1new_value)==(v5old_class)) { goto L3; }
   cl_error(2, VV[3], v2name);
   goto L3;
L5:;
   if (Null(L3classp(v1new_value))) { goto L17; }
   si_hash_set(v2name, ecl_symbol_value(ECL_SYM("*CLASS-NAME-HASH-TABLE*",1018)), v1new_value);
   goto L3;
L17:;
   if (!(v1new_value==ECL_NIL)) { goto L19; }
   cl_remhash(v2name, ecl_symbol_value(ECL_SYM("*CLASS-NAME-HASH-TABLE*",1018)));
   goto L3;
L19:;
   cl_error(2, VV[4], v1new_value);
  }
L3:;
  value0 = v1new_value;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function LAMBDA4                                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC2__lambda4(cl_narg narg, cl_object v1v, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2x;
  ecl_va_list args; ecl_va_start(args,v1v,narg,1);
  v2x = cl_grab_rest_args(args);
  ecl_va_end(args);
  value0 = cl_listX(3, VV[5], v1v, v2x);
  return value0;
 }
}
/*      function definition for CLASSP                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3classp(cl_object v1obj)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_INSTANCEP(v1obj))) { goto L2; }
  {
   cl_object v2topmost;
   v2topmost = cl_find_class(2, ECL_SYM("CLASS",935), ECL_NIL);
   if (v2topmost==ECL_NIL) { goto L6; }
   T0 = si_instance_class(v1obj);
   if (Null(si_subclassp(2, T0, v2topmost))) { goto L2; }
   goto L4;
L6:;
  }
L4:;
  value0 = ECL_T;
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for INSTALL-METHOD                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L5install_method(cl_narg narg, cl_object v1name, cl_object v2qualifiers, cl_object v3specializers, cl_object v4lambda_list, cl_object v5fun, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<5)) FEwrong_num_arguments_anonym();
 {
  cl_object v6options;
  ecl_va_list args; ecl_va_start(args,v5fun,narg,5);
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v1name,env0);                /*  NAME            */
  CLV1 = env0 = CONS(v3specializers,env0);        /*  SPECIALIZERS    */
  v6options = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   cl_object v7gf;
   cl_object v8fun;
   cl_object v9specializers;
   cl_object v10method;
   v7gf = (cl_env_copy->function=(VV[10]->symbol.gfdef))->cfun.entry(1, ECL_CONS_CAR(CLV0)) /*  ENSURE-GENERIC-FUNCTION */;
   v8fun = L7wrapped_method_function(v5fun);
   {
    cl_object v11;
    {
     cl_object v12;
     v12 = ecl_make_cclosure_va((cl_objectfn)LC4__lambda10,env0,Cblock,1);
     v11 = v12;
    }
    {
     cl_object v12;
     cl_object v13;
     v12 = ECL_NIL;
     {
      cl_object v14;
      v14 = ECL_CONS_CAR(CLV1);
      if (ecl_unlikely(!ECL_LISTP(v14))) FEtype_error_list(v14);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v13 = v14;
     }
     {
      cl_object v14;
      cl_object v15;
      v14 = ecl_list1(ECL_NIL);
      v15 = v14;
L11:;
      if (!(ecl_endp(v13))) { goto L13; }
      goto L12;
L13:;
      v12 = _ecl_car(v13);
      {
       cl_object v16;
       v16 = _ecl_cdr(v13);
       if (ecl_unlikely(!ECL_LISTP(v16))) FEtype_error_list(v16);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v13 = v16;
      }
      {
       cl_object v16;
       v16 = v15;
       if (ecl_unlikely(ECL_ATOM(v16))) FEtype_error_cons(v16);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       T0 = v16;
      }
      T1 = ecl_function_dispatch(cl_env_copy,v11)(1, v12);
      v15 = ecl_list1(T1);
      (ECL_CONS_CDR(T0)=v15,T0);
      goto L11;
L12:;
      v9specializers = ecl_cdr(v14);
      goto L3;
     }
    }
   }
L3:;
   T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("GENERIC-FUNCTION-METHOD-CLASS",1583))(1, v7gf) /*  GENERIC-FUNCTION-METHOD-CLASS */;
   v10method = (cl_env_copy->function=(ECL_SYM("MAKE-METHOD",955)->symbol.gfdef))->cfun.entry(6, T0, v2qualifiers, v9specializers, v4lambda_list, v8fun, v6options) /*  MAKE-METHOD */;
   (cl_env_copy->function=(ECL_SYM("ADD-METHOD",930)->symbol.gfdef))->cfun.entry(2, v7gf, v10method) /*  ADD-METHOD */;
   value0 = v10method;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      closure LAMBDA10                                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC4__lambda10(cl_narg narg, cl_object v1x, ...)
{
 cl_object T0;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV1 = env0;                                     /*  SPECIALIZERS    */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  if (!(ECL_CONSP(v1x))) { goto L1; }
  T0 = ecl_cadr(v1x);
  value0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("INTERN-EQL-SPECIALIZER",1587))(1, T0) /*  INTERN-EQL-SPECIALIZER */;
  return value0;
L1:;
  if (Null(si_of_class_p(2, v1x, ECL_SYM("SPECIALIZER",1617)))) { goto L3; }
  value0 = v1x;
  cl_env_copy->nvalues = 1;
  return value0;
L3:;
  {
   cl_object v2;
   v2 = cl_find_class(2, v1x, ECL_NIL);
   if (Null(v2)) { goto L6; }
   value0 = v2;
   cl_env_copy->nvalues = 1;
   return value0;
L6:;
   value0 = cl_error(3, VV[7], ECL_CONS_CAR(CLV0), ECL_CONS_CAR(CLV1));
   return value0;
  }
 }
 }
}
/*      function definition for WRAPPED-METHOD-FUNCTION               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L7wrapped_method_function(cl_object v1method_function)
{
 cl_object env0 = ECL_NIL;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v1method_function,env0);     /*  METHOD-FUNCTION */
  {
   cl_object v2;
   v2 = ecl_make_cclosure_va((cl_objectfn)LC6__lambda14,env0,Cblock,2);
   value0 = v2;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      closure LAMBDA14                                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC6__lambda14(cl_narg narg, cl_object v1_combined_method_args_, cl_object v2_next_methods_, ...)
{
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV0 = env0;                                     /*  METHOD-FUNCTION */
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=2)) FEwrong_num_arguments_anonym();
 {
  ecl_bds_bind(cl_env_copy,ECL_SYM(".COMBINED-METHOD-ARGS.",1534),v1_combined_method_args_); /*  .COMBINED-METHOD-ARGS. */
  ecl_bds_bind(cl_env_copy,ECL_SYM("*NEXT-METHODS*",1536),v2_next_methods_); /*  *NEXT-METHODS* */
TTL:
  value0 = cl_apply(2, ECL_CONS_CAR(CLV0), ecl_symbol_value(ECL_SYM(".COMBINED-METHOD-ARGS.",1534)));
  ecl_bds_unwind1(cl_env_copy);
  ecl_bds_unwind1(cl_env_copy);
  return value0;
 }
 }
}
/*      function definition for ENSURE-GENERIC-FUNCTION               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L8ensure_generic_function(cl_narg narg, cl_object v1name, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2lambda_list;
  cl_object v3l_l_p;
  ecl_va_list args; ecl_va_start(args,v1name,narg,1);
  {
   cl_object keyvars[2];
   cl_parse_key(args,1,L8ensure_generic_functionkeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   if (Null(keyvars[1])) {
    v2lambda_list = ECL_UNBOUND;
   } else {
    v2lambda_list = keyvars[0];
   }
   v3l_l_p = keyvars[1];
  }
  if (Null(cl_fboundp(v1name))) { goto L2; }
  T0 = cl_fdefinition(v1name);
  if (!(ECL_INSTANCEP(T0))) { goto L2; }
  value0 = cl_fdefinition(v1name);
  return value0;
L2:;
  {
   cl_object v4_class;
   cl_object v5gfun;
   v4_class = cl_find_class(1, ECL_SYM("STANDARD-GENERIC-FUNCTION",976));
   v5gfun = si_allocate_raw_instance(ECL_NIL, v4_class, ecl_make_fixnum(11));
   si_instance_set(v5gfun, ecl_make_fixnum(0), v1name);
   si_instance_set(v5gfun, ecl_make_fixnum(1), ECL_NIL);
   T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("FIND-METHOD-COMBINATION",1575))(3, ECL_NIL, ECL_SYM("STANDARD",974), ECL_NIL) /*  FIND-METHOD-COMBINATION */;
   si_instance_set(v5gfun, ecl_make_fixnum(2), T0);
   si_instance_set(v5gfun, ecl_make_fixnum(3), v2lambda_list);
   if (Null(v3l_l_p)) { goto L14; }
   T1 = si_process_lambda_list(v2lambda_list, ECL_T);
   T0 = ecl_cdr(T1);
   goto L12;
L14:;
   T0 = ECL_NIL;
   goto L12;
L12:;
   si_instance_set(v5gfun, ecl_make_fixnum(4), T0);
   T0 = cl_find_class(1, ECL_SYM("STANDARD-METHOD",977));
   si_instance_set(v5gfun, ecl_make_fixnum(5), T0);
   si_instance_set(v5gfun, ecl_make_fixnum(6), ECL_NIL);
   si_instance_set(v5gfun, ecl_make_fixnum(7), ECL_NIL);
   si_instance_set(v5gfun, ecl_make_fixnum(8), ECL_NIL);
   si_instance_set(v5gfun, ecl_make_fixnum(9), ECL_NIL);
   si_instance_set(v5gfun, ecl_make_fixnum(10), ECL_NIL);
   if (Null(v4_class)) { goto L22; }
   si_instance_sig_set(v5gfun);
L22:;
   clos_set_funcallable_instance_function(v5gfun, ECL_SYM("STANDARD-GENERIC-FUNCTION",976));
   si_fset(2, v1name, v5gfun);
   value0 = v5gfun;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for (SETF GENERIC-FUNCTION-NAME)          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L9_setf_generic_function_name_(cl_object v1new_name, cl_object v2gf)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_symbol_value(VV[0]))) { goto L1; }
  value0 = (cl_env_copy->function=(ECL_SYM("REINITIALIZE-INSTANCE",965)->symbol.gfdef))->cfun.entry(3, v2gf, ECL_SYM("NAME",1300), v1new_name) /*  REINITIALIZE-INSTANCE */;
  return value0;
L1:;
  value0 = (cl_env_copy->function=ECL_CONS_CAR(VV[33]))->cfun.entry(3, v1new_name, v2gf, ECL_SYM("NAME",1596)) /*  (SETF SLOT-VALUE) */;
  return value0;
 }
}
/*      function definition for DEFAULT-DISPATCH                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L10default_dispatch(cl_object v1generic_function)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ecl_symbol_value(VV[0])==ECL_NIL)) { goto L1; }
  value0 = ECL_SYM("STANDARD-GENERIC-FUNCTION",976);
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  T0 = cl_class_of(v1generic_function);
  T1 = ecl_function_dispatch(cl_env_copy,VV[35])(1, T0) /*  CLASS-ID  */;
  if (!((T1)==(ECL_SYM("STANDARD-GENERIC-FUNCTION",976)))) { goto L3; }
  value0 = ECL_SYM("STANDARD-GENERIC-FUNCTION",976);
  cl_env_copy->nvalues = 1;
  return value0;
L3:;
  value0 = ECL_T;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for COMPUTE-DISCRIMINATING-FUNCTION       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L12compute_discriminating_function(cl_object v1generic_function)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v1generic_function,env0);    /*  GENERIC-FUNCTION */
  {
   cl_object v2;
   v2 = ecl_make_cclosure_va((cl_objectfn)LC11__lambda44,env0,Cblock,0);
   T0 = v2;
  }
  cl_env_copy->nvalues = 2;
  cl_env_copy->values[1] = ECL_T;
  cl_env_copy->values[0] = T0;
  return cl_env_copy->values[0];
 }
}
/*      closure LAMBDA44                                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC11__lambda44(cl_narg narg, ...)
{
 cl_object T0, T1, T2;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV0 = env0;                                     /*  GENERIC-FUNCTION */
 { /* ... closure scanning finished */
 {
  cl_object v1args;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  v1args = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   cl_object v3;                                  /*  METHOD-LIST     */
   cl_object v4;                                  /*  OK              */
   {
    cl_object v5;
    v5 = (ECL_SYM("CLASS-OF",937)->symbol.gfdef);
    {
     cl_object v6;
     cl_object v7;
     v6 = ECL_NIL;
     {
      cl_object v8;
      v8 = v1args;
      if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v7 = v8;
     }
     {
      cl_object v8;
      cl_object v9;
      v8 = ecl_list1(ECL_NIL);
      v9 = v8;
L10:;
      if (!(ecl_endp(v7))) { goto L12; }
      goto L11;
L12:;
      v6 = _ecl_car(v7);
      {
       cl_object v10;
       v10 = _ecl_cdr(v7);
       if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
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
      T2 = ecl_function_dispatch(cl_env_copy,v5)(1, v6);
      v9 = ecl_list1(T2);
      (ECL_CONS_CDR(T1)=v9,T1);
      goto L10;
L11:;
      T0 = ecl_cdr(v8);
      goto L2;
     }
    }
   }
L2:;
   value0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("COMPUTE-APPLICABLE-METHODS-USING-CLASSES",1556))(2, ECL_CONS_CAR(CLV0), T0) /*  COMPUTE-APPLICABLE-METHODS-USING-CLASSES */;
   {
    const int v5 = cl_env_copy->nvalues;
    v3 = value0;
    cl_object v6;
    v6 = (v5<=1)? ECL_NIL : cl_env_copy->values[1];
    v4 = v6;
   }
   if ((v4)!=ECL_NIL) { goto L28; }
   v3 = (cl_env_copy->function=(ECL_SYM("COMPUTE-APPLICABLE-METHODS",938)->symbol.gfdef))->cfun.entry(2, ECL_CONS_CAR(CLV0), v1args) /*  COMPUTE-APPLICABLE-METHODS */;
   if ((v3)!=ECL_NIL) { goto L28; }
   T0 = (ECL_SYM("NO-APPLICABLE-METHOD",961)->symbol.gfdef);
   cl_apply(3, T0, ECL_CONS_CAR(CLV0), v1args);
L28:;
   T1 = ecl_function_dispatch(cl_env_copy,ECL_SYM("GENERIC-FUNCTION-METHOD-COMBINATION",1584))(1, ECL_CONS_CAR(CLV0)) /*  GENERIC-FUNCTION-METHOD-COMBINATION */;
   T0 = clos_compute_effective_method_function(ECL_CONS_CAR(CLV0), T1, v3);
   value0 = ecl_function_dispatch(cl_env_copy,T0)(2, v1args, ECL_NIL);
   return value0;
  }
 }
 }
}
/*      function definition for SET-GENERIC-FUNCTION-DISPATCH         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L13set_generic_function_dispatch(cl_object v1gfun)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;                                  /*  DEFAULT-FUNCTION */
   cl_object v4;                                  /*  OPTIMIZABLE     */
   value0 = ecl_function_dispatch(cl_env_copy,VV[13])(1, v1gfun) /*  COMPUTE-DISCRIMINATING-FUNCTION */;
   {
    const int v5 = cl_env_copy->nvalues;
    v3 = value0;
    cl_object v6;
    v6 = (v5<=1)? ECL_NIL : cl_env_copy->values[1];
    v4 = v6;
   }
   {
    cl_object v5methods;
    v5methods = cl_slot_value(v1gfun, VV[14]);
    if (Null(v4)) { goto L6; }
    T1 = cl_slot_value(v1gfun, VV[15]);
    {
     cl_fixnum v6;
     v6 = ecl_length(T1);
     if (!((v6)>(63))) { goto L4; }
     goto L5;
    }
L6:;
L5:;
    T0 = v3;
    goto L3;
L4:;
    T1 = cl_class_of(v1gfun);
    T2 = cl_slot_value(T1, ECL_SYM("NAME",1596));
    if ((T2)==(ECL_SYM("STANDARD-GENERIC-FUNCTION",976))) { goto L8; }
    if (Null(ecl_symbol_value(VV[0]))) { goto L8; }
    T0 = ECL_T;
    goto L3;
L8:;
    if (!(v5methods==ECL_NIL)) { goto L11; }
    T0 = ECL_SYM("STANDARD-GENERIC-FUNCTION",976);
    goto L3;
L11:;
    {
     cl_object v6class;
     v6class = cl_find_class(2, ECL_SYM("STANDARD-OPTIMIZED-READER-METHOD",1628), ECL_NIL);
     {
      cl_object v7m;
      cl_object v8;
      v7m = ECL_NIL;
      {
       cl_object v9;
       v9 = v5methods;
       if (ecl_unlikely(!ECL_LISTP(v9))) FEtype_error_list(v9);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v8 = v9;
      }
L20:;
      if (!(ecl_endp(v8))) { goto L22; }
      goto L21;
L22:;
      v7m = _ecl_car(v8);
      {
       cl_object v9;
       v9 = _ecl_cdr(v8);
       if (ecl_unlikely(!ECL_LISTP(v9))) FEtype_error_list(v9);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v8 = v9;
      }
      T1 = cl_class_of(v7m);
      if ((v6class)==(T1)) { goto L30; }
      goto L13;
L30:;
      goto L20;
L21:;
      goto L14;
     }
    }
L14:;
    T0 = ECL_SYM("STANDARD-OPTIMIZED-READER-METHOD",1628);
    goto L3;
L13:;
    {
     cl_object v6class;
     v6class = cl_find_class(2, ECL_SYM("STANDARD-OPTIMIZED-WRITER-METHOD",1629), ECL_NIL);
     {
      cl_object v7m;
      cl_object v8;
      v7m = ECL_NIL;
      {
       cl_object v9;
       v9 = v5methods;
       if (ecl_unlikely(!ECL_LISTP(v9))) FEtype_error_list(v9);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v8 = v9;
      }
L41:;
      if (!(ecl_endp(v8))) { goto L43; }
      goto L42;
L43:;
      v7m = _ecl_car(v8);
      {
       cl_object v9;
       v9 = _ecl_cdr(v8);
       if (ecl_unlikely(!ECL_LISTP(v9))) FEtype_error_list(v9);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v8 = v9;
      }
      T1 = cl_class_of(v7m);
      if ((v6class)==(T1)) { goto L51; }
      goto L34;
L51:;
      goto L41;
L42:;
      goto L35;
     }
    }
L35:;
    T0 = ECL_SYM("STANDARD-OPTIMIZED-WRITER-METHOD",1629);
    goto L3;
L34:;
    T0 = ECL_SYM("STANDARD-GENERIC-FUNCTION",976);
L3:;
    value0 = clos_set_funcallable_instance_function(v1gfun, T0);
    return value0;
   }
  }
 }
}
/*      function definition for STD-COMPUTE-APPLICABLE-METHODS        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object clos_std_compute_applicable_methods(cl_object v1gf, cl_object v2args)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = L15applicable_method_list(v1gf, v2args);
  {
   cl_object v3;
   v3 = (ECL_SYM("CLASS-OF",937)->symbol.gfdef);
   {
    cl_object v4;
    cl_object v5;
    v4 = ECL_NIL;
    v5 = v2args;
    {
     cl_object v6;
     cl_object v7;
     v6 = ecl_list1(ECL_NIL);
     v7 = v6;
L7:;
     if (!(ecl_endp(v5))) { goto L9; }
     goto L8;
L9:;
     v4 = _ecl_car(v5);
     {
      cl_object v8;
      v8 = _ecl_cdr(v5);
      if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v5 = v8;
     }
     {
      cl_object v8;
      v8 = v7;
      if (ecl_unlikely(ECL_ATOM(v8))) FEtype_error_cons(v8);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      T2 = v8;
     }
     T3 = ecl_function_dispatch(cl_env_copy,v3)(1, v4);
     v7 = ecl_list1(T3);
     (ECL_CONS_CDR(T2)=v7,T2);
     goto L7;
L8:;
     T1 = ecl_cdr(v6);
     goto L1;
    }
   }
  }
L1:;
  value0 = L18sort_applicable_methods(v1gf, T0, T1);
  return value0;
 }
}
/*      function definition for APPLICABLE-METHOD-LIST                */
/*      optimize speed 3, debug 1, space 1, safety 2                  */
static cl_object L15applicable_method_list(cl_object v1gf, cl_object v2args)
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
   cl_object v4method;
   cl_object v5;
   v3 = ecl_instance_ref((v1gf),(7));
   v4method = ECL_NIL;
   {
    cl_object v6;
    v6 = v3;
    if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v5 = v6;
   }
   {
    cl_object v6;
    cl_object v7;
    v6 = ecl_list1(ECL_NIL);
    v7 = v6;
L8:;
    if (!(ecl_endp(v5))) { goto L10; }
    goto L9;
L10:;
    v4method = _ecl_car(v5);
    {
     cl_object v8;
     v8 = _ecl_cdr(v5);
     if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v5 = v8;
    }
    if (Null(LC14applicable_method_p(v4method, v2args))) { goto L18; }
    {
     cl_object v8;
     v8 = v7;
     if (ecl_unlikely(ECL_ATOM(v8))) FEtype_error_cons(v8);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     T0 = v8;
    }
    v7 = ecl_list1(v4method);
    (ECL_CONS_CDR(T0)=v7,T0);
L18:;
    goto L8;
L9:;
    value0 = ecl_cdr(v6);
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      local function APPLICABLE-METHOD-P                            */
/*      optimize speed 3, debug 1, space 1, safety 2                  */
static cl_object LC14applicable_method_p(cl_object v1method, cl_object v2args)
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
   cl_object v4spec;
   cl_object v5;
   v3 = ecl_instance_ref((v1method),(2));
   v4spec = ECL_NIL;
   {
    cl_object v6;
    v6 = v3;
    if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v5 = v6;
   }
   {
    cl_object v6arg;
    cl_object v7;
    v6arg = ECL_NIL;
    {
     cl_object v8;
     v8 = v2args;
     if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v7 = v8;
    }
L10:;
    if (!(ecl_endp(v5))) { goto L12; }
    goto L11;
L12:;
    v4spec = _ecl_car(v5);
    {
     cl_object v8;
     v8 = _ecl_cdr(v5);
     if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v5 = v8;
    }
    if (!(ecl_endp(v7))) { goto L20; }
    goto L11;
L20:;
    v6arg = _ecl_car(v7);
    {
     cl_object v8;
     v8 = _ecl_cdr(v7);
     if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v7 = v8;
    }
    if (Null(ecl_instance_ref((v4spec),(0)))) { goto L30; }
    T0 = ecl_instance_ref((v4spec),(2));
    if (ecl_eql(v6arg,T0)) { goto L28; }
    goto L29;
L30:;
    if ((si_of_class_p(2, v6arg, v4spec))!=ECL_NIL) { goto L28; }
L29:;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
L28:;
    goto L10;
L11:;
    value0 = ECL_T;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for STD-COMPUTE-APPLICABLE-METHODS-USING-CLASSES */
/*      optimize speed 3, debug 1, space 1, safety 2                  */
static cl_object L17std_compute_applicable_methods_using_classes(cl_object volatile v1gf, cl_object volatile v2classes)
{
 cl_object T0, T1;
 volatile cl_object lex0[1];
 cl_object volatile env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   lex0[0] = ECL_NEW_FRAME_ID(cl_env_copy);       /*  STD-COMPUTE-APPLICABLE-METHODS-USING-CLASSES */
   {
    ecl_frs_push(cl_env_copy,lex0[0]);
    if (__ecl_frs_push_result!=0) {
    value0 = cl_env_copy->values[0];
    ecl_frs_pop(cl_env_copy);
    return value0;
    } else {
    {
     cl_object v3;
     cl_object v4method;
     cl_object v5;
     v3 = ecl_instance_ref((v1gf),(7));
     v4method = ECL_NIL;
     {
      cl_object v6;
      v6 = v3;
      if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v5 = v6;
     }
     {
      cl_object v6;
      cl_object v7;
      v6 = ecl_list1(ECL_NIL);
      v7 = v6;
L9:;
      if (!(ecl_endp(v5))) { goto L11; }
      goto L10;
L11:;
      v4method = _ecl_car(v5);
      {
       cl_object v8;
       v8 = _ecl_cdr(v5);
       if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v5 = v8;
      }
      if (Null(LC16applicable_method_p(lex0, v4method, v2classes))) { goto L19; }
      {
       cl_object v8;
       v8 = v7;
       if (ecl_unlikely(ECL_ATOM(v8))) FEtype_error_cons(v8);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       T1 = v8;
      }
      v7 = ecl_list1(v4method);
      (ECL_CONS_CDR(T1)=v7,T1);
L19:;
      goto L9;
L10:;
      T0 = ecl_cdr(v6);
      goto L1;
     }
    }
L1:;
    T1 = L18sort_applicable_methods(v1gf, T0, v2classes);
    cl_env_copy->nvalues = 2;
    cl_env_copy->values[1] = ECL_T;
    cl_env_copy->values[0] = T1;
    value0 = cl_env_copy->values[0];
    ecl_frs_pop(cl_env_copy);
    return value0;}
   }
  }
 }
}
/*      local function APPLICABLE-METHOD-P                            */
/*      optimize speed 3, debug 1, space 1, safety 2                  */
static cl_object LC16applicable_method_p(volatile cl_object *lex0, cl_object v1method, cl_object v2classes)
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
   cl_object v4spec;
   cl_object v5;
   v3 = ecl_instance_ref((v1method),(2));
   v4spec = ECL_NIL;
   {
    cl_object v6;
    v6 = v3;
    if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v5 = v6;
   }
   {
    cl_object v6class;
    cl_object v7;
    v6class = ECL_NIL;
    {
     cl_object v8;
     v8 = v2classes;
     if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v7 = v8;
    }
L10:;
    if (!(ecl_endp(v5))) { goto L12; }
    goto L11;
L12:;
    v4spec = _ecl_car(v5);
    {
     cl_object v8;
     v8 = _ecl_cdr(v5);
     if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v5 = v8;
    }
    if (!(ecl_endp(v7))) { goto L20; }
    goto L11;
L20:;
    v6class = _ecl_car(v7);
    {
     cl_object v8;
     v8 = _ecl_cdr(v7);
     if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v7 = v8;
    }
    if (Null(ecl_instance_ref((v4spec),(0)))) { goto L30; }
    T0 = ecl_instance_ref((v4spec),(2));
    if (Null(si_of_class_p(2, T0, v6class))) { goto L32; }
    cl_env_copy->nvalues = 2;
    cl_env_copy->values[1] = ECL_NIL;
    cl_env_copy->values[0] = ECL_NIL;
    cl_return_from(lex0[0],ECL_NIL);
L32:;
    goto L29;
L30:;
    {
     cl_object v8;
     v8 = si_subclassp(2, v6class, v4spec);
     if (Null(v8)) { goto L36; }
     if ((v8)!=ECL_NIL) { goto L28; }
     goto L29;
L36:;
    }
L29:;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
L28:;
    goto L10;
L11:;
    value0 = ECL_T;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for SORT-APPLICABLE-METHODS               */
/*      optimize speed 3, debug 1, space 1, safety 0                  */
static cl_object L18sort_applicable_methods(cl_object v1gf, cl_object v2applicable_list, cl_object v3args_specializers)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v4f;
  v4f = ecl_instance_ref((v1gf),(8));
  if (Null(v4f)) { goto L2; }
  T0 = ecl_instance_ref((v1gf),(4));
  {
   cl_fixnum v5;
   v5 = ecl_length(T0);
   T1 = cl_subseq(3, v3args_specializers, ecl_make_fixnum(0), ecl_make_fixnum(v5));
   v3args_specializers = ecl_function_dispatch(cl_env_copy,v4f)(1, T1);
  }
L2:;
  {
   cl_object v5scan;
   cl_object v6most_specific;
   cl_object v7ordered_list;
   v5scan = v2applicable_list;
   v6most_specific = _ecl_car(v5scan);
   v7ordered_list = ECL_NIL;
   goto L10;
L9:;
   {
    cl_object v8;
    v8 = _ecl_cdr(v5scan);
    goto L16;
L15:;
    {
     cl_object v9meth;
     v9meth = _ecl_car(v8);
     T0 = L19compare_methods(v6most_specific, v9meth, v3args_specializers, v4f);
     if (!((T0)==(ecl_make_fixnum(2)))) { goto L20; }
     v6most_specific = v9meth;
L20:;
    }
    v8 = _ecl_cdr(v8);
L16:;
    if (Null(v8)) { goto L25; }
    goto L15;
L25:;
   }
   v5scan = cl_delete(2, v6most_specific, v5scan);
   v7ordered_list = CONS(v6most_specific,v7ordered_list);
   v6most_specific = _ecl_car(v5scan);
L10:;
   T0 = _ecl_cdr(v5scan);
   if (T0==ECL_NIL) { goto L33; }
   goto L9;
L33:;
   if (Null(v6most_specific)) { goto L35; }
   v7ordered_list = CONS(v6most_specific,v7ordered_list);
   value0 = cl_nreverse(v7ordered_list);
   return value0;
L35:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for COMPARE-METHODS                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L19compare_methods(cl_object v1method_1, cl_object v2method_2, cl_object v3args_specializers, cl_object v4f)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v5specializers_list_1;
   cl_object v6specializers_list_2;
   v5specializers_list_1 = ecl_instance_ref((v1method_1),(2));
   v6specializers_list_2 = ecl_instance_ref((v2method_2),(2));
   if (Null(v4f)) { goto L4; }
   T0 = ecl_function_dispatch(cl_env_copy,v4f)(1, v5specializers_list_1);
   goto L3;
L4:;
   T0 = v5specializers_list_1;
L3:;
   if (Null(v4f)) { goto L7; }
   T1 = ecl_function_dispatch(cl_env_copy,v4f)(1, v6specializers_list_2);
   goto L6;
L7:;
   T1 = v6specializers_list_2;
L6:;
   value0 = L20compare_specializers_lists(T0, T1, v3args_specializers);
   return value0;
  }
 }
}
/*      function definition for COMPARE-SPECIALIZERS-LISTS            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L20compare_specializers_lists(cl_object v1spec_list_1, cl_object v2spec_list_2, cl_object v3args_specializers)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if ((v1spec_list_1)!=ECL_NIL) { goto L3; }
  if (Null(v2spec_list_2)) { goto L1; }
  goto L2;
L3:;
L2:;
  {
   cl_object v4;
   T0 = ecl_car(v1spec_list_1);
   T1 = ecl_car(v2spec_list_2);
   T2 = ecl_car(v3args_specializers);
   v4 = L22compare_specializers(T0, T1, T2);
   if (!((v4)==(ecl_make_fixnum(1)))) { goto L6; }
   value0 = ecl_make_fixnum(1);
   cl_env_copy->nvalues = 1;
   return value0;
L6:;
   if (!((v4)==(ecl_make_fixnum(2)))) { goto L8; }
   value0 = ecl_make_fixnum(2);
   cl_env_copy->nvalues = 1;
   return value0;
L8:;
   if (!((v4)==(ECL_SYM("=",76)))) { goto L10; }
   v1spec_list_1 = ecl_cdr(v1spec_list_1);
   v2spec_list_2 = ecl_cdr(v2spec_list_2);
   v3args_specializers = ecl_cdr(v3args_specializers);
   goto TTL;
L10:;
   if (!((v4)==(ECL_NIL))) { goto L16; }
   value0 = ecl_car(v1spec_list_1);
   if ((value0)!=ECL_NIL) { goto L21; }
   T0 = ECL_T;
   goto L19;
L21:;
   T0 = value0;
   goto L19;
L19:;
   value0 = ecl_car(v2spec_list_2);
   if ((value0)!=ECL_NIL) { goto L25; }
   T1 = ECL_T;
   goto L23;
L25:;
   T1 = value0;
   goto L23;
L23:;
   T2 = ecl_car(v3args_specializers);
   value0 = cl_error(4, VV[20], T0, T1, T2);
   return value0;
L16:;
   value0 = si_ecase_error(v4, VV[21]);
   return value0;
  }
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for FAST-SUBTYPEP                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L21fast_subtypep(cl_object v1spec1, cl_object v2spec2)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_instance_ref((v1spec1),(0)))) { goto L1; }
  if (Null(ecl_instance_ref((v2spec2),(0)))) { goto L3; }
  T0 = ecl_instance_ref((v1spec1),(2));
  T1 = ecl_instance_ref((v2spec2),(2));
  value0 = ecl_make_bool(ecl_eql(T0,T1));
  cl_env_copy->nvalues = 1;
  return value0;
L3:;
  T0 = ecl_instance_ref((v1spec1),(2));
  value0 = si_of_class_p(2, T0, v2spec2);
  return value0;
L1:;
  if (Null(ecl_instance_ref((v2spec2),(0)))) { goto L5; }
  T0 = ecl_instance_ref((v2spec2),(2));
  if (!(T0==ECL_NIL)) { goto L8; }
  T0 = (cl_env_copy->function=(ECL_SYM("CLASS-NAME",936)->symbol.gfdef))->cfun.entry(1, v1spec1) /*  CLASS-NAME */;
  value0 = ecl_make_bool((T0)==(ECL_SYM("NULL",607)));
  cl_env_copy->nvalues = 1;
  return value0;
L8:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L5:;
  value0 = si_subclassp(2, v1spec1, v2spec2);
  return value0;
 }
}
/*      function definition for COMPARE-SPECIALIZERS                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L22compare_specializers(cl_object v1spec_1, cl_object v2spec_2, cl_object v3arg_class)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4cpl;
   v4cpl = ecl_instance_ref((v3arg_class),(7));
   if (!((v1spec_1)==(v2spec_2))) { goto L2; }
   value0 = ECL_SYM("=",76);
   cl_env_copy->nvalues = 1;
   return value0;
L2:;
   if (Null(L21fast_subtypep(v1spec_1, v2spec_2))) { goto L4; }
   value0 = ecl_make_fixnum(1);
   cl_env_copy->nvalues = 1;
   return value0;
L4:;
   if (Null(L21fast_subtypep(v2spec_2, v1spec_1))) { goto L6; }
   value0 = ecl_make_fixnum(2);
   cl_env_copy->nvalues = 1;
   return value0;
L6:;
   if (Null(ecl_instance_ref((v1spec_1),(0)))) { goto L8; }
   value0 = ecl_make_fixnum(1);
   cl_env_copy->nvalues = 1;
   return value0;
L8:;
   if (Null(ecl_instance_ref((v2spec_2),(0)))) { goto L10; }
   value0 = ecl_make_fixnum(2);
   cl_env_copy->nvalues = 1;
   return value0;
L10:;
   T0 = ecl_memql(v2spec_2,v4cpl);
   if (Null(ecl_memql(v1spec_1,T0))) { goto L12; }
   value0 = ecl_make_fixnum(2);
   cl_env_copy->nvalues = 1;
   return value0;
L12:;
   T0 = ecl_memql(v1spec_1,v4cpl);
   if (Null(ecl_memql(v2spec_2,T0))) { goto L15; }
   value0 = ecl_make_fixnum(1);
   cl_env_copy->nvalues = 1;
   return value0;
L15:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for COMPUTE-G-F-SPEC-LIST                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L24compute_g_f_spec_list(cl_object v1gf)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2spec_how_list;
   cl_object v3function;
   cl_object v4a_p_o;
   v2spec_how_list = ECL_NIL;
   v3function = ECL_NIL;
   v4a_p_o = ecl_instance_ref((v1gf),(4));
   {
    cl_object v5;
    v5 = ecl_instance_ref((v1gf),(7));
    goto L8;
L7:;
    {
     cl_object v6method;
     v6method = ecl_car(v5);
     T0 = ecl_instance_ref((v6method),(2));
     v2spec_how_list = LC23nupdate_spec_how_list(v2spec_how_list, T0);
    }
    v5 = ecl_cdr(v5);
L8:;
    if (Null(v5)) { goto L16; }
    goto L7;
L16:;
   }
   {
    cl_object v5;
    {
     cl_object v6type;
     cl_object v7;
     v6type = ECL_NIL;
     {
      cl_object v8;
      v8 = v2spec_how_list;
      if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v7 = v8;
     }
     {
      cl_object v8i;
      v8i = ecl_make_fixnum(0);
      {
       cl_object v9;
       cl_object v10;
       v9 = ecl_list1(ECL_NIL);
       v10 = v9;
       if (!(ecl_endp(v7))) { goto L29; }
       goto L28;
L29:;
       v6type = _ecl_car(v7);
       {
        cl_object v11;
        v11 = _ecl_cdr(v7);
        if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v7 = v11;
       }
L27:;
       if (Null(v6type)) { goto L37; }
       {
        cl_object v11;
        v11 = v10;
        if (ecl_unlikely(ECL_ATOM(v11))) FEtype_error_cons(v11);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        T0 = v11;
       }
       T1 = CONS(v6type,v8i);
       v10 = ecl_list1(T1);
       (ECL_CONS_CDR(T0)=v10,T0);
L37:;
       if (!(ecl_endp(v7))) { goto L43; }
       goto L28;
L43:;
       v6type = _ecl_car(v7);
       {
        cl_object v11;
        v11 = _ecl_cdr(v7);
        if (ecl_unlikely(!ECL_LISTP(v11))) FEtype_error_list(v11);
        value0 = ECL_NIL;
        cl_env_copy->nvalues = 0;
        v7 = v11;
       }
       v8i = ecl_one_plus(v8i);
       goto L27;
L28:;
       v5 = ecl_cdr(v9);
       goto L19;
      }
     }
    }
L19:;
    si_instance_set(v1gf, ecl_make_fixnum(1), v5);
   }
   {
    cl_object v5g_f_l_l;
    v5g_f_l_l = ecl_instance_ref((v1gf),(3));
    if (!(ECL_CONSP(v5g_f_l_l))) { goto L55; }
    {
     cl_object v6required_arguments;
     T0 = si_process_lambda_list(v5g_f_l_l, ECL_T);
     v6required_arguments = ecl_cdr(T0);
     if (ecl_equal(v4a_p_o,v6required_arguments)) { goto L55; }
     T0 = CONS(ECL_SYM("LIST",483),v4a_p_o);
     T1 = cl_list(4, ECL_SYM("DESTRUCTURING-BIND",302), v6required_arguments, VV[23], T0);
     T2 = cl_list(3, ECL_SYM("LAMBDA",454), VV[22], T1);
     v3function = si_coerce_to_function(T2);
    }
   }
L55:;
   si_instance_set(v1gf, ecl_make_fixnum(8), v3function);
   value0 = si_clear_gfun_hash(v1gf);
   return value0;
  }
 }
}
/*      local function NUPDATE-SPEC-HOW-LIST                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC23nupdate_spec_how_list(cl_object v1spec_how_list, cl_object v2specializers)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = v1spec_how_list;
  if ((value0)!=ECL_NIL) { goto L4; }
  v1spec_how_list = cl_copy_list(v2specializers);
  goto L2;
L4:;
  v1spec_how_list = value0;
  goto L2;
L2:;
  {
   cl_object v3l;
   cl_object v4l2;
   cl_object v5spec_how;
   cl_object v6spec_how_old;
   v3l = v2specializers;
   v4l2 = v1spec_how_list;
   v5spec_how = ECL_NIL;
   v6spec_how_old = ECL_NIL;
   goto L13;
L12:;
   v5spec_how = ecl_car(v3l);
   v6spec_how_old = ecl_car(v4l2);
   {
    cl_object v7;
    if (Null(ecl_instance_ref((v5spec_how),(0)))) { goto L21; }
    T0 = ecl_instance_ref((v5spec_how),(2));
    if (!(ECL_CONSP(v6spec_how_old))) { goto L25; }
    T1 = v6spec_how_old;
    goto L23;
L25:;
    T1 = ECL_NIL;
    goto L23;
L23:;
    v7 = CONS(T0,T1);
    goto L20;
L21:;
    if (!(ECL_CONSP(v6spec_how_old))) { goto L27; }
    v7 = v6spec_how_old;
    goto L20;
L27:;
    v7 = v5spec_how;
L20:;
    {
     cl_object v8;
     v8 = v4l2;
     if (ecl_unlikely(ECL_ATOM(v8))) FEtype_error_cons(v8);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     T0 = v8;
    }
    (ECL_CONS_CAR(T0)=v7,T0);
   }
   v3l = ecl_cdr(v3l);
   v4l2 = ecl_cdr(v4l2);
L13:;
   if (v3l==ECL_NIL) { goto L37; }
   goto L12;
L37:;
  }
  value0 = v1spec_how_list;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for PRINT-OBJECT                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L25print_object(cl_object v1object, cl_object v2stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = si_print_unreadable_object_function(v1object, v2stream, ECL_NIL, ECL_NIL, ECL_NIL);
  return value0;
 }
}

#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/clos/kernel.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclSIOXHKa7_zrEmqq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CLOS;KERNEL.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclSIOXHKa7_zrEmqq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  si_Xmake_special(VV[0]);
  cl_set(VV[0],ECL_NIL);
  ecl_cmp_defun(VV[26]);                          /*  SETF-FIND-CLASS */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC2__lambda4,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  si_do_defsetf(3, ECL_SYM("FIND-CLASS",945), T0, ecl_make_fixnum(1));
 }
  ecl_cmp_defun(VV[27]);                          /*  CLASSP          */
  ecl_cmp_defun(VV[28]);                          /*  INSTALL-METHOD  */
  ecl_cmp_defun(VV[29]);                          /*  WRAPPED-METHOD-FUNCTION */
  ecl_cmp_defun(VV[30]);                          /*  ENSURE-GENERIC-FUNCTION */
  ecl_cmp_defun(VV[32]);                          /*  (SETF GENERIC-FUNCTION-NAME) */
  ecl_cmp_defun(VV[34]);                          /*  DEFAULT-DISPATCH */
  ecl_cmp_defun(VV[36]);                          /*  COMPUTE-DISCRIMINATING-FUNCTION */
  ecl_cmp_defun(VV[37]);                          /*  SET-GENERIC-FUNCTION-DISPATCH */
  (void)0; /* No entry created for STD-COMPUTE-APPLICABLE-METHODS */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  T0 = (ECL_SYM("STD-COMPUTE-APPLICABLE-METHODS",1630)->symbol.gfdef);
  si_fset(2, ECL_SYM("COMPUTE-APPLICABLE-METHODS",938), T0);
 }
  (void)0; /* No entry created for APPLICABLE-METHOD-LIST */
  ecl_cmp_defun(VV[38]);                          /*  STD-COMPUTE-APPLICABLE-METHODS-USING-CLASSES */
  ecl_cmp_defun(VV[39]);                          /*  SORT-APPLICABLE-METHODS */
  (void)0; /* No entry created for COMPARE-METHODS */
  (void)0; /* No entry created for COMPARE-SPECIALIZERS-LISTS */
  (void)0; /* No entry created for FAST-SUBTYPEP */
  (void)0; /* No entry created for COMPARE-SPECIALIZERS */
  ecl_cmp_defun(VV[40]);                          /*  COMPUTE-G-F-SPEC-LIST */
  ecl_cmp_defun(VV[41]);                          /*  PRINT-OBJECT    */
}
