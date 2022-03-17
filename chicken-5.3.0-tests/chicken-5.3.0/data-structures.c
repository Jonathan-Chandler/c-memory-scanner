/* Generated from data-structures.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.3.0rc4 ((HEAD detached at 5.3.0rc4)) (rev b6cbb1ba)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: data-structures.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file data-structures.c -emit-import-library chicken.sort -emit-import-library chicken.string
   unit: data-structures
   uses: library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[84];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,107,41};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,23),40,114,101,118,45,115,116,114,105,110,103,45,97,112,112,101,110,100,32,108,32,105,41,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,114,101,118,101,114,115,101,45,115,116,114,105,110,103,45,97,112,112,101,110,100,32,108,41};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,39),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,114,101,118,101,114,115,101,45,108,105,115,116,45,62,115,116,114,105,110,103,32,108,41,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,27),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,45,62,115,116,114,105,110,103,32,120,41,0,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,16),40,109,97,112,45,108,111,111,112,56,48,32,103,57,50,41};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,28),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,99,111,110,99,32,46,32,97,114,103,115,41,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,105,115,116,97,114,116,41,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,37),40,116,114,97,118,101,114,115,101,32,119,104,105,99,104,32,119,104,101,114,101,32,115,116,97,114,116,32,116,101,115,116,32,108,111,99,41,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,11),40,97,49,49,48,49,32,105,32,108,41,0,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,41),40,35,35,115,121,115,35,115,117,98,115,116,114,105,110,103,45,105,110,100,101,120,32,119,104,105,99,104,32,119,104,101,114,101,32,115,116,97,114,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,11),40,97,49,49,49,48,32,105,32,108,41,0,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,44),40,35,35,115,121,115,35,115,117,98,115,116,114,105,110,103,45,105,110,100,101,120,45,99,105,32,119,104,105,99,104,32,119,104,101,114,101,32,115,116,97,114,116,41,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,51),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,115,117,98,115,116,114,105,110,103,45,105,110,100,101,120,32,119,104,105,99,104,32,119,104,101,114,101,32,46,32,114,101,115,116,41,0,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,54),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,115,117,98,115,116,114,105,110,103,45,105,110,100,101,120,45,99,105,32,119,104,105,99,104,32,119,104,101,114,101,32,46,32,114,101,115,116,41,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,115,116,114,105,110,103,45,99,111,109,112,97,114,101,51,32,115,49,32,115,50,41,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,115,116,114,105,110,103,45,99,111,109,112,97,114,101,51,45,99,105,32,115,49,32,115,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,41),40,35,35,115,121,115,35,115,117,98,115,116,114,105,110,103,61,63,32,115,49,32,115,50,32,115,116,97,114,116,49,32,115,116,97,114,116,50,32,110,41,0,0,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,115,117,98,115,116,114,105,110,103,61,63,32,115,49,32,115,50,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,44),40,35,35,115,121,115,35,115,117,98,115,116,114,105,110,103,45,99,105,61,63,32,115,49,32,115,50,32,115,116,97,114,116,49,32,115,116,97,114,116,50,32,110,41,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,115,117,98,115,116,114,105,110,103,45,99,105,61,63,32,115,49,32,115,50,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,18),40,97,100,100,32,102,114,111,109,32,116,111,32,108,97,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,8),40,115,99,97,110,32,106,41};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,32,105,32,108,97,115,116,32,102,114,111,109,41,0,0,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,51),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,115,116,114,105,110,103,45,115,112,108,105,116,32,115,116,114,32,46,32,100,101,108,115,116,114,45,97,110,100,45,102,108,97,103,41,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,50,32,110,50,41,0,0,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,49,32,115,115,32,110,41,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,47),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,115,116,114,105,110,103,45,105,110,116,101,114,115,112,101,114,115,101,32,115,116,114,115,32,46,32,114,101,115,116,41,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,10),40,102,95,49,54,52,52,32,99,41,0,0,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,12),40,105,110,115,116,114,105,110,103,32,115,41,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,105,32,106,41,0,0,0,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,10),40,102,95,49,56,49,54,32,99,41,0,0,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,47),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,115,116,114,105,110,103,45,116,114,97,110,115,108,97,116,101,32,115,116,114,32,102,114,111,109,32,46,32,116,111,41,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,115,109,97,112,41,0,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,25),40,99,111,108,108,101,99,116,32,105,32,102,114,111,109,32,116,111,116,97,108,32,102,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,115,116,114,105,110,103,45,116,114,97,110,115,108,97,116,101,42,32,115,116,114,32,115,109,97,112,41,0,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,116,111,116,97,108,32,112,111,115,41};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,115,116,114,105,110,103,45,99,104,111,112,32,115,116,114,32,108,101,110,41,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,115,116,114,105,110,103,45,99,104,111,109,112,32,115,116,114,32,46,32,114,101,115,116,41};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,13),40,100,111,108,111,111,112,52,55,51,32,105,41,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,108,97,115,116,32,110,101,120,116,41};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,32),40,99,104,105,99,107,101,110,46,115,111,114,116,35,115,111,114,116,101,100,63,32,115,101,113,32,108,101,115,115,63,41};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,120,32,97,32,121,32,98,41,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,30),40,99,104,105,99,107,101,110,46,115,111,114,116,35,109,101,114,103,101,32,97,32,98,32,108,101,115,115,63,41,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,114,32,97,32,98,41,0,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,31),40,99,104,105,99,107,101,110,46,115,111,114,116,35,109,101,114,103,101,33,32,97,32,98,32,108,101,115,115,63,41,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,8),40,115,116,101,112,32,110,41};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,15),40,100,111,108,111,111,112,53,52,52,32,112,32,105,41,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,30),40,99,104,105,99,107,101,110,46,115,111,114,116,35,115,111,114,116,33,32,115,101,113,32,108,101,115,115,63,41,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,29),40,99,104,105,99,107,101,110,46,115,111,114,116,35,115,111,114,116,32,115,101,113,32,108,101,115,115,63,41,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,18),40,119,97,108,107,32,101,100,103,101,115,32,115,116,97,116,101,41,0,0,0,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,33),40,118,105,115,105,116,32,100,97,103,32,110,111,100,101,32,101,100,103,101,115,32,112,97,116,104,32,115,116,97,116,101,41,0,0,0,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,100,97,103,32,115,116,97,116,101,41};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,18),40,103,53,57,52,32,114,101,115,117,108,116,32,110,111,100,101,41,0,0,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,20),40,102,111,108,100,108,53,56,55,32,103,53,56,56,32,103,53,56,54,41,0,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,115,111,114,116,35,116,111,112,111,108,111,103,105,99,97,108,45,115,111,114,116,32,100,97,103,32,112,114,101,100,41};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_1013)
static void C_ccall f_1013(C_word c,C_word *av) C_noret;
C_noret_decl(f_1022)
static void C_fcall f_1022(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1041)
static void C_ccall f_1041(C_word c,C_word *av) C_noret;
C_noret_decl(f_1064)
static void C_fcall f_1064(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1077)
static void C_ccall f_1077(C_word c,C_word *av) C_noret;
C_noret_decl(f_1096)
static void C_ccall f_1096(C_word c,C_word *av) C_noret;
C_noret_decl(f_1102)
static void C_ccall f_1102(C_word c,C_word *av) C_noret;
C_noret_decl(f_1105)
static void C_ccall f_1105(C_word c,C_word *av) C_noret;
C_noret_decl(f_1111)
static void C_ccall f_1111(C_word c,C_word *av) C_noret;
C_noret_decl(f_1114)
static void C_ccall f_1114(C_word c,C_word *av) C_noret;
C_noret_decl(f_1129)
static void C_ccall f_1129(C_word c,C_word *av) C_noret;
C_noret_decl(f_1144)
static void C_ccall f_1144(C_word c,C_word *av) C_noret;
C_noret_decl(f_1175)
static void C_ccall f_1175(C_word c,C_word *av) C_noret;
C_noret_decl(f_1206)
static void C_ccall f_1206(C_word c,C_word *av) C_noret;
C_noret_decl(f_1216)
static void C_fcall f_1216(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1219)
static void C_ccall f_1219(C_word c,C_word *av) C_noret;
C_noret_decl(f_1222)
static void C_ccall f_1222(C_word c,C_word *av) C_noret;
C_noret_decl(f_1243)
static void C_ccall f_1243(C_word c,C_word *av) C_noret;
C_noret_decl(f_1303)
static void C_ccall f_1303(C_word c,C_word *av) C_noret;
C_noret_decl(f_1313)
static void C_fcall f_1313(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1316)
static void C_ccall f_1316(C_word c,C_word *av) C_noret;
C_noret_decl(f_1319)
static void C_ccall f_1319(C_word c,C_word *av) C_noret;
C_noret_decl(f_1340)
static void C_ccall f_1340(C_word c,C_word *av) C_noret;
C_noret_decl(f_1400)
static void C_ccall f_1400(C_word c,C_word *av) C_noret;
C_noret_decl(f_1421)
static void C_fcall f_1421(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1436)
static void C_ccall f_1436(C_word c,C_word *av) C_noret;
C_noret_decl(f_1441)
static void C_fcall f_1441(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1451)
static void C_ccall f_1451(C_word c,C_word *av) C_noret;
C_noret_decl(f_1468)
static void C_fcall f_1468(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1507)
static void C_ccall f_1507(C_word c,C_word *av) C_noret;
C_noret_decl(f_1534)
static void C_ccall f_1534(C_word c,C_word *av) C_noret;
C_noret_decl(f_1552)
static void C_fcall f_1552(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1562)
static void C_ccall f_1562(C_word c,C_word *av) C_noret;
C_noret_decl(f_1567)
static C_word C_fcall f_1567(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_1636)
static void C_ccall f_1636(C_word c,C_word *av) C_noret;
C_noret_decl(f_1639)
static void C_fcall f_1639(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1644)
static void C_ccall f_1644(C_word c,C_word *av) C_noret;
C_noret_decl(f_1650)
static C_word C_fcall f_1650(C_word t0,C_word t1);
C_noret_decl(f_1674)
static void C_ccall f_1674(C_word c,C_word *av) C_noret;
C_noret_decl(f_1677)
static void C_ccall f_1677(C_word c,C_word *av) C_noret;
C_noret_decl(f_1689)
static void C_ccall f_1689(C_word c,C_word *av) C_noret;
C_noret_decl(f_1694)
static void C_fcall f_1694(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1713)
static void C_ccall f_1713(C_word c,C_word *av) C_noret;
C_noret_decl(f_1816)
static void C_ccall f_1816(C_word c,C_word *av) C_noret;
C_noret_decl(f_1833)
static void C_ccall f_1833(C_word c,C_word *av) C_noret;
C_noret_decl(f_1841)
static void C_ccall f_1841(C_word c,C_word *av) C_noret;
C_noret_decl(f_1853)
static void C_fcall f_1853(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1867)
static void C_ccall f_1867(C_word c,C_word *av) C_noret;
C_noret_decl(f_1881)
static void C_ccall f_1881(C_word c,C_word *av) C_noret;
C_noret_decl(f_1886)
static void C_fcall f_1886(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1926)
static void C_fcall f_1926(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1952)
static void C_ccall f_1952(C_word c,C_word *av) C_noret;
C_noret_decl(f_1969)
static void C_ccall f_1969(C_word c,C_word *av) C_noret;
C_noret_decl(f_1976)
static void C_ccall f_1976(C_word c,C_word *av) C_noret;
C_noret_decl(f_1984)
static void C_fcall f_1984(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2004)
static void C_ccall f_2004(C_word c,C_word *av) C_noret;
C_noret_decl(f_2015)
static void C_ccall f_2015(C_word c,C_word *av) C_noret;
C_noret_decl(f_2019)
static void C_ccall f_2019(C_word c,C_word *av) C_noret;
C_noret_decl(f_2033)
static void C_ccall f_2033(C_word c,C_word *av) C_noret;
C_noret_decl(f_2072)
static void C_ccall f_2072(C_word c,C_word *av) C_noret;
C_noret_decl(f_2099)
static void C_fcall f_2099(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2109)
static void C_ccall f_2109(C_word c,C_word *av) C_noret;
C_noret_decl(f_2147)
static void C_fcall f_2147(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2171)
static void C_ccall f_2171(C_word c,C_word *av) C_noret;
C_noret_decl(f_2177)
static void C_ccall f_2177(C_word c,C_word *av) C_noret;
C_noret_decl(f_2207)
static void C_fcall f_2207(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2214)
static void C_ccall f_2214(C_word c,C_word *av) C_noret;
C_noret_decl(f_2234)
static void C_ccall f_2234(C_word c,C_word *av) C_noret;
C_noret_decl(f_2260)
static void C_ccall f_2260(C_word c,C_word *av) C_noret;
C_noret_decl(f_2268)
static void C_ccall f_2268(C_word c,C_word *av) C_noret;
C_noret_decl(f_2271)
static void C_fcall f_2271(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2278)
static void C_ccall f_2278(C_word c,C_word *av) C_noret;
C_noret_decl(f_2346)
static void C_ccall f_2346(C_word c,C_word *av) C_noret;
C_noret_decl(f_2349)
static void C_ccall f_2349(C_word c,C_word *av) C_noret;
C_noret_decl(f_2367)
static void C_ccall f_2367(C_word c,C_word *av) C_noret;
C_noret_decl(f_2392)
static void C_ccall f_2392(C_word c,C_word *av) C_noret;
C_noret_decl(f_2395)
static void C_fcall f_2395(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2408)
static void C_ccall f_2408(C_word c,C_word *av) C_noret;
C_noret_decl(f_2414)
static void C_ccall f_2414(C_word c,C_word *av) C_noret;
C_noret_decl(f_2446)
static void C_ccall f_2446(C_word c,C_word *av) C_noret;
C_noret_decl(f_2480)
static void C_ccall f_2480(C_word c,C_word *av) C_noret;
C_noret_decl(f_2487)
static void C_ccall f_2487(C_word c,C_word *av) C_noret;
C_noret_decl(f_2489)
static void C_fcall f_2489(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2520)
static void C_ccall f_2520(C_word c,C_word *av) C_noret;
C_noret_decl(f_2534)
static void C_ccall f_2534(C_word c,C_word *av) C_noret;
C_noret_decl(f_2538)
static void C_ccall f_2538(C_word c,C_word *av) C_noret;
C_noret_decl(f_2545)
static void C_ccall f_2545(C_word c,C_word *av) C_noret;
C_noret_decl(f_2547)
static void C_ccall f_2547(C_word c,C_word *av) C_noret;
C_noret_decl(f_2550)
static void C_fcall f_2550(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_2554)
static void C_ccall f_2554(C_word c,C_word *av) C_noret;
C_noret_decl(f_2591)
static void C_ccall f_2591(C_word c,C_word *av) C_noret;
C_noret_decl(f_2603)
static void C_ccall f_2603(C_word c,C_word *av) C_noret;
C_noret_decl(f_2616)
static void C_ccall f_2616(C_word c,C_word *av) C_noret;
C_noret_decl(f_2622)
static void C_fcall f_2622(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2636)
static void C_ccall f_2636(C_word c,C_word *av) C_noret;
C_noret_decl(f_2658)
static void C_ccall f_2658(C_word c,C_word *av) C_noret;
C_noret_decl(f_2692)
static void C_ccall f_2692(C_word c,C_word *av) C_noret;
C_noret_decl(f_2701)
static void C_fcall f_2701(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2722)
static void C_ccall f_2722(C_word c,C_word *av) C_noret;
C_noret_decl(f_2739)
static void C_fcall f_2739(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2755)
static void C_fcall f_2755(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2767)
static void C_ccall f_2767(C_word c,C_word *av) C_noret;
C_noret_decl(f_2773)
static void C_ccall f_2773(C_word c,C_word *av) C_noret;
C_noret_decl(f_2781)
static void C_ccall f_2781(C_word c,C_word *av) C_noret;
C_noret_decl(f_849)
static void C_ccall f_849(C_word c,C_word *av) C_noret;
C_noret_decl(f_851)
static void C_ccall f_851(C_word c,C_word *av) C_noret;
C_noret_decl(f_854)
static void C_fcall f_854(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_868)
static void C_ccall f_868(C_word c,C_word *av) C_noret;
C_noret_decl(f_877)
static C_word C_fcall f_877(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_924)
static void C_ccall f_924(C_word c,C_word *av) C_noret;
C_noret_decl(f_930)
static void C_ccall f_930(C_word c,C_word *av) C_noret;
C_noret_decl(f_967)
static void C_ccall f_967(C_word c,C_word *av) C_noret;
C_noret_decl(f_970)
static void C_ccall f_970(C_word c,C_word *av) C_noret;
C_noret_decl(f_975)
static void C_ccall f_975(C_word c,C_word *av) C_noret;
C_noret_decl(f_986)
static void C_ccall f_986(C_word c,C_word *av) C_noret;
C_noret_decl(f_988)
static void C_fcall f_988(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externexport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1022)
static void C_ccall trf_1022(C_word c,C_word *av) C_noret;
static void C_ccall trf_1022(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_1022(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_1064)
static void C_ccall trf_1064(C_word c,C_word *av) C_noret;
static void C_ccall trf_1064(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1064(t0,t1,t2);}

C_noret_decl(trf_1216)
static void C_ccall trf_1216(C_word c,C_word *av) C_noret;
static void C_ccall trf_1216(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1216(t0,t1);}

C_noret_decl(trf_1313)
static void C_ccall trf_1313(C_word c,C_word *av) C_noret;
static void C_ccall trf_1313(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1313(t0,t1);}

C_noret_decl(trf_1421)
static void C_ccall trf_1421(C_word c,C_word *av) C_noret;
static void C_ccall trf_1421(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1421(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1441)
static void C_ccall trf_1441(C_word c,C_word *av) C_noret;
static void C_ccall trf_1441(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1441(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1468)
static void C_ccall trf_1468(C_word c,C_word *av) C_noret;
static void C_ccall trf_1468(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1468(t0,t1,t2);}

C_noret_decl(trf_1552)
static void C_ccall trf_1552(C_word c,C_word *av) C_noret;
static void C_ccall trf_1552(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1552(t0,t1,t2,t3);}

C_noret_decl(trf_1639)
static void C_ccall trf_1639(C_word c,C_word *av) C_noret;
static void C_ccall trf_1639(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1639(t0,t1);}

C_noret_decl(trf_1694)
static void C_ccall trf_1694(C_word c,C_word *av) C_noret;
static void C_ccall trf_1694(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1694(t0,t1,t2,t3);}

C_noret_decl(trf_1853)
static void C_ccall trf_1853(C_word c,C_word *av) C_noret;
static void C_ccall trf_1853(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_1853(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_1886)
static void C_ccall trf_1886(C_word c,C_word *av) C_noret;
static void C_ccall trf_1886(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1886(t0,t1,t2);}

C_noret_decl(trf_1926)
static void C_ccall trf_1926(C_word c,C_word *av) C_noret;
static void C_ccall trf_1926(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1926(t0,t1);}

C_noret_decl(trf_1984)
static void C_ccall trf_1984(C_word c,C_word *av) C_noret;
static void C_ccall trf_1984(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1984(t0,t1,t2,t3);}

C_noret_decl(trf_2099)
static void C_ccall trf_2099(C_word c,C_word *av) C_noret;
static void C_ccall trf_2099(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2099(t0,t1,t2);}

C_noret_decl(trf_2147)
static void C_ccall trf_2147(C_word c,C_word *av) C_noret;
static void C_ccall trf_2147(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2147(t0,t1,t2,t3);}

C_noret_decl(trf_2207)
static void C_ccall trf_2207(C_word c,C_word *av) C_noret;
static void C_ccall trf_2207(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_2207(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2271)
static void C_ccall trf_2271(C_word c,C_word *av) C_noret;
static void C_ccall trf_2271(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_2271(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2395)
static void C_ccall trf_2395(C_word c,C_word *av) C_noret;
static void C_ccall trf_2395(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2395(t0,t1,t2);}

C_noret_decl(trf_2489)
static void C_ccall trf_2489(C_word c,C_word *av) C_noret;
static void C_ccall trf_2489(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2489(t0,t1,t2,t3);}

C_noret_decl(trf_2550)
static void C_ccall trf_2550(C_word c,C_word *av) C_noret;
static void C_ccall trf_2550(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_2550(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_2622)
static void C_ccall trf_2622(C_word c,C_word *av) C_noret;
static void C_ccall trf_2622(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2622(t0,t1,t2,t3);}

C_noret_decl(trf_2701)
static void C_ccall trf_2701(C_word c,C_word *av) C_noret;
static void C_ccall trf_2701(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2701(t0,t1,t2,t3);}

C_noret_decl(trf_2739)
static void C_ccall trf_2739(C_word c,C_word *av) C_noret;
static void C_ccall trf_2739(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2739(t0,t1,t2,t3);}

C_noret_decl(trf_2755)
static void C_ccall trf_2755(C_word c,C_word *av) C_noret;
static void C_ccall trf_2755(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2755(t0,t1,t2,t3);}

C_noret_decl(trf_854)
static void C_ccall trf_854(C_word c,C_word *av) C_noret;
static void C_ccall trf_854(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_854(t0,t1,t2,t3);}

C_noret_decl(trf_988)
static void C_ccall trf_988(C_word c,C_word *av) C_noret;
static void C_ccall trf_988(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_988(t0,t1,t2);}

/* k1011 in map-loop80 in chicken.string#conc in k847 */
static void C_ccall f_1013(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1013,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_988(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* traverse in k847 */
static void C_fcall f_1022(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_1022,6,t1,t2,t3,t4,t5,t6);}
a=C_alloc(9);
t7=C_i_check_string_2(t2,t6);
t8=C_i_check_string_2(t3,t6);
t9=C_block_size(t3);
t10=C_block_size(t2);
t11=C_fixnum_difference(t9,t10);
t12=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1041,a[2]=t4,a[3]=t9,a[4]=t10,a[5]=t1,a[6]=t11,a[7]=t5,a[8]=t6,tmp=(C_word)a,a+=9,tmp);
/* data-structures.scm:93: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word av2[4];
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t12;
av2[2]=t4;
av2[3]=t6;
tp(4,av2);}}

/* k1039 in traverse in k847 */
static void C_ccall f_1041(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_1041,c,av);}
a=C_alloc(9);
t2=C_fixnum_greater_or_equal_p(((C_word*)t0)[2],C_fix(0));
t3=(C_truep(t2)?C_fixnum_greater_or_equal_p(((C_word*)t0)[3],((C_word*)t0)[2]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=C_eqp(((C_word*)t0)[4],C_fix(0));
if(C_truep(t4)){
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)t0)[6],C_fix(0)))){
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1064,a[2]=((C_word*)t0)[6],a[3]=t6,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[4],a[6]=((C_word)li7),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_1064(t8,((C_word*)t0)[5],((C_word*)t0)[2]);}
else{
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}}
else{
t4=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* data-structures.scm:103: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[14]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[14]+1);
av2[1]=((C_word*)t0)[5];
av2[2]=t4;
av2[3]=((C_word*)t0)[8];
av2[4]=((C_word*)t0)[2];
av2[5]=((C_word*)t0)[3];
tp(6,av2);}}}

