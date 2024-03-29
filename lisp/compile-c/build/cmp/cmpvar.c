/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;CMPVAR.LSP                                    */
#include <ecl/ecl-cmp.h>
#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/cmp/cmpvar.eclh"
/*      function definition for MAKE-VAR                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1make_var(cl_narg narg, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  cl_object v1args;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  v1args = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   cl_object v2var;
   T0 = ecl_fdefinition(VV[110]);
   v2var = cl_apply(2, T0, v1args);
   {
    cl_object v3;
    v3 = ecl_function_dispatch(cl_env_copy,VV[111])(1, v2var) /*  VAR-KIND */;
    if (!((v3)==(ECL_SYM("SPECIAL",791)))) { goto L8; }
    goto L3;
    goto L6;
L8:;
    goto L6;
L6:;
    if (!((v3)==(VV[1]))) { goto L11; }
    goto L3;
    goto L4;
L11:;
    goto L4;
   }
L4:;
   if (Null(ecl_symbol_value(VV[3]))) { goto L3; }
   {
    cl_object v3;
    cl_object v4;
    v3 = ecl_symbol_value(VV[3]);
    T0 = ecl_function_dispatch(cl_env_copy,VV[112])(1, v3) /*  FUN-LOCAL-VARS */;
    v4 = CONS(v2var,T0);
    ecl_structure_set(v3,VV[4],21,v4);
   }
L3:;
   value0 = v2var;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for VAR-REFERENCED-IN-FORM-LIST           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2var_referenced_in_form_list(cl_object v1var, cl_object v2form_list)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3f;
   cl_object v4;
   v3f = ECL_NIL;
   {
    cl_object v5;
    v5 = v2form_list;
    if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v4 = v5;
   }
   {
    cl_object v5;
    v5 = ECL_NIL;
L6:;
    if (!(ecl_endp(v4))) { goto L8; }
    goto L7;
L8:;
    v3f = _ecl_car(v4);
    {
     cl_object v6;
     v6 = _ecl_cdr(v4);
     if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v4 = v6;
    }
    v5 = L4var_referenced_in_form(v1var, v3f);
    if (Null(v5)) { goto L16; }
    value0 = v5;
    cl_env_copy->nvalues = 1;
    return value0;
L16:;
    goto L6;
L7:;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for VAR-CHANGED-IN-FORM-LIST              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3var_changed_in_form_list(cl_object v1var, cl_object v2form_list)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3f;
   cl_object v4;
   v3f = ECL_NIL;
   {
    cl_object v5;
    v5 = v2form_list;
    if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v4 = v5;
   }
   {
    cl_object v5;
    v5 = ECL_NIL;
L6:;
    if (!(ecl_endp(v4))) { goto L8; }
    goto L7;
L8:;
    v3f = _ecl_car(v4);
    {
     cl_object v6;
     v6 = _ecl_cdr(v4);
     if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v4 = v6;
    }
    v5 = L5var_changed_in_form(v1var, v3f);
    if (Null(v5)) { goto L16; }
    value0 = v5;
    cl_env_copy->nvalues = 1;
    return value0;
L16:;
    goto L6;
L7:;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for VAR-REFERENCED-IN-FORM                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L4var_referenced_in_form(cl_object v1var, cl_object v2form)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[116])(1, v1var) /*  VAR-READ-NODES */;
  value0 = ecl_function_dispatch(cl_env_copy,VV[117])(2, v2form, T0) /*  FIND-FORM-IN-NODE-LIST */;
  if ((value0)!=ECL_NIL) { goto L2; }
  value0 = ecl_function_dispatch(cl_env_copy,VV[118])(1, v1var) /*  VAR-FUNCTIONS-READING */;
  return value0;
L2:;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for VAR-CHANGED-IN-FORM                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L5var_changed_in_form(cl_object v1var, cl_object v2form)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[120])(1, v1var) /*  VAR-SET-NODES */;
  value0 = ecl_function_dispatch(cl_env_copy,VV[117])(2, v2form, T0) /*  FIND-FORM-IN-NODE-LIST */;
  if ((value0)!=ECL_NIL) { goto L2; }
  {
   cl_object v3kind;
   v3kind = ecl_function_dispatch(cl_env_copy,VV[111])(1, v1var) /*  VAR-KIND */;
   if ((v3kind)==(ECL_SYM("SPECIAL",791))) { goto L7; }
   if (!((v3kind)==(VV[1]))) { goto L5; }
   goto L6;
L7:;
L6:;
   value0 = ecl_function_dispatch(cl_env_copy,VV[121])(1, v2form) /*  C1FORM-SP-CHANGE */;
   return value0;
L5:;
   value0 = ecl_function_dispatch(cl_env_copy,VV[122])(1, v1var) /*  VAR-FUNCTIONS-SETTING */;
   return value0;
  }
L2:;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for UPDATE-VARIABLE-TYPE                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L6update_variable_type(cl_object v1var, cl_object v2orig_type)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_function_dispatch(cl_env_copy,VV[120])(1, v1var) /*  VAR-SET-NODES */)) { goto L1; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  {
   cl_object v3type;
   T0 = ecl_function_dispatch(cl_env_copy,VV[124])(1, v1var) /*  VAR-TYPE */;
   v3type = ecl_function_dispatch(cl_env_copy,VV[125])(2, T0, v2orig_type) /*  TYPE-AND */;
   if (!(v3type==ECL_NIL)) { goto L4; }
   T0 = ecl_function_dispatch(cl_env_copy,VV[126])(1, v1var) /*  VAR-NAME */;
   T1 = ecl_function_dispatch(cl_env_copy,VV[124])(1, v1var) /*  VAR-TYPE */;
   value0 = ecl_function_dispatch(cl_env_copy,VV[127])(4, VV[10], T0, T1, v2orig_type) /*  CMPWARN */;
   return value0;
L4:;
   {
    cl_object v4;
    cl_object v5form;
    cl_object v6;
    v4 = L7var_read_forms(v1var);
    v5form = ECL_NIL;
    {
     cl_object v7;
     v7 = v4;
     if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v6 = v7;
    }
L11:;
    if (!(ecl_endp(v6))) { goto L13; }
    goto L12;
L13:;
    v5form = _ecl_car(v6);
    {
     cl_object v7;
     v7 = _ecl_cdr(v6);
     if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v6 = v7;
    }
    T0 = ecl_function_dispatch(cl_env_copy,VV[128])(1, v5form) /*  C1FORM-NAME */;
    if (!((T0)==(VV[11]))) { goto L21; }
    T0 = ecl_function_dispatch(cl_env_copy,VV[129])(1, v5form) /*  C1FORM-ARGS */;
    T1 = ecl_car(T0);
    if (!((v1var)==(T1))) { goto L21; }
    {
     cl_object v7;
     T0 = ecl_function_dispatch(cl_env_copy,VV[130])(1, v5form) /*  C1FORM-PRIMARY-TYPE */;
     v7 = ecl_function_dispatch(cl_env_copy,VV[125])(2, v3type, T0) /*  TYPE-AND */;
     ecl_structure_set(v5form,VV[12],1,v7);
    }
L21:;
    goto L11;
L12:;
    ecl_structure_set(v1var,VV[11],11,v3type);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for VAR-READ-FORMS                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L7var_read_forms(cl_object v1var)
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
   v2 = (ECL_SYM("FIRST",373)->symbol.gfdef);
   {
    cl_object v3;
    cl_object v4;
    cl_object v5;
    v3 = ecl_function_dispatch(cl_env_copy,VV[116])(1, v1var) /*  VAR-READ-NODES */;
    v4 = ECL_NIL;
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
      T0 = v8;
     }
     T1 = ecl_function_dispatch(cl_env_copy,v2)(1, v4);
     v7 = ecl_list1(T1);
     (ECL_CONS_CDR(T0)=v7,T0);
     goto L9;
L10:;
     value0 = ecl_cdr(v6);
     cl_env_copy->nvalues = 1;
     return value0;
    }
   }
  }
 }
}
/*      function definition for ASSERT-VAR-REF-VALUE                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L8assert_var_ref_value(cl_object v1var)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_symbol_value(VV[15]))) { goto L1; }
  {
   cl_object v2ref;
   v2ref = ecl_function_dispatch(cl_env_copy,VV[133])(1, v1var) /*  VAR-REF */;
   T0 = ecl_divide(ecl_make_fixnum(536870911),ecl_make_fixnum(2));
   if (ecl_greater(v2ref,T0)) { goto L3; }
   T0 = ecl_function_dispatch(cl_env_copy,VV[133])(1, v1var) /*  VAR-REF */;
   T1 = ecl_function_dispatch(cl_env_copy,VV[116])(1, v1var) /*  VAR-READ-NODES */;
   {
    cl_fixnum v3;
    v3 = ecl_length(T1);
    T2 = ecl_function_dispatch(cl_env_copy,VV[120])(1, v1var) /*  VAR-SET-NODES */;
    {
     cl_fixnum v4;
     v4 = ecl_length(T2);
     T3 = ecl_plus(ecl_make_fixnum(v3),ecl_make_fixnum(v4));
     if (ecl_number_equalp(T0,T3)) { goto L3; }
    }
   }
  }
  T0 = ecl_list1(v1var);
  value0 = ecl_function_dispatch(cl_env_copy,VV[134])(4, ECL_SYM("FORMAT-CONTROL",1263), VV[16], ECL_SYM("FORMAT-ARGUMENTS",1262), T0) /*  BABOON */;
  return value0;
