/*      Compiler: ECL 21.2.1                                          */
/*      Source: EXT:SOCKETS;PACKAGE.LISP                              */
#include <ecl/ecl-cmp.h>
#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/ext/package.eclh"

#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/ext/package.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclutASmJa7_Kam6lq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("EXT:SOCKETS;PACKAGE.LISP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclutASmJa7_Kam6lq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  ecl_function_dispatch(cl_env_copy,VV[0])(12, VVtemp[0], ECL_NIL, ECL_NIL, ECL_NIL, VVtemp[1], ECL_NIL, ECL_NIL, ECL_NIL, VVtemp[2], ECL_NIL, ECL_NIL, ECL_NIL) /*  DODEFPACKAGE */;
}
