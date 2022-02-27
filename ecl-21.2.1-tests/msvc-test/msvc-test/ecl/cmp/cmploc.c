/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;CMPLOC.LSP                                    */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/cmp/cmploc.eclh"
/*      function definition for TMP-DESTINATION                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1tmp_destination(cl_object v1loc)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!((v1loc)==(ECL_SYM("VALUES",897)))) { goto L1; }
  value0 = ECL_SYM("VALUES",897);
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  if (!((v1loc)==(VV[0]))) { goto L3; }
  value0 = VV[0];
  cl_env_copy->nvalues = 1;
  return value0;
L3:;
  value0 = ECL_SYM("RETURN",726);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for PRECISE-LOC-TYPE                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2precise_loc_type(cl_object v1loc, cl_object v2new_type)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = ecl_function_dispatch(cl_env_copy,VV[73])(1, v1loc) /*  LOC-TYPE */;
  if (Null(cl_subtypep(2, T0, v2new_type))) { goto L1; }
  value0 = v1loc;
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  value0 = cl_list(3, ECL_SYM("THE",858), v2new_type, v1loc);
  return value0;
 }
}
/*      function definition for LOC-IN-C1FORM-MOVABLE-P               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3loc_in_c1form_movable_p(cl_object v1loc)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ecl_eql(v1loc,ECL_T))) { goto L6; }
  goto L3;
  goto L4;
L6:;
  goto L4;
L4:;
  if (!((v1loc)==(ECL_NIL))) { goto L1; }
  goto L2;
L3:;
L2:;
  value0 = ECL_T;
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  if (!(ecl_numberp(v1loc))) { goto L9; }
  value0 = ECL_T;
  cl_env_copy->nvalues = 1;
  return value0;
L9:;
  if (!(ECL_STRINGP(v1loc))) { goto L11; }
  value0 = ECL_T;
  cl_env_copy->nvalues = 1;
  return value0;
L11:;
  if (Null(ecl_function_dispatch(cl_env_copy,VV[75])(1, v1loc) /*  VV-P */)) { goto L13; }
  value0 = ECL_T;
  cl_env_copy->nvalues = 1;
  return value0;
L13:;
  if (!((v1loc)==(VV[5]))) { goto L20; }
  goto L17;
  goto L18;
L20:;
  goto L18;
L18:;
  if (!((v1loc)==(ECL_SYM("VALUES",897)))) { goto L24; }
  goto L17;
  goto L22;
L24:;
  goto L22;
L22:;
  if (!((v1loc)==(VV[8]))) { goto L28; }
  goto L17;
  goto L26;
L28:;
  goto L26;
L26:;
  if (!((v1loc)==(VV[10]))) { goto L15; }
  goto L16;
L17:;
L16:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L15:;
  if (!(ECL_ATOM(v1loc))) { goto L31; }
  T0 = ecl_list1(v1loc);
  value0 = ecl_function_dispatch(cl_env_copy,VV[76])(4, ECL_SYM("FORMAT-CONTROL",1263), VV[12], ECL_SYM("FORMAT-ARGUMENTS",1262), T0) /*  BABOON */;
  return value0;
L31:;
  T0 = ecl_car(v1loc);
  if (!((T0)==(ECL_SYM("THE",858)))) { goto L33; }
  v1loc = ecl_caddr(v1loc);
  goto TTL;
L33:;
  v1loc = ecl_car(v1loc);
  if (Null(ecl_memql(v1loc,VV[13]))) { goto L37; }
  value0 = ECL_T;
  cl_env_copy->nvalues = 1;
  return value0;