L3:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for ASSERT-VAR-NOT-IGNORED                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L9assert_var_not_ignored(cl_object v1var)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2x;
   v2x = ecl_function_dispatch(cl_env_copy,VV[136])(1, v1var) /*  VAR-IGNORABLE */;
   if (Null(v2x)) { goto L1; }
   if (!(ecl_minusp(v2x))) { goto L1; }
  }
  T0 = ecl_function_dispatch(cl_env_copy,VV[126])(1, v1var) /*  VAR-NAME */;
  ecl_function_dispatch(cl_env_copy,VV[137])(2, VV[18], T0) /*  CMPWARN-STYLE */;
  value0 = ecl_structure_set(v1var,VV[11],13,ECL_NIL);
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for DELETE-FROM-READ-NODES                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L10delete_from_read_nodes(cl_object v1var, cl_object v2form)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  L8assert_var_ref_value(v1var);
  {
   cl_object v3;
   T0 = ecl_function_dispatch(cl_env_copy,VV[133])(1, v1var) /*  VAR-REF */;
   v3 = ecl_one_minus(T0);
   ecl_structure_set(v1var,VV[11],1,v3);
  }
  {
   cl_object v3;
   T0 = ecl_function_dispatch(cl_env_copy,VV[116])(1, v1var) /*  VAR-READ-NODES */;
   v3 = ecl_function_dispatch(cl_env_copy,VV[139])(2, v2form, T0) /*  DELETE-FORM-FROM-NODE-LIST */;
   value0 = ecl_structure_set(v1var,VV[11],4,v3);
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for ADD-TO-READ-NODES                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L11add_to_read_nodes(cl_object v1var, cl_object v2form)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  L8assert_var_ref_value(v1var);
  L9assert_var_not_ignored(v1var);
  {
   cl_object v3;
   T0 = ecl_function_dispatch(cl_env_copy,VV[133])(1, v1var) /*  VAR-REF */;
   v3 = ecl_one_plus(T0);
   ecl_structure_set(v1var,VV[11],1,v3);
  }
  {
   cl_object v3;
   T0 = ecl_function_dispatch(cl_env_copy,VV[116])(1, v1var) /*  VAR-READ-NODES */;
   v3 = ecl_function_dispatch(cl_env_copy,VV[141])(2, v2form, T0) /*  ADD-FORM-TO-NODE-LIST */;
   ecl_structure_set(v1var,VV[11],4,v3);
  }
  if (Null(ecl_symbol_value(VV[3]))) { goto L7; }
  T0 = ecl_symbol_value(VV[3]);
  T1 = ecl_function_dispatch(cl_env_copy,VV[142])(1, v1var) /*  VAR-FUNCTION */;
  if ((T0)==(T1)) { goto L7; }
  {
   cl_object v3;
   cl_object v4;
   v3 = ecl_symbol_value(VV[3]);
   T0 = ecl_function_dispatch(cl_env_copy,VV[118])(1, v1var) /*  VAR-FUNCTIONS-READING */;
   v4 = cl_adjoin(2, v3, T0);
   ecl_structure_set(v1var,VV[11],9,v4);
  }
  {
   cl_object v3;
   cl_object v4;
   v3 = ecl_symbol_value(VV[3]);
   T0 = ecl_function_dispatch(cl_env_copy,VV[143])(1, v3) /*  FUN-REFERENCED-VARS */;
   v4 = cl_adjoin(2, v1var, T0);
   ecl_structure_set(v3,VV[4],22,v4);
  }
L7:;
  value0 = v2form;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for ADD-TO-SET-NODES                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L12add_to_set_nodes(cl_object v1var, cl_object v2form)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  L8assert_var_ref_value(v1var);
  L9assert_var_not_ignored(v1var);
  {
   cl_object v3;
   T0 = ecl_function_dispatch(cl_env_copy,VV[133])(1, v1var) /*  VAR-REF */;
   v3 = ecl_one_plus(T0);
   ecl_structure_set(v1var,VV[11],1,v3);
  }
  {
   cl_object v3;
   T0 = ecl_function_dispatch(cl_env_copy,VV[120])(1, v1var) /*  VAR-SET-NODES */;
   v3 = ecl_function_dispatch(cl_env_copy,VV[141])(2, v2form, T0) /*  ADD-FORM-TO-NODE-LIST */;
   ecl_structure_set(v1var,VV[11],5,v3);
  }
  if (Null(ecl_symbol_value(VV[3]))) { goto L7; }
  T0 = ecl_symbol_value(VV[3]);
  T1 = ecl_function_dispatch(cl_env_copy,VV[142])(1, v1var) /*  VAR-FUNCTION */;
  if ((T0)==(T1)) { goto L7; }
  {
   cl_object v3;
   cl_object v4;
   v3 = ecl_symbol_value(VV[3]);
   T0 = ecl_function_dispatch(cl_env_copy,VV[122])(1, v1var) /*  VAR-FUNCTIONS-SETTING */;
   v4 = cl_adjoin(2, v3, T0);
   ecl_structure_set(v1var,VV[11],8,v4);
  }
  {
   cl_object v3;
   cl_object v4;
   v3 = ecl_symbol_value(VV[3]);
   T0 = ecl_function_dispatch(cl_env_copy,VV[143])(1, v3) /*  FUN-REFERENCED-VARS */;
   v4 = cl_adjoin(2, v1var, T0);
   ecl_structure_set(v3,VV[4],22,v4);
  }
L7:;
  value0 = v2form;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for ADD-TO-SET-NODES-OF-VAR-LIST          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L13add_to_set_nodes_of_var_list(cl_object v1var_list, cl_object v2form)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   v3 = v1var_list;
   goto L5;
L4:;
   {
    cl_object v4v;
    v4v = ecl_car(v3);
    L12add_to_set_nodes(v4v, v2form);
   }
   v3 = ecl_cdr(v3);
L5:;
   if (Null(v3)) { goto L12; }
   goto L4;
L12:;
  }
  value0 = v2form;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for CHECK-GLOBAL                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L14check_global(cl_object v1name)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_memql(v1name,ecl_symbol_value(VV[24]));
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for SPECIAL-VARIABLE-P                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L15special_variable_p(cl_object v1name)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = si_specialp(v1name);
  if ((value0)!=ECL_NIL) { goto L2; }
  value0 = L14check_global(v1name);
  if ((value0)!=ECL_NIL) { goto L2; }
  {
   cl_object v2v;
   v2v = ecl_function_dispatch(cl_env_copy,VV[148])(2, v1name, ecl_symbol_value(VV[26])) /*  CMP-ENV-SEARCH-VAR */;
   if (Null(v2v)) { goto L7; }
   T0 = ecl_function_dispatch(cl_env_copy,VV[111])(1, v2v) /*  VAR-KIND */;
   value0 = ecl_make_bool((T0)==(ECL_SYM("SPECIAL",791)));
   cl_env_copy->nvalues = 1;
   return value0;
L7:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
L2:;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for LOCAL-VARIABLE-P                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L16local_variable_p(cl_narg narg, cl_object v1name, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2env;
  va_list args; va_start(args,v1name);
  {
   int i = 1;
   if (i >= narg) {
    v2env = ecl_symbol_value(VV[28]);
   } else {
    i++;
    v2env = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v3record;
   v3record = ecl_function_dispatch(cl_env_copy,VV[148])(2, v1name, v2env) /*  CMP-ENV-SEARCH-VAR */;
   if (Null(v3record)) { goto L4; }
   value0 = ecl_function_dispatch(cl_env_copy,VV[150])(1, v3record) /*  VAR-P */;
   return value0;
L4:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for SYMBOL-MACRO-P                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L17symbol_macro_p(cl_narg narg, cl_object v1name, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2env;
  va_list args; va_start(args,v1name);
  {
   int i = 1;
   if (i >= narg) {
    v2env = ecl_symbol_value(VV[28]);
   } else {
    i++;
    v2env = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v3record;
   v3record = ecl_function_dispatch(cl_env_copy,VV[148])(2, v1name, v2env) /*  CMP-ENV-SEARCH-VAR */;
   if (Null(v3record)) { goto L4; }
   T0 = ecl_function_dispatch(cl_env_copy,VV[150])(1, v3record) /*  VAR-P */;
   value0 = Null(T0)?ECL_T:ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L4:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for VARIABLE-TYPE-IN-ENV                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L18variable_type_in_env(cl_narg narg, cl_object v1name, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2env;
  va_list args; va_start(args,v1name);
  {
   int i = 1;
   if (i >= narg) {
    v2env = ecl_symbol_value(VV[28]);
   } else {
    i++;
    v2env = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v3var;
   v3var = ecl_function_dispatch(cl_env_copy,VV[148])(1, v1name) /*  CMP-ENV-SEARCH-VAR */;
   if (Null(ecl_function_dispatch(cl_env_copy,VV[150])(1, v3var) /*  VAR-P */)) { goto L3; }
   value0 = ecl_function_dispatch(cl_env_copy,VV[124])(1, v3var) /*  VAR-TYPE */;
   return value0;
L3:;
   {
    cl_object v4;
    v4 = si_get_sysprop(v1name, VV[31]);
    if (Null(v4)) { goto L6; }
    value0 = v4;
    cl_env_copy->nvalues = 1;
    return value0;
L6:;
    value0 = ECL_T;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for CHK-SYMBOL-MACROLET                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L19chk_symbol_macrolet(cl_object v1form)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
L1:;
  if (ECL_SYMBOLP(v1form)) { goto L3; }
  value0 = v1form;
  cl_env_copy->nvalues = 1;
  return value0;
L3:;
  {
   cl_object v2new_form;
   v2new_form = cl_macroexpand_1(2, v1form, ecl_symbol_value(VV[28]));
   if (!((v2new_form)==(v1form))) { goto L6; }
   value0 = v1form;
   cl_env_copy->nvalues = 1;
   return value0;
L6:;
   v1form = v2new_form;
  }
  goto L1;
 }
}
/*      function definition for C1MAKE-VAR                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L20c1make_var(cl_object v1name, cl_object v2specials, cl_object v3ignores, cl_object v4types)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (ECL_SYMBOLP(v1name)) { goto L1; }
  ecl_function_dispatch(cl_env_copy,VV[155])(2, VV[34], v1name) /*  CMPERR */;
L1:;
  if (Null(cl_constantp(1, v1name))) { goto L3; }
  ecl_function_dispatch(cl_env_copy,VV[155])(2, VV[35], v1name) /*  CMPERR */;
L3:;
  {
   cl_object v5;
   cl_object v6;
   cl_object v7kind;
   cl_object v8type;
   T0 = ecl_assql(v1name,v3ignores);
   v5 = ecl_cdr(T0);
   v6 = ecl_assql(v1name,v4types);
   v7kind = VV[36];
   v8type = v6;
   if (!(v8type==ECL_NIL)) { goto L11; }
   v8type = ECL_T;
   goto L10;
L11:;
   v8type = ecl_cdr(v8type);
   if (Null(ecl_function_dispatch(cl_env_copy,VV[156])(1, v8type) /*  MACHINE-C-TYPE-P */)) { goto L10; }
   v7kind = v8type;
   v8type = ecl_function_dispatch(cl_env_copy,VV[157])(1, v8type) /*  REP-TYPE->LISP-TYPE */;
L10:;
   if ((ecl_memql(v1name,v2specials))!=ECL_NIL) { goto L21; }
   if (Null(L15special_variable_p(v1name))) { goto L19; }
   goto L20;
L21:;
L20:;
   if ((v7kind)==(VV[36])) { goto L23; }
   ecl_function_dispatch(cl_env_copy,VV[155])(3, VV[37], v1name, v8type) /*  CMPERR */;
L23:;
   if (!((v8type)==(ECL_T))) { goto L25; }
   value0 = si_get_sysprop(v1name, VV[31]);
   if ((value0)!=ECL_NIL) { goto L29; }
   v8type = ECL_T;
   goto L27;
L29:;
   v8type = value0;
   goto L27;
L27:;
L25:;
   value0 = L37c1make_global_variable(5, v1name, VV[38], ECL_SYM("SPECIAL",791), ECL_SYM("TYPE",1346), v8type);
   return value0;
L19:;
   value0 = L1make_var(12, ECL_SYM("NAME",1300), v1name, ECL_SYM("TYPE",1346), v8type, VV[39], ECL_SYM("OBJECT",2105), VV[38], v7kind, VV[40], v5, VV[41], ecl_make_fixnum(0));
   return value0;
  }
 }
}
/*      function definition for CHECK-VREF                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L21check_vref(cl_object v1var)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[111])(1, v1var) /*  VAR-KIND */;
  if (!((T0)==(VV[36]))) { goto L1; }
  T0 = ecl_function_dispatch(cl_env_copy,VV[133])(1, v1var) /*  VAR-REF */;
  if (!(ecl_zerop(T0))) { goto L3; }
  if ((ecl_function_dispatch(cl_env_copy,VV[136])(1, v1var) /*  VAR-IGNORABLE */)!=ECL_NIL) { goto L3; }
  T0 = ecl_function_dispatch(cl_env_copy,VV[126])(1, v1var) /*  VAR-NAME */;
  ecl_function_dispatch(cl_env_copy,VV[137])(2, VV[43], T0) /*  CMPWARN-STYLE */;
L3:;
  if ((ecl_function_dispatch(cl_env_copy,VV[159])(1, v1var) /*  VAR-REF-CLB */)!=ECL_NIL) { goto L6; }
  {
   cl_object v2;
   T0 = ecl_function_dispatch(cl_env_copy,VV[133])(1, v1var) /*  VAR-REF */;
   if (!(ecl_plusp(T0))) { goto L9; }
   T0 = ecl_function_dispatch(cl_env_copy,VV[124])(1, v1var) /*  VAR-TYPE */;
   v2 = ecl_function_dispatch(cl_env_copy,VV[160])(1, T0) /*  LISP-TYPE->REP-TYPE */;
   goto L8;
L9:;
   v2 = ECL_SYM("OBJECT",1305);
L8:;
   value0 = ecl_structure_set(v1var,VV[11],6,v2);
   cl_env_copy->nvalues = 1;
   return value0;
  }
L6:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for C1VAR                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L22c1var(cl_object v1name)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2var;
   cl_object v3output;
   v2var = L25c1vref(v1name);
   T0 = ecl_function_dispatch(cl_env_copy,VV[124])(1, v2var) /*  VAR-TYPE */;
   v3output = ecl_function_dispatch(cl_env_copy,VV[162])(5, VV[11], ECL_SYM("TYPE",1346), T0, VV[45], v2var) /*  MAKE-C1FORM* */;
   L11add_to_read_nodes(v2var, v3output);
   value0 = v3output;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for MAKE-LCL-VAR                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L23make_lcl_var(cl_narg narg, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  cl_object v1rep_type;
  cl_object v2type;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  {
   cl_object keyvars[4];
   cl_parse_key(args,2,L23make_lcl_varkeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   v1rep_type = keyvars[0];
   if (Null(keyvars[3])) {
    v2type = ECL_T;
   } else {
    v2type = keyvars[1];
   }
  }
  if ((v1rep_type)!=ECL_NIL) { goto L2; }
  if (Null(v2type)) { goto L5; }
  v1rep_type = ecl_function_dispatch(cl_env_copy,VV[160])(1, v2type) /*  LISP-TYPE->REP-TYPE */;
  goto L4;
L5:;
  v1rep_type = ECL_SYM("OBJECT",1305);
L4:;
L2:;
  if ((v2type)!=ECL_NIL) { goto L7; }
  v2type = ECL_T;
L7:;
  T0 = ecl_function_dispatch(cl_env_copy,VV[166])(0) /*  NEXT-LCL     */;
  value0 = L1make_var(6, VV[38], v1rep_type, ECL_SYM("TYPE",1346), v2type, VV[39], T0);
  return value0;
 }
}
/*      function definition for MAKE-TEMP-VAR                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L24make_temp_var(cl_narg narg, ...)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg>1)) FEwrong_num_arguments_anonym();
 {
  cl_object v1type;
  va_list args; va_start(args,narg);
  {
   int i = 0;
   if (i >= narg) {
    v1type = ECL_T;
   } else {
    i++;
    v1type = va_arg(args,cl_object);
   }
  }
  va_end(args);
  T0 = ecl_function_dispatch(cl_env_copy,VV[168])(0) /*  NEXT-TEMP    */;
  T1 = cl_list(2, VV[48], T0);
  value0 = L1make_var(6, VV[38], ECL_SYM("OBJECT",1305), ECL_SYM("TYPE",1346), v1type, VV[39], T1);
  return value0;
 }
}
/*      function definition for C1VREF                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L25c1vref(cl_object v1name)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;                                  /*  VAR             */
   cl_object v4;                                  /*  CFB             */
   value0 = ecl_function_dispatch(cl_env_copy,VV[148])(1, v1name) /*  CMP-ENV-SEARCH-VAR */;
   {
    const int v5 = cl_env_copy->nvalues;
    v3 = value0;
    cl_object v6;
    v6 = (v5<=1)? ECL_NIL : cl_env_copy->values[1];
    v4 = v6;
   }
   if (!(v3==ECL_NIL)) { goto L2; }
   value0 = si_get_sysprop(v1name, VV[31]);
   if ((value0)!=ECL_NIL) { goto L6; }
   T0 = ECL_T;
   goto L4;
L6:;
   T0 = value0;
   goto L4;
L4:;
   value0 = L37c1make_global_variable(5, v1name, VV[50], ECL_T, ECL_SYM("TYPE",1346), T0);
   return value0;
L2:;
   if ((ecl_function_dispatch(cl_env_copy,VV[150])(1, v3) /*  VAR-P   */)!=ECL_NIL) { goto L8; }
   T0 = ecl_list1(v1name);
   value0 = ecl_function_dispatch(cl_env_copy,VV[134])(4, ECL_SYM("FORMAT-CONTROL",1263), VV[51], ECL_SYM("FORMAT-ARGUMENTS",1262), T0) /*  BABOON */;
   return value0;
L8:;
   {
    cl_object v5;
    v5 = ecl_function_dispatch(cl_env_copy,VV[111])(1, v3) /*  VAR-KIND */;
    if (!((v5)==(ECL_SYM("SPECIAL",791)))) { goto L15; }
    goto L10;
    goto L13;
L15:;
    goto L13;
L13:;
    if (!((v5)==(VV[1]))) { goto L18; }
    goto L10;
    goto L12;
L18:;
    goto L12;
L12:;
    if (!((v5)==(VV[52]))) { goto L22; }
    goto L10;
    goto L20;
L22:;
    goto L20;
L20:;
    if (!((v5)==(VV[36]))) { goto L24; }
    if (Null(v4)) { goto L10; }
    ecl_structure_set(v3,VV[11],3,ECL_T);
    ecl_structure_set(v3,VV[11],10,ECL_SYM("OBJECT",2105));
    goto L10;
L24:;
    if (Null(v4)) { goto L10; }
    T0 = ecl_function_dispatch(cl_env_copy,VV[126])(1, v3) /*  VAR-NAME */;
    ecl_function_dispatch(cl_env_copy,VV[155])(2, VV[55], T0) /*  CMPERR */;
   }
L10:;
   value0 = v3;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for PUSH-VARS                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L26push_vars(cl_object v1v)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_fixnum v2;
   T0 = ecl_car(ecl_symbol_value(VV[28]));
   v2 = ecl_length(T0);
   ecl_structure_set(v1v,VV[11],12,ecl_make_fixnum(v2));
  }
  value0 = ecl_function_dispatch(cl_env_copy,VV[171])(1, v1v) /*  CMP-ENV-REGISTER-VAR */;
  return value0;
 }
}
/*      function definition for UNBOXED                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L27unboxed(cl_object v1var)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = L33var_rep_type(v1var);
  {
   bool v2;
   v2 = (T0)==(ECL_SYM("OBJECT",1305));
   value0 = (v2)?ECL_NIL:ECL_T;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for LOCAL                                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L28local(cl_object v1var)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2;
   v2 = ecl_function_dispatch(cl_env_copy,VV[111])(1, v1var) /*  VAR-KIND */;
   if (!((v2)==(VV[36]))) { goto L7; }
   goto L2;
   goto L5;
L7:;
   goto L5;
L5:;
   if (!((v2)==(VV[52]))) { goto L11; }
   goto L2;
   goto L9;
L11:;
   goto L9;
L9:;
   if (!((v2)==(ECL_SYM("SPECIAL",791)))) { goto L15; }
   goto L2;
   goto L13;
L15:;
   goto L13;
L13:;
   if (!((v2)==(VV[1]))) { goto L18; }
   goto L2;
   goto L3;
L18:;
   goto L3;
  }
L3:;
  value0 = ecl_function_dispatch(cl_env_copy,VV[111])(1, v1var) /*  VAR-KIND */;
  return value0;
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for GLOBAL-VAR-P                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L29global_var_p(cl_object v1var)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2kind;
   v2kind = ecl_function_dispatch(cl_env_copy,VV[111])(1, v1var) /*  VAR-KIND */;
   value0 = ecl_make_bool((v2kind)==(VV[1]));
   if ((value0)!=ECL_NIL) { goto L3; }
   value0 = ecl_make_bool((v2kind)==(ECL_SYM("SPECIAL",791)));
   cl_env_copy->nvalues = 1;
   return value0;
L3:;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for USEFUL-VAR-P                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L30useful_var_p(cl_object v1var)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[133])(1, v1var) /*  VAR-REF */;
  value0 = ecl_make_bool(ecl_plusp(T0));
  if ((value0)!=ECL_NIL) { goto L2; }
  value0 = L29global_var_p(v1var);
  return value0;
