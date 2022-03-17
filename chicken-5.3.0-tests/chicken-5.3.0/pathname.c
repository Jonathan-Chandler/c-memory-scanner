/* Generated from pathname.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.3.0rc4 ((HEAD detached at 5.3.0rc4)) (rev b6cbb1ba)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: pathname.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file pathname.c -emit-import-library chicken.pathname
   unit: pathname
   uses: data-structures irregex library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_irregex_toplevel)
C_externimport void C_ccall C_irregex_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[76];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,97,98,115,111,108,117,116,101,45,112,97,116,104,110,97,109,101,63,32,112,110,41};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,8),40,108,112,32,108,101,110,41};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,31),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,99,104,111,112,45,112,100,115,32,115,116,114,41,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,115,116,114,115,41,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,16),40,99,111,110,99,45,100,105,114,115,32,100,105,114,115,41};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,24),40,99,97,110,111,110,105,99,97,108,105,122,101,45,100,105,114,115,32,100,105,114,115,41};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,33),40,95,109,97,107,101,45,112,97,116,104,110,97,109,101,32,108,111,99,32,100,105,114,32,102,105,108,101,32,101,120,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,109,97,107,101,45,112,97,116,104,110,97,109,101,32,100,105,114,115,32,102,105,108,101,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,58),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,109,97,107,101,45,97,98,115,111,108,117,116,101,45,112,97,116,104,110,97,109,101,32,100,105,114,115,32,102,105,108,101,32,46,32,114,101,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,15),40,115,116,114,105,112,45,112,100,115,32,100,105,114,41,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,100,101,99,111,109,112,111,115,101,45,112,97,116,104,110,97,109,101,32,112,110,41};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,7),40,97,49,48,49,53,41,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,29),40,97,49,48,50,49,32,100,105,114,50,50,57,32,102,105,108,101,50,51,49,32,101,120,116,50,51,51,41,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,112,97,116,104,110,97,109,101,45,100,105,114,101,99,116,111,114,121,32,112,110,41};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,7),40,97,49,48,51,48,41,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,29),40,97,49,48,51,54,32,100,105,114,50,52,51,32,102,105,108,101,50,52,53,32,101,120,116,50,52,55,41,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,35),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,112,97,116,104,110,97,109,101,45,102,105,108,101,32,112,110,41,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,7),40,97,49,48,52,53,41,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,29),40,97,49,48,53,49,32,100,105,114,50,53,55,32,102,105,108,101,50,53,57,32,101,120,116,50,54,49,41,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,112,97,116,104,110,97,109,101,45,101,120,116,101,110,115,105,111,110,32,112,110,41};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,7),40,97,49,48,54,48,41,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,29),40,97,49,48,54,54,32,100,105,114,50,55,49,32,102,105,108,101,50,55,51,32,101,120,116,50,55,53,41,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,46),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,112,97,116,104,110,97,109,101,45,115,116,114,105,112,45,100,105,114,101,99,116,111,114,121,32,112,110,41,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,7),40,97,49,48,55,56,41,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,29),40,97,49,48,56,52,32,100,105,114,50,56,53,32,102,105,108,101,50,56,55,32,101,120,116,50,56,57,41,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,46),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,112,97,116,104,110,97,109,101,45,115,116,114,105,112,45,101,120,116,101,110,115,105,111,110,32,112,110,41,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,7),40,97,49,48,57,54,41,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,27),40,97,49,49,48,50,32,95,51,48,48,32,102,105,108,101,51,48,50,32,101,120,116,51,48,52,41,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,52),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,112,97,116,104,110,97,109,101,45,114,101,112,108,97,99,101,45,100,105,114,101,99,116,111,114,121,32,112,110,32,100,105,114,41,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,7),40,97,49,49,49,52,41,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,26),40,97,49,49,50,48,32,100,105,114,51,49,53,32,95,51,49,55,32,101,120,116,51,49,57,41,0,0,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,48),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,112,97,116,104,110,97,109,101,45,114,101,112,108,97,99,101,45,102,105,108,101,32,112,110,32,102,105,108,101,41};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,7),40,97,49,49,51,50,41,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,27),40,97,49,49,51,56,32,100,105,114,51,51,48,32,102,105,108,101,51,51,50,32,95,51,51,52,41,0,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,52),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,112,97,116,104,110,97,109,101,45,114,101,112,108,97,99,101,45,101,120,116,101,110,115,105,111,110,32,112,110,32,101,120,116,41,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,15),40,97,100,100,112,97,114,116,32,112,97,114,116,115,41,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,6),40,112,100,115,63,41,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,8),40,103,51,56,53,32,112,41};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,23),40,102,111,114,45,101,97,99,104,45,108,111,111,112,51,56,52,32,103,51,57,49,41,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,19),40,108,111,111,112,32,105,32,112,114,101,118,32,112,97,114,116,115,41,0,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,110,111,114,109,97,108,105,122,101,45,112,97,116,104,110,97,109,101,32,112,97,116,104,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,48),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,115,112,108,105,116,45,100,105,114,101,99,116,111,114,121,32,108,111,99,32,100,105,114,32,107,101,101,112,63,41};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,100,105,114,101,99,116,111,114,121,45,110,117,108,108,63,32,100,105,114,41,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,100,101,99,111,109,112,111,115,101,45,100,105,114,101,99,116,111,114,121,32,100,105,114,41,0,0,0,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,97,98,115,111,108,117,116,101,45,112,97,116,104,110,97,109,101,45,114,111,111,116,32,112,110,41,0,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,33),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,114,111,111,116,45,111,114,105,103,105,110,32,114,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,114,111,111,116,45,100,105,114,101,99,116,111,114,121,32,114,116,41,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,97,98,115,111,108,117,116,101,45,112,97,116,104,110,97,109,101,45,114,111,111,116,32,112,110,41,0,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,33),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,114,111,111,116,45,111,114,105,103,105,110,32,114,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,114,111,111,116,45,100,105,114,101,99,116,111,114,121,32,114,116,41,0,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_1004)
static void C_ccall f_1004(C_word c,C_word *av) C_noret;
C_noret_decl(f_1010)
static void C_ccall f_1010(C_word c,C_word *av) C_noret;
C_noret_decl(f_1016)
static void C_ccall f_1016(C_word c,C_word *av) C_noret;
C_noret_decl(f_1022)
static void C_ccall f_1022(C_word c,C_word *av) C_noret;
C_noret_decl(f_1025)
static void C_ccall f_1025(C_word c,C_word *av) C_noret;
C_noret_decl(f_1031)
static void C_ccall f_1031(C_word c,C_word *av) C_noret;
C_noret_decl(f_1037)
static void C_ccall f_1037(C_word c,C_word *av) C_noret;
C_noret_decl(f_1040)
static void C_ccall f_1040(C_word c,C_word *av) C_noret;
C_noret_decl(f_1046)
static void C_ccall f_1046(C_word c,C_word *av) C_noret;
C_noret_decl(f_1052)
static void C_ccall f_1052(C_word c,C_word *av) C_noret;
C_noret_decl(f_1055)
static void C_ccall f_1055(C_word c,C_word *av) C_noret;
C_noret_decl(f_1061)
static void C_ccall f_1061(C_word c,C_word *av) C_noret;
C_noret_decl(f_1067)
static void C_ccall f_1067(C_word c,C_word *av) C_noret;
C_noret_decl(f_1073)
static void C_ccall f_1073(C_word c,C_word *av) C_noret;
C_noret_decl(f_1079)
static void C_ccall f_1079(C_word c,C_word *av) C_noret;
C_noret_decl(f_1085)
static void C_ccall f_1085(C_word c,C_word *av) C_noret;
C_noret_decl(f_1091)
static void C_ccall f_1091(C_word c,C_word *av) C_noret;
C_noret_decl(f_1097)
static void C_ccall f_1097(C_word c,C_word *av) C_noret;
C_noret_decl(f_1103)
static void C_ccall f_1103(C_word c,C_word *av) C_noret;
C_noret_decl(f_1109)
static void C_ccall f_1109(C_word c,C_word *av) C_noret;
C_noret_decl(f_1115)
static void C_ccall f_1115(C_word c,C_word *av) C_noret;
C_noret_decl(f_1121)
static void C_ccall f_1121(C_word c,C_word *av) C_noret;
C_noret_decl(f_1127)
static void C_ccall f_1127(C_word c,C_word *av) C_noret;
C_noret_decl(f_1133)
static void C_ccall f_1133(C_word c,C_word *av) C_noret;
C_noret_decl(f_1139)
static void C_ccall f_1139(C_word c,C_word *av) C_noret;
C_noret_decl(f_1149)
static C_word C_fcall f_1149(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_1187)
static void C_ccall f_1187(C_word c,C_word *av) C_noret;
C_noret_decl(f_1196)
static C_word C_fcall f_1196(C_word t0,C_word t1);
C_noret_decl(f_1219)
static void C_fcall f_1219(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1229)
static void C_fcall f_1229(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1253)
static void C_ccall f_1253(C_word c,C_word *av) C_noret;
C_noret_decl(f_1256)
static void C_ccall f_1256(C_word c,C_word *av) C_noret;
C_noret_decl(f_1259)
static void C_ccall f_1259(C_word c,C_word *av) C_noret;
C_noret_decl(f_1260)
static void C_fcall f_1260(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1264)
static void C_ccall f_1264(C_word c,C_word *av) C_noret;
C_noret_decl(f_1274)
static void C_ccall f_1274(C_word c,C_word *av) C_noret;
C_noret_decl(f_1277)
static void C_ccall f_1277(C_word c,C_word *av) C_noret;
C_noret_decl(f_1280)
static void C_ccall f_1280(C_word c,C_word *av) C_noret;
C_noret_decl(f_1283)
static void C_fcall f_1283(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1290)
static void C_ccall f_1290(C_word c,C_word *av) C_noret;
C_noret_decl(f_1297)
static void C_ccall f_1297(C_word c,C_word *av) C_noret;
C_noret_decl(f_1309)
static void C_fcall f_1309(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1319)
static void C_ccall f_1319(C_word c,C_word *av) C_noret;
C_noret_decl(f_1345)
static void C_ccall f_1345(C_word c,C_word *av) C_noret;
C_noret_decl(f_1354)
static void C_fcall f_1354(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1390)
static void C_ccall f_1390(C_word c,C_word *av) C_noret;
C_noret_decl(f_1406)
static void C_fcall f_1406(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1410)
static void C_ccall f_1410(C_word c,C_word *av) C_noret;
C_noret_decl(f_1460)
static void C_fcall f_1460(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1473)
static void C_ccall f_1473(C_word c,C_word *av) C_noret;
C_noret_decl(f_1481)
static void C_ccall f_1481(C_word c,C_word *av) C_noret;
C_noret_decl(f_1483)
static C_word C_fcall f_1483(C_word t0);
C_noret_decl(f_1513)
static void C_ccall f_1513(C_word c,C_word *av) C_noret;
C_noret_decl(f_1552)
static void C_ccall f_1552(C_word c,C_word *av) C_noret;
C_noret_decl(f_1556)
static void C_ccall f_1556(C_word c,C_word *av) C_noret;
C_noret_decl(f_1559)
static void C_ccall f_1559(C_word c,C_word *av) C_noret;
C_noret_decl(f_1562)
static void C_ccall f_1562(C_word c,C_word *av) C_noret;
C_noret_decl(f_1569)
static void C_ccall f_1569(C_word c,C_word *av) C_noret;
C_noret_decl(f_1591)
static void C_ccall f_1591(C_word c,C_word *av) C_noret;
C_noret_decl(f_1594)
static void C_ccall f_1594(C_word c,C_word *av) C_noret;
C_noret_decl(f_1596)
static void C_ccall f_1596(C_word c,C_word *av) C_noret;
C_noret_decl(f_1602)
static void C_ccall f_1602(C_word c,C_word *av) C_noret;
C_noret_decl(f_1611)
static void C_ccall f_1611(C_word c,C_word *av) C_noret;
C_noret_decl(f_1621)
static void C_ccall f_1621(C_word c,C_word *av) C_noret;
C_noret_decl(f_1623)
static void C_ccall f_1623(C_word c,C_word *av) C_noret;
C_noret_decl(f_1629)
static void C_ccall f_1629(C_word c,C_word *av) C_noret;
C_noret_decl(f_1632)
static void C_ccall f_1632(C_word c,C_word *av) C_noret;
C_noret_decl(f_593)
static void C_ccall f_593(C_word c,C_word *av) C_noret;
C_noret_decl(f_596)
static void C_ccall f_596(C_word c,C_word *av) C_noret;
C_noret_decl(f_599)
static void C_ccall f_599(C_word c,C_word *av) C_noret;
C_noret_decl(f_605)
static void C_fcall f_605(C_word t0,C_word t1) C_noret;
C_noret_decl(f_607)
static void C_ccall f_607(C_word c,C_word *av) C_noret;
C_noret_decl(f_618)
static void C_ccall f_618(C_word c,C_word *av) C_noret;
C_noret_decl(f_620)
static void C_fcall f_620(C_word t0,C_word t1) C_noret;
C_noret_decl(f_633)
static void C_fcall f_633(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_640)
static void C_fcall f_640(C_word t0,C_word t1) C_noret;
C_noret_decl(f_688)
static void C_fcall f_688(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_697)
static void C_fcall f_697(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_725)
static void C_ccall f_725(C_word c,C_word *av) C_noret;
C_noret_decl(f_729)
static void C_ccall f_729(C_word c,C_word *av) C_noret;
C_noret_decl(f_739)
static void C_fcall f_739(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_770)
static void C_fcall f_770(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_793)
static void C_ccall f_793(C_word c,C_word *av) C_noret;
C_noret_decl(f_818)
static void C_fcall f_818(C_word t0,C_word t1) C_noret;
C_noret_decl(f_858)
static void C_ccall f_858(C_word c,C_word *av) C_noret;
C_noret_decl(f_869)
static void C_ccall f_869(C_word c,C_word *av) C_noret;
C_noret_decl(f_877)
static void C_ccall f_877(C_word c,C_word *av) C_noret;
C_noret_decl(f_888)
static void C_ccall f_888(C_word c,C_word *av) C_noret;
C_noret_decl(f_891)
static void C_ccall f_891(C_word c,C_word *av) C_noret;
C_noret_decl(f_894)
static void C_ccall f_894(C_word c,C_word *av) C_noret;
C_noret_decl(f_913)
static void C_ccall f_913(C_word c,C_word *av) C_noret;
C_noret_decl(f_916)
static void C_ccall f_916(C_word c,C_word *av) C_noret;
C_noret_decl(f_917)
static void C_fcall f_917(C_word t0,C_word t1) C_noret;
C_noret_decl(f_924)
static void C_ccall f_924(C_word c,C_word *av) C_noret;
C_noret_decl(f_938)
static void C_ccall f_938(C_word c,C_word *av) C_noret;
C_noret_decl(f_954)
static void C_ccall f_954(C_word c,C_word *av) C_noret;
C_noret_decl(f_964)
static void C_ccall f_964(C_word c,C_word *av) C_noret;
C_noret_decl(f_968)
static void C_ccall f_968(C_word c,C_word *av) C_noret;
C_noret_decl(f_972)
static void C_ccall f_972(C_word c,C_word *av) C_noret;
C_noret_decl(f_976)
static void C_ccall f_976(C_word c,C_word *av) C_noret;
C_noret_decl(f_979)
static void C_ccall f_979(C_word c,C_word *av) C_noret;
C_noret_decl(f_989)
static void C_ccall f_989(C_word c,C_word *av) C_noret;
C_noret_decl(f_993)
static void C_ccall f_993(C_word c,C_word *av) C_noret;
C_noret_decl(f_997)
static void C_ccall f_997(C_word c,C_word *av) C_noret;
C_noret_decl(C_pathname_toplevel)
C_externexport void C_ccall C_pathname_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1219)
static void C_ccall trf_1219(C_word c,C_word *av) C_noret;
static void C_ccall trf_1219(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1219(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1229)
static void C_ccall trf_1229(C_word c,C_word *av) C_noret;
static void C_ccall trf_1229(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1229(t0,t1);}

C_noret_decl(trf_1260)
static void C_ccall trf_1260(C_word c,C_word *av) C_noret;
static void C_ccall trf_1260(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1260(t0,t1,t2);}

C_noret_decl(trf_1283)
static void C_ccall trf_1283(C_word c,C_word *av) C_noret;
static void C_ccall trf_1283(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1283(t0,t1);}

C_noret_decl(trf_1309)
static void C_ccall trf_1309(C_word c,C_word *av) C_noret;
static void C_ccall trf_1309(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1309(t0,t1,t2);}

C_noret_decl(trf_1354)
static void C_ccall trf_1354(C_word c,C_word *av) C_noret;
static void C_ccall trf_1354(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1354(t0,t1);}

C_noret_decl(trf_1406)
static void C_ccall trf_1406(C_word c,C_word *av) C_noret;
static void C_ccall trf_1406(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1406(t0,t1);}

C_noret_decl(trf_1460)
static void C_ccall trf_1460(C_word c,C_word *av) C_noret;
static void C_ccall trf_1460(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1460(t0,t1,t2,t3);}

C_noret_decl(trf_605)
static void C_ccall trf_605(C_word c,C_word *av) C_noret;
static void C_ccall trf_605(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_605(t0,t1);}

C_noret_decl(trf_620)
static void C_ccall trf_620(C_word c,C_word *av) C_noret;
static void C_ccall trf_620(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_620(t0,t1);}

C_noret_decl(trf_633)
static void C_ccall trf_633(C_word c,C_word *av) C_noret;
static void C_ccall trf_633(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_633(t0,t1,t2);}

C_noret_decl(trf_640)
static void C_ccall trf_640(C_word c,C_word *av) C_noret;
static void C_ccall trf_640(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_640(t0,t1);}

C_noret_decl(trf_688)
static void C_ccall trf_688(C_word c,C_word *av) C_noret;
static void C_ccall trf_688(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_688(t0,t1,t2);}

C_noret_decl(trf_697)
static void C_ccall trf_697(C_word c,C_word *av) C_noret;
static void C_ccall trf_697(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_697(t0,t1,t2);}

C_noret_decl(trf_739)
static void C_ccall trf_739(C_word c,C_word *av) C_noret;
static void C_ccall trf_739(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_739(t0,t1,t2);}

C_noret_decl(trf_770)
static void C_ccall trf_770(C_word c,C_word *av) C_noret;
static void C_ccall trf_770(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_770(t0,t1,t2,t3,t4);}

C_noret_decl(trf_818)
static void C_ccall trf_818(C_word c,C_word *av) C_noret;
static void C_ccall trf_818(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_818(t0,t1);}

C_noret_decl(trf_917)
static void C_ccall trf_917(C_word c,C_word *av) C_noret;
static void C_ccall trf_917(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_917(t0,t1);}

/* k1002 in k977 in k952 in chicken.pathname#decompose-pathname in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_1004(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1004,c,av);}
/* pathname.scm:187: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
C_values(5,av2);}}

/* chicken.pathname#pathname-directory in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_1010(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_1010,c,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1016,a[2]=t2,a[3]=((C_word)li11),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1022,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp);
/* pathname.scm:191: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* a1015 in chicken.pathname#pathname-directory in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_1016(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1016,c,av);}
/* pathname.scm:191: decompose-pathname */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a1021 in chicken.pathname#pathname-directory in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_1022(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1022,c,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* chicken.pathname#pathname-file in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_1025(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_1025,c,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1031,a[2]=t2,a[3]=((C_word)li14),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1037,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp);
/* pathname.scm:196: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* a1030 in chicken.pathname#pathname-file in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_1031(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1031,c,av);}
/* pathname.scm:196: decompose-pathname */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a1036 in chicken.pathname#pathname-file in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_1037(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1037,c,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* chicken.pathname#pathname-extension in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_1040(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_1040,c,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1046,a[2]=t2,a[3]=((C_word)li17),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1052,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp);
/* pathname.scm:201: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* a1045 in chicken.pathname#pathname-extension in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_1046(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1046,c,av);}
/* pathname.scm:201: decompose-pathname */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a1051 in chicken.pathname#pathname-extension in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_1052(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1052,c,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* chicken.pathname#pathname-strip-directory in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_1055(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_1055,c,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1061,a[2]=t2,a[3]=((C_word)li20),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1067,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp);
/* pathname.scm:206: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* a1060 in chicken.pathname#pathname-strip-directory in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_1061(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1061,c,av);}
/* pathname.scm:206: decompose-pathname */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a1066 in chicken.pathname#pathname-strip-directory in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_1067(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1067,c,av);}
/* pathname.scm:207: make-pathname */
t5=*((C_word*)lf[12]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=C_SCHEME_FALSE;
av2[3]=t3;
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* chicken.pathname#pathname-strip-extension in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_1073(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_1073,c,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1079,a[2]=t2,a[3]=((C_word)li23),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1085,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp);
/* pathname.scm:211: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* a1078 in chicken.pathname#pathname-strip-extension in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_1079(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1079,c,av);}
/* pathname.scm:211: decompose-pathname */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a1084 in chicken.pathname#pathname-strip-extension in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_1085(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1085,c,av);}
/* pathname.scm:212: make-pathname */
t5=*((C_word*)lf[12]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* chicken.pathname#pathname-replace-directory in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_1091(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_1091,c,av);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1097,a[2]=t2,a[3]=((C_word)li26),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1103,a[2]=t3,a[3]=((C_word)li27),tmp=(C_word)a,a+=4,tmp);
/* pathname.scm:216: ##sys#call-with-values */{
C_word *av2=av;
av2[0]=0;
av2[1]=t1;
av2[2]=t4;
av2[3]=t5;
C_call_with_values(4,av2);}}

/* a1096 in chicken.pathname#pathname-replace-directory in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_1097(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1097,c,av);}
/* pathname.scm:216: decompose-pathname */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a1102 in chicken.pathname#pathname-replace-directory in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_1103(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1103,c,av);}
/* pathname.scm:217: make-pathname */
t5=*((C_word*)lf[12]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t3;
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* chicken.pathname#pathname-replace-file in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_1109(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_1109,c,av);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1115,a[2]=t2,a[3]=((C_word)li29),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1121,a[2]=t3,a[3]=((C_word)li30),tmp=(C_word)a,a+=4,tmp);
/* pathname.scm:221: ##sys#call-with-values */{
C_word *av2=av;
av2[0]=0;
av2[1]=t1;
av2[2]=t4;
av2[3]=t5;
C_call_with_values(4,av2);}}

/* a1114 in chicken.pathname#pathname-replace-file in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_1115(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1115,c,av);}
/* pathname.scm:221: decompose-pathname */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a1120 in chicken.pathname#pathname-replace-file in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_1121(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1121,c,av);}
/* pathname.scm:222: make-pathname */
t5=*((C_word*)lf[12]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=((C_word*)t0)[2];
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* chicken.pathname#pathname-replace-extension in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_1127(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_1127,c,av);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1133,a[2]=t2,a[3]=((C_word)li32),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1139,a[2]=t3,a[3]=((C_word)li33),tmp=(C_word)a,a+=4,tmp);
/* pathname.scm:226: ##sys#call-with-values */{
C_word *av2=av;
av2[0]=0;
av2[1]=t1;
av2[2]=t4;
av2[3]=t5;
C_call_with_values(4,av2);}}

/* a1132 in chicken.pathname#pathname-replace-extension in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_1133(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1133,c,av);}
/* pathname.scm:226: decompose-pathname */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a1138 in chicken.pathname#pathname-replace-extension in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_1139(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1139,c,av);}
/* pathname.scm:227: make-pathname */
t5=*((C_word*)lf[12]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* addpart in k1589 in k914 in k911 in k603 in k597 in k594 in k591 */
static C_word C_fcall f_1149(C_word *a,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;{}
if(C_truep(C_i_string_equal_p(lf[46],t1))){
return(t2);}
else{
if(C_truep(C_u_i_string_equal_p(lf[47],t1))){
t3=C_i_nullp(t2);
if(C_truep(t3)){
return((C_truep(t3)?C_a_i_cons(&a,2,t1,t2):C_i_cdr(t2)));}
else{
t4=C_i_car(t2);
t5=C_i_string_equal_p(lf[48],t4);
return((C_truep(t5)?C_a_i_cons(&a,2,t1,t2):C_i_cdr(t2)));}}
else{
return(C_a_i_cons(&a,2,t1,t2));}}}

/* chicken.pathname#normalize-pathname in k1589 in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_1187(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(22,c,5)))){
C_save_and_reclaim((void *)f_1187,c,av);}
a=C_alloc(22);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?((C_word*)t0)[2]:C_get_rest_arg(c,3,av,3,t0));
t5=C_eqp(t4,lf[44]);
t6=(C_truep(t5)?C_make_character(92):C_make_character(47));
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1196,a[2]=t4,a[3]=((C_word)li36),tmp=(C_word)a,a+=4,tmp);
t8=C_i_check_string_2(t2,lf[51]);
t9=C_block_size(t2);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_FALSE;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1219,a[2]=t9,a[3]=t11,a[4]=t6,a[5]=t13,a[6]=((C_word*)t0)[3],a[7]=t2,a[8]=t7,a[9]=t15,a[10]=t4,a[11]=((C_word)li39),tmp=(C_word)a,a+=12,tmp));
t17=((C_word*)t15)[1];
f_1219(t17,t1,C_fix(0),C_fix(0),C_SCHEME_END_OF_LIST);}

/* pds? in chicken.pathname#normalize-pathname in k1589 in k914 in k911 in k603 in k597 in k594 in k591 */
static C_word C_fcall f_1196(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_eqp(((C_word*)t0)[2],lf[44]);
return((C_truep(t2)?C_u_i_memq(t1,lf[50]):C_eqp(t1,C_make_character(47))));}

/* loop in chicken.pathname#normalize-pathname in k1589 in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_fcall f_1219(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,0,4)))){
C_save_and_reclaim_args((void *)trf_1219,5,t0,t1,t2,t3,t4);}
a=C_alloc(16);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1229,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=t2,a[8]=t3,tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_fixnum_greaterp(t2,t3))){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1345,a[2]=((C_word*)t0)[6],a[3]=t5,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* pathname.scm:254: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t7;
av2[2]=((C_word*)t0)[7];
av2[3]=t3;
av2[4]=t2;
tp(5,av2);}}
else{
t7=t6;
f_1229(t7,C_SCHEME_UNDEFINED);}}
else{
t6=(
/* pathname.scm:273: pds? */
  f_1196(((C_word*)t0)[8],C_i_string_ref(((C_word*)t0)[7],t2))
);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1354,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[9],a[5]=t1,a[6]=t5,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_not(((C_word*)((C_word*)t0)[3])[1]))){
t8=C_eqp(t2,t3);
if(C_truep(t8)){
t9=C_mutate(((C_word *)((C_word*)t0)[3])+1,lf[52]);
t10=t7;
f_1354(t10,t9);}
else{
t9=C_mutate(((C_word *)((C_word*)t0)[3])+1,lf[60]);
t10=t7;
f_1354(t10,t9);}}
else{
t8=t7;
f_1354(t8,C_SCHEME_UNDEFINED);}}
else{
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1406,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[9],a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[7],a[7]=t3,a[8]=t5,tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_nullp(((C_word*)t5)[1]))){
t8=C_i_string_ref(((C_word*)t0)[7],t2);
t9=t7;
f_1406(t9,(C_truep(C_u_i_char_equalp(t8,C_make_character(58)))?C_eqp(((C_word*)t0)[10],lf[44]):C_SCHEME_FALSE));}
else{
t8=t7;
f_1406(t8,C_SCHEME_FALSE);}}}}