/* loop in k1039 in traverse in k847 */
static void C_fcall f_1064(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_1064,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_fixnum_greaterp(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1077,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:101: test */
t4=((C_word*)t0)[4];{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t4))(4,av2);}}}

/* k1075 in loop in k1039 in traverse in k847 */
static void C_ccall f_1077(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1077,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* data-structures.scm:102: loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1064(t2,((C_word*)t0)[2],C_fixnum_plus(((C_word*)t0)[3],C_fix(1)));}}

/* ##sys#substring-index in k847 */
static void C_ccall f_1096(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_1096,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1102,a[2]=t2,a[3]=t3,a[4]=((C_word)li9),tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:110: traverse */
f_1022(t1,t2,t3,t4,t5,lf[17]);}

/* a1101 in ##sys#substring-index in k847 */
static void C_ccall f_1102(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1102,c,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_substring_compare(((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0),t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* ##sys#substring-index-ci in k847 */
static void C_ccall f_1105(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_1105,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1111,a[2]=t2,a[3]=t3,a[4]=((C_word)li11),tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:116: traverse */
f_1022(t1,t2,t3,t4,t5,lf[19]);}

/* a1110 in ##sys#substring-index-ci in k847 */
static void C_ccall f_1111(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1111,c,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_substring_compare_case_insensitive(((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0),t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.string#substring-index in k847 */
static void C_ccall f_1114(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1114,c,av);}
if(C_truep(C_rest_nullp(c,4))){
/* data-structures.scm:122: ##sys#substring-index */
t4=*((C_word*)lf[16]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
/* data-structures.scm:122: ##sys#substring-index */
t4=*((C_word*)lf[16]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=C_get_rest_arg(c,4,av,4,t0);
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}

/* chicken.string#substring-index-ci in k847 */
static void C_ccall f_1129(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1129,c,av);}
if(C_truep(C_rest_nullp(c,4))){
/* data-structures.scm:125: ##sys#substring-index-ci */
t4=*((C_word*)lf[18]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
/* data-structures.scm:125: ##sys#substring-index-ci */
t4=*((C_word*)lf[18]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=C_get_rest_arg(c,4,av,4,t0);
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}

/* chicken.string#string-compare3 in k847 */
static void C_ccall f_1144(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1144,c,av);}
t4=C_i_check_string_2(t2,lf[23]);
t5=C_i_check_string_2(t3,lf[23]);
t6=C_block_size(t2);
t7=C_block_size(t3);
t8=C_fixnum_difference(t6,t7);
t9=C_fixnum_lessp(t8,C_fix(0));
t10=(C_truep(t9)?t6:t7);
t11=C_string_compare(t2,t3,t10);
t12=C_eqp(t11,C_fix(0));
t13=t1;{
C_word *av2=av;
av2[0]=t13;
av2[1]=(C_truep(t12)?t8:t11);
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}

/* chicken.string#string-compare3-ci in k847 */
static void C_ccall f_1175(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1175,c,av);}
t4=C_i_check_string_2(t2,lf[25]);
t5=C_i_check_string_2(t3,lf[25]);
t6=C_block_size(t2);
t7=C_block_size(t3);
t8=C_fixnum_difference(t6,t7);
t9=C_fixnum_lessp(t8,C_fix(0));
t10=(C_truep(t9)?t6:t7);
t11=C_string_compare_case_insensitive(t2,t3,t10);
t12=C_eqp(t11,C_fix(0));
t13=t1;{
C_word *av2=av;
av2[0]=t13;
av2[1]=(C_truep(t12)?t8:t11);
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}

/* ##sys#substring=? in k847 */
static void C_ccall f_1206(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6=av[6];
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a;
if(c!=7) C_bad_argc_2(c,7,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_1206,c,av);}
a=C_alloc(7);
t7=C_i_check_string_2(t2,lf[27]);
t8=C_i_check_string_2(t3,lf[27]);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1216,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t6)){
t10=t9;
f_1216(t10,t6);}
else{
t10=C_block_size(t2);
t11=C_fixnum_difference(t10,t4);
t12=C_block_size(t3);
t13=t9;
f_1216(t13,C_i_fixnum_min(t11,C_fixnum_difference(t12,t5)));}}

/* k1214 in ##sys#substring=? in k847 */
static void C_fcall f_1216(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_1216,2,t0,t1);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1219,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* data-structures.scm:161: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word av2[4];
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=lf[27];
tp(4,av2);}}

/* k1217 in k1214 in ##sys#substring=? in k847 */
static void C_ccall f_1219(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_1219,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1222,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* data-structures.scm:162: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=lf[27];
tp(4,av2);}}

/* k1220 in k1217 in k1214 in ##sys#substring=? in k847 */
static void C_ccall f_1222(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1222,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_substring_compare(((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.string#substring=? in k847 */
static void C_ccall f_1243(C_word c,C_word *av){
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
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_1243,c,av);}
t4=C_rest_nullp(c,4);
t5=(C_truep(t4)?C_fix(0):C_get_rest_arg(c,4,av,4,t0));
t6=C_rest_nullp(c,4);
t7=C_rest_nullp(c,5);
t8=(C_truep(t7)?C_fix(0):C_get_rest_arg(c,5,av,4,t0));
t9=C_rest_nullp(c,5);
t10=C_rest_nullp(c,6);
t11=(C_truep(t10)?C_SCHEME_FALSE:C_get_rest_arg(c,6,av,4,t0));
if(C_truep(C_rest_nullp(c,6))){
/* data-structures.scm:166: ##sys#substring=? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word av2[7];
av2[0]=*((C_word*)lf[26]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t5;
av2[5]=t8;
av2[6]=t11;
tp(7,av2);}}
else{
/* data-structures.scm:166: ##sys#substring=? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word av2[7];
av2[0]=*((C_word*)lf[26]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t5;
av2[5]=t8;
av2[6]=t11;
tp(7,av2);}}}

/* ##sys#substring-ci=? in k847 */
static void C_ccall f_1303(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6=av[6];
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a;
if(c!=7) C_bad_argc_2(c,7,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_1303,c,av);}
a=C_alloc(7);
t7=C_i_check_string_2(t2,lf[30]);
t8=C_i_check_string_2(t3,lf[30]);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1313,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t6)){
t10=t9;
f_1313(t10,t6);}
else{
t10=C_block_size(t2);
t11=C_fixnum_difference(t10,t4);
t12=C_block_size(t3);
t13=t9;
f_1313(t13,C_i_fixnum_min(t11,C_fixnum_difference(t12,t5)));}}

/* k1311 in ##sys#substring-ci=? in k847 */
static void C_fcall f_1313(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_1313,2,t0,t1);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1316,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* data-structures.scm:174: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word av2[4];
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=lf[30];
tp(4,av2);}}

