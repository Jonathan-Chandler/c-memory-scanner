/*      Compiler: ECL 21.2.1                                          */
/*      Source: SRC:CMP;CMPGLOBALS.LSP                                */
#include <ecl/ecl-cmp.h>
#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/cmp/cmpglobals.eclh"

#include "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build/cmp/cmpglobals.data"
#ifdef __cplusplus
extern "C"
#endif
ECL_DLLEXPORT void _eclAs2lWjb7_qImZTr51(cl_object flag)
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
 flag->cblock.source = ecl_make_constant_base_string("SRC:CMP;CMPGLOBALS.LSP.NEWEST",-1);
 return;}
 #ifdef ECL_DYNAMIC_VV
 VV = Cblock->cblock.data;
 #endif
 Cblock->cblock.data_text = (const cl_object *)"@EcLtAg:_eclAs2lWjb7_qImZTr51@";
 VVtemp = Cblock->cblock.temp_data;
 ECL_DEFINE_SETF_FUNCTIONS
  si_select_package(VVtemp[0]);
  si_Xmake_special(VV[0]);
  if (ecl_boundp(cl_env_copy,VV[0])) { goto L3; }
  cl_set(VV[0],ecl_make_fixnum(0));
L3:;
  si_Xmake_special(VV[1]);
  if (ecl_boundp(cl_env_copy,VV[1])) { goto L10; }
  cl_set(VV[1],ecl_make_fixnum(0));
L10:;
  si_Xmake_special(VV[2]);
  if (ecl_boundp(cl_env_copy,VV[2])) { goto L17; }
  cl_set(VV[2],ecl_make_fixnum(3));
L17:;
  si_Xmake_special(VV[3]);
  if (ecl_boundp(cl_env_copy,VV[3])) { goto L24; }
  cl_set(VV[3],ECL_NIL);
L24:;
  si_Xmake_special(VV[4]);
  if (ecl_boundp(cl_env_copy,VV[4])) { goto L31; }
  cl_set(VV[4],VV[5]);
L31:;
  si_Xmake_special(VV[6]);
  if (ecl_boundp(cl_env_copy,VV[6])) { goto L38; }
  cl_set(VV[6],VV[5]);
L38:;
  si_Xmake_special(VV[7]);
  if (ecl_boundp(cl_env_copy,VV[7])) { goto L45; }
  cl_set(VV[7],ecl_make_fixnum(-1));
L45:;
  si_Xmake_special(VV[8]);
  if (ecl_boundp(cl_env_copy,VV[8])) { goto L52; }
  cl_set(VV[8],ECL_T);
L52:;
  si_Xmake_special(VV[9]);
  if (ecl_boundp(cl_env_copy,VV[9])) { goto L59; }
  cl_set(VV[9],ECL_NIL);
L59:;
  si_Xmake_special(VV[10]);
  if (ecl_boundp(cl_env_copy,VV[10])) { goto L66; }
  cl_set(VV[10],ECL_NIL);
L66:;
  si_Xmake_special(VV[11]);
  if (ecl_boundp(cl_env_copy,VV[11])) { goto L73; }
  cl_set(VV[11],ECL_NIL);
L73:;
  si_Xmake_special(ECL_SYM("*COMPILE-PRINT*",30));
  if (ecl_boundp(cl_env_copy,ECL_SYM("*COMPILE-PRINT*",30))) { goto L80; }
  cl_set(ECL_SYM("*COMPILE-PRINT*",30),ECL_NIL);
L80:;
  si_Xmake_special(ECL_SYM("*COMPILE-VERBOSE*",31));
  if (ecl_boundp(cl_env_copy,ECL_SYM("*COMPILE-VERBOSE*",31))) { goto L87; }
  cl_set(ECL_SYM("*COMPILE-VERBOSE*",31),ECL_NIL);
L87:;
  si_Xmake_special(VV[12]);
  if (ecl_boundp(cl_env_copy,VV[12])) { goto L94; }
  cl_set(VV[12],VVtemp[1]);
L94:;
  si_Xmake_special(VV[13]);
  if (ecl_boundp(cl_env_copy,VV[13])) { goto L101; }
  cl_set(VV[13],VV[14]);
L101:;
  si_Xmake_special(VV[15]);
  if (ecl_boundp(cl_env_copy,VV[15])) { goto L108; }
  cl_set(VV[15],ECL_NIL);
