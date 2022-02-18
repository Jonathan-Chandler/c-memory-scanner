/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;PROCLAMATIONS.LSP                             */
#include <ecl/ecl-cmp.h>
#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/cmp/proclamations.eclh"
/*      function definition for PARSE-FUNCTION-PROCLAMATION           */
/*      optimize speed 1, debug 1, space 1, safety 2                  */
static cl_object L1parse_function_proclamation(cl_narg narg, cl_object v1name, cl_object v2arg_types, cl_object v3return_type, ...)
{
 cl_object T0;
 cl_object env0 = ECL_NIL;
 const cl_env_ptr cl_env_copy = ecl_process_env();
 cl_object value0;
 ecl_cs_check(cl_env_copy,value0);
 if (ecl_unlikely(narg<3)) FEwrong_num_arguments_anonym();
 {
  cl_object v4properties;
  ecl_va_list args; ecl_va_start(args,v3return_type,narg,3);
  v4properties = cl_grab_rest_args(args);
  ecl_va_end(args);
  if (Null(si_get_sysprop(v1name, VV[0]))) { goto L1; }
  (cl_env_copy->function=(ECL_SYM("WARN",905)->symbol.gfdef))->cfun.entry(2, VV[1], v1name) /*  WARN */;
L1:;
  T0 = cl_list(2, v2arg_types, v3return_type);
  ecl_function_dispatch(cl_env_copy,VV[45])(2, v1name, T0) /*  PROCLAIM-FUNCTION */;
  {
   cl_object v5p;
   cl_object v6;
   v5p = ECL_NIL;
   {
    cl_object v7;
    v7 = v4properties;
    if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v6 = v7;
   }
L8:;
   if (!(ecl_endp(v6))) { goto L10; }
   goto L9;
L10:;
   v5p = _ecl_car(v6);
   {
    cl_object v7;
    v7 = _ecl_cdr(v6);
    if (ecl_unlikely(!ECL_LISTP(v7))) FEtype_error_list(v7);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v6 = v7;
   }
   if (!(ecl_eql(v5p,VV[2]))) { goto L19; }
   si_put_sysprop(v1name, VV[3], ECL_T);
   goto L18;
L19:;
   if (!(ecl_eql(v5p,ECL_SYM("PREDICATE",1314)))) { goto L26; }
   goto L23;
   goto L24;
L26:;
   goto L24;
L24:;
   if (!(ecl_eql(v5p,VV[5]))) { goto L21; }
   goto L22;
L23:;
L22:;
   si_put_sysprop(v1name, VV[7], ECL_T);
   si_put_sysprop(v1name, VV[8], ECL_T);
   goto L18;
L21:;
   if (!(ecl_eql(v5p,VV[9]))) { goto L35; }
   goto L32;
   goto L33;
L35:;
   goto L33;
L33:;
   if (!(ecl_eql(v5p,ECL_SYM("READER",1008)))) { goto L30; }
   goto L31;
L32:;
L31:;
   si_put_sysprop(v1name, VV[8], ECL_T);
   goto L18;
L30:;
   cl_error(3, VV[12], v5p, v1name);
L18:;
   goto L8;
L9:;
   value0 = ECL_NIL;
   cl_env_copy->nvalues = 1;
   return value0;
  }
 }
}

