/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;CMPFORM.LSP                                   */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/cmp/cmpform.eclh"
/*      function definition for PRINT-C1FORM                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1print_c1form(cl_object v1form, cl_object v2stream)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[55])(1, v1form) /*  C1FORM-NAME */;
  T1 = si_pointer(v1form);
  value0 = cl_format(4, v2stream, VV[0], T0, T1);
  return value0;
 }
}
/*      function definition for MAKE-C1FORM                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2make_c1form(cl_narg narg, cl_object v1name, cl_object v2subform, ...)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 {
  cl_object v3args;
  ecl_va_list args; ecl_va_start(args,v2subform,narg,2);
  v3args = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   cl_object v4form;
   T0 = ecl_function_dispatch(cl_env_copy,VV[57])(1, v2subform) /*  INFO-TYPE */;
   T1 = ecl_function_dispatch(cl_env_copy,VV[58])(1, v2subform) /*  INFO-SP-CHANGE */;
   T2 = ecl_function_dispatch(cl_env_copy,VV[59])(1, v2subform) /*  INFO-VOLATILE */;
   v4form = ecl_function_dispatch(cl_env_copy,VV[60])(18, ECL_SYM("NAME",1300), v1name, VV[2], v3args, ECL_SYM("TYPE",1346), T0, VV[3], T1, VV[4], T2, VV[5], ecl_symbol_value(VV[6]), VV[7], ecl_symbol_value(VV[8]), ECL_SYM("FILE",1260), ecl_symbol_value(ECL_SYM("*COMPILE-FILE-TRUENAME*",29)), VV[9], ecl_symbol_value(VV[10])) /*  DO-MAKE-C1FORM */;
   L5c1form_add_info(v4form, v3args);
   value0 = v4form;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for MAKE-C1FORM*                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3make_c1form_(cl_narg narg, cl_object v1name, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2args;
  ecl_va_list args; ecl_va_start(args,v1name,narg,1);
  v2args = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   cl_object v3info_args;
   cl_object v4form_args;
   v3info_args = ECL_NIL;
   v4form_args = ECL_NIL;
   {
    cl_object v5l;
    v5l = v2args;
    goto L7;
L6:;
    {
     cl_object v6key;
     v6key = ecl_car(v5l);
     if ((cl_keywordp(v6key))!=ECL_NIL) { goto L11; }
     T0 = ecl_list1(v6key);
     ecl_function_dispatch(cl_env_copy,VV[62])(4, ECL_SYM("FORMAT-CONTROL",1263), VV[12], ECL_SYM("FORMAT-ARGUMENTS",1262), T0) /*  BABOON */;
     goto L9;
L11:;
     if (!((v6key)==(VV[2]))) { goto L13; }
     v4form_args = ecl_cdr(v5l);
     goto L3;
L13:;
     T0 = ecl_cadr(v5l);
     v3info_args = cl_listX(3, v6key, T0, v3info_args);
     v5l = ecl_cdr(v5l);
    }
L9:;
    v5l = ecl_cdr(v5l);
L7:;
    if (ecl_endp(v5l)) { goto L22; }
    goto L6;
L22:;
   }
L3:;
   {
    cl_object v5form;
    T0 = ecl_fdefinition(VV[60]);
    v5form = cl_apply(14, T0, ECL_SYM("NAME",1300), v1name, VV[2], v4form_args, VV[5], ecl_symbol_value(VV[6]), VV[7], ecl_symbol_value(VV[8]), ECL_SYM("FILE",1260), ecl_symbol_value(ECL_SYM("*COMPILE-FILE-TRUENAME*",29)), VV[9], ecl_symbol_value(VV[10]), v3info_args);
    L5c1form_add_info(v5form, v4form_args);
    value0 = v5form;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for C1FORM-ADD-INFO-LOOP                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L4c1form_add_info_loop(cl_object v1form, cl_object v2dependents)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3subform;
   v3subform = ECL_NIL;
L2:;
   if (ECL_CONSP(v2dependents)) { goto L4; }
   goto L3;
L4:;
   {
    cl_object v4;
    v4 = v2dependents;
    {
     cl_object v5;
     v5 = v4;
     if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v4)) { goto L13; }
    {
     cl_object v5;
     v5 = ECL_CONS_CDR(v4);
     v2dependents = v5;
     v4 = ECL_CONS_CAR(v4);
    }
L13:;
    v3subform = v4;
   }
   if (Null(ecl_function_dispatch(cl_env_copy,VV[64])(1, v3subform) /*  C1FORM-P */)) { goto L6; }
   if (Null(ecl_function_dispatch(cl_env_copy,VV[65])(1, v3subform) /*  C1FORM-SP-CHANGE */)) { goto L19; }
   ecl_structure_set(v1form,VV[14],2,ECL_T);
   ecl_structure_set(v1form,VV[14],8,ECL_T);
L19:;
   if (Null(ecl_function_dispatch(cl_env_copy,VV[66])(1, v3subform) /*  C1FORM-SIDE-EFFECTS */)) { goto L22; }
   ecl_structure_set(v1form,VV[14],8,ECL_T);
L22:;
   T0 = ecl_function_dispatch(cl_env_copy,VV[55])(1, v3subform) /*  C1FORM-NAME */;
   if ((T0)==(ECL_SYM("LOCATION",1842))) { goto L6; }
   T0 = ecl_function_dispatch(cl_env_copy,VV[67])(1, v3subform) /*  C1FORM-PARENTS */;
   if (Null(ecl_cdr(T0))) { goto L25; }
   cl_error(1, VV[15]);
L25:;
   {
    cl_object v4;
    T0 = ecl_function_dispatch(cl_env_copy,VV[67])(1, v3subform) /*  C1FORM-PARENTS */;
    T1 = ecl_function_dispatch(cl_env_copy,VV[67])(1, v1form) /*  C1FORM-PARENTS */;
    v4 = ecl_nconc(T0,T1);
    ecl_structure_set(v3subform,VV[14],5,v4);
   }
L6:;
   if (!(ECL_CONSP(v3subform))) { goto L28; }
   L4c1form_add_info_loop(v1form, v3subform);
L28:;
   goto L2;
L3:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for C1FORM-ADD-INFO                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L5c1form_add_info(cl_object v1form, cl_object v2dependents)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3record;
   T0 = ecl_function_dispatch(cl_env_copy,VV[55])(1, v1form) /*  C1FORM-NAME */;
   v3record = ecl_gethash_safe(T0,ecl_symbol_value(VV[17]),ECL_NIL);
   if ((v3record)!=ECL_NIL) { goto L3; }
   T0 = ecl_function_dispatch(cl_env_copy,VV[55])(1, v1form) /*  C1FORM-NAME */;
   cl_error(2, VV[18], T0);
L3:;
   {
    cl_object v4;
    cl_object v5;
    cl_object v6;
    v4 = ecl_car(v3record);
    v5 = ecl_function_dispatch(cl_env_copy,VV[65])(1, v1form) /*  C1FORM-SP-CHANGE */;
    v6 = ecl_cadr(v3record);
    {
     cl_object v7;
     value0 = ecl_function_dispatch(cl_env_copy,VV[66])(1, v1form) /*  C1FORM-SIDE-EFFECTS */;
     if ((value0)!=ECL_NIL) { goto L12; }
     value0 = v5;
     if ((value0)!=ECL_NIL) { goto L12; }
     v7 = v6;
     goto L10;
L12:;
     v7 = value0;
     goto L10;
L10:;
     ecl_structure_set(v1form,VV[14],8,v7);
    }
    {
     cl_object v7;
     v7 = ecl_list1(v1form);
     ecl_structure_set(v1form,VV[14],5,v7);
    }
    if (v4==ECL_NIL) { goto L1; }
    T0 = ecl_function_dispatch(cl_env_copy,VV[22])(1, v1form) /*  C1FORM-ARGS */;
    {
     cl_fixnum v7;
     v7 = ecl_length(T0);
     if (ecl_number_equalp(v4,ecl_make_fixnum(v7))) { goto L1; }
    }
    cl_error(2, VV[19], v1form);
   }
  }
