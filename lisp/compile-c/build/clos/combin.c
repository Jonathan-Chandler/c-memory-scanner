/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CLOS;COMBIN.LSP                                   */
#include <ecl/ecl-cmp.h>
#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/clos/combin.eclh"
/*      function definition for EFFECTIVE-METHOD-FUNCTION             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1effective_method_function(cl_narg narg, cl_object v1form, ...)
{
 cl_object T0, T1, T2, T3, T4;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2top_level;
  va_list args; va_start(args,v1form);
  {
   int i = 1;
   if (i >= narg) {
    v2top_level = ECL_NIL;
   } else {
    i++;
    v2top_level = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v3first;
   v3first = ECL_NIL;
   if (Null(cl_functionp(v1form))) { goto L3; }
   value0 = v1form;
   cl_env_copy->nvalues = 1;
   return value0;
L3:;
   if (Null(ecl_function_dispatch(cl_env_copy,VV[67])(1, v1form) /*  METHOD-P */)) { goto L5; }
   value0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("METHOD-FUNCTION",1592))(1, v1form) /*  METHOD-FUNCTION */;
   return value0;
L5:;
   if (!(ECL_ATOM(v1form))) { goto L7; }
   value0 = cl_error(2, VV[0], v1form);
   return value0;
L7:;
   v3first = ecl_car(v1form);
   if (!((v3first)==(ECL_SYM("MAKE-METHOD",955)))) { goto L9; }
   T0 = ecl_cadr(v1form);
   T1 = cl_list(4, ECL_SYM("LAMBDA",454), VV[1], VV[2], T0);
   value0 = si_coerce_to_function(T1);
   return value0;
L9:;
   if (!((v3first)==(ECL_SYM("CALL-METHOD",932)))) { goto L12; }
   T0 = ecl_cadr(v1form);
   T1 = L1effective_method_function(1, T0);
   {
    cl_object v4;
    v4 = (VV[5]->symbol.gfdef);
    {
     cl_object v5;
     cl_object v6;
     cl_object v7;
     v5 = ecl_caddr(v1form);
     v6 = ECL_NIL;
     {
      cl_object v8;
      v8 = v5;
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
L23:;
      if (!(ecl_endp(v7))) { goto L25; }
      goto L24;
L25:;
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
       T3 = v10;
      }
      T4 = ecl_function_dispatch(cl_env_copy,v4)(1, v6);
      v9 = ecl_list1(T4);
      (ECL_CONS_CDR(T3)=v9,T3);
      goto L23;
L24:;
      T2 = ecl_cdr(v8);
      goto L14;
     }
    }
   }
L14:;
   value0 = L3combine_method_functions(T1, T2);
   return value0;
L12:;
   if (Null(v2top_level)) { goto L41; }
   T0 = cl_list(4, ECL_SYM("LAMBDA",454), VV[3], VV[4], v1form);
   value0 = si_coerce_to_function(T0);
   return value0;
