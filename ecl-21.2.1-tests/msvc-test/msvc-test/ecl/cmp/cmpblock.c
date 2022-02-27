/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;CMPBLOCK.LSP                                  */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/cmp/cmpblock.eclh"
/*      function definition for C1BLOCK                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1c1block(cl_object v1args)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  ecl_function_dispatch(cl_env_copy,VV[40])(3, ECL_SYM("BLOCK",139), v1args, ecl_make_fixnum(1)) /*  CHECK-ARGS-NUMBER */;
  {
   cl_object v2block_name;
   v2block_name = ecl_car(v1args);
   if (ECL_SYMBOLP(v2block_name)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[41])(2, VV[0], v2block_name) /*  CMPERR */;
L3:;
   {
    cl_object v3blk_var;
    cl_object v4blk;
    cl_object v5body;
    v3blk_var = ecl_function_dispatch(cl_env_copy,VV[42])(4, ECL_SYM("NAME",1300), v2block_name, VV[1], VV[2]) /*  MAKE-VAR */;
    v4blk = ecl_function_dispatch(cl_env_copy,VV[43])(4, VV[3], v3blk_var, ECL_SYM("NAME",1300), v2block_name) /*  MAKE-BLK */;
    T0 = ecl_function_dispatch(cl_env_copy,VV[44])(0) /*  CMP-ENV-COPY */;
    ecl_bds_bind(cl_env_copy,VV[4],T0);           /*  *CMP-ENV*       */
    ecl_function_dispatch(cl_env_copy,VV[45])(1, v4blk) /*  CMP-ENV-REGISTER-BLOCK */;
    T0 = ecl_cdr(v1args);
    v5body = ecl_function_dispatch(cl_env_copy,VV[46])(1, T0) /*  C1PROGN */;
    ecl_bds_unwind1(cl_env_copy);
    if ((ecl_function_dispatch(cl_env_copy,VV[47])(1, v3blk_var) /*  VAR-REF-CCB */)!=ECL_NIL) { goto L11; }
    if (Null(ecl_function_dispatch(cl_env_copy,VV[48])(1, v3blk_var) /*  VAR-REF-CLB */)) { goto L9; }
    goto L10;
L11:;
L10:;
    cl_set(VV[5],ecl_plus(ecl_symbol_value(VV[5]),ecl_make_fixnum(1)));
L9:;
    T0 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v4blk) /*  BLK-REF */;
    if (!(ecl_plusp(T0))) { goto L14; }
    T0 = ecl_list1(v3blk_var);
    T1 = ecl_function_dispatch(cl_env_copy,VV[50])(1, v4blk) /*  BLK-TYPE */;
    T2 = ecl_function_dispatch(cl_env_copy,VV[51])(1, v5body) /*  C1FORM-TYPE */;
    T3 = ecl_function_dispatch(cl_env_copy,VV[52])(2, T1, T2) /*  VALUES-TYPE-OR */;
    value0 = ecl_function_dispatch(cl_env_copy,VV[53])(8, ECL_SYM("BLOCK",139), VV[6], T0, ECL_SYM("TYPE",1346), T3, VV[7], v4blk, v5body) /*  MAKE-C1FORM* */;
    return value0;
L14:;
    value0 = v5body;
    cl_env_copy->nvalues = 1;
    return value0;
   }
  }
 }
}
/*      function definition for C2BLOCK                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2c2block(cl_object v1c1form, cl_object v2blk, cl_object v3body)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v4;
   v4 = ecl_symbol_value(VV[9]);
   ecl_structure_set(v2blk,VV[10],5,v4);
  }
  {
   cl_object v4;
   v4 = ecl_symbol_value(VV[11]);
   ecl_structure_set(v2blk,VV[10],6,v4);
  }
  T0 = ecl_function_dispatch(cl_env_copy,VV[55])(1, v2blk) /*  BLK-VAR */;
  T1 = ecl_function_dispatch(cl_env_copy,VV[56])(1, T0) /*  VAR-REF   */;
  if (!(ecl_plusp(T1))) { goto L5; }
  {
   cl_object v4blk_var;
   v4blk_var = ecl_function_dispatch(cl_env_copy,VV[55])(1, v2blk) /*  BLK-VAR */;
   ecl_bds_push(cl_env_copy,VV[12]);              /*  *ENV-LVL*       */
   ecl_function_dispatch(cl_env_copy,VV[57])(1, v4blk_var) /*  CHECK-VREF */;
   ecl_function_dispatch(cl_env_copy,VV[58])(0)   /*  WT-NL-OPEN-BRACE */;
   T0 = ecl_function_dispatch(cl_env_copy,VV[59])(1, v4blk_var) /*  VAR-KIND */;
   if (!((ECL_SYM("OBJECT",1305))==(T0))) { goto L10; }
   {
    cl_object v5;
    v5 = ecl_function_dispatch(cl_env_copy,VV[60])(0) /*  NEXT-LCL    */;
    ecl_structure_set(v4blk_var,VV[13],10,v5);
   }
   ecl_function_dispatch(cl_env_copy,VV[61])(3, VV[14], v4blk_var, VV[15]) /*  WT-NL */;
L10:;
   T0 = ecl_function_dispatch(cl_env_copy,VV[47])(1, v4blk_var) /*  VAR-REF-CCB */;
   if (Null(ecl_function_dispatch(cl_env_copy,VV[62])(1, T0) /*  ENV-GROWS */)) { goto L14; }
   {
    cl_object v5env_lvl;
    v5env_lvl = ecl_symbol_value(VV[12]);
    cl_set(VV[12],ecl_plus(ecl_symbol_value(VV[12]),ecl_make_fixnum(1)));
    T0 = ecl_symbol_value(VV[12]);
    ecl_function_dispatch(cl_env_copy,VV[61])(7, VV[14], ecl_symbol_value(VV[16]), VV[17], T0, VV[18], v5env_lvl, VV[15]) /*  WT-NL */;
   }
L14:;
   ecl_function_dispatch(cl_env_copy,VV[63])(2, VV[19], v4blk_var) /*  BIND */;
   ecl_function_dispatch(cl_env_copy,VV[58])(0)   /*  WT-NL-OPEN-BRACE */;
   ecl_function_dispatch(cl_env_copy,VV[61])(3, VV[20], v4blk_var, VV[21]) /*  WT-NL */;
   ecl_function_dispatch(cl_env_copy,VV[61])(1, VV[22]) /*  WT-NL     */;
   T0 = CONS(VV[24],ecl_symbol_value(VV[23]));
   ecl_bds_bind(cl_env_copy,VV[23],T0);           /*  *UNWIND-EXIT*   */
   ecl_function_dispatch(cl_env_copy,VV[64])(1, ECL_SYM("VALUES",897)) /*  UNWIND-EXIT */;
   ecl_function_dispatch(cl_env_copy,VV[61])(1, VV[25]) /*  WT-NL     */;
   ecl_function_dispatch(cl_env_copy,VV[65])(1, v3body) /*  C2EXPR    */;
   ecl_function_dispatch(cl_env_copy,VV[66])(1, VV[26]) /*  WT        */;
   ecl_bds_unwind1(cl_env_copy);
   ecl_function_dispatch(cl_env_copy,VV[67])(0)   /*  WT-NL-CLOSE-BRACE */;
   if (Null(ecl_function_dispatch(cl_env_copy,VV[47])(1, v4blk_var) /*  VAR-REF-CCB */)) { goto L28; }
   cl_set(VV[27],ecl_minus(ecl_symbol_value(VV[27]),ecl_make_fixnum(1)));
L28:;
   value0 = ecl_function_dispatch(cl_env_copy,VV[67])(0) /*  WT-NL-CLOSE-BRACE */;
   ecl_bds_unwind1(cl_env_copy);
   return value0;
  }
