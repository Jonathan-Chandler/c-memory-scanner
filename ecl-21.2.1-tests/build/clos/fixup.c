/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CLOS;FIXUP.LSP                                    */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/clos/fixup.eclh"
/*      local function READER-METHOD-CLASS                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC1reader_method_class(cl_narg narg, cl_object v1class, cl_object v2direct_slot, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 {
  {
   cl_object v3;
   T1 = cl_class_of(v1class);
   v3 = (cl_env_copy->function=(ECL_SYM("CLASS-NAME",936)->symbol.gfdef))->cfun.entry(1, T1) /*  CLASS-NAME */;
   if (!((v3)==(ECL_SYM("STANDARD-CLASS",975)))) { goto L8; }
   goto L5;
   goto L6;
L8:;
   goto L6;
L6:;
   if (!((v3)==(ECL_SYM("FUNCALLABLE-STANDARD-CLASS",1577)))) { goto L12; }
   goto L5;
   goto L10;
L12:;
   goto L10;
L10:;
   if (!((v3)==(ECL_SYM("STRUCTURE-CLASS",979)))) { goto L2; }
   goto L3;
L5:;
  }
L3:;
  T0 = ECL_SYM("STANDARD-OPTIMIZED-READER-METHOD",1628);
  goto L1;
L2:;
  T0 = ECL_SYM("STANDARD-READER-METHOD",1625);
L1:;
  value0 = cl_find_class(1, T0);
  return value0;
 }
}
/*      local function WRITER-METHOD-CLASS                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC2writer_method_class(cl_narg narg, cl_object v1class, cl_object v2direct_slot, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 {
  {
   cl_object v3;
   T1 = cl_class_of(v1class);
   v3 = (cl_env_copy->function=(ECL_SYM("CLASS-NAME",936)->symbol.gfdef))->cfun.entry(1, T1) /*  CLASS-NAME */;
   if (!((v3)==(ECL_SYM("STANDARD-CLASS",975)))) { goto L8; }
   goto L5;
   goto L6;
L8:;
   goto L6;
L6:;
   if (!((v3)==(ECL_SYM("FUNCALLABLE-STANDARD-CLASS",1577)))) { goto L12; }
   goto L5;
   goto L10;
L12:;
   goto L10;
L10:;
   if (!((v3)==(ECL_SYM("STRUCTURE-CLASS",979)))) { goto L2; }
   goto L3;
L5:;
  }
L3:;
  T0 = ECL_SYM("STANDARD-OPTIMIZED-WRITER-METHOD",1629);
  goto L1;
L2:;
  T0 = ECL_SYM("STANDARD-READER-METHOD",1625);
L1:;
  value0 = cl_find_class(1, T0);
  return value0;
 }
}
/*      function definition for REGISTER-METHOD-WITH-SPECIALIZERS     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3register_method_with_specializers(cl_object v1method)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2;
   cl_object v3spec;
   cl_object v4;
   v2 = ecl_function_dispatch(cl_env_copy,ECL_SYM("METHOD-SPECIALIZERS",1595))(1, v1method) /*  METHOD-SPECIALIZERS */;
   v3spec = ECL_NIL;
   {
    cl_object v5;
    v5 = v2;
    if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v4 = v5;
   }
L6:;
   if (!(ecl_endp(v4))) { goto L8; }
   goto L7;
L8:;
   v3spec = _ecl_car(v4);
   {
    cl_object v5;
    v5 = _ecl_cdr(v4);
    if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v4 = v5;
   }
   ecl_function_dispatch(cl_env_copy,ECL_SYM("ADD-DIRECT-METHOD",1545))(2, v3spec, v1method) /*  ADD-DIRECT-METHOD */;
   goto L6;
