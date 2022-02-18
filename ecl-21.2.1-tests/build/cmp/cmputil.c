/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;CMPUTIL.LSP                                   */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/cmp/cmputil.eclh"
/*      function definition for BRIEF-NAMESTRING                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1brief_namestring(cl_object v1path)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = si_coerce_to_filename(v1path);
  value0 = cl_namestring(T0);
  return value0;
 }
}
/*      function definition for NORMALIZE-BUILD-TARGET-NAME           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2normalize_build_target_name(cl_object v1target)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ecl_eql(v1target,VV[5]))) { goto L6; }
  goto L3;
  goto L4;
L6:;
  goto L4;
L4:;
  if (!(ecl_eql(v1target,VV[7]))) { goto L10; }
  goto L3;
  goto L8;
L10:;
  goto L8;
L8:;
  if (!(ecl_eql(v1target,VV[9]))) { goto L14; }
  goto L3;
  goto L12;
L14:;
  goto L12;
L12:;
  if (!(ecl_eql(v1target,VV[11]))) { goto L1; }
  goto L2;
L3:;
L2:;
  value0 = VV[5];
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  if (!(ecl_eql(v1target,VV[13]))) { goto L22; }
  goto L19;
  goto L20;
L22:;
  goto L20;
L20:;
  if (!(ecl_eql(v1target,VV[15]))) { goto L26; }
  goto L19;
  goto L24;
L26:;
  goto L24;
L24:;
  if (!(ecl_eql(v1target,VV[17]))) { goto L30; }
  goto L19;
  goto L28;
L30:;
  goto L28;
L28:;
  if (!(ecl_eql(v1target,VV[19]))) { goto L17; }
  goto L18;
L19:;
L18:;
  value0 = VV[13];
  cl_env_copy->nvalues = 1;
  return value0;
L17:;
  if (!(ecl_eql(v1target,VV[21]))) { goto L38; }
  goto L35;
  goto L36;
L38:;
  goto L36;
L36:;
  if (!(ecl_eql(v1target,VV[23]))) { goto L33; }
  goto L34;
L35:;
L34:;
  value0 = VV[21];
  cl_env_copy->nvalues = 1;
  return value0;
L33:;
  if (!(ecl_eql(v1target,VV[25]))) { goto L41; }
  value0 = VV[25];
  cl_env_copy->nvalues = 1;
  return value0;
L41:;
  value0 = si_ecase_error(v1target, VV[26]);
  return value0;
 }
}
/*      function definition for INNERMOST-NON-EXPANDED-FORM           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3innermost_non_expanded_form(cl_object v1form)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_LISTP(v1form))) { goto L1; }
  {
   cl_object v2output;
   v2output = ECL_NIL;
   {
    cl_object v3f;
    cl_object v4;
    v3f = ECL_NIL;
    {
     cl_object v5;
     v5 = v1form;
     if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v4 = v5;
    }
L8:;
    if (!(ecl_endp(v4))) { goto L10; }
    goto L9;
L10:;
    v3f = _ecl_car(v4);
    {
     cl_object v5;
     v5 = _ecl_cdr(v4);
     if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v4 = v5;
    }
    if (!((v3f)==(ECL_SYM("MACROEXPAND",521)))) { goto L19; }
    v2output = ECL_NIL;
    goto L18;
L19:;
    if (!(v2output==ECL_NIL)) { goto L18; }
    v2output = v3f;
L18:;
    goto L8;
L9:;
    value0 = v2output;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for COMPILER-MESSAGE-REPORT               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L4compiler_message_report(cl_narg narg, cl_object v1stream, cl_object v2c, cl_object v3format_control, ...)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<3)) FEwrong_num_arguments_anonym();
 {
  cl_object v4format_arguments;
  ecl_va_list args; ecl_va_start(args,v3format_control,narg,3);
  v4format_arguments = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   cl_object v5;
   cl_object v6;
   cl_object v7;
   cl_object v8;
   v5 = ecl_function_dispatch(cl_env_copy,VV[127])(1, v2c) /*  COMPILER-MESSAGE-FILE-POSITION */;
   v6 = ecl_function_dispatch(cl_env_copy,VV[128])(1, v2c) /*  COMPILER-MESSAGE-PREFIX */;
   v7 = ecl_function_dispatch(cl_env_copy,VV[129])(1, v2c) /*  COMPILER-MESSAGE-FILE */;
   T0 = ecl_function_dispatch(cl_env_copy,VV[130])(1, v2c) /*  COMPILER-MESSAGE-TOPLEVEL-FORM */;
   v8 = L3innermost_non_expanded_form(T0);
   if (Null(v8)) { goto L6; }
   if (Null(v5)) { goto L6; }
   if (ecl_minusp(v5)) { goto L6; }
   if (ecl_equalp(v8,VV[29])) { goto L6; }
   ecl_bds_bind(cl_env_copy,ECL_SYM("*PRINT-LENGTH*",52),ecl_make_fixnum(2)); /*  *PRINT-LENGTH* */
   ecl_bds_bind(cl_env_copy,ECL_SYM("*PRINT-LEVEL*",53),ecl_make_fixnum(2)); /*  *PRINT-LEVEL* */
   T0 = cl_pathname_name(1, v7);
   T1 = cl_pathname_type(1, v7);
   T2 = cl_pathname_version(v7);
   T3 = cl_make_pathname(6, ECL_SYM("NAME",1300), T0, ECL_SYM("TYPE",1346), T1, ECL_SYM("VERSION",1354), T2);
   cl_format(6, v1stream, VV[30], v6, T3, v5, v8);
   ecl_bds_unwind1(cl_env_copy);
   ecl_bds_unwind1(cl_env_copy);
   goto L5;
L6:;
   cl_format(3, v1stream, VV[31], v6);