L41:;
   value0 = cl_error(2, VV[0], v1form);
   return value0;
  }
 }
}
/*      function definition for COMBINE-METHOD-FUNCTIONS              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3combine_method_functions(cl_object v1method, cl_object v2rest_methods)
{
 cl_object env0 = ECL_NIL;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v1method,env0);              /*  METHOD          */
  CLV1 = env0 = CONS(v2rest_methods,env0);        /*  REST-METHODS    */
  {
   cl_object v3;
   v3 = ecl_make_cclosure_va((cl_objectfn)LC2__lambda8,env0,Cblock,2);
   value0 = v3;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      closure LAMBDA8                                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC2__lambda8(cl_narg narg, cl_object v1_combined_method_args_, cl_object v2no_next_methods, ...)
{
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV1 = env0;                                     /*  REST-METHODS    */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=2)) FEwrong_num_arguments_anonym();
 {
  ecl_bds_bind(cl_env_copy,ECL_SYM(".COMBINED-METHOD-ARGS.",1534),v1_combined_method_args_); /*  .COMBINED-METHOD-ARGS. */
TTL:
  value0 = ecl_function_dispatch(cl_env_copy,ECL_CONS_CAR(CLV0))(2, ecl_symbol_value(ECL_SYM(".COMBINED-METHOD-ARGS.",1534)), ECL_CONS_CAR(CLV1));
  ecl_bds_unwind1(cl_env_copy);
  return value0;
 }
 }
}
/*      local function CALL-METHOD                                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC4call_method(cl_object v1, cl_object v2)
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
   cl_object v4method;
   cl_object v5rest_methods;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[69])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4method = v6;
   }
   if (Null(v3)) { goto L9; }
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5rest_methods = v6;
    goto L8;
   }
L9:;
   v5rest_methods = ECL_NIL;
L8:;
   if (Null(v3)) { goto L14; }
   ecl_function_dispatch(cl_env_copy,VV[70])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L14:;
   T0 = L1effective_method_function(1, v4method);
   if (Null(v5rest_methods)) { goto L18; }
   {
    cl_object v6;
    v6 = (VV[5]->symbol.gfdef);
    {
     cl_object v7;
     cl_object v8;
     v7 = ECL_NIL;
     {
      cl_object v9;
      v9 = v5rest_methods;
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
L27:;
      if (!(ecl_endp(v8))) { goto L29; }
      goto L28;
L29:;
      v7 = _ecl_car(v8);
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
       T2 = v11;
      }
      T3 = ecl_function_dispatch(cl_env_copy,v6)(1, v7);
      v10 = ecl_list1(T3);
      (ECL_CONS_CDR(T2)=v10,T2);
      goto L27;
L28:;
      T1 = ecl_cdr(v9);
      goto L16;
     }
    }
   }
L18:;
   T1 = ECL_NIL;
   goto L16;
L16:;
   T2 = cl_list(2, ECL_SYM("QUOTE",681), T1);
   value0 = cl_list(4, ECL_SYM("FUNCALL",396), T0, ECL_SYM(".COMBINED-METHOD-ARGS.",1534), T2);
   return value0;
  }
 }
}
/*      function definition for CALL-NEXT-METHOD                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L5call_next_method(cl_narg narg, ...)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  cl_object v1args;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  v1args = cl_grab_rest_args(args);
  ecl_va_end(args);
  if ((ecl_symbol_value(ECL_SYM("*NEXT-METHODS*",1536)))!=ECL_NIL) { goto L1; }
  cl_error(1, VV[7]);
L1:;
  T0 = ecl_car(ecl_symbol_value(ECL_SYM("*NEXT-METHODS*",1536)));
  value0 = v1args;
  if ((value0)!=ECL_NIL) { goto L6; }
  T1 = ecl_symbol_value(ECL_SYM(".COMBINED-METHOD-ARGS.",1534));
  goto L4;
L6:;
  T1 = value0;
  goto L4;
L4:;
  T2 = ecl_cdr(ecl_symbol_value(ECL_SYM("*NEXT-METHODS*",1536)));
  value0 = ecl_function_dispatch(cl_env_copy,T0)(2, T1, T2);
  return value0;
 }
}
/*      function definition for NEXT-METHOD-P                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L6next_method_p()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_symbol_value(ECL_SYM("*NEXT-METHODS*",1536));
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function LAMBDA27                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC7__lambda27(cl_object v1, cl_object v2)
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
   if (Null(v3)) { goto L6; }
   T0 = CONS(ECL_SYM("LIST",483),v3);
   goto L5;
L6:;
   T0 = ECL_SYM(".COMBINED-METHOD-ARGS.",1534);
L5:;
   T1 = cl_list(4, ECL_SYM("FUNCALL",396), VV[10], T0, VV[11]);
   value0 = cl_list(4, ECL_SYM("IF",948), ECL_SYM("*NEXT-METHODS*",1536), T1, VV[12]);
   return value0;
  }
 }
}
/*      local function LAMBDA31                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC8__lambda31(cl_object v1, cl_object v2)
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
   if (Null(v3)) { goto L5; }
   ecl_function_dispatch(cl_env_copy,VV[70])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L5:;
   value0 = ECL_SYM("*NEXT-METHODS*",1536);
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for ERROR-QUALIFIER                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L9error_qualifier(cl_object v1m, cl_object v2qualifier)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_error(3, VV[13], v1m, v2qualifier);
  return value0;
 }
}
/*      function definition for STANDARD-MAIN-EFFECTIVE-METHOD        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L11standard_main_effective_method(cl_object v1before, cl_object v2primary, cl_object v3after)
{
 cl_object env0 = ECL_NIL;
 cl_object CLV0, CLV1, CLV2;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v1before,env0);              /*  BEFORE          */
  CLV1 = env0 = CONS(v2primary,env0);             /*  PRIMARY         */
  CLV2 = env0 = CONS(v3after,env0);               /*  AFTER           */
  {
   cl_object v4;
   v4 = ecl_make_cclosure_va((cl_objectfn)LC10__lambda32,env0,Cblock,2);
   value0 = v4;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      closure LAMBDA32                                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC10__lambda32(cl_narg narg, cl_object v1_combined_method_args_, cl_object v2no_next_method, ...)
{
 cl_object T0, T1;
 cl_object CLV0, CLV1, CLV2;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV2 = env0;                                     /*  AFTER           */
 CLV1 = _ecl_cdr(CLV2);
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=2)) FEwrong_num_arguments_anonym();
 {
  ecl_bds_bind(cl_env_copy,ECL_SYM(".COMBINED-METHOD-ARGS.",1534),v1_combined_method_args_); /*  .COMBINED-METHOD-ARGS. */
TTL:
  {
   cl_object v3;
   v3 = ECL_CONS_CAR(CLV0);
   goto L5;
L4:;
   {
    cl_object v4i;
    v4i = ecl_car(v3);
    ecl_function_dispatch(cl_env_copy,v4i)(2, ecl_symbol_value(ECL_SYM(".COMBINED-METHOD-ARGS.",1534)), ECL_NIL);
   }
   v3 = ecl_cdr(v3);
L5:;
   if (Null(v3)) { goto L12; }
   goto L4;
L12:;
  }
  if (Null(ECL_CONS_CAR(CLV2))) { goto L14; }
  {
   struct ecl_stack_frame _ecl_inner_frame_aux;
   cl_object _ecl_inner_frame = ecl_stack_frame_open(cl_env_copy,(cl_object)&_ecl_inner_frame_aux,0);
   {
    cl_object v3;
    v3 = _ecl_inner_frame;
    T0 = ecl_car(ECL_CONS_CAR(CLV1));
    T1 = ecl_cdr(ECL_CONS_CAR(CLV1));
    cl_env_copy->values[0] = ecl_function_dispatch(cl_env_copy,T0)(2, ecl_symbol_value(ECL_SYM(".COMBINED-METHOD-ARGS.",1534)), T1);
    ecl_stack_frame_push_values(v3);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    {
     cl_object v4;
     v4 = ECL_CONS_CAR(CLV2);
     goto L25;
L24:;
     {
      cl_object v5i;
      v5i = ecl_car(v4);
      ecl_function_dispatch(cl_env_copy,v5i)(2, ecl_symbol_value(ECL_SYM(".COMBINED-METHOD-ARGS.",1534)), ECL_NIL);
     }
     v4 = ecl_cdr(v4);
L25:;
     if (Null(v4)) { goto L32; }
     goto L24;
L32:;
    }cl_env_copy->values[0]=ecl_stack_frame_pop_values(v3);
    value0 = cl_env_copy->values[0];
   }
   ecl_stack_frame_close(_ecl_inner_frame);
  }
  ecl_bds_unwind1(cl_env_copy);
  return value0;
L14:;
  T0 = ecl_car(ECL_CONS_CAR(CLV1));
  T1 = ecl_cdr(ECL_CONS_CAR(CLV1));
  value0 = ecl_function_dispatch(cl_env_copy,T0)(2, ecl_symbol_value(ECL_SYM(".COMBINED-METHOD-ARGS.",1534)), T1);
  ecl_bds_unwind1(cl_env_copy);
  return value0;
 }
 }
}
/*      function definition for STANDARD-COMPUTE-EFFECTIVE-METHOD     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L13standard_compute_effective_method(cl_object v1gf, cl_object v2methods)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v1gf,env0);                  /*  GF              */
  {
   cl_object v3before;
   cl_object v4primary;
   cl_object v5after;
   cl_object v6around;
   v3before = ECL_NIL;
   v4primary = ECL_NIL;
   v5after = ECL_NIL;
   v6around = ECL_NIL;
   {
    cl_object v7;
    v7 = v2methods;
    goto L9;
L8:;
    {
     cl_object v8m;
     v8m = ecl_car(v7);
     {
      cl_object v9qualifiers;
      cl_object v10f;
      v9qualifiers = ecl_instance_ref((v8m),(3));
      v10f = ecl_instance_ref((v8m),(4));
      if (!(v9qualifiers==ECL_NIL)) { goto L16; }
      v4primary = CONS(v10f,v4primary);
      goto L13;
L16:;
      if (Null(ecl_cdr(v9qualifiers))) { goto L19; }
      L9error_qualifier(v8m, v9qualifiers);
      goto L13;
L19:;
      v9qualifiers = ecl_car(v9qualifiers);
      if (!((v9qualifiers)==(VV[14]))) { goto L21; }
      v3before = CONS(v10f,v3before);
      goto L13;
L21:;
      if (!((v9qualifiers)==(VV[15]))) { goto L25; }
      v5after = CONS(v10f,v5after);
      goto L13;
L25:;
      if (!((v9qualifiers)==(VV[16]))) { goto L28; }
      v6around = CONS(v10f,v6around);
      goto L13;
L28:;
      L9error_qualifier(v8m, v9qualifiers);
     }
L13:;
    }
    v7 = ecl_cdr(v7);
L9:;
    if (Null(v7)) { goto L33; }
    goto L8;
L33:;
   }
   if (!(v4primary==ECL_NIL)) { goto L35; }
   {
    cl_object v7;
    v7 = ecl_make_cclosure_va((cl_objectfn)LC12__lambda68,env0,Cblock,0);
    value0 = v7;
    cl_env_copy->nvalues = 1;
    return value0;
   }
L35:;
   v4primary = cl_nreverse(v4primary);
   v3before = cl_nreverse(v3before);
   if (Null(v6around)) { goto L41; }
   {
    cl_object v7main;
    if ((v3before)!=ECL_NIL) { goto L46; }
    if (Null(v5after)) { goto L44; }
    goto L45;
L46:;
L45:;
    T0 = L11standard_main_effective_method(v3before, v4primary, v5after);
    v7main = ecl_list1(T0);
    goto L43;
L44:;
    v7main = v4primary;
L43:;
    v6around = cl_nreverse(v6around);
    T0 = ecl_car(v6around);
    T1 = ecl_cdr(v6around);
    T2 = ecl_nconc(T1,v7main);
    value0 = L3combine_method_functions(T0, T2);
    return value0;
   }
L41:;
   if ((v3before)!=ECL_NIL) { goto L52; }
   if (Null(v5after)) { goto L50; }
   goto L51;
L52:;
L51:;
   value0 = L11standard_main_effective_method(v3before, v4primary, v5after);
   return value0;
L50:;
   T0 = ecl_car(v4primary);
   T1 = ecl_cdr(v4primary);
   value0 = L3combine_method_functions(T0, T1);
   return value0;
  }
 }
}
/*      closure LAMBDA68                                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC12__lambda68(cl_narg narg, ...)
{
 cl_object CLV0;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV0 = env0;                                     /*  GF              */
 { /* ... closure scanning finished */
 {
  cl_object v1args;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  v1args = cl_grab_rest_args(args);
  ecl_va_end(args);
  value0 = cl_apply(3, VV[17], ECL_CONS_CAR(CLV0), v1args);
  return value0;
 }
 }
}
/*      function definition for SEARCH-METHOD-COMBINATION             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L14search_method_combination(cl_object volatile v1name)
{
 cl_object T0;
 cl_object volatile env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   volatile cl_object v2;
   volatile cl_object v3;
   volatile cl_fixnum v4;
   v2 = ecl_symbol_value(VV[19]);
   v3 = mp_lock_owner(v2);
   v4 = ecl_fixnum(mp_lock_count(v2));
   {
    struct ecl_stack_frame _ecl_inner_frame_aux;
    volatile cl_object _ecl_inner_frame = ecl_stack_frame_open(cl_env_copy,(cl_object)&_ecl_inner_frame_aux,0);
    {
     volatile cl_object v5;
     v5 = _ecl_inner_frame;
     {
      volatile cl_object v6;
      v6 = ecl_symbol_value(ECL_SYM("*INTERRUPTS-ENABLED*",7));
      ecl_bds_bind(cl_env_copy,ECL_SYM("*INTERRUPTS-ENABLED*",7),ECL_NIL); /*  *INTERRUPTS-ENABLED* */
      ecl_bds_bind(cl_env_copy,ECL_SYM("*ALLOW-WITH-INTERRUPTS*",1793),ECL_NIL); /*  *ALLOW-WITH-INTERRUPTS* */
      {
       volatile bool unwinding = FALSE;
       cl_index v7=ECL_STACK_INDEX(cl_env_copy),v8;
       ecl_frame_ptr next_fr;
       ecl_frs_push(cl_env_copy,ECL_PROTECT_TAG);
       if (__ecl_frs_push_result) {
         unwinding = TRUE; next_fr=cl_env_copy->nlj_fr;
       } else {
       ecl_bds_bind(cl_env_copy,ECL_SYM("*INTERRUPTS-ENABLED*",7),v6); /*  *INTERRUPTS-ENABLED* */
       mp_get_lock(1, v2);
       value0 = ecl_gethash_safe(v1name,ecl_symbol_value(VV[20]),ECL_NIL);
       if ((value0)!=ECL_NIL) { goto L12; }
       cl_env_copy->values[0] = cl_error(2, VV[21], v1name);
       ecl_bds_unwind1(cl_env_copy);
       goto L9;
L12:;
       cl_env_copy->values[0] = value0;
       cl_env_copy->nvalues = 1;
       ecl_bds_unwind1(cl_env_copy);
       goto L9;
L9:;
       }
       ecl_frs_pop(cl_env_copy);
       v8=ecl_stack_push_values(cl_env_copy);
       {
        cl_object v9;
        v9 = ecl_symbol_value(ECL_SYM("*CURRENT-PROCESS*",1432));
        T0 = mp_lock_owner(v2);
        if (!((v9)==(T0))) { goto L14; }
        if (!((v3)==(v9))) { goto L18; }
        {
         cl_fixnum v10;
         v10 = ((v2)->lock.counter);
         if (!((v10)>(v4))) { goto L14; }
         goto L16;
        }
L18:;
L16:;
        mp_giveup_lock(v2);
       }
L14:;
       ecl_stack_pop_values(cl_env_copy,v8);
       if (unwinding) ecl_unwind(cl_env_copy,next_fr);
       ECL_STACK_SET_INDEX(cl_env_copy,v7);
       ecl_bds_unwind1(cl_env_copy);
       ecl_bds_unwind1(cl_env_copy);
      }
     }
     ecl_stack_frame_push_values(v5);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     if (Null(ecl_symbol_value(ECL_SYM("*INTERRUPTS-ENABLED*",7)))) { goto L20; }
     si_check_pending_interrupts();
