/*      Compiler: ECL 21.2.1                                          */
/*      Source: EXT:PACKAGE-LOCKS;PACKAGE-LOCKS.LISP                  */
#include <ecl/ecl-cmp.h>
#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/ext/package-locks.eclh"
/*      function definition for LOCK-PACKAGE                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1lock_package(cl_object v1package)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2package;
   v2package = si_coerce_to_package(v1package);
   (v2package)->pack.locked = 1;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 0;
   value0 = ECL_T;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      function definition for UNLOCK-PACKAGE                        */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2unlock_package(cl_object v1package)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2package;
   v2package = si_coerce_to_package(v1package);
   (v2package)->pack.locked = 0;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 0;
   value0 = ECL_T;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}
/*      local function WITHOUT-PACKAGE-LOCKS                          */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC3without_package_locks(cl_object v1, cl_object v2)
{
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3;
   v3 = ecl_cdr(v1);
   value0 = cl_listX(3, ECL_SYM("LET",479), VV[3], v3);
   return value0;
  }
 }
}
/*      local function WITH-UNLOCKED-PACKAGES                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC4with_unlocked_packages(cl_object v1, cl_object v2)
{
 cl_object T0, T1, T2, T3, T4, T5, T6, T7, T8, T9;
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
   ecl_function_dispatch(cl_env_copy,VV[15])(1, v1) /*  DM-TOO-FEW-ARGUMENTS */;
L3:;
   {
    cl_object v5;
    v5 = ecl_car(v3);
    v3 = ecl_cdr(v3);
    v4 = v5;
   }
   {
    cl_object v5unlocked_packages;
    v5unlocked_packages = cl_gensym(1, _ecl_static_0);
    T0 = ecl_list1(v5unlocked_packages);
    T1 = cl_list(2, ECL_SYM("QUOTE",681), v4);
    T2 = cl_list(2, VV[5], T1);
    T3 = cl_list(3, ECL_SYM("PUSH",679), VV[5], v5unlocked_packages);
    T4 = cl_list(4, ECL_SYM("WHEN",907), VV[6], T3, VV[7]);
    T5 = cl_list(3, ECL_SYM("DOLIST",315), T2, T4);
    T6 = cl_listX(3, ECL_SYM("PROGN",673), T5, v3);
    T7 = cl_list(2, VV[5], v5unlocked_packages);
    T8 = cl_list(3, ECL_SYM("DOLIST",315), T7, VV[8]);
    T9 = cl_list(3, ECL_SYM("UNWIND-PROTECT",890), T6, T8);
    value0 = cl_list(3, ECL_SYM("LET",479), T0, T9);
    return value0;
   }
  }
 }
}

#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/ext/package-locks.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _ecluxBUfRa7_4dq6lq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("EXT:PACKAGE-LOCKS;PACKAGE-LOCKS.LISP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_ecluxBUfRa7_4dq6lq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  cl_set(ECL_SYM("*FEATURES*",36),cl_adjoin(2, VV[0], ecl_symbol_value(ECL_SYM("*FEATURES*",36))));
  ecl_cmp_defun(VV[11]);                          /*  LOCK-PACKAGE    */
  ecl_cmp_defun(VV[12]);                          /*  UNLOCK-PACKAGE  */
  ecl_cmp_defmacro(VV[13]);                       /*  WITHOUT-PACKAGE-LOCKS */
  ecl_cmp_defmacro(VV[14]);                       /*  WITH-UNLOCKED-PACKAGES */
  cl_provide(VV[10]);
}