L37:;
  T0 = ecl_list1(v1loc);
  value0 = ecl_function_dispatch(cl_env_copy,VV[76])(4, ECL_SYM("FORMAT-CONTROL",1263), VV[12], ECL_SYM("FORMAT-ARGUMENTS",1262), T0) /*  BABOON */;
  return value0;
 }
}
/*      function definition for USES-VALUES                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L4uses_values(cl_object v1loc)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_CONSP(v1loc))) { goto L2; }
  {
   cl_object v2;
   v2 = ecl_car(v1loc);
   if (!((v2)==(VV[15]))) { goto L12; }
   value0 = VV[16];
   goto L10;
L12:;
   value0 = ECL_NIL;
   goto L10;
L10:;
   if ((value0)!=ECL_NIL) { goto L9; }
   if (!((v2)==(VV[17]))) { goto L16; }
   value0 = VV[18];
   goto L14;
L16:;
   value0 = ECL_NIL;
   goto L14;
L14:;
   if ((value0)!=ECL_NIL) { goto L9; }
   if (!((v2)==(VV[19]))) { goto L19; }
   value0 = VV[20];
   goto L6;
L19:;
   value0 = ECL_NIL;
   goto L6;
L9:;
   goto L6;
  }
L6:;
  if ((value0)!=ECL_NIL) { goto L5; }
  T0 = ecl_car(v1loc);
  if (!((T0)==(ECL_SYM("C-INLINE",2063)))) { goto L22; }
  T0 = ecl_cddddr(v1loc);
  T1 = ecl_cadr(T0);
  value0 = ecl_make_bool((T1)==(ECL_SYM("VALUES",897)));
  cl_env_copy->nvalues = 1;
  return value0;
L22:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
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
/*      function definition for LOC-IMMEDIATE-VALUE-P                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L5loc_immediate_value_p(cl_object v1loc)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!((v1loc)==(ECL_T))) { goto L1; }
  cl_env_copy->nvalues = 2;
  cl_env_copy->values[1] = ECL_T;
  cl_env_copy->values[0] = ECL_T;
  return cl_env_copy->values[0];
L1:;
  if (!((v1loc)==(ECL_NIL))) { goto L3; }
  cl_env_copy->nvalues = 2;
  cl_env_copy->values[1] = ECL_NIL;
  cl_env_copy->values[0] = ECL_T;
  return cl_env_copy->values[0];
L3:;
  if (!(ecl_numberp(v1loc))) { goto L5; }
  cl_env_copy->nvalues = 2;
  cl_env_copy->values[1] = v1loc;
  cl_env_copy->values[0] = ECL_T;
  return cl_env_copy->values[0];
L5:;
  if (Null(ecl_function_dispatch(cl_env_copy,VV[75])(1, v1loc) /*  VV-P */)) { goto L7; }
  {
   cl_object v2value;
   v2value = ecl_function_dispatch(cl_env_copy,VV[79])(1, v1loc) /*  VV-VALUE */;
   if (v2value==ECL_NIL) { goto L12; }
   if (!(ECL_FIXNUMP(v2value))) { goto L10; }
   goto L11;
L12:;
L11:;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = ECL_NIL;
   cl_env_copy->values[0] = ECL_NIL;
   return cl_env_copy->values[0];
L10:;
   cl_env_copy->nvalues = 2;
   cl_env_copy->values[1] = v2value;
   cl_env_copy->values[0] = ECL_T;
   return cl_env_copy->values[0];
  }
L7:;
  if (!(ECL_ATOM(v1loc))) { goto L14; }
  cl_env_copy->nvalues = 2;
  cl_env_copy->values[1] = ECL_NIL;
  cl_env_copy->values[0] = ECL_NIL;
  return cl_env_copy->values[0];
L14:;
  T0 = ecl_car(v1loc);
  if (!((T0)==(ECL_SYM("THE",858)))) { goto L16; }
  v1loc = ecl_caddr(v1loc);
  goto TTL;
L16:;
  T0 = ecl_car(v1loc);
  if (Null(ecl_memql(T0,VV[22]))) { goto L20; }
  T0 = ecl_cadr(v1loc);
  cl_env_copy->nvalues = 2;
  cl_env_copy->values[1] = T0;
  cl_env_copy->values[0] = ECL_T;
  return cl_env_copy->values[0];
L20:;
  T0 = ecl_car(v1loc);
  if (!((T0)==(VV[23]))) { goto L22; }
  T0 = ecl_cadr(v1loc);
  T1 = cl_code_char(T0);
  cl_env_copy->nvalues = 2;
  cl_env_copy->values[1] = T1;
  cl_env_copy->values[0] = ECL_T;
  return cl_env_copy->values[0];
