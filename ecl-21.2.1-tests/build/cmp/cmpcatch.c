/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;CMPCATCH.LSP                                  */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/cmp/cmpcatch.eclh"
/*      function definition for C1CATCH                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1c1catch(cl_object v1args)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  ecl_function_dispatch(cl_env_copy,VV[48])(3, ECL_SYM("CATCH",184), v1args, ecl_make_fixnum(1)) /*  CHECK-ARGS-NUMBER */;
  cl_set(VV[0],ecl_plus(ecl_symbol_value(VV[0]),ecl_make_fixnum(1)));
  T0 = ecl_car(v1args);
  T1 = ecl_function_dispatch(cl_env_copy,VV[49])(1, T0) /*  C1EXPR    */;
  T2 = ecl_cdr(v1args);
  T3 = ecl_function_dispatch(cl_env_copy,VV[50])(1, T2) /*  C1PROGN   */;
  value0 = ecl_function_dispatch(cl_env_copy,VV[51])(8, ECL_SYM("CATCH",184), VV[1], ECL_T, ECL_SYM("TYPE",1346), ECL_T, VV[2], T1, T3) /*  MAKE-C1FORM* */;
  return value0;
 }
}
/*      function definition for C2CATCH                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2c2catch(cl_object v1c1form, cl_object v2tag, cl_object v3body)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4new_destination;
   cl_object v5code;
   v4new_destination = ecl_function_dispatch(cl_env_copy,VV[53])(1, ecl_symbol_value(VV[4])) /*  TMP-DESTINATION */;
   cl_set(VV[5],ecl_plus(ecl_symbol_value(VV[5]),ecl_make_fixnum(1)));
   v5code = ecl_symbol_value(VV[5]);
   ecl_bds_bind(cl_env_copy,VV[4],VV[6]);         /*  *DESTINATION*   */
   ecl_function_dispatch(cl_env_copy,VV[54])(1, v2tag) /*  C2EXPR*    */;
   ecl_bds_unwind1(cl_env_copy);
   ecl_bds_bind(cl_env_copy,VV[4],v4new_destination); /*  *DESTINATION* */
   T0 = CONS(VV[8],ecl_symbol_value(VV[7]));
   ecl_bds_bind(cl_env_copy,VV[7],T0);            /*  *UNWIND-EXIT*   */
   ecl_function_dispatch(cl_env_copy,VV[55])(0)   /*  WT-NL-OPEN-BRACE */;
   if (!((v4new_destination)==(VV[9]))) { goto L12; }
   goto L9;
   goto L10;
L12:;
   goto L10;
L10:;
   if (!((v4new_destination)==(ECL_SYM("VALUES",897)))) { goto L7; }
   goto L8;
L9:;
L8:;
   ecl_function_dispatch(cl_env_copy,VV[56])(3, VV[12], VV[6], VV[13]) /*  WT-NL */;
   ecl_function_dispatch(cl_env_copy,VV[56])(1, VV[14]) /*  WT-NL     */;
   ecl_function_dispatch(cl_env_copy,VV[57])(2, VV[15], v5code) /*  WT-COMMENT */;
   T0 = ecl_one_plus(ecl_symbol_value(VV[16]));
   ecl_bds_bind(cl_env_copy,VV[16],T0);           /*  *OPENED-C-BRACES* */
   ecl_function_dispatch(cl_env_copy,VV[54])(1, v3body) /*  C2EXPR*   */;
   ecl_bds_unwind1(cl_env_copy);
   ecl_bds_unwind1(cl_env_copy);
   ecl_bds_unwind1(cl_env_copy);
   goto L5;
L7:;
   ecl_function_dispatch(cl_env_copy,VV[56])(3, VV[12], VV[6], VV[13]) /*  WT-NL */;
   ecl_function_dispatch(cl_env_copy,VV[56])(1, VV[17]) /*  WT-NL     */;
   ecl_function_dispatch(cl_env_copy,VV[57])(2, VV[15], v5code) /*  WT-COMMENT */;
   T0 = ecl_one_plus(ecl_symbol_value(VV[16]));
   ecl_bds_bind(cl_env_copy,VV[16],T0);           /*  *OPENED-C-BRACES* */
   {
    cl_object v6label;
    v6label = ecl_function_dispatch(cl_env_copy,VV[58])(0) /*  NEXT-LABEL */;
    T0 = CONS(v6label,ecl_symbol_value(VV[7]));
    ecl_bds_bind(cl_env_copy,VV[7],T0);           /*  *UNWIND-EXIT*   */
    ecl_bds_bind(cl_env_copy,VV[18],v6label);     /*  *EXIT*          */
    ecl_function_dispatch(cl_env_copy,VV[59])(1, ECL_SYM("VALUES",897)) /*  UNWIND-EXIT */;
    ecl_bds_unwind1(cl_env_copy);
    ecl_function_dispatch(cl_env_copy,VV[60])(1, v6label) /*  WT-LABEL */;
    ecl_bds_unwind1(cl_env_copy);
    ecl_bds_unwind1(cl_env_copy);
   }
   ecl_function_dispatch(cl_env_copy,VV[56])(1, VV[19]) /*  WT-NL     */;
   T0 = ecl_one_plus(ecl_symbol_value(VV[16]));
   ecl_bds_bind(cl_env_copy,VV[16],T0);           /*  *OPENED-C-BRACES* */
   ecl_function_dispatch(cl_env_copy,VV[54])(1, v3body) /*  C2EXPR*   */;
   ecl_bds_unwind1(cl_env_copy);
   ecl_bds_unwind1(cl_env_copy);
   ecl_bds_unwind1(cl_env_copy);