/* k1227 in loop in chicken.pathname#normalize-pathname in k1589 in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_fcall f_1229(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_1229,2,t0,t1);}
a=C_alloc(9);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
t2=C_eqp(((C_word*)((C_word*)t0)[3])[1],lf[52]);
if(C_truep(t2)){
t3=C_a_i_string(&a,1,((C_word*)t0)[4]);
if(C_truep(((C_word*)((C_word*)t0)[5])[1])){
/* pathname.scm:257: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[26]+1);
av2[1]=((C_word*)t0)[6];
av2[2]=((C_word*)((C_word*)t0)[5])[1];
av2[3]=t3;
tp(4,av2);}}
else{
t4=((C_word*)t0)[6];{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
t3=lf[53];
if(C_truep(((C_word*)((C_word*)t0)[5])[1])){
/* pathname.scm:257: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[26]+1);
av2[1]=((C_word*)t0)[6];
av2[2]=((C_word*)((C_word*)t0)[5])[1];
av2[3]=t3;
tp(4,av2);}}
else{
t4=((C_word*)t0)[6];{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1253,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
/* pathname.scm:258: chicken.base#open-output-string */
t3=*((C_word*)lf[59]+1);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k1251 in k1227 in loop in chicken.pathname#normalize-pathname in k1589 in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_1253(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_1253,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1256,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* pathname.scm:259: ##sys#fast-reverse */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[58]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[58]+1);
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[8])[1];
tp(3,av2);}}

