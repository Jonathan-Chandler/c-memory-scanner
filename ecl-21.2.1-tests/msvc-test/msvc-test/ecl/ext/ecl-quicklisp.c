/*      Compiler: ECL 21.2.1                                          */
/*      Source: EXT:QUICKLISP;ECL-QUICKLISP.LISP                      */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/ext/ecl-quicklisp.eclh"
/*      function definition for SAFE-DOWNLOAD                         */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2safe_download(cl_object volatile v1url, cl_object volatile v2filename)
{
 cl_object T0, T1, T2, T3;
 cl_object volatile env0 = ECL_NIL;
 cl_object volatile CLV0, CLV1;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object volatile value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  cl_ensure_directories_exist(1, v2filename);
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
     if (cl_env_copy->values[0]==ecl_make_fixnum(0))goto L3;
     ecl_internal_error("GO found an inexistent tag");
     }
    }
    {
     cl_object v3;
     v3 = ecl_make_cclosure_va((cl_objectfn)LC1__lambda3,env2,Cblock,1);
     T0 = v3;
    }
    T1 = CONS(VV[4],T0);
    T2 = ecl_list1(T1);
    T3 = CONS(T2,ecl_symbol_value(ECL_SYM("*HANDLER-CLUSTERS*",6)));
    ecl_bds_bind(cl_env_copy,ECL_SYM("*HANDLER-CLUSTERS*",6),T3); /*  *HANDLER-CLUSTERS* */
    ecl_function_dispatch(cl_env_copy,VV[13])(2, v1url, v2filename) /*  DOWNLOAD-URL-TO-FILE */;
    ecl_frs_pop(cl_env_copy);
    ecl_bds_unwind1(cl_env_copy);
    goto L2;
L3:;
    cl_format(2, ECL_T, VV[5]);
    si_quit(1, ecl_make_fixnum(1));
    ecl_frs_pop(cl_env_copy);
    goto L2;
   }
  }
L2:;
  value0 = v2filename;
  cl_env_copy->nvalues = 1;
  return value0;
 }
}
/*      closure LAMBDA3                                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC1__lambda3(cl_narg narg, cl_object v1si__temp, ...)
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
/*      function definition for INSTALL-QUICKLISP                     */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L3install_quicklisp(cl_object v1target_directory)
{
 cl_object T0, T1, T2, T3;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v2file;
   v2file = cl_merge_pathnames(2, VV[7], v1target_directory);
   cl_ensure_directories_exist(1, v2file);
   ecl_function_dispatch(cl_env_copy,VV[13])(2, ecl_symbol_value(VV[1]), v2file) /*  DOWNLOAD-URL-TO-FILE */;
   cl_load(1, v2file);
   T0 = cl_truename(v1target_directory);
   T1 = cl_namestring(T0);
   T2 = cl_format(3, ECL_NIL, VV[8], T1);
   T3 = cl_read_from_string(1, T2);
   value0 = cl_eval(T3);
   return value0;
  }
 }
}
/*      closure LAMBDA7                                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC4__lambda7(cl_narg narg, cl_object v1si__temp, ...)
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

#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/ext/ecl-quicklisp.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclkYnoMkZ7_0CCaTr51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("EXT:QUICKLISP;ECL-QUICKLISP.LISP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclkYnoMkZ7_0CCaTr51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  ecl_function_dispatch(cl_env_copy,VV[11])(12, _ecl_static_0, ECL_NIL, ECL_NIL, ECL_NIL, VVtemp[0], ECL_NIL, ECL_NIL, ECL_NIL, ECL_NIL, ECL_NIL, ECL_NIL, ECL_NIL) /*  DODEFPACKAGE */;
  si_select_package(_ecl_static_0);
  cl_require(1, VV[0]);
  si_Xmake_special(VV[1]);
  cl_set(VV[1],VVtemp[1]);
  si_Xmake_special(VV[2]);
  cl_set(VV[2],cl_translate_logical_pathname(1, VVtemp[2]));
  si_Xmake_special(VV[3]);
  cl_set(VV[3],VVtemp[3]);
  ecl_cmp_defun(VV[12]);                          /*  SAFE-DOWNLOAD   */
  ecl_cmp_defun(VV[14]);                          /*  INSTALL-QUICKLISP */
 {
  cl_object T0, T1, T2, T3;
  cl_object volatile env0 = ECL_NIL;
  cl_object volatile CLV0, CLV1;
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
     if (cl_env_copy->values[0]==ecl_make_fixnum(0))goto L31;
     ecl_internal_error("GO found an inexistent tag");
     }
    }
    {
     cl_object v1;
     v1 = ecl_make_cclosure_va((cl_objectfn)LC4__lambda7,env2,Cblock,1);
     T0 = v1;
    }
    T1 = CONS(ECL_SYM("ERROR",339),T0);
    T2 = ecl_list1(T1);
    T3 = CONS(T2,ecl_symbol_value(ECL_SYM("*HANDLER-CLUSTERS*",6)));
    ecl_bds_bind(cl_env_copy,ECL_SYM("*HANDLER-CLUSTERS*",6),T3); /*  *HANDLER-CLUSTERS* */
    if ((cl_probe_file(ecl_symbol_value(VV[3])))!=ECL_NIL) { goto L34; }
    L3install_quicklisp(ecl_symbol_value(VV[2]));
L34:;
    if ((cl_find_package(VVtemp[4]))!=ECL_NIL) { goto L36; }
    cl_load(1, ecl_symbol_value(VV[3]));
L36:;
    T0 = cl_read_from_string(1, VVtemp[5]);
    cl_eval(T0);
    ecl_frs_pop(cl_env_copy);
    ecl_bds_unwind1(cl_env_copy);
    goto L30;
L31:;
    {
     cl_object v1c;
     v1c = ECL_CONS_CAR(CLV0);
     cl_format(3, ECL_T, VVtemp[6], v1c);
     ecl_frs_pop(cl_env_copy);
     goto L30;
    }
   }
  }
L30:;
 }
  cl_provide(VV[10]);
}