L20:;cl_env_copy->values[0]=ecl_stack_frame_pop_values(v5);
     value0 = cl_env_copy->values[0];
    }
    ecl_stack_frame_close(_ecl_inner_frame);
   }
   return value0;
  }
 }
}
/*      function definition for INSTALL-METHOD-COMBINATION            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L15install_method_combination(cl_object volatile v1name, cl_object volatile v2function)
{
 cl_object T0;
 cl_object volatile env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   volatile cl_object v3;
   volatile cl_object v4;
   volatile cl_fixnum v5;
   v3 = ecl_symbol_value(VV[19]);
   v4 = mp_lock_owner(v3);
   v5 = ecl_fixnum(mp_lock_count(v3));
   {
    struct ecl_stack_frame _ecl_inner_frame_aux;
    volatile cl_object _ecl_inner_frame = ecl_stack_frame_open(cl_env_copy,(cl_object)&_ecl_inner_frame_aux,0);
    {
     volatile cl_object v6;
     v6 = _ecl_inner_frame;
     {
      volatile cl_object v7;
      v7 = ecl_symbol_value(ECL_SYM("*INTERRUPTS-ENABLED*",7));
      ecl_bds_bind(cl_env_copy,ECL_SYM("*INTERRUPTS-ENABLED*",7),ECL_NIL); /*  *INTERRUPTS-ENABLED* */
      ecl_bds_bind(cl_env_copy,ECL_SYM("*ALLOW-WITH-INTERRUPTS*",1793),ECL_NIL); /*  *ALLOW-WITH-INTERRUPTS* */
      {
       volatile bool unwinding = FALSE;
       cl_index v8=ECL_STACK_INDEX(cl_env_copy),v9;
       ecl_frame_ptr next_fr;
       ecl_frs_push(cl_env_copy,ECL_PROTECT_TAG);
       if (__ecl_frs_push_result) {
         unwinding = TRUE; next_fr=cl_env_copy->nlj_fr;
       } else {
       ecl_bds_bind(cl_env_copy,ECL_SYM("*INTERRUPTS-ENABLED*",7),v7); /*  *INTERRUPTS-ENABLED* */
       mp_get_lock(1, v3);
       cl_env_copy->values[0] = si_hash_set(v1name, ecl_symbol_value(VV[20]), v2function);
       ecl_bds_unwind1(cl_env_copy);
       }
       ecl_frs_pop(cl_env_copy);
       v9=ecl_stack_push_values(cl_env_copy);
       {
        cl_object v10;
        v10 = ecl_symbol_value(ECL_SYM("*CURRENT-PROCESS*",1432));
        T0 = mp_lock_owner(v3);
        if (!((v10)==(T0))) { goto L12; }
        if (!((v4)==(v10))) { goto L16; }
        {
         cl_fixnum v11;
         v11 = ((v3)->lock.counter);
         if (!((v11)>(v5))) { goto L12; }
         goto L14;
        }
L16:;
L14:;
        mp_giveup_lock(v3);
       }
L12:;
       ecl_stack_pop_values(cl_env_copy,v9);
       if (unwinding) ecl_unwind(cl_env_copy,next_fr);
       ECL_STACK_SET_INDEX(cl_env_copy,v8);
       ecl_bds_unwind1(cl_env_copy);
       ecl_bds_unwind1(cl_env_copy);
      }
     }
     ecl_stack_frame_push_values(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     if (Null(ecl_symbol_value(ECL_SYM("*INTERRUPTS-ENABLED*",7)))) { goto L18; }
     si_check_pending_interrupts();
L18:;cl_env_copy->values[0]=ecl_stack_frame_pop_values(v6);
    }
    ecl_stack_frame_close(_ecl_inner_frame);
   }
  }
  value0 = v1name;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for MAKE-METHOD-COMBINATION               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L16make_method_combination(cl_object v1name, cl_object v2compiler, cl_object v3options)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4_class;
   cl_object v5o;
   v4_class = cl_find_class(1, ECL_SYM("METHOD-COMBINATION",958));
   v5o = si_allocate_raw_instance(ECL_NIL, v4_class, ecl_make_fixnum(3));
   si_instance_set(v5o, ecl_make_fixnum(0), v1name);
   si_instance_set(v5o, ecl_make_fixnum(1), v2compiler);
   si_instance_set(v5o, ecl_make_fixnum(2), v3options);
   if (Null(v4_class)) { goto L6; }
   si_instance_sig_set(v5o);