L5:;
   T0 = ecl_function_dispatch(cl_env_copy,VV[131])(1, v2c) /*  COMPILER-MESSAGE-FORMAT */;
   value0 = cl_format(4, v1stream, T0, v3format_control, v4format_arguments);
   return value0;
  }
 }
}
/*      local function LAMBDA14                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC6__lambda14()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC5__lambda15,ECL_NIL,Cblock,2);
   value0 = v1;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function LAMBDA16                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC7__lambda16()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_symbol_value(ECL_SYM("*COMPILE-FILE-PATHNAME*",28));
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function LAMBDA17                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC8__lambda17()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_symbol_value(VV[34]);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function LAMBDA18                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC9__lambda18()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_symbol_value(VV[35]);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function LAMBDA19                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC10__lambda19()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_symbol_value(VV[36]);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function LAMBDA15                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC5__lambda15(cl_object v1c, cl_object v2stream)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_fdefinition(VV[32]);
  T1 = (cl_env_copy->function=(ECL_SYM("SIMPLE-CONDITION-FORMAT-CONTROL",770)->symbol.gfdef))->cfun.entry(1, v1c) /*  SIMPLE-CONDITION-FORMAT-CONTROL */;
  T2 = (cl_env_copy->function=(ECL_SYM("SIMPLE-CONDITION-FORMAT-ARGUMENTS",771)->symbol.gfdef))->cfun.entry(1, v1c) /*  SIMPLE-CONDITION-FORMAT-ARGUMENTS */;
  value0 = cl_apply(5, T0, v2stream, v1c, T1, T2);
  return value0;
 }
}
/*      local function LAMBDA20                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC12__lambda20()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC11__lambda21,ECL_NIL,Cblock,2);
   value0 = v1;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function LAMBDA21                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC11__lambda21(cl_object v1c, cl_object v2stream)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_slot_value(v1c, ECL_SYM("VARIABLE",899));
  value0 = L4compiler_message_report(4, v2stream, v1c, VV[46], T0);
  return value0;
 }
}
/*      local function LAMBDA22                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC14__lambda22()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC13__lambda23,ECL_NIL,Cblock,2);
   value0 = v1;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function LAMBDA23                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC13__lambda23(cl_object v1c, cl_object v2stream)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[132])(1, v1c) /*  COMPILER-MESSAGE-FORM */;
  value0 = L4compiler_message_report(4, v2stream, v1c, VV[48], T0);
  return value0;
 }
}
/*      function definition for PRINT-COMPILER-MESSAGE                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L15print_compiler_message(cl_object v1c, cl_object v2stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if ((cl_typep(2, v1c, ecl_symbol_value(VV[49])))!=ECL_NIL) { goto L1; }
  value0 = cl_format(3, v2stream, VV[50], v1c);
  return value0;
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for HANDLE-COMPILER-NOTE                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L16handle_compiler_note(cl_object v1c)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for HANDLE-COMPILER-WARNING               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L17handle_compiler_warning(cl_object v1c)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  cl_set(VV[53],CONS(v1c,ecl_symbol_value(VV[53])));
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for HANDLE-COMPILER-ERROR                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L18handle_compiler_error(cl_object v1c)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  (cl_env_copy->function=(ECL_SYM("SIGNAL",762)->symbol.gfdef))->cfun.entry(1, v1c) /*  SIGNAL */;
  cl_set(VV[53],CONS(v1c,ecl_symbol_value(VV[53])));
  L15print_compiler_message(v1c, ECL_T);
  value0 = cl_abort(0);
  return value0;
 }
}
/*      function definition for HANDLE-COMPILER-INTERNAL-ERROR        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L19handle_compiler_internal_error(cl_object v1c)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_symbol_value(VV[56]))) { goto L1; }
  (cl_env_copy->function=(ECL_SYM("INVOKE-DEBUGGER",447)->symbol.gfdef))->cfun.entry(1, v1c) /*  INVOKE-DEBUGGER */;
L1:;
  T0 = ecl_list1(v1c);
  v1c = cl_make_condition(5, VV[43], ECL_SYM("FORMAT-CONTROL",1263), VV[57], ECL_SYM("FORMAT-ARGUMENTS",1262), T0);
  cl_set(VV[53],CONS(v1c,ecl_symbol_value(VV[53])));
  (cl_env_copy->function=(ECL_SYM("SIGNAL",762)->symbol.gfdef))->cfun.entry(1, v1c) /*  SIGNAL */;
  L15print_compiler_message(v1c, ECL_T);
  value0 = cl_abort(0);
  return value0;
 }
}
/*      function definition for DO-COMPILATION-UNIT                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L20do_compilation_unit(volatile cl_narg narg, cl_object volatile v1closure, ...)
{
 cl_object volatile env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object volatile v2override;
  ecl_va_list args; ecl_va_start(args,v1closure,narg,1);
  {
   cl_object keyvars[2];
   cl_parse_key(args,1,L20do_compilation_unitkeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   v2override = keyvars[0];
  }
  if (Null(v2override)) { goto L1; }
  ecl_bds_bind(cl_env_copy,VV[59],ECL_NIL);       /*  *ACTIVE-PROTECTION* */
  value0 = L20do_compilation_unit(1, v1closure);
  ecl_bds_unwind1(cl_env_copy);
  return value0;
L1:;
  if (!(ecl_symbol_value(VV[59])==ECL_NIL)) { goto L3; }
  ecl_bds_bind(cl_env_copy,VV[59],ECL_T);         /*  *ACTIVE-PROTECTION* */
  ecl_bds_bind(cl_env_copy,VV[60],ECL_NIL);       /*  *PENDING-ACTIONS* */
  {
   volatile bool unwinding = FALSE;
   cl_index v3=ECL_STACK_INDEX(cl_env_copy),v4;
   ecl_frame_ptr next_fr;
   ecl_frs_push(cl_env_copy,ECL_PROTECT_TAG);
   if (__ecl_frs_push_result) {
     unwinding = TRUE; next_fr=cl_env_copy->nlj_fr;
   } else {
   cl_env_copy->values[0] = L20do_compilation_unit(1, v1closure);
   }
   ecl_frs_pop(cl_env_copy);
   v4=ecl_stack_push_values(cl_env_copy);
   {
    cl_object v5;
    cl_object v6action;
    cl_object v7;
    v5 = ecl_symbol_value(VV[60]);
    v6action = ECL_NIL;
    {
     cl_object v8;
     v8 = v5;
     if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v7 = v8;
    }
L12:;
    if (!(ecl_endp(v7))) { goto L14; }
    goto L13;
L14:;
    v6action = _ecl_car(v7);
    {
     cl_object v8;
     v8 = _ecl_cdr(v7);
     if (ecl_unlikely(!ECL_LISTP(v8))) FEtype_error_list(v8);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v7 = v8;
    }
    ecl_function_dispatch(cl_env_copy,v6action)(0);
    goto L12;
L13:;
   }
   ecl_stack_pop_values(cl_env_copy,v4);
   if (unwinding) ecl_unwind(cl_env_copy,next_fr);
   ECL_STACK_SET_INDEX(cl_env_copy,v3);
   ecl_bds_unwind1(cl_env_copy);
   ecl_bds_unwind1(cl_env_copy);
   return cl_env_copy->values[0];
  }