L1:;
  value0 = L4c1form_add_info_loop(v1form, v2dependents);
  return value0;
 }
}
/*      function definition for COPY-C1FORM                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L6copy_c1form(cl_object v1form)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_copy_structure(v1form);
  return value0;
 }
}
/*      local function C1FORM-ARG                                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC7c1form_arg(cl_object v1, cl_object v2)
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
   cl_object v4nth;
   cl_object v5form;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[71])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4nth = v6;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[71])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5form = v6;
   }
   if (Null(v3)) { goto L14; }
   ecl_function_dispatch(cl_env_copy,VV[72])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L14:;
   if (!((v4nth)==(ecl_make_fixnum(0)))) { goto L16; }
   T0 = cl_list(2, VV[22], v5form);
   value0 = cl_list(2, ECL_SYM("FIRST",373), T0);
   return value0;
L16:;
   if (!((v4nth)==(ecl_make_fixnum(1)))) { goto L18; }
   T0 = cl_list(2, VV[22], v5form);
   value0 = cl_list(2, ECL_SYM("SECOND",742), T0);
   return value0;
L18:;
   T0 = cl_list(2, VV[22], v5form);
   value0 = cl_list(3, ECL_SYM("NTH",604), v4nth, T0);
   return value0;
  }
 }
}
/*      function definition for C1FORM-VOLATILE*                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L8c1form_volatile_(cl_object v1form)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_function_dispatch(cl_env_copy,VV[74])(1, v1form) /*  C1FORM-VOLATILE */)) { goto L1; }
  value0 = VV[24];
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  value0 = VV[25];
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for C1FORM-PRIMARY-TYPE                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L9c1form_primary_type(cl_object v1form)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[76])(1, v1form) /*  C1FORM-TYPE */;
  value0 = ecl_function_dispatch(cl_env_copy,VV[77])(1, T0) /*  VALUES-TYPE-PRIMARY-TYPE */;
  return value0;
 }
}
/*      function definition for LOCATION-PRIMARY-TYPE                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L10location_primary_type(cl_object v1form)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L9c1form_primary_type(v1form);
  return value0;
 }
}
/*      function definition for FIND-FORM-IN-NODE-LIST                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L11find_form_in_node_list(cl_object v1form, cl_object v2list)
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
   cl_object v4;
   {
    cl_object v5form_parents;
    v5form_parents = ecl_function_dispatch(cl_env_copy,VV[67])(1, v1form) /*  C1FORM-PARENTS */;
    {
     cl_object v6presumed_child_parents;
     cl_object v7;
     v6presumed_child_parents = ECL_NIL;
     {
      cl_object v8;
      v8 = v2list;
      if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v7 = v8;
     }
     {
      cl_object v8;
      v8 = ECL_NIL;
L8:;
      if (!(ecl_endp(v7))) { goto L10; }
      goto L9;
L10:;
      v6presumed_child_parents = _ecl_car(v7);
      {
       cl_object v9;
       v9 = _ecl_cdr(v7);
       if (ecl_unlikely(!ECL_LISTP(v9))) FEtype_error_list(v9);
       value0 = ECL_NIL;
       cl_env_copy->nvalues = 0;
       v7 = v9;
      }
      v8 = cl_tailp(v5form_parents, v6presumed_child_parents);
      if (Null(v8)) { goto L18; }
      v3 = v8;
      goto L1;
L18:;
      goto L8;
L9:;
      v3 = ECL_NIL;
     }
    }
   }