L6:;
   value0 = v5o;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for FIND-METHOD-COMBINATION               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L17find_method_combination(cl_object v1gf, cl_object v2method_combination_type_name, cl_object v3method_combination_options)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = L14search_method_combination(v2method_combination_type_name);
  value0 = L16make_method_combination(v2method_combination_type_name, T0, v3method_combination_options);
  return value0;
 }
}
/*      function definition for DEFINE-SIMPLE-METHOD-COMBINATION      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L18define_simple_method_combination(cl_narg narg, cl_object v1name, ...)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2documentation;
  cl_object v3identity_with_one_argument;
  cl_object v4operator;
  ecl_va_list args; ecl_va_start(args,v1name,narg,1);
  {
   cl_object keyvars[6];
   cl_parse_key(args,3,L18define_simple_method_combinationkeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   v2documentation = keyvars[0];
   v3identity_with_one_argument = keyvars[1];
   if (Null(keyvars[5])) {
    v4operator = v1name;
   } else {
    v4operator = keyvars[2];
   }
  }
  T0 = ecl_list1(v1name);
  T1 = cl_listX(3, VV[28], T0, VV[29]);
  T2 = cl_list(2, VV[27], T1);
  T3 = cl_list(2, ECL_SYM("QUOTE",681), v4operator);
  T4 = cl_list(3, ECL_SYM("LIST*",484), T3, VV[31]);
  T5 = cl_list(2, VV[30], T4);
  T6 = ecl_list1(T5);
  if (Null(v3identity_with_one_argument)) { goto L3; }
  T7 = VV[33];
  goto L2;
L3:;
  T7 = ECL_T;
L2:;
  T8 = cl_list(2, T7, VV[30]);
  T9 = cl_list(4, ECL_SYM("COND",249), VV[32], T8, VV[34]);
  T10 = cl_list(3, ECL_SYM("LET",479), T6, T9);
  value0 = cl_list(6, ECL_SYM("DEFINE-METHOD-COMBINATION",941), v1name, VV[26], T2, v2documentation, T10);
  return value0;
 }
}
/*      function definition for DEFINE-COMPLEX-METHOD-COMBINATION     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L20define_complex_method_combination(cl_object v1form)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25;
 volatile cl_object lex0[1];
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  lex0[0] = v1form;                               /*  FORM            */
TTL:
  {
   cl_object v2;
   cl_object v3name;
   cl_object v4lambda_list;
   cl_object v5method_groups;
   cl_object v6body;
   cl_object v7group_names;
   cl_object v8group_checks;
   cl_object v9group_after;
   cl_object v10generic_function;
   cl_object v11decls;
   cl_object v12documentation;
   v2 = lex0[0];
   if (!(v2==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[69])(1, lex0[0]) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v13;
    v13 = ecl_car(v2);
    v2 = ecl_cdr(v2);
    v3name = v13;
   }
   if (!(v2==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[69])(1, lex0[0]) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v13;
    v13 = ecl_car(v2);
    v2 = ecl_cdr(v2);
    v4lambda_list = v13;
   }
   if (!(v2==ECL_NIL)) { goto L15; }
   ecl_function_dispatch(cl_env_copy,VV[69])(1, lex0[0]) /*  DM-TOO-FEW-ARGUMENTS */;
L15:;
   {
    cl_object v13;
    v13 = ecl_car(v2);
    v2 = ecl_cdr(v2);
    v5method_groups = v13;
   }
   v6body = v2;
   v7group_names = ECL_NIL;
   v8group_checks = ECL_NIL;
   v9group_after = ECL_NIL;
   v10generic_function = VV[37];
   v11decls = ECL_NIL;
   v12documentation = ECL_NIL;
   if (ECL_SYMBOLP(v3name)) { goto L27; }
   LC19syntax_error(lex0);
L27:;
   {
    cl_object v13x;
    v13x = ecl_car(v6body);
    if (!(ECL_CONSP(v13x))) { goto L29; }
    T0 = ecl_car(v13x);
    if (!(ecl_eql(T0,VV[38]))) { goto L29; }
    cl_error(1, VV[39]);
   }
L29:;
   {
    cl_object v13x;
    v13x = ecl_car(v6body);
    if (!(ECL_CONSP(v13x))) { goto L33; }
    T0 = ecl_car(v13x);
    if (!(ecl_eql(T0,VV[40]))) { goto L33; }
    v6body = ecl_cdr(v6body);
    v10generic_function = ecl_cadr(v13x);
    if (ECL_SYMBOLP(v10generic_function)) { goto L33; }
    LC19syntax_error(lex0);
   }
L33:;
   value0 = ecl_function_dispatch(cl_env_copy,VV[82])(2, v6body, ECL_T) /*  FIND-DECLARATIONS */;
   {
    const int v13 = cl_env_copy->nvalues;
    v11decls = value0;
    cl_object v14;
    v14 = (v13<=1)? ECL_NIL : cl_env_copy->values[1];
    v6body = v14;
    v14 = (v13<=2)? ECL_NIL : cl_env_copy->values[2];
    v12documentation = v14;
   }
   {
    cl_object v13;
    v13 = v5method_groups;
    goto L47;
L46:;
    {
     cl_object v14group;
     v14group = ecl_car(v13);
     {
      cl_object v15;
      cl_object v16group_name;
      cl_object v17predicate;
      cl_object v18;
      cl_object v19;
      cl_object v20order;
      cl_object v21;
      cl_object v22required;
      v15 = v14group;
      if (!(v15==ECL_NIL)) { goto L54; }
      ecl_function_dispatch(cl_env_copy,VV[69])(1, v14group) /*  DM-TOO-FEW-ARGUMENTS */;
L54:;
      {
       cl_object v23;
       v23 = ecl_car(v15);
       v15 = ecl_cdr(v15);
       v16group_name = v23;
      }
      if (!(v15==ECL_NIL)) { goto L60; }
      ecl_function_dispatch(cl_env_copy,VV[69])(1, v14group) /*  DM-TOO-FEW-ARGUMENTS */;
L60:;
      {
       cl_object v23;
       v23 = ecl_car(v15);
       v15 = ecl_cdr(v15);
       v17predicate = v23;
      }
      v18 = ecl_function_dispatch(cl_env_copy,VV[83])(2, v15, ECL_SYM("DESCRIPTION",990)) /*  SEARCH-KEYWORD */;
      v19 = ecl_function_dispatch(cl_env_copy,VV[83])(2, v15, ECL_SYM("ORDER",1007)) /*  SEARCH-KEYWORD */;
      if (!((v19)==(ECL_SYM("MISSING-KEYWORD",2015)))) { goto L68; }
      v20order = VV[41];
      goto L67;
L68:;
      v20order = v19;
L67:;
      v21 = ecl_function_dispatch(cl_env_copy,VV[83])(2, v15, ECL_SYM("REQUIRED",1010)) /*  SEARCH-KEYWORD */;
      if (!((v21)==(ECL_SYM("MISSING-KEYWORD",2015)))) { goto L72; }
      v22required = ECL_NIL;
      goto L71;
L72:;
      v22required = v21;
L71:;
      ecl_function_dispatch(cl_env_copy,VV[84])(2, v15, VV[42]) /*  CHECK-KEYWORD */;
      if (!(ECL_SYMBOLP(v16group_name))) { goto L76; }
      v7group_names = CONS(v16group_name,v7group_names);
      goto L75;
L76:;
      LC19syntax_error(lex0);
L75:;
      {
       cl_object v23condition;
       if (!((v17predicate)==(ECL_SYM("*",20)))) { goto L81; }
       v23condition = ECL_T;
       goto L80;
L81:;
       if (Null(v17predicate)) { goto L83; }
       if (!(ECL_SYMBOLP(v17predicate))) { goto L83; }
       v23condition = cl_list(2, v17predicate, VV[43]);
       goto L80;
L83:;
       {
        cl_object v24;
        if (!(ECL_LISTP(v17predicate))) { goto L88; }
        {
         cl_object v25q;
         cl_object v26p;
         v25q = cl_last(2, v17predicate, ecl_make_fixnum(0));
         T0 = cl_butlast(2, v17predicate, ecl_make_fixnum(0));
         v26p = cl_copy_list(T0);
         T0 = (ECL_SYM("SYMBOLP",849)->symbol.gfdef);
         if (Null(cl_every(2, T0, v26p))) { goto L92; }
         if (!((v25q)==(ECL_SYM("*",20)))) { goto L95; }
         T0 = cl_list(2, ECL_SYM("QUOTE",681), v26p);
         v24 = cl_list(4, ECL_SYM("EVERY",344), VV[44], T0, VV[43]);
         goto L86;
L95:;
         T0 = cl_list(2, ECL_SYM("QUOTE",681), v26p);
         v24 = cl_list(3, ECL_SYM("EQUAL",337), T0, VV[43]);
         goto L86;
L92:;
         v24 = ECL_NIL;
         goto L86;
        }
L88:;
        v24 = ECL_NIL;
        goto L86;
L86:;
        if (Null(v24)) { goto L97; }
        v23condition = v24;
        goto L80;
L97:;
        v23condition = LC19syntax_error(lex0);
       }
L80:;
       T0 = cl_list(3, ECL_SYM("PUSH",679), VV[45], v16group_name);
       T1 = cl_list(2, v23condition, T0);
       v8group_checks = CONS(T1,v8group_checks);
      }
      if (Null(v22required)) { goto L100; }
      T0 = cl_list(2, ECL_SYM("QUOTE",681), v3name);
      T1 = cl_list(4, ECL_SYM("ERROR",339), VV[46], T0, v16group_name);
      T2 = cl_list(3, ECL_SYM("UNLESS",885), v16group_name, T1);
      v9group_after = CONS(T2,v9group_after);
L100:;
      if (!(ecl_eql(v20order,VV[41]))) { goto L103; }
      T0 = cl_list(2, ECL_SYM("NREVERSE",591), v16group_name);
      T1 = cl_list(3, ECL_SYM("SETF",752), v16group_name, T0);
      v9group_after = CONS(T1,v9group_after);
      goto L51;
L103:;
      if (ecl_eql(v20order,VV[47])) { goto L51; }
      {
       cl_object v23order_var;
       v23order_var = cl_gensym(0);
       T0 = cl_list(2, v23order_var, v20order);
       T1 = ecl_list1(T0);
       v7group_names = ecl_append(v7group_names,T1);
       T0 = cl_list(3, ECL_SYM("EQ",335), v23order_var, VV[41]);
       T1 = cl_list(2, ECL_SYM("NREVERSE",591), v16group_name);
       T2 = cl_list(3, ECL_SYM("SETF",752), v16group_name, T1);
       T3 = cl_list(3, ECL_SYM("WHEN",907), T0, T2);
       v9group_after = CONS(T3,v9group_after);
      }
     }
L51:;
    }
    v13 = ecl_cdr(v13);
L47:;
    if (Null(v13)) { goto L113; }
    goto L46;
L113:;
   }
   T0 = ecl_function_dispatch(cl_env_copy,VV[85])(3, v3name, ECL_SYM("METHOD-COMBINATION",958), v12documentation) /*  EXPAND-SET-DOCUMENTATION */;
   T1 = cl_list(2, ECL_SYM("QUOTE",681), v3name);
   T2 = cl_listX(3, v10generic_function, VV[48], v4lambda_list);
   T3 = cl_list(2, ECL_SYM("IGNORABLE",429), v10generic_function);
   T4 = cl_list(2, ECL_SYM("DECLARE",276), T3);
   T5 = cl_nreverse(v8group_checks);
   T6 = cl_list(2, ECL_SYM("QUOTE",681), v3name);
   T7 = cl_list(5, ECL_SYM("INVALID-METHOD-ERROR",950), VV[45], VV[51], VV[43], T6);
   T8 = cl_list(2, ECL_T, T7);
   T9 = ecl_list1(T8);
   T10 = ecl_append(T5,T9);
   T11 = CONS(ECL_SYM("COND",249),T10);
   T12 = cl_list(3, ECL_SYM("LET",479), VV[50], T11);
   T13 = cl_list(3, ECL_SYM("DOLIST",315), VV[49], T12);
   T14 = CONS(ECL_SYM("PROGN",673),v6body);
   T15 = cl_list(3, VV[5], T14, ECL_T);
   T16 = ecl_list1(T15);
   T17 = ecl_append(v9group_after,T16);
   T18 = cl_listX(4, ECL_SYM("LET",479), v7group_names, T13, T17);
   T19 = cl_list(3, ECL_SYM("BLOCK",139), v3name, T18);
   T20 = ecl_list1(T19);
   T21 = ecl_append(v11decls,T20);
   T22 = cl_listX(4, ECL_SYM("LAMBDA",454), T2, T4, T21);
   T23 = cl_list(3, VV[23], T1, T22);
   T24 = ecl_list1(T23);
   T25 = ecl_append(T0,T24);
   value0 = CONS(ECL_SYM("PROGN",673),T25);
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function SYNTAX-ERROR                                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC19syntax_error(volatile cl_object *lex0)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_error(2, VV[36], lex0[0]);
  return value0;
 }
}
/*      local function DEFINE-METHOD-COMBINATION                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC21define_method_combination(cl_object v1, cl_object v2)
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
   cl_object v4name;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[69])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4name = v5;
   }
   if (Null(v3)) { goto L8; }
   T0 = ecl_car(v3);
   if (!(ECL_LISTP(T0))) { goto L8; }
   T0 = CONS(v4name,v3);
   value0 = L20define_complex_method_combination(T0);
   return value0;
L8:;
   T0 = (VV[35]->symbol.gfdef);
   value0 = cl_apply(3, T0, v4name, v3);
   return value0;
  }
 }
}
/*      function definition for METHOD-COMBINATION-ERROR              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_method_combination_error(cl_narg narg, cl_object v1format_control, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2args;
  ecl_va_list args; ecl_va_start(args,v1format_control,narg,1);
  v2args = cl_grab_rest_args(args);
  ecl_va_end(args);
  T0 = (ECL_SYM("FORMAT",389)->symbol.gfdef);
  T1 = cl_apply(4, T0, ECL_NIL, v1format_control, v2args);
  value0 = cl_error(2, VV[53], T1);
  return value0;
 }
}
/*      function definition for INVALID-METHOD-ERROR                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object cl_invalid_method_error(cl_narg narg, cl_object v1method, cl_object v2format_control, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 {
  cl_object v3args;
  ecl_va_list args; ecl_va_start(args,v2format_control,narg,2);
  v3args = cl_grab_rest_args(args);
  ecl_va_end(args);
  T0 = (ECL_SYM("FORMAT",389)->symbol.gfdef);
  T1 = cl_apply(4, T0, ECL_NIL, v2format_control, v3args);
  value0 = cl_error(3, VV[54], v1method, T1);
  return value0;
 }
}
/*      function definition for STD-COMPUTE-EFFECTIVE-METHOD          */
/*      optimize speed 3, debug 1, space 1, safety 0                  */
cl_object clos_std_compute_effective_method(cl_object v1gf, cl_object v2method_combination, cl_object v3applicable_methods)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v4compiler;
  cl_object v5options;
  v4compiler = (v2method_combination)->instance.slots[1];
  v5options = (v2method_combination)->instance.slots[2];
  if (Null(v5options)) { goto L3; }
  value0 = cl_apply(4, v4compiler, v1gf, v3applicable_methods, v5options);
  return value0;