/* k1254 in k1251 in k1227 in loop in chicken.pathname#normalize-pathname in k1589 in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_1256(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_1256,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1259,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* pathname.scm:260: scheme#display */
t3=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_car(t1);
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k1257 in k1254 in k1251 in k1227 in loop in chicken.pathname#normalize-pathname in k1589 in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_1259(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_1259,c,av);}
a=C_alloc(21);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1260,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li37),tmp=(C_word)a,a+=5,tmp);
t3=C_u_i_cdr(((C_word*)t0)[4]);
t4=C_i_check_list_2(t3,lf[56]);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1274,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1309,a[2]=t7,a[3]=t2,a[4]=((C_word)li38),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_1309(t9,t5,t3);}

/* g385 in k1257 in k1254 in k1251 in k1227 in loop in chicken.pathname#normalize-pathname in k1589 in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_fcall f_1260(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_1260,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1264,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* pathname.scm:263: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[55]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[55]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[2];
tp(4,av2);}}

/* k1262 in g385 in k1257 in k1254 in k1251 in k1227 in loop in chicken.pathname#normalize-pathname in k1589 in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_1264(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1264,c,av);}
/* pathname.scm:264: scheme#display */
t2=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k1272 in k1257 in k1254 in k1251 in k1227 in loop in chicken.pathname#normalize-pathname in k1589 in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_1274(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_1274,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1277,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_eqp(((C_word*)t0)[7],((C_word*)t0)[8]);
if(C_truep(t3)){
/* pathname.scm:266: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[55]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[55]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[6];
tp(4,av2);}}
else{
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_1277(2,av2);}}}

/* k1275 in k1272 in k1257 in k1254 in k1251 in k1227 in loop in chicken.pathname#normalize-pathname in k1589 in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_1277(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_1277,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1280,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* pathname.scm:267: chicken.base#get-output-string */
t3=*((C_word*)lf[57]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k1278 in k1275 in k1272 in k1257 in k1254 in k1251 in k1227 in loop in chicken.pathname#normalize-pathname in k1589 in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_1280(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_1280,c,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1283,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=C_eqp(((C_word*)((C_word*)t0)[4])[1],lf[52]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1297,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t7=C_a_i_string(&a,1,((C_word*)t0)[5]);
/* pathname.scm:269: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[26]+1);
av2[1]=t6;
av2[2]=t7;
av2[3]=((C_word*)t3)[1];
tp(4,av2);}}
else{
t6=t4;
f_1283(t6,C_SCHEME_UNDEFINED);}}

/* k1281 in k1278 in k1275 in k1272 in k1257 in k1254 in k1251 in k1227 in loop in chicken.pathname#normalize-pathname in k1589 in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_fcall f_1283(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_1283,2,t0,t1);}
a=C_alloc(4);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1290,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* pathname.scm:271: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[26]+1);
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=((C_word*)((C_word*)t0)[3])[1];
tp(4,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t2;
av2[1]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k1288 in k1281 in k1278 in k1275 in k1272 in k1257 in k1254 in k1251 in k1227 in loop in chicken.pathname#normalize-pathname in k1589 in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_1290(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1290,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)((C_word*)t0)[2])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k1295 in k1278 in k1275 in k1272 in k1257 in k1254 in k1251 in k1227 in loop in chicken.pathname#normalize-pathname in k1589 in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_1297(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1297,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_1283(t3,t2);}

/* for-each-loop384 in k1257 in k1254 in k1251 in k1227 in loop in chicken.pathname#normalize-pathname in k1589 in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_fcall f_1309(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1309,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1319,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* pathname.scm:261: g385 */
t4=((C_word*)t0)[3];
f_1260(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k1317 in for-each-loop384 in k1257 in k1254 in k1251 in k1227 in loop in chicken.pathname#normalize-pathname in k1589 in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_1319(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1319,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_1309(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k1343 in loop in chicken.pathname#normalize-pathname in k1589 in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_1345(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_1345,c,av);}
a=C_alloc(9);
t2=(
/* pathname.scm:254: addpart */
  f_1149(C_a_i(&a,9),t1,((C_word*)((C_word*)t0)[3])[1])
);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[4];
f_1229(t4,t3);}

/* k1352 in loop in chicken.pathname#normalize-pathname in k1589 in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_fcall f_1354(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_1354,2,t0,t1);}
a=C_alloc(8);
t2=C_eqp(((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(t2)){
/* pathname.scm:277: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1219(t3,((C_word*)t0)[5],C_fixnum_plus(((C_word*)t0)[2],C_fix(1)),C_fixnum_plus(((C_word*)t0)[2],C_fix(1)),((C_word*)((C_word*)t0)[6])[1]);}
else{
t3=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t4=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1390,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=t4,tmp=(C_word)a,a+=8,tmp);
/* pathname.scm:280: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t5;
av2[2]=((C_word*)t0)[8];
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[2];
tp(5,av2);}}}

/* k1388 in k1352 in loop in chicken.pathname#normalize-pathname in k1589 in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_1390(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_1390,c,av);}
a=C_alloc(9);
t2=(
/* pathname.scm:280: addpart */
  f_1149(C_a_i(&a,9),t1,((C_word*)((C_word*)t0)[3])[1])
);
/* pathname.scm:278: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1219(t3,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t2);}

/* k1404 in loop in chicken.pathname#normalize-pathname in k1589 in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_fcall f_1406(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_1406,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1410,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* pathname.scm:284: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=C_fix(0);
av2[4]=C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
tp(5,av2);}}
else{
/* pathname.scm:286: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1219(t2,((C_word*)t0)[4],C_fixnum_plus(((C_word*)t0)[5],C_fix(1)),((C_word*)t0)[7],((C_word*)((C_word*)t0)[8])[1]);}}

/* k1408 in k1404 in loop in chicken.pathname#normalize-pathname in k1589 in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_1410(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1410,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* pathname.scm:285: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1219(t3,((C_word*)t0)[4],C_fixnum_plus(((C_word*)t0)[5],C_fix(1)),C_fixnum_plus(((C_word*)t0)[5],C_fix(1)),C_SCHEME_END_OF_LIST);}

/* chicken.pathname#split-directory in k1589 in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_fcall f_1460(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_1460,4,t1,t2,t3,t4);}
t5=C_i_check_string_2(t3,t2);
if(C_truep(*((C_word*)lf[10]+1))){
/* pathname.scm:294: chicken.string#string-split */
t6=*((C_word*)lf[62]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t1;
av2[2]=t3;
av2[3]=lf[63];
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
/* pathname.scm:294: chicken.string#string-split */
t6=*((C_word*)lf[62]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t1;
av2[2]=t3;
av2[3]=lf[64];
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}}

/* chicken.pathname#directory-null? in k1589 in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_1473(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_1473,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1481,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_listp(t2))){
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
f_1481(2,av2);}}
else{
/* pathname.scm:300: split-directory */
f_1460(t3,lf[68],t2,C_SCHEME_TRUE);}}