L7:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for METHOD-P                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L4method_p(cl_object v1method)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = si_of_class_p(2, v1method, ECL_SYM("METHOD",956));
  return value0;
 }
}
/*      function definition for MAKE-METHOD                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L5make_method(cl_object v1method_class, cl_object v2qualifiers, cl_object v3specializers, cl_object v4arglist, cl_object v5function, cl_object v6options)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = (ECL_SYM("MAKE-INSTANCE",951)->symbol.gfdef);
  value0 = cl_apply(15, T0, v1method_class, VV[6], ECL_NIL, VV[7], v2qualifiers, ECL_SYM("LAMBDA-LIST",1000), v4arglist, VV[8], v3specializers, ECL_SYM("FUNCTION",1264), v5function, ECL_SYM("ALLOW-OTHER-KEYS",1219), ECL_T, v6options);
  return value0;
 }
}
/*      function definition for ALL-KEYWORDS                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L6all_keywords(cl_object v1l)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2all_keys;
   v2all_keys = ECL_NIL;
   {
    cl_object v3l;
    v3l = ecl_cdr(v1l);
    goto L5;
L4:;
    T0 = ecl_car(v3l);
    v2all_keys = CONS(T0,v2all_keys);
    v3l = ecl_cddddr(v3l);
L5:;
    if (v3l==ECL_NIL) { goto L11; }
    goto L4;
L11:;
    value0 = v2all_keys;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for CONGRUENT-LAMBDA-P                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L7congruent_lambda_p(cl_object v1l1, cl_object v2l2)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4;                                  /*  R1              */
   cl_object v5;                                  /*  OPTS1           */
   cl_object v6;                                  /*  REST1           */
   cl_object v7;                                  /*  KEY-FLAG1       */
   cl_object v8;                                  /*  KEYWORDS1       */
   cl_object v9;                                  /*  A-O-K1          */
   value0 = si_process_lambda_list(v1l1, ECL_SYM("FUNCTION",398));
   {
    const int v10 = cl_env_copy->nvalues;
    v4 = value0;
    cl_object v11;
    v11 = (v10<=1)? ECL_NIL : cl_env_copy->values[1];
    v5 = v11;
    v11 = (v10<=2)? ECL_NIL : cl_env_copy->values[2];
    v6 = v11;
    v11 = (v10<=3)? ECL_NIL : cl_env_copy->values[3];
    v7 = v11;
    v11 = (v10<=4)? ECL_NIL : cl_env_copy->values[4];
    v8 = v11;
    v11 = (v10<=5)? ECL_NIL : cl_env_copy->values[5];
    v9 = v11;
   }
   {
    cl_object v11;                                /*  R2              */
    cl_object v12;                                /*  OPTS2           */
    cl_object v13;                                /*  REST2           */
    cl_object v14;                                /*  KEY-FLAG2       */
    cl_object v15;                                /*  KEYWORDS2       */
    cl_object v16;                                /*  A-O-K2          */
    value0 = si_process_lambda_list(v2l2, ECL_SYM("FUNCTION",398));
    {
     const int v17 = cl_env_copy->nvalues;
     v11 = value0;
     cl_object v18;
     v18 = (v17<=1)? ECL_NIL : cl_env_copy->values[1];
     v12 = v18;
     v18 = (v17<=2)? ECL_NIL : cl_env_copy->values[2];
     v13 = v18;
     v18 = (v17<=3)? ECL_NIL : cl_env_copy->values[3];
     v14 = v18;
     v18 = (v17<=4)? ECL_NIL : cl_env_copy->values[4];
     v15 = v18;
     v18 = (v17<=5)? ECL_NIL : cl_env_copy->values[5];
     v16 = v18;
    }
    {
     cl_fixnum v17;
     v17 = ecl_length(v11);
     {
      cl_fixnum v18;
      v18 = ecl_length(v4);
      if (!((v17)==(v18))) { goto L4; }
     }
    }
    {
     cl_fixnum v17;
     v17 = ecl_length(v5);
     {
      cl_fixnum v18;
      v18 = ecl_length(v12);
      if (!((v17)==(v18))) { goto L4; }
     }
    }
    if (!(v6==ECL_NIL)) { goto L10; }
    T0 = ecl_make_bool(v7==ECL_NIL);
    goto L8;
L10:;
    T0 = ECL_NIL;
    goto L8;
L8:;
    if (!(v13==ECL_NIL)) { goto L14; }
    T1 = ecl_make_bool(v14==ECL_NIL);
    goto L12;
L14:;
    T1 = ECL_NIL;
    goto L12;
L12:;
    if (!((T0)==(T1))) { goto L4; }
    if (v7==ECL_NIL) { goto L17; }
    if (v14==ECL_NIL) { goto L17; }
    if ((v9)!=ECL_NIL) { goto L17; }
    if ((v16)!=ECL_NIL) { goto L17; }
    T0 = L6all_keywords(v8);
    T1 = L6all_keywords(v15);
    T2 = cl_set_difference(2, T0, T1);
    if (!(T2==ECL_NIL)) { goto L4; }
    goto L16;
L17:;
L16:;
    value0 = ECL_T;
    cl_env_copy->nvalues = 1;
    return value0;
L4:;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for ADD-METHOD                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L8add_method(cl_object v1gf, cl_object v2method)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3other_gf;
   v3other_gf = ecl_function_dispatch(cl_env_copy,ECL_SYM("METHOD-GENERIC-FUNCTION",1593))(1, v2method) /*  METHOD-GENERIC-FUNCTION */;
   if (v3other_gf==ECL_NIL) { goto L1; }
   if ((v3other_gf)==(v1gf)) { goto L1; }
   cl_error(4, VV[11], v2method, v3other_gf, v1gf);
  }