L3:;
  value0 = ecl_function_dispatch(cl_env_copy,v1closure)(0);
  return value0;
 }
}
/*      local function WITH-COMPILATION-UNIT                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC21with_compilation_unit(cl_object v1, cl_object v2)
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
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[141])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4 = v5;
   }
   T0 = cl_listX(3, ECL_SYM("LAMBDA",454), ECL_NIL, v3);
   T1 = cl_list(2, ECL_SYM("FUNCTION",398), T0);
   value0 = cl_listX(3, VV[61], T1, v4);
   return value0;
  }
 }
}
/*      local function WITH-COMPILER-ENV                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC22with_compiler_env(cl_object v1, cl_object v2)
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
   cl_object v6compiler_conditions;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[141])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v7;
    v7 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4 = v7;
   }
   v5 = v4;
   if (!(v5==ECL_NIL)) { goto L10; }
   ecl_function_dispatch(cl_env_copy,VV[141])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L10:;
   {
    cl_object v7;
    v7 = ecl_car(v5);
    v5 = ecl_cdr(v5);
    v6compiler_conditions = v7;
   }
   if (Null(v5)) { goto L15; }
   ecl_function_dispatch(cl_env_copy,VV[143])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L15:;
   T0 = cl_listX(3, VV[62], ECL_NIL, v3);
   T1 = cl_list(3, ECL_SYM("LET",479), ecl_symbol_value(VV[67]), T0);
   T2 = cl_list(3, ECL_SYM("WITH-LOCK",1462), VV[66], T1);
   T3 = cl_list(3, ECL_SYM("HANDLER-BIND",419), VV[65], T2);
   T4 = cl_list(3, ECL_SYM("RESTART-CASE",724), T3, VV[68]);
   T5 = cl_list(3, ECL_SYM("SETF",752), v6compiler_conditions, VV[53]);
   value0 = cl_list(5, ECL_SYM("LET",479), VV[63], VV[64], T4, T5);
   return value0;
  }
 }
}
/*      function definition for PRINT-C1FORMS                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L23print_c1forms(cl_object v1form)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_CONSP(v1form))) { goto L1; }
  T0 = ecl_one_plus(ecl_symbol_value(VV[70]));
  ecl_bds_bind(cl_env_copy,VV[70],T0);            /*  *C1FORM-LEVEL*  */
  {
   cl_object v2;
   v2 = ecl_fdefinition(VV[72]);
   {
    cl_object v3;
    cl_object v4;
    v3 = ECL_NIL;
    {
     cl_object v5;
     v5 = v1form;
     if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v4 = v5;
    }
L8:;
    if (!(ecl_endp(v4))) { goto L10; }
    goto L9;
L10:;
    v3 = _ecl_car(v4);
    {
     cl_object v5;
     v5 = _ecl_cdr(v4);
     if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     v4 = v5;
    }
    ecl_function_dispatch(cl_env_copy,v2)(1, v3);
    goto L8;
L9:;
    value0 = v1form;
    cl_env_copy->nvalues = 1;
    ecl_bds_unwind1(cl_env_copy);
    return value0;
   }
  }
L1:;
  if (Null(ecl_function_dispatch(cl_env_copy,VV[145])(1, v1form) /*  C1FORM-P */)) { goto L21; }
  T0 = ecl_symbol_value(VV[70]);
  T1 = ecl_function_dispatch(cl_env_copy,VV[146])(1, v1form) /*  C1FORM-PARENT */;
  cl_format(5, ECL_T, VV[71], T0, v1form, T1);
  T0 = ecl_function_dispatch(cl_env_copy,VV[147])(1, v1form) /*  C1FORM-ARGS */;
  L23print_c1forms(T0);
  value0 = v1form;
  cl_env_copy->nvalues = 1;
  return value0;
L21:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for PRINT-REF                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L24print_ref(cl_object v1ref_object, cl_object v2stream)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3name;
   v3name = ecl_function_dispatch(cl_env_copy,VV[149])(1, v1ref_object) /*  REF-NAME */;
   if (Null(v3name)) { goto L2; }
   T0 = cl_type_of(v1ref_object);
   value0 = cl_format(4, v2stream, VV[73], T0, v3name);
   return value0;
L2:;
   T0 = cl_type_of(v1ref_object);
   value0 = cl_format(3, v2stream, VV[74], T0);
   return value0;
  }
 }
}
/*      function definition for PRINT-VAR                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L25print_var(cl_object v1var_object, cl_object v2stream)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[151])(1, v1var_object) /*  VAR-NAME */;
  T1 = ecl_function_dispatch(cl_env_copy,VV[152])(1, v1var_object) /*  VAR-KIND */;
  value0 = cl_format(4, v2stream, VV[76], T0, T1);
  return value0;
 }
}
/*      function definition for CMPPROGRESS                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L26cmpprogress(cl_narg narg, ...)
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
  if (Null(ecl_symbol_value(ECL_SYM("*COMPILE-VERBOSE*",31)))) { goto L1; }
  T0 = (ECL_SYM("FORMAT",389)->symbol.gfdef);
  value0 = cl_apply(3, T0, ECL_T, v1args);
  return value0;
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function CMPCK                                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC27cmpck(cl_object v1, cl_object v2)
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
   cl_object v4condition;
   cl_object v5string;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[141])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4condition = v6;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[141])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5string = v6;
   }
   T0 = cl_listX(3, VV[79], v5string, v3);
   value0 = cl_list(3, ECL_SYM("IF",948), v4condition, T0);
   return value0;
  }
 }
}
/*      local function CMPASSERT                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC28cmpassert(cl_object v1, cl_object v2)
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
   cl_object v4condition;
   cl_object v5string;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[141])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4condition = v6;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[141])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5string = v6;
   }
   T0 = cl_listX(3, VV[79], v5string, v3);
   value0 = cl_list(3, ECL_SYM("UNLESS",885), v4condition, T0);
   return value0;
  }
 }
}
/*      function definition for CMPERR                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L29cmperr(cl_narg narg, cl_object v1string, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2args;
  ecl_va_list args; ecl_va_start(args,v1string,narg,1);
  v2args = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   cl_object v3c;
   v3c = cl_make_condition(5, VV[41], ECL_SYM("FORMAT-CONTROL",1263), v1string, ECL_SYM("FORMAT-ARGUMENTS",1262), v2args);
   (cl_env_copy->function=(ECL_SYM("SIGNAL",762)->symbol.gfdef))->cfun.entry(1, v3c) /*  SIGNAL */;
   L15print_compiler_message(v3c, ECL_T);
   value0 = cl_abort(0);
   return value0;
  }
 }
}
/*      function definition for SAFE-LIST-LENGTH                      */
/*      optimize speed 3, debug 1, space 1, safety 0                  */
static cl_object L30safe_list_length(cl_object v1l)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
TTL:
 {
  cl_object v2slow;
  v2slow = v1l;
  {
   cl_object v3fast;
   v3fast = v1l;
   {
    cl_object v4flag;
    v4flag = ECL_T;
    {
     cl_fixnum v5l;
     v5l = 0;
L5:;
     if (!(v3fast==ECL_NIL)) { goto L8; }
     value0 = ecl_make_fixnum(v5l);
     cl_env_copy->nvalues = 1;
     return value0;
L8:;
     if (ECL_CONSP(v3fast)) { goto L10; }
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 1;
     return value0;
L10:;
     if (Null(v4flag)) { goto L12; }
     v4flag = ECL_NIL;
     v3fast = ECL_CONS_CDR(v3fast);
     goto L7;
L12:;
     if (!((v2slow)==(v3fast))) { goto L17; }
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 1;
     return value0;
L17:;
     v4flag = ECL_T;
     v2slow = ECL_CONS_CDR(v2slow);
     v3fast = ECL_CONS_CDR(v3fast);
L7:;
     v5l = (v5l)+1;
     goto L5;
     value0 = ecl_make_fixnum(v5l);
     cl_env_copy->nvalues = 1;
     return value0;
    }
   }
  }
 }
}
/*      function definition for CHECK-ARGS-NUMBER                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L31check_args_number(cl_narg narg, cl_object v1operator, cl_object v2args, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>4)) FEwrong_num_arguments_anonym();
 {
  cl_object v3min;
  cl_object v4max;
  va_list args; va_start(args,v2args);
  {
   int i = 2;
   if (i >= narg) {
    v3min = ecl_make_fixnum(0);
   } else {
    i++;
    v3min = va_arg(args,cl_object);
   }
   if (i >= narg) {
    v4max = ecl_make_fixnum(536870911);
   } else {
    i++;
    v4max = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   cl_object v5l;
   v5l = L30safe_list_length(v2args);
   if (!(v5l==ECL_NIL)) { goto L4; }
   ecl_bds_bind(cl_env_copy,ECL_SYM("*PRINT-CIRCLE*",49),ECL_T); /*  *PRINT-CIRCLE* */
   L29cmperr(3, VV[83], v1operator, v2args);
   ecl_bds_unwind1(cl_env_copy);
