/* Generated from extras.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.3.0rc4 ((HEAD detached at 5.3.0rc4)) (rev b6cbb1ba)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: extras.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file extras.c -emit-import-library chicken.format -emit-import-library chicken.io -emit-import-library chicken.pretty-print -emit-import-library chicken.random
   unit: extras
   uses: extras data-structures library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[166];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,17),40,100,111,108,111,111,112,57,56,32,120,32,105,32,120,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,29),40,99,104,105,99,107,101,110,46,105,111,35,114,101,97,100,45,108,105,115,116,32,46,32,114,101,115,116,41,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,9),40,103,49,50,50,32,114,108,41,0,0,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,105,41};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,29),40,99,104,105,99,107,101,110,46,105,111,35,114,101,97,100,45,108,105,110,101,32,46,32,97,114,103,115,41,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,108,110,115,32,110,41,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,30),40,99,104,105,99,107,101,110,46,105,111,35,114,101,97,100,45,108,105,110,101,115,32,46,32,114,101,115,116,41,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,34),40,99,104,105,99,107,101,110,46,105,111,35,119,114,105,116,101,45,108,105,110,101,32,115,116,114,32,46,32,112,111,114,116,41,0,0,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,115,116,97,114,116,32,110,32,109,41};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,115,116,97,114,116,32,110,32,109,41};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,48),40,99,104,105,99,107,101,110,46,105,111,35,114,101,97,100,45,115,116,114,105,110,103,33,47,112,111,114,116,32,110,32,100,101,115,116,32,112,111,114,116,32,115,116,97,114,116,41};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,39),40,99,104,105,99,107,101,110,46,105,111,35,114,101,97,100,45,115,116,114,105,110,103,33,32,110,32,100,101,115,116,32,46,32,114,101,115,116,41,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,33),40,99,104,105,99,107,101,110,46,105,111,35,114,101,97,100,45,115,116,114,105,110,103,47,112,111,114,116,32,110,32,112,41,0,0,0,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,31),40,99,104,105,99,107,101,110,46,105,111,35,114,101,97,100,45,115,116,114,105,110,103,32,46,32,114,101,115,116,41,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,33),40,99,104,105,99,107,101,110,46,105,111,35,114,101,97,100,45,98,117,102,102,101,114,101,100,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,35),40,99,104,105,99,107,101,110,46,105,111,35,114,101,97,100,45,116,111,107,101,110,32,112,114,101,100,32,46,32,112,111,114,116,41,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,16),40,98,111,100,121,51,49,55,32,110,32,112,111,114,116,41};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,16),40,100,101,102,45,112,111,114,116,51,50,48,32,37,110,41};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,10),40,100,101,102,45,110,51,49,57,41,0,0,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,34),40,99,104,105,99,107,101,110,46,105,111,35,119,114,105,116,101,45,115,116,114,105,110,103,32,115,32,46,32,109,111,114,101,41,0,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,29),40,99,104,105,99,107,101,110,46,105,111,35,114,101,97,100,45,98,121,116,101,32,46,32,114,101,115,116,41,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,35),40,99,104,105,99,107,101,110,46,105,111,35,119,114,105,116,101,45,98,121,116,101,32,98,121,116,101,32,46,32,114,101,115,116,41,0,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,15),40,114,101,97,100,45,109,97,99,114,111,63,32,108,41,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,19),40,114,101,97,100,45,109,97,99,114,111,45,112,114,101,102,105,120,41,0,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,13),40,111,117,116,32,115,116,114,32,99,111,108,41,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,18),40,119,114,45,101,120,112,114,32,101,120,112,114,32,99,111,108,41,0,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,108,32,99,111,108,41,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,14),40,119,114,45,108,115,116,32,108,32,99,111,108,41,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,8),40,103,53,48,55,32,97,41};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,105,32,106,32,99,111,108,41,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,9),40,103,53,49,56,32,99,110,41,0,0,0,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,13),40,100,111,108,111,111,112,53,50,55,32,105,41,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,12),40,119,114,32,111,98,106,32,99,111,108,41,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,14),40,115,112,97,99,101,115,32,110,32,99,111,108,41,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,15),40,105,110,100,101,110,116,32,116,111,32,99,111,108,41,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,11),40,97,50,56,55,50,32,115,116,114,41,0,0,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,26),40,112,114,32,111,98,106,32,99,111,108,32,101,120,116,114,97,32,112,112,45,112,97,105,114,41,0,0,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,24),40,112,112,45,101,120,112,114,32,101,120,112,114,32,99,111,108,32,101,120,116,114,97,41};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,32),40,112,112,45,99,97,108,108,32,101,120,112,114,32,99,111,108,32,101,120,116,114,97,32,112,112,45,105,116,101,109,41};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,29),40,112,112,45,108,105,115,116,32,108,32,99,111,108,32,101,120,116,114,97,32,112,112,45,105,116,101,109,41,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,108,32,99,111,108,41,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,35),40,112,112,45,100,111,119,110,32,108,32,99,111,108,49,32,99,111,108,50,32,101,120,116,114,97,32,112,112,45,105,116,101,109,41,0,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,27),40,116,97,105,108,49,32,114,101,115,116,32,99,111,108,49,32,99,111,108,50,32,99,111,108,51,41,0,0,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,27),40,116,97,105,108,50,32,114,101,115,116,32,99,111,108,49,32,99,111,108,50,32,99,111,108,51,41,0,0,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,22),40,116,97,105,108,51,32,114,101,115,116,32,99,111,108,49,32,99,111,108,50,41,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,49),40,112,112,45,103,101,110,101,114,97,108,32,101,120,112,114,32,99,111,108,32,101,120,116,114,97,32,110,97,109,101,100,63,32,112,112,45,49,32,112,112,45,50,32,112,112,45,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,26),40,112,112,45,101,120,112,114,45,108,105,115,116,32,108,32,99,111,108,32,101,120,116,114,97,41,0,0,0,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,26),40,112,112,45,108,97,109,98,100,97,32,101,120,112,114,32,99,111,108,32,101,120,116,114,97,41,0,0,0,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,22),40,112,112,45,105,102,32,101,120,112,114,32,99,111,108,32,101,120,116,114,97,41,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,24),40,112,112,45,99,111,110,100,32,101,120,112,114,32,99,111,108,32,101,120,116,114,97,41};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,24),40,112,112,45,99,97,115,101,32,101,120,112,114,32,99,111,108,32,101,120,116,114,97,41};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,23),40,112,112,45,97,110,100,32,101,120,112,114,32,99,111,108,32,101,120,116,114,97,41,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,23),40,112,112,45,108,101,116,32,101,120,112,114,32,99,111,108,32,101,120,116,114,97,41,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,25),40,112,112,45,98,101,103,105,110,32,101,120,112,114,32,99,111,108,32,101,120,116,114,97,41,0,0,0,0,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,22),40,112,112,45,100,111,32,101,120,112,114,32,99,111,108,32,101,120,116,114,97,41,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,12),40,115,116,121,108,101,32,104,101,97,100,41,0,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,12),40,112,112,32,111,98,106,32,99,111,108,41,0,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,62),40,99,104,105,99,107,101,110,46,112,114,101,116,116,121,45,112,114,105,110,116,35,103,101,110,101,114,105,99,45,119,114,105,116,101,32,111,98,106,32,100,105,115,112,108,97,121,63,32,119,105,100,116,104,32,111,117,116,112,117,116,41,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,9),40,97,51,52,52,54,32,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,112,114,101,116,116,121,45,112,114,105,110,116,35,112,114,101,116,116,121,45,112,114,105,110,116,32,111,98,106,32,46,32,111,112,116,41,0,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,6),40,110,101,120,116,41,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,6),40,115,107,105,112,41,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,14),40,114,101,99,32,109,115,103,32,97,114,103,115,41,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,102,111,114,109,97,116,35,102,112,114,105,110,116,102,48,32,108,111,99,32,112,111,114,116,32,109,115,103,32,97,114,103,115,41,0,0,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,102,111,114,109,97,116,35,102,112,114,105,110,116,102,32,112,111,114,116,32,102,115,116,114,32,46,32,97,114,103,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,35),40,99,104,105,99,107,101,110,46,102,111,114,109,97,116,35,112,114,105,110,116,102,32,102,115,116,114,32,46,32,97,114,103,115,41,0,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,102,111,114,109,97,116,35,115,112,114,105,110,116,102,32,102,115,116,114,32,46,32,97,114,103,115,41,0,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,102,111,114,109,97,116,35,102,111,114,109,97,116,32,102,109,116,45,111,114,45,100,115,116,32,46,32,97,114,103,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,51),40,99,104,105,99,107,101,110,46,114,97,110,100,111,109,35,115,101,116,45,112,115,101,117,100,111,45,114,97,110,100,111,109,45,115,101,101,100,33,32,98,117,102,32,46,32,114,101,115,116,41,0,0,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,114,97,110,100,111,109,35,112,115,101,117,100,111,45,114,97,110,100,111,109,45,105,110,116,101,103,101,114,32,110,41};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,35),40,99,104,105,99,107,101,110,46,114,97,110,100,111,109,35,112,115,101,117,100,111,45,114,97,110,100,111,109,45,114,101,97,108,41,0,0,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,114,97,110,100,111,109,35,114,97,110,100,111,109,45,98,121,116,101,115,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_1100)
static void C_ccall f_1100(C_word c,C_word *av) C_noret;
C_noret_decl(f_1103)
static void C_ccall f_1103(C_word c,C_word *av) C_noret;
C_noret_decl(f_1105)
static void C_ccall f_1105(C_word c,C_word *av) C_noret;
C_noret_decl(f_1134)
static void C_ccall f_1134(C_word c,C_word *av) C_noret;
C_noret_decl(f_1136)
static void C_fcall f_1136(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1156)
static void C_ccall f_1156(C_word c,C_word *av) C_noret;
C_noret_decl(f_1208)
static void C_ccall f_1208(C_word c,C_word *av) C_noret;
C_noret_decl(f_1218)
static void C_fcall f_1218(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1228)
static void C_fcall f_1228(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1241)
static void C_ccall f_1241(C_word c,C_word *av) C_noret;
C_noret_decl(f_1246)
static void C_fcall f_1246(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1259)
static void C_ccall f_1259(C_word c,C_word *av) C_noret;
C_noret_decl(f_1292)
static void C_ccall f_1292(C_word c,C_word *av) C_noret;
C_noret_decl(f_1301)
static void C_ccall f_1301(C_word c,C_word *av) C_noret;
C_noret_decl(f_1324)
static void C_ccall f_1324(C_word c,C_word *av) C_noret;
C_noret_decl(f_1332)
static void C_ccall f_1332(C_word c,C_word *av) C_noret;
C_noret_decl(f_1361)
static void C_ccall f_1361(C_word c,C_word *av) C_noret;
C_noret_decl(f_1380)
static void C_ccall f_1380(C_word c,C_word *av) C_noret;
C_noret_decl(f_1389)
static void C_fcall f_1389(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1402)
static void C_ccall f_1402(C_word c,C_word *av) C_noret;
C_noret_decl(f_1451)
static void C_ccall f_1451(C_word c,C_word *av) C_noret;
C_noret_decl(f_1467)
static void C_ccall f_1467(C_word c,C_word *av) C_noret;
C_noret_decl(f_1479)
static void C_ccall f_1479(C_word c,C_word *av) C_noret;
C_noret_decl(f_1497)
static void C_fcall f_1497(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1501)
static void C_ccall f_1501(C_word c,C_word *av) C_noret;
C_noret_decl(f_1556)
static void C_fcall f_1556(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1560)
static void C_ccall f_1560(C_word c,C_word *av) C_noret;
C_noret_decl(f_1563)
static void C_fcall f_1563(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1611)
static void C_ccall f_1611(C_word c,C_word *av) C_noret;
C_noret_decl(f_1633)
static void C_ccall f_1633(C_word c,C_word *av) C_noret;
C_noret_decl(f_1639)
static void C_fcall f_1639(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1642)
static void C_ccall f_1642(C_word c,C_word *av) C_noret;
C_noret_decl(f_1688)
static void C_ccall f_1688(C_word c,C_word *av) C_noret;
C_noret_decl(f_1707)
static void C_ccall f_1707(C_word c,C_word *av) C_noret;
C_noret_decl(f_1710)
static void C_ccall f_1710(C_word c,C_word *av) C_noret;
C_noret_decl(f_1722)
static void C_ccall f_1722(C_word c,C_word *av) C_noret;
C_noret_decl(f_1725)
static void C_ccall f_1725(C_word c,C_word *av) C_noret;
C_noret_decl(f_1730)
static void C_fcall f_1730(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1734)
static void C_ccall f_1734(C_word c,C_word *av) C_noret;
C_noret_decl(f_1746)
static void C_ccall f_1746(C_word c,C_word *av) C_noret;
C_noret_decl(f_1754)
static void C_ccall f_1754(C_word c,C_word *av) C_noret;
C_noret_decl(f_1756)
static void C_ccall f_1756(C_word c,C_word *av) C_noret;
C_noret_decl(f_1775)
static void C_ccall f_1775(C_word c,C_word *av) C_noret;
C_noret_decl(f_1809)
static void C_ccall f_1809(C_word c,C_word *av) C_noret;
C_noret_decl(f_1837)
static void C_ccall f_1837(C_word c,C_word *av) C_noret;
C_noret_decl(f_1847)
static void C_ccall f_1847(C_word c,C_word *av) C_noret;
C_noret_decl(f_1852)
static void C_fcall f_1852(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1856)
static void C_ccall f_1856(C_word c,C_word *av) C_noret;
C_noret_decl(f_1862)
static void C_ccall f_1862(C_word c,C_word *av) C_noret;
C_noret_decl(f_1865)
static void C_ccall f_1865(C_word c,C_word *av) C_noret;
C_noret_decl(f_1872)
static void C_ccall f_1872(C_word c,C_word *av) C_noret;
C_noret_decl(f_1893)
static void C_ccall f_1893(C_word c,C_word *av) C_noret;
C_noret_decl(f_1898)
static void C_fcall f_1898(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1905)
static void C_ccall f_1905(C_word c,C_word *av) C_noret;
C_noret_decl(f_1915)
static void C_ccall f_1915(C_word c,C_word *av) C_noret;
C_noret_decl(f_1936)
static void C_fcall f_1936(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1941)
static void C_fcall f_1941(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1976)
static void C_ccall f_1976(C_word c,C_word *av) C_noret;
C_noret_decl(f_1986)
static void C_ccall f_1986(C_word c,C_word *av) C_noret;
C_noret_decl(f_2003)
static void C_ccall f_2003(C_word c,C_word *av) C_noret;
C_noret_decl(f_2010)
static void C_ccall f_2010(C_word c,C_word *av) C_noret;
C_noret_decl(f_2028)
static void C_fcall f_2028(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2031)
static void C_fcall f_2031(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2059)
static void C_fcall f_2059(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2093)
static C_word C_fcall f_2093(C_word t0);
C_noret_decl(f_2132)
static void C_fcall f_2132(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2142)
static void C_ccall f_2142(C_word c,C_word *av) C_noret;
C_noret_decl(f_2151)
static void C_fcall f_2151(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2154)
static void C_fcall f_2154(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2161)
static void C_ccall f_2161(C_word c,C_word *av) C_noret;
C_noret_decl(f_2172)
static void C_ccall f_2172(C_word c,C_word *av) C_noret;
C_noret_decl(f_2181)
static void C_fcall f_2181(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2197)
static void C_ccall f_2197(C_word c,C_word *av) C_noret;
C_noret_decl(f_2199)
static void C_fcall f_2199(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2221)
static void C_ccall f_2221(C_word c,C_word *av) C_noret;
C_noret_decl(f_2227)
static void C_ccall f_2227(C_word c,C_word *av) C_noret;
C_noret_decl(f_2243)
static void C_ccall f_2243(C_word c,C_word *av) C_noret;
C_noret_decl(f_2247)
static void C_ccall f_2247(C_word c,C_word *av) C_noret;
C_noret_decl(f_2256)
static void C_ccall f_2256(C_word c,C_word *av) C_noret;
C_noret_decl(f_2299)
static void C_ccall f_2299(C_word c,C_word *av) C_noret;
C_noret_decl(f_2303)
static void C_ccall f_2303(C_word c,C_word *av) C_noret;
C_noret_decl(f_2322)
static void C_ccall f_2322(C_word c,C_word *av) C_noret;
C_noret_decl(f_2329)
static void C_ccall f_2329(C_word c,C_word *av) C_noret;
C_noret_decl(f_2335)
static void C_ccall f_2335(C_word c,C_word *av) C_noret;
C_noret_decl(f_2341)
static void C_ccall f_2341(C_word c,C_word *av) C_noret;
C_noret_decl(f_2344)
static void C_ccall f_2344(C_word c,C_word *av) C_noret;
C_noret_decl(f_2351)
static void C_ccall f_2351(C_word c,C_word *av) C_noret;
C_noret_decl(f_2364)
static void C_ccall f_2364(C_word c,C_word *av) C_noret;
C_noret_decl(f_2383)
static void C_ccall f_2383(C_word c,C_word *av) C_noret;
C_noret_decl(f_2385)
static void C_fcall f_2385(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2413)
static void C_ccall f_2413(C_word c,C_word *av) C_noret;
C_noret_decl(f_2417)
static void C_ccall f_2417(C_word c,C_word *av) C_noret;
C_noret_decl(f_2421)
static void C_ccall f_2421(C_word c,C_word *av) C_noret;
C_noret_decl(f_2444)
static void C_ccall f_2444(C_word c,C_word *av) C_noret;
C_noret_decl(f_2449)
static void C_ccall f_2449(C_word c,C_word *av) C_noret;
C_noret_decl(f_2450)
static void C_fcall f_2450(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2468)
static void C_ccall f_2468(C_word c,C_word *av) C_noret;
C_noret_decl(f_2472)
static void C_ccall f_2472(C_word c,C_word *av) C_noret;
C_noret_decl(f_2480)
static void C_ccall f_2480(C_word c,C_word *av) C_noret;
C_noret_decl(f_2491)
static void C_ccall f_2491(C_word c,C_word *av) C_noret;
C_noret_decl(f_2509)
static void C_ccall f_2509(C_word c,C_word *av) C_noret;
C_noret_decl(f_2513)
static void C_ccall f_2513(C_word c,C_word *av) C_noret;
C_noret_decl(f_2536)
static void C_ccall f_2536(C_word c,C_word *av) C_noret;
C_noret_decl(f_2544)
static void C_ccall f_2544(C_word c,C_word *av) C_noret;
C_noret_decl(f_2547)
static void C_ccall f_2547(C_word c,C_word *av) C_noret;
C_noret_decl(f_2551)
static void C_fcall f_2551(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2571)
static void C_ccall f_2571(C_word c,C_word *av) C_noret;
C_noret_decl(f_2578)
static void C_ccall f_2578(C_word c,C_word *av) C_noret;
C_noret_decl(f_2589)
static void C_ccall f_2589(C_word c,C_word *av) C_noret;
C_noret_decl(f_2596)
static void C_ccall f_2596(C_word c,C_word *av) C_noret;
C_noret_decl(f_2612)
static void C_ccall f_2612(C_word c,C_word *av) C_noret;
C_noret_decl(f_2642)
static void C_ccall f_2642(C_word c,C_word *av) C_noret;
C_noret_decl(f_2651)
static void C_ccall f_2651(C_word c,C_word *av) C_noret;
C_noret_decl(f_2654)
static void C_ccall f_2654(C_word c,C_word *av) C_noret;
C_noret_decl(f_2661)
static void C_ccall f_2661(C_word c,C_word *av) C_noret;
C_noret_decl(f_2667)
static void C_ccall f_2667(C_word c,C_word *av) C_noret;
C_noret_decl(f_2674)
static void C_ccall f_2674(C_word c,C_word *av) C_noret;
C_noret_decl(f_2684)
static void C_ccall f_2684(C_word c,C_word *av) C_noret;
C_noret_decl(f_2690)
static void C_ccall f_2690(C_word c,C_word *av) C_noret;
C_noret_decl(f_2695)
static void C_fcall f_2695(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2708)
static void C_ccall f_2708(C_word c,C_word *av) C_noret;
C_noret_decl(f_2711)
static void C_ccall f_2711(C_word c,C_word *av) C_noret;
C_noret_decl(f_2722)
static void C_ccall f_2722(C_word c,C_word *av) C_noret;
C_noret_decl(f_2734)
static void C_ccall f_2734(C_word c,C_word *av) C_noret;
C_noret_decl(f_2737)
static void C_ccall f_2737(C_word c,C_word *av) C_noret;
C_noret_decl(f_2744)
static void C_ccall f_2744(C_word c,C_word *av) C_noret;
C_noret_decl(f_2752)
static void C_fcall f_2752(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2755)
static void C_fcall f_2755(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2779)
static void C_ccall f_2779(C_word c,C_word *av) C_noret;
C_noret_decl(f_2786)
static void C_ccall f_2786(C_word c,C_word *av) C_noret;
C_noret_decl(f_2788)
static void C_fcall f_2788(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2804)
static void C_ccall f_2804(C_word c,C_word *av) C_noret;
C_noret_decl(f_2811)
static void C_ccall f_2811(C_word c,C_word *av) C_noret;
C_noret_decl(f_2822)
static void C_fcall f_2822(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2835)
static void C_ccall f_2835(C_word c,C_word *av) C_noret;
C_noret_decl(f_2838)
static void C_ccall f_2838(C_word c,C_word *av) C_noret;
C_noret_decl(f_2851)
static void C_ccall f_2851(C_word c,C_word *av) C_noret;
C_noret_decl(f_2867)
static void C_ccall f_2867(C_word c,C_word *av) C_noret;
C_noret_decl(f_2871)
static void C_ccall f_2871(C_word c,C_word *av) C_noret;
C_noret_decl(f_2873)
static void C_ccall f_2873(C_word c,C_word *av) C_noret;
C_noret_decl(f_2909)
static void C_ccall f_2909(C_word c,C_word *av) C_noret;
C_noret_decl(f_2916)
static void C_ccall f_2916(C_word c,C_word *av) C_noret;
C_noret_decl(f_2927)
static void C_ccall f_2927(C_word c,C_word *av) C_noret;
C_noret_decl(f_2943)
static void C_ccall f_2943(C_word c,C_word *av) C_noret;
C_noret_decl(f_2969)
static void C_ccall f_2969(C_word c,C_word *av) C_noret;
C_noret_decl(f_2974)
static void C_fcall f_2974(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2978)
static void C_ccall f_2978(C_word c,C_word *av) C_noret;
C_noret_decl(f_2998)
static void C_ccall f_2998(C_word c,C_word *av) C_noret;
C_noret_decl(f_3000)
static void C_fcall f_3000(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3004)
static void C_ccall f_3004(C_word c,C_word *av) C_noret;
C_noret_decl(f_3009)
static void C_fcall f_3009(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_3015)
static void C_fcall f_3015(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3036)
static void C_ccall f_3036(C_word c,C_word *av) C_noret;
C_noret_decl(f_3042)
static void C_ccall f_3042(C_word c,C_word *av) C_noret;
C_noret_decl(f_3064)
static void C_ccall f_3064(C_word c,C_word *av) C_noret;
C_noret_decl(f_3068)
static void C_ccall f_3068(C_word c,C_word *av) C_noret;
C_noret_decl(f_3076)
static void C_ccall f_3076(C_word c,C_word *av) C_noret;
C_noret_decl(f_3080)
static void C_ccall f_3080(C_word c,C_word *av) C_noret;
C_noret_decl(f_3082)
static void C_fcall f_3082(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_3085)
static void C_fcall f_3085(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3106)
static void C_ccall f_3106(C_word c,C_word *av) C_noret;
C_noret_decl(f_3110)
static void C_ccall f_3110(C_word c,C_word *av) C_noret;
C_noret_decl(f_3124)
static void C_fcall f_3124(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3145)
static void C_ccall f_3145(C_word c,C_word *av) C_noret;
C_noret_decl(f_3149)
static void C_ccall f_3149(C_word c,C_word *av) C_noret;
C_noret_decl(f_3163)
static void C_fcall f_3163(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3174)
static void C_ccall f_3174(C_word c,C_word *av) C_noret;
C_noret_decl(f_3187)
static void C_ccall f_3187(C_word c,C_word *av) C_noret;
C_noret_decl(f_3202)
static void C_ccall f_3202(C_word c,C_word *av) C_noret;
C_noret_decl(f_3220)
static void C_ccall f_3220(C_word c,C_word *av) C_noret;
C_noret_decl(f_3222)
static void C_ccall f_3222(C_word c,C_word *av) C_noret;
C_noret_decl(f_3228)
static void C_ccall f_3228(C_word c,C_word *av) C_noret;
C_noret_decl(f_3234)
static void C_ccall f_3234(C_word c,C_word *av) C_noret;
C_noret_decl(f_3240)
static void C_ccall f_3240(C_word c,C_word *av) C_noret;
C_noret_decl(f_3246)
static void C_ccall f_3246(C_word c,C_word *av) C_noret;
C_noret_decl(f_3252)
static void C_ccall f_3252(C_word c,C_word *av) C_noret;
C_noret_decl(f_3258)
static void C_ccall f_3258(C_word c,C_word *av) C_noret;
C_noret_decl(f_3278)
static void C_ccall f_3278(C_word c,C_word *av) C_noret;
C_noret_decl(f_3284)
static void C_ccall f_3284(C_word c,C_word *av) C_noret;
C_noret_decl(f_3293)
static void C_fcall f_3293(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3303)
static void C_fcall f_3303(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3419)
static void C_ccall f_3419(C_word c,C_word *av) C_noret;
C_noret_decl(f_3423)
static void C_ccall f_3423(C_word c,C_word *av) C_noret;
C_noret_decl(f_3432)
static void C_ccall f_3432(C_word c,C_word *av) C_noret;
C_noret_decl(f_3434)
static void C_ccall f_3434(C_word c,C_word *av) C_noret;
C_noret_decl(f_3441)
static void C_ccall f_3441(C_word c,C_word *av) C_noret;
C_noret_decl(f_3445)
static void C_ccall f_3445(C_word c,C_word *av) C_noret;
C_noret_decl(f_3447)
static void C_ccall f_3447(C_word c,C_word *av) C_noret;
C_noret_decl(f_3451)
static void C_ccall f_3451(C_word c,C_word *av) C_noret;
C_noret_decl(f_3458)
static void C_fcall f_3458(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3465)
static void C_ccall f_3465(C_word c,C_word *av) C_noret;
C_noret_decl(f_3468)
static void C_ccall f_3468(C_word c,C_word *av) C_noret;
C_noret_decl(f_3490)
static void C_ccall f_3490(C_word c,C_word *av) C_noret;
C_noret_decl(f_3496)
static void C_fcall f_3496(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3505)
static C_word C_fcall f_3505(C_word t0);
C_noret_decl(f_3512)
static void C_fcall f_3512(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3531)
static void C_fcall f_3531(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3544)
static void C_ccall f_3544(C_word c,C_word *av) C_noret;
C_noret_decl(f_3569)
static void C_ccall f_3569(C_word c,C_word *av) C_noret;
C_noret_decl(f_3582)
static void C_ccall f_3582(C_word c,C_word *av) C_noret;
C_noret_decl(f_3595)
static void C_ccall f_3595(C_word c,C_word *av) C_noret;
C_noret_decl(f_3608)
static void C_ccall f_3608(C_word c,C_word *av) C_noret;
C_noret_decl(f_3612)
static void C_ccall f_3612(C_word c,C_word *av) C_noret;
C_noret_decl(f_3625)
static void C_ccall f_3625(C_word c,C_word *av) C_noret;
C_noret_decl(f_3629)
static void C_ccall f_3629(C_word c,C_word *av) C_noret;
C_noret_decl(f_3642)
static void C_ccall f_3642(C_word c,C_word *av) C_noret;
C_noret_decl(f_3646)
static void C_ccall f_3646(C_word c,C_word *av) C_noret;
C_noret_decl(f_3664)
static void C_ccall f_3664(C_word c,C_word *av) C_noret;
C_noret_decl(f_3667)
static void C_ccall f_3667(C_word c,C_word *av) C_noret;
C_noret_decl(f_3673)
static void C_ccall f_3673(C_word c,C_word *av) C_noret;
C_noret_decl(f_3709)
static C_word C_fcall f_3709(C_word t0,C_word t1);
C_noret_decl(f_3767)
static void C_ccall f_3767(C_word c,C_word *av) C_noret;
C_noret_decl(f_3778)
static void C_ccall f_3778(C_word c,C_word *av) C_noret;
C_noret_decl(f_3784)
static void C_ccall f_3784(C_word c,C_word *av) C_noret;
C_noret_decl(f_3790)
static void C_ccall f_3790(C_word c,C_word *av) C_noret;
C_noret_decl(f_3796)
static void C_ccall f_3796(C_word c,C_word *av) C_noret;
C_noret_decl(f_3804)
static void C_ccall f_3804(C_word c,C_word *av) C_noret;
C_noret_decl(f_3829)
static void C_ccall f_3829(C_word c,C_word *av) C_noret;
C_noret_decl(f_3839)
static void C_ccall f_3839(C_word c,C_word *av) C_noret;
C_noret_decl(f_3842)
static void C_ccall f_3842(C_word c,C_word *av) C_noret;
C_noret_decl(f_3844)
static void C_ccall f_3844(C_word c,C_word *av) C_noret;
C_noret_decl(f_3851)
static void C_ccall f_3851(C_word c,C_word *av) C_noret;
C_noret_decl(f_3854)
static void C_ccall f_3854(C_word c,C_word *av) C_noret;
C_noret_decl(f_3865)
static void C_ccall f_3865(C_word c,C_word *av) C_noret;
C_noret_decl(f_3883)
static void C_ccall f_3883(C_word c,C_word *av) C_noret;
C_noret_decl(f_3899)
static void C_ccall f_3899(C_word c,C_word *av) C_noret;
C_noret_decl(f_3902)
static void C_ccall f_3902(C_word c,C_word *av) C_noret;
C_noret_decl(f_3918)
static void C_ccall f_3918(C_word c,C_word *av) C_noret;
C_noret_decl(f_3921)
static void C_ccall f_3921(C_word c,C_word *av) C_noret;
C_noret_decl(f_3928)
static void C_ccall f_3928(C_word c,C_word *av) C_noret;
C_noret_decl(f_3943)
static void C_ccall f_3943(C_word c,C_word *av) C_noret;
C_noret_decl(f_3966)
static void C_ccall f_3966(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_externexport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1136)
static void C_ccall trf_1136(C_word c,C_word *av) C_noret;
static void C_ccall trf_1136(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1136(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1218)
static void C_ccall trf_1218(C_word c,C_word *av) C_noret;
static void C_ccall trf_1218(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1218(t0,t1);}

C_noret_decl(trf_1228)
static void C_ccall trf_1228(C_word c,C_word *av) C_noret;
static void C_ccall trf_1228(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1228(t0,t1,t2);}

C_noret_decl(trf_1246)
static void C_ccall trf_1246(C_word c,C_word *av) C_noret;
static void C_ccall trf_1246(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1246(t0,t1,t2);}

C_noret_decl(trf_1389)
static void C_ccall trf_1389(C_word c,C_word *av) C_noret;
static void C_ccall trf_1389(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1389(t0,t1,t2,t3);}

C_noret_decl(trf_1497)
static void C_ccall trf_1497(C_word c,C_word *av) C_noret;
static void C_ccall trf_1497(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1497(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1556)
static void C_ccall trf_1556(C_word c,C_word *av) C_noret;
static void C_ccall trf_1556(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1556(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1563)
static void C_ccall trf_1563(C_word c,C_word *av) C_noret;
static void C_ccall trf_1563(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1563(t0,t1);}

C_noret_decl(trf_1639)
static void C_ccall trf_1639(C_word c,C_word *av) C_noret;
static void C_ccall trf_1639(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1639(t0,t1);}

C_noret_decl(trf_1730)
static void C_ccall trf_1730(C_word c,C_word *av) C_noret;
static void C_ccall trf_1730(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1730(t0,t1);}

C_noret_decl(trf_1852)
static void C_ccall trf_1852(C_word c,C_word *av) C_noret;
static void C_ccall trf_1852(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1852(t0,t1);}

C_noret_decl(trf_1898)
static void C_ccall trf_1898(C_word c,C_word *av) C_noret;
static void C_ccall trf_1898(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1898(t0,t1,t2,t3);}

C_noret_decl(trf_1936)
static void C_ccall trf_1936(C_word c,C_word *av) C_noret;
static void C_ccall trf_1936(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1936(t0,t1,t2);}

C_noret_decl(trf_1941)
static void C_ccall trf_1941(C_word c,C_word *av) C_noret;
static void C_ccall trf_1941(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1941(t0,t1);}

C_noret_decl(trf_2028)
static void C_ccall trf_2028(C_word c,C_word *av) C_noret;
static void C_ccall trf_2028(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_2028(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2031)
static void C_ccall trf_2031(C_word c,C_word *av) C_noret;
static void C_ccall trf_2031(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2031(t0,t1);}

C_noret_decl(trf_2059)
static void C_ccall trf_2059(C_word c,C_word *av) C_noret;
static void C_ccall trf_2059(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2059(t0,t1);}

C_noret_decl(trf_2132)
static void C_ccall trf_2132(C_word c,C_word *av) C_noret;
static void C_ccall trf_2132(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2132(t0,t1,t2,t3);}

C_noret_decl(trf_2151)
static void C_ccall trf_2151(C_word c,C_word *av) C_noret;
static void C_ccall trf_2151(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2151(t0,t1,t2,t3);}

C_noret_decl(trf_2154)
static void C_ccall trf_2154(C_word c,C_word *av) C_noret;
static void C_ccall trf_2154(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2154(t0,t1,t2,t3);}

C_noret_decl(trf_2181)
static void C_ccall trf_2181(C_word c,C_word *av) C_noret;
static void C_ccall trf_2181(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2181(t0,t1,t2,t3);}

C_noret_decl(trf_2199)
static void C_ccall trf_2199(C_word c,C_word *av) C_noret;
static void C_ccall trf_2199(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2199(t0,t1,t2,t3);}

C_noret_decl(trf_2385)
static void C_ccall trf_2385(C_word c,C_word *av) C_noret;
static void C_ccall trf_2385(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_2385(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2450)
static void C_ccall trf_2450(C_word c,C_word *av) C_noret;
static void C_ccall trf_2450(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2450(t0,t1,t2);}

C_noret_decl(trf_2551)
static void C_ccall trf_2551(C_word c,C_word *av) C_noret;
static void C_ccall trf_2551(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2551(t0,t1,t2);}

C_noret_decl(trf_2695)
static void C_ccall trf_2695(C_word c,C_word *av) C_noret;
static void C_ccall trf_2695(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2695(t0,t1,t2);}

C_noret_decl(trf_2752)
static void C_ccall trf_2752(C_word c,C_word *av) C_noret;
static void C_ccall trf_2752(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2752(t0,t1,t2,t3);}

C_noret_decl(trf_2755)
static void C_ccall trf_2755(C_word c,C_word *av) C_noret;
static void C_ccall trf_2755(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2755(t0,t1,t2,t3);}

C_noret_decl(trf_2788)
static void C_ccall trf_2788(C_word c,C_word *av) C_noret;
static void C_ccall trf_2788(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2788(t0,t1,t2,t3);}

C_noret_decl(trf_2822)
static void C_ccall trf_2822(C_word c,C_word *av) C_noret;
static void C_ccall trf_2822(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_2822(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2974)
static void C_ccall trf_2974(C_word c,C_word *av) C_noret;
static void C_ccall trf_2974(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_2974(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_3000)
static void C_ccall trf_3000(C_word c,C_word *av) C_noret;
static void C_ccall trf_3000(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_3000(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_3009)
static void C_ccall trf_3009(C_word c,C_word *av) C_noret;
static void C_ccall trf_3009(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_3009(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_3015)
static void C_ccall trf_3015(C_word c,C_word *av) C_noret;
static void C_ccall trf_3015(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3015(t0,t1,t2,t3);}

C_noret_decl(trf_3082)
static void C_ccall trf_3082(C_word c,C_word *av) C_noret;
static void C_ccall trf_3082(C_word c,C_word *av){
C_word t0=av[8];
C_word t1=av[7];
C_word t2=av[6];
C_word t3=av[5];
C_word t4=av[4];
C_word t5=av[3];
C_word t6=av[2];
C_word t7=av[1];
C_word t8=av[0];
f_3082(t0,t1,t2,t3,t4,t5,t6,t7,t8);}

C_noret_decl(trf_3085)
static void C_ccall trf_3085(C_word c,C_word *av) C_noret;
static void C_ccall trf_3085(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_3085(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_3124)
static void C_ccall trf_3124(C_word c,C_word *av) C_noret;
static void C_ccall trf_3124(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_3124(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_3163)
static void C_ccall trf_3163(C_word c,C_word *av) C_noret;
static void C_ccall trf_3163(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_3163(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3293)
static void C_ccall trf_3293(C_word c,C_word *av) C_noret;
static void C_ccall trf_3293(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3293(t0,t1,t2);}

C_noret_decl(trf_3303)
static void C_ccall trf_3303(C_word c,C_word *av) C_noret;
static void C_ccall trf_3303(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3303(t0,t1);}

C_noret_decl(trf_3458)
static void C_ccall trf_3458(C_word c,C_word *av) C_noret;
static void C_ccall trf_3458(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_3458(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3496)
static void C_ccall trf_3496(C_word c,C_word *av) C_noret;
static void C_ccall trf_3496(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3496(t0,t1,t2,t3);}

C_noret_decl(trf_3512)
static void C_ccall trf_3512(C_word c,C_word *av) C_noret;
static void C_ccall trf_3512(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3512(t0,t1);}

C_noret_decl(trf_3531)
static void C_ccall trf_3531(C_word c,C_word *av) C_noret;
static void C_ccall trf_3531(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3531(t0,t1);}

/* k1098 */
static void C_ccall f_1100(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_1100,c,av);}
a=C_alloc(19);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1103,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t4;
C_library_toplevel(2,av2);}}