L5:;
  value0 = ecl_function_dispatch(cl_env_copy,VV[65])(1, v3body) /*  C2EXPR */;
  return value0;
 }
}
/*      function definition for C1RETURN-FROM                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3c1return_from(cl_object v1args)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  ecl_function_dispatch(cl_env_copy,VV[40])(4, ECL_SYM("RETURN-FROM",727), v1args, ecl_make_fixnum(1), ecl_make_fixnum(2)) /*  CHECK-ARGS-NUMBER */;
  {
   cl_object v2name;
   v2name = ecl_car(v1args);
   if (ECL_SYMBOLP(v2name)) { goto L3; }
   ecl_function_dispatch(cl_env_copy,VV[41])(2, VV[0], v2name) /*  CMPERR */;
L3:;
   {
    cl_object v4;                                 /*  BLK             */
    cl_object v5;                                 /*  CFB             */
    cl_object v6;                                 /*  UNW             */
    value0 = ecl_function_dispatch(cl_env_copy,VV[69])(1, v2name) /*  CMP-ENV-SEARCH-BLOCK */;
    {
     const int v7 = cl_env_copy->nvalues;
     v4 = value0;
     cl_object v8;
     v8 = (v7<=1)? ECL_NIL : cl_env_copy->values[1];
     v5 = v8;
     v8 = (v7<=2)? ECL_NIL : cl_env_copy->values[2];
     v6 = v8;
    }
    if ((v4)!=ECL_NIL) { goto L6; }
    ecl_function_dispatch(cl_env_copy,VV[41])(2, VV[29], v2name) /*  CMPERR */;
L6:;
    {
     cl_object v7val;
     cl_object v8var;
     cl_object v9type;
     T0 = ecl_cadr(v1args);
     v7val = ecl_function_dispatch(cl_env_copy,VV[70])(1, T0) /*  C1EXPR */;
     v8var = ecl_function_dispatch(cl_env_copy,VV[55])(1, v4) /*  BLK-VAR */;
     v9type = ECL_T;
     if (Null(v5)) { goto L12; }
     v9type = VV[30];
     ecl_structure_set(v8var,VV[13],3,ECL_T);
     goto L11;
L12:;
     if (Null(v6)) { goto L11; }
     v9type = ECL_SYM("UNWIND-PROTECT",890);
L11:;
     {
      cl_object v10;
      T0 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v4) /*  BLK-REF */;
      v10 = ecl_plus(T0,ecl_make_fixnum(1));
      ecl_structure_set(v4,VV[10],1,v10);
     }
     {
      cl_object v10;
      T0 = ecl_function_dispatch(cl_env_copy,VV[50])(1, v4) /*  BLK-TYPE */;
      T1 = ecl_function_dispatch(cl_env_copy,VV[51])(1, v7val) /*  C1FORM-TYPE */;
      v10 = ecl_function_dispatch(cl_env_copy,VV[52])(2, T0, T1) /*  VALUES-TYPE-OR */;
      ecl_structure_set(v4,VV[10],8,v10);
     }
     {
      cl_object v10output;
      v10output = ecl_function_dispatch(cl_env_copy,VV[53])(7, ECL_SYM("RETURN-FROM",727), ECL_SYM("TYPE",1346), ECL_T, VV[7], v4, v9type, v7val) /*  MAKE-C1FORM* */;
      if ((v5)!=ECL_NIL) { goto L25; }
      if (Null(v6)) { goto L23; }
      goto L24;
L25:;
L24:;
      ecl_function_dispatch(cl_env_copy,VV[71])(2, v8var, v10output) /*  ADD-TO-READ-NODES */;
L23:;
      value0 = v10output;
      cl_env_copy->nvalues = 1;
      return value0;
     }
    }
   }
  }
 }
}
/*      function definition for C2RETURN-FROM                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L4c2return_from(cl_object v1c1form, cl_object v2blk, cl_object v3type, cl_object v4val)
{
 cl_object T0, T1, T2;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (!((v3type)==(VV[32]))) { goto L1; }
  ecl_bds_bind(cl_env_copy,VV[11],ECL_SYM("VALUES",897)); /*  *DESTINATION* */
  ecl_function_dispatch(cl_env_copy,VV[73])(1, v4val) /*  C2EXPR*     */;
  ecl_bds_unwind1(cl_env_copy);
  T0 = ecl_function_dispatch(cl_env_copy,VV[55])(1, v2blk) /*  BLK-VAR */;
  T1 = ecl_function_dispatch(cl_env_copy,VV[74])(1, v2blk) /*  BLK-NAME */;
  T2 = ecl_function_dispatch(cl_env_copy,VV[75])(1, T1) /*  ADD-SYMBOL */;
  value0 = ecl_function_dispatch(cl_env_copy,VV[61])(5, VV[33], T0, VV[34], T2, VV[21]) /*  WT-NL */;
  return value0;