L1:;
   {
    cl_object v5presumed_child_parents;
    cl_object v6;
    v5presumed_child_parents = ECL_NIL;
    {
     cl_object v7;
     v7 = v2list;
     if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v6 = v7;
    }
    {
     cl_object v7;
     v7 = ECL_NIL;
L28:;
     if (!(ecl_endp(v6))) { goto L30; }
     goto L29;
L30:;
     v5presumed_child_parents = _ecl_car(v6);
     {
      cl_object v8;
      v8 = _ecl_cdr(v6);
      if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
      value0 = ECL_NIL;
      cl_env_copy->nvalues = 0;
      v6 = v8;
     }
     v7 = si_memq(v1form,v5presumed_child_parents);
     if (Null(v7)) { goto L38; }
     v4 = v7;
     goto L22;
L38:;
     goto L28;
L29:;
     v4 = ECL_NIL;
    }
   }
L22:;
   if (Null(v3)) { goto L46; }
   T0 = ECL_T;
   goto L44;
L46:;
   T0 = ECL_NIL;
   goto L44;
L44:;
   if (Null(v4)) { goto L50; }
   T1 = ECL_T;
   goto L48;
L50:;
   T1 = ECL_NIL;
   goto L48;
L48:;
   if ((T0)==(T1)) { goto L42; }
   ecl_function_dispatch(cl_env_copy,VV[62])(2, ECL_SYM("FORMAT-CONTROL",1263), VV[29]) /*  BABOON */;
L42:;
   value0 = v3;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for ADD-FORM-TO-NODE-LIST                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L12add_form_to_node_list(cl_object v1form, cl_object v2list)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[67])(1, v1form) /*  C1FORM-PARENTS */;
  value0 = CONS(T0,v2list);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for DELETE-FORM-FROM-NODE-LIST            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L13delete_form_from_node_list(cl_object v1form, cl_object v2list)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3parents;
   v3parents = ecl_function_dispatch(cl_env_copy,VV[67])(1, v1form) /*  C1FORM-PARENTS */;
   if ((ecl_memql(v3parents,v2list))!=ECL_NIL) { goto L2; }
   T0 = cl_list(2, v1form, v2list);
   ecl_function_dispatch(cl_env_copy,VV[62])(4, ECL_SYM("FORMAT-CONTROL",1263), VV[32], ECL_SYM("FORMAT-ARGUMENTS",1262), T0) /*  BABOON */;