/* k1314 in k1311 in ##sys#substring-ci=? in k847 */
static void C_ccall f_1316(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_1316,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1319,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* data-structures.scm:175: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=lf[30];
tp(4,av2);}}

/* k1317 in k1314 in k1311 in ##sys#substring-ci=? in k847 */
static void C_ccall f_1319(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1319,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_substring_compare_case_insensitive(((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.string#substring-ci=? in k847 */
static void C_ccall f_1340(C_word c,C_word *av){
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
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_1340,c,av);}
t4=C_rest_nullp(c,4);
t5=(C_truep(t4)?C_fix(0):C_get_rest_arg(c,4,av,4,t0));
t6=C_rest_nullp(c,4);
t7=C_rest_nullp(c,5);
t8=(C_truep(t7)?C_fix(0):C_get_rest_arg(c,5,av,4,t0));
t9=C_rest_nullp(c,5);
t10=C_rest_nullp(c,6);
t11=(C_truep(t10)?C_SCHEME_FALSE:C_get_rest_arg(c,6,av,4,t0));
if(C_truep(C_rest_nullp(c,6))){
/* data-structures.scm:180: ##sys#substring-ci=? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[29]+1));
C_word av2[7];
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t5;
av2[5]=t8;
av2[6]=t11;
tp(7,av2);}}
else{
/* data-structures.scm:180: ##sys#substring-ci=? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[29]+1));
C_word av2[7];
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t5;
av2[5]=t8;
av2[6]=t11;
tp(7,av2);}}}

/* chicken.string#string-split in k847 */
static void C_ccall f_1400(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +20,c,5)))){
C_save_and_reclaim((void*)f_1400,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+20);
t3=C_build_rest(&a,c,3,av);
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
t4=C_i_check_string_2(t2,lf[33]);
t5=C_rest_nullp(c,3);
t6=(C_truep(t5)?lf[34]:C_get_rest_arg(c,3,av,3,t0));
t7=C_eqp(C_fix(c - 3),C_fix(2));
t8=(C_truep(t7)?C_i_cadr(t3):C_SCHEME_FALSE);
t9=C_block_size(t2);
t10=C_i_check_string_2(t6,lf[33]);
t11=C_block_size(t6);
t12=C_SCHEME_FALSE;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1421,a[2]=t13,a[3]=t2,a[4]=((C_word)li21),tmp=(C_word)a,a+=5,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1441,a[2]=t9,a[3]=t13,a[4]=t8,a[5]=t14,a[6]=t2,a[7]=t11,a[8]=t16,a[9]=t6,a[10]=((C_word)li23),tmp=(C_word)a,a+=11,tmp));
t18=((C_word*)t16)[1];
f_1441(t18,t1,C_fix(0),C_SCHEME_FALSE,C_fix(0));}

/* add in chicken.string#string-split in k847 */
static void C_fcall f_1421(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_1421,5,t0,t1,t2,t3,t4);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1436,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:195: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[35]);
C_word av2[5];
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t5;
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
av2[4]=t3;
tp(5,av2);}}

/* k1434 in add in chicken.string#string-split in k847 */
static void C_ccall f_1436(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_1436,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)t0)[3],C_fix(1),t2);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* loop in chicken.string#string-split in k847 */
static void C_fcall f_1441(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,4)))){
C_save_and_reclaim_args((void *)trf_1441,5,t0,t1,t2,t3,t4);}
a=C_alloc(15);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1451,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=C_fixnum_greaterp(t2,t4);
t7=(C_truep(t6)?t6:((C_word*)t0)[4]);
if(C_truep(t7)){
/* data-structures.scm:202: add */
t8=((C_word*)t0)[5];
f_1421(t8,t5,t4,t2,t3);}
else{
t8=((C_word*)((C_word*)t0)[3])[1];
t9=t1;{
C_word av2[2];
av2[0]=t9;
av2[1]=(C_truep(t8)?t8:C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}
else{
t5=C_subchar(((C_word*)t0)[6],t2);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_1468,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=t2,a[5]=t3,a[6]=t4,a[7]=t5,a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[5],a[11]=t7,a[12]=((C_word)li22),tmp=(C_word)a,a+=13,tmp));
t9=((C_word*)t7)[1];
f_1468(t9,t1,C_fix(0));}}

/* k1449 in loop in chicken.string#string-split in k847 */
static void C_ccall f_1451(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1451,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(t2)?t2:C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* scan in loop in chicken.string#string-split in k847 */
static void C_fcall f_1468(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_1468,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
/* data-structures.scm:207: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1441(t3,t1,C_fixnum_plus(((C_word*)t0)[4],C_fix(1)),((C_word*)t0)[5],((C_word*)t0)[6]);}
else{
t3=C_eqp(((C_word*)t0)[7],C_subchar(((C_word*)t0)[8],t2));
if(C_truep(t3)){
t4=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t5=C_fixnum_greaterp(((C_word*)t0)[4],((C_word*)t0)[6]);
t6=(C_truep(t5)?t5:((C_word*)t0)[9]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1507,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:211: add */
t8=((C_word*)t0)[10];
f_1421(t8,t7,((C_word*)t0)[6],((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
/* data-structures.scm:212: loop */
t7=((C_word*)((C_word*)t0)[3])[1];
f_1441(t7,t1,t4,((C_word*)t0)[5],t4);}}
else{
/* data-structures.scm:213: scan */
t9=t1;
t10=C_fixnum_plus(t2,C_fix(1));
t1=t9;
t2=t10;
goto loop;}}}

/* k1505 in scan in loop in chicken.string#string-split in k847 */
static void C_ccall f_1507(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1507,c,av);}
/* data-structures.scm:211: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1441(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[4]);}

/* chicken.string#string-intersperse in k847 */
static void C_ccall f_1534(C_word c,C_word *av){
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
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_1534,c,av);}
a=C_alloc(9);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?lf[37]:C_get_rest_arg(c,3,av,3,t0));
t5=C_i_check_list_2(t2,lf[38]);
t6=C_i_check_string_2(t4,lf[38]);
t7=C_block_size(t4);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1552,a[2]=t2,a[3]=t4,a[4]=t7,a[5]=t9,a[6]=((C_word)li26),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_1552(t11,t1,t2,C_fix(0));}

/* loop1 in chicken.string#string-intersperse in k847 */
static void C_fcall f_1552(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,5)))){
C_save_and_reclaim_args((void *)trf_1552,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
if(C_truep(C_eqp(((C_word*)t0)[2],C_SCHEME_END_OF_LIST))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=lf[39];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1562,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* data-structures.scm:226: ##sys#allocate-vector */
t5=*((C_word*)lf[40]+1);{
C_word av2[6];
av2[0]=t5;
av2[1]=t4;
av2[2]=C_fixnum_difference(t3,((C_word*)t0)[4]);
av2[3]=C_SCHEME_TRUE;
av2[4]=C_make_character(32);
av2[5]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}}
else{
t4=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_slot(t2,C_fix(0));
t6=C_i_check_string_2(t5,lf[38]);
t7=C_slot(t2,C_fix(1));
t8=C_block_size(t5);
t9=C_fixnum_plus(((C_word*)t0)[4],t3);
/* data-structures.scm:241: loop1 */
t11=t1;
t12=t7;
t13=C_fixnum_plus(t8,t9);
t1=t11;
t2=t12;
t3=t13;
goto loop;}
else{
/* data-structures.scm:243: ##sys#error-not-a-proper-list */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[41]);
C_word av2[3];
av2[0]=*((C_word*)lf[41]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}}}

/* k1560 in loop1 in chicken.string#string-intersperse in k847 */
static void C_ccall f_1562(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1562,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1567,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li25),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(
  f_1567(t2,((C_word*)t0)[5],C_fix(0))
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* loop2 in k1560 in loop1 in chicken.string#string-intersperse in k847 */
static C_word C_fcall f_1567(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_stack_overflow_check;
loop:{}
t3=C_slot(t1,C_fix(0));
t4=C_slot(t1,C_fix(1));
t5=C_block_size(t3);
t6=C_substring_copy(t3,((C_word*)t0)[2],C_fix(0),t5,t2);
t7=C_fixnum_plus(t2,t5);
if(C_truep(C_eqp(t4,C_SCHEME_END_OF_LIST))){
return(((C_word*)t0)[2]);}
else{
t8=C_substring_copy(((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0),((C_word*)t0)[4],t7);
t10=t4;
t11=C_fixnum_plus(t7,((C_word*)t0)[4]);
t1=t10;
t2=t11;
goto loop;}}

/* chicken.string#string-translate in k847 */
static void C_ccall f_1636(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +12,c,3)))){
C_save_and_reclaim((void*)f_1636,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+12);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1639,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1674,a[2]=t2,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_charp(t3))){
t7=t6;{
C_word *av2=av;
av2[0]=t7;
av2[1]=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1816,a[2]=t3,a[3]=((C_word)li32),tmp=(C_word)a,a+=4,tmp);
f_1674(2,av2);}}
else{
if(C_truep(C_i_pairp(t3))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1833,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* ##sys#list->string */
t8=C_fast_retrieve(lf[47]);{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t7=C_i_check_string_2(t3,lf[43]);
/* data-structures.scm:264: instring */
f_1639(t6,t3);}}}

/* instring in chicken.string#string-translate in k847 */
static void C_fcall f_1639(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_1639,2,t1,t2);}
a=C_alloc(5);
t3=C_block_size(t2);
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1644,a[2]=t3,a[3]=t2,a[4]=((C_word)li29),tmp=(C_word)a,a+=5,tmp);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* f_1644 in instring in chicken.string#string-translate in k847 */
static void C_ccall f_1644(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_1644,c,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1650,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word)li28),tmp=(C_word)a,a+=6,tmp);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=(
  f_1650(t3,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* loop */
static C_word C_fcall f_1650(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(C_SCHEME_FALSE);}
else{
t2=C_eqp(((C_word*)t0)[3],C_subchar(((C_word*)t0)[4],t1));
if(C_truep(t2)){
return(t1);}
else{
t4=C_fixnum_plus(t1,C_fix(1));
t1=t4;
goto loop;}}}

/* k1672 in chicken.string#string-translate in k847 */
static void C_ccall f_1674(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1674,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1677,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t3=C_slot(((C_word*)t0)[4],C_fix(0));
if(C_truep(C_charp(t3))){
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
f_1677(2,av2);}}
else{
if(C_truep(C_i_pairp(t3))){
/* ##sys#list->string */
t4=C_fast_retrieve(lf[47]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t4=C_i_check_string_2(t3,lf[43]);
t5=t2;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t3;
f_1677(2,av2);}}}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_1677(2,av2);}}}

/* k1675 in k1672 in chicken.string#string-translate in k847 */
static void C_ccall f_1677(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_1677,c,av);}
a=C_alloc(8);
t2=C_i_stringp(t1);
t3=(C_truep(t2)?C_block_size(t1):C_SCHEME_FALSE);
t4=C_i_check_string_2(((C_word*)t0)[2],lf[43]);
t5=C_block_size(((C_word*)t0)[2]);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1689,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t6;
av2[2]=t5;
av2[3]=C_make_character(32);
tp(4,av2);}}

/* k1687 in k1675 in k1672 in chicken.string#string-translate in k847 */
static void C_ccall f_1689(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1689,c,av);}
a=C_alloc(12);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1694,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word)li31),tmp=(C_word)a,a+=10,tmp));
t5=((C_word*)t3)[1];
f_1694(t5,((C_word*)t0)[7],C_fix(0),C_fix(0));}

/* loop in k1687 in k1675 in k1672 in chicken.string#string-translate in k847 */
static void C_fcall f_1694(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_1694,4,t0,t1,t2,t3);}
a=C_alloc(10);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
if(C_truep(C_fixnum_lessp(t3,t2))){
/* data-structures.scm:280: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[35]);
C_word av2[5];
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=C_fix(0);
av2[4]=t3;
tp(5,av2);}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
t4=C_subchar(((C_word*)t0)[4],t2);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1713,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t4,a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=t2,a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
/* data-structures.scm:283: from */
t6=((C_word*)t0)[8];{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}

/* k1711 in loop in k1687 in k1675 in k1672 in chicken.string#string-translate in k847 */
static void C_ccall f_1713(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1713,c,av);}
if(C_truep(C_i_not(t1))){
t2=C_setsubchar(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
/* data-structures.scm:286: loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_1694(t3,((C_word*)t0)[6],C_fixnum_plus(((C_word*)t0)[7],C_fix(1)),C_fixnum_plus(((C_word*)t0)[3],C_fix(1)));}
else{
if(C_truep(C_i_not(((C_word*)t0)[8]))){
/* data-structures.scm:287: loop */
t2=((C_word*)((C_word*)t0)[5])[1];
f_1694(t2,((C_word*)t0)[6],C_fixnum_plus(((C_word*)t0)[7],C_fix(1)),((C_word*)t0)[3]);}
else{
if(C_truep(C_charp(((C_word*)t0)[8]))){
t2=C_setsubchar(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[8]);
/* data-structures.scm:290: loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_1694(t3,((C_word*)t0)[6],C_fixnum_plus(((C_word*)t0)[7],C_fix(1)),C_fixnum_plus(((C_word*)t0)[3],C_fix(1)));}
else{
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[9]))){
/* data-structures.scm:292: ##sys#error */
t2=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[6];
av2[2]=lf[43];
av2[3]=lf[45];
av2[4]=((C_word*)t0)[7];
av2[5]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}
else{
t2=C_subchar(((C_word*)t0)[8],t1);
t3=C_setsubchar(((C_word*)t0)[2],((C_word*)t0)[3],t2);
/* data-structures.scm:295: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_1694(t4,((C_word*)t0)[6],C_fixnum_plus(((C_word*)t0)[7],C_fix(1)),C_fixnum_plus(((C_word*)t0)[3],C_fix(1)));}}}}}

/* f_1816 in chicken.string#string-translate in k847 */
static void C_ccall f_1816(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1816,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_eqp(t2,((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k1831 in chicken.string#string-translate in k847 */
static void C_ccall f_1833(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1833,c,av);}
/* data-structures.scm:261: instring */
f_1639(((C_word*)t0)[3],t1);}

/* chicken.string#string-translate* in k847 */
static void C_ccall f_1841(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,6)))){
C_save_and_reclaim((void *)f_1841,c,av);}
a=C_alloc(9);
t4=C_i_check_string_2(t2,lf[49]);
t5=C_i_check_list_2(t3,lf[49]);
t6=C_block_size(t2);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1853,a[2]=t6,a[3]=t2,a[4]=t8,a[5]=t3,a[6]=((C_word)li35),tmp=(C_word)a,a+=7,tmp));
/* data-structures.scm:326: collect */
t10=((C_word*)t8)[1];
f_1853(t10,t1,C_fix(0),C_fix(0),C_fix(0),C_SCHEME_END_OF_LIST);}