L2:;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for C2VAR/LOCATION                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L31c2var_location(cl_object v1c1form, cl_object v2loc)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[130])(1, v1c1form) /*  C1FORM-PRIMARY-TYPE */;
  T1 = ecl_function_dispatch(cl_env_copy,VV[177])(2, v2loc, T0) /*  PRECISE-LOC-TYPE */;
  value0 = ecl_function_dispatch(cl_env_copy,VV[178])(1, T1) /*  UNWIND-EXIT */;
  return value0;
 }
}
/*      function definition for WT-VAR                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L32wt_var(cl_object v1var)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2var_loc;
   v2var_loc = ecl_function_dispatch(cl_env_copy,VV[180])(1, v1var) /*  VAR-LOC */;
   {
    cl_object v3;
    v3 = ecl_function_dispatch(cl_env_copy,VV[111])(1, v1var) /*  VAR-KIND */;
    if (!((v3)==(VV[52]))) { goto L3; }
    value0 = L36wt_env(v2var_loc);
    return value0;
L3:;
    if (!((v3)==(VV[36]))) { goto L5; }
    value0 = L35wt_lex(v2var_loc);
    return value0;
L5:;
    if (!((v3)==(ECL_SYM("SPECIAL",791)))) { goto L12; }
    goto L9;
    goto L10;
L12:;
    goto L10;
L10:;
    if (!((v3)==(VV[1]))) { goto L7; }
    goto L8;
L9:;
L8:;
    if (Null(ecl_function_dispatch(cl_env_copy,VV[181])(0) /*  SAFE-COMPILE */)) { goto L15; }
    value0 = ecl_function_dispatch(cl_env_copy,VV[182])(3, VV[65], v2var_loc, VV[66]) /*  WT */;
    return value0;
L15:;
    value0 = ecl_function_dispatch(cl_env_copy,VV[182])(3, VV[67], v2var_loc, VV[66]) /*  WT */;
    return value0;
L7:;
    value0 = ecl_function_dispatch(cl_env_copy,VV[182])(1, v2var_loc) /*  WT */;
    return value0;
   }
  }
 }
}
/*      function definition for VAR-REP-TYPE                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L33var_rep_type(cl_object v1var)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2;
   v2 = ecl_function_dispatch(cl_env_copy,VV[111])(1, v1var) /*  VAR-KIND */;
   if (!((v2)==(VV[36]))) { goto L7; }
   goto L4;
   goto L5;