#include "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/build/cmp/proclamations.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclxgkIZfZ7_WUb6lq51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;PROCLAMATIONS.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclxgkIZfZ7_WUb6lq51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  ecl_cmp_defun(VV[44]);                          /*  PARSE-FUNCTION-PROCLAMATION */
  si_do_deftype(3, VV[14], VVtemp[1], VVtemp[2]);
  si_do_deftype(3, VV[15], VVtemp[3], VVtemp[4]);
  si_do_deftype(3, VV[16], VVtemp[5], ECL_SYM("LIST",483));
  si_do_deftype(3, VV[17], VVtemp[6], VVtemp[7]);
  si_do_deftype(3, VV[18], VVtemp[8], VVtemp[9]);
  si_do_deftype(3, VV[19], VVtemp[10], VVtemp[11]);
  si_do_deftype(3, VV[20], VVtemp[12], VVtemp[13]);
  si_do_deftype(3, VV[21], VVtemp[14], ECL_SYM("LIST",483));
  si_do_deftype(3, VV[22], VVtemp[15], VVtemp[16]);
  si_do_deftype(3, VV[23], VVtemp[17], ECL_SYM("LIST",483));
  si_do_deftype(3, VV[24], VVtemp[18], ECL_T);
  si_do_deftype(3, VV[25], VVtemp[19], VVtemp[20]);
  si_do_deftype(3, VV[26], VVtemp[21], VVtemp[22]);
  si_do_deftype(3, VV[27], VVtemp[23], VVtemp[24]);
  si_do_deftype(3, VV[28], VVtemp[25], ECL_T);
  si_do_deftype(3, ECL_SYM("INTEGER-LENGTH",441), VVtemp[26], ECL_SYM("ARRAY-INDEX",1850));
  si_do_deftype(3, VV[29], VVtemp[27], VVtemp[28]);
  si_do_deftype(3, VV[30], VVtemp[29], VVtemp[30]);
  si_do_deftype(3, VV[31], VVtemp[31], VVtemp[32]);
  si_do_deftype(3, ECL_SYM("PATHNAME-DEVICE",633), VVtemp[33], VVtemp[34]);
  si_do_deftype(3, ECL_SYM("PATHNAME-DIRECTORY",634), VVtemp[35], VVtemp[36]);
  si_do_deftype(3, ECL_SYM("PATHNAME-HOST",635), VVtemp[37], VVtemp[38]);
  si_do_deftype(3, ECL_SYM("PATHNAME-NAME",637), VVtemp[39], VVtemp[40]);
  si_do_deftype(3, ECL_SYM("PATHNAME-TYPE",638), VVtemp[41], VVtemp[40]);
  si_do_deftype(3, ECL_SYM("PATHNAME-VERSION",639), VVtemp[42], VVtemp[43]);
  si_do_deftype(3, VV[32], VVtemp[44], ECL_SYM("LIST",483));
  si_do_deftype(3, VV[33], VVtemp[45], ECL_SYM("LIST",483));
  si_do_deftype(3, VV[34], VVtemp[46], VVtemp[47]);
  si_do_deftype(3, VV[35], VVtemp[48], VVtemp[49]);
  si_do_deftype(3, VV[36], VVtemp[50], VVtemp[51]);
  si_do_deftype(3, VV[37], VVtemp[52], VVtemp[53]);
  si_do_deftype(3, VV[38], VVtemp[54], VVtemp[55]);
  si_do_deftype(3, VV[39], VVtemp[56], VVtemp[57]);
  si_do_deftype(3, VV[40], VVtemp[58], ECL_T);
  si_do_deftype(3, VV[41], VVtemp[59], VVtemp[60]);
  si_do_deftype(3, VV[42], VVtemp[61], ECL_SYM("UNSIGNED-BYTE",887));
  si_do_deftype(3, VV[43], VVtemp[62], ECL_T);
  si_do_deftype(3, ECL_SYM("INSTANCE",1370), VVtemp[63], ECL_SYM("STANDARD-OBJECT",978));
  (cl_env_copy->function=(ECL_SYM("PROCLAIM",668)->symbol.gfdef))->cfun.entry(1, VVtemp[64]) /*  PROCLAIM */;
 {
  cl_object T0;
  cl_object volatile env0 = ECL_NIL;
  {
   cl_object v1i;
   cl_object v2;
   v1i = ECL_NIL;
   v2 = VVtemp[65];
L50:;
   v1i = _ecl_car(v2);
   {
    cl_object v3;
    v3 = _ecl_cdr(v2);
    if (ecl_unlikely(!ECL_LISTP(v3))) FEtype_error_list(v3);
    value0 = ECL_NIL;
    cl_env_copy->nvalues = 0;
    v2 = v3;
   }
   T0 = ecl_fdefinition(VV[13]);
   cl_apply(2, T0, v1i);
   if (!(ecl_endp(v2))) { goto L60; }
   goto L51;
L60:;
   goto L50;
L51:;
  }
 }
}