L1:;
  {
   cl_object v3new_lambda_list;
   v3new_lambda_list = ecl_function_dispatch(cl_env_copy,ECL_SYM("METHOD-LAMBDA-LIST",1594))(1, v2method) /*  METHOD-LAMBDA-LIST */;
   if (Null(cl_slot_boundp(v1gf, VV[12]))) { goto L7; }
   {
    cl_object v4old_lambda_list;
    v4old_lambda_list = ecl_function_dispatch(cl_env_copy,ECL_SYM("GENERIC-FUNCTION-LAMBDA-LIST",1582))(1, v1gf) /*  GENERIC-FUNCTION-LAMBDA-LIST */;
    if ((L7congruent_lambda_p(v4old_lambda_list, v3new_lambda_list))!=ECL_NIL) { goto L5; }
    cl_error(5, VV[13], v2method, v1gf, v4old_lambda_list, v3new_lambda_list);
    goto L5;
   }
L7:;
   T0 = ecl_function_dispatch(cl_env_copy,VV[41])(1, v3new_lambda_list) /*  IMPLICIT-GENERIC-LAMBDA */;
   (cl_env_copy->function=(ECL_SYM("REINITIALIZE-INSTANCE",965)->symbol.gfdef))->cfun.entry(3, v1gf, ECL_SYM("LAMBDA-LIST",1000), T0) /*  REINITIALIZE-INSTANCE */;
  }
L5:;
  if (Null(ecl_function_dispatch(cl_env_copy,ECL_SYM("GENERIC-FUNCTION-METHODS",1585))(1, v1gf) /*  GENERIC-FUNCTION-METHODS */)) { goto L11; }
  {
   cl_object v3method_qualifiers;
   cl_object v4specializers;
   cl_object v5found;
   v3method_qualifiers = (cl_env_copy->function=(ECL_SYM("METHOD-QUALIFIERS",959)->symbol.gfdef))->cfun.entry(1, v2method) /*  METHOD-QUALIFIERS */;
   v4specializers = ecl_function_dispatch(cl_env_copy,ECL_SYM("METHOD-SPECIALIZERS",1595))(1, v2method) /*  METHOD-SPECIALIZERS */;
   v5found = (cl_env_copy->function=(ECL_SYM("FIND-METHOD",946)->symbol.gfdef))->cfun.entry(4, v1gf, v3method_qualifiers, v4specializers, ECL_NIL) /*  FIND-METHOD */;
   if (Null(v5found)) { goto L11; }
   (cl_env_copy->function=(VV[17]->symbol.gfdef))->cfun.entry(2, v1gf, v5found) /*  REMOVE-METHOD */;
  }