L7:;
   goto L5;
L5:;
   if (!((v2)==(VV[52]))) { goto L11; }
   goto L4;
   goto L9;
L11:;
   goto L9;
L9:;
   if (!((v2)==(ECL_SYM("SPECIAL",791)))) { goto L15; }
   goto L4;
   goto L13;
L15:;
   goto L13;
L13:;
   if (!((v2)==(VV[1]))) { goto L2; }
   goto L3;
L4:;
L3:;
   value0 = ECL_SYM("OBJECT",1305);
   cl_env_copy->nvalues = 1;
   return value0;
L2:;
   value0 = ecl_function_dispatch(cl_env_copy,VV[111])(1, v1var) /*  VAR-KIND */;
   return value0;
  }
 }
}
/*      function definition for SET-VAR                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L34set_var(cl_object v1loc, cl_object v2var)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3var_loc;
   v3var_loc = ecl_function_dispatch(cl_env_copy,VV[180])(1, v2var) /*  VAR-LOC */;
   if ((ecl_function_dispatch(cl_env_copy,VV[150])(1, v2var) /*  VAR-P */)!=ECL_NIL) { goto L2; }
   T0 = ecl_list1(v2var);
   ecl_function_dispatch(cl_env_copy,VV[134])(4, ECL_SYM("FORMAT-CONTROL",1263), VV[70], ECL_SYM("FORMAT-ARGUMENTS",1262), T0) /*  BABOON */;