/* collect in chicken.string#string-translate* in k847 */
static void C_fcall f_1853(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,4)))){
C_save_and_reclaim_args((void *)trf_1853,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(15);
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1867,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_greaterp(t2,t3))){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1881,a[2]=t6,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:307: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[35]);
C_word av2[5];
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t8;
av2[2]=((C_word*)t0)[3];
av2[3]=t3;
av2[4]=t2;
tp(5,av2);}}
else{
t8=((C_word*)t6)[1];
/* data-structures.scm:305: ##sys#fast-reverse */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[51]);
C_word av2[3];
av2[0]=*((C_word*)lf[51]+1);
av2[1]=t7;
av2[2]=t8;
tp(3,av2);}}}
else{
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1886,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t3,a[5]=t4,a[6]=t6,a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[3],a[9]=t8,a[10]=((C_word)li34),tmp=(C_word)a,a+=11,tmp));
t10=((C_word*)t8)[1];
f_1886(t10,t1,((C_word*)t0)[5]);}}

/* k1865 in collect in chicken.string#string-translate* in k847 */
static void C_ccall f_1867(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1867,c,av);}
/* data-structures.scm:303: ##sys#fragments->string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[50]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[50]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* k1879 in collect in chicken.string#string-translate* in k847 */
static void C_ccall f_1881(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1881,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[2])[1]);
/* data-structures.scm:305: ##sys#fast-reverse */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[51]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[51]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
tp(3,av2);}}

/* loop in collect in chicken.string#string-translate* in k847 */
static void C_fcall f_1886(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,5)))){
C_save_and_reclaim_args((void *)trf_1886,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_nullp(t2))){
/* data-structures.scm:311: collect */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1853(t3,t1,C_fixnum_plus(((C_word*)t0)[3],C_fix(1)),((C_word*)t0)[4],C_fixnum_plus(((C_word*)t0)[5],C_fix(1)),((C_word*)((C_word*)t0)[6])[1]);}
else{
t3=C_i_car(t2);
t4=C_i_car(t3);
t5=C_i_string_length(t4);
t6=C_u_i_cdr(t3);
t7=C_fixnum_plus(((C_word*)t0)[3],t5);
t8=C_fixnum_less_or_equal_p(t7,((C_word*)t0)[7]);
t9=(C_truep(t8)?C_substring_compare(((C_word*)t0)[8],t4,((C_word*)t0)[3],C_fix(0),t5):C_SCHEME_FALSE);
if(C_truep(t9)){
t10=C_fixnum_plus(((C_word*)t0)[3],t5);
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1926,a[2]=t6,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[2],a[6]=t1,a[7]=t10,tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[3],((C_word*)t0)[4]))){
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1952,a[2]=((C_word*)t0)[6],a[3]=t11,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:320: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[35]);
C_word av2[5];
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t12;
av2[2]=((C_word*)t0)[8];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[3];
tp(5,av2);}}
else{
t12=t11;
f_1926(t12,C_SCHEME_UNDEFINED);}}
else{
/* data-structures.scm:325: loop */
t14=t1;
t15=C_u_i_cdr(t2);
t1=t14;
t2=t15;
goto loop;}}}

/* k1924 in loop in collect in chicken.string#string-translate* in k847 */
static void C_fcall f_1926(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,5)))){
C_save_and_reclaim_args((void *)trf_1926,2,t0,t1);}
a=C_alloc(3);
t2=C_i_string_length(((C_word*)t0)[2]);
t3=C_fixnum_plus(((C_word*)t0)[3],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1]);
/* data-structures.scm:321: collect */
t5=((C_word*)((C_word*)t0)[5])[1];
f_1853(t5,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[7],t3,t4);}

/* k1950 in loop in collect in chicken.string#string-translate* in k847 */
static void C_ccall f_1952(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_1952,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)t0)[3];
f_1926(t4,t3);}

/* chicken.string#string-chop in k847 */
static void C_ccall f_1969(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_1969,c,av);}
a=C_alloc(5);
t4=C_i_check_string_2(t2,lf[53]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1976,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:333: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word *av2=av;
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t5;
av2[2]=t3;
av2[3]=lf[53];
tp(4,av2);}}

/* k1974 in chicken.string#string-chop in k847 */
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_1976,c,av);}
a=C_alloc(8);
t2=C_block_size(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1984,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=((C_word)li37),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_1984(t6,((C_word*)t0)[4],t2,C_fix(0));}

/* loop in k1974 in chicken.string#string-chop in k847 */
static void C_fcall f_1984(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,4)))){
C_save_and_reclaim_args((void *)trf_1984,4,t0,t1,t2,t3);}
a=C_alloc(7);
if(C_truep(C_fixnum_less_or_equal_p(t2,C_fix(0)))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_fixnum_less_or_equal_p(t2,((C_word*)t0)[2]))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2004,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* data-structures.scm:337: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[35]);
C_word av2[5];
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
av2[3]=t3;
av2[4]=C_fixnum_plus(t3,t2);
tp(5,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2015,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* data-structures.scm:338: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[35]);
C_word av2[5];
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
av2[3]=t3;
av2[4]=C_fixnum_plus(t3,((C_word*)t0)[2]);
tp(5,av2);}}}}

/* k2002 in loop in k1974 in chicken.string#string-chop in k847 */
static void C_ccall f_2004(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2004,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list1(&a,1,t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2013 in loop in k1974 in chicken.string#string-chop in k847 */
static void C_ccall f_2015(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2015,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2019,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:338: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1984(t3,t2,C_fixnum_difference(((C_word*)t0)[4],((C_word*)t0)[5]),C_fixnum_plus(((C_word*)t0)[6],((C_word*)t0)[5]));}

/* k2017 in k2013 in loop in k1974 in chicken.string#string-chop in k847 */
static void C_ccall f_2019(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2019,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.string#string-chomp in k847 */
static void C_ccall f_2033(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2033,c,av);}
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?lf[55]:C_get_rest_arg(c,3,av,3,t0));
t5=C_i_check_string_2(t2,lf[56]);
t6=C_i_check_string_2(t4,lf[56]);
t7=C_block_size(t2);
t8=C_block_size(t4);
t9=C_fixnum_difference(t7,t8);
if(C_truep(C_fixnum_greater_or_equal_p(t7,t8))){
if(C_truep(C_substring_compare(t2,t4,t9,C_fix(0),t8))){
/* data-structures.scm:351: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[35]);
C_word av2[5];
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(0);
av2[4]=t9;
tp(5,av2);}}
else{
t10=t1;{
C_word *av2=av;
av2[0]=t10;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}}
else{
t10=t1;{
C_word *av2=av;
av2[0]=t10;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}}

/* chicken.sort#sorted? in k847 */
static void C_ccall f_2072(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_2072,c,av);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_i_vectorp(t2))){
t4=C_block_size(t2);
if(C_truep(C_fixnum_less_or_equal_p(t4,C_fix(1)))){
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2099,a[2]=t4,a[3]=t6,a[4]=t2,a[5]=t3,a[6]=((C_word)li40),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_2099(t8,t1,C_fix(1));}}
else{
t4=C_i_car(t2);
t5=C_u_i_cdr(t2);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2147,a[2]=t7,a[3]=t3,a[4]=((C_word)li41),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_2147(t9,t1,t4,t5);}}}

/* doloop473 in chicken.sort#sorted? in k847 */
static void C_fcall f_2099(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_2099,3,t0,t1,t2);}
a=C_alloc(11);
t3=C_i_nequalp(t2,((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2109,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t5=t4;{
C_word av2[2];
av2[0]=t5;
av2[1]=t3;
f_2109(2,av2);}}
else{
t5=C_i_vector_ref(((C_word*)t0)[4],t2);
t6=C_a_i_fixnum_difference(&a,2,t2,C_fix(1));
/* data-structures.scm:390: less? */
t7=((C_word*)t0)[5];{
C_word av2[4];
av2[0]=t7;
av2[1]=t4;
av2[2]=t5;
av2[3]=C_i_vector_ref(((C_word*)t0)[4],t6);
((C_proc)C_fast_retrieve_proc(t7))(4,av2);}}}

/* k2107 in doloop473 in chicken.sort#sorted? in k847 */
static void C_ccall f_2109(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,2)))){
C_save_and_reclaim((void *)f_2109,c,av);}
a=C_alloc(29);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_nequalp(((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_s_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
t3=((C_word*)((C_word*)t0)[5])[1];
f_2099(t3,((C_word*)t0)[2],t2);}}

/* loop in chicken.sort#sorted? in k847 */
static void C_fcall f_2147(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_2147,4,t0,t1,t2,t3);}
a=C_alloc(5);
t4=C_i_nullp(t3);
if(C_truep(t4)){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2171,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:396: less? */
t6=((C_word*)t0)[3];{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=C_i_car(t3);
av2[3]=t2;
((C_proc)C_fast_retrieve_proc(t6))(4,av2);}}}

/* k2169 in loop in chicken.sort#sorted? in k847 */
static void C_ccall f_2171(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2171,c,av);}
if(C_truep(C_i_not(t1))){
/* data-structures.scm:397: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2147(t2,((C_word*)t0)[3],C_u_i_car(((C_word*)t0)[4]),C_u_i_cdr(((C_word*)t0)[4]));}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* chicken.sort#merge in k847 */
static void C_ccall f_2177(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,6)))){
C_save_and_reclaim((void *)f_2177,c,av);}
a=C_alloc(7);
if(C_truep(C_i_nullp(t2))){
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
if(C_truep(C_i_nullp(t3))){
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_i_car(t2);
t6=C_u_i_cdr(t2);
t7=C_i_car(t3);
t8=C_u_i_cdr(t3);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2207,a[2]=t10,a[3]=t4,a[4]=((C_word)li43),tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_2207(t12,t1,t5,t6,t7,t8);}}}

/* loop in chicken.sort#merge in k847 */
static void C_fcall f_2207(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_2207,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(8);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2214,a[2]=t5,a[3]=t2,a[4]=t3,a[5]=t1,a[6]=t4,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* data-structures.scm:413: less? */
t7=((C_word*)t0)[3];{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=t4;
av2[3]=t2;
((C_proc)C_fast_retrieve_proc(t7))(4,av2);}}

/* k2212 in loop in chicken.sort#merge in k847 */
static void C_ccall f_2214(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_2214,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
if(C_truep(C_i_nullp(((C_word*)t0)[2]))){
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[6],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2234,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:416: loop */
t3=((C_word*)((C_word*)t0)[7])[1];
f_2207(t3,t2,((C_word*)t0)[3],((C_word*)t0)[4],C_i_car(((C_word*)t0)[2]),C_u_i_cdr(((C_word*)t0)[2]));}}
else{
if(C_truep(C_i_nullp(((C_word*)t0)[4]))){
t2=C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)t0)[2]);
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2260,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:420: loop */
t3=((C_word*)((C_word*)t0)[7])[1];
f_2207(t3,t2,C_i_car(((C_word*)t0)[4]),C_u_i_cdr(((C_word*)t0)[4]),((C_word*)t0)[6],((C_word*)t0)[2]);}}}

/* k2232 in k2212 in loop in chicken.sort#merge in k847 */
static void C_ccall f_2234(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2234,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2258 in k2212 in loop in chicken.sort#merge in k847 */
static void C_ccall f_2260(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2260,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.sort#merge! in k847 */
static void C_ccall f_2268(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,5)))){
C_save_and_reclaim((void *)f_2268,c,av);}
a=C_alloc(13);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2271,a[2]=t6,a[3]=t4,a[4]=((C_word)li45),tmp=(C_word)a,a+=5,tmp));
if(C_truep(C_i_nullp(t2))){
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
if(C_truep(C_i_nullp(t3))){
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2346,a[2]=t1,a[3]=t3,a[4]=t2,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* data-structures.scm:445: less? */
t9=t4;{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
av2[2]=C_i_car(t3);
av2[3]=C_i_car(t2);
((C_proc)C_fast_retrieve_proc(t9))(4,av2);}}}}

/* loop in chicken.sort#merge! in k847 */
static void C_fcall f_2271(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_2271,5,t0,t1,t2,t3,t4);}
a=C_alloc(7);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2278,a[2]=t2,a[3]=t4,a[4]=t1,a[5]=t3,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* data-structures.scm:430: less? */
t6=((C_word*)t0)[3];{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=C_i_car(t4);
av2[3]=C_i_car(t3);
((C_proc)C_fast_retrieve_proc(t6))(4,av2);}}