L22:;
  cl_env_copy->nvalues = 2;
  cl_env_copy->values[1] = ECL_NIL;
  cl_env_copy->values[0] = ECL_NIL;
  return cl_env_copy->values[0];
 }
}
/*      function definition for LOC-IMMEDIATE-VALUE                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L6loc_immediate_value(cl_object v1loc)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
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
     cl_env_copy->values[0] = L5loc_immediate_value_p(v1loc);
     ecl_stack_frame_push_values(v2);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;cl_env_copy->values[0]=ecl_apply_from_stack_frame(v2,v3);
     value0 = cl_env_copy->values[0];
    }
   }
   ecl_stack_frame_close(_ecl_inner_frame);
  }
  T0 = value0;
  value0 = ecl_cadr(T0);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for UNKNOWN-LOCATION                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L7unknown_location(cl_object v1where, cl_object v2loc)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_list(2, v1where, v2loc);
  value0 = ecl_function_dispatch(cl_env_copy,VV[76])(4, ECL_SYM("FORMAT-CONTROL",1263), VV[26], ECL_SYM("FORMAT-ARGUMENTS",1262), T0) /*  BABOON */;
  return value0;
 }
}
/*      function definition for WT-LOC                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L8wt_loc(cl_object v1loc)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!(ECL_CONSP(v1loc))) { goto L1; }
  {
   cl_object v2fd;
   T0 = ecl_car(v1loc);
   v2fd = ecl_gethash_safe(T0,ecl_symbol_value(VV[28]),ECL_NIL);
   if (Null(v2fd)) { goto L4; }
   T0 = ecl_cdr(v1loc);
   value0 = cl_apply(2, v2fd, T0);
   return value0;
L4:;
   value0 = L7unknown_location(VV[29], v1loc);
   return value0;
  }
L1:;
  if (!(ECL_SYMBOLP(v1loc))) { goto L6; }
  {
   cl_object v3txt;
   v3txt = ecl_gethash_safe(v1loc,ecl_symbol_value(VV[28]),VV[30]);
   if (!((v3txt)==(VV[30]))) { goto L9; }
   L7unknown_location(VV[29], v1loc);
L9:;
   value0 = ecl_function_dispatch(cl_env_copy,VV[83])(1, v3txt) /*  WT */;
   return value0;
  }
L6:;
  if (!(ECL_STRINGP(v1loc))) { goto L11; }
  value0 = ecl_function_dispatch(cl_env_copy,VV[83])(1, v1loc) /*  WT */;
  return value0;
L11:;
  if (Null(ecl_function_dispatch(cl_env_copy,VV[84])(1, v1loc) /*  VAR-P */)) { goto L13; }
  value0 = ecl_function_dispatch(cl_env_copy,VV[85])(1, v1loc) /*  WT-VAR */;
  return value0;
L13:;
  if (Null(ecl_function_dispatch(cl_env_copy,VV[75])(1, v1loc) /*  VV-P */)) { goto L15; }
  value0 = ecl_function_dispatch(cl_env_copy,VV[86])(1, v1loc) /*  WT-VV */;
  return value0;
L15:;
  value0 = L7unknown_location(VV[29], v1loc);
  return value0;
 }
}
/*      function definition for LAST-CALL-P                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L9last_call_p()
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_memql(ecl_symbol_value(VV[31]),VV[32]);
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for WT-LCL                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L10wt_lcl(cl_object v1lcl)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (ecl_numberp(v1lcl)) { goto L1; }
  T0 = ecl_list1(v1lcl);
  ecl_function_dispatch(cl_env_copy,VV[76])(4, ECL_SYM("FORMAT-CONTROL",1263), VV[34], ECL_SYM("FORMAT-ARGUMENTS",1262), T0) /*  BABOON */;
L1:;
  value0 = ecl_function_dispatch(cl_env_copy,VV[83])(2, VV[35], v1lcl) /*  WT */;
  return value0;
 }
}
/*      function definition for WT-LCL-LOC                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L11wt_lcl_loc(cl_narg narg, cl_object v1lcl, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>3)) FEwrong_num_arguments_anonym();
 {
  cl_object v2type;
  cl_object v3name;
  va_list args; va_start(args,v1lcl);
  {
   int i = 1;
   if (i >= narg) {
    v2type = ECL_NIL;
   } else {
    i++;
    v2type = va_arg(args,cl_object);
   }
   if (i >= narg) {
    v3name = ECL_NIL;
   } else {
    i++;
    v3name = va_arg(args,cl_object);
   }
  }
  va_end(args);
  if (ecl_numberp(v1lcl)) { goto L3; }
  T0 = ecl_list1(v1lcl);
  ecl_function_dispatch(cl_env_copy,VV[76])(4, ECL_SYM("FORMAT-CONTROL",1263), VV[37], ECL_SYM("FORMAT-ARGUMENTS",1262), T0) /*  BABOON */;