L2:;
   value0 = cl_delete(2, v3parents, v2list);
   return value0;
  }
 }
}
/*      function definition for TRAVERSE-C1FORM-TREE                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L14traverse_c1form_tree(cl_object v1tree, cl_object v2function)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_CONSP(v1tree))) { goto L1; }
  {
   cl_object v3f;
   cl_object v4;
   v3f = ECL_NIL;
   {
    cl_object v5;
    v5 = v1tree;
    if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v4 = v5;
   }
L7:;
   if (!(ecl_endp(v4))) { goto L9; }
   goto L8;
L9:;
   v3f = _ecl_car(v4);
   {
    cl_object v5;
    v5 = _ecl_cdr(v4);
    if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v4 = v5;
   }
   L14traverse_c1form_tree(v3f, v2function);
   goto L7;
L8:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
L1:;
  if (Null(ecl_function_dispatch(cl_env_copy,VV[64])(1, v1tree) /*  C1FORM-P */)) { goto L19; }
  {
   cl_object v5;
   cl_object v6f;
   cl_object v7;
   v5 = ecl_function_dispatch(cl_env_copy,VV[22])(1, v1tree) /*  C1FORM-ARGS */;
   v6f = ECL_NIL;
   {
    cl_object v8;
    v8 = v5;
    if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v7 = v8;
   }
L27:;
   if (!(ecl_endp(v7))) { goto L29; }
   goto L28;
L29:;
   v6f = _ecl_car(v7);
   {
    cl_object v8;
    v8 = _ecl_cdr(v7);
    if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v7 = v8;
   }
   L14traverse_c1form_tree(v6f, v2function);
   goto L27;
L28:;
  }
  value0 = ecl_function_dispatch(cl_env_copy,v2function)(1, v1tree);
  return value0;
L19:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for C1FORM-MOVABLE-P                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L16c1form_movable_p(cl_object volatile v1form)
{
 volatile cl_object lex0[1];
 cl_object volatile env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   lex0[0] = ECL_NEW_FRAME_ID(cl_env_copy);       /*  C1FORM-MOVABLE-P */
   {
    ecl_frs_push(cl_env_copy,lex0[0]);
    if (__ecl_frs_push_result!=0) {
    value0 = cl_env_copy->values[0];
    ecl_frs_pop(cl_env_copy);
    return value0;
    } else {
    value0 = LC15abort_on_not_pure(lex0, v1form);
    ecl_frs_pop(cl_env_copy);
    return value0;}
   }
  }
 }
}
/*      local function ABORT-ON-NOT-PURE                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC15abort_on_not_pure(volatile cl_object *lex0, cl_object v1form)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2name;
   v2name = ecl_function_dispatch(cl_env_copy,VV[55])(1, v1form) /*  C1FORM-NAME */;
   if (!((v2name)==(VV[35]))) { goto L2; }
   {
    cl_object v3var;
    T0 = ecl_function_dispatch(cl_env_copy,VV[22])(1, v1form) /*  C1FORM-ARGS */;
    v3var = ecl_car(T0);
    if ((ecl_function_dispatch(cl_env_copy,VV[84])(1, v3var) /*  GLOBAL-VAR-P */)!=ECL_NIL) { goto L7; }
    if (Null(ecl_function_dispatch(cl_env_copy,VV[85])(1, v3var) /*  VAR-SET-NODES */)) { goto L5; }
    goto L6;
L7:;
L6:;
    cl_env_copy->values[0] = ECL_NIL;
    cl_env_copy->nvalues = 1;
    cl_return_from(lex0[0],ECL_NIL);
L5:;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
   }
L2:;
   if ((ecl_function_dispatch(cl_env_copy,VV[66])(1, v1form) /*  C1FORM-SIDE-EFFECTS */)!=ECL_NIL) { goto L12; }
   T0 = ecl_gethash_safe(v2name,ecl_symbol_value(VV[17]),ECL_NIL);
   if ((ecl_caddr(T0))!=ECL_NIL) { goto L10; }
   goto L11;
L12:;
L11:;
   cl_env_copy->values[0] = ECL_NIL;
   cl_env_copy->nvalues = 1;
   cl_return_from(lex0[0],ECL_NIL);