/* k1101 in k1098 */
static void C_ccall f_1103(C_word c,C_word *av){
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
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(54,c,6)))){
C_save_and_reclaim((void *)f_1103,c,av);}
a=C_alloc(54);
t2=*((C_word*)lf[2]+1);
t3=C_mutate((C_word*)lf[3]+1 /* (set! chicken.io#read-list ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1105,a[2]=t2,a[3]=((C_word)li1),tmp=(C_word)a,a+=4,tmp));
t4=C_mutate((C_word*)lf[7]+1 /* (set! chicken.io#read-line ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1208,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[15]+1 /* (set! chicken.io#read-lines ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1361,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[19]+1 /* (set! chicken.io#write-line ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1451,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[23]+1 /* (set! chicken.io#read-string!/port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1479,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[24]+1 /* (set! chicken.io#read-string! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1611,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[26]+1 /* (set! chicken.io#read-string/port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1688,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[32]+1 /* (set! chicken.io#read-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1756,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[26]+1 /* (set! chicken.io#read-string/port ...) */,*((C_word*)lf[26]+1));
t12=C_mutate((C_word*)lf[23]+1 /* (set! chicken.io#read-string!/port ...) */,*((C_word*)lf[23]+1));
t13=C_mutate((C_word*)lf[34]+1 /* (set! chicken.io#read-buffered ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1809,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[37]+1 /* (set! chicken.io#read-token ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1837,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[29]+1 /* (set! chicken.io#write-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1893,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[40]+1 /* (set! chicken.io#read-byte ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1976,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[42]+1 /* (set! chicken.io#write-byte ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2003,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t18=C_a_i_provide(&a,1,lf[44]);
t19=C_mutate(&lf[45] /* (set! chicken.pretty-print#generic-write ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2028,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp));
t20=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3432,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* extras.scm:551: chicken.base#make-parameter */
t21=*((C_word*)lf[165]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t21;
av2[1]=t20;
av2[2]=C_fix(79);
((C_proc)(void*)(*((C_word*)t21+1)))(3,av2);}}

/* chicken.io#read-list in k1101 in k1098 */
static void C_ccall f_1105(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_1105,c,av);}
a=C_alloc(6);
t2=C_rest_nullp(c,2);
t3=(C_truep(t2)?*((C_word*)lf[4]+1):C_get_rest_arg(c,2,av,2,t0));
t4=C_rest_nullp(c,2);
t5=C_rest_nullp(c,3);
t6=(C_truep(t5)?((C_word*)t0)[2]:C_get_rest_arg(c,3,av,2,t0));
t7=C_rest_nullp(c,3);
t8=C_rest_nullp(c,4);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,2,t0));
t10=C_rest_nullp(c,4);
t11=C_i_check_port_2(t3,C_fix(1),C_SCHEME_TRUE,lf[5]);
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1134,a[2]=t9,a[3]=t6,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* extras.scm:48: reader */
t13=t6;{
C_word av2[3];
av2[0]=t13;
av2[1]=t12;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t13))(3,av2);}}

/* k1132 in chicken.io#read-list in k1101 in k1098 */
static void C_ccall f_1134(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_1134,c,av);}
a=C_alloc(9);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1136,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word)li0),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_1136(t5,((C_word*)t0)[5],t1,C_fix(0),C_SCHEME_END_OF_LIST);}

/* doloop98 in k1132 in chicken.io#read-list in k1101 in k1098 */
static void C_fcall f_1136(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_1136,5,t0,t1,t2,t3,t4);}
a=C_alloc(7);
t5=C_eofp(t2);
t6=(C_truep(t5)?t5:(C_truep(((C_word*)t0)[2])?C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[2]):C_SCHEME_FALSE));
if(C_truep(t6)){
/* extras.scm:52: ##sys#fast-reverse */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[6]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[6]+1);
av2[1]=t1;
av2[2]=t4;
tp(3,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1156,a[2]=t3,a[3]=t2,a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* extras.scm:48: reader */
t8=((C_word*)t0)[4];{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t8))(3,av2);}}}

/* k1154 in doloop98 in k1132 in chicken.io#read-list in k1101 in k1098 */
static void C_ccall f_1156(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_1156,c,av);}
a=C_alloc(3);
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t4=((C_word*)((C_word*)t0)[5])[1];
f_1136(t4,((C_word*)t0)[6],t1,t2,t3);}

/* chicken.io#read-line in k1101 in k1098 */
static void C_ccall f_1208(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_1208,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t3=C_i_pairp(t2);
t4=(C_truep(t3)?C_get_rest_arg(c,2,av,2,t0):*((C_word*)lf[4]+1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1218,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t6=C_i_cdr(t2);
t7=C_i_pairp(t6);
t8=t5;
f_1218(t8,(C_truep(t7)?C_i_cadr(t2):C_SCHEME_FALSE));}
else{
t6=t5;
f_1218(t6,C_SCHEME_FALSE);}}

/* k1216 in chicken.io#read-line in k1101 in k1098 */
static void C_fcall f_1218(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_1218,2,t0,t1);}
a=C_alloc(8);
t2=C_i_check_port_2(((C_word*)t0)[2],C_fix(1),C_SCHEME_TRUE,lf[8]);
t3=C_slot(((C_word*)t0)[2],C_fix(2));
t4=C_slot(t3,C_fix(8));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1228,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word)li2),tmp=(C_word)a,a+=5,tmp);
/* extras.scm:64: g122 */
t6=t5;
f_1228(t6,((C_word*)t0)[3],t4);}
else{
t5=(C_truep(t1)?t1:C_fix(256));
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1241,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t7,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:67: ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[14]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t8;
av2[2]=((C_word*)t7)[1];
tp(3,av2);}}}

/* g122 in k1216 in chicken.io#read-line in k1101 in k1098 */
static void C_fcall f_1228(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_1228,3,t0,t1,t2);}
/* extras.scm:64: rl */
t3=t2;{
C_word av2[4];
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}

/* k1239 in k1216 in chicken.io#read-line in k1101 in k1098 */
static void C_ccall f_1241(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_1241,c,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1246,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t5,a[7]=((C_word)li3),tmp=(C_word)a,a+=8,tmp));
t7=((C_word*)t5)[1];
f_1246(t7,((C_word*)t0)[5],C_fix(0));}

/* loop in k1239 in k1216 in chicken.io#read-line in k1101 in k1098 */
static void C_fcall f_1246(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_1246,3,t0,t1,t2);}
a=C_alloc(8);
t3=(C_truep(((C_word*)t0)[2])?C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]):C_SCHEME_FALSE);
if(C_truep(t3)){
/* extras.scm:70: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t1;
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=C_fix(0);
av2[4]=t2;
tp(5,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1259,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* extras.scm:71: ##sys#read-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[10]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[10]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}}

/* k1257 in loop in k1239 in k1216 in chicken.io#read-line in k1101 in k1098 */
static void C_ccall f_1259(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_1259,c,av);}
a=C_alloc(12);
if(C_truep(C_eofp(t1))){
t2=C_eqp(((C_word*)t0)[2],C_fix(0));
if(C_truep(t2)){
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* extras.scm:75: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[9]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)((C_word*)t0)[4])[1];
av2[3]=C_fix(0);
av2[4]=((C_word*)t0)[2];
tp(5,av2);}}}
else{
switch(t1){
case C_make_character(10):
/* extras.scm:77: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[9]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)((C_word*)t0)[4])[1];
av2[3]=C_fix(0);
av2[4]=((C_word*)t0)[2];
tp(5,av2);}
case C_make_character(13):
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1292,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:79: scheme#peek-char */
t3=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}
default:
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)t0)[2],((C_word*)((C_word*)t0)[6])[1]))){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1324,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1332,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:87: scheme#make-string */
t4=*((C_word*)lf[13]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[6])[1];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t2=C_setsubchar(((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[2],t1);
/* extras.scm:90: loop */
t3=((C_word*)((C_word*)t0)[7])[1];
f_1246(t3,((C_word*)t0)[3],C_fixnum_plus(((C_word*)t0)[2],C_fix(1)));}}}}

/* k1290 in k1257 in loop in k1239 in k1216 in chicken.io#read-line in k1101 in k1098 */
static void C_ccall f_1292(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_1292,c,av);}
a=C_alloc(5);
if(C_truep(C_i_char_equalp(t1,C_make_character(10)))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1301,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:81: ##sys#read-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[10]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[10]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}
else{
/* extras.scm:83: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[9]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=C_fix(0);
av2[4]=((C_word*)t0)[4];
tp(5,av2);}}}

/* k1299 in k1290 in k1257 in loop in k1239 in k1216 in chicken.io#read-line in k1101 in k1098 */
static void C_ccall f_1301(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1301,c,av);}
/* extras.scm:82: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[9]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=C_fix(0);
av2[4]=((C_word*)t0)[4];
tp(5,av2);}}

/* k1322 in k1257 in loop in k1239 in k1216 in chicken.io#read-line in k1101 in k1098 */
static void C_ccall f_1324(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1324,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_fixnum_plus(((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[3])[1]);
t4=C_set_block_item(((C_word*)t0)[3],0,t3);
t5=C_setsubchar(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[4],((C_word*)t0)[5]);
/* extras.scm:90: loop */
t6=((C_word*)((C_word*)t0)[6])[1];
f_1246(t6,((C_word*)t0)[7],C_fixnum_plus(((C_word*)t0)[4],C_fix(1)));}

/* k1330 in k1257 in loop in k1239 in k1216 in chicken.io#read-line in k1101 in k1098 */
static void C_ccall f_1332(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1332,c,av);}
/* extras.scm:87: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[12]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[12]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=t1;
tp(4,av2);}}

/* chicken.io#read-lines in k1101 in k1098 */
static void C_ccall f_1361(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_1361,c,av);}
a=C_alloc(5);
t2=C_rest_nullp(c,2);
t3=(C_truep(t2)?*((C_word*)lf[4]+1):C_get_rest_arg(c,2,av,2,t0));
t4=C_rest_nullp(c,2);
t5=C_rest_nullp(c,3);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,2,t0));
t7=C_rest_nullp(c,3);
t8=C_i_check_port_2(t3,C_fix(1),C_SCHEME_TRUE,lf[16]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1380,a[2]=t6,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t6)){
/* extras.scm:95: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[18]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[18]+1);
av2[1]=t9;
av2[2]=t6;
av2[3]=lf[16];
tp(4,av2);}}
else{
t10=t9;{
C_word *av2=av;
av2[0]=t10;
av2[1]=C_SCHEME_UNDEFINED;
f_1380(2,av2);}}}

/* k1378 in chicken.io#read-lines in k1101 in k1098 */
static void C_ccall f_1380(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_1380,c,av);}
a=C_alloc(7);
t2=(C_truep(((C_word*)t0)[2])?((C_word*)t0)[2]:*((C_word*)lf[17]+1));
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1389,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word)li5),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_1389(t6,((C_word*)t0)[4],C_SCHEME_END_OF_LIST,t2);}

