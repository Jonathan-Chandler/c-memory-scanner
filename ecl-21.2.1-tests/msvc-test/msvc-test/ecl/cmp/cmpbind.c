/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;CMPBIND.LSP                                   */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/cmp/cmpbind.eclh"
/*      function definition for BIND                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1bind(cl_object v1loc, cl_object v2var)
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
   v3 = ecl_function_dispatch(cl_env_copy,VV[33])(1, v2var) /*  VAR-KIND */;
   if (!((v3)==(VV[0]))) { goto L2; }
   {
    cl_object v4var_loc;
    v4var_loc = ecl_function_dispatch(cl_env_copy,VV[34])(1, v2var) /*  VAR-LOC */;
    if (ECL_FIXNUMP(v4var_loc)) { goto L5; }
    v4var_loc = ecl_function_dispatch(cl_env_copy,VV[35])(0) /*  NEXT-ENV */;
    ecl_structure_set(v2var,VV[1],10,v4var_loc);
L5:;
    if (!(ecl_zerop(v4var_loc))) { goto L9; }
    ecl_function_dispatch(cl_env_copy,VV[36])(3, VV[2], ecl_symbol_value(VV[3]), VV[4]) /*  WT-NL */;
L9:;
    ecl_function_dispatch(cl_env_copy,VV[36])(5, VV[5], v4var_loc, VV[6], ecl_symbol_value(VV[3]), VV[7]) /*  WT-NL */;
    ecl_function_dispatch(cl_env_copy,VV[37])(2, ECL_SYM("OBJECT",1305), v1loc) /*  WT-COERCE-LOC */;
    ecl_function_dispatch(cl_env_copy,VV[38])(3, VV[8], ecl_symbol_value(VV[3]), VV[9]) /*  WT */;
    T0 = ecl_function_dispatch(cl_env_copy,VV[39])(1, v2var) /*  VAR-NAME */;
    value0 = ecl_function_dispatch(cl_env_copy,VV[40])(1, T0) /*  WT-COMMENT */;
    return value0;
   }
L2:;
   if (!((v3)==(VV[10]))) { goto L14; }
   {
    cl_object v5var_loc;
    v5var_loc = ecl_function_dispatch(cl_env_copy,VV[34])(1, v2var) /*  VAR-LOC */;
    if (ECL_CONSP(v5var_loc)) { goto L18; }
    v5var_loc = ecl_function_dispatch(cl_env_copy,VV[41])(0) /*  NEXT-LEX */;
    ecl_structure_set(v2var,VV[1],10,v5var_loc);
L18:;
    ecl_function_dispatch(cl_env_copy,VV[36])(0)  /*  WT-NL           */;
    ecl_function_dispatch(cl_env_copy,VV[42])(1, v5var_loc) /*  WT-LEX */;
    ecl_function_dispatch(cl_env_copy,VV[38])(1, VV[11]) /*  WT       */;
    ecl_function_dispatch(cl_env_copy,VV[37])(2, ECL_SYM("OBJECT",1305), v1loc) /*  WT-COERCE-LOC */;
    ecl_function_dispatch(cl_env_copy,VV[38])(1, VV[12]) /*  WT       */;
   }
   T0 = ecl_function_dispatch(cl_env_copy,VV[39])(1, v2var) /*  VAR-NAME */;
   value0 = ecl_function_dispatch(cl_env_copy,VV[40])(1, T0) /*  WT-COMMENT */;
   return value0;
L14:;
   if (!((v3)==(ECL_SYM("SPECIAL",791)))) { goto L31; }
   goto L28;
   goto L29;
L31:;
   goto L29;
L29:;
   if (!((v3)==(VV[14]))) { goto L26; }
   goto L27;
L28:;
L27:;
   value0 = L3bds_bind(v1loc, v2var);
   return value0;
L26:;
   T0 = ecl_function_dispatch(cl_env_copy,VV[34])(1, v2var) /*  VAR-LOC */;
   if ((T0)==(ECL_SYM("OBJECT",2105))) { goto L34; }
   T0 = ecl_function_dispatch(cl_env_copy,VV[34])(1, v2var) /*  VAR-LOC */;
   if (ecl_equal(T0,v1loc)) { goto L36; }
   ecl_function_dispatch(cl_env_copy,VV[36])(2, v2var, VV[11]) /*  WT-NL */;
   T0 = ecl_function_dispatch(cl_env_copy,VV[43])(1, v2var) /*  VAR-REP-TYPE */;
   ecl_function_dispatch(cl_env_copy,VV[37])(2, T0, v1loc) /*  WT-COERCE-LOC */;
   value0 = ecl_function_dispatch(cl_env_copy,VV[38])(1, VV[12]) /*  WT */;
   return value0;
L36:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
L34:;
   if (!(ECL_CONSP(v1loc))) { goto L40; }
   T0 = ecl_car(v1loc);
   if (!((T0)==(VV[16]))) { goto L40; }
   value0 = ecl_structure_set(v2var,VV[1],10,v1loc);
   cl_env_copy->nvalues = 1;
   return value0;