L4:;
   if (!(ecl_lower(v5l,v3min))) { goto L6; }
   L33too_few_args(v1operator, v3min, v5l);
L6:;
   if (Null(v4max)) { goto L8; }
   if (!(ecl_greater(v5l,v4max))) { goto L8; }
   value0 = L32too_many_args(v1operator, v4max, v5l);
   return value0;
L8:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for TOO-MANY-ARGS                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L32too_many_args(cl_object v1name, cl_object v2upper_bound, cl_object v3n)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  ecl_bds_bind(cl_env_copy,ECL_SYM("*PRINT-CASE*",48),ECL_SYM("UPCASE",1350)); /*  *PRINT-CASE* */
  value0 = L29cmperr(4, VV[85], v1name, v2upper_bound, v3n);
  ecl_bds_unwind1(cl_env_copy);
  return value0;
 }
}
/*      function definition for TOO-FEW-ARGS                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L33too_few_args(cl_object v1name, cl_object v2lower_bound, cl_object v3n)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L29cmperr(4, VV[87], v1name, v2lower_bound, v3n);
  return value0;
 }
}
/*      function definition for DO-CMPWARN                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L36do_cmpwarn(volatile cl_narg narg, ...)
{
 cl_object T0, T1, T2, T3, T4;
 cl_object volatile env0 = ECL_NIL;
 cl_object volatile CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  cl_object volatile v1args;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  v1args = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
   volatile cl_object v2condition;
   T0 = (ECL_SYM("MAKE-CONDITION",526)->symbol.gfdef);
   v2condition = cl_apply(2, T0, v1args);
   {
    volatile cl_object env1 = env0;
    env1 = ECL_NIL;
    CLV0 = env1 = CONS(ECL_NIL,env1);
    {
     volatile cl_object env2 = env1;
     CLV1 = env2 = CONS(ECL_NEW_FRAME_ID(cl_env_copy),env2); /*  TAGBODY */
     {
      ecl_frs_push(cl_env_copy,ECL_CONS_CAR(CLV1));
      if (__ecl_frs_push_result) {
      if (cl_env_copy->values[0]==ecl_make_fixnum(0))goto L4;
      ecl_internal_error("GO found an inexistent tag");
      }
     }
     {
      cl_object v3;
      v3 = ecl_make_cclosure_va((cl_objectfn)LC34__lambda85,env2,Cblock,0);
      T0 = v3;
     }
     {
      cl_object v3;
      v3 = ecl_make_cfun((cl_objectfn_fixed)LC35__lambda86,ECL_NIL,Cblock,1);
      T1 = v3;
     }
     T2 = ecl_function_dispatch(cl_env_copy,VV[161])(6, ECL_SYM("NAME",1300), ECL_SYM("MUFFLE-WARNING",573), ECL_SYM("FUNCTION",1264), T0, VV[89], T1) /*  MAKE-RESTART */;
     T3 = ecl_list1(T2);
     T4 = CONS(T3,ecl_symbol_value(ECL_SYM("*RESTART-CLUSTERS*",5)));
     ecl_bds_bind(cl_env_copy,ECL_SYM("*RESTART-CLUSTERS*",5),T4); /*  *RESTART-CLUSTERS* */
     {
      cl_object v3;
      T0 = ECL_NIL;
      v3 = ecl_function_dispatch(cl_env_copy,VV[162])(4, v2condition, T0, ECL_SYM("SIMPLE-CONDITION",769), ECL_SYM("SIGNAL",762)) /*  COERCE-TO-CONDITION */;
      T0 = ecl_car(ecl_symbol_value(ECL_SYM("*RESTART-CLUSTERS*",5)));
      T1 = CONS(v3,T0);
      T2 = CONS(T1,ecl_symbol_value(VV[91]));
      ecl_bds_bind(cl_env_copy,VV[91],T2);        /*  *CONDITION-RESTARTS* */
      (cl_env_copy->function=(ECL_SYM("SIGNAL",762)->symbol.gfdef))->cfun.entry(1, v3) /*  SIGNAL */;
      ecl_frs_pop(cl_env_copy);
      ecl_bds_unwind1(cl_env_copy);
      ecl_bds_unwind1(cl_env_copy);
      goto L3;
     }
L4:;
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 1;
     ecl_frs_pop(cl_env_copy);
     return value0;
    }
   }