L10:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for C1FORM-PURE-P                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L17c1form_pure_p(cl_object v1form)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[55])(1, v1form) /*  C1FORM-NAME */;
  T1 = cl_gethash(2, T0, ecl_symbol_value(VV[17]));
  value0 = ecl_caddr(T1);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for C1FORM-UNMODIFIED-P                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L19c1form_unmodified_p(cl_object volatile v1form, cl_object volatile v2rest_form)
{
 cl_object volatile env0 = ECL_NIL;
 cl_object volatile CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  env0 = ECL_NIL;
  CLV0 = env0 = CONS(v2rest_form,env0);           /*  REST-FORM       */
  {
   CLV1 = env0 = CONS(ECL_NEW_FRAME_ID(cl_env_copy),env0); /*  C1FORM-UNMODIFIED-P */
   {
    ecl_frs_push(cl_env_copy,ECL_CONS_CAR(CLV1));
    if (__ecl_frs_push_result!=0) {
    value0 = cl_env_copy->values[0];
    ecl_frs_pop(cl_env_copy);
    return value0;
    } else {
    {
     cl_object volatile v3;
     v3 = ecl_make_cclosure_va((cl_objectfn)LC18abort_on_not_pure,env0,Cblock,1);
     L14traverse_c1form_tree(v1form, v3);
     value0 = ECL_T;
     cl_env_copy->nvalues = 1;
     ecl_frs_pop(cl_env_copy);
     return value0;
    }}
   }
  }
 }
}
/*      closure ABORT-ON-NOT-PURE                                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC18abort_on_not_pure(cl_narg narg, cl_object v1form, ...)
{
 cl_object T0;
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV1 = env0;                                     /*  C1FORM-UNMODIFIED-P */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  {
   cl_object v2name;
   v2name = ecl_function_dispatch(cl_env_copy,VV[55])(1, v1form) /*  C1FORM-NAME */;
   if (!((v2name)==(VV[35]))) { goto L2; }
   {
    cl_object v3var;
    T0 = ecl_function_dispatch(cl_env_copy,VV[22])(1, v1form) /*  C1FORM-ARGS */;
    v3var = ecl_car(T0);
    if ((ecl_function_dispatch(cl_env_copy,VV[84])(1, v3var) /*  GLOBAL-VAR-P */)!=ECL_NIL) { goto L7; }
    if (Null(ecl_function_dispatch(cl_env_copy,VV[88])(2, v3var, ECL_CONS_CAR(CLV0)) /*  VAR-CHANGED-IN-FORM-LIST */)) { goto L5; }
    goto L6;
L7:;
L6:;
    cl_env_copy->values[0] = ECL_NIL;
    cl_env_copy->nvalues = 1;
    cl_return_from(ECL_CONS_CAR(CLV1),ECL_NIL);
L5:;
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    return value0;
   }
L2:;
   if ((ecl_function_dispatch(cl_env_copy,VV[66])(1, v1form) /*  C1FORM-SIDE-EFFECTS */)!=ECL_NIL) { goto L12; }
   if ((L17c1form_pure_p(v1form))!=ECL_NIL) { goto L10; }
   goto L11;
L12:;
L11:;
   cl_env_copy->values[0] = ECL_NIL;
   cl_env_copy->nvalues = 1;
   cl_return_from(ECL_CONS_CAR(CLV1),ECL_NIL);
L10:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
 }
}
/*      function definition for C1FORM-VALUES-NUMBER                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L20c1form_values_number(cl_object v1form)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[55])(1, v1form) /*  C1FORM-NAME */;
  T1 = ecl_gethash_safe(T0,ecl_symbol_value(VV[17]),ECL_NIL);
  if (Null(ecl_cadddr(T1))) { goto L1; }
  cl_env_copy->nvalues = 2;
  cl_env_copy->values[1] = ecl_make_fixnum(1);
  cl_env_copy->values[0] = ecl_make_fixnum(1);
  return cl_env_copy->values[0];