L11:;
  {
   cl_object v3;
   T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("GENERIC-FUNCTION-METHODS",1585))(1, v1gf) /*  GENERIC-FUNCTION-METHODS */;
   v3 = CONS(v2method,T0);
   (cl_env_copy->function=ECL_CONS_CAR(VV[42]))->cfun.entry(2, v3, v1gf) /*  (SETF GENERIC-FUNCTION-METHODS) */;
  }
  (cl_env_copy->function=ECL_CONS_CAR(VV[43]))->cfun.entry(2, v1gf, v2method) /*  (SETF METHOD-GENERIC-FUNCTION) */;
  ecl_function_dispatch(cl_env_copy,VV[44])(1, v1gf) /*  COMPUTE-G-F-SPEC-LIST */;
  ecl_function_dispatch(cl_env_copy,VV[45])(1, v1gf) /*  SET-GENERIC-FUNCTION-DISPATCH */;
  T0 = cl_list(2, ECL_SYM("ADD-METHOD",930), v2method);
  ecl_function_dispatch(cl_env_copy,VV[46])(2, v1gf, T0) /*  UPDATE-DEPENDENTS */;
  L3register_method_with_specializers(v2method);
  value0 = v1gf;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for FUNCTION-TO-METHOD                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L9function_to_method(cl_object v1name, cl_object v2signature)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3method;
   cl_object v4generic_function;
   T0 = cl_list(3, ECL_SYM("DEFMETHOD",942), VV[15], v2signature);
   v3method = cl_eval(T0);
   v4generic_function = cl_fdefinition(VV[15]);
   {
    cl_object v5;
    T0 = cl_fdefinition(v1name);
    v5 = ecl_function_dispatch(cl_env_copy,VV[48])(1, T0) /*  WRAPPED-METHOD-FUNCTION */;
    (cl_env_copy->function=ECL_CONS_CAR(VV[49]))->cfun.entry(2, v5, v3method) /*  (SETF METHOD-FUNCTION) */;
   }
   si_fset(2, v1name, v4generic_function);
   (cl_env_copy->function=ECL_CONS_CAR(VV[50]))->cfun.entry(2, v1name, v4generic_function) /*  (SETF GENERIC-FUNCTION-NAME) */;
   value0 = cl_fmakunbound(VV[15]);
   return value0;
  }
 }
}
/*      function definition for REMOVE-METHOD                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L10remove_method(cl_object v1gf, cl_object v2method)
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
   T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("GENERIC-FUNCTION-METHODS",1585))(1, v1gf) /*  GENERIC-FUNCTION-METHODS */;
   v3 = cl_delete(2, v2method, T0);
   (cl_env_copy->function=ECL_CONS_CAR(VV[42]))->cfun.entry(2, v3, v1gf) /*  (SETF GENERIC-FUNCTION-METHODS) */;
  }
  (cl_env_copy->function=ECL_CONS_CAR(VV[43]))->cfun.entry(2, ECL_NIL, v2method) /*  (SETF METHOD-GENERIC-FUNCTION) */;
  si_clear_gfun_hash(v1gf);
  {
   cl_object v3;
   cl_object v4spec;
   cl_object v5;
   v3 = ecl_function_dispatch(cl_env_copy,ECL_SYM("METHOD-SPECIALIZERS",1595))(1, v2method) /*  METHOD-SPECIALIZERS */;
   v4spec = ECL_NIL;
   {
    cl_object v6;
    v6 = v3;
    if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v5 = v6;
   }
L11:;
   if (!(ecl_endp(v5))) { goto L13; }
   goto L12;
L13:;
   v4spec = _ecl_car(v5);
   {
    cl_object v6;
    v6 = _ecl_cdr(v5);
    if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v5 = v6;
   }
   ecl_function_dispatch(cl_env_copy,ECL_SYM("REMOVE-DIRECT-METHOD",1599))(2, v4spec, v2method) /*  REMOVE-DIRECT-METHOD */;
   goto L11;
L12:;
  }
  ecl_function_dispatch(cl_env_copy,VV[44])(1, v1gf) /*  COMPUTE-G-F-SPEC-LIST */;
  ecl_function_dispatch(cl_env_copy,VV[45])(1, v1gf) /*  SET-GENERIC-FUNCTION-DISPATCH */;
  T0 = cl_list(2, ECL_SYM("REMOVE-METHOD",966), v2method);
  ecl_function_dispatch(cl_env_copy,VV[46])(2, v1gf, T0) /*  UPDATE-DEPENDENTS */;
  value0 = v1gf;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function AUX-COMPUTE-APPLICABLE-METHODS                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC11aux_compute_applicable_methods(cl_object v1gf, cl_object v2args)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = clos_std_compute_applicable_methods(v1gf, v2args);
  return value0;
 }
}
/*      local function COMPUTE-APPLICABLE-METHODS-USING-CLASSES       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC12compute_applicable_methods_using_classes(cl_object v1gf, cl_object v2classes)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("STD-COMPUTE-APPLICABLE-METHODS-USING-CLASSES",1631))(2, v1gf, v2classes) /*  STD-COMPUTE-APPLICABLE-METHODS-USING-CLASSES */;
  return value0;
 }
}
/*      local function NO-APPLICABLE-METHOD                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC13no_applicable_method(cl_narg narg, cl_object v1gf, ...)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2args;
  ecl_va_list args; ecl_va_start(args,v1gf,narg,1);
  v2args = cl_grab_rest_args(args);
  ecl_va_end(args);
  T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("GENERIC-FUNCTION-NAME",1586))(1, v1gf) /*  GENERIC-FUNCTION-NAME */;
  {
   cl_object v3;
   v3 = (ECL_SYM("TYPE-OF",875)->symbol.gfdef);
   {
    cl_object v4;
    cl_object v5;
    v4 = ECL_NIL;
    {
     cl_object v6;
     v6 = v2args;
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
     goto L9;
L10:;
     T1 = ecl_cdr(v6);
     goto L1;
    }
   }
  }