/* k2276 in loop in chicken.sort#merge! in k847 */
static void C_ccall f_2278(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2278,c,av);}
if(C_truep(t1)){
t2=C_i_set_cdr(((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(C_i_nullp(C_u_i_cdr(((C_word*)t0)[3])))){
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_setslot(((C_word*)t0)[3],C_fix(1),((C_word*)t0)[5]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* data-structures.scm:435: loop */
t3=((C_word*)((C_word*)t0)[6])[1];
f_2271(t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[5],C_u_i_cdr(((C_word*)t0)[3]));}}
else{
t2=C_i_set_cdr(((C_word*)t0)[2],((C_word*)t0)[5]);
if(C_truep(C_i_nullp(C_u_i_cdr(((C_word*)t0)[5])))){
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_setslot(((C_word*)t0)[5],C_fix(1),((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* data-structures.scm:441: loop */
t3=((C_word*)((C_word*)t0)[6])[1];
f_2271(t3,((C_word*)t0)[4],((C_word*)t0)[5],C_u_i_cdr(((C_word*)t0)[5]),((C_word*)t0)[3]);}}}

/* k2344 in chicken.sort#merge! in k847 */
static void C_ccall f_2346(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_2346,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2349,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(C_u_i_cdr(((C_word*)t0)[3])))){
t3=C_i_setslot(((C_word*)t0)[3],C_fix(1),((C_word*)t0)[4]);
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* data-structures.scm:448: loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_2271(t3,t2,((C_word*)t0)[3],((C_word*)t0)[4],C_u_i_cdr(((C_word*)t0)[3]));}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2367,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(C_u_i_cdr(((C_word*)t0)[4])))){
t3=C_i_setslot(((C_word*)t0)[4],C_fix(1),((C_word*)t0)[3]);
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* data-structures.scm:453: loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_2271(t3,t2,((C_word*)t0)[4],C_u_i_cdr(((C_word*)t0)[4]),((C_word*)t0)[3]);}}}

/* k2347 in k2344 in chicken.sort#merge! in k847 */
static void C_ccall f_2349(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2349,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2365 in k2344 in chicken.sort#merge! in k847 */
static void C_ccall f_2367(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2367,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.sort#sort! in k847 */
static void C_ccall f_2392(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_2392,c,av);}
a=C_alloc(17);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2395,a[2]=t3,a[3]=t6,a[4]=t4,a[5]=((C_word)li47),tmp=(C_word)a,a+=6,tmp));
if(C_truep(C_i_vectorp(((C_word*)t4)[1]))){
t8=C_i_vector_length(((C_word*)t4)[1]);
t9=((C_word*)t4)[1];
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2480,a[2]=t4,a[3]=t9,a[4]=t1,a[5]=t6,a[6]=t8,tmp=(C_word)a,a+=7,tmp);
/* data-structures.scm:492: scheme#vector->list */
t11=*((C_word*)lf[62]+1);{
C_word *av2=av;
av2[0]=t11;
av2[1]=t10;
av2[2]=((C_word*)t4)[1];
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}
else{
/* data-structures.scm:498: step */
t8=((C_word*)t6)[1];
f_2395(t8,t1,C_i_length(((C_word*)t4)[1]));}}

/* step in chicken.sort#sort! in k847 */
static void C_fcall f_2395(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_2395,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_greaterp(t2,C_fix(2)))){
t3=C_s_a_i_quotient(&a,2,t2,C_fix(2));
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2408,a[2]=t2,a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* data-structures.scm:468: step */
t10=t4;
t11=t3;
t1=t10;
t2=t11;
goto loop;}
else{
if(C_truep(C_i_nequalp(t2,C_fix(2)))){
t3=C_i_car(((C_word*)((C_word*)t0)[4])[1]);
t4=C_i_cadr(((C_word*)((C_word*)t0)[4])[1]);
t5=((C_word*)((C_word*)t0)[4])[1];
t6=C_i_cddr(((C_word*)((C_word*)t0)[4])[1]);
t7=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2446,a[2]=t5,a[3]=t4,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* data-structures.scm:477: less? */
t9=((C_word*)t0)[2];{
C_word av2[4];
av2[0]=t9;
av2[1]=t8;
av2[2]=t4;
av2[3]=t3;
((C_proc)C_fast_retrieve_proc(t9))(4,av2);}}
else{
if(C_truep(C_i_nequalp(t2,C_fix(1)))){
t3=((C_word*)((C_word*)t0)[4])[1];
t4=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[4])+1,t4);
t6=C_i_set_cdr(t3,C_SCHEME_END_OF_LIST);
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}}}

/* k2406 in step in chicken.sort#sort! in k847 */
static void C_ccall f_2408(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(34,c,2)))){
C_save_and_reclaim((void *)f_2408,c,av);}
a=C_alloc(34);
t2=C_s_a_i_minus(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2414,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:470: step */
t4=((C_word*)((C_word*)t0)[6])[1];
f_2395(t4,t3,t2);}

/* k2412 in k2406 in step in chicken.sort#sort! in k847 */
static void C_ccall f_2414(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2414,c,av);}
/* data-structures.scm:471: merge! */
t2=*((C_word*)lf[60]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k2444 in step in chicken.sort#sort! in k847 */
static void C_ccall f_2446(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2446,c,av);}
if(C_truep(t1)){
t2=C_i_set_car(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_i_set_car(C_u_i_cdr(((C_word*)t0)[2]),((C_word*)t0)[4]);
t4=C_i_cdr(((C_word*)t0)[2]);
t5=C_i_set_cdr(t4,C_SCHEME_END_OF_LIST);
t6=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t6;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_i_set_cdr(t2,C_SCHEME_END_OF_LIST);
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2478 in chicken.sort#sort! in k847 */
static void C_ccall f_2480(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2480,c,av);}
a=C_alloc(4);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2487,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:493: step */
t4=((C_word*)((C_word*)t0)[5])[1];
f_2395(t4,t3,((C_word*)t0)[6]);}

/* k2485 in k2478 in chicken.sort#sort! in k847 */
static void C_ccall f_2487(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_2487,c,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2489,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li48),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_2489(t5,((C_word*)t0)[3],t1,C_fix(0));}

/* doloop544 in k2485 in k2478 in chicken.sort#sort! in k847 */
static void C_fcall f_2489(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_2489,4,t0,t1,t2,t3);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=C_i_vector_set(((C_word*)t0)[2],t3,t4);
t6=C_u_i_cdr(t2);
t7=C_a_i_fixnum_plus(&a,2,t3,C_fix(1));
t9=t1;
t10=t6;
t11=t7;
t1=t9;
t2=t10;
t3=t11;
goto loop;}}

/* chicken.sort#sort in k847 */
static void C_ccall f_2520(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_2520,c,av);}
a=C_alloc(7);
if(C_truep(C_i_vectorp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2534,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2538,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:509: scheme#vector->list */
t6=*((C_word*)lf[62]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2545,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:510: scheme#append */
t5=*((C_word*)lf[65]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k2532 in chicken.sort#sort in k847 */
static void C_ccall f_2534(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2534,c,av);}
/* data-structures.scm:509: scheme#list->vector */
t2=*((C_word*)lf[64]+1);{
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

/* k2536 in chicken.sort#sort in k847 */
static void C_ccall f_2538(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2538,c,av);}
/* data-structures.scm:509: sort! */
t2=*((C_word*)lf[61]+1);{
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

/* k2543 in chicken.sort#sort in k847 */
static void C_ccall f_2545(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2545,c,av);}
/* data-structures.scm:510: sort! */
t2=*((C_word*)lf[61]+1);{
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

/* chicken.sort#topological-sort in k847 */
static void C_ccall f_2547(C_word c,C_word *av){
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
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(22,c,7)))){
C_save_and_reclaim((void *)f_2547,c,av);}
a=C_alloc(22);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2550,a[2]=t3,a[3]=t5,a[4]=((C_word)li52),tmp=(C_word)a,a+=5,tmp));
t9=C_i_check_list_2(t2,lf[83]);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2692,a[2]=t7,a[3]=t5,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2739,a[2]=t3,a[3]=t2,a[4]=t12,a[5]=((C_word)li55),tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_2739(t14,t10,t2,C_SCHEME_END_OF_LIST);}

/* visit in chicken.sort#topological-sort in k847 */
static void C_fcall f_2550(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_2550,7,t0,t1,t2,t3,t4,t5,t6);}
a=C_alloc(10);
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2554,a[2]=t3,a[3]=t1,a[4]=t5,a[5]=t6,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],a[8]=t2,a[9]=t4,tmp=(C_word)a,a+=10,tmp);
/* data-structures.scm:520: chicken.base#alist-ref */
t8=*((C_word*)lf[82]+1);{
C_word av2[5];
av2[0]=t8;
av2[1]=t7;
av2[2]=t3;
av2[3]=C_i_car(t6);
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}

/* k2552 in visit in chicken.sort#topological-sort in k847 */
static void C_ccall f_2554(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,5)))){
C_save_and_reclaim((void *)f_2554,c,av);}
a=C_alloc(12);
t2=C_eqp(t1,lf[67]);
if(C_truep(t2)){
t3=C_a_i_cons(&a,2,lf[68],lf[69]);
t4=C_a_i_cons(&a,2,lf[68],lf[70]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2603,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t4,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* data-structures.scm:527: scheme#reverse */
t6=*((C_word*)lf[79]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t3=C_eqp(t1,lf[80]);
if(C_truep(t3)){
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2616,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[3],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[9])){
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=((C_word*)t0)[9];
f_2616(2,av2);}}
else{
/* data-structures.scm:533: chicken.base#alist-ref */
t5=*((C_word*)lf[82]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[8];
av2[4]=((C_word*)t0)[6];
av2[5]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}}}}

/* k2589 in k2601 in k2552 in visit in chicken.sort#topological-sort in k847 */
static void C_ccall f_2591(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(31,c,2)))){
C_save_and_reclaim((void *)f_2591,c,av);}
a=C_alloc(31);
t2=C_a_i_cons(&a,2,lf[68],lf[72]);
t3=C_a_i_list(&a,8,((C_word*)t0)[2],lf[73],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1,t2,lf[74]);
t4=C_a_i_record3(&a,3,lf[75],lf[76],t3);
/* data-structures.scm:522: chicken.condition#abort */
t5=C_fast_retrieve(lf[77]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[6];
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k2601 in k2552 in visit in chicken.sort#topological-sort in k847 */
static void C_ccall f_2603(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_2603,c,av);}
a=C_alloc(16);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list1(&a,1,t2);
t4=C_a_i_cons(&a,2,lf[68],lf[71]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2591,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t4,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* data-structures.scm:528: chicken.base#get-call-chain */
t6=C_fast_retrieve(lf[78]);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k2614 in k2552 in visit in chicken.sort#topological-sort in k847 */
static void C_ccall f_2616(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,4)))){
C_save_and_reclaim((void *)f_2616,c,av);}
a=C_alloc(20);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],lf[67]);
t3=C_u_i_car(((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,t2,t3);
t5=C_u_i_cdr(((C_word*)t0)[3]);
t6=C_a_i_cons(&a,2,t4,t5);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2622,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t8,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li51),tmp=(C_word)a,a+=9,tmp));
t10=((C_word*)t8)[1];
f_2622(t10,((C_word*)t0)[8],t1,t6);}

/* walk in k2614 in k2552 in visit in chicken.sort#topological-sort in k847 */
static void C_fcall f_2622(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,6)))){
C_save_and_reclaim_args((void *)trf_2622,4,t0,t1,t2,t3);}
a=C_alloc(8);
if(C_truep(C_i_nullp(t2))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2636,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:537: chicken.base#alist-update! */
t5=C_fast_retrieve(lf[81]);{
C_word av2[6];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[80];
av2[4]=C_i_car(t3);
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}
else{
t4=C_i_car(t2);
t5=C_u_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2658,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=C_a_i_cons(&a,2,t4,((C_word*)t0)[5]);
/* data-structures.scm:541: visit */
t8=((C_word*)((C_word*)t0)[6])[1];
f_2550(t8,t6,((C_word*)t0)[7],t4,C_SCHEME_FALSE,t7,t3);}}

/* k2634 in walk in k2614 in k2552 in visit in chicken.sort#topological-sort in k847 */
static void C_ccall f_2636(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_2636,c,av);}
a=C_alloc(6);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,t1,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k2656 in walk in k2614 in k2552 in visit in chicken.sort#topological-sort in k847 */
static void C_ccall f_2658(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2658,c,av);}
/* data-structures.scm:540: walk */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2622(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2690 in chicken.sort#topological-sort in k847 */
static void C_ccall f_2692(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_2692,c,av);}
a=C_alloc(10);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2701,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=((C_word)li53),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_2701(t7,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1],t3);}

/* loop in k2690 in chicken.sort#topological-sort in k847 */
static void C_fcall f_2701(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,6)))){
C_save_and_reclaim_args((void *)trf_2701,4,t0,t1,t2,t3);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_i_cdr(t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2722,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=C_i_caar(t2);
t7=C_u_i_car(t2);
/* data-structures.scm:560: visit */
t8=((C_word*)((C_word*)t0)[3])[1];
f_2550(t8,t5,t2,t6,C_u_i_cdr(t7),C_SCHEME_END_OF_LIST,t3);}}

/* k2720 in loop in k2690 in chicken.sort#topological-sort in k847 */
static void C_ccall f_2722(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2722,c,av);}
/* data-structures.scm:559: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2701(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* foldl587 in chicken.sort#topological-sort in k847 */
static void C_fcall f_2739(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_2739,4,t0,t1,t2,t3);}
a=C_alloc(10);
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2755,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li54),tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2781,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:547: g594 */
t7=t5;
f_2755(t7,t6,t3,C_slot(t2,C_fix(0)));}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* g594 in foldl587 in chicken.sort#topological-sort in k847 */
static void C_fcall f_2755(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_2755,4,t0,t1,t2,t3);}
a=C_alloc(10);
t4=C_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2767,a[2]=t1,a[3]=t4,a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t6=C_u_i_cdr(t3);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2773,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:550: chicken.base#alist-ref */
t8=*((C_word*)lf[82]+1);{
C_word av2[5];
av2[0]=t8;
av2[1]=t7;
av2[2]=C_u_i_car(t3);
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}