/* k1479 in chicken.pathname#directory-null? in k1589 in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_1481(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1481,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1483,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(
  f_1483(t1)
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* loop in k1479 in chicken.pathname#directory-null? in k1589 in k914 in k911 in k603 in k597 in k594 in k591 */
static C_word C_fcall f_1483(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
t2=C_i_nullp(t1);
if(C_truep(t2)){
return(t2);}
else{
t3=C_i_car(t1);
if(C_truep((C_truep(C_i_equalp(t3,lf[66]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[67]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t5=C_u_i_cdr(t1);
t1=t5;
goto loop;}
else{
return(C_SCHEME_FALSE);}}}

/* chicken.pathname#decompose-directory in k1589 in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_1513(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_1513,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1556,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* pathname.scm:326: split-directory */
f_1460(t3,lf[70],t2,C_SCHEME_FALSE);}

/* k1550 in k1567 in k1560 in k1557 in k1554 in chicken.pathname#decompose-directory in k1589 in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_1552(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_1552,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* pathname.scm:329: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
av2[4]=t2;
C_values(5,av2);}}

/* k1554 in chicken.pathname#decompose-directory in k1589 in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_1556(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1556,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1559,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* pathname.scm:327: absolute-pathname-root */
{C_proc tp=(C_proc)C_fast_retrieve_proc(lf[2]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=lf[2];
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* k1557 in k1554 in chicken.pathname#decompose-directory in k1589 in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_1559(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1559,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1562,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* pathname.scm:328: root-origin */
{C_proc tp=(C_proc)C_fast_retrieve_proc(lf[3]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=lf[3];
av2[1]=t2;
av2[2]=t1;
tp(3,av2);}}

/* k1560 in k1557 in k1554 in chicken.pathname#decompose-directory in k1589 in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_1562(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1562,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1569,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* pathname.scm:329: root-directory */
{C_proc tp=(C_proc)C_fast_retrieve_proc(lf[4]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=lf[4];
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* k1567 in k1560 in k1557 in k1554 in chicken.pathname#decompose-directory in k1589 in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_1569(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1569,c,av);}
a=C_alloc(6);
t2=C_i_nullp(((C_word*)t0)[2]);
t3=C_i_not(t2);
t4=(C_truep(t3)?((C_word*)t0)[2]:C_SCHEME_FALSE);
if(C_truep(C_i_not(((C_word*)t0)[3]))){
/* pathname.scm:329: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=t4;
C_values(5,av2);}}
else{
t5=C_i_car(t4);
t6=C_block_size(((C_word*)t0)[3]);
if(C_truep(C_i_not(C_substring_compare(((C_word*)t0)[3],t5,C_fix(0),C_fix(0),t6)))){
/* pathname.scm:329: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=t4;
C_values(5,av2);}}
else{
t7=C_u_i_cdr(t4);
t8=C_block_size(t5);
t9=C_eqp(t6,t8);
if(C_truep(t9)){
/* pathname.scm:329: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=t7;
C_values(5,av2);}}
else{
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1552,a[2]=t7,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* pathname.scm:325: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t10;
av2[2]=t5;
av2[3]=t6;
av2[4]=t8;
tp(5,av2);}}}}}

/* k1589 in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_1591(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,5)))){
C_save_and_reclaim((void *)f_1591,c,av);}
a=C_alloc(17);
t2=C_eqp(t1,lf[43]);
t3=(C_truep(t2)?lf[44]:lf[45]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1149,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp);
t5=C_mutate((C_word*)lf[49]+1 /* (set! chicken.pathname#normalize-pathname ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1187,a[2]=t3,a[3]=t4,a[4]=((C_word)li40),tmp=(C_word)a,a+=5,tmp));
t6=C_mutate(&lf[61] /* (set! chicken.pathname#split-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1460,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[65]+1 /* (set! chicken.pathname#directory-null? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1473,a[2]=((C_word)li43),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[69]+1 /* (set! chicken.pathname#decompose-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1513,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp));
t9=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t9;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}

/* k1592 in k597 in k594 in k591 */
static void C_ccall f_1594(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_1594,c,av);}
a=C_alloc(10);
t2=C_mutate(&lf[2] /* (set! chicken.pathname#absolute-pathname-root ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1596,a[2]=t1,a[3]=((C_word)li45),tmp=(C_word)a,a+=4,tmp));
t3=C_mutate(&lf[3] /* (set! chicken.pathname#root-origin ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1602,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate(&lf[4] /* (set! chicken.pathname#root-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1611,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t0)[2];
f_605(t5,t4);}

/* chicken.pathname#absolute-pathname-root in k1592 in k597 in k594 in k591 */
static void C_ccall f_1596(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1596,c,av);}
/* pathname.scm:72: chicken.irregex#irregex-match */
t3=*((C_word*)lf[73]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* chicken.pathname#root-origin in k1592 in k597 in k594 in k591 */
static void C_ccall f_1602(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1602,c,av);}
if(C_truep(t2)){
/* pathname.scm:73: chicken.irregex#irregex-match-substring */
t3=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* chicken.pathname#root-directory in k1592 in k597 in k594 in k591 */
static void C_ccall f_1611(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1611,c,av);}
if(C_truep(t2)){
/* pathname.scm:74: chicken.irregex#irregex-match-substring */
t3=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(2);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k1619 in k597 in k594 in k591 */
static void C_ccall f_1621(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_1621,c,av);}
a=C_alloc(10);
t2=C_mutate(&lf[2] /* (set! chicken.pathname#absolute-pathname-root ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1623,a[2]=t1,a[3]=((C_word)li48),tmp=(C_word)a,a+=4,tmp));
t3=C_mutate(&lf[3] /* (set! chicken.pathname#root-origin ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1629,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate(&lf[4] /* (set! chicken.pathname#root-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1632,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t0)[2];
f_605(t5,t4);}

/* chicken.pathname#absolute-pathname-root in k1619 in k597 in k594 in k591 */
static void C_ccall f_1623(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1623,c,av);}
/* pathname.scm:76: chicken.irregex#irregex-match */
t3=*((C_word*)lf[73]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* chicken.pathname#root-origin in k1619 in k597 in k594 in k591 */
static void C_ccall f_1629(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1629,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.pathname#root-directory in k1619 in k597 in k594 in k591 */
static void C_ccall f_1632(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1632,c,av);}
if(C_truep(t2)){
/* pathname.scm:78: chicken.irregex#irregex-match-substring */
t3=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k591 */
static void C_ccall f_593(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_593,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_596,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_irregex_toplevel(2,av2);}}

/* k594 in k591 */
static void C_ccall f_596(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_596,c,av);}
a=C_alloc(19);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_599,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t4;
C_library_toplevel(2,av2);}}

/* k597 in k594 in k591 */
static void C_ccall f_599(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_599,c,av);}
a=C_alloc(6);
t2=lf[2] /* chicken.pathname#absolute-pathname-root */ =C_SCHEME_UNDEFINED;;
t3=lf[3] /* chicken.pathname#root-origin */ =C_SCHEME_UNDEFINED;;
t4=lf[4] /* chicken.pathname#root-directory */ =C_SCHEME_UNDEFINED;;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_605,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(*((C_word*)lf[10]+1))){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1594,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* pathname.scm:71: chicken.irregex#irregex */
t7=*((C_word*)lf[72]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[74];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1621,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* pathname.scm:75: chicken.irregex#irregex */
t7=*((C_word*)lf[72]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[75];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}

/* k603 in k597 in k594 in k591 */
static void C_fcall f_605(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(38,0,6)))){
C_save_and_reclaim_args((void *)trf_605,2,t0,t1);}
a=C_alloc(38);
t2=C_mutate((C_word*)lf[5]+1 /* (set! chicken.pathname#absolute-pathname? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_607,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate(&lf[8] /* (set! chicken.pathname#chop-pds ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_620,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t4=C_set_block_item(lf[12] /* chicken.pathname#make-pathname */,0,C_SCHEME_UNDEFINED);
t5=C_set_block_item(lf[13] /* chicken.pathname#make-absolute-pathname */,0,C_SCHEME_UNDEFINED);
t6=(C_truep(*((C_word*)lf[10]+1))?lf[14]:lf[15]);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_688,a[2]=t6,a[3]=((C_word)li4),tmp=(C_word)a,a+=4,tmp));
t14=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_739,a[2]=t8,a[3]=((C_word)li5),tmp=(C_word)a,a+=4,tmp));
t15=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_770,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[12]+1 /* (set! chicken.pathname#make-pathname ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_858,a[2]=t12,a[3]=t10,a[4]=((C_word)li7),tmp=(C_word)a,a+=5,tmp));
t17=C_mutate((C_word*)lf[13]+1 /* (set! chicken.pathname#make-absolute-pathname ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_877,a[2]=t12,a[3]=t6,a[4]=t10,a[5]=((C_word)li8),tmp=(C_word)a,a+=6,tmp));
t18=(C_truep(*((C_word*)lf[10]+1))?lf[27]:lf[28]);
t19=(C_truep(*((C_word*)lf[10]+1))?lf[29]:lf[30]);
t20=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_913,a[2]=((C_word*)t0)[2],a[3]=t19,tmp=(C_word)a,a+=4,tmp);
/* pathname.scm:162: chicken.irregex#irregex */
t21=*((C_word*)lf[72]+1);{
C_word av2[3];
av2[0]=t21;
av2[1]=t20;
av2[2]=t18;
((C_proc)(void*)(*((C_word*)t21+1)))(3,av2);}}

