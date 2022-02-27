/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CLOS;PACKAGE.LSP                                  */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/clos/package.eclh"

#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/clos/package.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclMmxSxIb7_FCdZTr51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CLOS;PACKAGE.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclMmxSxIb7_FCdZTr51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  cl_set(ECL_SYM("*FEATURES*",36),cl_adjoin(2, VV[0], ecl_symbol_value(ECL_SYM("*FEATURES*",36))));
  ecl_function_dispatch(cl_env_copy,VV[1])(12, VVtemp[0], ECL_NIL, ECL_NIL, ECL_NIL, VVtemp[1], ECL_NIL, ECL_NIL, ECL_NIL, ECL_NIL, ECL_NIL, VVtemp[2], ECL_NIL) /*  DODEFPACKAGE */;
}