L3:;
  value0 = ecl_function_dispatch(cl_env_copy,VV[83])(3, VV[35], v1lcl, v3name) /*  WT */;
  return value0;
 }
}
/*      function definition for WT-TEMP                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L12wt_temp(cl_object v1temp)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_function_dispatch(cl_env_copy,VV[83])(2, VV[39], v1temp) /*  WT */;
  return value0;
 }
}
/*      function definition for WT-NUMBER                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L13wt_number(cl_narg narg, cl_object v1value, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2vv;
  va_list args; va_start(args,v1value);
  {
   int i = 1;
   if (i >= narg) {
    v2vv = ECL_NIL;
   } else {
    i++;
    v2vv = va_arg(args,cl_object);
   }
  }
  va_end(args);
  value0 = ecl_function_dispatch(cl_env_copy,VV[83])(1, v1value) /*  WT */;
  return value0;
 }
}
/*      function definition for WT-CHARACTER                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L14wt_character(cl_narg narg, cl_object v1value, ...)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<1)) FEwrong_num_arguments_anonym();
 if (ecl_unlikely(narg>2)) FEwrong_num_arguments_anonym();
 {
  cl_object v2vv;
  va_list args; va_start(args,v1value);
  {
   int i = 1;
   if (i >= narg) {
    v2vv = ECL_NIL;
   } else {
    i++;
    v2vv = va_arg(args,cl_object);
   }
  }
  va_end(args);
  value0 = ecl_function_dispatch(cl_env_copy,VV[83])(1, v1value) /*  WT */;
  return value0;
 }
}
/*      function definition for WT-VALUE                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L15wt_value(cl_object v1i)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_function_dispatch(cl_env_copy,VV[83])(3, VV[43], v1i, VV[44]) /*  WT */;
  return value0;
 }
}
/*      function definition for WT-KEYVARS                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L16wt_keyvars(cl_object v1i)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = ecl_function_dispatch(cl_env_copy,VV[83])(3, VV[46], v1i, VV[44]) /*  WT */;
  return value0;
 }
}
/*      function definition for WT-THE                                */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L17wt_the(cl_object v1type, cl_object v2loc)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L8wt_loc(v2loc);
  return value0;
 }
}
/*      function definition for LOC-REFERS-TO-SPECIAL                 */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L18loc_refers_to_special(cl_object v1loc)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_function_dispatch(cl_env_copy,VV[84])(1, v1loc) /*  VAR-P */)) { goto L1; }
  {
   cl_object v2;
   v2 = ecl_function_dispatch(cl_env_copy,VV[97])(1, v1loc) /*  VAR-KIND */;
   if (!((v2)==(ECL_SYM("SPECIAL",791)))) { goto L8; }
   value0 = VV[49];
   goto L6;
L8:;
   value0 = ECL_NIL;
   goto L6;
L6:;
   if ((value0)!=ECL_NIL) { goto L5; }
   if (!((v2)==(VV[50]))) { goto L11; }
   value0 = VV[51];
   cl_env_copy->nvalues = 1;
   return value0;
L11:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L5:;
   cl_env_copy->nvalues = 1;
   return value0;
  }
L1:;
  if (!(ECL_ATOM(v1loc))) { goto L13; }
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
L13:;
  T0 = ecl_car(v1loc);
  if (!((T0)==(ECL_SYM("THE",858)))) { goto L15; }
  v1loc = ecl_caddr(v1loc);
  goto TTL;
L15:;
  v1loc = ecl_car(v1loc);
  if (!((v1loc)==(VV[52]))) { goto L19; }
  value0 = ECL_T;
  cl_env_copy->nvalues = 1;
  return value0;