L3:;
  value0 = ecl_function_dispatch(cl_env_copy,v4compiler)(2, v1gf, v3applicable_methods);
  return value0;
 }
}
/*      function definition for COMPUTE-EFFECTIVE-METHOD-FUNCTION     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
cl_object clos_compute_effective_method_function(cl_object v1gf, cl_object v2method_combination, cl_object v3applicable_methods)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4form;
   v4form = ecl_function_dispatch(cl_env_copy,VV[55])(3, v1gf, v2method_combination, v3applicable_methods) /*  COMPUTE-EFFECTIVE-METHOD */;
   {
    cl_object v5aux;
    cl_object v6f;
    v5aux = v4form;
    v6f = ECL_NIL;
    if (!(ECL_LISTP(v5aux))) { goto L4; }
    {
     cl_object v7;
     v7 = v5aux;
     {
      cl_object v8;
      v8 = v7;
      if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
     }
     if (Null(v7)) { goto L13; }
     {
      cl_object v8;
      v8 = ECL_CONS_CDR(v7);
      v5aux = v8;
      v7 = ECL_CONS_CAR(v7);
     }
L13:;
     T0 = v7;
    }
    if (!((T0)==(ECL_SYM("FUNCALL",396)))) { goto L4; }
    {
     cl_object v7;
     v7 = v5aux;
     {
      cl_object v8;
      v8 = v7;
      if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
     }
     if (Null(v7)) { goto L25; }
     {
      cl_object v8;
      v8 = ECL_CONS_CDR(v7);
      v5aux = v8;
      v7 = ECL_CONS_CAR(v7);
     }
L25:;
     v6f = v7;
    }
    if (Null(cl_functionp(v6f))) { goto L4; }
    {
     cl_object v7;
     v7 = v5aux;
     {
      cl_object v8;
      v8 = v7;
      if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
     }
     if (Null(v7)) { goto L37; }
     {
      cl_object v8;
      v8 = ECL_CONS_CDR(v7);
      v5aux = v8;
      v7 = ECL_CONS_CAR(v7);
     }
L37:;
     T0 = v7;
    }
    if (!((T0)==(ECL_SYM(".COMBINED-METHOD-ARGS.",1534)))) { goto L4; }
    {
     cl_object v7;
     v7 = v5aux;
     {
      cl_object v8;
      v8 = v7;
      if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
     }
     if (Null(v7)) { goto L48; }
     {
      cl_object v8;
      v8 = ECL_CONS_CDR(v7);
      v5aux = v8;
      v7 = ECL_CONS_CAR(v7);
     }
L48:;
     T0 = v7;
    }
    if (!((T0)==(ECL_SYM("*NEXT-METHODS*",1536)))) { goto L4; }
    value0 = v6f;
    cl_env_copy->nvalues = 1;
    return value0;
L4:;
    value0 = L1effective_method_function(2, v4form, ECL_T);
    return value0;
   }
  }
 }
}
/*      function definition for COMPUTE-EFFECTIVE-METHOD              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L22compute_effective_method(cl_object v1gf, cl_object v2method_combination, cl_object v3applicable_methods)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = clos_std_compute_effective_method(v1gf, v2method_combination, v3applicable_methods);
  value0 = cl_listX(3, ECL_SYM("FUNCALL",396), T0, VV[1]);
  return value0;
 }
}
/*      local function LAMBDA173                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC24__lambda173(cl_narg narg, cl_object v1_generic_function_, cl_object v2_methods_list_, ...)
{
 cl_object T0, T1, T2, T3, T4, T5;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>3)) FEwrong_num_arguments_anonym();
 {
  cl_object v3order;
  va_list args; va_start(args,v2_methods_list_);
  {
   int i = 2;
   if (i >= narg) {
    v3order = VV[41];
   } else {
    i++;
    v3order = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v4principal;
   cl_object v5around;
   v4principal = ECL_NIL;
   v5around = ECL_NIL;
   {
    cl_object v6;
    v6 = v2_methods_list_;
    goto L8;
L7:;
    {
     cl_object v7_method_;
     v7_method_ = ecl_car(v6);
     {
      cl_object v8_method_qualifiers_;
      v8_method_qualifiers_ = (cl_env_copy->function=(ECL_SYM("METHOD-QUALIFIERS",959)->symbol.gfdef))->cfun.entry(1, v7_method_) /*  METHOD-QUALIFIERS */;
      if (!(ecl_equal(VV[56],v8_method_qualifiers_))) { goto L14; }
      v5around = CONS(v7_method_,v5around);
      goto L12;
L14:;
      if (!(ecl_equal(VV[57],v8_method_qualifiers_))) { goto L17; }
      v4principal = CONS(v7_method_,v4principal);
      goto L12;
L17:;
      cl_invalid_method_error(4, v7_method_, VV[51], v8_method_qualifiers_, ECL_SYM("PROGN",673));
     }
L12:;
    }
    v6 = ecl_cdr(v6);
L8:;
    if (Null(v6)) { goto L22; }
    goto L7;
L22:;
   }
   v4principal = cl_nreverse(v4principal);
   if ((v4principal)!=ECL_NIL) { goto L26; }
   cl_error(3, VV[46], ECL_SYM("PROGN",673), v4principal);
L26:;
   v5around = cl_nreverse(v5around);
   {
    cl_object v6main_effective_method;
    {
     cl_object v7;
     {
      cl_object v8;
      v8 = ecl_make_cfun((cl_objectfn_fixed)LC23__lambda186,ECL_NIL,Cblock,1);
      v7 = v8;
     }
     {
      cl_object v8;
      cl_object v9;
      cl_object v10;
      if (!(ecl_eql(v3order,VV[47]))) { goto L36; }
      v8 = cl_reverse(v4principal);
      goto L35;
L36:;
      v8 = v4principal;
L35:;
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
L44:;
       if (!(ecl_endp(v10))) { goto L46; }
       goto L45;
L46:;
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
       goto L44;
L45:;
       T1 = ecl_cdr(v11);
       goto L33;
      }
     }
    }
L33:;
    v6main_effective_method = CONS(ECL_SYM("PROGN",673),T1);
    if (Null(v5around)) { goto L62; }
    T1 = ecl_car(v5around);
    T2 = ecl_cdr(v5around);
    T3 = cl_list(2, ECL_SYM("MAKE-METHOD",955), v6main_effective_method);
    T4 = ecl_list1(T3);
    T5 = ecl_append(T2,T4);
    T0 = cl_list(3, VV[6], T1, T5);
    goto L31;
L62:;
    if (Null(ecl_cdr(v4principal))) { goto L64; }
    T0 = v6main_effective_method;
    goto L31;
L64:;
    T0 = ecl_cadr(v6main_effective_method);
   }
L31:;
   value0 = L1effective_method_function(2, T0, ECL_T);
   return value0;
  }
 }
}
/*      local function LAMBDA189                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC26__lambda189(cl_narg narg, cl_object v1_generic_function_, cl_object v2_methods_list_, ...)
{
 cl_object T0, T1, T2, T3, T4, T5;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>3)) FEwrong_num_arguments_anonym();
 {
  cl_object v3order;
  va_list args; va_start(args,v2_methods_list_);
  {
   int i = 2;
   if (i >= narg) {
    v3order = VV[41];
   } else {
    i++;
    v3order = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v4principal;
   cl_object v5around;
   v4principal = ECL_NIL;
   v5around = ECL_NIL;
   {
    cl_object v6;
    v6 = v2_methods_list_;
    goto L8;
L7:;
    {
     cl_object v7_method_;
     v7_method_ = ecl_car(v6);
     {
      cl_object v8_method_qualifiers_;
      v8_method_qualifiers_ = (cl_env_copy->function=(ECL_SYM("METHOD-QUALIFIERS",959)->symbol.gfdef))->cfun.entry(1, v7_method_) /*  METHOD-QUALIFIERS */;
      if (!(ecl_equal(VV[56],v8_method_qualifiers_))) { goto L14; }
      v5around = CONS(v7_method_,v5around);
      goto L12;
L14:;
      if (!(ecl_equal(VV[58],v8_method_qualifiers_))) { goto L17; }
      v4principal = CONS(v7_method_,v4principal);
      goto L12;
L17:;
      cl_invalid_method_error(4, v7_method_, VV[51], v8_method_qualifiers_, ECL_SYM("AND",89));
     }
L12:;
    }
    v6 = ecl_cdr(v6);
L8:;
    if (Null(v6)) { goto L22; }
    goto L7;
L22:;
   }
   v4principal = cl_nreverse(v4principal);
   if ((v4principal)!=ECL_NIL) { goto L26; }
   cl_error(3, VV[46], ECL_SYM("AND",89), v4principal);
L26:;
   v5around = cl_nreverse(v5around);
   {
    cl_object v6main_effective_method;
    {
     cl_object v7;
     {
      cl_object v8;
      v8 = ecl_make_cfun((cl_objectfn_fixed)LC25__lambda202,ECL_NIL,Cblock,1);
      v7 = v8;
     }
     {
      cl_object v8;
      cl_object v9;
      cl_object v10;
      if (!(ecl_eql(v3order,VV[47]))) { goto L36; }
      v8 = cl_reverse(v4principal);
      goto L35;
L36:;
      v8 = v4principal;
L35:;
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
L44:;
       if (!(ecl_endp(v10))) { goto L46; }
       goto L45;
L46:;
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
       goto L44;
L45:;
       T1 = ecl_cdr(v11);
       goto L33;
      }
     }
    }
L33:;
    v6main_effective_method = CONS(ECL_SYM("AND",89),T1);
    if (Null(v5around)) { goto L62; }
    T1 = ecl_car(v5around);
    T2 = ecl_cdr(v5around);
    T3 = cl_list(2, ECL_SYM("MAKE-METHOD",955), v6main_effective_method);
    T4 = ecl_list1(T3);
    T5 = ecl_append(T2,T4);
    T0 = cl_list(3, VV[6], T1, T5);
    goto L31;
L62:;
    if (Null(ecl_cdr(v4principal))) { goto L64; }
    T0 = v6main_effective_method;
    goto L31;