L3:;
   value0 = L15print_compiler_message(v2condition, ECL_T);
   return value0;
  }
 }
}
/*      closure LAMBDA85                                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC34__lambda85(cl_narg narg, ...)
{
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV1 = env0;                                     /*  TAGBODY         */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 {
  cl_object v1si__temp;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  v1si__temp = cl_grab_rest_args(args);
  ecl_va_end(args);
  ECL_CONS_CAR(CLV0) = v1si__temp;
  cl_go(ECL_CONS_CAR(CLV1),ecl_make_fixnum(0));
 }
 }
}
/*      local function LAMBDA86                                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC35__lambda86(cl_object v1stream)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_write_string(2, VV[90], v1stream);
  return value0;
 }
}
/*      function definition for CMPWARN-STYLE                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L37cmpwarn_style(cl_narg narg, cl_object v1string, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2args;
  ecl_va_list args; ecl_va_start(args,v1string,narg,1);
  v2args = cl_grab_rest_args(args);
  ecl_va_end(args);
  value0 = L36do_cmpwarn(5, VV[44], ECL_SYM("FORMAT-CONTROL",1263), v1string, ECL_SYM("FORMAT-ARGUMENTS",1262), v2args);
  return value0;
 }
}
/*      function definition for CMPWARN                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L38cmpwarn(cl_narg narg, cl_object v1string, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2args;
  ecl_va_list args; ecl_va_start(args,v1string,narg,1);
  v2args = cl_grab_rest_args(args);
  ecl_va_end(args);
  value0 = L36do_cmpwarn(5, VV[39], ECL_SYM("FORMAT-CONTROL",1263), v1string, ECL_SYM("FORMAT-ARGUMENTS",1262), v2args);
  return value0;
 }
}
/*      function definition for CMPNOTE                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L39cmpnote(cl_narg narg, cl_object v1string, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2args;
  ecl_va_list args; ecl_va_start(args,v1string,narg,1);
  v2args = cl_grab_rest_args(args);
  ecl_va_end(args);
  value0 = L36do_cmpwarn(5, VV[37], ECL_SYM("FORMAT-CONTROL",1263), v1string, ECL_SYM("FORMAT-ARGUMENTS",1262), v2args);
  return value0;
 }
}
/*      function definition for CMPDEBUG                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L40cmpdebug(cl_narg narg, cl_object v1string, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 {
  cl_object v2args;
  ecl_va_list args; ecl_va_start(args,v1string,narg,1);
  v2args = cl_grab_rest_args(args);
  ecl_va_end(args);
  value0 = L36do_cmpwarn(5, VV[38], ECL_SYM("FORMAT-CONTROL",1263), v1string, ECL_SYM("FORMAT-ARGUMENTS",1262), v2args);
  return value0;
 }
}
/*      function definition for PRINT-CURRENT-FORM                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L41print_current_form()
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_symbol_value(ECL_SYM("*COMPILE-PRINT*",30)))) { goto L1; }
  ecl_bds_bind(cl_env_copy,ECL_SYM("*PRINT-LENGTH*",52),ecl_make_fixnum(2)); /*  *PRINT-LENGTH* */
  ecl_bds_bind(cl_env_copy,ECL_SYM("*PRINT-LEVEL*",53),ecl_make_fixnum(2)); /*  *PRINT-LEVEL* */
  T0 = L3innermost_non_expanded_form(ecl_symbol_value(VV[35]));
  cl_format(3, ECL_T, VV[96], T0);
  ecl_bds_unwind1(cl_env_copy);
  ecl_bds_unwind1(cl_env_copy);
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for PRINT-EMITTING                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L42print_emitting(cl_object v1f)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_symbol_value(ECL_SYM("*COMPILE-PRINT*",30)))) { goto L1; }
  {
   cl_object v2name;
   value0 = ecl_function_dispatch(cl_env_copy,VV[169])(1, v1f) /*  FUN-NAME */;
   if ((value0)!=ECL_NIL) { goto L5; }
   v2name = ecl_function_dispatch(cl_env_copy,VV[170])(1, v1f) /*  FUN-DESCRIPTION */;
   goto L3;
L5:;
   v2name = value0;
   goto L3;
L3:;
   if (Null(v2name)) { goto L7; }
   value0 = cl_format(3, ECL_T, VV[98], v2name);
   return value0;
L7:;
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
/*      function definition for UNDEFINED-VARIABLE                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L43undefined_variable(cl_object v1sym)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L36do_cmpwarn(3, VV[45], ECL_SYM("NAME",1300), v1sym);
  return value0;
 }
}
/*      function definition for BABOON                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L44baboon(cl_narg narg, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
  cl_object v1format_control;
  cl_object v2format_arguments;
  ecl_va_list args; ecl_va_start(args,narg,narg,0);
  {
   cl_object keyvars[4];
   cl_parse_key(args,2,L44baboonkeys,keyvars,NULL,FALSE);
   ecl_va_end(args);
   if (Null(keyvars[2])) {
    v1format_control = VV[101];
   } else {
    v1format_control = keyvars[0];
   }
   v2format_arguments = keyvars[1];
  }
  value0 = (cl_env_copy->function=(ECL_SYM("SIGNAL",762)->symbol.gfdef))->cfun.entry(5, VV[43], ECL_SYM("FORMAT-CONTROL",1263), v1format_control, ECL_SYM("FORMAT-ARGUMENTS",1262), v2format_arguments) /*  SIGNAL */;
  return value0;
 }
}
/*      local function WITH-CMP-PROTECTION                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC45with_cmp_protection(cl_object v1, cl_object v2)
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
   cl_object v4main_form;
   cl_object v5error_form;
   v3 = ecl_cdr(v1);
   if (!(v3==ECL_NIL)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[141])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4main_form = v6;
   }
   if (!(v3==ECL_NIL)) { goto L9; }
   ecl_function_dispatch(cl_env_copy,VV[141])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L9:;
   {
    cl_object v6;
    v6 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v5error_form = v6;
   }
   if (Null(v3)) { goto L14; }
   ecl_function_dispatch(cl_env_copy,VV[143])(1, v1) /*  DM-TOO-MANY-ARGUMENTS */;