/* chicken.pathname#absolute-pathname? in k603 in k597 in k594 in k591 */
static void C_ccall f_607(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_607,c,av);}
a=C_alloc(3);
t3=C_i_check_string_2(t2,lf[6]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_618,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* pathname.scm:82: absolute-pathname-root */
{C_proc tp=(C_proc)C_fast_retrieve_proc(lf[2]);
C_word *av2=av;
av2[0]=lf[2];
av2[1]=t4;
av2[2]=t2;
tp(3,av2);}}

/* k616 in chicken.pathname#absolute-pathname? in k603 in k597 in k594 in k591 */
static void C_ccall f_618(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_618,c,av);}
/* pathname.scm:82: chicken.irregex#irregex-match-data? */
t2=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* chicken.pathname#chop-pds in k603 in k597 in k594 in k591 */
static void C_fcall f_620(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_620,2,t1,t2);}
a=C_alloc(7);
if(C_truep(t2)){
t3=C_block_size(t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_633,a[2]=t5,a[3]=t2,a[4]=((C_word)li1),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_633(t7,t1,t3);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* lp in chicken.pathname#chop-pds in k603 in k597 in k594 in k591 */
static void C_fcall f_633(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_633,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_640,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(t2,C_fix(1)))){
t4=C_fixnum_difference(t2,C_fix(1));
t5=C_subchar(((C_word*)t0)[3],t4);
t6=t3;
f_640(t6,(C_truep(*((C_word*)lf[10]+1))?C_u_i_memq(t5,lf[11]):C_eqp(C_make_character(47),t5)));}
else{
t4=t3;
f_640(t4,C_SCHEME_FALSE);}}

/* k638 in lp in chicken.pathname#chop-pds in k603 in k597 in k594 in k591 */
static void C_fcall f_640(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_640,2,t0,t1);}
if(C_truep(t1)){
/* pathname.scm:94: lp */
t2=((C_word*)((C_word*)t0)[2])[1];
f_633(t2,((C_word*)t0)[3],C_fixnum_difference(((C_word*)t0)[4],C_fix(1)));}
else{
t2=C_block_size(((C_word*)t0)[5]);
if(C_truep(C_fixnum_lessp(((C_word*)t0)[4],t2))){
/* pathname.scm:96: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[9]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(0);
av2[4]=((C_word*)t0)[4];
tp(5,av2);}}
else{
t3=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t3;
av2[1]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}}

/* conc-dirs in k603 in k597 in k594 in k591 */
static void C_fcall f_688(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_688,3,t0,t1,t2);}
a=C_alloc(7);
t3=C_i_check_list_2(t2,lf[16]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_697,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word)li3),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_697(t7,t1,t2);}

/* loop in conc-dirs in k603 in k597 in k594 in k591 */
static void C_fcall f_697(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_697,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=lf[17];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=C_i_string_length(t3);
t5=C_eqp(t4,C_fix(0));
if(C_truep(t5)){
/* pathname.scm:111: loop */
t8=t1;
t9=C_u_i_cdr(t2);
t1=t8;
t2=t9;
goto loop;}
else{
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_725,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* pathname.scm:113: chop-pds */
f_620(t6,C_u_i_car(t2));}}}

/* k723 in loop in conc-dirs in k603 in k597 in k594 in k591 */
static void C_ccall f_725(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_725,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_729,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* pathname.scm:115: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_697(t3,t2,C_u_i_cdr(((C_word*)t0)[5]));}

/* k727 in k723 in loop in conc-dirs in k603 in k597 in k594 in k591 */
static void C_ccall f_729(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_729,c,av);}
/* pathname.scm:112: scheme#string-append */
t2=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* canonicalize-dirs in k603 in k597 in k594 in k591 */
static void C_fcall f_739(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_739,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_i_not(t2);
t4=(C_truep(t3)?t3:C_i_nullp(t2));
if(C_truep(t4)){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=lf[19];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
if(C_truep(C_i_stringp(t2))){
t5=C_a_i_list1(&a,1,t2);
/* pathname.scm:119: conc-dirs */
t6=((C_word*)((C_word*)t0)[2])[1];
f_688(t6,t1,t5);}
else{
/* pathname.scm:120: conc-dirs */
t5=((C_word*)((C_word*)t0)[2])[1];
f_688(t5,t1,t2);}}}

/* _make-pathname in k603 in k597 in k594 in k591 */
static void C_fcall f_770(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_770,5,t1,t2,t3,t4,t5);}
a=C_alloc(9);
t6=(C_truep(t5)?t5:lf[20]);
t7=(C_truep(t4)?t4:lf[21]);
t8=C_i_check_string_2(t3,t2);
t9=C_i_check_string_2(t7,t2);
t10=C_i_check_string_2(t6,t2);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_793,a[2]=t6,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_818,a[2]=t11,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t13=C_block_size(t3);
if(C_truep(C_fixnum_greater_or_equal_p(t13,C_fix(1)))){
t14=C_block_size(t7);
if(C_truep(C_fixnum_greater_or_equal_p(t14,C_fix(1)))){
t15=C_subchar(t7,C_fix(0));
t16=t12;
f_818(t16,(C_truep(*((C_word*)lf[10]+1))?C_u_i_memq(t15,lf[24]):C_eqp(C_make_character(47),t15)));}
else{
t15=t12;
f_818(t15,C_SCHEME_FALSE);}}
else{
t14=t12;
f_818(t14,C_SCHEME_FALSE);}}

/* k791 in _make-pathname in k603 in k597 in k594 in k591 */
static void C_ccall f_793(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_793,c,av);}
t2=C_block_size(((C_word*)t0)[2]);
t3=C_fixnum_greaterp(t2,C_fix(0));
t4=(C_truep(t3)?C_i_not(C_i_char_equalp(C_subchar(((C_word*)t0)[2],C_fix(0)),C_make_character(46))):C_SCHEME_FALSE);
if(C_truep(t4)){
/* pathname.scm:128: scheme#string-append */
t5=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t1;
av2[4]=lf[22];
av2[5]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}
else{
/* pathname.scm:128: scheme#string-append */
t5=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t1;
av2[4]=lf[23];
av2[5]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}}