L64:;
    T0 = ecl_cadr(v6main_effective_method);
   }
L31:;
   value0 = L1effective_method_function(2, T0, ECL_T);
   return value0;
  }
 }
}
/*      local function LAMBDA205                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC28__lambda205(cl_narg narg, cl_object v1_generic_function_, cl_object v2_methods_list_, ...)
{
 cl_object T0, T1, T2, T3, T4, T5;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>3)) FEwrong_num_arguments_anonym();
 {
  cl_object v3order;
  va_list args; va_start(args,v2_methods_list_);
  {
   int i = 2;
   if (i >= narg) {
    v3order = VV[41];
   } else {
    i++;
    v3order = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v4principal;
   cl_object v5around;
   v4principal = ECL_NIL;
   v5around = ECL_NIL;
   {
    cl_object v6;
    v6 = v2_methods_list_;
    goto L8;
L7:;
    {
     cl_object v7_method_;
     v7_method_ = ecl_car(v6);
     {
      cl_object v8_method_qualifiers_;
      v8_method_qualifiers_ = (cl_env_copy->function=(ECL_SYM("METHOD-QUALIFIERS",959)->symbol.gfdef))->cfun.entry(1, v7_method_) /*  METHOD-QUALIFIERS */;
      if (!(ecl_equal(VV[56],v8_method_qualifiers_))) { goto L14; }
      v5around = CONS(v7_method_,v5around);
      goto L12;
L14:;
      if (!(ecl_equal(VV[59],v8_method_qualifiers_))) { goto L17; }
      v4principal = CONS(v7_method_,v4principal);
      goto L12;
L17:;
      cl_invalid_method_error(4, v7_method_, VV[51], v8_method_qualifiers_, ECL_SYM("MAX",553));
     }
L12:;
    }
    v6 = ecl_cdr(v6);
L8:;
    if (Null(v6)) { goto L22; }
    goto L7;
L22:;
   }
   v4principal = cl_nreverse(v4principal);
   if ((v4principal)!=ECL_NIL) { goto L26; }
   cl_error(3, VV[46], ECL_SYM("MAX",553), v4principal);
L26:;
   v5around = cl_nreverse(v5around);
   {
    cl_object v6main_effective_method;
    {
     cl_object v7;
     {
      cl_object v8;
      v8 = ecl_make_cfun((cl_objectfn_fixed)LC27__lambda218,ECL_NIL,Cblock,1);
      v7 = v8;
     }
     {
      cl_object v8;
      cl_object v9;
      cl_object v10;
      if (!(ecl_eql(v3order,VV[47]))) { goto L36; }
      v8 = cl_reverse(v4principal);
      goto L35;
L36:;
      v8 = v4principal;
L35:;
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
L44:;
       if (!(ecl_endp(v10))) { goto L46; }
       goto L45;
L46:;
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
       goto L44;
L45:;
       T1 = ecl_cdr(v11);
       goto L33;
      }
     }
    }
L33:;
    v6main_effective_method = CONS(ECL_SYM("MAX",553),T1);
    if (Null(v5around)) { goto L62; }
    T1 = ecl_car(v5around);
    T2 = ecl_cdr(v5around);
    T3 = cl_list(2, ECL_SYM("MAKE-METHOD",955), v6main_effective_method);
    T4 = ecl_list1(T3);
    T5 = ecl_append(T2,T4);
    T0 = cl_list(3, VV[6], T1, T5);
    goto L31;
L62:;
    if (Null(ecl_cdr(v4principal))) { goto L64; }
    T0 = v6main_effective_method;
    goto L31;
L64:;
    T0 = ecl_cadr(v6main_effective_method);
   }
L31:;
   value0 = L1effective_method_function(2, T0, ECL_T);
   return value0;
  }
 }
}
/*      local function LAMBDA221                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC30__lambda221(cl_narg narg, cl_object v1_generic_function_, cl_object v2_methods_list_, ...)
{
 cl_object T0, T1, T2, T3, T4, T5;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>3)) FEwrong_num_arguments_anonym();
 {
  cl_object v3order;
  va_list args; va_start(args,v2_methods_list_);
  {
   int i = 2;
   if (i >= narg) {
    v3order = VV[41];
   } else {
    i++;
    v3order = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v4principal;
   cl_object v5around;
   v4principal = ECL_NIL;
   v5around = ECL_NIL;
   {
    cl_object v6;
    v6 = v2_methods_list_;
    goto L8;
L7:;
    {
     cl_object v7_method_;
     v7_method_ = ecl_car(v6);
     {
      cl_object v8_method_qualifiers_;
      v8_method_qualifiers_ = (cl_env_copy->function=(ECL_SYM("METHOD-QUALIFIERS",959)->symbol.gfdef))->cfun.entry(1, v7_method_) /*  METHOD-QUALIFIERS */;
      if (!(ecl_equal(VV[56],v8_method_qualifiers_))) { goto L14; }
      v5around = CONS(v7_method_,v5around);
      goto L12;
L14:;
      if (!(ecl_equal(VV[60],v8_method_qualifiers_))) { goto L17; }
      v4principal = CONS(v7_method_,v4principal);
      goto L12;
L17:;
      cl_invalid_method_error(4, v7_method_, VV[51], v8_method_qualifiers_, ECL_SYM("+",16));
     }
L12:;
    }
    v6 = ecl_cdr(v6);
L8:;
    if (Null(v6)) { goto L22; }
    goto L7;
L22:;
   }
   v4principal = cl_nreverse(v4principal);
   if ((v4principal)!=ECL_NIL) { goto L26; }
   cl_error(3, VV[46], ECL_SYM("+",16), v4principal);
L26:;
   v5around = cl_nreverse(v5around);
   {
    cl_object v6main_effective_method;
    {
     cl_object v7;
     {
      cl_object v8;
      v8 = ecl_make_cfun((cl_objectfn_fixed)LC29__lambda234,ECL_NIL,Cblock,1);
      v7 = v8;
     }
     {
      cl_object v8;
      cl_object v9;
      cl_object v10;
      if (!(ecl_eql(v3order,VV[47]))) { goto L36; }
      v8 = cl_reverse(v4principal);
      goto L35;
L36:;
      v8 = v4principal;
L35:;
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
L44:;
       if (!(ecl_endp(v10))) { goto L46; }
       goto L45;
L46:;
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
       goto L44;
L45:;
       T1 = ecl_cdr(v11);
       goto L33;
      }
     }
    }
L33:;
    v6main_effective_method = CONS(ECL_SYM("+",16),T1);
    if (Null(v5around)) { goto L62; }
    T1 = ecl_car(v5around);
    T2 = ecl_cdr(v5around);
    T3 = cl_list(2, ECL_SYM("MAKE-METHOD",955), v6main_effective_method);
    T4 = ecl_list1(T3);
    T5 = ecl_append(T2,T4);
    T0 = cl_list(3, VV[6], T1, T5);
    goto L31;
L62:;
    if (Null(ecl_cdr(v4principal))) { goto L64; }
    T0 = v6main_effective_method;
    goto L31;
L64:;
    T0 = ecl_cadr(v6main_effective_method);
   }
L31:;
   value0 = L1effective_method_function(2, T0, ECL_T);
   return value0;
  }
 }
}
/*      local function LAMBDA237                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC32__lambda237(cl_narg narg, cl_object v1_generic_function_, cl_object v2_methods_list_, ...)
{
 cl_object T0, T1, T2, T3, T4, T5;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>3)) FEwrong_num_arguments_anonym();
 {
  cl_object v3order;
  va_list args; va_start(args,v2_methods_list_);
  {
   int i = 2;
   if (i >= narg) {
    v3order = VV[41];
   } else {
    i++;
    v3order = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v4principal;
   cl_object v5around;
   v4principal = ECL_NIL;
   v5around = ECL_NIL;
   {
    cl_object v6;
    v6 = v2_methods_list_;
    goto L8;
L7:;
    {
     cl_object v7_method_;
     v7_method_ = ecl_car(v6);
     {
      cl_object v8_method_qualifiers_;
      v8_method_qualifiers_ = (cl_env_copy->function=(ECL_SYM("METHOD-QUALIFIERS",959)->symbol.gfdef))->cfun.entry(1, v7_method_) /*  METHOD-QUALIFIERS */;
      if (!(ecl_equal(VV[56],v8_method_qualifiers_))) { goto L14; }
      v5around = CONS(v7_method_,v5around);
      goto L12;
L14:;
      if (!(ecl_equal(VV[61],v8_method_qualifiers_))) { goto L17; }
      v4principal = CONS(v7_method_,v4principal);
      goto L12;
L17:;
      cl_invalid_method_error(4, v7_method_, VV[51], v8_method_qualifiers_, ECL_SYM("NCONC",583));
     }
L12:;
    }
    v6 = ecl_cdr(v6);
L8:;
    if (Null(v6)) { goto L22; }
    goto L7;
L22:;
   }
   v4principal = cl_nreverse(v4principal);
   if ((v4principal)!=ECL_NIL) { goto L26; }
   cl_error(3, VV[46], ECL_SYM("NCONC",583), v4principal);
L26:;
   v5around = cl_nreverse(v5around);
   {
    cl_object v6main_effective_method;
    {
     cl_object v7;
     {
      cl_object v8;
      v8 = ecl_make_cfun((cl_objectfn_fixed)LC31__lambda250,ECL_NIL,Cblock,1);
      v7 = v8;
     }
     {
      cl_object v8;
      cl_object v9;
      cl_object v10;
      if (!(ecl_eql(v3order,VV[47]))) { goto L36; }
      v8 = cl_reverse(v4principal);
      goto L35;
L36:;
      v8 = v4principal;
L35:;
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
L44:;
       if (!(ecl_endp(v10))) { goto L46; }
       goto L45;
L46:;
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
       goto L44;
L45:;
       T1 = ecl_cdr(v11);
       goto L33;
      }
     }
    }