L14:;
   T0 = cl_list(3, ECL_SYM("HANDLER-BIND",419), VV[104], v4main_form);
   T1 = cl_list(4, ECL_SYM("IF",948), VV[56], T0, v4main_form);
   T2 = cl_list(3, ECL_SYM("MULTIPLE-VALUE-PROG1",577), T1, VV[105]);
   T3 = cl_list(3, ECL_SYM("WHEN",907), VV[106], v5error_form);
   T4 = cl_list(3, ECL_SYM("UNWIND-PROTECT",890), T2, T3);
   value0 = cl_list(3, ECL_SYM("LET*",480), VV[103], T4);
   return value0;
  }
 }
}
/*      function definition for CMP-EVAL                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L47cmp_eval(volatile cl_narg narg, cl_object volatile v1form, ...)
{
 cl_object T0, T1, T2, T3;
 cl_object volatile env0 = ECL_NIL;
 cl_object volatile CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object volatile v2env;
  va_list args; va_start(args,v1form);
  {
   int i = 1;
   if (i >= narg) {
    v2env = ecl_symbol_value(VV[108]);
   } else {
    i++;
    v2env = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   volatile cl_object env1 = env0;
   env1 = ECL_NIL;
   CLV0 = env1 = CONS(ECL_NIL,env1);
   CLV1 = env1 = CONS(ECL_NEW_FRAME_ID(cl_env_copy),env1); /*  TAGBODY */
   {
    ecl_frs_push(cl_env_copy,ECL_CONS_CAR(CLV1));
    if (__ecl_frs_push_result) {
    if (cl_env_copy->values[0]==ecl_make_fixnum(0))goto L2;
    ecl_internal_error("GO found an inexistent tag");
    }
   }
   {
    cl_object v3;
    v3 = ecl_make_cclosure_va((cl_objectfn)LC46__lambda101,env1,Cblock,1);
    T0 = v3;
   }
   T1 = CONS(ECL_SYM("SERIOUS-CONDITION",744),T0);
   T2 = ecl_list1(T1);
   T3 = CONS(T2,ecl_symbol_value(ECL_SYM("*HANDLER-CLUSTERS*",6)));
   ecl_bds_bind(cl_env_copy,ECL_SYM("*HANDLER-CLUSTERS*",6),T3); /*  *HANDLER-CLUSTERS* */
   value0 = si_eval_with_env(5, v1form, v2env, ECL_NIL, ECL_T, ECL_SYM("EXECUTE",1253));
   ecl_frs_pop(cl_env_copy);
   ecl_bds_unwind1(cl_env_copy);
   return value0;
L2:;
   {
    cl_object v3c;
    v3c = ECL_CONS_CAR(CLV0);
    if (Null(ecl_symbol_value(VV[56]))) { goto L7; }
    (cl_env_copy->function=(ECL_SYM("INVOKE-DEBUGGER",447)->symbol.gfdef))->cfun.entry(1, v3c) /*  INVOKE-DEBUGGER */;
L7:;
    L29cmperr(3, VV[109], v1form, v3c);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 1;
    ecl_frs_pop(cl_env_copy);
    return value0;
   }
  }
 }
}
/*      closure LAMBDA101                                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC46__lambda101(cl_narg narg, cl_object v1si__temp, ...)
{
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV1 = env0;                                     /*  TAGBODY         */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  ECL_CONS_CAR(CLV0) = v1si__temp;
  cl_go(ECL_CONS_CAR(CLV1),ecl_make_fixnum(0));
 }
 }
}
/*      function definition for CMP-MACRO-FUNCTION                    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L48cmp_macro_function(cl_object v1name)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_function_dispatch(cl_env_copy,VV[178])(1, v1name) /*  CMP-ENV-SEARCH-MACRO */;
  if ((value0)!=ECL_NIL) { goto L2; }
  value0 = cl_macro_function(1, v1name);
  return value0;
L2:;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for CMP-EXPAND-MACRO                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L50cmp_expand_macro(volatile cl_narg narg, cl_object volatile v1fd, cl_object volatile v2form, ...)
{
 cl_object T0, T1, T2, T3;
 cl_object volatile env0 = ECL_NIL;
 cl_object volatile CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<2)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>3)) FEwrong_num_arguments_anonym();
 {
  cl_object volatile v3env;
  va_list args; va_start(args,v2form);
  {
   int i = 2;
   if (i >= narg) {
    v3env = ecl_symbol_value(VV[108]);
   } else {
    i++;
    v3env = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   volatile cl_object env1 = env0;
   env1 = ECL_NIL;
   CLV0 = env1 = CONS(ECL_NIL,env1);
   CLV1 = env1 = CONS(ECL_NEW_FRAME_ID(cl_env_copy),env1); /*  TAGBODY */
   {
    ecl_frs_push(cl_env_copy,ECL_CONS_CAR(CLV1));
    if (__ecl_frs_push_result) {
    if (cl_env_copy->values[0]==ecl_make_fixnum(0))goto L2;
    ecl_internal_error("GO found an inexistent tag");
    }
   }
   {
    cl_object v4;
    v4 = ecl_make_cclosure_va((cl_objectfn)LC49__lambda105,env1,Cblock,1);
    T0 = v4;
   }
   T1 = CONS(ECL_SYM("SERIOUS-CONDITION",744),T0);
   T2 = ecl_list1(T1);
   T3 = CONS(T2,ecl_symbol_value(ECL_SYM("*HANDLER-CLUSTERS*",6)));
   ecl_bds_bind(cl_env_copy,ECL_SYM("*HANDLER-CLUSTERS*",6),T3); /*  *HANDLER-CLUSTERS* */
   {
    cl_object v4new_form;
    v4new_form = ecl_function_dispatch(cl_env_copy,ecl_symbol_value(ECL_SYM("*MACROEXPAND-HOOK*",42)))(3, v1fd, v2form, v3env);
    {
     bool v5;
     v5 = ecl_eql(v4new_form,v2form);
     T0 = (v5)?ECL_NIL:ECL_T;
    }
    cl_env_copy->nvalues = 2;
    cl_env_copy->values[1] = T0;
    cl_env_copy->values[0] = v4new_form;
    value0 = cl_env_copy->values[0];
    ecl_frs_pop(cl_env_copy);
    ecl_bds_unwind1(cl_env_copy);
    return value0;
   }
L2:;
   {
    cl_object v4c;
    v4c = ECL_CONS_CAR(CLV0);
    if (Null(ecl_symbol_value(VV[56]))) { goto L9; }
    (cl_env_copy->function=(ECL_SYM("INVOKE-DEBUGGER",447)->symbol.gfdef))->cfun.entry(1, v4c) /*  INVOKE-DEBUGGER */;
L9:;
    L29cmperr(3, VV[112], v2form, v4c);
    cl_env_copy->nvalues = 2;
    cl_env_copy->values[1] = ECL_NIL;
    cl_env_copy->values[0] = ECL_NIL;
    value0 = cl_env_copy->values[0];
    ecl_frs_pop(cl_env_copy);
    return value0;
   }
  }
 }
}
/*      closure LAMBDA105                                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC49__lambda105(cl_narg narg, cl_object v1si__temp, ...)
{
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV1 = env0;                                     /*  TAGBODY         */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  ECL_CONS_CAR(CLV0) = v1si__temp;
  cl_go(ECL_CONS_CAR(CLV1),ecl_make_fixnum(0));
 }
 }
}
/*      function definition for CMP-EXPAND-COMPILER-MACRO             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L52cmp_expand_compiler_macro(volatile cl_narg narg, cl_object volatile v1fd, cl_object volatile v2fname, cl_object volatile v3args, ...)
{
 cl_object T0, T1, T2, T3;
 cl_object volatile env0 = ECL_NIL;
 cl_object volatile CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<3)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>4)) FEwrong_num_arguments_anonym();
 {
  cl_object volatile v4env;
  va_list args; va_start(args,v3args);
  {
   int i = 3;
   if (i >= narg) {
    v4env = ecl_symbol_value(VV[108]);
   } else {
    i++;
    v4env = va_arg(args,cl_object);
   }
  }
  va_end(args);
  {
   volatile cl_object env1 = env0;
   env1 = ECL_NIL;
   CLV0 = env1 = CONS(ECL_NIL,env1);
   CLV1 = env1 = CONS(ECL_NEW_FRAME_ID(cl_env_copy),env1); /*  TAGBODY */
   {
    ecl_frs_push(cl_env_copy,ECL_CONS_CAR(CLV1));
    if (__ecl_frs_push_result) {
    if (cl_env_copy->values[0]==ecl_make_fixnum(0))goto L2;
    ecl_internal_error("GO found an inexistent tag");
    }
   }
   {
    cl_object v5;
    v5 = ecl_make_cclosure_va((cl_objectfn)LC51__lambda109,env1,Cblock,1);
    T0 = v5;
   }
   T1 = CONS(ECL_SYM("SERIOUS-CONDITION",744),T0);
   T2 = ecl_list1(T1);
   T3 = CONS(T2,ecl_symbol_value(ECL_SYM("*HANDLER-CLUSTERS*",6)));
   ecl_bds_bind(cl_env_copy,ECL_SYM("*HANDLER-CLUSTERS*",6),T3); /*  *HANDLER-CLUSTERS* */
   T0 = CONS(v2fname,v3args);
   value0 = L50cmp_expand_macro(3, v1fd, T0, v4env);
   ecl_frs_pop(cl_env_copy);
   ecl_bds_unwind1(cl_env_copy);
   return value0;