L108:;
  si_Xmake_special(VV[16]);
  if (ecl_boundp(cl_env_copy,VV[16])) { goto L115; }
  cl_set(VV[16],ECL_NIL);
L115:;
  si_Xmake_special(VV[17]);
  si_Xmake_special(VV[18]);
  si_Xmake_special(VV[19]);
  if (ecl_boundp(cl_env_copy,VV[19])) { goto L130; }
  cl_set(VV[19],ECL_NIL);
L130:;
  si_Xmake_special(VV[20]);
  if (ecl_boundp(cl_env_copy,VV[20])) { goto L137; }
  cl_set(VV[20],ECL_NIL);
L137:;
  si_Xmake_special(VV[21]);
  if (ecl_boundp(cl_env_copy,VV[21])) { goto L144; }
  cl_set(VV[21],ECL_T);
L144:;
  si_Xmake_special(VV[22]);
  si_Xmake_special(VV[23]);
  if (ecl_boundp(cl_env_copy,VV[23])) { goto L155; }
  cl_set(VV[23],ecl_make_fixnum(2));
L155:;
  si_Xmake_special(VV[24]);
  if (ecl_boundp(cl_env_copy,VV[24])) { goto L162; }
  cl_set(VV[24],ecl_make_fixnum(3));
L162:;
  si_Xmake_special(VV[25]);
  if (ecl_boundp(cl_env_copy,VV[25])) { goto L169; }
  cl_set(VV[25],ecl_make_fixnum(0));
L169:;
  si_Xmake_special(VV[26]);
  if (ecl_boundp(cl_env_copy,VV[26])) { goto L176; }
  cl_set(VV[26],ecl_make_fixnum(0));
L176:;
  si_Xmake_special(VV[27]);
  if (ecl_boundp(cl_env_copy,VV[27])) { goto L183; }
  cl_set(VV[27],ECL_T);
L183:;
  si_Xmake_special(VV[28]);
  if (ecl_boundp(cl_env_copy,VV[28])) { goto L190; }
  cl_set(VV[28],ecl_make_fixnum(0));
L190:;
  si_Xmake_special(VV[29]);
  if (ecl_boundp(cl_env_copy,VV[29])) { goto L197; }
  cl_set(VV[29],ecl_make_fixnum(0));
L197:;
  si_Xmake_special(VV[30]);
  if (ecl_boundp(cl_env_copy,VV[30])) { goto L204; }
  cl_set(VV[30],ecl_make_fixnum(0));
L204:;
  si_Xmake_special(VV[31]);
  if (ecl_boundp(cl_env_copy,VV[31])) { goto L211; }
  cl_set(VV[31],ecl_make_fixnum(0));
L211:;
  si_Xmake_special(VV[32]);
  if (ecl_boundp(cl_env_copy,VV[32])) { goto L218; }
  cl_set(VV[32],ecl_make_fixnum(0));
L218:;
  si_Xmake_special(VV[33]);
  if (ecl_boundp(cl_env_copy,VV[33])) { goto L225; }
  cl_set(VV[33],ecl_make_fixnum(0));
L225:;
  si_Xmake_special(VV[34]);
  if (ecl_boundp(cl_env_copy,VV[34])) { goto L232; }
  cl_set(VV[34],ecl_make_fixnum(0));
L232:;
  si_Xmake_special(VV[35]);
  if (ecl_boundp(cl_env_copy,VV[35])) { goto L239; }
  cl_set(VV[35],ecl_make_fixnum(0));
L239:;
  si_Xmake_special(VV[36]);
  if (ecl_boundp(cl_env_copy,VV[36])) { goto L246; }
  cl_set(VV[36],ecl_make_fixnum(0));
L246:;
  si_Xmake_special(VV[37]);
  if (ecl_boundp(cl_env_copy,VV[37])) { goto L253; }
  cl_set(VV[37],ECL_NIL);
L253:;
  si_Xmake_special(VV[38]);
  if (ecl_boundp(cl_env_copy,VV[38])) { goto L260; }
  cl_set(VV[38],ECL_NIL);
L260:;
  si_Xmake_special(VV[39]);
  if (ecl_boundp(cl_env_copy,VV[39])) { goto L267; }
  cl_set(VV[39],ecl_make_fixnum(0));
L267:;
  si_Xmake_special(VV[40]);
  if (ecl_boundp(cl_env_copy,VV[40])) { goto L274; }
  cl_set(VV[40],ecl_make_fixnum(0));