L2:;
   {
    cl_object v4;
    v4 = ecl_function_dispatch(cl_env_copy,VV[111])(1, v2var) /*  VAR-KIND */;
    if (!((v4)==(VV[52]))) { goto L5; }
    ecl_function_dispatch(cl_env_copy,VV[185])(0) /*  WT-NL           */;
    L36wt_env(v3var_loc);
    ecl_function_dispatch(cl_env_copy,VV[182])(1, VV[71]) /*  WT      */;
    T0 = L33var_rep_type(v2var);
    ecl_function_dispatch(cl_env_copy,VV[186])(2, T0, v1loc) /*  WT-COERCE-LOC */;
    value0 = ecl_function_dispatch(cl_env_copy,VV[182])(1, CODE_CHAR(59)) /*  WT */;
    return value0;
L5:;
    if (!((v4)==(VV[36]))) { goto L11; }
    ecl_function_dispatch(cl_env_copy,VV[185])(0) /*  WT-NL           */;
    L35wt_lex(v3var_loc);
    ecl_function_dispatch(cl_env_copy,VV[182])(1, VV[71]) /*  WT      */;
    T0 = L33var_rep_type(v2var);
    ecl_function_dispatch(cl_env_copy,VV[186])(2, T0, v1loc) /*  WT-COERCE-LOC */;
    value0 = ecl_function_dispatch(cl_env_copy,VV[182])(1, CODE_CHAR(59)) /*  WT */;
    return value0;
L11:;
    if (!((v4)==(ECL_SYM("SPECIAL",791)))) { goto L22; }
    goto L19;
    goto L20;
L22:;
    goto L20;
L20:;
    if (!((v4)==(VV[1]))) { goto L17; }
    goto L18;
L19:;
L18:;
    if (Null(ecl_function_dispatch(cl_env_copy,VV[181])(0) /*  SAFE-COMPILE */)) { goto L26; }
    ecl_function_dispatch(cl_env_copy,VV[185])(3, VV[72], v3var_loc, VV[73]) /*  WT-NL */;
    goto L25;
L26:;
    ecl_function_dispatch(cl_env_copy,VV[185])(3, VV[74], v3var_loc, VV[73]) /*  WT-NL */;
L25:;
    T0 = L33var_rep_type(v2var);
    ecl_function_dispatch(cl_env_copy,VV[186])(2, T0, v1loc) /*  WT-COERCE-LOC */;
    value0 = ecl_function_dispatch(cl_env_copy,VV[182])(1, VV[75]) /*  WT */;
    return value0;
L17:;
    ecl_function_dispatch(cl_env_copy,VV[185])(2, v3var_loc, VV[71]) /*  WT-NL */;
    T0 = L33var_rep_type(v2var);
    ecl_function_dispatch(cl_env_copy,VV[186])(2, T0, v1loc) /*  WT-COERCE-LOC */;
    value0 = ecl_function_dispatch(cl_env_copy,VV[182])(1, CODE_CHAR(59)) /*  WT */;
    return value0;
   }
  }
 }
}
/*      function definition for WT-LEX                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L35wt_lex(cl_object v1lex)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_CONSP(v1lex))) { goto L1; }
  T0 = ecl_car(v1lex);
  T1 = ecl_cdr(v1lex);
  value0 = ecl_function_dispatch(cl_env_copy,VV[182])(5, VV[77], T0, VV[78], T1, VV[79]) /*  WT */;
  return value0;