L1:;
  value0 = cl_error(3, VV[19], T0, T1);
  return value0;
 }
}
/*      local function NO-NEXT-METHOD                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC14no_next_method(cl_narg narg, cl_object v1gf, cl_object v2method, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 {
  cl_object v3args;
  ecl_va_list args; ecl_va_start(args,v2method,narg,2);
  v3args = cl_grab_rest_args(args);
  ecl_va_end(args);
  value0 = cl_error(3, VV[20], v2method, v3args);
  return value0;
 }
}
/*      function definition for NO-PRIMARY-METHOD                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L15no_primary_method(cl_narg narg, cl_object v1gf, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2args;
  ecl_va_list args; ecl_va_start(args,v1gf,narg,1);
  v2args = cl_grab_rest_args(args);
  ecl_va_end(args);
  T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("GENERIC-FUNCTION-NAME",1586))(1, v1gf) /*  GENERIC-FUNCTION-NAME */;
  value0 = cl_error(3, VV[21], T0, v2args);
  return value0;
 }
}
/*      function definition for SETF-FIND-CLASS                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L16setf_find_class(cl_narg narg, cl_object v1new_value, cl_object v2name, ...)
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
   v5old_class = cl_find_class(3, v2name, ECL_NIL, v4env);
   if (Null(si_of_class_p(2, v5old_class, ECL_SYM("BUILT-IN-CLASS",931)))) { goto L5; }
   cl_error(2, VV[23], v2name);
   goto L3;
L5:;
   if (!((v2name)==(ECL_SYM("CLASS",935)))) { goto L12; }
   goto L9;
   goto L10;
L12:;
   goto L10;
L10:;
   if (!((v2name)==(ECL_SYM("BUILT-IN-CLASS",931)))) { goto L7; }
   goto L8;
L9:;
L8:;
   cl_error(2, VV[26], v2name);
   goto L3;
L7:;
   if (Null(ecl_function_dispatch(cl_env_copy,VV[54])(1, v1new_value) /*  CLASSP */)) { goto L15; }
   si_hash_set(v2name, ecl_symbol_value(ECL_SYM("*CLASS-NAME-HASH-TABLE*",1018)), v1new_value);
   goto L3;
L15:;
   if (!(v1new_value==ECL_NIL)) { goto L17; }
   cl_remhash(v2name, ecl_symbol_value(ECL_SYM("*CLASS-NAME-HASH-TABLE*",1018)));
   goto L3;
L17:;
   cl_error(2, VV[27], v1new_value);
  }
L3:;
  value0 = v1new_value;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function ADD-DEPENDENT                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC17add_dependent(cl_object v1c, cl_object v2dep)
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
   T0 = ecl_function_dispatch(cl_env_copy,VV[55])(1, v1c) /*  CLASS-DEPENDENTS */;
   v3 = cl_adjoin(2, v2dep, T0);
   value0 = (cl_env_copy->function=ECL_CONS_CAR(VV[56]))->cfun.entry(2, v3, v1c) /*  (SETF CLASS-DEPENDENTS) */;
   return value0;
  }
 }
}
/*      local function ADD-DEPENDENT                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC18add_dependent(cl_object v1c, cl_object v2dependent)
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
   T0 = ecl_function_dispatch(cl_env_copy,VV[57])(1, v1c) /*  GENERIC-FUNCTION-DEPENDENTS */;
   v3 = cl_adjoin(2, v2dependent, T0);
   value0 = (cl_env_copy->function=ECL_CONS_CAR(VV[58]))->cfun.entry(2, v3, v1c) /*  (SETF GENERIC-FUNCTION-DEPENDENTS) */;
   return value0;
  }
 }
}
/*      local function REMOVE-DEPENDENT                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC19remove_dependent(cl_object v1c, cl_object v2dep)
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
   T0 = ecl_function_dispatch(cl_env_copy,VV[55])(1, v1c) /*  CLASS-DEPENDENTS */;
   v3 = cl_remove(2, v2dep, T0);
   value0 = (cl_env_copy->function=ECL_CONS_CAR(VV[56]))->cfun.entry(2, v3, v1c) /*  (SETF CLASS-DEPENDENTS) */;
   return value0;
  }
 }
}
/*      local function REMOVE-DEPENDENT                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC20remove_dependent(cl_object v1c, cl_object v2dep)
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
   T0 = ecl_function_dispatch(cl_env_copy,VV[57])(1, v1c) /*  GENERIC-FUNCTION-DEPENDENTS */;
   v3 = cl_remove(2, v2dep, T0);
   value0 = (cl_env_copy->function=ECL_CONS_CAR(VV[58]))->cfun.entry(2, v3, v1c) /*  (SETF GENERIC-FUNCTION-DEPENDENTS) */;
   return value0;
  }
 }
}
/*      local function MAP-DEPENDENTS                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC21map_dependents(cl_object v1c, cl_object v2function)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   v3 = ecl_function_dispatch(cl_env_copy,VV[55])(1, v1c) /*  CLASS-DEPENDENTS */;
   goto L4;
