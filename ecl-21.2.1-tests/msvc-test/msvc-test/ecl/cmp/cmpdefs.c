/*      Compiler: ECL 21.2.1                                          */
/*      Source: BUILD:CMP;CMPDEFS.LSP                                 */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/cmp/cmpdefs.eclh"

#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/cmp/cmpdefs.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclfM3i7Fb7_CimZTr51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("BUILD:CMP;CMPDEFS.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclfM3i7Fb7_CimZTr51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  si_Xmake_special(VV[0]);
  if (ecl_boundp(cl_env_copy,VV[0])) { goto L3; }
  cl_set(VV[0],VVtemp[1]);
L3:;
  si_Xmake_special(VV[1]);
  if (ecl_boundp(cl_env_copy,VV[1])) { goto L10; }
  cl_set(VV[1],VVtemp[2]);
L10:;
  si_Xmake_special(VV[2]);
  if (ecl_boundp(cl_env_copy,VV[2])) { goto L17; }
  cl_set(VV[2],VVtemp[2]);
L17:;
  si_Xmake_special(VV[3]);
  if (ecl_boundp(cl_env_copy,VV[3])) { goto L24; }
  cl_set(VV[3],VVtemp[3]);
L24:;
  si_Xmake_special(VV[4]);
  if (ecl_boundp(cl_env_copy,VV[4])) { goto L31; }
  cl_set(VV[4],VVtemp[4]);
L31:;
  si_Xmake_special(VV[5]);
  if (ecl_boundp(cl_env_copy,VV[5])) { goto L38; }
  cl_set(VV[5],VVtemp[5]);
L38:;
  si_Xmake_special(VV[6]);
  if (ecl_boundp(cl_env_copy,VV[6])) { goto L45; }
  cl_set(VV[6],VVtemp[6]);
L45:;
  si_Xmake_special(VV[7]);
  if (ecl_boundp(cl_env_copy,VV[7])) { goto L52; }
  cl_set(VV[7],VVtemp[7]);
L52:;
  si_Xmake_special(VV[8]);
  if (ecl_boundp(cl_env_copy,VV[8])) { goto L59; }
  if (Null(ecl_memql(VV[9],ecl_symbol_value(ECL_SYM("*FEATURES*",36))))) { goto L62; }
  cl_set(VV[8],VVtemp[8]);
  goto L61;
L62:;
  if (Null(ecl_memql(VV[10],ecl_symbol_value(ECL_SYM("*FEATURES*",36))))) { goto L64; }
  cl_set(VV[8],VVtemp[9]);
  goto L61;
L64:;
  cl_set(VV[8],VVtemp[8]);
L61:;
L59:;
  si_Xmake_special(VV[11]);
  if (ecl_boundp(cl_env_copy,VV[11])) { goto L70; }
  cl_set(VV[11],VVtemp[10]);
L70:;
  si_Xmake_special(VV[12]);
  if (ecl_boundp(cl_env_copy,VV[12])) { goto L77; }
  cl_set(VV[12],VVtemp[11]);
L77:;
  si_Xmake_special(VV[13]);
  if (ecl_boundp(cl_env_copy,VV[13])) { goto L84; }
  cl_set(VV[13],VVtemp[11]);
L84:;
  si_Xmake_special(VV[14]);
  if (ecl_boundp(cl_env_copy,VV[14])) { goto L91; }
  cl_set(VV[14],VVtemp[12]);
L91:;
  si_Xmake_special(VV[15]);
  if (ecl_boundp(cl_env_copy,VV[15])) { goto L98; }
  cl_set(VV[15],VVtemp[13]);
L98:;
  si_Xmake_special(VV[16]);
  if (ecl_boundp(cl_env_copy,VV[16])) { goto L105; }
  cl_set(VV[16],VVtemp[14]);
L105:;
  si_Xmake_special(VV[17]);
  if (ecl_boundp(cl_env_copy,VV[17])) { goto L112; }
  cl_set(VV[17],VVtemp[15]);
L112:;
  si_Xmake_special(VV[18]);
  if (ecl_boundp(cl_env_copy,VV[18])) { goto L119; }
  cl_set(VV[18],VVtemp[16]);
L119:;
  si_Xmake_special(VV[19]);
  if (ecl_boundp(cl_env_copy,VV[19])) { goto L126; }
  cl_set(VV[19],VVtemp[17]);
L126:;
  si_Xmake_special(VV[20]);
  if (ecl_boundp(cl_env_copy,VV[20])) { goto L133; }
  cl_set(VV[20],VVtemp[18]);
L133:;
  si_Xmake_special(VV[21]);
  if (ecl_boundp(cl_env_copy,VV[21])) { goto L140; }
  cl_set(VV[21],VVtemp[19]);
L140:;
  si_Xmake_special(VV[22]);
  if (ecl_boundp(cl_env_copy,VV[22])) { goto L147; }
  cl_set(VV[22],VVtemp[20]);
L147:;
  si_Xmake_special(VV[23]);
  if (ecl_boundp(cl_env_copy,VV[23])) { goto L154; }
  cl_set(VV[23],VVtemp[21]);
L154:;
  si_Xmake_special(VV[24]);
  if (ecl_boundp(cl_env_copy,VV[24])) { goto L161; }
  cl_set(VV[24],VVtemp[22]);
L161:;
  si_Xmake_special(VV[25]);
  if (ecl_boundp(cl_env_copy,VV[25])) { goto L168; }
  {
   cl_fixnum v1;
   v1 = ecl_length(VVtemp[12]);
   if (!((v1)>0)) { goto L172; }
  }
  cl_set(VV[25],cl_format(3, ECL_NIL, VVtemp[12], ecl_symbol_value(VV[23])));
  goto L170;
L172:;
  cl_set(VV[25],ECL_NIL);
  goto L170;
L170:;
L168:;
}