L1:;
  value0 = ecl_function_dispatch(cl_env_copy,VV[188])(1, v1lex) /*  WT-LCL */;
  return value0;
 }
}
/*      function definition for WT-ENV                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L36wt_env(cl_object v1clv)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_function_dispatch(cl_env_copy,VV[182])(3, VV[81], v1clv, VV[66]) /*  WT */;
  return value0;
 }
}
/*      function definition for C1MAKE-GLOBAL-VARIABLE                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L37c1make_global_variable(cl_narg narg, cl_object v1name, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2type;
  cl_object v3kind;
  cl_object v4warn;
  ecl_va_list args; ecl_va_start(args,v1name,narg,1);
  {
   cl_object keyvars[6];
   cl_parse_key(args,3,L37c1make_global_variablekeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   if (Null(keyvars[3])) {
    value0 = si_get_sysprop(v1name, VV[31]);
    if ((value0)!=ECL_NIL) { goto L3; }
    v2type = ECL_T;
    goto L1;
L3:;
    v2type = value0;
    goto L1;
L1:;
   } else {
    v2type = keyvars[0];
   }
   if (Null(keyvars[4])) {
    v3kind = VV[1];
   } else {
    v3kind = keyvars[1];
   }
   v4warn = keyvars[2];
  }
  {
   cl_object v5var;
   T0 = ecl_function_dispatch(cl_env_copy,VV[194])(1, v1name) /*  ADD-SYMBOL */;
   v5var = L1make_var(8, ECL_SYM("NAME",1300), v1name, VV[38], v3kind, ECL_SYM("TYPE",1346), v2type, VV[39], T0);
   if (Null(v4warn)) { goto L7; }
   if ((cl_constantp(1, v1name))!=ECL_NIL) { goto L7; }
   if ((L15special_variable_p(v1name))!=ECL_NIL) { goto L7; }
   if ((ecl_memql(v1name,ecl_symbol_value(VV[83])))!=ECL_NIL) { goto L7; }
   ecl_function_dispatch(cl_env_copy,VV[195])(1, v1name) /*  UNDEFINED-VARIABLE */;
   cl_set(VV[83],CONS(v1name,ecl_symbol_value(VV[83])));
L7:;
   value0 = v5var;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for REGISTER-GLOBAL                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L38register_global(cl_object v1name)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  cl_set(VV[24],cl_adjoin(2, v1name, ecl_symbol_value(VV[24])));
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 0;
  return value0;
 }
}
/*      function definition for C1SETQ                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L39c1setq(cl_object v1args)
{
 cl_object T0, T1, T2, T3, T4;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_fixnum v2l;
   v2l = ecl_length(v1args);
   if (!(ecl_oddp(ecl_make_fixnum(v2l)))) { goto L2; }
   ecl_function_dispatch(cl_env_copy,VV[155])(1, VV[86]) /*  CMPERR   */;
L2:;
   if (!((v2l)==0)) { goto L4; }
   value0 = ecl_function_dispatch(cl_env_copy,VV[198])(0) /*  C1NIL   */;
   return value0;
L4:;
   if (!((v2l)==(2))) { goto L6; }
   T0 = ecl_car(v1args);
   T1 = ecl_cadr(v1args);
   value0 = L40c1setq1(T0, T1);
   return value0;
L6:;
   {
    cl_object v3;
    cl_object v4;
    v3 = ecl_list1(ECL_NIL);
    v4 = v3;
L11:;
    if ((v1args)!=ECL_NIL) { goto L13; }
    goto L12;
L13:;
    {
     cl_object v5;
     v5 = v4;
     if (ecl_unlikely(ECL_ATOM(v5))) FEtype_error_cons(v5);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     T1 = v5;
    }
    {
     cl_object v5;
     v5 = v1args;
     {
      cl_object v6;
      v6 = v5;
      if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
     }
     if (Null(v5)) { goto L25; }
     {
      cl_object v6;
      v6 = ECL_CONS_CDR(v5);
      v1args = v6;
      v5 = ECL_CONS_CAR(v5);
     }
L25:;
     T2 = v5;
    }
    {
     cl_object v5;
     v5 = v1args;
     {
      cl_object v6;
      v6 = v5;
      if (ecl_unlikely(!ECL_LISTP(v6))) FEtype_error_list(v6);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
     }
     if (Null(v5)) { goto L36; }
     {
      cl_object v6;
      v6 = ECL_CONS_CDR(v5);
      v1args = v6;
      v5 = ECL_CONS_CAR(v5);
     }
L36:;
     T3 = v5;
    }
    T4 = cl_list(3, ECL_SYM("SETQ",753), T2, T3);
    v4 = ecl_list1(T4);
    (ECL_CONS_CDR(T1)=v4,T1);
    goto L11;
L12:;
    T0 = ecl_cdr(v3);
    goto L8;
   }
L8:;
   value0 = ecl_function_dispatch(cl_env_copy,VV[199])(1, T0) /*  C1PROGN */;
   return value0;
  }
 }
}
/*      function definition for C1SETQ1                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L40c1setq1(cl_object v1name, cl_object v2form)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (ECL_SYMBOLP(v1name)) { goto L1; }
  ecl_function_dispatch(cl_env_copy,VV[155])(2, VV[34], v1name) /*  CMPERR */;
L1:;
  if (Null(cl_constantp(1, v1name))) { goto L3; }
  ecl_function_dispatch(cl_env_copy,VV[155])(2, VV[88], v1name) /*  CMPERR */;
L3:;
  v1name = L19chk_symbol_macrolet(v1name);
  if (!(ECL_SYMBOLP(v1name))) { goto L7; }
  {
   cl_object v3name;
   cl_object v4type;
   cl_object v5form;
   v3name = L25c1vref(v1name);
   v4type = ecl_function_dispatch(cl_env_copy,VV[124])(1, v3name) /*  VAR-TYPE */;
   if (Null(ecl_function_dispatch(cl_env_copy,VV[201])(1, v4type) /*  TRIVIAL-TYPE-P */)) { goto L13; }
   T0 = v2form;
   goto L12;
L13:;
   T0 = cl_list(3, ECL_SYM("CHECKED-VALUE",2040), v4type, v2form);
L12:;
   v5form = ecl_function_dispatch(cl_env_copy,VV[202])(1, T0) /*  C1EXPR */;
   T0 = ecl_function_dispatch(cl_env_copy,VV[203])(1, v5form) /*  C1FORM-TYPE */;
   T1 = ecl_function_dispatch(cl_env_copy,VV[162])(6, ECL_SYM("SETQ",753), ECL_SYM("TYPE",1346), T0, VV[45], v3name, v5form) /*  MAKE-C1FORM* */;
   value0 = L12add_to_set_nodes(v3name, T1);
   return value0;
  }
L7:;
  value0 = cl_list(3, ECL_SYM("SETF",752), v1name, v2form);
  return value0;
 }
}
/*      function definition for C2SETQ                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L41c2setq(cl_object v1c1form, cl_object v2vref, cl_object v3form)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  ecl_bds_bind(cl_env_copy,VV[90],v2vref);        /*  *DESTINATION*   */
  ecl_function_dispatch(cl_env_copy,VV[205])(1, v3form) /*  C2EXPR*   */;
  ecl_bds_unwind1(cl_env_copy);
  T0 = ecl_function_dispatch(cl_env_copy,VV[128])(1, v3form) /*  C1FORM-NAME */;
  if (!((T0)==(ECL_SYM("LOCATION",1842)))) { goto L2; }
  T0 = ecl_function_dispatch(cl_env_copy,VV[129])(1, v3form) /*  C1FORM-ARGS */;
  T1 = ecl_car(T0);
  value0 = L31c2var_location(v3form, T1);
  return value0;
