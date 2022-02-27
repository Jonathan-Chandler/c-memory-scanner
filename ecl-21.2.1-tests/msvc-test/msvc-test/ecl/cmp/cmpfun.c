/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;CMPFUN.LSP                                    */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/cmp/cmpfun.eclh"
/*      function definition for C1APPLY                               */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L2c1apply(cl_object v1args)
{
 cl_object T0, T1;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  ecl_function_dispatch(cl_env_copy,VV[6])(3, ECL_SYM("APPLY",91), v1args, ecl_make_fixnum(2)) /*  CHECK-ARGS-NUMBER */;
  {
   cl_object v2fun;
   cl_object v3arguments;
   v2fun = ecl_car(v1args);
   v3arguments = ecl_cdr(v1args);
   T0 = ecl_last(v3arguments,1);
   T1 = ecl_car(T0);
   if (!((T1)==(ECL_SYM(".COMBINED-METHOD-ARGS.",1534)))) { goto L4; }
   value0 = LC1default_apply(v2fun, v3arguments);
   return value0;
L4:;
   if (!(ECL_CONSP(v2fun))) { goto L6; }
   {
    cl_object v4;
    v4 = ecl_car(v2fun);
    if (!((v4)==(ECL_SYM("LAMBDA",454)))) { goto L13; }
    goto L10;
    goto L11;
L13:;
    goto L11;
L11:;
    if (!((v4)==(ECL_SYM("LAMBDA-BLOCK",1367)))) { goto L6; }
    goto L7;
L10:;
   }
L7:;
   T0 = ecl_function_dispatch(cl_env_copy,VV[7])(1, v2fun) /*  MACROEXPAND-LAMBDA-BLOCK */;
   value0 = ecl_function_dispatch(cl_env_copy,VV[8])(3, T0, v3arguments, ECL_T) /*  OPTIMIZE-FUNCALL/APPLY-LAMBDA */;
   return value0;
L6:;
   if (!(ECL_CONSP(v2fun))) { goto L16; }
   T0 = ecl_car(v2fun);
   if (!((T0)==(ECL_SYM("FUNCTION",398)))) { goto L16; }
   T0 = ecl_cadr(v2fun);
   if (!(ECL_CONSP(T0))) { goto L16; }
   {
    cl_object v4;
    v4 = ecl_caadr(v2fun);
    if (!((v4)==(ECL_SYM("LAMBDA",454)))) { goto L25; }
    goto L22;
    goto L23;
L25:;
    goto L23;
L23:;
    if (!((v4)==(ECL_SYM("LAMBDA-BLOCK",1367)))) { goto L16; }
    goto L17;
L22:;
   }
L17:;
   T0 = ecl_cadr(v2fun);
   v1args = CONS(T0,v3arguments);
   goto TTL;
L16:;
   value0 = LC1default_apply(v2fun, v3arguments);
   return value0;
  }
 }
}
/*      local function DEFAULT-APPLY                                  */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object LC1default_apply(cl_object v1fun, cl_object v2arguments)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 {
TTL:
  {
   cl_object v3form;
   T0 = cl_listX(3, VV[0], v1fun, v2arguments);
   v3form = ecl_function_dispatch(cl_env_copy,VV[9])(1, T0) /*  C1FUNCALL */;
   if (!(ECL_CONSP(v1fun))) { goto L2; }
   T0 = ecl_car(v1fun);
   if (!((T0)==(ECL_SYM("FUNCTION",398)))) { goto L2; }
   {
    cl_object v4fname;
    cl_object v5type;
    v4fname = ecl_cadr(v1fun);
    v5type = ecl_function_dispatch(cl_env_copy,VV[10])(1, v4fname) /*  GET-RETURN-TYPE */;
    if (Null(v5type)) { goto L2; }
    ecl_structure_set(v3form,VV[1],1,v5type);
   }
L2:;
   value0 = v3form;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}

#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/cmp/cmpfun.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclJoSVCkb7_pFrZTr51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;CMPFUN.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclJoSVCkb7_pFrZTr51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_cmp_defun(VV[5]);                           /*  C1APPLY         */
}