/* k816 in _make-pathname in k603 in k597 in k594 in k591 */
static void C_fcall f_818(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_818,2,t0,t1);}
if(C_truep(t1)){
/* pathname.scm:133: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[9]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_fix(1);
av2[4]=C_block_size(((C_word*)t0)[3]);
tp(5,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
f_793(2,av2);}}}

/* chicken.pathname#make-pathname in k603 in k597 in k594 in k591 */
static void C_ccall f_858(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_858,c,av);}
a=C_alloc(6);
t4=C_rest_nullp(c,4);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,4,t0));
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_869,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* pathname.scm:143: canonicalize-dirs */
t7=((C_word*)((C_word*)t0)[3])[1];
f_739(t7,t6,t2);}

/* k867 in chicken.pathname#make-pathname in k603 in k597 in k594 in k591 */
static void C_ccall f_869(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_869,c,av);}
/* pathname.scm:143: _make-pathname */
f_770(((C_word*)t0)[3],lf[16],t1,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* chicken.pathname#make-absolute-pathname in k603 in k597 in k594 in k591 */
static void C_ccall f_877(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_877,c,av);}
a=C_alloc(7);
t4=C_rest_nullp(c,4);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,4,t0));
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_888,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t5,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* pathname.scm:149: canonicalize-dirs */
t7=((C_word*)((C_word*)t0)[4])[1];
f_739(t7,t6,t2);}

/* k886 in chicken.pathname#make-absolute-pathname in k603 in k597 in k594 in k591 */
static void C_ccall f_888(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_888,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_891,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_894,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t2,a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
/* pathname.scm:150: absolute-pathname? */
t4=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k889 in k886 in chicken.pathname#make-absolute-pathname in k603 in k597 in k594 in k591 */
static void C_ccall f_891(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_891,c,av);}
/* pathname.scm:147: _make-pathname */
f_770(((C_word*)t0)[3],lf[25],t1,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k892 in k886 in chicken.pathname#make-absolute-pathname in k603 in k597 in k594 in k591 */
static void C_ccall f_894(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_894,c,av);}
if(C_truep(t1)){
/* pathname.scm:147: _make-pathname */
f_770(((C_word*)t0)[3],lf[25],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);}
else{
/* pathname.scm:152: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[26]+1);
av2[1]=((C_word*)t0)[7];
av2[2]=((C_word*)t0)[8];
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}}

/* k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_913(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_913,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_916,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* pathname.scm:163: chicken.irregex#irregex */
t3=*((C_word*)lf[72]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_916(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,c,4)))){
C_save_and_reclaim((void *)f_916,c,av);}
a=C_alloc(36);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_917,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp);
t3=C_mutate((C_word*)lf[31]+1 /* (set! chicken.pathname#decompose-pathname ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_938,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word)li10),tmp=(C_word)a,a+=6,tmp));
t4=C_mutate((C_word*)lf[35]+1 /* (set! chicken.pathname#pathname-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1010,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[36]+1 /* (set! chicken.pathname#pathname-file ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1025,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[37]+1 /* (set! chicken.pathname#pathname-extension ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1040,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[38]+1 /* (set! chicken.pathname#pathname-strip-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1055,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[39]+1 /* (set! chicken.pathname#pathname-strip-extension ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1073,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[40]+1 /* (set! chicken.pathname#pathname-replace-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1091,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[41]+1 /* (set! chicken.pathname#pathname-replace-file ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1109,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[42]+1 /* (set! chicken.pathname#pathname-replace-extension ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1127,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1591,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* pathname.scm:232: chicken.platform#software-version */
t13=*((C_word*)lf[71]+1);{
C_word *av2=av;
av2[0]=t13;
av2[1]=t12;
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}

/* strip-pds in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_fcall f_917(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_917,2,t1,t2);}
a=C_alloc(4);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_924,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* pathname.scm:167: chop-pds */
f_620(t3,t2);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k922 in strip-pds in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_924(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_924,c,av);}
t2=C_block_size(t1);
if(C_truep(C_fixnum_greaterp(t2,C_fix(0)))){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* pathname.scm:170: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[9]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_fix(0);
av2[4]=C_fix(1);
tp(5,av2);}}}

/* chicken.pathname#decompose-pathname in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_938(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_938,c,av);}
a=C_alloc(6);
t3=C_i_check_string_2(t2,lf[32]);
t4=C_block_size(t2);
t5=C_eqp(C_fix(0),t4);
if(C_truep(t5)){
/* pathname.scm:174: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t1;
av2[2]=C_SCHEME_FALSE;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
C_values(5,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_954,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* pathname.scm:175: chicken.irregex#irregex-search */
t7=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}

/* k952 in chicken.pathname#decompose-pathname in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_954(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_954,c,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_964,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_976,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* pathname.scm:178: chicken.irregex#irregex-match-substring */
t4=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t1;
av2[3]=C_fix(1);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_979,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* pathname.scm:181: chicken.irregex#irregex-search */
t3=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k962 in k952 in chicken.pathname#decompose-pathname in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_964(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_964,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_968,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* pathname.scm:179: chicken.irregex#irregex-match-substring */
t3=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=C_fix(2);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k966 in k962 in k952 in chicken.pathname#decompose-pathname in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_968(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_968,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_972,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* pathname.scm:180: chicken.irregex#irregex-match-substring */
t3=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(4);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k970 in k966 in k962 in k952 in chicken.pathname#decompose-pathname in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_972(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_972,c,av);}
/* pathname.scm:177: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=t1;
C_values(5,av2);}}

/* k974 in k952 in chicken.pathname#decompose-pathname in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_976(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_976,c,av);}
/* pathname.scm:178: strip-pds */
f_917(((C_word*)t0)[3],t1);}

/* k977 in k952 in chicken.pathname#decompose-pathname in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_979(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_979,c,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_989,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_997,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* pathname.scm:184: chicken.irregex#irregex-match-substring */
t4=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t1;
av2[3]=C_fix(1);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1004,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* pathname.scm:187: strip-pds */
f_917(t2,((C_word*)t0)[4]);}}