L3:;
   {
    cl_object v4d;
    v4d = ecl_car(v3);
    ecl_function_dispatch(cl_env_copy,v2function)(1, v4d);
   }
   v3 = ecl_cdr(v3);
L4:;
   if (Null(v3)) { goto L11; }
   goto L3;
L11:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function MAP-DEPENDENTS                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC22map_dependents(cl_object v1c, cl_object v2function)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   v3 = ecl_function_dispatch(cl_env_copy,VV[57])(1, v1c) /*  GENERIC-FUNCTION-DEPENDENTS */;
   goto L4;
L3:;
   {
    cl_object v4d;
    v4d = ecl_car(v3);
    ecl_function_dispatch(cl_env_copy,v2function)(1, v4d);
   }
   v3 = ecl_cdr(v3);
L4:;
   if (Null(v3)) { goto L11; }
   goto L3;
L11:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for RECURSIVELY-UPDATE-CLASSES            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L23recursively_update_classes(cl_object v1a_class)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  cl_slot_makunbound(v1a_class, VV[32]);
  {
   cl_object v2;
   v2 = (VV[33]->symbol.gfdef);
   {
    cl_object v3;
    v3 = ecl_function_dispatch(cl_env_copy,ECL_SYM("CLASS-DIRECT-SUBCLASSES",1550))(1, v1a_class) /*  CLASS-DIRECT-SUBCLASSES */;
    {
     cl_object v4;
     cl_object v5;
     v4 = ECL_NIL;
     {
      cl_object v6;
      v6 = v3;
      if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v5 = v6;
     }
L8:;
     if (!(ecl_endp(v5))) { goto L10; }
     goto L9;
L10:;
     v4 = _ecl_car(v5);
     {
      cl_object v6;
      v6 = _ecl_cdr(v5);
      if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v5 = v6;
     }
     ecl_function_dispatch(cl_env_copy,v2)(1, v4);
     goto L8;
L9:;
     value0 = v3;
     cl_env_copy->nvalues = 1;
     return value0;
    }
   }
  }
 }
}
/*      local function UPDATE-DEPENDENT                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC24update_dependent(cl_narg narg, cl_object v1object, cl_object v2dep, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 {
  cl_object v3added_method;
  cl_object v4am_p;
  cl_object v5removed_method;
  cl_object v6rm_p;
  ecl_va_list args; ecl_va_start(args,v2dep,narg,2);
  {
   cl_object keyvars[4];
   cl_parse_key(args,2,LC24update_dependentkeys,keyvars,NULL,TRUE);
   ecl_va_end(args);
   v3added_method = keyvars[0];
   v4am_p = keyvars[2];
   v5removed_method = keyvars[1];
   v6rm_p = keyvars[3];
  }
  {
   cl_object v7method;
   if (Null(v4am_p)) { goto L2; }
   v7method = v3added_method;
   goto L1;
L2:;
   if (Null(v6rm_p)) { goto L4; }
   v7method = v5removed_method;
   goto L1;
L4:;
   v7method = ECL_NIL;
L1:;
   if (Null(v7method)) { goto L6; }
   {
    cl_object v8spec;
    T0 = ecl_function_dispatch(cl_env_copy,ECL_SYM("METHOD-SPECIALIZERS",1595))(1, v7method) /*  METHOD-SPECIALIZERS */;
    v8spec = ecl_car(T0);
    if (Null(ecl_function_dispatch(cl_env_copy,VV[54])(1, v8spec) /*  CLASSP */)) { goto L9; }
    value0 = L23recursively_update_classes(v8spec);
    return value0;
L9:;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
   }
L6:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}