L40:;
   T0 = ecl_function_dispatch(cl_env_copy,VV[33])(1, v2var) /*  VAR-KIND */;
   T1 = cl_list(2, T0, v1loc);
   value0 = ecl_function_dispatch(cl_env_copy,VV[44])(4, ECL_SYM("FORMAT-CONTROL",1263), VV[17], ECL_SYM("FORMAT-ARGUMENTS",1262), T1) /*  BABOON */;
   return value0;
  }
 }
}
/*      function definition for BIND-INIT                             */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2bind_init(cl_object v1form, cl_object v2var)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3kind;
   v3kind = ecl_function_dispatch(cl_env_copy,VV[33])(1, v2var) /*  VAR-KIND */;
   if (!((v3kind)==(VV[0]))) { goto L7; }
   goto L4;
   goto L5;
L7:;
   goto L5;
L5:;
   if (!((v3kind)==(VV[10]))) { goto L11; }
   goto L4;
   goto L9;
L11:;
   goto L9;
L9:;
   if (!((v3kind)==(ECL_SYM("SPECIAL",791)))) { goto L15; }
   goto L4;
   goto L13;
L15:;
   goto L13;
L13:;
   if (!((v3kind)==(VV[14]))) { goto L2; }
   goto L3;
L4:;
L3:;
   {
    cl_object v4locs;
    ecl_bds_bind(cl_env_copy,VV[21],ecl_make_fixnum(0)); /*  *INLINE-BLOCKS* */
    ecl_bds_push(cl_env_copy,VV[22]);             /*  *TEMP*          */
    T0 = ecl_list1(v1form);
    T1 = ecl_function_dispatch(cl_env_copy,VV[46])(1, T0) /*  INLINE-ARGS */;
    v4locs = ecl_function_dispatch(cl_env_copy,VV[47])(1, T1) /*  COERCE-LOCS */;
    T0 = ecl_car(v4locs);
    L1bind(T0, v2var);
    value0 = ecl_function_dispatch(cl_env_copy,VV[48])(0) /*  CLOSE-INLINE-BLOCKS */;
    ecl_bds_unwind1(cl_env_copy);
    ecl_bds_unwind1(cl_env_copy);
    return value0;
   }
L2:;
   T0 = cl_list(2, VV[18], v2var);
   ecl_bds_bind(cl_env_copy,VV[23],T0);           /*  *DESTINATION*   */
   value0 = ecl_function_dispatch(cl_env_copy,VV[49])(1, v1form) /*  C2EXPR* */;
   ecl_bds_unwind1(cl_env_copy);
   return value0;
  }
 }
}
/*      function definition for BDS-BIND                              */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3bds_bind(cl_object v1loc, cl_object v2var)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  if (Null(ecl_function_dispatch(cl_env_copy,VV[51])(1, v1loc) /*  VAR-P */)) { goto L2; }
  {
   cl_object v3;
   v3 = ecl_function_dispatch(cl_env_copy,VV[33])(1, v1loc) /*  VAR-KIND */;
   if (!((v3)==(VV[14]))) { goto L10; }
   goto L7;
   goto L8;
L10:;
   goto L8;
L8:;
   if (!((v3)==(ECL_SYM("SPECIAL",791)))) { goto L2; }
   goto L5;
L7:;
  }
L5:;
  T0 = ecl_function_dispatch(cl_env_copy,VV[39])(1, v1loc) /*  VAR-NAME */;
  T1 = ecl_function_dispatch(cl_env_copy,VV[39])(1, v2var) /*  VAR-NAME */;
  if (!((T0)==(T1))) { goto L2; }
  T0 = ecl_function_dispatch(cl_env_copy,VV[34])(1, v2var) /*  VAR-LOC */;
  ecl_function_dispatch(cl_env_copy,VV[36])(3, VV[27], T0, VV[9]) /*  WT-NL */;
  goto L1;
L2:;
  T0 = ecl_function_dispatch(cl_env_copy,VV[34])(1, v2var) /*  VAR-LOC */;
  ecl_function_dispatch(cl_env_copy,VV[36])(3, VV[28], T0, VV[29]) /*  WT-NL */;
  ecl_function_dispatch(cl_env_copy,VV[37])(2, ECL_SYM("OBJECT",1305), v1loc) /*  WT-COERCE-LOC */;
  ecl_function_dispatch(cl_env_copy,VV[38])(1, VV[9]) /*  WT          */;
L1:;
  cl_set(VV[30],CONS(VV[31],ecl_symbol_value(VV[30])));
  T0 = ecl_function_dispatch(cl_env_copy,VV[39])(1, v2var) /*  VAR-NAME */;
  value0 = ecl_function_dispatch(cl_env_copy,VV[40])(1, T0) /*  WT-COMMENT */;
  return value0;
 }
}

#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/cmp/cmpbind.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclxJ1dXnZ7_K2qZTr51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;CMPBIND.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclxJ1dXnZ7_K2qZTr51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_cmp_defun(VV[32]);                          /*  BIND            */
  ecl_cmp_defun(VV[45]);                          /*  BIND-INIT       */
  ecl_cmp_defun(VV[50]);                          /*  BDS-BIND        */
}