/* loop in k1378 in chicken.io#read-lines in k1101 in k1098 */
static void C_fcall f_1389(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_1389,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=C_eqp(t3,C_fix(0));
if(C_truep(t4)){
/* extras.scm:99: ##sys#fast-reverse */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[6]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[6]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1402,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* extras.scm:100: read-line */
t6=*((C_word*)lf[7]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}

/* k1400 in loop in k1378 in chicken.io#read-lines in k1101 in k1098 */
static void C_ccall f_1402(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_1402,c,av);}
a=C_alloc(3);
if(C_truep(C_eofp(t1))){
/* extras.scm:102: ##sys#fast-reverse */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[6]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[6]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[3]);
/* extras.scm:103: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1389(t3,((C_word*)t0)[2],t2,C_fixnum_difference(((C_word*)t0)[5],C_fix(1)));}}

/* chicken.io#write-line in k1101 in k1098 */
static void C_ccall f_1451(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +4,c,3)))){
C_save_and_reclaim((void*)f_1451,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+4);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
t4=(C_truep(C_eqp(t3,C_SCHEME_END_OF_LIST))?*((C_word*)lf[20]+1):C_slot(t3,C_fix(0)));
t5=C_i_check_port_2(t4,C_fix(2),C_SCHEME_TRUE,lf[21]);
t6=C_i_check_string_2(t2,lf[21]);
t7=C_slot(t4,C_fix(2));
t8=C_slot(t7,C_fix(3));
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1467,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* extras.scm:107: g174 */
t10=t8;{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t10;
av2[1]=t9;
av2[2]=t4;
av2[3]=t2;
((C_proc)C_fast_retrieve_proc(t10))(4,av2);}}

/* k1465 in chicken.io#write-line in k1101 in k1098 */
static void C_ccall f_1467(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1467,c,av);}
/* extras.scm:113: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[22]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* chicken.io#read-string!/port in k1101 in k1098 */
static void C_ccall f_1479(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_1479,c,av);}
a=C_alloc(9);
t6=C_eqp(t2,C_fix(0));
if(C_truep(t6)){
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_fix(0);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t7=C_slot(t4,C_fix(2));
t8=C_slot(t7,C_fix(7));
if(C_truep(t8)){
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1497,a[2]=t4,a[3]=t10,a[4]=t8,a[5]=t3,a[6]=((C_word)li8),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_1497(t12,t1,t5,t2,C_fix(0));}
else{
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1556,a[2]=t10,a[3]=t3,a[4]=t4,a[5]=((C_word)li9),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_1556(t12,t1,t5,t2,C_fix(0));}}}

/* loop in chicken.io#read-string!/port in k1101 in k1098 */
static void C_fcall f_1497(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,5)))){
C_save_and_reclaim_args((void *)trf_1497,5,t0,t1,t2,t3,t4);}
a=C_alloc(8);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1501,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
/* extras.scm:124: rdstring */
t6=((C_word*)t0)[4];{
C_word av2[6];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[2];
av2[3]=t3;
av2[4]=((C_word*)t0)[5];
av2[5]=t2;
((C_proc)C_fast_retrieve_proc(t6))(6,av2);}}

/* k1499 in loop in chicken.io#read-string!/port in k1101 in k1098 */
static void C_ccall f_1501(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1501,c,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(5));
t3=C_fixnum_plus(t2,t1);
t4=C_i_set_i_slot(((C_word*)t0)[2],C_fix(5),t3);
t5=C_eqp(t1,C_fix(0));
if(C_truep(t5)){
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_i_not(((C_word*)t0)[5]);
t7=(C_truep(t6)?t6:C_fixnum_lessp(t1,((C_word*)t0)[5]));
if(C_truep(t7)){
t8=C_fixnum_plus(((C_word*)t0)[6],t1);
t9=(C_truep(((C_word*)t0)[5])?C_fixnum_difference(((C_word*)t0)[5],t1):C_SCHEME_FALSE);
/* extras.scm:129: loop */
t10=((C_word*)((C_word*)t0)[7])[1];
f_1497(t10,((C_word*)t0)[3],t8,t9,C_fixnum_plus(((C_word*)t0)[4],t1));}
else{
t8=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_fixnum_plus(t1,((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}}

/* loop in chicken.io#read-string!/port in k1101 in k1098 */
static void C_fcall f_1556(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_1556,5,t0,t1,t2,t3,t4);}
a=C_alloc(8);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1560,a[2]=t1,a[3]=t4,a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
/* extras.scm:132: ##sys#read-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[10]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[10]+1);
av2[1]=t5;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* k1558 in loop in chicken.io#read-string!/port in k1101 in k1098 */
static void C_ccall f_1560(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_1560,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1563,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_eofp(t1))){
t3=t2;
f_1563(t3,C_fix(0));}
else{
t3=C_setsubchar(((C_word*)t0)[7],((C_word*)t0)[5],t1);
t4=t2;
f_1563(t4,C_fix(1));}}

/* k1561 in k1558 in loop in chicken.io#read-string!/port in k1101 in k1098 */
static void C_fcall f_1563(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_1563,2,t0,t1);}
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_not(((C_word*)t0)[4]);
t4=(C_truep(t3)?t3:C_fixnum_lessp(t1,((C_word*)t0)[4]));
if(C_truep(t4)){
t5=C_fixnum_plus(((C_word*)t0)[5],t1);
t6=(C_truep(((C_word*)t0)[4])?C_fixnum_difference(((C_word*)t0)[4],t1):C_SCHEME_FALSE);
/* extras.scm:140: loop */
t7=((C_word*)((C_word*)t0)[6])[1];
f_1556(t7,((C_word*)t0)[2],t5,t6,C_fixnum_plus(((C_word*)t0)[3],t1));}
else{
t5=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t5;
av2[1]=C_fixnum_plus(t1,((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}}

/* chicken.io#read-string! in k1101 in k1098 */
static void C_ccall f_1611(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
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
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_1611,c,av);}
a=C_alloc(9);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t5=C_rest_nullp(c,4);
t6=(C_truep(t5)?*((C_word*)lf[4]+1):C_get_rest_arg(c,4,av,4,t0));
t7=C_rest_nullp(c,4);
t8=C_rest_nullp(c,5);
t9=(C_truep(t8)?C_fix(0):C_get_rest_arg(c,5,av,4,t0));
t10=C_rest_nullp(c,5);
t11=C_i_check_port_2(t6,C_fix(1),C_SCHEME_TRUE,lf[25]);
t12=C_i_check_string_2(t3,lf[25]);
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1633,a[2]=t3,a[3]=t1,a[4]=t4,a[5]=t6,a[6]=t9,tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t4)[1])){
/* extras.scm:146: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[18]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[18]+1);
av2[1]=t13;
av2[2]=((C_word*)t4)[1];
av2[3]=lf[25];
tp(4,av2);}}
else{
t14=t13;{
C_word *av2=av;
av2[0]=t14;
av2[1]=C_SCHEME_UNDEFINED;
f_1633(2,av2);}}}

/* k1631 in chicken.io#read-string! in k1101 in k1098 */
static void C_ccall f_1633(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_1633,c,av);}
a=C_alloc(7);
t2=C_block_size(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1639,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t4=(C_truep(((C_word*)((C_word*)t0)[4])[1])?C_fixnum_less_or_equal_p(C_fixnum_plus(((C_word*)t0)[6],((C_word*)((C_word*)t0)[4])[1]),t2):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=t3;
f_1639(t5,C_SCHEME_UNDEFINED);}
else{
t5=C_fixnum_difference(t2,((C_word*)t0)[6]);
t6=C_set_block_item(((C_word*)t0)[4],0,t5);
t7=t3;
f_1639(t7,t6);}}

/* k1637 in k1631 in chicken.io#read-string! in k1101 in k1098 */
static void C_fcall f_1639(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_1639,2,t0,t1);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1642,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:150: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[18]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[18]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=lf[25];
tp(4,av2);}}

/* k1640 in k1637 in k1631 in chicken.io#read-string! in k1101 in k1098 */
static void C_ccall f_1642(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1642,c,av);}
/* extras.scm:151: read-string!/port */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[23]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[23]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
av2[5]=((C_word*)t0)[6];
tp(6,av2);}}

/* chicken.io#read-string/port in k1101 in k1098 */
static void C_ccall f_1688(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1688,c,av);}
a=C_alloc(5);
t4=C_eqp(t2,C_fix(0));
if(C_truep(t4)){
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=lf[27];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1754,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:158: ##sys#peek-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[31]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[31]+1);
av2[1]=t5;
av2[2]=t3;
tp(3,av2);}}}

/* k1705 in k1752 in chicken.io#read-string/port in k1101 in k1098 */
static void C_ccall f_1707(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_1707,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1710,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:160: read-string!/port */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[23]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[23]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
av2[3]=t1;
av2[4]=((C_word*)t0)[4];
av2[5]=C_fix(0);
tp(6,av2);}}

/* k1708 in k1705 in k1752 in chicken.io#read-string/port in k1101 in k1098 */
static void C_ccall f_1710(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1710,c,av);}
t2=C_eqp(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* extras.scm:163: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[9]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(0);
av2[4]=t1;
tp(5,av2);}}}

/* k1720 in k1752 in chicken.io#read-string/port in k1101 in k1098 */
static void C_ccall f_1722(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_1722,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1725,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[14]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t2;
av2[2]=C_fix(2048);
av2[3]=C_make_character(32);
tp(4,av2);}}

/* k1723 in k1720 in k1752 in chicken.io#read-string/port in k1101 in k1098 */
static void C_ccall f_1725(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_1725,c,av);}
a=C_alloc(9);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1730,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word)li12),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_1730(t5,((C_word*)t0)[4]);}

/* loop in k1723 in k1720 in k1752 in chicken.io#read-string/port in k1101 in k1098 */
static void C_fcall f_1730(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,5)))){
C_save_and_reclaim_args((void *)trf_1730,2,t0,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1734,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:168: read-string!/port */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[23]+1));
C_word av2[6];
av2[0]=*((C_word*)lf[23]+1);
av2[1]=t2;
av2[2]=C_fix(2048);
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
av2[5]=C_fix(0);
tp(6,av2);}}

/* k1732 in loop in k1723 in k1720 in k1752 in chicken.io#read-string/port in k1101 in k1098 */
static void C_ccall f_1734(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_1734,c,av);}
a=C_alloc(4);
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
/* extras.scm:170: chicken.base#get-output-string */
t3=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1746,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:172: write-string */
t4=*((C_word*)lf[29]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=t1;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}

/* k1744 in k1732 in loop in k1723 in k1720 in k1752 in chicken.io#read-string/port in k1101 in k1098 */
static void C_ccall f_1746(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1746,c,av);}
/* extras.scm:173: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1730(t2,((C_word*)t0)[3]);}

/* k1752 in chicken.io#read-string/port in k1101 in k1098 */
static void C_ccall f_1754(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1754,c,av);}
a=C_alloc(5);
if(C_truep(C_eofp(t1))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_FILE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(((C_word*)t0)[3])){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1707,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:159: ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[14]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1722,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:165: chicken.base#open-output-string */
t3=*((C_word*)lf[30]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}}

/* chicken.io#read-string in k1101 in k1098 */
static void C_ccall f_1756(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_1756,c,av);}
a=C_alloc(5);
t2=C_rest_nullp(c,2);
t3=(C_truep(t2)?C_SCHEME_FALSE:C_get_rest_arg(c,2,av,2,t0));
t4=C_rest_nullp(c,2);
t5=C_rest_nullp(c,3);
t6=(C_truep(t5)?*((C_word*)lf[4]+1):C_get_rest_arg(c,3,av,2,t0));
t7=C_rest_nullp(c,3);
t8=C_i_check_port_2(t6,C_fix(1),C_SCHEME_TRUE,lf[33]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1775,a[2]=t1,a[3]=t3,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
/* extras.scm:177: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[18]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[18]+1);
av2[1]=t9;
av2[2]=t3;
av2[3]=lf[33];
tp(4,av2);}}
else{
/* extras.scm:178: read-string/port */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[26]+1);
av2[1]=t1;
av2[2]=t3;
av2[3]=t6;
tp(4,av2);}}}

/* k1773 in chicken.io#read-string in k1101 in k1098 */
static void C_ccall f_1775(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1775,c,av);}
/* extras.scm:178: read-string/port */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[26]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}

/* chicken.io#read-buffered in k1101 in k1098 */
static void C_ccall f_1809(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1809,c,av);}
t2=C_rest_nullp(c,2);
t3=(C_truep(t2)?*((C_word*)lf[4]+1):C_get_rest_arg(c,2,av,2,t0));
t4=C_i_check_port_2(t3,C_fix(1),C_SCHEME_TRUE,lf[35]);
t5=C_slot(t3,C_fix(2));
t6=C_slot(t5,C_fix(9));
if(C_truep(t6)){
/* extras.scm:190: rb */
t7=t6;{
C_word av2[3];
av2[0]=t7;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t7))(3,av2);}}
else{
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=lf[36];
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* chicken.io#read-token in k1101 in k1098 */
static void C_ccall f_1837(C_word c,C_word *av){
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
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1837,c,av);}
a=C_alloc(5);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?*((C_word*)lf[4]+1):C_get_rest_arg(c,3,av,3,t0));
t5=C_i_check_port_2(t4,C_fix(1),C_SCHEME_TRUE,lf[38]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1847,a[2]=t4,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:200: chicken.base#open-output-string */
t7=*((C_word*)lf[30]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* k1845 in chicken.io#read-token in k1101 in k1098 */
static void C_ccall f_1847(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_1847,c,av);}
a=C_alloc(9);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1852,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word)li16),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_1852(t5,((C_word*)t0)[4]);}

/* loop in k1845 in chicken.io#read-token in k1101 in k1098 */
static void C_fcall f_1852(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_1852,2,t0,t1);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1856,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:202: ##sys#peek-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[31]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[31]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* k1854 in loop in k1845 in chicken.io#read-token in k1101 in k1098 */
static void C_ccall f_1856(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_1856,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1862,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_eofp(t1);
if(C_truep(C_i_not(t3))){
/* extras.scm:203: pred */
t4=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t1;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}
else{
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_1862(2,av2);}}}

/* k1860 in k1854 in loop in k1845 in chicken.io#read-token in k1101 in k1098 */
static void C_ccall f_1862(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_1862,c,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1865,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1872,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:205: ##sys#read-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[10]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[10]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}
else{
/* extras.scm:207: chicken.base#get-output-string */
t2=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* k1863 in k1860 in k1854 in loop in k1845 in chicken.io#read-token in k1101 in k1098 */
static void C_ccall f_1865(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1865,c,av);}
/* extras.scm:206: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1852(t2,((C_word*)t0)[3]);}

/* k1870 in k1860 in k1854 in loop in k1845 in chicken.io#read-token in k1101 in k1098 */
static void C_ccall f_1872(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1872,c,av);}
/* extras.scm:205: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[22]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* chicken.io#write-string in k1101 in k1098 */
static void C_ccall f_1893(C_word c,C_word *av){
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
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_1893,c,av);}
a=C_alloc(12);
t3=C_i_check_string_2(t2,lf[39]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1898,a[2]=t2,a[3]=((C_word)li18),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1936,a[2]=t4,a[3]=((C_word)li19),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1941,a[2]=t5,a[3]=((C_word)li20),tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_rest_nullp(c,3))){
/* extras.scm:212: def-n319 */
t7=t6;
f_1941(t7,t1);}
else{
t7=C_get_rest_arg(c,3,av,3,t0);
if(C_truep(C_rest_nullp(c,4))){
/* extras.scm:212: def-port320 */
t8=t5;
f_1936(t8,t1,t7);}
else{
t8=C_get_rest_arg(c,4,av,3,t0);
/* extras.scm:212: body317 */
t9=t4;
f_1898(t9,t1,t7,t8);}}}

/* body317 in chicken.io#write-string in k1101 in k1098 */
static void C_fcall f_1898(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_1898,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=C_i_check_port_2(t3,C_fix(2),C_SCHEME_TRUE,lf[39]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1905,a[2]=t3,a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
/* extras.scm:214: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[18]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[18]+1);
av2[1]=t5;
av2[2]=t2;
av2[3]=lf[39];
tp(4,av2);}}
else{
t6=t5;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_1905(2,av2);}}}

/* k1903 in body317 in chicken.io#write-string in k1101 in k1098 */
static void C_ccall f_1905(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_1905,c,av);}
a=C_alloc(5);
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=C_slot(t2,C_fix(3));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1915,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t5=(C_truep(((C_word*)t0)[4])?C_fixnum_lessp(((C_word*)t0)[4],C_block_size(((C_word*)t0)[5])):C_SCHEME_FALSE);
if(C_truep(t5)){
/* extras.scm:218: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(0);
av2[4]=((C_word*)t0)[4];
tp(5,av2);}}
else{
/* extras.scm:212: g329 */
t6=t3;{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t6))(4,av2);}}}

/* k1913 in k1903 in body317 in chicken.io#write-string in k1101 in k1098 */
static void C_ccall f_1915(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1915,c,av);}
/* extras.scm:212: g329 */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t1;
((C_proc)C_fast_retrieve_proc(t2))(4,av2);}}

/* def-port320 in chicken.io#write-string in k1101 in k1098 */
static void C_fcall f_1936(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_1936,3,t0,t1,t2);}
/* extras.scm:212: body317 */
t3=((C_word*)t0)[2];
f_1898(t3,t1,t2,*((C_word*)lf[20]+1));}

/* def-n319 in chicken.io#write-string in k1101 in k1098 */
static void C_fcall f_1941(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_1941,2,t0,t1);}
/* extras.scm:212: def-port320 */
t2=((C_word*)t0)[2];
f_1936(t2,t1,C_SCHEME_FALSE);}

/* chicken.io#read-byte in k1101 in k1098 */
static void C_ccall f_1976(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1976,c,av);}
a=C_alloc(3);
t2=C_rest_nullp(c,2);
t3=(C_truep(t2)?*((C_word*)lf[4]+1):C_get_rest_arg(c,2,av,2,t0));
t4=C_i_check_port_2(t3,C_fix(1),C_SCHEME_TRUE,lf[41]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1986,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:226: ##sys#read-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[10]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[10]+1);
av2[1]=t5;
av2[2]=t3;
tp(3,av2);}}

/* k1984 in chicken.io#read-byte in k1101 in k1098 */
static void C_ccall f_1986(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1986,c,av);}
t2=C_eofp(t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(t2)?t1:C_fix(C_character_code(t1)));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.io#write-byte in k1101 in k1098 */
static void C_ccall f_2003(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_2003,c,av);}
a=C_alloc(5);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?*((C_word*)lf[20]+1):C_get_rest_arg(c,3,av,3,t0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2010,a[2]=t4,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:232: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[18]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[18]+1);
av2[1]=t5;
av2[2]=t2;
av2[3]=lf[43];
tp(4,av2);}}

/* k2008 in chicken.io#write-byte in k1101 in k1098 */
static void C_ccall f_2010(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2010,c,av);}
t2=C_i_check_port_2(((C_word*)t0)[2],C_fix(2),C_SCHEME_TRUE,lf[43]);
/* extras.scm:234: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[22]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=C_make_character(C_unfix(((C_word*)t0)[4]));
av2[3]=((C_word*)t0)[2];
tp(4,av2);}}

/* chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_fcall f_2028(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(43,0,4)))){
C_save_and_reclaim_args((void *)trf_2028,5,t1,t2,t3,t4,t5);}
a=C_alloc(43);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2031,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp));
t17=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2093,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t18=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2132,a[2]=t5,a[3]=((C_word)li26),tmp=(C_word)a,a+=4,tmp));
t19=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2151,a[2]=t13,a[3]=t9,a[4]=t11,a[5]=t7,a[6]=t3,a[7]=((C_word)li34),tmp=(C_word)a,a+=8,tmp));
t20=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2752,a[2]=t11,a[3]=t3,a[4]=t4,a[5]=t13,a[6]=t9,a[7]=t7,a[8]=((C_word)li58),tmp=(C_word)a,a+=9,tmp));
if(C_truep(t4)){
t21=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3419,a[2]=t11,a[3]=t1,a[4]=t15,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[14]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t21;
av2[2]=C_fix(1);
av2[3]=C_make_character(10);
tp(4,av2);}}
else{
/* extras.scm:546: wr */
t21=((C_word*)t13)[1];
f_2151(t21,t1,t2,C_fix(0));}}

/* read-macro? in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_fcall f_2031(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_2031,2,t1,t2);}
a=C_alloc(4);
t3=C_i_car(t2);
t4=C_u_i_cdr(t2);
t5=C_eqp(t3,lf[46]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2059,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t5)){
t7=t6;
f_2059(t7,t5);}
else{
t7=C_eqp(t3,lf[47]);
if(C_truep(t7)){
t8=t6;
f_2059(t8,t7);}
else{
t8=C_eqp(t3,lf[48]);
t9=t6;
f_2059(t9,(C_truep(t8)?t8:C_eqp(t3,lf[49])));}}}

/* k2057 in read-macro? in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_fcall f_2059(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,1)))){
C_save_and_reclaim_args((void *)trf_2059,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_pairp(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t3;
av2[1]=(C_truep(t2)?C_i_nullp(C_u_i_cdr(((C_word*)t0)[2])):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* read-macro-prefix in chicken.pretty-print#generic-write in k1101 in k1098 */
static C_word C_fcall f_2093(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_stack_overflow_check;{}
t2=C_i_car(t1);
t3=C_u_i_cdr(t1);
t4=C_eqp(t2,lf[46]);
if(C_truep(t4)){
return(lf[50]);}
else{
t5=C_eqp(t2,lf[47]);
if(C_truep(t5)){
return(lf[51]);}
else{
t6=C_eqp(t2,lf[48]);
if(C_truep(t6)){
return(lf[52]);}
else{
t7=C_eqp(t2,lf[49]);
return((C_truep(t7)?lf[53]:C_SCHEME_UNDEFINED));}}}}

/* out in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_fcall f_2132(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2132,4,t0,t1,t2,t3);}
a=C_alloc(5);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2142,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:275: output */
t5=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2140 in out in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2142(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,1)))){
C_save_and_reclaim((void *)f_2142,c,av);}
a=C_alloc(29);
if(C_truep(t1)){
t2=C_i_string_length(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_s_a_i_plus(&a,2,((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_fcall f_2151(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(22,0,4)))){
C_save_and_reclaim_args((void *)trf_2151,4,t0,t1,t2,t3);}
a=C_alloc(22);
t4=C_SCHEME_UNDEFINED;
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2154,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t6,a[6]=((C_word*)t0)[5],a[7]=((C_word)li27),tmp=(C_word)a,a+=8,tmp);
t8=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2181,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word)li29),tmp=(C_word)a,a+=5,tmp));
if(C_truep(C_i_pairp(t2))){
/* extras.scm:295: wr-expr */
t9=t4;
f_2154(t9,t1,t2,t3);}
else{
if(C_truep(C_i_nullp(t2))){
/* extras.scm:296: wr-lst */
t9=((C_word*)t6)[1];
f_2181(t9,t1,t2,t3);}
else{
if(C_truep(C_eofp(t2))){
/* extras.scm:297: out */
t9=((C_word*)((C_word*)t0)[4])[1];
f_2132(t9,t1,lf[60],t3);}
else{
if(C_truep(C_i_vectorp(t2))){
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2299,a[2]=t6,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* extras.scm:298: scheme#vector->list */
t10=*((C_word*)lf[62]+1);{
C_word av2[3];
av2[0]=t10;
av2[1]=t9;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
if(C_truep(C_booleanp(t2))){
if(C_truep(t2)){
/* extras.scm:299: out */
t9=((C_word*)((C_word*)t0)[4])[1];
f_2132(t9,t1,lf[63],t3);}
else{
/* extras.scm:299: out */
t9=((C_word*)((C_word*)t0)[4])[1];
f_2132(t9,t1,lf[64],t3);}}
else{
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2322,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:300: ##sys#number? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[98]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[98]+1);
av2[1]=t9;
av2[2]=t2;
tp(3,av2);}}}}}}}