L19:;
  if (!((v1loc)==(ECL_SYM("C-INLINE",2063)))) { goto L22; }
  value0 = ECL_T;
  cl_env_copy->nvalues = 1;
  return value0;
L22:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for VALUES-LOC                            */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L19values_loc(cl_object v1n)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_list(2, VV[54], v1n);
  return value0;
 }
}
/*      function definition for SET-UNKNOWN-LOC                       */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L20set_unknown_loc(cl_object v1loc)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = L7unknown_location(VV[56], ecl_symbol_value(VV[57]));
  return value0;
 }
}
/*      function definition for SET-LOC                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L21set_loc(cl_object v1loc)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2destination;
   v2destination = ecl_symbol_value(VV[57]);
   {
    cl_object v3;
    v3 = ecl_make_bool((v2destination)==(v1loc));
    if (Null(v3)) { goto L3; }
    value0 = v3;
    cl_env_copy->nvalues = 1;
    return value0;
L3:;
    if (!(ECL_SYMBOLP(v2destination))) { goto L5; }
    T0 = ecl_gethash_safe(v2destination,ecl_symbol_value(VV[59]),VV[58]);
    value0 = ecl_function_dispatch(cl_env_copy,T0)(1, v1loc);
    return value0;
L5:;
    if (Null(ecl_function_dispatch(cl_env_copy,VV[84])(1, v2destination) /*  VAR-P */)) { goto L8; }
    value0 = ecl_function_dispatch(cl_env_copy,VV[101])(2, v1loc, v2destination) /*  SET-VAR */;
    return value0;
L8:;
    if (Null(ecl_function_dispatch(cl_env_copy,VV[75])(1, v2destination) /*  VV-P */)) { goto L10; }
    value0 = ecl_function_dispatch(cl_env_copy,VV[102])(2, v1loc, v2destination) /*  SET-VV */;
    return value0;
L10:;
    if (!(ECL_ATOM(v2destination))) { goto L12; }
    value0 = L7unknown_location(VV[56], v2destination);
    return value0;
L12:;
    {
     cl_object v4fd;
     T0 = ecl_car(v2destination);
     v4fd = ecl_gethash_safe(T0,ecl_symbol_value(VV[59]),ECL_NIL);
     if (Null(v4fd)) { goto L15; }
     T0 = ecl_cdr(v2destination);
     value0 = cl_apply(3, v4fd, v1loc, T0);
     return value0;
L15:;
     ecl_function_dispatch(cl_env_copy,VV[103])(0) /*  WT-NL          */;
     L8wt_loc(v2destination);
     ecl_function_dispatch(cl_env_copy,VV[83])(1, VV[60]) /*  WT      */;
     T0 = ecl_function_dispatch(cl_env_copy,VV[104])(1, ecl_symbol_value(VV[57])) /*  LOC-REPRESENTATION-TYPE */;
     ecl_function_dispatch(cl_env_copy,VV[105])(2, T0, v1loc) /*  WT-COERCE-LOC */;
     value0 = ecl_function_dispatch(cl_env_copy,VV[83])(1, VV[61]) /*  WT */;
     return value0;
    }
   }
  }
 }
}
/*      function definition for SET-THE-LOC                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L22set_the_loc(cl_object v1loc, cl_object v2type, cl_object v3orig_loc)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  ecl_bds_bind(cl_env_copy,VV[57],v3orig_loc);    /*  *DESTINATION*   */
  value0 = L21set_loc(v1loc);
  ecl_bds_unwind1(cl_env_copy);
  return value0;
 }
}
/*      function definition for SET-VALUES-LOC                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L23set_values_loc(cl_object v1loc)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2;
   v2 = ecl_make_bool((v1loc)==(ECL_SYM("VALUES",897)));
   if (Null(v2)) { goto L2; }
   value0 = v2;
   cl_env_copy->nvalues = 1;
   return value0;
L2:;
   if (Null(L4uses_values(v1loc))) { goto L4; }
   ecl_function_dispatch(cl_env_copy,VV[103])(1, VV[63]) /*  WT-NL    */;
   ecl_function_dispatch(cl_env_copy,VV[105])(2, ECL_SYM("OBJECT",1305), v1loc) /*  WT-COERCE-LOC */;
   value0 = ecl_function_dispatch(cl_env_copy,VV[83])(1, VV[61]) /*  WT */;
   return value0;