#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/clos/fixup.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclcJosSlb7_h9Hmqq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CLOS;FIXUP.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclcJosSlb7_h9Hmqq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC1reader_method_class,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[34])(5, ECL_SYM("READER-METHOD-CLASS",1597), ECL_NIL, VVtemp[1], VVtemp[2], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC2writer_method_class,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[34])(5, ECL_SYM("WRITER-METHOD-CLASS",1637), ECL_NIL, VVtemp[1], VVtemp[2], T0) /*  INSTALL-METHOD */;
 }
  (void)0; /* No entry created for REGISTER-METHOD-WITH-SPECIALIZERS */
 {
  cl_object T0, T1;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object v1;
   v1 = ecl_symbol_value(VV[3]);
   goto L14;
L13:;
   {
    cl_object v2method_info;
    v2method_info = ecl_car(v1);
    {
     cl_object v3method_name;
     cl_object v4gfun;
     cl_object v5standard_method_class;
     v3method_name = ecl_car(v2method_info);
     v4gfun = cl_fdefinition(v3method_name);
     v5standard_method_class = cl_find_class(1, ECL_SYM("STANDARD-METHOD",977));
     T0 = si_instance_class(v4gfun);
     T1 = ecl_function_dispatch(cl_env_copy,VV[35])(1, T0) /*  CLASS-ID */;
     if (!((ECL_T)==(T1))) { goto L22; }
     T0 = cl_find_class(1, ECL_SYM("STANDARD-GENERIC-FUNCTION",976));
     si_instance_class_set(v4gfun, T0);
     si_instance_sig_set(v4gfun);
     (cl_env_copy->function=ECL_CONS_CAR(VV[36]))->cfun.entry(3, v5standard_method_class, v4gfun, VV[4]) /*  (SETF SLOT-VALUE) */;
     (cl_env_copy->function=ECL_CONS_CAR(VV[36]))->cfun.entry(3, ECL_NIL, v4gfun, ECL_SYM("DOCSTRING",1640)) /*  (SETF SLOT-VALUE) */;
L22:;
     {
      cl_object v6;
      v6 = ecl_cdr(v2method_info);
      goto L30;
L29:;
      {
       cl_object v7method;
       v7method = ecl_car(v6);
       {
        cl_object v8old_class;
        v8old_class = si_instance_class(v7method);
        if (!(v8old_class==ECL_NIL)) { goto L37; }
        T0 = cl_find_class(1, ECL_SYM("STANDARD-METHOD",977));
        goto L36;
L37:;
        if (!(ECL_SYMBOLP(v8old_class))) { goto L39; }
        T0 = cl_find_class(1, v8old_class);
        goto L36;
L39:;
        T0 = v8old_class;
L36:;
        si_instance_class_set(v7method, T0);
       }
       si_instance_sig_set(v4gfun);
       L3register_method_with_specializers(v7method);
      }
      v6 = ecl_cdr(v6);
L30:;
      if (Null(v6)) { goto L45; }
      goto L29;
L45:;
     }
    }
   }
   v1 = ecl_cdr(v1);
L14:;
   if (Null(v1)) { goto L49; }
   goto L13;
L49:;
   cl_makunbound(VV[3]);
  }
 }
  ecl_cmp_defun(VV[37]);                          /*  METHOD-P        */
  ecl_cmp_defun(VV[38]);                          /*  MAKE-METHOD     */
  (void)0; /* No entry created for ALL-KEYWORDS */
  ecl_cmp_defun(VV[39]);                          /*  CONGRUENT-LAMBDA-P */
  ecl_cmp_defun(VV[40]);                          /*  ADD-METHOD      */
  ecl_cmp_defun(VV[47]);                          /*  FUNCTION-TO-METHOD */
  ecl_cmp_defun(VV[51]);                          /*  REMOVE-METHOD   */
  L9function_to_method(VV[14], VVtemp[3]);
  L9function_to_method(VV[17], VVtemp[3]);
  L9function_to_method(ECL_SYM("FIND-METHOD",946), VVtemp[4]);
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC11aux_compute_applicable_methods,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[34])(5, VV[18], ECL_NIL, VVtemp[5], VVtemp[6], T0) /*  INSTALL-METHOD */;
 }
  {
   cl_object v1aux;
   v1aux = (VV[18]->symbol.gfdef);
   (cl_env_copy->function=ECL_CONS_CAR(VV[50]))->cfun.entry(2, ECL_SYM("COMPUTE-APPLICABLE-METHODS",938), v1aux) /*  (SETF GENERIC-FUNCTION-NAME) */;
   si_fset(2, ECL_SYM("COMPUTE-APPLICABLE-METHODS",938), v1aux);
  }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC12compute_applicable_methods_using_classes,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[34])(5, ECL_SYM("COMPUTE-APPLICABLE-METHODS-USING-CLASSES",1556), ECL_NIL, VVtemp[5], VVtemp[7], T0) /*  INSTALL-METHOD */;
 }
  L9function_to_method(ECL_SYM("COMPUTE-EFFECTIVE-METHOD",1560), VVtemp[8]);
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC13no_applicable_method,ECL_NIL,Cblock,1);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[34])(5, ECL_SYM("NO-APPLICABLE-METHOD",961), ECL_NIL, VVtemp[9], VVtemp[10], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC14no_next_method,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[34])(5, ECL_SYM("NO-NEXT-METHOD",962), ECL_NIL, VVtemp[11], VVtemp[12], T0) /*  INSTALL-METHOD */;
 }
  ecl_cmp_defun(VV[52]);                          /*  NO-PRIMARY-METHOD */
  ecl_cmp_defun(VV[53]);                          /*  SETF-FIND-CLASS */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC17add_dependent,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[34])(5, ECL_SYM("ADD-DEPENDENT",1544), ECL_NIL, VVtemp[13], VVtemp[14], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC18add_dependent,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[34])(5, ECL_SYM("ADD-DEPENDENT",1544), ECL_NIL, VVtemp[15], VVtemp[16], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC19remove_dependent,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[34])(5, ECL_SYM("REMOVE-DEPENDENT",1598), ECL_NIL, VVtemp[13], VVtemp[14], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC20remove_dependent,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[34])(5, ECL_SYM("REMOVE-DEPENDENT",1598), ECL_NIL, VVtemp[5], VVtemp[14], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC21map_dependents,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[34])(5, ECL_SYM("MAP-DEPENDENTS",1590), ECL_NIL, VVtemp[13], VVtemp[17], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC22map_dependents,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[34])(5, ECL_SYM("MAP-DEPENDENTS",1590), ECL_NIL, VVtemp[5], VVtemp[17], T0) /*  INSTALL-METHOD */;
 }
  (cl_env_copy->function=(ECL_SYM("ENSURE-GENERIC-FUNCTION",944)->symbol.gfdef))->cfun.entry(5, ECL_SYM("UPDATE-DEPENDENT",1634), VV[29], ECL_T, ECL_SYM("LAMBDA-LIST",1000), VVtemp[18]) /*  ENSURE-GENERIC-FUNCTION */;
  cl_set(VV[30],ECL_SYM("MAP-DEPENDENTS",1590));
  clos_load_defclass(VV[31], ECL_NIL, ECL_NIL, ECL_NIL);
  ecl_cmp_defun(VV[59]);                          /*  RECURSIVELY-UPDATE-CLASSES */
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun_va((cl_objectfn)LC24update_dependent,ECL_NIL,Cblock,2);
   T0 = v1;
  }
  ecl_function_dispatch(cl_env_copy,VV[34])(5, ECL_SYM("UPDATE-DEPENDENT",1634), ECL_NIL, VVtemp[19], VVtemp[20], T0) /*  INSTALL-METHOD */;
 }
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object v1x;
   v1x = (cl_env_copy->function=(ECL_SYM("MAKE-INSTANCE",951)->symbol.gfdef))->cfun.entry(1, VV[31]) /*  MAKE-INSTANCE */;
   T0 = (ECL_SYM("SHARED-INITIALIZE",967)->symbol.gfdef);
   ecl_function_dispatch(cl_env_copy,ECL_SYM("ADD-DEPENDENT",1544))(2, T0, v1x) /*  ADD-DEPENDENT */;
   T0 = (ECL_SYM("INITIALIZE-INSTANCE",949)->symbol.gfdef);
   ecl_function_dispatch(cl_env_copy,ECL_SYM("ADD-DEPENDENT",1544))(2, T0, v1x) /*  ADD-DEPENDENT */;
   T0 = (ECL_SYM("ALLOCATE-INSTANCE",929)->symbol.gfdef);
   ecl_function_dispatch(cl_env_copy,ECL_SYM("ADD-DEPENDENT",1544))(2, T0, v1x) /*  ADD-DEPENDENT */;
  }
 }
  L9function_to_method(ECL_SYM("MAKE-METHOD-LAMBDA",1589), VVtemp[21]);
  L9function_to_method(ECL_SYM("COMPUTE-DISCRIMINATING-FUNCTION",1559), VVtemp[22]);
  L9function_to_method(ECL_SYM("GENERIC-FUNCTION-METHOD-CLASS",1583), VVtemp[22]);
  L9function_to_method(ECL_SYM("FIND-METHOD-COMBINATION",1575), VVtemp[23]);
  L9function_to_method(VVtemp[24], VVtemp[25]);
}