/* k2765 in g594 in foldl587 in chicken.sort#topological-sort in k847 */
static void C_ccall f_2767(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2767,c,av);}
/* data-structures.scm:548: chicken.base#alist-update! */
t2=C_fast_retrieve(lf[81]);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=((C_word*)t0)[4];
av2[5]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k2771 in g594 in foldl587 in chicken.sort#topological-sort in k847 */
static void C_ccall f_2773(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2773,c,av);}
if(C_truep(t1)){
/* data-structures.scm:549: scheme#append */
t2=*((C_word*)lf[65]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
/* data-structures.scm:549: scheme#append */
t2=*((C_word*)lf[65]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k2779 in foldl587 in chicken.sort#topological-sort in k847 */
static void C_ccall f_2781(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2781,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_2739(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k847 */
static void C_ccall f_849(C_word c,C_word *av){
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
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word t28;
C_word t29;
C_word t30;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(91,c,7)))){
C_save_and_reclaim((void *)f_849,c,av);}
a=C_alloc(91);
t2=C_mutate((C_word*)lf[2]+1 /* (set! chicken.string#reverse-string-append ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_851,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[4]+1 /* (set! chicken.string#reverse-list->string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_924,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[6]+1 /* (set! chicken.string#->string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_930,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[12]+1 /* (set! chicken.string#conc ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_975,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1022,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp);
t7=C_mutate((C_word*)lf[16]+1 /* (set! ##sys#substring-index ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1096,a[2]=t6,a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp));
t8=C_mutate((C_word*)lf[18]+1 /* (set! ##sys#substring-index-ci ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1105,a[2]=t6,a[3]=((C_word)li12),tmp=(C_word)a,a+=4,tmp));
t9=C_mutate((C_word*)lf[20]+1 /* (set! chicken.string#substring-index ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1114,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[21]+1 /* (set! chicken.string#substring-index-ci ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1129,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[22]+1 /* (set! chicken.string#string-compare3 ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1144,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[24]+1 /* (set! chicken.string#string-compare3-ci ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1175,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[26]+1 /* (set! ##sys#substring=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1206,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[28]+1 /* (set! chicken.string#substring=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1243,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[29]+1 /* (set! ##sys#substring-ci=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1303,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[31]+1 /* (set! chicken.string#substring-ci=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1340,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[32]+1 /* (set! chicken.string#string-split ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1400,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[36]+1 /* (set! chicken.string#string-intersperse ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1534,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[42]+1 /* (set! chicken.string#string-translate ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1636,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[48]+1 /* (set! chicken.string#string-translate* ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1841,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[52]+1 /* (set! chicken.string#string-chop ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1969,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[54]+1 /* (set! chicken.string#string-chomp ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2033,a[2]=((C_word)li39),tmp=(C_word)a,a+=3,tmp));
t23=C_a_i_provide(&a,1,lf[57]);
t24=C_mutate((C_word*)lf[58]+1 /* (set! chicken.sort#sorted? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2072,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate((C_word*)lf[59]+1 /* (set! chicken.sort#merge ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2177,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp));
t26=C_mutate((C_word*)lf[60]+1 /* (set! chicken.sort#merge! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2268,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp));
t27=C_mutate((C_word*)lf[61]+1 /* (set! chicken.sort#sort! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2392,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp));
t28=C_mutate((C_word*)lf[63]+1 /* (set! chicken.sort#sort ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2520,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp));
t29=C_mutate((C_word*)lf[66]+1 /* (set! chicken.sort#topological-sort ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2547,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp));
t30=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t30;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t30+1)))(2,av2);}}

/* chicken.string#reverse-string-append in k847 */
static void C_ccall f_851(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_851,c,av);}
a=C_alloc(6);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_854,a[2]=t4,a[3]=((C_word)li1),tmp=(C_word)a,a+=4,tmp));
/* data-structures.scm:61: rev-string-append */
t6=((C_word*)t4)[1];
f_854(t6,t1,t2,C_fix(0));}

/* rev-string-append in chicken.string#reverse-string-append in k847 */
static void C_fcall f_854(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_854,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t4=C_u_i_car(t2);
t5=C_i_string_length(t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_868,a[2]=t3,a[3]=t5,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* data-structures.scm:53: rev-string-append */
t8=t6;
t9=C_u_i_cdr(t2);
t10=C_fixnum_plus(t3,t5);
t1=t8;
t2=t9;
t3=t10;
goto loop;}
else{
/* data-structures.scm:60: scheme#make-string */
t4=*((C_word*)lf[3]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k866 in rev-string-append in chicken.string#reverse-string-append in k847 */
static void C_ccall f_868(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_868,c,av);}
a=C_alloc(6);
t2=C_i_string_length(t1);
t3=C_fixnum_difference(t2,((C_word*)t0)[2]);
t4=C_fixnum_difference(t3,((C_word*)t0)[3]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_877,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word)li0),tmp=(C_word)a,a+=6,tmp);
t6=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t6;
av2[1]=(
  f_877(t5,C_fix(0),t4)
);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* loop in k866 in rev-string-append in chicken.string#reverse-string-append in k847 */
static C_word C_fcall f_877(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_lessp(t1,((C_word*)t0)[2]))){
t3=C_i_string_ref(((C_word*)t0)[3],t1);
t4=C_i_string_set(((C_word*)t0)[4],t2,t3);
t6=C_fixnum_plus(t1,C_fix(1));
t7=C_fixnum_plus(t2,C_fix(1));
t1=t6;
t2=t7;
goto loop;}
else{
return(((C_word*)t0)[4]);}}

/* chicken.string#reverse-list->string in k847 */
static void C_ccall f_924(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_924,c,av);}
/* data-structures.scm:64: ##sys#reverse-list->string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2=av;
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* chicken.string#->string in k847 */
static void C_ccall f_930(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_930,c,av);}
a=C_alloc(4);
if(C_truep(C_i_stringp(t2))){
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_symbolp(t2))){
/* data-structures.scm:71: scheme#symbol->string */
t3=*((C_word*)lf[7]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
if(C_truep(C_charp(t2))){
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_string(&a,1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_numberp(t2))){
/* data-structures.scm:73: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[8]);
C_word *av2=av;
av2[0]=*((C_word*)lf[8]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_967,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:75: chicken.base#open-output-string */
t4=C_fast_retrieve(lf[11]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}}}

/* k965 in chicken.string#->string in k847 */
static void C_ccall f_967(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_967,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_970,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:76: scheme#display */
t3=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k968 in k965 in chicken.string#->string in k847 */
static void C_ccall f_970(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_970,c,av);}
/* data-structures.scm:77: chicken.base#get-output-string */
t2=C_fast_retrieve(lf[9]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* chicken.string#conc in k847 */
static void C_ccall f_975(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +17,c,3)))){
C_save_and_reclaim((void*)f_975,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+17);
t2=C_build_rest(&a,c,2,av);
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
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=*((C_word*)lf[6]+1);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_986,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_988,a[2]=t5,a[3]=t10,a[4]=t7,a[5]=t6,a[6]=((C_word)li5),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_988(t12,t8,t2);}

/* k984 in chicken.string#conc in k847 */
static void C_ccall f_986(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_986,c,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[13]+1);
av2[3]=t1;
C_apply(4,av2);}}