L2:;
   {
    cl_object v5c;
    v5c = ECL_CONS_CAR(CLV0);
    T0 = cl_list(2, v2fname, v5c);
    L36do_cmpwarn(5, VV[40], ECL_SYM("FORMAT-CONTROL",1263), VV[114], ECL_SYM("FORMAT-ARGUMENTS",1262), T0);
    cl_env_copy->nvalues = 2;
    cl_env_copy->values[1] = ECL_NIL;
    cl_env_copy->values[0] = ECL_NIL;
    value0 = cl_env_copy->values[0];
    ecl_frs_pop(cl_env_copy);
    return value0;
   }
  }
 }
}
/*      closure LAMBDA109                                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC51__lambda109(cl_narg narg, cl_object v1si__temp, ...)
{
 cl_object CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object env0 = cl_env_copy->function->cclosure.env;
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 /* Scanning closure data ... */
 CLV1 = env0;                                     /*  TAGBODY         */
 CLV0 = _ecl_cdr(CLV1);
 { /* ... closure scanning finished */
 if (ecl_unlikely(narg!=1)) FEwrong_num_arguments_anonym();
 {
TTL:
  ECL_CONS_CAR(CLV0) = v1si__temp;
  cl_go(ECL_CONS_CAR(CLV1),ecl_make_fixnum(0));
 }
 }
}
/*      function definition for COMPILER-CLEAR-COMPILER-PROPERTIES    */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L53si__compiler_clear_compiler_properties(cl_object v1symbol)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  si_rem_sysprop(v1symbol, VV[116]);
  si_rem_sysprop(v1symbol, VV[117]);
  si_rem_sysprop(v1symbol, VV[118]);
  value0 = si_rem_sysprop(v1symbol, VV[119]);
  return value0;
 }
}
/*      function definition for LISP-TO-C-NAME                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L55lisp_to_c_name(cl_object v1obj)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(v1obj)) { goto L2; }
  {
   cl_object v2;
   v2 = ecl_make_cfun((cl_objectfn_fixed)LC54__lambda110,ECL_NIL,Cblock,1);
   T0 = v2;
  }
  T1 = cl_prin1_to_string(v1obj);
  T2 = cl_string_downcase(1, T1);
  value0 = cl_map(3, ECL_SYM("STRING",807), T0, T2);
  return value0;
L2:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      local function LAMBDA110                                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC54__lambda110(cl_object v1c)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_fixnum v2cc;
   v2cc = ecl_fixnum(cl_char_code(v1c));
   if (((97)<=(v2cc) && (v2cc)<=(122))) { goto L4; }
   if (!(((48)<=(v2cc) && (v2cc)<=(57)))) { goto L2; }
   goto L3;
L4:;
L3:;
   value0 = v1c;
   cl_env_copy->nvalues = 1;
   return value0;
L2:;
   value0 = CODE_CHAR(95);
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for COLLECT-LINES                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L56collect_lines(cl_object v1stream)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2line;
   v2line = ECL_NIL;
   {
    cl_object v3;
    cl_object v4;
    v3 = ecl_list1(ECL_NIL);
    v4 = v3;
L4:;
    v2line = cl_read_line(3, v1stream, ECL_NIL, ECL_NIL);
    if ((v2line)!=ECL_NIL) { goto L8; }
    goto L5;
L8:;
    {
     cl_object v5;
     v5 = v4;
     if (ecl_unlikely(ECL_ATOM(v5))) FEtype_error_cons(v5);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
     T0 = v5;
    }
    v4 = ecl_list1(v2line);
    (ECL_CONS_CDR(T0)=v4,T0);
    goto L4;
L5:;
    value0 = ecl_cdr(v3);
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}

#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/cmp/cmputil.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclyJn85Bb7_CXNmqq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;CMPUTIL.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclyJn85Bb7_CXNmqq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  si_Xmake_constant(VV[0], VVtemp[1]);
  si_Xmake_constant(VV[1], VVtemp[2]);
  si_Xmake_constant(VV[2], VVtemp[3]);
  si_Xmake_constant(VV[3], VVtemp[4]);
  ecl_cmp_defun(VV[123]);                         /*  BRIEF-NAMESTRING */
  ecl_cmp_defun(VV[124]);                         /*  NORMALIZE-BUILD-TARGET-NAME */
  ecl_cmp_defun(VV[125]);                         /*  INNERMOST-NON-EXPANDED-FORM */
  ecl_cmp_defun(VV[126]);                         /*  COMPILER-MESSAGE-REPORT */
 {
  cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC6__lambda14,ECL_NIL,Cblock,0);
   T0 = v1;
  }
  T1 = cl_listX(3, ECL_SYM("INITFUNCTION",999), T0, VVtemp[6]);
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC7__lambda16,ECL_NIL,Cblock,0);
   T2 = v1;
  }
  T3 = cl_listX(3, ECL_SYM("INITFUNCTION",999), T2, VVtemp[9]);
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC8__lambda17,ECL_NIL,Cblock,0);
   T4 = v1;
  }
  T5 = cl_listX(3, ECL_SYM("INITFUNCTION",999), T4, VVtemp[10]);
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC9__lambda18,ECL_NIL,Cblock,0);
   T6 = v1;
  }
  T7 = cl_listX(3, ECL_SYM("INITFUNCTION",999), T6, VVtemp[11]);
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC10__lambda19,ECL_NIL,Cblock,0);
   T8 = v1;
  }
  T9 = cl_listX(3, ECL_SYM("INITFUNCTION",999), T8, VVtemp[12]);
  T10 = cl_list(7, T1, VVtemp[7], VVtemp[8], T3, T5, T7, T9);
  clos_load_defclass(VV[33], VVtemp[5], T10, ECL_NIL);
 }
  clos_load_defclass(VV[37], VVtemp[13], ECL_NIL, ECL_NIL);
  clos_load_defclass(VV[38], VVtemp[14], ECL_NIL, ECL_NIL);
  clos_load_defclass(VV[39], VVtemp[15], VVtemp[16], ECL_NIL);
  clos_load_defclass(VV[40], VVtemp[17], ECL_NIL, ECL_NIL);
  clos_load_defclass(VV[41], VVtemp[13], VVtemp[18], ECL_NIL);
  clos_load_defclass(VV[42], VVtemp[19], VVtemp[20], ECL_NIL);
  clos_load_defclass(VV[43], VVtemp[21], VVtemp[22], ECL_NIL);
  clos_load_defclass(VV[44], VVtemp[15], VVtemp[23], ECL_NIL);
 {
  cl_object T0, T1, T2;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC12__lambda20,ECL_NIL,Cblock,0);
   T0 = v1;
  }
  T1 = cl_listX(3, ECL_SYM("INITFUNCTION",999), T0, VVtemp[25]);
  T2 = cl_list(2, T1, VVtemp[26]);
  clos_load_defclass(VV[45], VVtemp[24], T2, ECL_NIL);
 }
 {
  cl_object T0, T1, T2;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object volatile v1;
   v1 = ecl_make_cfun((cl_objectfn_fixed)LC14__lambda22,ECL_NIL,Cblock,0);
   T0 = v1;
  }
  T1 = cl_listX(3, ECL_SYM("INITFUNCTION",999), T0, VVtemp[27]);
  T2 = ecl_list1(T1);
  clos_load_defclass(VV[47], VVtemp[19], T2, ECL_NIL);
 }
  ecl_cmp_defun(VV[133]);                         /*  PRINT-COMPILER-MESSAGE */
  ecl_cmp_defun(VV[134]);                         /*  HANDLE-COMPILER-NOTE */
  ecl_cmp_defun(VV[135]);                         /*  HANDLE-COMPILER-WARNING */
  ecl_cmp_defun(VV[136]);                         /*  HANDLE-COMPILER-ERROR */
  ecl_cmp_defun(VV[137]);                         /*  HANDLE-COMPILER-INTERNAL-ERROR */
  ecl_cmp_defun(VV[138]);                         /*  DO-COMPILATION-UNIT */
  ecl_cmp_defmacro(VV[140]);                      /*  WITH-COMPILATION-UNIT */
  ecl_cmp_defmacro(VV[142]);                      /*  WITH-COMPILER-ENV */
  si_Xmake_special(VV[70]);
  if (ecl_boundp(cl_env_copy,VV[70])) { goto L92; }
  cl_set(VV[70],ecl_make_fixnum(0));