L5:;
   ecl_function_dispatch(cl_env_copy,VV[56])(1, VV[20]) /*  WT-NL     */;
   ecl_function_dispatch(cl_env_copy,VV[56])(1, VV[21]) /*  WT-NL     */;
   ecl_function_dispatch(cl_env_copy,VV[57])(2, VV[22], v5code) /*  WT-COMMENT */;
   ecl_function_dispatch(cl_env_copy,VV[61])(0)   /*  WT-NL-CLOSE-BRACE */;
   value0 = ecl_function_dispatch(cl_env_copy,VV[59])(1, v4new_destination) /*  UNWIND-EXIT */;
   return value0;
  }
 }
}
/*      function definition for C1UNWIND-PROTECT                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3c1unwind_protect(cl_object v1args)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  ecl_function_dispatch(cl_env_copy,VV[48])(3, ECL_SYM("UNWIND-PROTECT",890), v1args, ecl_make_fixnum(1)) /*  CHECK-ARGS-NUMBER */;
  T0 = ecl_cdr(v1args);
  if (!(T0==ECL_NIL)) { goto L2; }
  ecl_function_dispatch(cl_env_copy,VV[63])(1, VV[24]) /*  CMPDEBUG   */;
  T0 = ecl_car(v1args);
  value0 = ecl_function_dispatch(cl_env_copy,VV[49])(1, T0) /*  C1EXPR */;
  return value0;