L274:;
  si_Xmake_special(VV[41]);
  if (ecl_boundp(cl_env_copy,VV[41])) { goto L281; }
  cl_set(VV[41],ECL_NIL);
L281:;
  si_Xmake_special(VV[42]);
  if (ecl_boundp(cl_env_copy,VV[42])) { goto L288; }
  cl_set(VV[42],ECL_T);
L288:;
  si_Xmake_special(VV[43]);
  if (ecl_boundp(cl_env_copy,VV[43])) { goto L295; }
  cl_set(VV[43],ecl_make_fixnum(0));
L295:;
  si_Xmake_special(VV[44]);
  si_Xmake_special(VV[45]);
  si_Xmake_special(VV[46]);
  if (ecl_boundp(cl_env_copy,VV[46])) { goto L310; }
  cl_set(VV[46],ECL_NIL);
L310:;
  si_Xmake_special(VV[47]);
  if (ecl_boundp(cl_env_copy,VV[47])) { goto L317; }
  cl_set(VV[47],ECL_NIL);
L317:;
 {
  cl_object T0, T1, T2;
  cl_object volatile env0 = ECL_NIL;
  si_Xmake_special(VV[48]);
  if (ecl_boundp(cl_env_copy,VV[48])) { goto L324; }
  T0 = cl_constantly(ECL_NIL);
  T1 = cl_list(3, VV[49], ECL_SYM("MACRO",1105), T0);
  T2 = ecl_list1(T1);
  cl_set(VV[48],CONS(ECL_NIL,T2));
L324:;
 }
  si_Xmake_special(VV[50]);
  si_Xmake_special(VV[51]);
  if (ecl_boundp(cl_env_copy,VV[51])) { goto L335; }
  cl_set(VV[51],ECL_NIL);
L335:;
  si_Xmake_special(VV[52]);
  if (ecl_boundp(cl_env_copy,VV[52])) { goto L342; }
  cl_set(VV[52],ECL_T);
L342:;
  si_Xmake_special(VV[53]);
  if (ecl_boundp(cl_env_copy,VV[53])) { goto L349; }
  cl_set(VV[53],ECL_NIL);
L349:;
  si_Xmake_special(VV[54]);
  if (ecl_boundp(cl_env_copy,VV[54])) { goto L356; }
  cl_set(VV[54],ECL_NIL);
L356:;
  si_Xmake_special(VV[55]);
  if (ecl_boundp(cl_env_copy,VV[55])) { goto L363; }
  cl_set(VV[55],ECL_NIL);
L363:;
  si_Xmake_special(VV[56]);
  if (ecl_boundp(cl_env_copy,VV[56])) { goto L370; }
  cl_set(VV[56],ECL_NIL);
L370:;
  si_Xmake_special(VV[57]);
  if (ecl_boundp(cl_env_copy,VV[57])) { goto L377; }
  cl_set(VV[57],ECL_NIL);
L377:;
  si_Xmake_special(VV[58]);
  if (ecl_boundp(cl_env_copy,VV[58])) { goto L384; }
  cl_set(VV[58],ECL_NIL);
L384:;
  si_Xmake_special(VV[59]);
  if (ecl_boundp(cl_env_copy,VV[59])) { goto L391; }
  cl_set(VV[59],ECL_T);
L391:;
  si_Xmake_special(VV[60]);
  if (ecl_boundp(cl_env_copy,VV[60])) { goto L398; }
  cl_set(VV[60],ECL_NIL);
L398:;
  si_Xmake_special(VV[61]);
  si_Xmake_special(VV[62]);
  if (ecl_boundp(cl_env_copy,VV[62])) { goto L409; }
  cl_set(VV[62],ecl_make_fixnum(0));
L409:;
  si_Xmake_special(VV[63]);
  if (ecl_boundp(cl_env_copy,VV[63])) { goto L416; }
  cl_set(VV[63],ECL_T);
L416:;
  si_Xmake_special(VV[64]);
  if (ecl_boundp(cl_env_copy,VV[64])) { goto L423; }
  cl_set(VV[64],ECL_NIL);
L423:;
  si_Xmake_special(VV[65]);
  if (ecl_boundp(cl_env_copy,VV[65])) { goto L430; }
  cl_set(VV[65],ECL_NIL);
L430:;
  si_Xmake_special(VV[66]);
  if (ecl_boundp(cl_env_copy,VV[66])) { goto L437; }
  cl_set(VV[66],ECL_NIL);