/* wr-expr in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_fcall f_2154(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_2154,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2161,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t3,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
/* extras.scm:280: read-macro? */
f_2031(t4,t2);}

/* k2159 in wr-expr in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2161(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_2161,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2172,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(
/* extras.scm:281: read-macro-prefix */
  f_2093(((C_word*)t0)[2])
);
/* extras.scm:281: out */
t5=((C_word*)((C_word*)t0)[6])[1];
f_2132(t5,t3,t4,((C_word*)t0)[7]);}
else{
/* extras.scm:282: wr-lst */
t2=((C_word*)((C_word*)t0)[8])[1];
f_2181(t2,((C_word*)t0)[4],((C_word*)t0)[2],((C_word*)t0)[7]);}}

/* k2170 in k2159 in wr-expr in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2172(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2172,c,av);}
/* extras.scm:281: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2151(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* wr-lst in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_fcall f_2181(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_2181,4,t0,t1,t2,t3);}
a=C_alloc(11);
if(C_truep(C_i_pairp(t2))){
t4=C_u_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2197,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t6=C_u_i_car(t2);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2256,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:287: out */
t8=((C_word*)((C_word*)t0)[3])[1];
f_2132(t8,t7,lf[58],t3);}
else{
t6=t5;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
f_2197(2,av2);}}}
else{
/* extras.scm:293: out */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2132(t4,t1,lf[59],t3);}}

/* k2195 in wr-lst in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2197(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_2197,c,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2199,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li28),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2199(t5,((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* loop in k2195 in wr-lst in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_fcall f_2199(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,3)))){
C_save_and_reclaim_args((void *)trf_2199,4,t0,t1,t2,t3);}
a=C_alloc(10);
if(C_truep(C_i_not(t3))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_i_pairp(t2))){
t4=C_u_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2221,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=C_u_i_car(t2);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2227,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:290: out */
t8=((C_word*)((C_word*)t0)[4])[1];
f_2132(t8,t7,lf[54],t3);}
else{
if(C_truep(C_i_nullp(t2))){
/* extras.scm:291: out */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2132(t4,t1,lf[55],t3);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2243,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2247,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:292: out */
t6=((C_word*)((C_word*)t0)[4])[1];
f_2132(t6,t5,lf[57],t3);}}}}

/* k2219 in loop in k2195 in wr-lst in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2221(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2221,c,av);}
/* extras.scm:290: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2199(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2225 in loop in k2195 in wr-lst in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2227(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2227,c,av);}
/* extras.scm:290: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2151(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2241 in loop in k2195 in wr-lst in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2243(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2243,c,av);}
/* extras.scm:292: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2132(t2,((C_word*)t0)[3],lf[56],t1);}

/* k2245 in loop in k2195 in wr-lst in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2247(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2247,c,av);}
/* extras.scm:292: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2151(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2254 in wr-lst in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2256(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2256,c,av);}
/* extras.scm:287: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2151(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2297 in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2299(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_2299,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2303,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:298: out */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2132(t3,t2,lf[61],((C_word*)t0)[5]);}

/* k2301 in k2297 in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2303(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2303,c,av);}
/* extras.scm:298: wr-lst */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2181(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2320 in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2322(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_2322,c,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2329,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:300: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[65]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[65]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2335,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:301: chicken.keyword#keyword? */
t3=*((C_word*)lf[97]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k2327 in k2320 in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2329(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2329,c,av);}
/* extras.scm:300: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2132(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2333 in k2320 in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2335(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_2335,c,av);}
a=C_alloc(7);
t2=(C_truep(t1)?t1:C_i_symbolp(((C_word*)t0)[2]));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2341,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:302: chicken.base#open-output-string */
t4=*((C_word*)lf[30]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_i_closurep(((C_word*)t0)[2]))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2364,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:305: ##sys#procedure->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[67]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[67]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}
else{
if(C_truep(C_i_stringp(((C_word*)t0)[2]))){
if(C_truep(((C_word*)t0)[6])){
/* extras.scm:308: out */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2132(t3,((C_word*)t0)[4],((C_word*)t0)[2],((C_word*)t0)[5]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2383,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:309: out */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2132(t4,t3,lf[75],((C_word*)t0)[5]);}}
else{
if(C_truep(C_charp(((C_word*)t0)[2]))){
if(C_truep(((C_word*)t0)[6])){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2536,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[14]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t3;
av2[2]=C_fix(1);
av2[3]=((C_word*)t0)[2];
tp(4,av2);}}
else{
t3=C_fix(C_character_code(((C_word*)t0)[2]));
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2544,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:346: out */
t5=((C_word*)((C_word*)t0)[3])[1];
f_2132(t5,t4,lf[80],((C_word*)t0)[5]);}}
else{
if(C_truep(C_undefinedp(((C_word*)t0)[2]))){
/* extras.scm:357: out */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2132(t3,((C_word*)t0)[4],lf[81],((C_word*)t0)[5]);}
else{
if(C_truep(C_unboundvaluep(((C_word*)t0)[2]))){
/* extras.scm:358: out */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2132(t3,((C_word*)t0)[4],lf[82],((C_word*)t0)[5]);}
else{
if(C_truep(C_immp(((C_word*)t0)[2]))){
/* extras.scm:359: out */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2132(t3,((C_word*)t0)[4],lf[83],((C_word*)t0)[5]);}
else{
if(C_truep(C_anypointerp(((C_word*)t0)[2]))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2642,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:360: ##sys#pointer->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[84]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[84]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}
else{
if(C_truep(C_structurep(((C_word*)t0)[2]))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2651,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:362: chicken.base#open-output-string */
t4=*((C_word*)lf[30]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2667,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:365: chicken.base#port? */
t4=*((C_word*)lf[96]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}}}}}}}}}

/* k2339 in k2333 in k2320 in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2341(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2341,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2344,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* extras.scm:303: ##sys#print */
t3=*((C_word*)lf[66]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_TRUE;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k2342 in k2339 in k2333 in k2320 in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2344(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_2344,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2351,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:304: chicken.base#get-output-string */
t3=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k2349 in k2342 in k2339 in k2333 in k2320 in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2351(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2351,c,av);}
/* extras.scm:304: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2132(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2362 in k2333 in k2320 in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2364(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2364,c,av);}
/* extras.scm:305: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2132(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2381 in k2333 in k2320 in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2383(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_2383,c,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2385,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word)li31),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2385(t5,((C_word*)t0)[4],C_fix(0),C_fix(0),t1);}

/* loop in k2381 in k2333 in k2320 in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_fcall f_2385(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
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
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(20,0,4)))){
C_save_and_reclaim_args((void *)trf_2385,5,t0,t1,t2,t3,t4);}
a=C_alloc(20);
t5=(C_truep(t4)?C_fixnum_lessp(t3,C_i_string_length(((C_word*)t0)[2])):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_i_string_ref(((C_word*)t0)[2],t3);
t7=C_u_i_char_equalp(t6,C_make_character(92));
t8=(C_truep(t7)?t7:C_u_i_char_equalp(t6,C_make_character(34)));
if(C_truep(t8)){
t9=C_a_i_fixnum_plus(&a,2,t3,C_fix(1));
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2413,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,a[5]=t9,tmp=(C_word)a,a+=6,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2417,a[2]=((C_word*)t0)[4],a[3]=t10,tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2421,a[2]=((C_word*)t0)[4],a[3]=t11,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:318: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t12;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
av2[4]=t3;
tp(5,av2);}}
else{
t9=C_u_i_char_lessp(t6,C_make_character(32));
t10=(C_truep(t9)?t9:C_u_i_char_equalp(t6,C_make_character(127)));
if(C_truep(t10)){
t11=C_fixnum_plus(t3,C_fix(1));
t12=C_fixnum_plus(t3,C_fix(1));
t13=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2444,a[2]=t6,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t11,a[6]=t12,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2491,a[2]=((C_word*)t0)[4],a[3]=t13,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:325: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t14;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
av2[4]=t3;
tp(5,av2);}}
else{
/* extras.scm:340: loop */
t16=t1;
t17=t2;
t18=C_fixnum_plus(t3,C_fix(1));
t19=t4;
t1=t16;
t2=t17;
t3=t18;
t4=t19;
goto loop;}}}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2509,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2513,a[2]=((C_word*)t0)[4],a[3]=t6,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:342: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t7;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
av2[4]=t3;
tp(5,av2);}}}

/* k2411 in loop in k2381 in k2333 in k2320 in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2413(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2413,c,av);}
/* extras.scm:315: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2385(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k2415 in loop in k2381 in k2333 in k2320 in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2417(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2417,c,av);}
/* extras.scm:317: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2132(t2,((C_word*)t0)[3],lf[68],t1);}

/* k2419 in loop in k2381 in k2333 in k2320 in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2421(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2421,c,av);}
/* extras.scm:318: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2132(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2442 in loop in k2381 in k2333 in k2320 in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2444(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_2444,c,av);}
a=C_alloc(12);
t2=C_u_i_assq(((C_word*)t0)[2],lf[69]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2449,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2450,a[2]=((C_word*)t0)[7],a[3]=t1,a[4]=((C_word)li30),tmp=(C_word)a,a+=5,tmp);
/* extras.scm:326: g507 */
t5=t4;
f_2450(t5,t3,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2468,a[2]=((C_word*)t0)[7],a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* ##sys#fixnum->string */
t5=*((C_word*)lf[73]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_fix(C_character_code(((C_word*)t0)[2]));
av2[3]=C_fix(16);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k2447 in k2442 in loop in k2381 in k2333 in k2320 in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2449(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2449,c,av);}
/* extras.scm:322: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2385(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* g507 in k2442 in loop in k2381 in k2333 in k2320 in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_fcall f_2450(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_2450,3,t0,t1,t2);}
/* extras.scm:335: out */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2132(t3,t1,C_i_cdr(t2),((C_word*)t0)[3]);}

/* k2466 in k2442 in loop in k2381 in k2333 in k2320 in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2468(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_2468,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2472,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(C_truep(C_u_i_char_lessp(((C_word*)t0)[4],C_make_character(16)))?lf[70]:lf[71]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2480,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:339: out */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2132(t5,t4,lf[72],((C_word*)t0)[5]);}

/* k2470 in k2466 in k2442 in loop in k2381 in k2333 in k2320 in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2472(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2472,c,av);}
/* extras.scm:337: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2132(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2478 in k2466 in k2442 in loop in k2381 in k2333 in k2320 in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2480(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2480,c,av);}
/* extras.scm:338: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2132(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2489 in loop in k2381 in k2333 in k2320 in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2491(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2491,c,av);}
/* extras.scm:325: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2132(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2507 in loop in k2381 in k2333 in k2320 in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2509(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2509,c,av);}
/* extras.scm:341: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2132(t2,((C_word*)t0)[3],lf[74],t1);}

/* k2511 in loop in k2381 in k2333 in k2320 in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2513(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2513,c,av);}
/* extras.scm:342: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2132(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2534 in k2333 in k2320 in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2536(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2536,c,av);}
/* extras.scm:344: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2132(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2542 in k2333 in k2320 in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2544(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_2544,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2547,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:347: chicken.base#char-name */
t3=*((C_word*)lf[79]+1);{
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

/* k2545 in k2542 in k2333 in k2320 in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2547(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2547,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2551,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li32),tmp=(C_word)a,a+=5,tmp);
/* extras.scm:347: g518 */
t3=t2;
f_2551(t3,((C_word*)t0)[4],t1);}
else{
if(C_truep(C_fixnum_lessp(((C_word*)t0)[5],C_fix(32)))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2571,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:351: out */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2132(t3,t2,lf[76],((C_word*)t0)[3]);}
else{
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[5],C_fix(255)))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2589,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[5],C_fix(65535)))){
/* extras.scm:354: out */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2132(t3,t2,lf[77],((C_word*)t0)[3]);}
else{
/* extras.scm:354: out */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2132(t3,t2,lf[78],((C_word*)t0)[3]);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2612,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[14]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t2;
av2[2]=C_fix(1);
av2[3]=((C_word*)t0)[6];
tp(4,av2);}}}}}

/* g518 in k2545 in k2542 in k2333 in k2320 in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_fcall f_2551(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_2551,3,t0,t1,t2);}
/* extras.scm:349: out */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2132(t3,t1,C_slot(t2,C_fix(1)),((C_word*)t0)[3]);}

/* k2569 in k2545 in k2542 in k2333 in k2320 in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2571(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_2571,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2578,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* ##sys#fixnum->string */
t3=*((C_word*)lf[73]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(16);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2576 in k2569 in k2545 in k2542 in k2333 in k2320 in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2578(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2578,c,av);}
/* extras.scm:352: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2132(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2587 in k2545 in k2542 in k2333 in k2320 in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2589(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_2589,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2596,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* ##sys#fixnum->string */
t3=*((C_word*)lf[73]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(16);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2594 in k2587 in k2545 in k2542 in k2333 in k2320 in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2596(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2596,c,av);}
/* extras.scm:355: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2132(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2610 in k2545 in k2542 in k2333 in k2320 in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2612(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2612,c,av);}
/* extras.scm:356: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2132(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2640 in k2333 in k2320 in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2642(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2642,c,av);}
/* extras.scm:360: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2132(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2649 in k2333 in k2320 in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2651(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2651,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2654,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* extras.scm:363: ##sys#user-print-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[85]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[85]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_TRUE;
av2[4]=t1;
tp(5,av2);}}

/* k2652 in k2649 in k2333 in k2320 in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2654(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_2654,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2661,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:364: chicken.base#get-output-string */
t3=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k2659 in k2652 in k2649 in k2333 in k2320 in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2661(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2661,c,av);}
/* extras.scm:364: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2132(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2665 in k2333 in k2320 in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2667(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2667,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2674,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:365: scheme#string-append */
t3=*((C_word*)lf[86]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[87];
av2[3]=C_slot(((C_word*)t0)[5],C_fix(3));
av2[4]=lf[88];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
if(C_truep(C_bytevectorp(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2684,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:367: out */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2132(t3,t2,lf[91],((C_word*)t0)[4]);}
else{
if(C_truep(C_lambdainfop(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2734,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:377: out */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2132(t3,t2,lf[94],((C_word*)t0)[4]);}
else{
/* extras.scm:380: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2132(t2,((C_word*)t0)[3],lf[95],((C_word*)t0)[4]);}}}}

/* k2672 in k2665 in k2333 in k2320 in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2674(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2674,c,av);}
/* extras.scm:365: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2132(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2682 in k2665 in k2333 in k2320 in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2684(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_2684,c,av);}
a=C_alloc(15);
t2=C_block_size(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2690,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2695,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[5],a[7]=((C_word)li33),tmp=(C_word)a,a+=8,tmp));
t7=((C_word*)t5)[1];
f_2695(t7,t3,C_fix(0));}

/* k2688 in k2682 in k2665 in k2333 in k2320 in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2690(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2690,c,av);}
/* extras.scm:375: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2132(t2,((C_word*)t0)[3],lf[89],((C_word*)t0)[4]);}

/* doloop527 in k2682 in k2665 in k2333 in k2320 in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_fcall f_2695(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_2695,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_subbyte(((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2708,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t3,tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_fixnum_lessp(t3,C_fix(16)))){
/* extras.scm:373: out */
t5=((C_word*)((C_word*)t0)[5])[1];
f_2132(t5,t4,lf[90],((C_word*)t0)[6]);}
else{
t5=t4;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_2708(2,av2);}}}}

/* k2706 in doloop527 in k2682 in k2665 in k2333 in k2320 in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2708(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_2708,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2711,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2722,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:374: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[65]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[65]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[7];
av2[3]=C_fix(16);
tp(4,av2);}}

/* k2709 in k2706 in doloop527 in k2682 in k2665 in k2333 in k2320 in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2711(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2711,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_2695(t2,((C_word*)t0)[3],C_fixnum_plus(((C_word*)t0)[4],C_fix(1)));}

/* k2720 in k2706 in doloop527 in k2682 in k2665 in k2333 in k2320 in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2722(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2722,c,av);}
/* extras.scm:374: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2132(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2732 in k2665 in k2333 in k2320 in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2734(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_2734,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2737,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2744,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:378: ##sys#lambda-info->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[93]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[93]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}

/* k2735 in k2732 in k2665 in k2333 in k2320 in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2737(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2737,c,av);}
/* extras.scm:379: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2132(t2,((C_word*)t0)[3],lf[92],((C_word*)t0)[4]);}

/* k2742 in k2732 in k2665 in k2333 in k2320 in wr in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2744(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2744,c,av);}
/* extras.scm:378: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2132(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_fcall f_2752(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
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
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word t28;
C_word t29;
C_word t30;
C_word t31;
C_word t32;
C_word t33;
C_word t34;
C_word t35;
C_word t36;
C_word t37;
C_word t38;
C_word t39;
C_word t40;
C_word t41;
C_word t42;
C_word t43;
C_word t44;
C_word t45;
C_word t46;
C_word t47;
C_word t48;
C_word t49;
C_word t50;
C_word t51;
C_word t52;
C_word t53;
C_word t54;
C_word t55;
C_word t56;
C_word t57;
C_word t58;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(152,0,9)))){
C_save_and_reclaim_args((void *)trf_2752,4,t0,t1,t2,t3);}
a=C_alloc(152);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_SCHEME_UNDEFINED;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_SCHEME_UNDEFINED;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=C_SCHEME_UNDEFINED;
t23=(*a=C_VECTOR_TYPE|1,a[1]=t22,tmp=(C_word)a,a+=2,tmp);
t24=C_SCHEME_UNDEFINED;
t25=(*a=C_VECTOR_TYPE|1,a[1]=t24,tmp=(C_word)a,a+=2,tmp);
t26=C_SCHEME_UNDEFINED;
t27=(*a=C_VECTOR_TYPE|1,a[1]=t26,tmp=(C_word)a,a+=2,tmp);
t28=C_SCHEME_UNDEFINED;
t29=(*a=C_VECTOR_TYPE|1,a[1]=t28,tmp=(C_word)a,a+=2,tmp);
t30=C_SCHEME_UNDEFINED;
t31=(*a=C_VECTOR_TYPE|1,a[1]=t30,tmp=(C_word)a,a+=2,tmp);
t32=C_SCHEME_UNDEFINED;
t33=(*a=C_VECTOR_TYPE|1,a[1]=t32,tmp=(C_word)a,a+=2,tmp);
t34=C_SCHEME_UNDEFINED;
t35=(*a=C_VECTOR_TYPE|1,a[1]=t34,tmp=(C_word)a,a+=2,tmp);
t36=C_SCHEME_UNDEFINED;
t37=(*a=C_VECTOR_TYPE|1,a[1]=t36,tmp=(C_word)a,a+=2,tmp);
t38=C_SCHEME_UNDEFINED;
t39=(*a=C_VECTOR_TYPE|1,a[1]=t38,tmp=(C_word)a,a+=2,tmp);
t40=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2755,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word)li35),tmp=(C_word)a,a+=5,tmp));
t41=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2788,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word)li36),tmp=(C_word)a,a+=5,tmp));
t42=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2822,a[2]=((C_word*)t0)[2],a[3]=t15,a[4]=t11,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word)li38),tmp=(C_word)a,a+=9,tmp));
t43=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2909,a[2]=t9,a[3]=t11,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[2],a[6]=t19,a[7]=t13,a[8]=t39,a[9]=t15,a[10]=((C_word*)t0)[7],a[11]=((C_word)li39),tmp=(C_word)a,a+=12,tmp));
t44=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2974,a[2]=t17,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word)li40),tmp=(C_word)a,a+=6,tmp));
t45=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3000,a[2]=t17,a[3]=((C_word*)t0)[2],a[4]=((C_word)li41),tmp=(C_word)a,a+=5,tmp));
t46=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3009,a[2]=t9,a[3]=t7,a[4]=((C_word*)t0)[2],a[5]=((C_word)li43),tmp=(C_word)a,a+=6,tmp));
t47=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3082,a[2]=t9,a[3]=t7,a[4]=t17,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[2],a[7]=((C_word)li47),tmp=(C_word)a,a+=8,tmp));
t48=C_set_block_item(t21,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3222,a[2]=t15,a[3]=t11,a[4]=((C_word)li48),tmp=(C_word)a,a+=5,tmp));
t49=C_set_block_item(t23,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3228,a[2]=t19,a[3]=t21,a[4]=t11,a[5]=((C_word)li49),tmp=(C_word)a,a+=6,tmp));
t50=C_set_block_item(t25,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3234,a[2]=t19,a[3]=t11,a[4]=((C_word)li50),tmp=(C_word)a,a+=5,tmp));
t51=C_set_block_item(t27,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3240,a[2]=t13,a[3]=t21,a[4]=((C_word)li51),tmp=(C_word)a,a+=5,tmp));
t52=C_set_block_item(t29,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3246,a[2]=t19,a[3]=t11,a[4]=t21,a[5]=((C_word)li52),tmp=(C_word)a,a+=6,tmp));
t53=C_set_block_item(t31,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3252,a[2]=t13,a[3]=t11,a[4]=((C_word)li53),tmp=(C_word)a,a+=5,tmp));
t54=C_set_block_item(t33,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3258,a[2]=t19,a[3]=t21,a[4]=t11,a[5]=((C_word)li54),tmp=(C_word)a,a+=6,tmp));
t55=C_set_block_item(t35,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3278,a[2]=t19,a[3]=t11,a[4]=((C_word)li55),tmp=(C_word)a,a+=5,tmp));
t56=C_set_block_item(t37,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3284,a[2]=t19,a[3]=t21,a[4]=t11,a[5]=((C_word)li56),tmp=(C_word)a,a+=6,tmp));
t57=C_set_block_item(t39,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3293,a[2]=t23,a[3]=t25,a[4]=t27,a[5]=t29,a[6]=t31,a[7]=t33,a[8]=t35,a[9]=t37,a[10]=((C_word)li57),tmp=(C_word)a,a+=11,tmp));
/* extras.scm:542: pr */
t58=((C_word*)t9)[1];
f_2822(t58,t1,t2,t3,C_fix(0),((C_word*)t11)[1]);}

/* spaces in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_fcall f_2755(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(34,0,4)))){
C_save_and_reclaim_args((void *)trf_2755,4,t0,t1,t2,t3);}
a=C_alloc(34);
if(C_truep(C_i_greaterp(t2,C_fix(0)))){
if(C_truep(C_i_greaterp(t2,C_fix(7)))){
t4=C_s_a_i_minus(&a,2,t2,C_fix(8));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2779,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:387: out */
t6=((C_word*)((C_word*)t0)[3])[1];
f_2132(t6,t5,lf[99],t3);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2786,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:388: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t4;
av2[2]=lf[100];
av2[3]=C_fix(0);
av2[4]=t2;
tp(5,av2);}}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2777 in spaces in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2779(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2779,c,av);}
/* extras.scm:387: spaces */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2755(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2784 in spaces in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2786(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2786,c,av);}
/* extras.scm:388: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2132(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* indent in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_fcall f_2788(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,0,3)))){
C_save_and_reclaim_args((void *)trf_2788,4,t0,t1,t2,t3);}
a=C_alloc(29);
if(C_truep(t3)){
if(C_truep(C_i_lessp(t2,t3))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2804,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2811,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[14]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t5;
av2[2]=C_fix(1);
av2[3]=C_make_character(10);
tp(4,av2);}}
else{
t4=C_s_a_i_minus(&a,2,t2,t3);
/* extras.scm:395: spaces */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2755(t5,t1,t4,t3);}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2802 in indent in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2804(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2804,c,av);}
if(C_truep(t1)){
/* extras.scm:394: spaces */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2755(t2,((C_word*)t0)[3],((C_word*)t0)[4],C_fix(0));}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k2809 in indent in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2811(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2811,c,av);}
/* extras.scm:394: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2132(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* pr in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_fcall f_2822(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(101,0,3)))){
C_save_and_reclaim_args((void *)trf_2822,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(101);
t6=C_i_pairp(t2);
t7=(C_truep(t6)?t6:C_i_vectorp(t2));
if(C_truep(t7)){
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2835,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t9,a[6]=t2,a[7]=t5,a[8]=t4,a[9]=((C_word*)t0)[3],a[10]=((C_word*)t0)[4],a[11]=((C_word*)t0)[5],tmp=(C_word)a,a+=12,tmp);
t11=C_s_a_i_minus(&a,2,((C_word*)t0)[6],t3);
t12=C_s_a_i_minus(&a,2,t11,t4);
t13=C_s_a_i_plus(&a,2,t12,C_fix(1));
/* extras.scm:400: scheme#max */
t14=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t14;
av2[1]=t10;
av2[2]=t13;
av2[3]=C_fix(50);
((C_proc)(void*)(*((C_word*)t14+1)))(4,av2);}}
else{
/* extras.scm:411: wr */
t8=((C_word*)((C_word*)t0)[7])[1];
f_2151(t8,t1,t2,t3);}}