L2:;
  value0 = ecl_function_dispatch(cl_env_copy,VV[178])(1, v2vref) /*  UNWIND-EXIT */;
  return value0;
 }
}
/*      function definition for C1PROGV                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L42c1progv(cl_object v1args)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  ecl_function_dispatch(cl_env_copy,VV[207])(3, ECL_SYM("PROGV",675), v1args, ecl_make_fixnum(2)) /*  CHECK-ARGS-NUMBER */;
  {
   cl_object v2;
   cl_object v3;
   cl_object v4;
   T0 = ecl_car(v1args);
   v2 = ecl_function_dispatch(cl_env_copy,VV[202])(1, T0) /*  C1EXPR  */;
   T0 = ecl_cadr(v1args);
   v3 = ecl_function_dispatch(cl_env_copy,VV[202])(1, T0) /*  C1EXPR  */;
   T0 = ecl_cddr(v1args);
   v4 = ecl_function_dispatch(cl_env_copy,VV[199])(1, T0) /*  C1PROGN */;
   T0 = ecl_function_dispatch(cl_env_copy,VV[203])(1, v4) /*  C1FORM-TYPE */;
   value0 = ecl_function_dispatch(cl_env_copy,VV[162])(7, ECL_SYM("PROGV",675), ECL_SYM("TYPE",1346), T0, VV[45], v2, v3, v4) /*  MAKE-C1FORM* */;
   return value0;
  }
 }
}
/*      function definition for C2PROGV                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L43c2progv(cl_object v1c1form, cl_object v2symbols, cl_object v3values, cl_object v4body)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v5lcl;
   cl_object v6sym_loc;
   cl_object v7val_loc;
   ecl_bds_push(cl_env_copy,VV[93]);              /*  *LCL*           */
   v5lcl = ecl_function_dispatch(cl_env_copy,VV[166])(0) /*  NEXT-LCL */;
   v6sym_loc = L23make_lcl_var(0);
   v7val_loc = L23make_lcl_var(0);
   ecl_function_dispatch(cl_env_copy,VV[209])(0)  /*  WT-NL-OPEN-BRACE */;
   ecl_function_dispatch(cl_env_copy,VV[185])(7, VV[94], v6sym_loc, VV[95], v7val_loc, VV[96], v5lcl, VV[97]) /*  WT-NL */;
   ecl_bds_bind(cl_env_copy,VV[90],v6sym_loc);    /*  *DESTINATION*   */
   ecl_function_dispatch(cl_env_copy,VV[205])(1, v2symbols) /*  C2EXPR* */;
   ecl_bds_unwind1(cl_env_copy);
   ecl_bds_bind(cl_env_copy,VV[90],v7val_loc);    /*  *DESTINATION*   */
   ecl_function_dispatch(cl_env_copy,VV[205])(1, v3values) /*  C2EXPR* */;
   ecl_bds_unwind1(cl_env_copy);
   T0 = CONS(v5lcl,ecl_symbol_value(VV[98]));
   ecl_bds_bind(cl_env_copy,VV[98],T0);           /*  *UNWIND-EXIT*   */
   ecl_function_dispatch(cl_env_copy,VV[185])(6, v5lcl, VV[99], v6sym_loc, VV[95], v7val_loc, VV[75]) /*  WT-NL */;
   ecl_function_dispatch(cl_env_copy,VV[210])(1, v4body) /*  C2EXPR   */;
   value0 = ecl_function_dispatch(cl_env_copy,VV[211])(0) /*  WT-NL-CLOSE-BRACE */;
   ecl_bds_unwind1(cl_env_copy);
   ecl_bds_unwind1(cl_env_copy);
   return value0;
  }
 }
}
/*      function definition for C1PSETQ                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L44c1psetq(cl_object v1old_args)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2args;
   cl_object v3use_psetf;
   v2args = ECL_NIL;
   v3use_psetf = ECL_NIL;
   {
    cl_object v4l;
    v4l = v1old_args;
    goto L7;
L6:;
    {
     cl_object v5var;
     {
      cl_object v6;
      v6 = v4l;
      {
       cl_object v7;
       v7 = v6;
       if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v6)) { goto L15; }
      {
       cl_object v7;
       v7 = ECL_CONS_CDR(v6);
       v4l = v7;
       v6 = ECL_CONS_CAR(v6);
      }
L15:;
      v5var = v6;
     }
     if (ECL_SYMBOLP(v5var)) { goto L21; }
     ecl_function_dispatch(cl_env_copy,VV[155])(2, VV[34], v5var) /*  CMPERR */;
L21:;
     if (!(ecl_endp(v4l))) { goto L23; }
     ecl_function_dispatch(cl_env_copy,VV[155])(2, VV[101], v5var) /*  CMPERR */;
L23:;
     v5var = L19chk_symbol_macrolet(v5var);
     {
      cl_object v6;
      v6 = v4l;
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
       v4l = v7;
       v6 = ECL_CONS_CAR(v6);
      }
L34:;
      T0 = v6;
     }
     T1 = cl_list(2, v5var, T0);
     v2args = ecl_nconc(v2args,T1);
     if (!(ECL_SYMBOLP(v5var))) { goto L40; }
     if (Null(cl_constantp(1, v5var))) { goto L9; }
     ecl_function_dispatch(cl_env_copy,VV[155])(2, VV[88], v5var) /*  CMPERR */;
     goto L9;
L40:;
     v3use_psetf = ECL_T;
    }
L9:;
L7:;
    if (ecl_endp(v4l)) { goto L44; }
    goto L6;
L44:;
   }
   if (Null(v3use_psetf)) { goto L46; }
   value0 = CONS(ECL_SYM("PSETF",677),v2args);
   cl_env_copy->nvalues = 1;
   return value0;
L46:;
   {
    cl_object v4vrefs;
    cl_object v5forms;
    v4vrefs = ECL_NIL;
    v5forms = ECL_NIL;
    goto L52;
L51:;
    {
     cl_object v6vref;
     cl_object v7type;
     cl_object v8form;
     {
      cl_object v9;
      v9 = v2args;
      {
       cl_object v10;
       v10 = v9;
       if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v9)) { goto L61; }
      {
       cl_object v10;
       v10 = ECL_CONS_CDR(v9);
       v2args = v10;
       v9 = ECL_CONS_CAR(v9);
      }
L61:;
      T0 = v9;
     }
     v6vref = L25c1vref(T0);
     v7type = ecl_function_dispatch(cl_env_copy,VV[124])(1, v6vref) /*  VAR-TYPE */;
     {
      cl_object v9;
      v9 = v2args;
      {
       cl_object v10;
       v10 = v9;
       if (ecl_unlikely(!ECL_LISTP(v10))) FEtype_error_list(v10);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
      }
      if (Null(v9)) { goto L73; }
      {
       cl_object v10;
       v10 = ECL_CONS_CDR(v9);
       v2args = v10;
       v9 = ECL_CONS_CAR(v9);
      }
L73:;
      v8form = v9;
     }
     v4vrefs = CONS(v6vref,v4vrefs);
     if (Null(ecl_function_dispatch(cl_env_copy,VV[201])(1, v7type) /*  TRIVIAL-TYPE-P */)) { goto L83; }
     T0 = v8form;
     goto L82;
L83:;
     T0 = cl_list(3, ECL_SYM("CHECKED-VALUE",2040), v7type, v8form);
L82:;
     T1 = ecl_function_dispatch(cl_env_copy,VV[202])(1, T0) /*  C1EXPR */;
     v5forms = CONS(T1,v5forms);
    }
L52:;
    if (ecl_endp(v2args)) { goto L85; }
    goto L51;