/* k987 in k977 in k952 in chicken.pathname#decompose-pathname in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_989(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_989,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_993,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* pathname.scm:185: chicken.irregex#irregex-match-substring */
t3=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=C_fix(2);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k991 in k987 in k977 in k952 in chicken.pathname#decompose-pathname in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_993(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_993,c,av);}
/* pathname.scm:183: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=C_SCHEME_FALSE;
C_values(5,av2);}}

/* k995 in k977 in k952 in chicken.pathname#decompose-pathname in k914 in k911 in k603 in k597 in k594 in k591 */
static void C_ccall f_997(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_997,c,av);}
/* pathname.scm:184: strip-pds */
f_917(((C_word*)t0)[3],t1);}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_pathname_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("pathname"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_pathname_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(340))){
C_save(t1);
C_rereclaim2(340*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,76);
lf[0]=C_h_intern(&lf[0],8, C_text("pathname"));
lf[1]=C_h_intern(&lf[1],17, C_text("chicken.pathname#"));
lf[5]=C_h_intern(&lf[5],35, C_text("chicken.pathname#absolute-pathname\077"));
lf[6]=C_h_intern(&lf[6],18, C_text("absolute-pathname\077"));
lf[7]=C_h_intern(&lf[7],35, C_text("chicken.irregex#irregex-match-data\077"));
lf[9]=C_h_intern(&lf[9],15, C_text("##sys#substring"));
lf[10]=C_h_intern(&lf[10],22, C_text("##sys#windows-platform"));
lf[11]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\012\000\000\134\376\003\000\000\002\376\377\012\000\000/\376\377\016"));
lf[12]=C_h_intern(&lf[12],30, C_text("chicken.pathname#make-pathname"));
lf[13]=C_h_intern(&lf[13],39, C_text("chicken.pathname#make-absolute-pathname"));
lf[14]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\134"));
lf[15]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001/"));
lf[16]=C_h_intern(&lf[16],13, C_text("make-pathname"));
lf[17]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[18]=C_h_intern(&lf[18],20, C_text("scheme#string-append"));
lf[19]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[20]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[21]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[22]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001."));
lf[23]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[24]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\012\000\000\134\376\003\000\000\002\376\377\012\000\000/\376\377\016"));
lf[25]=C_h_intern(&lf[25],22, C_text("make-absolute-pathname"));
lf[26]=C_h_intern(&lf[26],19, C_text("##sys#string-append"));
lf[27]=C_decode_literal(C_heaptop,C_text("\376B\000\000&^(.\052[\134/\134\134])\077([^\134/\134\134]+)(\134.([^\134/\134\134.]+))$"));
lf[28]=C_decode_literal(C_heaptop,C_text("\376B\000\000\033^(.\052/)\077([^/]+)(\134.([^/.]+))$"));
lf[29]=C_decode_literal(C_heaptop,C_text("\376B\000\000\034^(.\052[\134/\134\134])\077((\134.)\077[^\134/\134\134]+)$"));
lf[30]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024^(.\052/)\077((\134.)\077[^/]+)$"));
lf[31]=C_h_intern(&lf[31],35, C_text("chicken.pathname#decompose-pathname"));
lf[32]=C_h_intern(&lf[32],18, C_text("decompose-pathname"));
lf[33]=C_h_intern(&lf[33],39, C_text("chicken.irregex#irregex-match-substring"));
lf[34]=C_h_intern(&lf[34],30, C_text("chicken.irregex#irregex-search"));
lf[35]=C_h_intern(&lf[35],35, C_text("chicken.pathname#pathname-directory"));
lf[36]=C_h_intern(&lf[36],30, C_text("chicken.pathname#pathname-file"));
lf[37]=C_h_intern(&lf[37],35, C_text("chicken.pathname#pathname-extension"));
lf[38]=C_h_intern(&lf[38],41, C_text("chicken.pathname#pathname-strip-directory"));
lf[39]=C_h_intern(&lf[39],41, C_text("chicken.pathname#pathname-strip-extension"));
lf[40]=C_h_intern(&lf[40],43, C_text("chicken.pathname#pathname-replace-directory"));
lf[41]=C_h_intern(&lf[41],38, C_text("chicken.pathname#pathname-replace-file"));
lf[42]=C_h_intern(&lf[42],43, C_text("chicken.pathname#pathname-replace-extension"));
lf[43]=C_h_intern(&lf[43],7, C_text("mingw32"));
lf[44]=C_h_intern(&lf[44],7, C_text("windows"));
lf[45]=C_h_intern(&lf[45],4, C_text("unix"));
lf[46]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001."));
lf[47]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002.."));
lf[48]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002.."));
lf[49]=C_h_intern(&lf[49],35, C_text("chicken.pathname#normalize-pathname"));
lf[50]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\012\000\000/\376\003\000\000\002\376\377\012\000\000\134\376\377\016"));
lf[51]=C_h_intern(&lf[51],18, C_text("normalize-pathname"));
lf[52]=C_h_intern(&lf[52],3, C_text("abs"));
lf[53]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001."));
lf[54]=C_h_intern(&lf[54],14, C_text("scheme#display"));
lf[55]=C_h_intern(&lf[55],18, C_text("##sys#write-char-0"));
lf[56]=C_h_intern(&lf[56],8, C_text("for-each"));
lf[57]=C_h_intern(&lf[57],30, C_text("chicken.base#get-output-string"));
lf[58]=C_h_intern(&lf[58],18, C_text("##sys#fast-reverse"));
lf[59]=C_h_intern(&lf[59],31, C_text("chicken.base#open-output-string"));
lf[60]=C_h_intern(&lf[60],3, C_text("rel"));
lf[62]=C_h_intern(&lf[62],27, C_text("chicken.string#string-split"));
lf[63]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002/\134"));
lf[64]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001/"));
lf[65]=C_h_intern(&lf[65],32, C_text("chicken.pathname#directory-null\077"));
lf[66]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[67]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001."));
lf[68]=C_h_intern(&lf[68],15, C_text("directory-null\077"));
lf[69]=C_h_intern(&lf[69],36, C_text("chicken.pathname#decompose-directory"));
lf[70]=C_h_intern(&lf[70],19, C_text("decompose-directory"));
lf[71]=C_h_intern(&lf[71],33, C_text("chicken.platform#software-version"));
lf[72]=C_h_intern(&lf[72],23, C_text("chicken.irregex#irregex"));
lf[73]=C_h_intern(&lf[73],29, C_text("chicken.irregex#irregex-match"));
lf[74]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026([A-Za-z]:)\077([\134/\134\134]).\052"));
lf[75]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005(/).\052"));
C_register_lf2(lf,76,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_593,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[106] = {
{C_text("f_1004:pathname_2escm"),(void*)f_1004},
{C_text("f_1010:pathname_2escm"),(void*)f_1010},
{C_text("f_1016:pathname_2escm"),(void*)f_1016},
{C_text("f_1022:pathname_2escm"),(void*)f_1022},
{C_text("f_1025:pathname_2escm"),(void*)f_1025},
{C_text("f_1031:pathname_2escm"),(void*)f_1031},
{C_text("f_1037:pathname_2escm"),(void*)f_1037},
{C_text("f_1040:pathname_2escm"),(void*)f_1040},
{C_text("f_1046:pathname_2escm"),(void*)f_1046},
{C_text("f_1052:pathname_2escm"),(void*)f_1052},
{C_text("f_1055:pathname_2escm"),(void*)f_1055},
{C_text("f_1061:pathname_2escm"),(void*)f_1061},
{C_text("f_1067:pathname_2escm"),(void*)f_1067},
{C_text("f_1073:pathname_2escm"),(void*)f_1073},
{C_text("f_1079:pathname_2escm"),(void*)f_1079},
{C_text("f_1085:pathname_2escm"),(void*)f_1085},
{C_text("f_1091:pathname_2escm"),(void*)f_1091},
{C_text("f_1097:pathname_2escm"),(void*)f_1097},
{C_text("f_1103:pathname_2escm"),(void*)f_1103},
{C_text("f_1109:pathname_2escm"),(void*)f_1109},
{C_text("f_1115:pathname_2escm"),(void*)f_1115},
{C_text("f_1121:pathname_2escm"),(void*)f_1121},
{C_text("f_1127:pathname_2escm"),(void*)f_1127},
{C_text("f_1133:pathname_2escm"),(void*)f_1133},
{C_text("f_1139:pathname_2escm"),(void*)f_1139},
{C_text("f_1149:pathname_2escm"),(void*)f_1149},
{C_text("f_1187:pathname_2escm"),(void*)f_1187},
{C_text("f_1196:pathname_2escm"),(void*)f_1196},
{C_text("f_1219:pathname_2escm"),(void*)f_1219},
{C_text("f_1229:pathname_2escm"),(void*)f_1229},
{C_text("f_1253:pathname_2escm"),(void*)f_1253},
{C_text("f_1256:pathname_2escm"),(void*)f_1256},
{C_text("f_1259:pathname_2escm"),(void*)f_1259},
{C_text("f_1260:pathname_2escm"),(void*)f_1260},
{C_text("f_1264:pathname_2escm"),(void*)f_1264},
{C_text("f_1274:pathname_2escm"),(void*)f_1274},
{C_text("f_1277:pathname_2escm"),(void*)f_1277},
{C_text("f_1280:pathname_2escm"),(void*)f_1280},
{C_text("f_1283:pathname_2escm"),(void*)f_1283},
{C_text("f_1290:pathname_2escm"),(void*)f_1290},
{C_text("f_1297:pathname_2escm"),(void*)f_1297},
{C_text("f_1309:pathname_2escm"),(void*)f_1309},
{C_text("f_1319:pathname_2escm"),(void*)f_1319},
{C_text("f_1345:pathname_2escm"),(void*)f_1345},
{C_text("f_1354:pathname_2escm"),(void*)f_1354},
{C_text("f_1390:pathname_2escm"),(void*)f_1390},
{C_text("f_1406:pathname_2escm"),(void*)f_1406},
{C_text("f_1410:pathname_2escm"),(void*)f_1410},
{C_text("f_1460:pathname_2escm"),(void*)f_1460},
{C_text("f_1473:pathname_2escm"),(void*)f_1473},
{C_text("f_1481:pathname_2escm"),(void*)f_1481},
{C_text("f_1483:pathname_2escm"),(void*)f_1483},
{C_text("f_1513:pathname_2escm"),(void*)f_1513},
{C_text("f_1552:pathname_2escm"),(void*)f_1552},
{C_text("f_1556:pathname_2escm"),(void*)f_1556},
{C_text("f_1559:pathname_2escm"),(void*)f_1559},
{C_text("f_1562:pathname_2escm"),(void*)f_1562},
{C_text("f_1569:pathname_2escm"),(void*)f_1569},
{C_text("f_1591:pathname_2escm"),(void*)f_1591},
{C_text("f_1594:pathname_2escm"),(void*)f_1594},
{C_text("f_1596:pathname_2escm"),(void*)f_1596},
{C_text("f_1602:pathname_2escm"),(void*)f_1602},
{C_text("f_1611:pathname_2escm"),(void*)f_1611},
{C_text("f_1621:pathname_2escm"),(void*)f_1621},
{C_text("f_1623:pathname_2escm"),(void*)f_1623},
{C_text("f_1629:pathname_2escm"),(void*)f_1629},
{C_text("f_1632:pathname_2escm"),(void*)f_1632},
{C_text("f_593:pathname_2escm"),(void*)f_593},
{C_text("f_596:pathname_2escm"),(void*)f_596},
{C_text("f_599:pathname_2escm"),(void*)f_599},
{C_text("f_605:pathname_2escm"),(void*)f_605},
{C_text("f_607:pathname_2escm"),(void*)f_607},
{C_text("f_618:pathname_2escm"),(void*)f_618},
{C_text("f_620:pathname_2escm"),(void*)f_620},
{C_text("f_633:pathname_2escm"),(void*)f_633},
{C_text("f_640:pathname_2escm"),(void*)f_640},
{C_text("f_688:pathname_2escm"),(void*)f_688},
{C_text("f_697:pathname_2escm"),(void*)f_697},
{C_text("f_725:pathname_2escm"),(void*)f_725},
{C_text("f_729:pathname_2escm"),(void*)f_729},
{C_text("f_739:pathname_2escm"),(void*)f_739},
{C_text("f_770:pathname_2escm"),(void*)f_770},
{C_text("f_793:pathname_2escm"),(void*)f_793},
{C_text("f_818:pathname_2escm"),(void*)f_818},
{C_text("f_858:pathname_2escm"),(void*)f_858},
{C_text("f_869:pathname_2escm"),(void*)f_869},
{C_text("f_877:pathname_2escm"),(void*)f_877},
{C_text("f_888:pathname_2escm"),(void*)f_888},
{C_text("f_891:pathname_2escm"),(void*)f_891},
{C_text("f_894:pathname_2escm"),(void*)f_894},
{C_text("f_913:pathname_2escm"),(void*)f_913},
{C_text("f_916:pathname_2escm"),(void*)f_916},
{C_text("f_917:pathname_2escm"),(void*)f_917},
{C_text("f_924:pathname_2escm"),(void*)f_924},
{C_text("f_938:pathname_2escm"),(void*)f_938},
{C_text("f_954:pathname_2escm"),(void*)f_954},
{C_text("f_964:pathname_2escm"),(void*)f_964},
{C_text("f_968:pathname_2escm"),(void*)f_968},
{C_text("f_972:pathname_2escm"),(void*)f_972},
{C_text("f_976:pathname_2escm"),(void*)f_976},
{C_text("f_979:pathname_2escm"),(void*)f_979},
{C_text("f_989:pathname_2escm"),(void*)f_989},
{C_text("f_993:pathname_2escm"),(void*)f_993},
{C_text("f_997:pathname_2escm"),(void*)f_997},
{C_text("toplevel:pathname_2escm"),(void*)C_pathname_toplevel},
{NULL,NULL}};
#endif

static C_PTABLE_ENTRY *create_ptable(void){
#ifdef C_ENABLE_PTABLES
return ptable;
#else
return NULL;
#endif
}

/*
o|hiding unexported module binding: chicken.pathname#d 
o|hiding unexported module binding: chicken.pathname#define-alias 
o|hiding unexported module binding: chicken.pathname#absolute-pathname-root 
o|hiding unexported module binding: chicken.pathname#root-origin 
o|hiding unexported module binding: chicken.pathname#root-directory 
o|hiding unexported module binding: chicken.pathname#chop-pds 
o|hiding unexported module binding: chicken.pathname#split-directory 
S|applied compiler syntax:
S|  scheme#for-each		1
o|eliminated procedure checks: 10 
o|specializations:
o|  1 (scheme#char=? char char)
o|  1 (scheme#string-ref string fixnum)
o|  1 (scheme#string=? string string)
o|  1 (scheme#car pair)
o|  5 (scheme#cdr pair)
o|  1 (scheme#zero? integer)
o|  3 (scheme#memq * list)
(o e)|safe calls: 158 
o|safe globals: (chicken.pathname#root-directory chicken.pathname#root-origin chicken.pathname#absolute-pathname-root) 
o|inlining procedure: k622 
o|inlining procedure: k635 
o|inlining procedure: k635 
o|contracted procedure: "(pathname.scm:93) g140141" 
o|inlining procedure: k666 
o|substituted constant variable: a670 
o|inlining procedure: k666 
o|inlining procedure: k622 
o|inlining procedure: k699 
o|inlining procedure: k699 
o|inlining procedure: k741 
o|inlining procedure: k741 
o|inlining procedure: k795 
o|inlining procedure: k795 
o|inlining procedure: k829 
o|contracted procedure: "(pathname.scm:132) g178179" 
o|inlining procedure: k837 
o|substituted constant variable: a841 
o|inlining procedure: k837 
o|inlining procedure: k829 
o|inlining procedure: k889 
o|inlining procedure: k889 
o|inlining procedure: k919 
o|inlining procedure: k919 
o|inlining procedure: k943 
o|inlining procedure: k943 
o|inlining procedure: k980 
o|inlining procedure: k980 
o|inlining procedure: k1151 
o|inlining procedure: k1151 
o|substituted constant variable: a1160 
o|inlining procedure: k1162 
o|inlining procedure: k1162 
o|inlining procedure: k1198 
o|substituted constant variable: a1205 
o|inlining procedure: k1198 
o|inlining procedure: k1221 
o|inlining procedure: k1239 
o|inlining procedure: k1239 
o|inlining procedure: k1284 
o|inlining procedure: k1284 
o|inlining procedure: k1311 
o|inlining procedure: k1311 
o|inlining procedure: k1221 
o|inlining procedure: k1355 
o|inlining procedure: k1355 
o|inlining procedure: k1395 
o|inlining procedure: k1395 
o|inlining procedure: k1401 
o|inlining procedure: k1401 
o|substituted constant variable: a1442 
o|inlining procedure: k1436 
o|inlining procedure: k1436 
o|inlining procedure: k1469 
o|inlining procedure: k1469 
o|inlining procedure: k1488 
o|inlining procedure: k1488 
o|contracted procedure: "(pathname.scm:329) strip-origin-prefix432" 
o|inlining procedure: k1518 
o|inlining procedure: k1518 
o|inlining procedure: k1540 
o|inlining procedure: k1540 
o|inlining procedure: k1604 
o|inlining procedure: k1604 
o|inlining procedure: k1613 
o|inlining procedure: k1613 
o|inlining procedure: k1634 
o|inlining procedure: k1634 
o|replaced variables: 282 
o|removed binding forms: 79 
o|substituted constant variable: r6231645 
o|substituted constant variable: r7001646 
o|substituted constant variable: r7421648 
o|substituted constant variable: r7961650 
o|substituted constant variable: r7961650 
o|substituted constant variable: r7961652 
o|substituted constant variable: r7961652 
o|substituted constant variable: r8301657 
o|substituted constant variable: r9201663 
o|substituted constant variable: r13961686 
o|substituted constant variable: r13961688 
o|substituted constant variable: r14371693 
o|converted assignments to bindings: (pds?366) 
o|substituted constant variable: r14701694 
o|substituted constant variable: r14701694 
o|substituted constant variable: r14701696 
o|substituted constant variable: r14701696 
o|converted assignments to bindings: (addpart344) 
o|substituted constant variable: r16051705 
o|substituted constant variable: r16141707 
o|substituted constant variable: r16351709 
o|simplifications: ((let . 2)) 
o|replaced variables: 26 
o|removed binding forms: 237 
o|inlining procedure: k1236 
o|inlining procedure: k1571 
o|inlining procedure: k1571 
o|inlining procedure: k1571 
o|removed binding forms: 35 
o|replaced variables: 3 
o|removed binding forms: 1 
o|removed binding forms: 3 
o|simplifications: ((if . 17) (let . 9) (##core#call . 111)) 
o|  call simplifications:
o|    scheme#list?
o|    scheme#member
o|    scheme#string-ref
o|    chicken.fixnum#fx+	8
o|    scheme#pair?
o|    ##sys#slot	2
o|    scheme#string	2
o|    scheme#string=?	2
o|    scheme#cdr
o|    scheme#cons	3
o|    ##sys#call-with-values	8
o|    chicken.fixnum#fx=	5
o|    scheme#values	8
o|    chicken.fixnum#fx>	3
o|    scheme#char=?
o|    scheme#not	6
o|    scheme#string?
o|    scheme#list
o|    ##sys#check-list	2
o|    scheme#null?	10
o|    scheme#car	8
o|    scheme#string-length
o|    chicken.fixnum#fx>=	4
o|    scheme#eq?	10
o|    ##sys#size	11
o|    chicken.fixnum#fx<
o|    chicken.fixnum#fx-	2
o|    ##sys#check-string	7
o|contracted procedure: k609 
o|contracted procedure: k629 
o|contracted procedure: k645 
o|contracted procedure: k658 
o|contracted procedure: k651 
o|contracted procedure: k661 
o|contracted procedure: k679 
o|contracted procedure: k684 
o|contracted procedure: k690 
o|contracted procedure: k702 
o|contracted procedure: k705 
o|contracted procedure: k735 
o|contracted procedure: k711 
o|contracted procedure: k744 
o|contracted procedure: k747 
o|contracted procedure: k753 
o|contracted procedure: k760 
o|contracted procedure: k772 
o|contracted procedure: k775 
o|contracted procedure: k778 
o|contracted procedure: k781 
o|contracted procedure: k784 
o|contracted procedure: k813 
o|contracted procedure: k801 
o|contracted procedure: k808 
o|contracted procedure: k823 
o|contracted procedure: k854 
o|contracted procedure: k826 
o|contracted procedure: k850 
o|contracted procedure: k832 
o|contracted procedure: k870 
o|contracted procedure: k860 
o|contracted procedure: k898 
o|contracted procedure: k879 
o|contracted procedure: k905 
o|contracted procedure: k908 
o|contracted procedure: k935 
o|contracted procedure: k928 
o|contracted procedure: k940 
o|contracted procedure: k1006 
o|contracted procedure: k946 
o|contracted procedure: k1585 
o|contracted procedure: k1145 
o|contracted procedure: k1154 
o|contracted procedure: k1165 
o|inlining procedure: k1168 
o|contracted procedure: k1181 
o|inlining procedure: k1168 
o|contracted procedure: k1453 
o|contracted procedure: k1189 
o|contracted procedure: k1450 
o|contracted procedure: k1192 
o|contracted procedure: k1201 
o|contracted procedure: k1209 
o|contracted procedure: k1212 
o|contracted procedure: k1224 
o|contracted procedure: k1233 
o|contracted procedure: k1245 
o|contracted procedure: k1236 
o|contracted procedure: k1269 
o|contracted procedure: k1291 
o|contracted procedure: k1299 
o|contracted procedure: k1302 
o|contracted procedure: k1314 
o|contracted procedure: k1324 
o|contracted procedure: k1328 
o|contracted procedure: k1332 
o|contracted procedure: k1335 
o|contracted procedure: k1358 
o|contracted procedure: k1365 
o|contracted procedure: k1369 
o|contracted procedure: k1376 
o|contracted procedure: k1380 
o|contracted procedure: k1391 
o|contracted procedure: k1398 
o|contracted procedure: k1415 
o|contracted procedure: k1419 
o|contracted procedure: k1423 
o|contracted procedure: k1430 
o|contracted procedure: k1433 
o|contracted procedure: k1447 
o|contracted procedure: k1462 
o|contracted procedure: k1485 
o|contracted procedure: k1503 
o|contracted procedure: k1494 
o|contracted procedure: k1506 
o|contracted procedure: k1582 
o|contracted procedure: k1578 
o|contracted procedure: k1575 
o|contracted procedure: k1521 
o|contracted procedure: k1524 
o|contracted procedure: k1527 
o|contracted procedure: k1533 
o|contracted procedure: k1537 
o|contracted procedure: k1543 
o|contracted procedure: k1571 
o|simplifications: ((if . 2) (let . 31)) 
o|removed binding forms: 94 
o|contracted procedure: k798 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest188191 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest188191 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest200203 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest200203 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest357359 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest357359 0 
o|replaced variables: 3 
o|removed binding forms: 2 
o|removed binding forms: 2 
o|direct leaf routine/allocation: addpart344 9 
o|direct leaf routine/allocation: pds?366 0 
o|direct leaf routine/allocation: loop423 0 
o|contracted procedure: "(pathname.scm:254) k1339" 
o|contracted procedure: "(pathname.scm:273) k1349" 
o|contracted procedure: "(pathname.scm:280) k1384" 
o|converted assignments to bindings: (loop423) 
o|simplifications: ((let . 1)) 
o|removed binding forms: 3 
o|customizable procedures: (k603 chicken.pathname#split-directory k1404 k1352 loop371 k1227 g385392 for-each-loop384396 k1281 strip-pds219 canonicalize-dirs148 _make-pathname149 k816 conc-dirs147 chicken.pathname#chop-pds loop151 k638 lp133) 
o|calls to known targets: 46 
o|identified direct recursive calls: f_697 1 
o|unused rest argument: rest188191 f_858 
o|unused rest argument: rest200203 f_877 
o|unused rest argument: rest357359 f_1187 
o|identified direct recursive calls: f_1483 1 
o|fast box initializations: 7 
o|fast global references: 8 
o|fast global assignments: 11 
o|dropping unused closure argument: f_1149 
o|dropping unused closure argument: f_1460 
o|dropping unused closure argument: f_1483 
o|dropping unused closure argument: f_620 
o|dropping unused closure argument: f_770 
o|dropping unused closure argument: f_917 
*/
/* end of file */
