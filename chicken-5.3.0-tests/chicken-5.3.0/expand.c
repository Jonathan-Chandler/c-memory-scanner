/* Generated from expand.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.3.0rc4 ((HEAD detached at 5.3.0rc4)) (rev b6cbb1ba)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: expand.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file expand.c -no-module-registration
   unit: expand
   uses: internal library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_internal_toplevel)
C_externimport void C_ccall C_internal_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[372];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,26),40,99,104,105,99,107,101,110,46,115,121,110,116,97,120,35,108,111,111,107,117,112,32,115,101,41,0,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,35),40,99,104,105,99,107,101,110,46,115,121,110,116,97,120,35,109,97,99,114,111,45,97,108,105,97,115,32,118,97,114,32,115,101,41,0,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,13),40,100,111,108,111,111,112,56,55,52,32,105,41,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,8),40,119,97,108,107,32,120,41};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,33),40,99,104,105,99,107,101,110,46,115,121,110,116,97,120,35,115,116,114,105,112,45,115,121,110,116,97,120,32,101,120,112,41,0,0,0,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,23),40,109,97,112,45,108,111,111,112,57,53,57,32,103,57,55,49,32,103,57,55,50,41,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,28),40,102,111,114,45,101,97,99,104,45,108,111,111,112,57,50,50,32,103,57,50,57,32,103,57,51,48,41,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,56,57,54,32,103,57,48,56,41,0,0,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,32),40,35,35,115,121,115,35,101,120,116,101,110,100,45,115,101,32,115,101,32,118,97,114,115,32,46,32,114,101,115,116,41};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,35),40,35,35,115,121,115,35,101,110,115,117,114,101,45,116,114,97,110,115,102,111,114,109,101,114,32,116,32,46,32,114,101,115,116,41,0,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,7),40,103,49,48,50,51,41,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,52),40,35,35,115,121,115,35,101,120,116,101,110,100,45,109,97,99,114,111,45,101,110,118,105,114,111,110,109,101,110,116,32,110,97,109,101,32,115,101,32,116,114,97,110,115,102,111,114,109,101,114,41,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,25),40,35,35,115,121,115,35,109,97,99,114,111,63,32,115,121,109,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,9),40,108,111,111,112,32,109,101,41,0,0,0,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,28),40,35,35,115,121,115,35,117,110,100,101,102,105,110,101,45,109,97,99,114,111,33,32,110,97,109,101,41,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,9),40,99,111,112,121,32,112,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,7),40,97,54,49,51,50,41,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,10),40,97,54,49,50,54,32,101,120,41,0,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,14),40,102,95,54,50,54,56,32,105,110,112,117,116,41,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,7),40,97,54,50,55,51,41,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,7),40,97,54,50,55,56,41,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,7),40,97,54,50,56,52,41,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,7),40,97,54,50,51,51,41,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,7),40,97,54,50,57,56,41,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,14),40,97,54,50,57,50,32,46,32,97,114,103,115,41,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,7),40,97,54,50,50,55,41,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,9),40,97,54,49,50,48,32,107,41,0,0,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,37),40,99,97,108,108,45,104,97,110,100,108,101,114,32,110,97,109,101,32,104,97,110,100,108,101,114,32,101,120,112,32,115,101,32,99,115,41,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,22),40,101,120,112,97,110,100,32,104,101,97,100,32,101,120,112,32,109,100,101,102,41,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,49,55,49,32,103,49,49,56,51,41,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,49,52,52,32,103,49,49,53,54,41,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,10),40,103,49,50,48,52,32,99,115,41,0,0,0,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,101,120,112,41,0,0,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,28),40,35,35,115,121,115,35,101,120,112,97,110,100,45,48,32,101,120,112,32,100,115,101,32,99,115,63,41,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,51),40,99,104,105,99,107,101,110,46,115,121,110,116,97,120,35,101,120,112,97,110,115,105,111,110,45,114,101,115,117,108,116,45,104,111,111,107,32,105,110,112,117,116,32,111,117,116,112,117,116,41,0,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,7),40,97,54,54,50,55,41,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,22),40,97,54,54,51,51,32,101,120,112,50,49,50,52,49,32,109,49,50,52,51,41,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,101,120,112,41,0,0,0,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,34),40,99,104,105,99,107,101,110,46,115,121,110,116,97,120,35,101,120,112,97,110,100,32,101,120,112,32,46,32,114,101,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,35),40,35,35,115,121,115,35,101,120,116,101,110,100,101,100,45,108,97,109,98,100,97,45,108,105,115,116,63,32,108,108,105,115,116,41,0,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,9),40,101,114,114,32,109,115,103,41,0,0,0,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,9),40,103,49,51,48,55,32,107,41,0,0,0,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,51,48,49,32,103,49,51,49,51,41,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,29),40,108,111,111,112,32,109,111,100,101,32,114,101,113,32,111,112,116,32,107,101,121,32,108,108,105,115,116,41,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,55),40,35,35,115,121,115,35,101,120,112,97,110,100,45,101,120,116,101,110,100,101,100,45,108,97,109,98,100,97,45,108,105,115,116,32,108,108,105,115,116,48,32,98,111,100,121,32,101,114,114,104,32,115,101,41,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,52,51,56,32,103,49,52,53,48,32,103,49,52,53,49,41,0,0,0,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,52,48,57,32,103,49,52,50,49,41,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,22),40,97,55,51,51,49,32,118,97,114,115,32,97,114,103,99,32,114,101,115,116,41,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,54),40,35,35,115,121,115,35,101,120,112,97,110,100,45,109,117,108,116,105,112,108,101,45,118,97,108,117,101,115,45,97,115,115,105,103,110,109,101,110,116,32,102,111,114,109,97,108,115,32,101,120,112,114,41,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,9),40,99,111,109,112,32,105,100,41,0,0,0,0,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,50,32,98,111,100,121,41,0,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,98,111,100,121,32,101,120,112,115,41};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,32),40,109,97,112,45,108,111,111,112,49,54,49,55,32,103,49,54,50,57,32,103,49,54,51,48,32,103,49,54,51,49,41};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,53,54,57,32,103,49,53,56,49,41,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,13),40,97,56,48,50,52,32,97,32,95,32,95,41,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,23),40,102,111,108,100,108,49,53,57,50,32,103,49,53,57,51,32,103,49,53,57,49,41,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,27),40,102,105,110,105,32,118,97,114,115,32,118,97,108,115,32,109,118,97,114,115,32,98,111,100,121,41,0,0,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,54,55,55,32,103,49,54,56,57,41,0,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,21),40,108,111,111,112,32,98,111,100,121,32,100,101,102,115,32,100,111,110,101,41,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,34),40,102,105,110,105,47,115,121,110,116,97,120,32,118,97,114,115,32,118,97,108,115,32,109,118,97,114,115,32,98,111,100,121,41,0,0,0,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,9),40,108,111,111,112,50,32,120,41,0,0,0,0,0,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,27),40,108,111,111,112,32,98,111,100,121,32,118,97,114,115,32,118,97,108,115,32,109,118,97,114,115,41,0,0,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,13),40,101,120,112,97,110,100,32,98,111,100,121,41,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,37),40,35,35,115,121,115,35,99,97,110,111,110,105,99,97,108,105,122,101,45,98,111,100,121,32,98,111,100,121,32,46,32,114,101,115,116,41,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,7),40,103,49,55,54,55,41,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,11),40,109,119,97,108,107,32,120,32,112,41,0,0,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,46),40,99,104,105,99,107,101,110,46,115,121,110,116,97,120,35,109,97,116,99,104,45,101,120,112,114,101,115,115,105,111,110,32,101,120,112,32,112,97,116,32,118,97,114,115,41,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,104,101,97,100,32,98,111,100,121,41};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,51),40,99,104,105,99,107,101,110,46,115,121,110,116,97,120,35,101,120,112,97,110,100,45,99,117,114,114,105,101,100,45,100,101,102,105,110,101,32,104,101,97,100,32,98,111,100,121,32,115,101,41,0,0,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,115,121,110,116,97,120,35,115,121,110,116,97,120,45,101,114,114,111,114,32,46,32,97,114,103,115,41,0,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,12),40,111,117,116,115,116,114,32,115,116,114,41,0,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,108,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,100,101,102,115,41,0,0,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,9),40,108,111,111,112,32,99,120,41,0,0,0,0,0,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,36),40,35,35,115,121,115,35,115,121,110,116,97,120,45,101,114,114,111,114,47,99,111,110,116,101,120,116,32,109,115,103,32,97,114,103,41,0,0,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,7),40,103,49,56,53,54,41,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,115,121,110,116,97,120,35,103,101,116,45,108,105,110,101,45,110,117,109,98,101,114,32,115,101,120,112,41,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,17),40,116,101,115,116,32,120,32,112,114,101,100,32,109,115,103,41,0,0,0,0,0,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,9),40,101,114,114,32,109,115,103,41,0,0,0,0,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,16),40,108,97,109,98,100,97,45,108,105,115,116,63,32,120,41};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,13),40,118,97,114,105,97,98,108,101,63,32,118,41,0,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,16),40,112,114,111,112,101,114,45,108,105,115,116,63,32,120,41};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,49,57,51,55,32,120,32,110,41};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,9),40,97,57,50,53,51,32,121,41,0,0,0,0,0,0,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,10),40,119,97,108,107,32,120,32,112,41,0,0,0,0,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,38),40,35,35,115,121,115,35,99,104,101,99,107,45,115,121,110,116,97,120,32,105,100,32,101,120,112,32,112,97,116,32,46,32,114,101,115,116,41,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,35),40,105,110,104,101,114,105,116,45,112,97,105,114,45,108,105,110,101,45,110,117,109,98,101,114,115,32,111,108,100,32,110,101,119,41,0,0,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,12),40,114,101,110,97,109,101,32,115,121,109,41,0,0,0,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,50,48,50,50,32,105,32,102,41};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,7),40,103,50,48,54,51,41,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,7),40,103,50,48,55,50,41,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,15),40,99,111,109,112,97,114,101,32,115,49,32,115,50,41,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,16),40,97,115,115,113,45,114,101,118,101,114,115,101,32,108,41};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,19),40,109,105,114,114,111,114,45,114,101,110,97,109,101,32,115,121,109,41,0,0,0,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,19),40,97,57,51,54,57,32,102,111,114,109,32,115,101,32,100,115,101,41,0,0,0,0,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,66),40,99,104,105,99,107,101,110,46,115,121,110,116,97,120,35,109,97,107,101,45,101,114,47,105,114,45,116,114,97,110,115,102,111,114,109,101,114,32,104,97,110,100,108,101,114,32,101,120,112,108,105,99,105,116,45,114,101,110,97,109,105,110,103,63,41,0,0,0,0,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,115,121,110,116,97,120,35,101,114,45,109,97,99,114,111,45,116,114,97,110,115,102,111,114,109,101,114,32,104,97,110,100,108,101,114,41,0,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,115,121,110,116,97,120,35,105,114,45,109,97,99,114,111,45,116,114,97,110,115,102,111,114,109,101,114,32,104,97,110,100,108,101,114,41,0,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,59),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,46,115,121,110,116,97,120,45,114,117,108,101,115,35,115,121,110,116,97,120,45,114,117,108,101,115,45,109,105,115,109,97,116,99,104,32,105,110,112,117,116,41,0,0,0,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,108,101,110,32,105,110,112,117,116,41};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,53),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,46,115,121,110,116,97,120,45,114,117,108,101,115,35,100,114,111,112,45,114,105,103,104,116,32,105,110,112,117,116,32,116,101,109,112,41,0,0,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,105,110,112,117,116,41,0,0,0,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,53),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,46,115,121,110,116,97,120,45,114,117,108,101,115,35,116,97,107,101,45,114,105,103,104,116,32,105,110,112,117,116,32,116,101,109,112,41,0,0,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,11),40,102,95,49,48,49,57,54,32,120,41,0,0,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,51,49,53,55,32,103,51,49,54,57,41,0,0,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,15),40,102,95,49,48,50,48,50,32,114,117,108,101,115,41,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,10),40,97,49,48,51,51,51,32,120,41,0,0,0,0,0,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,14),40,102,95,49,48,50,57,54,32,114,117,108,101,41,0,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,37),40,102,95,49,48,51,54,50,32,105,110,112,117,116,32,112,97,116,116,101,114,110,32,115,101,101,110,45,115,101,103,109,101,110,116,63,41,0,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,23),40,102,95,49,48,53,52,51,32,105,110,112,117,116,32,112,97,116,116,101,114,110,41,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,10),40,97,49,48,55,50,56,32,120,41,0,0,0,0,0,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,42),40,102,95,49,48,54,55,48,32,112,97,116,116,101,114,110,32,112,97,116,104,32,109,97,112,105,116,32,115,101,101,110,45,115,101,103,109,101,110,116,63,41,0,0,0,0,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,18),40,100,111,108,111,111,112,51,50,57,49,32,100,32,103,101,110,41,0,0,0,0,0,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,26),40,102,95,49,48,56,49,48,32,116,101,109,112,108,97,116,101,32,100,105,109,32,101,110,118,41,0,0,0,0,0,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,40),40,102,95,49,49,48,48,50,32,112,97,116,116,101,114,110,32,100,105,109,32,118,97,114,115,32,115,101,101,110,45,115,101,103,109,101,110,116,63,41};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,31),40,102,95,49,49,48,55,57,32,116,101,109,112,108,97,116,101,32,100,105,109,32,101,110,118,32,102,114,101,101,41,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,25),40,102,95,49,49,49,54,56,32,112,32,115,101,101,110,45,115,101,103,109,101,110,116,63,41,0,0,0,0,0,0,0};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,17),40,102,95,49,49,49,57,54,32,112,97,116,116,101,114,110,41,0,0,0,0,0,0,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,17),40,102,95,49,49,50,50,48,32,112,97,116,116,101,114,110,41,0,0,0,0,0,0,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,112,97,116,116,101,114,110,41,0,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,17),40,102,95,49,49,50,52,48,32,112,97,116,116,101,114,110,41,0,0,0,0,0,0,0};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,16),40,97,49,49,50,57,57,32,101,120,112,32,114,32,99,41};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,17),40,97,49,49,51,51,53,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,10),40,119,97,108,107,32,120,32,110,41,0,0,0,0,0,0};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,11),40,119,97,108,107,49,32,120,32,110,41,0,0,0,0,0};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,11),40,103,51,48,50,49,32,101,110,118,41,0,0,0,0,0};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,11),40,103,51,48,50,56,32,101,110,118,41,0,0,0,0,0};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,12),40,115,105,109,112,108,105,102,121,32,120,41,0,0,0,0};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,17),40,97,49,49,51,54,56,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,57,51,51,32,103,50,57,52,53,41,0,0,0,0};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,56,57,57,32,103,50,57,49,49,41,0,0,0,0};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,17),40,97,49,49,54,54,49,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li135[] C_aligned={C_lihdr(0,0,11),40,101,120,112,97,110,100,32,98,115,41,0,0,0,0,0};
static C_char C_TLS li136[] C_aligned={C_lihdr(0,0,17),40,97,49,49,56,53,55,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li137[] C_aligned={C_lihdr(0,0,7),40,103,50,56,52,48,41,0};
static C_char C_TLS li138[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,56,51,52,32,103,50,56,52,54,41,0,0,0,0};
static C_char C_TLS li139[] C_aligned={C_lihdr(0,0,22),40,101,120,112,97,110,100,32,99,108,97,117,115,101,115,32,101,108,115,101,63,41,0,0};
static C_char C_TLS li140[] C_aligned={C_lihdr(0,0,17),40,97,49,49,57,48,56,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li141[] C_aligned={C_lihdr(0,0,22),40,101,120,112,97,110,100,32,99,108,97,117,115,101,115,32,101,108,115,101,63,41,0,0};
static C_char C_TLS li142[] C_aligned={C_lihdr(0,0,17),40,97,49,50,49,52,52,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li143[] C_aligned={C_lihdr(0,0,17),40,97,49,50,53,50,55,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li144[] C_aligned={C_lihdr(0,0,17),40,97,49,50,53,55,57,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li145[] C_aligned={C_lihdr(0,0,14),40,97,49,50,54,49,54,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li146[] C_aligned={C_lihdr(0,0,14),40,97,49,50,54,54,48,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li147[] C_aligned={C_lihdr(0,0,14),40,97,49,50,54,56,50,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li148[] C_aligned={C_lihdr(0,0,14),40,97,49,50,55,48,52,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li149[] C_aligned={C_lihdr(0,0,14),40,97,49,50,55,50,54,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li150[] C_aligned={C_lihdr(0,0,17),40,97,49,50,55,55,56,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li151[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,102,111,114,109,41,0,0,0,0,0};
static C_char C_TLS li152[] C_aligned={C_lihdr(0,0,14),40,97,49,50,56,50,53,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li153[] C_aligned={C_lihdr(0,0,14),40,97,49,50,57,53,50,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li154[] C_aligned={C_lihdr(0,0,14),40,97,49,50,57,54,57,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li155[] C_aligned={C_lihdr(0,0,14),40,97,49,50,57,56,54,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li156[] C_aligned={C_lihdr(0,0,14),40,97,49,51,48,48,51,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li157[] C_aligned={C_lihdr(0,0,14),40,97,49,51,48,50,48,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li158[] C_aligned={C_lihdr(0,0,14),40,97,49,51,48,52,51,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li159[] C_aligned={C_lihdr(0,0,11),40,103,50,52,56,55,32,97,114,103,41,0,0,0,0,0};
static C_char C_TLS li160[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,52,56,49,32,103,50,52,57,51,41,0,0,0,0};
static C_char C_TLS li161[] C_aligned={C_lihdr(0,0,14),40,97,49,51,49,50,55,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li162[] C_aligned={C_lihdr(0,0,26),40,97,49,51,50,57,56,32,103,50,52,53,53,32,103,50,52,53,55,32,103,50,52,53,57,41,0,0,0,0,0,0};
static C_char C_TLS li163[] C_aligned={C_lihdr(0,0,14),40,97,49,51,51,48,56,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li164[] C_aligned={C_lihdr(0,0,14),40,97,49,51,51,51,53,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li165[] C_aligned={C_lihdr(0,0,7),40,101,114,114,32,120,41,0};
static C_char C_TLS li166[] C_aligned={C_lihdr(0,0,9),40,116,101,115,116,32,102,120,41,0,0,0,0,0,0,0};
static C_char C_TLS li167[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,51,55,48,32,103,50,51,56,50,41,0,0,0,0};
static C_char C_TLS li168[] C_aligned={C_lihdr(0,0,12),40,101,120,112,97,110,100,32,99,108,115,41,0,0,0,0};
static C_char C_TLS li169[] C_aligned={C_lihdr(0,0,17),40,97,49,51,53,49,48,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li170[] C_aligned={C_lihdr(0,0,14),40,97,49,51,56,48,51,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li171[] C_aligned={C_lihdr(0,0,8),40,97,49,51,56,53,51,41};
static C_char C_TLS li172[] C_aligned={C_lihdr(0,0,52),40,97,49,51,56,53,57,32,110,97,109,101,50,50,55,57,32,108,105,98,50,50,56,49,32,115,112,101,99,50,50,56,51,32,118,50,50,56,53,32,115,50,50,56,55,32,105,50,50,56,57,41,0,0,0,0};
static C_char C_TLS li173[] C_aligned={C_lihdr(0,0,9),40,103,50,50,54,53,32,120,41,0,0,0,0,0,0,0};
static C_char C_TLS li174[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,50,53,57,32,103,50,50,55,49,41,0,0,0,0};
static C_char C_TLS li175[] C_aligned={C_lihdr(0,0,14),40,97,49,51,56,51,56,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li176[] C_aligned={C_lihdr(0,0,26),40,97,49,51,57,52,57,32,103,50,50,52,48,32,103,50,50,52,50,32,103,50,50,52,52,41,0,0,0,0,0,0};
static C_char C_TLS li177[] C_aligned={C_lihdr(0,0,26),40,97,49,51,57,53,57,32,103,50,50,50,54,32,103,50,50,50,56,32,103,50,50,51,48,41,0,0,0,0,0,0};
static C_char C_TLS li178[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_10002)
static void C_ccall f_10002(C_word c,C_word *av) C_noret;
C_noret_decl(f_10005)
static void C_ccall f_10005(C_word c,C_word *av) C_noret;
C_noret_decl(f_10008)
static void C_ccall f_10008(C_word c,C_word *av) C_noret;
C_noret_decl(f_10011)
static void C_ccall f_10011(C_word c,C_word *av) C_noret;
C_noret_decl(f_10014)
static void C_ccall f_10014(C_word c,C_word *av) C_noret;
C_noret_decl(f_10017)
static void C_ccall f_10017(C_word c,C_word *av) C_noret;
C_noret_decl(f_10019)
static void C_ccall f_10019(C_word c,C_word *av) C_noret;
C_noret_decl(f_10025)
static void C_ccall f_10025(C_word c,C_word *av) C_noret;
C_noret_decl(f_10035)
static void C_fcall f_10035(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10053)
static void C_ccall f_10053(C_word c,C_word *av) C_noret;
C_noret_decl(f_10061)
static void C_ccall f_10061(C_word c,C_word *av) C_noret;
C_noret_decl(f_10071)
static C_word C_fcall f_10071(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_10098)
static void C_ccall f_10098(C_word c,C_word *av) C_noret;
C_noret_decl(f_10113)
static void C_ccall f_10113(C_word c,C_word *av) C_noret;
C_noret_decl(f_10117)
static void C_ccall f_10117(C_word c,C_word *av) C_noret;
C_noret_decl(f_10122)
static void C_ccall f_10122(C_word c,C_word *av) C_noret;
C_noret_decl(f_10128)
static void C_ccall f_10128(C_word c,C_word *av) C_noret;
C_noret_decl(f_10132)
static void C_ccall f_10132(C_word c,C_word *av) C_noret;
C_noret_decl(f_10136)
static void C_ccall f_10136(C_word c,C_word *av) C_noret;
C_noret_decl(f_10140)
static void C_ccall f_10140(C_word c,C_word *av) C_noret;
C_noret_decl(f_10144)
static void C_ccall f_10144(C_word c,C_word *av) C_noret;
C_noret_decl(f_10148)
static void C_ccall f_10148(C_word c,C_word *av) C_noret;
C_noret_decl(f_10153)
static void C_ccall f_10153(C_word c,C_word *av) C_noret;
C_noret_decl(f_10160)
static void C_ccall f_10160(C_word c,C_word *av) C_noret;
C_noret_decl(f_10165)
static void C_ccall f_10165(C_word c,C_word *av) C_noret;
C_noret_decl(f_10169)
static void C_ccall f_10169(C_word c,C_word *av) C_noret;
C_noret_decl(f_10173)
static void C_ccall f_10173(C_word c,C_word *av) C_noret;
C_noret_decl(f_10177)
static void C_ccall f_10177(C_word c,C_word *av) C_noret;
C_noret_decl(f_10182)
static void C_ccall f_10182(C_word c,C_word *av) C_noret;
C_noret_decl(f_10186)
static void C_ccall f_10186(C_word c,C_word *av) C_noret;
C_noret_decl(f_10190)
static void C_ccall f_10190(C_word c,C_word *av) C_noret;
C_noret_decl(f_10194)
static void C_ccall f_10194(C_word c,C_word *av) C_noret;
C_noret_decl(f_10196)
static void C_ccall f_10196(C_word c,C_word *av) C_noret;
C_noret_decl(f_10202)
static void C_ccall f_10202(C_word c,C_word *av) C_noret;
C_noret_decl(f_10230)
static void C_ccall f_10230(C_word c,C_word *av) C_noret;
C_noret_decl(f_10240)
static void C_ccall f_10240(C_word c,C_word *av) C_noret;
C_noret_decl(f_10254)
static void C_fcall f_10254(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10279)
static void C_ccall f_10279(C_word c,C_word *av) C_noret;
C_noret_decl(f_10296)
static void C_ccall f_10296(C_word c,C_word *av) C_noret;
C_noret_decl(f_10303)
static void C_fcall f_10303(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10324)
static void C_ccall f_10324(C_word c,C_word *av) C_noret;
C_noret_decl(f_10328)
static void C_ccall f_10328(C_word c,C_word *av) C_noret;
C_noret_decl(f_10332)
static void C_ccall f_10332(C_word c,C_word *av) C_noret;
C_noret_decl(f_10334)
static void C_ccall f_10334(C_word c,C_word *av) C_noret;
C_noret_decl(f_10339)
static void C_ccall f_10339(C_word c,C_word *av) C_noret;
C_noret_decl(f_10362)
static void C_ccall f_10362(C_word c,C_word *av) C_noret;
C_noret_decl(f_10396)
static void C_ccall f_10396(C_word c,C_word *av) C_noret;
C_noret_decl(f_10432)
static void C_ccall f_10432(C_word c,C_word *av) C_noret;
C_noret_decl(f_10436)
static void C_ccall f_10436(C_word c,C_word *av) C_noret;
C_noret_decl(f_10440)
static void C_ccall f_10440(C_word c,C_word *av) C_noret;
C_noret_decl(f_10489)
static void C_ccall f_10489(C_word c,C_word *av) C_noret;
C_noret_decl(f_10497)
static void C_ccall f_10497(C_word c,C_word *av) C_noret;
C_noret_decl(f_10510)
static void C_fcall f_10510(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10543)
static void C_ccall f_10543(C_word c,C_word *av) C_noret;
C_noret_decl(f_10547)
static void C_ccall f_10547(C_word c,C_word *av) C_noret;
C_noret_decl(f_10602)
static void C_ccall f_10602(C_word c,C_word *av) C_noret;
C_noret_decl(f_10626)
static void C_ccall f_10626(C_word c,C_word *av) C_noret;
C_noret_decl(f_10670)
static void C_ccall f_10670(C_word c,C_word *av) C_noret;
C_noret_decl(f_10694)
static void C_ccall f_10694(C_word c,C_word *av) C_noret;
C_noret_decl(f_10700)
static void C_ccall f_10700(C_word c,C_word *av) C_noret;
C_noret_decl(f_10713)
static void C_ccall f_10713(C_word c,C_word *av) C_noret;
C_noret_decl(f_10717)
static void C_ccall f_10717(C_word c,C_word *av) C_noret;
C_noret_decl(f_10729)
static void C_ccall f_10729(C_word c,C_word *av) C_noret;
C_noret_decl(f_10775)
static void C_ccall f_10775(C_word c,C_word *av) C_noret;
C_noret_decl(f_10779)
static void C_ccall f_10779(C_word c,C_word *av) C_noret;
C_noret_decl(f_10804)
static void C_ccall f_10804(C_word c,C_word *av) C_noret;
C_noret_decl(f_10810)
static void C_ccall f_10810(C_word c,C_word *av) C_noret;
C_noret_decl(f_10849)
static void C_ccall f_10849(C_word c,C_word *av) C_noret;
C_noret_decl(f_10852)
static void C_ccall f_10852(C_word c,C_word *av) C_noret;
C_noret_decl(f_10858)
static void C_ccall f_10858(C_word c,C_word *av) C_noret;
C_noret_decl(f_10870)
static void C_ccall f_10870(C_word c,C_word *av) C_noret;
C_noret_decl(f_10873)
static void C_fcall f_10873(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10876)
static void C_ccall f_10876(C_word c,C_word *av) C_noret;
C_noret_decl(f_10889)
static void C_ccall f_10889(C_word c,C_word *av) C_noret;
C_noret_decl(f_10893)
static void C_ccall f_10893(C_word c,C_word *av) C_noret;
C_noret_decl(f_10897)
static void C_ccall f_10897(C_word c,C_word *av) C_noret;
C_noret_decl(f_10899)
static void C_fcall f_10899(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10920)
static void C_fcall f_10920(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10972)
static void C_ccall f_10972(C_word c,C_word *av) C_noret;
C_noret_decl(f_10976)
static void C_ccall f_10976(C_word c,C_word *av) C_noret;
C_noret_decl(f_10993)
static void C_ccall f_10993(C_word c,C_word *av) C_noret;
C_noret_decl(f_10997)
static void C_ccall f_10997(C_word c,C_word *av) C_noret;
C_noret_decl(f_11002)
static void C_ccall f_11002(C_word c,C_word *av) C_noret;
C_noret_decl(f_11028)
static void C_ccall f_11028(C_word c,C_word *av) C_noret;
C_noret_decl(f_11043)
static void C_ccall f_11043(C_word c,C_word *av) C_noret;
C_noret_decl(f_11062)
static void C_ccall f_11062(C_word c,C_word *av) C_noret;
C_noret_decl(f_11077)
static void C_ccall f_11077(C_word c,C_word *av) C_noret;
C_noret_decl(f_11079)
static void C_ccall f_11079(C_word c,C_word *av) C_noret;
C_noret_decl(f_11121)
static void C_ccall f_11121(C_word c,C_word *av) C_noret;
C_noret_decl(f_11132)
static void C_ccall f_11132(C_word c,C_word *av) C_noret;
C_noret_decl(f_11151)
static void C_ccall f_11151(C_word c,C_word *av) C_noret;
C_noret_decl(f_11166)
static void C_ccall f_11166(C_word c,C_word *av) C_noret;
C_noret_decl(f_11168)
static void C_ccall f_11168(C_word c,C_word *av) C_noret;
C_noret_decl(f_11175)
static void C_ccall f_11175(C_word c,C_word *av) C_noret;
C_noret_decl(f_11196)
static void C_ccall f_11196(C_word c,C_word *av) C_noret;
C_noret_decl(f_11220)
static void C_ccall f_11220(C_word c,C_word *av) C_noret;
C_noret_decl(f_11227)
static void C_ccall f_11227(C_word c,C_word *av) C_noret;
C_noret_decl(f_11234)
static void C_ccall f_11234(C_word c,C_word *av) C_noret;
C_noret_decl(f_11240)
static void C_ccall f_11240(C_word c,C_word *av) C_noret;
C_noret_decl(f_11250)
static void C_fcall f_11250(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11257)
static void C_ccall f_11257(C_word c,C_word *av) C_noret;
C_noret_decl(f_11278)
static void C_ccall f_11278(C_word c,C_word *av) C_noret;
C_noret_decl(f_11282)
static void C_ccall f_11282(C_word c,C_word *av) C_noret;
C_noret_decl(f_11286)
static void C_ccall f_11286(C_word c,C_word *av) C_noret;
C_noret_decl(f_11290)
static void C_ccall f_11290(C_word c,C_word *av) C_noret;
C_noret_decl(f_11294)
static void C_ccall f_11294(C_word c,C_word *av) C_noret;
C_noret_decl(f_11298)
static void C_ccall f_11298(C_word c,C_word *av) C_noret;
C_noret_decl(f_11300)
static void C_ccall f_11300(C_word c,C_word *av) C_noret;
C_noret_decl(f_11304)
static void C_ccall f_11304(C_word c,C_word *av) C_noret;
C_noret_decl(f_11312)
static void C_fcall f_11312(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11321)
static void C_ccall f_11321(C_word c,C_word *av) C_noret;
C_noret_decl(f_11334)
static void C_ccall f_11334(C_word c,C_word *av) C_noret;
C_noret_decl(f_11336)
static void C_ccall f_11336(C_word c,C_word *av) C_noret;
C_noret_decl(f_11340)
static void C_ccall f_11340(C_word c,C_word *av) C_noret;
C_noret_decl(f_11347)
static void C_ccall f_11347(C_word c,C_word *av) C_noret;
C_noret_decl(f_11367)
static void C_ccall f_11367(C_word c,C_word *av) C_noret;
C_noret_decl(f_11369)
static void C_ccall f_11369(C_word c,C_word *av) C_noret;
C_noret_decl(f_11373)
static void C_ccall f_11373(C_word c,C_word *av) C_noret;
C_noret_decl(f_11376)
static void C_ccall f_11376(C_word c,C_word *av) C_noret;
C_noret_decl(f_11379)
static void C_ccall f_11379(C_word c,C_word *av) C_noret;
C_noret_decl(f_11381)
static void C_fcall f_11381(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11389)
static void C_ccall f_11389(C_word c,C_word *av) C_noret;
C_noret_decl(f_11391)
static void C_fcall f_11391(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11405)
static void C_ccall f_11405(C_word c,C_word *av) C_noret;
C_noret_decl(f_11409)
static void C_ccall f_11409(C_word c,C_word *av) C_noret;
C_noret_decl(f_11428)
static void C_ccall f_11428(C_word c,C_word *av) C_noret;
C_noret_decl(f_11437)
static void C_ccall f_11437(C_word c,C_word *av) C_noret;
C_noret_decl(f_11451)
static void C_ccall f_11451(C_word c,C_word *av) C_noret;
C_noret_decl(f_11461)
static void C_ccall f_11461(C_word c,C_word *av) C_noret;
C_noret_decl(f_11472)
static void C_ccall f_11472(C_word c,C_word *av) C_noret;
C_noret_decl(f_11482)
static void C_ccall f_11482(C_word c,C_word *av) C_noret;
C_noret_decl(f_11491)
static void C_ccall f_11491(C_word c,C_word *av) C_noret;
C_noret_decl(f_11502)
static void C_ccall f_11502(C_word c,C_word *av) C_noret;
C_noret_decl(f_11513)
static void C_ccall f_11513(C_word c,C_word *av) C_noret;
C_noret_decl(f_11521)
static void C_ccall f_11521(C_word c,C_word *av) C_noret;
C_noret_decl(f_11536)
static void C_ccall f_11536(C_word c,C_word *av) C_noret;
C_noret_decl(f_11540)
static void C_ccall f_11540(C_word c,C_word *av) C_noret;
C_noret_decl(f_11554)
static void C_fcall f_11554(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11558)
static void C_ccall f_11558(C_word c,C_word *av) C_noret;
C_noret_decl(f_11562)
static void C_fcall f_11562(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11584)
static void C_ccall f_11584(C_word c,C_word *av) C_noret;
C_noret_decl(f_11588)
static void C_fcall f_11588(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11631)
static void C_ccall f_11631(C_word c,C_word *av) C_noret;
C_noret_decl(f_11649)
static void C_ccall f_11649(C_word c,C_word *av) C_noret;
C_noret_decl(f_11660)
static void C_ccall f_11660(C_word c,C_word *av) C_noret;
C_noret_decl(f_11662)
static void C_ccall f_11662(C_word c,C_word *av) C_noret;
C_noret_decl(f_11666)
static void C_ccall f_11666(C_word c,C_word *av) C_noret;
C_noret_decl(f_11678)
static void C_ccall f_11678(C_word c,C_word *av) C_noret;
C_noret_decl(f_11706)
static void C_ccall f_11706(C_word c,C_word *av) C_noret;
C_noret_decl(f_11727)
static void C_fcall f_11727(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11768)
static void C_ccall f_11768(C_word c,C_word *av) C_noret;
C_noret_decl(f_11770)
static void C_fcall f_11770(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11780)
static void C_fcall f_11780(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11820)
static void C_fcall f_11820(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11856)
static void C_ccall f_11856(C_word c,C_word *av) C_noret;
C_noret_decl(f_11858)
static void C_ccall f_11858(C_word c,C_word *av) C_noret;
C_noret_decl(f_11862)
static void C_ccall f_11862(C_word c,C_word *av) C_noret;
C_noret_decl(f_11872)
static void C_fcall f_11872(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11897)
static void C_ccall f_11897(C_word c,C_word *av) C_noret;
C_noret_decl(f_11907)
static void C_ccall f_11907(C_word c,C_word *av) C_noret;
C_noret_decl(f_11909)
static void C_ccall f_11909(C_word c,C_word *av) C_noret;
C_noret_decl(f_11913)
static void C_ccall f_11913(C_word c,C_word *av) C_noret;
C_noret_decl(f_11921)
static void C_ccall f_11921(C_word c,C_word *av) C_noret;
C_noret_decl(f_11924)
static void C_ccall f_11924(C_word c,C_word *av) C_noret;
C_noret_decl(f_11927)
static void C_ccall f_11927(C_word c,C_word *av) C_noret;
C_noret_decl(f_11930)
static void C_ccall f_11930(C_word c,C_word *av) C_noret;
C_noret_decl(f_11933)
static void C_ccall f_11933(C_word c,C_word *av) C_noret;
C_noret_decl(f_11944)
static void C_ccall f_11944(C_word c,C_word *av) C_noret;
C_noret_decl(f_11946)
static void C_fcall f_11946(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11960)
static void C_ccall f_11960(C_word c,C_word *av) C_noret;
C_noret_decl(f_11966)
static void C_ccall f_11966(C_word c,C_word *av) C_noret;
C_noret_decl(f_11969)
static void C_ccall f_11969(C_word c,C_word *av) C_noret;
C_noret_decl(f_11973)
static void C_ccall f_11973(C_word c,C_word *av) C_noret;
C_noret_decl(f_11979)
static void C_ccall f_11979(C_word c,C_word *av) C_noret;
C_noret_decl(f_11982)
static void C_ccall f_11982(C_word c,C_word *av) C_noret;
C_noret_decl(f_11997)
static void C_ccall f_11997(C_word c,C_word *av) C_noret;
C_noret_decl(f_12038)
static void C_fcall f_12038(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12042)
static void C_ccall f_12042(C_word c,C_word *av) C_noret;
C_noret_decl(f_12045)
static void C_ccall f_12045(C_word c,C_word *av) C_noret;
C_noret_decl(f_12078)
static C_word C_fcall f_12078(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_12093)
static void C_ccall f_12093(C_word c,C_word *av) C_noret;
C_noret_decl(f_12095)
static void C_fcall f_12095(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12143)
static void C_ccall f_12143(C_word c,C_word *av) C_noret;
C_noret_decl(f_12145)
static void C_ccall f_12145(C_word c,C_word *av) C_noret;
C_noret_decl(f_12152)
static void C_ccall f_12152(C_word c,C_word *av) C_noret;
C_noret_decl(f_12155)
static void C_ccall f_12155(C_word c,C_word *av) C_noret;
C_noret_decl(f_12158)
static void C_ccall f_12158(C_word c,C_word *av) C_noret;
C_noret_decl(f_12163)
static void C_fcall f_12163(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12177)
static void C_ccall f_12177(C_word c,C_word *av) C_noret;
C_noret_decl(f_12183)
static void C_ccall f_12183(C_word c,C_word *av) C_noret;
C_noret_decl(f_12186)
static void C_ccall f_12186(C_word c,C_word *av) C_noret;
C_noret_decl(f_12190)
static void C_ccall f_12190(C_word c,C_word *av) C_noret;
C_noret_decl(f_12196)
static void C_ccall f_12196(C_word c,C_word *av) C_noret;
C_noret_decl(f_12199)
static void C_ccall f_12199(C_word c,C_word *av) C_noret;
C_noret_decl(f_12202)
static void C_ccall f_12202(C_word c,C_word *av) C_noret;
C_noret_decl(f_12205)
static void C_ccall f_12205(C_word c,C_word *av) C_noret;
C_noret_decl(f_12209)
static void C_ccall f_12209(C_word c,C_word *av) C_noret;
C_noret_decl(f_12215)
static void C_ccall f_12215(C_word c,C_word *av) C_noret;
C_noret_decl(f_12218)
static void C_ccall f_12218(C_word c,C_word *av) C_noret;
C_noret_decl(f_12221)
static void C_ccall f_12221(C_word c,C_word *av) C_noret;
C_noret_decl(f_12227)
static void C_ccall f_12227(C_word c,C_word *av) C_noret;
C_noret_decl(f_12253)
static void C_ccall f_12253(C_word c,C_word *av) C_noret;
C_noret_decl(f_12281)
static void C_ccall f_12281(C_word c,C_word *av) C_noret;
C_noret_decl(f_12298)
static void C_ccall f_12298(C_word c,C_word *av) C_noret;
C_noret_decl(f_12304)
static void C_ccall f_12304(C_word c,C_word *av) C_noret;
C_noret_decl(f_12307)
static void C_ccall f_12307(C_word c,C_word *av) C_noret;
C_noret_decl(f_12326)
static void C_ccall f_12326(C_word c,C_word *av) C_noret;
C_noret_decl(f_12344)
static void C_ccall f_12344(C_word c,C_word *av) C_noret;
C_noret_decl(f_12347)
static void C_ccall f_12347(C_word c,C_word *av) C_noret;
C_noret_decl(f_12374)
static void C_ccall f_12374(C_word c,C_word *av) C_noret;
C_noret_decl(f_12401)
static void C_ccall f_12401(C_word c,C_word *av) C_noret;
C_noret_decl(f_12464)
static void C_ccall f_12464(C_word c,C_word *av) C_noret;
C_noret_decl(f_12476)
static void C_ccall f_12476(C_word c,C_word *av) C_noret;
C_noret_decl(f_12492)
static void C_ccall f_12492(C_word c,C_word *av) C_noret;
C_noret_decl(f_12526)
static void C_ccall f_12526(C_word c,C_word *av) C_noret;
C_noret_decl(f_12528)
static void C_ccall f_12528(C_word c,C_word *av) C_noret;
C_noret_decl(f_12551)
static void C_ccall f_12551(C_word c,C_word *av) C_noret;
C_noret_decl(f_12570)
static void C_ccall f_12570(C_word c,C_word *av) C_noret;
C_noret_decl(f_12578)
static void C_ccall f_12578(C_word c,C_word *av) C_noret;
C_noret_decl(f_12580)
static void C_ccall f_12580(C_word c,C_word *av) C_noret;
C_noret_decl(f_12611)
static void C_ccall f_12611(C_word c,C_word *av) C_noret;
C_noret_decl(f_12615)
static void C_ccall f_12615(C_word c,C_word *av) C_noret;
C_noret_decl(f_12617)
static void C_ccall f_12617(C_word c,C_word *av) C_noret;
C_noret_decl(f_12621)
static void C_ccall f_12621(C_word c,C_word *av) C_noret;
C_noret_decl(f_12644)
static void C_ccall f_12644(C_word c,C_word *av) C_noret;
C_noret_decl(f_12659)
static void C_ccall f_12659(C_word c,C_word *av) C_noret;
C_noret_decl(f_12661)
static void C_ccall f_12661(C_word c,C_word *av) C_noret;
C_noret_decl(f_12665)
static void C_ccall f_12665(C_word c,C_word *av) C_noret;
C_noret_decl(f_12668)
static void C_ccall f_12668(C_word c,C_word *av) C_noret;
C_noret_decl(f_12681)
static void C_ccall f_12681(C_word c,C_word *av) C_noret;
C_noret_decl(f_12683)
static void C_ccall f_12683(C_word c,C_word *av) C_noret;
C_noret_decl(f_12687)
static void C_ccall f_12687(C_word c,C_word *av) C_noret;
C_noret_decl(f_12690)
static void C_ccall f_12690(C_word c,C_word *av) C_noret;
C_noret_decl(f_12703)
static void C_ccall f_12703(C_word c,C_word *av) C_noret;
C_noret_decl(f_12705)
static void C_ccall f_12705(C_word c,C_word *av) C_noret;
C_noret_decl(f_12709)
static void C_ccall f_12709(C_word c,C_word *av) C_noret;
C_noret_decl(f_12712)
static void C_ccall f_12712(C_word c,C_word *av) C_noret;
C_noret_decl(f_12725)
static void C_ccall f_12725(C_word c,C_word *av) C_noret;
C_noret_decl(f_12727)
static void C_ccall f_12727(C_word c,C_word *av) C_noret;
C_noret_decl(f_12731)
static void C_ccall f_12731(C_word c,C_word *av) C_noret;
C_noret_decl(f_12742)
static void C_ccall f_12742(C_word c,C_word *av) C_noret;
C_noret_decl(f_12752)
static void C_ccall f_12752(C_word c,C_word *av) C_noret;
C_noret_decl(f_12777)
static void C_ccall f_12777(C_word c,C_word *av) C_noret;
C_noret_decl(f_12779)
static void C_ccall f_12779(C_word c,C_word *av) C_noret;
C_noret_decl(f_12783)
static void C_ccall f_12783(C_word c,C_word *av) C_noret;
C_noret_decl(f_12800)
static void C_ccall f_12800(C_word c,C_word *av) C_noret;
C_noret_decl(f_12803)
static void C_ccall f_12803(C_word c,C_word *av) C_noret;
C_noret_decl(f_12809)
static void C_ccall f_12809(C_word c,C_word *av) C_noret;
C_noret_decl(f_12816)
static void C_ccall f_12816(C_word c,C_word *av) C_noret;
C_noret_decl(f_12820)
static void C_ccall f_12820(C_word c,C_word *av) C_noret;
C_noret_decl(f_12824)
static void C_ccall f_12824(C_word c,C_word *av) C_noret;
C_noret_decl(f_12826)
static void C_ccall f_12826(C_word c,C_word *av) C_noret;
C_noret_decl(f_12830)
static void C_ccall f_12830(C_word c,C_word *av) C_noret;
C_noret_decl(f_12835)
static void C_fcall f_12835(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12850)
static void C_ccall f_12850(C_word c,C_word *av) C_noret;
C_noret_decl(f_12861)
static void C_ccall f_12861(C_word c,C_word *av) C_noret;
C_noret_decl(f_12864)
static void C_ccall f_12864(C_word c,C_word *av) C_noret;
C_noret_decl(f_12886)
static void C_ccall f_12886(C_word c,C_word *av) C_noret;
C_noret_decl(f_12893)
static void C_ccall f_12893(C_word c,C_word *av) C_noret;
C_noret_decl(f_12897)
static void C_ccall f_12897(C_word c,C_word *av) C_noret;
C_noret_decl(f_12906)
static void C_ccall f_12906(C_word c,C_word *av) C_noret;
C_noret_decl(f_12913)
static void C_ccall f_12913(C_word c,C_word *av) C_noret;
C_noret_decl(f_12916)
static void C_ccall f_12916(C_word c,C_word *av) C_noret;
C_noret_decl(f_12951)
static void C_ccall f_12951(C_word c,C_word *av) C_noret;
C_noret_decl(f_12953)
static void C_ccall f_12953(C_word c,C_word *av) C_noret;
C_noret_decl(f_12957)
static void C_ccall f_12957(C_word c,C_word *av) C_noret;
C_noret_decl(f_12968)
static void C_ccall f_12968(C_word c,C_word *av) C_noret;
C_noret_decl(f_12970)
static void C_ccall f_12970(C_word c,C_word *av) C_noret;
C_noret_decl(f_12974)
static void C_ccall f_12974(C_word c,C_word *av) C_noret;
C_noret_decl(f_12985)
static void C_ccall f_12985(C_word c,C_word *av) C_noret;
C_noret_decl(f_12987)
static void C_ccall f_12987(C_word c,C_word *av) C_noret;
C_noret_decl(f_12991)
static void C_ccall f_12991(C_word c,C_word *av) C_noret;
C_noret_decl(f_13002)
static void C_ccall f_13002(C_word c,C_word *av) C_noret;
C_noret_decl(f_13004)
static void C_ccall f_13004(C_word c,C_word *av) C_noret;
C_noret_decl(f_13008)
static void C_ccall f_13008(C_word c,C_word *av) C_noret;
C_noret_decl(f_13019)
static void C_ccall f_13019(C_word c,C_word *av) C_noret;
C_noret_decl(f_13021)
static void C_ccall f_13021(C_word c,C_word *av) C_noret;
C_noret_decl(f_13025)
static void C_ccall f_13025(C_word c,C_word *av) C_noret;
C_noret_decl(f_13028)
static void C_ccall f_13028(C_word c,C_word *av) C_noret;
C_noret_decl(f_13038)
static void C_ccall f_13038(C_word c,C_word *av) C_noret;
C_noret_decl(f_13042)
static void C_ccall f_13042(C_word c,C_word *av) C_noret;
C_noret_decl(f_13044)
static void C_ccall f_13044(C_word c,C_word *av) C_noret;
C_noret_decl(f_13048)
static void C_ccall f_13048(C_word c,C_word *av) C_noret;
C_noret_decl(f_13051)
static void C_ccall f_13051(C_word c,C_word *av) C_noret;
C_noret_decl(f_13054)
static void C_ccall f_13054(C_word c,C_word *av) C_noret;
C_noret_decl(f_13077)
static void C_ccall f_13077(C_word c,C_word *av) C_noret;
C_noret_decl(f_13080)
static void C_ccall f_13080(C_word c,C_word *av) C_noret;
C_noret_decl(f_13126)
static void C_ccall f_13126(C_word c,C_word *av) C_noret;
C_noret_decl(f_13128)
static void C_ccall f_13128(C_word c,C_word *av) C_noret;
C_noret_decl(f_13132)
static void C_ccall f_13132(C_word c,C_word *av) C_noret;
C_noret_decl(f_13135)
static void C_ccall f_13135(C_word c,C_word *av) C_noret;
C_noret_decl(f_13158)
static void C_ccall f_13158(C_word c,C_word *av) C_noret;
C_noret_decl(f_13186)
static void C_ccall f_13186(C_word c,C_word *av) C_noret;
C_noret_decl(f_13191)
static void C_fcall f_13191(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13198)
static void C_ccall f_13198(C_word c,C_word *av) C_noret;
C_noret_decl(f_13201)
static void C_ccall f_13201(C_word c,C_word *av) C_noret;
C_noret_decl(f_13210)
static void C_ccall f_13210(C_word c,C_word *av) C_noret;
C_noret_decl(f_13255)
static void C_ccall f_13255(C_word c,C_word *av) C_noret;
C_noret_decl(f_13257)
static void C_fcall f_13257(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13282)
static void C_ccall f_13282(C_word c,C_word *av) C_noret;
C_noret_decl(f_13293)
static void C_ccall f_13293(C_word c,C_word *av) C_noret;
C_noret_decl(f_13297)
static void C_ccall f_13297(C_word c,C_word *av) C_noret;
C_noret_decl(f_13299)
static void C_ccall f_13299(C_word c,C_word *av) C_noret;
C_noret_decl(f_13307)
static void C_ccall f_13307(C_word c,C_word *av) C_noret;
C_noret_decl(f_13309)
static void C_ccall f_13309(C_word c,C_word *av) C_noret;
C_noret_decl(f_13313)
static void C_ccall f_13313(C_word c,C_word *av) C_noret;
C_noret_decl(f_13316)
static void C_ccall f_13316(C_word c,C_word *av) C_noret;
C_noret_decl(f_13319)
static void C_ccall f_13319(C_word c,C_word *av) C_noret;
C_noret_decl(f_13326)
static void C_ccall f_13326(C_word c,C_word *av) C_noret;
C_noret_decl(f_13334)
static void C_ccall f_13334(C_word c,C_word *av) C_noret;
C_noret_decl(f_13336)
static void C_ccall f_13336(C_word c,C_word *av) C_noret;
C_noret_decl(f_13340)
static void C_ccall f_13340(C_word c,C_word *av) C_noret;
C_noret_decl(f_13346)
static void C_ccall f_13346(C_word c,C_word *av) C_noret;
C_noret_decl(f_13352)
static void C_fcall f_13352(C_word t0,C_word t1) C_noret;
C_noret_decl(f_13355)
static void C_ccall f_13355(C_word c,C_word *av) C_noret;
C_noret_decl(f_13367)
static void C_ccall f_13367(C_word c,C_word *av) C_noret;
C_noret_decl(f_13370)
static void C_ccall f_13370(C_word c,C_word *av) C_noret;
C_noret_decl(f_13401)
static void C_ccall f_13401(C_word c,C_word *av) C_noret;
C_noret_decl(f_13405)
static void C_ccall f_13405(C_word c,C_word *av) C_noret;
C_noret_decl(f_13408)
static void C_ccall f_13408(C_word c,C_word *av) C_noret;
C_noret_decl(f_13415)
static void C_ccall f_13415(C_word c,C_word *av) C_noret;
C_noret_decl(f_13424)
static void C_ccall f_13424(C_word c,C_word *av) C_noret;
C_noret_decl(f_13449)
static void C_fcall f_13449(C_word t0,C_word t1) C_noret;
C_noret_decl(f_13483)
static void C_ccall f_13483(C_word c,C_word *av) C_noret;
C_noret_decl(f_13497)
static void C_ccall f_13497(C_word c,C_word *av) C_noret;
C_noret_decl(f_13509)
static void C_ccall f_13509(C_word c,C_word *av) C_noret;
C_noret_decl(f_13511)
static void C_ccall f_13511(C_word c,C_word *av) C_noret;
C_noret_decl(f_13517)
static void C_fcall f_13517(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13527)
static void C_fcall f_13527(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13541)
static void C_ccall f_13541(C_word c,C_word *av) C_noret;
C_noret_decl(f_13557)
static void C_ccall f_13557(C_word c,C_word *av) C_noret;
C_noret_decl(f_13581)
static void C_ccall f_13581(C_word c,C_word *av) C_noret;
C_noret_decl(f_13616)
static void C_ccall f_13616(C_word c,C_word *av) C_noret;
C_noret_decl(f_13650)
static void C_ccall f_13650(C_word c,C_word *av) C_noret;
C_noret_decl(f_13672)
static void C_fcall f_13672(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13697)
static void C_ccall f_13697(C_word c,C_word *av) C_noret;
C_noret_decl(f_13699)
static void C_fcall f_13699(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13778)
static void C_ccall f_13778(C_word c,C_word *av) C_noret;
C_noret_decl(f_13790)
static void C_ccall f_13790(C_word c,C_word *av) C_noret;
C_noret_decl(f_13802)
static void C_ccall f_13802(C_word c,C_word *av) C_noret;
C_noret_decl(f_13804)
static void C_ccall f_13804(C_word c,C_word *av) C_noret;
C_noret_decl(f_13808)
static void C_ccall f_13808(C_word c,C_word *av) C_noret;
C_noret_decl(f_13819)
static void C_ccall f_13819(C_word c,C_word *av) C_noret;
C_noret_decl(f_13829)
static void C_ccall f_13829(C_word c,C_word *av) C_noret;
C_noret_decl(f_13837)
static void C_ccall f_13837(C_word c,C_word *av) C_noret;
C_noret_decl(f_13839)
static void C_ccall f_13839(C_word c,C_word *av) C_noret;
C_noret_decl(f_13848)
static void C_fcall f_13848(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13854)
static void C_ccall f_13854(C_word c,C_word *av) C_noret;
C_noret_decl(f_13860)
static void C_ccall f_13860(C_word c,C_word *av) C_noret;
C_noret_decl(f_13864)
static void C_ccall f_13864(C_word c,C_word *av) C_noret;
C_noret_decl(f_13867)
static void C_ccall f_13867(C_word c,C_word *av) C_noret;
C_noret_decl(f_13870)
static void C_ccall f_13870(C_word c,C_word *av) C_noret;
C_noret_decl(f_13901)
static void C_ccall f_13901(C_word c,C_word *av) C_noret;
C_noret_decl(f_13910)
static void C_ccall f_13910(C_word c,C_word *av) C_noret;
C_noret_decl(f_13912)
static void C_fcall f_13912(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13937)
static void C_ccall f_13937(C_word c,C_word *av) C_noret;
C_noret_decl(f_13948)
static void C_ccall f_13948(C_word c,C_word *av) C_noret;
C_noret_decl(f_13950)
static void C_ccall f_13950(C_word c,C_word *av) C_noret;
C_noret_decl(f_13958)
static void C_ccall f_13958(C_word c,C_word *av) C_noret;
C_noret_decl(f_13960)
static void C_ccall f_13960(C_word c,C_word *av) C_noret;
C_noret_decl(f_4262)
static void C_ccall f_4262(C_word c,C_word *av) C_noret;
C_noret_decl(f_4265)
static void C_ccall f_4265(C_word c,C_word *av) C_noret;
C_noret_decl(f_5547)
static void C_ccall f_5547(C_word c,C_word *av) C_noret;
C_noret_decl(f_5552)
static void C_ccall f_5552(C_word c,C_word *av) C_noret;
C_noret_decl(f_5556)
static void C_ccall f_5556(C_word c,C_word *av) C_noret;
C_noret_decl(f_5558)
static C_word C_fcall f_5558(C_word t0,C_word t1);
C_noret_decl(f_5575)
static void C_fcall f_5575(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5582)
static void C_ccall f_5582(C_word c,C_word *av) C_noret;
C_noret_decl(f_5588)
static void C_ccall f_5588(C_word c,C_word *av) C_noret;
C_noret_decl(f_5622)
static void C_ccall f_5622(C_word c,C_word *av) C_noret;
C_noret_decl(f_5628)
static void C_fcall f_5628(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5644)
static void C_ccall f_5644(C_word c,C_word *av) C_noret;
C_noret_decl(f_5699)
static void C_ccall f_5699(C_word c,C_word *av) C_noret;
C_noret_decl(f_5706)
static void C_ccall f_5706(C_word c,C_word *av) C_noret;
C_noret_decl(f_5724)
static void C_ccall f_5724(C_word c,C_word *av) C_noret;
C_noret_decl(f_5733)
static void C_fcall f_5733(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5754)
static void C_ccall f_5754(C_word c,C_word *av) C_noret;
C_noret_decl(f_5764)
static void C_ccall f_5764(C_word c,C_word *av) C_noret;
C_noret_decl(f_5768)
static void C_ccall f_5768(C_word c,C_word *av) C_noret;
C_noret_decl(f_5793)
static void C_ccall f_5793(C_word c,C_word *av) C_noret;
C_noret_decl(f_5808)
static void C_ccall f_5808(C_word c,C_word *av) C_noret;
C_noret_decl(f_5810)
static void C_fcall f_5810(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5858)
static void C_fcall f_5858(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5907)
static void C_fcall f_5907(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5932)
static void C_ccall f_5932(C_word c,C_word *av) C_noret;
C_noret_decl(f_5946)
static void C_ccall f_5946(C_word c,C_word *av) C_noret;
C_noret_decl(f_5955)
static void C_ccall f_5955(C_word c,C_word *av) C_noret;
C_noret_decl(f_5979)
static void C_ccall f_5979(C_word c,C_word *av) C_noret;
C_noret_decl(f_5983)
static void C_ccall f_5983(C_word c,C_word *av) C_noret;
C_noret_decl(f_5986)
static void C_ccall f_5986(C_word c,C_word *av) C_noret;
C_noret_decl(f_5993)
static C_word C_fcall f_5993(C_word t0,C_word t1);
C_noret_decl(f_6011)
static void C_ccall f_6011(C_word c,C_word *av) C_noret;
C_noret_decl(f_6021)
static void C_ccall f_6021(C_word c,C_word *av) C_noret;
C_noret_decl(f_6025)
static void C_ccall f_6025(C_word c,C_word *av) C_noret;
C_noret_decl(f_6047)
static void C_ccall f_6047(C_word c,C_word *av) C_noret;
C_noret_decl(f_6058)
static void C_ccall f_6058(C_word c,C_word *av) C_noret;
C_noret_decl(f_6066)
static void C_ccall f_6066(C_word c,C_word *av) C_noret;
C_noret_decl(f_6070)
static void C_ccall f_6070(C_word c,C_word *av) C_noret;
C_noret_decl(f_6072)
static void C_fcall f_6072(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6095)
static void C_ccall f_6095(C_word c,C_word *av) C_noret;
C_noret_decl(f_6103)
static void C_ccall f_6103(C_word c,C_word *av) C_noret;
C_noret_decl(f_6106)
static void C_fcall f_6106(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_6116)
static void C_ccall f_6116(C_word c,C_word *av) C_noret;
C_noret_decl(f_6121)
static void C_ccall f_6121(C_word c,C_word *av) C_noret;
C_noret_decl(f_6127)
static void C_ccall f_6127(C_word c,C_word *av) C_noret;
C_noret_decl(f_6133)
static void C_ccall f_6133(C_word c,C_word *av) C_noret;
C_noret_decl(f_6155)
static void C_ccall f_6155(C_word c,C_word *av) C_noret;
C_noret_decl(f_6161)
static void C_fcall f_6161(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6178)
static void C_fcall f_6178(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6189)
static void C_ccall f_6189(C_word c,C_word *av) C_noret;
C_noret_decl(f_6228)
static void C_ccall f_6228(C_word c,C_word *av) C_noret;
C_noret_decl(f_6234)
static void C_ccall f_6234(C_word c,C_word *av) C_noret;
C_noret_decl(f_6238)
static void C_ccall f_6238(C_word c,C_word *av) C_noret;
C_noret_decl(f_6241)
static void C_ccall f_6241(C_word c,C_word *av) C_noret;
C_noret_decl(f_6257)
static void C_ccall f_6257(C_word c,C_word *av) C_noret;
C_noret_decl(f_6261)
static void C_ccall f_6261(C_word c,C_word *av) C_noret;
C_noret_decl(f_6268)
static void C_ccall f_6268(C_word c,C_word *av) C_noret;
C_noret_decl(f_6274)
static void C_ccall f_6274(C_word c,C_word *av) C_noret;
C_noret_decl(f_6279)
static void C_ccall f_6279(C_word c,C_word *av) C_noret;
C_noret_decl(f_6285)
static void C_ccall f_6285(C_word c,C_word *av) C_noret;
C_noret_decl(f_6293)
static void C_ccall f_6293(C_word c,C_word *av) C_noret;
C_noret_decl(f_6299)
static void C_ccall f_6299(C_word c,C_word *av) C_noret;
C_noret_decl(f_6305)
static void C_fcall f_6305(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6331)
static void C_ccall f_6331(C_word c,C_word *av) C_noret;
C_noret_decl(f_6349)
static void C_fcall f_6349(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6373)
static void C_fcall f_6373(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6382)
static void C_ccall f_6382(C_word c,C_word *av) C_noret;
C_noret_decl(f_6394)
static void C_ccall f_6394(C_word c,C_word *av) C_noret;
C_noret_decl(f_6419)
static void C_ccall f_6419(C_word c,C_word *av) C_noret;
C_noret_decl(f_6421)
static void C_fcall f_6421(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6484)
static void C_ccall f_6484(C_word c,C_word *av) C_noret;
C_noret_decl(f_6490)
static void C_fcall f_6490(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6528)
static void C_fcall f_6528(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6532)
static void C_fcall f_6532(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6536)
static void C_ccall f_6536(C_word c,C_word *av) C_noret;
C_noret_decl(f_6548)
static void C_ccall f_6548(C_word c,C_word *av) C_noret;
C_noret_decl(f_6591)
static void C_ccall f_6591(C_word c,C_word *av) C_noret;
C_noret_decl(f_6601)
static void C_ccall f_6601(C_word c,C_word *av) C_noret;
C_noret_decl(f_6604)
static void C_ccall f_6604(C_word c,C_word *av) C_noret;
C_noret_decl(f_6608)
static void C_ccall f_6608(C_word c,C_word *av) C_noret;
C_noret_decl(f_6622)
static void C_fcall f_6622(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6628)
static void C_ccall f_6628(C_word c,C_word *av) C_noret;
C_noret_decl(f_6634)
static void C_ccall f_6634(C_word c,C_word *av) C_noret;
C_noret_decl(f_6670)
static void C_ccall f_6670(C_word c,C_word *av) C_noret;
C_noret_decl(f_6676)
static C_word C_fcall f_6676(C_word t0);
C_noret_decl(f_6717)
static void C_ccall f_6717(C_word c,C_word *av) C_noret;
C_noret_decl(f_6720)
static void C_fcall f_6720(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6737)
static void C_ccall f_6737(C_word c,C_word *av) C_noret;
C_noret_decl(f_6740)
static void C_ccall f_6740(C_word c,C_word *av) C_noret;
C_noret_decl(f_6743)
static void C_ccall f_6743(C_word c,C_word *av) C_noret;
C_noret_decl(f_6748)
static void C_fcall f_6748(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_6762)
static void C_ccall f_6762(C_word c,C_word *av) C_noret;
C_noret_decl(f_6766)
static void C_fcall f_6766(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6778)
static void C_fcall f_6778(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6809)
static void C_ccall f_6809(C_word c,C_word *av) C_noret;
C_noret_decl(f_6834)
static void C_ccall f_6834(C_word c,C_word *av) C_noret;
C_noret_decl(f_6853)
static void C_ccall f_6853(C_word c,C_word *av) C_noret;
C_noret_decl(f_6857)
static void C_ccall f_6857(C_word c,C_word *av) C_noret;
C_noret_decl(f_6906)
static void C_fcall f_6906(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6959)
static void C_ccall f_6959(C_word c,C_word *av) C_noret;
C_noret_decl(f_6963)
static void C_ccall f_6963(C_word c,C_word *av) C_noret;
C_noret_decl(f_6966)
static void C_ccall f_6966(C_word c,C_word *av) C_noret;
C_noret_decl(f_6969)
static void C_ccall f_6969(C_word c,C_word *av) C_noret;
C_noret_decl(f_6971)
static void C_fcall f_6971(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6996)
static void C_ccall f_6996(C_word c,C_word *av) C_noret;
C_noret_decl(f_7010)
static void C_ccall f_7010(C_word c,C_word *av) C_noret;
C_noret_decl(f_7051)
static void C_fcall f_7051(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7064)
static void C_fcall f_7064(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7080)
static void C_ccall f_7080(C_word c,C_word *av) C_noret;
C_noret_decl(f_7101)
static void C_fcall f_7101(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7140)
static void C_fcall f_7140(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7159)
static void C_ccall f_7159(C_word c,C_word *av) C_noret;
C_noret_decl(f_7227)
static void C_fcall f_7227(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7326)
static void C_ccall f_7326(C_word c,C_word *av) C_noret;
C_noret_decl(f_7332)
static void C_ccall f_7332(C_word c,C_word *av) C_noret;
C_noret_decl(f_7336)
static void C_ccall f_7336(C_word c,C_word *av) C_noret;
C_noret_decl(f_7339)
static void C_ccall f_7339(C_word c,C_word *av) C_noret;
C_noret_decl(f_7358)
static void C_ccall f_7358(C_word c,C_word *av) C_noret;
C_noret_decl(f_7362)
static void C_ccall f_7362(C_word c,C_word *av) C_noret;
C_noret_decl(f_7380)
static void C_ccall f_7380(C_word c,C_word *av) C_noret;
C_noret_decl(f_7402)
static void C_fcall f_7402(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7468)
static void C_fcall f_7468(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7493)
static void C_ccall f_7493(C_word c,C_word *av) C_noret;
C_noret_decl(f_7506)
static void C_ccall f_7506(C_word c,C_word *av) C_noret;
C_noret_decl(f_7510)
static void C_ccall f_7510(C_word c,C_word *av) C_noret;
C_noret_decl(f_7521)
static C_word C_fcall f_7521(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_7604)
static void C_fcall f_7604(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_7616)
static void C_fcall f_7616(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7630)
static void C_ccall f_7630(C_word c,C_word *av) C_noret;
C_noret_decl(f_7635)
static void C_fcall f_7635(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7646)
static void C_fcall f_7646(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7666)
static void C_ccall f_7666(C_word c,C_word *av) C_noret;
C_noret_decl(f_7670)
static void C_ccall f_7670(C_word c,C_word *av) C_noret;
C_noret_decl(f_7678)
static void C_ccall f_7678(C_word c,C_word *av) C_noret;
C_noret_decl(f_7685)
static void C_ccall f_7685(C_word c,C_word *av) C_noret;
C_noret_decl(f_7697)
static void C_fcall f_7697(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7704)
static void C_ccall f_7704(C_word c,C_word *av) C_noret;
C_noret_decl(f_7708)
static void C_ccall f_7708(C_word c,C_word *av) C_noret;
C_noret_decl(f_7746)
static void C_ccall f_7746(C_word c,C_word *av) C_noret;
C_noret_decl(f_7857)
static void C_ccall f_7857(C_word c,C_word *av) C_noret;
C_noret_decl(f_7860)
static void C_ccall f_7860(C_word c,C_word *av) C_noret;
C_noret_decl(f_7866)
static void C_ccall f_7866(C_word c,C_word *av) C_noret;
C_noret_decl(f_7870)
static void C_ccall f_7870(C_word c,C_word *av) C_noret;
C_noret_decl(f_7892)
static void C_ccall f_7892(C_word c,C_word *av) C_noret;
C_noret_decl(f_7895)
static void C_ccall f_7895(C_word c,C_word *av) C_noret;
C_noret_decl(f_7898)
static void C_ccall f_7898(C_word c,C_word *av) C_noret;
C_noret_decl(f_7901)
static void C_ccall f_7901(C_word c,C_word *av) C_noret;
C_noret_decl(f_7903)
static void C_fcall f_7903(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7910)
static void C_fcall f_7910(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7936)
static void C_ccall f_7936(C_word c,C_word *av) C_noret;
C_noret_decl(f_7965)
static void C_fcall f_7965(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7999)
static void C_fcall f_7999(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8023)
static void C_ccall f_8023(C_word c,C_word *av) C_noret;
C_noret_decl(f_8025)
static void C_ccall f_8025(C_word c,C_word *av) C_noret;
C_noret_decl(f_8029)
static void C_ccall f_8029(C_word c,C_word *av) C_noret;
C_noret_decl(f_8041)
static void C_fcall f_8041(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_8049)
static void C_ccall f_8049(C_word c,C_word *av) C_noret;
C_noret_decl(f_8051)
static void C_fcall f_8051(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8073)
static void C_ccall f_8073(C_word c,C_word *av) C_noret;
C_noret_decl(f_8076)
static void C_ccall f_8076(C_word c,C_word *av) C_noret;
C_noret_decl(f_8078)
static void C_fcall f_8078(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8125)
static void C_fcall f_8125(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8129)
static void C_ccall f_8129(C_word c,C_word *av) C_noret;
C_noret_decl(f_8197)
static void C_fcall f_8197(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8203)
static void C_fcall f_8203(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_8223)
static void C_fcall f_8223(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8241)
static void C_ccall f_8241(C_word c,C_word *av) C_noret;
C_noret_decl(f_8246)
static void C_fcall f_8246(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8259)
static void C_ccall f_8259(C_word c,C_word *av) C_noret;
C_noret_decl(f_8262)
static void C_ccall f_8262(C_word c,C_word *av) C_noret;
C_noret_decl(f_8312)
static void C_ccall f_8312(C_word c,C_word *av) C_noret;
C_noret_decl(f_8319)
static void C_ccall f_8319(C_word c,C_word *av) C_noret;
C_noret_decl(f_8326)
static void C_ccall f_8326(C_word c,C_word *av) C_noret;
C_noret_decl(f_8378)
static void C_ccall f_8378(C_word c,C_word *av) C_noret;
C_noret_decl(f_8390)
static void C_ccall f_8390(C_word c,C_word *av) C_noret;
C_noret_decl(f_8426)
static void C_ccall f_8426(C_word c,C_word *av) C_noret;
C_noret_decl(f_8442)
static void C_ccall f_8442(C_word c,C_word *av) C_noret;
C_noret_decl(f_8512)
static void C_ccall f_8512(C_word c,C_word *av) C_noret;
C_noret_decl(f_8515)
static void C_fcall f_8515(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8529)
static C_word C_fcall f_8529(C_word t0,C_word t1);
C_noret_decl(f_8569)
static void C_ccall f_8569(C_word c,C_word *av) C_noret;
C_noret_decl(f_8592)
static void C_ccall f_8592(C_word c,C_word *av) C_noret;
C_noret_decl(f_8594)
static void C_ccall f_8594(C_word c,C_word *av) C_noret;
C_noret_decl(f_8597)
static void C_fcall f_8597(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8641)
static void C_ccall f_8641(C_word c,C_word *av) C_noret;
C_noret_decl(f_8649)
static void C_ccall f_8649(C_word c,C_word *av) C_noret;
C_noret_decl(f_8657)
static void C_ccall f_8657(C_word c,C_word *av) C_noret;
C_noret_decl(f_8660)
static void C_ccall f_8660(C_word c,C_word *av) C_noret;
C_noret_decl(f_8671)
static void C_ccall f_8671(C_word c,C_word *av) C_noret;
C_noret_decl(f_8676)
static void C_fcall f_8676(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8696)
static void C_ccall f_8696(C_word c,C_word *av) C_noret;
C_noret_decl(f_8700)
static void C_ccall f_8700(C_word c,C_word *av) C_noret;
C_noret_decl(f_8715)
static void C_ccall f_8715(C_word c,C_word *av) C_noret;
C_noret_decl(f_8727)
static void C_ccall f_8727(C_word c,C_word *av) C_noret;
C_noret_decl(f_8729)
static void C_fcall f_8729(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8736)
static void C_ccall f_8736(C_word c,C_word *av) C_noret;
C_noret_decl(f_8743)
static void C_ccall f_8743(C_word c,C_word *av) C_noret;
C_noret_decl(f_8745)
static void C_fcall f_8745(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8755)
static void C_ccall f_8755(C_word c,C_word *av) C_noret;
C_noret_decl(f_8758)
static void C_ccall f_8758(C_word c,C_word *av) C_noret;
C_noret_decl(f_8761)
static void C_ccall f_8761(C_word c,C_word *av) C_noret;
C_noret_decl(f_8764)
static void C_ccall f_8764(C_word c,C_word *av) C_noret;
C_noret_decl(f_8767)
static void C_ccall f_8767(C_word c,C_word *av) C_noret;
C_noret_decl(f_8774)
static void C_ccall f_8774(C_word c,C_word *av) C_noret;
C_noret_decl(f_8781)
static void C_ccall f_8781(C_word c,C_word *av) C_noret;
C_noret_decl(f_8784)
static void C_ccall f_8784(C_word c,C_word *av) C_noret;
C_noret_decl(f_8793)
static void C_ccall f_8793(C_word c,C_word *av) C_noret;
C_noret_decl(f_8796)
static void C_ccall f_8796(C_word c,C_word *av) C_noret;
C_noret_decl(f_8799)
static void C_ccall f_8799(C_word c,C_word *av) C_noret;
C_noret_decl(f_8802)
static void C_ccall f_8802(C_word c,C_word *av) C_noret;
C_noret_decl(f_8805)
static void C_ccall f_8805(C_word c,C_word *av) C_noret;
C_noret_decl(f_8808)
static void C_ccall f_8808(C_word c,C_word *av) C_noret;
C_noret_decl(f_8821)
static void C_ccall f_8821(C_word c,C_word *av) C_noret;
C_noret_decl(f_8825)
static void C_ccall f_8825(C_word c,C_word *av) C_noret;
C_noret_decl(f_8836)
static void C_ccall f_8836(C_word c,C_word *av) C_noret;
C_noret_decl(f_8840)
static void C_ccall f_8840(C_word c,C_word *av) C_noret;
C_noret_decl(f_8842)
static void C_fcall f_8842(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8856)
static void C_ccall f_8856(C_word c,C_word *av) C_noret;
C_noret_decl(f_8860)
static void C_ccall f_8860(C_word c,C_word *av) C_noret;
C_noret_decl(f_8881)
static void C_ccall f_8881(C_word c,C_word *av) C_noret;
C_noret_decl(f_8901)
static void C_ccall f_8901(C_word c,C_word *av) C_noret;
C_noret_decl(f_8905)
static C_word C_fcall f_8905(C_word t0,C_word t1);
C_noret_decl(f_8920)
static void C_ccall f_8920(C_word c,C_word *av) C_noret;
C_noret_decl(f_8930)
static void C_ccall f_8930(C_word c,C_word *av) C_noret;
C_noret_decl(f_8935)
static void C_fcall f_8935(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8942)
static void C_ccall f_8942(C_word c,C_word *av) C_noret;
C_noret_decl(f_8947)
static void C_fcall f_8947(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8951)
static void C_ccall f_8951(C_word c,C_word *av) C_noret;
C_noret_decl(f_8958)
static void C_ccall f_8958(C_word c,C_word *av) C_noret;
C_noret_decl(f_8965)
static void C_ccall f_8965(C_word c,C_word *av) C_noret;
C_noret_decl(f_8972)
static void C_ccall f_8972(C_word c,C_word *av) C_noret;
C_noret_decl(f_8974)
static void C_ccall f_8974(C_word c,C_word *av) C_noret;
C_noret_decl(f_8978)
static void C_ccall f_8978(C_word c,C_word *av) C_noret;
C_noret_decl(f_8986)
static C_word C_fcall f_8986(C_word t0);
C_noret_decl(f_9019)
static void C_ccall f_9019(C_word c,C_word *av) C_noret;
C_noret_decl(f_9025)
static void C_ccall f_9025(C_word c,C_word *av) C_noret;
C_noret_decl(f_9031)
static C_word C_fcall f_9031(C_word t0);
C_noret_decl(f_9052)
static void C_fcall f_9052(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9057)
static void C_fcall f_9057(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9076)
static void C_fcall f_9076(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9081)
static void C_fcall f_9081(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9100)
static void C_ccall f_9100(C_word c,C_word *av) C_noret;
C_noret_decl(f_9254)
static void C_ccall f_9254(C_word c,C_word *av) C_noret;
C_noret_decl(f_9311)
static void C_ccall f_9311(C_word c,C_word *av) C_noret;
C_noret_decl(f_9364)
static void C_fcall f_9364(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9370)
static void C_ccall f_9370(C_word c,C_word *av) C_noret;
C_noret_decl(f_9373)
static void C_fcall f_9373(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9380)
static void C_ccall f_9380(C_word c,C_word *av) C_noret;
C_noret_decl(f_9389)
static void C_ccall f_9389(C_word c,C_word *av) C_noret;
C_noret_decl(f_9395)
static void C_ccall f_9395(C_word c,C_word *av) C_noret;
C_noret_decl(f_9420)
static void C_ccall f_9420(C_word c,C_word *av) C_noret;
C_noret_decl(f_9422)
static void C_ccall f_9422(C_word c,C_word *av) C_noret;
C_noret_decl(f_9440)
static void C_ccall f_9440(C_word c,C_word *av) C_noret;
C_noret_decl(f_9444)
static void C_ccall f_9444(C_word c,C_word *av) C_noret;
C_noret_decl(f_9461)
static void C_ccall f_9461(C_word c,C_word *av) C_noret;
C_noret_decl(f_9465)
static void C_ccall f_9465(C_word c,C_word *av) C_noret;
C_noret_decl(f_9491)
static void C_ccall f_9491(C_word c,C_word *av) C_noret;
C_noret_decl(f_9508)
static void C_ccall f_9508(C_word c,C_word *av) C_noret;
C_noret_decl(f_9530)
static void C_ccall f_9530(C_word c,C_word *av) C_noret;
C_noret_decl(f_9567)
static void C_fcall f_9567(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9588)
static void C_ccall f_9588(C_word c,C_word *av) C_noret;
C_noret_decl(f_9619)
static void C_fcall f_9619(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9627)
static void C_fcall f_9627(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9649)
static C_word C_fcall f_9649(C_word t0,C_word t1);
C_noret_decl(f_9664)
static void C_ccall f_9664(C_word c,C_word *av) C_noret;
C_noret_decl(f_9677)
static C_word C_fcall f_9677(C_word t0,C_word t1);
C_noret_decl(f_9692)
static void C_ccall f_9692(C_word c,C_word *av) C_noret;
C_noret_decl(f_9727)
static C_word C_fcall f_9727(C_word t0,C_word t1);
C_noret_decl(f_9752)
static void C_fcall f_9752(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9770)
static void C_ccall f_9770(C_word c,C_word *av) C_noret;
C_noret_decl(f_9774)
static void C_ccall f_9774(C_word c,C_word *av) C_noret;
C_noret_decl(f_9791)
static void C_ccall f_9791(C_word c,C_word *av) C_noret;
C_noret_decl(f_9795)
static void C_ccall f_9795(C_word c,C_word *av) C_noret;
C_noret_decl(f_9884)
static void C_ccall f_9884(C_word c,C_word *av) C_noret;
C_noret_decl(f_9888)
static void C_ccall f_9888(C_word c,C_word *av) C_noret;
C_noret_decl(f_9893)
static void C_ccall f_9893(C_word c,C_word *av) C_noret;
C_noret_decl(f_9899)
static void C_ccall f_9899(C_word c,C_word *av) C_noret;
C_noret_decl(f_9912)
static void C_ccall f_9912(C_word c,C_word *av) C_noret;
C_noret_decl(f_9915)
static void C_ccall f_9915(C_word c,C_word *av) C_noret;
C_noret_decl(f_9919)
static void C_ccall f_9919(C_word c,C_word *av) C_noret;
C_noret_decl(f_9922)
static void C_ccall f_9922(C_word c,C_word *av) C_noret;
C_noret_decl(f_9925)
static void C_ccall f_9925(C_word c,C_word *av) C_noret;
C_noret_decl(f_9929)
static void C_ccall f_9929(C_word c,C_word *av) C_noret;
C_noret_decl(f_9932)
static void C_ccall f_9932(C_word c,C_word *av) C_noret;
C_noret_decl(f_9935)
static void C_ccall f_9935(C_word c,C_word *av) C_noret;
C_noret_decl(f_9938)
static void C_ccall f_9938(C_word c,C_word *av) C_noret;
C_noret_decl(f_9941)
static void C_ccall f_9941(C_word c,C_word *av) C_noret;
C_noret_decl(f_9944)
static void C_ccall f_9944(C_word c,C_word *av) C_noret;
C_noret_decl(f_9947)
static void C_ccall f_9947(C_word c,C_word *av) C_noret;
C_noret_decl(f_9951)
static void C_ccall f_9951(C_word c,C_word *av) C_noret;
C_noret_decl(f_9955)
static void C_ccall f_9955(C_word c,C_word *av) C_noret;
C_noret_decl(f_9958)
static void C_ccall f_9958(C_word c,C_word *av) C_noret;
C_noret_decl(f_9961)
static void C_ccall f_9961(C_word c,C_word *av) C_noret;
C_noret_decl(f_9964)
static void C_ccall f_9964(C_word c,C_word *av) C_noret;
C_noret_decl(f_9967)
static void C_ccall f_9967(C_word c,C_word *av) C_noret;
C_noret_decl(f_9971)
static void C_ccall f_9971(C_word c,C_word *av) C_noret;
C_noret_decl(f_9975)
static void C_ccall f_9975(C_word c,C_word *av) C_noret;
C_noret_decl(f_9978)
static void C_ccall f_9978(C_word c,C_word *av) C_noret;
C_noret_decl(f_9981)
static void C_ccall f_9981(C_word c,C_word *av) C_noret;
C_noret_decl(f_9984)
static void C_ccall f_9984(C_word c,C_word *av) C_noret;
C_noret_decl(f_9987)
static void C_ccall f_9987(C_word c,C_word *av) C_noret;
C_noret_decl(f_9990)
static void C_ccall f_9990(C_word c,C_word *av) C_noret;
C_noret_decl(f_9993)
static void C_ccall f_9993(C_word c,C_word *av) C_noret;
C_noret_decl(f_9996)
static void C_ccall f_9996(C_word c,C_word *av) C_noret;
C_noret_decl(f_9999)
static void C_ccall f_9999(C_word c,C_word *av) C_noret;
C_noret_decl(C_expand_toplevel)
C_externexport void C_ccall C_expand_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_10035)
static void C_ccall trf_10035(C_word c,C_word *av) C_noret;
static void C_ccall trf_10035(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10035(t0,t1,t2,t3);}

C_noret_decl(trf_10254)
static void C_ccall trf_10254(C_word c,C_word *av) C_noret;
static void C_ccall trf_10254(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10254(t0,t1,t2);}

C_noret_decl(trf_10303)
static void C_ccall trf_10303(C_word c,C_word *av) C_noret;
static void C_ccall trf_10303(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10303(t0,t1);}

C_noret_decl(trf_10510)
static void C_ccall trf_10510(C_word c,C_word *av) C_noret;
static void C_ccall trf_10510(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10510(t0,t1);}

C_noret_decl(trf_10873)
static void C_ccall trf_10873(C_word c,C_word *av) C_noret;
static void C_ccall trf_10873(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10873(t0,t1);}

C_noret_decl(trf_10899)
static void C_ccall trf_10899(C_word c,C_word *av) C_noret;
static void C_ccall trf_10899(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10899(t0,t1,t2,t3);}

C_noret_decl(trf_10920)
static void C_ccall trf_10920(C_word c,C_word *av) C_noret;
static void C_ccall trf_10920(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10920(t0,t1);}

C_noret_decl(trf_11250)
static void C_ccall trf_11250(C_word c,C_word *av) C_noret;
static void C_ccall trf_11250(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11250(t0,t1,t2);}

C_noret_decl(trf_11312)
static void C_ccall trf_11312(C_word c,C_word *av) C_noret;
static void C_ccall trf_11312(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11312(t0,t1);}

C_noret_decl(trf_11381)
static void C_ccall trf_11381(C_word c,C_word *av) C_noret;
static void C_ccall trf_11381(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_11381(t0,t1,t2,t3);}

C_noret_decl(trf_11391)
static void C_ccall trf_11391(C_word c,C_word *av) C_noret;
static void C_ccall trf_11391(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_11391(t0,t1,t2,t3);}

C_noret_decl(trf_11554)
static void C_ccall trf_11554(C_word c,C_word *av) C_noret;
static void C_ccall trf_11554(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11554(t0,t1,t2);}

C_noret_decl(trf_11562)
static void C_ccall trf_11562(C_word c,C_word *av) C_noret;
static void C_ccall trf_11562(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11562(t0,t1,t2);}

C_noret_decl(trf_11588)
static void C_ccall trf_11588(C_word c,C_word *av) C_noret;
static void C_ccall trf_11588(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11588(t0,t1,t2);}

C_noret_decl(trf_11727)
static void C_ccall trf_11727(C_word c,C_word *av) C_noret;
static void C_ccall trf_11727(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11727(t0,t1);}

C_noret_decl(trf_11770)
static void C_ccall trf_11770(C_word c,C_word *av) C_noret;
static void C_ccall trf_11770(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11770(t0,t1,t2);}

C_noret_decl(trf_11780)
static void C_ccall trf_11780(C_word c,C_word *av) C_noret;
static void C_ccall trf_11780(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11780(t0,t1);}

C_noret_decl(trf_11820)
static void C_ccall trf_11820(C_word c,C_word *av) C_noret;
static void C_ccall trf_11820(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11820(t0,t1,t2);}

C_noret_decl(trf_11872)
static void C_ccall trf_11872(C_word c,C_word *av) C_noret;
static void C_ccall trf_11872(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11872(t0,t1,t2);}

C_noret_decl(trf_11946)
static void C_ccall trf_11946(C_word c,C_word *av) C_noret;
static void C_ccall trf_11946(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_11946(t0,t1,t2,t3);}

C_noret_decl(trf_12038)
static void C_ccall trf_12038(C_word c,C_word *av) C_noret;
static void C_ccall trf_12038(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12038(t0,t1);}

C_noret_decl(trf_12095)
static void C_ccall trf_12095(C_word c,C_word *av) C_noret;
static void C_ccall trf_12095(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12095(t0,t1,t2);}

C_noret_decl(trf_12163)
static void C_ccall trf_12163(C_word c,C_word *av) C_noret;
static void C_ccall trf_12163(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_12163(t0,t1,t2,t3);}

C_noret_decl(trf_12835)
static void C_ccall trf_12835(C_word c,C_word *av) C_noret;
static void C_ccall trf_12835(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12835(t0,t1,t2);}

C_noret_decl(trf_13191)
static void C_ccall trf_13191(C_word c,C_word *av) C_noret;
static void C_ccall trf_13191(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_13191(t0,t1,t2);}

C_noret_decl(trf_13257)
static void C_ccall trf_13257(C_word c,C_word *av) C_noret;
static void C_ccall trf_13257(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_13257(t0,t1,t2);}

C_noret_decl(trf_13352)
static void C_ccall trf_13352(C_word c,C_word *av) C_noret;
static void C_ccall trf_13352(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_13352(t0,t1);}

C_noret_decl(trf_13449)
static void C_ccall trf_13449(C_word c,C_word *av) C_noret;
static void C_ccall trf_13449(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_13449(t0,t1);}

C_noret_decl(trf_13517)
static void C_ccall trf_13517(C_word c,C_word *av) C_noret;
static void C_ccall trf_13517(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_13517(t0,t1,t2);}

C_noret_decl(trf_13527)
static void C_ccall trf_13527(C_word c,C_word *av) C_noret;
static void C_ccall trf_13527(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_13527(t0,t1,t2);}

C_noret_decl(trf_13672)
static void C_ccall trf_13672(C_word c,C_word *av) C_noret;
static void C_ccall trf_13672(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_13672(t0,t1,t2);}

C_noret_decl(trf_13699)
static void C_ccall trf_13699(C_word c,C_word *av) C_noret;
static void C_ccall trf_13699(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_13699(t0,t1,t2);}

C_noret_decl(trf_13848)
static void C_ccall trf_13848(C_word c,C_word *av) C_noret;
static void C_ccall trf_13848(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_13848(t0,t1,t2);}

C_noret_decl(trf_13912)
static void C_ccall trf_13912(C_word c,C_word *av) C_noret;
static void C_ccall trf_13912(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_13912(t0,t1,t2);}

C_noret_decl(trf_5575)
static void C_ccall trf_5575(C_word c,C_word *av) C_noret;
static void C_ccall trf_5575(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5575(t0,t1,t2);}

C_noret_decl(trf_5628)
static void C_ccall trf_5628(C_word c,C_word *av) C_noret;
static void C_ccall trf_5628(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5628(t0,t1,t2);}

C_noret_decl(trf_5733)
static void C_ccall trf_5733(C_word c,C_word *av) C_noret;
static void C_ccall trf_5733(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5733(t0,t1,t2);}

C_noret_decl(trf_5810)
static void C_ccall trf_5810(C_word c,C_word *av) C_noret;
static void C_ccall trf_5810(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5810(t0,t1,t2,t3);}

C_noret_decl(trf_5858)
static void C_ccall trf_5858(C_word c,C_word *av) C_noret;
static void C_ccall trf_5858(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5858(t0,t1,t2,t3);}

C_noret_decl(trf_5907)
static void C_ccall trf_5907(C_word c,C_word *av) C_noret;
static void C_ccall trf_5907(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5907(t0,t1,t2);}

C_noret_decl(trf_6072)
static void C_ccall trf_6072(C_word c,C_word *av) C_noret;
static void C_ccall trf_6072(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6072(t0,t1,t2);}

C_noret_decl(trf_6106)
static void C_ccall trf_6106(C_word c,C_word *av) C_noret;
static void C_ccall trf_6106(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_6106(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_6161)
static void C_ccall trf_6161(C_word c,C_word *av) C_noret;
static void C_ccall trf_6161(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6161(t0,t1,t2);}

C_noret_decl(trf_6178)
static void C_ccall trf_6178(C_word c,C_word *av) C_noret;
static void C_ccall trf_6178(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6178(t0,t1);}

C_noret_decl(trf_6305)
static void C_ccall trf_6305(C_word c,C_word *av) C_noret;
static void C_ccall trf_6305(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_6305(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6349)
static void C_ccall trf_6349(C_word c,C_word *av) C_noret;
static void C_ccall trf_6349(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6349(t0,t1,t2);}

C_noret_decl(trf_6373)
static void C_ccall trf_6373(C_word c,C_word *av) C_noret;
static void C_ccall trf_6373(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6373(t0,t1);}

C_noret_decl(trf_6421)
static void C_ccall trf_6421(C_word c,C_word *av) C_noret;
static void C_ccall trf_6421(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6421(t0,t1,t2);}

C_noret_decl(trf_6490)
static void C_ccall trf_6490(C_word c,C_word *av) C_noret;
static void C_ccall trf_6490(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6490(t0,t1,t2);}

C_noret_decl(trf_6528)
static void C_ccall trf_6528(C_word c,C_word *av) C_noret;
static void C_ccall trf_6528(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6528(t0,t1);}

C_noret_decl(trf_6532)
static void C_ccall trf_6532(C_word c,C_word *av) C_noret;
static void C_ccall trf_6532(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6532(t0,t1,t2);}

C_noret_decl(trf_6622)
static void C_ccall trf_6622(C_word c,C_word *av) C_noret;
static void C_ccall trf_6622(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6622(t0,t1,t2);}

C_noret_decl(trf_6720)
static void C_ccall trf_6720(C_word c,C_word *av) C_noret;
static void C_ccall trf_6720(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6720(t0,t1,t2);}

C_noret_decl(trf_6748)
static void C_ccall trf_6748(C_word c,C_word *av) C_noret;
static void C_ccall trf_6748(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_6748(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_6766)
static void C_ccall trf_6766(C_word c,C_word *av) C_noret;
static void C_ccall trf_6766(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6766(t0,t1);}

C_noret_decl(trf_6778)
static void C_ccall trf_6778(C_word c,C_word *av) C_noret;
static void C_ccall trf_6778(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6778(t0,t1);}

C_noret_decl(trf_6906)
static void C_ccall trf_6906(C_word c,C_word *av) C_noret;
static void C_ccall trf_6906(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6906(t0,t1,t2);}

C_noret_decl(trf_6971)
static void C_ccall trf_6971(C_word c,C_word *av) C_noret;
static void C_ccall trf_6971(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6971(t0,t1,t2);}

C_noret_decl(trf_7051)
static void C_ccall trf_7051(C_word c,C_word *av) C_noret;
static void C_ccall trf_7051(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7051(t0,t1);}

C_noret_decl(trf_7064)
static void C_ccall trf_7064(C_word c,C_word *av) C_noret;
static void C_ccall trf_7064(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7064(t0,t1);}

C_noret_decl(trf_7101)
static void C_ccall trf_7101(C_word c,C_word *av) C_noret;
static void C_ccall trf_7101(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7101(t0,t1);}

C_noret_decl(trf_7140)
static void C_ccall trf_7140(C_word c,C_word *av) C_noret;
static void C_ccall trf_7140(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7140(t0,t1);}

C_noret_decl(trf_7227)
static void C_ccall trf_7227(C_word c,C_word *av) C_noret;
static void C_ccall trf_7227(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7227(t0,t1);}

C_noret_decl(trf_7402)
static void C_ccall trf_7402(C_word c,C_word *av) C_noret;
static void C_ccall trf_7402(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7402(t0,t1,t2,t3);}

C_noret_decl(trf_7468)
static void C_ccall trf_7468(C_word c,C_word *av) C_noret;
static void C_ccall trf_7468(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7468(t0,t1,t2);}

C_noret_decl(trf_7604)
static void C_ccall trf_7604(C_word c,C_word *av) C_noret;
static void C_ccall trf_7604(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_7604(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_7616)
static void C_ccall trf_7616(C_word c,C_word *av) C_noret;
static void C_ccall trf_7616(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7616(t0,t1,t2,t3);}

C_noret_decl(trf_7635)
static void C_ccall trf_7635(C_word c,C_word *av) C_noret;
static void C_ccall trf_7635(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7635(t0,t1,t2);}

C_noret_decl(trf_7646)
static void C_ccall trf_7646(C_word c,C_word *av) C_noret;
static void C_ccall trf_7646(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7646(t0,t1);}

C_noret_decl(trf_7697)
static void C_ccall trf_7697(C_word c,C_word *av) C_noret;
static void C_ccall trf_7697(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7697(t0,t1);}

C_noret_decl(trf_7903)
static void C_ccall trf_7903(C_word c,C_word *av) C_noret;
static void C_ccall trf_7903(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_7903(t0,t1,t2,t3,t4);}

C_noret_decl(trf_7910)
static void C_ccall trf_7910(C_word c,C_word *av) C_noret;
static void C_ccall trf_7910(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7910(t0,t1);}

C_noret_decl(trf_7965)
static void C_ccall trf_7965(C_word c,C_word *av) C_noret;
static void C_ccall trf_7965(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7965(t0,t1,t2);}

C_noret_decl(trf_7999)
static void C_ccall trf_7999(C_word c,C_word *av) C_noret;
static void C_ccall trf_7999(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7999(t0,t1,t2,t3);}

C_noret_decl(trf_8041)
static void C_ccall trf_8041(C_word c,C_word *av) C_noret;
static void C_ccall trf_8041(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_8041(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_8051)
static void C_ccall trf_8051(C_word c,C_word *av) C_noret;
static void C_ccall trf_8051(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_8051(t0,t1,t2,t3,t4);}

C_noret_decl(trf_8078)
static void C_ccall trf_8078(C_word c,C_word *av) C_noret;
static void C_ccall trf_8078(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8078(t0,t1,t2);}

C_noret_decl(trf_8125)
static void C_ccall trf_8125(C_word c,C_word *av) C_noret;
static void C_ccall trf_8125(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8125(t0,t1);}

C_noret_decl(trf_8197)
static void C_ccall trf_8197(C_word c,C_word *av) C_noret;
static void C_ccall trf_8197(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8197(t0,t1,t2);}

C_noret_decl(trf_8203)
static void C_ccall trf_8203(C_word c,C_word *av) C_noret;
static void C_ccall trf_8203(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_8203(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_8223)
static void C_ccall trf_8223(C_word c,C_word *av) C_noret;
static void C_ccall trf_8223(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8223(t0,t1);}

C_noret_decl(trf_8246)
static void C_ccall trf_8246(C_word c,C_word *av) C_noret;
static void C_ccall trf_8246(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8246(t0,t1,t2);}

C_noret_decl(trf_8515)
static void C_ccall trf_8515(C_word c,C_word *av) C_noret;
static void C_ccall trf_8515(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_8515(t0,t1,t2,t3);}

C_noret_decl(trf_8597)
static void C_ccall trf_8597(C_word c,C_word *av) C_noret;
static void C_ccall trf_8597(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_8597(t0,t1,t2,t3);}

C_noret_decl(trf_8676)
static void C_ccall trf_8676(C_word c,C_word *av) C_noret;
static void C_ccall trf_8676(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8676(t0,t1,t2);}

C_noret_decl(trf_8729)
static void C_ccall trf_8729(C_word c,C_word *av) C_noret;
static void C_ccall trf_8729(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8729(t0,t1,t2);}

C_noret_decl(trf_8745)
static void C_ccall trf_8745(C_word c,C_word *av) C_noret;
static void C_ccall trf_8745(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8745(t0,t1,t2);}

C_noret_decl(trf_8842)
static void C_ccall trf_8842(C_word c,C_word *av) C_noret;
static void C_ccall trf_8842(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8842(t0,t1,t2);}

C_noret_decl(trf_8935)
static void C_ccall trf_8935(C_word c,C_word *av) C_noret;
static void C_ccall trf_8935(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_8935(t0,t1,t2,t3,t4);}

C_noret_decl(trf_8947)
static void C_ccall trf_8947(C_word c,C_word *av) C_noret;
static void C_ccall trf_8947(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8947(t0,t1,t2);}

C_noret_decl(trf_9052)
static void C_ccall trf_9052(C_word c,C_word *av) C_noret;
static void C_ccall trf_9052(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9052(t0,t1);}

C_noret_decl(trf_9057)
static void C_ccall trf_9057(C_word c,C_word *av) C_noret;
static void C_ccall trf_9057(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9057(t0,t1,t2,t3);}

C_noret_decl(trf_9076)
static void C_ccall trf_9076(C_word c,C_word *av) C_noret;
static void C_ccall trf_9076(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9076(t0,t1);}

C_noret_decl(trf_9081)
static void C_ccall trf_9081(C_word c,C_word *av) C_noret;
static void C_ccall trf_9081(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9081(t0,t1,t2,t3);}

C_noret_decl(trf_9364)
static void C_ccall trf_9364(C_word c,C_word *av) C_noret;
static void C_ccall trf_9364(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9364(t0,t1,t2);}

C_noret_decl(trf_9373)
static void C_ccall trf_9373(C_word c,C_word *av) C_noret;
static void C_ccall trf_9373(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9373(t0,t1,t2);}

C_noret_decl(trf_9567)
static void C_ccall trf_9567(C_word c,C_word *av) C_noret;
static void C_ccall trf_9567(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9567(t0,t1,t2,t3);}

C_noret_decl(trf_9619)
static void C_ccall trf_9619(C_word c,C_word *av) C_noret;
static void C_ccall trf_9619(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9619(t0,t1);}

C_noret_decl(trf_9627)
static void C_ccall trf_9627(C_word c,C_word *av) C_noret;
static void C_ccall trf_9627(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9627(t0,t1);}

C_noret_decl(trf_9752)
static void C_ccall trf_9752(C_word c,C_word *av) C_noret;
static void C_ccall trf_9752(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9752(t0,t1,t2);}

/* k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in ... */
static void C_ccall f_10002(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_10002,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10005,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11856,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11858,a[2]=((C_word)li136),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1474: ##sys#er-transformer */
t5=*((C_word*)lf[185]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in ... */
static void C_ccall f_10005(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_10005,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10008,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11660,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11662,a[2]=((C_word)li134),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1487: ##sys#er-transformer */
t5=*((C_word*)lf[185]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in ... */
static void C_ccall f_10008(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_10008,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10011,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11367,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11369,a[2]=((C_word)li131),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1516: ##sys#er-transformer */
t5=*((C_word*)lf[185]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k10009 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in ... */
static void C_ccall f_10011(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_10011,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10014,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11334,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11336,a[2]=((C_word)li125),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1568: ##sys#er-transformer */
t5=*((C_word*)lf[185]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k10012 in k10009 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in ... */
static void C_ccall f_10014(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_10014,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10017,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11298,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11300,a[2]=((C_word)li124),tmp=(C_word)a,a+=3,tmp);
/* synrules.scm:46: ##sys#er-transformer */
t5=*((C_word*)lf[185]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k10015 in k10012 in k10009 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in ... */
static void C_ccall f_10017(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,4)))){
C_save_and_reclaim((void *)f_10017,c,av);}
a=C_alloc(20);
t2=C_a_i_provide(&a,1,lf[189]);
t3=C_mutate((C_word*)lf[47]+1 /* (set! chicken.internal.syntax-rules#syntax-rules-mismatch ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10019,a[2]=((C_word)li101),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[191]+1 /* (set! chicken.internal.syntax-rules#drop-right ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10025,a[2]=((C_word)li103),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[192]+1 /* (set! chicken.internal.syntax-rules#take-right ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10061,a[2]=((C_word)li105),tmp=(C_word)a,a+=3,tmp));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11278,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1579: chicken.internal#macro-subset */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[196]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[196]+1);
av2[1]=t6;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* chicken.internal.syntax-rules#syntax-rules-mismatch in k10015 in k10012 in k10009 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in ... */
static void C_ccall f_10019(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10019,c,av);}
/* synrules.scm:68: ##sys#syntax-error-hook */
t3=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=lf[190];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* chicken.internal.syntax-rules#drop-right in k10015 in k10012 in k10009 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in ... */
static void C_ccall f_10025(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_10025,c,av);}
a=C_alloc(7);
t4=C_i_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10035,a[2]=t3,a[3]=t6,a[4]=((C_word)li102),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_10035(t8,t1,t4,t2);}

/* loop in chicken.internal.syntax-rules#drop-right in k10015 in k10012 in k10009 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in ... */
static void C_fcall f_10035(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_10035,4,t0,t1,t2,t3);}
a=C_alloc(4);
if(C_truep(C_fixnum_greaterp(t2,((C_word*)t0)[2]))){
t4=C_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10053,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* synrules.scm:77: loop */
t7=t5;
t8=C_fixnum_difference(t2,C_fix(1));
t9=C_u_i_cdr(t3);
t1=t7;
t2=t8;
t3=t9;
goto loop;}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k10051 in loop in chicken.internal.syntax-rules#drop-right in k10015 in k10012 in k10009 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in ... */
static void C_ccall f_10053(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_10053,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.internal.syntax-rules#take-right in k10015 in k10012 in k10009 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in ... */
static void C_ccall f_10061(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_10061,c,av);}
a=C_alloc(4);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10071,a[2]=t3,a[3]=((C_word)li104),tmp=(C_word)a,a+=4,tmp);
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=(
  f_10071(t5,t4,t2)
);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* loop in chicken.internal.syntax-rules#take-right in k10015 in k10012 in k10009 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in ... */
static C_word C_fcall f_10071(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_greaterp(t1,((C_word*)t0)[2]))){
t4=C_fixnum_difference(t1,C_fix(1));
t5=C_i_cdr(t2);
t1=t4;
t2=t5;
goto loop;}
else{
return(t2);}}

/* k10096 in k11310 in k11302 in a11299 in k10012 in k10009 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in ... */
static void C_ccall f_10098(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(56,c,2)))){
C_save_and_reclaim((void *)f_10098,c,av);}
a=C_alloc(56);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,lf[199]);
t4=C_mutate(((C_word *)((C_word*)t0)[4])+1,lf[200]);
t5=C_mutate(((C_word *)((C_word*)t0)[5])+1,lf[201]);
t6=C_mutate(((C_word *)((C_word*)t0)[6])+1,lf[202]);
t7=C_mutate(((C_word *)((C_word*)t0)[7])+1,lf[203]);
t8=C_mutate(((C_word *)((C_word*)t0)[8])+1,lf[204]);
t9=C_mutate(((C_word *)((C_word*)t0)[9])+1,lf[205]);
t10=C_mutate(((C_word *)((C_word*)t0)[10])+1,lf[206]);
t11=C_mutate(((C_word *)((C_word*)t0)[11])+1,lf[207]);
t12=(*a=C_CLOSURE_TYPE|55,a[1]=(C_word)f_10113,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[13],a[4]=((C_word*)t0)[14],a[5]=((C_word*)t0)[15],a[6]=((C_word*)t0)[16],a[7]=((C_word*)t0)[17],a[8]=((C_word*)t0)[18],a[9]=((C_word*)t0)[19],a[10]=((C_word*)t0)[20],a[11]=((C_word*)t0)[21],a[12]=((C_word*)t0)[22],a[13]=((C_word*)t0)[23],a[14]=((C_word*)t0)[24],a[15]=((C_word*)t0)[25],a[16]=((C_word*)t0)[26],a[17]=((C_word*)t0)[27],a[18]=((C_word*)t0)[28],a[19]=((C_word*)t0)[29],a[20]=((C_word*)t0)[30],a[21]=((C_word*)t0)[31],a[22]=((C_word*)t0)[32],a[23]=((C_word*)t0)[33],a[24]=((C_word*)t0)[34],a[25]=((C_word*)t0)[35],a[26]=((C_word*)t0)[36],a[27]=((C_word*)t0)[37],a[28]=((C_word*)t0)[38],a[29]=((C_word*)t0)[39],a[30]=((C_word*)t0)[4],a[31]=((C_word*)t0)[40],a[32]=((C_word*)t0)[2],a[33]=((C_word*)t0)[41],a[34]=((C_word*)t0)[42],a[35]=((C_word*)t0)[43],a[36]=((C_word*)t0)[44],a[37]=((C_word*)t0)[45],a[38]=((C_word*)t0)[46],a[39]=((C_word*)t0)[3],a[40]=((C_word*)t0)[6],a[41]=((C_word*)t0)[7],a[42]=((C_word*)t0)[47],a[43]=((C_word*)t0)[5],a[44]=((C_word*)t0)[9],a[45]=((C_word*)t0)[10],a[46]=((C_word*)t0)[11],a[47]=((C_word*)t0)[48],a[48]=((C_word*)t0)[49],a[49]=((C_word*)t0)[50],a[50]=((C_word*)t0)[8],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],a[53]=((C_word*)t0)[53],a[54]=((C_word*)t0)[54],a[55]=((C_word*)t0)[55],tmp=(C_word)a,a+=56,tmp);
/* synrules.scm:105: r */
t13=((C_word*)t0)[54];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t13;
av2[1]=t12;
av2[2]=lf[234];
((C_proc)C_fast_retrieve_proc(t13))(3,av2);}}

/* k10111 in k10096 in k11310 in k11302 in a11299 in k10012 in k10009 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in ... */
static void C_ccall f_10113(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(56,c,2)))){
C_save_and_reclaim((void *)f_10113,c,av);}
a=C_alloc(56);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|55,a[1]=(C_word)f_10117,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[2],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],a[53]=((C_word*)t0)[53],a[54]=((C_word*)t0)[54],a[55]=((C_word*)t0)[55],tmp=(C_word)a,a+=56,tmp);
/* synrules.scm:106: r */
t4=((C_word*)t0)[54];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[233];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k10115 in k10111 in k10096 in k11310 in k11302 in a11299 in k10012 in k10009 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in ... */
static void C_ccall f_10117(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(56,c,2)))){
C_save_and_reclaim((void *)f_10117,c,av);}
a=C_alloc(56);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,lf[208]);
t4=(*a=C_CLOSURE_TYPE|55,a[1]=(C_word)f_10122,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[14],a[13]=((C_word*)t0)[15],a[14]=((C_word*)t0)[16],a[15]=((C_word*)t0)[17],a[16]=((C_word*)t0)[18],a[17]=((C_word*)t0)[19],a[18]=((C_word*)t0)[20],a[19]=((C_word*)t0)[21],a[20]=((C_word*)t0)[22],a[21]=((C_word*)t0)[23],a[22]=((C_word*)t0)[24],a[23]=((C_word*)t0)[25],a[24]=((C_word*)t0)[26],a[25]=((C_word*)t0)[27],a[26]=((C_word*)t0)[28],a[27]=((C_word*)t0)[29],a[28]=((C_word*)t0)[30],a[29]=((C_word*)t0)[2],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],a[33]=((C_word*)t0)[34],a[34]=((C_word*)t0)[35],a[35]=((C_word*)t0)[36],a[36]=((C_word*)t0)[37],a[37]=((C_word*)t0)[38],a[38]=((C_word*)t0)[39],a[39]=((C_word*)t0)[40],a[40]=((C_word*)t0)[41],a[41]=((C_word*)t0)[42],a[42]=((C_word*)t0)[43],a[43]=((C_word*)t0)[44],a[44]=((C_word*)t0)[45],a[45]=((C_word*)t0)[46],a[46]=((C_word*)t0)[47],a[47]=((C_word*)t0)[48],a[48]=((C_word*)t0)[49],a[49]=((C_word*)t0)[3],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],a[53]=((C_word*)t0)[53],a[54]=((C_word*)t0)[54],a[55]=((C_word*)t0)[55],tmp=(C_word)a,a+=56,tmp);
/* synrules.scm:108: r */
t5=((C_word*)t0)[54];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[232];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k10120 in k10115 in k10111 in k10096 in k11310 in k11302 in a11299 in k10012 in k10009 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in ... */
static void C_ccall f_10122(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(56,c,2)))){
C_save_and_reclaim((void *)f_10122,c,av);}
a=C_alloc(56);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,lf[209]);
t4=C_mutate(((C_word *)((C_word*)t0)[4])+1,lf[210]);
t5=(*a=C_CLOSURE_TYPE|55,a[1]=(C_word)f_10128,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[14],a[12]=((C_word*)t0)[15],a[13]=((C_word*)t0)[16],a[14]=((C_word*)t0)[17],a[15]=((C_word*)t0)[18],a[16]=((C_word*)t0)[19],a[17]=((C_word*)t0)[20],a[18]=((C_word*)t0)[21],a[19]=((C_word*)t0)[22],a[20]=((C_word*)t0)[23],a[21]=((C_word*)t0)[24],a[22]=((C_word*)t0)[25],a[23]=((C_word*)t0)[26],a[24]=((C_word*)t0)[27],a[25]=((C_word*)t0)[28],a[26]=((C_word*)t0)[29],a[27]=((C_word*)t0)[30],a[28]=((C_word*)t0)[2],a[29]=((C_word*)t0)[31],a[30]=((C_word*)t0)[32],a[31]=((C_word*)t0)[33],a[32]=((C_word*)t0)[34],a[33]=((C_word*)t0)[35],a[34]=((C_word*)t0)[36],a[35]=((C_word*)t0)[37],a[36]=((C_word*)t0)[38],a[37]=((C_word*)t0)[39],a[38]=((C_word*)t0)[40],a[39]=((C_word*)t0)[3],a[40]=((C_word*)t0)[4],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],a[53]=((C_word*)t0)[53],a[54]=((C_word*)t0)[54],a[55]=((C_word*)t0)[55],tmp=(C_word)a,a+=56,tmp);
/* synrules.scm:111: r */
t6=((C_word*)t0)[54];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[231];
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}

/* k10126 in k10120 in k10115 in k10111 in k10096 in k11310 in k11302 in a11299 in k10012 in k10009 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in ... */
static void C_ccall f_10128(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(56,c,2)))){
C_save_and_reclaim((void *)f_10128,c,av);}
a=C_alloc(56);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|55,a[1]=(C_word)f_10132,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[2],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],a[53]=((C_word*)t0)[53],a[54]=((C_word*)t0)[54],a[55]=((C_word*)t0)[55],tmp=(C_word)a,a+=56,tmp);
/* synrules.scm:112: r */
t4=((C_word*)t0)[54];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[230];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k10130 in k10126 in k10120 in k10115 in k10111 in k10096 in k11310 in k11302 in a11299 in k10012 in k10009 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in ... */
static void C_ccall f_10132(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(56,c,2)))){
C_save_and_reclaim((void *)f_10132,c,av);}
a=C_alloc(56);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|55,a[1]=(C_word)f_10136,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],a[33]=((C_word*)t0)[34],a[34]=((C_word*)t0)[35],a[35]=((C_word*)t0)[36],a[36]=((C_word*)t0)[37],a[37]=((C_word*)t0)[38],a[38]=((C_word*)t0)[39],a[39]=((C_word*)t0)[40],a[40]=((C_word*)t0)[41],a[41]=((C_word*)t0)[42],a[42]=((C_word*)t0)[43],a[43]=((C_word*)t0)[2],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],a[53]=((C_word*)t0)[53],a[54]=((C_word*)t0)[54],a[55]=((C_word*)t0)[55],tmp=(C_word)a,a+=56,tmp);
/* synrules.scm:113: r */
t4=((C_word*)t0)[54];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[229];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k10134 in k10130 in k10126 in k10120 in k10115 in k10111 in k10096 in k11310 in k11302 in a11299 in k10012 in k10009 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in ... */
static void C_ccall f_10136(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(56,c,2)))){
C_save_and_reclaim((void *)f_10136,c,av);}
a=C_alloc(56);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|55,a[1]=(C_word)f_10140,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],a[33]=((C_word*)t0)[34],a[34]=((C_word*)t0)[35],a[35]=((C_word*)t0)[36],a[36]=((C_word*)t0)[37],a[37]=((C_word*)t0)[38],a[38]=((C_word*)t0)[39],a[39]=((C_word*)t0)[40],a[40]=((C_word*)t0)[41],a[41]=((C_word*)t0)[2],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],a[53]=((C_word*)t0)[53],a[54]=((C_word*)t0)[54],a[55]=((C_word*)t0)[55],tmp=(C_word)a,a+=56,tmp);
/* synrules.scm:114: r */
t4=((C_word*)t0)[54];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[228];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k10138 in k10134 in k10130 in k10126 in k10120 in k10115 in k10111 in k10096 in k11310 in k11302 in a11299 in k10012 in k10009 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in ... */
static void C_ccall f_10140(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(56,c,2)))){
C_save_and_reclaim((void *)f_10140,c,av);}
a=C_alloc(56);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|55,a[1]=(C_word)f_10144,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[2],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],a[53]=((C_word*)t0)[53],a[54]=((C_word*)t0)[54],a[55]=((C_word*)t0)[55],tmp=(C_word)a,a+=56,tmp);
/* synrules.scm:115: r */
t4=((C_word*)t0)[54];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[57];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k10142 in k10138 in k10134 in k10130 in k10126 in k10120 in k10115 in k10111 in k10096 in k11310 in k11302 in a11299 in k10012 in k10009 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in ... */
static void C_ccall f_10144(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(56,c,2)))){
C_save_and_reclaim((void *)f_10144,c,av);}
a=C_alloc(56);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|55,a[1]=(C_word)f_10148,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[2],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],a[53]=((C_word*)t0)[53],a[54]=((C_word*)t0)[54],a[55]=((C_word*)t0)[55],tmp=(C_word)a,a+=56,tmp);
/* synrules.scm:116: r */
t4=((C_word*)t0)[54];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[89];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k10146 in k10142 in k10138 in k10134 in k10130 in k10126 in k10120 in k10115 in k10111 in k10096 in k11310 in k11302 in a11299 in k10012 in k10009 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in ... */
static void C_ccall f_10148(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(56,c,2)))){
C_save_and_reclaim((void *)f_10148,c,av);}
a=C_alloc(56);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,lf[211]);
t4=(*a=C_CLOSURE_TYPE|55,a[1]=(C_word)f_10153,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[14],a[13]=((C_word*)t0)[15],a[14]=((C_word*)t0)[16],a[15]=((C_word*)t0)[17],a[16]=((C_word*)t0)[18],a[17]=((C_word*)t0)[19],a[18]=((C_word*)t0)[20],a[19]=((C_word*)t0)[21],a[20]=((C_word*)t0)[22],a[21]=((C_word*)t0)[23],a[22]=((C_word*)t0)[24],a[23]=((C_word*)t0)[25],a[24]=((C_word*)t0)[26],a[25]=((C_word*)t0)[27],a[26]=((C_word*)t0)[2],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],a[33]=((C_word*)t0)[34],a[34]=((C_word*)t0)[35],a[35]=((C_word*)t0)[36],a[36]=((C_word*)t0)[37],a[37]=((C_word*)t0)[38],a[38]=((C_word*)t0)[39],a[39]=((C_word*)t0)[3],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],a[53]=((C_word*)t0)[53],a[54]=((C_word*)t0)[54],a[55]=((C_word*)t0)[55],tmp=(C_word)a,a+=56,tmp);
/* synrules.scm:118: r */
t5=((C_word*)t0)[54];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[227];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k10151 in k10146 in k10142 in k10138 in k10134 in k10130 in k10126 in k10120 in k10115 in k10111 in k10096 in k11310 in k11302 in a11299 in k10012 in k10009 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in ... */
static void C_ccall f_10153(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(56,c,2)))){
C_save_and_reclaim((void *)f_10153,c,av);}
a=C_alloc(56);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,lf[212]);
t4=C_mutate(((C_word *)((C_word*)t0)[4])+1,lf[213]);
t5=(*a=C_CLOSURE_TYPE|55,a[1]=(C_word)f_10160,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[14],a[12]=((C_word*)t0)[15],a[13]=((C_word*)t0)[16],a[14]=((C_word*)t0)[17],a[15]=((C_word*)t0)[18],a[16]=((C_word*)t0)[19],a[17]=((C_word*)t0)[20],a[18]=((C_word*)t0)[21],a[19]=((C_word*)t0)[22],a[20]=((C_word*)t0)[23],a[21]=((C_word*)t0)[24],a[22]=((C_word*)t0)[25],a[23]=((C_word*)t0)[26],a[24]=((C_word*)t0)[27],a[25]=((C_word*)t0)[28],a[26]=((C_word*)t0)[29],a[27]=((C_word*)t0)[30],a[28]=((C_word*)t0)[31],a[29]=((C_word*)t0)[32],a[30]=((C_word*)t0)[33],a[31]=((C_word*)t0)[34],a[32]=((C_word*)t0)[35],a[33]=((C_word*)t0)[36],a[34]=((C_word*)t0)[37],a[35]=((C_word*)t0)[38],a[36]=((C_word*)t0)[39],a[37]=((C_word*)t0)[40],a[38]=((C_word*)t0)[41],a[39]=((C_word*)t0)[42],a[40]=((C_word*)t0)[43],a[41]=((C_word*)t0)[44],a[42]=((C_word*)t0)[2],a[43]=((C_word*)t0)[45],a[44]=((C_word*)t0)[3],a[45]=((C_word*)t0)[46],a[46]=((C_word*)t0)[4],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],a[53]=((C_word*)t0)[53],a[54]=((C_word*)t0)[54],a[55]=((C_word*)t0)[55],tmp=(C_word)a,a+=56,tmp);
/* synrules.scm:122: r */
t6=((C_word*)t0)[54];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[226];
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}

/* k10158 in k10151 in k10146 in k10142 in k10138 in k10134 in k10130 in k10126 in k10120 in k10115 in k10111 in k10096 in k11310 in k11302 in a11299 in k10012 in k10009 in k10006 in k10003 in k10000 in k9997 in k9994 in ... */
static void C_ccall f_10160(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(56,c,2)))){
C_save_and_reclaim((void *)f_10160,c,av);}
a=C_alloc(56);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,lf[214]);
t3=(*a=C_CLOSURE_TYPE|55,a[1]=(C_word)f_10165,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[2],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],a[53]=((C_word*)t0)[53],a[54]=((C_word*)t0)[54],a[55]=((C_word*)t0)[55],tmp=(C_word)a,a+=56,tmp);
/* synrules.scm:124: r */
t4=((C_word*)t0)[54];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[217];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k10163 in k10158 in k10151 in k10146 in k10142 in k10138 in k10134 in k10130 in k10126 in k10120 in k10115 in k10111 in k10096 in k11310 in k11302 in a11299 in k10012 in k10009 in k10006 in k10003 in k10000 in k9997 in ... */
static void C_ccall f_10165(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(56,c,2)))){
C_save_and_reclaim((void *)f_10165,c,av);}
a=C_alloc(56);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|55,a[1]=(C_word)f_10169,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],a[33]=((C_word*)t0)[34],a[34]=((C_word*)t0)[35],a[35]=((C_word*)t0)[36],a[36]=((C_word*)t0)[37],a[37]=((C_word*)t0)[38],a[38]=((C_word*)t0)[39],a[39]=((C_word*)t0)[40],a[40]=((C_word*)t0)[41],a[41]=((C_word*)t0)[42],a[42]=((C_word*)t0)[43],a[43]=((C_word*)t0)[44],a[44]=((C_word*)t0)[45],a[45]=((C_word*)t0)[46],a[46]=((C_word*)t0)[47],a[47]=((C_word*)t0)[48],a[48]=((C_word*)t0)[49],a[49]=((C_word*)t0)[50],a[50]=((C_word*)t0)[2],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],a[53]=((C_word*)t0)[53],a[54]=((C_word*)t0)[54],a[55]=((C_word*)t0)[55],tmp=(C_word)a,a+=56,tmp);
/* synrules.scm:125: r */
t4=((C_word*)t0)[54];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[225];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k10167 in k10163 in k10158 in k10151 in k10146 in k10142 in k10138 in k10134 in k10130 in k10126 in k10120 in k10115 in k10111 in k10096 in k11310 in k11302 in a11299 in k10012 in k10009 in k10006 in k10003 in k10000 in ... */
static void C_ccall f_10169(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(56,c,2)))){
C_save_and_reclaim((void *)f_10169,c,av);}
a=C_alloc(56);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|55,a[1]=(C_word)f_10173,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[2],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],a[53]=((C_word*)t0)[53],a[54]=((C_word*)t0)[54],a[55]=((C_word*)t0)[55],tmp=(C_word)a,a+=56,tmp);
/* synrules.scm:126: r */
t4=((C_word*)t0)[54];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[224];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k10171 in k10167 in k10163 in k10158 in k10151 in k10146 in k10142 in k10138 in k10134 in k10130 in k10126 in k10120 in k10115 in k10111 in k10096 in k11310 in k11302 in a11299 in k10012 in k10009 in k10006 in k10003 in ... */
static void C_ccall f_10173(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(56,c,2)))){
C_save_and_reclaim((void *)f_10173,c,av);}
a=C_alloc(56);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|55,a[1]=(C_word)f_10177,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[2],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],a[53]=((C_word*)t0)[53],a[54]=((C_word*)t0)[54],a[55]=((C_word*)t0)[55],tmp=(C_word)a,a+=56,tmp);
/* synrules.scm:127: r */
t4=((C_word*)t0)[54];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[223];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k10175 in k10171 in k10167 in k10163 in k10158 in k10151 in k10146 in k10142 in k10138 in k10134 in k10130 in k10126 in k10120 in k10115 in k10111 in k10096 in k11310 in k11302 in a11299 in k10012 in k10009 in k10006 in ... */
static void C_ccall f_10177(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(55,c,2)))){
C_save_and_reclaim((void *)f_10177,c,av);}
a=C_alloc(55);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|54,a[1]=(C_word)f_10182,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[2],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],a[53]=((C_word*)t0)[53],a[54]=((C_word*)t0)[54],tmp=(C_word)a,a+=55,tmp);
/* synrules.scm:129: r */
t4=((C_word*)t0)[54];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[55];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k10180 in k10175 in k10171 in k10167 in k10163 in k10158 in k10151 in k10146 in k10142 in k10138 in k10134 in k10130 in k10126 in k10120 in k10115 in k10111 in k10096 in k11310 in k11302 in a11299 in k10012 in k10009 in ... */
static void C_ccall f_10182(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(55,c,2)))){
C_save_and_reclaim((void *)f_10182,c,av);}
a=C_alloc(55);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|54,a[1]=(C_word)f_10186,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],a[38]=((C_word*)t0)[38],a[39]=((C_word*)t0)[39],a[40]=((C_word*)t0)[40],a[41]=((C_word*)t0)[41],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],a[53]=((C_word*)t0)[53],a[54]=((C_word*)t0)[54],tmp=(C_word)a,a+=55,tmp);
/* synrules.scm:130: r */
t4=((C_word*)t0)[54];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[192];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k10184 in k10180 in k10175 in k10171 in k10167 in k10163 in k10158 in k10151 in k10146 in k10142 in k10138 in k10134 in k10130 in k10126 in k10120 in k10115 in k10111 in k10096 in k11310 in k11302 in a11299 in k10012 in ... */
static void C_ccall f_10186(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(55,c,2)))){
C_save_and_reclaim((void *)f_10186,c,av);}
a=C_alloc(55);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|54,a[1]=(C_word)f_10190,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],a[33]=((C_word*)t0)[34],a[34]=((C_word*)t0)[35],a[35]=((C_word*)t0)[36],a[36]=((C_word*)t0)[37],a[37]=((C_word*)t0)[38],a[38]=((C_word*)t0)[39],a[39]=((C_word*)t0)[40],a[40]=((C_word*)t0)[41],a[41]=((C_word*)t0)[42],a[42]=((C_word*)t0)[2],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],a[53]=((C_word*)t0)[53],a[54]=((C_word*)t0)[54],tmp=(C_word)a,a+=55,tmp);
/* synrules.scm:131: r */
t4=((C_word*)t0)[54];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[191];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k10188 in k10184 in k10180 in k10175 in k10171 in k10167 in k10163 in k10158 in k10151 in k10146 in k10142 in k10138 in k10134 in k10130 in k10126 in k10120 in k10115 in k10111 in k10096 in k11310 in k11302 in a11299 in ... */
static void C_ccall f_10190(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(54,c,2)))){
C_save_and_reclaim((void *)f_10190,c,av);}
a=C_alloc(54);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|53,a[1]=(C_word)f_10194,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],a[33]=((C_word*)t0)[34],a[34]=((C_word*)t0)[35],a[35]=((C_word*)t0)[36],a[36]=((C_word*)t0)[37],a[37]=((C_word*)t0)[38],a[38]=((C_word*)t0)[39],a[39]=((C_word*)t0)[40],a[40]=((C_word*)t0)[41],a[41]=((C_word*)t0)[2],a[42]=((C_word*)t0)[42],a[43]=((C_word*)t0)[43],a[44]=((C_word*)t0)[44],a[45]=((C_word*)t0)[45],a[46]=((C_word*)t0)[46],a[47]=((C_word*)t0)[47],a[48]=((C_word*)t0)[48],a[49]=((C_word*)t0)[49],a[50]=((C_word*)t0)[50],a[51]=((C_word*)t0)[51],a[52]=((C_word*)t0)[52],a[53]=((C_word*)t0)[53],tmp=(C_word)a,a+=54,tmp);
/* synrules.scm:133: r */
t4=((C_word*)t0)[54];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[47];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k10192 in k10188 in k10184 in k10180 in k10175 in k10171 in k10167 in k10163 in k10158 in k10151 in k10146 in k10142 in k10138 in k10134 in k10130 in k10126 in k10120 in k10115 in k10111 in k10096 in k11310 in k11302 in ... */
static void C_ccall f_10194(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(122,c,6)))){
C_save_and_reclaim((void *)f_10194,c,av);}
a=C_alloc(122);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10196,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word)li106),tmp=(C_word)a,a+=5,tmp));
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_10202,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[13],a[9]=((C_word*)t0)[14],a[10]=((C_word*)t0)[15],a[11]=((C_word*)t0)[2],a[12]=((C_word*)t0)[16],a[13]=((C_word)li108),tmp=(C_word)a,a+=14,tmp));
t5=C_mutate(((C_word *)((C_word*)t0)[15])+1,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10296,a[2]=((C_word*)t0)[17],a[3]=((C_word*)t0)[18],a[4]=((C_word*)t0)[19],a[5]=((C_word*)t0)[20],a[6]=((C_word*)t0)[21],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[22],a[9]=((C_word)li110),tmp=(C_word)a,a+=10,tmp));
t6=C_mutate(((C_word *)((C_word*)t0)[22])+1,(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_10362,a[2]=((C_word*)t0)[23],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[24],a[6]=((C_word*)t0)[25],a[7]=((C_word*)t0)[26],a[8]=((C_word*)t0)[17],a[9]=((C_word*)t0)[13],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[22],a[12]=((C_word*)t0)[27],a[13]=((C_word*)t0)[28],a[14]=((C_word*)t0)[29],a[15]=((C_word*)t0)[30],a[16]=((C_word*)t0)[31],a[17]=((C_word*)t0)[32],a[18]=((C_word)li111),tmp=(C_word)a,a+=19,tmp));
t7=C_mutate(((C_word *)((C_word*)t0)[24])+1,(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_10543,a[2]=((C_word*)t0)[33],a[3]=((C_word*)t0)[34],a[4]=((C_word*)t0)[35],a[5]=((C_word*)t0)[36],a[6]=((C_word*)t0)[37],a[7]=((C_word*)t0)[38],a[8]=((C_word*)t0)[17],a[9]=((C_word*)t0)[16],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[39],a[13]=((C_word*)t0)[10],a[14]=((C_word*)t0)[40],a[15]=((C_word*)t0)[22],a[16]=((C_word*)t0)[27],a[17]=((C_word)li112),tmp=(C_word)a,a+=18,tmp));
t8=C_mutate(((C_word *)((C_word*)t0)[21])+1,(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_10670,a[2]=((C_word*)t0)[23],a[3]=((C_word*)t0)[41],a[4]=((C_word*)t0)[42],a[5]=((C_word*)t0)[21],a[6]=((C_word*)t0)[25],a[7]=((C_word*)t0)[14],a[8]=((C_word*)t0)[43],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[27],a[11]=((C_word*)t0)[29],a[12]=((C_word*)t0)[32],a[13]=((C_word)li114),tmp=(C_word)a,a+=14,tmp));
t9=C_mutate(((C_word *)((C_word*)t0)[19])+1,(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_10810,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[19],a[4]=((C_word*)t0)[44],a[5]=((C_word*)t0)[14],a[6]=((C_word*)t0)[45],a[7]=((C_word*)t0)[46],a[8]=((C_word*)t0)[47],a[9]=((C_word*)t0)[48],a[10]=((C_word*)t0)[49],a[11]=((C_word*)t0)[50],a[12]=((C_word*)t0)[51],a[13]=((C_word)li116),tmp=(C_word)a,a+=14,tmp));
t10=C_mutate(((C_word *)((C_word*)t0)[20])+1,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11002,a[2]=((C_word*)t0)[23],a[3]=((C_word*)t0)[20],a[4]=((C_word*)t0)[32],a[5]=((C_word)li117),tmp=(C_word)a,a+=6,tmp));
t11=C_mutate(((C_word *)((C_word*)t0)[46])+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11079,a[2]=((C_word*)t0)[46],a[3]=((C_word*)t0)[51],a[4]=((C_word)li118),tmp=(C_word)a,a+=5,tmp));
t12=C_mutate(((C_word *)((C_word*)t0)[32])+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11168,a[2]=((C_word*)t0)[51],a[3]=((C_word)li119),tmp=(C_word)a,a+=4,tmp));
t13=C_mutate(((C_word *)((C_word*)t0)[51])+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11196,a[2]=((C_word*)t0)[3],a[3]=((C_word)li120),tmp=(C_word)a,a+=4,tmp));
t14=C_mutate(((C_word *)((C_word*)t0)[47])+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11220,a[2]=((C_word*)t0)[47],a[3]=((C_word*)t0)[51],a[4]=((C_word)li121),tmp=(C_word)a,a+=5,tmp));
t15=C_mutate(((C_word *)((C_word*)t0)[44])+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11240,a[2]=((C_word*)t0)[3],a[3]=((C_word)li123),tmp=(C_word)a,a+=4,tmp));
/* synrules.scm:345: make-transformer */
t16=((C_word*)((C_word*)t0)[6])[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t16;
av2[1]=((C_word*)t0)[52];
av2[2]=((C_word*)t0)[53];
((C_proc)(void*)(*((C_word*)t16+1)))(3,av2);}}

/* f_10196 in k10192 in k10188 in k10184 in k10180 in k10175 in k10171 in k10167 in k10163 in k10158 in k10151 in k10146 in k10142 in k10138 in k10134 in k10130 in k10126 in k10120 in k10115 in k10111 in k10096 in k11310 in ... */
static void C_ccall f_10196(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10196,c,av);}
/* synrules.scm:136: c */
t3=((C_word*)t0)[2];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}

/* f_10202 in k10192 in k10188 in k10184 in k10180 in k10175 in k10171 in k10167 in k10163 in k10158 in k10151 in k10146 in k10142 in k10138 in k10134 in k10130 in k10126 in k10120 in k10115 in k10111 in k10096 in k11310 in ... */
static void C_ccall f_10202(C_word c,C_word *av){
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
C_word t18;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(52,c,3)))){
C_save_and_reclaim((void *)f_10202,c,av);}
a=C_alloc(52);
t3=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[4])[1]);
t4=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[2])[1]);
t5=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[6])[1],t4);
t6=C_a_i_list(&a,1,t5);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10230,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=t6,a[5]=((C_word*)t0)[9],a[6]=t3,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t8=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t9=t8;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=((C_word*)t10)[1];
t12=((C_word*)((C_word*)t0)[10])[1];
t13=C_i_check_list_2(t2,lf[17]);
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10240,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[12],a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10254,a[2]=t10,a[3]=t16,a[4]=t12,a[5]=t11,a[6]=((C_word)li107),tmp=(C_word)a,a+=7,tmp));
t18=((C_word*)t16)[1];
f_10254(t18,t14,t2);}

/* k10228 */
static void C_ccall f_10230(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,1)))){
C_save_and_reclaim((void *)f_10230,c,av);}
a=C_alloc(27);
t2=C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[2])[1],t1);
t3=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[4],t2);
t4=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[5])[1],((C_word*)t0)[6],t3);
t5=((C_word*)t0)[7];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,2,lf[185],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k10238 */
static void C_ccall f_10240(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_10240,c,av);}
a=C_alloc(15);
t2=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]);
t3=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[4])[1],t2);
t4=C_a_i_list(&a,1,t3);
/* synrules.scm:139: ##sys#append */
t5=*((C_word*)lf[71]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[5];
av2[2]=t1;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* map-loop3157 */
static void C_fcall f_10254(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10254,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10279,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* synrules.scm:142: g3163 */
t4=((C_word*)t0)[4];{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10277 in map-loop3157 */
static void C_ccall f_10279(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10279,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_10254(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* f_10296 in k10192 in k10188 in k10184 in k10180 in k10175 in k10171 in k10167 in k10163 in k10158 in k10151 in k10146 in k10142 in k10138 in k10134 in k10130 in k10126 in k10120 in k10115 in k10111 in k10096 in k11310 in ... */
static void C_ccall f_10296(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_10296,c,av);}
a=C_alloc(11);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_10303,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
if(C_truep(C_i_pairp(t2))){
t4=C_i_pairp(C_u_i_cdr(t2));
t5=t3;
f_10303(t5,(C_truep(t4)?C_i_nullp(C_i_cddr(t2)):C_SCHEME_FALSE));}
else{
t4=t3;
f_10303(t4,C_SCHEME_FALSE);}}

/* k10301 */
static void C_fcall f_10303(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,4)))){
C_save_and_reclaim_args((void *)trf_10303,2,t0,t1);}
a=C_alloc(11);
if(C_truep(t1)){
t2=C_i_cdar(((C_word*)t0)[2]);
t3=C_i_cadr(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_10339,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t3,a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* synrules.scm:151: process-match */
t5=((C_word*)((C_word*)t0)[10])[1];{
C_word av2[5];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)((C_word*)t0)[9])[1];
av2[3]=t2;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t5))(5,av2);}}
else{
/* synrules.scm:158: ##sys#syntax-error-hook */
t2=*((C_word*)lf[43]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=((C_word*)t0)[5];
av2[2]=lf[215];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k10322 in k10337 in k10301 */
static void C_ccall f_10324(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_10324,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10328,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10332,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* synrules.scm:157: meta-variables */
t4=((C_word*)((C_word*)t0)[7])[1];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[8];
av2[3]=C_fix(0);
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t4))(6,av2);}}

/* k10326 in k10322 in k10337 in k10301 */
static void C_ccall f_10328(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,1)))){
C_save_and_reclaim((void *)f_10328,c,av);}
a=C_alloc(15);
t2=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3],t1);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,2,((C_word*)t0)[5],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k10330 in k10322 in k10337 in k10301 */
static void C_ccall f_10332(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10332,c,av);}
/* synrules.scm:155: process-template */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(0);
av2[4]=t1;
((C_proc)C_fast_retrieve_proc(t2))(5,av2);}}

/* a10333 in k10337 in k10301 */
static void C_ccall f_10334(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10334,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k10337 in k10301 */
static void C_ccall f_10339(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,5)))){
C_save_and_reclaim((void *)f_10339,c,av);}
a=C_alloc(15);
t2=C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[2])[1],t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10324,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10334,a[2]=((C_word)li109),tmp=(C_word)a,a+=3,tmp);
/* synrules.scm:152: process-pattern */
t5=((C_word*)((C_word*)t0)[9])[1];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=((C_word*)t0)[8];
av2[3]=((C_word*)((C_word*)t0)[10])[1];
av2[4]=t4;
av2[5]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t5))(6,av2);}}

/* f_10362 in k10192 in k10188 in k10184 in k10180 in k10175 in k10171 in k10167 in k10163 in k10158 in k10151 in k10146 in k10142 in k10138 in k10134 in k10130 in k10126 in k10120 in k10115 in k10111 in k10096 in k11310 in ... */
static void C_ccall f_10362(C_word c,C_word *av){
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
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_10362,c,av);}
a=C_alloc(24);
if(C_truep(C_i_symbolp(t3))){
if(C_truep(C_i_memq(t3,((C_word*)t0)[2]))){
t5=C_a_i_list(&a,2,lf[216],t3);
t6=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[3])[1],t5);
t7=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[4])[1],t2,t6);
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_a_i_list(&a,1,t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t5=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_10396,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
/* synrules.scm:167: segment-pattern? */
t6=((C_word*)((C_word*)t0)[17])[1];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
av2[3]=t4;
((C_proc)C_fast_retrieve_proc(t6))(4,av2);}}}

/* k10394 */
static void C_ccall f_10396(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(35,c,4)))){
C_save_and_reclaim((void *)f_10396,c,av);}
a=C_alloc(35);
if(C_truep(t1)){
/* synrules.scm:168: process-segment-match */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t2))(4,av2);}}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t2=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[6])[1],((C_word*)t0)[4]);
t3=C_a_i_list(&a,1,t2);
t4=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[7])[1],((C_word*)((C_word*)t0)[6])[1]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10432,a[2]=t4,a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=t3,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10436,a[2]=t5,a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t7=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[12])[1],((C_word*)((C_word*)t0)[6])[1]);
/* synrules.scm:172: process-match */
t8=((C_word*)((C_word*)t0)[11])[1];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t8;
av2[1]=t6;
av2[2]=t7;
av2[3]=C_u_i_car(((C_word*)t0)[5]);
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t8))(5,av2);}}
else{
if(C_truep(C_i_vectorp(((C_word*)t0)[5]))){
t2=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[6])[1],((C_word*)t0)[4]);
t3=C_a_i_list(&a,1,t2);
t4=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[13])[1],((C_word*)((C_word*)t0)[6])[1]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10489,a[2]=t4,a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=t3,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t6=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[14])[1],((C_word*)((C_word*)t0)[6])[1]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10497,a[2]=((C_word*)t0)[11],a[3]=t5,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* synrules.scm:178: scheme#vector->list */
t8=*((C_word*)lf[181]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t2=C_i_nullp(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10510,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[15],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[16],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t2)){
t4=t3;
f_10510(t4,t2);}
else{
t4=C_booleanp(((C_word*)t0)[5]);
t5=t3;
f_10510(t5,(C_truep(t4)?t4:C_charp(((C_word*)t0)[5])));}}}}}

/* k10430 in k10394 */
static void C_ccall f_10432(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_10432,c,av);}
a=C_alloc(18);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[3])[1],t2);
t4=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[5],t3);
t5=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,1,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k10434 in k10394 */
static void C_ccall f_10436(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_10436,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10440,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[4])[1]);
/* synrules.scm:173: process-match */
t4=((C_word*)((C_word*)t0)[5])[1];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
av2[3]=C_u_i_cdr(((C_word*)t0)[6]);
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}

/* k10438 in k10434 in k10394 */
static void C_ccall f_10440(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10440,c,av);}
/* synrules.scm:170: ##sys#append */
t2=*((C_word*)lf[71]+1);{
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

/* k10487 in k10394 */
static void C_ccall f_10489(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_10489,c,av);}
a=C_alloc(18);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[3])[1],t2);
t4=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[5],t3);
t5=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,1,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k10495 in k10394 */
static void C_ccall f_10497(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10497,c,av);}
/* synrules.scm:177: process-match */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t1;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t2))(5,av2);}}

/* k10508 in k10394 */
static void C_fcall f_10510(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,0,1)))){
C_save_and_reclaim_args((void *)trf_10510,2,t0,t1);}
a=C_alloc(18);
if(C_truep(t1)){
t2=C_a_i_list(&a,2,lf[217],((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];{
C_word av2[2];
av2[0]=t4;
av2[1]=C_a_i_list(&a,1,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=C_a_i_list(&a,2,lf[217],((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[6])[1],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];{
C_word av2[2];
av2[0]=t4;
av2[1]=C_a_i_list(&a,1,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* f_10543 in k10192 in k10188 in k10184 in k10180 in k10175 in k10171 in k10167 in k10163 in k10158 in k10151 in k10146 in k10142 in k10138 in k10134 in k10130 in k10126 in k10120 in k10115 in k10111 in k10096 in k11310 in ... */
static void C_ccall f_10543(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(25,c,4)))){
C_save_and_reclaim((void *)f_10543,c,av);}
a=C_alloc(25);
t4=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_10547,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t3,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],a[14]=((C_word*)t0)[12],a[15]=t1,a[16]=((C_word*)t0)[13],a[17]=((C_word*)t0)[14],a[18]=((C_word*)t0)[15],tmp=(C_word)a,a+=19,tmp);
t5=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[16])[1],((C_word*)((C_word*)t0)[6])[1]);
/* synrules.scm:185: process-match */
t6=((C_word*)((C_word*)t0)[15])[1];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
av2[3]=C_i_car(t3);
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t6))(5,av2);}}

/* k10545 */
static void C_ccall f_10547(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(75,c,4)))){
C_save_and_reclaim((void *)f_10547,c,av);}
a=C_alloc(75);
t2=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]);
t3=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[3]);
t4=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[5])[1],t3);
t5=C_a_i_list(&a,1,t4);
t6=C_i_cddr(((C_word*)t0)[6]);
t7=C_i_length(t6);
t8=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[7])[1],((C_word*)((C_word*)t0)[5])[1],t7);
t9=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[8])[1],((C_word*)t0)[3]);
t10=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[5])[1]);
t11=C_a_i_list(&a,2,t9,t10);
t12=C_u_i_cdr(((C_word*)t0)[6]);
t13=C_i_length(C_u_i_cdr(t12));
t14=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[9])[1],((C_word*)((C_word*)t0)[5])[1],t13);
t15=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_10626,a[2]=t14,a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[13],a[7]=((C_word*)t0)[14],a[8]=t11,a[9]=t8,a[10]=t5,a[11]=t2,a[12]=((C_word*)t0)[15],a[13]=((C_word*)t0)[16],a[14]=((C_word*)t0)[8],a[15]=((C_word*)t0)[17],a[16]=((C_word*)t0)[5],a[17]=t1,tmp=(C_word)a,a+=18,tmp);
t16=C_u_i_cdr(((C_word*)t0)[6]);
/* synrules.scm:193: process-match */
t17=((C_word*)((C_word*)t0)[18])[1];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t17;
av2[1]=t15;
av2[2]=((C_word*)((C_word*)t0)[8])[1];
av2[3]=C_u_i_cdr(t16);
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t17))(5,av2);}}

/* k10600 in k10624 in k10545 */
static void C_ccall f_10602(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(60,c,1)))){
C_save_and_reclaim((void *)f_10602,c,av);}
a=C_alloc(60);
t2=C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[2])[1],t1);
t3=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[3])[1],t2);
t4=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[5],t3);
t5=C_a_i_list(&a,4,((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[7])[1],((C_word*)t0)[8],t4);
t6=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[9],t5);
t7=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[6])[1],((C_word*)t0)[10],t6);
t8=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[11],t7);
t9=((C_word*)t0)[12];{
C_word *av2=av;
av2[0]=t9;
av2[1]=C_a_i_list(&a,1,t8);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}

/* k10624 in k10545 */
static void C_ccall f_10626(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(43,c,3)))){
C_save_and_reclaim((void *)f_10626,c,av);}
a=C_alloc(43);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_10602,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
t4=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[13])[1],((C_word*)((C_word*)t0)[14])[1]);
t5=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[15])[1],((C_word*)((C_word*)t0)[16])[1],C_fix(-1));
t6=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[7])[1],t4,t5);
t7=C_a_i_list(&a,1,t6);
/* synrules.scm:186: ##sys#append */
t8=*((C_word*)lf[71]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t3;
av2[2]=((C_word*)t0)[17];
av2[3]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* f_10670 in k10192 in k10188 in k10184 in k10180 in k10175 in k10171 in k10167 in k10163 in k10158 in k10151 in k10146 in k10142 in k10138 in k10134 in k10130 in k10126 in k10120 in k10115 in k10111 in k10096 in k11310 in ... */
static void C_ccall f_10670(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word t7;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_10670,c,av);}
a=C_alloc(15);
if(C_truep(C_i_symbolp(t2))){
if(C_truep(C_i_memq(t2,((C_word*)t0)[2]))){
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10694,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* synrules.scm:205: mapit */
t7=t4;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t7))(3,av2);}}}
else{
t6=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_10700,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t4,a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],a[12]=((C_word*)t0)[9],a[13]=((C_word*)t0)[10],a[14]=((C_word*)t0)[11],tmp=(C_word)a,a+=15,tmp);
/* synrules.scm:206: segment-pattern? */
t7=((C_word*)((C_word*)t0)[12])[1];{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=t2;
av2[3]=t5;
((C_proc)C_fast_retrieve_proc(t7))(4,av2);}}}

/* k10692 */
static void C_ccall f_10694(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_10694,c,av);}
a=C_alloc(9);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list1(&a,1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k10698 */
static void C_ccall f_10700(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(26,c,5)))){
C_save_and_reclaim((void *)f_10700,c,av);}
a=C_alloc(26);
if(C_truep(t1)){
t2=C_i_cddr(((C_word*)t0)[2]);
t3=C_i_length(t2);
t4=C_eqp(t3,C_fix(0));
t5=(C_truep(t4)?((C_word*)t0)[3]:C_a_i_list(&a,3,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[3],t3));
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10713,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=t3,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t7=C_u_i_car(((C_word*)t0)[2]);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10729,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[8],a[4]=t5,a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],a[7]=((C_word)li113),tmp=(C_word)a,a+=8,tmp);
/* synrules.scm:212: process-pattern */
t9=((C_word*)((C_word*)t0)[7])[1];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t9;
av2[1]=t6;
av2[2]=t7;
av2[3]=((C_word*)((C_word*)t0)[9])[1];
av2[4]=t8;
av2[5]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t9))(6,av2);}}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10775,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[12],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t3=C_u_i_car(((C_word*)t0)[2]);
t4=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[13])[1],((C_word*)t0)[3]);
/* synrules.scm:223: process-pattern */
t5=((C_word*)((C_word*)t0)[7])[1];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=t3;
av2[3]=t4;
av2[4]=((C_word*)t0)[8];
av2[5]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t5))(6,av2);}}
else{
if(C_truep(C_i_vectorp(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10804,a[2]=((C_word*)t0)[14],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* synrules.scm:226: scheme#vector->list */
t3=*((C_word*)lf[181]+1);{
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
t2=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}}}

/* k10711 in k10698 */
static void C_ccall f_10713(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,5)))){
C_save_and_reclaim((void *)f_10713,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10717,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_i_cddr(((C_word*)t0)[3]);
t4=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[5],((C_word*)t0)[6]);
/* synrules.scm:220: process-pattern */
t5=((C_word*)((C_word*)t0)[7])[1];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=t3;
av2[3]=t4;
av2[4]=((C_word*)t0)[8];
av2[5]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t5))(6,av2);}}

/* k10715 in k10711 in k10698 */
static void C_ccall f_10717(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10717,c,av);}
/* synrules.scm:211: scheme#append */
t2=*((C_word*)lf[16]+1);{
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

/* a10728 in k10698 */
static void C_ccall f_10729(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,2)))){
C_save_and_reclaim((void *)f_10729,c,av);}
a=C_alloc(21);
t3=C_eqp(((C_word*)((C_word*)t0)[2])[1],t2);
if(C_truep(t3)){
/* synrules.scm:215: mapit */
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[4];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}
else{
t4=C_a_i_list(&a,1,((C_word*)((C_word*)t0)[2])[1]);
t5=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[5])[1],t4,t2);
t6=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[6])[1],t5,((C_word*)t0)[4]);
/* synrules.scm:215: mapit */
t7=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t7;
av2[1]=t1;
av2[2]=t6;
((C_proc)C_fast_retrieve_proc(t7))(3,av2);}}}

/* k10773 in k10698 */
static void C_ccall f_10775(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_10775,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10779,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_u_i_cdr(((C_word*)t0)[3]);
t4=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[5]);
/* synrules.scm:224: process-pattern */
t5=((C_word*)((C_word*)t0)[6])[1];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=t3;
av2[3]=t4;
av2[4]=((C_word*)t0)[7];
av2[5]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t5))(6,av2);}}

/* k10777 in k10773 in k10698 */
static void C_ccall f_10779(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10779,c,av);}
/* synrules.scm:223: scheme#append */
t2=*((C_word*)lf[16]+1);{
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

/* k10802 in k10698 */
static void C_ccall f_10804(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_10804,c,av);}
a=C_alloc(6);
t2=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]);
/* synrules.scm:226: process-pattern */
t3=((C_word*)((C_word*)t0)[4])[1];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[5];
av2[2]=t1;
av2[3]=t2;
av2[4]=((C_word*)t0)[6];
av2[5]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t3))(6,av2);}}

/* f_10810 in k10192 in k10188 in k10184 in k10180 in k10175 in k10171 in k10167 in k10163 in k10158 in k10151 in k10146 in k10142 in k10138 in k10134 in k10130 in k10126 in k10120 in k10115 in k10111 in k10096 in k11310 in ... */
static void C_ccall f_10810(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_10810,c,av);}
a=C_alloc(15);
if(C_truep(C_i_symbolp(t2))){
t5=C_i_assq(t2,t4);
if(C_truep(t5)){
t6=C_i_cdr(t5);
if(C_truep(C_fixnum_less_or_equal_p(t6,t3))){
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
/* synrules.scm:238: ##sys#syntax-error-hook */
t7=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t1;
av2[2]=lf[218];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}
else{
t6=C_a_i_list(&a,2,lf[216],t2);
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[2])[1],t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}
else{
t5=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_10849,a[2]=t3,a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=t4,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],a[12]=((C_word*)t0)[9],a[13]=((C_word*)t0)[10],a[14]=((C_word*)t0)[11],tmp=(C_word)a,a+=15,tmp);
/* synrules.scm:241: segment-template? */
t6=((C_word*)((C_word*)t0)[12])[1];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}}

/* k10847 */
static void C_ccall f_10849(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_10849,c,av);}
a=C_alloc(11);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_10852,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* synrules.scm:242: segment-depth */
t3=((C_word*)((C_word*)t0)[11])[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10972,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[12],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* synrules.scm:267: process-template */
t3=((C_word*)((C_word*)t0)[5])[1];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_u_i_car(((C_word*)t0)[4]);
av2[3]=((C_word*)t0)[2];
av2[4]=((C_word*)t0)[6];
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}
else{
if(C_truep(C_i_vectorp(((C_word*)t0)[4]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10993,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[13],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10997,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* synrules.scm:271: scheme#vector->list */
t4=*((C_word*)lf[181]+1);{
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
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[14])[1],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}}}

/* k10850 in k10847 */
static void C_ccall f_10852(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,5)))){
C_save_and_reclaim((void *)f_10852,c,av);}
a=C_alloc(12);
t2=C_fixnum_plus(((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_10858,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=t2,tmp=(C_word)a,a+=12,tmp);
/* synrules.scm:245: free-meta-variables */
t4=((C_word*)((C_word*)t0)[10])[1];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_car(((C_word*)t0)[4]);
av2[3]=t2;
av2[4]=((C_word*)t0)[6];
av2[5]=C_SCHEME_END_OF_LIST;
((C_proc)C_fast_retrieve_proc(t4))(6,av2);}}

/* k10856 in k10850 in k10847 */
static void C_ccall f_10858(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_10858,c,av);}
a=C_alloc(12);
if(C_truep(C_i_nullp(t1))){
/* synrules.scm:247: ##sys#syntax-error-hook */
t2=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[219];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_10870,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* synrules.scm:248: process-template */
t3=((C_word*)((C_word*)t0)[4])[1];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_u_i_car(((C_word*)t0)[3]);
av2[3]=((C_word*)t0)[11];
av2[4]=((C_word*)t0)[6];
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}}

/* k10868 in k10856 in k10850 in k10847 */
static void C_ccall f_10870(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_10870,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10873,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10920,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[10]))){
if(C_truep(C_i_nullp(C_u_i_cdr(((C_word*)t0)[10])))){
t4=C_i_symbolp(t1);
t5=t3;
f_10920(t5,(C_truep(t4)?C_eqp(t1,C_u_i_car(((C_word*)t0)[10])):C_SCHEME_FALSE));}
else{
t4=t3;
f_10920(t4,C_SCHEME_FALSE);}}
else{
t4=t3;
f_10920(t4,C_SCHEME_FALSE);}}

/* k10871 in k10868 in k10856 in k10850 in k10847 */
static void C_fcall f_10873(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,4)))){
C_save_and_reclaim_args((void *)trf_10873,2,t0,t1);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10876,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10899,a[2]=t4,a[3]=((C_word)li115),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_10899(t6,t2,((C_word*)t0)[8],t1);}

/* k10874 in k10871 in k10868 in k10856 in k10850 in k10847 */
static void C_ccall f_10876(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_10876,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10897,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* synrules.scm:262: segment-tail */
t3=((C_word*)((C_word*)t0)[6])[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k10887 in k10895 in k10874 in k10871 in k10868 in k10856 in k10850 in k10847 */
static void C_ccall f_10889(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_10889,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[71],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k10891 in k10895 in k10874 in k10871 in k10868 in k10856 in k10850 in k10847 */
static void C_ccall f_10893(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10893,c,av);}
/* synrules.scm:264: process-template */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t2))(5,av2);}}

/* k10895 in k10874 in k10871 in k10868 in k10856 in k10850 in k10847 */
static void C_ccall f_10897(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_10897,c,av);}
a=C_alloc(10);
if(C_truep(C_i_nullp(t1))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10889,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10893,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* synrules.scm:264: segment-tail */
t4=((C_word*)((C_word*)t0)[7])[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[8];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}}

/* doloop3291 in k10871 in k10868 in k10856 in k10850 in k10847 */
static void C_fcall f_10899(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_10899,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_eqp(t2,C_fix(1));
if(C_truep(t4)){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_fixnum_difference(t2,C_fix(1));
t6=C_a_i_list(&a,3,lf[220],lf[71],t3);
t8=t1;
t9=t5;
t10=t6;
t1=t8;
t2=t9;
t3=t10;
goto loop;}}

/* k10918 in k10868 in k10856 in k10850 in k10847 */
static void C_fcall f_10920(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,1)))){
C_save_and_reclaim_args((void *)trf_10920,2,t0,t1);}
a=C_alloc(15);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_10873(t2,((C_word*)t0)[3]);}
else{
t2=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[5],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[5]);
t4=((C_word*)t0)[2];
f_10873(t4,C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[6])[1],t3));}}

/* k10970 in k10847 */
static void C_ccall f_10972(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_10972,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10976,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* synrules.scm:268: process-template */
t3=((C_word*)((C_word*)t0)[4])[1];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_u_i_cdr(((C_word*)t0)[5]);
av2[3]=((C_word*)t0)[6];
av2[4]=((C_word*)t0)[7];
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k10974 in k10970 in k10847 */
static void C_ccall f_10976(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_10976,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k10991 in k10847 */
static void C_ccall f_10993(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_10993,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,2,((C_word*)((C_word*)t0)[3])[1],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k10995 in k10847 */
static void C_ccall f_10997(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10997,c,av);}
/* synrules.scm:271: process-template */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t2))(5,av2);}}

/* f_11002 in k10192 in k10188 in k10184 in k10180 in k10175 in k10171 in k10167 in k10163 in k10158 in k10151 in k10146 in k10142 in k10138 in k10134 in k10130 in k10126 in k10120 in k10115 in k10111 in k10096 in k11310 in ... */
static void C_ccall f_11002(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word t7;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_11002,c,av);}
a=C_alloc(7);
if(C_truep(C_i_symbolp(t2))){
if(C_truep(C_i_memq(t2,((C_word*)t0)[2]))){
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_a_i_cons(&a,2,t2,t3);
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_a_i_cons(&a,2,t6,t4);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}
else{
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11028,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* synrules.scm:282: segment-pattern? */
t7=((C_word*)((C_word*)t0)[4])[1];{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=t2;
av2[3]=t5;
((C_proc)C_fast_retrieve_proc(t7))(4,av2);}}}

/* k11026 */
static void C_ccall f_11028(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_11028,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11043,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* synrules.scm:284: meta-variables */
t5=((C_word*)((C_word*)t0)[4])[1];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_i_cddr(((C_word*)t0)[2]);
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[6];
av2[5]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t5))(6,av2);}}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t2=C_u_i_car(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11062,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* synrules.scm:287: meta-variables */
t4=((C_word*)((C_word*)t0)[4])[1];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_u_i_cdr(((C_word*)t0)[2]);
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[6];
av2[5]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t4))(6,av2);}}
else{
if(C_truep(C_i_vectorp(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11077,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* synrules.scm:289: scheme#vector->list */
t3=*((C_word*)lf[181]+1);{
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
t2=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}}}

/* k11041 in k11026 */
static void C_ccall f_11043(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_11043,c,av);}
/* synrules.scm:283: meta-variables */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
av2[4]=t1;
av2[5]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t2))(6,av2);}}

/* k11060 in k11026 */
static void C_ccall f_11062(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_11062,c,av);}
/* synrules.scm:286: meta-variables */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
av2[4]=t1;
av2[5]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t2))(6,av2);}}

/* k11075 in k11026 */
static void C_ccall f_11077(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_11077,c,av);}
/* synrules.scm:289: meta-variables */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
av2[5]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t2))(6,av2);}}

/* f_11079 in k10192 in k10188 in k10184 in k10180 in k10175 in k10171 in k10167 in k10163 in k10158 in k10151 in k10146 in k10142 in k10138 in k10134 in k10130 in k10126 in k10120 in k10115 in k10111 in k10096 in k11310 in ... */
static void C_ccall f_11079(C_word c,C_word *av){
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
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_11079,c,av);}
a=C_alloc(8);
if(C_truep(C_i_symbolp(t2))){
t6=C_i_memq(t2,t5);
if(C_truep(C_i_not(t6))){
t7=C_i_assq(t2,t4);
if(C_truep(t7)){
t8=C_i_cdr(t7);
t9=C_fixnum_greater_or_equal_p(t8,t3);
t10=t1;{
C_word *av2=av;
av2[0]=t10;
av2[1]=(C_truep(t9)?C_a_i_cons(&a,2,t2,t5):t5);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}
else{
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}
else{
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11121,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t3,a[6]=t4,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
/* synrules.scm:301: segment-template? */
t7=((C_word*)((C_word*)t0)[3])[1];{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t7))(3,av2);}}}

/* k11119 */
static void C_ccall f_11121(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_11121,c,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11132,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* synrules.scm:304: free-meta-variables */
t4=((C_word*)((C_word*)t0)[3])[1];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_cddr(((C_word*)t0)[2]);
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[6];
av2[5]=((C_word*)t0)[7];
((C_proc)C_fast_retrieve_proc(t4))(6,av2);}}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t2=C_u_i_car(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11151,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* synrules.scm:309: free-meta-variables */
t4=((C_word*)((C_word*)t0)[3])[1];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_u_i_cdr(((C_word*)t0)[2]);
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[6];
av2[5]=((C_word*)t0)[7];
((C_proc)C_fast_retrieve_proc(t4))(6,av2);}}
else{
if(C_truep(C_i_vectorp(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11166,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* synrules.scm:312: scheme#vector->list */
t3=*((C_word*)lf[181]+1);{
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
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}}}

/* k11130 in k11119 */
static void C_ccall f_11132(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_11132,c,av);}
/* synrules.scm:302: free-meta-variables */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[6];
av2[5]=t1;
((C_proc)C_fast_retrieve_proc(t2))(6,av2);}}

/* k11149 in k11119 */
static void C_ccall f_11151(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_11151,c,av);}
/* synrules.scm:307: free-meta-variables */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[6];
av2[5]=t1;
((C_proc)C_fast_retrieve_proc(t2))(6,av2);}}

/* k11164 in k11119 */
static void C_ccall f_11166(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_11166,c,av);}
/* synrules.scm:312: free-meta-variables */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
av2[5]=((C_word*)t0)[6];
((C_proc)C_fast_retrieve_proc(t2))(6,av2);}}

/* f_11168 in k10192 in k10188 in k10184 in k10180 in k10175 in k10171 in k10167 in k10163 in k10158 in k10151 in k10146 in k10142 in k10138 in k10134 in k10130 in k10126 in k10120 in k10115 in k10111 in k10096 in k11310 in ... */
static void C_ccall f_11168(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11168,c,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11175,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* synrules.scm:316: segment-template? */
t5=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k11173 */
static void C_ccall f_11175(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11175,c,av);}
if(C_truep(t1)){
if(C_truep(((C_word*)t0)[2])){
/* synrules.scm:319: ##sys#syntax-error-hook */
t2=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[221];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=C_i_listp(((C_word*)t0)[4]);
if(C_truep(C_i_not(t2))){
/* synrules.scm:321: ##sys#syntax-error-hook */
t3=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[222];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* f_11196 in k10192 in k10188 in k10184 in k10180 in k10175 in k10171 in k10167 in k10163 in k10158 in k10151 in k10146 in k10142 in k10138 in k10134 in k10130 in k10126 in k10120 in k10115 in k10111 in k10096 in k11310 in ... */
static void C_ccall f_11196(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11196,c,av);}
if(C_truep(C_i_pairp(t2))){
if(C_truep(C_i_pairp(C_u_i_cdr(t2)))){
/* synrules.scm:327: ellipsis? */
t3=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
av2[2]=C_i_cadr(t2);
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* f_11220 in k10192 in k10188 in k10184 in k10180 in k10175 in k10171 in k10167 in k10163 in k10158 in k10151 in k10146 in k10142 in k10138 in k10134 in k10130 in k10126 in k10120 in k10115 in k10111 in k10096 in k11310 in ... */
static void C_ccall f_11220(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11220,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11227,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* synrules.scm:332: segment-template? */
t4=((C_word*)((C_word*)t0)[3])[1];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k11225 */
static void C_ccall f_11227(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11227,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11234,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* synrules.scm:333: segment-depth */
t3=((C_word*)((C_word*)t0)[3])[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_cdr(((C_word*)t0)[4]);
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k11232 in k11225 */
static void C_ccall f_11234(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11234,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fixnum_plus(C_fix(1),t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_11240 in k10192 in k10188 in k10184 in k10180 in k10175 in k10171 in k10167 in k10163 in k10158 in k10151 in k10146 in k10142 in k10138 in k10134 in k10130 in k10126 in k10120 in k10115 in k10111 in k10096 in k11310 in ... */
static void C_ccall f_11240(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_11240,c,av);}
a=C_alloc(7);
t3=C_i_cdr(t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11250,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word)li122),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_11250(t7,t1,t3);}

/* loop */
static void C_fcall f_11250(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_11250,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11257,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t2))){
/* synrules.scm:341: ellipsis? */
t4=((C_word*)((C_word*)t0)[3])[1];{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_u_i_car(t2);
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k11255 in loop */
static void C_ccall f_11257(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11257,c,av);}
if(C_truep(t1)){
/* synrules.scm:342: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_11250(t2,((C_word*)t0)[3],C_i_cdr(((C_word*)t0)[4]));}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k11276 in k10015 in k10012 in k10009 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in ... */
static void C_ccall f_11278(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_11278,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[19]+1 /* (set! ##sys#scheme-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11282,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11294,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1585: ##sys#macro-environment */
t5=*((C_word*)lf[18]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k11280 in k11276 in k10015 in k10012 in k10009 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in ... */
static void C_ccall f_11282(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_11282,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[90]+1 /* (set! ##sys#default-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11286,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11290,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1587: ##sys#macro-environment */
t5=*((C_word*)lf[18]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k11284 in k11280 in k11276 in k10015 in k10012 in k10009 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in ... */
static void C_ccall f_11286(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11286,c,av);}
t2=C_mutate((C_word*)lf[193]+1 /* (set! ##sys#meta-macro-environment ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k11288 in k11280 in k11276 in k10015 in k10012 in k10009 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in ... */
static void C_ccall f_11290(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11290,c,av);}
/* expand.scm:1587: chicken.base#make-parameter */
t2=*((C_word*)lf[194]+1);{
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

/* k11292 in k11276 in k10015 in k10012 in k10009 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in ... */
static void C_ccall f_11294(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11294,c,av);}
/* expand.scm:1585: chicken.internal#fixup-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[195]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[195]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k11296 in k10012 in k10009 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in ... */
static void C_ccall f_11298(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11298,c,av);}
/* synrules.scm:43: ##sys#extend-macro-environment */
t2=*((C_word*)lf[30]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[197];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11299 in k10012 in k10009 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in ... */
static void C_ccall f_11300(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_11300,c,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11304,a[2]=t2,a[3]=t4,a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* synrules.scm:48: ##sys#check-syntax */
t6=*((C_word*)lf[56]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[197];
av2[3]=t2;
av2[4]=lf[237];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11302 in a11299 in k10012 in k10009 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in ... */
static void C_ccall f_11304(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,4)))){
C_save_and_reclaim((void *)f_11304,c,av);}
a=C_alloc(20);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_u_i_cdr(((C_word*)t0)[2]);
t6=C_u_i_cdr(t5);
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=lf[198];
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11312,a[2]=t9,a[3]=t7,a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_symbolp(((C_word*)t4)[1]))){
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11321,a[2]=t9,a[3]=t4,a[4]=t7,a[5]=t10,tmp=(C_word)a,a+=6,tmp);
/* synrules.scm:53: ##sys#check-syntax */
t12=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t12;
av2[1]=t11;
av2[2]=lf[197];
av2[3]=((C_word*)t0)[2];
av2[4]=lf[236];
((C_proc)(void*)(*((C_word*)t12+1)))(5,av2);}}
else{
t11=t10;
f_11312(t11,C_SCHEME_UNDEFINED);}}

/* k11310 in k11302 in a11299 in k10012 in k10009 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in ... */
static void C_fcall f_11312(C_word t0,C_word t1){
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
C_word t59;
C_word t60;
C_word t61;
C_word t62;
C_word t63;
C_word t64;
C_word t65;
C_word t66;
C_word t67;
C_word t68;
C_word t69;
C_word t70;
C_word t71;
C_word t72;
C_word t73;
C_word t74;
C_word t75;
C_word t76;
C_word t77;
C_word t78;
C_word t79;
C_word t80;
C_word t81;
C_word t82;
C_word t83;
C_word t84;
C_word t85;
C_word t86;
C_word t87;
C_word t88;
C_word t89;
C_word t90;
C_word t91;
C_word t92;
C_word t93;
C_word t94;
C_word t95;
C_word t96;
C_word t97;
C_word t98;
C_word t99;
C_word t100;
C_word t101;
C_word t102;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(152,0,2)))){
C_save_and_reclaim_args((void *)trf_11312,2,t0,t1);}
a=C_alloc(152);
t2=((C_word*)((C_word*)t0)[2])[1];
t3=((C_word*)((C_word*)t0)[3])[1];
t4=((C_word*)((C_word*)t0)[4])[1];
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_SCHEME_UNDEFINED;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_SCHEME_UNDEFINED;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=C_SCHEME_UNDEFINED;
t24=(*a=C_VECTOR_TYPE|1,a[1]=t23,tmp=(C_word)a,a+=2,tmp);
t25=C_SCHEME_UNDEFINED;
t26=(*a=C_VECTOR_TYPE|1,a[1]=t25,tmp=(C_word)a,a+=2,tmp);
t27=C_SCHEME_UNDEFINED;
t28=(*a=C_VECTOR_TYPE|1,a[1]=t27,tmp=(C_word)a,a+=2,tmp);
t29=C_SCHEME_UNDEFINED;
t30=(*a=C_VECTOR_TYPE|1,a[1]=t29,tmp=(C_word)a,a+=2,tmp);
t31=C_SCHEME_UNDEFINED;
t32=(*a=C_VECTOR_TYPE|1,a[1]=t31,tmp=(C_word)a,a+=2,tmp);
t33=C_SCHEME_UNDEFINED;
t34=(*a=C_VECTOR_TYPE|1,a[1]=t33,tmp=(C_word)a,a+=2,tmp);
t35=C_SCHEME_UNDEFINED;
t36=(*a=C_VECTOR_TYPE|1,a[1]=t35,tmp=(C_word)a,a+=2,tmp);
t37=C_SCHEME_UNDEFINED;
t38=(*a=C_VECTOR_TYPE|1,a[1]=t37,tmp=(C_word)a,a+=2,tmp);
t39=C_SCHEME_UNDEFINED;
t40=(*a=C_VECTOR_TYPE|1,a[1]=t39,tmp=(C_word)a,a+=2,tmp);
t41=C_SCHEME_UNDEFINED;
t42=(*a=C_VECTOR_TYPE|1,a[1]=t41,tmp=(C_word)a,a+=2,tmp);
t43=C_SCHEME_UNDEFINED;
t44=(*a=C_VECTOR_TYPE|1,a[1]=t43,tmp=(C_word)a,a+=2,tmp);
t45=C_SCHEME_UNDEFINED;
t46=(*a=C_VECTOR_TYPE|1,a[1]=t45,tmp=(C_word)a,a+=2,tmp);
t47=C_SCHEME_UNDEFINED;
t48=(*a=C_VECTOR_TYPE|1,a[1]=t47,tmp=(C_word)a,a+=2,tmp);
t49=C_SCHEME_UNDEFINED;
t50=(*a=C_VECTOR_TYPE|1,a[1]=t49,tmp=(C_word)a,a+=2,tmp);
t51=C_SCHEME_UNDEFINED;
t52=(*a=C_VECTOR_TYPE|1,a[1]=t51,tmp=(C_word)a,a+=2,tmp);
t53=C_SCHEME_UNDEFINED;
t54=(*a=C_VECTOR_TYPE|1,a[1]=t53,tmp=(C_word)a,a+=2,tmp);
t55=C_SCHEME_UNDEFINED;
t56=(*a=C_VECTOR_TYPE|1,a[1]=t55,tmp=(C_word)a,a+=2,tmp);
t57=C_SCHEME_UNDEFINED;
t58=(*a=C_VECTOR_TYPE|1,a[1]=t57,tmp=(C_word)a,a+=2,tmp);
t59=C_SCHEME_UNDEFINED;
t60=(*a=C_VECTOR_TYPE|1,a[1]=t59,tmp=(C_word)a,a+=2,tmp);
t61=C_SCHEME_UNDEFINED;
t62=(*a=C_VECTOR_TYPE|1,a[1]=t61,tmp=(C_word)a,a+=2,tmp);
t63=C_SCHEME_UNDEFINED;
t64=(*a=C_VECTOR_TYPE|1,a[1]=t63,tmp=(C_word)a,a+=2,tmp);
t65=C_SCHEME_UNDEFINED;
t66=(*a=C_VECTOR_TYPE|1,a[1]=t65,tmp=(C_word)a,a+=2,tmp);
t67=C_SCHEME_UNDEFINED;
t68=(*a=C_VECTOR_TYPE|1,a[1]=t67,tmp=(C_word)a,a+=2,tmp);
t69=C_SCHEME_UNDEFINED;
t70=(*a=C_VECTOR_TYPE|1,a[1]=t69,tmp=(C_word)a,a+=2,tmp);
t71=C_SCHEME_UNDEFINED;
t72=(*a=C_VECTOR_TYPE|1,a[1]=t71,tmp=(C_word)a,a+=2,tmp);
t73=C_SCHEME_UNDEFINED;
t74=(*a=C_VECTOR_TYPE|1,a[1]=t73,tmp=(C_word)a,a+=2,tmp);
t75=C_SCHEME_UNDEFINED;
t76=(*a=C_VECTOR_TYPE|1,a[1]=t75,tmp=(C_word)a,a+=2,tmp);
t77=C_SCHEME_UNDEFINED;
t78=(*a=C_VECTOR_TYPE|1,a[1]=t77,tmp=(C_word)a,a+=2,tmp);
t79=C_SCHEME_UNDEFINED;
t80=(*a=C_VECTOR_TYPE|1,a[1]=t79,tmp=(C_word)a,a+=2,tmp);
t81=C_SCHEME_UNDEFINED;
t82=(*a=C_VECTOR_TYPE|1,a[1]=t81,tmp=(C_word)a,a+=2,tmp);
t83=C_SCHEME_UNDEFINED;
t84=(*a=C_VECTOR_TYPE|1,a[1]=t83,tmp=(C_word)a,a+=2,tmp);
t85=C_SCHEME_UNDEFINED;
t86=(*a=C_VECTOR_TYPE|1,a[1]=t85,tmp=(C_word)a,a+=2,tmp);
t87=C_SCHEME_UNDEFINED;
t88=(*a=C_VECTOR_TYPE|1,a[1]=t87,tmp=(C_word)a,a+=2,tmp);
t89=C_SCHEME_UNDEFINED;
t90=(*a=C_VECTOR_TYPE|1,a[1]=t89,tmp=(C_word)a,a+=2,tmp);
t91=C_SCHEME_UNDEFINED;
t92=(*a=C_VECTOR_TYPE|1,a[1]=t91,tmp=(C_word)a,a+=2,tmp);
t93=C_SCHEME_UNDEFINED;
t94=(*a=C_VECTOR_TYPE|1,a[1]=t93,tmp=(C_word)a,a+=2,tmp);
t95=C_SCHEME_UNDEFINED;
t96=(*a=C_VECTOR_TYPE|1,a[1]=t95,tmp=(C_word)a,a+=2,tmp);
t97=C_SCHEME_UNDEFINED;
t98=(*a=C_VECTOR_TYPE|1,a[1]=t97,tmp=(C_word)a,a+=2,tmp);
t99=C_SCHEME_UNDEFINED;
t100=(*a=C_VECTOR_TYPE|1,a[1]=t99,tmp=(C_word)a,a+=2,tmp);
t101=(*a=C_CLOSURE_TYPE|55,a[1]=(C_word)f_10098,a[2]=t6,a[3]=t8,a[4]=t10,a[5]=t12,a[6]=t14,a[7]=t16,a[8]=t18,a[9]=t20,a[10]=t22,a[11]=t24,a[12]=t26,a[13]=t28,a[14]=t30,a[15]=t32,a[16]=t34,a[17]=t36,a[18]=t38,a[19]=t40,a[20]=t42,a[21]=t44,a[22]=t46,a[23]=t48,a[24]=t50,a[25]=t52,a[26]=t54,a[27]=t56,a[28]=t58,a[29]=t60,a[30]=t62,a[31]=t64,a[32]=t66,a[33]=t68,a[34]=t70,a[35]=t72,a[36]=t74,a[37]=t76,a[38]=((C_word*)t0)[5],a[39]=t78,a[40]=t80,a[41]=t88,a[42]=t90,a[43]=t86,a[44]=t82,a[45]=t4,a[46]=t84,a[47]=t94,a[48]=t100,a[49]=t92,a[50]=t98,a[51]=t96,a[52]=((C_word*)t0)[6],a[53]=t3,a[54]=((C_word*)t0)[7],a[55]=t2,tmp=(C_word)a,a+=56,tmp);
/* synrules.scm:93: r */
t102=((C_word*)t0)[7];{
C_word av2[3];
av2[0]=t102;
av2[1]=t101;
av2[2]=lf[235];
((C_proc)C_fast_retrieve_proc(t102))(3,av2);}}

/* k11319 in k11302 in a11299 in k10012 in k10009 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in ... */
static void C_ccall f_11321(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11321,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_i_car(((C_word*)((C_word*)t0)[4])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t6=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t7=((C_word*)t0)[5];
f_11312(t7,t6);}

/* k11332 in k10009 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in ... */
static void C_ccall f_11334(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11334,c,av);}
/* expand.scm:1565: ##sys#extend-macro-environment */
t2=*((C_word*)lf[30]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[238];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11335 in k10009 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in ... */
static void C_ccall f_11336(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_11336,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11340,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1570: ##sys#check-syntax */
t6=*((C_word*)lf[56]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[238];
av2[3]=t2;
av2[4]=lf[242];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11338 in a11335 in k10009 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in ... */
static void C_ccall f_11340(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_11340,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11347,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1571: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[241];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k11345 in k11338 in a11335 in k10009 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in ... */
static void C_ccall f_11347(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(30,c,1)))){
C_save_and_reclaim((void *)f_11347,c,av);}
a=C_alloc(30);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,lf[73],C_SCHEME_END_OF_LIST,t2);
t4=C_a_i_list(&a,3,lf[92],t3,lf[239]);
t5=C_a_i_list(&a,2,lf[240],t4);
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list(&a,2,t1,t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k11365 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in ... */
static void C_ccall f_11367(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11367,c,av);}
/* expand.scm:1513: ##sys#extend-macro-environment */
t2=*((C_word*)lf[30]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[243];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11368 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in ... */
static void C_ccall f_11369(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_11369,c,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11373,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1518: r */
t6=t3;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[243];
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}

/* k11371 in a11368 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in ... */
static void C_ccall f_11373(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_11373,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11376,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1519: r */
t3=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[244];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k11374 in k11371 in a11368 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in ... */
static void C_ccall f_11376(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_11376,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11379,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1520: r */
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[246];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k11377 in k11374 in k11371 in a11368 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in ... */
static void C_ccall f_11379(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(28,c,4)))){
C_save_and_reclaim((void *)f_11379,c,av);}
a=C_alloc(28);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11381,a[2]=t7,a[3]=t5,a[4]=((C_word)li126),tmp=(C_word)a,a+=5,tmp));
t9=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11391,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=((C_word)li127),tmp=(C_word)a,a+=8,tmp));
t10=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11554,a[2]=t7,a[3]=((C_word)li130),tmp=(C_word)a,a+=4,tmp));
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11649,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1562: ##sys#check-syntax */
t12=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t12;
av2[1]=t11;
av2[2]=lf[243];
av2[3]=((C_word*)t0)[6];
av2[4]=lf[256];
((C_proc)(void*)(*((C_word*)t12+1)))(5,av2);}}

/* walk in k11377 in k11374 in k11371 in a11368 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in ... */
static void C_fcall f_11381(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_11381,4,t0,t1,t2,t3);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11389,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1521: walk1 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_11391(t5,t4,t2,t3);}

/* k11387 in walk in k11377 in k11374 in k11371 in a11368 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in ... */
static void C_ccall f_11389(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11389,c,av);}
/* expand.scm:1521: simplify */
t2=((C_word*)((C_word*)t0)[2])[1];
f_11554(t2,((C_word*)t0)[3],t1);}

/* walk1 in k11377 in k11374 in k11371 in a11368 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in ... */
static void C_fcall f_11391(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_11391,4,t0,t1,t2,t3);}
a=C_alloc(12);
if(C_truep(C_i_vectorp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11405,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11409,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1524: scheme#vector->list */
t6=*((C_word*)lf[181]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t4=C_i_pairp(t2);
if(C_truep(C_i_not(t4))){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_a_i_list(&a,2,lf[72],t2);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_i_car(t2);
t6=C_u_i_cdr(t2);
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_11428,a[2]=t3,a[3]=t1,a[4]=t6,a[5]=t2,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[4],a[9]=t5,a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[6],tmp=(C_word)a,a+=12,tmp);
/* expand.scm:1529: c */
t8=((C_word*)t0)[6];{
C_word av2[4];
av2[0]=t8;
av2[1]=t7;
av2[2]=((C_word*)t0)[3];
av2[3]=t5;
((C_proc)C_fast_retrieve_proc(t8))(4,av2);}}}}

/* k11403 in walk1 in k11377 in k11374 in k11371 in a11368 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in ... */
static void C_ccall f_11405(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_11405,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,2,lf[204],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k11407 in walk1 in k11377 in k11374 in k11371 in a11368 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in ... */
static void C_ccall f_11409(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11409,c,av);}
/* expand.scm:1524: walk */
t2=((C_word*)((C_word*)t0)[2])[1];
f_11381(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k11426 in walk1 in k11377 in k11374 in k11371 in a11368 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in ... */
static void C_ccall f_11428(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_11428,c,av);}
a=C_alloc(10);
if(C_truep(t1)){
t2=C_eqp(((C_word*)t0)[2],C_fix(0));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11437,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1531: ##sys#check-syntax */
t4=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[244];
av2[3]=((C_word*)t0)[5];
av2[4]=lf[245];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t3=C_a_i_list(&a,2,lf[72],((C_word*)t0)[6]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11451,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1534: walk */
t5=((C_word*)((C_word*)t0)[7])[1];
f_11381(t5,t4,((C_word*)t0)[4],C_fixnum_difference(((C_word*)t0)[2],C_fix(1)));}}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11461,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],tmp=(C_word)a,a+=10,tmp);
/* expand.scm:1535: c */
t3=((C_word*)t0)[11];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[8];
av2[3]=((C_word*)t0)[9];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}}

/* k11435 in k11426 in walk1 in k11377 in k11374 in k11371 in a11368 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in ... */
static void C_ccall f_11437(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11437,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_car(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k11449 in k11426 in walk1 in k11377 in k11374 in k11371 in a11368 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in ... */
static void C_ccall f_11451(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_11451,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list3(&a,3,lf[208],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k11459 in k11426 in walk1 in k11377 in k11374 in k11371 in a11368 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in ... */
static void C_ccall f_11461(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_11461,c,av);}
a=C_alloc(10);
if(C_truep(t1)){
t2=C_a_i_list(&a,2,lf[72],((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11472,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1537: walk */
t4=((C_word*)((C_word*)t0)[4])[1];
f_11381(t4,t3,((C_word*)t0)[5],C_fixnum_plus(((C_word*)t0)[6],C_fix(1)));}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11482,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[7]))){
/* expand.scm:1538: c */
t3=((C_word*)t0)[9];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[8];
av2[3]=C_u_i_car(((C_word*)t0)[7]);
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_11482(2,av2);}}}}

/* k11470 in k11459 in k11426 in walk1 in k11377 in k11374 in k11371 in a11368 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in ... */
static void C_ccall f_11472(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_11472,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list3(&a,3,lf[208],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k11480 in k11459 in k11426 in walk1 in k11377 in k11374 in k11371 in a11368 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in ... */
static void C_ccall f_11482(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_11482,c,av);}
a=C_alloc(13);
if(C_truep(t1)){
t2=C_eqp(((C_word*)t0)[2],C_fix(0));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11491,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1540: ##sys#check-syntax */
t4=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[246];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[247];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t3=C_a_i_list(&a,2,lf[72],((C_word*)t0)[7]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11521,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1545: walk */
t5=((C_word*)((C_word*)t0)[5])[1];
f_11381(t5,t4,C_i_cdr(((C_word*)t0)[3]),C_fixnum_difference(((C_word*)t0)[2],C_fix(1)));}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11536,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1548: walk */
t3=((C_word*)((C_word*)t0)[5])[1];
f_11381(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k11489 in k11480 in k11459 in k11426 in walk1 in k11377 in k11374 in k11371 in a11368 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in ... */
static void C_ccall f_11491(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_11491,c,av);}
a=C_alloc(4);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11502,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1541: walk */
t4=((C_word*)((C_word*)t0)[4])[1];
f_11381(t4,t3,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k11500 in k11489 in k11480 in k11459 in k11426 in walk1 in k11377 in k11374 in k11371 in a11368 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in ... */
static void C_ccall f_11502(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_11502,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[71],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k11511 in k11519 in k11480 in k11459 in k11426 in walk1 in k11377 in k11374 in k11371 in a11368 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in ... */
static void C_ccall f_11513(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_11513,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[208],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k11519 in k11480 in k11459 in k11426 in walk1 in k11377 in k11374 in k11371 in a11368 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in ... */
static void C_ccall f_11521(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_11521,c,av);}
a=C_alloc(13);
t2=C_a_i_list(&a,3,lf[208],((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11513,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1546: walk */
t4=((C_word*)((C_word*)t0)[4])[1];
f_11381(t4,t3,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k11534 in k11480 in k11459 in k11426 in walk1 in k11377 in k11374 in k11371 in a11368 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in ... */
static void C_ccall f_11536(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_11536,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11540,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1548: walk */
t3=((C_word*)((C_word*)t0)[3])[1];
f_11381(t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k11538 in k11534 in k11480 in k11459 in k11426 in walk1 in k11377 in k11374 in k11371 in a11368 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in ... */
static void C_ccall f_11540(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_11540,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[208],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* simplify in k11377 in k11374 in k11371 in a11368 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in ... */
static void C_fcall f_11554(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_11554,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11558,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1550: chicken.syntax#match-expression */
t4=*((C_word*)lf[119]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[254];
av2[4]=lf[255];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k11556 in simplify in k11377 in k11374 in k11371 in a11368 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in ... */
static void C_ccall f_11558(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_11558,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11562,a[2]=((C_word*)t0)[2],a[3]=((C_word)li128),tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1550: g3021 */
t3=t2;
f_11562(t3,((C_word*)t0)[3],t1);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11584,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1552: chicken.syntax#match-expression */
t3=*((C_word*)lf[119]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[252];
av2[4]=lf[253];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* g3021 in k11556 in simplify in k11377 in k11374 in k11371 in a11368 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in ... */
static void C_fcall f_11562(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_11562,3,t0,t1,t2);}
a=C_alloc(6);
t3=C_i_assq(lf[248],t2);
t4=C_i_cdr(t3);
t5=C_a_i_list(&a,2,lf[239],t4);
/* expand.scm:1551: simplify */
t6=((C_word*)((C_word*)t0)[2])[1];
f_11554(t6,t1,t5);}

/* k11582 in k11556 in simplify in k11377 in k11374 in k11371 in a11368 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in ... */
static void C_ccall f_11584(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_11584,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11588,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li129),tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1550: g3028 */
t3=t2;
f_11588(t3,((C_word*)t0)[4],t1);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11631,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1559: chicken.syntax#match-expression */
t3=*((C_word*)lf[119]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[250];
av2[4]=lf[251];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* g3028 in k11582 in k11556 in simplify in k11377 in k11374 in k11371 in a11368 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in ... */
static void C_fcall f_11588(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_11588,3,t0,t1,t2);}
a=C_alloc(6);
t3=C_i_assq(lf[249],t2);
t4=C_i_length(t3);
if(C_truep(C_fixnum_lessp(t4,C_fix(32)))){
t5=C_i_assq(lf[248],t2);
t6=C_i_cdr(t5);
t7=C_i_cdr(t3);
t8=C_a_i_cons(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,lf[239],t8);
/* expand.scm:1556: simplify */
t10=((C_word*)((C_word*)t0)[2])[1];
f_11554(t10,t1,t9);}
else{
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k11629 in k11582 in k11556 in simplify in k11377 in k11374 in k11371 in a11368 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in ... */
static void C_ccall f_11631(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11631,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?C_i_cdr(C_i_assq(lf[248],t1)):((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k11647 in k11377 in k11374 in k11371 in a11368 in k10006 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in ... */
static void C_ccall f_11649(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11649,c,av);}
/* expand.scm:1563: walk */
t2=((C_word*)((C_word*)t0)[2])[1];
f_11381(t2,((C_word*)t0)[3],C_i_cadr(((C_word*)t0)[4]),C_fix(0));}

/* k11658 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in ... */
static void C_ccall f_11660(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11660,c,av);}
/* expand.scm:1484: ##sys#extend-macro-environment */
t2=*((C_word*)lf[30]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[257];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11661 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in ... */
static void C_ccall f_11662(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_11662,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11666,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1489: ##sys#check-syntax */
t6=*((C_word*)lf[56]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[257];
av2[3]=t2;
av2[4]=lf[262];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11664 in a11661 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in ... */
static void C_ccall f_11666(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_11666,c,av);}
a=C_alloc(6);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_caddr(((C_word*)t0)[2]);
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11678,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1493: r */
t8=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[261];
((C_proc)C_fast_retrieve_proc(t8))(3,av2);}}

/* k11676 in k11664 in a11661 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in ... */
static void C_ccall f_11678(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,3)))){
C_save_and_reclaim((void *)f_11678,c,av);}
a=C_alloc(20);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[17]);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11706,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11820,a[2]=t4,a[3]=t9,a[4]=t5,a[5]=((C_word)li133),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_11820(t11,t7,((C_word*)t0)[2]);}

/* k11704 in k11676 in k11664 in a11661 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in ... */
static void C_ccall f_11706(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,2)))){
C_save_and_reclaim((void *)f_11706,c,av);}
a=C_alloc(17);
t2=C_i_car(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_eqp(t3,C_SCHEME_END_OF_LIST);
t5=(C_truep(t4)?lf[258]:C_a_i_cons(&a,2,lf[105],t3));
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11727,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t7=C_eqp(((C_word*)t0)[6],C_SCHEME_END_OF_LIST);
if(C_truep(t7)){
t8=t6;
f_11727(t8,lf[260]);}
else{
t8=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[6]);
t9=t6;
f_11727(t9,C_a_i_cons(&a,2,lf[52],t8));}}

/* k11725 in k11704 in k11676 in k11664 in a11661 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in ... */
static void C_fcall f_11727(C_word t0,C_word t1){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,0,3)))){
C_save_and_reclaim_args((void *)trf_11727,2,t0,t1);}
a=C_alloc(21);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11768,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11770,a[2]=t4,a[3]=t8,a[4]=t5,a[5]=((C_word)li132),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_11770(t10,t6,((C_word*)t0)[7]);}

/* k11766 in k11725 in k11704 in k11676 in k11664 in a11661 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in ... */
static void C_ccall f_11768(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(39,c,1)))){
C_save_and_reclaim((void *)f_11768,c,av);}
a=C_alloc(39);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[55],t2);
t4=C_a_i_list(&a,3,lf[105],((C_word*)t0)[3],t3);
t5=C_a_i_list(&a,4,lf[259],((C_word*)t0)[4],((C_word*)t0)[5],t4);
t6=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list(&a,4,lf[52],((C_word*)t0)[2],((C_word*)t0)[7],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* map-loop2933 in k11725 in k11704 in k11676 in k11664 in a11661 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in ... */
static void C_fcall f_11770(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_11770,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11780,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_i_cdr(t4);
t6=C_i_cdr(t5);
t7=C_eqp(t6,C_SCHEME_END_OF_LIST);
if(C_truep(t7)){
t8=C_u_i_car(t4);
t9=t3;
f_11780(t9,C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST));}
else{
t8=C_i_cdr(C_u_i_cdr(t4));
t9=C_i_car(t8);
t10=t3;
f_11780(t10,C_a_i_cons(&a,2,t9,C_SCHEME_END_OF_LIST));}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k11778 in map-loop2933 in k11725 in k11704 in k11676 in k11664 in a11661 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in ... */
static void C_fcall f_11780(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_11780,2,t0,t1);}
t2=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t1);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t4=((C_word*)((C_word*)t0)[3])[1];
f_11770(t4,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop2899 in k11676 in k11664 in a11661 in k10003 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in ... */
static void C_fcall f_11820(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_11820,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_i_car(C_u_i_cdr(t3));
t6=C_a_i_list2(&a,2,t4,t5);
t7=C_a_i_cons(&a,2,t6,C_SCHEME_END_OF_LIST);
t8=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t7);
t9=C_mutate(((C_word *)((C_word*)t0)[2])+1,t7);
t11=t1;
t12=C_slot(t2,C_fix(1));
t1=t11;
t2=t12;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k11854 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in ... */
static void C_ccall f_11856(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11856,c,av);}
/* expand.scm:1471: ##sys#extend-macro-environment */
t2=*((C_word*)lf[30]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[89];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11857 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in ... */
static void C_ccall f_11858(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_11858,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11862,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1476: ##sys#check-syntax */
t6=*((C_word*)lf[56]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[89];
av2[3]=t2;
av2[4]=lf[263];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11860 in a11857 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in ... */
static void C_ccall f_11862(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_11862,c,av);}
a=C_alloc(7);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11872,a[2]=t4,a[3]=t6,a[4]=((C_word)li135),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_11872(t8,((C_word*)t0)[3],t2);}

/* expand in k11860 in a11857 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in ... */
static void C_fcall f_11872(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_11872,3,t0,t1,t2);}
a=C_alloc(7);
t3=C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t3)){
t4=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_a_i_cons(&a,2,lf[52],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=C_a_i_list(&a,1,t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11897,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1482: expand */
t8=t6;
t9=C_u_i_cdr(t2);
t1=t8;
t2=t9;
goto loop;}}

/* k11895 in expand in k11860 in a11857 in k10000 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in ... */
static void C_ccall f_11897(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_11897,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[52],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k11905 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in ... */
static void C_ccall f_11907(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11907,c,av);}
/* expand.scm:1426: ##sys#extend-macro-environment */
t2=*((C_word*)lf[30]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[264];
av2[3]=lf[265];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11908 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in ... */
static void C_ccall f_11909(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_11909,c,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11913,a[2]=t2,a[3]=t1,a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1431: ##sys#check-syntax */
t6=*((C_word*)lf[56]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[264];
av2[3]=t2;
av2[4]=lf[275];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11911 in a11908 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in ... */
static void C_ccall f_11913(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_11913,c,av);}
a=C_alloc(7);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11921,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1434: r */
t6=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[274];
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}

/* k11919 in k11911 in a11908 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in ... */
static void C_ccall f_11921(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_11921,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11924,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:1435: r */
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[226];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k11922 in k11919 in k11911 in a11908 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in ... */
static void C_ccall f_11924(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_11924,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11927,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* expand.scm:1436: r */
t3=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[273];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k11925 in k11922 in k11919 in k11911 in a11908 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in ... */
static void C_ccall f_11927(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_11927,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11930,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* expand.scm:1437: r */
t3=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[272];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k11928 in k11925 in k11922 in k11919 in k11911 in a11908 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in ... */
static void C_ccall f_11930(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_11930,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11933,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* expand.scm:1438: r */
t3=((C_word*)t0)[9];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[232];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k11931 in k11928 in k11925 in k11922 in k11919 in k11911 in a11908 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in ... */
static void C_ccall f_11933(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(25,c,4)))){
C_save_and_reclaim((void *)f_11933,c,av);}
a=C_alloc(25);
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11944,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11946,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t1,a[9]=((C_word)li139),tmp=(C_word)a,a+=10,tmp));
t8=((C_word*)t6)[1];
f_11946(t8,t4,((C_word*)t0)[9],C_SCHEME_FALSE);}

/* k11942 in k11931 in k11928 in k11925 in k11922 in k11919 in k11911 in a11908 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in ... */
static void C_ccall f_11944(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_11944,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[57],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* expand in k11931 in k11928 in k11925 in k11922 in k11919 in k11911 in a11908 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in ... */
static void C_fcall f_11946(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,4)))){
C_save_and_reclaim_args((void *)trf_11946,4,t0,t1,t2,t3);}
a=C_alloc(13);
t4=C_i_pairp(t2);
if(C_truep(C_i_not(t4))){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=lf[266];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_i_car(t2);
t6=C_u_i_cdr(t2);
t7=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_11960,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t6,a[6]=t5,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[8],tmp=(C_word)a,a+=13,tmp);
/* expand.scm:1445: ##sys#check-syntax */
t8=*((C_word*)lf[56]+1);{
C_word av2[5];
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[264];
av2[3]=t5;
av2[4]=lf[271];
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}}

/* k11958 in expand in k11931 in k11928 in k11925 in k11922 in k11919 in k11911 in a11908 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in ... */
static void C_ccall f_11960(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_11960,c,av);}
a=C_alloc(11);
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11966,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11973,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1449: chicken.syntax#strip-syntax */
t4=*((C_word*)lf[12]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_11979,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
/* expand.scm:1452: c */
t3=((C_word*)t0)[8];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[12];
av2[3]=C_i_car(((C_word*)t0)[6]);
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}}

/* k11964 in k11958 in expand in k11931 in k11928 in k11925 in k11922 in k11919 in k11911 in a11908 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in ... */
static void C_ccall f_11966(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_11966,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11969,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1450: expand */
t3=((C_word*)((C_word*)t0)[3])[1];
f_11946(t3,t2,((C_word*)t0)[4],C_SCHEME_TRUE);}

/* k11967 in k11964 in k11958 in expand in k11931 in k11928 in k11925 in k11922 in k11919 in k11911 in a11908 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in ... */
static void C_ccall f_11969(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11969,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[267];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k11971 in k11958 in expand in k11931 in k11928 in k11925 in k11922 in k11919 in k11911 in a11908 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in ... */
static void C_ccall f_11973(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11973,c,av);}
/* expand.scm:1447: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[268]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[268]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[269];
av2[3]=t1;
tp(4,av2);}}

/* k11977 in k11958 in expand in k11931 in k11928 in k11925 in k11922 in k11919 in k11911 in a11908 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in ... */
static void C_ccall f_11979(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(29,c,3)))){
C_save_and_reclaim((void *)f_11979,c,av);}
a=C_alloc(29);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11982,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1453: expand */
t3=((C_word*)((C_word*)t0)[7])[1];
f_11946(t3,t2,((C_word*)t0)[8],C_SCHEME_TRUE);}
else{
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12078,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[4],a[4]=((C_word)li137),tmp=(C_word)a,a+=5,tmp);
t7=C_u_i_car(((C_word*)t0)[2]);
t8=C_i_check_list_2(t7,lf[17]);
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_12093,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12095,a[2]=t6,a[3]=t4,a[4]=t11,a[5]=t5,a[6]=((C_word)li138),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_12095(t13,t9,t7);}}

/* k11980 in k11977 in k11958 in expand in k11931 in k11928 in k11925 in k11922 in k11919 in k11911 in a11908 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in ... */
static void C_ccall f_11982(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_11982,c,av);}
a=C_alloc(5);
if(C_truep(C_i_nullp(C_u_i_cdr(((C_word*)t0)[2])))){
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,1,lf[270]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11997,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_length(((C_word*)t0)[2]);
t4=C_eqp(t3,C_fix(3));
if(C_truep(t4)){
/* expand.scm:1457: c */
t5=((C_word*)t0)[5];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=C_i_cadr(((C_word*)t0)[2]);
((C_proc)C_fast_retrieve_proc(t5))(4,av2);}}
else{
t5=t2;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
f_11997(2,av2);}}}}

/* k11995 in k11980 in k11977 in k11958 in expand in k11931 in k11928 in k11925 in k11922 in k11919 in k11911 in a11908 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in ... */
static void C_ccall f_11997(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_11997,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_caddr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,2,t2,((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[105],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k12036 in k12091 in k11977 in k11958 in expand in k11931 in k11928 in k11925 in k11922 in k11919 in k11911 in a11908 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in ... */
static void C_fcall f_12038(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_12038,2,t0,t1);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12042,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1469: expand */
t3=((C_word*)((C_word*)t0)[4])[1];
f_11946(t3,t2,((C_word*)t0)[5],C_SCHEME_FALSE);}

/* k12040 in k12036 in k12091 in k11977 in k11958 in expand in k11931 in k11928 in k11925 in k11922 in k11919 in k11911 in a11908 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in ... */
static void C_ccall f_12042(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_12042,c,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,4,lf[259],((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k12043 in k12091 in k11977 in k11958 in expand in k11931 in k11928 in k11925 in k11922 in k11919 in k11911 in a11908 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in ... */
static void C_ccall f_12045(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_12045,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_caddr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
f_12038(t3,C_a_i_list(&a,2,t2,((C_word*)t0)[4]));}
else{
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
f_12038(t3,C_a_i_cons(&a,2,lf[105],t2));}}

/* g2840 in k11977 in k11958 in expand in k11931 in k11928 in k11925 in k11922 in k11919 in k11911 in a11908 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in ... */
static C_word C_fcall f_12078(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_a_i_list(&a,2,lf[217],t1);
return(C_a_i_list(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],t2));}

/* k12091 in k11977 in k11958 in expand in k11931 in k11928 in k11925 in k11922 in k11919 in k11911 in a11908 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in ... */
static void C_ccall f_12093(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_12093,c,av);}
a=C_alloc(14);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12038,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12045,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t5=C_i_length(((C_word*)t0)[6]);
t6=C_eqp(t5,C_fix(3));
if(C_truep(t6)){
/* expand.scm:1466: c */
t7=((C_word*)t0)[8];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t4;
av2[2]=((C_word*)t0)[9];
av2[3]=C_i_cadr(((C_word*)t0)[6]);
((C_proc)C_fast_retrieve_proc(t7))(4,av2);}}
else{
t7=t4;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
f_12045(2,av2);}}}

/* map-loop2834 in k11977 in k11958 in expand in k11931 in k11928 in k11925 in k11922 in k11919 in k11911 in a11908 in k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in ... */
static void C_fcall f_12095(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,0,2)))){
C_save_and_reclaim_args((void *)trf_12095,3,t0,t1,t2);}
a=C_alloc(18);
if(C_truep(C_i_pairp(t2))){
t3=(
/* expand.scm:1462: g2840 */
  f_12078(C_a_i(&a,15),((C_word*)t0)[2],C_slot(t2,C_fix(0)))
);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=C_i_setslot(((C_word*)((C_word*)t0)[3])[1],C_fix(1),t4);
t6=C_mutate(((C_word *)((C_word*)t0)[3])+1,t4);
t8=t1;
t9=C_slot(t2,C_fix(1));
t1=t8;
t2=t9;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k12141 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in ... */
static void C_ccall f_12143(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12143,c,av);}
/* expand.scm:1361: ##sys#extend-macro-environment */
t2=*((C_word*)lf[30]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[233];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a12144 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in ... */
static void C_ccall f_12145(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_12145,c,av);}
a=C_alloc(6);
t5=C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12152,a[2]=t4,a[3]=t3,a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1367: r */
t7=t3;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[273];
((C_proc)C_fast_retrieve_proc(t7))(3,av2);}}

/* k12150 in a12144 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in ... */
static void C_ccall f_12152(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_12152,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12155,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1368: r */
t3=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[226];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k12153 in k12150 in a12144 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in ... */
static void C_ccall f_12155(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_12155,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12158,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:1369: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[232];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k12156 in k12153 in k12150 in a12144 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in ... */
static void C_ccall f_12158(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_12158,c,av);}
a=C_alloc(11);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12163,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word)li141),tmp=(C_word)a,a+=9,tmp));
t5=((C_word*)t3)[1];
f_12163(t5,((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* expand in k12156 in k12153 in k12150 in a12144 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in ... */
static void C_fcall f_12163(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,4)))){
C_save_and_reclaim_args((void *)trf_12163,4,t0,t1,t2,t3);}
a=C_alloc(12);
t4=C_i_pairp(t2);
if(C_truep(C_i_not(t4))){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=lf[276];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_i_car(t2);
t6=C_u_i_cdr(t2);
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_12177,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t6,a[6]=t5,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
/* expand.scm:1375: ##sys#check-syntax */
t8=*((C_word*)lf[56]+1);{
C_word av2[5];
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[233];
av2[3]=t5;
av2[4]=lf[284];
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}}

/* k12175 in expand in k12156 in k12153 in k12150 in a12144 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in ... */
static void C_ccall f_12177(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_12177,c,av);}
a=C_alloc(11);
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12183,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12190,a[2]=t2,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1378: chicken.base#open-output-string */
t4=*((C_word*)lf[144]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_12215,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
/* expand.scm:1382: c */
t3=((C_word*)t0)[7];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[8];
av2[3]=C_i_car(((C_word*)t0)[6]);
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}}

/* k12181 in k12175 in expand in k12156 in k12153 in k12150 in a12144 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in ... */
static void C_ccall f_12183(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_12183,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12186,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1380: expand */
t3=((C_word*)((C_word*)t0)[3])[1];
f_12163(t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k12184 in k12181 in k12175 in expand in k12156 in k12153 in k12150 in a12144 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in ... */
static void C_ccall f_12186(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_12186,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[277];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k12188 in k12175 in expand in k12156 in k12153 in k12150 in a12144 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in ... */
static void C_ccall f_12190(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_12190,c,av);}
a=C_alloc(6);
t2=C_i_check_port_2(t1,C_fix(2),C_SCHEME_TRUE,lf[278]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12196,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1378: ##sys#print */
t4=*((C_word*)lf[127]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[280];
av2[3]=C_SCHEME_FALSE;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k12194 in k12188 in k12175 in expand in k12156 in k12153 in k12150 in a12144 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in ... */
static void C_ccall f_12196(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_12196,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12199,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1378: ##sys#print */
t3=*((C_word*)lf[127]+1);{
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
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k12197 in k12194 in k12188 in k12175 in expand in k12156 in k12153 in k12150 in a12144 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in ... */
static void C_ccall f_12199(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_12199,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12202,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1378: ##sys#print */
t3=*((C_word*)lf[127]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[279];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k12200 in k12197 in k12194 in k12188 in k12175 in expand in k12156 in k12153 in k12150 in a12144 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in ... */
static void C_ccall f_12202(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_12202,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12205,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1378: chicken.base#get-output-string */
t3=*((C_word*)lf[128]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k12203 in k12200 in k12197 in k12194 in k12188 in k12175 in expand in k12156 in k12153 in k12150 in a12144 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in ... */
static void C_ccall f_12205(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_12205,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12209,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1379: chicken.syntax#strip-syntax */
t3=*((C_word*)lf[12]+1);{
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

/* k12207 in k12203 in k12200 in k12197 in k12194 in k12188 in k12175 in expand in k12156 in k12153 in k12150 in a12144 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in ... */
static void C_ccall f_12209(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_12209,c,av);}
/* expand.scm:1377: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[268]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[268]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* k12213 in k12175 in expand in k12156 in k12153 in k12150 in a12144 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in ... */
static void C_ccall f_12215(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,2)))){
C_save_and_reclaim((void *)f_12215,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_12218,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
if(C_truep(t1)){
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
f_12218(2,av2);}}
else{
t3=C_eqp(C_SCHEME_TRUE,C_u_i_car(((C_word*)t0)[2]));
if(C_truep(t3)){
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
f_12218(2,av2);}}
else{
t4=C_i_numberp(C_u_i_car(((C_word*)t0)[2]));
if(C_truep(t4)){
t5=t2;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
f_12218(2,av2);}}
else{
t5=C_charp(C_u_i_car(((C_word*)t0)[2]));
if(C_truep(t5)){
t6=t2;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
f_12218(2,av2);}}
else{
t6=C_i_stringp(C_u_i_car(((C_word*)t0)[2]));
if(C_truep(t6)){
t7=t2;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
f_12218(2,av2);}}
else{
t7=C_eofp(C_u_i_car(((C_word*)t0)[2]));
if(C_truep(t7)){
t8=t2;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
f_12218(2,av2);}}
else{
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12464,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[10],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1389: chicken.blob#blob? */
t9=*((C_word*)lf[283]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=C_u_i_car(((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}}}}}}}

/* k12216 in k12213 in k12175 in expand in k12156 in k12153 in k12150 in a12144 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in ... */
static void C_ccall f_12218(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_12218,c,av);}
a=C_alloc(12);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12221,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12281,a[2]=((C_word*)t0)[7],a[3]=t2,a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1394: chicken.syntax#strip-syntax */
t4=*((C_word*)lf[12]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_u_i_car(((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
if(C_truep(C_i_nullp(C_u_i_cdr(((C_word*)t0)[2])))){
t2=C_u_i_car(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12298,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[9],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1404: expand */
t4=((C_word*)((C_word*)t0)[7])[1];
f_12163(t4,t3,((C_word*)t0)[8],C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12304,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t3=C_i_length(((C_word*)t0)[2]);
t4=C_eqp(t3,C_fix(3));
if(C_truep(t4)){
/* expand.scm:1406: c */
t5=((C_word*)t0)[4];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=C_i_cadr(((C_word*)t0)[2]);
((C_proc)C_fast_retrieve_proc(t5))(4,av2);}}
else{
t5=t2;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
f_12304(2,av2);}}}}}

/* k12219 in k12216 in k12213 in k12175 in expand in k12156 in k12153 in k12150 in a12144 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in ... */
static void C_ccall f_12221(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_12221,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12227,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_length(((C_word*)t0)[2]);
t4=C_eqp(t3,C_fix(3));
if(C_truep(t4)){
/* expand.scm:1396: c */
t5=((C_word*)t0)[4];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=C_i_cadr(((C_word*)t0)[2]);
((C_proc)C_fast_retrieve_proc(t5))(4,av2);}}
else{
t5=t2;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
f_12227(2,av2);}}}

/* k12225 in k12219 in k12216 in k12213 in k12175 in expand in k12156 in k12153 in k12150 in a12144 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in ... */
static void C_ccall f_12227(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_12227,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_caddr(((C_word*)t0)[2]);
t3=C_u_i_car(((C_word*)t0)[2]);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=C_i_cdr(((C_word*)t0)[2]);
if(C_truep(C_i_pairp(t2))){
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,lf[105],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12253,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1400: c */
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=C_u_i_car(((C_word*)t0)[2]);
((C_proc)C_fast_retrieve_proc(t4))(4,av2);}}}}

/* k12251 in k12225 in k12219 in k12216 in k12213 in k12175 in expand in k12156 in k12153 in k12150 in a12144 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in ... */
static void C_ccall f_12253(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_12253,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?C_a_i_list(&a,1,lf[270]):C_u_i_car(((C_word*)t0)[3]));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k12279 in k12216 in k12213 in k12175 in expand in k12156 in k12153 in k12150 in a12144 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in ... */
static void C_ccall f_12281(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_12281,c,av);}
/* expand.scm:1394: expand */
t2=((C_word*)((C_word*)t0)[2])[1];
f_12163(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k12296 in k12216 in k12213 in k12175 in expand in k12156 in k12153 in k12150 in a12144 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in ... */
static void C_ccall f_12298(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_12298,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k12302 in k12216 in k12213 in k12175 in expand in k12156 in k12153 in k12150 in a12144 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in ... */
static void C_ccall f_12304(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_12304,c,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12307,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1407: r */
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[274];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12344,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_eqp(C_u_i_length(((C_word*)t0)[2]),C_fix(4));
if(C_truep(t3)){
/* expand.scm:1413: c */
t4=((C_word*)t0)[7];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=((C_word*)t0)[8];
av2[3]=C_i_caddr(((C_word*)t0)[2]);
((C_proc)C_fast_retrieve_proc(t4))(4,av2);}}
else{
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_12344(2,av2);}}}}

/* k12305 in k12302 in k12216 in k12213 in k12175 in expand in k12156 in k12153 in k12150 in a12144 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in ... */
static void C_ccall f_12307(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_12307,c,av);}
a=C_alloc(21);
t2=C_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,t1,t2);
t4=C_a_i_list(&a,1,t3);
t5=C_i_caddr(((C_word*)t0)[2]);
t6=C_a_i_list(&a,2,t5,t1);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12326,a[2]=t1,a[3]=t6,a[4]=((C_word*)t0)[3],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1411: expand */
t8=((C_word*)((C_word*)t0)[4])[1];
f_12163(t8,t7,((C_word*)t0)[5],C_SCHEME_FALSE);}

/* k12324 in k12305 in k12302 in k12216 in k12213 in k12175 in expand in k12156 in k12153 in k12150 in a12144 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in ... */
static void C_ccall f_12326(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,1)))){
C_save_and_reclaim((void *)f_12326,c,av);}
a=C_alloc(21);
t2=C_a_i_list(&a,4,lf[259],((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[52],((C_word*)t0)[5],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k12342 in k12302 in k12216 in k12213 in k12175 in expand in k12156 in k12153 in k12150 in a12144 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in ... */
static void C_ccall f_12344(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_12344,c,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12347,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1414: r */
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[274];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}
else{
t2=C_i_car(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,lf[105],t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12401,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1424: expand */
t6=((C_word*)((C_word*)t0)[4])[1];
f_12163(t6,t5,((C_word*)t0)[5],C_SCHEME_FALSE);}}

/* k12345 in k12342 in k12302 in k12216 in k12213 in k12175 in expand in k12156 in k12153 in k12150 in a12144 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in ... */
static void C_ccall f_12347(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(34,c,3)))){
C_save_and_reclaim((void *)f_12347,c,av);}
a=C_alloc(34);
t2=C_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,lf[73],C_SCHEME_END_OF_LIST,t2);
t4=C_i_cadr(((C_word*)t0)[2]);
t5=C_a_i_list(&a,3,lf[220],t4,t1);
t6=C_i_cadddr(((C_word*)t0)[2]);
t7=C_a_i_list(&a,3,lf[220],t6,t1);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12374,a[2]=t5,a[3]=t7,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1421: expand */
t9=((C_word*)((C_word*)t0)[4])[1];
f_12163(t9,t8,((C_word*)t0)[5],C_SCHEME_FALSE);}

/* k12372 in k12345 in k12342 in k12302 in k12216 in k12213 in k12175 in expand in k12156 in k12153 in k12150 in a12144 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in ... */
static void C_ccall f_12374(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(30,c,1)))){
C_save_and_reclaim((void *)f_12374,c,av);}
a=C_alloc(30);
t2=C_a_i_list(&a,4,lf[281],((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=C_a_i_list(&a,3,lf[73],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[92],((C_word*)t0)[6],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k12399 in k12342 in k12302 in k12216 in k12213 in k12175 in expand in k12156 in k12153 in k12150 in a12144 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in ... */
static void C_ccall f_12401(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_12401,c,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,4,lf[259],((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k12462 in k12213 in k12175 in expand in k12156 in k12153 in k12150 in a12144 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in ... */
static void C_ccall f_12464(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_12464,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
f_12218(2,av2);}}
else{
t2=C_i_vectorp(C_u_i_car(((C_word*)t0)[3]));
if(C_truep(t2)){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_12218(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12476,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1391: ##sys#srfi-4-vector? */
t4=*((C_word*)lf[282]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_u_i_car(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}}

/* k12474 in k12462 in k12213 in k12175 in expand in k12156 in k12153 in k12150 in a12144 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in ... */
static void C_ccall f_12476(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_12476,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
f_12218(2,av2);}}
else{
if(C_truep(C_i_pairp(C_u_i_car(((C_word*)t0)[3])))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12492,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1393: r */
t3=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[217];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_12218(2,av2);}}}}

/* k12490 in k12474 in k12462 in k12213 in k12175 in expand in k12156 in k12153 in k12150 in a12144 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in ... */
static void C_ccall f_12492(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_12492,c,av);}
/* expand.scm:1393: c */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=C_i_caar(((C_word*)t0)[4]);
((C_proc)C_fast_retrieve_proc(t2))(4,av2);}}

/* k12524 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in ... */
static void C_ccall f_12526(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12526,c,av);}
/* expand.scm:1345: ##sys#extend-macro-environment */
t2=*((C_word*)lf[30]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[226];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a12527 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in ... */
static void C_ccall f_12528(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_12528,c,av);}
a=C_alloc(6);
t5=C_i_cdr(t2);
if(C_truep(C_i_nullp(t5))){
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_i_cdr(t5);
t7=C_u_i_car(t5);
if(C_truep(C_i_nullp(t6))){
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12551,a[2]=t7,a[3]=t6,a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1357: r */
t9=t3;{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[274];
((C_proc)C_fast_retrieve_proc(t9))(3,av2);}}}}

/* k12549 in a12527 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in ... */
static void C_ccall f_12551(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_12551,c,av);}
a=C_alloc(15);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12570,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1359: r */
t5=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[226];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k12568 in k12549 in a12527 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in ... */
static void C_ccall f_12570(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,1)))){
C_save_and_reclaim((void *)f_12570,c,av);}
a=C_alloc(24);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,4,lf[259],((C_word*)t0)[3],((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[52],((C_word*)t0)[5],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k12576 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in ... */
static void C_ccall f_12578(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12578,c,av);}
/* expand.scm:1331: ##sys#extend-macro-environment */
t2=*((C_word*)lf[30]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[235];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a12579 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in ... */
static void C_ccall f_12580(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_12580,c,av);}
a=C_alloc(5);
t5=C_i_cdr(t2);
if(C_truep(C_i_nullp(t5))){
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_i_cdr(t5);
t7=C_u_i_car(t5);
if(C_truep(C_i_nullp(t6))){
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12611,a[2]=t6,a[3]=t1,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1343: r */
t9=t3;{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[235];
((C_proc)C_fast_retrieve_proc(t9))(3,av2);}}}}

/* k12609 in a12579 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in ... */
static void C_ccall f_12611(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,1)))){
C_save_and_reclaim((void *)f_12611,c,av);}
a=C_alloc(15);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,4,lf[259],((C_word*)t0)[4],t2,C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k12613 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in ... */
static void C_ccall f_12615(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12615,c,av);}
/* expand.scm:1319: ##sys#extend-macro-environment */
t2=*((C_word*)lf[30]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[285];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a12616 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in ... */
static void C_ccall f_12617(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_12617,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12621,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1324: ##sys#check-syntax */
t6=*((C_word*)lf[56]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[285];
av2[3]=t2;
av2[4]=lf[287];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k12619 in a12616 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in ... */
static void C_ccall f_12621(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_12621,c,av);}
a=C_alloc(13);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_caddr(((C_word*)t0)[2]);
if(C_truep(C_i_pairp(t2))){
t4=C_u_i_car(t2);
t5=C_a_i_list(&a,2,lf[286],t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12644,a[2]=((C_word*)t0)[3],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_u_i_cdr(t2);
t8=C_a_i_list(&a,1,t3);
/* expand.scm:1328: ##sys#append */
t9=*((C_word*)lf[71]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t9;
av2[1]=t6;
av2[2]=t7;
av2[3]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}
else{
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[94],t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k12642 in k12619 in a12616 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in ... */
static void C_ccall f_12644(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_12644,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k12657 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in ... */
static void C_ccall f_12659(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12659,c,av);}
/* expand.scm:1310: ##sys#extend-macro-environment */
t2=*((C_word*)lf[30]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[288];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a12660 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in ... */
static void C_ccall f_12661(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_12661,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12665,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1315: ##sys#check-syntax */
t6=*((C_word*)lf[56]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[288];
av2[3]=t2;
av2[4]=lf[291];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k12663 in a12660 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in ... */
static void C_ccall f_12665(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_12665,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12668,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1316: chicken.internal#check-for-multiple-bindings */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[289]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[289]+1);
av2[1]=t2;
av2[2]=C_i_cadr(((C_word*)t0)[2]);
av2[3]=((C_word*)t0)[2];
av2[4]=lf[290];
tp(5,av2);}}

/* k12666 in k12663 in a12660 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in ... */
static void C_ccall f_12668(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_12668,c,av);}
a=C_alloc(3);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[109],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k12679 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in ... */
static void C_ccall f_12681(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12681,c,av);}
/* expand.scm:1301: ##sys#extend-macro-environment */
t2=*((C_word*)lf[30]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[292];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a12682 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in ... */
static void C_ccall f_12683(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_12683,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12687,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1306: ##sys#check-syntax */
t6=*((C_word*)lf[56]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[292];
av2[3]=t2;
av2[4]=lf[295];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k12685 in a12682 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in ... */
static void C_ccall f_12687(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_12687,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12690,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1307: chicken.internal#check-for-multiple-bindings */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[289]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[289]+1);
av2[1]=t2;
av2[2]=C_i_cadr(((C_word*)t0)[2]);
av2[3]=((C_word*)t0)[2];
av2[4]=lf[294];
tp(5,av2);}}

/* k12688 in k12685 in a12682 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in ... */
static void C_ccall f_12690(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_12690,c,av);}
a=C_alloc(3);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[293],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k12701 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in ... */
static void C_ccall f_12703(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12703,c,av);}
/* expand.scm:1292: ##sys#extend-macro-environment */
t2=*((C_word*)lf[30]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[296];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a12704 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in ... */
static void C_ccall f_12705(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_12705,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12709,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1297: ##sys#check-syntax */
t6=*((C_word*)lf[56]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[296];
av2[3]=t2;
av2[4]=lf[299];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k12707 in a12704 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in ... */
static void C_ccall f_12709(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_12709,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12712,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1298: chicken.internal#check-for-multiple-bindings */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[289]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[289]+1);
av2[1]=t2;
av2[2]=C_i_cadr(((C_word*)t0)[2]);
av2[3]=((C_word*)t0)[2];
av2[4]=lf[298];
tp(5,av2);}}

/* k12710 in k12707 in a12704 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in ... */
static void C_ccall f_12712(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_12712,c,av);}
a=C_alloc(3);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[297],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k12723 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in ... */
static void C_ccall f_12725(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12725,c,av);}
/* expand.scm:1279: ##sys#extend-macro-environment */
t2=*((C_word*)lf[30]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[57];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a12726 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in ... */
static void C_ccall f_12727(C_word c,C_word *av){
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
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_12727,c,av);}
a=C_alloc(8);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12731,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=C_i_cdr(t2);
t7=C_i_pairp(t6);
t8=(C_truep(t7)?C_i_symbolp(C_i_cadr(t2)):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12742,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1285: ##sys#check-syntax */
t10=*((C_word*)lf[56]+1);{
C_word *av2=av;
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[57];
av2[3]=t2;
av2[4]=lf[301];
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}
else{
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12752,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1288: ##sys#check-syntax */
t10=*((C_word*)lf[56]+1);{
C_word *av2=av;
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[57];
av2[3]=t2;
av2[4]=lf[303];
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}}

/* k12729 in a12726 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in ... */
static void C_ccall f_12731(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_12731,c,av);}
a=C_alloc(3);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[52],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k12740 in a12726 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in ... */
static void C_ccall f_12742(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12742,c,av);}
/* expand.scm:1286: chicken.internal#check-for-multiple-bindings */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[289]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[289]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_i_caddr(((C_word*)t0)[3]);
av2[3]=((C_word*)t0)[3];
av2[4]=lf[300];
tp(5,av2);}}

/* k12750 in a12726 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in ... */
static void C_ccall f_12752(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12752,c,av);}
/* expand.scm:1289: chicken.internal#check-for-multiple-bindings */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[289]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[289]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_i_cadr(((C_word*)t0)[3]);
av2[3]=((C_word*)t0)[3];
av2[4]=lf[302];
tp(5,av2);}}

/* k12775 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in ... */
static void C_ccall f_12777(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12777,c,av);}
/* expand.scm:1265: ##sys#extend-macro-environment */
t2=*((C_word*)lf[30]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[102];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a12778 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in ... */
static void C_ccall f_12779(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_12779,c,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12783,a[2]=t2,a[3]=t1,a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1270: ##sys#check-syntax */
t6=*((C_word*)lf[56]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[102];
av2[3]=t2;
av2[4]=lf[307];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k12781 in a12778 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in ... */
static void C_ccall f_12783(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_12783,c,av);}
a=C_alloc(12);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_caddr(((C_word*)t0)[2]);
t4=C_i_getprop(t2,lf[7],C_SCHEME_FALSE);
t5=(C_truep(t4)?t4:t2);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12800,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12820,a[2]=t6,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1274: ##sys#current-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[306]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[306]+1);
av2[1]=t7;
tp(2,av2);}}

/* k12798 in k12781 in a12778 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in ... */
static void C_ccall f_12800(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,2)))){
C_save_and_reclaim((void *)f_12800,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12803,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12809,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12816,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1275: r */
t5=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[102];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k12801 in k12798 in k12781 in a12778 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in ... */
static void C_ccall f_12803(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_12803,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[304],((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k12807 in k12798 in k12781 in a12778 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in ... */
static void C_ccall f_12809(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_12809,c,av);}
a=C_alloc(9);
if(C_truep(t1)){
/* expand.scm:428: ##sys#syntax-error-hook */
t2=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[110];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[304],((C_word*)t0)[5],((C_word*)t0)[6]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k12814 in k12798 in k12781 in a12778 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in ... */
static void C_ccall f_12816(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_12816,c,av);}
/* expand.scm:1275: c */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=((C_word*)t0)[4];
((C_proc)C_fast_retrieve_proc(t2))(4,av2);}}

/* k12818 in k12781 in a12778 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in ... */
static void C_ccall f_12820(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_12820,c,av);}
/* expand.scm:1274: ##sys#register-export */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[305]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[305]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* k12822 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in ... */
static void C_ccall f_12824(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12824,c,av);}
/* expand.scm:1237: ##sys#extend-macro-environment */
t2=*((C_word*)lf[30]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[101];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a12825 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in ... */
static void C_ccall f_12826(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_12826,c,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12830,a[2]=t2,a[3]=t4,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1242: ##sys#check-syntax */
t6=*((C_word*)lf[56]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[101];
av2[3]=t2;
av2[4]=lf[313];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k12828 in a12825 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in ... */
static void C_ccall f_12830(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_12830,c,av);}
a=C_alloc(9);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12835,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word)li151),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_12835(t5,((C_word*)t0)[5],((C_word*)t0)[2]);}

/* loop in k12828 in a12825 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in ... */
static void C_fcall f_12835(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_12835,3,t0,t1,t2);}
a=C_alloc(8);
t3=C_i_cadr(t2);
t4=C_u_i_cdr(t2);
t5=C_u_i_cdr(t4);
t6=C_i_pairp(t3);
if(C_truep(C_i_not(t6))){
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12850,a[2]=t3,a[3]=t5,a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:1247: ##sys#check-syntax */
t8=*((C_word*)lf[56]+1);{
C_word av2[5];
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[101];
av2[3]=t2;
av2[4]=lf[310];
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}
else{
t7=C_i_car(t3);
if(C_truep(C_i_pairp(t7))){
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12906,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=t3,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1258: ##sys#check-syntax */
t9=*((C_word*)lf[56]+1);{
C_word av2[5];
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[101];
av2[3]=t2;
av2[4]=lf[311];
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}
else{
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12916,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t5,a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1261: ##sys#check-syntax */
t9=*((C_word*)lf[56]+1);{
C_word av2[5];
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[101];
av2[3]=t2;
av2[4]=lf[312];
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}}}

/* k12848 in loop in k12828 in a12825 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in ... */
static void C_ccall f_12850(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_12850,c,av);}
a=C_alloc(12);
t2=C_i_getprop(((C_word*)t0)[2],lf[7],C_SCHEME_FALSE);
t3=(C_truep(t2)?t2:((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12861,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12897,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1249: ##sys#current-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[306]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[306]+1);
av2[1]=t5;
tp(2,av2);}}

/* k12859 in k12848 in loop in k12828 in a12825 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in ... */
static void C_ccall f_12861(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_12861,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12864,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12886,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12893,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1250: r */
t5=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[101];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k12862 in k12859 in k12848 in loop in k12828 in a12825 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in ... */
static void C_ccall f_12864(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,1)))){
C_save_and_reclaim((void *)f_12864,c,av);}
a=C_alloc(24);
t2=C_a_i_list(&a,2,lf[308],((C_word*)t0)[2]);
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t3=C_u_i_car(((C_word*)t0)[3]);
t4=C_a_i_list(&a,3,lf[94],((C_word*)t0)[2],t3);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,lf[105],t2,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t3=C_a_i_list(&a,3,lf[94],((C_word*)t0)[2],lf[309]);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[105],t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k12884 in k12859 in k12848 in loop in k12828 in a12825 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in ... */
static void C_ccall f_12886(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_12886,c,av);}
if(C_truep(t1)){
/* expand.scm:428: ##sys#syntax-error-hook */
t2=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[110];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_12864(2,av2);}}}

/* k12891 in k12859 in k12848 in loop in k12828 in a12825 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in ... */
static void C_ccall f_12893(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_12893,c,av);}
/* expand.scm:1250: c */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=((C_word*)t0)[4];
((C_proc)C_fast_retrieve_proc(t2))(4,av2);}}

/* k12895 in k12848 in loop in k12828 in a12825 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in ... */
static void C_ccall f_12897(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_12897,c,av);}
/* expand.scm:1249: ##sys#register-export */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[305]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[305]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* k12904 in loop in k12828 in a12825 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in ... */
static void C_ccall f_12906(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_12906,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12913,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1259: chicken.syntax#expand-curried-define */
t3=*((C_word*)lf[113]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
av2[4]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k12911 in k12904 in loop in k12828 in a12825 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in ... */
static void C_ccall f_12913(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_12913,c,av);}
/* expand.scm:1259: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_12835(t2,((C_word*)t0)[3],t1);}

/* k12914 in loop in k12828 in a12825 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in ... */
static void C_ccall f_12916(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_12916,c,av);}
a=C_alloc(15);
t2=C_i_car(((C_word*)t0)[2]);
t3=C_u_i_car(((C_word*)t0)[3]);
t4=C_u_i_cdr(((C_word*)t0)[3]);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[4]);
t6=C_a_i_cons(&a,2,lf[73],t5);
t7=C_a_i_list3(&a,3,t2,t3,t6);
/* expand.scm:1262: loop */
t8=((C_word*)((C_word*)t0)[5])[1];
f_12835(t8,((C_word*)t0)[6],t7);}

/* k12949 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in ... */
static void C_ccall f_12951(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12951,c,av);}
/* expand.scm:1228: ##sys#extend-macro-environment */
t2=*((C_word*)lf[30]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[314];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a12952 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in ... */
static void C_ccall f_12953(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_12953,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12957,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1233: ##sys#check-syntax */
t6=*((C_word*)lf[56]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[314];
av2[3]=t2;
av2[4]=lf[315];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k12955 in a12952 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in ... */
static void C_ccall f_12957(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_12957,c,av);}
a=C_alloc(3);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[105],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k12966 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in ... */
static void C_ccall f_12968(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12968,c,av);}
/* expand.scm:1220: ##sys#extend-macro-environment */
t2=*((C_word*)lf[30]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[281];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a12969 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in ... */
static void C_ccall f_12970(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_12970,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12974,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1225: ##sys#check-syntax */
t6=*((C_word*)lf[56]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[281];
av2[3]=t2;
av2[4]=lf[316];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k12972 in a12969 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in ... */
static void C_ccall f_12974(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_12974,c,av);}
a=C_alloc(3);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[259],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k12983 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 in ... */
static void C_ccall f_12985(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12985,c,av);}
/* expand.scm:1212: ##sys#extend-macro-environment */
t2=*((C_word*)lf[30]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[217];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a12986 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 in ... */
static void C_ccall f_12987(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_12987,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12991,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1217: ##sys#check-syntax */
t6=*((C_word*)lf[56]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[217];
av2[3]=t2;
av2[4]=lf[317];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k12989 in a12986 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in ... */
static void C_ccall f_12991(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_12991,c,av);}
a=C_alloc(6);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,2,lf[72],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k13000 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13002(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_13002,c,av);}
/* expand.scm:1204: ##sys#extend-macro-environment */
t2=*((C_word*)lf[30]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[228];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a13003 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13004(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_13004,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13008,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1209: ##sys#check-syntax */
t6=*((C_word*)lf[56]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[228];
av2[3]=t2;
av2[4]=lf[318];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k13006 in a13003 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 in ... */
static void C_ccall f_13008(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_13008,c,av);}
a=C_alloc(3);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[73],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k13017 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13019(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_13019,c,av);}
/* expand.scm:1190: ##sys#extend-macro-environment */
t2=*((C_word*)lf[30]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[319];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a13020 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13021(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_13021,c,av);}
a=C_alloc(3);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13025,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1194: ##sys#check-syntax */
t6=*((C_word*)lf[56]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[319];
av2[3]=t2;
av2[4]=lf[321];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k13023 in a13020 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13025(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_13025,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13028,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1195: ##sys#current-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[306]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[306]+1);
av2[1]=t2;
tp(2,av2);}}

/* k13026 in k13023 in a13020 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13028(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_13028,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13038,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1196: ##sys#module-name */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[320]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[320]+1);
av2[1]=t2;
av2[2]=t1;
tp(3,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k13036 in k13026 in k13023 in a13020 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13038(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_13038,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,2,lf[72],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k13040 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13042(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_13042,c,av);}
/* expand.scm:1167: ##sys#extend-macro-environment */
t2=*((C_word*)lf[30]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[322];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a13043 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13044(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_13044,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13048,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1171: ##sys#check-syntax */
t6=*((C_word*)lf[56]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[322];
av2[3]=t2;
av2[4]=lf[332];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k13046 in a13043 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13048(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_13048,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13051,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1172: chicken.syntax#strip-syntax */
t3=*((C_word*)lf[12]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_cadr(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k13049 in k13046 in a13043 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13051(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_13051,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13054,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=C_eqp(lf[326],t1);
if(C_truep(t3)){
/* expand.scm:1174: syntax-error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[329]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[329]+1);
av2[1]=t2;
av2[2]=lf[322];
av2[3]=lf[331];
tp(4,av2);}}
else{
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_13054(2,av2);}}}

/* k13052 in k13049 in k13046 in a13043 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13054(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_13054,c,av);}
a=C_alloc(18);
t2=C_a_i_list(&a,2,lf[72],((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,lf[72],lf[323]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13077,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1181: chicken.syntax#strip-syntax */
t5=*((C_word*)lf[12]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_i_caddr(((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k13075 in k13052 in k13049 in k13046 in a13043 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13077(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(35,c,4)))){
C_save_and_reclaim((void *)f_13077,c,av);}
a=C_alloc(35);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13080,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_eqp(lf[326],t1);
if(C_truep(t3)){
t4=C_a_i_list(&a,2,lf[72],lf[326]);
t5=C_a_i_list(&a,4,lf[324],((C_word*)t0)[2],((C_word*)t0)[3],t4);
t6=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list(&a,2,lf[325],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
if(C_truep(C_i_symbolp(t1))){
t4=C_a_i_list(&a,2,lf[327],t1);
t5=C_a_i_list(&a,2,lf[72],t4);
t6=C_a_i_list(&a,4,lf[324],((C_word*)t0)[2],((C_word*)t0)[3],t5);
t7=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_a_i_list(&a,2,lf[325],t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
if(C_truep(C_i_listp(t1))){
/* expand.scm:1185: ##sys#validate-exports */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[328]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[328]+1);
av2[1]=t2;
av2[2]=t1;
av2[3]=lf[322];
tp(4,av2);}}
else{
/* expand.scm:1187: syntax-error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[329]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[329]+1);
av2[1]=t2;
av2[2]=lf[322];
av2[3]=lf[330];
av2[4]=C_i_caddr(((C_word*)t0)[5]);
tp(5,av2);}}}}}

/* k13078 in k13075 in k13052 in k13049 in k13046 in a13043 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 in ... */
static void C_ccall f_13080(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,1)))){
C_save_and_reclaim((void *)f_13080,c,av);}
a=C_alloc(24);
t2=C_a_i_list(&a,2,lf[72],t1);
t3=C_a_i_list(&a,4,lf[324],((C_word*)t0)[2],((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,lf[325],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k13124 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13126(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_13126,c,av);}
/* expand.scm:1132: ##sys#extend-macro-environment */
t2=*((C_word*)lf[30]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[333];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a13127 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13128(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_13128,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13132,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1136: ##sys#check-syntax */
t6=*((C_word*)lf[56]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[333];
av2[3]=t2;
av2[4]=lf[341];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k13130 in a13127 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13132(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_13132,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13135,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1137: chicken.syntax#strip-syntax */
t3=*((C_word*)lf[12]+1);{
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

/* k13133 in k13130 in a13127 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13135(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_13135,c,av);}
a=C_alloc(7);
t2=C_i_cadr(t1);
t3=C_i_car(t2);
t4=C_u_i_cdr(t2);
t5=C_i_caddr(t1);
t6=C_u_i_cdr(t1);
t7=C_u_i_cdr(t6);
t8=C_u_i_cdr(t7);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13293,a[2]=t3,a[3]=t4,a[4]=t8,a[5]=((C_word*)t0)[2],a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1145: chicken.internal#library-id */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[340]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[340]+1);
av2[1]=t9;
av2[2]=t3;
tp(3,av2);}}

/* k13156 in k13184 in k13253 in k13291 in k13133 in k13130 in a13127 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 in ... */
static void C_ccall f_13158(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(30,c,1)))){
C_save_and_reclaim((void *)f_13158,c,av);}
a=C_alloc(30);
t2=C_a_i_list(&a,3,lf[104],lf[337],lf[338]);
t3=C_a_i_list(&a,2,lf[339],((C_word*)t0)[2]);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,5,lf[106],t1,C_SCHEME_TRUE,t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k13184 in k13253 in k13291 in k13133 in k13130 in a13127 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13186(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(31,c,2)))){
C_save_and_reclaim((void *)f_13186,c,av);}
a=C_alloc(31);
t2=C_a_i_list(&a,2,lf[72],t1);
t3=C_a_i_list(&a,2,lf[72],((C_word*)t0)[2]);
t4=C_a_i_list(&a,5,lf[336],((C_word*)t0)[3],((C_word*)t0)[4],t2,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13158,a[2]=t4,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1160: chicken.internal#library-id */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[340]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[340]+1);
av2[1]=t5;
av2[2]=((C_word*)t0)[6];
tp(3,av2);}}

/* g2487 in k13291 in k13133 in k13130 in a13127 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_13191(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_13191,3,t0,t1,t2);}
a=C_alloc(6);
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13198,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1149: ##sys#validate-exports */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[328]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[328]+1);
av2[1]=t4;
av2[2]=C_i_cadr(t2);
av2[3]=lf[333];
tp(4,av2);}}

/* k13196 in g2487 in k13291 in k13133 in k13130 in a13127 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13198(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_13198,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13201,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=C_i_symbolp(((C_word*)t0)[3]);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_13210,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t3)){
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t3;
f_13210(2,av2);}}
else{
if(C_truep(C_i_listp(((C_word*)t0)[3]))){
t5=C_eqp(C_fix(2),C_u_i_length(((C_word*)t0)[3]));
if(C_truep(t5)){
t6=C_i_car(((C_word*)t0)[3]);
if(C_truep(C_i_symbolp(t6))){
/* expand.scm:1154: chicken.internal#valid-library-specifier? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[335]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[335]+1);
av2[1]=t4;
av2[2]=C_i_cadr(((C_word*)t0)[3]);
tp(3,av2);}}
else{
t7=t4;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
f_13210(2,av2);}}}
else{
t6=t4;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
f_13210(2,av2);}}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
f_13210(2,av2);}}}}

/* k13199 in k13196 in g2487 in k13291 in k13133 in k13130 in a13127 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 in ... */
static void C_ccall f_13201(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_13201,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k13208 in k13196 in g2487 in k13291 in k13133 in k13130 in a13127 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 in ... */
static void C_ccall f_13210(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_13210,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* expand.scm:1155: ##sys#syntax-error-hook */
t2=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[5];
av2[2]=lf[334];
av2[3]=((C_word*)t0)[6];
av2[4]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* k13253 in k13291 in k13133 in k13130 in a13127 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13255(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_13255,c,av);}
a=C_alloc(13);
t2=C_a_i_list(&a,2,lf[72],t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13186,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1158: ##sys#validate-exports */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[328]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[328]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
av2[3]=lf[333];
tp(4,av2);}}

/* map-loop2481 in k13291 in k13133 in k13130 in a13127 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_13257(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_13257,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13282,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1147: g2487 */
t4=((C_word*)t0)[4];
f_13191(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k13280 in map-loop2481 in k13291 in k13133 in k13130 in a13127 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13282(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_13282,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_13257(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k13291 in k13133 in k13130 in a13127 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13293(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(31,c,3)))){
C_save_and_reclaim((void *)f_13293,c,av);}
a=C_alloc(31);
t2=C_a_i_list(&a,2,lf[72],t1);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13191,a[2]=((C_word*)t0)[2],a[3]=((C_word)li159),tmp=(C_word)a,a+=4,tmp);
t8=C_i_check_list_2(((C_word*)t0)[3],lf[17]);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13255,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13257,a[2]=t5,a[3]=t11,a[4]=t7,a[5]=t6,a[6]=((C_word)li160),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_13257(t13,t9,((C_word*)t0)[3]);}

/* k13295 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13297(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_13297,c,av);}
/* expand.scm:1123: ##sys#extend-macro-environment */
t2=*((C_word*)lf[30]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[342];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a13298 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13299(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,9)))){
C_save_and_reclaim((void *)f_13299,c,av);}
t5=*((C_word*)lf[343]+1);
/* expand.scm:1126: g2464 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[343]+1));
C_word *av2;
if(c >= 10) {
  av2=av;
} else {
  av2=C_alloc(10);
}
av2[0]=*((C_word*)lf[343]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t4;
av2[5]=*((C_word*)lf[4]+1);
av2[6]=*((C_word*)lf[18]+1);
av2[7]=C_SCHEME_FALSE;
av2[8]=C_SCHEME_TRUE;
av2[9]=lf[342];
tp(10,av2);}}

/* k13305 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13307(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_13307,c,av);}
/* expand.scm:1113: ##sys#extend-macro-environment */
t2=*((C_word*)lf[30]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[344];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a13308 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13309(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_13309,c,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13313,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13326,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1117: chicken.syntax#strip-syntax */
t7=*((C_word*)lf[12]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=C_i_cdr(t2);
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k13311 in a13308 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13313(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_13313,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13316,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:1118: ##sys#current-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[306]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[306]+1);
av2[1]=t2;
tp(2,av2);}}

/* k13314 in k13311 in a13308 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13316(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_13316,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13319,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
/* expand.scm:1120: ##sys#add-to-export-list */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[346]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[346]+1);
av2[1]=t2;
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=lf[345];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k13317 in k13314 in k13311 in a13308 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13319(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_13319,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[345];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k13324 in a13308 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13326(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_13326,c,av);}
/* expand.scm:1117: ##sys#validate-exports */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[328]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[328]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[344];
tp(4,av2);}}

/* k13332 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13334(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_13334,c,av);}
/* expand.scm:1053: ##sys#extend-macro-environment */
t2=*((C_word*)lf[30]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[347];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a13335 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13336(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_13336,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13340,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1057: ##sys#check-syntax */
t6=*((C_word*)lf[56]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[347];
av2[3]=t2;
av2[4]=lf[354];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k13338 in a13335 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13340(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_13340,c,av);}
a=C_alloc(6);
t2=C_i_length(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13346,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1059: chicken.internal#library-id */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[340]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[340]+1);
av2[1]=t3;
av2[2]=C_i_cadr(((C_word*)t0)[2]);
tp(3,av2);}}

/* k13344 in k13338 in a13335 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13346(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_13346,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13352,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)t0)[2],C_fix(4)))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13497,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1066: chicken.syntax#strip-syntax */
t4=*((C_word*)lf[12]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_caddr(((C_word*)t0)[5]);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=t2;
f_13352(t3,C_SCHEME_FALSE);}}

/* k13350 in k13344 in k13338 in a13335 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_13352(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_13352,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13355,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1067: chicken.syntax#strip-syntax */
t3=*((C_word*)lf[12]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13424,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13483,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1100: chicken.syntax#strip-syntax */
t4=*((C_word*)lf[12]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_caddr(((C_word*)t0)[6]);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k13353 in k13350 in k13344 in k13338 in a13335 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13355(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_13355,c,av);}
a=C_alloc(13);
t2=C_i_cadddr(t1);
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[2],C_fix(4)))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13367,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13401,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13405,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1086: scheme#symbol->string */
t6=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13408,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1092: ##sys#check-syntax */
t4=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[347];
av2[3]=t1;
av2[4]=lf[353];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}

/* k13365 in k13353 in k13350 in k13344 in k13338 in a13335 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13367(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_13367,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13370,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1087: r */
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[347];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k13368 in k13365 in k13353 in k13350 in k13344 in k13338 in a13335 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13370(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(36,c,1)))){
C_save_and_reclaim((void *)f_13370,c,av);}
a=C_alloc(36);
t2=C_i_cddddr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[326],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[3],t3);
t5=C_a_i_cons(&a,2,t1,t4);
t6=C_a_i_list(&a,2,((C_word*)t0)[4],((C_word*)t0)[3]);
t7=C_a_i_list(&a,4,t1,((C_word*)t0)[5],lf[348],t6);
t8=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_a_i_list(&a,3,lf[105],t5,t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* k13399 in k13353 in k13350 in k13344 in k13338 in a13335 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13401(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_13401,c,av);}
/* expand.scm:1083: scheme#string->symbol */
t2=*((C_word*)lf[349]+1);{
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

/* k13403 in k13353 in k13350 in k13344 in k13338 in a13335 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13405(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_13405,c,av);}
/* expand.scm:1084: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[350]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[350]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[351];
av2[3]=t1;
tp(4,av2);}}

/* k13406 in k13353 in k13350 in k13344 in k13338 in a13335 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13408(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_13408,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13415,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1096: chicken.internal#library-id */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[340]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[340]+1);
av2[1]=t2;
av2[2]=C_i_car(((C_word*)t0)[4]);
tp(3,av2);}}

/* k13413 in k13406 in k13353 in k13350 in k13344 in k13338 in a13335 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13415(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_13415,c,av);}
/* expand.scm:1094: ##sys#instantiate-functor */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[352]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[352]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=C_u_i_cdr(((C_word*)t0)[4]);
tp(5,av2);}}

/* k13422 in k13350 in k13344 in k13338 in a13335 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13424(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_13424,c,av);}
a=C_alloc(6);
t2=C_eqp(lf[326],t1);
t3=(C_truep(t2)?C_SCHEME_TRUE:t1);
t4=C_i_cdddr(((C_word*)t0)[2]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13449,a[2]=t4,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t4))){
t6=C_i_nullp(C_u_i_cdr(t4));
t7=t5;
f_13449(t7,(C_truep(t6)?C_i_stringp(C_u_i_car(t4)):C_SCHEME_FALSE));}
else{
t6=t5;
f_13449(t6,C_SCHEME_FALSE);}}

/* k13447 in k13422 in k13350 in k13344 in k13338 in a13335 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_13449(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,0,1)))){
C_save_and_reclaim_args((void *)trf_13449,2,t0,t1);}
a=C_alloc(21);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,lf[107],t2,*((C_word*)lf[3]+1));
t4=C_a_i_list(&a,1,t3);
t5=C_a_i_cons(&a,2,((C_word*)t0)[3],t4);
t6=C_a_i_cons(&a,2,((C_word*)t0)[4],t5);
t7=((C_word*)t0)[5];{
C_word av2[2];
av2[0]=t7;
av2[1]=C_a_i_cons(&a,2,lf[106],t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];{
C_word av2[2];
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,lf[106],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k13481 in k13350 in k13344 in k13338 in a13335 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13483(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_13483,c,av);}
/* expand.scm:1100: ##sys#validate-exports */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[328]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[328]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[347];
tp(4,av2);}}

/* k13495 in k13344 in k13338 in a13335 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13497(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_13497,c,av);}
t2=((C_word*)t0)[2];
f_13352(t2,C_eqp(lf[348],t1));}

/* k13507 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13509(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_13509,c,av);}
/* expand.scm:996: ##sys#extend-macro-environment */
t2=*((C_word*)lf[30]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[355];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a13510 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13511(C_word c,C_word *av){
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
C_word t13;
C_word t14;
C_word t15;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_13511,c,av);}
a=C_alloc(22);
t5=C_i_cdr(t2);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13517,a[2]=t5,a[3]=((C_word)li165),tmp=(C_word)a,a+=4,tmp));
t11=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13527,a[2]=t7,a[3]=t9,a[4]=((C_word)li166),tmp=(C_word)a,a+=5,tmp));
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13672,a[2]=t5,a[3]=t7,a[4]=t13,a[5]=t9,a[6]=((C_word)li168),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_13672(t15,t1,t5);}

/* err in a13510 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_13517(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_13517,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_a_i_cons(&a,2,lf[355],((C_word*)t0)[2]);
/* expand.scm:1003: ##sys#error */
t4=*((C_word*)lf[28]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=lf[356];
av2[3]=t2;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* test in a13510 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_13527(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_13527,3,t0,t1,t2);}
a=C_alloc(7);
if(C_truep(C_i_symbolp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13541,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1007: chicken.syntax#strip-syntax */
t4=*((C_word*)lf[12]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=C_i_pairp(t2);
if(C_truep(C_i_not(t3))){
/* expand.scm:1008: err */
t4=((C_word*)((C_word*)t0)[2])[1];
f_13517(t4,t1,t2);}
else{
t4=C_i_car(t2);
t5=C_u_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13557,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[2],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* expand.scm:1012: chicken.syntax#strip-syntax */
t7=*((C_word*)lf[12]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}}

/* k13539 in test in a13510 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13541(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_13541,c,av);}
/* expand.scm:1007: chicken.platform#feature? */
t2=*((C_word*)lf[357]+1);{
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

/* k13555 in test in a13510 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13557(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_13557,c,av);}
a=C_alloc(5);
t2=C_eqp(t1,lf[235]);
if(C_truep(t2)){
t3=C_eqp(((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
if(C_truep(t3)){
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13581,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1016: test */
t5=((C_word*)((C_word*)t0)[4])[1];
f_13527(t5,t4,C_u_i_car(((C_word*)t0)[2]));}
else{
/* expand.scm:1018: err */
t4=((C_word*)((C_word*)t0)[5])[1];
f_13517(t4,((C_word*)t0)[3],((C_word*)t0)[6]);}}}
else{
t3=C_eqp(t1,lf[226]);
if(C_truep(t3)){
t4=C_eqp(((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
if(C_truep(C_i_not(t4))){
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13616,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:1022: test */
t6=((C_word*)((C_word*)t0)[4])[1];
f_13527(t6,t5,C_u_i_car(((C_word*)t0)[2]));}
else{
/* expand.scm:1024: err */
t5=((C_word*)((C_word*)t0)[5])[1];
f_13517(t5,((C_word*)t0)[3],((C_word*)t0)[6]);}}
else{
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t4=C_eqp(t1,lf[358]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13650,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1025: test */
t6=((C_word*)((C_word*)t0)[4])[1];
f_13527(t6,t5,C_i_cadr(((C_word*)t0)[6]));}
else{
/* expand.scm:1026: err */
t5=((C_word*)((C_word*)t0)[5])[1];
f_13517(t5,((C_word*)t0)[3],((C_word*)t0)[6]);}}}}

/* k13579 in k13555 in test in a13510 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13581(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_13581,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[235],t2);
/* expand.scm:1017: test */
t4=((C_word*)((C_word*)t0)[3])[1];
f_13527(t4,((C_word*)t0)[4],t3);}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k13614 in k13555 in test in a13510 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13616(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_13616,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_u_i_cdr(((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,lf[226],t2);
/* expand.scm:1023: test */
t4=((C_word*)((C_word*)t0)[4])[1];
f_13527(t4,((C_word*)t0)[2],t3);}}

/* k13648 in k13555 in test in a13510 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13650(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_13650,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_not(t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* expand in a13510 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_13672(C_word t0,C_word t1,C_word t2){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,0,3)))){
C_save_and_reclaim_args((void *)trf_13672,3,t0,t1,t2);}
a=C_alloc(16);
t3=C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t3)){
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_i_check_list_2(((C_word*)t0)[2],lf[17]);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13697,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13699,a[2]=t6,a[3]=t11,a[4]=t7,a[5]=((C_word)li167),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_13699(t13,t9,((C_word*)t0)[2]);}
else{
t4=C_i_pairp(t2);
if(C_truep(C_i_not(t4))){
/* expand.scm:1032: err */
t5=((C_word*)((C_word*)t0)[3])[1];
f_13517(t5,t1,t2);}
else{
t5=C_i_car(t2);
t6=C_u_i_cdr(t2);
t7=C_i_pairp(t5);
if(C_truep(C_i_not(t7))){
/* expand.scm:1037: err */
t8=((C_word*)((C_word*)t0)[3])[1];
f_13517(t8,t1,t5);}
else{
t8=C_i_car(t5);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_13790,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t6,a[6]=((C_word*)t0)[5],a[7]=t8,tmp=(C_word)a,a+=8,tmp);
/* expand.scm:1039: chicken.syntax#strip-syntax */
t10=*((C_word*)lf[12]+1);{
C_word av2[3];
av2[0]=t10;
av2[1]=t9;
av2[2]=t8;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}}}}

/* k13695 in expand in a13510 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13697(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_13697,c,av);}{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[28]+1);
av2[3]=lf[359];
av2[4]=t1;
C_apply(5,av2);}}

/* map-loop2370 in expand in a13510 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_13699(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_13699,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t9=t1;
t10=C_slot(t2,C_fix(1));
t1=t9;
t2=t10;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k13776 in k13788 in expand in a13510 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13778(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_13778,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[105],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* expand.scm:1045: expand */
t2=((C_word*)((C_word*)t0)[4])[1];
f_13672(t2,((C_word*)t0)[3],((C_word*)t0)[5]);}}

/* k13788 in expand in a13510 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13790(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_13790,c,av);}
a=C_alloc(6);
t2=C_eqp(t1,lf[232]);
if(C_truep(t2)){
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_eqp(t3,C_SCHEME_END_OF_LIST);
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=(C_truep(t4)?lf[360]:C_a_i_cons(&a,2,lf[105],t3));
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13778,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:1044: test */
t4=((C_word*)((C_word*)t0)[6])[1];
f_13527(t4,t3,((C_word*)t0)[7]);}}

/* k13800 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13802(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_13802,c,av);}
/* expand.scm:988: ##sys#extend-macro-environment */
t2=*((C_word*)lf[30]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[361];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a13803 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13804(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_13804,c,av);}
a=C_alloc(9);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13808,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13829,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:992: r */
t7=t3;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[104];
((C_proc)C_fast_retrieve_proc(t7))(3,av2);}}

/* k13806 in a13803 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13808(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_13808,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13819,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:993: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[104];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k13817 in k13806 in a13803 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13819(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_13819,c,av);}
a=C_alloc(9);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,lf[325],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k13827 in a13803 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13829(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_13829,c,av);}
a=C_alloc(3);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,t2);
/* expand.scm:992: ##sys#register-meta-expression */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[362]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[362]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t3;
tp(3,av2);}}

/* k13835 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13837(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_13837,c,av);}
/* expand.scm:966: ##sys#extend-macro-environment */
t2=*((C_word*)lf[30]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[104];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a13838 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13839(C_word c,C_word *av){
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
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_13839,c,av);}
a=C_alloc(22);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13848,a[2]=t3,a[3]=t4,a[4]=((C_word)li173),tmp=(C_word)a,a+=5,tmp);
t10=C_i_cdr(t2);
t11=C_i_check_list_2(t10,lf[17]);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13910,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13912,a[2]=t7,a[3]=t14,a[4]=t9,a[5]=t8,a[6]=((C_word)li174),tmp=(C_word)a,a+=7,tmp));
t16=((C_word*)t14)[1];
f_13912(t16,t12,t10);}

/* g2265 in a13838 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_13848(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,8)))){
C_save_and_reclaim_args((void *)trf_13848,3,t0,t1,t2);}
a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13854,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li171),tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13860,a[2]=((C_word)li172),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:972: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* a13853 in g2265 in a13838 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13854(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_13854,c,av);}
/* expand.scm:972: ##sys#decompose-import */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[363]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[363]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
av2[5]=lf[104];
tp(6,av2);}}

/* a13859 in g2265 in a13838 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13860(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6=av[6];
C_word t7=av[7];
C_word t8;
C_word t9;
C_word *a;
if(c!=8) C_bad_argc_2(c,8,t0);
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_13860,c,av);}
a=C_alloc(9);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_13864,a[2]=t3,a[3]=t1,a[4]=t2,a[5]=t4,a[6]=t5,a[7]=t6,a[8]=t7,tmp=(C_word)a,a+=9,tmp);
/* expand.scm:973: ##sys#current-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[306]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[306]+1);
av2[1]=t8;
tp(2,av2);}}

/* k13862 in a13859 in g2265 in a13838 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13864(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_13864,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_13867,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13901,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:974: ##sys#module-name */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[320]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[320]+1);
av2[1]=t3;
av2[2]=t1;
tp(3,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_13867(2,av2);}}}

/* k13865 in k13862 in a13859 in g2265 in a13838 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13867(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,10)))){
C_save_and_reclaim((void *)f_13867,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13870,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_not(((C_word*)t0)[5]))){
/* expand.scm:978: ##sys#syntax-error-hook */
t3=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[104];
av2[3]=lf[366];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
/* expand.scm:980: ##sys#import */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[367]+1));
C_word *av2;
if(c >= 11) {
  av2=av;
} else {
  av2=C_alloc(11);
}
av2[0]=*((C_word*)lf[367]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[6];
av2[4]=((C_word*)t0)[7];
av2[5]=((C_word*)t0)[8];
av2[6]=*((C_word*)lf[4]+1);
av2[7]=*((C_word*)lf[18]+1);
av2[8]=C_SCHEME_FALSE;
av2[9]=C_SCHEME_FALSE;
av2[10]=lf[104];
tp(11,av2);}}}

/* k13868 in k13865 in k13862 in a13859 in g2265 in a13838 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13870(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_13870,c,av);}
a=C_alloc(9);
t2=C_i_not(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(t2)?lf[364]:C_a_i_list(&a,3,lf[365],((C_word*)t0)[2],((C_word*)t0)[4]));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k13899 in k13862 in a13859 in g2265 in a13838 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13901(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_13901,c,av);}
t2=C_eqp(((C_word*)t0)[2],t1);
if(C_truep(t2)){
/* expand.scm:975: ##sys#syntax-error-hook */
t3=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[104];
av2[3]=lf[368];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_13867(2,av2);}}}

/* k13908 in a13838 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13910(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_13910,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,lf[105],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* map-loop2259 in a13838 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_13912(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_13912,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13937,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:971: g2265 */
t4=((C_word*)t0)[4];
f_13848(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k13935 in map-loop2259 in a13838 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13937(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_13937,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_13912(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k13946 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13948(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_13948,c,av);}
/* expand.scm:958: ##sys#extend-macro-environment */
t2=*((C_word*)lf[30]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[369];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a13949 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13950(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,9)))){
C_save_and_reclaim((void *)f_13950,c,av);}
t5=*((C_word*)lf[343]+1);
/* expand.scm:961: g2249 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[343]+1));
C_word *av2;
if(c >= 10) {
  av2=av;
} else {
  av2=C_alloc(10);
}
av2[0]=*((C_word*)lf[343]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t4;
av2[5]=*((C_word*)lf[5]+1);
av2[6]=*((C_word*)lf[193]+1);
av2[7]=C_SCHEME_TRUE;
av2[8]=C_SCHEME_FALSE;
av2[9]=lf[369];
tp(10,av2);}}

/* k13956 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13958(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_13958,c,av);}
/* expand.scm:951: ##sys#extend-macro-environment */
t2=*((C_word*)lf[30]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[370];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a13959 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_13960(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,9)))){
C_save_and_reclaim((void *)f_13960,c,av);}
t5=*((C_word*)lf[343]+1);
/* expand.scm:954: g2235 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[343]+1));
C_word *av2;
if(c >= 10) {
  av2=av;
} else {
  av2=C_alloc(10);
}
av2[0]=*((C_word*)lf[343]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t4;
av2[5]=*((C_word*)lf[4]+1);
av2[6]=*((C_word*)lf[18]+1);
av2[7]=C_SCHEME_FALSE;
av2[8]=C_SCHEME_FALSE;
av2[9]=lf[370];
tp(10,av2);}}

/* k4260 */
static void C_ccall f_4262(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_4262,c,av);}
a=C_alloc(19);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4265,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t4;
C_library_toplevel(2,av2);}}

/* k4263 in k4260 */
static void C_ccall f_4265(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4265,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5547,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:67: scheme#append */
t3=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[371];
av2[3]=*((C_word*)lf[2]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5545 in k4263 in k4260 */
static void C_ccall f_5547(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5547,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[2]+1 /* (set! ##sys#features ...) */,t1);
t3=C_set_block_item(lf[3] /* ##sys#current-source-filename */,0,C_SCHEME_FALSE);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5552,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:89: chicken.base#make-parameter */
t5=*((C_word*)lf[194]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_5552(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5552,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[4]+1 /* (set! ##sys#current-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5556,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:90: chicken.base#make-parameter */
t4=*((C_word*)lf[194]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_5556(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_5556,c,av);}
a=C_alloc(15);
t2=C_mutate((C_word*)lf[5]+1 /* (set! ##sys#current-meta-environment ...) */,t1);
t3=C_mutate(&lf[6] /* (set! chicken.syntax#lookup ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5558,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate(&lf[8] /* (set! chicken.syntax#macro-alias ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5575,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[12]+1 /* (set! chicken.syntax#strip-syntax ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5622,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[14]+1 /* (set! ##sys#extend-se ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5764,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5946,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:148: chicken.base#make-parameter */
t8=*((C_word*)lf[194]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}

/* chicken.syntax#lookup in k5554 in k5550 in k5545 in k4263 in k4260 */
static C_word C_fcall f_5558(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;{}
t3=C_u_i_assq(t1,t2);
if(C_truep(t3)){
return(C_i_cdr(t3));}
else{
t4=C_i_getprop(t1,lf[7],C_SCHEME_FALSE);
return((C_truep(t4)?t4:C_SCHEME_FALSE));}}

/* chicken.syntax#macro-alias in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_5575(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_5575,3,t1,t2,t3);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5582,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:98: chicken.keyword#keyword? */
t5=*((C_word*)lf[11]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5580 in chicken.syntax#macro-alias in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_5582(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5582,c,av);}
a=C_alloc(5);
t2=(C_truep(t1)?t1:C_u_i_namespaced_symbolp(((C_word*)t0)[2]));
if(C_truep(t2)){
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5588,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:100: chicken.base#gensym */
t4=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k5586 in k5580 in chicken.syntax#macro-alias in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_5588(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,1)))){
C_save_and_reclaim((void *)f_5588,c,av);}
a=C_alloc(16);
t2=(
/* expand.scm:101: lookup */
  f_5558(((C_word*)t0)[2],((C_word*)t0)[3])
);
t3=(C_truep(t2)?t2:((C_word*)t0)[2]);
t4=C_i_getprop(((C_word*)t0)[2],lf[9],C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_a_i_putprop(&a,3,t1,lf[7],t3);
t6=C_a_i_putprop(&a,3,t1,lf[9],t4);
t7=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t7;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t5=C_a_i_putprop(&a,3,t1,lf[7],t3);
t6=C_a_i_putprop(&a,3,t1,lf[9],((C_word*)t0)[2]);
t7=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t7;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* chicken.syntax#strip-syntax in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_5622(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_5622,c,av);}
a=C_alloc(9);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5628,a[2]=t4,a[3]=t6,a[4]=((C_word)li3),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_5628(t8,t1,t2);}

/* walk in chicken.syntax#strip-syntax in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_5628(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_5628,3,t0,t1,t2);}
a=C_alloc(6);
t3=C_i_assq(t2,((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(t3)){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_i_cdr(t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5644,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:115: chicken.keyword#keyword? */
t5=*((C_word*)lf[11]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k5642 in walk in chicken.syntax#strip-syntax in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_5644(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_5644,c,av);}
a=C_alloc(15);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[3]))){
t2=C_i_getprop(((C_word*)t0)[3],lf[7],C_SCHEME_FALSE);
t3=C_i_getprop(((C_word*)t0)[3],lf[9],C_SCHEME_FALSE);
if(C_truep(t3)){
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_i_not(t2))){
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_pairp(t2);
t5=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=(C_truep(t4)?((C_word*)t0)[3]:t2);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t2=C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_FALSE);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_cons(&a,2,t3,((C_word*)((C_word*)t0)[4])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[4])+1,t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5706,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:125: walk */
t7=((C_word*)((C_word*)t0)[5])[1];
f_5628(t7,t6,C_u_i_car(((C_word*)t0)[3]));}
else{
if(C_truep(C_i_vectorp(((C_word*)t0)[3]))){
t2=C_block_size(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5724,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:130: scheme#make-vector */
t4=*((C_word*)lf[13]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}}}}

/* k5697 in k5704 in k5642 in walk in chicken.syntax#strip-syntax in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_5699(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5699,c,av);}
t2=C_i_setslot(((C_word*)t0)[2],C_fix(1),t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5704 in k5642 in walk in chicken.syntax#strip-syntax in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_5706(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5706,c,av);}
a=C_alloc(4);
t2=C_i_setslot(((C_word*)t0)[2],C_fix(0),t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5699,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:126: walk */
t4=((C_word*)((C_word*)t0)[4])[1];
f_5628(t4,t3,C_u_i_cdr(((C_word*)t0)[5]));}

/* k5722 in k5642 in walk in chicken.syntax#strip-syntax in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_5724(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_5724,c,av);}
a=C_alloc(16);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5733,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t6,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[2],a[7]=((C_word)li2),tmp=(C_word)a,a+=8,tmp));
t8=((C_word*)t6)[1];
f_5733(t8,((C_word*)t0)[6],C_fix(0));}

/* doloop874 in k5722 in k5642 in walk in chicken.syntax#strip-syntax in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_5733(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_5733,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5754,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:134: walk */
t4=((C_word*)((C_word*)t0)[5])[1];
f_5628(t4,t3,C_slot(((C_word*)t0)[6],t2));}}

/* k5752 in doloop874 in k5722 in k5642 in walk in chicken.syntax#strip-syntax in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_5754(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5754,c,av);}
t2=C_i_setslot(((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=((C_word*)((C_word*)t0)[4])[1];
f_5733(t3,((C_word*)t0)[5],C_fixnum_plus(((C_word*)t0)[3],C_fix(1)));}

/* ##sys#extend-se in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_5764(C_word c,C_word *av){
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
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_5764,c,av);}
a=C_alloc(18);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5768,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_rest_nullp(c,4))){
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=C_i_check_list_2(t3,lf[17]);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5907,a[2]=t7,a[3]=t11,a[4]=t8,a[5]=((C_word)li7),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_5907(t13,t4,t3);}
else{
t5=t4;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_get_rest_arg(c,4,av,4,t0);
f_5768(2,av2);}}}

/* k5766 in ##sys#extend-se in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_5768(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_5768,c,av);}
a=C_alloc(12);
t2=C_i_check_list_2(t1,lf[15]);
t3=C_i_check_list_2(((C_word*)t0)[2],lf[15]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5793,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5858,a[2]=t6,a[3]=((C_word)li6),tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_5858(t8,t4,t1,((C_word*)t0)[2]);}

/* k5791 in k5766 in ##sys#extend-se in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_5793(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,4)))){
C_save_and_reclaim((void *)f_5793,c,av);}
a=C_alloc(17);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5808,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5810,a[2]=t4,a[3]=t8,a[4]=t5,a[5]=((C_word)li5),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_5810(t10,t6,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k5806 in k5791 in k5766 in ##sys#extend-se in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_5808(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5808,c,av);}
/* expand.scm:143: scheme#append */
t2=*((C_word*)lf[16]+1);{
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

/* map-loop959 in k5791 in k5766 in ##sys#extend-se in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_5810(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_5810,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_cons(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9);
t11=C_mutate(((C_word *)((C_word*)t0)[2])+1,t9);
t13=t1;
t14=C_slot(t2,C_fix(1));
t15=C_slot(t3,C_fix(1));
t1=t13;
t2=t14;
t3=t15;
goto loop;}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* for-each-loop922 in k5766 in ##sys#extend-se in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_5858(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_5858,4,t0,t1,t2,t3);}
a=C_alloc(8);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_i_getprop(t7,lf[9],C_SCHEME_FALSE);
t9=(C_truep(t8)?C_a_i_putprop(&a,3,t6,lf[9],t8):C_a_i_putprop(&a,3,t6,lf[9],t7));
t11=t1;
t12=C_slot(t2,C_fix(1));
t13=C_slot(t3,C_fix(1));
t1=t11;
t2=t12;
t3=t13;
goto loop;}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* map-loop896 in ##sys#extend-se in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_5907(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_5907,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5932,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:137: g902 */
t4=*((C_word*)lf[10]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5930 in map-loop896 in ##sys#extend-se in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_5932(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5932,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_5907(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_5946(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(69,c,6)))){
C_save_and_reclaim((void *)f_5946,c,av);}
a=C_alloc(69);
t2=C_mutate((C_word*)lf[18]+1 /* (set! ##sys#macro-environment ...) */,t1);
t3=C_set_block_item(lf[19] /* ##sys#scheme-macro-environment */,0,C_SCHEME_END_OF_LIST);
t4=C_set_block_item(lf[20] /* ##sys#chicken-ffi-macro-environment */,0,C_SCHEME_END_OF_LIST);
t5=C_set_block_item(lf[21] /* ##sys#chicken.condition-macro-environment */,0,C_SCHEME_END_OF_LIST);
t6=C_set_block_item(lf[22] /* ##sys#chicken.time-macro-environment */,0,C_SCHEME_END_OF_LIST);
t7=C_set_block_item(lf[23] /* ##sys#chicken.type-macro-environment */,0,C_SCHEME_END_OF_LIST);
t8=C_set_block_item(lf[24] /* ##sys#chicken.syntax-macro-environment */,0,C_SCHEME_END_OF_LIST);
t9=C_set_block_item(lf[25] /* ##sys#chicken.base-macro-environment */,0,C_SCHEME_END_OF_LIST);
t10=C_mutate((C_word*)lf[26]+1 /* (set! ##sys#ensure-transformer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5955,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[30]+1 /* (set! ##sys#extend-macro-environment ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5979,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[31]+1 /* (set! ##sys#macro? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6021,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[32]+1 /* (set! ##sys#undefine-macro! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6058,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[33]+1 /* (set! ##sys#expand-0 ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6103,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp));
t15=C_set_block_item(lf[60] /* ##sys#compiler-syntax-hook */,0,C_SCHEME_FALSE);
t16=C_set_block_item(lf[62] /* ##sys#enable-runtime-macros */,0,C_SCHEME_FALSE);
t17=C_mutate((C_word*)lf[42]+1 /* (set! chicken.syntax#expansion-result-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6601,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[63]+1 /* (set! chicken.syntax#expand ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6604,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[64]+1 /* (set! ##sys#extended-lambda-list? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6670,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[68]+1 /* (set! ##sys#expand-extended-lambda-list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6717,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[91]+1 /* (set! ##sys#expand-multiple-values-assignment ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7326,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp));
t22=C_set_block_item(lf[96] /* chicken.syntax#define-definition */,0,C_SCHEME_UNDEFINED);
t23=C_set_block_item(lf[97] /* chicken.syntax#define-syntax-definition */,0,C_SCHEME_UNDEFINED);
t24=C_set_block_item(lf[98] /* chicken.syntax#define-values-definition */,0,C_SCHEME_UNDEFINED);
t25=lf[99] /* chicken.syntax#import-definition */ =C_SCHEME_UNDEFINED;;
t26=C_mutate((C_word*)lf[100]+1 /* (set! ##sys#canonicalize-body ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7506,a[2]=((C_word)li64),tmp=(C_word)a,a+=3,tmp));
t27=C_mutate((C_word*)lf[119]+1 /* (set! chicken.syntax#match-expression ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8512,a[2]=((C_word)li67),tmp=(C_word)a,a+=3,tmp));
t28=C_mutate((C_word*)lf[113]+1 /* (set! chicken.syntax#expand-curried-define ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8594,a[2]=((C_word)li69),tmp=(C_word)a,a+=3,tmp));
t29=C_set_block_item(lf[120] /* ##sys#line-number-database */,0,C_SCHEME_FALSE);
t30=C_set_block_item(lf[121] /* ##sys#syntax-error-culprit */,0,C_SCHEME_FALSE);
t31=C_set_block_item(lf[122] /* ##sys#syntax-context */,0,C_SCHEME_END_OF_LIST);
t32=C_mutate((C_word*)lf[123]+1 /* (set! chicken.syntax#syntax-error ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8649,a[2]=((C_word)li70),tmp=(C_word)a,a+=3,tmp));
t33=C_mutate((C_word*)lf[43]+1 /* (set! ##sys#syntax-error-hook ...) */,*((C_word*)lf[123]+1));
t34=C_mutate((C_word*)lf[126]+1 /* (set! ##sys#syntax-error/context ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8660,a[2]=((C_word)li75),tmp=(C_word)a,a+=3,tmp));
t35=C_mutate((C_word*)lf[145]+1 /* (set! chicken.syntax#get-line-number ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8881,a[2]=((C_word)li77),tmp=(C_word)a,a+=3,tmp));
t36=C_mutate((C_word*)lf[56]+1 /* (set! ##sys#check-syntax ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8920,a[2]=((C_word)li88),tmp=(C_word)a,a+=3,tmp));
t37=C_mutate(&lf[178] /* (set! chicken.syntax#make-er/ir-transformer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9364,a[2]=((C_word)li98),tmp=(C_word)a,a+=3,tmp));
t38=C_mutate((C_word*)lf[183]+1 /* (set! chicken.syntax#er-macro-transformer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9893,a[2]=((C_word)li99),tmp=(C_word)a,a+=3,tmp));
t39=C_mutate((C_word*)lf[184]+1 /* (set! chicken.syntax#ir-macro-transformer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9899,a[2]=((C_word)li100),tmp=(C_word)a,a+=3,tmp));
t40=C_mutate((C_word*)lf[185]+1 /* (set! ##sys#er-transformer ...) */,*((C_word*)lf[183]+1));
t41=C_mutate((C_word*)lf[186]+1 /* (set! ##sys#ir-transformer ...) */,*((C_word*)lf[184]+1));
t42=C_mutate((C_word*)lf[96]+1 /* (set! chicken.syntax#define-definition ...) */,*((C_word*)lf[96]+1));
t43=C_mutate((C_word*)lf[97]+1 /* (set! chicken.syntax#define-syntax-definition ...) */,*((C_word*)lf[97]+1));
t44=C_mutate((C_word*)lf[98]+1 /* (set! chicken.syntax#define-values-definition ...) */,*((C_word*)lf[98]+1));
t45=C_mutate((C_word*)lf[42]+1 /* (set! chicken.syntax#expansion-result-hook ...) */,*((C_word*)lf[42]+1));
t46=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9912,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t47=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13958,a[2]=t46,tmp=(C_word)a,a+=3,tmp);
t48=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13960,a[2]=((C_word)li177),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:953: ##sys#er-transformer */
t49=*((C_word*)lf[185]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t49;
av2[1]=t47;
av2[2]=t48;
((C_proc)(void*)(*((C_word*)t49+1)))(3,av2);}}

/* ##sys#ensure-transformer in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_5955(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5955,c,av);}
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
if(C_truep(C_i_structurep(t2,lf[27]))){
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
/* expand.scm:162: ##sys#error */
t5=*((C_word*)lf[28]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t1;
av2[2]=t4;
av2[3]=lf[29];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}}

/* ##sys#extend-macro-environment in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_5979(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5979,c,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5983,a[2]=t2,a[3]=t3,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:165: ##sys#macro-environment */
t6=*((C_word*)lf[18]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k5981 in ##sys#extend-macro-environment in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_5983(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5983,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5986,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:166: ##sys#ensure-transformer */
t3=*((C_word*)lf[26]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5984 in k5981 in ##sys#extend-macro-environment in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_5986(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_5986,c,av);}
a=C_alloc(16);
t2=(
/* expand.scm:167: lookup */
  f_5558(((C_word*)t0)[2],((C_word*)t0)[3])
);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5993,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word)li10),tmp=(C_word)a,a+=5,tmp);
/* expand.scm:167: g1023 */
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=(
/* expand.scm:167: g1023 */
  f_5993(t3,t2)
);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_a_i_list2(&a,2,((C_word*)t0)[4],t1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6011,a[2]=((C_word*)t0)[5],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_a_i_cons(&a,2,((C_word*)t0)[2],t3);
t6=C_a_i_cons(&a,2,t5,((C_word*)t0)[3]);
/* expand.scm:174: ##sys#macro-environment */
t7=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t4;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}

/* g1023 in k5984 in k5981 in ##sys#extend-macro-environment in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static C_word C_fcall f_5993(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t2=C_i_set_car(t1,((C_word*)t0)[2]);
t3=C_i_set_car(C_u_i_cdr(t1),((C_word*)t0)[3]);
return(t1);}

/* k6009 in k5984 in k5981 in ##sys#extend-macro-environment in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6011(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6011,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* ##sys#macro? in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6021(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6021,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6025,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_rest_nullp(c,3))){
/* expand.scm:178: ##sys#current-environment */
t4=*((C_word*)lf[4]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=t3;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_get_rest_arg(c,3,av,3,t0);
f_6025(2,av2);}}}

/* k6023 in ##sys#macro? in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6025(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6025,c,av);}
a=C_alloc(4);
t2=(
/* expand.scm:179: lookup */
  f_5558(((C_word*)t0)[2],t1)
);
t3=C_i_pairp(t2);
if(C_truep(t3)){
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6047,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:181: ##sys#macro-environment */
t5=*((C_word*)lf[18]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k6045 in k6023 in ##sys#macro? in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6047(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6047,c,av);}
t2=(
/* expand.scm:181: lookup */
  f_5558(((C_word*)t0)[2],t1)
);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(t2)?C_i_pairp(t2):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* ##sys#undefine-macro! in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6058(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6058,c,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6066,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6070,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:187: ##sys#macro-environment */
t5=*((C_word*)lf[18]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k6064 in ##sys#undefine-macro! in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6066(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6066,c,av);}
/* expand.scm:185: ##sys#macro-environment */
t2=*((C_word*)lf[18]+1);{
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

/* k6068 in ##sys#undefine-macro! in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6070(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_6070,c,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6072,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li13),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_6072(t5,((C_word*)t0)[3],t1);}

/* loop in k6068 in ##sys#undefine-macro! in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_6072(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_6072,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_caar(t2);
t4=C_eqp(((C_word*)t0)[2],t3);
if(C_truep(t4)){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_u_i_cdr(t2);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_u_i_car(t2);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6095,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:190: loop */
t8=t6;
t9=C_u_i_cdr(t2);
t1=t8;
t2=t9;
goto loop;}}}

/* k6093 in loop in k6068 in ##sys#undefine-macro! in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6095(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_6095,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* ##sys#expand-0 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6103(C_word c,C_word *av){
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
C_word t13;
C_word t14;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(22,c,7)))){
C_save_and_reclaim((void *)f_6103,c,av);}
a=C_alloc(22);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6106,a[2]=t3,a[3]=((C_word)li27),tmp=(C_word)a,a+=4,tmp));
t10=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6305,a[2]=t6,a[3]=((C_word)li28),tmp=(C_word)a,a+=4,tmp));
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6349,a[2]=t3,a[3]=t8,a[4]=t12,a[5]=t6,a[6]=t4,a[7]=((C_word)li32),tmp=(C_word)a,a+=8,tmp));
t14=((C_word*)t12)[1];
f_6349(t14,t1,t2);}

/* call-handler in ##sys#expand-0 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_6106(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_6106,7,t0,t1,t2,t3,t4,t5,t6);}
a=C_alloc(12);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6116,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6121,a[2]=t2,a[3]=t4,a[4]=t6,a[5]=t3,a[6]=t5,a[7]=((C_word*)t0)[2],a[8]=((C_word)li26),tmp=(C_word)a,a+=9,tmp);
/* expand.scm:198: scheme#call-with-current-continuation */
t9=*((C_word*)lf[50]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t7;
av2[2]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* k6114 in call-handler in ##sys#expand-0 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6116(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6116,c,av);}
/* g10751076 */
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a6120 in call-handler in ##sys#expand-0 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6121(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_6121,c,av);}
a=C_alloc(15);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6127,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li17),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6228,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word)li25),tmp=(C_word)a,a+=10,tmp);
/* expand.scm:198: chicken.condition#with-exception-handler */
t5=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* a6126 in a6120 in call-handler in ##sys#expand-0 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6127(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6127,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6133,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li16),tmp=(C_word)a,a+=5,tmp);
/* expand.scm:198: k1072 */
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a6132 in a6126 in a6120 in call-handler in ##sys#expand-0 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6133(C_word c,C_word *av){
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
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_6133,c,av);}
a=C_alloc(11);
t2=C_i_structurep(((C_word*)t0)[2],lf[34]);
t3=(C_truep(t2)?C_i_memq(lf[35],C_slot(((C_word*)t0)[2],C_fix(1))):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=C_slot(((C_word*)t0)[2],C_fix(1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6155,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=C_slot(((C_word*)t0)[2],C_fix(2));
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6161,a[2]=((C_word*)t0)[3],a[3]=t8,a[4]=((C_word)li15),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_6161(t10,t5,t6);}
else{
/* expand.scm:201: chicken.condition#abort */
t4=*((C_word*)lf[36]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k6153 in a6132 in a6126 in a6120 in call-handler in ##sys#expand-0 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6155(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6155,c,av);}
a=C_alloc(4);
t2=C_a_i_record3(&a,3,lf[34],((C_word*)t0)[2],t1);
/* expand.scm:201: chicken.condition#abort */
t3=*((C_word*)lf[36]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* copy in a6132 in a6126 in a6120 in call-handler in ##sys#expand-0 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_6161(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6161,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=C_u_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6178,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_equalp(lf[41],t3))){
t6=C_i_pairp(t4);
t7=t5;
f_6178(t7,(C_truep(t6)?C_i_stringp(C_u_i_car(t4)):C_SCHEME_FALSE));}
else{
t6=t5;
f_6178(t6,C_SCHEME_FALSE);}}}

/* k6176 in copy in a6132 in a6126 in a6120 in call-handler in ##sys#expand-0 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_6178(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,5)))){
C_save_and_reclaim_args((void *)trf_6178,2,t0,t1);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6189,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:217: scheme#string-append */
t3=*((C_word*)lf[38]+1);{
C_word av2[6];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[39];
av2[3]=C_slot(((C_word*)t0)[4],C_fix(1));
av2[4]=lf[40];
av2[5]=C_i_car(((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}
else{
/* expand.scm:223: copy */
t2=((C_word*)((C_word*)t0)[5])[1];
f_6161(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k6187 in k6176 in copy in a6132 in a6126 in a6120 in call-handler in ##sys#expand-0 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6189(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_6189,c,av);}
a=C_alloc(6);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,lf[37],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a6227 in a6120 in call-handler in ##sys#expand-0 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6228(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_6228,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6234,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li22),tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6293,a[2]=((C_word*)t0)[8],a[3]=((C_word)li24),tmp=(C_word)a,a+=4,tmp);
/* expand.scm:198: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* a6233 in a6227 in a6120 in call-handler in ##sys#expand-0 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6234(C_word c,C_word *av){
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
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(31,c,4)))){
C_save_and_reclaim((void *)f_6234,c,av);}
a=C_alloc(31);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6238,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6268,a[2]=((C_word*)t0)[2],a[3]=((C_word)li18),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6274,a[2]=t6,a[3]=t4,a[4]=((C_word)li19),tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6279,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word)li20),tmp=(C_word)a,a+=7,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6285,a[2]=t4,a[3]=t6,a[4]=((C_word)li21),tmp=(C_word)a,a+=5,tmp);
/* expand.scm:228: ##sys#dynamic-wind */
t10=*((C_word*)lf[48]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t10;
av2[1]=t2;
av2[2]=t7;
av2[3]=t8;
av2[4]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}
else{
/* expand.scm:231: handler */
t3=((C_word*)t0)[5];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[6];
av2[4]=((C_word*)t0)[7];
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}}

/* k6236 in a6233 in a6227 in a6120 in call-handler in ##sys#expand-0 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6238(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_6238,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6241,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=C_i_not(((C_word*)t0)[4]);
t4=(C_truep(t3)?C_eqp(((C_word*)t0)[3],t1):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6257,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6261,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:235: scheme#symbol->string */
t7=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
/* expand.scm:239: expansion-result-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[42]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[42]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}}

/* k6239 in k6236 in a6233 in a6227 in a6120 in call-handler in ##sys#expand-0 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6241(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6241,c,av);}
/* expand.scm:239: expansion-result-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[42]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[42]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}

/* k6255 in k6236 in a6233 in a6227 in a6120 in call-handler in ##sys#expand-0 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6257(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6257,c,av);}
/* expand.scm:233: ##sys#syntax-error-hook */
t2=*((C_word*)lf[43]+1);{
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

/* k6259 in k6236 in a6233 in a6227 in a6120 in call-handler in ##sys#expand-0 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6261(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6261,c,av);}
/* expand.scm:234: scheme#string-append */
t2=*((C_word*)lf[38]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[44];
av2[3]=t1;
av2[4]=lf[45];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* f_6268 in a6233 in a6227 in a6120 in call-handler in ##sys#expand-0 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6268(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6268,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a6273 in a6233 in a6227 in a6120 in call-handler in ##sys#expand-0 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6274(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6274,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[47]+1));
t3=C_mutate((C_word*)lf[47]+1 /* (set! chicken.internal.syntax-rules#syntax-rules-mismatch ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a6278 in a6233 in a6227 in a6120 in call-handler in ##sys#expand-0 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6279(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6279,c,av);}
/* expand.scm:230: handler */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t2))(5,av2);}}

/* a6284 in a6233 in a6227 in a6120 in call-handler in ##sys#expand-0 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6285(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6285,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[47]+1));
t3=C_mutate((C_word*)lf[47]+1 /* (set! chicken.internal.syntax-rules#syntax-rules-mismatch ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a6292 in a6227 in a6120 in call-handler in ##sys#expand-0 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6293(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_6293,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6299,a[2]=t2,a[3]=((C_word)li23),tmp=(C_word)a,a+=4,tmp);
/* expand.scm:198: k1072 */
t4=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a6298 in a6292 in a6227 in a6120 in call-handler in ##sys#expand-0 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6299(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6299,c,av);}{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=0;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
C_apply_values(3,av2);}}

/* expand in ##sys#expand-0 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_6305(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,6)))){
C_save_and_reclaim_args((void *)trf_6305,5,t0,t1,t2,t3,t4);}
a=C_alloc(3);
t5=C_i_listp(t3);
if(C_truep(C_i_not(t5))){
/* expand.scm:251: ##sys#syntax-error-hook */
t6=*((C_word*)lf[43]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t1;
av2[2]=lf[51];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
if(C_truep(C_i_pairp(t4))){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6331,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:255: call-handler */
t7=((C_word*)((C_word*)t0)[2])[1];
f_6106(t7,t6,t2,C_i_cadr(t4),t3,C_u_i_car(t4),C_SCHEME_FALSE);}
else{
/* expand.scm:257: scheme#values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
av2[3]=C_SCHEME_FALSE;
C_values(4,av2);}}}}

/* k6329 in expand in ##sys#expand-0 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6331(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6331,c,av);}
/* expand.scm:253: scheme#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_TRUE;
C_values(4,av2);}}

/* loop in ##sys#expand-0 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_6349(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,0,3)))){
C_save_and_reclaim_args((void *)trf_6349,3,t0,t1,t2);}
a=C_alloc(18);
if(C_truep(C_i_pairp(t2))){
t3=C_u_i_car(t2);
t4=C_u_i_cdr(t2);
if(C_truep(C_i_symbolp(t3))){
t5=(
/* expand.scm:263: lookup */
  f_5558(t3,((C_word*)t0)[2])
);
t6=(C_truep(t5)?t5:t3);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6373,a[2]=t8,a[3]=t4,a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=t2,a[7]=((C_word*)t0)[3],a[8]=t3,a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[6],tmp=(C_word)a,a+=12,tmp);
if(C_truep(C_i_pairp(((C_word*)t8)[1]))){
t10=t9;
f_6373(t10,C_SCHEME_UNDEFINED);}
else{
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6591,a[2]=t8,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:265: ##sys#macro-environment */
t11=*((C_word*)lf[18]+1);{
C_word av2[2];
av2[0]=t11;
av2[1]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}}
else{
/* expand.scm:291: scheme#values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
C_values(4,av2);}}}
else{
/* expand.scm:292: scheme#values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
C_values(4,av2);}}}

/* k6371 in loop in ##sys#expand-0 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_6373(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,6)))){
C_save_and_reclaim_args((void *)trf_6373,2,t0,t1);}
a=C_alloc(9);
t2=C_eqp(((C_word*)((C_word*)t0)[2])[1],lf[52]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6382,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:267: ##sys#check-syntax */
t4=*((C_word*)lf[56]+1);{
C_word av2[7];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[57];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[59];
av2[5]=C_SCHEME_FALSE;
av2[6]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6528,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[11])){
if(C_truep(C_i_symbolp(((C_word*)((C_word*)t0)[2])[1]))){
t4=((C_word*)((C_word*)t0)[2])[1];
t5=t3;
f_6528(t5,C_i_getprop(t4,lf[61],C_SCHEME_FALSE));}
else{
t4=t3;
f_6528(t4,C_SCHEME_FALSE);}}
else{
t4=t3;
f_6528(t4,C_SCHEME_FALSE);}}}

/* k6380 in k6371 in loop in ##sys#expand-0 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6382(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_6382,c,av);}
a=C_alloc(5);
t2=C_i_car(((C_word*)t0)[2]);
if(C_truep(C_i_symbolp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6394,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:270: ##sys#check-syntax */
t4=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[57];
av2[3]=((C_word*)t0)[2];
av2[4]=lf[58];
av2[5]=C_SCHEME_FALSE;
av2[6]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}}
else{
/* expand.scm:281: scheme#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_FALSE;
C_values(4,av2);}}}

/* k6392 in k6380 in k6371 in loop in ##sys#expand-0 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6394(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,3)))){
C_save_and_reclaim((void *)f_6394,c,av);}
a=C_alloc(19);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_check_list_2(t2,lf[17]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6484,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6490,a[2]=t5,a[3]=t10,a[4]=t6,a[5]=((C_word)li30),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_6490(t12,t8,t2);}

/* k6417 in k6482 in k6392 in k6380 in k6371 in loop in ##sys#expand-0 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6419(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_6419,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[55],t2);
/* expand.scm:272: scheme#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=t3;
av2[3]=C_SCHEME_TRUE;
C_values(4,av2);}}

/* map-loop1171 in k6482 in k6392 in k6380 in k6371 in loop in ##sys#expand-0 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_6421(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_6421,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cadr(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t9=t1;
t10=C_slot(t2,C_fix(1));
t1=t9;
t2=t10;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6482 in k6392 in k6380 in k6371 in loop in ##sys#expand-0 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6484(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(41,c,3)))){
C_save_and_reclaim((void *)f_6484,c,av);}
a=C_alloc(41);
t2=C_i_cddr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,t2);
t4=C_a_i_cons(&a,2,lf[53],t3);
t5=C_a_i_list(&a,2,((C_word*)t0)[3],t4);
t6=C_a_i_list(&a,1,t5);
t7=C_a_i_list(&a,3,lf[54],t6,((C_word*)t0)[3]);
t8=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t9=t8;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=((C_word*)t10)[1];
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6419,a[2]=t7,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6421,a[2]=t10,a[3]=t14,a[4]=t11,a[5]=((C_word)li29),tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_6421(t16,t12,((C_word*)t0)[5]);}

/* map-loop1144 in k6392 in k6380 in k6371 in loop in ##sys#expand-0 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_6490(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_6490,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t9=t1;
t10=C_slot(t2,C_fix(1));
t1=t9;
t2=t10;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6526 in k6371 in loop in ##sys#expand-0 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_6528(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_6528,2,t0,t1);}
a=C_alloc(9);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6532,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li31),tmp=(C_word)a,a+=9,tmp);
/* expand.scm:266: g1204 */
t3=t2;
f_6532(t3,((C_word*)t0)[8],t1);}
else{
/* expand.scm:290: expand */
t2=((C_word*)((C_word*)t0)[3])[1];
f_6305(t2,((C_word*)t0)[8],((C_word*)t0)[4],((C_word*)t0)[2],((C_word*)((C_word*)t0)[5])[1]);}}

/* g1204 in k6526 in k6371 in loop in ##sys#expand-0 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_6532(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,6)))){
C_save_and_reclaim_args((void *)trf_6532,3,t0,t1,t2);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6536,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:284: call-handler */
t4=((C_word*)((C_word*)t0)[7])[1];
f_6106(t4,t3,((C_word*)t0)[4],C_i_car(t2),((C_word*)t0)[2],C_u_i_cdr(t2),C_SCHEME_TRUE);}

/* k6534 in g1204 in k6526 in k6371 in loop in ##sys#expand-0 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6536(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_6536,c,av);}
a=C_alloc(5);
t2=C_eqp(t1,((C_word*)t0)[2]);
if(C_truep(t2)){
/* expand.scm:285: expand */
t3=((C_word*)((C_word*)t0)[3])[1];
f_6305(t3,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[2],((C_word*)((C_word*)t0)[6])[1]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6548,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(*((C_word*)lf[60]+1))){
/* expand.scm:288: ##sys#compiler-syntax-hook */
t4=*((C_word*)lf[60]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[6])[1];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
/* expand.scm:289: loop */
t4=((C_word*)((C_word*)t0)[7])[1];
f_6349(t4,((C_word*)t0)[4],t1);}}}

/* k6546 in k6534 in g1204 in k6526 in k6371 in loop in ##sys#expand-0 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6548(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6548,c,av);}
/* expand.scm:289: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6349(t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k6589 in loop in ##sys#expand-0 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6591(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6591,c,av);}
t2=(
/* expand.scm:265: lookup */
  f_5558(((C_word*)((C_word*)t0)[2])[1],t1)
);
if(C_truep(t2)){
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)t0)[3];
f_6373(t4,t3);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=((C_word*)t0)[3];
f_6373(t5,t4);}}

/* chicken.syntax#expansion-result-hook in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6601(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6601,c,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.syntax#expand in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6604(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_6604,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6608,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t3))){
/* expand.scm:301: ##sys#current-environment */
t5=*((C_word*)lf[4]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_i_car(t3);
f_6608(2,av2);}}}

/* k6606 in chicken.syntax#expand in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6608(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_6608,c,av);}
a=C_alloc(8);
t2=C_i_nullp(((C_word*)t0)[2]);
t3=(C_truep(t2)?C_SCHEME_END_OF_LIST:C_i_cdr(((C_word*)t0)[2]));
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6622,a[2]=t1,a[3]=t5,a[4]=t9,a[5]=((C_word)li37),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_6622(t11,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* loop in k6606 in chicken.syntax#expand in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_6622(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_6622,3,t0,t1,t2);}
a=C_alloc(10);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6628,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li35),tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6634,a[2]=((C_word*)t0)[4],a[3]=((C_word)li36),tmp=(C_word)a,a+=4,tmp);
/* expand.scm:303: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* a6627 in loop in k6606 in chicken.syntax#expand in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6628(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6628,c,av);}
/* expand.scm:303: ##sys#expand-0 */
t2=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a6633 in loop in k6606 in chicken.syntax#expand in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6634(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6634,c,av);}
if(C_truep(t3)){
/* expand.scm:305: loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_6622(t4,t1,t2);}
else{
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* ##sys#extended-lambda-list? in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6670(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6670,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6676,a[2]=((C_word)li39),tmp=(C_word)a,a+=3,tmp);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=(
  f_6676(t2)
);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* loop in ##sys#extended-lambda-list? in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static C_word C_fcall f_6676(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_pairp(t1))){
t2=C_slot(t1,C_fix(0));
t3=C_eqp(t2,lf[65]);
if(C_truep(t3)){
if(C_truep(t3)){
return(C_SCHEME_TRUE);}
else{
t7=C_u_i_cdr(t1);
t1=t7;
goto loop;}}
else{
t4=C_eqp(t2,lf[66]);
if(C_truep(t4)){
if(C_truep(t4)){
return(C_SCHEME_TRUE);}
else{
t7=C_u_i_cdr(t1);
t1=t7;
goto loop;}}
else{
t5=C_eqp(t2,lf[67]);
if(C_truep(t5)){
return(C_SCHEME_TRUE);}
else{
t7=C_u_i_cdr(t1);
t1=t7;
goto loop;}}}}
else{
return(C_SCHEME_FALSE);}}

/* ##sys#expand-extended-lambda-list in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6717(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_6717,c,av);}
a=C_alloc(18);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6720,a[2]=t4,a[3]=t2,a[4]=((C_word)li41),tmp=(C_word)a,a+=5,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6737,a[2]=t8,a[3]=t10,a[4]=t3,a[5]=t6,a[6]=t5,a[7]=t1,a[8]=t2,tmp=(C_word)a,a+=9,tmp);
/* expand.scm:336: macro-alias */
f_5575(t11,lf[89],*((C_word*)lf[90]+1));}

/* err in ##sys#expand-extended-lambda-list in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_6720(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_6720,3,t0,t1,t2);}
/* expand.scm:331: errh */
t3=((C_word*)t0)[2];{
C_word av2[4];
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}

/* k6735 in ##sys#expand-extended-lambda-list in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6737(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_6737,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6740,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* expand.scm:338: macro-alias */
f_5575(t2,lf[88],*((C_word*)lf[25]+1));}

/* k6738 in k6735 in ##sys#expand-extended-lambda-list in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6740(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_6740,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6743,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* expand.scm:339: macro-alias */
f_5575(t2,lf[87],*((C_word*)lf[25]+1));}

/* k6741 in k6738 in k6735 in ##sys#expand-extended-lambda-list in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6743(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,7)))){
C_save_and_reclaim((void *)f_6743,c,av);}
a=C_alloc(14);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6748,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=t3,a[10]=((C_word*)t0)[8],a[11]=((C_word)li44),tmp=(C_word)a,a+=12,tmp));
t5=((C_word*)t3)[1];
f_6748(t5,((C_word*)t0)[9],C_fix(0),C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,((C_word*)t0)[10]);}

/* loop in k6741 in k6738 in k6735 in ##sys#expand-extended-lambda-list in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_6748(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
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
loop:
if(C_unlikely(!C_demand(C_calculate_demand(15,0,6)))){
C_save_and_reclaim_args((void *)trf_6748,7,t0,t1,t2,t3,t4,t5,t6);}
a=C_alloc(15);
if(C_truep(C_i_nullp(t6))){
t7=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6762,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t5,a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7010,a[2]=t7,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:348: reverse */
t9=*((C_word*)lf[70]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
/* expand.scm:348: reverse */
t8=*((C_word*)lf[70]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}}
else{
if(C_truep(C_i_symbolp(t6))){
if(C_truep(C_fixnum_greaterp(t2,C_fix(2)))){
/* expand.scm:376: err */
t7=((C_word*)t0)[8];
f_6720(t7,t1,lf[76]);}
else{
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t7=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
/* expand.scm:380: loop */
t12=t1;
t13=C_fix(4);
t14=t3;
t15=t4;
t16=C_SCHEME_END_OF_LIST;
t17=C_SCHEME_END_OF_LIST;
t1=t12;
t2=t13;
t3=t14;
t4=t15;
t5=t16;
t6=t17;
goto loop;}
else{
t7=C_mutate(((C_word *)((C_word*)t0)[3])+1,t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
/* expand.scm:380: loop */
t12=t1;
t13=C_fix(4);
t14=t3;
t15=t4;
t16=C_SCHEME_END_OF_LIST;
t17=C_SCHEME_END_OF_LIST;
t1=t12;
t2=t13;
t3=t14;
t4=t15;
t5=t16;
t6=t17;
goto loop;}}}
else{
t7=C_i_pairp(t6);
if(C_truep(C_i_not(t7))){
/* expand.scm:382: err */
t8=((C_word*)t0)[8];
f_6720(t8,t1,lf[77]);}
else{
t8=C_i_car(t6);
t9=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_7051,a[2]=t8,a[3]=t6,a[4]=t2,a[5]=((C_word*)t0)[9],a[6]=t1,a[7]=t3,a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[3],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[4],a[12]=t4,a[13]=t5,tmp=(C_word)a,a+=14,tmp);
if(C_truep(C_i_symbolp(t8))){
t10=C_eqp(C_fix(3),t2);
/* expand.scm:385: lookup */
t11=t9;
f_7051(t11,(C_truep(C_i_not(t10))?(
/* expand.scm:385: lookup */
  f_5558(t8,((C_word*)t0)[10])
):C_SCHEME_FALSE));}
else{
t10=t9;
f_7051(t10,C_SCHEME_FALSE);}}}}}

/* k6760 in loop in k6741 in k6738 in k6735 in ##sys#expand-extended-lambda-list in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6762(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(28,c,3)))){
C_save_and_reclaim((void *)f_6762,c,av);}
a=C_alloc(28);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6766,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_i_nullp(((C_word*)t0)[7]))){
t3=t2;
f_6766(t3,((C_word*)t0)[9]);}
else{
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6906,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[5],a[4]=((C_word)li42),tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6966,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],a[4]=t2,a[5]=t5,a[6]=t7,a[7]=t6,tmp=(C_word)a,a+=8,tmp);
/* expand.scm:360: reverse */
t9=*((C_word*)lf[70]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}}

/* k6764 in k6760 in loop in k6741 in k6738 in k6735 in ##sys#expand-extended-lambda-list in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_6766(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_6766,2,t0,t1);}
a=C_alloc(11);
if(C_truep(C_i_nullp(((C_word*)t0)[2]))){
/* expand.scm:347: scheme#values */{
C_word av2[4];
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t1;
C_values(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6778,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
if(C_truep(C_i_not(((C_word*)((C_word*)t0)[7])[1]))){
t3=C_i_nullp(((C_word*)t0)[8]);
t4=t2;
f_6778(t4,(C_truep(t3)?C_i_nullp(C_i_cdr(((C_word*)t0)[2])):C_SCHEME_FALSE));}
else{
t3=t2;
f_6778(t3,C_SCHEME_FALSE);}}}

/* k6776 in k6764 in k6760 in loop in k6741 in k6738 in k6735 in ##sys#expand-extended-lambda-list in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_6778(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_6778,2,t0,t1);}
a=C_alloc(12);
if(C_truep(t1)){
t2=C_i_caar(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6809,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:365: scheme#cadar */
t4=*((C_word*)lf[69]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t2=C_i_not(((C_word*)((C_word*)t0)[8])[1]);
t3=(C_truep(t2)?C_i_nullp(((C_word*)t0)[9]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6834,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:369: reverse */
t5=*((C_word*)lf[70]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6853,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6857,a[2]=((C_word*)t0)[8],a[3]=t4,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:372: reverse */
t6=*((C_word*)lf[70]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}}

/* k6807 in k6776 in k6764 in k6760 in loop in k6741 in k6738 in k6735 in ##sys#expand-extended-lambda-list in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6809(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(27,c,3)))){
C_save_and_reclaim((void *)f_6809,c,av);}
a=C_alloc(27);
t2=C_a_i_list(&a,3,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1],t1);
t3=C_a_i_list(&a,2,((C_word*)t0)[4],t2);
t4=C_a_i_list(&a,1,t3);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[5]);
t6=C_a_i_cons(&a,2,lf[52],t5);
t7=C_a_i_list(&a,1,t6);
/* expand.scm:347: scheme#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[6];
av2[2]=((C_word*)t0)[7];
av2[3]=t7;
C_values(4,av2);}}

/* k6832 in k6776 in k6764 in k6760 in loop in k6741 in k6738 in k6735 in ##sys#expand-extended-lambda-list in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6834(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_6834,c,av);}
a=C_alloc(12);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[3])[1],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=C_a_i_list(&a,1,t4);
/* expand.scm:347: scheme#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[5];
av2[2]=((C_word*)t0)[6];
av2[3]=t5;
C_values(4,av2);}}

/* k6851 in k6776 in k6764 in k6760 in loop in k6741 in k6738 in k6735 in ##sys#expand-extended-lambda-list in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6853(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_6853,c,av);}
a=C_alloc(12);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[3])[1],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=C_a_i_list(&a,1,t4);
/* expand.scm:347: scheme#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[5];
av2[2]=((C_word*)t0)[6];
av2[3]=t5;
C_values(4,av2);}}

/* k6855 in k6776 in k6764 in k6760 in loop in k6741 in k6738 in k6735 in ##sys#expand-extended-lambda-list in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6857(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_6857,c,av);}
a=C_alloc(3);
t2=((C_word*)((C_word*)t0)[2])[1];
if(C_truep(t2)){
t3=C_a_i_list1(&a,1,t2);
/* expand.scm:372: ##sys#append */
t4=*((C_word*)lf[71]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=C_a_i_list1(&a,1,t3);
/* expand.scm:372: ##sys#append */
t5=*((C_word*)lf[71]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* g1307 in k6760 in loop in k6741 in k6738 in k6735 in ##sys#expand-extended-lambda-list in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_6906(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_6906,3,t0,t1,t2);}
a=C_alloc(10);
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6959,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6963,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:356: chicken.syntax#strip-syntax */
t6=*((C_word*)lf[12]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k6957 in g1307 in k6760 in loop in k6741 in k6738 in k6735 in ##sys#expand-extended-lambda-list in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6959(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(30,c,1)))){
C_save_and_reclaim((void *)f_6959,c,av);}
a=C_alloc(30);
t2=C_a_i_list(&a,2,lf[72],t1);
t3=((C_word*)((C_word*)t0)[2])[1];
t4=(C_truep(t3)?t3:((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(C_i_pairp(C_u_i_cdr(((C_word*)t0)[4])))){
t5=C_u_i_cdr(((C_word*)t0)[4]);
t6=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t5);
t7=C_a_i_cons(&a,2,lf[73],t6);
t8=C_a_i_list(&a,1,t7);
t9=C_a_i_cons(&a,2,t4,t8);
t10=C_a_i_cons(&a,2,t2,t9);
t11=C_a_i_cons(&a,2,lf[74],t10);
t12=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t12;
av2[1]=C_a_i_list(&a,2,((C_word*)t0)[6],t11);
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}
else{
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_a_i_cons(&a,2,t2,t5);
t7=C_a_i_cons(&a,2,lf[74],t6);
t8=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_a_i_list(&a,2,((C_word*)t0)[6],t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k6961 in g1307 in k6760 in loop in k6741 in k6738 in k6735 in ##sys#expand-extended-lambda-list in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6963(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6963,c,av);}
/* expand.scm:332: chicken.keyword#string->keyword */
t2=*((C_word*)lf[75]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_slot(t1,C_fix(1));
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k6964 in k6760 in loop in k6741 in k6738 in k6735 in ##sys#expand-extended-lambda-list in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6966(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_6966,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6969,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6971,a[2]=((C_word*)t0)[5],a[3]=t4,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word)li43),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_6971(t6,t2,t1);}

/* k6967 in k6964 in k6760 in loop in k6741 in k6738 in k6735 in ##sys#expand-extended-lambda-list in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6969(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_6969,c,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];
f_6766(t4,C_a_i_list(&a,1,t3));}

/* map-loop1301 in k6964 in k6760 in loop in k6741 in k6738 in k6735 in ##sys#expand-extended-lambda-list in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_6971(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6971,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6996,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:353: g1307 */
t4=((C_word*)t0)[4];
f_6906(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6994 in map-loop1301 in k6964 in k6760 in loop in k6741 in k6738 in k6735 in ##sys#expand-extended-lambda-list in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_6996(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6996,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_6971(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k7008 in loop in k6741 in k6738 in k6735 in ##sys#expand-extended-lambda-list in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_7010(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7010,c,av);}
/* expand.scm:348: ##sys#append */
t2=*((C_word*)lf[71]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k7049 in loop in k6741 in k6738 in k6735 in ##sys#expand-extended-lambda-list in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_7051(C_word t0,C_word t1){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,6)))){
C_save_and_reclaim_args((void *)trf_7051,2,t0,t1);}
a=C_alloc(13);
t2=(C_truep(t1)?t1:((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[3]);
t4=C_eqp(t2,lf[66]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7064,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t3,a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[9])[1])){
t6=t5;
f_7064(t6,C_SCHEME_UNDEFINED);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7080,a[2]=((C_word*)t0)[9],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:389: macro-alias */
f_5575(t6,lf[79],((C_word*)t0)[10]);}}
else{
t5=C_eqp(t2,lf[65]);
if(C_truep(t5)){
if(C_truep(C_fixnum_less_or_equal_p(((C_word*)t0)[4],C_fix(1)))){
t6=C_i_pairp(t3);
t7=(C_truep(t6)?C_i_symbolp(C_u_i_car(t3)):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7101,a[2]=t3,a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[12],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_not(((C_word*)((C_word*)t0)[9])[1]))){
t9=C_i_car(t3);
t10=C_mutate(((C_word *)((C_word*)t0)[9])+1,t9);
t11=t8;
f_7101(t11,t10);}
else{
t9=t8;
f_7101(t9,C_SCHEME_UNDEFINED);}}
else{
/* expand.scm:400: err */
t8=((C_word*)t0)[8];
f_6720(t8,((C_word*)t0)[6],lf[80]);}}
else{
/* expand.scm:401: err */
t6=((C_word*)t0)[8];
f_6720(t6,((C_word*)t0)[6],lf[81]);}}
else{
t6=C_eqp(t2,lf[67]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7140,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[12],a[7]=t3,a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_not(((C_word*)((C_word*)t0)[9])[1]))){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7159,a[2]=((C_word*)t0)[9],a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:403: macro-alias */
f_5575(t8,lf[79],((C_word*)t0)[10]);}
else{
t8=t7;
f_7140(t8,C_SCHEME_UNDEFINED);}}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[2]))){
switch(((C_word*)t0)[4]){
case C_fix(0):
t7=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[7]);
/* expand.scm:410: loop */
t8=((C_word*)((C_word*)t0)[5])[1];
f_6748(t8,((C_word*)t0)[6],C_fix(0),t7,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,t3);
case C_fix(1):
t7=C_a_i_list2(&a,2,((C_word*)t0)[2],C_SCHEME_FALSE);
t8=C_a_i_cons(&a,2,t7,((C_word*)t0)[12]);
/* expand.scm:411: loop */
t9=((C_word*)((C_word*)t0)[5])[1];
f_6748(t9,((C_word*)t0)[6],C_fix(1),((C_word*)t0)[7],t8,C_SCHEME_END_OF_LIST,t3);
case C_fix(2):
/* expand.scm:412: err */
t7=((C_word*)t0)[8];
f_6720(t7,((C_word*)t0)[6],lf[83]);
default:
t7=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t8=C_a_i_cons(&a,2,t7,((C_word*)t0)[13]);
/* expand.scm:413: loop */
t9=((C_word*)((C_word*)t0)[5])[1];
f_6748(t9,((C_word*)t0)[6],C_fix(3),((C_word*)t0)[7],((C_word*)t0)[12],t8,t3);}}
else{
t7=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7227,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[7],a[9]=t3,a[10]=((C_word*)t0)[13],tmp=(C_word)a,a+=11,tmp);
if(C_truep(C_i_listp(((C_word*)t0)[2]))){
t8=C_eqp(C_fix(2),C_u_i_length(((C_word*)t0)[2]));
t9=t7;
f_7227(t9,(C_truep(t8)?C_i_symbolp(C_i_car(((C_word*)t0)[2])):C_SCHEME_FALSE));}
else{
t8=t7;
f_7227(t8,C_SCHEME_FALSE);}}}}}}

/* k7062 in k7049 in loop in k6741 in k6738 in k6735 in ##sys#expand-extended-lambda-list in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_7064(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,6)))){
C_save_and_reclaim_args((void *)trf_7064,2,t0,t1);}
t2=C_eqp(((C_word*)t0)[2],C_fix(0));
if(C_truep(t2)){
/* expand.scm:391: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_6748(t3,((C_word*)t0)[4],C_fix(1),((C_word*)t0)[5],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,((C_word*)t0)[6]);}
else{
/* expand.scm:392: err */
t3=((C_word*)t0)[7];
f_6720(t3,((C_word*)t0)[4],lf[78]);}}

/* k7078 in k7049 in loop in k6741 in k6738 in k6735 in ##sys#expand-extended-lambda-list in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_7080(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7080,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_7064(t3,t2);}

/* k7099 in k7049 in loop in k6741 in k6738 in k6735 in ##sys#expand-extended-lambda-list in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_7101(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,6)))){
C_save_and_reclaim_args((void *)trf_7101,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[2]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
/* expand.scm:399: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_6748(t4,((C_word*)t0)[5],C_fix(2),((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_END_OF_LIST,C_u_i_cdr(((C_word*)t0)[2]));}

/* k7138 in k7049 in loop in k6741 in k6738 in k6735 in ##sys#expand-extended-lambda-list in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_7140(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,6)))){
C_save_and_reclaim_args((void *)trf_7140,2,t0,t1);}
if(C_truep(C_fixnum_less_or_equal_p(((C_word*)t0)[2],C_fix(2)))){
/* expand.scm:405: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_6748(t2,((C_word*)t0)[4],C_fix(3),((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_END_OF_LIST,((C_word*)t0)[7]);}
else{
/* expand.scm:406: err */
t2=((C_word*)t0)[8];
f_6720(t2,((C_word*)t0)[4],lf[82]);}}

/* k7157 in k7049 in loop in k6741 in k6738 in k6735 in ##sys#expand-extended-lambda-list in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_7159(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7159,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_7140(t3,t2);}

/* k7225 in k7049 in loop in k6741 in k6738 in k6735 in ##sys#expand-extended-lambda-list in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_7227(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,6)))){
C_save_and_reclaim_args((void *)trf_7227,2,t0,t1);}
a=C_alloc(3);
if(C_truep(t1)){
switch(((C_word*)t0)[2]){
case C_fix(0):
/* expand.scm:416: err */
t2=((C_word*)t0)[3];
f_6720(t2,((C_word*)t0)[4],lf[84]);
case C_fix(1):
t2=C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[6]);
/* expand.scm:417: loop */
t3=((C_word*)((C_word*)t0)[7])[1];
f_6748(t3,((C_word*)t0)[4],C_fix(1),((C_word*)t0)[8],t2,C_SCHEME_END_OF_LIST,((C_word*)t0)[9]);
case C_fix(2):
/* expand.scm:418: err */
t2=((C_word*)t0)[3];
f_6720(t2,((C_word*)t0)[4],lf[85]);
default:
t2=C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[10]);
/* expand.scm:419: loop */
t3=((C_word*)((C_word*)t0)[7])[1];
f_6748(t3,((C_word*)t0)[4],C_fix(3),((C_word*)t0)[8],((C_word*)t0)[6],t2,((C_word*)t0)[9]);}}
else{
/* expand.scm:420: err */
t2=((C_word*)t0)[3];
f_6720(t2,((C_word*)t0)[4],lf[86]);}}

/* ##sys#expand-multiple-values-assignment in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_7326(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_7326,c,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7332,a[2]=t3,a[3]=t2,a[4]=((C_word)li48),tmp=(C_word)a,a+=5,tmp);
/* expand.scm:438: ##sys#decompose-lambda-list */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[95]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[95]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=t4;
tp(4,av2);}}

/* a7331 in ##sys#expand-multiple-values-assignment in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_7332(C_word c,C_word *av){
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
C_word t13;
C_word t14;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(20,c,3)))){
C_save_and_reclaim((void *)f_7332,c,av);}
a=C_alloc(20);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7336,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=t4,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[3]))){
t6=t5;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_END_OF_LIST;
f_7336(2,av2);}}
else{
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=C_i_check_list_2(((C_word*)t0)[3],lf[17]);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7468,a[2]=t8,a[3]=t12,a[4]=t9,a[5]=((C_word)li47),tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_7468(t14,t5,((C_word*)t0)[3]);}}

/* k7334 in a7331 in ##sys#expand-multiple-values-assignment in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_7336(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7336,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7339,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_not(((C_word*)t0)[6]))){
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
f_7339(2,av2);}}
else{
/* expand.scm:442: chicken.base#gensym */
t3=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k7337 in k7334 in a7331 in ##sys#expand-multiple-values-assignment in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_7339(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_7339,c,av);}
a=C_alloc(18);
t2=C_a_i_list(&a,3,lf[73],C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7358,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* expand.scm:446: scheme#append */
t4=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k7356 in k7337 in k7334 in a7331 in ##sys#expand-multiple-values-assignment in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_7358(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,4)))){
C_save_and_reclaim((void *)f_7358,c,av);}
a=C_alloc(24);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7362,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_check_list_2(((C_word*)t0)[4],lf[17]);
t8=C_i_check_list_2(((C_word*)t0)[5],lf[17]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7380,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7402,a[2]=t5,a[3]=t11,a[4]=t6,a[5]=((C_word)li46),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_7402(t13,t9,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k7360 in k7356 in k7337 in k7334 in a7331 in ##sys#expand-multiple-values-assignment in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_7362(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,1)))){
C_save_and_reclaim((void *)f_7362,c,av);}
a=C_alloc(15);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[73],t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[92],((C_word*)t0)[4],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k7378 in k7356 in k7337 in k7334 in a7331 in ##sys#expand-multiple-values-assignment in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_7380(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_7380,c,av);}
a=C_alloc(12);
if(C_truep(C_i_nullp(((C_word*)t0)[2]))){
/* expand.scm:443: ##sys#append */
t2=*((C_word*)lf[71]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=lf[93];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
if(C_truep(C_i_nullp(((C_word*)t0)[4]))){
/* expand.scm:443: ##sys#append */
t2=*((C_word*)lf[71]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=C_a_i_list(&a,3,lf[94],((C_word*)t0)[5],((C_word*)t0)[4]);
t3=C_a_i_list(&a,1,t2);
/* expand.scm:443: ##sys#append */
t4=*((C_word*)lf[71]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}}

/* map-loop1438 in k7356 in k7337 in k7334 in a7331 in ##sys#expand-multiple-values-assignment in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_7402(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_7402,4,t0,t1,t2,t3);}
a=C_alloc(12);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,3,lf[94],t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9);
t11=C_mutate(((C_word *)((C_word*)t0)[2])+1,t9);
t13=t1;
t14=C_slot(t2,C_fix(1));
t15=C_slot(t3,C_fix(1));
t1=t13;
t2=t14;
t3=t15;
goto loop;}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* map-loop1409 in a7331 in ##sys#expand-multiple-values-assignment in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_7468(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7468,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7493,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:441: g1415 */
t4=*((C_word*)lf[10]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7491 in map-loop1409 in a7331 in ##sys#expand-multiple-values-assignment in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_7493(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7493,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7468(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_7506(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_7506,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7510,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t3))){
/* expand.scm:463: ##sys#current-environment */
t5=*((C_word*)lf[4]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_i_car(t3);
f_7510(2,av2);}}}

/* k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_7510(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(32,c,6)))){
C_save_and_reclaim((void *)f_7510,c,av);}
a=C_alloc(32);
t2=C_i_nullp(((C_word*)t0)[2]);
t3=(C_truep(t2)?C_SCHEME_END_OF_LIST:C_i_cdr(((C_word*)t0)[2]));
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7521,a[2]=t1,a[3]=((C_word)li50),tmp=(C_word)a,a+=4,tmp));
t17=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7604,a[2]=t9,a[3]=t15,a[4]=t1,a[5]=t5,a[6]=((C_word)li57),tmp=(C_word)a,a+=7,tmp));
t18=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8041,a[2]=t11,a[3]=t9,a[4]=((C_word)li60),tmp=(C_word)a,a+=5,tmp));
t19=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8197,a[2]=t11,a[3]=t9,a[4]=t1,a[5]=t13,a[6]=t5,a[7]=((C_word)li63),tmp=(C_word)a,a+=8,tmp));
/* expand.scm:620: expand */
t20=((C_word*)t15)[1];
f_8197(t20,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* comp in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static C_word C_fcall f_7521(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_stack_overflow_check;{}
t3=(
/* expand.scm:465: lookup */
  f_5558(t2,((C_word*)t0)[2])
);
t4=C_eqp(t1,t3);
if(C_truep(t4)){
return(t4);}
else{
t5=C_eqp(t1,lf[101]);
if(C_truep(t5)){
return((C_truep(t3)?C_eqp(t3,*((C_word*)lf[96]+1)):C_eqp(t1,t2)));}
else{
t6=C_eqp(t1,lf[102]);
if(C_truep(t6)){
return((C_truep(t3)?C_eqp(t3,*((C_word*)lf[97]+1)):C_eqp(t1,t2)));}
else{
t7=C_eqp(t1,lf[103]);
if(C_truep(t7)){
return((C_truep(t3)?C_eqp(t3,*((C_word*)lf[98]+1)):C_eqp(t1,t2)));}
else{
t8=C_eqp(t1,lf[104]);
return((C_truep(t8)?(C_truep(t3)?C_eqp(t3,lf[99]):C_eqp(t1,t2)):C_eqp(t1,t2)));}}}}}

/* fini in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_7604(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,0,4)))){
C_save_and_reclaim_args((void *)trf_7604,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(14);
t6=C_i_nullp(t2);
t7=(C_truep(t6)?C_i_nullp(t4):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7616,a[2]=((C_word*)t0)[2],a[3]=t9,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word)li52),tmp=(C_word)a,a+=8,tmp));
t11=((C_word*)t9)[1];
f_7616(t11,t1,t5,C_SCHEME_END_OF_LIST);}
else{
t8=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t9=t8;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=((C_word*)t10)[1];
t12=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7857,a[2]=t1,a[3]=t5,a[4]=t4,a[5]=t3,a[6]=t2,a[7]=t10,a[8]=t11,tmp=(C_word)a,a+=9,tmp);
/* expand.scm:528: scheme#reverse */
t13=*((C_word*)lf[70]+1);{
C_word av2[3];
av2[0]=t13;
av2[1]=t12;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t13+1)))(3,av2);}}}

/* loop in fini in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_7616(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_7616,4,t0,t1,t2,t3);}
a=C_alloc(12);
t4=C_i_pairp(t2);
if(C_truep(C_i_not(t4))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7630,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:480: scheme#reverse */
t6=*((C_word*)lf[70]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7635,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t6,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word)li51),tmp=(C_word)a,a+=10,tmp));
t8=((C_word*)t6)[1];
f_7635(t8,t1,t2);}}

/* k7628 in loop in fini in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_7630(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7630,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,lf[105],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop2 in loop in fini in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_7635(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,0,2)))){
C_save_and_reclaim_args((void *)trf_7635,3,t0,t1,t2);}
a=C_alloc(13);
t3=C_i_car(t2);
t4=C_u_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7646,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=t4,a[8]=((C_word*)t0)[5],a[9]=t2,a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[8],tmp=(C_word)a,a+=13,tmp);
if(C_truep(C_i_pairp(t3))){
t6=C_u_i_car(t3);
if(C_truep(C_i_symbolp(t6))){
t7=(
/* expand.scm:487: comp */
  f_7521(((C_word*)((C_word*)t0)[2])[1],lf[101],t6)
);
if(C_truep(t7)){
t8=t5;
f_7646(t8,t7);}
else{
t8=(
/* expand.scm:488: comp */
  f_7521(((C_word*)((C_word*)t0)[2])[1],lf[103],t6)
);
if(C_truep(t8)){
t9=t5;
f_7646(t9,t8);}
else{
t9=(
/* expand.scm:489: comp */
  f_7521(((C_word*)((C_word*)t0)[2])[1],lf[102],t6)
);
if(C_truep(t9)){
t10=t5;
f_7646(t10,t9);}
else{
t10=(
/* expand.scm:490: comp */
  f_7521(((C_word*)((C_word*)t0)[2])[1],lf[105],t6)
);
t11=t5;
f_7646(t11,(C_truep(t10)?t10:(
/* expand.scm:491: comp */
  f_7521(((C_word*)((C_word*)t0)[2])[1],lf[104],t6)
)));}}}}
else{
t7=t5;
f_7646(t7,C_SCHEME_FALSE);}}
else{
t6=t5;
f_7646(t6,C_SCHEME_FALSE);}}

/* k7644 in loop2 in loop in fini in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_7646(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_7646,2,t0,t1);}
a=C_alloc(9);
if(C_truep(t1)){
t2=(
/* expand.scm:493: comp */
  f_7521(((C_word*)((C_word*)t0)[2])[1],lf[104],C_i_car(((C_word*)t0)[3]))
);
if(C_truep(t2)){
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
/* expand.scm:494: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_7616(t4,((C_word*)t0)[6],((C_word*)t0)[7],t3);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7666,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7670,a[2]=t3,a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:497: scheme#reverse */
t5=*((C_word*)lf[70]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7685,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
/* expand.scm:498: ##sys#expand-0 */
t3=*((C_word*)lf[33]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[11];
av2[4]=((C_word*)t0)[12];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* k7664 in k7644 in loop2 in loop in fini in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_7666(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7666,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,lf[105],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7668 in k7644 in loop2 in loop in fini in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_7670(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7670,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7678,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:497: expand */
t3=((C_word*)((C_word*)t0)[3])[1];
f_8197(t3,t2,((C_word*)t0)[4]);}

/* k7676 in k7668 in k7644 in loop2 in loop in fini in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_7678(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_7678,c,av);}
a=C_alloc(3);
t2=C_a_i_list1(&a,1,t1);
/* expand.scm:497: ##sys#append */
t3=*((C_word*)lf[71]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k7683 in k7644 in loop2 in loop in fini in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_7685(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7685,c,av);}
a=C_alloc(8);
t2=C_eqp(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7697,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
if(C_truep(C_i_symbolp(C_u_i_car(((C_word*)t0)[2])))){
t4=(
/* expand.scm:505: comp */
  f_7521(((C_word*)((C_word*)t0)[4])[1],lf[106],C_u_i_car(((C_word*)t0)[2]))
);
t5=t3;
f_7697(t5,(C_truep(t4)?t4:(
/* expand.scm:506: comp */
  f_7521(((C_word*)((C_word*)t0)[4])[1],lf[107],C_u_i_car(((C_word*)t0)[2]))
)));}
else{
t4=t3;
f_7697(t4,C_SCHEME_FALSE);}}
else{
t4=t3;
f_7697(t4,C_SCHEME_FALSE);}}
else{
t3=C_a_i_cons(&a,2,t1,((C_word*)t0)[5]);
/* expand.scm:515: loop2 */
t4=((C_word*)((C_word*)t0)[8])[1];
f_7635(t4,((C_word*)t0)[3],t3);}}

/* k7695 in k7683 in k7644 in loop2 in loop in fini in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_7697(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_7697,2,t0,t1);}
a=C_alloc(9);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7704,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7708,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:508: scheme#reverse */
t4=*((C_word*)lf[70]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t2=C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[6]);
/* expand.scm:514: loop */
t3=((C_word*)((C_word*)t0)[7])[1];
f_7616(t3,((C_word*)t0)[2],((C_word*)t0)[5],t2);}}

/* k7702 in k7695 in k7683 in k7644 in loop2 in loop in fini in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_7704(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7704,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,lf[105],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7706 in k7695 in k7683 in k7644 in loop2 in loop in fini in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_7708(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_7708,c,av);}
a=C_alloc(12);
t2=(
/* expand.scm:509: comp */
  f_7521(((C_word*)((C_word*)t0)[2])[1],lf[106],C_i_car(((C_word*)t0)[3]))
);
if(C_truep(t2)){
if(C_truep(C_i_nullp(((C_word*)t0)[4]))){
t3=C_a_i_list(&a,1,((C_word*)t0)[3]);
/* expand.scm:507: ##sys#append */
t4=*((C_word*)lf[71]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[5];
av2[2]=t1;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t3=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[4]);
t4=C_a_i_cons(&a,2,lf[52],t3);
t5=C_a_i_list(&a,2,((C_word*)t0)[3],t4);
/* expand.scm:507: ##sys#append */
t6=*((C_word*)lf[71]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=((C_word*)t0)[5];
av2[2]=t1;
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7746,a[2]=((C_word*)t0)[5],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=C_u_i_cdr(((C_word*)t0)[3]);
t5=C_a_i_list(&a,1,((C_word*)t0)[4]);
/* expand.scm:513: ##sys#append */
t6=*((C_word*)lf[71]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* k7744 in k7706 in k7695 in k7683 in k7644 in loop2 in loop in fini in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_7746(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_7746,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,lf[107],t1);
t3=C_a_i_list(&a,1,t2);
/* expand.scm:507: ##sys#append */
t4=*((C_word*)lf[71]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k7855 in fini in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_7857(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_7857,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7860,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7999,a[2]=t4,a[3]=((C_word)li56),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_7999(t6,t2,t1,C_SCHEME_END_OF_LIST);}

/* k7858 in k7855 in fini in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_7860(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_7860,c,av);}
a=C_alloc(15);
t2=C_i_check_list_2(t1,lf[17]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7866,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7965,a[2]=((C_word*)t0)[7],a[3]=t5,a[4]=((C_word*)t0)[8],a[5]=((C_word)li54),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_7965(t7,t3,t1);}

/* k7864 in k7858 in k7855 in fini in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_7866(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,2)))){
C_save_and_reclaim((void *)f_7866,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7870,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7892,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=t6,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:536: scheme#reverse */
t8=*((C_word*)lf[70]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}

/* k7868 in k7864 in k7858 in k7855 in fini in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_7870(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_7870,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[52],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k7890 in k7864 in k7858 in k7855 in fini in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_7892(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7892,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7895,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:537: scheme#reverse */
t3=*((C_word*)lf[70]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7893 in k7890 in k7864 in k7858 in k7855 in fini in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_7895(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7895,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7898,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* expand.scm:538: scheme#reverse */
t3=*((C_word*)lf[70]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7896 in k7893 in k7890 in k7864 in k7858 in k7855 in fini in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_7898(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,5)))){
C_save_and_reclaim((void *)f_7898,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7901,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7903,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=((C_word)li53),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_7903(t6,t2,((C_word*)t0)[6],((C_word*)t0)[7],t1);}

/* k7899 in k7896 in k7893 in k7890 in k7864 in k7858 in k7855 in fini in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_7901(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7901,c,av);}
/* expand.scm:520: ##sys#append */
t2=*((C_word*)lf[71]+1);{
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

/* map-loop1617 in k7896 in k7893 in k7890 in k7864 in k7858 in k7855 in fini in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_7903(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_7903,5,t0,t1,t2,t3,t4);}
a=C_alloc(9);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7910,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,a[6]=t3,a[7]=t4,a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_pairp(t2))){
t6=C_i_pairp(t3);
t7=t5;
f_7910(t7,(C_truep(t6)?C_i_pairp(t4):C_SCHEME_FALSE));}
else{
t6=t5;
f_7910(t6,C_SCHEME_FALSE);}}

/* k7908 in map-loop1617 in k7896 in k7893 in k7890 in k7864 in k7858 in k7855 in fini in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_7910(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,0,3)))){
C_save_and_reclaim_args((void *)trf_7910,2,t0,t1);}
a=C_alloc(17);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7936,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_slot(((C_word*)t0)[5],C_fix(0));
t4=C_slot(((C_word*)t0)[6],C_fix(0));
if(C_truep(C_slot(((C_word*)t0)[7],C_fix(0)))){
/* expand.scm:534: ##sys#expand-multiple-values-assignment */
t5=*((C_word*)lf[91]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t2;
av2[2]=t3;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t5=C_i_car(t3);
t6=t2;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_a_i_list(&a,3,lf[94],t5,t4);
f_7936(2,av2);}}}
else{
t2=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_slot(((C_word*)t0)[8],C_fix(1));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k7934 in k7908 in map-loop1617 in k7896 in k7893 in k7890 in k7864 in k7858 in k7855 in fini in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_7936(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_7936,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7903(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)),C_slot(((C_word*)t0)[6],C_fix(1)),C_slot(((C_word*)t0)[7],C_fix(1)));}

/* map-loop1569 in k7858 in k7855 in fini in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_7965(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_7965,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,2,t3,lf[108]);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t9=t1;
t10=C_slot(t2,C_fix(1));
t1=t9;
t2=t10;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* foldl1592 in k7855 in fini in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_7999(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,5)))){
C_save_and_reclaim_args((void *)trf_7999,4,t0,t1,t2,t3);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8029,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=C_slot(t2,C_fix(0));
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8023,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8025,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:525: ##sys#decompose-lambda-list */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[95]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[95]+1);
av2[1]=t7;
av2[2]=t6;
av2[3]=t8;
tp(4,av2);}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k8021 in foldl1592 in k7855 in fini in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8023(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8023,c,av);}
/* expand.scm:525: ##sys#append */
t2=*((C_word*)lf[71]+1);{
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

/* a8024 in foldl1592 in k7855 in fini in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8025(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8025,c,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k8027 in foldl1592 in k7855 in fini in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8029(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8029,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_7999(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* fini/syntax in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_8041(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,5)))){
C_save_and_reclaim_args((void *)trf_8041,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(14);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8049,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8051,a[2]=t8,a[3]=((C_word*)t0)[3],a[4]=((C_word)li59),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_8051(t10,t6,t5,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* k8047 in fini/syntax in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8049(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_8049,c,av);}
/* expand.scm:543: fini */
t2=((C_word*)((C_word*)t0)[2])[1];
f_7604(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t1);}

/* loop in fini/syntax in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_8051(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(11,0,4)))){
C_save_and_reclaim_args((void *)trf_8051,5,t0,t1,t2,t3,t4);}
a=C_alloc(11);
if(C_truep(t4)){
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8073,a[2]=t2,a[3]=t1,a[4]=t7,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:547: scheme#reverse */
t10=*((C_word*)lf[70]+1);{
C_word av2[3];
av2[0]=t10;
av2[1]=t9;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
t5=C_i_pairp(t2);
if(C_truep(C_i_not(t5))){
/* expand.scm:548: loop */
t12=t1;
t13=t2;
t14=t3;
t15=C_SCHEME_TRUE;
t1=t12;
t2=t13;
t3=t14;
t4=t15;
goto loop;}
else{
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8125,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_i_car(t2);
if(C_truep(C_i_listp(t7))){
t8=C_i_length(C_u_i_car(t2));
if(C_truep(C_fixnum_greater_or_equal_p(C_fix(3),t8))){
t9=C_i_caar(t2);
if(C_truep(C_i_symbolp(t9))){
t10=C_u_i_car(t2);
/* expand.scm:552: comp */
t11=t6;
f_8125(t11,(
/* expand.scm:552: comp */
  f_7521(((C_word*)((C_word*)t0)[3])[1],lf[102],C_u_i_car(t10))
));}
else{
t10=t6;
f_8125(t10,C_SCHEME_FALSE);}}
else{
t9=t6;
f_8125(t9,C_SCHEME_FALSE);}}
else{
t8=t6;
f_8125(t8,C_SCHEME_FALSE);}}}}

/* k8071 in loop in fini/syntax in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8073(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_8073,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8076,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8078,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=((C_word)li58),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_8078(t6,t2,t1);}

/* k8074 in k8071 in loop in fini/syntax in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8076(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_8076,c,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[109],t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,1,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* map-loop1677 in k8071 in loop in fini/syntax in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_8078(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_8078,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cdr(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t9=t1;
t10=C_slot(t2,C_fix(1));
t1=t9;
t2=t10;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k8123 in loop in fini/syntax in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_8125(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_8125,2,t0,t1);}
a=C_alloc(10);
if(C_truep(t1)){
t2=C_u_i_car(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8129,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_i_car(t2);
t5=C_i_cadr(t2);
t6=C_eqp(t4,t5);
if(C_truep(t6)){
/* expand.scm:428: ##sys#syntax-error-hook */
t7=*((C_word*)lf[43]+1);{
C_word av2[4];
av2[0]=t7;
av2[1]=t3;
av2[2]=lf[110];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t7=C_u_i_cdr(((C_word*)t0)[2]);
t8=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
/* expand.scm:558: loop */
t9=((C_word*)((C_word*)t0)[4])[1];
f_8051(t9,((C_word*)t0)[5],t7,t8,C_SCHEME_FALSE);}}
else{
/* expand.scm:559: loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_8051(t2,((C_word*)t0)[5],((C_word*)t0)[2],((C_word*)t0)[3],C_SCHEME_TRUE);}}

/* k8127 in k8123 in loop in fini/syntax in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8129(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_8129,c,av);}
a=C_alloc(3);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
/* expand.scm:558: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_8051(t4,((C_word*)t0)[6],t2,t3,C_SCHEME_FALSE);}

/* expand in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_8197(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,6)))){
C_save_and_reclaim_args((void *)trf_8197,3,t0,t1,t2);}
a=C_alloc(11);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8203,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word)li62),tmp=(C_word)a,a+=9,tmp));
t6=((C_word*)t4)[1];
f_8203(t6,t1,t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* loop in expand in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_8203(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,0,5)))){
C_save_and_reclaim_args((void *)trf_8203,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(15);
t6=C_i_pairp(t2);
if(C_truep(C_i_not(t6))){
/* expand.scm:567: fini */
t7=((C_word*)((C_word*)t0)[2])[1];
f_7604(t7,t1,t3,t4,t5,t2);}
else{
t7=C_i_car(t2);
t8=C_u_i_cdr(t2);
t9=C_i_pairp(t7);
t10=(C_truep(t9)?C_u_i_car(t7):C_SCHEME_FALSE);
t11=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_8223,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t4,a[6]=t5,a[7]=t2,a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[4],a[10]=t8,a[11]=((C_word*)t0)[5],a[12]=t7,a[13]=((C_word*)t0)[6],a[14]=((C_word*)t0)[7],tmp=(C_word)a,a+=15,tmp);
if(C_truep(t10)){
t12=C_i_symbolp(t10);
t13=t11;
f_8223(t13,(C_truep(t12)?t10:C_SCHEME_FALSE));}
else{
t12=t11;
f_8223(t12,C_SCHEME_FALSE);}}}

/* k8221 in loop in expand in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_8223(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,0,6)))){
C_save_and_reclaim_args((void *)trf_8223,2,t0,t1);}
a=C_alloc(14);
t2=C_i_symbolp(t1);
if(C_truep(C_i_not(t2))){
/* expand.scm:573: fini */
t3=((C_word*)((C_word*)t0)[2])[1];
f_7604(t3,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}
else{
t3=(
/* expand.scm:575: comp */
  f_7521(((C_word*)((C_word*)t0)[8])[1],lf[101],t1)
);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8241,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[12],tmp=(C_word)a,a+=10,tmp);
/* expand.scm:576: ##sys#check-syntax */
t5=*((C_word*)lf[56]+1);{
C_word av2[7];
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[101];
av2[3]=((C_word*)t0)[12];
av2[4]=lf[116];
av2[5]=C_SCHEME_FALSE;
av2[6]=((C_word*)t0)[11];
((C_proc)(void*)(*((C_word*)t5+1)))(7,av2);}}
else{
t4=(
/* expand.scm:602: comp */
  f_7521(((C_word*)((C_word*)t0)[8])[1],lf[102],t1)
);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8378,a[2]=((C_word*)t0)[13],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:603: ##sys#check-syntax */
t6=*((C_word*)lf[56]+1);{
C_word av2[6];
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[102];
av2[3]=((C_word*)t0)[12];
av2[4]=lf[117];
av2[5]=((C_word*)t0)[11];
((C_proc)(void*)(*((C_word*)t6+1)))(6,av2);}}
else{
t5=(
/* expand.scm:605: comp */
  f_7521(((C_word*)((C_word*)t0)[8])[1],lf[103],t1)
);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8390,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
/* expand.scm:607: ##sys#check-syntax */
t7=*((C_word*)lf[56]+1);{
C_word av2[7];
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[103];
av2[3]=((C_word*)t0)[12];
av2[4]=lf[118];
av2[5]=C_SCHEME_FALSE;
av2[6]=((C_word*)t0)[11];
((C_proc)(void*)(*((C_word*)t7+1)))(7,av2);}}
else{
t6=(
/* expand.scm:609: comp */
  f_7521(((C_word*)((C_word*)t0)[8])[1],lf[105],t1)
);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8426,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:610: ##sys#append */
t8=*((C_word*)lf[71]+1);{
C_word av2[4];
av2[0]=t8;
av2[1]=t7;
av2[2]=C_i_cdr(((C_word*)t0)[12]);
av2[3]=((C_word*)t0)[10];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
t7=C_a_i_list1(&a,1,t1);
if(C_truep(C_i_member(t7,((C_word*)t0)[4]))){
/* expand.scm:615: fini */
t8=((C_word*)((C_word*)t0)[2])[1];
f_7604(t8,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}
else{
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8442,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* expand.scm:616: ##sys#expand-0 */
t9=*((C_word*)lf[33]+1);{
C_word av2[5];
av2[0]=t9;
av2[1]=t8;
av2[2]=((C_word*)t0)[12];
av2[3]=((C_word*)t0)[11];
av2[4]=((C_word*)t0)[14];
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}}}}}}}

/* k8239 in k8221 in loop in expand in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8241(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_8241,c,av);}
a=C_alloc(12);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8246,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t3,a[9]=((C_word)li61),tmp=(C_word)a,a+=10,tmp));
t5=((C_word*)t3)[1];
f_8246(t5,((C_word*)t0)[8],((C_word*)t0)[9]);}

/* loop2 in k8239 in k8221 in loop in expand in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_8246(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,6)))){
C_save_and_reclaim_args((void *)trf_8246,3,t0,t1,t2);}
a=C_alloc(10);
t3=C_i_cadr(t2);
t4=C_i_pairp(t3);
if(C_truep(C_i_not(t4))){
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8259,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t1,a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
/* expand.scm:580: ##sys#check-syntax */
t6=*((C_word*)lf[56]+1);{
C_word av2[7];
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[101];
av2[3]=t2;
av2[4]=lf[112];
av2[5]=C_SCHEME_FALSE;
av2[6]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t6+1)))(7,av2);}}
else{
t5=C_i_car(t3);
if(C_truep(C_i_pairp(t5))){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8312,a[2]=((C_word*)t0)[8],a[3]=t1,a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:590: ##sys#check-syntax */
t7=*((C_word*)lf[56]+1);{
C_word av2[7];
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[101];
av2[3]=t2;
av2[4]=lf[114];
av2[5]=C_SCHEME_FALSE;
av2[6]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t7+1)))(7,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8326,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t1,a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
/* expand.scm:595: ##sys#check-syntax */
t7=*((C_word*)lf[56]+1);{
C_word av2[7];
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[101];
av2[3]=t2;
av2[4]=lf[115];
av2[5]=C_SCHEME_FALSE;
av2[6]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t7+1)))(7,av2);}}}}

/* k8257 in loop2 in k8239 in k8221 in loop in expand in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8259(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_8259,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8262,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t3=C_eqp(C_u_i_car(((C_word*)t0)[4]),((C_word*)t0)[2]);
if(C_truep(t3)){
/* expand.scm:428: ##sys#syntax-error-hook */
t4=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[110];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_8262(2,av2);}}}

/* k8260 in k8257 in loop2 in k8239 in k8221 in loop in expand in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8262(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,5)))){
C_save_and_reclaim((void *)f_8262,c,av);}
a=C_alloc(12);
t2=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
t4=C_i_cddr(((C_word*)t0)[4]);
if(C_truep(C_i_pairp(t4))){
t5=C_i_caddr(((C_word*)t0)[4]);
t6=C_a_i_cons(&a,2,t5,((C_word*)t0)[5]);
t7=C_a_i_cons(&a,2,C_SCHEME_FALSE,((C_word*)t0)[6]);
/* expand.scm:583: loop */
t8=((C_word*)((C_word*)t0)[7])[1];
f_8203(t8,((C_word*)t0)[8],((C_word*)t0)[9],t3,t6,t7);}
else{
t5=C_a_i_cons(&a,2,lf[111],((C_word*)t0)[5]);
t6=C_a_i_cons(&a,2,C_SCHEME_FALSE,((C_word*)t0)[6]);
/* expand.scm:583: loop */
t7=((C_word*)((C_word*)t0)[7])[1];
f_8203(t7,((C_word*)t0)[8],((C_word*)t0)[9],t3,t5,t6);}}

/* k8310 in loop2 in k8239 in k8221 in loop in expand in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8312(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_8312,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8319,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:593: chicken.syntax#expand-curried-define */
t3=*((C_word*)lf[113]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_i_cddr(((C_word*)t0)[5]);
av2[4]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k8317 in k8310 in loop2 in k8239 in k8221 in loop in expand in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8319(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8319,c,av);}
/* expand.scm:592: loop2 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_8246(t2,((C_word*)t0)[3],t1);}

/* k8324 in loop2 in k8239 in k8221 in loop in expand in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8326(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,5)))){
C_save_and_reclaim((void *)f_8326,c,av);}
a=C_alloc(18);
t2=C_u_i_car(((C_word*)t0)[2]);
t3=C_a_i_list1(&a,1,t2);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[3]);
t5=C_u_i_cdr(((C_word*)t0)[2]);
t6=C_i_cddr(((C_word*)t0)[4]);
t7=C_a_i_cons(&a,2,t5,t6);
t8=C_a_i_cons(&a,2,lf[73],t7);
t9=C_a_i_cons(&a,2,t8,((C_word*)t0)[5]);
t10=C_a_i_cons(&a,2,C_SCHEME_FALSE,((C_word*)t0)[6]);
/* expand.scm:598: loop */
t11=((C_word*)((C_word*)t0)[7])[1];
f_8203(t11,((C_word*)t0)[8],((C_word*)t0)[9],t4,t9,t10);}

/* k8376 in k8221 in loop in expand in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8378(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_8378,c,av);}
/* expand.scm:604: fini/syntax */
t2=((C_word*)((C_word*)t0)[2])[1];
f_8041(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}

/* k8388 in k8221 in loop in expand in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8390(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_8390,c,av);}
a=C_alloc(9);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
t4=C_i_caddr(((C_word*)t0)[2]);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[4]);
t6=C_a_i_cons(&a,2,C_SCHEME_TRUE,((C_word*)t0)[5]);
/* expand.scm:608: loop */
t7=((C_word*)((C_word*)t0)[6])[1];
f_8203(t7,((C_word*)t0)[7],((C_word*)t0)[8],t3,t5,t6);}

/* k8424 in k8221 in loop in expand in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8426(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_8426,c,av);}
/* expand.scm:610: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_8203(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k8440 in k8221 in loop in expand in k7508 in ##sys#canonicalize-body in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8442(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_8442,c,av);}
a=C_alloc(3);
t2=C_eqp(((C_word*)t0)[2],t1);
if(C_truep(t2)){
/* expand.scm:618: fini */
t3=((C_word*)((C_word*)t0)[3])[1];
f_7604(t3,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8]);}
else{
t3=C_a_i_cons(&a,2,t1,((C_word*)t0)[9]);
/* expand.scm:619: loop */
t4=((C_word*)((C_word*)t0)[10])[1];
f_8203(t4,((C_word*)t0)[4],t3,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}}

/* chicken.syntax#match-expression in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8512(C_word c,C_word *av){
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
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_8512,c,av);}
a=C_alloc(14);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8515,a[2]=t6,a[3]=t4,a[4]=t8,a[5]=((C_word)li66),tmp=(C_word)a,a+=6,tmp));
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8592,a[2]=t6,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:640: mwalk */
t11=((C_word*)t8)[1];
f_8515(t11,t10,t2,t3);}

/* mwalk in chicken.syntax#match-expression in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_8515(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_8515,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=C_i_pairp(t3);
if(C_truep(C_i_not(t4))){
t5=C_i_assq(t3,((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8529,a[2]=t2,a[3]=((C_word)li65),tmp=(C_word)a,a+=4,tmp);
/* expand.scm:631: g1767 */
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=(
/* expand.scm:631: g1767 */
  f_8529(t6,t5)
);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
if(C_truep(C_i_memq(t3,((C_word*)t0)[3]))){
t6=C_a_i_cons(&a,2,t3,t2);
t7=C_a_i_cons(&a,2,t6,((C_word*)((C_word*)t0)[2])[1]);
t8=C_mutate(((C_word *)((C_word*)t0)[2])+1,t7);
t9=t1;{
C_word av2[2];
av2[0]=t9;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_eqp(t2,t3);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}}
else{
if(C_truep(C_i_pairp(t2))){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8569,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:637: mwalk */
t10=t5;
t11=C_u_i_car(t2);
t12=C_i_car(t3);
t1=t10;
t2=t11;
t3=t12;
goto loop;}
else{
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}}

/* g1767 in mwalk in chicken.syntax#match-expression in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static C_word C_fcall f_8529(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_i_equalp(((C_word*)t0)[2],C_i_cdr(t1)));}

/* k8567 in mwalk in chicken.syntax#match-expression in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8569(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8569,c,av);}
if(C_truep(t1)){
/* expand.scm:638: mwalk */
t2=((C_word*)((C_word*)t0)[2])[1];
f_8515(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]),C_u_i_cdr(((C_word*)t0)[5]));}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k8590 in chicken.syntax#match-expression in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8592(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8592,c,av);}
if(C_truep(t1)){
t2=((C_word*)((C_word*)t0)[2])[1];
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* chicken.syntax#expand-curried-define in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8594(C_word c,C_word *av){
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
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_8594,c,av);}
a=C_alloc(13);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8597,a[2]=t6,a[3]=t8,a[4]=((C_word)li68),tmp=(C_word)a,a+=5,tmp));
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8641,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:654: loop */
t11=((C_word*)t8)[1];
f_8597(t11,t10,t2,t3);}

/* loop in chicken.syntax#expand-curried-define in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_8597(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_8597,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_car(t2);
if(C_truep(C_i_symbolp(t4))){
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_u_i_car(t2));
t6=C_u_i_cdr(t2);
t7=C_a_i_cons(&a,2,t6,t3);
t8=t1;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_a_i_cons(&a,2,lf[73],t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t5=C_u_i_car(t2);
t6=C_u_i_cdr(t2);
t7=C_a_i_cons(&a,2,t6,t3);
t8=C_a_i_cons(&a,2,lf[73],t7);
t9=C_a_i_list(&a,1,t8);
/* expand.scm:653: loop */
t11=t1;
t12=t5;
t13=t9;
t1=t11;
t2=t12;
t3=t13;
goto loop;}}

/* k8639 in chicken.syntax#expand-curried-define in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8641(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_8641,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list3(&a,3,lf[101],((C_word*)((C_word*)t0)[3])[1],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.syntax#syntax-error in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8649(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +3,c,2)))){
C_save_and_reclaim((void*)f_8649,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+3);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8657,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:666: chicken.syntax#strip-syntax */
t4=*((C_word*)lf[12]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k8655 in chicken.syntax#syntax-error in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8657(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8657,c,av);}{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[124]+1);
av2[3]=lf[125];
av2[4]=t1;
C_apply(5,av2);}}

/* ##sys#syntax-error/context in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8660(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_8660,c,av);}
a=C_alloc(5);
if(C_truep(C_i_nullp(*((C_word*)lf[122]+1)))){
/* expand.scm:679: ##sys#syntax-error-hook */
t4=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8727,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:680: chicken.base#open-output-string */
t5=*((C_word*)lf[144]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k8669 in k8779 in loop in k8725 in ##sys#syntax-error/context in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8671(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_8671,c,av);}
a=C_alloc(6);
t2=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8676,a[2]=t4,a[3]=((C_word)li73),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_8676(t6,((C_word*)t0)[2],t2);}

/* loop in k8669 in k8779 in loop in k8725 in ##sys#syntax-error/context in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_8676(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_8676,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_caar(t2);
t4=C_eqp(lf[141],t3);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8696,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:676: scheme#cadar */
t6=*((C_word*)lf[69]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
/* expand.scm:677: loop */
t7=t1;
t8=C_u_i_cdr(t2);
t1=t7;
t2=t8;
goto loop;}}}

/* k8694 in loop in k8669 in k8779 in loop in k8725 in ##sys#syntax-error/context in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8696(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_8696,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8700,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:676: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_8676(t3,t2,C_u_i_cdr(((C_word*)t0)[4]));}

/* k8698 in k8694 in loop in k8669 in k8779 in loop in k8725 in ##sys#syntax-error/context in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8700(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8700,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8713 in k8779 in loop in k8725 in ##sys#syntax-error/context in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8715(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8715,c,av);}
/* expand.scm:673: ##sys#get */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[142]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[142]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[143];
tp(4,av2);}}

/* k8725 in ##sys#syntax-error/context in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8727(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_8727,c,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8729,a[2]=t1,a[3]=((C_word)li71),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8736,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8745,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t5,a[7]=((C_word)li74),tmp=(C_word)a,a+=8,tmp));
t7=((C_word*)t5)[1];
f_8745(t7,t3,*((C_word*)lf[122]+1));}

/* outstr in k8725 in ##sys#syntax-error/context in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_8729(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_8729,3,t0,t1,t2);}
/* expand.scm:682: ##sys#print */
t3=*((C_word*)lf[127]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k8734 in k8725 in ##sys#syntax-error/context in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8736(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8736,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8743,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:717: chicken.base#get-output-string */
t3=*((C_word*)lf[128]+1);{
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

/* k8741 in k8734 in k8725 in ##sys#syntax-error/context in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8743(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8743,c,av);}
/* expand.scm:717: ##sys#syntax-error-hook */
t2=*((C_word*)lf[43]+1);{
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

/* loop in k8725 in ##sys#syntax-error/context in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_8745(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_8745,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8755,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:685: outstr */
t4=((C_word*)t0)[2];
f_8729(t4,t3,((C_word*)t0)[5]);}
else{
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8781,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
/* expand.scm:692: chicken.syntax#strip-syntax */
t4=*((C_word*)lf[12]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_car(t2);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k8753 in loop in k8725 in ##sys#syntax-error/context in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8755(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_8755,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8758,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:686: outstr */
t3=((C_word*)t0)[2];
f_8729(t3,t2,lf[131]);}

/* k8756 in k8753 in loop in k8725 in ##sys#syntax-error/context in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8758(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_8758,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8761,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:687: ##sys#print */
t3=*((C_word*)lf[127]+1);{
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
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k8759 in k8756 in k8753 in loop in k8725 in ##sys#syntax-error/context in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8761(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_8761,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8764,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:688: outstr */
t3=((C_word*)t0)[2];
f_8729(t3,t2,lf[130]);}

/* k8762 in k8759 in k8756 in k8753 in loop in k8725 in ##sys#syntax-error/context in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8764(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_8764,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8767,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8774,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:689: chicken.syntax#strip-syntax */
t4=*((C_word*)lf[12]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_car(*((C_word*)lf[122]+1));
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k8765 in k8762 in k8759 in k8756 in k8753 in loop in k8725 in ##sys#syntax-error/context in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8767(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8767,c,av);}
/* expand.scm:690: outstr */
t2=((C_word*)t0)[2];
f_8729(t2,((C_word*)t0)[3],lf[129]);}

/* k8772 in k8762 in k8759 in k8756 in k8753 in loop in k8725 in ##sys#syntax-error/context in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8774(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8774,c,av);}
/* expand.scm:689: ##sys#print */
t2=*((C_word*)lf[127]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k8779 in loop in k8725 in ##sys#syntax-error/context in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8781(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_8781,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8784,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8671,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8715,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:673: chicken.syntax#strip-syntax */
t5=*((C_word*)lf[12]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k8782 in k8779 in loop in k8725 in ##sys#syntax-error/context in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8784(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_8784,c,av);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8793,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:695: outstr */
t3=((C_word*)t0)[2];
f_8729(t3,t2,((C_word*)t0)[7]);}
else{
/* expand.scm:716: loop */
t2=((C_word*)((C_word*)t0)[8])[1];
f_8745(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[9]));}}

/* k8791 in k8782 in k8779 in loop in k8725 in ##sys#syntax-error/context in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8793(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_8793,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8796,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* expand.scm:696: outstr */
t3=((C_word*)t0)[3];
f_8729(t3,t2,lf[140]);}

/* k8794 in k8791 in k8782 in k8779 in loop in k8725 in ##sys#syntax-error/context in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8796(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_8796,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8799,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:697: ##sys#print */
t3=*((C_word*)lf[127]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k8797 in k8794 in k8791 in k8782 in k8779 in loop in k8725 in ##sys#syntax-error/context in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8799(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_8799,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8802,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:698: outstr */
t3=((C_word*)t0)[3];
f_8729(t3,t2,lf[139]);}

/* k8800 in k8797 in k8794 in k8791 in k8782 in k8779 in loop in k8725 in ##sys#syntax-error/context in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8802(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_8802,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8805,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:699: ##sys#print */
t3=*((C_word*)lf[127]+1);{
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
av2[4]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k8803 in k8800 in k8797 in k8794 in k8791 in k8782 in k8779 in loop in k8725 in ##sys#syntax-error/context in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8805(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_8805,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8808,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:700: outstr */
t3=((C_word*)t0)[3];
f_8729(t3,t2,lf[138]);}

/* k8806 in k8803 in k8800 in k8797 in k8794 in k8791 in k8782 in k8779 in loop in k8725 in ##sys#syntax-error/context in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8808(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_8808,c,av);}
a=C_alloc(13);
t2=C_i_length(((C_word*)t0)[2]);
t3=C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8821,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8825,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* expand.scm:705: scheme#symbol->string */
t6=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_i_car(((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8836,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8840,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8842,a[2]=t7,a[3]=((C_word)li72),tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_8842(t9,t5,((C_word*)t0)[2]);}}

/* k8819 in k8806 in k8803 in k8800 in k8797 in k8794 in k8791 in k8782 in k8779 in loop in k8725 in ##sys#syntax-error/context in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8821(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8821,c,av);}
/* expand.scm:702: outstr */
t2=((C_word*)t0)[2];
f_8729(t2,((C_word*)t0)[3],t1);}

/* k8823 in k8806 in k8803 in k8800 in k8797 in k8794 in k8791 in k8782 in k8779 in loop in k8725 in ##sys#syntax-error/context in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8825(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8825,c,av);}
/* expand.scm:703: scheme#string-append */
t2=*((C_word*)lf[38]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[132];
av2[3]=t1;
av2[4]=lf[133];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k8834 in k8806 in k8803 in k8800 in k8797 in k8794 in k8791 in k8782 in k8779 in loop in k8725 in ##sys#syntax-error/context in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8836(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8836,c,av);}
/* expand.scm:707: outstr */
t2=((C_word*)t0)[2];
f_8729(t2,((C_word*)t0)[3],t1);}

/* k8838 in k8806 in k8803 in k8800 in k8797 in k8794 in k8791 in k8782 in k8779 in loop in k8725 in ##sys#syntax-error/context in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8840(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8840,c,av);}
/* expand.scm:708: scheme#string-append */
t2=*((C_word*)lf[38]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[134];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* loop in k8806 in k8803 in k8800 in k8797 in k8794 in k8791 in k8782 in k8779 in loop in k8725 in ##sys#syntax-error/context in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_8842(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_8842,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=lf[135];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8856,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:714: scheme#symbol->string */
t4=*((C_word*)lf[46]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_car(t2);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k8854 in loop in k8806 in k8803 in k8800 in k8797 in k8794 in k8791 in k8782 in k8779 in loop in k8725 in ##sys#syntax-error/context in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8856(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_8856,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8860,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:715: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_8842(t3,t2,C_u_i_cdr(((C_word*)t0)[4]));}

/* k8858 in k8854 in loop in k8806 in k8803 in k8800 in k8797 in k8794 in k8791 in k8782 in k8779 in loop in k8725 in ##sys#syntax-error/context in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8860(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_8860,c,av);}
/* expand.scm:713: scheme#string-append */
t2=*((C_word*)lf[38]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[136];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[137];
av2[5]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* chicken.syntax#get-line-number in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8881(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_8881,c,av);}
a=C_alloc(4);
if(C_truep(*((C_word*)lf[120]+1))){
if(C_truep(C_i_pairp(t2))){
t3=C_u_i_car(t2);
if(C_truep(C_i_symbolp(t3))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8901,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:724: chicken.internal#hash-table-ref */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[146]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[146]+1);
av2[1]=t4;
av2[2]=*((C_word*)lf[120]+1);
av2[3]=t3;
tp(4,av2);}}
else{
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k8899 in chicken.syntax#get-line-number in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8901(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_8901,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8905,a[2]=((C_word*)t0)[2],a[3]=((C_word)li76),tmp=(C_word)a,a+=4,tmp);
/* expand.scm:724: g1856 */
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(
/* expand.scm:724: g1856 */
  f_8905(t2,t1)
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* g1856 in k8899 in chicken.syntax#get-line-number in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static C_word C_fcall f_8905(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_i_assq(((C_word*)t0)[2],t1);
return((C_truep(t2)?C_i_cdr(t2):C_SCHEME_FALSE));}

/* ##sys#check-syntax in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8920(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c<5) C_bad_min_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-5)*C_SIZEOF_PAIR +8,c,2)))){
C_save_and_reclaim((void*)f_8920,c,av);}
a=C_alloc((c-5)*C_SIZEOF_PAIR+8);
t5=C_build_rest(&a,c,5,av);
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
t6=C_rest_nullp(c,5);
t7=(C_truep(t6)?C_SCHEME_FALSE:C_get_rest_arg(c,5,av,5,t0));
t8=C_rest_nullp(c,5);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t5));
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8930,a[2]=t9,a[3]=t3,a[4]=t2,a[5]=t1,a[6]=t4,a[7]=t7,tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_nullp(t9))){
/* expand.scm:733: ##sys#current-environment */
t11=*((C_word*)lf[4]+1);{
C_word *av2=av;
av2[0]=t11;
av2[1]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}
else{
t11=t10;{
C_word *av2=av;
av2[0]=t11;
av2[1]=C_i_car(t9);
f_8930(2,av2);}}}

/* k8928 in ##sys#check-syntax in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8930(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(39,c,5)))){
C_save_and_reclaim((void *)f_8930,c,av);}
a=C_alloc(39);
t2=C_i_nullp(((C_word*)t0)[2]);
t3=(C_truep(t2)?C_SCHEME_END_OF_LIST:C_i_cdr(((C_word*)t0)[2]));
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
t14=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8935,a[2]=t7,a[3]=((C_word)li78),tmp=(C_word)a,a+=4,tmp));
t15=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8947,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word)li79),tmp=(C_word)a,a+=5,tmp));
t16=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8974,a[2]=((C_word)li81),tmp=(C_word)a,a+=3,tmp));
t17=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9019,a[2]=((C_word)li82),tmp=(C_word)a,a+=3,tmp));
t18=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9025,a[2]=((C_word)li84),tmp=(C_word)a,a+=3,tmp));
t19=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9052,a[2]=t7,a[3]=t5,a[4]=t11,a[5]=t13,a[6]=t9,a[7]=t1,a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[3],a[10]=((C_word*)t0)[6],tmp=(C_word)a,a+=11,tmp);
if(C_truep(((C_word*)t0)[7])){
t20=C_mutate((C_word*)lf[121]+1 /* (set! ##sys#syntax-error-culprit ...) */,((C_word*)t0)[7]);
t21=t19;
f_9052(t21,t20);}
else{
t20=t19;
f_9052(t20,C_SCHEME_UNDEFINED);}}

/* test in k8928 in ##sys#check-syntax in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_8935(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_8935,5,t0,t1,t2,t3,t4);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8942,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:736: pred */
t6=t3;{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}

/* k8940 in test in k8928 in ##sys#check-syntax in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8942(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8942,c,av);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* expand.scm:736: err */
t2=((C_word*)((C_word*)t0)[3])[1];
f_8947(t2,((C_word*)t0)[2],((C_word*)t0)[4]);}}

/* err in k8928 in ##sys#check-syntax in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_8947(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_8947,3,t0,t1,t2);}
a=C_alloc(6);
t3=*((C_word*)lf[121]+1);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8951,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:740: get-line-number */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[145]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[145]+1);
av2[1]=t4;
av2[2]=*((C_word*)lf[121]+1);
tp(3,av2);}}

/* k8949 in err in k8928 in ##sys#check-syntax in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8951(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_8951,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8958,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8965,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:743: scheme#symbol->string */
t4=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8972,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* expand.scm:744: scheme#symbol->string */
t4=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k8956 in k8949 in err in k8928 in ##sys#check-syntax in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8958(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8958,c,av);}
/* expand.scm:741: ##sys#syntax-error-hook */
t2=*((C_word*)lf[43]+1);{
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

/* k8963 in k8949 in err in k8928 in ##sys#check-syntax in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8965(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_8965,c,av);}
/* expand.scm:743: scheme#string-append */
t2=*((C_word*)lf[38]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[147];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[148];
av2[5]=t1;
av2[6]=lf[149];
av2[7]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(8,av2);}}

/* k8970 in k8949 in err in k8928 in ##sys#check-syntax in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8972(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_8972,c,av);}
/* expand.scm:744: scheme#string-append */
t2=*((C_word*)lf[38]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[150];
av2[3]=t1;
av2[4]=lf[151];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* lambda-list? in k8928 in ##sys#check-syntax in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8974(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_8974,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8978,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:748: ##sys#extended-lambda-list? */
t4=*((C_word*)lf[64]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k8976 in lambda-list? in k8928 in ##sys#check-syntax in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_8978(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8978,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8986,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(
  f_8986(((C_word*)t0)[3])
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* loop in k8976 in lambda-list? in k8928 in ##sys#check-syntax in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static C_word C_fcall f_8986(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;
loop:{}
t2=C_i_nullp(t1);
if(C_truep(t2)){
return(t2);}
else{
t3=C_i_symbolp(t1);
if(C_truep(t3)){
return(t3);}
else{
if(C_truep(C_i_pairp(t1))){
t4=C_u_i_car(t1);
if(C_truep(C_i_symbolp(t4))){
t6=C_u_i_cdr(t1);
t1=t6;
goto loop;}
else{
return(C_SCHEME_FALSE);}}
else{
return(C_SCHEME_FALSE);}}}}

/* variable? in k8928 in ##sys#check-syntax in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_9019(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9019,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_symbolp(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* proper-list? in k8928 in ##sys#check-syntax in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_9025(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_9025,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9031,a[2]=((C_word)li83),tmp=(C_word)a,a+=3,tmp);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=(
  f_9031(t2)
);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* loop in proper-list? in k8928 in ##sys#check-syntax in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static C_word C_fcall f_9031(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
loop:{}
t2=C_eqp(t1,C_SCHEME_END_OF_LIST);
if(C_truep(t2)){
return(t2);}
else{
if(C_truep(C_i_pairp(t1))){
t4=C_u_i_cdr(t1);
t1=t4;
goto loop;}
else{
return(C_SCHEME_FALSE);}}}

/* k9050 in k8928 in ##sys#check-syntax in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_9052(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,4)))){
C_save_and_reclaim_args((void *)trf_9052,2,t0,t1);}
a=C_alloc(12);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9057,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word)li87),tmp=(C_word)a,a+=10,tmp));
t5=((C_word*)t3)[1];
f_9057(t5,((C_word*)t0)[8],((C_word*)t0)[9],((C_word*)t0)[10]);}

/* walk in k9050 in k8928 in ##sys#check-syntax in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_9057(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_9057,4,t0,t1,t2,t3);}
a=C_alloc(8);
if(C_truep(C_i_vectorp(t3))){
t4=C_i_vector_ref(t3,C_fix(0));
t5=C_block_size(t3);
t6=C_fixnum_greaterp(t5,C_fix(1));
t7=(C_truep(t6)?C_i_vector_ref(t3,C_fix(1)):C_fix(0));
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9076,a[2]=t7,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=t1,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t9=C_eqp(t5,C_fix(1));
if(C_truep(t9)){
t10=t8;
f_9076(t10,C_fix(1));}
else{
t10=C_fixnum_greaterp(t5,C_fix(2));
t11=t8;
f_9076(t11,(C_truep(t10)?C_i_vector_ref(t3,C_fix(2)):C_fix(99999)));}}
else{
if(C_truep(C_immp(t3))){
t4=C_eqp(t3,t2);
if(C_truep(C_i_not(t4))){
/* expand.scm:789: err */
t5=((C_word*)((C_word*)t0)[2])[1];
f_8947(t5,t1,lf[155]);}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}
else{
if(C_truep(C_i_symbolp(t3))){
t4=C_eqp(t3,lf[156]);
if(C_truep(t4)){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_eqp(t3,lf[157]);
if(C_truep(t5)){
/* expand.scm:793: test */
t6=((C_word*)((C_word*)t0)[4])[1];
f_8935(t6,t1,t2,*((C_word*)lf[158]+1),lf[159]);}
else{
t6=C_eqp(t3,lf[160]);
if(C_truep(t6)){
/* expand.scm:794: test */
t7=((C_word*)((C_word*)t0)[4])[1];
f_8935(t7,t1,t2,((C_word*)((C_word*)t0)[5])[1],lf[161]);}
else{
t7=C_eqp(t3,lf[162]);
if(C_truep(t7)){
/* expand.scm:795: test */
t8=((C_word*)((C_word*)t0)[4])[1];
f_8935(t8,t1,t2,*((C_word*)lf[163]+1),lf[164]);}
else{
t8=C_eqp(t3,lf[165]);
if(C_truep(t8)){
/* expand.scm:796: test */
t9=((C_word*)((C_word*)t0)[4])[1];
f_8935(t9,t1,t2,((C_word*)((C_word*)t0)[6])[1],lf[166]);}
else{
t9=C_eqp(t3,lf[167]);
if(C_truep(t9)){
/* expand.scm:797: test */
t10=((C_word*)((C_word*)t0)[4])[1];
f_8935(t10,t1,t2,*((C_word*)lf[168]+1),lf[169]);}
else{
t10=C_eqp(t3,lf[170]);
if(C_truep(t10)){
/* expand.scm:798: test */
t11=((C_word*)((C_word*)t0)[4])[1];
f_8935(t11,t1,t2,*((C_word*)lf[171]+1),lf[172]);}
else{
t11=C_eqp(t3,lf[173]);
if(C_truep(t11)){
/* expand.scm:799: test */
t12=((C_word*)((C_word*)t0)[4])[1];
f_8935(t12,t1,t2,((C_word*)((C_word*)t0)[7])[1],lf[174]);}
else{
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9254,a[2]=((C_word*)t0)[8],a[3]=t3,a[4]=((C_word)li86),tmp=(C_word)a,a+=5,tmp);
/* expand.scm:801: test */
t13=((C_word*)((C_word*)t0)[4])[1];
f_8935(t13,t1,t2,t12,lf[175]);}}}}}}}}}
else{
t4=C_i_pairp(t3);
if(C_truep(C_i_not(t4))){
/* expand.scm:808: err */
t5=((C_word*)((C_word*)t0)[2])[1];
f_8947(t5,t1,lf[176]);}
else{
t5=C_i_pairp(t2);
if(C_truep(C_i_not(t5))){
/* expand.scm:809: err */
t6=((C_word*)((C_word*)t0)[2])[1];
f_8947(t6,t1,lf[177]);}
else{
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9311,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:811: walk */
t14=t6;
t15=C_i_car(t2);
t16=C_i_car(t3);
t1=t14;
t2=t15;
t3=t16;
goto loop;}}}}}}

/* k9074 in walk in k9050 in k8928 in ##sys#check-syntax in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_9076(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,4)))){
C_save_and_reclaim_args((void *)trf_9076,2,t0,t1);}
a=C_alloc(11);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9081,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word)li85),tmp=(C_word)a,a+=9,tmp));
t5=((C_word*)t3)[1];
f_9081(t5,((C_word*)t0)[6],((C_word*)t0)[7],C_fix(0));}

/* doloop1937 in k9074 in walk in k9050 in k8928 in ##sys#check-syntax in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_9081(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_9081,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t4)){
if(C_truep(C_fixnum_lessp(t3,((C_word*)t0)[2]))){
/* expand.scm:782: err */
t5=((C_word*)((C_word*)t0)[3])[1];
f_8947(t5,t1,lf[152]);}
else{
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9100,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[5]))){
/* expand.scm:784: err */
t6=((C_word*)((C_word*)t0)[3])[1];
f_8947(t6,t5,lf[153]);}
else{
t6=C_i_pairp(t2);
if(C_truep(C_i_not(t6))){
/* expand.scm:786: err */
t7=((C_word*)((C_word*)t0)[3])[1];
f_8947(t7,t5,lf[154]);}
else{
/* expand.scm:787: walk */
t7=((C_word*)((C_word*)t0)[6])[1];
f_9057(t7,t5,C_i_car(t2),((C_word*)t0)[7]);}}}}

/* k9098 in doloop1937 in k9074 in walk in k9050 in k8928 in ##sys#check-syntax in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_9100(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9100,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_9081(t2,((C_word*)t0)[3],C_i_cdr(((C_word*)t0)[4]),C_fixnum_plus(((C_word*)t0)[5],C_fix(1)));}

/* a9253 in walk in k9050 in k8928 in ##sys#check-syntax in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_9254(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9254,c,av);}
if(C_truep(C_i_symbolp(t2))){
t3=(
/* expand.scm:804: lookup */
  f_5558(t2,((C_word*)t0)[2])
);
t4=C_i_symbolp(t3);
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=(C_truep(t4)?C_eqp(t3,((C_word*)t0)[3]):C_eqp(t2,((C_word*)t0)[3]));
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t3=C_i_symbolp(C_SCHEME_FALSE);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=(C_truep(t3)?C_eqp(C_SCHEME_FALSE,((C_word*)t0)[3]):C_eqp(t2,((C_word*)t0)[3]));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k9309 in walk in k9050 in k8928 in ##sys#check-syntax in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_9311(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9311,c,av);}
/* expand.scm:812: walk */
t2=((C_word*)((C_word*)t0)[2])[1];
f_9057(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]),C_u_i_cdr(((C_word*)t0)[5]));}

/* chicken.syntax#make-er/ir-transformer in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_9364(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,5)))){
C_save_and_reclaim_args((void *)trf_9364,3,t1,t2,t3);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9370,a[2]=t3,a[3]=t2,a[4]=((C_word)li97),tmp=(C_word)a,a+=5,tmp);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_a_i_record2(&a,2,lf[27],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* a9369 in chicken.syntax#make-er/ir-transformer in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_9370(C_word c,C_word *av){
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
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_9370,c,av);}
a=C_alloc(15);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9373,a[2]=((C_word)li89),tmp=(C_word)a,a+=3,tmp);
t8=C_i_listp(t3);
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9420,a[2]=t7,a[3]=t6,a[4]=t3,a[5]=t4,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],a[8]=t1,a[9]=t2,tmp=(C_word)a,a+=10,tmp);
if(C_truep(t8)){
t10=t9;{
C_word *av2=av;
av2[0]=t10;
av2[1]=t8;
f_9420(2,av2);}}
else{
/* expand.scm:831: ##sys#error */
t10=*((C_word*)lf[28]+1);{
C_word *av2=av;
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[182];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}}

/* inherit-pair-line-numbers in a9369 in chicken.syntax#make-er/ir-transformer in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_9373(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_9373,3,t1,t2,t3);}
a=C_alloc(10);
t4=C_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9380,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t4)){
if(C_truep(C_i_symbolp(t4))){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9389,a[2]=t3,a[3]=t1,a[4]=t5,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:825: get-line-number */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[145]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[145]+1);
av2[1]=t6;
av2[2]=t2;
tp(3,av2);}}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k9378 in inherit-pair-line-numbers in a9369 in chicken.syntax#make-er/ir-transformer in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_9380(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9380,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k9387 in inherit-pair-line-numbers in a9369 in chicken.syntax#make-er/ir-transformer in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_9389(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_9389,c,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9395,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* expand.scm:826: chicken.internal#hash-table-ref */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[146]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[146]+1);
av2[1]=t2;
av2[2]=*((C_word*)lf[120]+1);
av2[3]=((C_word*)t0)[5];
tp(4,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k9393 in k9387 in inherit-pair-line-numbers in a9369 in chicken.syntax#make-er/ir-transformer in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_9395(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_9395,c,av);}
a=C_alloc(6);
t2=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
if(C_truep(t2)){
if(C_truep(C_i_assq(((C_word*)t0)[2],t2))){
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[4]);
t4=C_a_i_cons(&a,2,t3,t2);
/* expand.scm:828: chicken.internal#hash-table-set! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[179]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[179]+1);
av2[1]=((C_word*)t0)[5];
av2[2]=*((C_word*)lf[120]+1);
av2[3]=((C_word*)t0)[6];
av2[4]=t4;
tp(5,av2);}}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k9418 in a9369 in chicken.syntax#make-er/ir-transformer in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_9420(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(42,c,4)))){
C_save_and_reclaim((void *)f_9420,c,av);}
a=C_alloc(42);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9422,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word)li90),tmp=(C_word)a,a+=7,tmp));
t11=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9508,a[2]=t5,a[3]=((C_word*)t0)[5],a[4]=((C_word)li94),tmp=(C_word)a,a+=5,tmp));
t12=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9727,a[2]=((C_word)li95),tmp=(C_word)a,a+=3,tmp));
t13=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9752,a[2]=((C_word*)t0)[2],a[3]=t9,a[4]=((C_word*)t0)[4],a[5]=t7,a[6]=((C_word*)t0)[3],a[7]=t3,a[8]=((C_word)li96),tmp=(C_word)a,a+=9,tmp));
if(C_truep(((C_word*)t0)[6])){
/* expand.scm:922: handler */
t14=((C_word*)t0)[7];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t14;
av2[1]=((C_word*)t0)[8];
av2[2]=((C_word*)t0)[9];
av2[3]=((C_word*)t3)[1];
av2[4]=((C_word*)t5)[1];
((C_proc)C_fast_retrieve_proc(t14))(5,av2);}}
else{
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9884,a[2]=t9,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9888,a[2]=((C_word*)t0)[7],a[3]=t14,a[4]=t3,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:928: rename */
t16=((C_word*)t3)[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t16;
av2[1]=t15;
av2[2]=((C_word*)t0)[9];
f_9422(3,av2);}}}

/* rename in k9418 in a9369 in chicken.syntax#make-er/ir-transformer in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_9422(C_word c,C_word *av){
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
loop:
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
av[0]=t0;
av[1]=t1;
av[2]=t2;
C_save_and_reclaim((void *)f_9422,c,av);}
a=C_alloc(7);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9440,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:834: rename */
t7=t3;
t8=C_u_i_car(t2);
t1=t7;
t2=t8;
c=3;
goto loop;}
else{
if(C_truep(C_i_vectorp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9461,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9465,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:836: scheme#vector->list */
t5=*((C_word*)lf[181]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t3=C_i_symbolp(t2);
if(C_truep(C_i_not(t3))){
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_assq(t2,((C_word*)((C_word*)t0)[4])[1]);
if(C_truep(t4)){
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_i_cdr(t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9491,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:843: macro-alias */
f_5575(t5,t2,((C_word*)t0)[5]);}}}}}

/* k9438 in rename in k9418 in a9369 in chicken.syntax#make-er/ir-transformer in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_9440(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_9440,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9444,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:834: rename */
t3=((C_word*)((C_word*)t0)[5])[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_u_i_cdr(((C_word*)t0)[4]);
f_9422(3,av2);}}

/* k9442 in k9438 in rename in k9418 in a9369 in chicken.syntax#make-er/ir-transformer in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_9444(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_9444,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
/* expand.scm:834: inherit-pair-line-numbers */
f_9373(((C_word*)t0)[4],((C_word*)t0)[5],t2);}

/* k9459 in rename in k9418 in a9369 in chicken.syntax#make-er/ir-transformer in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_9461(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9461,c,av);}
/* expand.scm:836: scheme#list->vector */
t2=*((C_word*)lf[180]+1);{
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

/* k9463 in rename in k9418 in a9369 in chicken.syntax#make-er/ir-transformer in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_9465(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9465,c,av);}
/* expand.scm:836: rename */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
f_9422(3,av2);}}

/* k9489 in rename in k9418 in a9369 in chicken.syntax#make-er/ir-transformer in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_9491(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_9491,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* compare in k9418 in a9369 in chicken.syntax#make-er/ir-transformer in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_9508(C_word c,C_word *av){
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
loop:
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
av[0]=t0;
av[1]=t1;
av[2]=t2;
av[3]=t3;
C_save_and_reclaim((void *)f_9508,c,av);}
a=C_alloc(10);
if(C_truep(C_i_pairp(t2))){
if(C_truep(C_i_pairp(t3))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9530,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* expand.scm:851: compare */
t11=t4;
t12=C_u_i_car(t2);
t13=C_u_i_car(t3);
t1=t11;
t2=t12;
t3=t13;
c=4;
goto loop;}
else{
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
if(C_truep(C_i_vectorp(t2))){
if(C_truep(C_i_vectorp(t3))){
t4=C_block_size(t2);
t5=C_block_size(t3);
t6=C_eqp(t4,t5);
if(C_truep(t6)){
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9567,a[2]=t4,a[3]=t8,a[4]=((C_word*)t0)[2],a[5]=t2,a[6]=t3,a[7]=((C_word)li91),tmp=(C_word)a,a+=8,tmp));
t10=((C_word*)t8)[1];
f_9567(t10,t1,C_fix(0),C_SCHEME_TRUE);}
else{
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}
else{
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
t4=C_i_symbolp(t2);
t5=(C_truep(t4)?C_i_symbolp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_i_getprop(t2,lf[7],C_SCHEME_FALSE);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9619,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t6)){
t8=t7;
f_9619(t8,t6);}
else{
t8=(
/* expand.scm:882: lookup */
  f_5558(t2,((C_word*)t0)[3])
);
t9=t7;
f_9619(t9,(C_truep(t8)?t8:t2));}}
else{
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_eqp(t2,t3);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}}}

/* k9528 in compare in k9418 in a9369 in chicken.syntax#make-er/ir-transformer in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_9530(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9530,c,av);}
if(C_truep(t1)){
/* expand.scm:852: compare */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=C_u_i_cdr(((C_word*)t0)[4]);
av2[3]=C_u_i_cdr(((C_word*)t0)[5]);
f_9508(4,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* doloop2022 in compare in k9418 in a9369 in chicken.syntax#make-er/ir-transformer in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_9567(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_9567,4,t0,t1,t2,t3);}
a=C_alloc(5);
t4=C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]);
t5=(C_truep(t4)?t4:C_i_not(t3));
if(C_truep(t5)){
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_fixnum_plus(t2,C_fix(1));
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9588,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* expand.scm:858: compare */
t8=((C_word*)((C_word*)t0)[4])[1];{
C_word av2[4];
av2[0]=t8;
av2[1]=t7;
av2[2]=C_i_vector_ref(((C_word*)t0)[5],t2);
av2[3]=C_i_vector_ref(((C_word*)t0)[6],t2);
f_9508(4,av2);}}}

/* k9586 in doloop2022 in compare in k9418 in a9369 in chicken.syntax#make-er/ir-transformer in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_9588(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9588,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_9567(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k9617 in compare in k9418 in a9369 in chicken.syntax#make-er/ir-transformer in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_9619(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_9619,2,t0,t1);}
a=C_alloc(4);
t2=C_i_getprop(((C_word*)t0)[2],lf[7],C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9627,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
t4=t3;
f_9627(t4,t2);}
else{
t4=(
/* expand.scm:882: lookup */
  f_5558(((C_word*)t0)[2],((C_word*)t0)[4])
);
t5=t3;
f_9627(t5,(C_truep(t4)?t4:((C_word*)t0)[2]));}}

/* k9625 in k9617 in compare in k9418 in a9369 in chicken.syntax#make-er/ir-transformer in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_9627(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_9627,2,t0,t1);}
a=C_alloc(5);
if(C_truep(C_i_symbolp(((C_word*)t0)[2]))){
if(C_truep(C_i_symbolp(t1))){
t2=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_eqp(((C_word*)t0)[2],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9664,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:870: ##sys#macro-environment */
t3=*((C_word*)lf[18]+1);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}
else{
if(C_truep(C_i_symbolp(t1))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9692,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* expand.scm:874: ##sys#macro-environment */
t3=*((C_word*)lf[18]+1);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_eqp(((C_word*)t0)[2],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}}

/* g2063 in k9662 in k9625 in k9617 in compare in k9418 in a9369 in chicken.syntax#make-er/ir-transformer in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static C_word C_fcall f_9649(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_eqp(C_i_cdr(t1),((C_word*)t0)[2]));}

/* k9662 in k9625 in k9617 in compare in k9418 in a9369 in chicken.syntax#make-er/ir-transformer in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_9664(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_9664,c,av);}
a=C_alloc(4);
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9649,a[2]=((C_word*)t0)[3],a[3]=((C_word)li92),tmp=(C_word)a,a+=4,tmp);
/* expand.scm:869: g2063 */
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=(
/* expand.scm:869: g2063 */
  f_9649(t3,t2)
);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* g2072 in k9690 in k9625 in k9617 in compare in k9418 in a9369 in chicken.syntax#make-er/ir-transformer in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static C_word C_fcall f_9677(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_eqp(((C_word*)t0)[2],C_i_cdr(t1)));}

/* k9690 in k9625 in k9617 in compare in k9418 in a9369 in chicken.syntax#make-er/ir-transformer in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_9692(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_9692,c,av);}
a=C_alloc(4);
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9677,a[2]=((C_word*)t0)[3],a[3]=((C_word)li93),tmp=(C_word)a,a+=4,tmp);
/* expand.scm:874: g2072 */
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=(
/* expand.scm:874: g2072 */
  f_9677(t3,t2)
);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* assq-reverse in k9418 in a9369 in chicken.syntax#make-er/ir-transformer in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static C_word C_fcall f_9727(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_nullp(t2))){
return(C_SCHEME_FALSE);}
else{
t3=C_i_cdar(t2);
t4=C_eqp(t3,t1);
if(C_truep(t4)){
return(C_u_i_car(t2));}
else{
t6=t1;
t7=C_u_i_cdr(t2);
t1=t6;
t2=t7;
goto loop;}}}

/* mirror-rename in k9418 in a9369 in chicken.syntax#make-er/ir-transformer in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_fcall f_9752(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_9752,3,t0,t1,t2);}
a=C_alloc(7);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9770,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:897: mirror-rename */
t8=t3;
t9=C_u_i_car(t2);
t1=t8;
t2=t9;
goto loop;}
else{
if(C_truep(C_i_vectorp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9791,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9795,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* expand.scm:899: scheme#vector->list */
t5=*((C_word*)lf[181]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t3=C_i_symbolp(t2);
if(C_truep(C_i_not(t3))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(
/* expand.scm:902: lookup */
  f_5558(t2,((C_word*)t0)[4])
);
t5=(
/* expand.scm:903: assq-reverse */
  f_9727(t2,((C_word*)((C_word*)t0)[6])[1])
);
if(C_truep(t5)){
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_i_car(t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
if(C_truep(C_i_not(t4))){
/* expand.scm:907: rename */
t6=((C_word*)((C_word*)t0)[7])[1];{
C_word av2[3];
av2[0]=t6;
av2[1]=t1;
av2[2]=t2;
f_9422(3,av2);}}
else{
if(C_truep(C_i_pairp(t4))){
/* expand.scm:909: rename */
t6=((C_word*)((C_word*)t0)[7])[1];{
C_word av2[3];
av2[0]=t6;
av2[1]=t1;
av2[2]=t2;
f_9422(3,av2);}}
else{
t6=C_i_getprop(t2,lf[9],C_SCHEME_FALSE);
if(C_truep(t6)){
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
/* expand.scm:916: rename */
t7=((C_word*)((C_word*)t0)[7])[1];{
C_word av2[3];
av2[0]=t7;
av2[1]=t1;
av2[2]=t2;
f_9422(3,av2);}}}}}}}}}

/* k9768 in mirror-rename in k9418 in a9369 in chicken.syntax#make-er/ir-transformer in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_9770(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_9770,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9774,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* expand.scm:897: mirror-rename */
t3=((C_word*)((C_word*)t0)[5])[1];
f_9752(t3,t2,C_u_i_cdr(((C_word*)t0)[4]));}

/* k9772 in k9768 in mirror-rename in k9418 in a9369 in chicken.syntax#make-er/ir-transformer in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_9774(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_9774,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
/* expand.scm:896: inherit-pair-line-numbers */
f_9373(((C_word*)t0)[4],((C_word*)t0)[5],t2);}

/* k9789 in mirror-rename in k9418 in a9369 in chicken.syntax#make-er/ir-transformer in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_9791(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9791,c,av);}
/* expand.scm:899: scheme#list->vector */
t2=*((C_word*)lf[180]+1);{
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

/* k9793 in mirror-rename in k9418 in a9369 in chicken.syntax#make-er/ir-transformer in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_9795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9795,c,av);}
/* expand.scm:899: mirror-rename */
t2=((C_word*)((C_word*)t0)[2])[1];
f_9752(t2,((C_word*)t0)[3],t1);}

/* k9882 in k9418 in a9369 in chicken.syntax#make-er/ir-transformer in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_9884(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9884,c,av);}
/* expand.scm:928: mirror-rename */
t2=((C_word*)((C_word*)t0)[2])[1];
f_9752(t2,((C_word*)t0)[3],t1);}

/* k9886 in k9418 in a9369 in chicken.syntax#make-er/ir-transformer in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_9888(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9888,c,av);}
/* expand.scm:928: handler */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=((C_word*)((C_word*)t0)[4])[1];
av2[4]=((C_word*)((C_word*)t0)[5])[1];
((C_proc)C_fast_retrieve_proc(t2))(5,av2);}}

/* chicken.syntax#er-macro-transformer in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_9893(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9893,c,av);}
/* expand.scm:930: make-er/ir-transformer */
f_9364(t1,t2,C_SCHEME_TRUE);}

/* chicken.syntax#ir-macro-transformer in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_9899(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9899,c,av);}
/* expand.scm:931: make-er/ir-transformer */
f_9364(t1,t2,C_SCHEME_FALSE);}

/* k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_9912(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_9912,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9915,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13948,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13950,a[2]=((C_word)li176),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:960: ##sys#er-transformer */
t5=*((C_word*)lf[185]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_9915(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_9915,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9919,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13837,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13839,a[2]=((C_word)li175),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:968: ##sys#er-transformer */
t5=*((C_word*)lf[185]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_9919(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_9919,c,av);}
a=C_alloc(9);
t2=C_mutate(&lf[99] /* (set! chicken.syntax#import-definition ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9922,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13802,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13804,a[2]=((C_word)li170),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:990: ##sys#er-transformer */
t6=*((C_word*)lf[185]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_9922(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_9922,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9925,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13509,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13511,a[2]=((C_word)li169),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:999: ##sys#er-transformer */
t5=*((C_word*)lf[185]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_9925(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_9925,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9929,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1051: ##sys#macro-environment */
t3=*((C_word*)lf[18]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_9929(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_9929,c,av);}
a=C_alloc(9);
t2=C_mutate((C_word*)lf[187]+1 /* (set! ##sys#initial-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9932,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13334,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13336,a[2]=((C_word)li164),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1055: ##sys#er-transformer */
t6=*((C_word*)lf[185]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_9932(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_9932,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9935,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13307,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13309,a[2]=((C_word)li163),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1115: ##sys#er-transformer */
t5=*((C_word*)lf[185]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_9935(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_9935,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9938,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13297,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13299,a[2]=((C_word)li162),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1125: ##sys#er-transformer */
t5=*((C_word*)lf[185]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_9938(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_9938,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9941,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13126,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13128,a[2]=((C_word)li161),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1134: ##sys#er-transformer */
t5=*((C_word*)lf[185]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_9941(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_9941,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9944,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13042,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13044,a[2]=((C_word)li158),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1169: ##sys#er-transformer */
t5=*((C_word*)lf[185]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_9944(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_9944,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9947,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13019,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13021,a[2]=((C_word)li157),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1192: ##sys#er-transformer */
t5=*((C_word*)lf[185]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_9947(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_9947,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9951,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1199: ##sys#macro-environment */
t3=*((C_word*)lf[18]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_9951(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_9951,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[188]+1 /* (set! ##sys#chicken.module-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9955,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1202: ##sys#macro-environment */
t4=*((C_word*)lf[18]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_9955(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_9955,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9958,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13002,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13004,a[2]=((C_word)li156),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1207: ##sys#er-transformer */
t5=*((C_word*)lf[185]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 */
static void C_ccall f_9958(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_9958,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9961,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12985,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12987,a[2]=((C_word)li155),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1215: ##sys#er-transformer */
t5=*((C_word*)lf[185]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in k4260 in ... */
static void C_ccall f_9961(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_9961,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9964,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12968,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12970,a[2]=((C_word)li154),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1223: ##sys#er-transformer */
t5=*((C_word*)lf[185]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in k4263 in ... */
static void C_ccall f_9964(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_9964,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9967,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12951,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12953,a[2]=((C_word)li153),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1231: ##sys#er-transformer */
t5=*((C_word*)lf[185]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in k5545 in ... */
static void C_ccall f_9967(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_9967,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9971,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12824,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12826,a[2]=((C_word)li152),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1240: ##sys#er-transformer */
t5=*((C_word*)lf[185]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in k5550 in ... */
static void C_ccall f_9971(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_9971,c,av);}
a=C_alloc(10);
t2=C_mutate((C_word*)lf[96]+1 /* (set! chicken.syntax#define-definition ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9975,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12777,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12779,a[2]=((C_word)li150),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1268: ##sys#er-transformer */
t6=*((C_word*)lf[185]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in k5554 in ... */
static void C_ccall f_9975(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_9975,c,av);}
a=C_alloc(10);
t2=C_mutate((C_word*)lf[97]+1 /* (set! chicken.syntax#define-syntax-definition ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9978,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12725,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12727,a[2]=((C_word)li149),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1282: ##sys#er-transformer */
t6=*((C_word*)lf[185]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in k5944 in ... */
static void C_ccall f_9978(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_9978,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9981,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12703,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12705,a[2]=((C_word)li148),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1295: ##sys#er-transformer */
t5=*((C_word*)lf[185]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in k9910 in ... */
static void C_ccall f_9981(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_9981,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9984,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12681,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12683,a[2]=((C_word)li147),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1304: ##sys#er-transformer */
t5=*((C_word*)lf[185]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in k9913 in ... */
static void C_ccall f_9984(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_9984,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9987,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12659,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12661,a[2]=((C_word)li146),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1313: ##sys#er-transformer */
t5=*((C_word*)lf[185]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in k9917 in ... */
static void C_ccall f_9987(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_9987,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9990,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12615,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12617,a[2]=((C_word)li145),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1322: ##sys#er-transformer */
t5=*((C_word*)lf[185]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in k9920 in ... */
static void C_ccall f_9990(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_9990,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9993,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12578,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12580,a[2]=((C_word)li144),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1334: ##sys#er-transformer */
t5=*((C_word*)lf[185]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in k9923 in ... */
static void C_ccall f_9993(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_9993,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9996,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12526,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12528,a[2]=((C_word)li143),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1348: ##sys#er-transformer */
t5=*((C_word*)lf[185]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in k9927 in ... */
static void C_ccall f_9996(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_9996,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9999,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12143,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12145,a[2]=((C_word)li142),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1364: ##sys#er-transformer */
t5=*((C_word*)lf[185]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k9997 in k9994 in k9991 in k9988 in k9985 in k9982 in k9979 in k9976 in k9973 in k9969 in k9965 in k9962 in k9959 in k9956 in k9953 in k9949 in k9945 in k9942 in k9939 in k9936 in k9933 in k9930 in ... */
static void C_ccall f_9999(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_9999,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10002,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11907,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11909,a[2]=((C_word)li140),tmp=(C_word)a,a+=3,tmp);
/* expand.scm:1429: ##sys#er-transformer */
t5=*((C_word*)lf[185]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_expand_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("expand"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_expand_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(3327))){
C_save(t1);
C_rereclaim2(3327*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,372);
lf[0]=C_h_intern(&lf[0],6, C_text("expand"));
lf[1]=C_h_intern(&lf[1],15, C_text("chicken.syntax#"));
lf[2]=C_h_intern(&lf[2],14, C_text("##sys#features"));
lf[3]=C_h_intern(&lf[3],29, C_text("##sys#current-source-filename"));
lf[4]=C_h_intern(&lf[4],25, C_text("##sys#current-environment"));
lf[5]=C_h_intern(&lf[5],30, C_text("##sys#current-meta-environment"));
lf[7]=C_h_intern(&lf[7],18, C_text("##core#macro-alias"));
lf[9]=C_h_intern(&lf[9],16, C_text("##core#real-name"));
lf[10]=C_h_intern(&lf[10],19, C_text("chicken.base#gensym"));
lf[11]=C_h_intern(&lf[11],24, C_text("chicken.keyword#keyword\077"));
lf[12]=C_h_intern(&lf[12],27, C_text("chicken.syntax#strip-syntax"));
lf[13]=C_h_intern(&lf[13],18, C_text("scheme#make-vector"));
lf[14]=C_h_intern(&lf[14],15, C_text("##sys#extend-se"));
lf[15]=C_h_intern(&lf[15],8, C_text("for-each"));
lf[16]=C_h_intern(&lf[16],13, C_text("scheme#append"));
lf[17]=C_h_intern(&lf[17],3, C_text("map"));
lf[18]=C_h_intern(&lf[18],23, C_text("##sys#macro-environment"));
lf[19]=C_h_intern(&lf[19],30, C_text("##sys#scheme-macro-environment"));
lf[20]=C_h_intern(&lf[20],35, C_text("##sys#chicken-ffi-macro-environment"));
lf[21]=C_h_intern(&lf[21],41, C_text("##sys#chicken.condition-macro-environment"));
lf[22]=C_h_intern(&lf[22],36, C_text("##sys#chicken.time-macro-environment"));
lf[23]=C_h_intern(&lf[23],36, C_text("##sys#chicken.type-macro-environment"));
lf[24]=C_h_intern(&lf[24],38, C_text("##sys#chicken.syntax-macro-environment"));
lf[25]=C_h_intern(&lf[25],36, C_text("##sys#chicken.base-macro-environment"));
lf[26]=C_h_intern(&lf[26],24, C_text("##sys#ensure-transformer"));
lf[27]=C_h_intern(&lf[27],11, C_text("transformer"));
lf[28]=C_h_intern(&lf[28],11, C_text("##sys#error"));
lf[29]=C_decode_literal(C_heaptop,C_text("\376B\000\000$expected syntax-transformer, but got"));
lf[30]=C_h_intern(&lf[30],30, C_text("##sys#extend-macro-environment"));
lf[31]=C_h_intern(&lf[31],12, C_text("##sys#macro\077"));
lf[32]=C_h_intern(&lf[32],21, C_text("##sys#undefine-macro!"));
lf[33]=C_h_intern(&lf[33],14, C_text("##sys#expand-0"));
lf[34]=C_h_intern(&lf[34],9, C_text("condition"));
lf[35]=C_h_intern(&lf[35],3, C_text("exn"));
lf[36]=C_h_intern(&lf[36],23, C_text("chicken.condition#abort"));
lf[37]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\003\001exn\376\001\000\000\007\001message"));
lf[38]=C_h_intern(&lf[38],20, C_text("scheme#string-append"));
lf[39]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025during expansion of ("));
lf[40]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010 ...) - "));
lf[41]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\003\001exn\376\001\000\000\007\001message"));
lf[42]=C_h_intern(&lf[42],36, C_text("chicken.syntax#expansion-result-hook"));
lf[43]=C_h_intern(&lf[43],23, C_text("##sys#syntax-error-hook"));
lf[44]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030syntax transformer for `"));
lf[45]=C_decode_literal(C_heaptop,C_text("\376B\000\000@\047 returns original form, which would result in endless expansion"));
lf[46]=C_h_intern(&lf[46],21, C_text("scheme#symbol->string"));
lf[47]=C_h_intern(&lf[47],51, C_text("chicken.internal.syntax-rules#syntax-rules-mismatch"));
lf[48]=C_h_intern(&lf[48],18, C_text("##sys#dynamic-wind"));
lf[49]=C_h_intern(&lf[49],40, C_text("chicken.condition#with-exception-handler"));
lf[50]=C_h_intern(&lf[50],37, C_text("scheme#call-with-current-continuation"));
lf[51]=C_decode_literal(C_heaptop,C_text("\376B\000\000\034invalid syntax in macro form"));
lf[52]=C_h_intern(&lf[52],10, C_text("##core#let"));
lf[53]=C_h_intern(&lf[53],18, C_text("##core#loop-lambda"));
lf[54]=C_h_intern(&lf[54],14, C_text("##core#letrec\052"));
lf[55]=C_h_intern(&lf[55],10, C_text("##core#app"));
lf[56]=C_h_intern(&lf[56],18, C_text("##sys#check-syntax"));
lf[57]=C_h_intern(&lf[57],3, C_text("let"));
lf[58]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\010\001variable\376\003\000\000\002\376\001\000\000\001\001_\376\377\016\376\377\001\000\000\000\000\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000"
"\000\001"));
lf[59]=C_decode_literal(C_heaptop,C_text("\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\002"));
lf[60]=C_h_intern(&lf[60],26, C_text("##sys#compiler-syntax-hook"));
lf[61]=C_h_intern(&lf[61],26, C_text("##compiler#compiler-syntax"));
lf[62]=C_h_intern(&lf[62],27, C_text("##sys#enable-runtime-macros"));
lf[63]=C_h_intern(&lf[63],21, C_text("chicken.syntax#expand"));
lf[64]=C_h_intern(&lf[64],27, C_text("##sys#extended-lambda-list\077"));
lf[65]=C_h_intern(&lf[65],6, C_text("#!rest"));
lf[66]=C_h_intern(&lf[66],10, C_text("#!optional"));
lf[67]=C_h_intern(&lf[67],5, C_text("#!key"));
lf[68]=C_h_intern(&lf[68],33, C_text("##sys#expand-extended-lambda-list"));
lf[69]=C_h_intern(&lf[69],12, C_text("scheme#cadar"));
lf[70]=C_h_intern(&lf[70],14, C_text("scheme#reverse"));
lf[71]=C_h_intern(&lf[71],12, C_text("##sys#append"));
lf[72]=C_h_intern(&lf[72],12, C_text("##core#quote"));
lf[73]=C_h_intern(&lf[73],13, C_text("##core#lambda"));
lf[74]=C_h_intern(&lf[74],17, C_text("##sys#get-keyword"));
lf[75]=C_h_intern(&lf[75],31, C_text("chicken.keyword#string->keyword"));
lf[76]=C_decode_literal(C_heaptop,C_text("\376B\000\000+rest argument list specified more than once"));
lf[77]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032invalid lambda list syntax"));
lf[78]=C_decode_literal(C_heaptop,C_text("\376B\000\000-`#!optional\047 argument marker in wrong context"));
lf[79]=C_h_intern(&lf[79],4, C_text("rest"));
lf[80]=C_decode_literal(C_heaptop,C_text("\376B\000\000#invalid syntax of `#!rest\047 argument"));
lf[81]=C_decode_literal(C_heaptop,C_text("\376B\000\000)`#!rest\047 argument marker in wrong context"));
lf[82]=C_decode_literal(C_heaptop,C_text("\376B\000\000(`#!key\047 argument marker in wrong context"));
lf[83]=C_decode_literal(C_heaptop,C_text("\376B\000\0000invalid lambda list syntax after `#!rest\047 marker"));
lf[84]=C_decode_literal(C_heaptop,C_text("\376B\000\000 invalid required argument syntax"));
lf[85]=C_decode_literal(C_heaptop,C_text("\376B\000\0000invalid lambda list syntax after `#!rest\047 marker"));
lf[86]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032invalid lambda list syntax"));
lf[87]=C_h_intern(&lf[87],14, C_text("let-optionals\052"));
lf[88]=C_h_intern(&lf[88],8, C_text("optional"));
lf[89]=C_h_intern(&lf[89],4, C_text("let\052"));
lf[90]=C_h_intern(&lf[90],31, C_text("##sys#default-macro-environment"));
lf[91]=C_h_intern(&lf[91],39, C_text("##sys#expand-multiple-values-assignment"));
lf[92]=C_h_intern(&lf[92],22, C_text("##sys#call-with-values"));
lf[93]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001##core#undefined\376\377\016\376\377\016"));
lf[94]=C_h_intern(&lf[94],11, C_text("##core#set!"));
lf[95]=C_h_intern(&lf[95],27, C_text("##sys#decompose-lambda-list"));
lf[96]=C_h_intern(&lf[96],32, C_text("chicken.syntax#define-definition"));
lf[97]=C_h_intern(&lf[97],39, C_text("chicken.syntax#define-syntax-definition"));
lf[98]=C_h_intern(&lf[98],39, C_text("chicken.syntax#define-values-definition"));
lf[100]=C_h_intern(&lf[100],23, C_text("##sys#canonicalize-body"));
lf[101]=C_h_intern(&lf[101],6, C_text("define"));
lf[102]=C_h_intern(&lf[102],13, C_text("define-syntax"));
lf[103]=C_h_intern(&lf[103],13, C_text("define-values"));
lf[104]=C_h_intern(&lf[104],6, C_text("import"));
lf[105]=C_h_intern(&lf[105],12, C_text("##core#begin"));
lf[106]=C_h_intern(&lf[106],13, C_text("##core#module"));
lf[107]=C_h_intern(&lf[107],14, C_text("##core#include"));
lf[108]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001##core#undefined\376\377\016"));
lf[109]=C_h_intern(&lf[109],20, C_text("##core#letrec-syntax"));
lf[110]=C_decode_literal(C_heaptop,C_text("\376B\000\000,redefinition of currently used defining form"));
lf[111]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001##core#undefined\376\377\016"));
lf[112]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\010\001variable\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\000"));
lf[113]=C_h_intern(&lf[113],36, C_text("chicken.syntax#expand-curried-define"));
lf[114]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001\001_\376\001\000\000\013\001lambda-list\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\001"));
lf[115]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001variable\376\001\000\000\013\001lambda-list\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\001"));
lf[116]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\000"));
lf[117]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\001"));
lf[118]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\013\001lambda-list\376\003\000\000\002\376\001\000\000\001\001_\376\377\016"));
lf[119]=C_h_intern(&lf[119],31, C_text("chicken.syntax#match-expression"));
lf[120]=C_h_intern(&lf[120],26, C_text("##sys#line-number-database"));
lf[121]=C_h_intern(&lf[121],26, C_text("##sys#syntax-error-culprit"));
lf[122]=C_h_intern(&lf[122],20, C_text("##sys#syntax-context"));
lf[123]=C_h_intern(&lf[123],27, C_text("chicken.syntax#syntax-error"));
lf[124]=C_h_intern(&lf[124],17, C_text("##sys#signal-hook"));
lf[125]=C_h_intern_kw(&lf[125],12, C_text("syntax-error"));
lf[126]=C_h_intern(&lf[126],26, C_text("##sys#syntax-error/context"));
lf[127]=C_h_intern(&lf[127],11, C_text("##sys#print"));
lf[128]=C_h_intern(&lf[128],30, C_text("chicken.base#get-output-string"));
lf[129]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006 ...)\047"));
lf[130]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025\012inside expression `("));
lf[131]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002: "));
lf[132]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027  Suggesting: `(import "));
lf[133]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002)\047"));
lf[134]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025  Suggesting one of:\012"));
lf[135]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[136]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017\012      (import "));
lf[137]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002)\047"));
lf[138]=C_decode_literal(C_heaptop,C_text("\376B\000\000# ...)\047 without importing it first.\012"));
lf[139]=C_decode_literal(C_heaptop,C_text("\376B\000\000-\012\012  Perhaps you intended to use the syntax `("));
lf[140]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002: "));
lf[141]=C_h_intern(&lf[141],6, C_text("syntax"));
lf[142]=C_h_intern(&lf[142],9, C_text("##sys#get"));
lf[143]=C_h_intern(&lf[143],9, C_text("##core#db"));
lf[144]=C_h_intern(&lf[144],31, C_text("chicken.base#open-output-string"));
lf[145]=C_h_intern(&lf[145],30, C_text("chicken.syntax#get-line-number"));
lf[146]=C_h_intern(&lf[146],31, C_text("chicken.internal#hash-table-ref"));
lf[147]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001("));
lf[148]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006) in `"));
lf[149]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004\047 - "));
lf[150]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004in `"));
lf[151]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004\047 - "));
lf[152]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024not enough arguments"));
lf[153]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022too many arguments"));
lf[154]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021not a proper list"));
lf[155]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021unexpected object"));
lf[156]=C_h_intern(&lf[156],1, C_text("_"));
lf[157]=C_h_intern(&lf[157],4, C_text("pair"));
lf[158]=C_h_intern(&lf[158],12, C_text("scheme#pair\077"));
lf[159]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015pair expected"));
lf[160]=C_h_intern(&lf[160],8, C_text("variable"));
lf[161]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023identifier expected"));
lf[162]=C_h_intern(&lf[162],6, C_text("symbol"));
lf[163]=C_h_intern(&lf[163],14, C_text("scheme#symbol\077"));
lf[164]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017symbol expected"));
lf[165]=C_h_intern(&lf[165],4, C_text("list"));
lf[166]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024proper list expected"));
lf[167]=C_h_intern(&lf[167],6, C_text("number"));
lf[168]=C_h_intern(&lf[168],14, C_text("scheme#number\077"));
lf[169]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017number expected"));
lf[170]=C_h_intern(&lf[170],6, C_text("string"));
lf[171]=C_h_intern(&lf[171],14, C_text("scheme#string\077"));
lf[172]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017string expected"));
lf[173]=C_h_intern(&lf[173],11, C_text("lambda-list"));
lf[174]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024lambda-list expected"));
lf[175]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017missing keyword"));
lf[176]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017incomplete form"));
lf[177]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015pair expected"));
lf[179]=C_h_intern(&lf[179],32, C_text("chicken.internal#hash-table-set!"));
lf[180]=C_h_intern(&lf[180],19, C_text("scheme#list->vector"));
lf[181]=C_h_intern(&lf[181],19, C_text("scheme#vector->list"));
lf[182]=C_decode_literal(C_heaptop,C_text("\376B\000\000\033(expand.scm:831) not a list"));
lf[183]=C_h_intern(&lf[183],35, C_text("chicken.syntax#er-macro-transformer"));
lf[184]=C_h_intern(&lf[184],35, C_text("chicken.syntax#ir-macro-transformer"));
lf[185]=C_h_intern(&lf[185],20, C_text("##sys#er-transformer"));
lf[186]=C_h_intern(&lf[186],20, C_text("##sys#ir-transformer"));
lf[187]=C_h_intern(&lf[187],31, C_text("##sys#initial-macro-environment"));
lf[188]=C_h_intern(&lf[188],38, C_text("##sys#chicken.module-macro-environment"));
lf[189]=C_h_intern(&lf[189],30, C_text("chicken.internal.syntax-rules#"));
lf[190]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024no rule matches form"));
lf[191]=C_h_intern(&lf[191],40, C_text("chicken.internal.syntax-rules#drop-right"));
lf[192]=C_h_intern(&lf[192],40, C_text("chicken.internal.syntax-rules#take-right"));
lf[193]=C_h_intern(&lf[193],28, C_text("##sys#meta-macro-environment"));
lf[194]=C_h_intern(&lf[194],27, C_text("chicken.base#make-parameter"));
lf[195]=C_h_intern(&lf[195],40, C_text("chicken.internal#fixup-macro-environment"));
lf[196]=C_h_intern(&lf[196],29, C_text("chicken.internal#macro-subset"));
lf[197]=C_h_intern(&lf[197],12, C_text("syntax-rules"));
lf[198]=C_h_intern(&lf[198],3, C_text("..."));
lf[199]=C_h_intern(&lf[199],9, C_text("##sys#car"));
lf[200]=C_h_intern(&lf[200],9, C_text("##sys#cdr"));
lf[201]=C_h_intern(&lf[201],12, C_text("##sys#length"));
lf[202]=C_h_intern(&lf[202],13, C_text("##sys#vector\077"));
lf[203]=C_h_intern(&lf[203],18, C_text("##sys#vector->list"));
lf[204]=C_h_intern(&lf[204],18, C_text("##sys#list->vector"));
lf[205]=C_h_intern(&lf[205],8, C_text("##sys#>="));
lf[206]=C_h_intern(&lf[206],7, C_text("##sys#="));
lf[207]=C_h_intern(&lf[207],7, C_text("##sys#+"));
lf[208]=C_h_intern(&lf[208],10, C_text("##sys#cons"));
lf[209]=C_h_intern(&lf[209],9, C_text("##sys#eq\077"));
lf[210]=C_h_intern(&lf[210],12, C_text("##sys#equal\077"));
lf[211]=C_h_intern(&lf[211],11, C_text("##sys#list\077"));
lf[212]=C_h_intern(&lf[212],9, C_text("##sys#map"));
lf[213]=C_h_intern(&lf[213],11, C_text("##sys#map-n"));
lf[214]=C_h_intern(&lf[214],11, C_text("##sys#pair\077"));
lf[215]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026ill-formed syntax rule"));
lf[216]=C_h_intern(&lf[216],13, C_text("##core#syntax"));
lf[217]=C_h_intern(&lf[217],5, C_text("quote"));
lf[218]=C_decode_literal(C_heaptop,C_text("\376B\000\000,template dimension error (too few ellipses\077)"));
lf[219]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021too many ellipses"));
lf[220]=C_h_intern(&lf[220],11, C_text("##sys#apply"));
lf[221]=C_decode_literal(C_heaptop,C_text("\376B\000\000%Only one segment per level is allowed"));
lf[222]=C_decode_literal(C_heaptop,C_text("\376B\000\000\047Cannot combine dotted tail and ellipsis"));
lf[223]=C_h_intern(&lf[223],4, C_text("temp"));
lf[224]=C_h_intern(&lf[224],4, C_text("tail"));
lf[225]=C_h_intern(&lf[225],6, C_text("rename"));
lf[226]=C_h_intern(&lf[226],2, C_text("or"));
lf[227]=C_h_intern(&lf[227],4, C_text("loop"));
lf[228]=C_h_intern(&lf[228],6, C_text("lambda"));
lf[229]=C_h_intern(&lf[229],3, C_text("len"));
lf[230]=C_h_intern(&lf[230],1, C_text("l"));
lf[231]=C_h_intern(&lf[231],5, C_text("input"));
lf[232]=C_h_intern(&lf[232],4, C_text("else"));
lf[233]=C_h_intern(&lf[233],4, C_text("cond"));
lf[234]=C_h_intern(&lf[234],7, C_text("compare"));
lf[235]=C_h_intern(&lf[235],3, C_text("and"));
lf[236]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\004\001list\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\000"));
lf[237]=C_decode_literal(C_heaptop,C_text("\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\002"));
lf[238]=C_h_intern(&lf[238],5, C_text("delay"));
lf[239]=C_h_intern(&lf[239],10, C_text("##sys#list"));
lf[240]=C_h_intern(&lf[240],18, C_text("##sys#make-promise"));
lf[241]=C_h_intern(&lf[241],11, C_text("delay-force"));
lf[242]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\377\016"));
lf[243]=C_h_intern(&lf[243],10, C_text("quasiquote"));
lf[244]=C_h_intern(&lf[244],7, C_text("unquote"));
lf[245]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\377\016"));
lf[246]=C_h_intern(&lf[246],16, C_text("unquote-splicing"));
lf[247]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\377\016"));
lf[248]=C_h_intern(&lf[248],1, C_text("a"));
lf[249]=C_h_intern(&lf[249],1, C_text("b"));
lf[250]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\014\001##sys#append\376\003\000\000\002\376\001\000\000\001\001a\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001##core#quote\376\003\000\000\002\376\377\016\376\377\016\376\377\016"));
lf[251]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001a\376\377\016"));
lf[252]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\012\001##sys#cons\376\003\000\000\002\376\001\000\000\001\001a\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001##sys#list\376\001\000\000\001\001b\376\377\016"));
lf[253]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001a\376\003\000\000\002\376\001\000\000\001\001b\376\377\016"));
lf[254]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\012\001##sys#cons\376\003\000\000\002\376\001\000\000\001\001a\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001##core#quote\376\003\000\000\002\376\377\016\376\377\016\376\377\016"));
lf[255]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001a\376\377\016"));
lf[256]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\377\016"));
lf[257]=C_h_intern(&lf[257],2, C_text("do"));
lf[258]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001##core#undefined\376\377\016"));
lf[259]=C_h_intern(&lf[259],9, C_text("##core#if"));
lf[260]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001##core#undefined\376\377\016"));
lf[261]=C_h_intern(&lf[261],6, C_text("doloop"));
lf[262]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\010\001variable\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\001\376\001\000\000\001\001_\376\377\001\000\000\000\000\376\000\000\000\002\376\001\000"
"\000\001\001_\376\377\001\000\000\000\001"));
lf[263]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\010\001variable\376\003\000\000\002\376\001\000\000\001\001_\376\377\016\376\377\001\000\000\000\000\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000"
"\000\001"));
lf[264]=C_h_intern(&lf[264],4, C_text("case"));
lf[265]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001eqv\077\376\001\000\000\013\001scheme#eqv\077\376\377\016"));
lf[266]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001##core#undefined\376\377\016"));
lf[267]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\014\001##core#begin\376\377\016"));
lf[268]=C_h_intern(&lf[268],10, C_text("##sys#warn"));
lf[269]=C_decode_literal(C_heaptop,C_text("\376B\000\000(clause following `else\047 clause in `case\047"));
lf[270]=C_h_intern(&lf[270],16, C_text("##core#undefined"));
lf[271]=C_decode_literal(C_heaptop,C_text("\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\001"));
lf[272]=C_h_intern(&lf[272],4, C_text("eqv\077"));
lf[273]=C_h_intern(&lf[273],2, C_text("=>"));
lf[274]=C_h_intern(&lf[274],3, C_text("tmp"));
lf[275]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\000"));
lf[276]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001##core#undefined\376\377\016"));
lf[277]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\014\001##core#begin\376\377\016"));
lf[278]=C_h_intern(&lf[278],7, C_text("sprintf"));
lf[279]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022\047 clause in `cond\047"));
lf[280]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022clause following `"));
lf[281]=C_h_intern(&lf[281],2, C_text("if"));
lf[282]=C_h_intern(&lf[282],20, C_text("##sys#srfi-4-vector\077"));
lf[283]=C_h_intern(&lf[283],18, C_text("chicken.blob#blob\077"));
lf[284]=C_decode_literal(C_heaptop,C_text("\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\001"));
lf[285]=C_h_intern(&lf[285],4, C_text("set!"));
lf[286]=C_h_intern(&lf[286],12, C_text("##sys#setter"));
lf[287]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\377\016"));
lf[288]=C_h_intern(&lf[288],13, C_text("letrec-syntax"));
lf[289]=C_h_intern(&lf[289],44, C_text("chicken.internal#check-for-multiple-bindings"));
lf[290]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015letrec-syntax"));
lf[291]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\010\001variable\376\003\000\000\002\376\001\000\000\001\001_\376\377\016\376\377\001\000\000\000\000\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000"
"\000\001"));
lf[292]=C_h_intern(&lf[292],10, C_text("let-syntax"));
lf[293]=C_h_intern(&lf[293],17, C_text("##core#let-syntax"));
lf[294]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012let-syntax"));
lf[295]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\010\001variable\376\003\000\000\002\376\001\000\000\001\001_\376\377\016\376\377\001\000\000\000\000\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000"
"\000\001"));
lf[296]=C_h_intern(&lf[296],6, C_text("letrec"));
lf[297]=C_h_intern(&lf[297],13, C_text("##core#letrec"));
lf[298]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006letrec"));
lf[299]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\010\001variable\376\003\000\000\002\376\001\000\000\001\001_\376\377\016\376\377\001\000\000\000\000\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000"
"\000\001"));
lf[300]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003let"));
lf[301]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\010\001variable\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\010\001variable\376\003\000\000\002\376\001\000\000\001\001_\376\377\016\376\377\001\000\000"
"\000\000\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\001"));
lf[302]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003let"));
lf[303]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\010\001variable\376\003\000\000\002\376\001\000\000\001\001_\376\377\016\376\377\001\000\000\000\000\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000"
"\000\001"));
lf[304]=C_h_intern(&lf[304],20, C_text("##core#define-syntax"));
lf[305]=C_h_intern(&lf[305],21, C_text("##sys#register-export"));
lf[306]=C_h_intern(&lf[306],20, C_text("##sys#current-module"));
lf[307]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\010\001variable\376\003\000\000\002\376\001\000\000\001\001_\376\377\016"));
lf[308]=C_h_intern(&lf[308],33, C_text("##core#ensure-toplevel-definition"));
lf[309]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001##core#undefined\376\377\016"));
lf[310]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\010\001variable\376\000\000\000\003\376\001\000\000\001\001_\376\377\001\000\000\000\000\376\377\001\000\000\000\001"));
lf[311]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001\001_\376\001\000\000\013\001lambda-list\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\001"));
lf[312]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001variable\376\001\000\000\013\001lambda-list\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\001"));
lf[313]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\001"));
lf[314]=C_h_intern(&lf[314],5, C_text("begin"));
lf[315]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\000"));
lf[316]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\001\376\001\000\000\001\001_"));
lf[317]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\377\016"));
lf[318]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\013\001lambda-list\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\001"));
lf[319]=C_h_intern(&lf[319],14, C_text("current-module"));
lf[320]=C_h_intern(&lf[320],17, C_text("##sys#module-name"));
lf[321]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\377\016"));
lf[322]=C_h_intern(&lf[322],16, C_text("define-interface"));
lf[323]=C_h_intern(&lf[323],16, C_text("##core#interface"));
lf[324]=C_h_intern(&lf[324],18, C_text("##sys#put/restore!"));
lf[325]=C_h_intern(&lf[325],26, C_text("##core#elaborationtimeonly"));
lf[326]=C_h_intern(&lf[326],1, C_text("\052"));
lf[327]=C_h_intern_kw(&lf[327],9, C_text("interface"));
lf[328]=C_h_intern(&lf[328],22, C_text("##sys#validate-exports"));
lf[329]=C_h_intern(&lf[329],17, C_text("syntax-error-hook"));
lf[330]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017invalid exports"));
lf[331]=C_decode_literal(C_heaptop,C_text("\376B\000\000-`\052\047 is not allowed as a name for an interface"));
lf[332]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\010\001variable\376\003\000\000\002\376\001\000\000\001\001_\376\377\016"));
lf[333]=C_h_intern(&lf[333],7, C_text("functor"));
lf[334]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030invalid functor argument"));
lf[335]=C_h_intern(&lf[335],41, C_text("chicken.internal#valid-library-specifier\077"));
lf[336]=C_h_intern(&lf[336],22, C_text("##sys#register-functor"));
lf[337]=C_h_intern(&lf[337],6, C_text("scheme"));
lf[338]=C_h_intern(&lf[338],14, C_text("chicken.syntax"));
lf[339]=C_h_intern(&lf[339],16, C_text("begin-for-syntax"));
lf[340]=C_h_intern(&lf[340],27, C_text("chicken.internal#library-id"));
lf[341]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\002\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\377\016\376\377\001\000\000\000\000\376\003\000\000\002\376\001\000\000\001\001_"
"\376\001\000\000\001\001_"));
lf[342]=C_h_intern(&lf[342],8, C_text("reexport"));
lf[343]=C_h_intern(&lf[343],19, C_text("##sys#expand-import"));
lf[344]=C_h_intern(&lf[344],6, C_text("export"));
lf[345]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001##core#undefined\376\377\016"));
lf[346]=C_h_intern(&lf[346],24, C_text("##sys#add-to-export-list"));
lf[347]=C_h_intern(&lf[347],6, C_text("module"));
lf[348]=C_h_intern(&lf[348],1, C_text("="));
lf[349]=C_h_intern(&lf[349],21, C_text("scheme#string->symbol"));
lf[350]=C_h_intern(&lf[350],19, C_text("##sys#string-append"));
lf[351]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001_"));
lf[352]=C_h_intern(&lf[352],25, C_text("##sys#instantiate-functor"));
lf[353]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\000\376\377\016"));
lf[354]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\000"));
lf[355]=C_h_intern(&lf[355],11, C_text("cond-expand"));
lf[356]=C_decode_literal(C_heaptop,C_text("\376B\000\000\042syntax error in `cond-expand\047 form"));
lf[357]=C_h_intern(&lf[357],25, C_text("chicken.platform#feature\077"));
lf[358]=C_h_intern(&lf[358],3, C_text("not"));
lf[359]=C_decode_literal(C_heaptop,C_text("\376B\000\000(no matching clause in `cond-expand\047 form"));
lf[360]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001##core#undefined\376\377\016"));
lf[361]=C_h_intern(&lf[361],17, C_text("import-for-syntax"));
lf[362]=C_h_intern(&lf[362],30, C_text("##sys#register-meta-expression"));
lf[363]=C_h_intern(&lf[363],22, C_text("##sys#decompose-import"));
lf[364]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001##core#undefined\376\377\016"));
lf[365]=C_h_intern(&lf[365],14, C_text("##core#require"));
lf[366]=C_decode_literal(C_heaptop,C_text("\376B\000\000#cannot import from undefined module"));
lf[367]=C_h_intern(&lf[367],12, C_text("##sys#import"));
lf[368]=C_decode_literal(C_heaptop,C_text("\376B\000\0001cannot import from module currently being defined"));
lf[369]=C_h_intern(&lf[369],24, C_text("import-syntax-for-syntax"));
lf[370]=C_h_intern(&lf[370],13, C_text("import-syntax"));
lf[371]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\006\002srfi-0\376\003\000\000\002\376\001\000\000\006\002srfi-2\376\003\000\000\002\376\001\000\000\006\002srfi-6\376\003\000\000\002\376\001\000\000\006\002srfi-9\376\003\000\000\002\376\001\000\000\007\002s"
"rfi-46\376\003\000\000\002\376\001\000\000\007\002srfi-55\376\003\000\000\002\376\001\000\000\007\002srfi-61\376\377\016"));
C_register_lf2(lf,372,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4262,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_internal_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[667] = {
{C_text("f_10002:expand_2escm"),(void*)f_10002},
{C_text("f_10005:expand_2escm"),(void*)f_10005},
{C_text("f_10008:expand_2escm"),(void*)f_10008},
{C_text("f_10011:expand_2escm"),(void*)f_10011},
{C_text("f_10014:expand_2escm"),(void*)f_10014},
{C_text("f_10017:expand_2escm"),(void*)f_10017},
{C_text("f_10019:expand_2escm"),(void*)f_10019},
{C_text("f_10025:expand_2escm"),(void*)f_10025},
{C_text("f_10035:expand_2escm"),(void*)f_10035},
{C_text("f_10053:expand_2escm"),(void*)f_10053},
{C_text("f_10061:expand_2escm"),(void*)f_10061},
{C_text("f_10071:expand_2escm"),(void*)f_10071},
{C_text("f_10098:expand_2escm"),(void*)f_10098},
{C_text("f_10113:expand_2escm"),(void*)f_10113},
{C_text("f_10117:expand_2escm"),(void*)f_10117},
{C_text("f_10122:expand_2escm"),(void*)f_10122},
{C_text("f_10128:expand_2escm"),(void*)f_10128},
{C_text("f_10132:expand_2escm"),(void*)f_10132},
{C_text("f_10136:expand_2escm"),(void*)f_10136},
{C_text("f_10140:expand_2escm"),(void*)f_10140},
{C_text("f_10144:expand_2escm"),(void*)f_10144},
{C_text("f_10148:expand_2escm"),(void*)f_10148},
{C_text("f_10153:expand_2escm"),(void*)f_10153},
{C_text("f_10160:expand_2escm"),(void*)f_10160},
{C_text("f_10165:expand_2escm"),(void*)f_10165},
{C_text("f_10169:expand_2escm"),(void*)f_10169},
{C_text("f_10173:expand_2escm"),(void*)f_10173},
{C_text("f_10177:expand_2escm"),(void*)f_10177},
{C_text("f_10182:expand_2escm"),(void*)f_10182},
{C_text("f_10186:expand_2escm"),(void*)f_10186},
{C_text("f_10190:expand_2escm"),(void*)f_10190},
{C_text("f_10194:expand_2escm"),(void*)f_10194},
{C_text("f_10196:expand_2escm"),(void*)f_10196},
{C_text("f_10202:expand_2escm"),(void*)f_10202},
{C_text("f_10230:expand_2escm"),(void*)f_10230},
{C_text("f_10240:expand_2escm"),(void*)f_10240},
{C_text("f_10254:expand_2escm"),(void*)f_10254},
{C_text("f_10279:expand_2escm"),(void*)f_10279},
{C_text("f_10296:expand_2escm"),(void*)f_10296},
{C_text("f_10303:expand_2escm"),(void*)f_10303},
{C_text("f_10324:expand_2escm"),(void*)f_10324},
{C_text("f_10328:expand_2escm"),(void*)f_10328},
{C_text("f_10332:expand_2escm"),(void*)f_10332},
{C_text("f_10334:expand_2escm"),(void*)f_10334},
{C_text("f_10339:expand_2escm"),(void*)f_10339},
{C_text("f_10362:expand_2escm"),(void*)f_10362},
{C_text("f_10396:expand_2escm"),(void*)f_10396},
{C_text("f_10432:expand_2escm"),(void*)f_10432},
{C_text("f_10436:expand_2escm"),(void*)f_10436},
{C_text("f_10440:expand_2escm"),(void*)f_10440},
{C_text("f_10489:expand_2escm"),(void*)f_10489},
{C_text("f_10497:expand_2escm"),(void*)f_10497},
{C_text("f_10510:expand_2escm"),(void*)f_10510},
{C_text("f_10543:expand_2escm"),(void*)f_10543},
{C_text("f_10547:expand_2escm"),(void*)f_10547},
{C_text("f_10602:expand_2escm"),(void*)f_10602},
{C_text("f_10626:expand_2escm"),(void*)f_10626},
{C_text("f_10670:expand_2escm"),(void*)f_10670},
{C_text("f_10694:expand_2escm"),(void*)f_10694},
{C_text("f_10700:expand_2escm"),(void*)f_10700},
{C_text("f_10713:expand_2escm"),(void*)f_10713},
{C_text("f_10717:expand_2escm"),(void*)f_10717},
{C_text("f_10729:expand_2escm"),(void*)f_10729},
{C_text("f_10775:expand_2escm"),(void*)f_10775},
{C_text("f_10779:expand_2escm"),(void*)f_10779},
{C_text("f_10804:expand_2escm"),(void*)f_10804},
{C_text("f_10810:expand_2escm"),(void*)f_10810},
{C_text("f_10849:expand_2escm"),(void*)f_10849},
{C_text("f_10852:expand_2escm"),(void*)f_10852},
{C_text("f_10858:expand_2escm"),(void*)f_10858},
{C_text("f_10870:expand_2escm"),(void*)f_10870},
{C_text("f_10873:expand_2escm"),(void*)f_10873},
{C_text("f_10876:expand_2escm"),(void*)f_10876},
{C_text("f_10889:expand_2escm"),(void*)f_10889},
{C_text("f_10893:expand_2escm"),(void*)f_10893},
{C_text("f_10897:expand_2escm"),(void*)f_10897},
{C_text("f_10899:expand_2escm"),(void*)f_10899},
{C_text("f_10920:expand_2escm"),(void*)f_10920},
{C_text("f_10972:expand_2escm"),(void*)f_10972},
{C_text("f_10976:expand_2escm"),(void*)f_10976},
{C_text("f_10993:expand_2escm"),(void*)f_10993},
{C_text("f_10997:expand_2escm"),(void*)f_10997},
{C_text("f_11002:expand_2escm"),(void*)f_11002},
{C_text("f_11028:expand_2escm"),(void*)f_11028},
{C_text("f_11043:expand_2escm"),(void*)f_11043},
{C_text("f_11062:expand_2escm"),(void*)f_11062},
{C_text("f_11077:expand_2escm"),(void*)f_11077},
{C_text("f_11079:expand_2escm"),(void*)f_11079},
{C_text("f_11121:expand_2escm"),(void*)f_11121},
{C_text("f_11132:expand_2escm"),(void*)f_11132},
{C_text("f_11151:expand_2escm"),(void*)f_11151},
{C_text("f_11166:expand_2escm"),(void*)f_11166},
{C_text("f_11168:expand_2escm"),(void*)f_11168},
{C_text("f_11175:expand_2escm"),(void*)f_11175},
{C_text("f_11196:expand_2escm"),(void*)f_11196},
{C_text("f_11220:expand_2escm"),(void*)f_11220},
{C_text("f_11227:expand_2escm"),(void*)f_11227},
{C_text("f_11234:expand_2escm"),(void*)f_11234},
{C_text("f_11240:expand_2escm"),(void*)f_11240},
{C_text("f_11250:expand_2escm"),(void*)f_11250},
{C_text("f_11257:expand_2escm"),(void*)f_11257},
{C_text("f_11278:expand_2escm"),(void*)f_11278},
{C_text("f_11282:expand_2escm"),(void*)f_11282},
{C_text("f_11286:expand_2escm"),(void*)f_11286},
{C_text("f_11290:expand_2escm"),(void*)f_11290},
{C_text("f_11294:expand_2escm"),(void*)f_11294},
{C_text("f_11298:expand_2escm"),(void*)f_11298},
{C_text("f_11300:expand_2escm"),(void*)f_11300},
{C_text("f_11304:expand_2escm"),(void*)f_11304},
{C_text("f_11312:expand_2escm"),(void*)f_11312},
{C_text("f_11321:expand_2escm"),(void*)f_11321},
{C_text("f_11334:expand_2escm"),(void*)f_11334},
{C_text("f_11336:expand_2escm"),(void*)f_11336},
{C_text("f_11340:expand_2escm"),(void*)f_11340},
{C_text("f_11347:expand_2escm"),(void*)f_11347},
{C_text("f_11367:expand_2escm"),(void*)f_11367},
{C_text("f_11369:expand_2escm"),(void*)f_11369},
{C_text("f_11373:expand_2escm"),(void*)f_11373},
{C_text("f_11376:expand_2escm"),(void*)f_11376},
{C_text("f_11379:expand_2escm"),(void*)f_11379},
{C_text("f_11381:expand_2escm"),(void*)f_11381},
{C_text("f_11389:expand_2escm"),(void*)f_11389},
{C_text("f_11391:expand_2escm"),(void*)f_11391},
{C_text("f_11405:expand_2escm"),(void*)f_11405},
{C_text("f_11409:expand_2escm"),(void*)f_11409},
{C_text("f_11428:expand_2escm"),(void*)f_11428},
{C_text("f_11437:expand_2escm"),(void*)f_11437},
{C_text("f_11451:expand_2escm"),(void*)f_11451},
{C_text("f_11461:expand_2escm"),(void*)f_11461},
{C_text("f_11472:expand_2escm"),(void*)f_11472},
{C_text("f_11482:expand_2escm"),(void*)f_11482},
{C_text("f_11491:expand_2escm"),(void*)f_11491},
{C_text("f_11502:expand_2escm"),(void*)f_11502},
{C_text("f_11513:expand_2escm"),(void*)f_11513},
{C_text("f_11521:expand_2escm"),(void*)f_11521},
{C_text("f_11536:expand_2escm"),(void*)f_11536},
{C_text("f_11540:expand_2escm"),(void*)f_11540},
{C_text("f_11554:expand_2escm"),(void*)f_11554},
{C_text("f_11558:expand_2escm"),(void*)f_11558},
{C_text("f_11562:expand_2escm"),(void*)f_11562},
{C_text("f_11584:expand_2escm"),(void*)f_11584},
{C_text("f_11588:expand_2escm"),(void*)f_11588},
{C_text("f_11631:expand_2escm"),(void*)f_11631},
{C_text("f_11649:expand_2escm"),(void*)f_11649},
{C_text("f_11660:expand_2escm"),(void*)f_11660},
{C_text("f_11662:expand_2escm"),(void*)f_11662},
{C_text("f_11666:expand_2escm"),(void*)f_11666},
{C_text("f_11678:expand_2escm"),(void*)f_11678},
{C_text("f_11706:expand_2escm"),(void*)f_11706},
{C_text("f_11727:expand_2escm"),(void*)f_11727},
{C_text("f_11768:expand_2escm"),(void*)f_11768},
{C_text("f_11770:expand_2escm"),(void*)f_11770},
{C_text("f_11780:expand_2escm"),(void*)f_11780},
{C_text("f_11820:expand_2escm"),(void*)f_11820},
{C_text("f_11856:expand_2escm"),(void*)f_11856},
{C_text("f_11858:expand_2escm"),(void*)f_11858},
{C_text("f_11862:expand_2escm"),(void*)f_11862},
{C_text("f_11872:expand_2escm"),(void*)f_11872},
{C_text("f_11897:expand_2escm"),(void*)f_11897},
{C_text("f_11907:expand_2escm"),(void*)f_11907},
{C_text("f_11909:expand_2escm"),(void*)f_11909},
{C_text("f_11913:expand_2escm"),(void*)f_11913},
{C_text("f_11921:expand_2escm"),(void*)f_11921},
{C_text("f_11924:expand_2escm"),(void*)f_11924},
{C_text("f_11927:expand_2escm"),(void*)f_11927},
{C_text("f_11930:expand_2escm"),(void*)f_11930},
{C_text("f_11933:expand_2escm"),(void*)f_11933},
{C_text("f_11944:expand_2escm"),(void*)f_11944},
{C_text("f_11946:expand_2escm"),(void*)f_11946},
{C_text("f_11960:expand_2escm"),(void*)f_11960},
{C_text("f_11966:expand_2escm"),(void*)f_11966},
{C_text("f_11969:expand_2escm"),(void*)f_11969},
{C_text("f_11973:expand_2escm"),(void*)f_11973},
{C_text("f_11979:expand_2escm"),(void*)f_11979},
{C_text("f_11982:expand_2escm"),(void*)f_11982},
{C_text("f_11997:expand_2escm"),(void*)f_11997},
{C_text("f_12038:expand_2escm"),(void*)f_12038},
{C_text("f_12042:expand_2escm"),(void*)f_12042},
{C_text("f_12045:expand_2escm"),(void*)f_12045},
{C_text("f_12078:expand_2escm"),(void*)f_12078},
{C_text("f_12093:expand_2escm"),(void*)f_12093},
{C_text("f_12095:expand_2escm"),(void*)f_12095},
{C_text("f_12143:expand_2escm"),(void*)f_12143},
{C_text("f_12145:expand_2escm"),(void*)f_12145},
{C_text("f_12152:expand_2escm"),(void*)f_12152},
{C_text("f_12155:expand_2escm"),(void*)f_12155},
{C_text("f_12158:expand_2escm"),(void*)f_12158},
{C_text("f_12163:expand_2escm"),(void*)f_12163},
{C_text("f_12177:expand_2escm"),(void*)f_12177},
{C_text("f_12183:expand_2escm"),(void*)f_12183},
{C_text("f_12186:expand_2escm"),(void*)f_12186},
{C_text("f_12190:expand_2escm"),(void*)f_12190},
{C_text("f_12196:expand_2escm"),(void*)f_12196},
{C_text("f_12199:expand_2escm"),(void*)f_12199},
{C_text("f_12202:expand_2escm"),(void*)f_12202},
{C_text("f_12205:expand_2escm"),(void*)f_12205},
{C_text("f_12209:expand_2escm"),(void*)f_12209},
{C_text("f_12215:expand_2escm"),(void*)f_12215},
{C_text("f_12218:expand_2escm"),(void*)f_12218},
{C_text("f_12221:expand_2escm"),(void*)f_12221},
{C_text("f_12227:expand_2escm"),(void*)f_12227},
{C_text("f_12253:expand_2escm"),(void*)f_12253},
{C_text("f_12281:expand_2escm"),(void*)f_12281},
{C_text("f_12298:expand_2escm"),(void*)f_12298},
{C_text("f_12304:expand_2escm"),(void*)f_12304},
{C_text("f_12307:expand_2escm"),(void*)f_12307},
{C_text("f_12326:expand_2escm"),(void*)f_12326},
{C_text("f_12344:expand_2escm"),(void*)f_12344},
{C_text("f_12347:expand_2escm"),(void*)f_12347},
{C_text("f_12374:expand_2escm"),(void*)f_12374},
{C_text("f_12401:expand_2escm"),(void*)f_12401},
{C_text("f_12464:expand_2escm"),(void*)f_12464},
{C_text("f_12476:expand_2escm"),(void*)f_12476},
{C_text("f_12492:expand_2escm"),(void*)f_12492},
{C_text("f_12526:expand_2escm"),(void*)f_12526},
{C_text("f_12528:expand_2escm"),(void*)f_12528},
{C_text("f_12551:expand_2escm"),(void*)f_12551},
{C_text("f_12570:expand_2escm"),(void*)f_12570},
{C_text("f_12578:expand_2escm"),(void*)f_12578},
{C_text("f_12580:expand_2escm"),(void*)f_12580},
{C_text("f_12611:expand_2escm"),(void*)f_12611},
{C_text("f_12615:expand_2escm"),(void*)f_12615},
{C_text("f_12617:expand_2escm"),(void*)f_12617},
{C_text("f_12621:expand_2escm"),(void*)f_12621},
{C_text("f_12644:expand_2escm"),(void*)f_12644},
{C_text("f_12659:expand_2escm"),(void*)f_12659},
{C_text("f_12661:expand_2escm"),(void*)f_12661},
{C_text("f_12665:expand_2escm"),(void*)f_12665},
{C_text("f_12668:expand_2escm"),(void*)f_12668},
{C_text("f_12681:expand_2escm"),(void*)f_12681},
{C_text("f_12683:expand_2escm"),(void*)f_12683},
{C_text("f_12687:expand_2escm"),(void*)f_12687},
{C_text("f_12690:expand_2escm"),(void*)f_12690},
{C_text("f_12703:expand_2escm"),(void*)f_12703},
{C_text("f_12705:expand_2escm"),(void*)f_12705},
{C_text("f_12709:expand_2escm"),(void*)f_12709},
{C_text("f_12712:expand_2escm"),(void*)f_12712},
{C_text("f_12725:expand_2escm"),(void*)f_12725},
{C_text("f_12727:expand_2escm"),(void*)f_12727},
{C_text("f_12731:expand_2escm"),(void*)f_12731},
{C_text("f_12742:expand_2escm"),(void*)f_12742},
{C_text("f_12752:expand_2escm"),(void*)f_12752},
{C_text("f_12777:expand_2escm"),(void*)f_12777},
{C_text("f_12779:expand_2escm"),(void*)f_12779},
{C_text("f_12783:expand_2escm"),(void*)f_12783},
{C_text("f_12800:expand_2escm"),(void*)f_12800},
{C_text("f_12803:expand_2escm"),(void*)f_12803},
{C_text("f_12809:expand_2escm"),(void*)f_12809},
{C_text("f_12816:expand_2escm"),(void*)f_12816},
{C_text("f_12820:expand_2escm"),(void*)f_12820},
{C_text("f_12824:expand_2escm"),(void*)f_12824},
{C_text("f_12826:expand_2escm"),(void*)f_12826},
{C_text("f_12830:expand_2escm"),(void*)f_12830},
{C_text("f_12835:expand_2escm"),(void*)f_12835},
{C_text("f_12850:expand_2escm"),(void*)f_12850},
{C_text("f_12861:expand_2escm"),(void*)f_12861},
{C_text("f_12864:expand_2escm"),(void*)f_12864},
{C_text("f_12886:expand_2escm"),(void*)f_12886},
{C_text("f_12893:expand_2escm"),(void*)f_12893},
{C_text("f_12897:expand_2escm"),(void*)f_12897},
{C_text("f_12906:expand_2escm"),(void*)f_12906},
{C_text("f_12913:expand_2escm"),(void*)f_12913},
{C_text("f_12916:expand_2escm"),(void*)f_12916},
{C_text("f_12951:expand_2escm"),(void*)f_12951},
{C_text("f_12953:expand_2escm"),(void*)f_12953},
{C_text("f_12957:expand_2escm"),(void*)f_12957},
{C_text("f_12968:expand_2escm"),(void*)f_12968},
{C_text("f_12970:expand_2escm"),(void*)f_12970},
{C_text("f_12974:expand_2escm"),(void*)f_12974},
{C_text("f_12985:expand_2escm"),(void*)f_12985},
{C_text("f_12987:expand_2escm"),(void*)f_12987},
{C_text("f_12991:expand_2escm"),(void*)f_12991},
{C_text("f_13002:expand_2escm"),(void*)f_13002},
{C_text("f_13004:expand_2escm"),(void*)f_13004},
{C_text("f_13008:expand_2escm"),(void*)f_13008},
{C_text("f_13019:expand_2escm"),(void*)f_13019},
{C_text("f_13021:expand_2escm"),(void*)f_13021},
{C_text("f_13025:expand_2escm"),(void*)f_13025},
{C_text("f_13028:expand_2escm"),(void*)f_13028},
{C_text("f_13038:expand_2escm"),(void*)f_13038},
{C_text("f_13042:expand_2escm"),(void*)f_13042},
{C_text("f_13044:expand_2escm"),(void*)f_13044},
{C_text("f_13048:expand_2escm"),(void*)f_13048},
{C_text("f_13051:expand_2escm"),(void*)f_13051},
{C_text("f_13054:expand_2escm"),(void*)f_13054},
{C_text("f_13077:expand_2escm"),(void*)f_13077},
{C_text("f_13080:expand_2escm"),(void*)f_13080},
{C_text("f_13126:expand_2escm"),(void*)f_13126},
{C_text("f_13128:expand_2escm"),(void*)f_13128},
{C_text("f_13132:expand_2escm"),(void*)f_13132},
{C_text("f_13135:expand_2escm"),(void*)f_13135},
{C_text("f_13158:expand_2escm"),(void*)f_13158},
{C_text("f_13186:expand_2escm"),(void*)f_13186},
{C_text("f_13191:expand_2escm"),(void*)f_13191},
{C_text("f_13198:expand_2escm"),(void*)f_13198},
{C_text("f_13201:expand_2escm"),(void*)f_13201},
{C_text("f_13210:expand_2escm"),(void*)f_13210},
{C_text("f_13255:expand_2escm"),(void*)f_13255},
{C_text("f_13257:expand_2escm"),(void*)f_13257},
{C_text("f_13282:expand_2escm"),(void*)f_13282},
{C_text("f_13293:expand_2escm"),(void*)f_13293},
{C_text("f_13297:expand_2escm"),(void*)f_13297},
{C_text("f_13299:expand_2escm"),(void*)f_13299},
{C_text("f_13307:expand_2escm"),(void*)f_13307},
{C_text("f_13309:expand_2escm"),(void*)f_13309},
{C_text("f_13313:expand_2escm"),(void*)f_13313},
{C_text("f_13316:expand_2escm"),(void*)f_13316},
{C_text("f_13319:expand_2escm"),(void*)f_13319},
{C_text("f_13326:expand_2escm"),(void*)f_13326},
{C_text("f_13334:expand_2escm"),(void*)f_13334},
{C_text("f_13336:expand_2escm"),(void*)f_13336},
{C_text("f_13340:expand_2escm"),(void*)f_13340},
{C_text("f_13346:expand_2escm"),(void*)f_13346},
{C_text("f_13352:expand_2escm"),(void*)f_13352},
{C_text("f_13355:expand_2escm"),(void*)f_13355},
{C_text("f_13367:expand_2escm"),(void*)f_13367},
{C_text("f_13370:expand_2escm"),(void*)f_13370},
{C_text("f_13401:expand_2escm"),(void*)f_13401},
{C_text("f_13405:expand_2escm"),(void*)f_13405},
{C_text("f_13408:expand_2escm"),(void*)f_13408},
{C_text("f_13415:expand_2escm"),(void*)f_13415},
{C_text("f_13424:expand_2escm"),(void*)f_13424},
{C_text("f_13449:expand_2escm"),(void*)f_13449},
{C_text("f_13483:expand_2escm"),(void*)f_13483},
{C_text("f_13497:expand_2escm"),(void*)f_13497},
{C_text("f_13509:expand_2escm"),(void*)f_13509},
{C_text("f_13511:expand_2escm"),(void*)f_13511},
{C_text("f_13517:expand_2escm"),(void*)f_13517},
{C_text("f_13527:expand_2escm"),(void*)f_13527},
{C_text("f_13541:expand_2escm"),(void*)f_13541},
{C_text("f_13557:expand_2escm"),(void*)f_13557},
{C_text("f_13581:expand_2escm"),(void*)f_13581},
{C_text("f_13616:expand_2escm"),(void*)f_13616},
{C_text("f_13650:expand_2escm"),(void*)f_13650},
{C_text("f_13672:expand_2escm"),(void*)f_13672},
{C_text("f_13697:expand_2escm"),(void*)f_13697},
{C_text("f_13699:expand_2escm"),(void*)f_13699},
{C_text("f_13778:expand_2escm"),(void*)f_13778},
{C_text("f_13790:expand_2escm"),(void*)f_13790},
{C_text("f_13802:expand_2escm"),(void*)f_13802},
{C_text("f_13804:expand_2escm"),(void*)f_13804},
{C_text("f_13808:expand_2escm"),(void*)f_13808},
{C_text("f_13819:expand_2escm"),(void*)f_13819},
{C_text("f_13829:expand_2escm"),(void*)f_13829},
{C_text("f_13837:expand_2escm"),(void*)f_13837},
{C_text("f_13839:expand_2escm"),(void*)f_13839},
{C_text("f_13848:expand_2escm"),(void*)f_13848},
{C_text("f_13854:expand_2escm"),(void*)f_13854},
{C_text("f_13860:expand_2escm"),(void*)f_13860},
{C_text("f_13864:expand_2escm"),(void*)f_13864},
{C_text("f_13867:expand_2escm"),(void*)f_13867},
{C_text("f_13870:expand_2escm"),(void*)f_13870},
{C_text("f_13901:expand_2escm"),(void*)f_13901},
{C_text("f_13910:expand_2escm"),(void*)f_13910},
{C_text("f_13912:expand_2escm"),(void*)f_13912},
{C_text("f_13937:expand_2escm"),(void*)f_13937},
{C_text("f_13948:expand_2escm"),(void*)f_13948},
{C_text("f_13950:expand_2escm"),(void*)f_13950},
{C_text("f_13958:expand_2escm"),(void*)f_13958},
{C_text("f_13960:expand_2escm"),(void*)f_13960},
{C_text("f_4262:expand_2escm"),(void*)f_4262},
{C_text("f_4265:expand_2escm"),(void*)f_4265},
{C_text("f_5547:expand_2escm"),(void*)f_5547},
{C_text("f_5552:expand_2escm"),(void*)f_5552},
{C_text("f_5556:expand_2escm"),(void*)f_5556},
{C_text("f_5558:expand_2escm"),(void*)f_5558},
{C_text("f_5575:expand_2escm"),(void*)f_5575},
{C_text("f_5582:expand_2escm"),(void*)f_5582},
{C_text("f_5588:expand_2escm"),(void*)f_5588},
{C_text("f_5622:expand_2escm"),(void*)f_5622},
{C_text("f_5628:expand_2escm"),(void*)f_5628},
{C_text("f_5644:expand_2escm"),(void*)f_5644},
{C_text("f_5699:expand_2escm"),(void*)f_5699},
{C_text("f_5706:expand_2escm"),(void*)f_5706},
{C_text("f_5724:expand_2escm"),(void*)f_5724},
{C_text("f_5733:expand_2escm"),(void*)f_5733},
{C_text("f_5754:expand_2escm"),(void*)f_5754},
{C_text("f_5764:expand_2escm"),(void*)f_5764},
{C_text("f_5768:expand_2escm"),(void*)f_5768},
{C_text("f_5793:expand_2escm"),(void*)f_5793},
{C_text("f_5808:expand_2escm"),(void*)f_5808},
{C_text("f_5810:expand_2escm"),(void*)f_5810},
{C_text("f_5858:expand_2escm"),(void*)f_5858},
{C_text("f_5907:expand_2escm"),(void*)f_5907},
{C_text("f_5932:expand_2escm"),(void*)f_5932},
{C_text("f_5946:expand_2escm"),(void*)f_5946},
{C_text("f_5955:expand_2escm"),(void*)f_5955},
{C_text("f_5979:expand_2escm"),(void*)f_5979},
{C_text("f_5983:expand_2escm"),(void*)f_5983},
{C_text("f_5986:expand_2escm"),(void*)f_5986},
{C_text("f_5993:expand_2escm"),(void*)f_5993},
{C_text("f_6011:expand_2escm"),(void*)f_6011},
{C_text("f_6021:expand_2escm"),(void*)f_6021},
{C_text("f_6025:expand_2escm"),(void*)f_6025},
{C_text("f_6047:expand_2escm"),(void*)f_6047},
{C_text("f_6058:expand_2escm"),(void*)f_6058},
{C_text("f_6066:expand_2escm"),(void*)f_6066},
{C_text("f_6070:expand_2escm"),(void*)f_6070},
{C_text("f_6072:expand_2escm"),(void*)f_6072},
{C_text("f_6095:expand_2escm"),(void*)f_6095},
{C_text("f_6103:expand_2escm"),(void*)f_6103},
{C_text("f_6106:expand_2escm"),(void*)f_6106},
{C_text("f_6116:expand_2escm"),(void*)f_6116},
{C_text("f_6121:expand_2escm"),(void*)f_6121},
{C_text("f_6127:expand_2escm"),(void*)f_6127},
{C_text("f_6133:expand_2escm"),(void*)f_6133},
{C_text("f_6155:expand_2escm"),(void*)f_6155},
{C_text("f_6161:expand_2escm"),(void*)f_6161},
{C_text("f_6178:expand_2escm"),(void*)f_6178},
{C_text("f_6189:expand_2escm"),(void*)f_6189},
{C_text("f_6228:expand_2escm"),(void*)f_6228},
{C_text("f_6234:expand_2escm"),(void*)f_6234},
{C_text("f_6238:expand_2escm"),(void*)f_6238},
{C_text("f_6241:expand_2escm"),(void*)f_6241},
{C_text("f_6257:expand_2escm"),(void*)f_6257},
{C_text("f_6261:expand_2escm"),(void*)f_6261},
{C_text("f_6268:expand_2escm"),(void*)f_6268},
{C_text("f_6274:expand_2escm"),(void*)f_6274},
{C_text("f_6279:expand_2escm"),(void*)f_6279},
{C_text("f_6285:expand_2escm"),(void*)f_6285},
{C_text("f_6293:expand_2escm"),(void*)f_6293},
{C_text("f_6299:expand_2escm"),(void*)f_6299},
{C_text("f_6305:expand_2escm"),(void*)f_6305},
{C_text("f_6331:expand_2escm"),(void*)f_6331},
{C_text("f_6349:expand_2escm"),(void*)f_6349},
{C_text("f_6373:expand_2escm"),(void*)f_6373},
{C_text("f_6382:expand_2escm"),(void*)f_6382},
{C_text("f_6394:expand_2escm"),(void*)f_6394},
{C_text("f_6419:expand_2escm"),(void*)f_6419},
{C_text("f_6421:expand_2escm"),(void*)f_6421},
{C_text("f_6484:expand_2escm"),(void*)f_6484},
{C_text("f_6490:expand_2escm"),(void*)f_6490},
{C_text("f_6528:expand_2escm"),(void*)f_6528},
{C_text("f_6532:expand_2escm"),(void*)f_6532},
{C_text("f_6536:expand_2escm"),(void*)f_6536},
{C_text("f_6548:expand_2escm"),(void*)f_6548},
{C_text("f_6591:expand_2escm"),(void*)f_6591},
{C_text("f_6601:expand_2escm"),(void*)f_6601},
{C_text("f_6604:expand_2escm"),(void*)f_6604},
{C_text("f_6608:expand_2escm"),(void*)f_6608},
{C_text("f_6622:expand_2escm"),(void*)f_6622},
{C_text("f_6628:expand_2escm"),(void*)f_6628},
{C_text("f_6634:expand_2escm"),(void*)f_6634},
{C_text("f_6670:expand_2escm"),(void*)f_6670},
{C_text("f_6676:expand_2escm"),(void*)f_6676},
{C_text("f_6717:expand_2escm"),(void*)f_6717},
{C_text("f_6720:expand_2escm"),(void*)f_6720},
{C_text("f_6737:expand_2escm"),(void*)f_6737},
{C_text("f_6740:expand_2escm"),(void*)f_6740},
{C_text("f_6743:expand_2escm"),(void*)f_6743},
{C_text("f_6748:expand_2escm"),(void*)f_6748},
{C_text("f_6762:expand_2escm"),(void*)f_6762},
{C_text("f_6766:expand_2escm"),(void*)f_6766},
{C_text("f_6778:expand_2escm"),(void*)f_6778},
{C_text("f_6809:expand_2escm"),(void*)f_6809},
{C_text("f_6834:expand_2escm"),(void*)f_6834},
{C_text("f_6853:expand_2escm"),(void*)f_6853},
{C_text("f_6857:expand_2escm"),(void*)f_6857},
{C_text("f_6906:expand_2escm"),(void*)f_6906},
{C_text("f_6959:expand_2escm"),(void*)f_6959},
{C_text("f_6963:expand_2escm"),(void*)f_6963},
{C_text("f_6966:expand_2escm"),(void*)f_6966},
{C_text("f_6969:expand_2escm"),(void*)f_6969},
{C_text("f_6971:expand_2escm"),(void*)f_6971},
{C_text("f_6996:expand_2escm"),(void*)f_6996},
{C_text("f_7010:expand_2escm"),(void*)f_7010},
{C_text("f_7051:expand_2escm"),(void*)f_7051},
{C_text("f_7064:expand_2escm"),(void*)f_7064},
{C_text("f_7080:expand_2escm"),(void*)f_7080},
{C_text("f_7101:expand_2escm"),(void*)f_7101},
{C_text("f_7140:expand_2escm"),(void*)f_7140},
{C_text("f_7159:expand_2escm"),(void*)f_7159},
{C_text("f_7227:expand_2escm"),(void*)f_7227},
{C_text("f_7326:expand_2escm"),(void*)f_7326},
{C_text("f_7332:expand_2escm"),(void*)f_7332},
{C_text("f_7336:expand_2escm"),(void*)f_7336},
{C_text("f_7339:expand_2escm"),(void*)f_7339},
{C_text("f_7358:expand_2escm"),(void*)f_7358},
{C_text("f_7362:expand_2escm"),(void*)f_7362},
{C_text("f_7380:expand_2escm"),(void*)f_7380},
{C_text("f_7402:expand_2escm"),(void*)f_7402},
{C_text("f_7468:expand_2escm"),(void*)f_7468},
{C_text("f_7493:expand_2escm"),(void*)f_7493},
{C_text("f_7506:expand_2escm"),(void*)f_7506},
{C_text("f_7510:expand_2escm"),(void*)f_7510},
{C_text("f_7521:expand_2escm"),(void*)f_7521},
{C_text("f_7604:expand_2escm"),(void*)f_7604},
{C_text("f_7616:expand_2escm"),(void*)f_7616},
{C_text("f_7630:expand_2escm"),(void*)f_7630},
{C_text("f_7635:expand_2escm"),(void*)f_7635},
{C_text("f_7646:expand_2escm"),(void*)f_7646},
{C_text("f_7666:expand_2escm"),(void*)f_7666},
{C_text("f_7670:expand_2escm"),(void*)f_7670},
{C_text("f_7678:expand_2escm"),(void*)f_7678},
{C_text("f_7685:expand_2escm"),(void*)f_7685},
{C_text("f_7697:expand_2escm"),(void*)f_7697},
{C_text("f_7704:expand_2escm"),(void*)f_7704},
{C_text("f_7708:expand_2escm"),(void*)f_7708},
{C_text("f_7746:expand_2escm"),(void*)f_7746},
{C_text("f_7857:expand_2escm"),(void*)f_7857},
{C_text("f_7860:expand_2escm"),(void*)f_7860},
{C_text("f_7866:expand_2escm"),(void*)f_7866},
{C_text("f_7870:expand_2escm"),(void*)f_7870},
{C_text("f_7892:expand_2escm"),(void*)f_7892},
{C_text("f_7895:expand_2escm"),(void*)f_7895},
{C_text("f_7898:expand_2escm"),(void*)f_7898},
{C_text("f_7901:expand_2escm"),(void*)f_7901},
{C_text("f_7903:expand_2escm"),(void*)f_7903},
{C_text("f_7910:expand_2escm"),(void*)f_7910},
{C_text("f_7936:expand_2escm"),(void*)f_7936},
{C_text("f_7965:expand_2escm"),(void*)f_7965},
{C_text("f_7999:expand_2escm"),(void*)f_7999},
{C_text("f_8023:expand_2escm"),(void*)f_8023},
{C_text("f_8025:expand_2escm"),(void*)f_8025},
{C_text("f_8029:expand_2escm"),(void*)f_8029},
{C_text("f_8041:expand_2escm"),(void*)f_8041},
{C_text("f_8049:expand_2escm"),(void*)f_8049},
{C_text("f_8051:expand_2escm"),(void*)f_8051},
{C_text("f_8073:expand_2escm"),(void*)f_8073},
{C_text("f_8076:expand_2escm"),(void*)f_8076},
{C_text("f_8078:expand_2escm"),(void*)f_8078},
{C_text("f_8125:expand_2escm"),(void*)f_8125},
{C_text("f_8129:expand_2escm"),(void*)f_8129},
{C_text("f_8197:expand_2escm"),(void*)f_8197},
{C_text("f_8203:expand_2escm"),(void*)f_8203},
{C_text("f_8223:expand_2escm"),(void*)f_8223},
{C_text("f_8241:expand_2escm"),(void*)f_8241},
{C_text("f_8246:expand_2escm"),(void*)f_8246},
{C_text("f_8259:expand_2escm"),(void*)f_8259},
{C_text("f_8262:expand_2escm"),(void*)f_8262},
{C_text("f_8312:expand_2escm"),(void*)f_8312},
{C_text("f_8319:expand_2escm"),(void*)f_8319},
{C_text("f_8326:expand_2escm"),(void*)f_8326},
{C_text("f_8378:expand_2escm"),(void*)f_8378},
{C_text("f_8390:expand_2escm"),(void*)f_8390},
{C_text("f_8426:expand_2escm"),(void*)f_8426},
{C_text("f_8442:expand_2escm"),(void*)f_8442},
{C_text("f_8512:expand_2escm"),(void*)f_8512},
{C_text("f_8515:expand_2escm"),(void*)f_8515},
{C_text("f_8529:expand_2escm"),(void*)f_8529},
{C_text("f_8569:expand_2escm"),(void*)f_8569},
{C_text("f_8592:expand_2escm"),(void*)f_8592},
{C_text("f_8594:expand_2escm"),(void*)f_8594},
{C_text("f_8597:expand_2escm"),(void*)f_8597},
{C_text("f_8641:expand_2escm"),(void*)f_8641},
{C_text("f_8649:expand_2escm"),(void*)f_8649},
{C_text("f_8657:expand_2escm"),(void*)f_8657},
{C_text("f_8660:expand_2escm"),(void*)f_8660},
{C_text("f_8671:expand_2escm"),(void*)f_8671},
{C_text("f_8676:expand_2escm"),(void*)f_8676},
{C_text("f_8696:expand_2escm"),(void*)f_8696},
{C_text("f_8700:expand_2escm"),(void*)f_8700},
{C_text("f_8715:expand_2escm"),(void*)f_8715},
{C_text("f_8727:expand_2escm"),(void*)f_8727},
{C_text("f_8729:expand_2escm"),(void*)f_8729},
{C_text("f_8736:expand_2escm"),(void*)f_8736},
{C_text("f_8743:expand_2escm"),(void*)f_8743},
{C_text("f_8745:expand_2escm"),(void*)f_8745},
{C_text("f_8755:expand_2escm"),(void*)f_8755},
{C_text("f_8758:expand_2escm"),(void*)f_8758},
{C_text("f_8761:expand_2escm"),(void*)f_8761},
{C_text("f_8764:expand_2escm"),(void*)f_8764},
{C_text("f_8767:expand_2escm"),(void*)f_8767},
{C_text("f_8774:expand_2escm"),(void*)f_8774},
{C_text("f_8781:expand_2escm"),(void*)f_8781},
{C_text("f_8784:expand_2escm"),(void*)f_8784},
{C_text("f_8793:expand_2escm"),(void*)f_8793},
{C_text("f_8796:expand_2escm"),(void*)f_8796},
{C_text("f_8799:expand_2escm"),(void*)f_8799},
{C_text("f_8802:expand_2escm"),(void*)f_8802},
{C_text("f_8805:expand_2escm"),(void*)f_8805},
{C_text("f_8808:expand_2escm"),(void*)f_8808},
{C_text("f_8821:expand_2escm"),(void*)f_8821},
{C_text("f_8825:expand_2escm"),(void*)f_8825},
{C_text("f_8836:expand_2escm"),(void*)f_8836},
{C_text("f_8840:expand_2escm"),(void*)f_8840},
{C_text("f_8842:expand_2escm"),(void*)f_8842},
{C_text("f_8856:expand_2escm"),(void*)f_8856},
{C_text("f_8860:expand_2escm"),(void*)f_8860},
{C_text("f_8881:expand_2escm"),(void*)f_8881},
{C_text("f_8901:expand_2escm"),(void*)f_8901},
{C_text("f_8905:expand_2escm"),(void*)f_8905},
{C_text("f_8920:expand_2escm"),(void*)f_8920},
{C_text("f_8930:expand_2escm"),(void*)f_8930},
{C_text("f_8935:expand_2escm"),(void*)f_8935},
{C_text("f_8942:expand_2escm"),(void*)f_8942},
{C_text("f_8947:expand_2escm"),(void*)f_8947},
{C_text("f_8951:expand_2escm"),(void*)f_8951},
{C_text("f_8958:expand_2escm"),(void*)f_8958},
{C_text("f_8965:expand_2escm"),(void*)f_8965},
{C_text("f_8972:expand_2escm"),(void*)f_8972},
{C_text("f_8974:expand_2escm"),(void*)f_8974},
{C_text("f_8978:expand_2escm"),(void*)f_8978},
{C_text("f_8986:expand_2escm"),(void*)f_8986},
{C_text("f_9019:expand_2escm"),(void*)f_9019},
{C_text("f_9025:expand_2escm"),(void*)f_9025},
{C_text("f_9031:expand_2escm"),(void*)f_9031},
{C_text("f_9052:expand_2escm"),(void*)f_9052},
{C_text("f_9057:expand_2escm"),(void*)f_9057},
{C_text("f_9076:expand_2escm"),(void*)f_9076},
{C_text("f_9081:expand_2escm"),(void*)f_9081},
{C_text("f_9100:expand_2escm"),(void*)f_9100},
{C_text("f_9254:expand_2escm"),(void*)f_9254},
{C_text("f_9311:expand_2escm"),(void*)f_9311},
{C_text("f_9364:expand_2escm"),(void*)f_9364},
{C_text("f_9370:expand_2escm"),(void*)f_9370},
{C_text("f_9373:expand_2escm"),(void*)f_9373},
{C_text("f_9380:expand_2escm"),(void*)f_9380},
{C_text("f_9389:expand_2escm"),(void*)f_9389},
{C_text("f_9395:expand_2escm"),(void*)f_9395},
{C_text("f_9420:expand_2escm"),(void*)f_9420},
{C_text("f_9422:expand_2escm"),(void*)f_9422},
{C_text("f_9440:expand_2escm"),(void*)f_9440},
{C_text("f_9444:expand_2escm"),(void*)f_9444},
{C_text("f_9461:expand_2escm"),(void*)f_9461},
{C_text("f_9465:expand_2escm"),(void*)f_9465},
{C_text("f_9491:expand_2escm"),(void*)f_9491},
{C_text("f_9508:expand_2escm"),(void*)f_9508},
{C_text("f_9530:expand_2escm"),(void*)f_9530},
{C_text("f_9567:expand_2escm"),(void*)f_9567},
{C_text("f_9588:expand_2escm"),(void*)f_9588},
{C_text("f_9619:expand_2escm"),(void*)f_9619},
{C_text("f_9627:expand_2escm"),(void*)f_9627},
{C_text("f_9649:expand_2escm"),(void*)f_9649},
{C_text("f_9664:expand_2escm"),(void*)f_9664},
{C_text("f_9677:expand_2escm"),(void*)f_9677},
{C_text("f_9692:expand_2escm"),(void*)f_9692},
{C_text("f_9727:expand_2escm"),(void*)f_9727},
{C_text("f_9752:expand_2escm"),(void*)f_9752},
{C_text("f_9770:expand_2escm"),(void*)f_9770},
{C_text("f_9774:expand_2escm"),(void*)f_9774},
{C_text("f_9791:expand_2escm"),(void*)f_9791},
{C_text("f_9795:expand_2escm"),(void*)f_9795},
{C_text("f_9884:expand_2escm"),(void*)f_9884},
{C_text("f_9888:expand_2escm"),(void*)f_9888},
{C_text("f_9893:expand_2escm"),(void*)f_9893},
{C_text("f_9899:expand_2escm"),(void*)f_9899},
{C_text("f_9912:expand_2escm"),(void*)f_9912},
{C_text("f_9915:expand_2escm"),(void*)f_9915},
{C_text("f_9919:expand_2escm"),(void*)f_9919},
{C_text("f_9922:expand_2escm"),(void*)f_9922},
{C_text("f_9925:expand_2escm"),(void*)f_9925},
{C_text("f_9929:expand_2escm"),(void*)f_9929},
{C_text("f_9932:expand_2escm"),(void*)f_9932},
{C_text("f_9935:expand_2escm"),(void*)f_9935},
{C_text("f_9938:expand_2escm"),(void*)f_9938},
{C_text("f_9941:expand_2escm"),(void*)f_9941},
{C_text("f_9944:expand_2escm"),(void*)f_9944},
{C_text("f_9947:expand_2escm"),(void*)f_9947},
{C_text("f_9951:expand_2escm"),(void*)f_9951},
{C_text("f_9955:expand_2escm"),(void*)f_9955},
{C_text("f_9958:expand_2escm"),(void*)f_9958},
{C_text("f_9961:expand_2escm"),(void*)f_9961},
{C_text("f_9964:expand_2escm"),(void*)f_9964},
{C_text("f_9967:expand_2escm"),(void*)f_9967},
{C_text("f_9971:expand_2escm"),(void*)f_9971},
{C_text("f_9975:expand_2escm"),(void*)f_9975},
{C_text("f_9978:expand_2escm"),(void*)f_9978},
{C_text("f_9981:expand_2escm"),(void*)f_9981},
{C_text("f_9984:expand_2escm"),(void*)f_9984},
{C_text("f_9987:expand_2escm"),(void*)f_9987},
{C_text("f_9990:expand_2escm"),(void*)f_9990},
{C_text("f_9993:expand_2escm"),(void*)f_9993},
{C_text("f_9996:expand_2escm"),(void*)f_9996},
{C_text("f_9999:expand_2escm"),(void*)f_9999},
{C_text("toplevel:expand_2escm"),(void*)C_expand_toplevel},
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
o|hiding unexported module binding: chicken.syntax#d 
o|hiding unexported module binding: chicken.syntax#define-alias 
o|hiding unexported module binding: chicken.syntax#partition 
o|hiding unexported module binding: chicken.syntax#span 
o|hiding unexported module binding: chicken.syntax#take 
o|hiding unexported module binding: chicken.syntax#drop 
o|hiding unexported module binding: chicken.syntax#split-at 
o|hiding unexported module binding: chicken.syntax#append-map 
o|hiding unexported module binding: chicken.syntax#every 
o|hiding unexported module binding: chicken.syntax#any 
o|hiding unexported module binding: chicken.syntax#cons* 
o|hiding unexported module binding: chicken.syntax#concatenate 
o|hiding unexported module binding: chicken.syntax#delete 
o|hiding unexported module binding: chicken.syntax#first 
o|hiding unexported module binding: chicken.syntax#second 
o|hiding unexported module binding: chicken.syntax#third 
o|hiding unexported module binding: chicken.syntax#fourth 
o|hiding unexported module binding: chicken.syntax#fifth 
o|hiding unexported module binding: chicken.syntax#delete-duplicates 
o|hiding unexported module binding: chicken.syntax#alist-cons 
o|hiding unexported module binding: chicken.syntax#filter 
o|hiding unexported module binding: chicken.syntax#filter-map 
o|hiding unexported module binding: chicken.syntax#remove 
o|hiding unexported module binding: chicken.syntax#unzip1 
o|hiding unexported module binding: chicken.syntax#last 
o|hiding unexported module binding: chicken.syntax#list-index 
o|hiding unexported module binding: chicken.syntax#lset-adjoin/eq? 
o|hiding unexported module binding: chicken.syntax#lset-difference/eq? 
o|hiding unexported module binding: chicken.syntax#lset-union/eq? 
o|hiding unexported module binding: chicken.syntax#lset-intersection/eq? 
o|hiding unexported module binding: chicken.syntax#list-tabulate 
o|hiding unexported module binding: chicken.syntax#lset<=/eq? 
o|hiding unexported module binding: chicken.syntax#lset=/eq? 
o|hiding unexported module binding: chicken.syntax#length+ 
o|hiding unexported module binding: chicken.syntax#find 
o|hiding unexported module binding: chicken.syntax#find-tail 
o|hiding unexported module binding: chicken.syntax#iota 
o|hiding unexported module binding: chicken.syntax#make-list 
o|hiding unexported module binding: chicken.syntax#posq 
o|hiding unexported module binding: chicken.syntax#posv 
o|hiding unexported module binding: chicken.syntax#d 
o|hiding unexported module binding: chicken.syntax#map-se 
o|hiding unexported module binding: chicken.syntax#dd 
o|hiding unexported module binding: chicken.syntax#dm 
o|hiding unexported module binding: chicken.syntax#dx 
o|hiding unexported module binding: chicken.syntax#lookup 
o|hiding unexported module binding: chicken.syntax#macro-alias 
o|hiding unexported module binding: chicken.syntax#expansion-result-hook 
o|hiding unexported module binding: chicken.syntax#defjam-error 
o|hiding unexported module binding: chicken.syntax#define-definition 
o|hiding unexported module binding: chicken.syntax#define-syntax-definition 
o|hiding unexported module binding: chicken.syntax#define-values-definition 
o|hiding unexported module binding: chicken.syntax#import-definition 
o|hiding unexported module binding: chicken.syntax#make-er/ir-transformer 
o|hiding unexported module binding: chicken.internal.syntax-rules#process-syntax-rules 
S|applied compiler syntax:
S|  chicken.format#sprintf		1
S|  ##sys#map		5
S|  scheme#for-each		1
S|  chicken.base#foldl		4
S|  scheme#map		15
S|  chicken.base#foldr		3
o|eliminated procedure checks: 573 
o|eliminated procedure checks: 1 
o|eliminated procedure checks: 1 
o|specializations:
o|  1 (scheme#zero? integer)
o|  1 (##sys#check-output-port * * *)
o|  6 (scheme#cddr (pair * pair))
o|  1 (scheme#= fixnum fixnum)
o|  2 (scheme#cdddr (pair * (pair * pair)))
o|  2 (scheme#vector-length vector)
o|  8 (scheme#eqv? (or eof null fixnum char boolean symbol keyword) *)
o|  1 (scheme#caar (pair pair *))
o|  1 (scheme#>= fixnum fixnum)
o|  3 (scheme#length list)
o|  19 (scheme#eqv? * (or eof null fixnum char boolean symbol keyword))
o|  1 (scheme#set-cdr! pair *)
o|  1 (scheme#set-car! pair *)
o|  1 (scheme#eqv? * *)
o|  13 (##sys#check-list (or pair list) *)
o|  93 (scheme#cdr pair)
o|  66 (scheme#car pair)
(o e)|safe calls: 1421 
(o e)|assignments to immediate values: 8 
o|safe globals: (chicken.syntax#posv chicken.syntax#posq chicken.syntax#make-list chicken.syntax#iota chicken.syntax#find-tail chicken.syntax#find chicken.syntax#length+ chicken.syntax#lset=/eq? chicken.syntax#lset<=/eq? chicken.syntax#list-tabulate chicken.syntax#lset-intersection/eq? chicken.syntax#lset-union/eq? chicken.syntax#lset-difference/eq? chicken.syntax#lset-adjoin/eq? chicken.syntax#list-index chicken.syntax#last chicken.syntax#unzip1 chicken.syntax#remove chicken.syntax#filter-map chicken.syntax#filter chicken.syntax#alist-cons chicken.syntax#delete-duplicates chicken.syntax#fifth chicken.syntax#fourth chicken.syntax#third chicken.syntax#second chicken.syntax#first chicken.syntax#delete chicken.syntax#concatenate chicken.syntax#cons* chicken.syntax#any chicken.syntax#every chicken.syntax#append-map chicken.syntax#split-at chicken.syntax#drop chicken.syntax#take chicken.syntax#span chicken.syntax#partition) 
o|removed side-effect free assignment to unused variable: chicken.syntax#partition 
o|removed side-effect free assignment to unused variable: chicken.syntax#span 
o|removed side-effect free assignment to unused variable: chicken.syntax#drop 
o|removed side-effect free assignment to unused variable: chicken.syntax#split-at 
o|removed side-effect free assignment to unused variable: chicken.syntax#append-map 
o|inlining procedure: k4647 
o|inlining procedure: k4647 
o|inlining procedure: k4678 
o|inlining procedure: k4678 
o|removed side-effect free assignment to unused variable: chicken.syntax#cons* 
o|removed side-effect free assignment to unused variable: chicken.syntax#concatenate 
o|removed side-effect free assignment to unused variable: chicken.syntax#first 
o|removed side-effect free assignment to unused variable: chicken.syntax#second 
o|removed side-effect free assignment to unused variable: chicken.syntax#third 
o|removed side-effect free assignment to unused variable: chicken.syntax#fourth 
o|removed side-effect free assignment to unused variable: chicken.syntax#fifth 
o|removed side-effect free assignment to unused variable: chicken.syntax#delete-duplicates 
o|inlining procedure: k4895 
o|inlining procedure: k4895 
o|inlining procedure: k4887 
o|inlining procedure: k4887 
o|removed side-effect free assignment to unused variable: chicken.syntax#filter-map 
o|removed side-effect free assignment to unused variable: chicken.syntax#remove 
o|removed side-effect free assignment to unused variable: chicken.syntax#unzip1 
o|removed side-effect free assignment to unused variable: chicken.syntax#last 
o|removed side-effect free assignment to unused variable: chicken.syntax#list-index 
o|removed side-effect free assignment to unused variable: chicken.syntax#lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: chicken.syntax#lset-difference/eq? 
o|removed side-effect free assignment to unused variable: chicken.syntax#lset-union/eq? 
o|removed side-effect free assignment to unused variable: chicken.syntax#lset-intersection/eq? 
o|inlining procedure: k5286 
o|inlining procedure: k5286 
o|removed side-effect free assignment to unused variable: chicken.syntax#lset<=/eq? 
o|removed side-effect free assignment to unused variable: chicken.syntax#lset=/eq? 
o|removed side-effect free assignment to unused variable: chicken.syntax#length+ 
o|removed side-effect free assignment to unused variable: chicken.syntax#find 
o|removed side-effect free assignment to unused variable: chicken.syntax#find-tail 
o|removed side-effect free assignment to unused variable: chicken.syntax#iota 
o|removed side-effect free assignment to unused variable: chicken.syntax#make-list 
o|removed side-effect free assignment to unused variable: chicken.syntax#posq 
o|removed side-effect free assignment to unused variable: chicken.syntax#posv 
o|inlining procedure: k5560 
o|inlining procedure: k5560 
o|contracted procedure: "(expand.scm:94) g800801" 
o|inlining procedure: k5577 
o|inlining procedure: k5577 
o|contracted procedure: "(expand.scm:104) g833834" 
o|contracted procedure: "(expand.scm:103) g828829" 
o|contracted procedure: "(expand.scm:102) g822823" 
o|contracted procedure: "(expand.scm:98) g810811" 
o|inlining procedure: k5633 
o|inlining procedure: k5633 
o|inlining procedure: k5645 
o|inlining procedure: k5664 
o|inlining procedure: k5664 
o|contracted procedure: "(expand.scm:118) g864865" 
o|contracted procedure: "(expand.scm:117) g853854" 
o|inlining procedure: k5645 
o|inlining procedure: k5713 
o|inlining procedure: k5735 
o|inlining procedure: k5735 
o|inlining procedure: k5713 
o|inlining procedure: k5812 
o|contracted procedure: "(expand.scm:143) g965975" 
o|inlining procedure: k5812 
o|inlining procedure: k5860 
o|contracted procedure: "(expand.scm:138) g923931" 
o|contracted procedure: "(expand.scm:141) g941942" 
o|contracted procedure: "(expand.scm:140) g937938" 
o|inlining procedure: k5860 
o|inlining procedure: k5909 
o|inlining procedure: k5909 
o|inlining procedure: k5960 
o|inlining procedure: k5960 
o|inlining procedure: k5990 
o|inlining procedure: k5990 
o|inlining procedure: k6032 
o|inlining procedure: k6032 
o|inlining procedure: k6074 
o|inlining procedure: k6074 
o|inlining procedure: k6139 
o|inlining procedure: k6163 
o|inlining procedure: k6163 
o|inlining procedure: k6206 
o|inlining procedure: k6206 
o|inlining procedure: k6139 
o|inlining procedure: k6310 
o|inlining procedure: k6310 
o|inlining procedure: k6351 
o|inlining procedure: k6374 
o|inlining procedure: k6423 
o|inlining procedure: k6423 
o|inlining procedure: k6492 
o|contracted procedure: "(expand.scm:277) g11501159" 
o|inlining procedure: k6492 
o|inlining procedure: k6374 
o|inlining procedure: k6537 
o|inlining procedure: k6537 
o|inlining procedure: k6567 
o|contracted procedure: "(expand.scm:282) g12001201" 
o|inlining procedure: k6567 
o|inlining procedure: k6585 
o|inlining procedure: k6585 
o|inlining procedure: k6351 
o|inlining procedure: k6636 
o|inlining procedure: k6636 
o|inlining procedure: k6678 
o|inlining procedure: k6704 
o|inlining procedure: k6704 
o|substituted constant variable: a6711 
o|substituted constant variable: a6713 
o|substituted constant variable: a6715 
o|inlining procedure: k6678 
o|inlining procedure: k6750 
o|inlining procedure: k6767 
o|inlining procedure: k6767 
o|substituted constant variable: %let1284 
o|inlining procedure: k6810 
o|inlining procedure: k6810 
o|inlining procedure: k6863 
o|inlining procedure: k6863 
o|inlining procedure: k6875 
o|inlining procedure: k6875 
o|inlining procedure: k6935 
o|substituted constant variable: %lambda1281 
o|inlining procedure: k6935 
o|contracted procedure: "(expand.scm:356) ->keyword1275" 
o|inlining procedure: k6973 
o|inlining procedure: k6973 
o|inlining procedure: k6750 
o|inlining procedure: k7020 
o|inlining procedure: k7020 
o|inlining procedure: k7037 
o|inlining procedure: k7037 
o|inlining procedure: k7065 
o|inlining procedure: k7065 
o|inlining procedure: k7081 
o|inlining procedure: k7093 
o|inlining procedure: k7093 
o|inlining procedure: k7081 
o|inlining procedure: k7141 
o|inlining procedure: k7141 
o|inlining procedure: k7160 
o|inlining procedure: k7179 
o|inlining procedure: k7179 
o|substituted constant variable: a7217 
o|substituted constant variable: a7219 
o|substituted constant variable: a7221 
o|inlining procedure: k7160 
o|inlining procedure: k7228 
o|inlining procedure: k7228 
o|inlining procedure: k7250 
o|inlining procedure: k7250 
o|substituted constant variable: a7267 
o|substituted constant variable: a7269 
o|substituted constant variable: a7271 
o|inlining procedure: k7278 
o|inlining procedure: k7278 
o|substituted constant variable: a7294 
o|substituted constant variable: a7296 
o|substituted constant variable: a7298 
o|inlining procedure: k7302 
o|inlining procedure: k7302 
o|inlining procedure: k7382 
o|inlining procedure: k7382 
o|inlining procedure: k7404 
o|contracted procedure: "(expand.scm:447) g14441454" 
o|inlining procedure: k7404 
o|inlining procedure: k7470 
o|inlining procedure: k7470 
o|inlining procedure: k7529 
o|inlining procedure: k7529 
o|inlining procedure: k7538 
o|inlining procedure: k7538 
o|inlining procedure: k7547 
o|inlining procedure: k7547 
o|inlining procedure: k7568 
o|inlining procedure: k7568 
o|inlining procedure: k7577 
o|inlining procedure: k7577 
o|substituted constant variable: a7596 
o|substituted constant variable: a7598 
o|substituted constant variable: a7600 
o|substituted constant variable: a7602 
o|inlining procedure: k7606 
o|inlining procedure: k7618 
o|inlining procedure: k7618 
o|inlining procedure: k7641 
o|inlining procedure: k7641 
o|inlining procedure: k7692 
o|inlining procedure: k7710 
o|inlining procedure: k7710 
o|inlining procedure: k7692 
o|inlining procedure: k7767 
o|inlining procedure: k7767 
o|inlining procedure: k7799 
o|inlining procedure: k7814 
o|inlining procedure: k7814 
o|inlining procedure: k7826 
o|inlining procedure: k7826 
o|inlining procedure: k7799 
o|inlining procedure: k7606 
o|inlining procedure: k7905 
o|contracted procedure: "(expand.scm:529) g16231634" 
o|inlining procedure: k7877 
o|inlining procedure: k7877 
o|inlining procedure: k7905 
o|inlining procedure: k7955 
o|inlining procedure: k7955 
o|inlining procedure: k7967 
o|contracted procedure: "(expand.scm:521) g15751584" 
o|inlining procedure: k7967 
o|inlining procedure: k8001 
o|contracted procedure: "(expand.scm:524) g15991600" 
o|inlining procedure: k8001 
o|substituted constant variable: g15911594 
o|inlining procedure: k8053 
o|inlining procedure: k8080 
o|inlining procedure: k8080 
o|inlining procedure: k8053 
o|inlining procedure: k8120 
o|inlining procedure: "(expand.scm:557) chicken.syntax#defjam-error" 
o|inlining procedure: k8120 
o|inlining procedure: k8159 
o|inlining procedure: k8159 
o|substituted constant variable: a8181 
o|inlining procedure: k8205 
o|inlining procedure: k8205 
o|inlining procedure: k8233 
o|inlining procedure: k8251 
o|inlining procedure: k8279 
o|inlining procedure: k8279 
o|inlining procedure: "(expand.scm:582) chicken.syntax#defjam-error" 
o|inlining procedure: k8251 
o|inlining procedure: k8233 
o|inlining procedure: k8382 
o|inlining procedure: k8382 
o|inlining procedure: k8431 
o|inlining procedure: k8431 
o|inlining procedure: k8467 
o|inlining procedure: k8467 
o|inlining procedure: k8517 
o|inlining procedure: k8541 
o|inlining procedure: k8541 
o|inlining procedure: k8517 
o|inlining procedure: k8564 
o|inlining procedure: k8564 
o|inlining procedure: k8587 
o|inlining procedure: k8587 
o|inlining procedure: k8599 
o|inlining procedure: k8599 
o|inlining procedure: k8716 
o|inlining procedure: k8716 
o|inlining procedure: k8747 
o|inlining procedure: k8747 
o|inlining procedure: k8809 
o|inlining procedure: k8809 
o|inlining procedure: k8844 
o|inlining procedure: k8844 
o|contracted procedure: "(expand.scm:693) syntax-imports1799" 
o|inlining procedure: k8678 
o|inlining procedure: k8678 
o|inlining procedure: k8883 
o|inlining procedure: k8893 
o|inlining procedure: k8910 
o|inlining procedure: k8910 
o|inlining procedure: k8893 
o|inlining procedure: k8883 
o|inlining procedure: k8937 
o|inlining procedure: k8937 
o|inlining procedure: k8956 
o|inlining procedure: k8956 
o|propagated global variable: sexp1889 ##sys#syntax-error-culprit 
o|inlining procedure: k8979 
o|inlining procedure: k8979 
o|inlining procedure: k8991 
o|inlining procedure: k8991 
o|inlining procedure: k9000 
o|inlining procedure: k9000 
o|inlining procedure: k9036 
o|inlining procedure: k9036 
o|inlining procedure: k9059 
o|inlining procedure: k9083 
o|inlining procedure: k9083 
o|inlining procedure: k9118 
o|inlining procedure: k9118 
o|inlining procedure: k9141 
o|inlining procedure: k9141 
o|inlining procedure: k9059 
o|inlining procedure: k9162 
o|inlining procedure: k9162 
o|inlining procedure: k9175 
o|inlining procedure: k9187 
o|inlining procedure: k9187 
o|inlining procedure: k9205 
o|inlining procedure: k9205 
o|inlining procedure: k9223 
o|inlining procedure: k9223 
o|inlining procedure: k9241 
o|inlining procedure: k9241 
o|inlining procedure: k9263 
o|inlining procedure: k9263 
o|substituted constant variable: a9276 
o|substituted constant variable: a9278 
o|substituted constant variable: a9280 
o|substituted constant variable: a9282 
o|substituted constant variable: a9284 
o|substituted constant variable: a9286 
o|substituted constant variable: a9288 
o|substituted constant variable: a9290 
o|inlining procedure: k9175 
o|inlining procedure: k9300 
o|inlining procedure: k9300 
o|inlining procedure: k9378 
o|inlining procedure: k9390 
o|inlining procedure: k9402 
o|inlining procedure: k9402 
o|contracted procedure: "(expand.scm:829) chicken.syntax#alist-cons" 
o|inlining procedure: k9390 
o|inlining procedure: k9378 
o|inlining procedure: k9424 
o|inlining procedure: k9424 
o|inlining procedure: k9466 
o|inlining procedure: k9466 
o|contracted procedure: "(expand.scm:833) g19992000" 
o|inlining procedure: k9510 
o|inlining procedure: k9525 
o|inlining procedure: k9525 
o|inlining procedure: k9510 
o|inlining procedure: k9548 
o|inlining procedure: k9569 
o|inlining procedure: k9569 
o|inlining procedure: k9548 
o|inlining procedure: k9606 
o|inlining procedure: k9634 
o|inlining procedure: k9634 
o|inlining procedure: k9665 
o|inlining procedure: k9665 
o|inlining procedure: k9699 
o|inlining procedure: k9699 
o|removed unused parameter to known procedure: n2078 "(expand.scm:866) lookup21989" 
o|contracted procedure: "(expand.scm:865) g20462047" 
o|inlining procedure: k9705 
o|inlining procedure: k9705 
o|removed unused parameter to known procedure: n2078 "(expand.scm:863) lookup21989" 
o|contracted procedure: "(expand.scm:862) g20362037" 
o|inlining procedure: k9606 
o|removed unused formal parameters: (n2078) 
o|inlining procedure: k9729 
o|inlining procedure: k9729 
o|inlining procedure: k9754 
o|inlining procedure: k9754 
o|inlining procedure: k9796 
o|inlining procedure: k9796 
o|contracted procedure: "(expand.scm:903) g21032104" 
o|inlining procedure: k9822 
o|inlining procedure: k9822 
o|inlining procedure: k9851 
o|contracted procedure: "(expand.scm:903) g21202121" 
o|inlining procedure: k9851 
o|contracted procedure: "(expand.scm:910) g21162117" 
o|inlining procedure: k9872 
o|inlining procedure: k9872 
o|inlining procedure: k10037 
o|inlining procedure: k10037 
o|inlining procedure: k10073 
o|inlining procedure: k10073 
o|contracted procedure: "(synrules.scm:57) chicken.internal.syntax-rules#process-syntax-rules" 
o|removed side-effect free assignment to unused variable: %vector-length3102 
o|removed side-effect free assignment to unused variable: %vector-ref3103 
o|removed side-effect free assignment to unused variable: %null?3125 
o|removed side-effect free assignment to unused variable: %or3126 
o|removed side-effect free assignment to unused variable: %syntax-error3132 
o|inlining procedure: k10256 
o|inlining procedure: k10256 
o|inlining procedure: k10298 
o|inlining procedure: k10298 
o|inlining procedure: k10346 
o|inlining procedure: k10346 
o|inlining procedure: k10364 
o|inlining procedure: k10364 
o|inlining procedure: k10400 
o|inlining procedure: k10400 
o|inlining procedure: k10502 
o|inlining procedure: k10502 
o|inlining procedure: k10536 
o|inlining procedure: k10536 
o|inlining procedure: k10672 
o|inlining procedure: k10672 
o|inlining procedure: k10735 
o|inlining procedure: k10735 
o|inlining procedure: k10763 
o|inlining procedure: k10763 
o|inlining procedure: k10812 
o|inlining procedure: k10824 
o|inlining procedure: k10824 
o|inlining procedure: k10812 
o|inlining procedure: k10859 
o|inlining procedure: k10859 
o|substituted constant variable: %append3095 
o|inlining procedure: k10901 
o|inlining procedure: k10901 
o|substituted constant variable: %apply3096 
o|substituted constant variable: %append3095 
o|inlining procedure: k10935 
o|inlining procedure: k10935 
o|inlining procedure: k10960 
o|inlining procedure: k10960 
o|inlining procedure: k11004 
o|inlining procedure: k11004 
o|inlining procedure: k11048 
o|inlining procedure: k11048 
o|inlining procedure: k11081 
o|inlining procedure: k11102 
o|inlining procedure: k11102 
o|inlining procedure: k11081 
o|inlining procedure: k11137 
o|inlining procedure: k11137 
o|inlining procedure: k11170 
o|inlining procedure: k11182 
o|inlining procedure: k11182 
o|inlining procedure: k11170 
o|inlining procedure: k11198 
o|inlining procedure: k11198 
o|inlining procedure: k11222 
o|inlining procedure: k11222 
o|inlining procedure: k11252 
o|inlining procedure: k11252 
o|inlining procedure: k11393 
o|inlining procedure: k11393 
o|inlining procedure: k11423 
o|inlining procedure: k11423 
o|inlining procedure: k11477 
o|inlining procedure: k11477 
o|inlining procedure: k11559 
o|inlining procedure: k11559 
o|inlining procedure: k11593 
o|inlining procedure: k11593 
o|inlining procedure: k11632 
o|contracted procedure: "(expand.scm:1550) g30363037" 
o|inlining procedure: k11632 
o|inlining procedure: k11772 
o|contracted procedure: "(expand.scm:1507) g29392948" 
o|inlining procedure: k11742 
o|inlining procedure: k11742 
o|inlining procedure: k11772 
o|inlining procedure: k11822 
o|contracted procedure: "(expand.scm:1496) g29052914" 
o|inlining procedure: k11822 
o|inlining procedure: k11874 
o|inlining procedure: k11874 
o|inlining procedure: k11948 
o|inlining procedure: k11948 
o|inlining procedure: k11974 
o|inlining procedure: k11992 
o|inlining procedure: k11992 
o|inlining procedure: k11974 
o|inlining procedure: k12097 
o|inlining procedure: k12097 
o|inlining procedure: k12165 
o|inlining procedure: k12165 
o|substituted constant variable: a12192 
o|substituted constant variable: a12193 
o|inlining procedure: k12210 
o|inlining procedure: k12237 
o|inlining procedure: k12237 
o|inlining procedure: k12210 
o|inlining procedure: k12299 
o|inlining procedure: k12299 
o|inlining procedure: k12435 
o|inlining procedure: k12435 
o|inlining procedure: k12447 
o|inlining procedure: k12447 
o|inlining procedure: k12459 
o|inlining procedure: k12459 
o|inlining procedure: k12471 
o|inlining procedure: k12471 
o|inlining procedure: k12480 
o|inlining procedure: k12480 
o|inlining procedure: k12533 
o|inlining procedure: k12533 
o|inlining procedure: k12585 
o|inlining procedure: k12585 
o|inlining procedure: k12628 
o|inlining procedure: k12628 
o|inlining procedure: "(expand.scm:1276) chicken.syntax#defjam-error" 
o|contracted procedure: "(expand.scm:1273) g26192620" 
o|inlining procedure: k12842 
o|inlining procedure: k12877 
o|inlining procedure: k12877 
o|inlining procedure: "(expand.scm:1251) chicken.syntax#defjam-error" 
o|contracted procedure: "(expand.scm:1248) g25902591" 
o|inlining procedure: k12842 
o|inlining procedure: k13029 
o|inlining procedure: k13029 
o|inlining procedure: k13078 
o|inlining procedure: k13078 
o|inlining procedure: k13093 
o|inlining procedure: k13093 
o|inlining procedure: k13199 
o|inlining procedure: k13199 
o|inlining procedure: k13214 
o|inlining procedure: k13226 
o|inlining procedure: k13226 
o|substituted constant variable: a13243 
o|inlining procedure: k13214 
o|inlining procedure: k13259 
o|inlining procedure: k13259 
o|propagated global variable: g24642465 ##sys#expand-import 
o|inlining procedure: k13317 
o|inlining procedure: k13317 
o|inlining procedure: k13347 
o|inlining procedure: k13347 
o|inlining procedure: k13444 
o|inlining procedure: k13444 
o|inlining procedure: k13464 
o|inlining procedure: k13464 
o|inlining procedure: k13529 
o|inlining procedure: k13529 
o|inlining procedure: k13558 
o|inlining procedure: k13570 
o|inlining procedure: k13570 
o|inlining procedure: k13558 
o|inlining procedure: k13602 
o|inlining procedure: k13617 
o|inlining procedure: k13617 
o|inlining procedure: k13602 
o|inlining procedure: k13638 
o|inlining procedure: k13638 
o|substituted constant variable: a13659 
o|substituted constant variable: a13661 
o|substituted constant variable: a13663 
o|inlining procedure: k13674 
o|inlining procedure: k13701 
o|contracted procedure: "(expand.scm:1031) g23762385" 
o|inlining procedure: k13701 
o|inlining procedure: k13674 
o|inlining procedure: k13745 
o|inlining procedure: k13745 
o|inlining procedure: k13764 
o|inlining procedure: k13764 
o|inlining procedure: k13773 
o|inlining procedure: k13773 
o|inlining procedure: k13871 
o|inlining procedure: k13871 
o|inlining procedure: k13914 
o|inlining procedure: k13914 
o|propagated global variable: g22492250 ##sys#expand-import 
o|propagated global variable: g22352236 ##sys#expand-import 
o|replaced variables: 2446 
o|removed binding forms: 515 
o|removed side-effect free assignment to unused variable: chicken.syntax#every 
o|removed side-effect free assignment to unused variable: chicken.syntax#any 
o|removed side-effect free assignment to unused variable: chicken.syntax#filter 
o|removed side-effect free assignment to unused variable: chicken.syntax#list-tabulate 
o|substituted constant variable: prop803 
o|removed call to pure procedure with unused result: "(expand.scm:105) chicken.base#void" 
o|substituted constant variable: prop836 
o|substituted constant variable: prop831 
o|substituted constant variable: prop825 
o|substituted constant variable: prop867 
o|substituted constant variable: prop856 
o|substituted constant variable: prop944 
o|inlining procedure: k5782 
o|inlining procedure: k5782 
o|substituted constant variable: prop940 
o|substituted constant variable: r607514001 
o|substituted constant variable: r616414005 
o|substituted constant variable: r620714008 
o|removed call to pure procedure with unused result: "(expand.scm:238) chicken.base#void" 
o|removed call to pure procedure with unused result: "(expand.scm:197) chicken.base#void" 
o|removed call to pure procedure with unused result: "(expand.scm:196) chicken.base#void" 
o|removed call to pure procedure with unused result: "(expand.scm:241) chicken.base#void" 
o|inlining procedure: k6546 
o|substituted constant variable: prop1203 
o|substituted constant variable: r656814023 
o|substituted constant variable: r667914034 
o|substituted constant variable: r687614047 
o|substituted constant variable: r693614050 
o|substituted constant variable: r693614050 
o|substituted constant variable: r727914076 
o|substituted constant variable: r730314078 
o|converted assignments to bindings: (err1274) 
o|removed side-effect free assignment to unused variable: chicken.syntax#defjam-error 
o|substituted constant variable: r738314079 
o|substituted constant variable: r738314079 
o|inlining procedure: k7382 
o|substituted constant variable: r776814109 
o|substituted constant variable: r780014115 
o|removed call to pure procedure with unused result: "(expand.scm:540) chicken.base#void" 
o|substituted constant variable: r795614122 
o|substituted constant variable: r816014139 
o|substituted constant variable: r828014146 
o|substituted constant variable: r828014146 
o|substituted constant variable: r846814160 
o|substituted constant variable: r854214162 
o|substituted constant variable: r856514166 
o|substituted constant variable: r858814168 
o|substituted constant variable: r884514177 
o|substituted constant variable: r867914179 
o|converted assignments to bindings: (outstr1812) 
o|substituted constant variable: r891114184 
o|substituted constant variable: r889414185 
o|substituted constant variable: r888414186 
o|substituted constant variable: r900114198 
o|substituted constant variable: r914214207 
o|inlining procedure: k9378 
o|inlining procedure: k9378 
o|inlining procedure: k9378 
o|substituted constant variable: r939114232 
o|inlining procedure: k9378 
o|removed call to pure procedure with unused result: "(expand.scm:840) chicken.base#void" 
o|removed call to pure procedure with unused result: "(expand.scm:844) chicken.base#void" 
o|removed call to pure procedure with unused result: "(expand.scm:879) chicken.base#void" 
o|inlining procedure: k9510 
o|substituted constant variable: r952614246 
o|inlining procedure: k9510 
o|inlining procedure: k9510 
o|inlining procedure: k9510 
o|substituted constant variable: r954914256 
o|inlining procedure: k9510 
o|inlining procedure: k9510 
o|substituted constant variable: prop2049 
o|substituted constant variable: prop2039 
o|removed call to pure procedure with unused result: "(expand.scm:883) chicken.base#void" 
o|substituted constant variable: r973014267 
o|removed call to pure procedure with unused result: "(expand.scm:905) chicken.base#void" 
o|removed call to pure procedure with unused result: "(expand.scm:907) chicken.base#void" 
o|removed call to pure procedure with unused result: "(expand.scm:909) chicken.base#void" 
o|removed call to pure procedure with unused result: "(expand.scm:912) chicken.base#void" 
o|removed call to pure procedure with unused result: "(expand.scm:917) chicken.base#void" 
o|substituted constant variable: prop2119 
o|converted assignments to bindings: (inherit-pair-line-numbers1972) 
o|substituted constant variable: r1003814280 
o|removed side-effect free assignment to unused variable: %append3095 
o|removed side-effect free assignment to unused variable: %apply3096 
o|substituted constant variable: r1034714288 
o|substituted constant variable: r1093614314 
o|substituted constant variable: r1110314323 
o|substituted constant variable: r1118314329 
o|substituted constant variable: r1117114330 
o|substituted constant variable: r1119914332 
o|substituted constant variable: r1122314334 
o|substituted constant variable: r1194914357 
o|substituted constant variable: r1216614365 
o|substituted constant variable: r1248114382 
o|substituted constant variable: r1253414383 
o|substituted constant variable: r1258614385 
o|inlining procedure: k12801 
o|substituted constant variable: prop2622 
o|substituted constant variable: r1287814397 
o|substituted constant variable: r1287814397 
o|substituted constant variable: prop2593 
o|substituted constant variable: r1303014406 
o|substituted constant variable: r1307914407 
o|substituted constant variable: r1307914407 
o|substituted constant variable: r1322714425 
o|substituted constant variable: r1321514426 
o|substituted constant variable: r1346514440 
o|substituted constant variable: r1360314450 
o|substituted constant variable: r1376514459 
o|substituted constant variable: r1387214463 
o|simplifications: ((let . 3)) 
o|replaced variables: 176 
o|removed binding forms: 1971 
o|inlining procedure: k5568 
o|contracted procedure: k5613 
o|substituted constant variable: prop94414481 
o|substituted constant variable: prop94414487 
o|contracted procedure: k6108 
o|contracted procedure: k6111 
o|contracted procedure: k6242 
o|contracted procedure: k6307 
o|inlining procedure: k6693 
o|inlining procedure: k6693 
o|inlining procedure: k7029 
o|inlining procedure: k7029 
o|contracted procedure: k7839 
o|contracted procedure: k9480 
o|contracted procedure: k9492 
o|contracted procedure: k9513 
o|substituted constant variable: r951114604 
o|removed call to pure procedure with unused result: "(expand.scm:879) chicken.base#void" 
o|substituted constant variable: r951114609 
o|removed call to pure procedure with unused result: "(expand.scm:879) chicken.base#void" 
o|substituted constant variable: r951114618 
o|removed call to pure procedure with unused result: "(expand.scm:879) chicken.base#void" 
o|substituted constant variable: r951114623 
o|removed call to pure procedure with unused result: "(expand.scm:879) chicken.base#void" 
o|substituted constant variable: r951114628 
o|removed call to pure procedure with unused result: "(expand.scm:879) chicken.base#void" 
o|substituted constant variable: r951114633 
o|removed call to pure procedure with unused result: "(expand.scm:879) chicken.base#void" 
o|contracted procedure: k9723 
o|contracted procedure: k9813 
o|contracted procedure: k9828 
o|contracted procedure: k9840 
o|contracted procedure: k9856 
o|contracted procedure: k9865 
o|inlining procedure: k11090 
o|inlining procedure: k11090 
o|inlining procedure: k11793 
o|inlining procedure: k13889 
o|replaced variables: 8 
o|removed binding forms: 257 
o|contracted procedure: k5597 
o|contracted procedure: k5605 
o|contracted procedure: k5610 
o|contracted procedure: k5653 
o|contracted procedure: k5658 
o|contracted procedure: k5773 
o|inlining procedure: k6239 
o|substituted constant variable: r738314535 
o|contracted procedure: k951314608 
o|contracted procedure: k951314613 
o|contracted procedure: k951314622 
o|contracted procedure: k951314627 
o|contracted procedure: k9614 
o|contracted procedure: k9622 
o|contracted procedure: k951314632 
o|contracted procedure: k951314637 
o|inlining procedure: "(expand.scm:866) lookup21989" 
o|inlining procedure: "(expand.scm:863) lookup21989" 
o|contracted procedure: k9848 
o|substituted constant variable: r1109114778 
o|substituted constant variable: r1109114779 
o|contracted procedure: k12792 
o|contracted procedure: k12853 
o|substituted constant variable: r1389014803 
o|replaced variables: 3 
o|removed binding forms: 53 
o|removed conditional forms: 3 
o|inlining procedure: k5600 
o|inlining procedure: k5600 
o|removed side-effect free assignment to unused variable: lookup21989 
o|replaced variables: 15 
o|removed binding forms: 17 
o|inlining procedure: k9696 
o|inlining procedure: k9702 
o|replaced variables: 4 
o|removed binding forms: 12 
o|removed binding forms: 4 
o|simplifications: ((let . 78) (if . 57) (##core#call . 1087)) 
o|  call simplifications:
o|    scheme#cdddr
o|    scheme#cddddr
o|    scheme#number?
o|    scheme#eof-object?
o|    scheme#cadddr	2
o|    chicken.fixnum#fx-	2
o|    scheme#>=
o|    scheme#+	3
o|    scheme#=
o|    scheme#<=
o|    scheme#boolean?
o|    scheme#char?	2
o|    scheme#>	2
o|    scheme#-	3
o|    scheme#cdar	2
o|    ##sys#immediate?
o|    scheme#vector-ref	5
o|    chicken.fixnum#fx<	2
o|    chicken.fixnum#fx=	7
o|    scheme#apply
o|    scheme#memq	5
o|    scheme#member
o|    scheme#caddr	16
o|    scheme#length	13
o|    chicken.fixnum#fx<=	2
o|    chicken.fixnum#fx>	4
o|    scheme#cddr	10
o|    ##sys#list	179
o|    ##sys#cons	86
o|    scheme#list?	7
o|    scheme#cadr	35
o|    scheme#values	8
o|    ##sys#call-with-values	3
o|    ##sys#apply	2
o|    scheme#memv
o|    scheme#equal?	2
o|    scheme#string?	3
o|    ##sys#make-structure	2
o|    scheme#caar	5
o|    scheme#eq?	83
o|    scheme#list	16
o|    scheme#set-car!	2
o|    ##sys#structure?	2
o|    scheme#null?	46
o|    scheme#car	69
o|    ##sys#check-list	14
o|    scheme#assq	13
o|    scheme#symbol?	43
o|    scheme#vector?	13
o|    ##sys#size	4
o|    chicken.fixnum#fx>=	5
o|    ##sys#slot	73
o|    chicken.fixnum#fx+	4
o|    scheme#cons	84
o|    ##sys#setslot	20
o|    scheme#not	37
o|    scheme#pair?	87
o|    scheme#cdr	48
o|contracted procedure: k5583 
o|contracted procedure: k5592 
o|contracted procedure: k5630 
o|contracted procedure: k5648 
o|contracted procedure: k5667 
o|contracted procedure: k5673 
o|contracted procedure: k5679 
o|contracted procedure: k5682 
o|contracted procedure: k5710 
o|contracted procedure: k5686 
o|contracted procedure: k5689 
o|contracted procedure: k5692 
o|contracted procedure: k5716 
o|contracted procedure: k5719 
o|contracted procedure: k5760 
o|contracted procedure: k5726 
o|contracted procedure: k5738 
o|contracted procedure: k5741 
o|contracted procedure: k5748 
o|contracted procedure: k5756 
o|contracted procedure: k5785 
o|contracted procedure: k5788 
o|contracted procedure: k5798 
o|contracted procedure: k5851 
o|contracted procedure: k5815 
o|contracted procedure: k5841 
o|contracted procedure: k5845 
o|contracted procedure: k5837 
o|contracted procedure: k5818 
o|contracted procedure: k5821 
o|contracted procedure: k5829 
o|contracted procedure: k5833 
o|contracted procedure: k5888 
o|contracted procedure: k5863 
o|contracted procedure: k5881 
o|contracted procedure: k5885 
o|contracted procedure: k5866 
o|contracted procedure: k5873 
o|contracted procedure: k5877 
o|contracted procedure: k5894 
o|contracted procedure: k5897 
o|contracted procedure: k5900 
o|contracted procedure: k5912 
o|contracted procedure: k5915 
o|contracted procedure: k5918 
o|contracted procedure: k5926 
o|contracted procedure: k5934 
o|contracted procedure: k5972 
o|contracted procedure: k5957 
o|contracted procedure: k5963 
o|contracted procedure: k5995 
o|contracted procedure: k5998 
o|contracted procedure: k6006 
o|contracted procedure: k6017 
o|contracted procedure: k6013 
o|contracted procedure: k6029 
o|contracted procedure: k6048 
o|contracted procedure: k6077 
o|contracted procedure: k6099 
o|contracted procedure: k6083 
o|contracted procedure: k6149 
o|contracted procedure: k6139 
o|contracted procedure: k6157 
o|contracted procedure: k6166 
o|contracted procedure: k6169 
o|contracted procedure: k6183 
o|contracted procedure: k6193 
o|contracted procedure: k6197 
o|contracted procedure: k6203 
o|contracted procedure: k6209 
o|contracted procedure: k6217 
o|contracted procedure: k6224 
o|contracted procedure: k6262 
o|contracted procedure: k6248 
o|contracted procedure: k6342 
o|contracted procedure: k6313 
o|contracted procedure: k6322 
o|contracted procedure: k6333 
o|contracted procedure: k6354 
o|contracted procedure: k6362 
o|contracted procedure: k6368 
o|contracted procedure: k6377 
o|contracted procedure: k6383 
o|contracted procedure: k6389 
o|contracted procedure: k6395 
o|contracted procedure: k6471 
o|contracted procedure: k6479 
o|contracted procedure: k6486 
o|contracted procedure: k6467 
o|contracted procedure: k6463 
o|contracted procedure: k6459 
o|contracted procedure: k6455 
o|contracted procedure: k6410 
o|contracted procedure: k6414 
o|contracted procedure: k6406 
o|contracted procedure: k6402 
o|contracted procedure: k6426 
o|contracted procedure: k6448 
o|contracted procedure: k6444 
o|contracted procedure: k6429 
o|contracted procedure: k6432 
o|contracted procedure: k6440 
o|contracted procedure: k6495 
o|contracted procedure: k6517 
o|contracted procedure: k6513 
o|contracted procedure: k6498 
o|contracted procedure: k6501 
o|contracted procedure: k6509 
o|contracted procedure: k6540 
o|contracted procedure: k6556 
o|contracted procedure: k6570 
o|contracted procedure: k6578 
o|contracted procedure: k6654 
o|contracted procedure: k6609 
o|contracted procedure: k6648 
o|contracted procedure: k6612 
o|contracted procedure: k6642 
o|contracted procedure: k6615 
o|contracted procedure: k6660 
o|contracted procedure: k6681 
o|contracted procedure: k6684 
o|contracted procedure: k6690 
o|contracted procedure: k6701 
o|contracted procedure: k6693 
o|contracted procedure: k6753 
o|contracted procedure: k6770 
o|contracted procedure: k6799 
o|contracted procedure: k6803 
o|contracted procedure: k6795 
o|contracted procedure: k6791 
o|contracted procedure: k6787 
o|contracted procedure: k6783 
o|inlining procedure: k6767 
o|contracted procedure: k6866 
o|contracted procedure: k6813 
o|contracted procedure: k6828 
o|contracted procedure: k6824 
o|contracted procedure: k6820 
o|inlining procedure: k6767 
o|contracted procedure: k6847 
o|contracted procedure: k6843 
o|contracted procedure: k6839 
o|inlining procedure: k6767 
o|inlining procedure: k6859 
o|inlining procedure: k6859 
o|contracted procedure: k6872 
o|contracted procedure: k6878 
o|contracted procedure: k6885 
o|contracted procedure: k6888 
o|contracted procedure: k6903 
o|contracted procedure: k6908 
o|contracted procedure: k6923 
o|contracted procedure: k6919 
o|contracted procedure: k6915 
o|contracted procedure: k6931 
o|contracted procedure: k6938 
o|contracted procedure: k6949 
o|contracted procedure: k6945 
o|contracted procedure: k6935 
o|contracted procedure: k6732 
o|contracted procedure: k6899 
o|contracted procedure: k6895 
o|contracted procedure: k6976 
o|contracted procedure: k6979 
o|contracted procedure: k6982 
o|contracted procedure: k6990 
o|contracted procedure: k6998 
o|contracted procedure: k7017 
o|contracted procedure: k7023 
o|contracted procedure: k7316 
o|contracted procedure: k7040 
o|contracted procedure: k7046 
o|contracted procedure: k7052 
o|contracted procedure: k7059 
o|contracted procedure: k7068 
o|contracted procedure: k7084 
o|contracted procedure: k7090 
o|contracted procedure: k7121 
o|contracted procedure: k7096 
o|contracted procedure: k7103 
o|contracted procedure: k7111 
o|contracted procedure: k7115 
o|contracted procedure: k7135 
o|contracted procedure: k7144 
o|contracted procedure: k7153 
o|contracted procedure: k7163 
o|contracted procedure: k7169 
o|contracted procedure: k7176 
o|contracted procedure: k7182 
o|contracted procedure: k7193 
o|contracted procedure: k7189 
o|contracted procedure: k7199 
o|contracted procedure: k7213 
o|contracted procedure: k7209 
o|contracted procedure: k7231 
o|contracted procedure: k7240 
o|contracted procedure: k7247 
o|contracted procedure: k7253 
o|contracted procedure: k7263 
o|contracted procedure: k7275 
o|contracted procedure: k7281 
o|contracted procedure: k7288 
o|contracted procedure: k7299 
o|contracted procedure: k7312 
o|contracted procedure: k7305 
o|contracted procedure: k7344 
o|contracted procedure: k7352 
o|contracted procedure: k7348 
o|contracted procedure: k7364 
o|contracted procedure: k7372 
o|contracted procedure: k7375 
o|contracted procedure: k7385 
o|contracted procedure: k7391 
o|contracted procedure: k7398 
o|contracted procedure: k7382 
o|contracted procedure: k7443 
o|contracted procedure: k7407 
o|contracted procedure: k7433 
o|contracted procedure: k7437 
o|contracted procedure: k7429 
o|contracted procedure: k7410 
o|contracted procedure: k7413 
o|contracted procedure: k7421 
o|contracted procedure: k7425 
o|contracted procedure: k7449 
o|contracted procedure: k7455 
o|contracted procedure: k7458 
o|contracted procedure: k7461 
o|contracted procedure: k7473 
o|contracted procedure: k7476 
o|contracted procedure: k7479 
o|contracted procedure: k7487 
o|contracted procedure: k7495 
o|contracted procedure: k8496 
o|contracted procedure: k7511 
o|contracted procedure: k8490 
o|contracted procedure: k7514 
o|contracted procedure: k8484 
o|contracted procedure: k7517 
o|contracted procedure: k7526 
o|contracted procedure: k7535 
o|contracted procedure: k7550 
o|contracted procedure: k7565 
o|contracted procedure: k7580 
o|contracted procedure: k8034 
o|contracted procedure: k7609 
o|contracted procedure: k7833 
o|contracted procedure: k7621 
o|contracted procedure: k7637 
o|contracted procedure: k7657 
o|contracted procedure: k7672 
o|contracted procedure: k7680 
o|contracted procedure: k7689 
o|contracted procedure: k7719 
o|inlining procedure: k7710 
o|contracted procedure: k7733 
o|contracted procedure: k7729 
o|inlining procedure: k7710 
o|contracted procedure: k7740 
o|inlining procedure: k7710 
o|contracted procedure: k7750 
o|contracted procedure: k7754 
o|contracted procedure: k7761 
o|contracted procedure: k7764 
o|contracted procedure: k7770 
o|contracted procedure: k7792 
o|contracted procedure: k7795 
o|contracted procedure: k7802 
o|contracted procedure: k7847 
o|contracted procedure: k7861 
o|contracted procedure: k7843 
o|contracted procedure: k7872 
o|contracted procedure: k7911 
o|contracted procedure: k7914 
o|contracted procedure: k7922 
o|contracted procedure: k7926 
o|contracted procedure: k7930 
o|contracted procedure: k7938 
o|contracted procedure: k7942 
o|contracted procedure: k7946 
o|contracted procedure: k7887 
o|contracted procedure: k7952 
o|contracted procedure: k7958 
o|contracted procedure: k7970 
o|contracted procedure: k7992 
o|contracted procedure: k7988 
o|contracted procedure: k7973 
o|contracted procedure: k7976 
o|contracted procedure: k7984 
o|contracted procedure: k8004 
o|contracted procedure: k8011 
o|contracted procedure: k8031 
o|contracted procedure: k8068 
o|contracted procedure: k8064 
o|contracted procedure: k8060 
o|contracted procedure: k8083 
o|contracted procedure: k8105 
o|contracted procedure: k8101 
o|contracted procedure: k8086 
o|contracted procedure: k8089 
o|contracted procedure: k8097 
o|contracted procedure: k8193 
o|contracted procedure: k8114 
o|contracted procedure: k8136 
o|contracted procedure: k8146 
o|contracted procedure: k8150 
o|contracted procedure: k8139 
o|contracted procedure: k8189 
o|contracted procedure: k8156 
o|contracted procedure: k8183 
o|contracted procedure: k8162 
o|contracted procedure: k8178 
o|contracted procedure: k8168 
o|contracted procedure: k8478 
o|contracted procedure: k8208 
o|contracted procedure: k8214 
o|contracted procedure: k8473 
o|contracted procedure: k8218 
o|contracted procedure: k8464 
o|contracted procedure: k8227 
o|contracted procedure: k8248 
o|contracted procedure: k8367 
o|contracted procedure: k8254 
o|contracted procedure: k8293 
o|contracted procedure: k8267 
o|contracted procedure: k8275 
o|contracted procedure: k8289 
o|contracted procedure: k8282 
o|contracted procedure: k8279 
o|contracted procedure: k8296 
o|contracted procedure: k8363 
o|contracted procedure: k8307 
o|contracted procedure: k8321 
o|contracted procedure: k8357 
o|contracted procedure: k8331 
o|contracted procedure: k8353 
o|contracted procedure: k8347 
o|contracted procedure: k8343 
o|contracted procedure: k8335 
o|contracted procedure: k8339 
o|contracted procedure: k8411 
o|contracted procedure: k8395 
o|contracted procedure: k8407 
o|contracted procedure: k8399 
o|contracted procedure: k8403 
o|contracted procedure: k8428 
o|contracted procedure: k8460 
o|contracted procedure: k8434 
o|contracted procedure: k8446 
o|contracted procedure: k8456 
o|contracted procedure: k8470 
o|contracted procedure: k8502 
o|contracted procedure: k8584 
o|contracted procedure: k8520 
o|contracted procedure: k8523 
o|contracted procedure: k8535 
o|contracted procedure: k8544 
o|contracted procedure: k8552 
o|contracted procedure: k8548 
o|contracted procedure: k8561 
o|contracted procedure: k8580 
o|contracted procedure: k8636 
o|contracted procedure: k8602 
o|contracted procedure: k8611 
o|contracted procedure: k8630 
o|contracted procedure: k8626 
o|contracted procedure: k8622 
o|contracted procedure: k8719 
o|contracted procedure: k8750 
o|contracted procedure: k8776 
o|contracted procedure: k8788 
o|contracted procedure: k8868 
o|contracted procedure: k8812 
o|contracted procedure: k8827 
o|contracted procedure: k8847 
o|contracted procedure: k8864 
o|contracted procedure: k8672 
o|contracted procedure: k8681 
o|contracted procedure: k8709 
o|contracted procedure: k8687 
o|contracted procedure: k8877 
o|contracted procedure: k8889 
o|contracted procedure: k8896 
o|contracted procedure: k8907 
o|contracted procedure: k9357 
o|contracted procedure: k8922 
o|contracted procedure: k9351 
o|contracted procedure: k8925 
o|contracted procedure: k9336 
o|contracted procedure: k8931 
o|contracted procedure: k8988 
o|contracted procedure: k8994 
o|contracted procedure: k9003 
o|contracted procedure: k9010 
o|contracted procedure: k9033 
o|contracted procedure: k9042 
o|contracted procedure: k9062 
o|contracted procedure: k9065 
o|contracted procedure: k9068 
o|contracted procedure: k9150 
o|contracted procedure: k9071 
o|contracted procedure: k9086 
o|contracted procedure: k9092 
o|contracted procedure: k9105 
o|contracted procedure: k9109 
o|contracted procedure: k9112 
o|contracted procedure: k9135 
o|contracted procedure: k9121 
o|contracted procedure: k9131 
o|contracted procedure: k9138 
o|contracted procedure: k9144 
o|contracted procedure: k9159 
o|contracted procedure: k9172 
o|contracted procedure: k9165 
o|contracted procedure: k9178 
o|contracted procedure: k9184 
o|contracted procedure: k9190 
o|contracted procedure: k9199 
o|contracted procedure: k9208 
o|contracted procedure: k9217 
o|contracted procedure: k9226 
o|contracted procedure: k9235 
o|contracted procedure: k9244 
o|contracted procedure: k9266 
o|contracted procedure: k9269 
o|contracted procedure: k9332 
o|contracted procedure: k9294 
o|contracted procedure: k9328 
o|contracted procedure: k9303 
o|contracted procedure: k9320 
o|contracted procedure: k9324 
o|contracted procedure: k9342 
o|contracted procedure: k9375 
o|contracted procedure: k9381 
o|contracted procedure: k9396 
o|contracted procedure: k9405 
o|contracted procedure: k4872 
o|contracted procedure: k9412 
o|contracted procedure: k9415 
o|contracted procedure: k9427 
o|contracted procedure: k9434 
o|contracted procedure: k9452 
o|contracted procedure: k9504 
o|contracted procedure: k9469 
o|contracted procedure: k9472 
o|contracted procedure: k9500 
o|contracted procedure: k9496 
o|contracted procedure: k9516 
o|contracted procedure: k9522 
o|contracted procedure: k9545 
o|contracted procedure: k9551 
o|contracted procedure: k9554 
o|contracted procedure: k9601 
o|contracted procedure: k9560 
o|contracted procedure: k9572 
o|contracted procedure: k9575 
o|contracted procedure: k9582 
o|contracted procedure: k9590 
o|contracted procedure: k9594 
o|contracted procedure: k9711 
o|contracted procedure: k9609 
o|contracted procedure: k9631 
o|contracted procedure: k9637 
o|contracted procedure: k9643 
o|contracted procedure: k9655 
o|contracted procedure: k9668 
o|contracted procedure: k9671 
o|contracted procedure: k9683 
o|contracted procedure: k9732 
o|contracted procedure: k9748 
o|contracted procedure: k9738 
o|contracted procedure: k9757 
o|contracted procedure: k9764 
o|contracted procedure: k9782 
o|contracted procedure: k9869 
o|contracted procedure: k9799 
o|contracted procedure: k9825 
o|contracted procedure: k9837 
o|contracted procedure: k10031 
o|contracted procedure: k10040 
o|contracted procedure: k10047 
o|contracted procedure: k10055 
o|contracted procedure: k10067 
o|contracted procedure: k10076 
o|contracted procedure: k10083 
o|contracted procedure: k10087 
o|contracted procedure: k11305 
o|contracted procedure: k10212 
o|contracted procedure: k10292 
o|contracted procedure: k10288 
o|contracted procedure: k10220 
o|contracted procedure: k10224 
o|contracted procedure: k10216 
o|contracted procedure: k10208 
o|contracted procedure: k10232 
o|contracted procedure: k10235 
o|contracted procedure: k10250 
o|contracted procedure: k10246 
o|contracted procedure: k10242 
o|contracted procedure: k10259 
o|contracted procedure: k10262 
o|contracted procedure: k10265 
o|contracted procedure: k10273 
o|contracted procedure: k10281 
o|contracted procedure: k10304 
o|contracted procedure: k10307 
o|contracted procedure: k10314 
o|contracted procedure: k10318 
o|contracted procedure: k10343 
o|contracted procedure: k10349 
o|contracted procedure: k10356 
o|contracted procedure: k10367 
o|contracted procedure: k10373 
o|contracted procedure: k10388 
o|contracted procedure: k10384 
o|contracted procedure: k10380 
o|contracted procedure: k10403 
o|contracted procedure: k10454 
o|contracted procedure: k10414 
o|contracted procedure: k10426 
o|contracted procedure: k10422 
o|contracted procedure: k10418 
o|contracted procedure: k10410 
o|contracted procedure: k10442 
o|contracted procedure: k10448 
o|contracted procedure: k10460 
o|contracted procedure: k10499 
o|contracted procedure: k10471 
o|contracted procedure: k10483 
o|contracted procedure: k10479 
o|contracted procedure: k10475 
o|contracted procedure: k10467 
o|contracted procedure: k10491 
o|contracted procedure: k10505 
o|contracted procedure: k10519 
o|contracted procedure: k10515 
o|contracted procedure: k10530 
o|contracted procedure: k10526 
o|contracted procedure: k10533 
o|contracted procedure: k10556 
o|contracted procedure: k10658 
o|contracted procedure: k10654 
o|contracted procedure: k10564 
o|contracted procedure: k10650 
o|contracted procedure: k10646 
o|contracted procedure: k10572 
o|contracted procedure: k10638 
o|contracted procedure: k10642 
o|contracted procedure: k10580 
o|contracted procedure: k10631 
o|contracted procedure: k10620 
o|contracted procedure: k10588 
o|contracted procedure: k10596 
o|contracted procedure: k10592 
o|contracted procedure: k10584 
o|contracted procedure: k10576 
o|contracted procedure: k10568 
o|contracted procedure: k10560 
o|contracted procedure: k10552 
o|contracted procedure: k10612 
o|contracted procedure: k10616 
o|contracted procedure: k10608 
o|contracted procedure: k10604 
o|contracted procedure: k10662 
o|contracted procedure: k10666 
o|contracted procedure: k10675 
o|contracted procedure: k10681 
o|contracted procedure: k10688 
o|contracted procedure: k10760 
o|contracted procedure: k10701 
o|contracted procedure: k10752 
o|contracted procedure: k10704 
o|contracted procedure: k10719 
o|contracted procedure: k10723 
o|contracted procedure: k10738 
o|contracted procedure: k10749 
o|contracted procedure: k10745 
o|contracted procedure: k10735 
o|contracted procedure: k10766 
o|contracted procedure: k10783 
o|contracted procedure: k10789 
o|contracted procedure: k10795 
o|contracted procedure: k10806 
o|contracted procedure: k10815 
o|contracted procedure: k10818 
o|contracted procedure: k10834 
o|contracted procedure: k10827 
o|contracted procedure: k10841 
o|contracted procedure: k10853 
o|contracted procedure: k10862 
o|contracted procedure: k10880 
o|contracted procedure: k10904 
o|substituted constant variable: g15423 
o|contracted procedure: k10911 
o|contracted procedure: k10915 
o|contracted procedure: k10929 
o|contracted procedure: k10925 
o|contracted procedure: k10932 
o|contracted procedure: k10938 
o|contracted procedure: k10944 
o|contracted procedure: k10957 
o|contracted procedure: k10963 
o|contracted procedure: k10984 
o|contracted procedure: k11007 
o|contracted procedure: k11013 
o|contracted procedure: k11020 
o|contracted procedure: k11033 
o|contracted procedure: k11037 
o|contracted procedure: k11045 
o|contracted procedure: k11051 
o|contracted procedure: k11068 
o|contracted procedure: k11084 
o|contracted procedure: k11113 
o|contracted procedure: k11096 
o|contracted procedure: k11099 
o|contracted procedure: k11109 
o|contracted procedure: k11090 
o|contracted procedure: k11126 
o|contracted procedure: k11134 
o|contracted procedure: k11140 
o|contracted procedure: k11157 
o|contracted procedure: k11192 
o|contracted procedure: k11185 
o|contracted procedure: k11201 
o|contracted procedure: k11207 
o|contracted procedure: k11214 
o|contracted procedure: k11236 
o|contracted procedure: k11246 
o|contracted procedure: k11262 
o|contracted procedure: k11265 
o|contracted procedure: k11316 
o|contracted procedure: k11324 
o|contracted procedure: k11328 
o|contracted procedure: k11361 
o|contracted procedure: k11357 
o|contracted procedure: k11353 
o|contracted procedure: k11349 
o|contracted procedure: k11396 
o|contracted procedure: k11550 
o|contracted procedure: k11413 
o|contracted procedure: k11419 
o|contracted procedure: k11432 
o|contracted procedure: k11445 
o|contracted procedure: k11453 
o|contracted procedure: k11466 
o|contracted procedure: k11474 
o|contracted procedure: k11486 
o|contracted procedure: k11496 
o|contracted procedure: k11515 
o|contracted procedure: k11507 
o|contracted procedure: k11523 
o|contracted procedure: k11527 
o|contracted procedure: k11541 
o|contracted procedure: k11576 
o|contracted procedure: k11572 
o|contracted procedure: k11568 
o|contracted procedure: k11590 
o|contracted procedure: k11623 
o|contracted procedure: k11596 
o|contracted procedure: k11619 
o|contracted procedure: k11611 
o|contracted procedure: k11615 
o|contracted procedure: k11607 
o|contracted procedure: k11603 
o|contracted procedure: k11641 
o|contracted procedure: k11654 
o|contracted procedure: k11667 
o|contracted procedure: k11670 
o|contracted procedure: k11683 
o|contracted procedure: k11701 
o|contracted procedure: k11712 
o|contracted procedure: k11813 
o|contracted procedure: k11717 
o|contracted procedure: k11737 
o|contracted procedure: k11733 
o|contracted procedure: k11729 
o|contracted procedure: k11721 
o|contracted procedure: k11708 
o|contracted procedure: k11775 
o|contracted procedure: k11781 
o|contracted procedure: k11789 
o|contracted procedure: k11797 
o|contracted procedure: k11763 
o|contracted procedure: k11759 
o|contracted procedure: k11745 
o|contracted procedure: k11753 
o|contracted procedure: k11793 
o|contracted procedure: k11803 
o|contracted procedure: k11810 
o|contracted procedure: k11825 
o|contracted procedure: k11847 
o|contracted procedure: k11692 
o|contracted procedure: k11696 
o|contracted procedure: k11843 
o|contracted procedure: k11828 
o|contracted procedure: k11831 
o|contracted procedure: k11839 
o|contracted procedure: k11863 
o|contracted procedure: k11877 
o|contracted procedure: k11884 
o|contracted procedure: k11901 
o|contracted procedure: k11891 
o|contracted procedure: k11914 
o|contracted procedure: k12137 
o|contracted procedure: k11938 
o|contracted procedure: k12133 
o|contracted procedure: k11951 
o|contracted procedure: k11954 
o|contracted procedure: k11986 
o|contracted procedure: k12002 
o|contracted procedure: k12009 
o|contracted procedure: k12023 
o|contracted procedure: k12012 
o|contracted procedure: k12019 
o|contracted procedure: k12075 
o|contracted procedure: k12084 
o|contracted procedure: k12088 
o|contracted procedure: k12032 
o|contracted procedure: k12050 
o|contracted procedure: k12057 
o|contracted procedure: k12071 
o|contracted procedure: k12060 
o|contracted procedure: k12067 
o|contracted procedure: k12100 
o|contracted procedure: k12103 
o|contracted procedure: k12106 
o|contracted procedure: k12114 
o|contracted procedure: k12122 
o|contracted procedure: k12129 
o|contracted procedure: k12147 
o|contracted procedure: k12520 
o|contracted procedure: k12168 
o|contracted procedure: k12171 
o|contracted procedure: k12232 
o|contracted procedure: k12261 
o|contracted procedure: k12240 
o|contracted procedure: k12275 
o|contracted procedure: k12264 
o|contracted procedure: k12271 
o|contracted procedure: k12287 
o|contracted procedure: k12336 
o|contracted procedure: k12332 
o|contracted procedure: k12312 
o|contracted procedure: k12328 
o|contracted procedure: k12320 
o|contracted procedure: k12316 
o|contracted procedure: k12384 
o|contracted procedure: k12352 
o|contracted procedure: k12380 
o|contracted procedure: k12364 
o|contracted procedure: k12376 
o|contracted procedure: k12368 
o|contracted procedure: k12360 
o|contracted procedure: k12356 
o|contracted procedure: k12391 
o|contracted procedure: k12395 
o|contracted procedure: k12404 
o|contracted procedure: k12411 
o|contracted procedure: k12427 
o|contracted procedure: k12416 
o|contracted procedure: k12423 
o|contracted procedure: k12432 
o|contracted procedure: k12438 
o|contracted procedure: k12444 
o|contracted procedure: k12450 
o|contracted procedure: k12456 
o|contracted procedure: k12468 
o|contracted procedure: k12483 
o|contracted procedure: k12494 
o|contracted procedure: k12516 
o|contracted procedure: k12530 
o|contracted procedure: k12536 
o|contracted procedure: k12539 
o|contracted procedure: k12546 
o|contracted procedure: k12572 
o|contracted procedure: k12556 
o|contracted procedure: k12564 
o|contracted procedure: k12560 
o|contracted procedure: k12582 
o|contracted procedure: k12588 
o|contracted procedure: k12591 
o|contracted procedure: k12598 
o|contracted procedure: k12605 
o|contracted procedure: k12622 
o|contracted procedure: k12625 
o|contracted procedure: k12631 
o|contracted procedure: k12638 
o|contracted procedure: k12648 
o|contracted procedure: k12675 
o|contracted procedure: k12697 
o|contracted procedure: k12719 
o|contracted procedure: k12747 
o|contracted procedure: k12757 
o|contracted procedure: k12771 
o|contracted procedure: k12760 
o|contracted procedure: k12767 
o|contracted procedure: k12784 
o|contracted procedure: k12787 
o|contracted procedure: k12795 
o|contracted procedure: k12837 
o|contracted procedure: k12945 
o|contracted procedure: k12845 
o|contracted procedure: k12856 
o|contracted procedure: k12869 
o|contracted procedure: k12880 
o|inlining procedure: k12873 
o|inlining procedure: k12873 
o|contracted procedure: k12941 
o|contracted procedure: k12901 
o|contracted procedure: k12925 
o|contracted procedure: k12935 
o|contracted procedure: k12931 
o|contracted procedure: k12921 
o|contracted procedure: k12962 
o|contracted procedure: k12979 
o|contracted procedure: k12996 
o|contracted procedure: k13013 
o|contracted procedure: k13063 
o|contracted procedure: k13067 
o|contracted procedure: k13059 
o|contracted procedure: k13081 
o|contracted procedure: k13087 
o|inlining procedure: k13078 
o|contracted procedure: k13096 
o|contracted procedure: k13106 
o|contracted procedure: k13110 
o|contracted procedure: k13113 
o|contracted procedure: k13120 
o|contracted procedure: k13136 
o|contracted procedure: k13139 
o|contracted procedure: k13143 
o|contracted procedure: k13168 
o|contracted procedure: k13188 
o|contracted procedure: k13193 
o|contracted procedure: k13205 
o|contracted procedure: k13217 
o|contracted procedure: k13223 
o|contracted procedure: k13240 
o|contracted procedure: k13229 
o|contracted procedure: k13236 
o|contracted procedure: k13247 
o|contracted procedure: k13250 
o|contracted procedure: k13172 
o|contracted procedure: k13176 
o|contracted procedure: k13180 
o|contracted procedure: k13149 
o|contracted procedure: k13160 
o|contracted procedure: k13164 
o|contracted procedure: k13262 
o|contracted procedure: k13265 
o|contracted procedure: k13268 
o|contracted procedure: k13276 
o|contracted procedure: k13284 
o|contracted procedure: k13328 
o|contracted procedure: k13341 
o|contracted procedure: k13356 
o|contracted procedure: k13362 
o|contracted procedure: k13395 
o|contracted procedure: k13391 
o|contracted procedure: k13387 
o|contracted procedure: k13375 
o|contracted procedure: k13383 
o|contracted procedure: k13379 
o|contracted procedure: k13419 
o|contracted procedure: k13429 
o|contracted procedure: k13477 
o|contracted procedure: k13437 
o|contracted procedure: k13441 
o|contracted procedure: k13458 
o|contracted procedure: k13454 
o|contracted procedure: k13444 
o|contracted procedure: k13461 
o|contracted procedure: k13467 
o|contracted procedure: k13485 
o|contracted procedure: k13488 
o|contracted procedure: k13499 
o|contracted procedure: k13503 
o|contracted procedure: k13513 
o|contracted procedure: k13523 
o|contracted procedure: k13532 
o|contracted procedure: k13665 
o|contracted procedure: k13545 
o|contracted procedure: k13551 
o|contracted procedure: k13561 
o|contracted procedure: k13564 
o|contracted procedure: k13573 
o|contracted procedure: k13586 
o|contracted procedure: k13599 
o|contracted procedure: k13635 
o|contracted procedure: k13605 
o|contracted procedure: k13611 
o|contracted procedure: k13624 
o|contracted procedure: k13641 
o|contracted procedure: k13652 
o|contracted procedure: k13677 
o|contracted procedure: k13684 
o|contracted procedure: k13692 
o|contracted procedure: k13704 
o|contracted procedure: k13726 
o|contracted procedure: k13722 
o|contracted procedure: k13707 
o|contracted procedure: k13710 
o|contracted procedure: k13718 
o|contracted procedure: k13796 
o|contracted procedure: k13735 
o|contracted procedure: k13741 
o|contracted procedure: k13792 
o|contracted procedure: k13748 
o|contracted procedure: k13754 
o|contracted procedure: k13760 
o|contracted procedure: k13767 
o|contracted procedure: k13813 
o|contracted procedure: k13831 
o|contracted procedure: k13823 
o|contracted procedure: k13845 
o|contracted procedure: k13874 
o|contracted procedure: k13880 
o|contracted procedure: k13889 
o|contracted procedure: k13902 
o|contracted procedure: k13905 
o|contracted procedure: k13917 
o|contracted procedure: k13920 
o|contracted procedure: k13923 
o|contracted procedure: k13931 
o|contracted procedure: k13939 
o|simplifications: ((if . 6) (let . 288)) 
o|replaced variables: 9 
o|removed binding forms: 913 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest885888 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest885888 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest10031005 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest10031005 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest10341036 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest10341036 0 
o|contracted procedure: k6142 
o|inlining procedure: k6927 
o|inlining procedure: k6927 
o|inlining procedure: k8127 
o|inlining procedure: k8271 
o|inlining procedure: k8271 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest18651869 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest18651869 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest18651869 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest18651869 0 
o|inlining procedure: k9256 
o|inlining procedure: k11255 
o|contracted procedure: k12737 
o|inlining procedure: k13071 
o|inlining procedure: k13071 
o|inlining procedure: k13071 
o|inlining procedure: k13433 
o|inlining procedure: k13433 
o|removed binding forms: 16 
o|substituted constant variable: r925715644 
o|substituted constant variable: r925715644 
o|substituted constant variable: r1125615658 
o|removed binding forms: 5 
o|removed conditional forms: 1 
o|removed binding forms: 2 
o|direct leaf routine/allocation: chicken.syntax#lookup 0 
o|direct leaf routine/allocation: g10231024 0 
o|direct leaf routine/allocation: loop1252 0 
o|direct leaf routine/allocation: g17671768 0 
o|direct leaf routine/allocation: g18561857 0 
o|direct leaf routine/allocation: loop1895 0 
o|direct leaf routine/allocation: loop1912 0 
o|direct leaf routine/allocation: g20632064 0 
o|direct leaf routine/allocation: g20722073 0 
o|direct leaf routine/allocation: assq-reverse1990 0 
o|direct leaf routine/allocation: loop3081 0 
o|direct leaf routine/allocation: g28402849 15 
o|contracted procedure: "(expand.scm:101) k5589" 
o|contracted procedure: "(expand.scm:167) k5987" 
o|contracted procedure: "(expand.scm:179) k6026" 
o|contracted procedure: "(expand.scm:181) k6035" 
o|contracted procedure: "(expand.scm:263) k6365" 
o|contracted procedure: "(expand.scm:265) k6582" 
o|converted assignments to bindings: (loop1252) 
o|contracted procedure: "(expand.scm:465) k7523" 
o|converted assignments to bindings: (loop1895) 
o|converted assignments to bindings: (loop1912) 
o|contracted procedure: "(expand.scm:804) k9256" 
o|contracted procedure: "(expand.scm:882) k9696" 
o|contracted procedure: "(expand.scm:882) k9702" 
o|contracted procedure: "(expand.scm:902) k9802" 
o|contracted procedure: "(expand.scm:903) k9805" 
o|converted assignments to bindings: (loop3081) 
o|contracted procedure: "(expand.scm:1462) k12118" 
o|simplifications: ((if . 1) (let . 4)) 
o|removed binding forms: 13 
o|direct leaf routine/allocation: comp1500 0 
o|contracted procedure: "(expand.scm:493) k7650" 
o|contracted procedure: "(expand.scm:509) k7713" 
o|contracted procedure: "(expand.scm:505) k7773" 
o|contracted procedure: "(expand.scm:487) k7805" 
o|contracted procedure: "(expand.scm:488) k7811" 
o|contracted procedure: "(expand.scm:489) k7817" 
o|contracted procedure: "(expand.scm:490) k7823" 
o|contracted procedure: "(expand.scm:575) k8236" 
o|contracted procedure: "(expand.scm:602) k8373" 
o|contracted procedure: "(expand.scm:605) k8385" 
o|contracted procedure: "(expand.scm:609) k8417" 
o|simplifications: ((if . 2)) 
o|removed binding forms: 11 
o|customizable procedures: (g22652274 map-loop22592311 expand2362 map-loop23702388 test2333 err2332 k13350 k13447 g24872496 map-loop24812508 loop2578 expand2706 map-loop28342855 k12036 expand2803 expand2877 map-loop28992917 k11725 k11778 map-loop29332951 g30283029 g30213022 walk2965 walk12966 simplify2967 k11310 loop3342 k10918 k10871 doloop32913292 k10508 k10301 map-loop31573174 loop3070 chicken.syntax#make-er/ir-transformer mirror-rename1991 k9617 k9625 doloop20222023 inherit-pair-line-numbers1972 k9050 test1880 k9074 walk1922 doloop19371938 err1881 loop1801 loop1814 loop1831 outstr1812 loop1778 mwalk1754 k8221 fini/syntax1502 loop21724 loop1708 k8123 loop1664 map-loop16771694 fini1501 foldl15921596 map-loop15691608 k7908 map-loop16171644 k7644 loop21524 k7695 expand1503 loop1521 map-loop14091426 map-loop14381462 k7049 k7225 k7138 k7099 chicken.syntax#macro-alias k7062 loop1285 err1274 g13071316 map-loop13011329 k6764 k6776 loop1239 k6371 k6526 g12041205 loop1117 expand1062 map-loop11441162 map-loop11711188 call-handler1061 k6176 copy1080 loop1050 map-loop896913 for-each-loop922949 map-loop959980 doloop874875 walk844) 
o|calls to known targets: 331 
o|identified direct recursive calls: f_5810 1 
o|identified direct recursive calls: f_5858 1 
o|unused rest argument: rest885888 f_5764 
o|unused rest argument: rest10031005 f_5955 
o|unused rest argument: rest10341036 f_6021 
o|identified direct recursive calls: f_6072 1 
o|identified direct recursive calls: f_6421 1 
o|identified direct recursive calls: f_6490 1 
o|identified direct recursive calls: f_6676 3 
o|identified direct recursive calls: f_6748 2 
o|identified direct recursive calls: f_7402 1 
o|identified direct recursive calls: f_7965 1 
o|identified direct recursive calls: f_8078 1 
o|identified direct recursive calls: f_8051 1 
o|identified direct recursive calls: f_8515 1 
o|identified direct recursive calls: f_8597 1 
o|identified direct recursive calls: f_8676 1 
o|identified direct recursive calls: f_8986 1 
o|identified direct recursive calls: f_9031 1 
o|identified direct recursive calls: f_9057 1 
o|identified direct recursive calls: f_9422 1 
o|identified direct recursive calls: f_9508 1 
o|identified direct recursive calls: f_9727 1 
o|identified direct recursive calls: f_9752 1 
o|identified direct recursive calls: f_10035 1 
o|identified direct recursive calls: f_10071 1 
o|identified direct recursive calls: f_10899 1 
o|identified direct recursive calls: f_11820 1 
o|identified direct recursive calls: f_11872 1 
o|identified direct recursive calls: f_12095 1 
o|identified direct recursive calls: f_13699 1 
o|fast box initializations: 67 
o|fast global references: 21 
o|fast global assignments: 5 
o|dropping unused closure argument: f_5558 
o|dropping unused closure argument: f_5575 
o|dropping unused closure argument: f_6676 
o|dropping unused closure argument: f_8986 
o|dropping unused closure argument: f_9031 
o|dropping unused closure argument: f_9364 
o|dropping unused closure argument: f_9373 
o|dropping unused closure argument: f_9727 
*/
/* end of file */