/* k2833 in pr in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2835(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,5)))){
C_save_and_reclaim((void *)f_2835,c,av);}
a=C_alloc(19);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2838,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2873,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=((C_word)li37),tmp=(C_word)a,a+=5,tmp);
/* extras.scm:401: generic-write */
f_2028(t4,((C_word*)t0)[6],((C_word*)t0)[11],C_SCHEME_FALSE,t5);}

/* k2836 in k2833 in pr in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2838(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_2838,c,av);}
a=C_alloc(8);
if(C_truep(C_i_greaterp(((C_word*)((C_word*)t0)[2])[1],C_fix(0)))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2851,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:407: chicken.string#reverse-string-append */
t3=*((C_word*)lf[101]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[6])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[7]))){
/* extras.scm:409: pp-pair */
t2=((C_word*)t0)[8];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[7];
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[9];
((C_proc)C_fast_retrieve_proc(t2))(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2867,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* extras.scm:410: scheme#vector->list */
t3=*((C_word*)lf[62]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}}

/* k2849 in k2836 in k2833 in pr in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2851(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2851,c,av);}
/* extras.scm:407: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2132(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k2865 in k2836 in k2833 in pr in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2867(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_2867,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2871,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:410: out */
t3=((C_word*)((C_word*)t0)[6])[1];
f_2132(t3,t2,lf[102],((C_word*)t0)[7]);}

/* k2869 in k2865 in k2836 in k2833 in pr in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2871(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2871,c,av);}
/* extras.scm:410: pp-list */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3000(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)((C_word*)t0)[6])[1]);}

/* a2872 in k2833 in pr in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2873(C_word c,C_word *av){
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
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(32,c,1)))){
C_save_and_reclaim((void *)f_2873,c,av);}
a=C_alloc(32);
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=C_i_string_length(t2);
t6=C_s_a_i_minus(&a,2,((C_word*)((C_word*)t0)[3])[1],t5);
t7=C_mutate(((C_word *)((C_word*)t0)[3])+1,t6);
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_i_greaterp(((C_word*)((C_word*)t0)[3])[1],C_fix(0));
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* pp-expr in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2909(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_2909,c,av);}
a=C_alloc(14);
t5=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_2916,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=t3,a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[8],a[13]=((C_word*)t0)[9],tmp=(C_word)a,a+=14,tmp);
/* extras.scm:414: read-macro? */
f_2031(t5,t2);}

/* k2914 in pp-expr in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2916(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_2916,c,av);}
a=C_alloc(10);
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2927,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t4=(
/* extras.scm:416: read-macro-prefix */
  f_2093(((C_word*)t0)[2])
);
/* extras.scm:416: out */
t5=((C_word*)((C_word*)t0)[8])[1];
f_2132(t5,t3,t4,((C_word*)t0)[9]);}
else{
t2=C_i_car(((C_word*)t0)[2]);
if(C_truep(C_i_symbolp(t2))){
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2943,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[11],a[9]=t2,tmp=(C_word)a,a+=10,tmp);
/* extras.scm:421: style */
t4=((C_word*)((C_word*)t0)[12])[1];
f_3293(t4,t3,t2);}
else{
/* extras.scm:428: pp-list */
t3=((C_word*)((C_word*)t0)[13])[1];
f_3000(t3,((C_word*)t0)[4],((C_word*)t0)[2],((C_word*)t0)[9],((C_word*)t0)[5],((C_word*)((C_word*)t0)[6])[1]);}}}

/* k2925 in k2914 in pp-expr in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2927(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2927,c,av);}
/* extras.scm:415: pr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2822(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)((C_word*)t0)[6])[1]);}

/* k2941 in k2914 in pp-expr in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2943(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_2943,c,av);}
a=C_alloc(9);
if(C_truep(t1)){
/* extras.scm:423: proc */
t2=t1;{
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
av2[4]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t2))(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2969,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* extras.scm:424: ##sys#symbol->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[104]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[104]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[9];
tp(3,av2);}}}

/* k2967 in k2941 in k2914 in pp-expr in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2969(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_2969,c,av);}
t2=C_i_string_length(t1);
if(C_truep(C_i_greaterp(t2,C_fix(5)))){
/* extras.scm:426: pp-general */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3082(t3,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[7])[1]);}
else{
/* extras.scm:427: pp-call */
t3=((C_word*)((C_word*)t0)[8])[1];
f_2974(t3,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)((C_word*)t0)[7])[1]);}}

/* pp-call in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_fcall f_2974(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,3)))){
C_save_and_reclaim_args((void *)trf_2974,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(13);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2978,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=t4,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
t7=C_i_car(t2);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2998,a[2]=((C_word*)t0)[3],a[3]=t6,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:434: out */
t9=((C_word*)((C_word*)t0)[4])[1];
f_2132(t9,t8,lf[105],t3);}

/* k2976 in pp-call in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2978(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,6)))){
C_save_and_reclaim((void *)f_2978,c,av);}
a=C_alloc(29);
if(C_truep(((C_word*)t0)[2])){
t2=C_u_i_cdr(((C_word*)t0)[3]);
t3=C_s_a_i_plus(&a,2,t1,C_fix(1));
/* extras.scm:436: pp-down */
t4=((C_word*)((C_word*)t0)[4])[1];
f_3009(t4,((C_word*)t0)[5],t2,t1,t3,((C_word*)t0)[6],((C_word*)t0)[7]);}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k2996 in pp-call in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_2998(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2998,c,av);}
/* extras.scm:434: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2151(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* pp-list in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_fcall f_3000(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_3000,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(7);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3004,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t4,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* extras.scm:442: out */
t7=((C_word*)((C_word*)t0)[3])[1];
f_2132(t7,t6,lf[106],t3);}

/* k3002 in pp-list in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_3004(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_3004,c,av);}
/* extras.scm:443: pp-down */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3009(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,t1,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* pp-down in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_fcall f_3009(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,4)))){
C_save_and_reclaim_args((void *)trf_3009,7,t0,t1,t2,t3,t4,t5,t6);}
a=C_alloc(12);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3015,a[2]=t5,a[3]=t8,a[4]=((C_word*)t0)[2],a[5]=t6,a[6]=((C_word*)t0)[3],a[7]=t4,a[8]=((C_word*)t0)[4],a[9]=((C_word)li42),tmp=(C_word)a,a+=10,tmp));
t10=((C_word*)t8)[1];
f_3015(t10,t1,t2,t3);}

/* loop in pp-down in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_fcall f_3015(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(41,0,3)))){
C_save_and_reclaim_args((void *)trf_3015,4,t0,t1,t2,t3);}
a=C_alloc(41);
if(C_truep(t3)){
if(C_truep(C_i_pairp(t2))){
t4=C_u_i_cdr(t2);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_s_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1)):C_fix(0));
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3036,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t8=C_u_i_car(t2);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3042,a[2]=((C_word*)t0)[4],a[3]=t7,a[4]=t8,a[5]=t6,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:452: indent */
t10=((C_word*)((C_word*)t0)[6])[1];
f_2788(t10,t9,((C_word*)t0)[7],t3);}
else{
if(C_truep(C_i_nullp(t2))){
/* extras.scm:454: out */
t4=((C_word*)((C_word*)t0)[8])[1];
f_2132(t4,t1,lf[107],t3);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3064,a[2]=((C_word*)t0)[8],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3068,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3076,a[2]=((C_word*)t0)[6],a[3]=t5,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3080,a[2]=((C_word*)t0)[8],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* extras.scm:458: indent */
t8=((C_word*)((C_word*)t0)[6])[1];
f_2788(t8,t7,((C_word*)t0)[7],t3);}}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3034 in loop in pp-down in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_3036(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3036,c,av);}
/* extras.scm:451: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3015(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k3040 in loop in pp-down in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_3042(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_3042,c,av);}
/* extras.scm:452: pr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2822(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k3062 in loop in pp-down in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_3064(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3064,c,av);}
/* extras.scm:456: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2132(t2,((C_word*)t0)[3],lf[108],t1);}

/* k3066 in loop in pp-down in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_3068(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,5)))){
C_save_and_reclaim((void *)f_3068,c,av);}
a=C_alloc(29);
t2=C_s_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
/* extras.scm:457: pr */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2822(t3,((C_word*)t0)[4],((C_word*)t0)[5],t1,t2,((C_word*)t0)[6]);}

/* k3074 in loop in pp-down in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_3076(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3076,c,av);}
/* extras.scm:458: indent */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2788(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k3078 in loop in pp-down in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_3080(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3080,c,av);}
/* extras.scm:458: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2132(t2,((C_word*)t0)[3],lf[109],t1);}

/* pp-general in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_fcall f_3082(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
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
C_word t22;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(42,0,6)))){
C_save_and_reclaim_args((void *)trf_3082,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
a=C_alloc(42);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3085,a[2]=t6,a[3]=t4,a[4]=t12,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word)li44),tmp=(C_word)a,a+=8,tmp));
t16=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3124,a[2]=t7,a[3]=t4,a[4]=t14,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word)li45),tmp=(C_word)a,a+=8,tmp));
t17=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3163,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=t8,a[5]=((C_word)li46),tmp=(C_word)a,a+=6,tmp));
t18=C_i_car(t2);
t19=C_u_i_cdr(t2);
t20=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3174,a[2]=t5,a[3]=t19,a[4]=t3,a[5]=t10,a[6]=t1,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t21=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3220,a[2]=((C_word*)t0)[5],a[3]=t20,a[4]=t18,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:485: out */
t22=((C_word*)((C_word*)t0)[6])[1];
f_2132(t22,t21,lf[111],t3);}

/* tail1 in pp-general in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_fcall f_3085(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(43,0,5)))){
C_save_and_reclaim_args((void *)trf_3085,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(43);
t6=(C_truep(((C_word*)t0)[2])?C_i_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=C_i_car(t2);
t8=C_u_i_cdr(t2);
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_s_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1)):C_fix(0));
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3106,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t8,a[5]=t3,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3110,a[2]=((C_word*)t0)[5],a[3]=t11,a[4]=t7,a[5]=t10,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:469: indent */
t13=((C_word*)((C_word*)t0)[6])[1];
f_2788(t13,t12,t5,t4);}
else{
/* extras.scm:470: tail2 */
t7=((C_word*)((C_word*)t0)[4])[1];
f_3124(t7,t1,t2,t3,t4,t5);}}

/* k3104 in tail1 in pp-general in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_3106(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_3106,c,av);}
/* extras.scm:469: tail2 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3124(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1,((C_word*)t0)[6]);}

/* k3108 in tail1 in pp-general in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_3110(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_3110,c,av);}
/* extras.scm:469: pr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2822(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* tail2 in pp-general in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_fcall f_3124(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(42,0,4)))){
C_save_and_reclaim_args((void *)trf_3124,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(42);
t6=(C_truep(((C_word*)t0)[2])?C_i_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=C_i_car(t2);
t8=C_u_i_cdr(t2);
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_s_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1)):C_fix(0));
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3145,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t8,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3149,a[2]=((C_word*)t0)[5],a[3]=t11,a[4]=t7,a[5]=t10,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:477: indent */
t13=((C_word*)((C_word*)t0)[6])[1];
f_2788(t13,t12,t5,t4);}
else{
/* extras.scm:478: tail3 */
t7=((C_word*)((C_word*)t0)[4])[1];
f_3163(t7,t1,t2,t3,t4);}}

/* k3143 in tail2 in pp-general in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_3145(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3145,c,av);}
/* extras.scm:477: tail3 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3163(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k3147 in tail2 in pp-general in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_3149(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_3149,c,av);}
/* extras.scm:477: pr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2822(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* tail3 in pp-general in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_fcall f_3163(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,6)))){
C_save_and_reclaim_args((void *)trf_3163,5,t0,t1,t2,t3,t4);}
/* extras.scm:481: pp-down */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3009(t5,t1,t2,t4,t3,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k3172 in pp-general in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_3174(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(58,c,5)))){
C_save_and_reclaim((void *)f_3174,c,av);}
a=C_alloc(58);
t2=(C_truep(((C_word*)t0)[2])?C_i_pairp(((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=C_i_car(((C_word*)t0)[3]);
t4=C_u_i_cdr(((C_word*)t0)[3]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3187,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3202,a[2]=((C_word*)t0)[7],a[3]=t5,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:489: out */
t7=((C_word*)((C_word*)t0)[8])[1];
f_2132(t7,t6,lf[110],t1);}
else{
t3=C_s_a_i_plus(&a,2,((C_word*)t0)[4],C_fix(2));
t4=C_s_a_i_plus(&a,2,t1,C_fix(1));
/* extras.scm:491: tail1 */
t5=((C_word*)((C_word*)t0)[5])[1];
f_3085(t5,((C_word*)t0)[6],((C_word*)t0)[3],t3,t1,t4);}}

/* k3185 in k3172 in pp-general in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_3187(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(58,c,5)))){
C_save_and_reclaim((void *)f_3187,c,av);}
a=C_alloc(58);
t2=C_s_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(2));
t3=C_s_a_i_plus(&a,2,t1,C_fix(1));
/* extras.scm:490: tail1 */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3085(t4,((C_word*)t0)[4],((C_word*)t0)[5],t2,t1,t3);}

/* k3200 in k3172 in pp-general in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_3202(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3202,c,av);}
/* extras.scm:489: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2151(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k3218 in pp-general in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_3220(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3220,c,av);}
/* extras.scm:485: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2151(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* pp-expr-list in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_3222(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_3222,c,av);}
/* extras.scm:494: pp-list */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3000(t5,t1,t2,t3,t4,((C_word*)((C_word*)t0)[3])[1]);}

/* pp-lambda in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_3228(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_3228,c,av);}
/* extras.scm:497: pp-general */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3082(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[4])[1]);}

/* pp-if in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_3234(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_3234,c,av);}
/* extras.scm:500: pp-general */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3082(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1]);}

/* pp-cond in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_3240(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_3240,c,av);}
/* extras.scm:503: pp-call */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2974(t5,t1,t2,t3,t4,((C_word*)((C_word*)t0)[3])[1]);}

/* pp-case in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_3246(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_3246,c,av);}
/* extras.scm:506: pp-general */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3082(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[4])[1]);}

/* pp-and in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_3252(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_3252,c,av);}
/* extras.scm:509: pp-call */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2974(t5,t1,t2,t3,t4,((C_word*)((C_word*)t0)[3])[1]);}

/* pp-let in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_3258(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_3258,c,av);}
t5=C_i_cdr(t2);
if(C_truep(C_i_pairp(t5))){
/* extras.scm:514: pp-general */
t6=((C_word*)((C_word*)t0)[2])[1];
f_3082(t6,t1,t2,t3,t4,C_i_symbolp(C_u_i_car(t5)),((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[4])[1]);}
else{
/* extras.scm:514: pp-general */
t6=((C_word*)((C_word*)t0)[2])[1];
f_3082(t6,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[4])[1]);}}

/* pp-begin in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_3278(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_3278,c,av);}
/* extras.scm:517: pp-general */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3082(t5,t1,t2,t3,t4,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1]);}

/* pp-do in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_3284(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_3284,c,av);}
/* extras.scm:520: pp-general */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3082(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[4])[1]);}

/* style in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_fcall f_3293(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_3293,3,t0,t1,t2);}
a=C_alloc(12);
t3=C_eqp(t2,lf[112]);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3303,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t3)){
t5=t4;
f_3303(t5,t3);}
else{
t5=C_eqp(t2,lf[122]);
if(C_truep(t5)){
t6=t4;
f_3303(t6,t5);}
else{
t6=C_eqp(t2,lf[123]);
if(C_truep(t6)){
t7=t4;
f_3303(t7,t6);}
else{
t7=C_eqp(t2,lf[124]);
t8=t4;
f_3303(t8,(C_truep(t7)?t7:C_eqp(t2,lf[125])));}}}}

/* k3301 in style in pp in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_fcall f_3303(C_word t0,C_word t1){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,1)))){
C_save_and_reclaim_args((void *)trf_3303,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_eqp(((C_word*)t0)[4],lf[113]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[4],lf[114]));
if(C_truep(t3)){
t4=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)((C_word*)t0)[5])[1];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_eqp(((C_word*)t0)[4],lf[115]);
if(C_truep(t4)){
t5=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t5;
av2[1]=((C_word*)((C_word*)t0)[6])[1];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_eqp(((C_word*)t0)[4],lf[116]);
if(C_truep(t5)){
t6=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t6;
av2[1]=((C_word*)((C_word*)t0)[7])[1];
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_eqp(((C_word*)t0)[4],lf[117]);
t7=(C_truep(t6)?t6:C_eqp(((C_word*)t0)[4],lf[118]));
if(C_truep(t7)){
t8=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t8;
av2[1]=((C_word*)((C_word*)t0)[8])[1];
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=C_eqp(((C_word*)t0)[4],lf[119]);
if(C_truep(t8)){
t9=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t9;
av2[1]=((C_word*)((C_word*)t0)[9])[1];
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t9=C_eqp(((C_word*)t0)[4],lf[120]);
if(C_truep(t9)){
t10=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t10;
av2[1]=((C_word*)((C_word*)t0)[10])[1];
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t10=C_eqp(((C_word*)t0)[4],lf[121]);
t11=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t11;
av2[1]=(C_truep(t10)?((C_word*)((C_word*)t0)[11])[1]:C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}}}}}}}}

/* k3417 in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_3419(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3419,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3423,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:545: pp */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2752(t3,t2,((C_word*)t0)[5],C_fix(0));}

/* k3421 in k3417 in chicken.pretty-print#generic-write in k1101 in k1098 */
static void C_ccall f_3423(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3423,c,av);}
/* extras.scm:545: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2132(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k3430 in k1101 in k1098 */
static void C_ccall f_3432(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,6)))){
C_save_and_reclaim((void *)f_3432,c,av);}
a=C_alloc(29);
t2=C_mutate((C_word*)lf[126]+1 /* (set! chicken.pretty-print#pretty-print-width ...) */,t1);
t3=C_mutate((C_word*)lf[127]+1 /* (set! chicken.pretty-print#pretty-print ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3434,a[2]=((C_word)li61),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[129]+1 /* (set! chicken.pretty-print#pp ...) */,*((C_word*)lf[127]+1));
t5=C_a_i_provide(&a,1,lf[130]);
t6=C_mutate(&lf[131] /* (set! chicken.format#fprintf0 ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3458,a[2]=((C_word)li66),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[139]+1 /* (set! chicken.format#fprintf ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3778,a[2]=((C_word)li67),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[141]+1 /* (set! chicken.format#printf ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3784,a[2]=((C_word)li68),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[143]+1 /* (set! chicken.format#sprintf ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3790,a[2]=((C_word)li69),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[145]+1 /* (set! chicken.format#format ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3796,a[2]=((C_word)li70),tmp=(C_word)a,a+=3,tmp));
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3839,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* extras.scm:640: chicken.platform#register-feature! */
t12=*((C_word*)lf[163]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t12;
av2[1]=t11;
av2[2]=lf[164];
((C_proc)(void*)(*((C_word*)t12+1)))(3,av2);}}

/* chicken.pretty-print#pretty-print in k3430 in k1101 in k1098 */
static void C_ccall f_3434(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +8,c,2)))){
C_save_and_reclaim((void*)f_3434,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+8);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t4=C_i_pairp(t3);
t5=(C_truep(t4)?C_get_rest_arg(c,3,av,3,t0):*((C_word*)lf[20]+1));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3441,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3445,a[2]=t5,a[3]=t6,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:555: pretty-print-width */
t8=*((C_word*)lf[126]+1);{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* k3439 in chicken.pretty-print#pretty-print in k3430 in k1101 in k1098 */
static void C_ccall f_3441(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3441,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3443 in chicken.pretty-print#pretty-print in k3430 in k1101 in k1098 */
static void C_ccall f_3445(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_3445,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3447,a[2]=((C_word*)t0)[2],a[3]=((C_word)li60),tmp=(C_word)a,a+=4,tmp);
/* extras.scm:555: generic-write */
f_2028(((C_word*)t0)[3],((C_word*)t0)[4],C_SCHEME_FALSE,t1,t2);}

/* a3446 in k3443 in chicken.pretty-print#pretty-print in k3430 in k1101 in k1098 */
static void C_ccall f_3447(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3447,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3451,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:555: scheme#display */
t4=*((C_word*)lf[128]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k3449 in a3446 in k3443 in chicken.pretty-print#pretty-print in k3430 in k1101 in k1098 */
static void C_ccall f_3451(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3451,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.format#fprintf0 in k3430 in k1101 in k1098 */
static void C_fcall f_3458(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,2)))){
C_save_and_reclaim_args((void *)trf_3458,5,t1,t2,t3,t4,t5);}
a=C_alloc(11);
t6=(C_truep(t3)?C_i_check_port_2(t3,C_fix(2),C_SCHEME_TRUE,t2):C_SCHEME_UNDEFINED);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3465,a[2]=t3,a[3]=t1,a[4]=t2,a[5]=t4,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3767,a[2]=t7,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
/* extras.scm:571: ##sys#tty-port? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[138]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[138]+1);
av2[1]=t8;
av2[2]=t3;
tp(3,av2);}}
else{
/* extras.scm:573: chicken.base#open-output-string */
t9=*((C_word*)lf[30]+1);{
C_word av2[2];
av2[0]=t9;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}

/* k3463 in chicken.format#fprintf0 in k3430 in k1101 in k1098 */
static void C_ccall f_3465(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_3465,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3468,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3496,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t4,a[5]=((C_word)li65),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_3496(t6,t2,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k3466 in k3463 in chicken.format#fprintf0 in k3430 in k1101 in k1098 */
static void C_ccall f_3468(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3468,c,av);}
a=C_alloc(4);
if(C_truep(C_i_not(((C_word*)t0)[2]))){
/* extras.scm:617: chicken.base#get-output-string */
t2=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=C_eqp(((C_word*)t0)[4],((C_word*)t0)[2]);
if(C_truep(C_i_not(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3490,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:619: chicken.base#get-output-string */
t4=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}}

/* k3488 in k3466 in k3463 in chicken.format#fprintf0 in k3430 in k1101 in k1098 */
static void C_ccall f_3490(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3490,c,av);}
/* extras.scm:619: ##sys#print */
t2=*((C_word*)lf[66]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* rec in k3463 in chicken.format#fprintf0 in k3430 in k1101 in k1098 */
static void C_fcall f_3496(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(30,0,2)))){
C_save_and_reclaim_args((void *)trf_3496,4,t0,t1,t2,t3);}
a=C_alloc(30);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_i_check_string_2(t2,((C_word*)t0)[2]);
t6=C_fix(0);
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_block_size(t2);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3505,a[2]=t2,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t14=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3512,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word)li62),tmp=(C_word)a,a+=5,tmp));
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3531,a[2]=t7,a[3]=t8,a[4]=t10,a[5]=t16,a[6]=((C_word*)t0)[3],a[7]=t12,a[8]=((C_word*)t0)[2],a[9]=((C_word*)t0)[4],a[10]=((C_word)li64),tmp=(C_word)a,a+=11,tmp));
t18=((C_word*)t16)[1];
f_3531(t18,t1);}