L2:;
  cl_set(VV[0],ecl_plus(ecl_symbol_value(VV[0]),ecl_make_fixnum(1)));
  {
   cl_object v2form;
   T0 = ecl_function_dispatch(cl_env_copy,VV[64])(1, ECL_SYM("UNWIND-PROTECT-BOUNDARY",1919)) /*  CMP-ENV-MARK */;
   ecl_bds_bind(cl_env_copy,VV[25],T0);           /*  *CMP-ENV*       */
   T0 = ecl_car(v1args);
   v2form = ecl_function_dispatch(cl_env_copy,VV[49])(1, T0) /*  C1EXPR */;
   ecl_bds_unwind1(cl_env_copy);
   T0 = ecl_function_dispatch(cl_env_copy,VV[65])(1, v2form) /*  C1FORM-TYPE */;
   T1 = ecl_cdr(v1args);
   T2 = ecl_function_dispatch(cl_env_copy,VV[50])(1, T1) /*  C1PROGN  */;
   value0 = ecl_function_dispatch(cl_env_copy,VV[51])(8, ECL_SYM("UNWIND-PROTECT",890), ECL_SYM("TYPE",1346), T0, VV[1], ECL_T, VV[2], v2form, T2) /*  MAKE-C1FORM* */;
   return value0;
  }
 }
}
/*      function definition for C2UNWIND-PROTECT                      */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L4c2unwind_protect(cl_object v1c1form, cl_object v2form, cl_object v3body)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4sp;
   cl_object v5nargs;
   v4sp = ecl_function_dispatch(cl_env_copy,VV[67])(2, VV[27], VV[28]) /*  MAKE-LCL-VAR */;
   v5nargs = ecl_function_dispatch(cl_env_copy,VV[67])(2, VV[27], VV[28]) /*  MAKE-LCL-VAR */;
   T0 = cl_list(2, VV[29], v4sp);
   T1 = CONS(T0,ecl_symbol_value(VV[7]));
   ecl_bds_bind(cl_env_copy,VV[7],T1);            /*  *UNWIND-EXIT*   */
   ecl_function_dispatch(cl_env_copy,VV[55])(0)   /*  WT-NL-OPEN-BRACE */;
   ecl_function_dispatch(cl_env_copy,VV[56])(1, VV[30]) /*  WT-NL     */;
   ecl_function_dispatch(cl_env_copy,VV[56])(5, VV[31], v4sp, VV[32], v5nargs, VV[33]) /*  WT-NL */;
   ecl_function_dispatch(cl_env_copy,VV[56])(1, VV[34]) /*  WT-NL     */;
   ecl_function_dispatch(cl_env_copy,VV[56])(1, VV[35]) /*  WT-NL     */;
   ecl_function_dispatch(cl_env_copy,VV[56])(1, VV[17]) /*  WT-NL     */;
   ecl_function_dispatch(cl_env_copy,VV[56])(1, VV[36]) /*  WT-NL     */;
   ecl_function_dispatch(cl_env_copy,VV[56])(1, VV[19]) /*  WT-NL     */;
   {
    cl_object v6;
    v6 = CONS(VV[8],ecl_symbol_value(VV[7]));
    ecl_bds_bind(cl_env_copy,VV[7],v6);           /*  *UNWIND-EXIT*   */
    ecl_bds_bind(cl_env_copy,VV[4],ECL_SYM("VALUES",897)); /*  *DESTINATION* */
    ecl_function_dispatch(cl_env_copy,VV[54])(1, v2form) /*  C2EXPR*  */;
    ecl_bds_unwind1(cl_env_copy);
    ecl_bds_unwind1(cl_env_copy);
   }
   ecl_function_dispatch(cl_env_copy,VV[56])(1, VV[20]) /*  WT-NL     */;
   ecl_function_dispatch(cl_env_copy,VV[56])(1, VV[21]) /*  WT-NL     */;
   ecl_function_dispatch(cl_env_copy,VV[56])(2, v5nargs, VV[37]) /*  WT-NL */;
   ecl_bds_bind(cl_env_copy,VV[4],VV[9]);         /*  *DESTINATION*   */
   ecl_function_dispatch(cl_env_copy,VV[54])(1, v3body) /*  C2EXPR*   */;
   ecl_bds_unwind1(cl_env_copy);
   ecl_function_dispatch(cl_env_copy,VV[56])(3, VV[38], v5nargs, VV[13]) /*  WT-NL */;
   ecl_function_dispatch(cl_env_copy,VV[56])(1, VV[39]) /*  WT-NL     */;
   ecl_function_dispatch(cl_env_copy,VV[59])(1, ECL_SYM("VALUES",897)) /*  UNWIND-EXIT */;
   value0 = ecl_function_dispatch(cl_env_copy,VV[61])(0) /*  WT-NL-CLOSE-BRACE */;
   ecl_bds_unwind1(cl_env_copy);
   return value0;
  }
 }
}
/*      function definition for C1THROW                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L5c1throw(cl_object v1args)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  ecl_function_dispatch(cl_env_copy,VV[48])(4, ECL_SYM("THROW",860), v1args, ecl_make_fixnum(2), ecl_make_fixnum(2)) /*  CHECK-ARGS-NUMBER */;
  T0 = ecl_car(v1args);
  T1 = ecl_function_dispatch(cl_env_copy,VV[49])(1, T0) /*  C1EXPR    */;
  T2 = ecl_cadr(v1args);
  T3 = ecl_function_dispatch(cl_env_copy,VV[49])(1, T2) /*  C1EXPR    */;
  value0 = ecl_function_dispatch(cl_env_copy,VV[51])(4, ECL_SYM("THROW",860), VV[2], T1, T3) /*  MAKE-C1FORM* */;
  return value0;
 }
}
/*      function definition for C2THROW                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L6c2throw(cl_object v1c1form, cl_object v2tag, cl_object v3val)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4loc;
   v4loc = ECL_NIL;
   {
    cl_object v5;
    v5 = ecl_function_dispatch(cl_env_copy,VV[70])(1, v2tag) /*  C1FORM-NAME */;
    if (!((v5)==(VV[42]))) { goto L9; }
    goto L6;
    goto L7;
L9:;
    goto L7;
L7:;
    if (!((v5)==(ECL_SYM("LOCATION",1842)))) { goto L4; }
    goto L5;
L6:;
L5:;
    T0 = ecl_function_dispatch(cl_env_copy,VV[71])(1, v2tag) /*  C1FORM-ARGS */;
    v4loc = ecl_car(T0);
    goto L2;
L4:;
    v4loc = ecl_function_dispatch(cl_env_copy,VV[72])(0) /*  MAKE-TEMP-VAR */;
    ecl_bds_bind(cl_env_copy,VV[4],v4loc);        /*  *DESTINATION*   */
    ecl_function_dispatch(cl_env_copy,VV[54])(1, v2tag) /*  C2EXPR*   */;
    ecl_bds_unwind1(cl_env_copy);
   }
L2:;
   ecl_bds_bind(cl_env_copy,VV[4],ECL_SYM("VALUES",897)); /*  *DESTINATION* */
   ecl_function_dispatch(cl_env_copy,VV[54])(1, v3val) /*  C2EXPR*    */;
   ecl_bds_unwind1(cl_env_copy);
   value0 = ecl_function_dispatch(cl_env_copy,VV[56])(3, VV[45], v4loc, VV[13]) /*  WT-NL */;
   return value0;
  }
 }
}

#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/cmp/cmpcatch.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclZFwI8ca7_DGRmqq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;CMPCATCH.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclZFwI8ca7_DGRmqq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_cmp_defun(VV[47]);                          /*  C1CATCH         */
  ecl_cmp_defun(VV[52]);                          /*  C2CATCH         */
  ecl_cmp_defun(VV[62]);                          /*  C1UNWIND-PROTECT */
  ecl_cmp_defun(VV[66]);                          /*  C2UNWIND-PROTECT */
  ecl_cmp_defun(VV[68]);                          /*  C1THROW         */
  ecl_cmp_defun(VV[69]);                          /*  C2THROW         */
}
