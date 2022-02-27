/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;CMPSTACK.LSP                                  */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/cmp/cmpstack.eclh"
/*      function definition for C1WITH-STACK                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1c1with_stack(cl_object v1forms)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2var;
   cl_object v3body;
   {
    cl_object v4;
    v4 = v1forms;
    {
     cl_object v5;
     v5 = v4;
     if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v4)) { goto L6; }
    {
     cl_object v5;
     v5 = ECL_CONS_CDR(v4);
     v1forms = v5;
     v4 = ECL_CONS_CAR(v4);
    }
L6:;
    v2var = v4;
   }
   T0 = cl_list(2, v2var, VV[2]);
   T1 = ecl_list1(T0);
   T2 = cl_listX(3, ECL_SYM("LET",479), T1, v1forms);
   v3body = ecl_function_dispatch(cl_env_copy,VV[29])(1, T2) /*  C1EXPR */;
   T0 = ecl_function_dispatch(cl_env_copy,VV[30])(1, v3body) /*  C1FORM-TYPE */;
   value0 = ecl_function_dispatch(cl_env_copy,VV[31])(5, VV[3], ECL_SYM("TYPE",1346), T0, VV[4], v3body) /*  MAKE-C1FORM* */;
   return value0;
  }
 }
}
/*      function definition for C2WITH-STACK                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2c2with_stack(cl_object v1c1form, cl_object v2body)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3new_destination;
   v3new_destination = ecl_function_dispatch(cl_env_copy,VV[33])(1, ecl_symbol_value(VV[6])) /*  TMP-DESTINATION */;
   ecl_bds_push(cl_env_copy,VV[7]);               /*  *TEMP*          */
   ecl_function_dispatch(cl_env_copy,VV[34])(0)   /*  WT-NL-OPEN-BRACE */;
   ecl_function_dispatch(cl_env_copy,VV[35])(1, VV[8]) /*  WT-NL      */;
   ecl_function_dispatch(cl_env_copy,VV[35])(2, ecl_symbol_value(VV[9]), VV[10]) /*  WT-NL */;
   ecl_bds_bind(cl_env_copy,VV[6],v3new_destination); /*  *DESTINATION* */
   T0 = CONS(VV[12],ecl_symbol_value(VV[11]));
   ecl_bds_bind(cl_env_copy,VV[11],T0);           /*  *UNWIND-EXIT*   */
   ecl_function_dispatch(cl_env_copy,VV[36])(1, v2body) /*  C2EXPR*   */;
   ecl_bds_unwind1(cl_env_copy);
   ecl_bds_unwind1(cl_env_copy);
   ecl_function_dispatch(cl_env_copy,VV[35])(1, VV[13]) /*  WT-NL     */;
   ecl_function_dispatch(cl_env_copy,VV[37])(0)   /*  WT-NL-CLOSE-BRACE */;
   value0 = ecl_function_dispatch(cl_env_copy,VV[38])(1, v3new_destination) /*  UNWIND-EXIT */;
   ecl_bds_unwind1(cl_env_copy);
   return value0;
  }
 }
}
/*      function definition for C1INNERMOST-STACK-FRAME               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3c1innermost_stack_frame(cl_object v1args)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = VV[15];
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      function definition for C1STACK-PUSH                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L4c1stack_push(cl_object v1args)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  T0 = cl_listX(3, ECL_SYM("C-INLINE",2063), v1args, VV[17]);
  value0 = cl_list(3, ECL_SYM("PROGN",673), T0, ecl_make_fixnum(1));
  return value0;
 }
}
/*      function definition for C1STACK-PUSH-VALUES                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L5c1stack_push_values(cl_object v1args)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2;
   cl_object v3;
   {
    cl_object v4;
    v4 = v1args;
    {
     cl_object v5;
     v5 = v4;
     if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v4)) { goto L6; }
    {
     cl_object v5;
     v5 = ECL_CONS_CDR(v4);
     v1args = v5;
     v4 = ECL_CONS_CAR(v4);
    }
L6:;
    v2 = v4;
   }
   {
    cl_object v4;
    v4 = v1args;
    {
     cl_object v5;
     v5 = v4;
     if (ecl_unlikely(!ECL_LISTP(v5))) FEtype_error_list(v5);
     value0 = ECL_NIL;
     cl_env_copy->nvalues = 0;
    }
    if (Null(v4)) { goto L17; }
    {
     cl_object v5;
     v5 = ECL_CONS_CDR(v4);
     v1args = v5;
     v4 = ECL_CONS_CAR(v4);
    }
L17:;
    v3 = v4;
   }
   T0 = ecl_function_dispatch(cl_env_copy,VV[29])(1, v3) /*  C1EXPR   */;
   T1 = ecl_list1(v2);
   T2 = cl_listX(3, ECL_SYM("C-INLINE",2063), T1, VV[21]);
   T3 = ecl_function_dispatch(cl_env_copy,VV[29])(1, T2) /*  C1EXPR   */;
   value0 = ecl_function_dispatch(cl_env_copy,VV[31])(6, VV[19], ECL_SYM("TYPE",1346), VV[20], VV[4], T0, T3) /*  MAKE-C1FORM* */;
   return value0;
  }
 }
}
/*      function definition for C2STACK-PUSH-VALUES                   */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L6c2stack_push_values(cl_object v1c1form, cl_object v2form, cl_object v3push_statement)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  ecl_bds_bind(cl_env_copy,VV[6],ECL_SYM("VALUES",897)); /*  *DESTINATION* */
  ecl_function_dispatch(cl_env_copy,VV[36])(1, v2form) /*  C2EXPR*    */;
  ecl_bds_unwind1(cl_env_copy);
  value0 = ecl_function_dispatch(cl_env_copy,VV[43])(1, v3push_statement) /*  C2EXPR */;
  return value0;
 }
}
/*      function definition for C1STACK-POP                           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L7c1stack_pop(cl_object v1args)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_listX(3, ECL_SYM("C-INLINE",2063), v1args, VV[24]);
  return value0;
 }
}
/*      function definition for C1APPLY-FROM-STACK-FRAME              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L8c1apply_from_stack_frame(cl_object v1args)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  value0 = cl_listX(3, ECL_SYM("C-INLINE",2063), v1args, VV[26]);
  return value0;
 }
}

#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/cmp/cmpstack.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclzg5gnea7_bXsZTr51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;CMPSTACK.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclzg5gnea7_bXsZTr51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  si_Xmake_constant(VV[0], VVtemp[1]);
  si_Xmake_constant(VV[1], VVtemp[2]);
  ecl_cmp_defun(VV[28]);                          /*  C1WITH-STACK    */
  ecl_cmp_defun(VV[32]);                          /*  C2WITH-STACK    */
  ecl_cmp_defun(VV[39]);                          /*  C1INNERMOST-STACK-FRAME */
  ecl_cmp_defun(VV[40]);                          /*  C1STACK-PUSH    */
  ecl_cmp_defun(VV[41]);                          /*  C1STACK-PUSH-VALUES */
  ecl_cmp_defun(VV[42]);                          /*  C2STACK-PUSH-VALUES */
  ecl_cmp_defun(VV[44]);                          /*  C1STACK-POP     */
  ecl_cmp_defun(VV[45]);                          /*  C1APPLY-FROM-STACK-FRAME */
}