/* fetch in rec in k3463 in chicken.format#fprintf0 in k3430 in k1101 in k1098 */
static C_word C_fcall f_3505(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t1=C_subchar(((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t2=C_fixnum_plus(((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t3=C_set_block_item(((C_word*)t0)[3],0,t2);
return(t1);}

/* next in rec in k3463 in chicken.format#fprintf0 in k3430 in k1101 in k1098 */
static void C_fcall f_3512(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_3512,2,t0,t1);}
if(C_truep(C_eqp(((C_word*)((C_word*)t0)[2])[1],C_SCHEME_END_OF_LIST))){
/* extras.scm:584: ##sys#error */
t2=*((C_word*)lf[132]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[133];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=C_slot(((C_word*)((C_word*)t0)[2])[1],C_fix(0));
t3=C_slot(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* loop in rec in k3463 in chicken.format#fprintf0 in k3430 in k1101 in k1098 */
static void C_fcall f_3531(C_word t0,C_word t1){
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
C_word t22;
C_word t23;
C_word t24;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,4)))){
C_save_and_reclaim_args((void *)trf_3531,2,t0,t1);}
a=C_alloc(11);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]))){
t2=C_SCHEME_UNDEFINED;
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(
/* extras.scm:590: fetch */
  f_3505(((C_word*)((C_word*)t0)[4])[1])
);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3544,a[2]=((C_word*)t0)[5],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=C_eqp(t2,C_make_character(126));
t5=(C_truep(t4)?C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(
/* extras.scm:592: fetch */
  f_3505(((C_word*)((C_word*)t0)[4])[1])
);
t7=C_u_i_char_upcase(t6);
switch(t7){
case C_make_character(83):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3569,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:594: next */
t9=((C_word*)((C_word*)t0)[7])[1];
f_3512(t9,t8);
case C_make_character(65):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3582,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:595: next */
t9=((C_word*)((C_word*)t0)[7])[1];
f_3512(t9,t8);
case C_make_character(67):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3595,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:596: next */
t9=((C_word*)((C_word*)t0)[7])[1];
f_3512(t9,t8);
case C_make_character(66):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3608,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3612,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:597: next */
t10=((C_word*)((C_word*)t0)[7])[1];
f_3512(t10,t9);
case C_make_character(79):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3625,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3629,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:598: next */
t10=((C_word*)((C_word*)t0)[7])[1];
f_3512(t10,t9);
case C_make_character(88):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3642,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3646,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:599: next */
t10=((C_word*)((C_word*)t0)[7])[1];
f_3512(t10,t9);
case C_make_character(33):
/* extras.scm:600: ##sys#flush-output */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[135]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[135]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
tp(3,av2);}
case C_make_character(63):
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3664,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:602: next */
t9=((C_word*)((C_word*)t0)[7])[1];
f_3512(t9,t8);
case C_make_character(126):
/* extras.scm:606: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[22]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[22]+1);
av2[1]=t3;
av2[2]=C_make_character(126);
av2[3]=((C_word*)t0)[6];
tp(4,av2);}
default:
t8=C_eqp(t7,C_make_character(37));
t9=(C_truep(t8)?t8:C_eqp(t7,C_make_character(78)));
if(C_truep(t9)){
/* extras.scm:607: scheme#newline */
t10=*((C_word*)lf[136]+1);{
C_word av2[3];
av2[0]=t10;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
if(C_truep(C_u_i_char_whitespacep(t6))){
t10=(
/* extras.scm:610: fetch */
  f_3505(((C_word*)((C_word*)t0)[4])[1])
);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3709,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word)li63),tmp=(C_word)a,a+=5,tmp);
t12=(
  f_3709(t11,t10)
);
/* extras.scm:616: loop */
t24=t1;
t1=t24;
goto loop;}
else{
/* extras.scm:614: ##sys#error */
t10=*((C_word*)lf[132]+1);{
C_word av2[5];
av2[0]=t10;
av2[1]=t3;
av2[2]=((C_word*)t0)[8];
av2[3]=lf[137];
av2[4]=t6;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}}}}
else{
/* extras.scm:615: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[22]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[22]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=((C_word*)t0)[6];
tp(4,av2);}}}}

/* k3542 in loop in rec in k3463 in chicken.format#fprintf0 in k3430 in k1101 in k1098 */
static void C_ccall f_3544(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3544,c,av);}
/* extras.scm:616: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3531(t2,((C_word*)t0)[3]);}

/* k3567 in loop in rec in k3463 in chicken.format#fprintf0 in k3430 in k1101 in k1098 */
static void C_ccall f_3569(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3569,c,av);}
/* extras.scm:594: scheme#write */
t2=*((C_word*)lf[134]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3580 in loop in rec in k3463 in chicken.format#fprintf0 in k3430 in k1101 in k1098 */
static void C_ccall f_3582(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3582,c,av);}
/* extras.scm:595: scheme#display */
t2=*((C_word*)lf[128]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3593 in loop in rec in k3463 in chicken.format#fprintf0 in k3430 in k1101 in k1098 */
static void C_ccall f_3595(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3595,c,av);}
/* extras.scm:596: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[22]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k3606 in loop in rec in k3463 in chicken.format#fprintf0 in k3430 in k1101 in k1098 */
static void C_ccall f_3608(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3608,c,av);}
/* extras.scm:597: scheme#display */
t2=*((C_word*)lf[128]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3610 in loop in rec in k3463 in chicken.format#fprintf0 in k3430 in k1101 in k1098 */
static void C_ccall f_3612(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3612,c,av);}
/* extras.scm:597: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[65]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[65]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fix(2);
tp(4,av2);}}

/* k3623 in loop in rec in k3463 in chicken.format#fprintf0 in k3430 in k1101 in k1098 */
static void C_ccall f_3625(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3625,c,av);}
/* extras.scm:598: scheme#display */
t2=*((C_word*)lf[128]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3627 in loop in rec in k3463 in chicken.format#fprintf0 in k3430 in k1101 in k1098 */
static void C_ccall f_3629(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3629,c,av);}
/* extras.scm:598: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[65]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[65]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fix(8);
tp(4,av2);}}

/* k3640 in loop in rec in k3463 in chicken.format#fprintf0 in k3430 in k1101 in k1098 */
static void C_ccall f_3642(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3642,c,av);}
/* extras.scm:599: scheme#display */
t2=*((C_word*)lf[128]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3644 in loop in rec in k3463 in chicken.format#fprintf0 in k3430 in k1101 in k1098 */
static void C_ccall f_3646(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3646,c,av);}
/* extras.scm:599: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[65]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[65]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fix(16);
tp(4,av2);}}

/* k3662 in loop in rec in k3463 in chicken.format#fprintf0 in k3430 in k1101 in k1098 */
static void C_ccall f_3664(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3664,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3667,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* extras.scm:603: next */
t3=((C_word*)((C_word*)t0)[6])[1];
f_3512(t3,t2);}

/* k3665 in k3662 in loop in rec in k3463 in chicken.format#fprintf0 in k3430 in k1101 in k1098 */
static void C_ccall f_3667(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3667,c,av);}
a=C_alloc(4);
t2=C_i_check_list_2(t1,((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3673,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:605: rec */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3496(t4,t3,((C_word*)t0)[6],t1);}

/* k3671 in k3665 in k3662 in loop in rec in k3463 in chicken.format#fprintf0 in k3430 in k1101 in k1098 */
static void C_ccall f_3673(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3673,c,av);}
/* extras.scm:616: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3531(t2,((C_word*)t0)[3]);}

/* skip in loop in rec in k3463 in chicken.format#fprintf0 in k3430 in k1101 in k1098 */
static C_word C_fcall f_3709(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
if(C_truep(C_u_i_char_whitespacep(t1))){
t2=(
/* extras.scm:612: fetch */
  f_3505(((C_word*)((C_word*)t0)[2])[1])
);
t5=t2;
t1=t5;
goto loop;}
else{
t2=C_fixnum_difference(((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t3=C_set_block_item(((C_word*)t0)[3],0,t2);
return(t3);}}

/* k3765 in chicken.format#fprintf0 in k3430 in k1101 in k1098 */
static void C_ccall f_3767(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3767,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
f_3465(2,av2);}}
else{
/* extras.scm:573: chicken.base#open-output-string */
t2=*((C_word*)lf[30]+1);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* chicken.format#fprintf in k3430 in k1101 in k1098 */
static void C_ccall f_3778(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +0,c,5)))){
C_save_and_reclaim((void*)f_3778,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+0);
t4=C_build_rest(&a,c,4,av);
C_word t5;
/* extras.scm:622: fprintf0 */
f_3458(t1,lf[140],t2,t3,t4);}

/* chicken.format#printf in k3430 in k1101 in k1098 */
static void C_ccall f_3784(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +0,c,5)))){
C_save_and_reclaim((void*)f_3784,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+0);
t3=C_build_rest(&a,c,3,av);
C_word t4;
/* extras.scm:625: fprintf0 */
f_3458(t1,lf[142],*((C_word*)lf[20]+1),t2,t3);}

/* chicken.format#sprintf in k3430 in k1101 in k1098 */
static void C_ccall f_3790(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +0,c,5)))){
C_save_and_reclaim((void*)f_3790,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+0);
t3=C_build_rest(&a,c,3,av);
C_word t4;
/* extras.scm:628: fprintf0 */
f_3458(t1,lf[144],C_SCHEME_FALSE,t2,t3);}

/* chicken.format#format in k3430 in k1101 in k1098 */
static void C_ccall f_3796(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +12,c,3)))){
C_save_and_reclaim((void*)f_3796,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+12);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3804,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_not(t2))){{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=*((C_word*)lf[143]+1);
av2[3]=((C_word*)t4)[1];
C_apply(4,av2);}}
else{
if(C_truep(C_booleanp(t2))){{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=*((C_word*)lf[141]+1);
av2[3]=((C_word*)t4)[1];
C_apply(4,av2);}}
else{
if(C_truep(C_i_stringp(t2))){
t6=C_a_i_cons(&a,2,t2,((C_word*)t4)[1]);
t7=C_set_block_item(t4,0,t6);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=*((C_word*)lf[143]+1);
av2[3]=((C_word*)t4)[1];
C_apply(4,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3829,a[2]=t2,a[3]=t4,a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* extras.scm:635: scheme#output-port? */
t7=*((C_word*)lf[148]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}}}

/* k3802 in chicken.format#format in k3430 in k1101 in k1098 */
static void C_ccall f_3804(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3804,c,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)((C_word*)t0)[3])[1];
C_apply(4,av2);}}

/* k3827 in chicken.format#format in k3430 in k1101 in k1098 */
static void C_ccall f_3829(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3829,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=*((C_word*)lf[139]+1);
av2[3]=((C_word*)((C_word*)t0)[3])[1];
C_apply(4,av2);}}
else{
/* extras.scm:637: ##sys#error */
t2=*((C_word*)lf[132]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[5];
av2[2]=lf[146];
av2[3]=lf[147];
av2[4]=((C_word*)t0)[2];
av2[5]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}

/* k3837 in k3430 in k1101 in k1098 */
static void C_ccall f_3839(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_3839,c,av);}
a=C_alloc(11);
t2=C_a_i_provide(&a,1,lf[149]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3842,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t3;
C_extras_toplevel(2,av2);}}

/* k3840 in k3837 in k3430 in k1101 in k1098 */
static void C_ccall f_3842(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_3842,c,av);}
a=C_alloc(13);
t2=C_mutate((C_word*)lf[150]+1 /* (set! chicken.random#set-pseudo-random-seed! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3844,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[154]+1 /* (set! chicken.random#pseudo-random-integer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3883,a[2]=((C_word)li72),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[157]+1 /* (set! chicken.random#pseudo-random-real ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3899,a[2]=((C_word)li73),tmp=(C_word)a,a+=3,tmp));
t5=C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_RANDOM_STATE_SIZE);
t6=C_mutate((C_word*)lf[158]+1 /* (set! chicken.random#random-bytes ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3902,a[2]=t5,a[3]=((C_word)li74),tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* chicken.random#set-pseudo-random-seed! in k3840 in k3837 in k3430 in k1101 in k1098 */
static void C_ccall f_3844(C_word c,C_word *av){
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
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_3844,c,av);}
a=C_alloc(11);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3851,a[2]=t2,a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t6)[1])){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3865,a[2]=t6,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* extras.scm:651: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[18]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[18]+1);
av2[1]=t8;
av2[2]=((C_word*)t6)[1];
av2[3]=lf[151];
tp(4,av2);}}
else{
t8=C_block_size(t2);
t9=C_set_block_item(t6,0,t8);
t10=t7;{
C_word *av2=av;
av2[0]=t10;
av2[1]=t9;
f_3851(2,av2);}}}

/* k3849 in chicken.random#set-pseudo-random-seed! in k3840 in k3837 in k3430 in k1101 in k1098 */
static void C_ccall f_3851(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_3851,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3854,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_byteblockp(((C_word*)t0)[2]))){
t3=C_block_size(((C_word*)t0)[2]);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_set_random_seed(((C_word*)t0)[2],C_i_fixnum_min(((C_word*)((C_word*)t0)[4])[1],t3));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* extras.scm:656: ##sys#error */
t3=*((C_word*)lf[132]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[151];
av2[3]=lf[152];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* k3852 in k3849 in chicken.random#set-pseudo-random-seed! in k3840 in k3837 in k3430 in k1101 in k1098 */
static void C_ccall f_3854(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3854,c,av);}
t2=C_block_size(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_set_random_seed(((C_word*)t0)[2],C_i_fixnum_min(((C_word*)((C_word*)t0)[4])[1],t2));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3863 in chicken.random#set-pseudo-random-seed! in k3840 in k3837 in k3430 in k1101 in k1098 */
static void C_ccall f_3865(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3865,c,av);}
if(C_truep(C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],C_fix(0)))){
/* extras.scm:653: ##sys#error */
t2=*((C_word*)lf[132]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[151];
av2[3]=lf[153];
av2[4]=((C_word*)((C_word*)t0)[2])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_3851(2,av2);}}}