L1:;
  T0 = ecl_function_dispatch(cl_env_copy,VV[76])(1, v1form) /*  C1FORM-TYPE */;
  value0 = ecl_function_dispatch(cl_env_copy,VV[90])(1, T0) /*  VALUES-NUMBER-FROM-TYPE */;
  return value0;
 }
}
/*      function definition for C1FORM-SINGLE-VALUED-P                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L21c1form_single_valued_p(cl_object v1form)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[55])(1, v1form) /*  C1FORM-NAME */;
  T1 = ecl_gethash_safe(T0,ecl_symbol_value(VV[17]),ECL_NIL);
  value0 = ecl_cadddr(T1);
  if ((value0)!=ECL_NIL) { goto L2; }
  {
   struct ecl_stack_frame _ecl_inner_frame_aux;
   cl_object _ecl_inner_frame = ecl_stack_frame_open(cl_env_copy,(cl_object)&_ecl_inner_frame_aux,0);
   {
    cl_object v2;
    v2 = _ecl_inner_frame;
    {
     cl_object v3;
     v3 = ECL_SYM("LIST",483);
     cl_env_copy->values[0] = L20c1form_values_number(v1form);
     ecl_stack_frame_push_values(v2);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;cl_env_copy->values[0]=ecl_apply_from_stack_frame(v2,v3);
     value0 = cl_env_copy->values[0];
    }
   }
   ecl_stack_frame_close(_ecl_inner_frame);
  }
  T0 = value0;
  T1 = ecl_cadr(T0);
  value0 = ecl_make_bool(ecl_lowereq(T1,ecl_make_fixnum(1)));
  cl_env_copy->nvalues = 1;
  return value0;
L2:;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function WITH-C1FORM-ENV                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC22with_c1form_env(cl_object v1, cl_object v2)
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
   cl_object v4;
   cl_object v5;
   cl_object v6form;
   cl_object v7value;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[71])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v8;
    v8 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4 = v8;
   }
   v5 = v4;
   if (!(v5==ECL_NIL)) { goto L10; }
   ecl_function_dispatch(cl_env_copy,VV[71])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L10:;
   {
    cl_object v8;
    v8 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v6form = v8;
   }
   if (!(v5==ECL_NIL)) { goto L16; }
   ecl_function_dispatch(cl_env_copy,VV[71])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L16:;
   {
    cl_object v8;
    v8 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v7value = v8;
   }
   if (Null(v5)) { goto L21; }
   ecl_function_dispatch(cl_env_copy,VV[72])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L21:;
   T0 = cl_list(2, v6form, v7value);
   T1 = cl_list(2, VV[41], v6form);
   T2 = cl_list(2, ECL_SYM("*COMPILE-FILE-TRUENAME*",29), T1);
   T3 = cl_list(2, VV[42], v6form);
   T4 = cl_list(2, VV[10], T3);
   T5 = cl_list(2, VV[43], v6form);
   T6 = cl_list(2, VV[8], T5);
   T7 = cl_list(2, VV[44], v6form);
   T8 = cl_list(2, VV[6], T7);
   T9 = cl_list(2, VV[46], v6form);
   T10 = cl_list(2, VV[45], T9);
   T11 = cl_list(6, T0, T2, T4, T6, T8, T10);
   value0 = cl_listX(3, ECL_SYM("LET*",480), T11, v3);
   return value0;
  }
 }
}
/*      function definition for RELOCATE-PARENTS-LIST                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L23relocate_parents_list(cl_object v1dest, cl_object v2new_fields)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3old;
   cl_object v4first_cons;
   v3old = ecl_function_dispatch(cl_env_copy,VV[67])(1, v1dest) /*  C1FORM-PARENTS */;
   value0 = ecl_function_dispatch(cl_env_copy,VV[67])(1, v2new_fields) /*  C1FORM-PARENTS */;
   if ((value0)!=ECL_NIL) { goto L4; }
   v4first_cons = v3old;
   goto L2;
L4:;
   v4first_cons = value0;
   goto L2;
L2:;
   {
    cl_object v5;
    v5 = v1dest;
    {
     cl_object v6;
     v6 = v4first_cons;
     if (ecl_unlikely(ECL_ATOM(v6))) FEtype_error_cons(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     T0 = v6;
    }
    (ECL_CONS_CAR(T0)=v5,T0);
   }
   {
    cl_object v5;
    v5 = ecl_cdr(v3old);
    {
     cl_object v6;
     v6 = v4first_cons;
     if (ecl_unlikely(ECL_ATOM(v6))) FEtype_error_cons(v6);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     T0 = v6;
    }
    (ECL_CONS_CDR(T0)=v5,T0);
   }
   ecl_structure_set(v2new_fields,VV[14],5,ECL_NIL);
   value0 = ecl_structure_set(v1dest,VV[14],5,v4first_cons);
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for C1FORM-REPLACE-WITH                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L24c1form_replace_with(cl_object v1dest, cl_object v2new_fields)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_function_dispatch(cl_env_copy,VV[66])(1, v2new_fields) /*  C1FORM-SIDE-EFFECTS */)) { goto L1; }
  ecl_function_dispatch(cl_env_copy,VV[62])(2, ECL_SYM("FORMAT-CONTROL",1263), VV[49]) /*  BABOON */;