L33:;
    v6main_effective_method = CONS(ECL_SYM("NCONC",583),T1);
    if (Null(v5around)) { goto L62; }
    T1 = ecl_car(v5around);
    T2 = ecl_cdr(v5around);
    T3 = cl_list(2, ECL_SYM("MAKE-METHOD",955), v6main_effective_method);
    T4 = ecl_list1(T3);
    T5 = ecl_append(T2,T4);
    T0 = cl_list(3, VV[6], T1, T5);
    goto L31;
L62:;
    if (Null(ecl_cdr(v4principal))) { goto L64; }
    T0 = v6main_effective_method;
    goto L31;
L64:;
    T0 = ecl_cadr(v6main_effective_method);
   }
L31:;
   value0 = L1effective_method_function(2, T0, ECL_T);
   return value0;
  }
 }
}
/*      local function LAMBDA253                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC34__lambda253(cl_narg narg, cl_object v1_generic_function_, cl_object v2_methods_list_, ...)
{
 cl_object T0, T1, T2, T3, T4, T5;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>3)) FEwrong_num_arguments_anonym();
 {
  cl_object v3order;
  va_list args; va_start(args,v2_methods_list_);
  {
   int i = 2;
   if (i >= narg) {
    v3order = VV[41];
   } else {
    i++;
    v3order = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v4principal;
   cl_object v5around;
   v4principal = ECL_NIL;
   v5around = ECL_NIL;
   {
    cl_object v6;
    v6 = v2_methods_list_;
    goto L8;
L7:;
    {
     cl_object v7_method_;
     v7_method_ = ecl_car(v6);
     {
      cl_object v8_method_qualifiers_;
      v8_method_qualifiers_ = (cl_env_copy->function=(ECL_SYM("METHOD-QUALIFIERS",959)->symbol.gfdef))->cfun.entry(1, v7_method_) /*  METHOD-QUALIFIERS */;
      if (!(ecl_equal(VV[56],v8_method_qualifiers_))) { goto L14; }
      v5around = CONS(v7_method_,v5around);
      goto L12;
L14:;
      if (!(ecl_equal(VV[62],v8_method_qualifiers_))) { goto L17; }
      v4principal = CONS(v7_method_,v4principal);
      goto L12;
L17:;
      cl_invalid_method_error(4, v7_method_, VV[51], v8_method_qualifiers_, ECL_SYM("APPEND",90));
     }
L12:;
    }
    v6 = ecl_cdr(v6);
L8:;
    if (Null(v6)) { goto L22; }
    goto L7;
L22:;
   }
   v4principal = cl_nreverse(v4principal);
   if ((v4principal)!=ECL_NIL) { goto L26; }
   cl_error(3, VV[46], ECL_SYM("APPEND",90), v4principal);
L26:;
   v5around = cl_nreverse(v5around);
   {
    cl_object v6main_effective_method;
    {
     cl_object v7;
     {
      cl_object v8;
      v8 = ecl_make_cfun((cl_objectfn_fixed)LC33__lambda266,ECL_NIL,Cblock,1);
      v7 = v8;
     }
     {
      cl_object v8;
      cl_object v9;
      cl_object v10;
      if (!(ecl_eql(v3order,VV[47]))) { goto L36; }
      v8 = cl_reverse(v4principal);
      goto L35;
L36:;
      v8 = v4principal;
L35:;
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
L44:;
       if (!(ecl_endp(v10))) { goto L46; }
       goto L45;
L46:;
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
       goto L44;
L45:;
       T1 = ecl_cdr(v11);
       goto L33;
      }
     }
    }
L33:;
    v6main_effective_method = CONS(ECL_SYM("APPEND",90),T1);
    if (Null(v5around)) { goto L62; }
    T1 = ecl_car(v5around);
    T2 = ecl_cdr(v5around);
    T3 = cl_list(2, ECL_SYM("MAKE-METHOD",955), v6main_effective_method);
    T4 = ecl_list1(T3);
    T5 = ecl_append(T2,T4);
    T0 = cl_list(3, VV[6], T1, T5);
    goto L31;
L62:;
    T0 = v6main_effective_method;
   }
L31:;
   value0 = L1effective_method_function(2, T0, ECL_T);
   return value0;
  }
 }
}
/*      local function LAMBDA269                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC36__lambda269(cl_narg narg, cl_object v1_generic_function_, cl_object v2_methods_list_, ...)
{
 cl_object T0, T1, T2, T3, T4, T5;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>3)) FEwrong_num_arguments_anonym();
 {
  cl_object v3order;
  va_list args; va_start(args,v2_methods_list_);
  {
   int i = 2;
   if (i >= narg) {
    v3order = VV[41];
   } else {
    i++;
    v3order = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v4principal;
   cl_object v5around;
   v4principal = ECL_NIL;
   v5around = ECL_NIL;
   {
    cl_object v6;
    v6 = v2_methods_list_;
    goto L8;
L7:;
    {
     cl_object v7_method_;
     v7_method_ = ecl_car(v6);
     {
      cl_object v8_method_qualifiers_;
      v8_method_qualifiers_ = (cl_env_copy->function=(ECL_SYM("METHOD-QUALIFIERS",959)->symbol.gfdef))->cfun.entry(1, v7_method_) /*  METHOD-QUALIFIERS */;
      if (!(ecl_equal(VV[56],v8_method_qualifiers_))) { goto L14; }
      v5around = CONS(v7_method_,v5around);
      goto L12;
L14:;
      if (!(ecl_equal(VV[63],v8_method_qualifiers_))) { goto L17; }
      v4principal = CONS(v7_method_,v4principal);
      goto L12;
L17:;
      cl_invalid_method_error(4, v7_method_, VV[51], v8_method_qualifiers_, ECL_SYM("LIST",483));
     }
L12:;
    }
    v6 = ecl_cdr(v6);
L8:;
    if (Null(v6)) { goto L22; }
    goto L7;
L22:;
   }
   v4principal = cl_nreverse(v4principal);
   if ((v4principal)!=ECL_NIL) { goto L26; }
   cl_error(3, VV[46], ECL_SYM("LIST",483), v4principal);
L26:;
   v5around = cl_nreverse(v5around);
   {
    cl_object v6main_effective_method;
    {
     cl_object v7;
     {
      cl_object v8;
      v8 = ecl_make_cfun((cl_objectfn_fixed)LC35__lambda282,ECL_NIL,Cblock,1);
      v7 = v8;
     }
     {
      cl_object v8;
      cl_object v9;
      cl_object v10;
      if (!(ecl_eql(v3order,VV[47]))) { goto L36; }
      v8 = cl_reverse(v4principal);
      goto L35;
L36:;
      v8 = v4principal;
L35:;
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
L44:;
       if (!(ecl_endp(v10))) { goto L46; }
       goto L45;
L46:;
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
       goto L44;
L45:;
       T1 = ecl_cdr(v11);
       goto L33;
      }
     }
    }
L33:;
    v6main_effective_method = CONS(ECL_SYM("LIST",483),T1);
    if (Null(v5around)) { goto L62; }
    T1 = ecl_car(v5around);
    T2 = ecl_cdr(v5around);
    T3 = cl_list(2, ECL_SYM("MAKE-METHOD",955), v6main_effective_method);
    T4 = ecl_list1(T3);
    T5 = ecl_append(T2,T4);
    T0 = cl_list(3, VV[6], T1, T5);
    goto L31;
L62:;
    T0 = v6main_effective_method;
   }
L31:;
   value0 = L1effective_method_function(2, T0, ECL_T);
   return value0;
  }
 }
}
/*      local function LAMBDA285                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC38__lambda285(cl_narg narg, cl_object v1_generic_function_, cl_object v2_methods_list_, ...)
{
 cl_object T0, T1, T2, T3, T4, T5;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>3)) FEwrong_num_arguments_anonym();
 {
  cl_object v3order;
  va_list args; va_start(args,v2_methods_list_);
  {
   int i = 2;
   if (i >= narg) {
    v3order = VV[41];
   } else {
    i++;
    v3order = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v4principal;
   cl_object v5around;
   v4principal = ECL_NIL;
   v5around = ECL_NIL;
   {
    cl_object v6;
    v6 = v2_methods_list_;
    goto L8;
L7:;
    {
     cl_object v7_method_;
     v7_method_ = ecl_car(v6);
     {
      cl_object v8_method_qualifiers_;
      v8_method_qualifiers_ = (cl_env_copy->function=(ECL_SYM("METHOD-QUALIFIERS",959)->symbol.gfdef))->cfun.entry(1, v7_method_) /*  METHOD-QUALIFIERS */;
      if (!(ecl_equal(VV[56],v8_method_qualifiers_))) { goto L14; }
      v5around = CONS(v7_method_,v5around);
      goto L12;
L14:;
      if (!(ecl_equal(VV[64],v8_method_qualifiers_))) { goto L17; }
      v4principal = CONS(v7_method_,v4principal);
      goto L12;
L17:;
      cl_invalid_method_error(4, v7_method_, VV[51], v8_method_qualifiers_, ECL_SYM("MIN",559));
     }
L12:;
    }
    v6 = ecl_cdr(v6);
L8:;
    if (Null(v6)) { goto L22; }
    goto L7;
L22:;
   }
   v4principal = cl_nreverse(v4principal);
   if ((v4principal)!=ECL_NIL) { goto L26; }
   cl_error(3, VV[46], ECL_SYM("MIN",559), v4principal);