L85:;
    T0 = cl_reverse(v4vrefs);
    T1 = cl_nreverse(v5forms);
    T2 = ecl_function_dispatch(cl_env_copy,VV[162])(6, ECL_SYM("PSETQ",678), ECL_SYM("TYPE",1346), VV[102], VV[45], T0, T1) /*  MAKE-C1FORM* */;
    value0 = L13add_to_set_nodes_of_var_list(v4vrefs, T2);
    return value0;
   }
  }
 }
}
/*      function definition for C2PSETQ                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L45c2psetq(cl_object v1c1form, cl_object v2vrefs, cl_object v3forms)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4saves;
   cl_object v5braces;
   ecl_bds_push(cl_env_copy,VV[93]);              /*  *LCL*           */
   v4saves = ECL_NIL;
   v5braces = ecl_symbol_value(VV[104]);
   {
    cl_object v6vrefs;
    cl_object v7forms;
    cl_object v8var;
    cl_object v9form;
    v6vrefs = v2vrefs;
    v7forms = v3forms;
    v8var = ECL_NIL;
    v9form = ECL_NIL;
    goto L10;
L9:;
    v8var = ecl_car(v6vrefs);
    v9form = ecl_car(v7forms);
    T0 = ecl_cdr(v7forms);
    if ((L3var_changed_in_form_list(v8var, T0))!=ECL_NIL) { goto L19; }
    T0 = ecl_cdr(v7forms);
    if (Null(L2var_referenced_in_form_list(v8var, T0))) { goto L17; }
    goto L18;
L19:;
L18:;
    {
     cl_object v10;
     v10 = ecl_function_dispatch(cl_env_copy,VV[128])(1, v9form) /*  C1FORM-NAME */;
     if (!((v10)==(ECL_SYM("LOCATION",1842)))) { goto L22; }
     T0 = ecl_function_dispatch(cl_env_copy,VV[129])(1, v9form) /*  C1FORM-ARGS */;
     T1 = ecl_car(T0);
     T2 = CONS(v8var,T1);
     v4saves = CONS(T2,v4saves);
     goto L16;
L22:;
     if (Null(L28local(v8var))) { goto L25; }
     {
      cl_object v11rep_type;
      cl_object v12rep_type_c_name;
      cl_object v13temp;
      v11rep_type = L33var_rep_type(v8var);
      v12rep_type_c_name = ecl_function_dispatch(cl_env_copy,VV[214])(1, v11rep_type) /*  REP-TYPE->C-NAME */;
      v13temp = L23make_lcl_var(2, VV[105], v11rep_type);
      ecl_function_dispatch(cl_env_copy,VV[209])(0) /*  WT-NL-OPEN-BRACE */;
      ecl_function_dispatch(cl_env_copy,VV[185])(5, v12rep_type_c_name, VV[106], ecl_symbol_value(VV[107]), v13temp, VV[97]) /*  WT-NL */;
      ecl_bds_bind(cl_env_copy,VV[90],v13temp);   /*  *DESTINATION*   */
      ecl_function_dispatch(cl_env_copy,VV[205])(1, v9form) /*  C2EXPR* */;
      ecl_bds_unwind1(cl_env_copy);
      T0 = CONS(v8var,v13temp);
      v4saves = CONS(T0,v4saves);
      goto L16;
     }
L25:;
     T0 = L24make_temp_var(0);
     ecl_bds_bind(cl_env_copy,VV[90],T0);         /*  *DESTINATION*   */
     ecl_function_dispatch(cl_env_copy,VV[205])(1, v9form) /*  C2EXPR* */;
     T0 = CONS(v8var,ecl_symbol_value(VV[90]));
     v4saves = CONS(T0,v4saves);
     ecl_bds_unwind1(cl_env_copy);
     goto L16;
    }
L17:;
    ecl_bds_bind(cl_env_copy,VV[90],v8var);       /*  *DESTINATION*   */
    ecl_function_dispatch(cl_env_copy,VV[205])(1, v9form) /*  C2EXPR* */;
    ecl_bds_unwind1(cl_env_copy);
L16:;
    v6vrefs = ecl_cdr(v6vrefs);
    v7forms = ecl_cdr(v7forms);
L10:;
    if (v6vrefs==ECL_NIL) { goto L39; }
    goto L9;
L39:;
   }
   {
    cl_object v6;
    v6 = v4saves;
    goto L45;
L44:;
    {
     cl_object v7save;
     v7save = ecl_car(v6);
     T0 = ecl_cdr(v7save);
     T1 = ecl_car(v7save);
     L34set_var(T0, T1);
    }
    v6 = ecl_cdr(v6);
L45:;
    if (Null(v6)) { goto L52; }
    goto L44;
L52:;
   }
   ecl_function_dispatch(cl_env_copy,VV[215])(1, v5braces) /*  WT-NL-CLOSE-MANY-BRACES */;
   value0 = ecl_function_dispatch(cl_env_copy,VV[178])(1, ECL_NIL) /*  UNWIND-EXIT */;
   ecl_bds_unwind1(cl_env_copy);
   return value0;
  }
 }
}

#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/cmp/cmpvar.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclVyaXMxa7_8yW6lq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;CMPVAR.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclVyaXMxa7_8yW6lq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_cmp_defun(VV[109]);                         /*  MAKE-VAR        */
  ecl_cmp_defun(VV[113]);                         /*  VAR-REFERENCED-IN-FORM-LIST */
  ecl_cmp_defun(VV[114]);                         /*  VAR-CHANGED-IN-FORM-LIST */
  ecl_cmp_defun(VV[115]);                         /*  VAR-REFERENCED-IN-FORM */
  ecl_cmp_defun(VV[119]);                         /*  VAR-CHANGED-IN-FORM */
  ecl_cmp_defun(VV[123]);                         /*  UPDATE-VARIABLE-TYPE */
  ecl_cmp_defun(VV[131]);                         /*  VAR-READ-FORMS  */
  ecl_cmp_defun(VV[132]);                         /*  ASSERT-VAR-REF-VALUE */
  ecl_cmp_defun(VV[135]);                         /*  ASSERT-VAR-NOT-IGNORED */
  ecl_cmp_defun(VV[138]);                         /*  DELETE-FROM-READ-NODES */
  ecl_cmp_defun(VV[140]);                         /*  ADD-TO-READ-NODES */
  ecl_cmp_defun(VV[144]);                         /*  ADD-TO-SET-NODES */
  ecl_cmp_defun(VV[145]);                         /*  ADD-TO-SET-NODES-OF-VAR-LIST */
  ecl_cmp_defun(VV[146]);                         /*  CHECK-GLOBAL    */
  ecl_cmp_defun(VV[147]);                         /*  SPECIAL-VARIABLE-P */
  ecl_cmp_defun(VV[149]);                         /*  LOCAL-VARIABLE-P */
  ecl_cmp_defun(VV[151]);                         /*  SYMBOL-MACRO-P  */
  ecl_cmp_defun(VV[152]);                         /*  VARIABLE-TYPE-IN-ENV */
  ecl_cmp_defun(VV[153]);                         /*  CHK-SYMBOL-MACROLET */
  ecl_cmp_defun(VV[154]);                         /*  C1MAKE-VAR      */
  ecl_cmp_defun(VV[158]);                         /*  CHECK-VREF      */
  ecl_cmp_defun(VV[161]);                         /*  C1VAR           */
  ecl_cmp_defun(VV[163]);                         /*  MAKE-LCL-VAR    */
  ecl_cmp_defun(VV[167]);                         /*  MAKE-TEMP-VAR   */
  ecl_cmp_defun(VV[169]);                         /*  C1VREF          */
  ecl_cmp_defun(VV[170]);                         /*  PUSH-VARS       */
  ecl_cmp_defun(VV[172]);                         /*  UNBOXED         */
  ecl_cmp_defun(VV[173]);                         /*  LOCAL           */
  ecl_cmp_defun(VV[174]);                         /*  GLOBAL-VAR-P    */
  ecl_cmp_defun(VV[175]);                         /*  USEFUL-VAR-P    */
  ecl_cmp_defun(VV[176]);                         /*  C2VAR/LOCATION  */
  ecl_cmp_defun(VV[179]);                         /*  WT-VAR          */
  ecl_cmp_defun(VV[183]);                         /*  VAR-REP-TYPE    */
  ecl_cmp_defun(VV[184]);                         /*  SET-VAR         */
  ecl_cmp_defun(VV[187]);                         /*  WT-LEX          */
  ecl_cmp_defun(VV[189]);                         /*  WT-ENV          */
  ecl_cmp_defun(VV[190]);                         /*  C1MAKE-GLOBAL-VARIABLE */
  ecl_cmp_defun(VV[196]);                         /*  REGISTER-GLOBAL */
  ecl_cmp_defun(VV[197]);                         /*  C1SETQ          */
  ecl_cmp_defun(VV[200]);                         /*  C1SETQ1         */
  ecl_cmp_defun(VV[204]);                         /*  C2SETQ          */
  ecl_cmp_defun(VV[206]);                         /*  C1PROGV         */
  ecl_cmp_defun(VV[208]);                         /*  C2PROGV         */
  ecl_cmp_defun(VV[212]);                         /*  C1PSETQ         */
  ecl_cmp_defun(VV[213]);                         /*  C2PSETQ         */
}