L92:;
  ecl_cmp_defun(VV[144]);                         /*  PRINT-C1FORMS   */
  ecl_cmp_defun(VV[148]);                         /*  PRINT-REF       */
  ecl_cmp_defun(VV[150]);                         /*  PRINT-VAR       */
  ecl_cmp_defun(VV[153]);                         /*  CMPPROGRESS     */
  ecl_cmp_defmacro(VV[154]);                      /*  CMPCK           */
  ecl_cmp_defmacro(VV[155]);                      /*  CMPASSERT       */
  ecl_cmp_defun(VV[156]);                         /*  CMPERR          */
  ecl_cmp_defun(VV[157]);                         /*  SAFE-LIST-LENGTH */
  ecl_cmp_defun(VV[158]);                         /*  CHECK-ARGS-NUMBER */
  ecl_cmp_defun(VV[159]);                         /*  TOO-MANY-ARGS   */
  ecl_cmp_defun(VV[160]);                         /*  TOO-FEW-ARGS    */
  (void)0; /* No entry created for DO-CMPWARN */
  ecl_cmp_defun(VV[163]);                         /*  CMPWARN-STYLE   */
  ecl_cmp_defun(VV[164]);                         /*  CMPWARN         */
  ecl_cmp_defun(VV[165]);                         /*  CMPNOTE         */
  ecl_cmp_defun(VV[166]);                         /*  CMPDEBUG        */
  ecl_cmp_defun(VV[167]);                         /*  PRINT-CURRENT-FORM */
  ecl_cmp_defun(VV[168]);                         /*  PRINT-EMITTING  */
  ecl_cmp_defun(VV[171]);                         /*  UNDEFINED-VARIABLE */
  ecl_cmp_defun(VV[172]);                         /*  BABOON          */
  ecl_cmp_defmacro(VV[175]);                      /*  WITH-CMP-PROTECTION */
  ecl_cmp_defun(VV[176]);                         /*  CMP-EVAL        */
  ecl_cmp_defun(VV[177]);                         /*  CMP-MACRO-FUNCTION */
  ecl_cmp_defun(VV[179]);                         /*  CMP-EXPAND-MACRO */
  ecl_cmp_defun(VV[180]);                         /*  CMP-EXPAND-COMPILER-MACRO */
  ecl_cmp_defun(VV[181]);                         /*  COMPILER-CLEAR-COMPILER-PROPERTIES */
  ecl_cmp_defun(VV[182]);                         /*  LISP-TO-C-NAME  */
  ecl_cmp_defun(VV[183]);                         /*  COLLECT-LINES   */
}