L26:;
   v5around = cl_nreverse(v5around);
   {
    cl_object v6main_effective_method;
    {
     cl_object v7;
     {
      cl_object v8;
      v8 = ecl_make_cfun((cl_objectfn_fixed)LC37__lambda298,ECL_NIL,Cblock,1);
      v7 = v8;
     }
     {
      cl_object v8;
      cl_object v9;
      cl_object v10;
      if (!(ecl_eql(v3order,VV[47]))) { goto L36; }
      v8 = cl_reverse(v4principal);
      goto L35;
L36:;
      v8 = v4principal;
L35:;
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
L44:;
       if (!(ecl_endp(v10))) { goto L46; }
       goto L45;
L46:;
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
       goto L44;
L45:;
       T1 = ecl_cdr(v11);
       goto L33;
      }
     }
    }
L33:;
    v6main_effective_method = CONS(ECL_SYM("MIN",559),T1);
    if (Null(v5around)) { goto L62; }
    T1 = ecl_car(v5around);
    T2 = ecl_cdr(v5around);
    T3 = cl_list(2, ECL_SYM("MAKE-METHOD",955), v6main_effective_method);
    T4 = ecl_list1(T3);
    T5 = ecl_append(T2,T4);
    T0 = cl_list(3, VV[6], T1, T5);
    goto L31;
L62:;
    if (Null(ecl_cdr(v4principal))) { goto L64; }
    T0 = v6main_effective_method;
    goto L31;
L64:;
    T0 = ecl_cadr(v6main_effective_method);
   }
L31:;
   value0 = L1effective_method_function(2, T0, ECL_T);
   return value0;
  }
 }
}
/*      local function LAMBDA301                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC40__lambda301(cl_narg narg, cl_object v1_generic_function_, cl_object v2_methods_list_, ...)
{
 cl_object T0, T1, T2, T3, T4, T5;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>3)) FEwrong_num_arguments_anonym();
 {
  cl_object v3order;
  va_list args; va_start(args,v2_methods_list_);
  {
   int i = 2;
   if (i >= narg) {
    v3order = VV[41];
   } else {
    i++;
    v3order = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v4principal;
   cl_object v5around;
   v4principal = ECL_NIL;
   v5around = ECL_NIL;
   {
    cl_object v6;
    v6 = v2_methods_list_;
    goto L8;
L7:;
    {
     cl_object v7_method_;
     v7_method_ = ecl_car(v6);
     {
      cl_object v8_method_qualifiers_;
      v8_method_qualifiers_ = (cl_env_copy->function=(ECL_SYM("METHOD-QUALIFIERS",959)->symbol.gfdef))->cfun.entry(1, v7_method_) /*  METHOD-QUALIFIERS */;
      if (!(ecl_equal(VV[56],v8_method_qualifiers_))) { goto L14; }
      v5around = CONS(v7_method_,v5around);
      goto L12;
L14:;
      if (!(ecl_equal(VV[65],v8_method_qualifiers_))) { goto L17; }
      v4principal = CONS(v7_method_,v4principal);
      goto L12;
L17:;
      cl_invalid_method_error(4, v7_method_, VV[51], v8_method_qualifiers_, ECL_SYM("OR",616));
     }
L12:;
    }
    v6 = ecl_cdr(v6);
L8:;
    if (Null(v6)) { goto L22; }
    goto L7;
L22:;
   }
   v4principal = cl_nreverse(v4principal);
   if ((v4principal)!=ECL_NIL) { goto L26; }
   cl_error(3, VV[46], ECL_SYM("OR",616), v4principal);
L26:;
   v5around = cl_nreverse(v5around);
   {
    cl_object v6main_effective_method;
    {
     cl_object v7;
     {
      cl_object v8;
      v8 = ecl_make_cfun((cl_objectfn_fixed)LC39__lambda314,ECL_NIL,Cblock,1);
      v7 = v8;
     }
     {
      cl_object v8;
      cl_object v9;
      cl_object v10;
      if (!(ecl_eql(v3order,VV[47]))) { goto L36; }
      v8 = cl_reverse(v4principal);
      goto L35;
L36:;
      v8 = v4principal;
L35:;
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
L44:;
       if (!(ecl_endp(v10))) { goto L46; }
       goto L45;
L46:;
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
       goto L44;
L45:;
       T1 = ecl_cdr(v11);
       goto L33;
      }
     }
    }
L33:;
    v6main_effective_method = CONS(ECL_SYM("OR",616),T1);
    if (Null(v5around)) { goto L62; }
    T1 = ecl_car(v5around);
    T2 = ecl_cdr(v5around);
    T3 = cl_list(2, ECL_SYM("MAKE-METHOD",955), v6main_effective_method);
    T4 = ecl_list1(T3);
    T5 = ecl_append(T2,T4);
    T0 = cl_list(3, VV[6], T1, T5);
    goto L31;
L62:;
    if (Null(ecl_cdr(v4principal))) { goto L64; }
    T0 = v6main_effective_method;
    goto L31;
L64:;
    T0 = ecl_cadr(v6main_effective_method);
   }
L31:;
   value0 = L1effective_method_function(2, T0, ECL_T);
   return value0;
  }
 }
}
/*      local function LAMBDA186                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC23__lambda186(cl_object v1x)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_list(3, VV[6], v1x, ECL_NIL);
  return value0;
 }
}
/*      local function LAMBDA202                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC25__lambda202(cl_object v1x)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_list(3, VV[6], v1x, ECL_NIL);
  return value0;
 }
}
/*      local function LAMBDA218                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC27__lambda218(cl_object v1x)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_list(3, VV[6], v1x, ECL_NIL);
  return value0;
 }
}
/*      local function LAMBDA234                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC29__lambda234(cl_object v1x)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_list(3, VV[6], v1x, ECL_NIL);
  return value0;
 }
}
/*      local function LAMBDA250                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC31__lambda250(cl_object v1x)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_list(3, VV[6], v1x, ECL_NIL);
  return value0;
 }
}
/*      local function LAMBDA266                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC33__lambda266(cl_object v1x)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_list(3, VV[6], v1x, ECL_NIL);
  return value0;
 }
}
/*      local function LAMBDA282                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC35__lambda282(cl_object v1x)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_list(3, VV[6], v1x, ECL_NIL);
  return value0;
 }
}
/*      local function LAMBDA298                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC37__lambda298(cl_object v1x)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_list(3, VV[6], v1x, ECL_NIL);
  return value0;
 }
}
/*      local function LAMBDA314                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC39__lambda314(cl_object v1x)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_list(3, VV[6], v1x, ECL_NIL);
  return value0;
 }
}

#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/clos/combin.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclfNlsYRb7_8nG6lq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CLOS;COMBIN.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclfNlsYRb7_8nG6lq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_cmp_defun(VV[66]);                          /*  EFFECTIVE-METHOD-FUNCTION */
  (void)0; /* No entry created for COMBINE-METHOD-FUNCTIONS */
  ecl_cmp_defmacro(VV[68]);                       /*  CALL-METHOD     */
  ecl_cmp_defun(VV[71]);                          /*  CALL-NEXT-METHOD */
  ecl_cmp_defun(VV[72]);                          /*  NEXT-METHOD-P   */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC7__lambda27,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(VV[8], ECL_SYM("COMPILER-MACRO",240), T0);
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC8__lambda31,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  si_put_sysprop(VV[9], ECL_SYM("COMPILER-MACRO",240), T0);
 }
  (void)0; /* No entry created for ERROR-QUALIFIER */
  (void)0; /* No entry created for STANDARD-MAIN-EFFECTIVE-METHOD */
  ecl_cmp_defun(VV[73]);                          /*  STANDARD-COMPUTE-EFFECTIVE-METHOD */
  si_Xmake_special(VV[19]);
  cl_set(VV[19],mp_make_lock(2, ECL_SYM("NAME",1300), ECL_SYM("FIND-METHOD-COMBINATION",1575)));
  si_Xmake_special(VV[20]);
  cl_set(VV[20],cl_make_hash_table(4, ECL_SYM("SIZE",1335), ecl_make_fixnum(32), ECL_SYM("TEST",1343), ECL_SYM("EQ",335)));
  ecl_cmp_defun(VV[74]);                          /*  SEARCH-METHOD-COMBINATION */
  ecl_cmp_defun(VV[75]);                          /*  INSTALL-METHOD-COMBINATION */
  ecl_cmp_defun(VV[76]);                          /*  MAKE-METHOD-COMBINATION */
  ecl_cmp_defun(VV[77]);                          /*  FIND-METHOD-COMBINATION */
  ecl_cmp_defun(VV[78]);                          /*  DEFINE-SIMPLE-METHOD-COMBINATION */
  (void)0; /* No entry created for DEFINE-COMPLEX-METHOD-COMBINATION */
  ecl_cmp_defmacro(VV[86]);                       /*  DEFINE-METHOD-COMBINATION */
  (void)0; /* No entry created for METHOD-COMBINATION-ERROR */
  (void)0; /* No entry created for INVALID-METHOD-ERROR */
  (void)0; /* No entry created for STD-COMPUTE-EFFECTIVE-METHOD */
  (void)0; /* No entry created for COMPUTE-EFFECTIVE-METHOD-FUNCTION */
  ecl_cmp_defun(VV[87]);                          /*  COMPUTE-EFFECTIVE-METHOD */
  L15install_method_combination(ECL_SYM("STANDARD",974), VV[18]);
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC24__lambda173,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  L15install_method_combination(ECL_SYM("PROGN",673), T0);
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC26__lambda189,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  L15install_method_combination(ECL_SYM("AND",89), T0);
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC28__lambda205,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  L15install_method_combination(ECL_SYM("MAX",553), T0);
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC30__lambda221,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  L15install_method_combination(ECL_SYM("+",16), T0);
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC32__lambda237,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  L15install_method_combination(ECL_SYM("NCONC",583), T0);
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC34__lambda253,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  L15install_method_combination(ECL_SYM("APPEND",90), T0);
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC36__lambda269,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  L15install_method_combination(ECL_SYM("LIST",483), T0);
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC38__lambda285,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  L15install_method_combination(ECL_SYM("MIN",559), T0);
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC40__lambda301,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  L15install_method_combination(ECL_SYM("OR",616), T0);
 }
}
