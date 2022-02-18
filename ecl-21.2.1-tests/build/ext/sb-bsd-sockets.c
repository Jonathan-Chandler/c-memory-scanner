/*      Compiler: ECL 21.2.1                                          */
/*      Source: EXT:SOCKETS;SB-BSD-SOCKETS.LISP                       */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/ext/sb-bsd-sockets.eclh"

#include "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/ext/sb-bsd-sockets.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclNvBmbYa7_bIkmqq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("EXT:SOCKETS;SB-BSD-SOCKETS.LISP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclNvBmbYa7_bIkmqq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  cl_require(1, VV[0]);
}