L4:;
   ecl_function_dispatch(cl_env_copy,VV[103])(1, VV[63]) /*  WT-NL    */;
   ecl_function_dispatch(cl_env_copy,VV[105])(2, ECL_SYM("OBJECT",1305), v1loc) /*  WT-COERCE-LOC */;
   ecl_function_dispatch(cl_env_copy,VV[83])(1, VV[61]) /*  WT        */;
   value0 = ecl_function_dispatch(cl_env_copy,VV[103])(1, VV[64]) /*  WT-NL */;
   return value0;
  }
 }
}
/*      function definition for SET-VALUE0-LOC                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L24set_value0_loc(cl_object v1loc)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  ecl_function_dispatch(cl_env_copy,VV[103])(1, VV[66]) /*  WT-NL     */;
  ecl_function_dispatch(cl_env_copy,VV[105])(2, ECL_SYM("OBJECT",1305), v1loc) /*  WT-COERCE-LOC */;
  value0 = ecl_function_dispatch(cl_env_copy,VV[83])(1, VV[61]) /*  WT */;
  return value0;
 }
}
/*      function definition for SET-RETURN-LOC                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L25set_return_loc(cl_object v1loc)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if ((v1loc)==(ECL_SYM("VALUES",897))) { goto L3; }
  if (Null(L4uses_values(v1loc))) { goto L1; }
  goto L2;
L3:;
L2:;
  ecl_function_dispatch(cl_env_copy,VV[103])(1, VV[66]) /*  WT-NL     */;
  ecl_function_dispatch(cl_env_copy,VV[105])(2, ECL_SYM("OBJECT",1305), v1loc) /*  WT-COERCE-LOC */;
  value0 = ecl_function_dispatch(cl_env_copy,VV[83])(1, VV[61]) /*  WT */;
  return value0;
L1:;
  if (!((v1loc)==(VV[5]))) { goto L7; }
  value0 = ecl_function_dispatch(cl_env_copy,VV[103])(1, VV[64]) /*  WT-NL */;
  return value0;
L7:;
  {
   cl_object v2;
   v2 = ecl_make_bool((v1loc)==(ECL_SYM("RETURN",726)));
   if (Null(v2)) { goto L10; }
   value0 = v2;
   cl_env_copy->nvalues = 1;
   return value0;
L10:;
   ecl_function_dispatch(cl_env_copy,VV[103])(1, VV[66]) /*  WT-NL    */;
   ecl_function_dispatch(cl_env_copy,VV[105])(2, ECL_SYM("OBJECT",1305), v1loc) /*  WT-COERCE-LOC */;
   ecl_function_dispatch(cl_env_copy,VV[83])(1, VV[61]) /*  WT        */;
   value0 = ecl_function_dispatch(cl_env_copy,VV[103])(1, VV[64]) /*  WT-NL */;
   return value0;
  }
 }
}
/*      function definition for LOC-WITH-SIDE-EFFECTS-P               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L26loc_with_side_effects_p(cl_object v1loc)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2name;
   v2name = ECL_NIL;
   if (Null(ecl_function_dispatch(cl_env_copy,VV[84])(1, v1loc) /*  VAR-P */)) { goto L2; }
   if (Null(ecl_function_dispatch(cl_env_copy,VV[111])(1, v1loc) /*  GLOBAL-VAR-P */)) { goto L5; }
   value0 = ecl_function_dispatch(cl_env_copy,VV[112])(0) /*  POLICY-GLOBAL-VAR-CHECKING */;
   return value0;
L5:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L2:;
   if (!(ECL_ATOM(v1loc))) { goto L7; }
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L7:;
   {
    cl_object v3;
    v2name = ecl_car(v1loc);
    v3 = v2name;
    if (!((v3)==(VV[15]))) { goto L16; }
    goto L13;
    goto L14;
L16:;
    goto L14;
L14:;
    if (!((v3)==(VV[17]))) { goto L20; }
    goto L13;
    goto L18;
L20:;
    goto L18;
L18:;
    if (!((v3)==(VV[19]))) { goto L9; }
    goto L10;
L13:;
   }