L1:;
  if (!((v3type)==(VV[30]))) { goto L9; }
  goto L6;
  goto L7;
L9:;
  goto L7;
L7:;
  if (!((v3type)==(ECL_SYM("UNWIND-PROTECT",890)))) { goto L4; }
  goto L5;
L6:;
L5:;
  ecl_bds_bind(cl_env_copy,VV[11],ECL_SYM("VALUES",897)); /*  *DESTINATION* */
  ecl_function_dispatch(cl_env_copy,VV[73])(1, v4val) /*  C2EXPR*     */;
  ecl_bds_unwind1(cl_env_copy);
  T0 = ecl_function_dispatch(cl_env_copy,VV[55])(1, v2blk) /*  BLK-VAR */;
  value0 = ecl_function_dispatch(cl_env_copy,VV[61])(3, VV[33], T0, VV[37]) /*  WT-NL */;
  return value0;
L4:;
  {
   cl_object v5;
   cl_object v6;
   v5 = ecl_function_dispatch(cl_env_copy,VV[76])(1, v2blk) /*  BLK-DESTINATION */;
   v6 = ecl_function_dispatch(cl_env_copy,VV[77])(1, v2blk) /*  BLK-EXIT */;
   ecl_bds_bind(cl_env_copy,VV[11],v5);           /*  *DESTINATION*   */
   ecl_bds_bind(cl_env_copy,VV[9],v6);            /*  *EXIT*          */
   value0 = ecl_function_dispatch(cl_env_copy,VV[65])(1, v4val) /*  C2EXPR */;
   ecl_bds_unwind1(cl_env_copy);
   ecl_bds_unwind1(cl_env_copy);
   return value0;
  }
 }
}

#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/cmp/cmpblock.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclemPoTgZ7_rupZTr51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;CMPBLOCK.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclemPoTgZ7_rupZTr51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_cmp_defun(VV[39]);                          /*  C1BLOCK         */
  ecl_cmp_defun(VV[54]);                          /*  C2BLOCK         */
  ecl_cmp_defun(VV[68]);                          /*  C1RETURN-FROM   */
  ecl_cmp_defun(VV[72]);                          /*  C2RETURN-FROM   */
}