L1:;
  T0 = ecl_function_dispatch(cl_env_copy,VV[55])(1, v1dest) /*  C1FORM-NAME */;
  if ((T0)==(VV[35])) { goto L3; }
  ecl_function_dispatch(cl_env_copy,VV[62])(3, ECL_SYM("FORMAT-CONTROL",1263), VV[50], v1dest) /*  BABOON */;
L3:;
  {
   cl_object v3;
   v3 = ecl_function_dispatch(cl_env_copy,VV[55])(1, v2new_fields) /*  C1FORM-NAME */;
   if ((v3)==(ECL_SYM("LOCATION",1842))) { goto L5; }
   if (!((v3)==(VV[35]))) { goto L8; }
   {
    cl_object v4var;
    T0 = ecl_function_dispatch(cl_env_copy,VV[22])(1, v2new_fields) /*  C1FORM-ARGS */;
    v4var = ecl_car(T0);
    if (Null(ecl_function_dispatch(cl_env_copy,VV[67])(1, v2new_fields) /*  C1FORM-PARENTS */)) { goto L11; }
    ecl_function_dispatch(cl_env_copy,VV[95])(2, v4var, v2new_fields) /*  DELETE-FROM-READ-NODES */;
L11:;
    L23relocate_parents_list(v1dest, v2new_fields);
    ecl_function_dispatch(cl_env_copy,VV[96])(2, v4var, v1dest) /*  ADD-TO-READ-NODES */;
    goto L5;
   }
L8:;
   L23relocate_parents_list(v1dest, v2new_fields);
  }
L5:;
  {
   cl_object v3;
   v3 = ecl_function_dispatch(cl_env_copy,VV[55])(1, v2new_fields) /*  C1FORM-NAME */;
   ecl_structure_set(v1dest,VV[14],4,v3);
  }
  {
   cl_object v3;
   v3 = ecl_function_dispatch(cl_env_copy,VV[97])(1, v2new_fields) /*  C1FORM-LOCAL-VARS */;
   ecl_structure_set(v1dest,VV[14],0,v3);
  }
  {
   cl_object v3;
   T0 = ecl_function_dispatch(cl_env_copy,VV[76])(1, v2new_fields) /*  C1FORM-TYPE */;
   T1 = ecl_function_dispatch(cl_env_copy,VV[76])(1, v1dest) /*  C1FORM-TYPE */;
   v3 = ecl_function_dispatch(cl_env_copy,VV[98])(2, T0, T1) /*  VALUES-TYPE-AND */;
   ecl_structure_set(v1dest,VV[14],1,v3);
  }
  {
   cl_object v3;
   v3 = ecl_function_dispatch(cl_env_copy,VV[65])(1, v2new_fields) /*  C1FORM-SP-CHANGE */;
   ecl_structure_set(v1dest,VV[14],2,v3);
  }
  {
   cl_object v3;
   v3 = ecl_function_dispatch(cl_env_copy,VV[66])(1, v2new_fields) /*  C1FORM-SIDE-EFFECTS */;
   ecl_structure_set(v1dest,VV[14],8,v3);
  }
  {
   cl_object v3;
   v3 = ecl_function_dispatch(cl_env_copy,VV[74])(1, v2new_fields) /*  C1FORM-VOLATILE */;
   ecl_structure_set(v1dest,VV[14],3,v3);
  }
  {
   cl_object v3;
   v3 = ecl_function_dispatch(cl_env_copy,VV[22])(1, v2new_fields) /*  C1FORM-ARGS */;
   ecl_structure_set(v1dest,VV[14],7,v3);
  }
  {
   cl_object v3;
   v3 = ecl_function_dispatch(cl_env_copy,VV[46])(1, v2new_fields) /*  C1FORM-ENV */;
   ecl_structure_set(v1dest,VV[14],6,v3);
  }
  {
   cl_object v3;
   v3 = ecl_function_dispatch(cl_env_copy,VV[44])(1, v2new_fields) /*  C1FORM-FORM */;
   ecl_structure_set(v1dest,VV[14],9,v3);
  }
  {
   cl_object v3;
   v3 = ecl_function_dispatch(cl_env_copy,VV[43])(1, v2new_fields) /*  C1FORM-TOPLEVEL-FORM */;
   ecl_structure_set(v1dest,VV[14],10,v3);
  }
  {
   cl_object v3;
   v3 = ecl_function_dispatch(cl_env_copy,VV[41])(1, v2new_fields) /*  C1FORM-FILE */;
   ecl_structure_set(v1dest,VV[14],11,v3);
  }
  {
   cl_object v3;
   v3 = ecl_function_dispatch(cl_env_copy,VV[42])(1, v2new_fields) /*  C1FORM-FILE-POSITION */;
   value0 = ecl_structure_set(v1dest,VV[14],12,v3);
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for DELETE-C1FORMS                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L26delete_c1forms(cl_object v1form)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2;
   v2 = ecl_make_cfun((cl_objectfn_fixed)LC25eliminate_references,ECL_NIL,Cblock,1);
   value0 = L14traverse_c1form_tree(v1form, v2);
   return value0;
  }
 }
}
/*      local function ELIMINATE-REFERENCES                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC25eliminate_references(cl_object v1form)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[55])(1, v1form) /*  C1FORM-NAME */;
  if (!((T0)==(VV[35]))) { goto L1; }
  {
   cl_object v2var;
   T0 = ecl_function_dispatch(cl_env_copy,VV[22])(1, v1form) /*  C1FORM-ARGS */;
   v2var = ecl_car(T0);
   if (Null(v2var)) { goto L4; }
   value0 = ecl_function_dispatch(cl_env_copy,VV[95])(2, v2var, v1form) /*  DELETE-FROM-READ-NODES */;
   return value0;
L4:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for C1FORM-CONSTANT-P                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L27c1form_constant_p(cl_object v1form)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[55])(1, v1form) /*  C1FORM-NAME */;
  if (!((T0)==(ECL_SYM("LOCATION",1842)))) { goto L1; }
  T0 = ecl_function_dispatch(cl_env_copy,VV[22])(1, v1form) /*  C1FORM-ARGS */;
  T1 = ecl_car(T0);
  value0 = ecl_function_dispatch(cl_env_copy,VV[101])(1, T1) /*  LOC-IMMEDIATE-VALUE-P */;
  return value0;
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}