L10:;
   value0 = ECL_T;
   cl_env_copy->nvalues = 1;
   return value0;
L9:;
   if (!((v2name)==(ECL_SYM("THE",858)))) { goto L23; }
   v1loc = ecl_caddr(v1loc);
   goto TTL;
L23:;
   if (!((v2name)==(ECL_SYM("FDEFINITION",351)))) { goto L27; }
   value0 = ecl_function_dispatch(cl_env_copy,VV[113])(0) /*  POLICY-GLOBAL-FUNCTION-CHECKING */;
   return value0;
L27:;
   if (!((v2name)==(ECL_SYM("C-INLINE",2063)))) { goto L29; }
   T0 = ecl_cddddr(v1loc);
   T1 = ecl_cadr(T0);
   value0 = ecl_make_bool((T1)==(ECL_SYM("VALUES",897)));
   if ((value0)!=ECL_NIL) { goto L32; }
   T0 = ecl_cddddr(v1loc);
   value0 = ecl_car(T0);
   cl_env_copy->nvalues = 1;
   return value0;
L32:;
   cl_env_copy->nvalues = 1;
   return value0;
L29:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for SET-TRASH-LOC                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L27set_trash_loc(cl_object v1loc)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(L26loc_with_side_effects_p(v1loc))) { goto L1; }
  ecl_function_dispatch(cl_env_copy,VV[103])(2, v1loc, VV[61]) /*  WT-NL */;
  value0 = ECL_T;
  cl_env_copy->nvalues = 1;
  return value0;
L1:;
  value0 = ECL_NIL;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}

#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/cmp/cmploc.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _ecl1l7wp6b7_8UsZTr51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;CMPLOC.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_ecl1l7wp6b7_8UsZTr51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_cmp_defun(VV[71]);                          /*  TMP-DESTINATION */
  ecl_cmp_defun(VV[72]);                          /*  PRECISE-LOC-TYPE */
  ecl_cmp_defun(VV[74]);                          /*  LOC-IN-C1FORM-MOVABLE-P */
  ecl_cmp_defun(VV[77]);                          /*  USES-VALUES     */
  ecl_cmp_defun(VV[78]);                          /*  LOC-IMMEDIATE-VALUE-P */
  ecl_cmp_defun(VV[80]);                          /*  LOC-IMMEDIATE-VALUE */
  ecl_cmp_defun(VV[81]);                          /*  UNKNOWN-LOCATION */
  ecl_cmp_defun(VV[82]);                          /*  WT-LOC          */
  ecl_cmp_defun(VV[87]);                          /*  LAST-CALL-P     */
  ecl_cmp_defun(VV[88]);                          /*  WT-LCL          */
  ecl_cmp_defun(VV[89]);                          /*  WT-LCL-LOC      */
  ecl_cmp_defun(VV[90]);                          /*  WT-TEMP         */
  ecl_cmp_defun(VV[91]);                          /*  WT-NUMBER       */
  ecl_cmp_defun(VV[92]);                          /*  WT-CHARACTER    */
  ecl_cmp_defun(VV[93]);                          /*  WT-VALUE        */
  ecl_cmp_defun(VV[94]);                          /*  WT-KEYVARS      */
  ecl_cmp_defun(VV[95]);                          /*  WT-THE          */
  ecl_cmp_defun(VV[96]);                          /*  LOC-REFERS-TO-SPECIAL */
  ecl_cmp_defun(VV[98]);                          /*  VALUES-LOC      */
  ecl_cmp_defun(VV[99]);                          /*  SET-UNKNOWN-LOC */
  ecl_cmp_defun(VV[100]);                         /*  SET-LOC         */
  ecl_cmp_defun(VV[106]);                         /*  SET-THE-LOC     */
  ecl_cmp_defun(VV[107]);                         /*  SET-VALUES-LOC  */
  ecl_cmp_defun(VV[108]);                         /*  SET-VALUE0-LOC  */
  ecl_cmp_defun(VV[109]);                         /*  SET-RETURN-LOC  */
  ecl_cmp_defun(VV[110]);                         /*  LOC-WITH-SIDE-EFFECTS-P */
  ecl_cmp_defun(VV[114]);                         /*  SET-TRASH-LOC   */
}