/* chicken.random#pseudo-random-integer in k3840 in k3837 in k3430 in k1101 in k1098 */
static void C_ccall f_3883(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,4)))){
C_save_and_reclaim((void *)f_3883,c,av);}
a=C_alloc(2);
if(C_truep(C_fixnump(t2))){
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_random_fixnum(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_not(C_i_bignump(t2)))){
/* extras.scm:666: ##sys#error */
t3=*((C_word*)lf[132]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=lf[155];
av2[3]=lf[156];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_s_a_u_i_random_int(&a,1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}}

/* chicken.random#pseudo-random-real in k3840 in k3837 in k3430 in k1101 in k1098 */
static void C_ccall f_3899(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,1)))){
C_save_and_reclaim((void *)f_3899,c,av);}
a=C_alloc(2);
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_random_real(&a,0);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.random#random-bytes in k3840 in k3837 in k3430 in k1101 in k1098 */
static void C_ccall f_3902(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_3902,c,av);}
a=C_alloc(10);
t2=C_rest_nullp(c,2);
t3=(C_truep(t2)?C_SCHEME_FALSE:C_get_rest_arg(c,2,av,2,t0));
t4=C_rest_nullp(c,2);
t5=C_rest_nullp(c,3);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,2,t0));
t7=C_rest_nullp(c,3);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3918,a[2]=t6,a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t6)){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3966,a[2]=t6,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
/* extras.scm:677: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[18]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[18]+1);
av2[1]=t9;
av2[2]=t6;
av2[3]=lf[159];
tp(4,av2);}}
else{
t9=t8;{
C_word *av2=av;
av2[0]=t9;
av2[1]=C_SCHEME_UNDEFINED;
f_3918(2,av2);}}}

/* k3916 in chicken.random#random-bytes in k3840 in k3837 in k3430 in k1101 in k1098 */
static void C_ccall f_3918(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_3918,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3921,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3943,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_immp(((C_word*)t0)[3]);
if(C_truep(t4)){
if(C_truep(t4)){
/* extras.scm:683: ##sys#error */
t5=*((C_word*)lf[132]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=lf[159];
av2[3]=lf[161];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t5=t2;{
C_word *av2=av;
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
f_3921(2,av2);}}}
else{
if(C_truep(C_i_not(C_byteblockp(((C_word*)t0)[3])))){
/* extras.scm:683: ##sys#error */
t5=*((C_word*)lf[132]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=lf[159];
av2[3]=lf[161];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t5=t2;{
C_word *av2=av;
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
f_3921(2,av2);}}}}
else{
if(C_truep(((C_word*)t0)[2])){
/* extras.scm:686: scheme#make-string */
t3=*((C_word*)lf[13]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
/* extras.scm:686: scheme#make-string */
t3=*((C_word*)lf[13]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}}

/* k3919 in k3916 in chicken.random#random-bytes in k3840 in k3837 in k3430 in k1101 in k1098 */
static void C_ccall f_3921(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3921,c,av);}
a=C_alloc(5);
t2=(C_truep(((C_word*)t0)[2])?((C_word*)t0)[2]:C_block_size(t1));
t3=C_random_bytes(t1,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3928,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_3928(2,av2);}}
else{
/* extras.scm:690: ##sys#error */
t5=*((C_word*)lf[132]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[159];
av2[3]=lf[160];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k3926 in k3919 in k3916 in chicken.random#random-bytes in k3840 in k3837 in k3430 in k1101 in k1098 */
static void C_ccall f_3928(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3928,c,av);}
t2=C_eqp(((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(t2)){
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_string_to_bytevector(((C_word*)t0)[3]);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3941 in k3916 in chicken.random#random-bytes in k3840 in k3837 in k3430 in k1101 in k1098 */
static void C_ccall f_3943(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3943,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
f_3921(2,av2);}}

/* k3964 in chicken.random#random-bytes in k3840 in k3837 in k3430 in k1101 in k1098 */
static void C_ccall f_3966(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3966,c,av);}
if(C_truep(C_i_lessp(((C_word*)t0)[2],C_fix(0)))){
/* extras.scm:679: ##sys#error */
t2=*((C_word*)lf[132]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[159];
av2[3]=lf[162];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_3918(2,av2);}}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_extras_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("extras"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_extras_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(791))){
C_save(t1);
C_rereclaim2(791*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,166);
lf[0]=C_h_intern(&lf[0],6, C_text("extras"));
lf[1]=C_h_intern(&lf[1],11, C_text("chicken.io#"));
lf[2]=C_h_intern(&lf[2],11, C_text("scheme#read"));
lf[3]=C_h_intern(&lf[3],20, C_text("chicken.io#read-list"));
lf[4]=C_h_intern(&lf[4],20, C_text("##sys#standard-input"));
lf[5]=C_h_intern(&lf[5],9, C_text("read-list"));
lf[6]=C_h_intern(&lf[6],18, C_text("##sys#fast-reverse"));
lf[7]=C_h_intern(&lf[7],20, C_text("chicken.io#read-line"));
lf[8]=C_h_intern(&lf[8],9, C_text("read-line"));
lf[9]=C_h_intern(&lf[9],15, C_text("##sys#substring"));
lf[10]=C_h_intern(&lf[10],17, C_text("##sys#read-char-0"));
lf[11]=C_h_intern(&lf[11],16, C_text("scheme#peek-char"));
lf[12]=C_h_intern(&lf[12],19, C_text("##sys#string-append"));
lf[13]=C_h_intern(&lf[13],18, C_text("scheme#make-string"));
lf[14]=C_h_intern(&lf[14],17, C_text("##sys#make-string"));
lf[15]=C_h_intern(&lf[15],21, C_text("chicken.io#read-lines"));
lf[16]=C_h_intern(&lf[16],10, C_text("read-lines"));
lf[17]=C_h_intern(&lf[17],35, C_text("chicken.fixnum#most-positive-fixnum"));
lf[18]=C_h_intern(&lf[18],18, C_text("##sys#check-fixnum"));
lf[19]=C_h_intern(&lf[19],21, C_text("chicken.io#write-line"));
lf[20]=C_h_intern(&lf[20],21, C_text("##sys#standard-output"));
lf[21]=C_h_intern(&lf[21],10, C_text("write-line"));
lf[22]=C_h_intern(&lf[22],18, C_text("##sys#write-char-0"));
lf[23]=C_h_intern(&lf[23],28, C_text("chicken.io#read-string!/port"));
lf[24]=C_h_intern(&lf[24],23, C_text("chicken.io#read-string!"));
lf[25]=C_h_intern(&lf[25],12, C_text("read-string!"));
lf[26]=C_h_intern(&lf[26],27, C_text("chicken.io#read-string/port"));
lf[27]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[28]=C_h_intern(&lf[28],30, C_text("chicken.base#get-output-string"));
lf[29]=C_h_intern(&lf[29],23, C_text("chicken.io#write-string"));
lf[30]=C_h_intern(&lf[30],31, C_text("chicken.base#open-output-string"));
lf[31]=C_h_intern(&lf[31],17, C_text("##sys#peek-char-0"));
lf[32]=C_h_intern(&lf[32],22, C_text("chicken.io#read-string"));
lf[33]=C_h_intern(&lf[33],11, C_text("read-string"));
lf[34]=C_h_intern(&lf[34],24, C_text("chicken.io#read-buffered"));
lf[35]=C_h_intern(&lf[35],13, C_text("read-buffered"));
lf[36]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[37]=C_h_intern(&lf[37],21, C_text("chicken.io#read-token"));
lf[38]=C_h_intern(&lf[38],10, C_text("read-token"));
lf[39]=C_h_intern(&lf[39],12, C_text("write-string"));
lf[40]=C_h_intern(&lf[40],20, C_text("chicken.io#read-byte"));
lf[41]=C_h_intern(&lf[41],9, C_text("read-byte"));
lf[42]=C_h_intern(&lf[42],21, C_text("chicken.io#write-byte"));
lf[43]=C_h_intern(&lf[43],10, C_text("write-byte"));
lf[44]=C_h_intern(&lf[44],21, C_text("chicken.pretty-print#"));
lf[46]=C_h_intern(&lf[46],5, C_text("quote"));
lf[47]=C_h_intern(&lf[47],10, C_text("quasiquote"));
lf[48]=C_h_intern(&lf[48],7, C_text("unquote"));
lf[49]=C_h_intern(&lf[49],16, C_text("unquote-splicing"));
lf[50]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\047"));
lf[51]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001`"));
lf[52]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001,"));
lf[53]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002,@"));
lf[54]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001 "));
lf[55]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001)"));
lf[56]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001)"));
lf[57]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003 . "));
lf[58]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001("));
lf[59]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002()"));
lf[60]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005#!eof"));
lf[61]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001#"));
lf[62]=C_h_intern(&lf[62],19, C_text("scheme#vector->list"));
lf[63]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002#t"));
lf[64]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002#f"));
lf[65]=C_h_intern(&lf[65],20, C_text("##sys#number->string"));
lf[66]=C_h_intern(&lf[66],11, C_text("##sys#print"));
lf[67]=C_h_intern(&lf[67],23, C_text("##sys#procedure->string"));
lf[68]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\134"));
lf[69]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\011\376B\000\000\002\134t\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\012\376B\000\000\002\134n\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\015\376B\000\000\002\134r\376\003\000\000\002\376\003\000\000\002\376"
"\377\012\000\000\013\376B\000\000\002\134v\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\014\376B\000\000\002\134f\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\007\376B\000\000\002\134a\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\010\376B\000\000\002\134"
"b\376\377\016"));
lf[70]=C_decode_literal(C_heaptop,C_text("\376B\000\000\0010"));
lf[71]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[72]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002\134x"));
lf[73]=C_h_intern(&lf[73],20, C_text("##sys#fixnum->string"));
lf[74]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\042"));
lf[75]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\042"));
lf[76]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001x"));
lf[77]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001U"));
lf[78]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001u"));
lf[79]=C_h_intern(&lf[79],22, C_text("chicken.base#char-name"));
lf[80]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002#\134"));
lf[81]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016#<unspecified>"));
lf[82]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020#<unbound value>"));
lf[83]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025#<unprintable object>"));
lf[84]=C_h_intern(&lf[84],21, C_text("##sys#pointer->string"));
lf[85]=C_h_intern(&lf[85],21, C_text("##sys#user-print-hook"));
lf[86]=C_h_intern(&lf[86],20, C_text("scheme#string-append"));
lf[87]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007#<port "));
lf[88]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001>"));
lf[89]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001}"));
lf[90]=C_decode_literal(C_heaptop,C_text("\376B\000\000\0010"));
lf[91]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003#${"));
lf[92]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001>"));
lf[93]=C_h_intern(&lf[93],25, C_text("##sys#lambda-info->string"));
lf[94]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016#<lambda info "));
lf[95]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025#<unprintable object>"));
lf[96]=C_h_intern(&lf[96],18, C_text("chicken.base#port\077"));
lf[97]=C_h_intern(&lf[97],24, C_text("chicken.keyword#keyword\077"));
lf[98]=C_h_intern(&lf[98],13, C_text("##sys#number\077"));
lf[99]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010        "));
lf[100]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010        "));
lf[101]=C_h_intern(&lf[101],36, C_text("chicken.string#reverse-string-append"));
lf[102]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001#"));
lf[103]=C_h_intern(&lf[103],10, C_text("scheme#max"));
lf[104]=C_h_intern(&lf[104],20, C_text("##sys#symbol->string"));
lf[105]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001("));
lf[106]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001("));
lf[107]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001)"));
lf[108]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001)"));
lf[109]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001."));
lf[110]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001 "));
lf[111]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001("));
lf[112]=C_h_intern(&lf[112],6, C_text("lambda"));
lf[113]=C_h_intern(&lf[113],2, C_text("if"));
lf[114]=C_h_intern(&lf[114],4, C_text("set!"));
lf[115]=C_h_intern(&lf[115],4, C_text("cond"));
lf[116]=C_h_intern(&lf[116],4, C_text("case"));
lf[117]=C_h_intern(&lf[117],3, C_text("and"));
lf[118]=C_h_intern(&lf[118],2, C_text("or"));
lf[119]=C_h_intern(&lf[119],3, C_text("let"));
lf[120]=C_h_intern(&lf[120],5, C_text("begin"));
lf[121]=C_h_intern(&lf[121],2, C_text("do"));
lf[122]=C_h_intern(&lf[122],4, C_text("let\052"));
lf[123]=C_h_intern(&lf[123],6, C_text("letrec"));
lf[124]=C_h_intern(&lf[124],7, C_text("letrec\052"));
lf[125]=C_h_intern(&lf[125],6, C_text("define"));
lf[126]=C_h_intern(&lf[126],39, C_text("chicken.pretty-print#pretty-print-width"));
lf[127]=C_h_intern(&lf[127],33, C_text("chicken.pretty-print#pretty-print"));
lf[128]=C_h_intern(&lf[128],14, C_text("scheme#display"));
lf[129]=C_h_intern(&lf[129],23, C_text("chicken.pretty-print#pp"));
lf[130]=C_h_intern(&lf[130],15, C_text("chicken.format#"));
lf[132]=C_h_intern(&lf[132],11, C_text("##sys#error"));
lf[133]=C_decode_literal(C_heaptop,C_text("\376B\000\000/too few arguments to formatted output procedure"));
lf[134]=C_h_intern(&lf[134],12, C_text("scheme#write"));
lf[135]=C_h_intern(&lf[135],18, C_text("##sys#flush-output"));
lf[136]=C_h_intern(&lf[136],14, C_text("scheme#newline"));
lf[137]=C_decode_literal(C_heaptop,C_text("\376B\000\000\037illegal format-string character"));
lf[138]=C_h_intern(&lf[138],15, C_text("##sys#tty-port\077"));
lf[139]=C_h_intern(&lf[139],22, C_text("chicken.format#fprintf"));
lf[140]=C_h_intern(&lf[140],7, C_text("fprintf"));
lf[141]=C_h_intern(&lf[141],21, C_text("chicken.format#printf"));
lf[142]=C_h_intern(&lf[142],6, C_text("printf"));
lf[143]=C_h_intern(&lf[143],22, C_text("chicken.format#sprintf"));
lf[144]=C_h_intern(&lf[144],7, C_text("sprintf"));
lf[145]=C_h_intern(&lf[145],21, C_text("chicken.format#format"));
lf[146]=C_h_intern(&lf[146],6, C_text("format"));
lf[147]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023illegal destination"));
lf[148]=C_h_intern(&lf[148],19, C_text("scheme#output-port\077"));
lf[149]=C_h_intern(&lf[149],15, C_text("chicken.random#"));
lf[150]=C_h_intern(&lf[150],38, C_text("chicken.random#set-pseudo-random-seed!"));
lf[151]=C_h_intern(&lf[151],23, C_text("set-pseudo-random-seed!"));
lf[152]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023invalid buffer type"));
lf[153]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014invalid size"));
lf[154]=C_h_intern(&lf[154],36, C_text("chicken.random#pseudo-random-integer"));
lf[155]=C_h_intern(&lf[155],21, C_text("pseudo-random-integer"));
lf[156]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021bad argument type"));
lf[157]=C_h_intern(&lf[157],33, C_text("chicken.random#pseudo-random-real"));
lf[158]=C_h_intern(&lf[158],27, C_text("chicken.random#random-bytes"));
lf[159]=C_h_intern(&lf[159],12, C_text("random-bytes"));
lf[160]=C_decode_literal(C_heaptop,C_text("\376B\000\000\033unable to read random bytes"));
lf[161]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023invalid buffer type"));
lf[162]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014invalid size"));
lf[163]=C_h_intern(&lf[163],34, C_text("chicken.platform#register-feature!"));
lf[164]=C_h_intern(&lf[164],7, C_text("srfi-28"));
lf[165]=C_h_intern(&lf[165],27, C_text("chicken.base#make-parameter"));
C_register_lf2(lf,166,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1100,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[234] = {
{C_text("f_1100:extras_2escm"),(void*)f_1100},
{C_text("f_1103:extras_2escm"),(void*)f_1103},
{C_text("f_1105:extras_2escm"),(void*)f_1105},
{C_text("f_1134:extras_2escm"),(void*)f_1134},
{C_text("f_1136:extras_2escm"),(void*)f_1136},
{C_text("f_1156:extras_2escm"),(void*)f_1156},
{C_text("f_1208:extras_2escm"),(void*)f_1208},
{C_text("f_1218:extras_2escm"),(void*)f_1218},
{C_text("f_1228:extras_2escm"),(void*)f_1228},
{C_text("f_1241:extras_2escm"),(void*)f_1241},
{C_text("f_1246:extras_2escm"),(void*)f_1246},
{C_text("f_1259:extras_2escm"),(void*)f_1259},
{C_text("f_1292:extras_2escm"),(void*)f_1292},
{C_text("f_1301:extras_2escm"),(void*)f_1301},
{C_text("f_1324:extras_2escm"),(void*)f_1324},
{C_text("f_1332:extras_2escm"),(void*)f_1332},
{C_text("f_1361:extras_2escm"),(void*)f_1361},
{C_text("f_1380:extras_2escm"),(void*)f_1380},
{C_text("f_1389:extras_2escm"),(void*)f_1389},
{C_text("f_1402:extras_2escm"),(void*)f_1402},
{C_text("f_1451:extras_2escm"),(void*)f_1451},
{C_text("f_1467:extras_2escm"),(void*)f_1467},
{C_text("f_1479:extras_2escm"),(void*)f_1479},
{C_text("f_1497:extras_2escm"),(void*)f_1497},
{C_text("f_1501:extras_2escm"),(void*)f_1501},
{C_text("f_1556:extras_2escm"),(void*)f_1556},
{C_text("f_1560:extras_2escm"),(void*)f_1560},
{C_text("f_1563:extras_2escm"),(void*)f_1563},
{C_text("f_1611:extras_2escm"),(void*)f_1611},
{C_text("f_1633:extras_2escm"),(void*)f_1633},
{C_text("f_1639:extras_2escm"),(void*)f_1639},
{C_text("f_1642:extras_2escm"),(void*)f_1642},
{C_text("f_1688:extras_2escm"),(void*)f_1688},
{C_text("f_1707:extras_2escm"),(void*)f_1707},
{C_text("f_1710:extras_2escm"),(void*)f_1710},
{C_text("f_1722:extras_2escm"),(void*)f_1722},
{C_text("f_1725:extras_2escm"),(void*)f_1725},
{C_text("f_1730:extras_2escm"),(void*)f_1730},
{C_text("f_1734:extras_2escm"),(void*)f_1734},
{C_text("f_1746:extras_2escm"),(void*)f_1746},
{C_text("f_1754:extras_2escm"),(void*)f_1754},
{C_text("f_1756:extras_2escm"),(void*)f_1756},
{C_text("f_1775:extras_2escm"),(void*)f_1775},
{C_text("f_1809:extras_2escm"),(void*)f_1809},
{C_text("f_1837:extras_2escm"),(void*)f_1837},
{C_text("f_1847:extras_2escm"),(void*)f_1847},
{C_text("f_1852:extras_2escm"),(void*)f_1852},
{C_text("f_1856:extras_2escm"),(void*)f_1856},
{C_text("f_1862:extras_2escm"),(void*)f_1862},
{C_text("f_1865:extras_2escm"),(void*)f_1865},
{C_text("f_1872:extras_2escm"),(void*)f_1872},
{C_text("f_1893:extras_2escm"),(void*)f_1893},
{C_text("f_1898:extras_2escm"),(void*)f_1898},
{C_text("f_1905:extras_2escm"),(void*)f_1905},
{C_text("f_1915:extras_2escm"),(void*)f_1915},
{C_text("f_1936:extras_2escm"),(void*)f_1936},
{C_text("f_1941:extras_2escm"),(void*)f_1941},
{C_text("f_1976:extras_2escm"),(void*)f_1976},
{C_text("f_1986:extras_2escm"),(void*)f_1986},
{C_text("f_2003:extras_2escm"),(void*)f_2003},
{C_text("f_2010:extras_2escm"),(void*)f_2010},
{C_text("f_2028:extras_2escm"),(void*)f_2028},
{C_text("f_2031:extras_2escm"),(void*)f_2031},
{C_text("f_2059:extras_2escm"),(void*)f_2059},
{C_text("f_2093:extras_2escm"),(void*)f_2093},
{C_text("f_2132:extras_2escm"),(void*)f_2132},
{C_text("f_2142:extras_2escm"),(void*)f_2142},
{C_text("f_2151:extras_2escm"),(void*)f_2151},
{C_text("f_2154:extras_2escm"),(void*)f_2154},
{C_text("f_2161:extras_2escm"),(void*)f_2161},
{C_text("f_2172:extras_2escm"),(void*)f_2172},
{C_text("f_2181:extras_2escm"),(void*)f_2181},
{C_text("f_2197:extras_2escm"),(void*)f_2197},
{C_text("f_2199:extras_2escm"),(void*)f_2199},
{C_text("f_2221:extras_2escm"),(void*)f_2221},
{C_text("f_2227:extras_2escm"),(void*)f_2227},
{C_text("f_2243:extras_2escm"),(void*)f_2243},
{C_text("f_2247:extras_2escm"),(void*)f_2247},
{C_text("f_2256:extras_2escm"),(void*)f_2256},
{C_text("f_2299:extras_2escm"),(void*)f_2299},
{C_text("f_2303:extras_2escm"),(void*)f_2303},
{C_text("f_2322:extras_2escm"),(void*)f_2322},
{C_text("f_2329:extras_2escm"),(void*)f_2329},
{C_text("f_2335:extras_2escm"),(void*)f_2335},
{C_text("f_2341:extras_2escm"),(void*)f_2341},
{C_text("f_2344:extras_2escm"),(void*)f_2344},
{C_text("f_2351:extras_2escm"),(void*)f_2351},
{C_text("f_2364:extras_2escm"),(void*)f_2364},
{C_text("f_2383:extras_2escm"),(void*)f_2383},
{C_text("f_2385:extras_2escm"),(void*)f_2385},
{C_text("f_2413:extras_2escm"),(void*)f_2413},
{C_text("f_2417:extras_2escm"),(void*)f_2417},
{C_text("f_2421:extras_2escm"),(void*)f_2421},
{C_text("f_2444:extras_2escm"),(void*)f_2444},
{C_text("f_2449:extras_2escm"),(void*)f_2449},
{C_text("f_2450:extras_2escm"),(void*)f_2450},
{C_text("f_2468:extras_2escm"),(void*)f_2468},
{C_text("f_2472:extras_2escm"),(void*)f_2472},
{C_text("f_2480:extras_2escm"),(void*)f_2480},
{C_text("f_2491:extras_2escm"),(void*)f_2491},
{C_text("f_2509:extras_2escm"),(void*)f_2509},
{C_text("f_2513:extras_2escm"),(void*)f_2513},
{C_text("f_2536:extras_2escm"),(void*)f_2536},
{C_text("f_2544:extras_2escm"),(void*)f_2544},
{C_text("f_2547:extras_2escm"),(void*)f_2547},
{C_text("f_2551:extras_2escm"),(void*)f_2551},
{C_text("f_2571:extras_2escm"),(void*)f_2571},
{C_text("f_2578:extras_2escm"),(void*)f_2578},
{C_text("f_2589:extras_2escm"),(void*)f_2589},
{C_text("f_2596:extras_2escm"),(void*)f_2596},
{C_text("f_2612:extras_2escm"),(void*)f_2612},
{C_text("f_2642:extras_2escm"),(void*)f_2642},
{C_text("f_2651:extras_2escm"),(void*)f_2651},
{C_text("f_2654:extras_2escm"),(void*)f_2654},
{C_text("f_2661:extras_2escm"),(void*)f_2661},
{C_text("f_2667:extras_2escm"),(void*)f_2667},
{C_text("f_2674:extras_2escm"),(void*)f_2674},
{C_text("f_2684:extras_2escm"),(void*)f_2684},
{C_text("f_2690:extras_2escm"),(void*)f_2690},
{C_text("f_2695:extras_2escm"),(void*)f_2695},
{C_text("f_2708:extras_2escm"),(void*)f_2708},
{C_text("f_2711:extras_2escm"),(void*)f_2711},
{C_text("f_2722:extras_2escm"),(void*)f_2722},
{C_text("f_2734:extras_2escm"),(void*)f_2734},
{C_text("f_2737:extras_2escm"),(void*)f_2737},
{C_text("f_2744:extras_2escm"),(void*)f_2744},
{C_text("f_2752:extras_2escm"),(void*)f_2752},
{C_text("f_2755:extras_2escm"),(void*)f_2755},
{C_text("f_2779:extras_2escm"),(void*)f_2779},
{C_text("f_2786:extras_2escm"),(void*)f_2786},
{C_text("f_2788:extras_2escm"),(void*)f_2788},
{C_text("f_2804:extras_2escm"),(void*)f_2804},
{C_text("f_2811:extras_2escm"),(void*)f_2811},
{C_text("f_2822:extras_2escm"),(void*)f_2822},
{C_text("f_2835:extras_2escm"),(void*)f_2835},
{C_text("f_2838:extras_2escm"),(void*)f_2838},
{C_text("f_2851:extras_2escm"),(void*)f_2851},
{C_text("f_2867:extras_2escm"),(void*)f_2867},
{C_text("f_2871:extras_2escm"),(void*)f_2871},
{C_text("f_2873:extras_2escm"),(void*)f_2873},
{C_text("f_2909:extras_2escm"),(void*)f_2909},
{C_text("f_2916:extras_2escm"),(void*)f_2916},
{C_text("f_2927:extras_2escm"),(void*)f_2927},
{C_text("f_2943:extras_2escm"),(void*)f_2943},
{C_text("f_2969:extras_2escm"),(void*)f_2969},
{C_text("f_2974:extras_2escm"),(void*)f_2974},
{C_text("f_2978:extras_2escm"),(void*)f_2978},
{C_text("f_2998:extras_2escm"),(void*)f_2998},
{C_text("f_3000:extras_2escm"),(void*)f_3000},
{C_text("f_3004:extras_2escm"),(void*)f_3004},
{C_text("f_3009:extras_2escm"),(void*)f_3009},
{C_text("f_3015:extras_2escm"),(void*)f_3015},
{C_text("f_3036:extras_2escm"),(void*)f_3036},
{C_text("f_3042:extras_2escm"),(void*)f_3042},
{C_text("f_3064:extras_2escm"),(void*)f_3064},
{C_text("f_3068:extras_2escm"),(void*)f_3068},
{C_text("f_3076:extras_2escm"),(void*)f_3076},
{C_text("f_3080:extras_2escm"),(void*)f_3080},
{C_text("f_3082:extras_2escm"),(void*)f_3082},
{C_text("f_3085:extras_2escm"),(void*)f_3085},
{C_text("f_3106:extras_2escm"),(void*)f_3106},
{C_text("f_3110:extras_2escm"),(void*)f_3110},
{C_text("f_3124:extras_2escm"),(void*)f_3124},
{C_text("f_3145:extras_2escm"),(void*)f_3145},
{C_text("f_3149:extras_2escm"),(void*)f_3149},
{C_text("f_3163:extras_2escm"),(void*)f_3163},
{C_text("f_3174:extras_2escm"),(void*)f_3174},
{C_text("f_3187:extras_2escm"),(void*)f_3187},
{C_text("f_3202:extras_2escm"),(void*)f_3202},
{C_text("f_3220:extras_2escm"),(void*)f_3220},
{C_text("f_3222:extras_2escm"),(void*)f_3222},
{C_text("f_3228:extras_2escm"),(void*)f_3228},
{C_text("f_3234:extras_2escm"),(void*)f_3234},
{C_text("f_3240:extras_2escm"),(void*)f_3240},
{C_text("f_3246:extras_2escm"),(void*)f_3246},
{C_text("f_3252:extras_2escm"),(void*)f_3252},
{C_text("f_3258:extras_2escm"),(void*)f_3258},
{C_text("f_3278:extras_2escm"),(void*)f_3278},
{C_text("f_3284:extras_2escm"),(void*)f_3284},
{C_text("f_3293:extras_2escm"),(void*)f_3293},
{C_text("f_3303:extras_2escm"),(void*)f_3303},
{C_text("f_3419:extras_2escm"),(void*)f_3419},
{C_text("f_3423:extras_2escm"),(void*)f_3423},
{C_text("f_3432:extras_2escm"),(void*)f_3432},
{C_text("f_3434:extras_2escm"),(void*)f_3434},
{C_text("f_3441:extras_2escm"),(void*)f_3441},
{C_text("f_3445:extras_2escm"),(void*)f_3445},
{C_text("f_3447:extras_2escm"),(void*)f_3447},
{C_text("f_3451:extras_2escm"),(void*)f_3451},
{C_text("f_3458:extras_2escm"),(void*)f_3458},
{C_text("f_3465:extras_2escm"),(void*)f_3465},
{C_text("f_3468:extras_2escm"),(void*)f_3468},
{C_text("f_3490:extras_2escm"),(void*)f_3490},
{C_text("f_3496:extras_2escm"),(void*)f_3496},
{C_text("f_3505:extras_2escm"),(void*)f_3505},
{C_text("f_3512:extras_2escm"),(void*)f_3512},
{C_text("f_3531:extras_2escm"),(void*)f_3531},
{C_text("f_3544:extras_2escm"),(void*)f_3544},
{C_text("f_3569:extras_2escm"),(void*)f_3569},
{C_text("f_3582:extras_2escm"),(void*)f_3582},
{C_text("f_3595:extras_2escm"),(void*)f_3595},
{C_text("f_3608:extras_2escm"),(void*)f_3608},
{C_text("f_3612:extras_2escm"),(void*)f_3612},
{C_text("f_3625:extras_2escm"),(void*)f_3625},
{C_text("f_3629:extras_2escm"),(void*)f_3629},
{C_text("f_3642:extras_2escm"),(void*)f_3642},
{C_text("f_3646:extras_2escm"),(void*)f_3646},
{C_text("f_3664:extras_2escm"),(void*)f_3664},
{C_text("f_3667:extras_2escm"),(void*)f_3667},
{C_text("f_3673:extras_2escm"),(void*)f_3673},
{C_text("f_3709:extras_2escm"),(void*)f_3709},
{C_text("f_3767:extras_2escm"),(void*)f_3767},
{C_text("f_3778:extras_2escm"),(void*)f_3778},
{C_text("f_3784:extras_2escm"),(void*)f_3784},
{C_text("f_3790:extras_2escm"),(void*)f_3790},
{C_text("f_3796:extras_2escm"),(void*)f_3796},
{C_text("f_3804:extras_2escm"),(void*)f_3804},
{C_text("f_3829:extras_2escm"),(void*)f_3829},
{C_text("f_3839:extras_2escm"),(void*)f_3839},
{C_text("f_3842:extras_2escm"),(void*)f_3842},
{C_text("f_3844:extras_2escm"),(void*)f_3844},
{C_text("f_3851:extras_2escm"),(void*)f_3851},
{C_text("f_3854:extras_2escm"),(void*)f_3854},
{C_text("f_3865:extras_2escm"),(void*)f_3865},
{C_text("f_3883:extras_2escm"),(void*)f_3883},
{C_text("f_3899:extras_2escm"),(void*)f_3899},
{C_text("f_3902:extras_2escm"),(void*)f_3902},
{C_text("f_3918:extras_2escm"),(void*)f_3918},
{C_text("f_3921:extras_2escm"),(void*)f_3921},
{C_text("f_3928:extras_2escm"),(void*)f_3928},
{C_text("f_3943:extras_2escm"),(void*)f_3943},
{C_text("f_3966:extras_2escm"),(void*)f_3966},
{C_text("toplevel:extras_2escm"),(void*)C_extras_toplevel},
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
o|hiding unexported module binding: chicken.io#d 
o|hiding unexported module binding: chicken.io#define-alias 
o|hiding unexported module binding: chicken.io#read-string!/port 
o|hiding unexported module binding: chicken.io#read-string/port 
o|hiding unexported module binding: chicken.pretty-print#generic-write 
o|hiding unexported module binding: chicken.format#fprintf0 
o|eliminated procedure checks: 27 
o|specializations:
o|  11 (scheme#eqv? (or eof null fixnum char boolean symbol keyword) *)
o|  1 (scheme#current-output-port)
o|  4 (scheme#make-string fixnum char)
o|  3 (scheme#number->string fixnum fixnum)
o|  1 (scheme#assq * (list-of pair))
o|  2 (scheme#char<? char char)
o|  1 (scheme#+ fixnum fixnum)
o|  3 (scheme#char=? char char)
o|  5 (scheme#car pair)
o|  13 (scheme#cdr pair)
o|  1 (scheme#make-string fixnum)
o|  4 (##sys#check-output-port * * *)
o|  24 (scheme#eqv? * (or eof null fixnum char boolean symbol keyword))
o|  8 (##sys#check-input-port * * *)
(o e)|safe calls: 337 
(o e)|assignments to immediate values: 8 
o|safe globals: (chicken.pretty-print#generic-write chicken.io#write-byte chicken.io#read-byte chicken.io#write-string chicken.io#read-token chicken.io#read-buffered chicken.io#read-string chicken.io#read-string/port chicken.io#read-string! chicken.io#read-string!/port chicken.io#write-line chicken.io#read-lines chicken.io#read-line chicken.io#read-list) 
o|substituted constant variable: a1126 
o|substituted constant variable: a1127 
o|inlining procedure: k1138 
o|inlining procedure: k1138 
o|inlining procedure: k1165 
o|inlining procedure: k1165 
o|substituted constant variable: a1220 
o|substituted constant variable: a1221 
o|inlining procedure: k1225 
o|inlining procedure: k1225 
o|inlining procedure: k1248 
o|inlining procedure: k1248 
o|inlining procedure: k1266 
o|inlining procedure: k1266 
o|inlining procedure: k1275 
o|inlining procedure: k1275 
o|inlining procedure: k1293 
o|inlining procedure: k1293 
o|substituted constant variable: a1334 
o|substituted constant variable: a1336 
o|inlining procedure: k1344 
o|inlining procedure: k1344 
o|substituted constant variable: a1376 
o|substituted constant variable: a1377 
o|inlining procedure: k1391 
o|inlining procedure: k1391 
o|substituted constant variable: a1457 
o|substituted constant variable: a1458 
o|inlining procedure: k1481 
o|inlining procedure: k1481 
o|inlining procedure: k1505 
o|inlining procedure: k1505 
o|inlining procedure: k1564 
o|inlining procedure: k1564 
o|substituted constant variable: a1626 
o|substituted constant variable: a1627 
o|inlining procedure: k1690 
o|inlining procedure: k1690 
o|inlining procedure: k1702 
o|inlining procedure: k1702 
o|inlining procedure: k1735 
o|inlining procedure: k1735 
o|substituted constant variable: a1750 
o|substituted constant variable: a1771 
o|substituted constant variable: a1772 
o|inlining procedure: k1773 
o|inlining procedure: k1773 
o|substituted constant variable: a1815 
o|substituted constant variable: a1816 
o|inlining procedure: k1820 
o|inlining procedure: k1820 
o|substituted constant variable: a1843 
o|substituted constant variable: a1844 
o|inlining procedure: k1857 
o|inlining procedure: k1857 
o|substituted constant variable: a1901 
o|substituted constant variable: a1902 
o|inlining procedure: k1913 
o|inlining procedure: k1913 
o|inlining procedure: k1946 
o|inlining procedure: k1946 
o|substituted constant variable: a1982 
o|substituted constant variable: a1983 
o|inlining procedure: k1987 
o|inlining procedure: k1987 
o|substituted constant variable: a2012 
o|substituted constant variable: a2013 
o|inlining procedure: k2051 
o|contracted procedure: "(extras.scm:260) length1?423" 
o|inlining procedure: k2036 
o|inlining procedure: k2036 
o|inlining procedure: k2051 
o|inlining procedure: k2066 
o|inlining procedure: k2066 
o|substituted constant variable: a2079 
o|substituted constant variable: a2081 
o|substituted constant variable: a2083 
o|substituted constant variable: a2085 
o|inlining procedure: k2099 
o|inlining procedure: k2099 
o|inlining procedure: k2111 
o|inlining procedure: k2111 
o|substituted constant variable: a2124 
o|substituted constant variable: a2126 
o|substituted constant variable: a2128 
o|substituted constant variable: a2130 
o|inlining procedure: k2134 
o|inlining procedure: k2134 
o|inlining procedure: k2156 
o|inlining procedure: "(extras.scm:281) read-macro-body417" 
o|inlining procedure: k2156 
o|inlining procedure: k2183 
o|inlining procedure: k2201 
o|inlining procedure: k2201 
o|inlining procedure: k2228 
o|inlining procedure: k2228 
o|inlining procedure: k2183 
o|inlining procedure: k2260 
o|inlining procedure: k2260 
o|inlining procedure: k2278 
o|inlining procedure: k2278 
o|inlining procedure: k2304 
o|inlining procedure: k2314 
o|inlining procedure: k2314 
o|inlining procedure: k2304 
o|inlining procedure: k2330 
o|inlining procedure: k2330 
o|inlining procedure: k2365 
o|inlining procedure: k2387 
o|substituted constant variable: a2400 
o|substituted constant variable: a2409 
o|substituted constant variable: a2426 
o|inlining procedure: k2422 
o|substituted constant variable: a2446 
o|inlining procedure: k2447 
o|inlining procedure: k2447 
o|substituted constant variable: a2482 
o|substituted constant variable: a2487 
o|inlining procedure: k2422 
o|substituted constant variable: a2500 
o|substituted constant variable: a2502 
o|inlining procedure: k2387 
o|inlining procedure: k2365 
o|inlining procedure: k2527 
o|substituted constant variable: a2537 
o|inlining procedure: k2527 
o|inlining procedure: k2563 
o|substituted constant variable: a2580 
o|inlining procedure: k2563 
o|substituted constant variable: a2598 
o|inlining procedure: k2600 
o|inlining procedure: k2600 
o|substituted constant variable: a2613 
o|inlining procedure: k2615 
o|inlining procedure: k2615 
o|inlining procedure: k2627 
o|inlining procedure: k2627 
o|inlining procedure: k2643 
o|inlining procedure: k2643 
o|inlining procedure: k2679 
o|inlining procedure: k2697 
o|inlining procedure: k2697 
o|inlining procedure: k2679 
o|inlining procedure: k2757 
o|inlining procedure: k2757 
o|inlining procedure: k2790 
o|inlining procedure: k2799 
o|inlining procedure: k2799 
o|substituted constant variable: a2812 
o|substituted constant variable: a2813 
o|inlining procedure: k2790 
o|inlining procedure: k2824 
o|inlining procedure: k2852 
o|inlining procedure: k2852 
o|substituted constant variable: max-expr-width561 
o|inlining procedure: k2824 
o|inlining procedure: k2911 
o|inlining procedure: "(extras.scm:415) read-macro-body417" 
o|inlining procedure: k2911 
o|inlining procedure: k2944 
o|inlining procedure: k2944 
o|substituted constant variable: max-call-head-width560 
o|inlining procedure: k2979 
o|inlining procedure: k2979 
o|inlining procedure: k3017 
o|inlining procedure: k3049 
o|inlining procedure: k3049 
o|inlining procedure: k3017 
o|inlining procedure: k3087 
o|inlining procedure: k3087 
o|inlining procedure: k3126 
o|inlining procedure: k3126 
o|inlining procedure: k3175 
o|substituted constant variable: indent-general559 
o|inlining procedure: k3175 
o|substituted constant variable: indent-general559 
o|inlining procedure: k3295 
o|inlining procedure: k3295 
o|inlining procedure: k3313 
o|inlining procedure: k3313 
o|inlining procedure: k3325 
o|inlining procedure: k3325 
o|inlining procedure: k3340 
o|inlining procedure: k3340 
o|substituted constant variable: a3353 
o|substituted constant variable: a3355 
o|substituted constant variable: a3357 
o|substituted constant variable: a3362 
o|substituted constant variable: a3364 
o|substituted constant variable: a3366 
o|substituted constant variable: a3368 
o|substituted constant variable: a3373 
o|substituted constant variable: a3375 
o|inlining procedure: k3379 
o|inlining procedure: k3379 
o|inlining procedure: k3391 
o|inlining procedure: k3391 
o|substituted constant variable: a3398 
o|substituted constant variable: a3400 
o|substituted constant variable: a3402 
o|substituted constant variable: a3404 
o|substituted constant variable: a3406 
o|inlining procedure: k3410 
o|substituted constant variable: a3424 
o|substituted constant variable: a3425 
o|inlining procedure: k3410 
o|inlining procedure: k3469 
o|inlining procedure: k3469 
o|inlining procedure: k3514 
o|inlining procedure: k3514 
o|inlining procedure: k3533 
o|inlining procedure: k3533 
o|inlining procedure: k3557 
o|inlining procedure: k3557 
o|inlining procedure: k3583 
o|inlining procedure: k3583 
o|inlining procedure: k3613 
o|inlining procedure: k3613 
o|inlining procedure: k3647 
o|inlining procedure: k3647 
o|inlining procedure: k3674 
o|inlining procedure: k3674 
o|inlining procedure: k3695 
o|inlining procedure: k3711 
o|inlining procedure: k3711 
o|inlining procedure: k3695 
o|substituted constant variable: a3735 
o|substituted constant variable: a3737 
o|substituted constant variable: a3739 
o|substituted constant variable: a3741 
o|substituted constant variable: a3743 
o|substituted constant variable: a3745 
o|substituted constant variable: a3747 
o|substituted constant variable: a3749 
o|substituted constant variable: a3751 
o|substituted constant variable: a3753 
o|substituted constant variable: a3755 
o|substituted constant variable: a3775 
o|inlining procedure: k3802 
o|propagated global variable: r38034182 chicken.format#sprintf 
o|inlining procedure: k3802 
o|inlining procedure: k3814 
o|propagated global variable: r38154186 chicken.format#sprintf 
o|inlining procedure: k3814 
o|inlining procedure: k3866 
o|inlining procedure: k3866 
o|inlining procedure: k3885 
o|inlining procedure: k3885 
o|inlining procedure: k3929 
o|inlining procedure: k3929 
o|inlining procedure: k3941 
o|inlining procedure: k3941 
o|inlining procedure: k3961 
o|inlining procedure: k3961 
o|inlining procedure: k3967 
o|inlining procedure: k3967 
o|replaced variables: 936 
o|removed binding forms: 153 
o|substituted constant variable: r11664003 
o|substituted constant variable: r13454015 
o|substituted constant variable: r14824018 
o|substituted constant variable: r16914024 
o|substituted constant variable: r18214041 
o|substituted constant variable: r20374054 
o|substituted constant variable: r20524055 
o|removed side-effect free assignment to unused variable: read-macro-body417 
o|substituted constant variable: r21004058 
o|substituted constant variable: r21124060 
o|substituted constant variable: r21354063 
o|substituted constant variable: r23154082 
o|substituted constant variable: r23154082 
o|substituted constant variable: r23154084 
o|substituted constant variable: r23154084 
o|substituted constant variable: r26014103 
o|substituted constant variable: r26014103 
o|substituted constant variable: r26014105 
o|substituted constant variable: r26014105 
o|substituted constant variable: r28004121 
o|substituted constant variable: r27914122 
o|substituted constant variable: r29804137 
o|substituted constant variable: r30184141 
o|removed side-effect free assignment to unused variable: indent-general559 
o|removed side-effect free assignment to unused variable: max-call-head-width560 
o|removed side-effect free assignment to unused variable: max-expr-width561 
o|inlining procedure: k3542 
o|propagated global variable: a38014183 chicken.format#sprintf 
o|inlining procedure: k3802 
o|propagated global variable: r38034267 chicken.format#printf 
o|propagated global variable: r38034267 chicken.format#printf 
o|inlining procedure: k3802 
o|propagated global variable: r38034269 chicken.format#sprintf 
o|propagated global variable: r38034269 chicken.format#sprintf 
o|inlining procedure: k3802 
o|propagated global variable: r38034271 chicken.format#fprintf 
o|propagated global variable: r38034271 chicken.format#fprintf 
o|replaced variables: 32 
o|removed binding forms: 753 
o|inlining procedure: k3263 
o|inlining procedure: k3765 
o|removed binding forms: 72 
o|substituted constant variable: r32644295 
o|substituted constant variable: r37664302 
o|inlining procedure: k3947 
o|removed conditional forms: 1 
o|replaced variables: 1 
o|removed binding forms: 2 
o|removed binding forms: 1 
o|simplifications: ((let . 6) (if . 63) (##core#call . 282)) 
o|  call simplifications:
o|    ##sys#immediate?
o|    scheme#apply	5
o|    scheme#char-upcase
o|    scheme#char-whitespace?	2
o|    ##sys#check-list
o|    scheme#<	2
o|    scheme#>	5
o|    scheme#-	5
o|    scheme#vector?	2
o|    scheme#boolean?	2
o|    scheme#symbol?	3
o|    scheme#procedure?
o|    scheme#string?	2
o|    scheme#char?
o|    ##sys#generic-structure?
o|    ##sys#byte
o|    chicken.fixnum#fx>	2
o|    scheme#string-ref
o|    scheme#string-length	4
o|    scheme#+	11
o|    scheme#integer->char
o|    scheme#char->integer	3
o|    ##sys#size	7
o|    chicken.fixnum#fx<=
o|    ##sys#setislot
o|    scheme#not	9
o|    chicken.fixnum#fx<	7
o|    ##sys#check-string	4
o|    chicken.fixnum#fx-	5
o|    scheme#pair?	14
o|    scheme#cadr	3
o|    ##sys#slot	16
o|    scheme#eq?	45
o|    scheme#char=?
o|    chicken.fixnum#fx=
o|    scheme#car	27
o|    scheme#null?	36
o|    scheme#cdr	14
o|    scheme#eof-object?	8
o|    chicken.fixnum#fx>=	5
o|    chicken.fixnum#fx+	16
o|    scheme#cons	5
o|contracted procedure: k1201 
o|contracted procedure: k1107 
o|contracted procedure: k1195 
o|contracted procedure: k1110 
o|contracted procedure: k1189 
o|contracted procedure: k1113 
o|contracted procedure: k1183 
o|contracted procedure: k1116 
o|contracted procedure: k1177 
o|contracted procedure: k1119 
o|contracted procedure: k1171 
o|contracted procedure: k1122 
o|contracted procedure: k1141 
o|contracted procedure: k1144 
o|contracted procedure: k1158 
o|contracted procedure: k1162 
o|contracted procedure: k1210 
o|contracted procedure: k1213 
o|contracted procedure: k1341 
o|contracted procedure: k1222 
o|contracted procedure: k1236 
o|contracted procedure: k1251 
o|contracted procedure: k1263 
o|contracted procedure: k1269 
o|contracted procedure: k1278 
o|contracted procedure: k1287 
o|contracted procedure: k1296 
o|contracted procedure: k1315 
o|contracted procedure: k1318 
o|contracted procedure: k1326 
o|contracted procedure: k1354 
o|contracted procedure: k1347 
o|contracted procedure: k1444 
o|contracted procedure: k1363 
o|contracted procedure: k1438 
o|contracted procedure: k1366 
o|contracted procedure: k1432 
o|contracted procedure: k1369 
o|contracted procedure: k1426 
o|contracted procedure: k1372 
o|contracted procedure: k1385 
o|contracted procedure: k1394 
o|contracted procedure: k1406 
o|contracted procedure: k1416 
o|contracted procedure: k1420 
o|contracted procedure: k1453 
o|contracted procedure: k1459 
o|contracted procedure: k1472 
o|contracted procedure: k1462 
o|contracted procedure: k1484 
o|contracted procedure: k1607 
o|contracted procedure: k1487 
o|contracted procedure: k1549 
o|contracted procedure: k1545 
o|contracted procedure: k1502 
o|contracted procedure: k1508 
o|contracted procedure: k1514 
o|contracted procedure: k1517 
o|contracted procedure: k1524 
o|contracted procedure: k1528 
o|contracted procedure: k1532 
o|contracted procedure: k1567 
o|contracted procedure: k1573 
o|contracted procedure: k1576 
o|contracted procedure: k1583 
o|contracted procedure: k1587 
o|contracted procedure: k1591 
o|contracted procedure: k1603 
o|contracted procedure: k1681 
o|contracted procedure: k1613 
o|contracted procedure: k1675 
o|contracted procedure: k1616 
o|contracted procedure: k1669 
o|contracted procedure: k1619 
o|contracted procedure: k1663 
o|contracted procedure: k1622 
o|contracted procedure: k1628 
o|contracted procedure: k1634 
o|contracted procedure: k1650 
o|contracted procedure: k1657 
o|contracted procedure: k1693 
o|contracted procedure: k1699 
o|contracted procedure: k1714 
o|contracted procedure: k1738 
o|contracted procedure: k1800 
o|contracted procedure: k1758 
o|contracted procedure: k1794 
o|contracted procedure: k1761 
o|contracted procedure: k1788 
o|contracted procedure: k1764 
o|contracted procedure: k1782 
o|contracted procedure: k1767 
o|contracted procedure: k1830 
o|contracted procedure: k1811 
o|contracted procedure: k1827 
o|contracted procedure: k1817 
o|contracted procedure: k1886 
o|contracted procedure: k1839 
o|contracted procedure: k1883 
o|contracted procedure: k1876 
o|contracted procedure: k1895 
o|contracted procedure: k1930 
o|contracted procedure: k1906 
o|contracted procedure: k1926 
o|contracted procedure: k1949 
o|contracted procedure: k1955 
o|contracted procedure: k1962 
o|contracted procedure: k1968 
o|contracted procedure: k1996 
o|contracted procedure: k1978 
o|contracted procedure: k1990 
o|contracted procedure: k2021 
o|contracted procedure: k2005 
o|contracted procedure: k2018 
o|contracted procedure: k2047 
o|contracted procedure: k2054 
o|contracted procedure: k2039 
o|contracted procedure: k2063 
o|contracted procedure: k2069 
o|contracted procedure: k2095 
o|contracted procedure: k2102 
o|contracted procedure: k2108 
o|contracted procedure: k2114 
o|contracted procedure: k2120 
o|contracted procedure: k2147 
o|contracted procedure: k2166 
o|contracted procedure: k2186 
o|contracted procedure: k2204 
o|contracted procedure: k2210 
o|contracted procedure: k2231 
o|contracted procedure: k2263 
o|contracted procedure: k2272 
o|contracted procedure: k2281 
o|contracted procedure: k2290 
o|contracted procedure: k2307 
o|contracted procedure: k2336 
o|contracted procedure: k2355 
o|contracted procedure: k2368 
o|contracted procedure: k2393 
o|contracted procedure: k2401 
o|contracted procedure: k2427 
o|contracted procedure: k2434 
o|contracted procedure: k2438 
o|contracted procedure: k2456 
o|contracted procedure: k2474 
o|contracted procedure: k2484 
o|contracted procedure: k2496 
o|contracted procedure: k2518 
o|contracted procedure: k2524 
o|contracted procedure: k2539 
o|contracted procedure: k2557 
o|contracted procedure: k2566 
o|contracted procedure: k2584 
o|contracted procedure: k2603 
o|contracted procedure: k2646 
o|contracted procedure: k2676 
o|contracted procedure: k2685 
o|contracted procedure: k2700 
o|contracted procedure: k2703 
o|contracted procedure: k2716 
o|contracted procedure: k2723 
o|contracted procedure: k2760 
o|contracted procedure: k2766 
o|contracted procedure: k2773 
o|contracted procedure: k2796 
o|contracted procedure: k2818 
o|contracted procedure: k2827 
o|contracted procedure: k2830 
o|contracted procedure: k2842 
o|contracted procedure: k2855 
o|contracted procedure: k2876 
o|contracted procedure: k2887 
o|contracted procedure: k2880 
o|contracted procedure: k2899 
o|contracted procedure: k2895 
o|contracted procedure: k2891 
o|contracted procedure: k2921 
o|contracted procedure: k2932 
o|contracted procedure: k2938 
o|contracted procedure: k2963 
o|contracted procedure: k2953 
o|contracted procedure: k2988 
o|contracted procedure: k2992 
o|contracted procedure: k3023 
o|contracted procedure: k3043 
o|contracted procedure: k3027 
o|contracted procedure: k3052 
o|contracted procedure: k3070 
o|contracted procedure: k3090 
o|contracted procedure: k3093 
o|contracted procedure: k3111 
o|contracted procedure: k3097 
o|contracted procedure: k3129 
o|contracted procedure: k3132 
o|contracted procedure: k3150 
o|contracted procedure: k3136 
o|contracted procedure: k3168 
o|contracted procedure: k3178 
o|contracted procedure: k3181 
o|contracted procedure: k3192 
o|contracted procedure: k3196 
o|contracted procedure: k3207 
o|contracted procedure: k3211 
o|contracted procedure: k3260 
o|contracted procedure: k3269 
o|contracted procedure: k3263 
o|contracted procedure: k3298 
o|contracted procedure: k3307 
o|contracted procedure: k3310 
o|contracted procedure: k3316 
o|contracted procedure: k3322 
o|contracted procedure: k3328 
o|contracted procedure: k3331 
o|contracted procedure: k3337 
o|contracted procedure: k3343 
o|contracted procedure: k3349 
o|contracted procedure: k3376 
o|contracted procedure: k3382 
o|contracted procedure: k3388 
o|contracted procedure: k3452 
o|contracted procedure: k3436 
o|contracted procedure: k3460 
o|contracted procedure: k3472 
o|contracted procedure: k3492 
o|contracted procedure: k3481 
o|contracted procedure: k3498 
o|contracted procedure: k3501 
o|contracted procedure: k3508 
o|contracted procedure: k3520 
o|contracted procedure: k3524 
o|contracted procedure: k3536 
o|contracted procedure: k3759 
o|contracted procedure: k3548 
o|contracted procedure: k3554 
o|contracted procedure: k3560 
o|contracted procedure: k3573 
o|contracted procedure: k3586 
o|contracted procedure: k3599 
o|contracted procedure: k3616 
o|contracted procedure: k3633 
o|contracted procedure: k3650 
o|contracted procedure: k3659 
o|contracted procedure: k3668 
o|contracted procedure: k3677 
o|contracted procedure: k3686 
o|contracted procedure: k3689 
o|contracted procedure: k3698 
o|contracted procedure: k3714 
o|contracted procedure: k3725 
o|contracted procedure: k3805 
o|contracted procedure: k3811 
o|contracted procedure: k3817 
o|contracted procedure: k3821 
o|contracted procedure: k3831 
o|contracted procedure: k3876 
o|contracted procedure: k3846 
o|contracted procedure: k3857 
o|contracted procedure: k3873 
o|contracted procedure: k3891 
o|contracted procedure: k3994 
o|contracted procedure: k3904 
o|contracted procedure: k3988 
o|contracted procedure: k3907 
o|contracted procedure: k3982 
o|contracted procedure: k3910 
o|contracted procedure: k3976 
o|contracted procedure: k3913 
o|contracted procedure: k3923 
o|contracted procedure: k3932 
o|contracted procedure: k3944 
o|contracted procedure: k3947 
o|contracted procedure: k3970 
o|simplifications: ((if . 3) (let . 72)) 
o|removed binding forms: 272 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest8485 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest8485 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest8485 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest8485 0 
(o x)|known list op on rest arg sublist: ##core#rest-car args110 0 
o|inlining procedure: k1308 
o|inlining procedure: k1308 
(o x)|known list op on rest arg sublist: ##core#rest-cdr args110 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest148149 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest148149 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest148149 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest148149 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest224227 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest224227 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest224227 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest224227 0 
o|contracted procedure: k1646 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest268269 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest268269 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest268269 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest268269 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest288289 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest288289 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? port299 0 
(o x)|known list op on rest arg sublist: ##core#rest-car port299 0 
o|contracted procedure: k1916 
(o x)|known list op on rest arg sublist: ##core#rest-null? more314 0 
(o x)|known list op on rest arg sublist: ##core#rest-car more314 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr more314 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest346347 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest346347 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest359361 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest359361 0 
o|contracted procedure: k2390 
(o x)|known list op on rest arg sublist: ##core#rest-car opt738 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest871873 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest871873 0 
o|inlining procedure: k3852 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest898899 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest898899 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest898899 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest898899 0 
o|removed binding forms: 3 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1111 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r1111 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1111 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r1111 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1367 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r1367 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1367 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r1367 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1617 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r1617 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1617 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r1617 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1762 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r1762 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1762 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r1762 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? _%rest318338 1 
(o x)|known list op on rest arg sublist: ##core#rest-car _%rest318338 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr _%rest318338 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r3908 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r3908 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r3908 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r3908 1 
o|removed binding forms: 4 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1117 2 
(o x)|known list op on rest arg sublist: ##core#rest-car r1117 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1117 2 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r1117 2 
o|removed binding forms: 11 
o|removed binding forms: 2 
o|direct leaf routine/allocation: read-macro-prefix418 0 
o|direct leaf routine/allocation: fetch781 0 
o|contracted procedure: "(extras.scm:281) k2174" 
o|contracted procedure: "(extras.scm:416) k2929" 
o|contracted procedure: "(extras.scm:590) k3539" 
o|contracted procedure: "(extras.scm:592) k3551" 
o|contracted procedure: "(extras.scm:610) k3705" 
o|contracted procedure: "(extras.scm:612) k3721" 
o|removed binding forms: 6 
o|direct leaf routine/allocation: skip804 0 
o|inlining procedure: k3542 
o|converted assignments to bindings: (skip804) 
o|simplifications: ((let . 1)) 
o|customizable procedures: (chicken.format#fprintf0 rec776 next782 loop787 pp421 k3301 tail1621 tail3623 tail2622 indent543 loop603 pp-down548 style562 pp-call546 pp-general549 pr544 chicken.pretty-print#generic-write pp-list547 spaces542 doloop527528 g518519 g507508 loop484 wr-expr464 loop470 read-macro?416 wr-lst465 out419 wr420 k2057 def-n319336 def-port320334 body317326 loop306 loop256 k1637 k1561 loop204 loop189 loop160 k1216 loop127 g122123 doloop9899) 
o|calls to known targets: 196 
o|unused rest argument: rest8485 f_1105 
o|unused rest argument: rest148149 f_1361 
o|unused rest argument: rest224227 f_1611 
o|unused rest argument: rest268269 f_1756 
o|unused rest argument: rest288289 f_1809 
o|unused rest argument: port299 f_1837 
o|unused rest argument: more314 f_1893 
o|unused rest argument: rest346347 f_1976 
o|unused rest argument: rest359361 f_2003 
o|identified direct recursive calls: f_2385 1 
o|identified direct recursive calls: f_3709 1 
o|identified direct recursive calls: f_3531 1 
o|unused rest argument: rest871873 f_3844 
o|unused rest argument: rest898899 f_3902 
o|fast box initializations: 43 
o|fast global references: 5 
o|fast global assignments: 2 
o|dropping unused closure argument: f_2028 
o|dropping unused closure argument: f_2031 
o|dropping unused closure argument: f_2093 
o|dropping unused closure argument: f_3458 
*/
/* end of file */