/* map-loop80 in chicken.string#conc in k847 */
static void C_fcall f_988(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_988,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1013,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* data-structures.scm:81: g86 */
t4=((C_word*)t0)[4];{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("data-structures"));
C_check_nursery_minimum(C_calculate_demand(19,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void*)C_data_2dstructures_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(569))){
C_save(t1);
C_rereclaim2(569*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(19);
C_initialize_lf(lf,84);
lf[0]=C_h_intern(&lf[0],15, C_text("data-structures"));
lf[1]=C_h_intern(&lf[1],15, C_text("chicken.string#"));
lf[2]=C_h_intern(&lf[2],36, C_text("chicken.string#reverse-string-append"));
lf[3]=C_h_intern(&lf[3],18, C_text("scheme#make-string"));
lf[4]=C_h_intern(&lf[4],35, C_text("chicken.string#reverse-list->string"));
lf[5]=C_h_intern(&lf[5],26, C_text("##sys#reverse-list->string"));
lf[6]=C_h_intern(&lf[6],23, C_text("chicken.string#->string"));
lf[7]=C_h_intern(&lf[7],21, C_text("scheme#symbol->string"));
lf[8]=C_h_intern(&lf[8],20, C_text("##sys#number->string"));
lf[9]=C_h_intern(&lf[9],30, C_text("chicken.base#get-output-string"));
lf[10]=C_h_intern(&lf[10],14, C_text("scheme#display"));
lf[11]=C_h_intern(&lf[11],31, C_text("chicken.base#open-output-string"));
lf[12]=C_h_intern(&lf[12],19, C_text("chicken.string#conc"));
lf[13]=C_h_intern(&lf[13],20, C_text("scheme#string-append"));
lf[14]=C_h_intern(&lf[14],16, C_text("##sys#error-hook"));
lf[15]=C_h_intern(&lf[15],18, C_text("##sys#check-fixnum"));
lf[16]=C_h_intern(&lf[16],21, C_text("##sys#substring-index"));
lf[17]=C_h_intern(&lf[17],15, C_text("substring-index"));
lf[18]=C_h_intern(&lf[18],24, C_text("##sys#substring-index-ci"));
lf[19]=C_h_intern(&lf[19],18, C_text("substring-index-ci"));
lf[20]=C_h_intern(&lf[20],30, C_text("chicken.string#substring-index"));
lf[21]=C_h_intern(&lf[21],33, C_text("chicken.string#substring-index-ci"));
lf[22]=C_h_intern(&lf[22],30, C_text("chicken.string#string-compare3"));
lf[23]=C_h_intern(&lf[23],15, C_text("string-compare3"));
lf[24]=C_h_intern(&lf[24],33, C_text("chicken.string#string-compare3-ci"));
lf[25]=C_h_intern(&lf[25],18, C_text("string-compare3-ci"));
lf[26]=C_h_intern(&lf[26],17, C_text("##sys#substring=\077"));
lf[27]=C_h_intern(&lf[27],11, C_text("substring=\077"));
lf[28]=C_h_intern(&lf[28],26, C_text("chicken.string#substring=\077"));
lf[29]=C_h_intern(&lf[29],20, C_text("##sys#substring-ci=\077"));
lf[30]=C_h_intern(&lf[30],14, C_text("substring-ci=\077"));
lf[31]=C_h_intern(&lf[31],29, C_text("chicken.string#substring-ci=\077"));
lf[32]=C_h_intern(&lf[32],27, C_text("chicken.string#string-split"));
lf[33]=C_h_intern(&lf[33],12, C_text("string-split"));
lf[34]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003\011\012 "));
lf[35]=C_h_intern(&lf[35],15, C_text("##sys#substring"));
lf[36]=C_h_intern(&lf[36],33, C_text("chicken.string#string-intersperse"));
lf[37]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001 "));
lf[38]=C_h_intern(&lf[38],18, C_text("string-intersperse"));
lf[39]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[40]=C_h_intern(&lf[40],21, C_text("##sys#allocate-vector"));
lf[41]=C_h_intern(&lf[41],29, C_text("##sys#error-not-a-proper-list"));
lf[42]=C_h_intern(&lf[42],31, C_text("chicken.string#string-translate"));
lf[43]=C_h_intern(&lf[43],16, C_text("string-translate"));
lf[44]=C_h_intern(&lf[44],11, C_text("##sys#error"));
lf[45]=C_decode_literal(C_heaptop,C_text("\376B\000\000\037invalid translation destination"));
lf[46]=C_h_intern(&lf[46],17, C_text("##sys#make-string"));
lf[47]=C_h_intern(&lf[47],18, C_text("##sys#list->string"));
lf[48]=C_h_intern(&lf[48],32, C_text("chicken.string#string-translate\052"));
lf[49]=C_h_intern(&lf[49],17, C_text("string-translate\052"));
lf[50]=C_h_intern(&lf[50],23, C_text("##sys#fragments->string"));
lf[51]=C_h_intern(&lf[51],18, C_text("##sys#fast-reverse"));
lf[52]=C_h_intern(&lf[52],26, C_text("chicken.string#string-chop"));
lf[53]=C_h_intern(&lf[53],11, C_text("string-chop"));
lf[54]=C_h_intern(&lf[54],27, C_text("chicken.string#string-chomp"));
lf[55]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\012"));
lf[56]=C_h_intern(&lf[56],12, C_text("string-chomp"));
lf[57]=C_h_intern(&lf[57],13, C_text("chicken.sort#"));
lf[58]=C_h_intern(&lf[58],20, C_text("chicken.sort#sorted\077"));
lf[59]=C_h_intern(&lf[59],18, C_text("chicken.sort#merge"));
lf[60]=C_h_intern(&lf[60],19, C_text("chicken.sort#merge!"));
lf[61]=C_h_intern(&lf[61],18, C_text("chicken.sort#sort!"));
lf[62]=C_h_intern(&lf[62],19, C_text("scheme#vector->list"));
lf[63]=C_h_intern(&lf[63],17, C_text("chicken.sort#sort"));
lf[64]=C_h_intern(&lf[64],19, C_text("scheme#list->vector"));
lf[65]=C_h_intern(&lf[65],13, C_text("scheme#append"));
lf[66]=C_h_intern(&lf[66],29, C_text("chicken.sort#topological-sort"));
lf[67]=C_h_intern(&lf[67],4, C_text("grey"));
lf[68]=C_h_intern(&lf[68],3, C_text("exn"));
lf[69]=C_h_intern(&lf[69],7, C_text("message"));
lf[70]=C_h_intern(&lf[70],9, C_text("arguments"));
lf[71]=C_h_intern(&lf[71],10, C_text("call-chain"));
lf[72]=C_h_intern(&lf[72],8, C_text("location"));
lf[73]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016cycle detected"));
lf[74]=C_h_intern(&lf[74],16, C_text("topological-sort"));
lf[75]=C_h_intern(&lf[75],9, C_text("condition"));
lf[76]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\003\001exn\376\003\000\000\002\376\001\000\000\007\001runtime\376\003\000\000\002\376\001\000\000\005\001cycle\376\377\016"));
lf[77]=C_h_intern(&lf[77],23, C_text("chicken.condition#abort"));
lf[78]=C_h_intern(&lf[78],27, C_text("chicken.base#get-call-chain"));
lf[79]=C_h_intern(&lf[79],14, C_text("scheme#reverse"));
lf[80]=C_h_intern(&lf[80],5, C_text("black"));
lf[81]=C_h_intern(&lf[81],26, C_text("chicken.base#alist-update!"));
lf[82]=C_h_intern(&lf[82],22, C_text("chicken.base#alist-ref"));
lf[83]=C_h_intern(&lf[83],5, C_text("foldl"));
C_register_lf2(lf,84,create_ptable());{}
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_849,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t4;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[118] = {
{C_text("f_1013:data_2dstructures_2escm"),(void*)f_1013},
{C_text("f_1022:data_2dstructures_2escm"),(void*)f_1022},
{C_text("f_1041:data_2dstructures_2escm"),(void*)f_1041},
{C_text("f_1064:data_2dstructures_2escm"),(void*)f_1064},
{C_text("f_1077:data_2dstructures_2escm"),(void*)f_1077},
{C_text("f_1096:data_2dstructures_2escm"),(void*)f_1096},
{C_text("f_1102:data_2dstructures_2escm"),(void*)f_1102},
{C_text("f_1105:data_2dstructures_2escm"),(void*)f_1105},
{C_text("f_1111:data_2dstructures_2escm"),(void*)f_1111},
{C_text("f_1114:data_2dstructures_2escm"),(void*)f_1114},
{C_text("f_1129:data_2dstructures_2escm"),(void*)f_1129},
{C_text("f_1144:data_2dstructures_2escm"),(void*)f_1144},
{C_text("f_1175:data_2dstructures_2escm"),(void*)f_1175},
{C_text("f_1206:data_2dstructures_2escm"),(void*)f_1206},
{C_text("f_1216:data_2dstructures_2escm"),(void*)f_1216},
{C_text("f_1219:data_2dstructures_2escm"),(void*)f_1219},
{C_text("f_1222:data_2dstructures_2escm"),(void*)f_1222},
{C_text("f_1243:data_2dstructures_2escm"),(void*)f_1243},
{C_text("f_1303:data_2dstructures_2escm"),(void*)f_1303},
{C_text("f_1313:data_2dstructures_2escm"),(void*)f_1313},
{C_text("f_1316:data_2dstructures_2escm"),(void*)f_1316},
{C_text("f_1319:data_2dstructures_2escm"),(void*)f_1319},
{C_text("f_1340:data_2dstructures_2escm"),(void*)f_1340},
{C_text("f_1400:data_2dstructures_2escm"),(void*)f_1400},
{C_text("f_1421:data_2dstructures_2escm"),(void*)f_1421},
{C_text("f_1436:data_2dstructures_2escm"),(void*)f_1436},
{C_text("f_1441:data_2dstructures_2escm"),(void*)f_1441},
{C_text("f_1451:data_2dstructures_2escm"),(void*)f_1451},
{C_text("f_1468:data_2dstructures_2escm"),(void*)f_1468},
{C_text("f_1507:data_2dstructures_2escm"),(void*)f_1507},
{C_text("f_1534:data_2dstructures_2escm"),(void*)f_1534},
{C_text("f_1552:data_2dstructures_2escm"),(void*)f_1552},
{C_text("f_1562:data_2dstructures_2escm"),(void*)f_1562},
{C_text("f_1567:data_2dstructures_2escm"),(void*)f_1567},
{C_text("f_1636:data_2dstructures_2escm"),(void*)f_1636},
{C_text("f_1639:data_2dstructures_2escm"),(void*)f_1639},
{C_text("f_1644:data_2dstructures_2escm"),(void*)f_1644},
{C_text("f_1650:data_2dstructures_2escm"),(void*)f_1650},
{C_text("f_1674:data_2dstructures_2escm"),(void*)f_1674},
{C_text("f_1677:data_2dstructures_2escm"),(void*)f_1677},
{C_text("f_1689:data_2dstructures_2escm"),(void*)f_1689},
{C_text("f_1694:data_2dstructures_2escm"),(void*)f_1694},
{C_text("f_1713:data_2dstructures_2escm"),(void*)f_1713},
{C_text("f_1816:data_2dstructures_2escm"),(void*)f_1816},
{C_text("f_1833:data_2dstructures_2escm"),(void*)f_1833},
{C_text("f_1841:data_2dstructures_2escm"),(void*)f_1841},
{C_text("f_1853:data_2dstructures_2escm"),(void*)f_1853},
{C_text("f_1867:data_2dstructures_2escm"),(void*)f_1867},
{C_text("f_1881:data_2dstructures_2escm"),(void*)f_1881},
{C_text("f_1886:data_2dstructures_2escm"),(void*)f_1886},
{C_text("f_1926:data_2dstructures_2escm"),(void*)f_1926},
{C_text("f_1952:data_2dstructures_2escm"),(void*)f_1952},
{C_text("f_1969:data_2dstructures_2escm"),(void*)f_1969},
{C_text("f_1976:data_2dstructures_2escm"),(void*)f_1976},
{C_text("f_1984:data_2dstructures_2escm"),(void*)f_1984},
{C_text("f_2004:data_2dstructures_2escm"),(void*)f_2004},
{C_text("f_2015:data_2dstructures_2escm"),(void*)f_2015},
{C_text("f_2019:data_2dstructures_2escm"),(void*)f_2019},
{C_text("f_2033:data_2dstructures_2escm"),(void*)f_2033},
{C_text("f_2072:data_2dstructures_2escm"),(void*)f_2072},
{C_text("f_2099:data_2dstructures_2escm"),(void*)f_2099},
{C_text("f_2109:data_2dstructures_2escm"),(void*)f_2109},
{C_text("f_2147:data_2dstructures_2escm"),(void*)f_2147},
{C_text("f_2171:data_2dstructures_2escm"),(void*)f_2171},
{C_text("f_2177:data_2dstructures_2escm"),(void*)f_2177},
{C_text("f_2207:data_2dstructures_2escm"),(void*)f_2207},
{C_text("f_2214:data_2dstructures_2escm"),(void*)f_2214},
{C_text("f_2234:data_2dstructures_2escm"),(void*)f_2234},
{C_text("f_2260:data_2dstructures_2escm"),(void*)f_2260},
{C_text("f_2268:data_2dstructures_2escm"),(void*)f_2268},
{C_text("f_2271:data_2dstructures_2escm"),(void*)f_2271},
{C_text("f_2278:data_2dstructures_2escm"),(void*)f_2278},
{C_text("f_2346:data_2dstructures_2escm"),(void*)f_2346},
{C_text("f_2349:data_2dstructures_2escm"),(void*)f_2349},
{C_text("f_2367:data_2dstructures_2escm"),(void*)f_2367},
{C_text("f_2392:data_2dstructures_2escm"),(void*)f_2392},
{C_text("f_2395:data_2dstructures_2escm"),(void*)f_2395},
{C_text("f_2408:data_2dstructures_2escm"),(void*)f_2408},
{C_text("f_2414:data_2dstructures_2escm"),(void*)f_2414},
{C_text("f_2446:data_2dstructures_2escm"),(void*)f_2446},
{C_text("f_2480:data_2dstructures_2escm"),(void*)f_2480},
{C_text("f_2487:data_2dstructures_2escm"),(void*)f_2487},
{C_text("f_2489:data_2dstructures_2escm"),(void*)f_2489},
{C_text("f_2520:data_2dstructures_2escm"),(void*)f_2520},
{C_text("f_2534:data_2dstructures_2escm"),(void*)f_2534},
{C_text("f_2538:data_2dstructures_2escm"),(void*)f_2538},
{C_text("f_2545:data_2dstructures_2escm"),(void*)f_2545},
{C_text("f_2547:data_2dstructures_2escm"),(void*)f_2547},
{C_text("f_2550:data_2dstructures_2escm"),(void*)f_2550},
{C_text("f_2554:data_2dstructures_2escm"),(void*)f_2554},
{C_text("f_2591:data_2dstructures_2escm"),(void*)f_2591},
{C_text("f_2603:data_2dstructures_2escm"),(void*)f_2603},
{C_text("f_2616:data_2dstructures_2escm"),(void*)f_2616},
{C_text("f_2622:data_2dstructures_2escm"),(void*)f_2622},
{C_text("f_2636:data_2dstructures_2escm"),(void*)f_2636},
{C_text("f_2658:data_2dstructures_2escm"),(void*)f_2658},
{C_text("f_2692:data_2dstructures_2escm"),(void*)f_2692},
{C_text("f_2701:data_2dstructures_2escm"),(void*)f_2701},
{C_text("f_2722:data_2dstructures_2escm"),(void*)f_2722},
{C_text("f_2739:data_2dstructures_2escm"),(void*)f_2739},
{C_text("f_2755:data_2dstructures_2escm"),(void*)f_2755},
{C_text("f_2767:data_2dstructures_2escm"),(void*)f_2767},
{C_text("f_2773:data_2dstructures_2escm"),(void*)f_2773},
{C_text("f_2781:data_2dstructures_2escm"),(void*)f_2781},
{C_text("f_849:data_2dstructures_2escm"),(void*)f_849},
{C_text("f_851:data_2dstructures_2escm"),(void*)f_851},
{C_text("f_854:data_2dstructures_2escm"),(void*)f_854},
{C_text("f_868:data_2dstructures_2escm"),(void*)f_868},
{C_text("f_877:data_2dstructures_2escm"),(void*)f_877},
{C_text("f_924:data_2dstructures_2escm"),(void*)f_924},
{C_text("f_930:data_2dstructures_2escm"),(void*)f_930},
{C_text("f_967:data_2dstructures_2escm"),(void*)f_967},
{C_text("f_970:data_2dstructures_2escm"),(void*)f_970},
{C_text("f_975:data_2dstructures_2escm"),(void*)f_975},
{C_text("f_986:data_2dstructures_2escm"),(void*)f_986},
{C_text("f_988:data_2dstructures_2escm"),(void*)f_988},
{C_text("toplevel:data_2dstructures_2escm"),(void*)C_data_2dstructures_toplevel},
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
S|applied compiler syntax:
S|  chicken.base#foldl		1
S|  scheme#map		1
o|eliminated procedure checks: 19 
o|eliminated procedure checks: 1 
o|eliminated procedure checks: 1 
o|eliminated procedure checks: 1 
o|eliminated procedure checks: 1 
o|specializations:
o|  1 (scheme#cdar (pair pair *))
o|  2 (scheme#eqv? * (or eof null fixnum char boolean symbol keyword))
o|  1 (scheme#+ fixnum fixnum)
o|  4 (scheme#set-cdr! pair *)
o|  1 (scheme#- fixnum fixnum)
o|  1 (scheme#<= fixnum fixnum)
o|  1 (scheme#vector-length vector)
o|  1 (scheme#make-string fixnum)
o|  1 (scheme#length list)
o|  1 (##sys#check-list (or pair list) *)
o|  23 (scheme#cdr pair)
o|  4 (scheme#car pair)
(o e)|safe calls: 320 
o|safe globals: (chicken.sort#topological-sort chicken.sort#sort chicken.sort#sort! chicken.sort#merge! chicken.sort#merge chicken.sort#sorted? chicken.string#string-chomp chicken.string#string-chop chicken.string#string-translate* chicken.string#string-translate chicken.string#string-intersperse chicken.string#string-split chicken.string#substring-ci=? ##sys#substring-ci=? chicken.string#substring=? ##sys#substring=? chicken.string#string-compare3-ci chicken.string#string-compare3 chicken.string#substring-index-ci chicken.string#substring-index ##sys#substring-index-ci ##sys#substring-index chicken.string#conc chicken.string#->string chicken.string#reverse-list->string chicken.string#reverse-string-append) 
o|inlining procedure: k856 
o|inlining procedure: k879 
o|inlining procedure: k879 
o|inlining procedure: k856 
o|inlining procedure: k932 
o|inlining procedure: k932 
o|inlining procedure: k947 
o|inlining procedure: k947 
o|inlining procedure: k990 
o|inlining procedure: k990 
o|inlining procedure: k1042 
o|inlining procedure: k1054 
o|inlining procedure: k1066 
o|inlining procedure: k1066 
o|inlining procedure: k1054 
o|inlining procedure: k1042 
o|inlining procedure: k1165 
o|inlining procedure: k1165 
o|inlining procedure: k1196 
o|inlining procedure: k1196 
o|inlining procedure: k1426 
o|inlining procedure: k1426 
o|inlining procedure: k1443 
o|inlining procedure: k1443 
o|inlining procedure: k1470 
o|inlining procedure: k1470 
o|inlining procedure: k1492 
o|inlining procedure: k1492 
o|inlining procedure: k1554 
o|inlining procedure: k1581 
o|inlining procedure: k1581 
o|inlining procedure: k1554 
o|inlining procedure: k1652 
o|inlining procedure: k1652 
o|inlining procedure: k1696 
o|inlining procedure: k1696 
o|inlining procedure: k1731 
o|inlining procedure: k1731 
o|inlining procedure: k1761 
o|inlining procedure: k1761 
o|inlining procedure: k1795 
o|inlining procedure: k1795 
o|inlining procedure: k1821 
o|inlining procedure: k1821 
o|inlining procedure: k1855 
o|inlining procedure: k1869 
o|inlining procedure: k1869 
o|inlining procedure: k1855 
o|inlining procedure: k1888 
o|inlining procedure: k1888 
o|inlining procedure: k1986 
o|inlining procedure: k1986 
o|inlining procedure: k2053 
o|inlining procedure: k2053 
o|inlining procedure: k2074 
o|inlining procedure: k2074 
o|inlining procedure: k2089 
o|inlining procedure: k2089 
o|inlining procedure: k2101 
o|inlining procedure: k2101 
o|substituted constant variable: a2133 
o|substituted constant variable: a2135 
o|inlining procedure: k2152 
o|inlining procedure: k2152 
o|inlining procedure: k2179 
o|inlining procedure: k2179 
o|inlining procedure: k2209 
o|inlining procedure: k2209 
o|inlining procedure: k2273 
o|inlining procedure: k2273 
o|inlining procedure: k2329 
o|inlining procedure: k2329 
o|inlining procedure: k2341 
o|inlining procedure: k2341 
o|inlining procedure: k2397 
o|inlining procedure: k2397 
o|inlining procedure: k2455 
o|inlining procedure: k2455 
o|inlining procedure: k2468 
o|inlining procedure: k2491 
o|inlining procedure: k2491 
o|substituted constant variable: a2507 
o|inlining procedure: k2468 
o|inlining procedure: k2522 
o|inlining procedure: k2522 
o|inlining procedure: k2555 
o|inlining procedure: k2555 
o|inlining procedure: k2624 
o|inlining procedure: k2624 
o|substituted constant variable: a2679 
o|substituted constant variable: a2681 
o|inlining procedure: k2703 
o|inlining procedure: k2703 
o|inlining procedure: k2741 
o|inlining procedure: k2774 
o|inlining procedure: k2774 
o|inlining procedure: k2741 
o|substituted constant variable: g586589 
o|replaced variables: 533 
o|removed binding forms: 114 
o|substituted constant variable: r10672798 
o|substituted constant variable: r10552800 
o|converted assignments to bindings: (add258) 
o|substituted constant variable: r16532820 
o|converted assignments to bindings: (instring336) 
o|substituted constant variable: r19872840 
o|substituted constant variable: r20752844 
o|substituted constant variable: r20902846 
o|substituted constant variable: r24562865 
o|substituted constant variable: r27752881 
o|substituted constant variable: r27752881 
o|converted assignments to bindings: (traverse104) 
o|simplifications: ((let . 3)) 
o|replaced variables: 20 
o|removed binding forms: 435 
o|inlining procedure: k1116 
o|inlining procedure: k1131 
o|inlining procedure: k1260 
o|inlining procedure: k1357 
o|inlining procedure: k1449 
o|removed binding forms: 30 
o|substituted constant variable: r11172977 
o|substituted constant variable: r11322978 
o|inlining procedure: k2056 
o|inlining procedure: k2056 
o|removed binding forms: 3 
o|substituted constant variable: r20573046 
o|simplifications: ((let . 1)) 
o|removed binding forms: 3 
o|removed conditional forms: 1 
o|removed binding forms: 1 
o|simplifications: ((let . 19) (if . 26) (##core#call . 292)) 
o|  call simplifications:
o|    scheme#caar
o|    ##sys#cons	4
o|    ##sys#list
o|    ##sys#make-structure
o|    scheme#length
o|    scheme#vector-length
o|    scheme#vector-set!
o|    scheme#>
o|    scheme#cddr
o|    scheme#set-car!	2
o|    scheme#quotient
o|    scheme#-
o|    scheme#set-cdr!	4
o|    scheme#vector?	3
o|    scheme#vector-ref	2
o|    scheme#+
o|    scheme#=	4
o|    scheme#list	4
o|    chicken.fixnum#fx<=	4
o|    scheme#list->string	2
o|    scheme#not	3
o|    ##sys#check-list	3
o|    scheme#cadr	2
o|    scheme#eq?	5
o|    scheme#cdr	10
o|    chicken.fixnum#fxmin	2
o|    scheme#null?	33
o|    scheme#car	29
o|    ##sys#check-string	21
o|    ##sys#size	23
o|    chicken.fixnum#fx=	4
o|    chicken.fixnum#fx>=	10
o|    chicken.fixnum#fx>	5
o|    scheme#cons	21
o|    ##sys#setslot	6
o|    ##sys#slot	10
o|    scheme#apply
o|    scheme#string?	2
o|    scheme#symbol?
o|    scheme#char?	4
o|    scheme#number?
o|    scheme#string
o|    scheme#pair?	6
o|    scheme#string-length	4
o|    chicken.fixnum#fx-	12
o|    chicken.fixnum#fx<	4
o|    scheme#string-ref
o|    scheme#string-set!
o|    chicken.fixnum#fx+	27
o|contracted procedure: k859 
o|contracted procedure: k863 
o|contracted procedure: k908 
o|contracted procedure: k904 
o|contracted procedure: k873 
o|contracted procedure: k882 
o|contracted procedure: k900 
o|contracted procedure: k885 
o|contracted procedure: k892 
o|contracted procedure: k896 
o|contracted procedure: k914 
o|contracted procedure: k935 
o|contracted procedure: k941 
o|contracted procedure: k950 
o|contracted procedure: k959 
o|contracted procedure: k981 
o|contracted procedure: k993 
o|contracted procedure: k996 
o|contracted procedure: k999 
o|contracted procedure: k1007 
o|contracted procedure: k1015 
o|contracted procedure: k1024 
o|contracted procedure: k1027 
o|contracted procedure: k1030 
o|contracted procedure: k1033 
o|contracted procedure: k1036 
o|contracted procedure: k1089 
o|contracted procedure: k1045 
o|contracted procedure: k1051 
o|contracted procedure: k1057 
o|contracted procedure: k1069 
o|contracted procedure: k1082 
o|contracted procedure: k1122 
o|contracted procedure: k1116 
o|contracted procedure: k1137 
o|contracted procedure: k1131 
o|contracted procedure: k1146 
o|contracted procedure: k1149 
o|contracted procedure: k1152 
o|contracted procedure: k1155 
o|contracted procedure: k1158 
o|contracted procedure: k1171 
o|contracted procedure: k1162 
o|contracted procedure: k1168 
o|contracted procedure: k1177 
o|contracted procedure: k1180 
o|contracted procedure: k1183 
o|contracted procedure: k1186 
o|contracted procedure: k1189 
o|contracted procedure: k1202 
o|contracted procedure: k1193 
o|contracted procedure: k1199 
o|contracted procedure: k1208 
o|contracted procedure: k1211 
o|contracted procedure: k1239 
o|contracted procedure: k1227 
o|contracted procedure: k1235 
o|contracted procedure: k1231 
o|contracted procedure: k1296 
o|contracted procedure: k1245 
o|contracted procedure: k1290 
o|contracted procedure: k1248 
o|contracted procedure: k1284 
o|contracted procedure: k1251 
o|contracted procedure: k1278 
o|contracted procedure: k1254 
o|contracted procedure: k1272 
o|contracted procedure: k1257 
o|contracted procedure: k1266 
o|contracted procedure: k1260 
o|contracted procedure: k1305 
o|contracted procedure: k1308 
o|contracted procedure: k1336 
o|contracted procedure: k1324 
o|contracted procedure: k1332 
o|contracted procedure: k1328 
o|contracted procedure: k1393 
o|contracted procedure: k1342 
o|contracted procedure: k1387 
o|contracted procedure: k1345 
o|contracted procedure: k1381 
o|contracted procedure: k1348 
o|contracted procedure: k1375 
o|contracted procedure: k1351 
o|contracted procedure: k1369 
o|contracted procedure: k1354 
o|contracted procedure: k1363 
o|contracted procedure: k1357 
o|contracted procedure: k1402 
o|contracted procedure: k1527 
o|contracted procedure: k1405 
o|contracted procedure: k1519 
o|contracted procedure: k1408 
o|contracted procedure: k1411 
o|contracted procedure: k1414 
o|contracted procedure: k1417 
o|contracted procedure: k1423 
o|contracted procedure: k1426 
o|contracted procedure: k1446 
o|contracted procedure: k1455 
o|contracted procedure: k1458 
o|contracted procedure: k1473 
o|contracted procedure: k1480 
o|contracted procedure: k1486 
o|contracted procedure: k1489 
o|contracted procedure: k1495 
o|contracted procedure: k1498 
o|contracted procedure: k1515 
o|contracted procedure: k1629 
o|contracted procedure: k1536 
o|contracted procedure: k1539 
o|contracted procedure: k1542 
o|contracted procedure: k1545 
o|contracted procedure: k1569 
o|contracted procedure: k1572 
o|contracted procedure: k1575 
o|contracted procedure: k1578 
o|contracted procedure: k1588 
o|contracted procedure: k1592 
o|contracted procedure: k1598 
o|contracted procedure: k1601 
o|contracted procedure: k1604 
o|contracted procedure: k1611 
o|contracted procedure: k1619 
o|contracted procedure: k1623 
o|contracted procedure: k1615 
o|contracted procedure: k1641 
o|contracted procedure: k1655 
o|contracted procedure: k1661 
o|contracted procedure: k1668 
o|contracted procedure: k1783 
o|contracted procedure: k1678 
o|contracted procedure: k1681 
o|contracted procedure: k1684 
o|contracted procedure: k1699 
o|contracted procedure: k1705 
o|contracted procedure: k1717 
o|contracted procedure: k1724 
o|contracted procedure: k1728 
o|contracted procedure: k1734 
o|contracted procedure: k1741 
o|contracted procedure: k1747 
o|contracted procedure: k1754 
o|contracted procedure: k1758 
o|contracted procedure: k1764 
o|contracted procedure: k1775 
o|contracted procedure: k1779 
o|contracted procedure: k1789 
o|contracted procedure: k1792 
o|contracted procedure: k1798 
o|contracted procedure: k1804 
o|contracted procedure: k1810 
o|contracted procedure: k1813 
o|contracted procedure: k1824 
o|contracted procedure: k1834 
o|contracted procedure: k1843 
o|contracted procedure: k1846 
o|contracted procedure: k1849 
o|contracted procedure: k1858 
o|contracted procedure: k1872 
o|contracted procedure: k1869 
o|contracted procedure: k1891 
o|contracted procedure: k1898 
o|contracted procedure: k1902 
o|contracted procedure: k1905 
o|contracted procedure: k1908 
o|contracted procedure: k1911 
o|contracted procedure: k1962 
o|contracted procedure: k1958 
o|contracted procedure: k1918 
o|contracted procedure: k1921 
o|contracted procedure: k1939 
o|contracted procedure: k1931 
o|contracted procedure: k1935 
o|contracted procedure: k1942 
o|contracted procedure: k1946 
o|contracted procedure: k1971 
o|contracted procedure: k1977 
o|contracted procedure: k1989 
o|contracted procedure: k1995 
o|contracted procedure: k2006 
o|contracted procedure: k2021 
o|contracted procedure: k2025 
o|contracted procedure: k2029 
o|contracted procedure: k2065 
o|contracted procedure: k2035 
o|contracted procedure: k2038 
o|contracted procedure: k2041 
o|contracted procedure: k2044 
o|contracted procedure: k2047 
o|contracted procedure: k2050 
o|contracted procedure: k2062 
o|contracted procedure: k2077 
o|contracted procedure: k2083 
o|contracted procedure: k2086 
o|contracted procedure: k2092 
o|contracted procedure: k2104 
o|contracted procedure: k2117 
o|contracted procedure: k2124 
o|contracted procedure: k2128 
o|contracted procedure: k2141 
o|contracted procedure: k2149 
o|contracted procedure: k2158 
o|contracted procedure: k2173 
o|contracted procedure: k2182 
o|contracted procedure: k2188 
o|contracted procedure: k2195 
o|contracted procedure: k2201 
o|contracted procedure: k2218 
o|contracted procedure: k2225 
o|contracted procedure: k2236 
o|contracted procedure: k2244 
o|contracted procedure: k2251 
o|contracted procedure: k2262 
o|contracted procedure: k2279 
o|contracted procedure: k2285 
o|contracted procedure: k2300 
o|contracted procedure: k2306 
o|contracted procedure: k2322 
o|contracted procedure: k2326 
o|contracted procedure: k2332 
o|contracted procedure: k2338 
o|contracted procedure: k2350 
o|inlining procedure: k2347 
o|contracted procedure: k2368 
o|inlining procedure: k2365 
o|contracted procedure: k2384 
o|contracted procedure: k2388 
o|contracted procedure: k2400 
o|contracted procedure: k2403 
o|contracted procedure: k2409 
o|contracted procedure: k2421 
o|contracted procedure: k2424 
o|contracted procedure: k2427 
o|contracted procedure: k2431 
o|contracted procedure: k2441 
o|contracted procedure: k2437 
o|contracted procedure: k2447 
o|contracted procedure: k2458 
o|contracted procedure: k2462 
o|contracted procedure: k2465 
o|contracted procedure: k2471 
o|contracted procedure: k2474 
o|contracted procedure: k2494 
o|contracted procedure: k2509 
o|contracted procedure: k2497 
o|contracted procedure: k2516 
o|contracted procedure: k2525 
o|contracted procedure: k2558 
o|contracted procedure: k2573 
o|contracted procedure: k2577 
o|contracted procedure: k2597 
o|contracted procedure: k2581 
o|contracted procedure: k2585 
o|contracted procedure: k2593 
o|contracted procedure: k2569 
o|contracted procedure: k2565 
o|contracted procedure: k2607 
o|contracted procedure: k2670 
o|contracted procedure: k2664 
o|contracted procedure: k2618 
o|contracted procedure: k2627 
o|contracted procedure: k2638 
o|contracted procedure: k2644 
o|contracted procedure: k2647 
o|contracted procedure: k2660 
o|contracted procedure: k2683 
o|contracted procedure: k2687 
o|contracted procedure: k2731 
o|contracted procedure: k2735 
o|contracted procedure: k2697 
o|contracted procedure: k2706 
o|contracted procedure: k2716 
o|contracted procedure: k2724 
o|contracted procedure: k2744 
o|contracted procedure: k2751 
o|contracted procedure: k2761 
o|contracted procedure: k2783 
o|simplifications: ((let . 99)) 
o|removed binding forms: 276 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest142145 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest142145 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest155158 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest155158 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest200203 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest200203 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest200203 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest200203 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest234237 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest234237 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest234237 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest234237 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? delstr-and-flag252 0 
(o x)|known list op on rest arg sublist: ##core#rest-car delstr-and-flag252 0 
(o x)|known list op on rest arg sublist: ##core#rest-length delstr-and-flag252 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest299301 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest299301 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest421423 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest421423 0 
o|inlining procedure: k2434 
o|inlining procedure: k2434 
o|substituted constant variable: r2732 
o|substituted constant variable: r2736 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1249 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r1249 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1249 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r1249 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1346 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r1346 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1346 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r1346 1 
o|removed binding forms: 4 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1255 2 
(o x)|known list op on rest arg sublist: ##core#rest-car r1255 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1255 2 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r1255 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1352 2 
(o x)|known list op on rest arg sublist: ##core#rest-car r1352 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1352 2 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r1352 2 
o|removed binding forms: 2 
o|removed binding forms: 4 
o|direct leaf routine/allocation: loop60 0 
o|direct leaf routine/allocation: loop2316 0 
o|direct leaf routine/allocation: loop340 0 
o|converted assignments to bindings: (loop60) 
o|converted assignments to bindings: (loop2316) 
o|converted assignments to bindings: (loop340) 
o|simplifications: ((let . 3)) 
o|customizable procedures: (g594595 foldl587591 loop603 visit558 walk574 doloop544545 step522 loop510 loop496 loop480 doloop473474 loop407 loop390 k1924 collect385 instring336 loop366 loop1308 scan280 loop264 add258 k1311 k1214 traverse104 loop115 map-loop8097 rev-string-append54) 
o|calls to known targets: 70 
o|identified direct recursive calls: f_877 1 
o|identified direct recursive calls: f_854 1 
o|unused rest argument: rest142145 f_1114 
o|unused rest argument: rest155158 f_1129 
o|unused rest argument: rest200203 f_1243 
o|unused rest argument: rest234237 f_1340 
o|identified direct recursive calls: f_1468 1 
o|identified direct recursive calls: f_1567 1 
o|identified direct recursive calls: f_1552 1 
o|unused rest argument: rest299301 f_1534 
o|identified direct recursive calls: f_1650 1 
o|identified direct recursive calls: f_1886 1 
o|unused rest argument: rest421423 f_2033 
o|identified direct recursive calls: f_2395 1 
o|identified direct recursive calls: f_2489 1 
o|fast box initializations: 20 
o|dropping unused closure argument: f_1022 
o|dropping unused closure argument: f_1639 
*/
/* end of file */