L437:;
  si_Xmake_special(VV[67]);
  if (ecl_boundp(cl_env_copy,VV[67])) { goto L444; }
  cl_set(VV[67],ECL_NIL);
L444:;
  si_Xmake_special(VV[68]);
  if (ecl_boundp(cl_env_copy,VV[68])) { goto L451; }
  cl_set(VV[68],ECL_NIL);
L451:;
  si_Xmake_special(VV[69]);
  if (ecl_boundp(cl_env_copy,VV[69])) { goto L458; }
  cl_set(VV[69],ECL_NIL);
L458:;
  si_Xmake_special(VV[70]);
  if (ecl_boundp(cl_env_copy,VV[70])) { goto L465; }
  cl_set(VV[70],ECL_NIL);
L465:;
  si_Xmake_special(VV[71]);
  if (ecl_boundp(cl_env_copy,VV[71])) { goto L472; }
  cl_set(VV[71],ECL_NIL);
L472:;
  si_Xmake_special(VV[72]);
  if (ecl_boundp(cl_env_copy,VV[72])) { goto L479; }
  cl_set(VV[72],ECL_NIL);
L479:;
  si_Xmake_special(VV[73]);
  if (ecl_boundp(cl_env_copy,VV[73])) { goto L486; }
  cl_set(VV[73],ECL_NIL);
L486:;
  si_Xmake_special(VV[74]);
  if (ecl_boundp(cl_env_copy,VV[74])) { goto L493; }
  cl_set(VV[74],ECL_NIL);
L493:;
  si_Xmake_special(VV[75]);
  if (ecl_boundp(cl_env_copy,VV[75])) { goto L500; }
  cl_set(VV[75],ECL_NIL);
L500:;
  si_Xmake_special(ECL_SYM("*COMPILER-CONSTANTS*",1019));
  if (ecl_boundp(cl_env_copy,ECL_SYM("*COMPILER-CONSTANTS*",1019))) { goto L507; }
  cl_set(ECL_SYM("*COMPILER-CONSTANTS*",1019),ECL_NIL);
L507:;
  si_Xmake_special(VV[76]);
  if (ecl_boundp(cl_env_copy,VV[76])) { goto L514; }
  cl_set(VV[76],ECL_NIL);
L514:;
  si_Xmake_special(VV[77]);
  if (ecl_boundp(cl_env_copy,VV[77])) { goto L521; }
  cl_set(VV[77],ECL_NIL);
L521:;
  si_Xmake_special(VV[78]);
  if (ecl_boundp(cl_env_copy,VV[78])) { goto L528; }
  cl_set(VV[78],ECL_NIL);
L528:;
  si_Xmake_special(VV[79]);
  if (ecl_boundp(cl_env_copy,VV[79])) { goto L535; }
  cl_set(VV[79],ECL_NIL);
L535:;
  si_Xmake_special(VV[80]);
  if (ecl_boundp(cl_env_copy,VV[80])) { goto L542; }
  cl_set(VV[80],ECL_NIL);
L542:;
  si_Xmake_special(VV[81]);
  if (ecl_boundp(cl_env_copy,VV[81])) { goto L549; }
  cl_set(VV[81],ECL_NIL);
L549:;
  si_Xmake_special(VV[82]);
  if (ecl_boundp(cl_env_copy,VV[82])) { goto L556; }
  cl_set(VV[82],ECL_NIL);
L556:;
  si_Xmake_special(VV[83]);
  if (ecl_boundp(cl_env_copy,VV[83])) { goto L563; }
  cl_set(VV[83],ECL_NIL);
L563:;
  si_Xmake_special(VV[84]);
  if (ecl_boundp(cl_env_copy,VV[84])) { goto L570; }
  cl_set(VV[84],ECL_NIL);
L570:;
  si_Xmake_special(VV[85]);
  if (ecl_boundp(cl_env_copy,VV[85])) { goto L577; }
  cl_set(VV[85],ECL_NIL);
L577:;
  si_Xmake_special(VV[86]);
  if (ecl_boundp(cl_env_copy,VV[86])) { goto L584; }
  cl_set(VV[86],ECL_NIL);
L584:;
  si_Xmake_special(VV[87]);
  if (ecl_boundp(cl_env_copy,VV[87])) { goto L591; }
  cl_set(VV[87],ECL_NIL);
L591:;
  si_Xmake_constant(VV[88], VVtemp[2]);
}