#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/cmp/cmpform.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclEQfNLkb7_ZnNmqq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;CMPFORM.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclEQfNLkb7_ZnNmqq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_cmp_defun(VV[54]);                          /*  PRINT-C1FORM    */
  ecl_cmp_defun(VV[56]);                          /*  MAKE-C1FORM     */
  ecl_cmp_defun(VV[61]);                          /*  MAKE-C1FORM*    */
  ecl_cmp_defun(VV[63]);                          /*  C1FORM-ADD-INFO-LOOP */
  ecl_cmp_defun(VV[68]);                          /*  C1FORM-ADD-INFO */
  ecl_cmp_defun(VV[69]);                          /*  COPY-C1FORM     */
  ecl_cmp_defmacro(VV[70]);                       /*  C1FORM-ARG      */
  ecl_cmp_defun(VV[73]);                          /*  C1FORM-VOLATILE* */
  ecl_cmp_defun(VV[75]);                          /*  C1FORM-PRIMARY-TYPE */
  ecl_cmp_defun(VV[78]);                          /*  LOCATION-PRIMARY-TYPE */
  ecl_cmp_defun(VV[79]);                          /*  FIND-FORM-IN-NODE-LIST */
  ecl_cmp_defun(VV[80]);                          /*  ADD-FORM-TO-NODE-LIST */
  ecl_cmp_defun(VV[81]);                          /*  DELETE-FORM-FROM-NODE-LIST */
  ecl_cmp_defun(VV[82]);                          /*  TRAVERSE-C1FORM-TREE */
  ecl_cmp_defun(VV[83]);                          /*  C1FORM-MOVABLE-P */
  ecl_cmp_defun(VV[86]);                          /*  C1FORM-PURE-P   */
  ecl_cmp_defun(VV[87]);                          /*  C1FORM-UNMODIFIED-P */
  ecl_cmp_defun(VV[89]);                          /*  C1FORM-VALUES-NUMBER */
  ecl_cmp_defun(VV[91]);                          /*  C1FORM-SINGLE-VALUED-P */
  ecl_cmp_defmacro(VV[92]);                       /*  WITH-C1FORM-ENV */
  ecl_cmp_defun(VV[93]);                          /*  RELOCATE-PARENTS-LIST */
  ecl_cmp_defun(VV[94]);                          /*  C1FORM-REPLACE-WITH */
  ecl_cmp_defun(VV[99]);                          /*  DELETE-C1FORMS  */
  ecl_cmp_defun(VV[100]);                         /*  C1FORM-CONSTANT-P */
}
