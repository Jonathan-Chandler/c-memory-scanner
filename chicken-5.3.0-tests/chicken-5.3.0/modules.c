/* Generated from modules.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.3.0rc4 ((HEAD detached at 5.3.0rc4)) (rev b6cbb1ba)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: modules.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file modules.c
   unit: modules
   uses: chicken-syntax extras data-structures expand internal library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_expand_toplevel)
C_externimport void C_ccall C_expand_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_internal_toplevel)
C_externimport void C_ccall C_internal_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[270];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,108,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,19),40,100,101,108,101,116,101,32,120,32,108,115,116,32,116,101,115,116,41,0,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,6),40,103,51,52,57,41,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,10),40,103,51,51,57,32,120,32,114,41,0,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,15),40,102,111,108,100,114,51,51,52,32,103,51,51,53,41,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,21),40,102,105,108,116,101,114,45,109,97,112,32,112,114,101,100,32,108,115,116,41,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,15),40,109,111,100,117,108,101,45,110,97,109,101,32,120,41,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,25),40,109,111,100,117,108,101,45,117,110,100,101,102,105,110,101,100,45,108,105,115,116,32,120,41,0,0,0,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,32),40,115,101,116,45,109,111,100,117,108,101,45,117,110,100,101,102,105,110,101,100,45,108,105,115,116,33,32,120,32,121,41};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,24),40,35,35,115,121,115,35,109,111,100,117,108,101,45,101,120,112,111,114,116,115,32,109,41};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,40),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,109,111,100,117,108,101,45,97,108,105,97,115,32,97,108,105,97,115,32,110,97,109,101,41};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,7),40,97,53,56,52,49,41,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,7),40,97,53,56,53,56,41,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,7),40,97,53,56,54,52,41,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,57,50,52,32,103,57,51,54,41,0,0,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,42),40,35,35,115,121,115,35,119,105,116,104,45,109,111,100,117,108,101,45,97,108,105,97,115,101,115,32,98,105,110,100,105,110,103,115,32,116,104,117,110,107,41,0,0,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,8),40,103,57,54,56,32,97,41};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,110,32,100,111,110,101,41,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,36),40,35,35,115,121,115,35,114,101,115,111,108,118,101,45,109,111,100,117,108,101,45,110,97,109,101,32,110,97,109,101,32,108,111,99,41,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,31),40,35,35,115,121,115,35,102,105,110,100,45,109,111,100,117,108,101,32,110,97,109,101,32,46,32,114,101,115,116,41,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,9),40,103,49,48,48,54,32,109,41,0,0,0,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,25),40,35,35,115,121,115,35,115,119,105,116,99,104,45,109,111,100,117,108,101,32,109,111,100,41,0,0,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,7),40,103,49,48,51,57,41,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,7),40,103,49,48,50,51,41,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,48,50,50,32,103,49,48,50,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,35),40,35,35,115,121,115,35,97,100,100,45,116,111,45,101,120,112,111,114,116,45,108,105,115,116,32,109,111,100,32,101,120,112,115,41,0,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,54),40,35,35,115,121,115,35,116,111,112,108,101,118,101,108,45,100,101,102,105,110,105,116,105,111,110,45,104,111,111,107,32,115,121,109,32,114,101,110,97,109,101,100,32,101,120,112,111,114,116,101,100,63,41,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,36),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,109,101,116,97,45,101,120,112,114,101,115,115,105,111,110,32,101,120,112,41,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,30),40,99,104,101,99,107,45,102,111,114,45,114,101,100,101,102,32,115,121,109,32,101,110,118,32,115,101,110,118,41,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,31),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,101,120,112,111,114,116,32,115,121,109,32,109,111,100,41,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,42),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,115,121,110,116,97,120,45,101,120,112,111,114,116,32,115,121,109,32,109,111,100,32,118,97,108,41,0,0,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,11),40,97,54,52,48,57,32,120,32,121,41,0,0,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,40),40,35,35,115,121,115,35,117,110,114,101,103,105,115,116,101,114,45,115,121,110,116,97,120,45,101,120,112,111,114,116,32,115,121,109,32,109,111,100,41};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,47),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,109,111,100,117,108,101,32,110,97,109,101,32,108,105,98,32,101,120,112,108,105,115,116,32,46,32,114,101,115,116,41,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,9),40,103,49,50,49,49,32,101,41,0,0,0,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,50,49,48,32,103,49,50,49,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,11),40,108,112,32,115,101,32,115,101,50,41,0,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,22),40,108,111,111,112,32,115,101,115,32,108,97,115,116,45,115,101,32,115,101,50,41,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,15),40,109,101,114,103,101,45,115,101,32,115,101,115,42,41,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,15),40,103,49,51,52,51,32,115,101,120,112,111,114,116,41,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,9),40,108,111,111,112,32,115,100,41,0,0,0,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,51,51,55,32,103,49,51,52,57,41,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,51,48,52,32,103,49,51,49,54,41,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,50,52,54,32,103,49,50,53,56,41,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,108,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,7),40,97,55,48,49,49,41,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,13),40,97,55,48,49,55,32,46,32,116,109,112,41,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,9),40,97,55,48,48,53,32,120,41,0,0,0,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,53),40,35,35,115,121,115,35,99,111,109,112,105,108,101,100,45,109,111,100,117,108,101,45,114,101,103,105,115,116,114,97,116,105,111,110,32,109,111,100,32,99,111,109,112,105,108,101,45,109,111,100,101,41,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,12),40,103,49,52,53,48,32,115,101,120,112,41,0,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,12),40,103,49,52,54,48,32,110,101,120,112,41,0,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,52,53,57,32,103,49,52,54,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,52,52,57,32,103,49,52,53,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,52,49,55,32,103,49,52,50,57,41,0,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,10),40,97,55,55,49,55,32,115,101,41,0,0,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,10),40,97,55,55,50,57,32,115,101,41,0,0,0,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,75),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,99,111,109,112,105,108,101,100,45,109,111,100,117,108,101,32,110,97,109,101,32,108,105,98,32,105,101,120,112,111,114,116,115,32,118,101,120,112,111,114,116,115,32,115,101,120,112,111,114,116,115,32,46,32,114,101,115,116,41,0,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,10),40,103,49,53,49,56,32,115,101,41,0,0,0,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,53,49,50,32,103,49,53,50,52,41,0,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,53),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,99,111,114,101,45,109,111,100,117,108,101,32,110,97,109,101,32,108,105,98,32,118,101,120,112,111,114,116,115,32,46,32,114,101,115,116,41,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,54),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,112,114,105,109,105,116,105,118,101,45,109,111,100,117,108,101,32,110,97,109,101,32,118,101,120,112,111,114,116,115,32,46,32,114,101,115,116,41,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,30),40,102,105,110,100,45,101,120,112,111,114,116,32,115,121,109,32,109,111,100,32,105,110,100,105,114,101,99,116,41,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,12),40,102,95,56,57,52,57,32,46,32,95,41,0,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,12),40,108,110,45,62,110,117,109,32,108,110,41,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,10),40,103,49,54,57,54,32,108,110,41,0,0,0,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,11),40,103,49,54,54,57,32,108,111,99,41,0,0,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,9),40,103,49,55,55,57,32,97,41,0,0,0,0,0,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,55,55,56,32,103,49,55,56,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,54,54,56,32,103,49,54,55,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,15),40,103,49,54,48,49,32,105,100,46,108,111,99,115,41,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,54,48,48,32,103,49,54,48,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,9),40,108,112,32,108,111,99,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,54,51,54,32,103,49,54,52,56,41,0,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,40),40,114,101,112,111,114,116,45,117,110,114,101,115,111,108,118,101,100,45,105,100,101,110,116,105,102,105,101,114,115,32,117,110,107,110,111,119,110,115,41};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,7),40,103,49,56,57,48,41,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,9),40,103,49,57,52,53,32,109,41,0,0,0,0,0,0,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,57,52,52,32,103,49,57,53,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,57,48,57,32,103,49,57,50,49,41,0,0,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,13),40,119,97,114,110,32,109,115,103,32,105,100,41,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,9),40,103,49,49,55,51,32,97,41,0,0,0,0,0,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,9),40,103,49,49,56,48,32,97,41,0,0,0,0,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,50,32,105,101,120,112,111,114,116,115,41};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,101,120,112,111,114,116,115,41,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,56,56,57,32,103,49,56,57,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,10),40,102,97,105,108,32,109,115,103,41,0,0,0,0,0,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,11),40,105,100,45,115,116,114,105,110,103,41,0,0,0,0,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,12),40,103,49,56,56,48,32,116,121,112,101,41,0,0,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,9),40,108,111,111,112,32,120,108,41,0,0,0,0,0,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,9),40,108,111,111,112,32,109,101,41,0,0,0,0,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,56,50,49,32,103,49,56,51,51,41,0,0,0,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,34),40,35,35,115,121,115,35,102,105,110,97,108,105,122,101,45,109,111,100,117,108,101,32,109,111,100,32,46,32,114,101,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,7),40,97,56,57,54,55,41,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,7),40,97,57,48,50,51,41,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,7),40,97,57,48,50,57,41,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,30),40,35,35,115,121,115,35,119,105,116,104,45,101,110,118,105,114,111,110,109,101,110,116,32,116,104,117,110,107,41,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,7),40,97,57,48,55,56,41,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,7),40,97,57,48,56,51,41,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,7),40,97,57,48,57,50,41,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,7),40,97,57,48,55,50,41,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,33),40,35,35,115,121,115,35,105,109,112,111,114,116,45,108,105,98,114,97,114,121,45,104,111,111,107,32,109,110,97,109,101,41,0,0,0,0,0,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,36),40,102,105,110,100,45,109,111,100,117,108,101,47,105,109,112,111,114,116,45,108,105,98,114,97,114,121,32,108,105,98,32,108,111,99,41,0,0,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,17),40,119,97,114,110,32,109,115,103,32,109,111,100,32,105,100,41,0,0,0,0,0,0,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,9),40,116,111,115,116,114,32,120,41,0,0,0,0,0,0,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,21),40,109,111,100,117,108,101,45,105,109,112,111,114,116,115,32,110,97,109,101,41,0,0,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,7),40,97,57,50,56,56,41,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,10),40,103,50,49,51,50,32,105,100,41,0,0,0,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,49,51,49,32,103,50,49,51,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,9),40,103,50,49,53,50,32,97,41,0,0,0,0,0,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,9),40,103,50,49,53,54,32,97,41,0,0,0,0,0,0,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,22),40,108,111,111,112,32,105,100,115,32,118,32,115,32,109,105,115,115,105,110,103,41,0,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,60),40,97,57,50,57,56,32,110,97,109,101,50,48,57,51,32,108,105,98,50,48,57,53,32,115,112,101,99,50,48,57,55,32,105,109,112,118,50,48,57,57,32,105,109,112,115,50,49,48,49,32,105,109,112,105,50,49,48,51,41,0,0,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,7),40,97,57,52,51,56,41,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,10),40,103,50,50,49,48,32,105,100,41,0,0,0,0,0,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,50,48,57,32,103,50,50,49,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,10),40,103,50,50,51,48,32,105,100,41,0,0,0,0,0,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,105,109,112,115,32,115,32,105,100,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,10),40,103,50,50,51,53,32,105,100,41,0,0,0,0,0,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,105,109,112,118,32,118,32,105,100,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,60),40,97,57,52,52,56,32,110,97,109,101,50,49,54,51,32,108,105,98,50,49,54,53,32,115,112,101,99,50,49,54,55,32,105,109,112,118,50,49,54,57,32,105,109,112,115,50,49,55,49,32,105,109,112,105,50,49,55,51,41,0,0,0,0};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,7),40,97,57,54,50,49,41,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,10),40,103,50,50,56,57,32,105,100,41,0,0,0,0,0,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,50,56,56,32,103,50,50,57,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,51,48,49,32,103,50,51,49,51,41,0,0,0,0};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,9),40,103,50,51,51,53,32,97,41,0,0,0,0,0,0,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,105,109,112,115,32,115,32,105,100,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,9),40,103,50,51,52,48,32,97,41,0,0,0,0,0,0,0};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,105,109,112,118,32,118,32,105,100,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,60),40,97,57,54,51,49,32,110,97,109,101,50,50,52,50,32,108,105,98,50,50,52,52,32,115,112,101,99,50,50,52,54,32,105,109,112,118,50,50,52,56,32,105,109,112,115,50,50,53,48,32,105,109,112,105,50,50,53,50,41,0,0,0,0};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,7),40,97,57,56,55,49,41,0};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,12),40,114,101,110,97,109,101,32,105,109,112,41,0,0,0,0};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,52,48,54,32,103,50,52,49,56,41,0,0,0,0};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,51,56,48,32,103,50,51,57,50,41,0,0,0,0};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,60),40,97,57,56,56,49,32,110,97,109,101,50,51,52,55,32,108,105,98,50,51,52,57,32,115,112,101,99,50,51,53,49,32,105,109,112,118,50,51,53,51,32,105,109,112,115,50,51,53,53,32,105,109,112,105,50,51,53,55,41,0,0,0,0};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,120,41};
static C_char C_TLS li135[] C_aligned={C_lihdr(0,0,9),40,97,57,49,57,55,32,107,41,0,0,0,0,0,0,0};
static C_char C_TLS li136[] C_aligned={C_lihdr(0,0,34),40,35,35,115,121,115,35,100,101,99,111,109,112,111,115,101,45,105,109,112,111,114,116,32,120,32,114,32,99,32,108,111,99,41,0,0,0,0,0,0};
static C_char C_TLS li137[] C_aligned={C_lihdr(0,0,8),40,97,49,48,48,51,54,41};
static C_char C_TLS li138[] C_aligned={C_lihdr(0,0,50),40,97,49,48,48,52,50,32,110,97,109,101,50,52,53,56,32,95,50,52,54,48,32,115,112,101,99,50,52,54,50,32,118,50,52,54,52,32,115,50,52,54,54,32,105,50,52,54,56,41,0,0,0,0,0,0};
static C_char C_TLS li139[] C_aligned={C_lihdr(0,0,9),40,103,50,52,52,56,32,120,41,0,0,0,0,0,0,0};
static C_char C_TLS li140[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,52,52,55,32,103,50,52,53,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li141[] C_aligned={C_lihdr(0,0,65),40,35,35,115,121,115,35,101,120,112,97,110,100,45,105,109,112,111,114,116,32,120,32,114,32,99,32,105,109,112,111,114,116,45,101,110,118,32,109,97,99,114,111,45,101,110,118,32,109,101,116,97,63,32,114,101,101,120,112,63,32,108,111,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li142[] C_aligned={C_lihdr(0,0,11),40,103,50,53,48,57,32,105,109,112,41,0,0,0,0,0};
static C_char C_TLS li143[] C_aligned={C_lihdr(0,0,11),40,103,50,53,49,57,32,105,109,112,41,0,0,0,0,0};
static C_char C_TLS li144[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,53,56,55,32,103,50,53,57,57,41,0,0,0,0};
static C_char C_TLS li145[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,53,54,49,32,103,50,53,55,51,41,0,0,0,0};
static C_char C_TLS li146[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,54,52,49,32,103,50,54,53,51,41,0,0,0,0};
static C_char C_TLS li147[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,54,49,53,32,103,50,54,50,55,41,0,0,0,0};
static C_char C_TLS li148[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,53,49,56,32,103,50,53,50,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li149[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,53,48,56,32,103,50,53,49,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li150[] C_aligned={C_lihdr(0,0,69),40,35,35,115,121,115,35,105,109,112,111,114,116,32,115,112,101,99,32,118,115,118,32,118,115,115,32,118,115,105,32,105,109,112,111,114,116,45,101,110,118,32,109,97,99,114,111,45,101,110,118,32,109,101,116,97,63,32,114,101,101,120,112,63,32,108,111,99,41,0,0,0};
static C_char C_TLS li151[] C_aligned={C_lihdr(0,0,26),40,109,111,100,117,108,101,45,114,101,110,97,109,101,32,115,121,109,32,112,114,101,102,105,120,41,0,0,0,0,0,0};
static C_char C_TLS li152[] C_aligned={C_lihdr(0,0,9),40,103,49,49,49,53,32,97,41,0,0,0,0,0,0,0};
static C_char C_TLS li153[] C_aligned={C_lihdr(0,0,11),40,103,50,54,57,56,32,109,111,100,41,0,0,0,0,0};
static C_char C_TLS li154[] C_aligned={C_lihdr(0,0,13),40,109,114,101,110,97,109,101,32,115,121,109,41,0,0,0};
static C_char C_TLS li155[] C_aligned={C_lihdr(0,0,9),40,103,50,55,48,57,32,97,41,0,0,0,0,0,0,0};
static C_char C_TLS li156[] C_aligned={C_lihdr(0,0,42),40,35,35,115,121,115,35,97,108,105,97,115,45,103,108,111,98,97,108,45,104,111,111,107,32,115,121,109,32,97,115,115,105,103,110,32,119,104,101,114,101,41,0,0,0,0,0,0};
static C_char C_TLS li157[] C_aligned={C_lihdr(0,0,10),40,101,114,114,32,97,114,103,115,41,0,0,0,0,0,0};
static C_char C_TLS li158[] C_aligned={C_lihdr(0,0,12),40,105,102,97,99,101,32,110,97,109,101,41,0,0,0,0};
static C_char C_TLS li159[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,50,32,108,115,116,41,0,0,0,0,0};
static C_char C_TLS li160[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,120,112,115,41,0,0,0,0,0,0};
static C_char C_TLS li161[] C_aligned={C_lihdr(0,0,33),40,35,35,115,121,115,35,118,97,108,105,100,97,116,101,45,101,120,112,111,114,116,115,32,101,120,112,115,32,108,111,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li162[] C_aligned={C_lihdr(0,0,46),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,102,117,110,99,116,111,114,32,110,97,109,101,32,102,97,114,103,115,32,102,101,120,112,115,32,98,111,100,121,41,0,0};
static C_char C_TLS li163[] C_aligned={C_lihdr(0,0,10),40,101,114,114,32,97,114,103,115,41,0,0,0,0,0,0};
static C_char C_TLS li164[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,55,56,55,32,103,50,55,57,57,41,0,0,0,0};
static C_char C_TLS li165[] C_aligned={C_lihdr(0,0,6),40,109,101,114,114,41,0,0};
static C_char C_TLS li166[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,50,32,102,97,115,41,0,0,0,0,0};
static C_char C_TLS li167[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,97,115,32,102,97,115,41,0,0,0};
static C_char C_TLS li168[] C_aligned={C_lihdr(0,0,43),40,35,35,115,121,115,35,105,110,115,116,97,110,116,105,97,116,101,45,102,117,110,99,116,111,114,32,110,97,109,101,32,102,110,97,109,101,32,97,114,103,115,41,0,0,0,0,0};
static C_char C_TLS li169[] C_aligned={C_lihdr(0,0,11),40,103,50,56,52,56,32,101,120,112,41,0,0,0,0,0};
static C_char C_TLS li170[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,56,54,57,32,103,50,56,56,49,41,0,0,0,0};
static C_char C_TLS li171[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,56,52,55,32,103,50,56,53,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li172[] C_aligned={C_lihdr(0,0,46),40,109,97,116,99,104,45,102,117,110,99,116,111,114,45,97,114,103,117,109,101,110,116,32,110,97,109,101,32,109,110,97,109,101,32,101,120,112,115,32,102,110,97,109,101,41,0,0};
static C_char C_TLS li173[] C_aligned={C_lihdr(0,0,48),40,99,104,105,99,107,101,110,46,109,111,100,117,108,101,35,109,111,100,117,108,101,45,101,110,118,105,114,111,110,109,101,110,116,32,109,110,97,109,101,32,46,32,114,101,115,116,41};
static C_char C_TLS li174[] C_aligned={C_lihdr(0,0,7),40,103,51,51,54,56,41,0};
static C_char C_TLS li175[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,51,51,54,50,32,103,51,51,55,52,41,0,0,0,0};
static C_char C_TLS li176[] C_aligned={C_lihdr(0,0,7),40,103,51,51,51,48,41,0};
static C_char C_TLS li177[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,51,51,50,52,32,103,51,51,51,54,41,0,0,0,0};
static C_char C_TLS li178[] C_aligned={C_lihdr(0,0,7),40,103,51,50,57,50,41,0};
static C_char C_TLS li179[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,51,50,56,54,32,103,51,50,57,56,41,0,0,0,0};
static C_char C_TLS li180[] C_aligned={C_lihdr(0,0,7),40,103,51,50,53,52,41,0};
static C_char C_TLS li181[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,51,50,52,56,32,103,51,50,54,48,41,0,0,0,0};
static C_char C_TLS li182[] C_aligned={C_lihdr(0,0,7),40,103,51,50,49,54,41,0};
static C_char C_TLS li183[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,51,50,49,48,32,103,51,50,50,50,41,0,0,0,0};
static C_char C_TLS li184[] C_aligned={C_lihdr(0,0,7),40,103,51,49,55,56,41,0};
static C_char C_TLS li185[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,51,49,55,50,32,103,51,49,56,52,41,0,0,0,0};
static C_char C_TLS li186[] C_aligned={C_lihdr(0,0,7),40,103,51,49,52,48,41,0};
static C_char C_TLS li187[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,51,49,51,52,32,103,51,49,52,54,41,0,0,0,0};
static C_char C_TLS li188[] C_aligned={C_lihdr(0,0,7),40,103,51,49,48,50,41,0};
static C_char C_TLS li189[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,51,48,57,54,32,103,51,49,48,56,41,0,0,0,0};
static C_char C_TLS li190[] C_aligned={C_lihdr(0,0,7),40,103,51,48,54,52,41,0};
static C_char C_TLS li191[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,51,48,53,56,32,103,51,48,55,48,41,0,0,0,0};
static C_char C_TLS li192[] C_aligned={C_lihdr(0,0,7),40,103,51,48,50,54,41,0};
static C_char C_TLS li193[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,51,48,50,48,32,103,51,48,51,50,41,0,0,0,0};
static C_char C_TLS li194[] C_aligned={C_lihdr(0,0,7),40,103,50,57,56,56,41,0};
static C_char C_TLS li195[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,57,56,50,32,103,50,57,57,52,41,0,0,0,0};
static C_char C_TLS li196[] C_aligned={C_lihdr(0,0,7),40,103,50,57,53,48,41,0};
static C_char C_TLS li197[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,57,52,52,32,103,50,57,53,54,41,0,0,0,0};
static C_char C_TLS li198[] C_aligned={C_lihdr(0,0,7),40,103,50,57,49,50,41,0};
static C_char C_TLS li199[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,57,48,54,32,103,50,57,49,56,41,0,0,0,0};
static C_char C_TLS li200[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f13587)
static void C_ccall f13587(C_word c,C_word *av) C_noret;
C_noret_decl(f13591)
static void C_ccall f13591(C_word c,C_word *av) C_noret;
C_noret_decl(f_10002)
static void C_ccall f_10002(C_word c,C_word *av) C_noret;
C_noret_decl(f_10020)
static void C_ccall f_10020(C_word c,C_word *av) C_noret;
C_noret_decl(f_10026)
static void C_ccall f_10026(C_word c,C_word *av) C_noret;
C_noret_decl(f_10030)
static void C_ccall f_10030(C_word c,C_word *av) C_noret;
C_noret_decl(f_10031)
static void C_fcall f_10031(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10037)
static void C_ccall f_10037(C_word c,C_word *av) C_noret;
C_noret_decl(f_10043)
static void C_ccall f_10043(C_word c,C_word *av) C_noret;
C_noret_decl(f_10065)
static void C_ccall f_10065(C_word c,C_word *av) C_noret;
C_noret_decl(f_10067)
static void C_fcall f_10067(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10077)
static void C_ccall f_10077(C_word c,C_word *av) C_noret;
C_noret_decl(f_10090)
static void C_ccall f_10090(C_word c,C_word *av) C_noret;
C_noret_decl(f_10094)
static void C_ccall f_10094(C_word c,C_word *av) C_noret;
C_noret_decl(f_10097)
static void C_ccall f_10097(C_word c,C_word *av) C_noret;
C_noret_decl(f_10107)
static void C_fcall f_10107(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10145)
static void C_ccall f_10145(C_word c,C_word *av) C_noret;
C_noret_decl(f_10151)
static void C_ccall f_10151(C_word c,C_word *av) C_noret;
C_noret_decl(f_10152)
static void C_fcall f_10152(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10188)
static void C_ccall f_10188(C_word c,C_word *av) C_noret;
C_noret_decl(f_10194)
static void C_ccall f_10194(C_word c,C_word *av) C_noret;
C_noret_decl(f_10197)
static void C_fcall f_10197(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10200)
static void C_ccall f_10200(C_word c,C_word *av) C_noret;
C_noret_decl(f_10207)
static void C_ccall f_10207(C_word c,C_word *av) C_noret;
C_noret_decl(f_10211)
static void C_ccall f_10211(C_word c,C_word *av) C_noret;
C_noret_decl(f_10215)
static void C_ccall f_10215(C_word c,C_word *av) C_noret;
C_noret_decl(f_10219)
static void C_ccall f_10219(C_word c,C_word *av) C_noret;
C_noret_decl(f_10222)
static void C_ccall f_10222(C_word c,C_word *av) C_noret;
C_noret_decl(f_10228)
static void C_ccall f_10228(C_word c,C_word *av) C_noret;
C_noret_decl(f_10231)
static void C_ccall f_10231(C_word c,C_word *av) C_noret;
C_noret_decl(f_10238)
static void C_ccall f_10238(C_word c,C_word *av) C_noret;
C_noret_decl(f_10248)
static void C_ccall f_10248(C_word c,C_word *av) C_noret;
C_noret_decl(f_10255)
static void C_ccall f_10255(C_word c,C_word *av) C_noret;
C_noret_decl(f_10266)
static void C_ccall f_10266(C_word c,C_word *av) C_noret;
C_noret_decl(f_10273)
static void C_ccall f_10273(C_word c,C_word *av) C_noret;
C_noret_decl(f_10275)
static void C_fcall f_10275(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10309)
static void C_fcall f_10309(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10345)
static void C_ccall f_10345(C_word c,C_word *av) C_noret;
C_noret_decl(f_10356)
static void C_ccall f_10356(C_word c,C_word *av) C_noret;
C_noret_decl(f_10370)
static void C_ccall f_10370(C_word c,C_word *av) C_noret;
C_noret_decl(f_10377)
static void C_ccall f_10377(C_word c,C_word *av) C_noret;
C_noret_decl(f_10379)
static void C_fcall f_10379(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10413)
static void C_fcall f_10413(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10453)
static void C_fcall f_10453(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10463)
static void C_ccall f_10463(C_word c,C_word *av) C_noret;
C_noret_decl(f_10476)
static void C_fcall f_10476(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10486)
static void C_ccall f_10486(C_word c,C_word *av) C_noret;
C_noret_decl(f_10507)
static void C_ccall f_10507(C_word c,C_word *av) C_noret;
C_noret_decl(f_10522)
static void C_ccall f_10522(C_word c,C_word *av) C_noret;
C_noret_decl(f_10532)
static void C_fcall f_10532(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10540)
static void C_ccall f_10540(C_word c,C_word *av) C_noret;
C_noret_decl(f_10550)
static void C_ccall f_10550(C_word c,C_word *av) C_noret;
C_noret_decl(f_10553)
static void C_fcall f_10553(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10557)
static void C_ccall f_10557(C_word c,C_word *av) C_noret;
C_noret_decl(f_10561)
static void C_fcall f_10561(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10568)
static void C_ccall f_10568(C_word c,C_word *av) C_noret;
C_noret_decl(f_10596)
static void C_fcall f_10596(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10622)
static void C_ccall f_10622(C_word c,C_word *av) C_noret;
C_noret_decl(f_10624)
static void C_ccall f_10624(C_word c,C_word *av) C_noret;
C_noret_decl(f_10627)
static void C_fcall f_10627(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10633)
static void C_fcall f_10633(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10674)
static void C_fcall f_10674(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10706)
static void C_ccall f_10706(C_word c,C_word *av) C_noret;
C_noret_decl(f_10732)
static void C_ccall f_10732(C_word c,C_word *av) C_noret;
C_noret_decl(f_10753)
static void C_ccall f_10753(C_word c,C_word *av) C_noret;
C_noret_decl(f_10757)
static void C_ccall f_10757(C_word c,C_word *av) C_noret;
C_noret_decl(f_10783)
static void C_fcall f_10783(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10797)
static void C_ccall f_10797(C_word c,C_word *av) C_noret;
C_noret_decl(f_10839)
static void C_ccall f_10839(C_word c,C_word *av) C_noret;
C_noret_decl(f_10855)
static void C_ccall f_10855(C_word c,C_word *av) C_noret;
C_noret_decl(f_10863)
static void C_fcall f_10863(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10870)
static void C_ccall f_10870(C_word c,C_word *av) C_noret;
C_noret_decl(f_10880)
static void C_fcall f_10880(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10902)
static void C_ccall f_10902(C_word c,C_word *av) C_noret;
C_noret_decl(f_10904)
static void C_fcall f_10904(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10943)
static void C_ccall f_10943(C_word c,C_word *av) C_noret;
C_noret_decl(f_10964)
static void C_fcall f_10964(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10976)
static void C_fcall f_10976(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10999)
static void C_ccall f_10999(C_word c,C_word *av) C_noret;
C_noret_decl(f_11002)
static void C_ccall f_11002(C_word c,C_word *av) C_noret;
C_noret_decl(f_11013)
static void C_ccall f_11013(C_word c,C_word *av) C_noret;
C_noret_decl(f_11019)
static void C_ccall f_11019(C_word c,C_word *av) C_noret;
C_noret_decl(f_11051)
static void C_ccall f_11051(C_word c,C_word *av) C_noret;
C_noret_decl(f_11054)
static void C_ccall f_11054(C_word c,C_word *av) C_noret;
C_noret_decl(f_11065)
static void C_ccall f_11065(C_word c,C_word *av) C_noret;
C_noret_decl(f_11081)
static void C_fcall f_11081(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_11085)
static void C_ccall f_11085(C_word c,C_word *av) C_noret;
C_noret_decl(f_11092)
static void C_fcall f_11092(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11105)
static void C_fcall f_11105(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11132)
static void C_ccall f_11132(C_word c,C_word *av) C_noret;
C_noret_decl(f_11145)
static void C_ccall f_11145(C_word c,C_word *av) C_noret;
C_noret_decl(f_11149)
static void C_ccall f_11149(C_word c,C_word *av) C_noret;
C_noret_decl(f_11153)
static void C_ccall f_11153(C_word c,C_word *av) C_noret;
C_noret_decl(f_11157)
static void C_ccall f_11157(C_word c,C_word *av) C_noret;
C_noret_decl(f_11171)
static void C_ccall f_11171(C_word c,C_word *av) C_noret;
C_noret_decl(f_11177)
static void C_ccall f_11177(C_word c,C_word *av) C_noret;
C_noret_decl(f_11179)
static void C_fcall f_11179(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11204)
static void C_ccall f_11204(C_word c,C_word *av) C_noret;
C_noret_decl(f_11213)
static void C_fcall f_11213(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11223)
static void C_ccall f_11223(C_word c,C_word *av) C_noret;
C_noret_decl(f_11238)
static void C_ccall f_11238(C_word c,C_word *av) C_noret;
C_noret_decl(f_11241)
static void C_ccall f_11241(C_word c,C_word *av) C_noret;
C_noret_decl(f_11244)
static void C_ccall f_11244(C_word c,C_word *av) C_noret;
C_noret_decl(f_11247)
static void C_ccall f_11247(C_word c,C_word *av) C_noret;
C_noret_decl(f_11250)
static void C_ccall f_11250(C_word c,C_word *av) C_noret;
C_noret_decl(f_11253)
static void C_ccall f_11253(C_word c,C_word *av) C_noret;
C_noret_decl(f_11256)
static void C_ccall f_11256(C_word c,C_word *av) C_noret;
C_noret_decl(f_11259)
static void C_ccall f_11259(C_word c,C_word *av) C_noret;
C_noret_decl(f_11262)
static void C_ccall f_11262(C_word c,C_word *av) C_noret;
C_noret_decl(f_11265)
static void C_ccall f_11265(C_word c,C_word *av) C_noret;
C_noret_decl(f_11268)
static void C_ccall f_11268(C_word c,C_word *av) C_noret;
C_noret_decl(f_11271)
static void C_ccall f_11271(C_word c,C_word *av) C_noret;
C_noret_decl(f_11274)
static void C_ccall f_11274(C_word c,C_word *av) C_noret;
C_noret_decl(f_11277)
static void C_ccall f_11277(C_word c,C_word *av) C_noret;
C_noret_decl(f_11280)
static void C_ccall f_11280(C_word c,C_word *av) C_noret;
C_noret_decl(f_11283)
static void C_ccall f_11283(C_word c,C_word *av) C_noret;
C_noret_decl(f_11286)
static void C_ccall f_11286(C_word c,C_word *av) C_noret;
C_noret_decl(f_11289)
static void C_ccall f_11289(C_word c,C_word *av) C_noret;
C_noret_decl(f_11292)
static void C_ccall f_11292(C_word c,C_word *av) C_noret;
C_noret_decl(f_11295)
static void C_ccall f_11295(C_word c,C_word *av) C_noret;
C_noret_decl(f_11298)
static void C_ccall f_11298(C_word c,C_word *av) C_noret;
C_noret_decl(f_11301)
static void C_ccall f_11301(C_word c,C_word *av) C_noret;
C_noret_decl(f_11304)
static void C_ccall f_11304(C_word c,C_word *av) C_noret;
C_noret_decl(f_11307)
static void C_ccall f_11307(C_word c,C_word *av) C_noret;
C_noret_decl(f_11310)
static void C_ccall f_11310(C_word c,C_word *av) C_noret;
C_noret_decl(f_11313)
static void C_ccall f_11313(C_word c,C_word *av) C_noret;
C_noret_decl(f_11316)
static void C_ccall f_11316(C_word c,C_word *av) C_noret;
C_noret_decl(f_11319)
static void C_ccall f_11319(C_word c,C_word *av) C_noret;
C_noret_decl(f_11322)
static void C_ccall f_11322(C_word c,C_word *av) C_noret;
C_noret_decl(f_11324)
static void C_ccall f_11324(C_word c,C_word *av) C_noret;
C_noret_decl(f_11331)
static void C_ccall f_11331(C_word c,C_word *av) C_noret;
C_noret_decl(f_11360)
static void C_ccall f_11360(C_word c,C_word *av) C_noret;
C_noret_decl(f_11363)
static void C_ccall f_11363(C_word c,C_word *av) C_noret;
C_noret_decl(f_11370)
static C_word C_fcall f_11370(C_word t0,C_word t1);
C_noret_decl(f_11382)
static void C_fcall f_11382(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11417)
static void C_ccall f_11417(C_word c,C_word *av) C_noret;
C_noret_decl(f_11424)
static C_word C_fcall f_11424(C_word t0,C_word t1);
C_noret_decl(f_11436)
static void C_fcall f_11436(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11471)
static void C_ccall f_11471(C_word c,C_word *av) C_noret;
C_noret_decl(f_11478)
static C_word C_fcall f_11478(C_word t0,C_word t1);
C_noret_decl(f_11490)
static void C_fcall f_11490(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11525)
static void C_ccall f_11525(C_word c,C_word *av) C_noret;
C_noret_decl(f_11532)
static C_word C_fcall f_11532(C_word t0,C_word t1);
C_noret_decl(f_11544)
static void C_fcall f_11544(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11579)
static void C_ccall f_11579(C_word c,C_word *av) C_noret;
C_noret_decl(f_11586)
static C_word C_fcall f_11586(C_word t0,C_word t1);
C_noret_decl(f_11598)
static void C_fcall f_11598(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11633)
static void C_ccall f_11633(C_word c,C_word *av) C_noret;
C_noret_decl(f_11640)
static C_word C_fcall f_11640(C_word t0,C_word t1);
C_noret_decl(f_11652)
static void C_fcall f_11652(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11687)
static void C_ccall f_11687(C_word c,C_word *av) C_noret;
C_noret_decl(f_11694)
static C_word C_fcall f_11694(C_word t0,C_word t1);
C_noret_decl(f_11706)
static void C_fcall f_11706(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11741)
static void C_ccall f_11741(C_word c,C_word *av) C_noret;
C_noret_decl(f_11748)
static C_word C_fcall f_11748(C_word t0,C_word t1);
C_noret_decl(f_11760)
static void C_fcall f_11760(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11795)
static void C_ccall f_11795(C_word c,C_word *av) C_noret;
C_noret_decl(f_11802)
static C_word C_fcall f_11802(C_word t0,C_word t1);
C_noret_decl(f_11814)
static void C_fcall f_11814(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11849)
static void C_ccall f_11849(C_word c,C_word *av) C_noret;
C_noret_decl(f_11856)
static C_word C_fcall f_11856(C_word t0,C_word t1);
C_noret_decl(f_11868)
static void C_fcall f_11868(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11903)
static void C_ccall f_11903(C_word c,C_word *av) C_noret;
C_noret_decl(f_11910)
static C_word C_fcall f_11910(C_word t0,C_word t1);
C_noret_decl(f_11922)
static void C_fcall f_11922(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11957)
static void C_ccall f_11957(C_word c,C_word *av) C_noret;
C_noret_decl(f_11964)
static C_word C_fcall f_11964(C_word t0,C_word t1);
C_noret_decl(f_11976)
static void C_fcall f_11976(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12011)
static void C_ccall f_12011(C_word c,C_word *av) C_noret;
C_noret_decl(f_12018)
static C_word C_fcall f_12018(C_word t0,C_word t1);
C_noret_decl(f_12030)
static void C_fcall f_12030(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12065)
static void C_ccall f_12065(C_word c,C_word *av) C_noret;
C_noret_decl(f_12069)
static void C_ccall f_12069(C_word c,C_word *av) C_noret;
C_noret_decl(f_12073)
static void C_ccall f_12073(C_word c,C_word *av) C_noret;
C_noret_decl(f_4240)
static void C_ccall f_4240(C_word c,C_word *av) C_noret;
C_noret_decl(f_4243)
static void C_ccall f_4243(C_word c,C_word *av) C_noret;
C_noret_decl(f_4246)
static void C_ccall f_4246(C_word c,C_word *av) C_noret;
C_noret_decl(f_4249)
static void C_ccall f_4249(C_word c,C_word *av) C_noret;
C_noret_decl(f_4252)
static void C_ccall f_4252(C_word c,C_word *av) C_noret;
C_noret_decl(f_4255)
static void C_ccall f_4255(C_word c,C_word *av) C_noret;
C_noret_decl(f_4746)
static void C_fcall f_4746(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4752)
static void C_fcall f_4752(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4765)
static void C_ccall f_4765(C_word c,C_word *av) C_noret;
C_noret_decl(f_4779)
static void C_ccall f_4779(C_word c,C_word *av) C_noret;
C_noret_decl(f_4827)
static void C_fcall f_4827(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4841)
static void C_ccall f_4841(C_word c,C_word *av) C_noret;
C_noret_decl(f_4854)
static void C_ccall f_4854(C_word c,C_word *av) C_noret;
C_noret_decl(f_4910)
static void C_fcall f_4910(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4919)
static void C_fcall f_4919(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4927)
static void C_fcall f_4927(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4931)
static void C_ccall f_4931(C_word c,C_word *av) C_noret;
C_noret_decl(f_4935)
static C_word C_fcall f_4935(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_4953)
static void C_ccall f_4953(C_word c,C_word *av) C_noret;
C_noret_decl(f_5537)
static void C_ccall f_5537(C_word c,C_word *av) C_noret;
C_noret_decl(f_5541)
static void C_ccall f_5541(C_word c,C_word *av) C_noret;
C_noret_decl(f_5556)
static void C_ccall f_5556(C_word c,C_word *av) C_noret;
C_noret_decl(f_5646)
static void C_ccall f_5646(C_word c,C_word *av) C_noret;
C_noret_decl(f_5655)
static void C_ccall f_5655(C_word c,C_word *av) C_noret;
C_noret_decl(f_5791)
static void C_ccall f_5791(C_word c,C_word *av) C_noret;
C_noret_decl(f_5815)
static void C_ccall f_5815(C_word c,C_word *av) C_noret;
C_noret_decl(f_5831)
static void C_ccall f_5831(C_word c,C_word *av) C_noret;
C_noret_decl(f_5833)
static void C_ccall f_5833(C_word c,C_word *av) C_noret;
C_noret_decl(f_5837)
static void C_ccall f_5837(C_word c,C_word *av) C_noret;
C_noret_decl(f_5842)
static void C_ccall f_5842(C_word c,C_word *av) C_noret;
C_noret_decl(f_5846)
static void C_ccall f_5846(C_word c,C_word *av) C_noret;
C_noret_decl(f_5850)
static void C_ccall f_5850(C_word c,C_word *av) C_noret;
C_noret_decl(f_5853)
static void C_ccall f_5853(C_word c,C_word *av) C_noret;
C_noret_decl(f_5859)
static void C_ccall f_5859(C_word c,C_word *av) C_noret;
C_noret_decl(f_5865)
static void C_ccall f_5865(C_word c,C_word *av) C_noret;
C_noret_decl(f_5869)
static void C_ccall f_5869(C_word c,C_word *av) C_noret;
C_noret_decl(f_5872)
static void C_ccall f_5872(C_word c,C_word *av) C_noret;
C_noret_decl(f_5896)
static void C_ccall f_5896(C_word c,C_word *av) C_noret;
C_noret_decl(f_5900)
static void C_ccall f_5900(C_word c,C_word *av) C_noret;
C_noret_decl(f_5902)
static void C_fcall f_5902(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5936)
static void C_ccall f_5936(C_word c,C_word *av) C_noret;
C_noret_decl(f_5944)
static void C_ccall f_5944(C_word c,C_word *av) C_noret;
C_noret_decl(f_5946)
static void C_fcall f_5946(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5954)
static void C_fcall f_5954(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5981)
static void C_ccall f_5981(C_word c,C_word *av) C_noret;
C_noret_decl(f_5983)
static void C_ccall f_5983(C_word c,C_word *av) C_noret;
C_noret_decl(f_6037)
static void C_ccall f_6037(C_word c,C_word *av) C_noret;
C_noret_decl(f_6044)
static void C_ccall f_6044(C_word c,C_word *av) C_noret;
C_noret_decl(f_6047)
static void C_ccall f_6047(C_word c,C_word *av) C_noret;
C_noret_decl(f_6050)
static void C_fcall f_6050(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6053)
static void C_ccall f_6053(C_word c,C_word *av) C_noret;
C_noret_decl(f_6059)
static void C_ccall f_6059(C_word c,C_word *av) C_noret;
C_noret_decl(f_6072)
static void C_fcall f_6072(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6084)
static void C_ccall f_6084(C_word c,C_word *av) C_noret;
C_noret_decl(f_6088)
static void C_ccall f_6088(C_word c,C_word *av) C_noret;
C_noret_decl(f_6090)
static void C_ccall f_6090(C_word c,C_word *av) C_noret;
C_noret_decl(f_6106)
static void C_ccall f_6106(C_word c,C_word *av) C_noret;
C_noret_decl(f_6107)
static C_word C_fcall f_6107(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_6115)
static C_word C_fcall f_6115(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_6129)
static void C_ccall f_6129(C_word c,C_word *av) C_noret;
C_noret_decl(f_6132)
static void C_ccall f_6132(C_word c,C_word *av) C_noret;
C_noret_decl(f_6139)
static void C_ccall f_6139(C_word c,C_word *av) C_noret;
C_noret_decl(f_6143)
static void C_ccall f_6143(C_word c,C_word *av) C_noret;
C_noret_decl(f_6149)
static void C_fcall f_6149(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6177)
static void C_ccall f_6177(C_word c,C_word *av) C_noret;
C_noret_decl(f_6179)
static void C_ccall f_6179(C_word c,C_word *av) C_noret;
C_noret_decl(f_6182)
static void C_ccall f_6182(C_word c,C_word *av) C_noret;
C_noret_decl(f_6186)
static void C_ccall f_6186(C_word c,C_word *av) C_noret;
C_noret_decl(f_6202)
static void C_fcall f_6202(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6209)
static void C_ccall f_6209(C_word c,C_word *av) C_noret;
C_noret_decl(f_6223)
static void C_ccall f_6223(C_word c,C_word *av) C_noret;
C_noret_decl(f_6233)
static void C_ccall f_6233(C_word c,C_word *av) C_noret;
C_noret_decl(f_6236)
static void C_ccall f_6236(C_word c,C_word *av) C_noret;
C_noret_decl(f_6239)
static void C_ccall f_6239(C_word c,C_word *av) C_noret;
C_noret_decl(f_6245)
static void C_ccall f_6245(C_word c,C_word *av) C_noret;
C_noret_decl(f_6248)
static void C_ccall f_6248(C_word c,C_word *av) C_noret;
C_noret_decl(f_6251)
static void C_ccall f_6251(C_word c,C_word *av) C_noret;
C_noret_decl(f_6284)
static void C_ccall f_6284(C_word c,C_word *av) C_noret;
C_noret_decl(f_6288)
static void C_ccall f_6288(C_word c,C_word *av) C_noret;
C_noret_decl(f_6295)
static void C_ccall f_6295(C_word c,C_word *av) C_noret;
C_noret_decl(f_6299)
static void C_ccall f_6299(C_word c,C_word *av) C_noret;
C_noret_decl(f_6312)
static void C_ccall f_6312(C_word c,C_word *av) C_noret;
C_noret_decl(f_6322)
static void C_ccall f_6322(C_word c,C_word *av) C_noret;
C_noret_decl(f_6325)
static void C_ccall f_6325(C_word c,C_word *av) C_noret;
C_noret_decl(f_6331)
static void C_ccall f_6331(C_word c,C_word *av) C_noret;
C_noret_decl(f_6334)
static void C_ccall f_6334(C_word c,C_word *av) C_noret;
C_noret_decl(f_6340)
static void C_ccall f_6340(C_word c,C_word *av) C_noret;
C_noret_decl(f_6374)
static void C_ccall f_6374(C_word c,C_word *av) C_noret;
C_noret_decl(f_6378)
static void C_ccall f_6378(C_word c,C_word *av) C_noret;
C_noret_decl(f_6393)
static void C_ccall f_6393(C_word c,C_word *av) C_noret;
C_noret_decl(f_6404)
static void C_ccall f_6404(C_word c,C_word *av) C_noret;
C_noret_decl(f_6410)
static void C_ccall f_6410(C_word c,C_word *av) C_noret;
C_noret_decl(f_6427)
static void C_ccall f_6427(C_word c,C_word *av) C_noret;
C_noret_decl(f_6434)
static void C_fcall f_6434(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6441)
static void C_fcall f_6441(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6486)
static void C_ccall f_6486(C_word c,C_word *av) C_noret;
C_noret_decl(f_6592)
static void C_fcall f_6592(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6600)
static void C_ccall f_6600(C_word c,C_word *av) C_noret;
C_noret_decl(f_6604)
static void C_ccall f_6604(C_word c,C_word *av) C_noret;
C_noret_decl(f_6615)
static void C_fcall f_6615(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6642)
static void C_fcall f_6642(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6665)
static void C_ccall f_6665(C_word c,C_word *av) C_noret;
C_noret_decl(f_6679)
static void C_fcall f_6679(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6704)
static void C_ccall f_6704(C_word c,C_word *av) C_noret;
C_noret_decl(f_6719)
static void C_fcall f_6719(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6737)
static void C_ccall f_6737(C_word c,C_word *av) C_noret;
C_noret_decl(f_6748)
static void C_ccall f_6748(C_word c,C_word *av) C_noret;
C_noret_decl(f_6767)
static void C_ccall f_6767(C_word c,C_word *av) C_noret;
C_noret_decl(f_6780)
static void C_ccall f_6780(C_word c,C_word *av) C_noret;
C_noret_decl(f_6790)
static void C_ccall f_6790(C_word c,C_word *av) C_noret;
C_noret_decl(f_6796)
static void C_fcall f_6796(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6800)
static void C_ccall f_6800(C_word c,C_word *av) C_noret;
C_noret_decl(f_6803)
static void C_ccall f_6803(C_word c,C_word *av) C_noret;
C_noret_decl(f_6814)
static void C_fcall f_6814(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6842)
static void C_fcall f_6842(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6856)
static void C_ccall f_6856(C_word c,C_word *av) C_noret;
C_noret_decl(f_6861)
static void C_fcall f_6861(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6871)
static void C_ccall f_6871(C_word c,C_word *av) C_noret;
C_noret_decl(f_6889)
static void C_fcall f_6889(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6911)
static void C_ccall f_6911(C_word c,C_word *av) C_noret;
C_noret_decl(f_6919)
static void C_ccall f_6919(C_word c,C_word *av) C_noret;
C_noret_decl(f_6953)
static void C_ccall f_6953(C_word c,C_word *av) C_noret;
C_noret_decl(f_6964)
static void C_ccall f_6964(C_word c,C_word *av) C_noret;
C_noret_decl(f_6972)
static void C_fcall f_6972(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7006)
static void C_ccall f_7006(C_word c,C_word *av) C_noret;
C_noret_decl(f_7012)
static void C_ccall f_7012(C_word c,C_word *av) C_noret;
C_noret_decl(f_7018)
static void C_ccall f_7018(C_word c,C_word *av) C_noret;
C_noret_decl(f_7028)
static void C_ccall f_7028(C_word c,C_word *av) C_noret;
C_noret_decl(f_7063)
static void C_ccall f_7063(C_word c,C_word *av) C_noret;
C_noret_decl(f_7067)
static void C_ccall f_7067(C_word c,C_word *av) C_noret;
C_noret_decl(f_7071)
static void C_ccall f_7071(C_word c,C_word *av) C_noret;
C_noret_decl(f_7075)
static void C_fcall f_7075(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7079)
static void C_ccall f_7079(C_word c,C_word *av) C_noret;
C_noret_decl(f_7083)
static void C_fcall f_7083(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7087)
static void C_ccall f_7087(C_word c,C_word *av) C_noret;
C_noret_decl(f_7091)
static void C_ccall f_7091(C_word c,C_word *av) C_noret;
C_noret_decl(f_7123)
static void C_fcall f_7123(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7127)
static void C_ccall f_7127(C_word c,C_word *av) C_noret;
C_noret_decl(f_7139)
static void C_fcall f_7139(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7171)
static void C_ccall f_7171(C_word c,C_word *av) C_noret;
C_noret_decl(f_7181)
static void C_ccall f_7181(C_word c,C_word *av) C_noret;
C_noret_decl(f_7196)
static void C_fcall f_7196(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7220)
static void C_ccall f_7220(C_word c,C_word *av) C_noret;
C_noret_decl(f_7236)
static void C_ccall f_7236(C_word c,C_word *av) C_noret;
C_noret_decl(f_7238)
static void C_fcall f_7238(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7263)
static void C_ccall f_7263(C_word c,C_word *av) C_noret;
C_noret_decl(f_7325)
static void C_ccall f_7325(C_word c,C_word *av) C_noret;
C_noret_decl(f_7327)
static void C_fcall f_7327(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7352)
static void C_fcall f_7352(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7382)
static void C_ccall f_7382(C_word c,C_word *av) C_noret;
C_noret_decl(f_7403)
static void C_ccall f_7403(C_word c,C_word *av) C_noret;
C_noret_decl(f_7431)
static void C_ccall f_7431(C_word c,C_word *av) C_noret;
C_noret_decl(f_7440)
static void C_fcall f_7440(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7457)
static void C_ccall f_7457(C_word c,C_word *av) C_noret;
C_noret_decl(f_7487)
static void C_ccall f_7487(C_word c,C_word *av) C_noret;
C_noret_decl(f_7490)
static void C_ccall f_7490(C_word c,C_word *av) C_noret;
C_noret_decl(f_7493)
static void C_ccall f_7493(C_word c,C_word *av) C_noret;
C_noret_decl(f_7509)
static void C_ccall f_7509(C_word c,C_word *av) C_noret;
C_noret_decl(f_7519)
static void C_ccall f_7519(C_word c,C_word *av) C_noret;
C_noret_decl(f_7525)
static void C_ccall f_7525(C_word c,C_word *av) C_noret;
C_noret_decl(f_7526)
static void C_fcall f_7526(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7538)
static void C_ccall f_7538(C_word c,C_word *av) C_noret;
C_noret_decl(f_7551)
static void C_ccall f_7551(C_word c,C_word *av) C_noret;
C_noret_decl(f_7552)
static void C_fcall f_7552(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7564)
static void C_ccall f_7564(C_word c,C_word *av) C_noret;
C_noret_decl(f_7577)
static void C_ccall f_7577(C_word c,C_word *av) C_noret;
C_noret_decl(f_7580)
static void C_ccall f_7580(C_word c,C_word *av) C_noret;
C_noret_decl(f_7596)
static void C_ccall f_7596(C_word c,C_word *av) C_noret;
C_noret_decl(f_7600)
static void C_ccall f_7600(C_word c,C_word *av) C_noret;
C_noret_decl(f_7604)
static void C_ccall f_7604(C_word c,C_word *av) C_noret;
C_noret_decl(f_7606)
static void C_fcall f_7606(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7616)
static void C_ccall f_7616(C_word c,C_word *av) C_noret;
C_noret_decl(f_7629)
static void C_fcall f_7629(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7639)
static void C_ccall f_7639(C_word c,C_word *av) C_noret;
C_noret_decl(f_7663)
static void C_ccall f_7663(C_word c,C_word *av) C_noret;
C_noret_decl(f_7667)
static void C_ccall f_7667(C_word c,C_word *av) C_noret;
C_noret_decl(f_7682)
static void C_ccall f_7682(C_word c,C_word *av) C_noret;
C_noret_decl(f_7684)
static void C_fcall f_7684(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7718)
static void C_ccall f_7718(C_word c,C_word *av) C_noret;
C_noret_decl(f_7730)
static void C_ccall f_7730(C_word c,C_word *av) C_noret;
C_noret_decl(f_7748)
static void C_ccall f_7748(C_word c,C_word *av) C_noret;
C_noret_decl(f_7764)
static void C_ccall f_7764(C_word c,C_word *av) C_noret;
C_noret_decl(f_7771)
static void C_ccall f_7771(C_word c,C_word *av) C_noret;
C_noret_decl(f_7777)
static void C_ccall f_7777(C_word c,C_word *av) C_noret;
C_noret_decl(f_7793)
static void C_ccall f_7793(C_word c,C_word *av) C_noret;
C_noret_decl(f_7797)
static void C_ccall f_7797(C_word c,C_word *av) C_noret;
C_noret_decl(f_7801)
static void C_ccall f_7801(C_word c,C_word *av) C_noret;
C_noret_decl(f_7814)
static void C_fcall f_7814(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7836)
static void C_ccall f_7836(C_word c,C_word *av) C_noret;
C_noret_decl(f_7838)
static void C_fcall f_7838(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7863)
static void C_ccall f_7863(C_word c,C_word *av) C_noret;
C_noret_decl(f_7878)
static void C_ccall f_7878(C_word c,C_word *av) C_noret;
C_noret_decl(f_7893)
static void C_fcall f_7893(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7904)
static void C_fcall f_7904(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7906)
static C_word C_fcall f_7906(C_word t0,C_word t1);
C_noret_decl(f_7971)
static void C_ccall f_7971(C_word c,C_word *av) C_noret;
C_noret_decl(f_7977)
static void C_fcall f_7977(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7981)
static void C_ccall f_7981(C_word c,C_word *av) C_noret;
C_noret_decl(f_7987)
static void C_ccall f_7987(C_word c,C_word *av) C_noret;
C_noret_decl(f_7990)
static void C_ccall f_7990(C_word c,C_word *av) C_noret;
C_noret_decl(f_7993)
static void C_ccall f_7993(C_word c,C_word *av) C_noret;
C_noret_decl(f_7996)
static void C_ccall f_7996(C_word c,C_word *av) C_noret;
C_noret_decl(f_7997)
static void C_fcall f_7997(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8004)
static void C_ccall f_8004(C_word c,C_word *av) C_noret;
C_noret_decl(f_8007)
static void C_ccall f_8007(C_word c,C_word *av) C_noret;
C_noret_decl(f_8010)
static void C_ccall f_8010(C_word c,C_word *av) C_noret;
C_noret_decl(f_8011)
static void C_fcall f_8011(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8014)
static void C_fcall f_8014(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8018)
static void C_ccall f_8018(C_word c,C_word *av) C_noret;
C_noret_decl(f_8044)
static void C_ccall f_8044(C_word c,C_word *av) C_noret;
C_noret_decl(f_8050)
static void C_ccall f_8050(C_word c,C_word *av) C_noret;
C_noret_decl(f_8054)
static void C_fcall f_8054(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8058)
static void C_ccall f_8058(C_word c,C_word *av) C_noret;
C_noret_decl(f_8064)
static void C_ccall f_8064(C_word c,C_word *av) C_noret;
C_noret_decl(f_8067)
static void C_ccall f_8067(C_word c,C_word *av) C_noret;
C_noret_decl(f_8070)
static void C_ccall f_8070(C_word c,C_word *av) C_noret;
C_noret_decl(f_8073)
static void C_ccall f_8073(C_word c,C_word *av) C_noret;
C_noret_decl(f_8080)
static void C_ccall f_8080(C_word c,C_word *av) C_noret;
C_noret_decl(f_8096)
static void C_ccall f_8096(C_word c,C_word *av) C_noret;
C_noret_decl(f_8102)
static void C_ccall f_8102(C_word c,C_word *av) C_noret;
C_noret_decl(f_8105)
static void C_ccall f_8105(C_word c,C_word *av) C_noret;
C_noret_decl(f_8112)
static void C_ccall f_8112(C_word c,C_word *av) C_noret;
C_noret_decl(f_8119)
static void C_ccall f_8119(C_word c,C_word *av) C_noret;
C_noret_decl(f_8125)
static void C_ccall f_8125(C_word c,C_word *av) C_noret;
C_noret_decl(f_8128)
static void C_ccall f_8128(C_word c,C_word *av) C_noret;
C_noret_decl(f_8131)
static void C_ccall f_8131(C_word c,C_word *av) C_noret;
C_noret_decl(f_8149)
static void C_ccall f_8149(C_word c,C_word *av) C_noret;
C_noret_decl(f_8152)
static void C_ccall f_8152(C_word c,C_word *av) C_noret;
C_noret_decl(f_8170)
static void C_ccall f_8170(C_word c,C_word *av) C_noret;
C_noret_decl(f_8182)
static void C_ccall f_8182(C_word c,C_word *av) C_noret;
C_noret_decl(f_8185)
static void C_ccall f_8185(C_word c,C_word *av) C_noret;
C_noret_decl(f_8192)
static void C_ccall f_8192(C_word c,C_word *av) C_noret;
C_noret_decl(f_8198)
static void C_ccall f_8198(C_word c,C_word *av) C_noret;
C_noret_decl(f_8199)
static void C_fcall f_8199(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8206)
static void C_ccall f_8206(C_word c,C_word *av) C_noret;
C_noret_decl(f_8218)
static void C_fcall f_8218(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8228)
static void C_ccall f_8228(C_word c,C_word *av) C_noret;
C_noret_decl(f_8246)
static void C_fcall f_8246(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8256)
static void C_ccall f_8256(C_word c,C_word *av) C_noret;
C_noret_decl(f_8276)
static void C_ccall f_8276(C_word c,C_word *av) C_noret;
C_noret_decl(f_8283)
static void C_ccall f_8283(C_word c,C_word *av) C_noret;
C_noret_decl(f_8285)
static void C_fcall f_8285(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8295)
static void C_ccall f_8295(C_word c,C_word *av) C_noret;
C_noret_decl(f_8310)
static void C_ccall f_8310(C_word c,C_word *av) C_noret;
C_noret_decl(f_8312)
static void C_fcall f_8312(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8342)
static void C_ccall f_8342(C_word c,C_word *av) C_noret;
C_noret_decl(f_8354)
static void C_ccall f_8354(C_word c,C_word *av) C_noret;
C_noret_decl(f_8357)
static void C_ccall f_8357(C_word c,C_word *av) C_noret;
C_noret_decl(f_8360)
static void C_ccall f_8360(C_word c,C_word *av) C_noret;
C_noret_decl(f_8381)
static void C_ccall f_8381(C_word c,C_word *av) C_noret;
C_noret_decl(f_8383)
static void C_fcall f_8383(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8447)
static void C_ccall f_8447(C_word c,C_word *av) C_noret;
C_noret_decl(f_8456)
static void C_ccall f_8456(C_word c,C_word *av) C_noret;
C_noret_decl(f_8459)
static void C_ccall f_8459(C_word c,C_word *av) C_noret;
C_noret_decl(f_8462)
static void C_ccall f_8462(C_word c,C_word *av) C_noret;
C_noret_decl(f_8463)
static C_word C_fcall f_8463(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_8481)
static void C_ccall f_8481(C_word c,C_word *av) C_noret;
C_noret_decl(f_8487)
static void C_ccall f_8487(C_word c,C_word *av) C_noret;
C_noret_decl(f_8490)
static void C_ccall f_8490(C_word c,C_word *av) C_noret;
C_noret_decl(f_8493)
static void C_ccall f_8493(C_word c,C_word *av) C_noret;
C_noret_decl(f_8521)
static void C_ccall f_8521(C_word c,C_word *av) C_noret;
C_noret_decl(f_8528)
static void C_ccall f_8528(C_word c,C_word *av) C_noret;
C_noret_decl(f_8534)
static void C_ccall f_8534(C_word c,C_word *av) C_noret;
C_noret_decl(f_8537)
static void C_ccall f_8537(C_word c,C_word *av) C_noret;
C_noret_decl(f_8538)
static void C_fcall f_8538(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8542)
static void C_ccall f_8542(C_word c,C_word *av) C_noret;
C_noret_decl(f_8560)
static void C_ccall f_8560(C_word c,C_word *av) C_noret;
C_noret_decl(f_8566)
static void C_ccall f_8566(C_word c,C_word *av) C_noret;
C_noret_decl(f_8569)
static void C_ccall f_8569(C_word c,C_word *av) C_noret;
C_noret_decl(f_8572)
static void C_ccall f_8572(C_word c,C_word *av) C_noret;
C_noret_decl(f_8583)
static void C_ccall f_8583(C_word c,C_word *av) C_noret;
C_noret_decl(f_8587)
static void C_ccall f_8587(C_word c,C_word *av) C_noret;
C_noret_decl(f_8591)
static void C_ccall f_8591(C_word c,C_word *av) C_noret;
C_noret_decl(f_8595)
static void C_ccall f_8595(C_word c,C_word *av) C_noret;
C_noret_decl(f_8601)
static void C_fcall f_8601(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8611)
static void C_ccall f_8611(C_word c,C_word *av) C_noret;
C_noret_decl(f_8626)
static void C_ccall f_8626(C_word c,C_word *av) C_noret;
C_noret_decl(f_8630)
static void C_ccall f_8630(C_word c,C_word *av) C_noret;
C_noret_decl(f_8632)
static void C_fcall f_8632(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8642)
static void C_fcall f_8642(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8657)
static void C_ccall f_8657(C_word c,C_word *av) C_noret;
C_noret_decl(f_8675)
static void C_fcall f_8675(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8702)
static void C_fcall f_8702(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8737)
static void C_ccall f_8737(C_word c,C_word *av) C_noret;
C_noret_decl(f_8746)
static void C_ccall f_8746(C_word c,C_word *av) C_noret;
C_noret_decl(f_8757)
static void C_fcall f_8757(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8761)
static void C_ccall f_8761(C_word c,C_word *av) C_noret;
C_noret_decl(f_8764)
static void C_fcall f_8764(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8772)
static void C_ccall f_8772(C_word c,C_word *av) C_noret;
C_noret_decl(f_8793)
static void C_ccall f_8793(C_word c,C_word *av) C_noret;
C_noret_decl(f_8797)
static void C_fcall f_8797(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8805)
static void C_ccall f_8805(C_word c,C_word *av) C_noret;
C_noret_decl(f_8809)
static void C_ccall f_8809(C_word c,C_word *av) C_noret;
C_noret_decl(f_8825)
static void C_ccall f_8825(C_word c,C_word *av) C_noret;
C_noret_decl(f_8829)
static void C_ccall f_8829(C_word c,C_word *av) C_noret;
C_noret_decl(f_8843)
static void C_ccall f_8843(C_word c,C_word *av) C_noret;
C_noret_decl(f_8876)
static void C_ccall f_8876(C_word c,C_word *av) C_noret;
C_noret_decl(f_8878)
static void C_fcall f_8878(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8891)
static void C_ccall f_8891(C_word c,C_word *av) C_noret;
C_noret_decl(f_8900)
static void C_ccall f_8900(C_word c,C_word *av) C_noret;
C_noret_decl(f_8913)
static void C_fcall f_8913(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8949)
static void C_ccall f_8949(C_word c,C_word *av) C_noret;
C_noret_decl(f_8956)
static void C_ccall f_8956(C_word c,C_word *av) C_noret;
C_noret_decl(f_8960)
static void C_ccall f_8960(C_word c,C_word *av) C_noret;
C_noret_decl(f_8963)
static void C_ccall f_8963(C_word c,C_word *av) C_noret;
C_noret_decl(f_8968)
static void C_ccall f_8968(C_word c,C_word *av) C_noret;
C_noret_decl(f_8972)
static void C_ccall f_8972(C_word c,C_word *av) C_noret;
C_noret_decl(f_8975)
static void C_ccall f_8975(C_word c,C_word *av) C_noret;
C_noret_decl(f_8978)
static void C_ccall f_8978(C_word c,C_word *av) C_noret;
C_noret_decl(f_8981)
static void C_ccall f_8981(C_word c,C_word *av) C_noret;
C_noret_decl(f_8985)
static void C_ccall f_8985(C_word c,C_word *av) C_noret;
C_noret_decl(f_8989)
static void C_ccall f_8989(C_word c,C_word *av) C_noret;
C_noret_decl(f_8993)
static void C_ccall f_8993(C_word c,C_word *av) C_noret;
C_noret_decl(f_8997)
static void C_ccall f_8997(C_word c,C_word *av) C_noret;
C_noret_decl(f_9000)
static void C_ccall f_9000(C_word c,C_word *av) C_noret;
C_noret_decl(f_9003)
static void C_ccall f_9003(C_word c,C_word *av) C_noret;
C_noret_decl(f_9006)
static void C_ccall f_9006(C_word c,C_word *av) C_noret;
C_noret_decl(f_9009)
static void C_ccall f_9009(C_word c,C_word *av) C_noret;
C_noret_decl(f_9024)
static void C_ccall f_9024(C_word c,C_word *av) C_noret;
C_noret_decl(f_9030)
static void C_ccall f_9030(C_word c,C_word *av) C_noret;
C_noret_decl(f_9034)
static void C_ccall f_9034(C_word c,C_word *av) C_noret;
C_noret_decl(f_9037)
static void C_ccall f_9037(C_word c,C_word *av) C_noret;
C_noret_decl(f_9040)
static void C_ccall f_9040(C_word c,C_word *av) C_noret;
C_noret_decl(f_9043)
static void C_ccall f_9043(C_word c,C_word *av) C_noret;
C_noret_decl(f_9046)
static void C_ccall f_9046(C_word c,C_word *av) C_noret;
C_noret_decl(f_9049)
static void C_ccall f_9049(C_word c,C_word *av) C_noret;
C_noret_decl(f_9052)
static void C_ccall f_9052(C_word c,C_word *av) C_noret;
C_noret_decl(f_9055)
static void C_ccall f_9055(C_word c,C_word *av) C_noret;
C_noret_decl(f_9061)
static void C_ccall f_9061(C_word c,C_word *av) C_noret;
C_noret_decl(f_9065)
static void C_ccall f_9065(C_word c,C_word *av) C_noret;
C_noret_decl(f_9073)
static void C_ccall f_9073(C_word c,C_word *av) C_noret;
C_noret_decl(f_9079)
static void C_ccall f_9079(C_word c,C_word *av) C_noret;
C_noret_decl(f_9084)
static void C_ccall f_9084(C_word c,C_word *av) C_noret;
C_noret_decl(f_9088)
static void C_ccall f_9088(C_word c,C_word *av) C_noret;
C_noret_decl(f_9093)
static void C_ccall f_9093(C_word c,C_word *av) C_noret;
C_noret_decl(f_9100)
static void C_ccall f_9100(C_word c,C_word *av) C_noret;
C_noret_decl(f_9104)
static void C_ccall f_9104(C_word c,C_word *av) C_noret;
C_noret_decl(f_9107)
static void C_fcall f_9107(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9111)
static void C_ccall f_9111(C_word c,C_word *av) C_noret;
C_noret_decl(f_9114)
static void C_ccall f_9114(C_word c,C_word *av) C_noret;
C_noret_decl(f_9122)
static void C_ccall f_9122(C_word c,C_word *av) C_noret;
C_noret_decl(f_9126)
static void C_ccall f_9126(C_word c,C_word *av) C_noret;
C_noret_decl(f_9129)
static void C_ccall f_9129(C_word c,C_word *av) C_noret;
C_noret_decl(f_9132)
static void C_ccall f_9132(C_word c,C_word *av) C_noret;
C_noret_decl(f_9135)
static void C_ccall f_9135(C_word c,C_word *av) C_noret;
C_noret_decl(f_9137)
static void C_fcall f_9137(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9145)
static void C_ccall f_9145(C_word c,C_word *av) C_noret;
C_noret_decl(f_9149)
static void C_ccall f_9149(C_word c,C_word *av) C_noret;
C_noret_decl(f_9151)
static void C_fcall f_9151(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9164)
static void C_ccall f_9164(C_word c,C_word *av) C_noret;
C_noret_decl(f_9171)
static void C_ccall f_9171(C_word c,C_word *av) C_noret;
C_noret_decl(f_9198)
static void C_ccall f_9198(C_word c,C_word *av) C_noret;
C_noret_decl(f_9201)
static void C_fcall f_9201(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9205)
static void C_ccall f_9205(C_word c,C_word *av) C_noret;
C_noret_decl(f_9208)
static void C_ccall f_9208(C_word c,C_word *av) C_noret;
C_noret_decl(f_9249)
static void C_fcall f_9249(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9263)
static void C_ccall f_9263(C_word c,C_word *av) C_noret;
C_noret_decl(f_9281)
static void C_ccall f_9281(C_word c,C_word *av) C_noret;
C_noret_decl(f_9284)
static void C_ccall f_9284(C_word c,C_word *av) C_noret;
C_noret_decl(f_9289)
static void C_ccall f_9289(C_word c,C_word *av) C_noret;
C_noret_decl(f_9299)
static void C_ccall f_9299(C_word c,C_word *av) C_noret;
C_noret_decl(f_9303)
static void C_ccall f_9303(C_word c,C_word *av) C_noret;
C_noret_decl(f_9308)
static void C_fcall f_9308(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_9316)
static void C_fcall f_9316(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9326)
static void C_ccall f_9326(C_word c,C_word *av) C_noret;
C_noret_decl(f_9339)
static void C_fcall f_9339(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9349)
static void C_ccall f_9349(C_word c,C_word *av) C_noret;
C_noret_decl(f_9367)
static void C_fcall f_9367(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9389)
static void C_fcall f_9389(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9431)
static void C_ccall f_9431(C_word c,C_word *av) C_noret;
C_noret_decl(f_9434)
static void C_ccall f_9434(C_word c,C_word *av) C_noret;
C_noret_decl(f_9439)
static void C_ccall f_9439(C_word c,C_word *av) C_noret;
C_noret_decl(f_9449)
static void C_ccall f_9449(C_word c,C_word *av) C_noret;
C_noret_decl(f_9453)
static void C_ccall f_9453(C_word c,C_word *av) C_noret;
C_noret_decl(f_9458)
static void C_fcall f_9458(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9470)
static void C_fcall f_9470(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9478)
static void C_fcall f_9478(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9488)
static void C_ccall f_9488(C_word c,C_word *av) C_noret;
C_noret_decl(f_9501)
static void C_fcall f_9501(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9511)
static void C_ccall f_9511(C_word c,C_word *av) C_noret;
C_noret_decl(f_9529)
static void C_fcall f_9529(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9541)
static void C_ccall f_9541(C_word c,C_word *av) C_noret;
C_noret_decl(f_9570)
static void C_fcall f_9570(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9582)
static void C_ccall f_9582(C_word c,C_word *av) C_noret;
C_noret_decl(f_9614)
static void C_ccall f_9614(C_word c,C_word *av) C_noret;
C_noret_decl(f_9617)
static void C_ccall f_9617(C_word c,C_word *av) C_noret;
C_noret_decl(f_9622)
static void C_ccall f_9622(C_word c,C_word *av) C_noret;
C_noret_decl(f_9632)
static void C_ccall f_9632(C_word c,C_word *av) C_noret;
C_noret_decl(f_9636)
static void C_ccall f_9636(C_word c,C_word *av) C_noret;
C_noret_decl(f_9641)
static void C_fcall f_9641(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9653)
static void C_fcall f_9653(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9661)
static void C_fcall f_9661(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9674)
static void C_ccall f_9674(C_word c,C_word *av) C_noret;
C_noret_decl(f_9680)
static void C_ccall f_9680(C_word c,C_word *av) C_noret;
C_noret_decl(f_9693)
static void C_fcall f_9693(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9703)
static void C_ccall f_9703(C_word c,C_word *av) C_noret;
C_noret_decl(f_9716)
static void C_fcall f_9716(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9755)
static void C_fcall f_9755(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9771)
static void C_ccall f_9771(C_word c,C_word *av) C_noret;
C_noret_decl(f_9808)
static void C_fcall f_9808(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9824)
static void C_ccall f_9824(C_word c,C_word *av) C_noret;
C_noret_decl(f_9864)
static void C_ccall f_9864(C_word c,C_word *av) C_noret;
C_noret_decl(f_9867)
static void C_ccall f_9867(C_word c,C_word *av) C_noret;
C_noret_decl(f_9872)
static void C_ccall f_9872(C_word c,C_word *av) C_noret;
C_noret_decl(f_9882)
static void C_ccall f_9882(C_word c,C_word *av) C_noret;
C_noret_decl(f_9886)
static void C_ccall f_9886(C_word c,C_word *av) C_noret;
C_noret_decl(f_9888)
static void C_fcall f_9888(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9896)
static void C_ccall f_9896(C_word c,C_word *av) C_noret;
C_noret_decl(f_9902)
static void C_ccall f_9902(C_word c,C_word *av) C_noret;
C_noret_decl(f_9906)
static void C_ccall f_9906(C_word c,C_word *av) C_noret;
C_noret_decl(f_9910)
static void C_ccall f_9910(C_word c,C_word *av) C_noret;
C_noret_decl(f_9931)
static void C_ccall f_9931(C_word c,C_word *av) C_noret;
C_noret_decl(f_9941)
static void C_ccall f_9941(C_word c,C_word *av) C_noret;
C_noret_decl(f_9943)
static void C_fcall f_9943(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9968)
static void C_ccall f_9968(C_word c,C_word *av) C_noret;
C_noret_decl(f_9977)
static void C_fcall f_9977(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(C_modules_toplevel)
C_externexport void C_ccall C_modules_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_10031)
static void C_ccall trf_10031(C_word c,C_word *av) C_noret;
static void C_ccall trf_10031(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10031(t0,t1,t2);}

C_noret_decl(trf_10067)
static void C_ccall trf_10067(C_word c,C_word *av) C_noret;
static void C_ccall trf_10067(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10067(t0,t1,t2);}

C_noret_decl(trf_10107)
static void C_ccall trf_10107(C_word c,C_word *av) C_noret;
static void C_ccall trf_10107(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10107(t0,t1,t2);}

C_noret_decl(trf_10152)
static void C_ccall trf_10152(C_word c,C_word *av) C_noret;
static void C_ccall trf_10152(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10152(t0,t1,t2);}

C_noret_decl(trf_10197)
static void C_ccall trf_10197(C_word c,C_word *av) C_noret;
static void C_ccall trf_10197(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10197(t0,t1);}

C_noret_decl(trf_10275)
static void C_ccall trf_10275(C_word c,C_word *av) C_noret;
static void C_ccall trf_10275(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10275(t0,t1,t2);}

C_noret_decl(trf_10309)
static void C_ccall trf_10309(C_word c,C_word *av) C_noret;
static void C_ccall trf_10309(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10309(t0,t1,t2);}

C_noret_decl(trf_10379)
static void C_ccall trf_10379(C_word c,C_word *av) C_noret;
static void C_ccall trf_10379(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10379(t0,t1,t2);}

C_noret_decl(trf_10413)
static void C_ccall trf_10413(C_word c,C_word *av) C_noret;
static void C_ccall trf_10413(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10413(t0,t1,t2);}

C_noret_decl(trf_10453)
static void C_ccall trf_10453(C_word c,C_word *av) C_noret;
static void C_ccall trf_10453(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10453(t0,t1,t2);}

C_noret_decl(trf_10476)
static void C_ccall trf_10476(C_word c,C_word *av) C_noret;
static void C_ccall trf_10476(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10476(t0,t1,t2);}

C_noret_decl(trf_10532)
static void C_ccall trf_10532(C_word c,C_word *av) C_noret;
static void C_ccall trf_10532(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10532(t0,t1,t2);}

C_noret_decl(trf_10553)
static void C_ccall trf_10553(C_word c,C_word *av) C_noret;
static void C_ccall trf_10553(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10553(t0,t1,t2);}

C_noret_decl(trf_10561)
static void C_ccall trf_10561(C_word c,C_word *av) C_noret;
static void C_ccall trf_10561(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10561(t0,t1,t2);}

C_noret_decl(trf_10596)
static void C_ccall trf_10596(C_word c,C_word *av) C_noret;
static void C_ccall trf_10596(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10596(t0,t1,t2);}

C_noret_decl(trf_10627)
static void C_ccall trf_10627(C_word c,C_word *av) C_noret;
static void C_ccall trf_10627(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10627(t0,t1,t2);}

C_noret_decl(trf_10633)
static void C_ccall trf_10633(C_word c,C_word *av) C_noret;
static void C_ccall trf_10633(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10633(t0,t1,t2);}

C_noret_decl(trf_10674)
static void C_ccall trf_10674(C_word c,C_word *av) C_noret;
static void C_ccall trf_10674(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10674(t0,t1,t2);}

C_noret_decl(trf_10783)
static void C_ccall trf_10783(C_word c,C_word *av) C_noret;
static void C_ccall trf_10783(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10783(t0,t1,t2);}

C_noret_decl(trf_10863)
static void C_ccall trf_10863(C_word c,C_word *av) C_noret;
static void C_ccall trf_10863(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10863(t0,t1,t2);}

C_noret_decl(trf_10880)
static void C_ccall trf_10880(C_word c,C_word *av) C_noret;
static void C_ccall trf_10880(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10880(t0,t1);}

C_noret_decl(trf_10904)
static void C_ccall trf_10904(C_word c,C_word *av) C_noret;
static void C_ccall trf_10904(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10904(t0,t1,t2);}

C_noret_decl(trf_10964)
static void C_ccall trf_10964(C_word c,C_word *av) C_noret;
static void C_ccall trf_10964(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10964(t0,t1,t2,t3);}

C_noret_decl(trf_10976)
static void C_ccall trf_10976(C_word c,C_word *av) C_noret;
static void C_ccall trf_10976(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10976(t0,t1,t2);}

C_noret_decl(trf_11081)
static void C_ccall trf_11081(C_word c,C_word *av) C_noret;
static void C_ccall trf_11081(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_11081(t0,t1,t2,t3,t4);}

C_noret_decl(trf_11092)
static void C_ccall trf_11092(C_word c,C_word *av) C_noret;
static void C_ccall trf_11092(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11092(t0,t1,t2);}

C_noret_decl(trf_11105)
static void C_ccall trf_11105(C_word c,C_word *av) C_noret;
static void C_ccall trf_11105(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11105(t0,t1);}

C_noret_decl(trf_11179)
static void C_ccall trf_11179(C_word c,C_word *av) C_noret;
static void C_ccall trf_11179(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11179(t0,t1,t2);}

C_noret_decl(trf_11213)
static void C_ccall trf_11213(C_word c,C_word *av) C_noret;
static void C_ccall trf_11213(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11213(t0,t1,t2);}

C_noret_decl(trf_11382)
static void C_ccall trf_11382(C_word c,C_word *av) C_noret;
static void C_ccall trf_11382(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11382(t0,t1,t2);}

C_noret_decl(trf_11436)
static void C_ccall trf_11436(C_word c,C_word *av) C_noret;
static void C_ccall trf_11436(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11436(t0,t1,t2);}

C_noret_decl(trf_11490)
static void C_ccall trf_11490(C_word c,C_word *av) C_noret;
static void C_ccall trf_11490(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11490(t0,t1,t2);}

C_noret_decl(trf_11544)
static void C_ccall trf_11544(C_word c,C_word *av) C_noret;
static void C_ccall trf_11544(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11544(t0,t1,t2);}

C_noret_decl(trf_11598)
static void C_ccall trf_11598(C_word c,C_word *av) C_noret;
static void C_ccall trf_11598(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11598(t0,t1,t2);}

C_noret_decl(trf_11652)
static void C_ccall trf_11652(C_word c,C_word *av) C_noret;
static void C_ccall trf_11652(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11652(t0,t1,t2);}

C_noret_decl(trf_11706)
static void C_ccall trf_11706(C_word c,C_word *av) C_noret;
static void C_ccall trf_11706(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11706(t0,t1,t2);}

C_noret_decl(trf_11760)
static void C_ccall trf_11760(C_word c,C_word *av) C_noret;
static void C_ccall trf_11760(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11760(t0,t1,t2);}

C_noret_decl(trf_11814)
static void C_ccall trf_11814(C_word c,C_word *av) C_noret;
static void C_ccall trf_11814(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11814(t0,t1,t2);}

C_noret_decl(trf_11868)
static void C_ccall trf_11868(C_word c,C_word *av) C_noret;
static void C_ccall trf_11868(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11868(t0,t1,t2);}

C_noret_decl(trf_11922)
static void C_ccall trf_11922(C_word c,C_word *av) C_noret;
static void C_ccall trf_11922(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11922(t0,t1,t2);}

C_noret_decl(trf_11976)
static void C_ccall trf_11976(C_word c,C_word *av) C_noret;
static void C_ccall trf_11976(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11976(t0,t1,t2);}

C_noret_decl(trf_12030)
static void C_ccall trf_12030(C_word c,C_word *av) C_noret;
static void C_ccall trf_12030(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12030(t0,t1,t2);}

C_noret_decl(trf_4746)
static void C_ccall trf_4746(C_word c,C_word *av) C_noret;
static void C_ccall trf_4746(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4746(t0,t1,t2,t3);}

C_noret_decl(trf_4752)
static void C_ccall trf_4752(C_word c,C_word *av) C_noret;
static void C_ccall trf_4752(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4752(t0,t1,t2);}

C_noret_decl(trf_4827)
static void C_ccall trf_4827(C_word c,C_word *av) C_noret;
static void C_ccall trf_4827(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4827(t0,t1,t2);}

C_noret_decl(trf_4910)
static void C_ccall trf_4910(C_word c,C_word *av) C_noret;
static void C_ccall trf_4910(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4910(t0,t1,t2);}

C_noret_decl(trf_4919)
static void C_ccall trf_4919(C_word c,C_word *av) C_noret;
static void C_ccall trf_4919(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4919(t0,t1,t2);}

C_noret_decl(trf_4927)
static void C_ccall trf_4927(C_word c,C_word *av) C_noret;
static void C_ccall trf_4927(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4927(t0,t1,t2,t3);}

C_noret_decl(trf_5902)
static void C_ccall trf_5902(C_word c,C_word *av) C_noret;
static void C_ccall trf_5902(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5902(t0,t1,t2);}

C_noret_decl(trf_5946)
static void C_ccall trf_5946(C_word c,C_word *av) C_noret;
static void C_ccall trf_5946(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5946(t0,t1,t2,t3);}

C_noret_decl(trf_5954)
static void C_ccall trf_5954(C_word c,C_word *av) C_noret;
static void C_ccall trf_5954(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5954(t0,t1,t2);}

C_noret_decl(trf_6050)
static void C_ccall trf_6050(C_word c,C_word *av) C_noret;
static void C_ccall trf_6050(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6050(t0,t1);}

C_noret_decl(trf_6072)
static void C_ccall trf_6072(C_word c,C_word *av) C_noret;
static void C_ccall trf_6072(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6072(t0,t1,t2);}

C_noret_decl(trf_6149)
static void C_ccall trf_6149(C_word c,C_word *av) C_noret;
static void C_ccall trf_6149(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6149(t0,t1,t2);}

C_noret_decl(trf_6202)
static void C_ccall trf_6202(C_word c,C_word *av) C_noret;
static void C_ccall trf_6202(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6202(t0,t1,t2,t3);}

C_noret_decl(trf_6434)
static void C_ccall trf_6434(C_word c,C_word *av) C_noret;
static void C_ccall trf_6434(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6434(t0,t1,t2);}

C_noret_decl(trf_6441)
static void C_ccall trf_6441(C_word c,C_word *av) C_noret;
static void C_ccall trf_6441(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6441(t0,t1);}

C_noret_decl(trf_6592)
static void C_ccall trf_6592(C_word c,C_word *av) C_noret;
static void C_ccall trf_6592(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6592(t0,t1,t2,t3);}

C_noret_decl(trf_6615)
static void C_ccall trf_6615(C_word c,C_word *av) C_noret;
static void C_ccall trf_6615(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6615(t0,t1,t2);}

C_noret_decl(trf_6642)
static void C_ccall trf_6642(C_word c,C_word *av) C_noret;
static void C_ccall trf_6642(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6642(t0,t1,t2);}

C_noret_decl(trf_6679)
static void C_ccall trf_6679(C_word c,C_word *av) C_noret;
static void C_ccall trf_6679(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6679(t0,t1,t2);}

C_noret_decl(trf_6719)
static void C_ccall trf_6719(C_word c,C_word *av) C_noret;
static void C_ccall trf_6719(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6719(t0,t1,t2);}

C_noret_decl(trf_6796)
static void C_ccall trf_6796(C_word c,C_word *av) C_noret;
static void C_ccall trf_6796(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6796(t0,t1);}

C_noret_decl(trf_6814)
static void C_ccall trf_6814(C_word c,C_word *av) C_noret;
static void C_ccall trf_6814(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_6814(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6842)
static void C_ccall trf_6842(C_word c,C_word *av) C_noret;
static void C_ccall trf_6842(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6842(t0,t1,t2);}

C_noret_decl(trf_6861)
static void C_ccall trf_6861(C_word c,C_word *av) C_noret;
static void C_ccall trf_6861(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6861(t0,t1,t2);}

C_noret_decl(trf_6889)
static void C_ccall trf_6889(C_word c,C_word *av) C_noret;
static void C_ccall trf_6889(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6889(t0,t1,t2,t3);}

C_noret_decl(trf_6972)
static void C_ccall trf_6972(C_word c,C_word *av) C_noret;
static void C_ccall trf_6972(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6972(t0,t1,t2);}

C_noret_decl(trf_7075)
static void C_ccall trf_7075(C_word c,C_word *av) C_noret;
static void C_ccall trf_7075(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7075(t0,t1);}

C_noret_decl(trf_7083)
static void C_ccall trf_7083(C_word c,C_word *av) C_noret;
static void C_ccall trf_7083(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7083(t0,t1);}

C_noret_decl(trf_7123)
static void C_ccall trf_7123(C_word c,C_word *av) C_noret;
static void C_ccall trf_7123(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7123(t0,t1);}

C_noret_decl(trf_7139)
static void C_ccall trf_7139(C_word c,C_word *av) C_noret;
static void C_ccall trf_7139(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7139(t0,t1,t2);}

C_noret_decl(trf_7196)
static void C_ccall trf_7196(C_word c,C_word *av) C_noret;
static void C_ccall trf_7196(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7196(t0,t1,t2);}

C_noret_decl(trf_7238)
static void C_ccall trf_7238(C_word c,C_word *av) C_noret;
static void C_ccall trf_7238(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7238(t0,t1,t2);}

C_noret_decl(trf_7327)
static void C_ccall trf_7327(C_word c,C_word *av) C_noret;
static void C_ccall trf_7327(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7327(t0,t1,t2);}

C_noret_decl(trf_7352)
static void C_ccall trf_7352(C_word c,C_word *av) C_noret;
static void C_ccall trf_7352(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7352(t0,t1);}

C_noret_decl(trf_7440)
static void C_ccall trf_7440(C_word c,C_word *av) C_noret;
static void C_ccall trf_7440(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7440(t0,t1);}

C_noret_decl(trf_7526)
static void C_ccall trf_7526(C_word c,C_word *av) C_noret;
static void C_ccall trf_7526(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7526(t0,t1,t2);}

C_noret_decl(trf_7552)
static void C_ccall trf_7552(C_word c,C_word *av) C_noret;
static void C_ccall trf_7552(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7552(t0,t1,t2);}

C_noret_decl(trf_7606)
static void C_ccall trf_7606(C_word c,C_word *av) C_noret;
static void C_ccall trf_7606(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7606(t0,t1,t2);}

C_noret_decl(trf_7629)
static void C_ccall trf_7629(C_word c,C_word *av) C_noret;
static void C_ccall trf_7629(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7629(t0,t1,t2);}

C_noret_decl(trf_7684)
static void C_ccall trf_7684(C_word c,C_word *av) C_noret;
static void C_ccall trf_7684(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7684(t0,t1,t2);}

C_noret_decl(trf_7814)
static void C_ccall trf_7814(C_word c,C_word *av) C_noret;
static void C_ccall trf_7814(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7814(t0,t1,t2);}

C_noret_decl(trf_7838)
static void C_ccall trf_7838(C_word c,C_word *av) C_noret;
static void C_ccall trf_7838(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7838(t0,t1,t2);}

C_noret_decl(trf_7893)
static void C_ccall trf_7893(C_word c,C_word *av) C_noret;
static void C_ccall trf_7893(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7893(t0,t1,t2,t3);}

C_noret_decl(trf_7904)
static void C_ccall trf_7904(C_word c,C_word *av) C_noret;
static void C_ccall trf_7904(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7904(t0,t1);}

C_noret_decl(trf_7977)
static void C_ccall trf_7977(C_word c,C_word *av) C_noret;
static void C_ccall trf_7977(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7977(t0,t1,t2);}

C_noret_decl(trf_7997)
static void C_ccall trf_7997(C_word c,C_word *av) C_noret;
static void C_ccall trf_7997(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7997(t0,t1,t2);}

C_noret_decl(trf_8011)
static void C_ccall trf_8011(C_word c,C_word *av) C_noret;
static void C_ccall trf_8011(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8011(t0,t1,t2);}

C_noret_decl(trf_8014)
static void C_ccall trf_8014(C_word c,C_word *av) C_noret;
static void C_ccall trf_8014(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8014(t0,t1);}

C_noret_decl(trf_8054)
static void C_ccall trf_8054(C_word c,C_word *av) C_noret;
static void C_ccall trf_8054(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8054(t0,t1,t2);}

C_noret_decl(trf_8199)
static void C_ccall trf_8199(C_word c,C_word *av) C_noret;
static void C_ccall trf_8199(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8199(t0,t1,t2);}

C_noret_decl(trf_8218)
static void C_ccall trf_8218(C_word c,C_word *av) C_noret;
static void C_ccall trf_8218(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8218(t0,t1,t2);}

C_noret_decl(trf_8246)
static void C_ccall trf_8246(C_word c,C_word *av) C_noret;
static void C_ccall trf_8246(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8246(t0,t1,t2);}

C_noret_decl(trf_8285)
static void C_ccall trf_8285(C_word c,C_word *av) C_noret;
static void C_ccall trf_8285(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8285(t0,t1,t2);}

C_noret_decl(trf_8312)
static void C_ccall trf_8312(C_word c,C_word *av) C_noret;
static void C_ccall trf_8312(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8312(t0,t1,t2);}

C_noret_decl(trf_8383)
static void C_ccall trf_8383(C_word c,C_word *av) C_noret;
static void C_ccall trf_8383(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8383(t0,t1,t2);}

C_noret_decl(trf_8538)
static void C_ccall trf_8538(C_word c,C_word *av) C_noret;
static void C_ccall trf_8538(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8538(t0,t1,t2);}

C_noret_decl(trf_8601)
static void C_ccall trf_8601(C_word c,C_word *av) C_noret;
static void C_ccall trf_8601(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8601(t0,t1,t2);}

C_noret_decl(trf_8632)
static void C_ccall trf_8632(C_word c,C_word *av) C_noret;
static void C_ccall trf_8632(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8632(t0,t1,t2);}

C_noret_decl(trf_8642)
static void C_ccall trf_8642(C_word c,C_word *av) C_noret;
static void C_ccall trf_8642(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8642(t0,t1);}

C_noret_decl(trf_8675)
static void C_ccall trf_8675(C_word c,C_word *av) C_noret;
static void C_ccall trf_8675(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8675(t0,t1,t2);}

C_noret_decl(trf_8702)
static void C_ccall trf_8702(C_word c,C_word *av) C_noret;
static void C_ccall trf_8702(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8702(t0,t1,t2);}

C_noret_decl(trf_8757)
static void C_ccall trf_8757(C_word c,C_word *av) C_noret;
static void C_ccall trf_8757(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8757(t0,t1,t2);}

C_noret_decl(trf_8764)
static void C_ccall trf_8764(C_word c,C_word *av) C_noret;
static void C_ccall trf_8764(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8764(t0,t1);}

C_noret_decl(trf_8797)
static void C_ccall trf_8797(C_word c,C_word *av) C_noret;
static void C_ccall trf_8797(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8797(t0,t1,t2);}

C_noret_decl(trf_8878)
static void C_ccall trf_8878(C_word c,C_word *av) C_noret;
static void C_ccall trf_8878(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8878(t0,t1,t2);}

C_noret_decl(trf_8913)
static void C_ccall trf_8913(C_word c,C_word *av) C_noret;
static void C_ccall trf_8913(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8913(t0,t1,t2);}

C_noret_decl(trf_9107)
static void C_ccall trf_9107(C_word c,C_word *av) C_noret;
static void C_ccall trf_9107(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9107(t0,t1,t2);}

C_noret_decl(trf_9137)
static void C_ccall trf_9137(C_word c,C_word *av) C_noret;
static void C_ccall trf_9137(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9137(t0,t1,t2,t3);}

C_noret_decl(trf_9151)
static void C_ccall trf_9151(C_word c,C_word *av) C_noret;
static void C_ccall trf_9151(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9151(t0,t1,t2);}

C_noret_decl(trf_9201)
static void C_ccall trf_9201(C_word c,C_word *av) C_noret;
static void C_ccall trf_9201(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9201(t0,t1,t2);}

C_noret_decl(trf_9249)
static void C_ccall trf_9249(C_word c,C_word *av) C_noret;
static void C_ccall trf_9249(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9249(t0,t1,t2);}

C_noret_decl(trf_9308)
static void C_ccall trf_9308(C_word c,C_word *av) C_noret;
static void C_ccall trf_9308(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_9308(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_9316)
static void C_ccall trf_9316(C_word c,C_word *av) C_noret;
static void C_ccall trf_9316(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9316(t0,t1,t2);}

C_noret_decl(trf_9339)
static void C_ccall trf_9339(C_word c,C_word *av) C_noret;
static void C_ccall trf_9339(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9339(t0,t1,t2);}

C_noret_decl(trf_9367)
static void C_ccall trf_9367(C_word c,C_word *av) C_noret;
static void C_ccall trf_9367(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9367(t0,t1,t2);}

C_noret_decl(trf_9389)
static void C_ccall trf_9389(C_word c,C_word *av) C_noret;
static void C_ccall trf_9389(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9389(t0,t1,t2);}

C_noret_decl(trf_9458)
static void C_ccall trf_9458(C_word c,C_word *av) C_noret;
static void C_ccall trf_9458(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_9458(t0,t1,t2,t3,t4);}

C_noret_decl(trf_9470)
static void C_ccall trf_9470(C_word c,C_word *av) C_noret;
static void C_ccall trf_9470(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_9470(t0,t1,t2,t3,t4);}

C_noret_decl(trf_9478)
static void C_ccall trf_9478(C_word c,C_word *av) C_noret;
static void C_ccall trf_9478(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9478(t0,t1,t2);}

C_noret_decl(trf_9501)
static void C_ccall trf_9501(C_word c,C_word *av) C_noret;
static void C_ccall trf_9501(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9501(t0,t1,t2);}

C_noret_decl(trf_9529)
static void C_ccall trf_9529(C_word c,C_word *av) C_noret;
static void C_ccall trf_9529(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9529(t0,t1,t2);}

C_noret_decl(trf_9570)
static void C_ccall trf_9570(C_word c,C_word *av) C_noret;
static void C_ccall trf_9570(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9570(t0,t1,t2);}

C_noret_decl(trf_9641)
static void C_ccall trf_9641(C_word c,C_word *av) C_noret;
static void C_ccall trf_9641(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_9641(t0,t1,t2,t3,t4);}

C_noret_decl(trf_9653)
static void C_ccall trf_9653(C_word c,C_word *av) C_noret;
static void C_ccall trf_9653(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_9653(t0,t1,t2,t3,t4);}

C_noret_decl(trf_9661)
static void C_ccall trf_9661(C_word c,C_word *av) C_noret;
static void C_ccall trf_9661(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9661(t0,t1,t2);}

C_noret_decl(trf_9693)
static void C_ccall trf_9693(C_word c,C_word *av) C_noret;
static void C_ccall trf_9693(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9693(t0,t1,t2);}

C_noret_decl(trf_9716)
static void C_ccall trf_9716(C_word c,C_word *av) C_noret;
static void C_ccall trf_9716(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9716(t0,t1,t2);}

C_noret_decl(trf_9755)
static void C_ccall trf_9755(C_word c,C_word *av) C_noret;
static void C_ccall trf_9755(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9755(t0,t1,t2);}

C_noret_decl(trf_9808)
static void C_ccall trf_9808(C_word c,C_word *av) C_noret;
static void C_ccall trf_9808(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9808(t0,t1,t2);}

C_noret_decl(trf_9888)
static void C_ccall trf_9888(C_word c,C_word *av) C_noret;
static void C_ccall trf_9888(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9888(t0,t1,t2);}

C_noret_decl(trf_9943)
static void C_ccall trf_9943(C_word c,C_word *av) C_noret;
static void C_ccall trf_9943(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9943(t0,t1,t2);}

C_noret_decl(trf_9977)
static void C_ccall trf_9977(C_word c,C_word *av) C_noret;
static void C_ccall trf_9977(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9977(t0,t1,t2);}

/* f13587 in k6702 in g1173 in k6788 in loop2 in loop in k8491 in k8488 in k8485 in k8479 in k8460 in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in ... */
static void C_ccall f13587(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f13587,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f13591 in g1173 in k6788 in loop2 in loop in k8491 in k8488 in k8485 in k8479 in k8460 in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f13591(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f13591,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k10000 in map-loop2380 in k9884 in a9881 in k9865 in k9862 in k9612 in k9429 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in ... */
static void C_ccall f_10002(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10002,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_9977(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k10018 in k9862 in k9612 in k9429 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10020(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10020,c,av);}
/* modules.scm:762: module-imports */
t2=((C_word*)t0)[2];
f_9201(t2,((C_word*)t0)[3],t1);}

/* ##sys#expand-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10026(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6=av[6];
C_word t7=av[7];
C_word t8=av[8];
C_word t9=av[9];
C_word t10;
C_word t11;
C_word *a;
if(c!=10) C_bad_argc_2(c,10,t0);
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_10026,c,av);}
a=C_alloc(11);
t10=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_10030,a[2]=t3,a[3]=t4,a[4]=t9,a[5]=t5,a[6]=t6,a[7]=t7,a[8]=t8,a[9]=t2,a[10]=t1,tmp=(C_word)a,a+=11,tmp);
/* modules.scm:765: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[149]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[149]+1);
av2[1]=t10;
av2[2]=t9;
av2[3]=t2;
av2[4]=lf[166];
tp(5,av2);}}

/* k10028 in ##sys#expand-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10030(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,3)))){
C_save_and_reclaim((void *)f_10030,c,av);}
a=C_alloc(20);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10031,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word)li139),tmp=(C_word)a,a+=10,tmp);
t3=C_i_cdr(((C_word*)t0)[9]);
t4=C_i_check_list_2(t3,lf[35]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10065,a[2]=((C_word*)t0)[10],tmp=(C_word)a,a+=3,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10067,a[2]=t7,a[3]=t2,a[4]=((C_word)li140),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_10067(t9,t5,t3);}

/* g2448 in k10028 in ##sys#expand-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_10031(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,0,8)))){
C_save_and_reclaim_args((void *)trf_10031,3,t0,t1,t2);}
a=C_alloc(16);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10037,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word)li137),tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10043,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word)li138),tmp=(C_word)a,a+=9,tmp);
/* modules.scm:768: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* a10036 in g2448 in k10028 in ##sys#expand-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10037(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_10037,c,av);}
/* modules.scm:768: ##sys#decompose-import */
t2=*((C_word*)lf[76]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
av2[5]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* a10042 in g2448 in k10028 in ##sys#expand-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10043(C_word c,C_word *av){
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
C_word *a;
if(c!=8) C_bad_argc_2(c,8,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,10)))){
C_save_and_reclaim((void *)f_10043,c,av);}
if(C_truep(C_i_not(t4))){
/* modules.scm:770: ##sys#syntax-error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[144]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[144]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[163];
av2[4]=t2;
av2[5]=((C_word*)t0)[3];
tp(6,av2);}}
else{
/* modules.scm:771: ##sys#import */
t8=*((C_word*)lf[164]+1);{
C_word *av2;
if(c >= 11) {
  av2=av;
} else {
  av2=C_alloc(11);
}
av2[0]=t8;
av2[1]=t1;
av2[2]=t4;
av2[3]=t5;
av2[4]=t6;
av2[5]=t7;
av2[6]=((C_word*)t0)[4];
av2[7]=((C_word*)t0)[5];
av2[8]=((C_word*)t0)[6];
av2[9]=((C_word*)t0)[7];
av2[10]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t8+1)))(11,av2);}}}

/* k10063 in k10028 in ##sys#expand-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10065(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10065,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[165];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* for-each-loop2447 in k10028 in ##sys#expand-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_10067(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_10067,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10077,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:766: g2448 */
t4=((C_word*)t0)[3];
f_10031(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k10075 in for-each-loop2447 in k10028 in ##sys#expand-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10077(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10077,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_10067(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* ##sys#import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10090(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6=av[6];
C_word t7=av[7];
C_word t8=av[8];
C_word t9=av[9];
C_word t10=av[10];
C_word t11;
C_word t12;
C_word *a;
if(c!=11) C_bad_argc_2(c,11,t0);
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_10090,c,av);}
a=C_alloc(12);
t11=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_10094,a[2]=t6,a[3]=t3,a[4]=t7,a[5]=t4,a[6]=t1,a[7]=t9,a[8]=t5,a[9]=t10,a[10]=t8,a[11]=t2,tmp=(C_word)a,a+=12,tmp);
/* modules.scm:776: ##sys#current-module */
t12=*((C_word*)lf[4]+1);{
C_word *av2=av;
av2[0]=t12;
av2[1]=t11;
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}

/* k10092 in ##sys#import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10094(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10094,c,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_10097,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
if(C_truep(t1)){
if(C_truep(((C_word*)t0)[10])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10507,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_check_structure_2(t1,lf[6],lf[60]);
t5=C_i_block_ref(t1,C_fix(9));
t6=C_a_i_list1(&a,1,((C_word*)t0)[11]);
/* modules.scm:781: scheme#append */
t7=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=t5;
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10522,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_check_structure_2(t1,lf[6],lf[59]);
t5=C_i_block_ref(t1,C_fix(8));
t6=C_a_i_list1(&a,1,((C_word*)t0)[11]);
/* modules.scm:784: scheme#append */
t7=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=t5;
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_10097(2,av2);}}}

/* k10095 in k10092 in ##sys#import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10097(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_10097,c,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10107,a[2]=((C_word*)t0)[2],a[3]=((C_word)li142),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[3],lf[35]);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_10151,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10476,a[2]=t6,a[3]=t2,a[4]=((C_word)li149),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_10476(t8,t4,((C_word*)t0)[3]);}

/* g2509 in k10095 in k10092 in ##sys#import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_10107(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_10107,3,t0,t1,t2);}
a=C_alloc(5);
t3=C_i_car(t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10145,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:791: import-env */
t5=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)C_fast_retrieve_proc(t5))(2,av2);}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k10143 in g2509 in k10095 in k10092 in ##sys#import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10145(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10145,c,av);}
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=C_u_i_cdr(((C_word*)t0)[3]);
if(C_truep(t3)){
t4=C_i_cdr(t2);
t5=C_eqp(t3,t4);
if(C_truep(C_i_not(t5))){
/* modules.scm:794: ##sys#notice */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[167]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[167]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=lf[168];
av2[3]=((C_word*)t0)[2];
tp(4,av2);}}
else{
t6=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}
else{
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10149 in k10095 in k10092 in ##sys#import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10151(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_10151,c,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10152,a[2]=((C_word*)t0)[2],a[3]=((C_word)li143),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[3],lf[35]);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_10194,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10453,a[2]=t6,a[3]=t2,a[4]=((C_word)li148),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_10453(t8,t4,((C_word*)t0)[3]);}

/* g2519 in k10149 in k10095 in k10092 in ##sys#import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_10152(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_10152,3,t0,t1,t2);}
a=C_alloc(5);
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10188,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:798: macro-env */
t5=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)C_fast_retrieve_proc(t5))(2,av2);}}

/* k10186 in g2519 in k10149 in k10095 in k10092 in ##sys#import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10188(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10188,c,av);}
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=C_u_i_cdr(((C_word*)t0)[3]);
t4=C_i_cdr(t2);
t5=C_eqp(t3,t4);
if(C_truep(C_i_not(t5))){
/* modules.scm:800: ##sys#notice */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[167]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[167]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=lf[169];
av2[3]=C_u_i_car(((C_word*)t0)[3]);
tp(4,av2);}}
else{
t6=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}
else{
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10192 in k10149 in k10095 in k10092 in ##sys#import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10194(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_10194,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10197,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[7])){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10222,a[2]=((C_word*)t0)[8],a[3]=t2,a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[8])){
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_10222(2,av2);}}
else{
/* modules.scm:804: ##sys#syntax-error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[144]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[144]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[10];
av2[3]=lf[170];
tp(4,av2);}}}
else{
t3=t2;
f_10197(t3,C_SCHEME_UNDEFINED);}}

/* k10195 in k10192 in k10149 in k10095 in k10092 in ##sys#import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_10197(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,2)))){
C_save_and_reclaim_args((void *)trf_10197,2,t0,t1);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10200,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10215,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10219,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:825: import-env */
t5=((C_word*)t0)[5];{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)C_fast_retrieve_proc(t5))(2,av2);}}

/* k10198 in k10195 in k10192 in k10149 in k10095 in k10092 in ##sys#import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10200(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_10200,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10207,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10211,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:826: macro-env */
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k10205 in k10198 in k10195 in k10192 in k10149 in k10095 in k10092 in ##sys#import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10207(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10207,c,av);}
/* modules.scm:826: macro-env */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* k10209 in k10198 in k10195 in k10192 in k10149 in k10095 in k10092 in ##sys#import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10211(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_10211,c,av);}
a=C_alloc(6);
/* modules.scm:826: merge-se */
f_6796(((C_word*)t0)[2],C_a_i_list(&a,2,t1,((C_word*)t0)[3]));}

/* k10213 in k10195 in k10192 in k10149 in k10095 in k10092 in ##sys#import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10215(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10215,c,av);}
/* modules.scm:825: import-env */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* k10217 in k10195 in k10192 in k10149 in k10095 in k10092 in ##sys#import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10219(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_10219,c,av);}
a=C_alloc(6);
/* modules.scm:825: merge-se */
f_6796(((C_word*)t0)[2],C_a_i_list(&a,2,t1,((C_word*)t0)[3]));}

/* k10220 in k10192 in k10149 in k10095 in k10092 in ##sys#import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10222(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,3)))){
C_save_and_reclaim((void *)f_10222,c,av);}
a=C_alloc(27);
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[6],lf[14]);
t3=C_i_block_ref(((C_word*)t0)[2],C_fix(3));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10228,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=C_eqp(C_SCHEME_TRUE,t3);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10248,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10345,a[2]=((C_word*)t0)[2],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=C_i_check_structure_2(((C_word*)t0)[2],lf[6],lf[16]);
/* modules.scm:807: scheme#append */
t9=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t9;
av2[1]=t7;
av2[2]=((C_word*)t0)[5];
av2[3]=C_i_block_ref(((C_word*)t0)[2],C_fix(12));
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10356,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t7=C_i_check_structure_2(((C_word*)t0)[2],lf[6],lf[14]);
t8=C_i_block_ref(((C_word*)t0)[2],C_fix(3));
t9=C_eqp(C_SCHEME_TRUE,t8);
t10=(C_truep(t9)?C_SCHEME_END_OF_LIST:t8);
t11=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t12=t11;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=((C_word*)t13)[1];
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10370,a[2]=t6,a[3]=t10,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10413,a[2]=t13,a[3]=t17,a[4]=t14,a[5]=((C_word)li147),tmp=(C_word)a,a+=6,tmp));
t19=((C_word*)t17)[1];
f_10413(t19,t15,((C_word*)t0)[6]);}}

/* k10226 in k10220 in k10192 in k10149 in k10095 in k10092 in ##sys#import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10228(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_10228,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10231,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10238,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_check_structure_2(((C_word*)t0)[3],lf[6],lf[66]);
t5=C_i_block_ref(((C_word*)t0)[3],C_fix(13));
/* modules.scm:823: merge-se */
f_6796(t3,C_a_i_list(&a,2,t5,((C_word*)t0)[4]));}

/* k10229 in k10226 in k10220 in k10192 in k10149 in k10095 in k10092 in ##sys#import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10231(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10231,c,av);}
t2=((C_word*)t0)[2];
f_10197(t2,C_SCHEME_UNDEFINED);}

/* k10236 in k10226 in k10220 in k10192 in k10149 in k10095 in k10092 in ##sys#import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10238(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10238,c,av);}
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[6],C_SCHEME_FALSE);
/* modules.scm:95: ##sys#block-set! */
t3=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(13);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k10246 in k10220 in k10192 in k10149 in k10095 in k10092 in ##sys#import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10248(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_10248,c,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10255,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_structure_2(((C_word*)t0)[2],lf[6],lf[34]);
t4=C_i_block_ref(((C_word*)t0)[2],C_fix(5));
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10266,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10309,a[2]=t7,a[3]=t11,a[4]=t8,a[5]=((C_word)li145),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_10309(t13,t9,((C_word*)t0)[5]);}

/* k10253 in k10246 in k10220 in k10192 in k10149 in k10095 in k10092 in ##sys#import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10255(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10255,c,av);}
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[6],C_SCHEME_FALSE);
/* modules.scm:95: ##sys#block-set! */
t3=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(5);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k10264 in k10246 in k10220 in k10192 in k10149 in k10095 in k10092 in ##sys#import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10266(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_10266,c,av);}
a=C_alloc(18);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10273,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10275,a[2]=t4,a[3]=t8,a[4]=t5,a[5]=((C_word)li144),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_10275(t10,t6,((C_word*)t0)[4]);}

/* k10271 in k10264 in k10246 in k10220 in k10192 in k10149 in k10095 in k10092 in ##sys#import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10273(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10273,c,av);}
/* modules.scm:810: scheme#append */
t2=*((C_word*)lf[21]+1);{
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

/* map-loop2587 in k10264 in k10246 in k10220 in k10192 in k10149 in k10095 in k10092 in ##sys#import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_10275(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10275,3,t0,t1,t2);}
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

/* map-loop2561 in k10246 in k10220 in k10192 in k10149 in k10095 in k10092 in ##sys#import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_10309(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10309,3,t0,t1,t2);}
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

/* k10343 in k10220 in k10192 in k10149 in k10095 in k10092 in ##sys#import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10345(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10345,c,av);}
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[6],C_SCHEME_FALSE);
/* modules.scm:95: ##sys#block-set! */
t3=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(12);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k10354 in k10220 in k10192 in k10149 in k10095 in k10092 in ##sys#import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10356(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10356,c,av);}
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[6],C_SCHEME_FALSE);
/* modules.scm:95: ##sys#block-set! */
t3=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(3);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k10368 in k10220 in k10192 in k10149 in k10095 in k10092 in ##sys#import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10370(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_10370,c,av);}
a=C_alloc(18);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10377,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10379,a[2]=t4,a[3]=t8,a[4]=t5,a[5]=((C_word)li146),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_10379(t10,t6,((C_word*)t0)[4]);}

/* k10375 in k10368 in k10220 in k10192 in k10149 in k10095 in k10092 in ##sys#import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10377(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10377,c,av);}
/* modules.scm:816: scheme#append */
t2=*((C_word*)lf[21]+1);{
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

/* map-loop2641 in k10368 in k10220 in k10192 in k10149 in k10095 in k10092 in ##sys#import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_10379(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10379,3,t0,t1,t2);}
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

/* map-loop2615 in k10220 in k10192 in k10149 in k10095 in k10092 in ##sys#import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_10413(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10413,3,t0,t1,t2);}
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

/* for-each-loop2518 in k10149 in k10095 in k10092 in ##sys#import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_10453(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_10453,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10463,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:796: g2519 */
t4=((C_word*)t0)[3];
f_10152(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k10461 in for-each-loop2518 in k10149 in k10095 in k10092 in ##sys#import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10463(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10463,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_10453(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* for-each-loop2508 in k10095 in k10092 in ##sys#import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_10476(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_10476,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10486,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:788: g2509 */
t4=((C_word*)t0)[3];
f_10107(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k10484 in for-each-loop2508 in k10095 in k10092 in ##sys#import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10486(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10486,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_10476(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k10505 in k10092 in ##sys#import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10507(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10507,c,av);}
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[6],C_SCHEME_FALSE);
/* modules.scm:95: ##sys#block-set! */
t3=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(9);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k10520 in k10092 in ##sys#import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10522(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10522,c,av);}
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[6],C_SCHEME_FALSE);
/* modules.scm:95: ##sys#block-set! */
t3=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(8);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* module-rename in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_10532(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_10532,3,t1,t2,t3);}
a=C_alloc(3);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10540,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:830: scheme#string-append */
t5=*((C_word*)lf[113]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t4;
av2[2]=C_slot(t3,C_fix(1));
av2[3]=lf[171];
av2[4]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k10538 in module-rename in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10540(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10540,c,av);}
/* modules.scm:829: ##sys#string->symbol */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[155]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[155]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* ##sys#alias-global-hook in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10550(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_10550,c,av);}
a=C_alloc(10);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10553,a[2]=t3,a[3]=t4,a[4]=((C_word)li154),tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_u_i_namespaced_symbolp(t2))){
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10622,a[2]=t2,a[3]=t5,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:845: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[31]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[31]+1);
av2[1]=t6;
tp(2,av2);}}}

/* mrename in ##sys#alias-global-hook in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_10553(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10553,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10557,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:837: ##sys#current-module */
t4=*((C_word*)lf[4]+1);{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k10555 in mrename in ##sys#alias-global-hook in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10557(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_10557,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10561,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li153),tmp=(C_word)a,a+=6,tmp);
/* modules.scm:837: g2698 */
t3=t2;
f_10561(t3,((C_word*)t0)[5],t1);}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* g2698 in k10555 in mrename in ##sys#alias-global-hook in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_10561(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_10561,3,t0,t1,t2);}
a=C_alloc(11);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10568,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[3])){
t4=C_i_check_structure_2(t2,lf[6],lf[8]);
/* modules.scm:842: module-rename */
f_10532(t1,((C_word*)t0)[2],C_i_block_ref(t2,C_fix(1)));}
else{
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6427,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:241: module-undefined-list */
t5=*((C_word*)lf[9]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t4=C_i_check_structure_2(t2,lf[6],lf[8]);
/* modules.scm:842: module-rename */
f_10532(t1,((C_word*)t0)[2],C_i_block_ref(t2,C_fix(1)));}}}

/* k10566 in g2698 in k10555 in mrename in ##sys#alias-global-hook in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10568(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10568,c,av);}
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[6],lf[8]);
/* modules.scm:842: module-rename */
f_10532(((C_word*)t0)[3],((C_word*)t0)[4],C_i_block_ref(((C_word*)t0)[2],C_fix(1)));}

/* g2709 in k10620 in ##sys#alias-global-hook in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_10596(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_10596,3,t0,t1,t2);}
t3=C_i_cdr(t2);
if(C_truep(C_i_pairp(t3))){
/* modules.scm:850: mrename */
t4=((C_word*)t0)[2];
f_10553(t4,t1,((C_word*)t0)[3]);}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k10620 in ##sys#alias-global-hook in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10622(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_10622,c,av);}
a=C_alloc(5);
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10596,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word)li155),tmp=(C_word)a,a+=5,tmp);
/* modules.scm:844: g2709 */
t4=t3;
f_10596(t4,((C_word*)t0)[4],t2);}
else{
/* modules.scm:851: mrename */
t3=((C_word*)t0)[3];
f_10553(t3,((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* ##sys#validate-exports in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10624(C_word c,C_word *av){
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
C_word t15;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_10624,c,av);}
a=C_alloc(22);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10627,a[2]=t3,a[3]=((C_word)li157),tmp=(C_word)a,a+=4,tmp));
t9=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10633,a[2]=t5,a[3]=t2,a[4]=((C_word)li158),tmp=(C_word)a,a+=5,tmp));
t10=C_eqp(lf[176],t2);
if(C_truep(t10)){
t11=t1;{
C_word *av2=av;
av2[0]=t11;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}
else{
if(C_truep(C_i_symbolp(t2))){
/* modules.scm:861: iface */
t11=((C_word*)t7)[1];
f_10633(t11,t1,t2);}
else{
t11=C_i_listp(t2);
if(C_truep(C_i_not(t11))){
/* modules.scm:863: err */
t12=((C_word*)t5)[1];
f_10627(t12,t1,C_a_i_list(&a,2,lf[177],t2));}
else{
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10674,a[2]=t5,a[3]=t2,a[4]=t13,a[5]=t7,a[6]=((C_word)li160),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_10674(t15,t1,t2);}}}}

/* err in ##sys#validate-exports in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_10627(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_10627,3,t0,t1,t2);}{
C_word av2[5];
av2[0]=0;
av2[1]=t1;
av2[2]=*((C_word*)lf[144]+1);
av2[3]=((C_word*)t0)[2];
av2[4]=t2;
C_apply(5,av2);}}

/* iface in ##sys#validate-exports in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_10633(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_10633,3,t0,t1,t2);}
a=C_alloc(9);
t3=C_i_getprop(t2,lf[174],C_SCHEME_FALSE);
if(C_truep(t3)){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* modules.scm:859: err */
t4=((C_word*)((C_word*)t0)[2])[1];
f_10627(t4,t1,C_a_i_list(&a,3,lf[175],t2,((C_word*)t0)[3]));}}

/* loop in ##sys#validate-exports in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_10674(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_10674,3,t0,t1,t2);}
a=C_alloc(11);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_pairp(t2);
if(C_truep(C_i_not(t3))){
/* modules.scm:868: err */
t4=((C_word*)((C_word*)t0)[2])[1];
f_10627(t4,t1,C_a_i_list(&a,2,lf[178],((C_word*)t0)[3]));}
else{
t4=C_i_car(t2);
if(C_truep(C_i_symbolp(t4))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10706,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:871: loop */
t13=t5;
t14=C_u_i_cdr(t2);
t1=t13;
t2=t14;
goto loop;}
else{
t5=C_i_listp(t4);
if(C_truep(C_i_not(t5))){
/* modules.scm:873: err */
t6=((C_word*)((C_word*)t0)[2])[1];
f_10627(t6,t1,C_a_i_list(&a,3,lf[179],t4,((C_word*)t0)[3]));}
else{
t6=C_i_car(t4);
t7=C_eqp(lf[180],t6);
if(C_truep(t7)){
t8=C_u_i_cdr(t4);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10732,a[2]=t1,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:875: loop */
t13=t9;
t14=C_u_i_cdr(t2);
t1=t13;
t2=t14;
goto loop;}
else{
t8=C_eqp(lf[181],C_u_i_car(t4));
if(C_truep(t8)){
t9=C_i_pairp(C_u_i_cdr(t4));
t10=(C_truep(t9)?C_i_symbolp(C_i_cadr(t4)):C_SCHEME_FALSE);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10753,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:878: iface */
t12=((C_word*)((C_word*)t0)[5])[1];
f_10633(t12,t11,C_i_cadr(t4));}
else{
/* modules.scm:879: err */
t11=((C_word*)((C_word*)t0)[2])[1];
f_10627(t11,t1,C_a_i_list(&a,3,lf[182],t4,((C_word*)t0)[3]));}}
else{
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10783,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=t10,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],a[8]=((C_word)li159),tmp=(C_word)a,a+=9,tmp));
t12=((C_word*)t10)[1];
f_10783(t12,t1,t4);}}}}}}}

/* k10704 in loop in ##sys#validate-exports in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10706(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_10706,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k10730 in loop in ##sys#validate-exports in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10732(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_10732,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k10751 in loop in ##sys#validate-exports in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10753(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_10753,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10757,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:878: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_10674(t3,t2,C_u_i_cdr(((C_word*)t0)[4]));}

/* k10755 in k10751 in loop in ##sys#validate-exports in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10757(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10757,c,av);}
/* modules.scm:878: scheme#append */
t2=*((C_word*)lf[21]+1);{
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

/* loop2 in loop in ##sys#validate-exports in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_10783(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_10783,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10797,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:882: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_10674(t4,t3,C_i_cdr(((C_word*)t0)[4]));}
else{
t3=C_i_car(t2);
if(C_truep(C_i_symbolp(t3))){
/* modules.scm:883: loop2 */
t5=t1;
t6=C_u_i_cdr(t2);
t1=t5;
t2=t6;
goto loop;}
else{
/* modules.scm:884: err */
t4=((C_word*)((C_word*)t0)[6])[1];
f_10627(t4,t1,C_a_i_list(&a,3,lf[183],((C_word*)t0)[2],((C_word*)t0)[7]));}}}

/* k10795 in loop2 in loop in ##sys#validate-exports in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10797(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_10797,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* ##sys#register-functor in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10839(C_word c,C_word *av){
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
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(C_unlikely(!C_demand(C_calculate_demand(14,c,1)))){
C_save_and_reclaim((void *)f_10839,c,av);}
a=C_alloc(14);
t6=C_a_i_cons(&a,2,t4,t5);
t7=C_a_i_cons(&a,2,t3,t6);
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_a_i_putprop(&a,3,t2,lf[71],t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* ##sys#instantiate-functor in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10855(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_10855,c,av);}
a=C_alloc(18);
t5=C_i_getprop(t3,lf[71],C_SCHEME_FALSE);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10863,a[2]=t2,a[3]=((C_word)li163),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10870,a[2]=t5,a[3]=t2,a[4]=t4,a[5]=t3,a[6]=t6,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t5)){
t8=t7;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_UNDEFINED;
f_10870(2,av2);}}
else{
/* modules.scm:893: err */
t8=t6;
f_10863(t8,t7,C_a_i_list(&a,2,lf[190],t3));}}

/* err in ##sys#instantiate-functor in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_10863(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_10863,3,t0,t1,t2);}{
C_word av2[5];
av2[0]=0;
av2[1]=t1;
av2[2]=*((C_word*)lf[144]+1);
av2[3]=((C_word*)t0)[2];
av2[4]=t2;
C_apply(5,av2);}}

/* k10868 in ##sys#instantiate-functor in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10870(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(23,c,4)))){
C_save_and_reclaim((void *)f_10870,c,av);}
a=C_alloc(23);
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_cadr(((C_word*)t0)[2]);
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10880,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li165),tmp=(C_word)a,a+=8,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10943,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10964,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=t6,a[5]=t9,a[6]=((C_word)li167),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_10964(t11,t7,((C_word*)t0)[4],t2);}

/* merr in k10868 in ##sys#instantiate-functor in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_10880(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,0,3)))){
C_save_and_reclaim_args((void *)trf_10880,2,t0,t1);}
a=C_alloc(22);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_check_list_2(((C_word*)t0)[4],lf[20]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10902,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10904,a[2]=t5,a[3]=t10,a[4]=t6,a[5]=((C_word)li164),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_10904(t12,t8,((C_word*)t0)[4]);}

/* k10900 in merr in k10868 in ##sys#instantiate-functor in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10902(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_10902,c,av);}
a=C_alloc(12);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
/* modules.scm:898: err */
t3=((C_word*)t0)[3];
f_10863(t3,((C_word*)t0)[4],C_a_i_list(&a,3,lf[186],((C_word*)t0)[5],t2));}

/* map-loop2787 in merr in k10868 in ##sys#instantiate-functor in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_10904(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10904,3,t0,t1,t2);}
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

/* k10941 in k10868 in ##sys#instantiate-functor in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10943(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_10943,c,av);}
a=C_alloc(18);
t2=C_eqp(lf[176],((C_word*)t0)[2]);
t3=(C_truep(t2)?C_a_i_cons(&a,2,C_SCHEME_TRUE,((C_word*)t0)[3]):C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]));
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=C_a_i_cons(&a,2,lf[187],t4);
t6=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list(&a,3,lf[188],t1,t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* loop in k10868 in ##sys#instantiate-functor in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_10964(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,3)))){
C_save_and_reclaim_args((void *)trf_10964,4,t0,t1,t2,t3);}
a=C_alloc(10);
if(C_truep(C_i_nullp(t2))){
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10976,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word)li166),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_10976(t7,t1,t3);}
else{
if(C_truep(C_i_nullp(t3))){
/* modules.scm:917: merr */
t4=((C_word*)t0)[4];
f_10880(t4,t1);}
else{
t4=C_i_car(t3);
t5=C_i_car(t4);
t6=C_u_i_cdr(t4);
t7=C_i_pairp(t5);
t8=(C_truep(t7)?C_i_car(t5):t5);
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11051,a[2]=t8,a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=t3,a[7]=((C_word*)t0)[2],a[8]=t6,a[9]=((C_word*)t0)[3],tmp=(C_word)a,a+=10,tmp);
/* modules.scm:925: chicken.internal#library-id */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[25]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t9;
av2[2]=C_i_car(t2);
tp(3,av2);}}}}

/* loop2 in loop in k10868 in ##sys#instantiate-functor in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_10976(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_10976,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=C_i_car(t3);
if(C_truep(C_i_pairp(t4))){
t5=C_u_i_cdr(t3);
t6=C_i_caar(t3);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10999,a[2]=t6,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t2,a[6]=((C_word*)t0)[3],a[7]=t5,a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11019,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:911: scheme#cadar */
t9=*((C_word*)lf[101]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
/* modules.scm:915: merr */
t5=((C_word*)t0)[5];
f_10880(t5,t1);}}}

/* k10997 in loop2 in loop in k10868 in ##sys#instantiate-functor in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_10999(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_10999,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11002,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* modules.scm:912: match-functor-argument */
f_11081(t2,((C_word*)t0)[6],t1,((C_word*)t0)[7],((C_word*)t0)[8]);}

/* k11000 in k10997 in loop2 in loop in k10868 in ##sys#instantiate-functor in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_11002(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_11002,c,av);}
a=C_alloc(10);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11013,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:913: loop2 */
t4=((C_word*)((C_word*)t0)[5])[1];
f_10976(t4,t3,C_u_i_cdr(((C_word*)t0)[6]));}

/* k11011 in k11000 in k10997 in loop2 in loop in k10868 in ##sys#instantiate-functor in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_11013(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_11013,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k11017 in loop2 in loop in k10868 in ##sys#instantiate-functor in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_11019(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11019,c,av);}
/* modules.scm:911: chicken.internal#library-id */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[25]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[25]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k11049 in loop in k10868 in ##sys#instantiate-functor in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_11051(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_11051,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11054,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:926: match-functor-argument */
f_11081(t2,((C_word*)t0)[7],t1,((C_word*)t0)[8],((C_word*)t0)[9]);}

/* k11052 in k11049 in loop in k10868 in ##sys#instantiate-functor in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_11054(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_11054,c,av);}
a=C_alloc(10);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11065,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:928: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_10964(t4,t3,C_u_i_cdr(((C_word*)t0)[6]),C_u_i_cdr(((C_word*)t0)[7]));}

/* k11063 in k11052 in k11049 in loop in k10868 in ##sys#instantiate-functor in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_11065(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_11065,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* match-functor-argument in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_11081(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,3)))){
C_save_and_reclaim_args((void *)trf_11081,5,t1,t2,t3,t4,t5);}
a=C_alloc(10);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11085,a[2]=t4,a[3]=t1,a[4]=t5,a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11238,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:935: ##sys#resolve-module-name */
t8=*((C_word*)lf[22]+1);{
C_word av2[4];
av2[0]=t8;
av2[1]=t7;
av2[2]=t3;
av2[3]=lf[6];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k11083 in match-functor-argument in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_11085(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_11085,c,av);}
a=C_alloc(21);
t2=C_eqp(((C_word*)t0)[2],lf[176]);
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11092,a[2]=t1,a[3]=t4,a[4]=((C_word)li169),tmp=(C_word)a,a+=5,tmp);
t6=C_i_check_list_2(((C_word*)t0)[2],lf[35]);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11132,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11213,a[2]=t9,a[3]=t5,a[4]=((C_word)li171),tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_11213(t11,t7,((C_word*)t0)[2]);}}

/* g2848 in k11083 in match-functor-argument in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_11092(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_11092,3,t0,t1,t2);}
a=C_alloc(5);
t3=C_i_symbolp(t2);
t4=(C_truep(t3)?t2:C_i_car(t2));
t5=C_i_check_structure_2(((C_word*)t0)[2],lf[6],lf[15]);
t6=C_i_block_ref(((C_word*)t0)[2],C_fix(11));
t7=C_i_assq(t4,t6);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11105,a[2]=t1,a[3]=t4,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t7)){
t9=t8;
f_11105(t9,t7);}
else{
t9=C_i_check_structure_2(((C_word*)t0)[2],lf[6],lf[16]);
t10=t8;
f_11105(t10,C_i_assq(t4,C_i_block_ref(((C_word*)t0)[2],C_fix(12))));}}

/* k11103 in g2848 in k11083 in match-functor-argument in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_11105(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,1)))){
C_save_and_reclaim_args((void *)trf_11105,2,t0,t1);}
a=C_alloc(3);
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,t2);
t4=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k11130 in k11083 in match-functor-argument in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_11132(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_11132,c,av);}
a=C_alloc(9);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[2])[1]))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11145,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11149,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:950: scheme#symbol->string */
t4=*((C_word*)lf[116]+1);{
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
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k11143 in k11130 in k11083 in match-functor-argument in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_11145(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11145,c,av);}
/* modules.scm:946: ##sys#syntax-error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[144]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[144]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[6];
av2[3]=t1;
tp(4,av2);}}

/* k11147 in k11130 in k11083 in match-functor-argument in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_11149(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_11149,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11153,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:951: scheme#symbol->string */
t3=*((C_word*)lf[116]+1);{
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

/* k11151 in k11147 in k11130 in k11083 in match-functor-argument in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_11153(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_11153,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11157,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:952: scheme#symbol->string */
t3=*((C_word*)lf[116]+1);{
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

/* k11155 in k11151 in k11147 in k11130 in k11083 in match-functor-argument in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_11157(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11157,c,av);}
a=C_alloc(19);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=((C_word*)((C_word*)t0)[2])[1];
t7=C_i_check_list_2(t6,lf[20]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11177,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11179,a[2]=t4,a[3]=t10,a[4]=t5,a[5]=((C_word)li170),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_11179(t12,t8,t6);}

/* k11169 in map-loop2869 in k11155 in k11151 in k11147 in k11130 in k11083 in match-functor-argument in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_11171(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11171,c,av);}
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[136]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[136]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[196];
av2[3]=t1;
tp(4,av2);}}

/* k11175 in k11155 in k11151 in k11147 in k11130 in k11083 in match-functor-argument in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_11177(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,11)))){
C_save_and_reclaim((void *)f_11177,c,av);}{
C_word *av2;
if(c >= 12) {
  av2=av;
} else {
  av2=C_alloc(12);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[113]+1);
av2[3]=lf[191];
av2[4]=((C_word*)t0)[3];
av2[5]=lf[192];
av2[6]=lf[193];
av2[7]=((C_word*)t0)[4];
av2[8]=lf[194];
av2[9]=((C_word*)t0)[5];
av2[10]=lf[195];
av2[11]=t1;
C_apply(12,av2);}}

/* map-loop2869 in k11155 in k11151 in k11147 in k11130 in k11083 in match-functor-argument in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_11179(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_11179,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11204,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11171,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:953: scheme#symbol->string */
t6=*((C_word*)lf[116]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k11202 in map-loop2869 in k11155 in k11151 in k11147 in k11130 in k11083 in match-functor-argument in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_11204(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11204,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_11179(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* for-each-loop2847 in k11083 in match-functor-argument in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_11213(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_11213,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11223,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:938: g2848 */
t4=((C_word*)t0)[3];
f_11092(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k11221 in for-each-loop2847 in k11083 in match-functor-argument in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_11223(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11223,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_11213(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k11236 in match-functor-argument in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_11238(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11238,c,av);}
/* modules.scm:935: ##sys#find-module */
t2=*((C_word*)lf[26]+1);{
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
av2[4]=lf[6];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k11239 in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_11241(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_11241,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11244,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12073,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:1088: scheme#append */
t4=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[267];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k11242 in k11239 in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_11244(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_11244,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11247,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:1094: ##sys#register-core-module */
t3=*((C_word*)lf[83]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[266];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k11245 in k11242 in k11239 in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_11247(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_11247,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11250,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1095: ##sys#register-core-module */
t3=*((C_word*)lf[83]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[265];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k11248 in k11245 in k11242 in k11239 in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_11250(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_11250,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11253,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1097: ##sys#register-module-alias */
t3=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[263];
av2[3]=lf[264];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k11251 in k11248 in k11245 in k11242 in k11239 in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_11253(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_11253,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11256,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1098: ##sys#register-module-alias */
t3=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[214];
av2[3]=lf[262];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k11254 in k11251 in k11248 in k11245 in k11242 in k11239 in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_11256(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_11256,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11259,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12069,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1104: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[30]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t3;
tp(2,av2);}}

/* k11257 in k11254 in k11251 in k11248 in k11245 in k11242 in k11239 in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_11259(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_11259,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11262,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1106: ##sys#register-core-module */
t3=*((C_word*)lf[83]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[259];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=*((C_word*)lf[260]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k11260 in k11257 in k11254 in k11251 in k11248 in k11245 in k11242 in k11239 in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_11262(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_11262,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11265,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1109: ##sys#register-core-module */
t3=*((C_word*)lf[83]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[257];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=*((C_word*)lf[258]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in k11245 in k11242 in k11239 in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_11265(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_11265,c,av);}
a=C_alloc(24);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11268,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12065,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=lf[256];
t5=*((C_word*)lf[233]+1);
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12018,a[2]=t5,a[3]=((C_word)li198),tmp=(C_word)a,a+=4,tmp);
t11=C_SCHEME_UNDEFINED;
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12030,a[2]=t10,a[3]=t8,a[4]=t13,a[5]=t9,a[6]=((C_word)li199),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_12030(t15,t3,t4);}

/* k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in k11245 in k11242 in k11239 in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_11268(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_11268,c,av);}
a=C_alloc(24);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11271,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12011,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=lf[254];
t5=*((C_word*)lf[210]+1);
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11964,a[2]=t5,a[3]=((C_word)li196),tmp=(C_word)a,a+=4,tmp);
t11=C_SCHEME_UNDEFINED;
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11976,a[2]=t10,a[3]=t8,a[4]=t13,a[5]=t9,a[6]=((C_word)li197),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_11976(t15,t3,t4);}

/* k11269 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in k11245 in k11242 in k11239 in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_11271(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_11271,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11274,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1118: ##sys#register-core-module */
t3=*((C_word*)lf[83]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[251];
av2[3]=lf[208];
av2[4]=lf[252];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k11272 in k11269 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in k11245 in k11242 in k11239 in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_11274(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_11274,c,av);}
a=C_alloc(24);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11277,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11957,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=lf[250];
t5=*((C_word*)lf[210]+1);
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11910,a[2]=t5,a[3]=((C_word)li194),tmp=(C_word)a,a+=4,tmp);
t11=C_SCHEME_UNDEFINED;
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11922,a[2]=t10,a[3]=t8,a[4]=t13,a[5]=t9,a[6]=((C_word)li195),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_11922(t15,t3,t4);}

/* k11275 in k11272 in k11269 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in k11245 in k11242 in k11239 in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_11277(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_11277,c,av);}
a=C_alloc(24);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11280,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11903,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=lf[248];
t5=*((C_word*)lf[210]+1);
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11856,a[2]=t5,a[3]=((C_word)li192),tmp=(C_word)a,a+=4,tmp);
t11=C_SCHEME_UNDEFINED;
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11868,a[2]=t10,a[3]=t8,a[4]=t13,a[5]=t9,a[6]=((C_word)li193),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_11868(t15,t3,t4);}

/* k11278 in k11275 in k11272 in k11269 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in k11245 in k11242 in k11239 in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in ... */
static void C_ccall f_11280(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_11280,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11283,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1130: ##sys#register-core-module */
t3=*((C_word*)lf[83]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[244];
av2[3]=lf[245];
av2[4]=lf[246];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k11281 in k11278 in k11275 in k11272 in k11269 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in k11245 in k11242 in k11239 in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in ... */
static void C_ccall f_11283(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_11283,c,av);}
a=C_alloc(24);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11286,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11849,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=lf[243];
t5=*((C_word*)lf[210]+1);
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11802,a[2]=t5,a[3]=((C_word)li190),tmp=(C_word)a,a+=4,tmp);
t11=C_SCHEME_UNDEFINED;
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11814,a[2]=t10,a[3]=t8,a[4]=t13,a[5]=t9,a[6]=((C_word)li191),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_11814(t15,t3,t4);}

/* k11284 in k11281 in k11278 in k11275 in k11272 in k11269 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in k11245 in k11242 in k11239 in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in ... */
static void C_ccall f_11286(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_11286,c,av);}
a=C_alloc(24);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11289,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11795,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=lf[240];
t5=*((C_word*)lf[241]+1);
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11748,a[2]=t5,a[3]=((C_word)li188),tmp=(C_word)a,a+=4,tmp);
t11=C_SCHEME_UNDEFINED;
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11760,a[2]=t10,a[3]=t8,a[4]=t13,a[5]=t9,a[6]=((C_word)li189),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_11760(t15,t3,t4);}

/* k11287 in k11284 in k11281 in k11278 in k11275 in k11272 in k11269 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in k11245 in k11242 in k11239 in k5539 in k5535 in k4253 in k4250 in k4247 in ... */
static void C_ccall f_11289(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_11289,c,av);}
a=C_alloc(24);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11292,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11741,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=lf[237];
t5=*((C_word*)lf[210]+1);
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11694,a[2]=t5,a[3]=((C_word)li186),tmp=(C_word)a,a+=4,tmp);
t11=C_SCHEME_UNDEFINED;
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11706,a[2]=t10,a[3]=t8,a[4]=t13,a[5]=t9,a[6]=((C_word)li187),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_11706(t15,t3,t4);}

/* k11290 in k11287 in k11284 in k11281 in k11278 in k11275 in k11272 in k11269 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in k11245 in k11242 in k11239 in k5539 in k5535 in k4253 in k4250 in ... */
static void C_ccall f_11292(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_11292,c,av);}
a=C_alloc(24);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11295,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11687,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=lf[235];
t5=*((C_word*)lf[210]+1);
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11640,a[2]=t5,a[3]=((C_word)li184),tmp=(C_word)a,a+=4,tmp);
t11=C_SCHEME_UNDEFINED;
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11652,a[2]=t10,a[3]=t8,a[4]=t13,a[5]=t9,a[6]=((C_word)li185),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_11652(t15,t3,t4);}

/* k11293 in k11290 in k11287 in k11284 in k11281 in k11278 in k11275 in k11272 in k11269 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in k11245 in k11242 in k11239 in k5539 in k5535 in k4253 in ... */
static void C_ccall f_11295(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_11295,c,av);}
a=C_alloc(24);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11298,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11633,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=lf[232];
t5=*((C_word*)lf[233]+1);
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11586,a[2]=t5,a[3]=((C_word)li182),tmp=(C_word)a,a+=4,tmp);
t11=C_SCHEME_UNDEFINED;
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11598,a[2]=t10,a[3]=t8,a[4]=t13,a[5]=t9,a[6]=((C_word)li183),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_11598(t15,t3,t4);}

/* k11296 in k11293 in k11290 in k11287 in k11284 in k11281 in k11278 in k11275 in k11272 in k11269 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in k11245 in k11242 in k11239 in k5539 in k5535 in ... */
static void C_ccall f_11298(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_11298,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11301,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1161: ##sys#register-core-module */
t3=*((C_word*)lf[83]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[228];
av2[3]=lf[208];
av2[4]=lf[229];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k11299 in k11296 in k11293 in k11290 in k11287 in k11284 in k11281 in k11278 in k11275 in k11272 in k11269 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in k11245 in k11242 in k11239 in k5539 in ... */
static void C_ccall f_11301(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_11301,c,av);}
a=C_alloc(24);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11304,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11579,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=lf[227];
t5=*((C_word*)lf[210]+1);
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11532,a[2]=t5,a[3]=((C_word)li180),tmp=(C_word)a,a+=4,tmp);
t11=C_SCHEME_UNDEFINED;
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11544,a[2]=t10,a[3]=t8,a[4]=t13,a[5]=t9,a[6]=((C_word)li181),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_11544(t15,t3,t4);}

/* k11302 in k11299 in k11296 in k11293 in k11290 in k11287 in k11284 in k11281 in k11278 in k11275 in k11272 in k11269 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in k11245 in k11242 in k11239 in ... */
static void C_ccall f_11304(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_11304,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11307,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1167: ##sys#register-core-module */
t3=*((C_word*)lf[83]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[223];
av2[3]=lf[224];
av2[4]=lf[225];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k11305 in k11302 in k11299 in k11296 in k11293 in k11290 in k11287 in k11284 in k11281 in k11278 in k11275 in k11272 in k11269 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in k11245 in k11242 in ... */
static void C_ccall f_11307(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_11307,c,av);}
a=C_alloc(24);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11310,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11525,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=lf[222];
t5=*((C_word*)lf[210]+1);
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11478,a[2]=t5,a[3]=((C_word)li178),tmp=(C_word)a,a+=4,tmp);
t11=C_SCHEME_UNDEFINED;
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11490,a[2]=t10,a[3]=t8,a[4]=t13,a[5]=t9,a[6]=((C_word)li179),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_11490(t15,t3,t4);}

/* k11308 in k11305 in k11302 in k11299 in k11296 in k11293 in k11290 in k11287 in k11284 in k11281 in k11278 in k11275 in k11272 in k11269 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in k11245 in ... */
static void C_ccall f_11310(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_11310,c,av);}
a=C_alloc(24);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11313,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11471,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=lf[220];
t5=*((C_word*)lf[210]+1);
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11424,a[2]=t5,a[3]=((C_word)li176),tmp=(C_word)a,a+=4,tmp);
t11=C_SCHEME_UNDEFINED;
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11436,a[2]=t10,a[3]=t8,a[4]=t13,a[5]=t9,a[6]=((C_word)li177),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_11436(t15,t3,t4);}

/* k11311 in k11308 in k11305 in k11302 in k11299 in k11296 in k11293 in k11290 in k11287 in k11284 in k11281 in k11278 in k11275 in k11272 in k11269 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in ... */
static void C_ccall f_11313(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_11313,c,av);}
a=C_alloc(24);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11316,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11417,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=lf[217];
t5=*((C_word*)lf[210]+1);
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11370,a[2]=t5,a[3]=((C_word)li174),tmp=(C_word)a,a+=4,tmp);
t11=C_SCHEME_UNDEFINED;
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11382,a[2]=t10,a[3]=t8,a[4]=t13,a[5]=t9,a[6]=((C_word)li175),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_11382(t15,t3,t4);}

/* k11314 in k11311 in k11308 in k11305 in k11302 in k11299 in k11296 in k11293 in k11290 in k11287 in k11284 in k11281 in k11278 in k11275 in k11272 in k11269 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in ... */
static void C_ccall f_11316(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_11316,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11319,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1180: ##sys#register-core-module */
t3=*((C_word*)lf[83]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[214];
av2[3]=lf[208];
av2[4]=lf[215];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k11317 in k11314 in k11311 in k11308 in k11305 in k11302 in k11299 in k11296 in k11293 in k11290 in k11287 in k11284 in k11281 in k11278 in k11275 in k11272 in k11269 in k11266 in k11263 in k11260 in k11257 in k11254 in ... */
static void C_ccall f_11319(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_11319,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11322,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1186: ##sys#register-core-module */
t3=*((C_word*)lf[83]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[211];
av2[3]=lf[212];
av2[4]=lf[213];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k11320 in k11317 in k11314 in k11311 in k11308 in k11305 in k11302 in k11299 in k11296 in k11293 in k11290 in k11287 in k11284 in k11281 in k11278 in k11275 in k11272 in k11269 in k11266 in k11263 in k11260 in k11257 in ... */
static void C_ccall f_11322(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_11322,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[199]+1 /* (set! chicken.module#module-environment ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11324,a[2]=((C_word)li173),tmp=(C_word)a,a+=3,tmp));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11360,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken.base.import.scm:26: ##sys#register-core-module */
t4=*((C_word*)lf[83]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[207];
av2[3]=lf[208];
av2[4]=lf[209];
av2[5]=*((C_word*)lf[210]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}

/* chicken.module#module-environment in k11320 in k11317 in k11314 in k11311 in k11308 in k11305 in k11302 in k11299 in k11296 in k11293 in k11290 in k11287 in k11284 in k11281 in k11278 in k11275 in k11272 in k11269 in k11266 in k11263 in k11260 in ... */
static void C_ccall f_11324(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_11324,c,av);}
a=C_alloc(5);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?t2:C_get_rest_arg(c,3,av,3,t0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11331,a[2]=t1,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:1192: find-module/import-library */
f_9107(t5,t2,lf[200]);}

/* k11329 in chicken.module#module-environment in k11320 in k11317 in k11314 in k11311 in k11308 in k11305 in k11302 in k11299 in k11296 in k11293 in k11290 in k11287 in k11284 in k11281 in k11278 in k11275 in k11272 in k11269 in k11266 in k11263 in ... */
static void C_ccall f_11331(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_11331,c,av);}
a=C_alloc(5);
if(C_truep(C_i_not(t1))){
/* modules.scm:1194: ##sys#syntax-error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[144]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[144]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[200];
av2[3]=lf[201];
av2[4]=((C_word*)t0)[3];
tp(5,av2);}}
else{
t2=C_i_check_structure_2(t1,lf[6],lf[32]);
t3=C_i_block_ref(t1,C_fix(14));
t4=C_i_car(t3);
t5=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_record4(&a,4,lf[202],((C_word*)t0)[4],t4,C_SCHEME_TRUE);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k11358 in k11320 in k11317 in k11314 in k11311 in k11308 in k11305 in k11302 in k11299 in k11296 in k11293 in k11290 in k11287 in k11284 in k11281 in k11278 in k11275 in k11272 in k11269 in k11266 in k11263 in k11260 in ... */
static void C_ccall f_11360(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_11360,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11363,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken.syntax.import.scm:30: ##sys#register-core-module */
t3=*((C_word*)lf[83]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[203];
av2[3]=lf[204];
av2[4]=lf[205];
av2[5]=*((C_word*)lf[206]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k11361 in k11358 in k11320 in k11317 in k11314 in k11311 in k11308 in k11305 in k11302 in k11299 in k11296 in k11293 in k11290 in k11287 in k11284 in k11281 in k11278 in k11275 in k11272 in k11269 in k11266 in k11263 in ... */
static void C_ccall f_11363(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11363,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* g3368 in k11311 in k11308 in k11305 in k11302 in k11299 in k11296 in k11293 in k11290 in k11287 in k11284 in k11281 in k11278 in k11275 in k11272 in k11269 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in ... */
static C_word C_fcall f_11370(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_i_assq(t1,((C_word*)t0)[2]));}

/* map-loop3362 in k11311 in k11308 in k11305 in k11302 in k11299 in k11296 in k11293 in k11290 in k11287 in k11284 in k11281 in k11278 in k11275 in k11272 in k11269 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in ... */
static void C_fcall f_11382(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_11382,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=(
/* modules.scm:1100: g3368 */
  f_11370(((C_word*)t0)[2],C_slot(t2,C_fix(0)))
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

/* k11415 in k11311 in k11308 in k11305 in k11302 in k11299 in k11296 in k11293 in k11290 in k11287 in k11284 in k11281 in k11278 in k11275 in k11272 in k11269 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in ... */
static void C_ccall f_11417(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11417,c,av);}
/* modules.scm:1177: ##sys#register-primitive-module */
t2=*((C_word*)lf[85]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[216];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* g3330 in k11308 in k11305 in k11302 in k11299 in k11296 in k11293 in k11290 in k11287 in k11284 in k11281 in k11278 in k11275 in k11272 in k11269 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in ... */
static C_word C_fcall f_11424(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_i_assq(t1,((C_word*)t0)[2]));}

/* map-loop3324 in k11308 in k11305 in k11302 in k11299 in k11296 in k11293 in k11290 in k11287 in k11284 in k11281 in k11278 in k11275 in k11272 in k11269 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in ... */
static void C_fcall f_11436(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_11436,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=(
/* modules.scm:1100: g3330 */
  f_11424(((C_word*)t0)[2],C_slot(t2,C_fix(0)))
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

/* k11469 in k11308 in k11305 in k11302 in k11299 in k11296 in k11293 in k11290 in k11287 in k11284 in k11281 in k11278 in k11275 in k11272 in k11269 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in ... */
static void C_ccall f_11471(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_11471,c,av);}
/* modules.scm:1173: ##sys#register-core-module */
t2=*((C_word*)lf[83]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[218];
av2[3]=lf[208];
av2[4]=lf[219];
av2[5]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* g3292 in k11305 in k11302 in k11299 in k11296 in k11293 in k11290 in k11287 in k11284 in k11281 in k11278 in k11275 in k11272 in k11269 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in k11245 in ... */
static C_word C_fcall f_11478(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_i_assq(t1,((C_word*)t0)[2]));}

/* map-loop3286 in k11305 in k11302 in k11299 in k11296 in k11293 in k11290 in k11287 in k11284 in k11281 in k11278 in k11275 in k11272 in k11269 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in k11245 in ... */
static void C_fcall f_11490(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_11490,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=(
/* modules.scm:1100: g3292 */
  f_11478(((C_word*)t0)[2],C_slot(t2,C_fix(0)))
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

/* k11523 in k11305 in k11302 in k11299 in k11296 in k11293 in k11290 in k11287 in k11284 in k11281 in k11278 in k11275 in k11272 in k11269 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in k11245 in ... */
static void C_ccall f_11525(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11525,c,av);}
/* modules.scm:1170: ##sys#register-primitive-module */
t2=*((C_word*)lf[85]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[221];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* g3254 in k11299 in k11296 in k11293 in k11290 in k11287 in k11284 in k11281 in k11278 in k11275 in k11272 in k11269 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in k11245 in k11242 in k11239 in ... */
static C_word C_fcall f_11532(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_i_assq(t1,((C_word*)t0)[2]));}

/* map-loop3248 in k11299 in k11296 in k11293 in k11290 in k11287 in k11284 in k11281 in k11278 in k11275 in k11272 in k11269 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in k11245 in k11242 in k11239 in ... */
static void C_fcall f_11544(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_11544,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=(
/* modules.scm:1100: g3254 */
  f_11532(((C_word*)t0)[2],C_slot(t2,C_fix(0)))
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

/* k11577 in k11299 in k11296 in k11293 in k11290 in k11287 in k11284 in k11281 in k11278 in k11275 in k11272 in k11269 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in k11245 in k11242 in k11239 in ... */
static void C_ccall f_11579(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11579,c,av);}
/* modules.scm:1164: ##sys#register-primitive-module */
t2=*((C_word*)lf[85]+1);{
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

/* g3216 in k11293 in k11290 in k11287 in k11284 in k11281 in k11278 in k11275 in k11272 in k11269 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in k11245 in k11242 in k11239 in k5539 in k5535 in ... */
static C_word C_fcall f_11586(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_i_assq(t1,((C_word*)t0)[2]));}

/* map-loop3210 in k11293 in k11290 in k11287 in k11284 in k11281 in k11278 in k11275 in k11272 in k11269 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in k11245 in k11242 in k11239 in k5539 in k5535 in ... */
static void C_fcall f_11598(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_11598,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=(
/* modules.scm:1100: g3216 */
  f_11586(((C_word*)t0)[2],C_slot(t2,C_fix(0)))
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

/* k11631 in k11293 in k11290 in k11287 in k11284 in k11281 in k11278 in k11275 in k11272 in k11269 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in k11245 in k11242 in k11239 in k5539 in k5535 in ... */
static void C_ccall f_11633(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_11633,c,av);}
/* modules.scm:1155: ##sys#register-core-module */
t2=*((C_word*)lf[83]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[230];
av2[3]=lf[208];
av2[4]=lf[231];
av2[5]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* g3178 in k11290 in k11287 in k11284 in k11281 in k11278 in k11275 in k11272 in k11269 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in k11245 in k11242 in k11239 in k5539 in k5535 in k4253 in ... */
static C_word C_fcall f_11640(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_i_assq(t1,((C_word*)t0)[2]));}

/* map-loop3172 in k11290 in k11287 in k11284 in k11281 in k11278 in k11275 in k11272 in k11269 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in k11245 in k11242 in k11239 in k5539 in k5535 in k4253 in ... */
static void C_fcall f_11652(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_11652,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=(
/* modules.scm:1100: g3178 */
  f_11640(((C_word*)t0)[2],C_slot(t2,C_fix(0)))
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

/* k11685 in k11290 in k11287 in k11284 in k11281 in k11278 in k11275 in k11272 in k11269 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in k11245 in k11242 in k11239 in k5539 in k5535 in k4253 in ... */
static void C_ccall f_11687(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11687,c,av);}
/* modules.scm:1152: ##sys#register-primitive-module */
t2=*((C_word*)lf[85]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[234];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* g3140 in k11287 in k11284 in k11281 in k11278 in k11275 in k11272 in k11269 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in k11245 in k11242 in k11239 in k5539 in k5535 in k4253 in k4250 in ... */
static C_word C_fcall f_11694(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_i_assq(t1,((C_word*)t0)[2]));}

/* map-loop3134 in k11287 in k11284 in k11281 in k11278 in k11275 in k11272 in k11269 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in k11245 in k11242 in k11239 in k5539 in k5535 in k4253 in k4250 in ... */
static void C_fcall f_11706(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_11706,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=(
/* modules.scm:1100: g3140 */
  f_11694(((C_word*)t0)[2],C_slot(t2,C_fix(0)))
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

/* k11739 in k11287 in k11284 in k11281 in k11278 in k11275 in k11272 in k11269 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in k11245 in k11242 in k11239 in k5539 in k5535 in k4253 in k4250 in ... */
static void C_ccall f_11741(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11741,c,av);}
/* modules.scm:1149: ##sys#register-primitive-module */
t2=*((C_word*)lf[85]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[236];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* g3102 in k11284 in k11281 in k11278 in k11275 in k11272 in k11269 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in k11245 in k11242 in k11239 in k5539 in k5535 in k4253 in k4250 in k4247 in ... */
static C_word C_fcall f_11748(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_i_assq(t1,((C_word*)t0)[2]));}

/* map-loop3096 in k11284 in k11281 in k11278 in k11275 in k11272 in k11269 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in k11245 in k11242 in k11239 in k5539 in k5535 in k4253 in k4250 in k4247 in ... */
static void C_fcall f_11760(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_11760,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=(
/* modules.scm:1100: g3102 */
  f_11748(((C_word*)t0)[2],C_slot(t2,C_fix(0)))
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

/* k11793 in k11284 in k11281 in k11278 in k11275 in k11272 in k11269 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in k11245 in k11242 in k11239 in k5539 in k5535 in k4253 in k4250 in k4247 in ... */
static void C_ccall f_11795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_11795,c,av);}
/* modules.scm:1136: ##sys#register-core-module */
t2=*((C_word*)lf[83]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[238];
av2[3]=lf[208];
av2[4]=lf[239];
av2[5]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* g3064 in k11281 in k11278 in k11275 in k11272 in k11269 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in k11245 in k11242 in k11239 in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in ... */
static C_word C_fcall f_11802(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_i_assq(t1,((C_word*)t0)[2]));}

/* map-loop3058 in k11281 in k11278 in k11275 in k11272 in k11269 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in k11245 in k11242 in k11239 in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in ... */
static void C_fcall f_11814(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_11814,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=(
/* modules.scm:1100: g3064 */
  f_11802(((C_word*)t0)[2],C_slot(t2,C_fix(0)))
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

/* k11847 in k11281 in k11278 in k11275 in k11272 in k11269 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in k11245 in k11242 in k11239 in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in ... */
static void C_ccall f_11849(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11849,c,av);}
/* modules.scm:1133: ##sys#register-primitive-module */
t2=*((C_word*)lf[85]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[242];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* g3026 in k11275 in k11272 in k11269 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in k11245 in k11242 in k11239 in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in ... */
static C_word C_fcall f_11856(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_i_assq(t1,((C_word*)t0)[2]));}

/* map-loop3020 in k11275 in k11272 in k11269 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in k11245 in k11242 in k11239 in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in ... */
static void C_fcall f_11868(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_11868,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=(
/* modules.scm:1100: g3026 */
  f_11856(((C_word*)t0)[2],C_slot(t2,C_fix(0)))
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

/* k11901 in k11275 in k11272 in k11269 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in k11245 in k11242 in k11239 in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in ... */
static void C_ccall f_11903(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11903,c,av);}
/* modules.scm:1127: ##sys#register-primitive-module */
t2=*((C_word*)lf[85]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[247];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* g2988 in k11272 in k11269 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in k11245 in k11242 in k11239 in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static C_word C_fcall f_11910(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_i_assq(t1,((C_word*)t0)[2]));}

/* map-loop2982 in k11272 in k11269 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in k11245 in k11242 in k11239 in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_11922(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_11922,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=(
/* modules.scm:1100: g2988 */
  f_11910(((C_word*)t0)[2],C_slot(t2,C_fix(0)))
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

/* k11955 in k11272 in k11269 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in k11245 in k11242 in k11239 in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_11957(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11957,c,av);}
/* modules.scm:1124: ##sys#register-primitive-module */
t2=*((C_word*)lf[85]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[249];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* g2950 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in k11245 in k11242 in k11239 in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static C_word C_fcall f_11964(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_i_assq(t1,((C_word*)t0)[2]));}

/* map-loop2944 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in k11245 in k11242 in k11239 in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_11976(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_11976,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=(
/* modules.scm:1100: g2950 */
  f_11964(((C_word*)t0)[2],C_slot(t2,C_fix(0)))
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

/* k12009 in k11266 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in k11245 in k11242 in k11239 in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_12011(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12011,c,av);}
/* modules.scm:1115: ##sys#register-primitive-module */
t2=*((C_word*)lf[85]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[253];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* g2912 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in k11245 in k11242 in k11239 in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static C_word C_fcall f_12018(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_i_assq(t1,((C_word*)t0)[2]));}

/* map-loop2906 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in k11245 in k11242 in k11239 in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_12030(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_12030,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=(
/* modules.scm:1100: g2912 */
  f_12018(((C_word*)t0)[2],C_slot(t2,C_fix(0)))
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

/* k12063 in k11263 in k11260 in k11257 in k11254 in k11251 in k11248 in k11245 in k11242 in k11239 in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_12065(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12065,c,av);}
/* modules.scm:1112: ##sys#register-primitive-module */
t2=*((C_word*)lf[85]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[255];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k12067 in k11254 in k11251 in k11248 in k11245 in k11242 in k11239 in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_12069(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_12069,c,av);}
/* modules.scm:1103: ##sys#register-core-module */
t2=*((C_word*)lf[83]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[261];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k12071 in k11239 in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_12073(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_12073,c,av);}
/* modules.scm:1086: ##sys#register-core-module */
t2=*((C_word*)lf[83]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[264];
av2[3]=lf[208];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k4238 */
static void C_ccall f_4240(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_4240,c,av);}
a=C_alloc(11);
t2=C_a_i_provide(&a,1,lf[0]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4243,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t3;
C_library_toplevel(2,av2);}}

/* k4241 in k4238 */
static void C_ccall f_4243(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4243,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4246,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_internal_toplevel(2,av2);}}

/* k4244 in k4241 in k4238 */
static void C_ccall f_4246(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4246,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4249,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_expand_toplevel(2,av2);}}

/* k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_4249(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4249,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4252,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

/* k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_4252(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4252,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4255,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_4255(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_4255,c,av);}
a=C_alloc(9);
t2=C_mutate(&lf[1] /* (set! delete ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4746,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate(&lf[2] /* (set! filter-map ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4910,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5537,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:77: chicken.base#make-parameter */
t5=*((C_word*)lf[269]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* delete in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_4746(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_4746,4,t1,t2,t3,t4);}
a=C_alloc(8);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4752,a[2]=t6,a[3]=t4,a[4]=t2,a[5]=((C_word)li0),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_4752(t8,t1,t3);}

/* loop in delete in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_4752(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_4752,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4765,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* mini-srfi-1.scm:106: test */
t4=((C_word*)t0)[3];{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=C_i_car(t2);
((C_proc)C_fast_retrieve_proc(t4))(4,av2);}}}

/* k4763 in loop in delete in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_4765(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4765,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
/* mini-srfi-1.scm:107: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4752(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]));}
else{
t2=C_u_i_car(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4779,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:109: loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_4752(t4,t3,C_u_i_cdr(((C_word*)t0)[4]));}}

/* k4777 in k4763 in loop in delete in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_4779(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4779,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in k6951 in k7438 in ##sys#compiled-module-registration in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_4827(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_4827,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=C_u_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4841,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4854,a[2]=((C_word*)t0)[2],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:123: delete */
f_4746(t6,t3,t4,((C_word*)t0)[3]);}}

/* k4839 in loop in k6951 in k7438 in ##sys#compiled-module-registration in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_4841(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4841,c,av);}
a=C_alloc(3);
t2=C_i_equalp(((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(t2)?((C_word*)t0)[4]:C_a_i_cons(&a,2,((C_word*)t0)[5],t1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4852 in loop in k6951 in k7438 in ##sys#compiled-module-registration in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_4854(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4854,c,av);}
/* mini-srfi-1.scm:123: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4827(t2,((C_word*)t0)[3],t1);}

/* filter-map in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_4910(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_4910,3,t1,t2,t3);}
a=C_alloc(7);
t4=C_i_check_list_2(t3,lf[3]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4919,a[2]=t2,a[3]=t6,a[4]=((C_word)li4),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_4919(t8,t1,t3);}

/* foldr334 in filter-map in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_4919(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_4919,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4927,a[2]=((C_word*)t0)[2],a[3]=((C_word)li3),tmp=(C_word)a,a+=4,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4953,a[2]=t3,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t7=t5;
t8=C_slot(t2,C_fix(1));
t1=t7;
t2=t8;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* g339 in foldr334 in filter-map in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_4927(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_4927,4,t0,t1,t2,t3);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4931,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:135: pred */
t5=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k4929 in g339 in foldr334 in filter-map in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_4931(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4931,c,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4935,a[2]=((C_word*)t0)[2],a[3]=((C_word)li2),tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:135: g349 */
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(
/* mini-srfi-1.scm:135: g349 */
  f_4935(C_a_i(&a,3),t2,t1)
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* g349 in k4929 in g339 in foldr334 in filter-map in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static C_word C_fcall f_4935(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_a_i_cons(&a,2,t1,((C_word*)t0)[2]));}

/* k4951 in foldr334 in filter-map in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_4953(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4953,c,av);}
/* mini-srfi-1.scm:134: g339 */
t2=((C_word*)t0)[2];
f_4927(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_5537(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5537,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[4]+1 /* (set! ##sys#current-module ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5541,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:78: chicken.base#make-parameter */
t4=*((C_word*)lf[269]+1);{
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

/* k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_5541(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(116,c,11)))){
C_save_and_reclaim((void *)f_5541,c,av);}
a=C_alloc(116);
t2=C_mutate((C_word*)lf[5]+1 /* (set! ##sys#module-alias-environment ...) */,t1);
t3=C_mutate((C_word*)lf[6]+1 /* (set! module ...) */,lf[6]);
t4=C_mutate(&lf[7] /* (set! module-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5556,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[9]+1 /* (set! module-undefined-list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5646,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[10]+1 /* (set! set-module-undefined-list! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5655,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[12]+1 /* (set! ##sys#module-name ...) */,lf[7]);
t8=C_mutate((C_word*)lf[13]+1 /* (set! ##sys#module-exports ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5791,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[17]+1 /* (set! ##sys#register-module-alias ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5815,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[18]+1 /* (set! ##sys#with-module-aliases ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5833,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[22]+1 /* (set! ##sys#resolve-module-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5936,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[26]+1 /* (set! ##sys#find-module ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5983,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t13=C_SCHEME_FALSE;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_mutate((C_word*)lf[29]+1 /* (set! ##sys#switch-module ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6037,a[2]=t14,a[3]=((C_word)li21),tmp=(C_word)a,a+=4,tmp));
t16=C_mutate((C_word*)lf[33]+1 /* (set! ##sys#add-to-export-list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6090,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[36]+1 /* (set! ##sys#toplevel-definition-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6179,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[37]+1 /* (set! ##sys#register-meta-expression ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6182,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate(&lf[39] /* (set! check-for-redef ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6202,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[43]+1 /* (set! ##sys#register-export ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6223,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[48]+1 /* (set! ##sys#register-syntax-export ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6312,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[51]+1 /* (set! ##sys#unregister-syntax-export ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6393,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate((C_word*)lf[52]+1 /* (set! ##sys#register-module ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6486,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate(&lf[53] /* (set! merge-se ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6796,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate((C_word*)lf[58]+1 /* (set! ##sys#compiled-module-registration ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7028,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp));
t26=C_mutate((C_word*)lf[70]+1 /* (set! ##sys#register-compiled-module ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7457,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp));
t27=C_mutate((C_word*)lf[83]+1 /* (set! ##sys#register-core-module ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7764,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp));
t28=C_mutate((C_word*)lf[85]+1 /* (set! ##sys#register-primitive-module ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7878,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp));
t29=C_mutate(&lf[47] /* (set! find-export ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7893,a[2]=((C_word)li62),tmp=(C_word)a,a+=3,tmp));
t30=C_mutate((C_word*)lf[86]+1 /* (set! ##sys#finalize-module ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7971,a[2]=((C_word)li91),tmp=(C_word)a,a+=3,tmp));
t31=C_set_block_item(lf[27] /* ##sys#module-table */,0,C_SCHEME_END_OF_LIST);
t32=C_mutate((C_word*)lf[62]+1 /* (set! ##sys#with-environment ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8956,a[2]=((C_word)li95),tmp=(C_word)a,a+=3,tmp));
t33=C_mutate((C_word*)lf[132]+1 /* (set! ##sys#import-library-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9061,a[2]=((C_word)li100),tmp=(C_word)a,a+=3,tmp));
t34=C_mutate(&lf[138] /* (set! find-module/import-library ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9107,a[2]=((C_word)li101),tmp=(C_word)a,a+=3,tmp));
t35=C_mutate((C_word*)lf[76]+1 /* (set! ##sys#decompose-import ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9122,a[2]=((C_word)li136),tmp=(C_word)a,a+=3,tmp));
t36=C_mutate((C_word*)lf[162]+1 /* (set! ##sys#expand-import ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10026,a[2]=((C_word)li141),tmp=(C_word)a,a+=3,tmp));
t37=C_mutate((C_word*)lf[164]+1 /* (set! ##sys#import ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10090,a[2]=((C_word)li150),tmp=(C_word)a,a+=3,tmp));
t38=C_mutate(&lf[46] /* (set! module-rename ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10532,a[2]=((C_word)li151),tmp=(C_word)a,a+=3,tmp));
t39=C_mutate((C_word*)lf[172]+1 /* (set! ##sys#alias-global-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10550,a[2]=((C_word)li156),tmp=(C_word)a,a+=3,tmp));
t40=C_mutate((C_word*)lf[173]+1 /* (set! ##sys#validate-exports ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10624,a[2]=((C_word)li161),tmp=(C_word)a,a+=3,tmp));
t41=C_mutate((C_word*)lf[184]+1 /* (set! ##sys#register-functor ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10839,a[2]=((C_word)li162),tmp=(C_word)a,a+=3,tmp));
t42=C_mutate((C_word*)lf[185]+1 /* (set! ##sys#instantiate-functor ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10855,a[2]=((C_word)li168),tmp=(C_word)a,a+=3,tmp));
t43=C_mutate(&lf[189] /* (set! match-functor-argument ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11081,a[2]=((C_word)li172),tmp=(C_word)a,a+=3,tmp));
t44=lf[197];
t45=*((C_word*)lf[198]+1);
t46=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11241,a[2]=((C_word*)t0)[2],a[3]=t45,a[4]=t44,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:1085: ##sys#register-core-module */
t47=*((C_word*)lf[83]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t47;
av2[1]=t46;
av2[2]=lf[268];
av2[3]=lf[208];
av2[4]=t44;
av2[5]=*((C_word*)lf[198]+1);
((C_proc)(void*)(*((C_word*)t47+1)))(6,av2);}}

/* module-name in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_5556(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5556,c,av);}
t3=C_i_check_structure_2(t2,lf[6],lf[8]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* module-undefined-list in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_5646(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5646,c,av);}
t3=C_i_check_structure_2(t2,lf[6],lf[9]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(7));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* set-module-undefined-list! in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_5655(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5655,c,av);}
t4=C_i_check_structure_2(t2,lf[6],C_SCHEME_FALSE);
/* modules.scm:95: ##sys#block-set! */
t5=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(7);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* ##sys#module-exports in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_5791(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5791,c,av);}
t3=C_i_check_structure_2(t2,lf[6],lf[14]);
t4=C_i_block_ref(t2,C_fix(3));
t5=C_i_check_structure_2(t2,lf[6],lf[15]);
t6=C_i_block_ref(t2,C_fix(11));
t7=C_i_check_structure_2(t2,lf[6],lf[16]);
/* modules.scm:119: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t4;
av2[3]=t6;
av2[4]=C_i_block_ref(t2,C_fix(12));
C_values(5,av2);}}

/* ##sys#register-module-alias in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_5815(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_5815,c,av);}
a=C_alloc(7);
t4=C_a_i_cons(&a,2,t2,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5831,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:129: ##sys#module-alias-environment */
t6=*((C_word*)lf[5]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k5829 in ##sys#register-module-alias in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_5831(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5831,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
/* modules.scm:128: ##sys#module-alias-environment */
t3=*((C_word*)lf[5]+1);{
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

/* ##sys#with-module-aliases in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_5833(C_word c,C_word *av){
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
C_word t15;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_5833,c,av);}
a=C_alloc(21);
t4=*((C_word*)lf[5]+1);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5837,a[2]=t4,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=C_i_check_list_2(t2,lf[20]);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5896,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5902,a[2]=t8,a[3]=t13,a[4]=t9,a[5]=((C_word)li14),tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_5902(t15,t11,t2);}

/* k5835 in ##sys#with-module-aliases in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_5837(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,4)))){
C_save_and_reclaim((void *)f_5837,c,av);}
a=C_alloc(19);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_TRUE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5842,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[2],a[5]=((C_word)li11),tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5859,a[2]=((C_word*)t0)[3],a[3]=((C_word)li12),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5865,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li13),tmp=(C_word)a,a+=5,tmp);
/* modules.scm:132: ##sys#dynamic-wind */
t9=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=((C_word*)t0)[4];
av2[2]=t6;
av2[3]=t7;
av2[4]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}

/* a5841 in k5835 in ##sys#with-module-aliases in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_5842(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5842,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5846,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
/* modules.scm:132: ##sys#module-alias-environment915 */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)((C_word*)t0)[2])[1];
f_5846(2,av2);}}}

/* k5844 in a5841 in k5835 in ##sys#with-module-aliases in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_5846(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_5846,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5850,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* modules.scm:132: ##sys#module-alias-environment915 */
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k5848 in k5844 in a5841 in k5835 in ##sys#with-module-aliases in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_5850(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_5850,c,av);}
a=C_alloc(4);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5853,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:132: ##sys#module-alias-environment915 */
t4=((C_word*)t0)[5];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}

/* k5851 in k5848 in k5844 in a5841 in k5835 in ##sys#with-module-aliases in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_5853(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5853,c,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a5858 in k5835 in ##sys#with-module-aliases in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_5859(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5859,c,av);}
/* modules.scm:136: thunk */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a5864 in k5835 in ##sys#with-module-aliases in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_5865(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5865,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5869,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:132: ##sys#module-alias-environment915 */
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k5867 in a5864 in k5835 in ##sys#with-module-aliases in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_5869(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_5869,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5872,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:132: ##sys#module-alias-environment915 */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k5870 in k5867 in a5864 in k5835 in ##sys#with-module-aliases in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_5872(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5872,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5894 in ##sys#with-module-aliases in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_5896(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5896,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5900,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:135: ##sys#module-alias-environment */
t3=*((C_word*)lf[5]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5898 in k5894 in ##sys#with-module-aliases in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_5900(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5900,c,av);}
/* modules.scm:133: scheme#append */
t2=*((C_word*)lf[21]+1);{
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

/* map-loop924 in ##sys#with-module-aliases in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_5902(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_5902,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_i_cadr(t3);
t6=C_a_i_cons(&a,2,t4,t5);
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

/* ##sys#resolve-module-name in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_5936(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5936,c,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5944,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:139: chicken.internal#library-id */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[25]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t4;
av2[2]=t2;
tp(3,av2);}}

/* k5942 in ##sys#resolve-module-name in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_5944(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_5944,c,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5946,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word)li17),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_5946(t5,((C_word*)t0)[4],t1,C_SCHEME_END_OF_LIST);}

/* loop in k5942 in ##sys#resolve-module-name in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_5946(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_5946,4,t0,t1,t2,t3);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5981,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* modules.scm:140: ##sys#module-alias-environment */
t5=*((C_word*)lf[5]+1);{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* g968 in k5979 in loop in k5942 in ##sys#resolve-module-name in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_5954(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_5954,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_i_cdr(t2);
if(C_truep(C_i_memq(t3,((C_word*)t0)[2]))){
/* modules.scm:144: chicken.base#error */
t4=*((C_word*)lf[23]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[24];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[2]);
/* modules.scm:145: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_5946(t5,t1,t3,t4);}}

/* k5979 in loop in k5942 in ##sys#resolve-module-name in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_5981(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_5981,c,av);}
a=C_alloc(7);
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5954,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word)li16),tmp=(C_word)a,a+=7,tmp);
/* modules.scm:140: g968 */
t4=t3;
f_5954(t4,((C_word*)t0)[7],t2);}
else{
t3=((C_word*)t0)[7];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* ##sys#find-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_5983(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5983,c,av);}
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_TRUE:C_get_rest_arg(c,3,av,3,t0));
t5=C_rest_nullp(c,3);
t6=C_rest_nullp(c,4);
t7=(C_truep(t6)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,3,t0));
t8=C_rest_nullp(c,4);
t9=C_i_assq(t2,*((C_word*)lf[27]+1));
if(C_truep(t9)){
t10=t1;{
C_word *av2=av;
av2[0]=t10;
av2[1]=C_i_cdr(t9);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
if(C_truep(t4)){
/* modules.scm:150: chicken.base#error */
t10=*((C_word*)lf[23]+1);{
C_word av2[5];
av2[0]=t10;
av2[1]=t1;
av2[2]=t7;
av2[3]=lf[28];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}
else{
t10=t1;{
C_word *av2=av;
av2[0]=t10;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}}}

/* ##sys#switch-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6037(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6037,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6084,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:156: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[31]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[31]+1);
av2[1]=t3;
tp(2,av2);}}

/* k6042 in k6086 in k6082 in ##sys#switch-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6044(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_6044,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6047,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6072,a[2]=((C_word*)t0)[5],a[3]=((C_word)li20),tmp=(C_word)a,a+=4,tmp);
/* modules.scm:157: g1006 */
t4=t3;
f_6072(t4,t2,t1);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,((C_word*)t0)[5]);
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
f_6047(2,av2);}}}

/* k6045 in k6042 in k6086 in k6082 in ##sys#switch-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6047(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6047,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6050,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=C_i_check_structure_2(((C_word*)t0)[3],lf[6],lf[32]);
t4=t2;
f_6050(t4,C_i_block_ref(((C_word*)t0)[3],C_fix(14)));}
else{
t3=t2;
f_6050(t3,((C_word*)((C_word*)t0)[4])[1]);}}

/* k6048 in k6045 in k6042 in k6086 in k6082 in ##sys#switch-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_6050(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_6050,2,t0,t1);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6053,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6059,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:164: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[31]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[31]+1);
av2[1]=t3;
av2[2]=C_i_car(t1);
tp(3,av2);}}
else{
/* modules.scm:166: ##sys#current-module */
t3=*((C_word*)lf[4]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k6051 in k6048 in k6045 in k6042 in k6086 in k6082 in ##sys#switch-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6053(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6053,c,av);}
/* modules.scm:166: ##sys#current-module */
t2=*((C_word*)lf[4]+1);{
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

/* k6057 in k6048 in k6045 in k6042 in k6086 in k6082 in ##sys#switch-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6059(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6059,c,av);}
/* modules.scm:165: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[30]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[30]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_u_i_cdr(((C_word*)t0)[3]);
tp(3,av2);}}

/* g1006 in k6042 in k6086 in k6082 in ##sys#switch-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_6072(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_6072,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[6],C_SCHEME_FALSE);
/* modules.scm:95: ##sys#block-set! */
t4=*((C_word*)lf[11]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(14);
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k6082 in ##sys#switch-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6084(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6084,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6088,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:156: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[30]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t2;
tp(2,av2);}}

/* k6086 in k6082 in ##sys#switch-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6088(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_6088,c,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6044,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:157: ##sys#current-module */
t4=*((C_word*)lf[4]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* ##sys#add-to-export-list in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6090(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_6090,c,av);}
a=C_alloc(6);
t4=C_i_check_structure_2(t2,lf[6],lf[14]);
t5=C_i_block_ref(t2,C_fix(3));
t6=C_eqp(t5,C_SCHEME_TRUE);
if(C_truep(t6)){
t7=C_i_check_structure_2(t2,lf[6],lf[34]);
t8=C_i_block_ref(t2,C_fix(5));
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6106,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:172: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[30]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t9;
tp(2,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6177,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:182: scheme#append */
t8=*((C_word*)lf[21]+1);{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
av2[2]=t5;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}}

/* k6104 in ##sys#add-to-export-list in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6106(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(25,c,3)))){
C_save_and_reclaim((void *)f_6106,c,av);}
a=C_alloc(25);
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6115,a[2]=t3,a[3]=((C_word)li22),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6107,a[2]=t1,a[3]=t4,a[4]=((C_word)li23),tmp=(C_word)a,a+=5,tmp);
t6=C_i_check_list_2(((C_word*)t0)[2],lf[35]);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6129,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6149,a[2]=t5,a[3]=t9,a[4]=((C_word)li24),tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_6149(t11,t7,((C_word*)t0)[2]);}

/* g1023 in k6104 in ##sys#add-to-export-list in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static C_word C_fcall f_6107(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t2=C_i_assq(t1,((C_word*)t0)[2]);
if(C_truep(t2)){
return((
/* modules.scm:176: g1039 */
  f_6115(C_a_i(&a,3),((C_word*)t0)[3],t2)
));}
else{
t3=C_SCHEME_UNDEFINED;
return(t3);}}

/* g1039 in k6104 in ##sys#add-to-export-list in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static C_word C_fcall f_6115(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t2=C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
return(t3);}

/* k6127 in k6104 in ##sys#add-to-export-list in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6129(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_6129,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6132,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6143,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_check_structure_2(((C_word*)t0)[2],lf[6],lf[16]);
/* modules.scm:180: scheme#append */
t5=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[6])[1];
av2[3]=C_i_block_ref(((C_word*)t0)[2],C_fix(12));
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k6130 in k6127 in k6104 in ##sys#add-to-export-list in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6132(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_6132,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6139,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:181: scheme#append */
t3=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k6137 in k6130 in k6127 in k6104 in ##sys#add-to-export-list in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6139(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6139,c,av);}
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[6],C_SCHEME_FALSE);
/* modules.scm:95: ##sys#block-set! */
t3=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(5);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k6141 in k6127 in k6104 in ##sys#add-to-export-list in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6143(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6143,c,av);}
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[6],C_SCHEME_FALSE);
/* modules.scm:95: ##sys#block-set! */
t3=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(12);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* for-each-loop1022 in k6104 in ##sys#add-to-export-list in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_6149(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_6149,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=(
/* modules.scm:174: g1023 */
  f_6107(C_a_i(&a,3),((C_word*)t0)[2],C_slot(t2,C_fix(0)))
);
t5=t1;
t6=C_slot(t2,C_fix(1));
t1=t5;
t2=t6;
goto loop;}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6175 in ##sys#add-to-export-list in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6177(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6177,c,av);}
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[6],C_SCHEME_FALSE);
/* modules.scm:95: ##sys#block-set! */
t3=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(3);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* ##sys#toplevel-definition-hook in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6179(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6179,c,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* ##sys#register-meta-expression in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6182(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6182,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6186,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:187: ##sys#current-module */
t4=*((C_word*)lf[4]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k6184 in ##sys#register-meta-expression in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6186(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_6186,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=C_i_check_structure_2(t1,lf[6],lf[38]);
t3=C_i_block_ref(t1,C_fix(10));
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],t3);
t5=C_i_check_structure_2(t1,lf[6],C_SCHEME_FALSE);
/* modules.scm:95: ##sys#block-set! */
t6=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=C_fix(10);
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* check-for-redef in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_6202(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_6202,4,t1,t2,t3,t4);}
a=C_alloc(5);
t5=C_i_assq(t2,t3);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6209,a[2]=t2,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t5)){
/* modules.scm:192: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[40]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t6;
av2[2]=lf[42];
av2[3]=t2;
tp(4,av2);}}
else{
t7=t6;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
f_6209(2,av2);}}}

/* k6207 in check-for-redef in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6209(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6209,c,av);}
if(C_truep(C_i_assq(((C_word*)t0)[2],((C_word*)t0)[3]))){
/* modules.scm:194: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[40]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[40]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=lf[41];
av2[3]=((C_word*)t0)[2];
tp(4,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* ##sys#register-export in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6223(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_6223,c,av);}
a=C_alloc(5);
if(C_truep(t3)){
t4=C_i_check_structure_2(t3,lf[6],lf[14]);
t5=C_i_block_ref(t3,C_fix(3));
t6=C_eqp(C_SCHEME_TRUE,t5);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6233,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t6)){
t8=t7;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t6;
f_6233(2,av2);}}
else{
/* modules.scm:199: find-export */
f_7893(t7,t2,t3,C_SCHEME_TRUE);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k6231 in ##sys#register-export in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6233(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6233,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6236,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:200: module-undefined-list */
t3=*((C_word*)lf[9]+1);{
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

/* k6234 in k6231 in ##sys#register-export in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6236(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_6236,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6239,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6299,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=C_i_check_structure_2(((C_word*)t0)[4],lf[6],lf[8]);
/* modules.scm:202: module-rename */
f_10532(t3,((C_word*)t0)[2],C_i_block_ref(((C_word*)t0)[4],C_fix(1)));}

/* k6237 in k6234 in k6231 in ##sys#register-export in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6239(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_6239,c,av);}
a=C_alloc(10);
t2=C_i_assq(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6245,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6295,a[2]=t3,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:204: delete */
f_4746(t4,t2,((C_word*)t0)[3],*((C_word*)lf[45]+1));}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_6245(2,av2);}}}

/* k6243 in k6237 in k6234 in k6231 in ##sys#register-export in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6245(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_6245,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6248,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6284,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:205: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[31]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[31]+1);
av2[1]=t3;
tp(2,av2);}}

/* k6246 in k6243 in k6237 in k6234 in k6231 in ##sys#register-export in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6248(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_6248,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6251,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_check_structure_2(((C_word*)t0)[4],lf[6],lf[34]);
t4=C_i_block_ref(((C_word*)t0)[4],C_fix(5));
t5=C_a_i_cons(&a,2,((C_word*)t0)[3],t4);
t6=C_i_check_structure_2(((C_word*)t0)[4],lf[6],C_SCHEME_FALSE);
/* modules.scm:95: ##sys#block-set! */
t7=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(5);
av2[4]=t5;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}

/* k6249 in k6246 in k6243 in k6237 in k6234 in k6231 in ##sys#register-export in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6251(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6251,c,av);}
a=C_alloc(6);
if(C_truep(((C_word*)t0)[2])){
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],C_SCHEME_FALSE);
t3=C_i_check_structure_2(((C_word*)t0)[4],lf[6],lf[44]);
t4=C_i_block_ref(((C_word*)t0)[4],C_fix(4));
t5=C_a_i_cons(&a,2,t2,t4);
t6=C_i_check_structure_2(((C_word*)t0)[4],lf[6],C_SCHEME_FALSE);
/* modules.scm:95: ##sys#block-set! */
t7=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=((C_word*)t0)[5];
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(4);
av2[4]=t5;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k6282 in k6243 in k6237 in k6234 in k6231 in ##sys#register-export in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6284(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6284,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6288,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:205: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[30]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t2;
tp(2,av2);}}

/* k6286 in k6282 in k6243 in k6237 in k6234 in k6231 in ##sys#register-export in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6288(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6288,c,av);}
/* modules.scm:205: check-for-redef */
f_6202(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k6293 in k6237 in k6234 in k6231 in ##sys#register-export in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6295(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6295,c,av);}
/* modules.scm:204: set-module-undefined-list! */
t2=*((C_word*)lf[10]+1);{
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

/* k6297 in k6234 in k6231 in ##sys#register-export in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6299(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6299,c,av);}
/* modules.scm:201: ##sys#toplevel-definition-hook */
t2=*((C_word*)lf[36]+1);{
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

/* ##sys#register-syntax-export in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6312(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6312,c,av);}
a=C_alloc(6);
if(C_truep(t3)){
t5=C_i_check_structure_2(t3,lf[6],lf[14]);
t6=C_i_block_ref(t3,C_fix(3));
t7=C_eqp(C_SCHEME_TRUE,t6);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6322,a[2]=t3,a[3]=t2,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t7)){
t9=t8;{
C_word *av2=av;
av2[0]=t9;
av2[1]=t7;
f_6322(2,av2);}}
else{
/* modules.scm:217: find-export */
f_7893(t8,t2,t3,C_SCHEME_TRUE);}}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k6320 in ##sys#register-syntax-export in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6322(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6322,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6325,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* modules.scm:218: module-undefined-list */
t3=*((C_word*)lf[9]+1);{
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

/* k6323 in k6320 in ##sys#register-syntax-export in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6325(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_6325,c,av);}
a=C_alloc(7);
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[6],lf[8]);
t3=C_i_block_ref(((C_word*)t0)[2],C_fix(1));
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6331,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_assq(((C_word*)t0)[3],t1))){
/* modules.scm:221: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[40]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t4;
av2[2]=lf[50];
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_6331(2,av2);}}}

/* k6329 in k6323 in k6320 in ##sys#register-syntax-export in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6331(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_6331,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6334,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6374,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:222: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[31]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[31]+1);
av2[1]=t3;
tp(2,av2);}}

/* k6332 in k6329 in k6323 in k6320 in ##sys#register-syntax-export in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6334(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6334,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6340,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[6])){
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=C_i_check_structure_2(((C_word*)t0)[4],lf[6],lf[44]);
t5=C_i_block_ref(((C_word*)t0)[4],C_fix(4));
t6=C_a_i_cons(&a,2,t3,t5);
t7=C_i_check_structure_2(((C_word*)t0)[4],lf[6],C_SCHEME_FALSE);
/* modules.scm:95: ##sys#block-set! */
t8=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t8;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(4);
av2[4]=t6;
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6340(2,av2);}}}

/* k6338 in k6332 in k6329 in k6323 in k6320 in ##sys#register-syntax-export in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6340(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6340,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_i_check_structure_2(((C_word*)t0)[4],lf[6],lf[49]);
t4=C_i_block_ref(((C_word*)t0)[4],C_fix(6));
t5=C_a_i_cons(&a,2,t2,t4);
t6=C_i_check_structure_2(((C_word*)t0)[4],lf[6],C_SCHEME_FALSE);
/* modules.scm:95: ##sys#block-set! */
t7=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=((C_word*)t0)[5];
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(6);
av2[4]=t5;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}

/* k6372 in k6329 in k6323 in k6320 in ##sys#register-syntax-export in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6374(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6374,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6378,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:222: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[30]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t2;
tp(2,av2);}}

/* k6376 in k6372 in k6329 in k6323 in k6320 in ##sys#register-syntax-export in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6378(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6378,c,av);}
/* modules.scm:222: check-for-redef */
f_6202(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* ##sys#unregister-syntax-export in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6393(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6393,c,av);}
a=C_alloc(7);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6404,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=C_i_check_structure_2(t3,lf[6],lf[49]);
t6=C_i_block_ref(t3,C_fix(6));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6410,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp);
/* modules.scm:237: delete */
f_4746(t4,t2,t6,t7);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k6402 in ##sys#unregister-syntax-export in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6404(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6404,c,av);}
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[6],C_SCHEME_FALSE);
/* modules.scm:95: ##sys#block-set! */
t3=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(6);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* a6409 in ##sys#unregister-syntax-export in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6410(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6410,c,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_eqp(t2,C_i_car(t3));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k6425 in g2698 in k10555 in mrename in ##sys#alias-global-hook in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6427(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_6427,c,av);}
a=C_alloc(9);
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6434,a[2]=((C_word*)t0)[3],a[3]=((C_word)li152),tmp=(C_word)a,a+=4,tmp);
/* modules.scm:242: g1115 */
t4=t3;
f_6434(t4,((C_word*)t0)[4],t2);}
else{
if(C_truep(((C_word*)t0)[3])){
t3=C_a_i_list1(&a,1,((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],t3);
t5=C_a_i_cons(&a,2,t4,t1);
/* modules.scm:247: set-module-undefined-list! */
t6=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[5];
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,t3,t1);
/* modules.scm:247: set-module-undefined-list! */
t5=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[5];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}}

/* g1115 in k6425 in g2698 in k10555 in mrename in ##sys#alias-global-hook in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_6434(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6434,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6441,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[2])){
t4=C_i_cdr(t2);
t5=t3;
f_6441(t5,C_i_not(C_i_memq(((C_word*)t0)[2],t4)));}
else{
t4=t3;
f_6441(t4,C_SCHEME_FALSE);}}

/* k6439 in g1115 in k6425 in g2698 in k10555 in mrename in ##sys#alias-global-hook in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_6441(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,1)))){
C_save_and_reclaim_args((void *)trf_6441,2,t0,t1);}
a=C_alloc(3);
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t4;
av2[1]=C_i_set_cdr(((C_word*)t0)[2],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* ##sys#register-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6486(C_word c,C_word *av){
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
if(c<5) C_bad_min_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(22,c,1)))){
C_save_and_reclaim((void *)f_6486,c,av);}
a=C_alloc(22);
t5=C_rest_nullp(c,5);
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:C_get_rest_arg(c,5,av,5,t0));
t7=C_rest_nullp(c,5);
t8=C_rest_nullp(c,6);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_get_rest_arg(c,6,av,5,t0));
t10=C_rest_nullp(c,6);
t11=C_a_i_record(&a,15,lf[6],t2,t3,t4,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,t6,t9,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);
t12=C_a_i_cons(&a,2,t2,t11);
t13=C_a_i_cons(&a,2,t12,*((C_word*)lf[27]+1));
t14=C_mutate((C_word*)lf[27]+1 /* (set! ##sys#module-table ...) */,t13);
t15=t1;{
C_word *av2=av;
av2[0]=t15;
av2[1]=t11;
((C_proc)(void*)(*((C_word*)t15+1)))(2,av2);}}

/* warn in k8491 in k8488 in k8485 in k8479 in k8460 in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_6592(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_6592,4,t0,t1,t2,t3);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6600,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6604,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:268: scheme#symbol->string */
t6=*((C_word*)lf[116]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k6598 in warn in k8491 in k8488 in k8485 in k8479 in k8460 in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6600(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6600,c,av);}
/* modules.scm:267: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[40]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[40]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k6602 in warn in k8491 in k8488 in k8485 in k8479 in k8460 in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6604(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6604,c,av);}
/* modules.scm:268: scheme#string-append */
t2=*((C_word*)lf[113]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[114];
av2[4]=t1;
av2[5]=lf[115];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* loop in k8491 in k8488 in k8485 in k8479 in k8460 in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_6615(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_6615,3,t0,t1,t2);}
a=C_alloc(11);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
if(C_truep(C_i_symbolp(t3))){
/* modules.scm:274: loop */
t9=t1;
t10=C_u_i_cdr(t2);
t1=t9;
t2=t10;
goto loop;}
else{
t4=C_i_cdar(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6642,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t6,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word)li82),tmp=(C_word)a,a+=9,tmp));
t8=((C_word*)t6)[1];
f_6642(t8,t1,t4);}}}

/* loop2 in loop in k8491 in k8488 in k8485 in k8479 in k8460 in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_6642(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_6642,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
/* modules.scm:277: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_6615(t3,t1,C_i_cdr(((C_word*)t0)[3]));}
else{
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6790,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* modules.scm:278: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[30]+1));
C_word av2[2];
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t4;
tp(2,av2);}}}

/* k6663 in k6788 in loop2 in loop in k8491 in k8488 in k8485 in k8479 in k8460 in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6665(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6665,c,av);}
/* modules.scm:280: loop2 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6642(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]));}

/* g1173 in k6788 in loop2 in loop in k8491 in k8488 in k8485 in k8479 in k8460 in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_6679(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,3)))){
C_save_and_reclaim_args((void *)trf_6679,3,t0,t1,t2);}
a=C_alloc(13);
t3=C_i_car(((C_word*)t0)[2]);
t4=C_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6704,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t4)){
t6=C_a_i_cons(&a,2,t3,t4);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f13591,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:287: loop2 */
t8=((C_word*)((C_word*)t0)[3])[1];
f_6642(t8,t7,C_u_i_cdr(((C_word*)t0)[2]));}
else{
/* modules.scm:286: module-rename */
f_10532(t5,C_u_i_car(((C_word*)t0)[2]),((C_word*)t0)[4]);}}

/* k6702 in g1173 in k6788 in loop2 in loop in k8491 in k8488 in k8485 in k8479 in k8460 in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6704(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6704,c,av);}
a=C_alloc(7);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f13587,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:287: loop2 */
t4=((C_word*)((C_word*)t0)[4])[1];
f_6642(t4,t3,C_u_i_cdr(((C_word*)t0)[5]));}

/* g1180 in k6778 in k6788 in loop2 in loop in k8491 in k8488 in k8485 in k8479 in k8460 in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_6719(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_6719,3,t0,t1,t2);}
a=C_alloc(7);
t3=C_i_cdr(t2);
if(C_truep(C_i_symbolp(t3))){
t4=C_i_car(((C_word*)t0)[2]);
t5=C_u_i_cdr(t2);
t6=C_a_i_cons(&a,2,t4,t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6737,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:291: loop2 */
t8=((C_word*)((C_word*)t0)[3])[1];
f_6642(t8,t7,C_u_i_cdr(((C_word*)t0)[2]));}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6748,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:293: warn */
t5=((C_word*)t0)[4];
f_6592(t5,t4,lf[118],C_i_car(((C_word*)t0)[2]));}}

/* k6735 in g1180 in k6778 in k6788 in loop2 in loop in k8491 in k8488 in k8485 in k8479 in k8460 in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in ... */
static void C_ccall f_6737(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_6737,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6746 in g1180 in k6778 in k6788 in loop2 in loop in k8491 in k8488 in k8485 in k8479 in k8460 in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in ... */
static void C_ccall f_6748(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6748,c,av);}
/* modules.scm:294: loop2 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6642(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]));}

/* k6765 in k6778 in k6788 in loop2 in loop in k8491 in k8488 in k8485 in k8479 in k8460 in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6767(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6767,c,av);}
/* modules.scm:297: loop2 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6642(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]));}

/* k6778 in k6788 in loop2 in loop in k8491 in k8488 in k8485 in k8479 in k8460 in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6780(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_6780,c,av);}
a=C_alloc(6);
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6719,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li81),tmp=(C_word)a,a+=6,tmp);
/* modules.scm:277: g1180 */
t4=t3;
f_6719(t4,((C_word*)t0)[6],t2);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6767,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:296: warn */
t4=((C_word*)t0)[5];
f_6592(t4,t3,lf[119],C_u_i_car(((C_word*)t0)[3]));}}

/* k6788 in loop2 in loop in k8491 in k8488 in k8485 in k8479 in k8460 in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6790(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_6790,c,av);}
a=C_alloc(7);
if(C_truep(C_i_assq(((C_word*)t0)[2],t1))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6665,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:279: warn */
t3=((C_word*)t0)[6];
f_6592(t3,t2,lf[117],C_u_i_car(((C_word*)t0)[5]));}
else{
t2=C_i_assq(C_u_i_car(((C_word*)t0)[5]),((C_word*)t0)[7]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6679,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[8],a[5]=((C_word)li80),tmp=(C_word)a,a+=6,tmp);
/* modules.scm:277: g1173 */
t4=t3;
f_6679(t4,((C_word*)t0)[4],t2);}
else{
t3=C_u_i_car(((C_word*)t0)[5]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6780,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* modules.scm:288: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[31]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[31]+1);
av2[1]=t4;
tp(2,av2);}}}}

/* merge-se in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_6796(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_6796,2,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6800,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:300: chicken.internal#make-hash-table */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[57]+1));
C_word av2[2];
av2[0]=*((C_word*)lf[57]+1);
av2[1]=t3;
tp(2,av2);}}

/* k6798 in merge-se in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6800(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6800,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6803,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:300: scheme#reverse */
t3=*((C_word*)lf[56]+1);{
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

/* k6801 in k6798 in merge-se in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6803(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_6803,c,av);}
a=C_alloc(7);
t2=C_i_cdr(t1);
t3=C_u_i_car(t1);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6814,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word)li37),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_6814(t7,((C_word*)t0)[3],t2,C_SCHEME_FALSE,t3);}

/* loop in k6801 in k6798 in merge-se in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_6814(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(17,0,4)))){
C_save_and_reclaim_args((void *)trf_6814,5,t0,t1,t2,t3,t4);}
a=C_alloc(17);
if(C_truep(C_i_nullp(t2))){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_i_car(t2);
t6=C_eqp(t3,t5);
t7=(C_truep(t6)?t6:C_i_nullp(C_u_i_car(t2)));
if(C_truep(t7)){
/* modules.scm:304: loop */
t15=t1;
t16=C_u_i_cdr(t2);
t17=t3;
t18=t4;
t1=t15;
t2=t16;
t3=t17;
t4=t18;
goto loop;}
else{
if(C_truep(C_i_not(t3))){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6842,a[2]=((C_word*)t0)[3],a[3]=((C_word)li34),tmp=(C_word)a,a+=4,tmp);
t9=C_i_check_list_2(t4,lf[35]);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6856,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6861,a[2]=t12,a[3]=t8,a[4]=((C_word)li35),tmp=(C_word)a,a+=5,tmp));
t14=((C_word*)t12)[1];
f_6861(t14,t10,t4);}
else{
t8=C_u_i_car(t2);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6889,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t10,a[5]=((C_word*)t0)[3],a[6]=((C_word)li36),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_6889(t12,t1,t8,t4);}}}}

/* g1211 in loop in k6801 in k6798 in merge-se in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_6842(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_6842,3,t0,t1,t2);}
/* modules.scm:307: chicken.internal#hash-table-set! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[54]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[54]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=C_i_car(t2);
av2[4]=C_SCHEME_TRUE;
tp(5,av2);}}

/* k6854 in loop in k6801 in k6798 in merge-se in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6856(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6856,c,av);}
/* modules.scm:308: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6814(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[5]);}

/* for-each-loop1210 in loop in k6801 in k6798 in merge-se in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_6861(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6861,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6871,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:307: g1211 */
t4=((C_word*)t0)[3];
f_6842(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6869 in for-each-loop1210 in loop in k6801 in k6798 in merge-se in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6871(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6871,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_6861(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* lp in loop in k6801 in k6798 in merge-se in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_6889(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,4)))){
C_save_and_reclaim_args((void *)trf_6889,4,t0,t1,t2,t3);}
a=C_alloc(7);
if(C_truep(C_i_nullp(t2))){
/* modules.scm:310: loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_6814(t4,t1,C_i_cdr(((C_word*)t0)[3]),C_u_i_car(((C_word*)t0)[3]),t3);}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6911,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* modules.scm:311: chicken.internal#hash-table-ref */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[55]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[55]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
av2[3]=C_i_caar(t2);
tp(4,av2);}}}

/* k6909 in lp in loop in k6801 in k6798 in merge-se in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6911(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6911,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
/* modules.scm:312: lp */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6889(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]),((C_word*)t0)[5]);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6919,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:313: chicken.internal#hash-table-set! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[54]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[54]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=C_i_caar(((C_word*)t0)[4]);
av2[4]=C_SCHEME_TRUE;
tp(5,av2);}}}

/* k6917 in k6909 in lp in loop in k6801 in k6798 in merge-se in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6919(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_6919,c,av);}
a=C_alloc(3);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_u_i_car(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[3]);
/* modules.scm:314: lp */
t5=((C_word*)((C_word*)t0)[4])[1];
f_6889(t5,((C_word*)t0)[5],t2,t4);}

/* k6951 in k7438 in ##sys#compiled-module-registration in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6953(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_6953,c,av);}
a=C_alloc(17);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6964,a[2]=t4,a[3]=t5,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t7=*((C_word*)lf[45]+1);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4827,a[2]=t9,a[3]=t7,a[4]=((C_word)li44),tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_4827(t11,t6,t1);}

/* k6962 in k6951 in k7438 in ##sys#compiled-module-registration in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_6964(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6964,c,av);}
a=C_alloc(8);
t2=C_i_check_list_2(t1,lf[20]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6972,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word)li43),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_6972(t6,((C_word*)t0)[4],t1);}

/* map-loop1246 in k6962 in k6951 in k7438 in ##sys#compiled-module-registration in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_6972(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_6972,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,2,lf[75],t3);
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

/* a7005 in k7438 in ##sys#compiled-module-registration in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7006(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_7006,c,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7012,a[2]=t2,a[3]=((C_word)li45),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7018,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp);
/* modules.scm:318: ##sys#call-with-values */{
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

/* a7011 in a7005 in k7438 in ##sys#compiled-module-registration in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7012(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_7012,c,av);}
/* modules.scm:318: ##sys#decompose-import */
t2=*((C_word*)lf[76]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=*((C_word*)lf[77]+1);
av2[4]=*((C_word*)lf[45]+1);
av2[5]=lf[6];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* a7017 in a7005 in k7438 in ##sys#compiled-module-registration in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7018(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,1)))){
C_save_and_reclaim((void*)f_7018,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_list_ref(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* ##sys#compiled-module-registration in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7028(C_word c,C_word *av){
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
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_7028,c,av);}
a=C_alloc(16);
t4=C_i_check_structure_2(t2,lf[6],lf[44]);
t5=C_i_block_ref(t2,C_fix(4));
t6=C_i_check_structure_2(t2,lf[6],lf[8]);
t7=C_i_block_ref(t2,C_fix(1));
t8=C_i_check_structure_2(t2,lf[6],lf[59]);
t9=C_i_block_ref(t2,C_fix(8));
t10=C_i_check_structure_2(t2,lf[6],lf[16]);
t11=C_i_block_ref(t2,C_fix(12));
t12=C_i_check_structure_2(t2,lf[6],lf[60]);
t13=C_i_block_ref(t2,C_fix(9));
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7063,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t15=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7067,a[2]=t14,a[3]=t2,a[4]=t5,a[5]=t11,a[6]=t7,a[7]=t13,a[8]=t9,tmp=(C_word)a,a+=9,tmp);
t16=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7440,a[2]=t15,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t17=C_eqp(t3,lf[78]);
if(C_truep(t17)){
t18=C_i_pairp(t9);
t19=t16;
f_7440(t19,(C_truep(t18)?C_i_pairp(t11):C_SCHEME_FALSE));}
else{
t18=t16;
f_7440(t18,C_SCHEME_FALSE);}}

/* k7061 in ##sys#compiled-module-registration in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7063(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,1)))){
C_save_and_reclaim((void *)f_7063,c,av);}
a=C_alloc(15);
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=C_a_i_cons(&a,2,lf[61],t2);
t4=C_a_i_list(&a,2,lf[62],t3);
t5=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,1,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k7065 in ##sys#compiled-module-registration in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7067(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7067,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7071,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7075,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t4=C_i_pairp(((C_word*)t0)[8]);
t5=(C_truep(t4)?C_i_pairp(((C_word*)t0)[5]):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7431,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:335: chicken.syntax#strip-syntax */
t7=*((C_word*)lf[69]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t6=t3;
f_7075(t6,C_SCHEME_END_OF_LIST);}}

/* k7069 in k7065 in ##sys#compiled-module-registration in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7071(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7071,c,av);}
/* modules.scm:329: ##sys#append */
t2=*((C_word*)lf[63]+1);{
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

/* k7073 in k7065 in ##sys#compiled-module-registration in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_7075(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,2)))){
C_save_and_reclaim_args((void *)trf_7075,2,t0,t1);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7079,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7083,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t4=C_i_pairp(((C_word*)t0)[7]);
t5=(C_truep(t4)?C_i_pairp(((C_word*)t0)[5]):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7403,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:338: chicken.syntax#strip-syntax */
t7=*((C_word*)lf[69]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t6=t3;
f_7083(t6,C_SCHEME_END_OF_LIST);}}

/* k7077 in k7073 in k7065 in ##sys#compiled-module-registration in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7079(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7079,c,av);}
/* modules.scm:329: ##sys#append */
t2=*((C_word*)lf[63]+1);{
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

/* k7081 in k7073 in k7065 in ##sys#compiled-module-registration in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_7083(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,2)))){
C_save_and_reclaim_args((void *)trf_7083,2,t0,t1);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7087,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7091,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_i_getprop(((C_word*)t0)[6],lf[71],C_SCHEME_FALSE);
t5=(C_truep(t4)?t4:C_i_pairp(((C_word*)t0)[5]));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7382,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t7=C_i_check_structure_2(((C_word*)t0)[3],lf[6],lf[38]);
/* modules.scm:341: chicken.syntax#strip-syntax */
t8=*((C_word*)lf[69]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t6;
av2[2]=C_i_block_ref(((C_word*)t0)[3],C_fix(10));
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t6=t3;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_END_OF_LIST;
f_7091(2,av2);}}}

/* k7085 in k7081 in k7073 in k7065 in ##sys#compiled-module-registration in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7087(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7087,c,av);}
/* modules.scm:329: ##sys#append */
t2=*((C_word*)lf[63]+1);{
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

/* k7089 in k7081 in k7073 in k7065 in ##sys#compiled-module-registration in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7091(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(34,c,3)))){
C_save_and_reclaim((void *)f_7091,c,av);}
a=C_alloc(34);
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[6],lf[8]);
t3=C_i_block_ref(((C_word*)t0)[2],C_fix(1));
t4=C_a_i_list(&a,2,lf[64],t3);
t5=C_i_check_structure_2(((C_word*)t0)[2],lf[6],lf[65]);
t6=C_i_block_ref(((C_word*)t0)[2],C_fix(2));
t7=C_a_i_list(&a,2,lf[64],t6);
t8=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t9=t8;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=((C_word*)t10)[1];
t12=C_i_check_structure_2(((C_word*)t0)[2],lf[6],lf[66]);
t13=C_i_block_ref(((C_word*)t0)[2],C_fix(13));
t14=C_i_check_list_2(t13,lf[20]);
t15=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7325,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=t7,a[7]=((C_word*)t0)[5],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7327,a[2]=t10,a[3]=t17,a[4]=t11,a[5]=((C_word)li42),tmp=(C_word)a,a+=6,tmp));
t19=((C_word*)t17)[1];
f_7327(t19,t15,t13);}

/* k7121 in k7234 in k7323 in k7089 in k7081 in k7073 in k7065 in ##sys#compiled-module-registration in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_7123(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,0,3)))){
C_save_and_reclaim_args((void *)trf_7123,2,t0,t1);}
a=C_alloc(24);
t2=C_a_i_list(&a,7,lf[70],((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t1);
t3=C_a_i_list(&a,1,t2);
/* modules.scm:329: ##sys#append */
t4=*((C_word*)lf[63]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=((C_word*)t0)[7];
av2[2]=((C_word*)t0)[8];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k7125 in k7234 in k7323 in k7089 in k7081 in k7073 in k7065 in ##sys#compiled-module-registration in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7127(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7127,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
f_7123(t2,C_a_i_cons(&a,2,lf[67],t1));}

/* loop in k7234 in k7323 in k7089 in k7081 in k7073 in k7065 in ##sys#compiled-module-registration in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_7139(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_7139,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_caar(t2);
if(C_truep(C_i_assq(t3,((C_word*)t0)[2]))){
/* modules.scm:368: loop */
t11=t1;
t12=C_u_i_cdr(t2);
t1=t11;
t2=t12;
goto loop;}
else{
t4=C_i_caar(t2);
t5=C_u_i_car(t2);
t6=C_u_i_car(t5);
t7=C_a_i_list(&a,2,lf[64],t6);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7181,a[2]=t7,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t9=C_u_i_car(t2);
/* modules.scm:371: chicken.syntax#strip-syntax */
t10=*((C_word*)lf[69]+1);{
C_word av2[3];
av2[0]=t10;
av2[1]=t8;
av2[2]=C_u_i_cdr(t9);
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}}}

/* k7169 in k7179 in loop in k7234 in k7323 in k7089 in k7081 in k7073 in k7065 in ##sys#compiled-module-registration in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7171(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7171,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7179 in loop in k7234 in k7323 in k7089 in k7081 in k7073 in k7065 in ##sys#compiled-module-registration in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7181(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_7181,c,av);}
a=C_alloc(13);
t2=C_a_i_list(&a,3,lf[68],((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7171,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:372: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_7139(t4,t3,C_u_i_cdr(((C_word*)t0)[5]));}

/* g1343 in k7323 in k7089 in k7081 in k7073 in k7065 in ##sys#compiled-module-registration in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_7196(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_7196,3,t0,t1,t2);}
a=C_alloc(10);
t3=C_i_car(t2);
t4=C_i_assq(t3,((C_word*)t0)[2]);
if(C_truep(C_i_pairp(t4))){
t5=C_u_i_car(t2);
t6=C_a_i_list(&a,2,lf[64],t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7220,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:358: chicken.syntax#strip-syntax */
t8=*((C_word*)lf[69]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=C_u_i_cdr(t4);
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_a_i_list(&a,2,lf[64],t3);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k7218 in g1343 in k7323 in k7089 in k7081 in k7073 in k7065 in ##sys#compiled-module-registration in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7220(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_7220,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[68],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7234 in k7323 in k7089 in k7081 in k7073 in k7065 in ##sys#compiled-module-registration in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7236(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_7236,c,av);}
a=C_alloc(22);
t2=C_a_i_cons(&a,2,lf[67],t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7123,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7127,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(((C_word*)t0)[8]))){
t5=t3;
f_7123(t5,C_a_i_cons(&a,2,lf[67],C_SCHEME_END_OF_LIST));}
else{
t5=C_i_check_structure_2(((C_word*)t0)[9],lf[6],lf[49]);
t6=C_i_block_ref(((C_word*)t0)[9],C_fix(6));
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7139,a[2]=((C_word*)t0)[8],a[3]=t8,a[4]=((C_word)li40),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_7139(t10,t4,t6);}}

/* map-loop1337 in k7323 in k7089 in k7081 in k7073 in k7065 in ##sys#compiled-module-registration in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_7238(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7238,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7263,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:354: g1343 */
t4=((C_word*)t0)[4];
f_7196(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7261 in map-loop1337 in k7323 in k7089 in k7081 in k7073 in k7065 in ##sys#compiled-module-registration in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7263(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7263,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7238(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k7323 in k7089 in k7081 in k7073 in k7065 in ##sys#compiled-module-registration in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7325(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(37,c,3)))){
C_save_and_reclaim((void *)f_7325,c,av);}
a=C_alloc(37);
t2=C_a_i_cons(&a,2,lf[67],t1);
t3=C_i_check_structure_2(((C_word*)t0)[2],lf[6],lf[15]);
t4=C_i_block_ref(((C_word*)t0)[2],C_fix(11));
t5=C_a_i_list(&a,2,lf[64],t4);
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7196,a[2]=((C_word*)t0)[3],a[3]=((C_word)li39),tmp=(C_word)a,a+=4,tmp);
t11=C_i_check_list_2(((C_word*)t0)[4],lf[20]);
t12=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7236,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t2,a[5]=t5,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[2],tmp=(C_word)a,a+=10,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7238,a[2]=t8,a[3]=t14,a[4]=t10,a[5]=t9,a[6]=((C_word)li41),tmp=(C_word)a,a+=7,tmp));
t16=((C_word*)t14)[1];
f_7238(t16,t12,((C_word*)t0)[4]);}

/* map-loop1304 in k7089 in k7081 in k7073 in k7065 in ##sys#compiled-module-registration in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_7327(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(30,0,2)))){
C_save_and_reclaim_args((void *)trf_7327,3,t0,t1,t2);}
a=C_alloc(30);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7352,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_i_cdr(t4);
if(C_truep(C_i_symbolp(t5))){
t6=C_u_i_car(t4);
t7=C_u_i_cdr(t4);
t8=C_a_i_cons(&a,2,t6,t7);
t9=t3;
f_7352(t9,C_a_i_list(&a,2,lf[64],t8));}
else{
t6=C_u_i_car(t4);
t7=C_a_i_list(&a,2,lf[64],t6);
t8=C_a_i_list(&a,2,lf[64],C_SCHEME_END_OF_LIST);
t9=C_u_i_cdr(t4);
t10=t3;
f_7352(t10,C_a_i_list(&a,4,lf[67],t7,t8,t9));}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7350 in map-loop1304 in k7089 in k7081 in k7073 in k7065 in ##sys#compiled-module-registration in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_7352(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_7352,2,t0,t1);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7327(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k7380 in k7081 in k7073 in k7065 in ##sys#compiled-module-registration in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7382(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7382,c,av);}
/* modules.scm:341: ##sys#fast-reverse */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[72]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[72]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k7401 in k7073 in k7065 in ##sys#compiled-module-registration in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7403(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_7403,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,lf[73],t1);
t3=((C_word*)t0)[2];
f_7083(t3,C_a_i_list(&a,1,t2));}

/* k7429 in k7065 in ##sys#compiled-module-registration in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7431(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_7431,c,av);}
a=C_alloc(18);
t2=C_a_i_cons(&a,2,lf[73],t1);
t3=C_a_i_list(&a,2,lf[64],t2);
t4=C_a_i_list(&a,2,lf[74],t3);
t5=((C_word*)t0)[2];
f_7075(t5,C_a_i_list(&a,1,t4));}

/* k7438 in ##sys#compiled-module-registration in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_7440(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_7440,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6953,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7006,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp);
t4=C_i_check_structure_2(((C_word*)t0)[3],lf[6],lf[59]);
/* modules.scm:317: filter-map */
f_4910(t2,t3,C_i_block_ref(((C_word*)t0)[3],C_fix(8)));}
else{
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_LIST;
f_7067(2,av2);}}}

/* ##sys#register-compiled-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7457(C_word c,C_word *av){
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
C_word *a;
if(c<7) C_bad_min_argc_2(c,7,t0);
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_7457,c,av);}
a=C_alloc(12);
t7=C_rest_nullp(c,7);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_get_rest_arg(c,7,av,7,t0));
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7490,a[2]=t8,a[3]=t2,a[4]=t3,a[5]=t5,a[6]=t4,a[7]=t1,a[8]=t6,tmp=(C_word)a,a+=9,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7730,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp);
/* modules.scm:388: filter-map */
f_4910(t9,t10,t6);}

/* k7485 in a7717 in k7488 in ##sys#register-compiled-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7487(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7487,c,av);}
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=C_i_cdr(t2);
if(C_truep(C_i_pairp(t3))){
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* modules.scm:384: ##sys#error */
t4=*((C_word*)lf[80]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[81];
av2[3]=lf[82];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}
else{
/* modules.scm:384: ##sys#error */
t3=*((C_word*)lf[80]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[81];
av2[3]=lf[82];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* k7488 in ##sys#register-compiled-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7490(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_7490,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7493,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7718,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp);
/* modules.scm:393: filter-map */
f_4910(t2,t3,((C_word*)t0)[8]);}

/* k7491 in k7488 in ##sys#register-compiled-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7493(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_7493,c,av);}
a=C_alloc(22);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[20]);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7519,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7684,a[2]=t4,a[3]=t9,a[4]=t5,a[5]=((C_word)li53),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_7684(t11,t7,((C_word*)t0)[2]);}

/* k7507 in map-loop1417 in k7491 in k7488 in ##sys#register-compiled-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7509(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7509,c,av);}
a=C_alloc(12);
t2=C_a_i_list3(&a,3,((C_word*)t0)[2],C_SCHEME_FALSE,t1);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=C_i_setslot(((C_word*)((C_word*)t0)[3])[1],C_fix(1),t3);
t5=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t6=((C_word*)((C_word*)t0)[4])[1];
f_7684(t6,((C_word*)t0)[5],C_slot(((C_word*)t0)[6],C_fix(1)));}

/* k7517 in k7491 in k7488 in ##sys#register-compiled-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7519(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_7519,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7682,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* modules.scm:399: scheme#append */
t3=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k7523 in k7680 in k7517 in k7491 in k7488 in ##sys#register-compiled-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7525(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,3)))){
C_save_and_reclaim((void *)f_7525,c,av);}
a=C_alloc(20);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7526,a[2]=t1,a[3]=((C_word)li49),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[2],lf[35]);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7551,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7629,a[2]=t6,a[3]=t2,a[4]=((C_word)li52),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_7629(t8,t4,((C_word*)t0)[2]);}

/* g1450 in k7523 in k7680 in k7517 in k7491 in k7488 in ##sys#register-compiled-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_7526(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_7526,3,t0,t1,t2);}
a=C_alloc(10);
t3=C_i_cdr(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7538,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_i_cadr(t2);
if(C_truep(t5)){
/* modules.scm:409: merge-se */
f_6796(t4,C_a_i_list(&a,2,t5,((C_word*)t0)[2]));}
else{
/* modules.scm:409: merge-se */
f_6796(t4,C_a_i_list(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]));}}

/* k7536 in g1450 in k7523 in k7680 in k7517 in k7491 in k7488 in ##sys#register-compiled-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7538(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7538,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_set_car(((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7549 in k7523 in k7680 in k7517 in k7491 in k7488 in ##sys#register-compiled-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7551(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_7551,c,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7552,a[2]=((C_word*)t0)[2],a[3]=((C_word)li50),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[3],lf[35]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7577,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7606,a[2]=t6,a[3]=t2,a[4]=((C_word)li51),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_7606(t8,t4,((C_word*)t0)[3]);}

/* g1460 in k7549 in k7523 in k7680 in k7517 in k7491 in k7488 in ##sys#register-compiled-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_7552(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_7552,3,t0,t1,t2);}
a=C_alloc(10);
t3=C_i_cdr(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7564,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_i_cadr(t2);
if(C_truep(t5)){
/* modules.scm:413: merge-se */
f_6796(t4,C_a_i_list(&a,2,t5,((C_word*)t0)[2]));}
else{
/* modules.scm:413: merge-se */
f_6796(t4,C_a_i_list(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]));}}

/* k7562 in g1460 in k7549 in k7523 in k7680 in k7517 in k7491 in k7488 in ##sys#register-compiled-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7564(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7564,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_set_car(((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7575 in k7549 in k7523 in k7680 in k7517 in k7491 in k7488 in ##sys#register-compiled-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7577(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_7577,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7580,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7596,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7604,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:417: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[31]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[31]+1);
av2[1]=t4;
tp(2,av2);}}

/* k7578 in k7575 in k7549 in k7523 in k7680 in k7517 in k7491 in k7488 in ##sys#register-compiled-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7580(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_7580,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,t2,*((C_word*)lf[27]+1));
t4=C_mutate((C_word*)lf[27]+1 /* (set! ##sys#module-table ...) */,t3);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k7594 in k7575 in k7549 in k7523 in k7680 in k7517 in k7491 in k7488 in ##sys#register-compiled-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7596(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_7596,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7600,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:418: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[30]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t2;
tp(2,av2);}}

/* k7598 in k7594 in k7575 in k7549 in k7523 in k7680 in k7517 in k7491 in k7488 in ##sys#register-compiled-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7600(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_7600,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_i_check_structure_2(((C_word*)t0)[3],lf[6],C_SCHEME_FALSE);
/* modules.scm:95: ##sys#block-set! */
t4=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[3];
av2[3]=C_fix(14);
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k7602 in k7575 in k7549 in k7523 in k7680 in k7517 in k7491 in k7488 in ##sys#register-compiled-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7604(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_7604,c,av);}
a=C_alloc(9);
/* modules.scm:417: merge-se */
f_6796(((C_word*)t0)[2],C_a_i_list(&a,3,t1,((C_word*)t0)[3],((C_word*)t0)[4]));}

/* for-each-loop1459 in k7549 in k7523 in k7680 in k7517 in k7491 in k7488 in ##sys#register-compiled-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_7606(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7606,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7616,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:411: g1460 */
t4=((C_word*)t0)[3];
f_7552(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7614 in for-each-loop1459 in k7549 in k7523 in k7680 in k7517 in k7491 in k7488 in ##sys#register-compiled-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7616(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7616,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_7606(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* for-each-loop1449 in k7523 in k7680 in k7517 in k7491 in k7488 in ##sys#register-compiled-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_7629(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7629,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7639,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:407: g1450 */
t4=((C_word*)t0)[3];
f_7526(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7637 in for-each-loop1449 in k7523 in k7680 in k7517 in k7491 in k7488 in ##sys#register-compiled-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7639(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7639,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_7629(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k7661 in k7680 in k7517 in k7491 in k7488 in ##sys#register-compiled-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7663(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7663,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7667,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:404: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[31]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[31]+1);
av2[1]=t2;
tp(2,av2);}}

/* k7665 in k7661 in k7680 in k7517 in k7491 in k7488 in ##sys#register-compiled-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7667(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_7667,c,av);}
a=C_alloc(18);
/* modules.scm:402: merge-se */
f_6796(((C_word*)t0)[2],C_a_i_list(&a,6,((C_word*)t0)[3],t1,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]));}

/* k7680 in k7517 in k7491 in k7488 in ##sys#register-compiled-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7682(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(31,c,2)))){
C_save_and_reclaim((void *)f_7682,c,av);}
a=C_alloc(31);
t2=C_a_i_record(&a,15,lf[6],((C_word*)t0)[2],((C_word*)t0)[3],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,((C_word*)t0)[4],t1,((C_word*)t0)[5],C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7525,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[2],a[5]=t2,a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t4=C_i_nullp(((C_word*)t0)[6]);
t5=C_i_not(t4);
t6=(C_truep(t5)?t5:C_i_not(C_i_nullp(((C_word*)t0)[7])));
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7663,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* modules.scm:403: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[30]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t7;
tp(2,av2);}}
else{
t7=t3;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_END_OF_LIST;
f_7525(2,av2);}}}

/* map-loop1417 in k7491 in k7488 in ##sys#register-compiled-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_7684(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_7684,3,t0,t1,t2);}
a=C_alloc(7);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7509,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* modules.scm:397: ##sys#ensure-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[79]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[79]+1);
av2[1]=t5;
av2[2]=C_u_i_cdr(t3);
av2[3]=C_u_i_car(t3);
tp(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a7717 in k7488 in ##sys#register-compiled-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7718(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7718,c,av);}
a=C_alloc(4);
if(C_truep(C_i_symbolp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7487,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:381: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[30]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t3;
tp(2,av2);}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a7729 in ##sys#register-compiled-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7730(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_7730,c,av);}
a=C_alloc(4);
t3=C_i_symbolp(t2);
if(C_truep(C_i_not(t3))){
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7748,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:390: ##sys#ensure-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[79]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[79]+1);
av2[1]=t5;
av2[2]=C_u_i_cdr(t2);
av2[3]=C_u_i_car(t2);
tp(4,av2);}}
else{
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7746 in a7729 in ##sys#register-compiled-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7748(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_7748,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list3(&a,3,((C_word*)t0)[3],C_SCHEME_FALSE,t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* ##sys#register-core-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7764(C_word c,C_word *av){
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
if(c<5) C_bad_min_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_7764,c,av);}
a=C_alloc(7);
t5=C_rest_nullp(c,5);
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:C_get_rest_arg(c,5,av,5,t0));
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7771,a[2]=t2,a[3]=t6,a[4]=t3,a[5]=t4,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* modules.scm:423: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[30]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t7;
tp(2,av2);}}

/* k7769 in ##sys#register-core-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7771(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(25,c,3)))){
C_save_and_reclaim((void *)f_7771,c,av);}
a=C_alloc(25);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7814,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word)li57),tmp=(C_word)a,a+=5,tmp);
t7=C_i_check_list_2(((C_word*)t0)[3],lf[20]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7836,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7838,a[2]=t4,a[3]=t10,a[4]=t6,a[5]=t5,a[6]=((C_word)li58),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_7838(t12,t8,((C_word*)t0)[3]);}

/* k7775 in k7834 in k7769 in ##sys#register-core-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7777(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_7777,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,t2,*((C_word*)lf[27]+1));
t4=C_mutate((C_word*)lf[27]+1 /* (set! ##sys#module-table ...) */,t3);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k7791 in k7834 in k7769 in ##sys#register-core-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7793(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_7793,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7797,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:441: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[30]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t2;
tp(2,av2);}}

/* k7795 in k7791 in k7834 in k7769 in ##sys#register-core-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7797(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_7797,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_i_check_structure_2(((C_word*)t0)[3],lf[6],C_SCHEME_FALSE);
/* modules.scm:95: ##sys#block-set! */
t4=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[3];
av2[3]=C_fix(14);
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k7799 in k7834 in k7769 in ##sys#register-core-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7801(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_7801,c,av);}
a=C_alloc(9);
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[6],lf[15]);
t3=C_i_block_ref(((C_word*)t0)[2],C_fix(11));
t4=C_i_check_structure_2(((C_word*)t0)[2],lf[6],lf[16]);
t5=C_i_block_ref(((C_word*)t0)[2],C_fix(12));
/* modules.scm:438: merge-se */
f_6796(((C_word*)t0)[3],C_a_i_list(&a,3,t1,t3,t5));}

/* g1518 in k7769 in ##sys#register-core-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_7814(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_7814,3,t0,t1,t2);}
if(C_truep(C_i_symbolp(t2))){
t3=C_i_assq(t2,((C_word*)t0)[2]);
if(C_truep(t3)){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* modules.scm:430: ##sys#error */
t4=*((C_word*)lf[80]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=lf[84];
av2[3]=t2;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7834 in k7769 in ##sys#register-core-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7836(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,2)))){
C_save_and_reclaim((void *)f_7836,c,av);}
a=C_alloc(29);
t2=C_a_i_record(&a,15,lf[6],((C_word*)t0)[2],((C_word*)t0)[3],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,((C_word*)t0)[4],t1,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7777,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7793,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7801,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:438: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[31]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[31]+1);
av2[1]=t5;
tp(2,av2);}}

/* map-loop1512 in k7769 in ##sys#register-core-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_7838(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7838,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7863,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:427: g1518 */
t4=((C_word*)t0)[4];
f_7814(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7861 in map-loop1512 in k7769 in ##sys#register-core-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7863(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7863,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7838(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* ##sys#register-primitive-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7878(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_7878,c,av);}
if(C_truep(C_rest_nullp(c,4))){
/* modules.scm:447: ##sys#register-core-module */
t4=*((C_word*)lf[83]+1);{
C_word av2[6];
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=t2;
av2[4]=t3;
av2[5]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}
else{
/* modules.scm:447: ##sys#register-core-module */
t4=*((C_word*)lf[83]+1);{
C_word av2[6];
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=t2;
av2[4]=t3;
av2[5]=C_get_rest_arg(c,4,av,4,t0);
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}}

/* find-export in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_7893(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7893,4,t1,t2,t3,t4);}
a=C_alloc(5);
t5=C_i_check_structure_2(t3,lf[6],lf[14]);
t6=C_i_block_ref(t3,C_fix(3));
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7904,a[2]=t2,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t8=C_eqp(C_SCHEME_TRUE,t6);
if(C_truep(t8)){
t9=C_i_check_structure_2(t3,lf[6],lf[34]);
t10=t7;
f_7904(t10,C_i_block_ref(t3,C_fix(5)));}
else{
t9=t7;
f_7904(t9,t6);}}

/* k7902 in find-export in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_7904(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7904,2,t0,t1);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7906,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li61),tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t3;
av2[1]=(
  f_7906(t2,t1)
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* loop in k7902 in find-export in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static C_word C_fcall f_7906(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_nullp(t1))){
return(C_SCHEME_FALSE);}
else{
t2=C_i_car(t1);
t3=C_eqp(((C_word*)t0)[2],t2);
if(C_truep(t3)){
return(t3);}
else{
if(C_truep(C_i_pairp(C_u_i_car(t1)))){
t4=C_i_caar(t1);
t5=C_eqp(((C_word*)t0)[2],t4);
if(C_truep(t5)){
return(t5);}
else{
if(C_truep(((C_word*)t0)[3])){
t6=C_u_i_car(t1);
t7=C_i_memq(((C_word*)t0)[2],C_u_i_cdr(t6));
if(C_truep(t7)){
return(t7);}
else{
t9=C_u_i_cdr(t1);
t1=t9;
goto loop;}}
else{
t9=C_u_i_cdr(t1);
t1=t9;
goto loop;}}}
else{
t9=C_u_i_cdr(t1);
t1=t9;
goto loop;}}}}

/* ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7971(C_word c,C_word *av){
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
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(33,c,3)))){
C_save_and_reclaim((void *)f_7971,c,av);}
a=C_alloc(33);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8949,a[2]=((C_word)li63),tmp=(C_word)a,a+=3,tmp):C_get_rest_arg(c,3,av,3,t0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7977,a[2]=t2,a[3]=((C_word)li74),tmp=(C_word)a,a+=4,tmp);
t6=C_i_check_structure_2(t2,lf[6],lf[14]);
t7=C_i_block_ref(t2,C_fix(3));
t8=C_i_check_structure_2(t2,lf[6],lf[8]);
t9=C_i_block_ref(t2,C_fix(1));
t10=C_i_check_structure_2(t2,lf[6],lf[44]);
t11=C_i_block_ref(t2,C_fix(4));
t12=C_i_check_structure_2(t2,lf[6],lf[34]);
t13=C_i_block_ref(t2,C_fix(5));
t14=C_SCHEME_FALSE;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t17=t16;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=((C_word*)t18)[1];
t20=C_i_check_structure_2(t2,lf[6],lf[49]);
t21=C_i_block_ref(t2,C_fix(6));
t22=C_i_check_list_2(t21,lf[20]);
t23=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8456,a[2]=t13,a[3]=t2,a[4]=t1,a[5]=t15,a[6]=t9,a[7]=t5,a[8]=t7,a[9]=t11,a[10]=t4,tmp=(C_word)a,a+=11,tmp);
t24=C_SCHEME_UNDEFINED;
t25=(*a=C_VECTOR_TYPE|1,a[1]=t24,tmp=(C_word)a,a+=2,tmp);
t26=C_set_block_item(t25,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8913,a[2]=t18,a[3]=t25,a[4]=t19,a[5]=((C_word)li90),tmp=(C_word)a,a+=6,tmp));
t27=((C_word*)t25)[1];
f_8913(t27,t23,t21);}

/* report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_7977(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7977,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7981,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:471: chicken.base#open-output-string */
t4=*((C_word*)lf[96]+1);{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7981(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_7981,c,av);}
a=C_alloc(6);
t2=C_i_check_port_2(t1,C_fix(2),C_SCHEME_TRUE,lf[87]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7987,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:472: ##sys#print */
t4=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[111];
av2[3]=C_SCHEME_FALSE;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7987(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_7987,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7990,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_check_structure_2(((C_word*)t0)[5],lf[6],lf[8]);
/* modules.scm:472: ##sys#print */
t4=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=C_i_block_ref(((C_word*)t0)[5],C_fix(1));
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7990(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_7990,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7993,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:472: ##sys#print */
t3=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[110];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k7991 in k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7993(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(25,c,3)))){
C_save_and_reclaim((void *)f_7993,c,av);}
a=C_alloc(25);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7996,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8310,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_i_check_list_2(((C_word*)t0)[4],lf[20]);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8381,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8383,a[2]=t6,a[3]=t11,a[4]=t7,a[5]=((C_word)li73),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_8383(t13,t9,((C_word*)t0)[4]);}

/* k7994 in k7991 in k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_7996(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7996,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7997,a[2]=((C_word*)t0)[2],a[3]=((C_word)li70),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8276,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8285,a[2]=t5,a[3]=t2,a[4]=((C_word)li71),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_8285(t7,t3,((C_word*)t0)[4]);}

/* g1601 in k7994 in k7991 in k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_7997(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_7997,3,t0,t1,t2);}
a=C_alloc(5);
t3=C_i_check_port_2(((C_word*)t0)[2],C_fix(2),C_SCHEME_TRUE,lf[87]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8004,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:487: ##sys#print */
t5=*((C_word*)lf[90]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[106];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k8002 in g1601 in k7994 in k7991 in k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8004(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_8004,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8007,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:487: ##sys#print */
t3=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_car(((C_word*)t0)[3]);
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k8005 in k8002 in g1601 in k7994 in k7991 in k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8007(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_8007,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8010,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:487: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[98]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[98]+1);
av2[1]=t2;
av2[2]=C_make_character(39);
av2[3]=((C_word*)t0)[2];
tp(4,av2);}}

/* k8008 in k8005 in k8002 in g1601 in k7994 in k7991 in k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8010(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_8010,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8011,a[2]=((C_word*)t0)[2],a[3]=((C_word)li66),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8149,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:505: scheme#reverse */
t4=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_u_i_cdr(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* g1669 in k8008 in k8005 in k8002 in g1601 in k7994 in k7991 in k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_8011(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_8011,3,t0,t1,t2);}
a=C_alloc(12);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8014,a[2]=((C_word)li64),tmp=(C_word)a,a+=3,tmp);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?(C_truep(C_u_i_car(t2))?C_u_i_cdr(t2):C_SCHEME_FALSE):C_SCHEME_FALSE);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8044,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t5)){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8054,a[2]=t3,a[3]=t2,a[4]=((C_word)li65),tmp=(C_word)a,a+=5,tmp);
/* modules.scm:497: g1696 */
t8=t7;
f_8054(t8,t6,t5);}
else{
t7=C_i_pairp(t2);
t8=(C_truep(t7)?C_u_i_cdr(t2):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8096,a[2]=t6,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:502: chicken.base#open-output-string */
t10=*((C_word*)lf[96]+1);{
C_word av2[2];
av2[0]=t10;
av2[1]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8119,a[2]=t6,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:503: chicken.base#open-output-string */
t10=*((C_word*)lf[96]+1);{
C_word av2[2];
av2[0]=t10;
av2[1]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}}}

/* ln->num in g1669 in k8008 in k8005 in k8002 in g1601 in k7994 in k7991 in k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_8014(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_8014,2,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8018,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:492: chicken.string#string-split */
t4=*((C_word*)lf[88]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[89];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k8016 in ln->num in g1669 in k8008 in k8005 in k8002 in g1601 in k7994 in k7991 in k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in ... */
static void C_ccall f_8018(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8018,c,av);}
if(C_truep(C_i_pairp(t1))){
t2=C_i_length(t1);
t3=C_eqp(C_fix(2),t2);
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=(C_truep(t3)?C_i_cadr(t1):((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k8042 in g1669 in k8008 in k8005 in k8002 in g1601 in k7994 in k7991 in k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8044(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_8044,c,av);}
a=C_alloc(5);
t2=C_i_check_port_2(((C_word*)t0)[2],C_fix(2),C_SCHEME_TRUE,lf[87]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8050,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:504: ##sys#print */
t4=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[91];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k8048 in k8042 in g1669 in k8008 in k8005 in k8002 in g1601 in k7994 in k7991 in k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in ... */
static void C_ccall f_8050(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8050,c,av);}
/* modules.scm:504: ##sys#print */
t2=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* g1696 in g1669 in k8008 in k8005 in k8002 in g1601 in k7994 in k7991 in k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_8054(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_8054,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8058,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:500: chicken.base#open-output-string */
t4=*((C_word*)lf[96]+1);{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k8056 in g1696 in g1669 in k8008 in k8005 in k8002 in g1601 in k7994 in k7991 in k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in ... */
static void C_ccall f_8058(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_8058,c,av);}
a=C_alloc(7);
t2=C_i_check_port_2(t1,C_fix(2),C_SCHEME_TRUE,lf[92]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8064,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* modules.scm:500: ##sys#print */
t4=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[95];
av2[3]=C_SCHEME_FALSE;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k8062 in k8056 in g1696 in g1669 in k8008 in k8005 in k8002 in g1601 in k7994 in k7991 in k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in ... */
static void C_ccall f_8064(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_8064,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8067,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:500: ##sys#print */
t3=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_car(((C_word*)t0)[6]);
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k8065 in k8062 in k8056 in g1696 in g1669 in k8008 in k8005 in k8002 in g1601 in k7994 in k7991 in k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in ... */
static void C_ccall f_8067(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_8067,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8070,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:500: ##sys#print */
t3=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[94];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k8068 in k8065 in k8062 in k8056 in g1696 in g1669 in k8008 in k8005 in k8002 in g1601 in k7994 in k7991 in k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in ... */
static void C_ccall f_8070(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_8070,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8073,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8080,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:500: ln->num */
f_8014(t3,((C_word*)t0)[5]);}

/* k8071 in k8068 in k8065 in k8062 in k8056 in g1696 in g1669 in k8008 in k8005 in k8002 in g1601 in k7994 in k7991 in k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in ... */
static void C_ccall f_8073(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8073,c,av);}
/* modules.scm:500: chicken.base#get-output-string */
t2=*((C_word*)lf[93]+1);{
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

/* k8078 in k8068 in k8065 in k8062 in k8056 in g1696 in g1669 in k8008 in k8005 in k8002 in g1601 in k7994 in k7991 in k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in ... */
static void C_ccall f_8080(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8080,c,av);}
/* modules.scm:500: ##sys#print */
t2=*((C_word*)lf[90]+1);{
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

/* k8094 in g1669 in k8008 in k8005 in k8002 in g1601 in k7994 in k7991 in k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8096(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_8096,c,av);}
a=C_alloc(6);
t2=C_i_check_port_2(t1,C_fix(2),C_SCHEME_TRUE,lf[92]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8102,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:502: ##sys#print */
t4=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[97];
av2[3]=C_SCHEME_FALSE;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k8100 in k8094 in g1669 in k8008 in k8005 in k8002 in g1601 in k7994 in k7991 in k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in ... */
static void C_ccall f_8102(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_8102,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8105,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8112,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:502: ln->num */
f_8014(t3,C_i_cdr(((C_word*)t0)[5]));}

/* k8103 in k8100 in k8094 in g1669 in k8008 in k8005 in k8002 in g1601 in k7994 in k7991 in k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in ... */
static void C_ccall f_8105(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8105,c,av);}
/* modules.scm:502: chicken.base#get-output-string */
t2=*((C_word*)lf[93]+1);{
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

/* k8110 in k8100 in k8094 in g1669 in k8008 in k8005 in k8002 in g1601 in k7994 in k7991 in k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in ... */
static void C_ccall f_8112(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8112,c,av);}
/* modules.scm:502: ##sys#print */
t2=*((C_word*)lf[90]+1);{
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

/* k8117 in g1669 in k8008 in k8005 in k8002 in g1601 in k7994 in k7991 in k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8119(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_8119,c,av);}
a=C_alloc(5);
t2=C_i_check_port_2(t1,C_fix(2),C_SCHEME_TRUE,lf[92]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8125,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:503: ##sys#print */
t4=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[99];
av2[3]=C_SCHEME_FALSE;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k8123 in k8117 in g1669 in k8008 in k8005 in k8002 in g1601 in k7994 in k7991 in k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in ... */
static void C_ccall f_8125(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_8125,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8128,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:503: ##sys#print */
t3=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k8126 in k8123 in k8117 in g1669 in k8008 in k8005 in k8002 in g1601 in k7994 in k7991 in k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in ... */
static void C_ccall f_8128(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_8128,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8131,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:503: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[98]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[98]+1);
av2[1]=t2;
av2[2]=C_make_character(39);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k8129 in k8126 in k8123 in k8117 in g1669 in k8008 in k8005 in k8002 in g1601 in k7994 in k7991 in k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in ... */
static void C_ccall f_8131(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8131,c,av);}
/* modules.scm:503: chicken.base#get-output-string */
t2=*((C_word*)lf[93]+1);{
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

/* k8147 in k8008 in k8005 in k8002 in g1601 in k7994 in k7991 in k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8149(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8149,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8152,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8246,a[2]=t4,a[3]=((C_word*)t0)[5],a[4]=((C_word)li69),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_8246(t6,t2,t1);}

/* k8150 in k8147 in k8008 in k8005 in k8002 in g1601 in k7994 in k7991 in k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8152(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_8152,c,av);}
a=C_alloc(5);
t2=C_u_i_car(((C_word*)t0)[2]);
if(C_truep(t2)){
t3=C_i_getprop(t2,lf[100],C_SCHEME_FALSE);
if(C_truep(t3)){
t4=C_i_check_port_2(((C_word*)t0)[3],C_fix(2),C_SCHEME_TRUE,lf[87]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8170,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:510: ##sys#print */
t6=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[105];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k8168 in k8150 in k8147 in k8008 in k8005 in k8002 in g1601 in k7994 in k7991 in k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in ... */
static void C_ccall f_8170(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_8170,c,av);}
a=C_alloc(5);
t2=C_i_length(((C_word*)t0)[2]);
t3=C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=C_i_check_port_2(((C_word*)t0)[3],C_fix(2),C_SCHEME_TRUE,lf[87]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8182,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:513: ##sys#print */
t6=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[102];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t4=C_i_check_port_2(((C_word*)t0)[3],C_fix(2),C_SCHEME_TRUE,lf[87]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8198,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:515: ##sys#print */
t6=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[104];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}}

/* k8180 in k8168 in k8150 in k8147 in k8008 in k8005 in k8002 in g1601 in k7994 in k7991 in k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in ... */
static void C_ccall f_8182(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_8182,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8185,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8192,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:513: scheme#cadar */
t4=*((C_word*)lf[101]+1);{
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

/* k8183 in k8180 in k8168 in k8150 in k8147 in k8008 in k8005 in k8002 in g1601 in k7994 in k7991 in k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in ... */
static void C_ccall f_8185(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8185,c,av);}
/* modules.scm:513: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[98]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[98]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(39);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k8190 in k8180 in k8168 in k8150 in k8147 in k8008 in k8005 in k8002 in g1601 in k7994 in k7991 in k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in ... */
static void C_ccall f_8192(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8192,c,av);}
/* modules.scm:513: ##sys#print */
t2=*((C_word*)lf[90]+1);{
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

/* k8196 in k8168 in k8150 in k8147 in k8008 in k8005 in k8002 in g1601 in k7994 in k7991 in k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in ... */
static void C_ccall f_8198(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_8198,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8199,a[2]=((C_word*)t0)[2],a[3]=((C_word)li67),tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8218,a[2]=t4,a[3]=t2,a[4]=((C_word)li68),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_8218(t6,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* g1779 in k8196 in k8168 in k8150 in k8147 in k8008 in k8005 in k8002 in g1601 in k7994 in k7991 in k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in ... */
static void C_fcall f_8199(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_8199,3,t0,t1,t2);}
a=C_alloc(5);
t3=C_i_check_port_2(((C_word*)t0)[2],C_fix(2),C_SCHEME_TRUE,lf[87]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8206,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:518: ##sys#print */
t5=*((C_word*)lf[90]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[103];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k8204 in g1779 in k8196 in k8168 in k8150 in k8147 in k8008 in k8005 in k8002 in g1601 in k7994 in k7991 in k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in ... */
static void C_ccall f_8206(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8206,c,av);}
/* modules.scm:518: ##sys#print */
t2=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_i_cadr(((C_word*)t0)[3]);
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* for-each-loop1778 in k8196 in k8168 in k8150 in k8147 in k8008 in k8005 in k8002 in g1601 in k7994 in k7991 in k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in ... */
static void C_fcall f_8218(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_8218,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8228,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:516: g1779 */
t4=((C_word*)t0)[3];
f_8199(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k8226 in for-each-loop1778 in k8196 in k8168 in k8150 in k8147 in k8008 in k8005 in k8002 in g1601 in k7994 in k7991 in k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in ... */
static void C_ccall f_8228(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8228,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_8218(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* for-each-loop1668 in k8147 in k8008 in k8005 in k8002 in g1601 in k7994 in k7991 in k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_8246(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_8246,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8256,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:490: g1669 */
t4=((C_word*)t0)[3];
f_8011(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k8254 in for-each-loop1668 in k8147 in k8008 in k8005 in k8002 in g1601 in k7994 in k7991 in k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in ... */
static void C_ccall f_8256(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8256,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_8246(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k8274 in k7994 in k7991 in k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8276(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8276,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8283,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:522: chicken.base#get-output-string */
t3=*((C_word*)lf[93]+1);{
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

/* k8281 in k8274 in k7994 in k7991 in k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8283(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8283,c,av);}
/* modules.scm:522: ##sys#error */
t2=*((C_word*)lf[80]+1);{
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

/* for-each-loop1600 in k7994 in k7991 in k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_8285(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_8285,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8295,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:485: g1601 */
t4=((C_word*)t0)[3];
f_7997(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k8293 in for-each-loop1600 in k7994 in k7991 in k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8295(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8295,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_8285(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k8308 in k7991 in k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8310(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_8310,c,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8312,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li72),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_8312(t5,((C_word*)t0)[3],t1);}

/* lp in k8308 in k7991 in k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_8312(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_8312,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_i_car(t2);
if(C_truep(t3)){
t4=C_i_pairp(t3);
t5=(C_truep(t4)?C_u_i_cdr(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8342,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:479: chicken.string#string-split */
t7=*((C_word*)lf[88]+1);{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=t5;
av2[3]=lf[109];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
/* modules.scm:483: lp */
t8=t1;
t9=C_u_i_cdr(t2);
t1=t8;
t2=t9;
goto loop;}}
else{
/* modules.scm:483: lp */
t8=t1;
t9=C_u_i_cdr(t2);
t1=t8;
t2=t9;
goto loop;}}}

/* k8340 in lp in k8308 in k7991 in k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8342(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_8342,c,av);}
a=C_alloc(5);
t2=C_eqp(C_fix(2),C_u_i_length(t1));
if(C_truep(t2)){
t3=C_i_check_port_2(((C_word*)t0)[2],C_fix(2),C_SCHEME_TRUE,lf[87]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8354,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:481: ##sys#print */
t5=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[108];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
/* modules.scm:483: lp */
t3=((C_word*)((C_word*)t0)[4])[1];
f_8312(t3,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[5]));}}

/* k8352 in k8340 in lp in k8308 in k7991 in k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8354(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_8354,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8357,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:481: ##sys#print */
t3=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_car(((C_word*)t0)[4]);
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k8355 in k8352 in k8340 in lp in k8308 in k7991 in k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8357(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_8357,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8360,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:481: ##sys#print */
t3=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[107];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k8358 in k8355 in k8352 in k8340 in lp in k8308 in k7991 in k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8360(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8360,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8379 in k7991 in k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8381(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8381,c,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[21]+1);
av2[3]=t1;
C_apply(4,av2);}}

/* map-loop1636 in k7991 in k7988 in k7985 in k7979 in report-unresolved-identifiers in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_8383(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_8383,3,t0,t1,t2);}
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

/* k8445 in map-loop1821 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8447(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8447,c,av);}
a=C_alloc(3);
t2=C_i_assq(((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=C_i_setslot(((C_word*)((C_word*)t0)[3])[1],C_fix(1),t3);
t5=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t6=((C_word*)((C_word*)t0)[4])[1];
f_8913(t6,((C_word*)t0)[5],C_slot(((C_word*)t0)[6],C_fix(1)));}

/* k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8456(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_8456,c,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8459,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t3=C_eqp(C_SCHEME_TRUE,((C_word*)t0)[8]);
if(C_truep(t3)){
t4=C_i_check_structure_2(((C_word*)t0)[3],lf[6],lf[16]);
t5=C_i_block_ref(((C_word*)t0)[3],C_fix(12));
/* modules.scm:533: merge-se */
f_6796(t2,C_a_i_list(&a,2,t5,t1));}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8876,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:534: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[30]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t4;
tp(2,av2);}}}

/* k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8459(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8459,c,av);}
a=C_alloc(21);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8462,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=C_eqp(C_SCHEME_TRUE,((C_word*)t0)[9]);
t4=(C_truep(t3)?((C_word*)t0)[2]:((C_word*)t0)[9]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8702,a[2]=t1,a[3]=t6,a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[11],a[8]=((C_word)li88),tmp=(C_word)a,a+=9,tmp));
t8=((C_word*)t6)[1];
f_8702(t8,t2,t4);}

/* k8460 in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8462(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_8462,c,av);}
a=C_alloc(19);
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8463,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li75),tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8481,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t3,a[10]=((C_word*)t0)[9],a[11]=t4,tmp=(C_word)a,a+=12,tmp);
/* modules.scm:581: module-undefined-list */
t6=*((C_word*)lf[9]+1);{
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

/* g1890 in k8460 in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static C_word C_fcall f_8463(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;{}
t2=C_i_car(t1);
if(C_truep(C_i_memq(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
return(t3);}
else{
t3=C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
return(t4);}}

/* k8479 in k8460 in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8481(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8481,c,av);}
a=C_alloc(18);
t2=C_i_check_list_2(t1,lf[35]);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8487,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8675,a[2]=((C_word*)t0)[11],a[3]=t5,a[4]=((C_word)li84),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_8675(t7,t3,t1);}

/* k8485 in k8479 in k8460 in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8487(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_8487,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8490,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[9])[1]))){
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_8490(2,av2);}}
else{
/* modules.scm:583: report-unresolved-identifiers */
t3=((C_word*)t0)[10];
f_7977(t3,t2,((C_word*)((C_word*)t0)[9])[1]);}}

/* k8488 in k8485 in k8479 in k8460 in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8490(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_8490,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8493,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
/* modules.scm:586: ##sys#error */
t3=*((C_word*)lf[80]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[120];
av2[3]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_8493(2,av2);}}}

/* k8491 in k8488 in k8485 in k8479 in k8460 in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8493(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,4)))){
C_save_and_reclaim((void *)f_8493,c,av);}
a=C_alloc(27);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8528,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t4,a[8]=t5,tmp=(C_word)a,a+=9,tmp);
t7=C_i_check_structure_2(((C_word*)t0)[3],lf[6],lf[14]);
t8=C_i_block_ref(((C_word*)t0)[3],C_fix(3));
t9=C_i_check_structure_2(((C_word*)t0)[3],lf[6],lf[8]);
t10=C_i_block_ref(((C_word*)t0)[3],C_fix(1));
t11=C_i_check_structure_2(((C_word*)t0)[3],lf[6],lf[44]);
t12=C_i_block_ref(((C_word*)t0)[3],C_fix(4));
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6592,a[2]=t10,a[3]=((C_word)li79),tmp=(C_word)a,a+=4,tmp);
t14=C_eqp(C_SCHEME_TRUE,t8);
if(C_truep(t14)){
t15=t6;{
C_word *av2=av;
av2[0]=t15;
av2[1]=C_SCHEME_END_OF_LIST;
f_8528(2,av2);}}
else{
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6615,a[2]=t16,a[3]=t13,a[4]=t12,a[5]=t10,a[6]=((C_word)li83),tmp=(C_word)a,a+=7,tmp));
t18=((C_word*)t16)[1];
f_6615(t18,t6,t8);}}

/* k8519 in map-loop1909 in k8526 in k8491 in k8488 in k8485 in k8479 in k8460 in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8521(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_8521,c,av);}
a=C_alloc(3);
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
f_8642(t3,C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST));}
else{
/* modules.scm:591: ##sys#error */
t3=*((C_word*)lf[80]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
av2[2]=lf[112];
av2[3]=C_u_i_car(((C_word*)t0)[5]);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k8526 in k8491 in k8488 in k8485 in k8479 in k8460 in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8528(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8528,c,av);}
a=C_alloc(15);
t2=C_i_check_list_2(t1,lf[20]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8534,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8632,a[2]=((C_word*)t0)[7],a[3]=t5,a[4]=((C_word*)t0)[8],a[5]=((C_word)li78),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_8632(t7,t3,t1);}

/* k8532 in k8526 in k8491 in k8488 in k8485 in k8479 in k8460 in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8534(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_8534,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8537,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8626,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* modules.scm:594: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[30]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t3;
tp(2,av2);}}

/* k8535 in k8532 in k8526 in k8491 in k8488 in k8485 in k8479 in k8460 in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8537(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_8537,c,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8538,a[2]=t1,a[3]=((C_word)li76),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[2],lf[35]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8560,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8601,a[2]=t6,a[3]=t2,a[4]=((C_word)li77),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_8601(t8,t4,((C_word*)t0)[2]);}

/* g1945 in k8535 in k8532 in k8526 in k8491 in k8488 in k8485 in k8479 in k8460 in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_8538(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_8538,3,t0,t1,t2);}
a=C_alloc(10);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8542,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_cadr(t2);
/* modules.scm:599: merge-se */
f_6796(t3,C_a_i_list(&a,2,t4,((C_word*)t0)[2]));}

/* k8540 in g1945 in k8535 in k8532 in k8526 in k8491 in k8488 in k8485 in k8479 in k8460 in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8542(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8542,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_set_car(C_u_i_cdr(((C_word*)t0)[3]),t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8558 in k8535 in k8532 in k8526 in k8491 in k8488 in k8485 in k8479 in k8460 in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8560(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_8560,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8566,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_i_check_structure_2(((C_word*)t0)[2],lf[6],C_SCHEME_FALSE);
/* modules.scm:95: ##sys#block-set! */
t4=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(11);
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k8564 in k8558 in k8535 in k8532 in k8526 in k8491 in k8488 in k8485 in k8479 in k8460 in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8566(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_8566,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8569,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_i_check_structure_2(((C_word*)t0)[2],lf[6],C_SCHEME_FALSE);
/* modules.scm:95: ##sys#block-set! */
t4=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(12);
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k8567 in k8564 in k8558 in k8535 in k8532 in k8526 in k8491 in k8488 in k8485 in k8479 in k8460 in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in ... */
static void C_ccall f_8569(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_8569,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8572,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8595,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_check_structure_2(((C_word*)t0)[2],lf[6],lf[66]);
t5=C_i_block_ref(((C_word*)t0)[2],C_fix(13));
/* modules.scm:614: merge-se */
f_6796(t3,C_a_i_list(&a,2,t5,((C_word*)t0)[6]));}

/* k8570 in k8567 in k8564 in k8558 in k8535 in k8532 in k8526 in k8491 in k8488 in k8485 in k8479 in k8460 in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in ... */
static void C_ccall f_8572(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_8572,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8583,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8591,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:617: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[31]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[31]+1);
av2[1]=t3;
tp(2,av2);}}

/* k8581 in k8570 in k8567 in k8564 in k8558 in k8535 in k8532 in k8526 in k8491 in k8488 in k8485 in k8479 in k8460 in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in ... */
static void C_ccall f_8583(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_8583,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8587,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:618: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[30]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t2;
tp(2,av2);}}

/* k8585 in k8581 in k8570 in k8567 in k8564 in k8558 in k8535 in k8532 in k8526 in k8491 in k8488 in k8485 in k8479 in k8460 in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in ... */
static void C_ccall f_8587(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_8587,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_i_check_structure_2(((C_word*)t0)[3],lf[6],C_SCHEME_FALSE);
/* modules.scm:95: ##sys#block-set! */
t4=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[3];
av2[3]=C_fix(14);
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k8589 in k8570 in k8567 in k8564 in k8558 in k8535 in k8532 in k8526 in k8491 in k8488 in k8485 in k8479 in k8460 in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in ... */
static void C_ccall f_8591(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_8591,c,av);}
a=C_alloc(9);
/* modules.scm:617: merge-se */
f_6796(((C_word*)t0)[2],C_a_i_list(&a,3,t1,((C_word*)t0)[3],((C_word*)t0)[4]));}

/* k8593 in k8567 in k8564 in k8558 in k8535 in k8532 in k8526 in k8491 in k8488 in k8485 in k8479 in k8460 in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in ... */
static void C_ccall f_8595(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8595,c,av);}
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[6],C_SCHEME_FALSE);
/* modules.scm:95: ##sys#block-set! */
t3=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(13);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* for-each-loop1944 in k8535 in k8532 in k8526 in k8491 in k8488 in k8485 in k8479 in k8460 in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_8601(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_8601,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8611,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:597: g1945 */
t4=((C_word*)t0)[3];
f_8538(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k8609 in for-each-loop1944 in k8535 in k8532 in k8526 in k8491 in k8488 in k8485 in k8479 in k8460 in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8611(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8611,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_8601(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k8624 in k8532 in k8526 in k8491 in k8488 in k8485 in k8479 in k8460 in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8626(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_8626,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8630,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:595: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[31]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[31]+1);
av2[1]=t2;
tp(2,av2);}}

/* k8628 in k8624 in k8532 in k8526 in k8491 in k8488 in k8485 in k8479 in k8460 in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8630(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_8630,c,av);}
a=C_alloc(18);
/* modules.scm:593: merge-se */
f_6796(((C_word*)t0)[2],C_a_i_list(&a,6,((C_word*)t0)[3],t1,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]));}

/* map-loop1909 in k8526 in k8491 in k8488 in k8485 in k8479 in k8460 in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_8632(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,2)))){
C_save_and_reclaim_args((void *)trf_8632,3,t0,t1,t2);}
a=C_alloc(15);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8642,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8657,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_slot(t2,C_fix(0));
t6=C_i_cdr(t5);
if(C_truep(C_i_symbolp(t6))){
t7=t3;
f_8642(t7,C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST));}
else{
t7=C_u_i_car(t5);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8521,a[2]=t7,a[3]=t3,a[4]=t4,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:590: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[30]+1));
C_word av2[2];
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t8;
tp(2,av2);}}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k8640 in map-loop1909 in k8526 in k8491 in k8488 in k8485 in k8479 in k8460 in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_8642(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_8642,2,t0,t1);}
t2=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t1);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t4=((C_word*)((C_word*)t0)[3])[1];
f_8632(t4,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k8655 in map-loop1909 in k8526 in k8491 in k8488 in k8485 in k8479 in k8460 in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8657(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8657,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
f_8642(t2,C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST));}

/* for-each-loop1889 in k8479 in k8460 in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_8675(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_8675,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=(
/* modules.scm:578: g1890 */
  f_8463(C_a_i(&a,3),((C_word*)t0)[2],C_slot(t2,C_fix(0)))
);
t5=t1;
t6=C_slot(t2,C_fix(1));
t1=t5;
t2=t6;
goto loop;}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* loop in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_8702(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,0,2)))){
C_save_and_reclaim_args((void *)trf_8702,3,t0,t1,t2);}
a=C_alloc(14);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=C_i_symbolp(t3);
t5=(C_truep(t4)?t3:C_i_car(t3));
if(C_truep(C_i_assq(t5,((C_word*)t0)[2]))){
/* modules.scm:545: loop */
t11=t1;
t12=C_u_i_cdr(t2);
t1=t11;
t2=t12;
goto loop;}
else{
t6=C_i_assq(t5,((C_word*)t0)[4]);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8746,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t8=(C_truep(t6)?C_i_symbolp(C_i_cdr(t6)):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=t7;{
C_word av2[2];
av2[0]=t9;
av2[1]=C_i_cdr(t6);
f_8746(2,av2);}}
else{
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8843,a[2]=t5,a[3]=((C_word*)t0)[5],a[4]=t7,a[5]=t6,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:553: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[31]+1));
C_word av2[2];
av2[0]=*((C_word*)lf[31]+1);
av2[1]=t9;
tp(2,av2);}}}}}

/* k8735 in k8744 in loop in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8737(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8737,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8744 in loop in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8746(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_8746,c,av);}
a=C_alloc(7);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8737,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:574: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_8702(t4,t3,C_u_i_cdr(((C_word*)t0)[5]));}

/* fail in k8841 in loop in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_8757(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_8757,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8761,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:555: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[40]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t3;
av2[2]=t2;
tp(3,av2);}}

/* k8759 in fail in k8841 in loop in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8761(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8761,c,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* id-string in k8841 in loop in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_8764(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_8764,2,t0,t1);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8772,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:558: scheme#symbol->string */
t3=*((C_word*)lf[116]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k8770 in id-string in k8841 in loop in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8772(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8772,c,av);}
/* modules.scm:558: scheme#string-append */
t2=*((C_word*)lf[113]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[121];
av2[3]=t1;
av2[4]=lf[122];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k8791 in k8841 in loop in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8793(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_8793,c,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8797,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li87),tmp=(C_word)a,a+=5,tmp);
/* modules.scm:559: g1880 */
t3=t2;
f_8797(t3,((C_word*)t0)[4],t1);}
else{
if(C_truep(C_i_not(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8825,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8829,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:571: id-string */
t4=((C_word*)((C_word*)t0)[3])[1];
f_8764(t4,t3);}
else{
/* modules.scm:573: bomb */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[128]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[128]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=lf[129];
tp(3,av2);}}}}

/* g1880 in k8791 in k8841 in loop in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_8797(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_8797,3,t0,t1,t2);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8805,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8809,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:567: id-string */
t5=((C_word*)((C_word*)t0)[3])[1];
f_8764(t5,t4);}

/* k8803 in g1880 in k8791 in k8841 in loop in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8805(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8805,c,av);}
/* modules.scm:566: fail */
t2=((C_word*)((C_word*)t0)[2])[1];
f_8757(t2,((C_word*)t0)[3],t1);}

/* k8807 in g1880 in k8791 in k8841 in loop in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8809(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_8809,c,av);}
/* modules.scm:566: scheme#string-append */
t2=*((C_word*)lf[113]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[123];
av2[3]=t1;
av2[4]=lf[124];
av2[5]=((C_word*)t0)[3];
av2[6]=lf[125];
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}

/* k8823 in k8791 in k8841 in loop in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8825(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8825,c,av);}
/* modules.scm:570: fail */
t2=((C_word*)((C_word*)t0)[2])[1];
f_8757(t2,((C_word*)t0)[3],t1);}

/* k8827 in k8791 in k8841 in loop in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8829(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8829,c,av);}
/* modules.scm:570: scheme#string-append */
t2=*((C_word*)lf[113]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[126];
av2[3]=t1;
av2[4]=lf[127];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k8841 in loop in k8457 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8843(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_8843,c,av);}
a=C_alloc(18);
t2=C_i_assq(((C_word*)t0)[2],t1);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8757,a[2]=((C_word*)t0)[3],a[3]=((C_word)li85),tmp=(C_word)a,a+=4,tmp));
t8=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8764,a[2]=((C_word*)t0)[2],a[3]=((C_word)li86),tmp=(C_word)a,a+=4,tmp));
t9=(C_truep(t2)?C_i_symbolp(C_i_cdr(t2)):C_SCHEME_FALSE);
if(C_truep(t9)){
t10=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t10;
av2[1]=C_i_cdr(t2);
f_8746(2,av2);}}
else{
if(C_truep(((C_word*)t0)[5])){
/* modules.scm:562: module-rename */
f_10532(((C_word*)t0)[4],((C_word*)t0)[2],((C_word*)t0)[6]);}
else{
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8793,a[2]=t4,a[3]=t6,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:563: invalid-export */
t11=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t11;
av2[1]=t10;
av2[2]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t11))(3,av2);}}}}

/* k8874 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8876(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_8876,c,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8878,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li89),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_8878(t5,((C_word*)t0)[3],t1);}

/* loop in k8874 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_8878(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_8878,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8891,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:536: find-export */
f_7893(t3,C_i_caar(t2),((C_word*)t0)[3],C_SCHEME_FALSE);}}

/* k8889 in loop in k8874 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8891(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_8891,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=C_u_i_car(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8900,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:537: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_8878(t4,t3,C_u_i_cdr(((C_word*)t0)[2]));}
else{
/* modules.scm:538: loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_8878(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[2]));}}

/* k8898 in k8889 in loop in k8874 in k8454 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8900(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8900,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* map-loop1821 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_8913(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_8913,3,t0,t1,t2);}
a=C_alloc(7);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8447,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* modules.scm:529: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[30]+1));
C_word av2[2];
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t5;
tp(2,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* f_8949 in ##sys#finalize-module in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8949(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8949,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* ##sys#with-environment in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8956(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_8956,c,av);}
a=C_alloc(8);
t3=*((C_word*)lf[4]+1);
t4=*((C_word*)lf[31]+1);
t5=*((C_word*)lf[130]+1);
t6=*((C_word*)lf[30]+1);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8960,a[2]=t6,a[3]=t5,a[4]=t4,a[5]=t3,a[6]=t2,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* modules.scm:629: ##sys#current-meta-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[130]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[130]+1);
av2[1]=t7;
tp(2,av2);}}

/* k8958 in ##sys#with-environment in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8960(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_8960,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8963,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* modules.scm:631: ##sys#meta-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[131]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[131]+1);
av2[1]=t2;
tp(2,av2);}}

/* k8961 in k8958 in ##sys#with-environment in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8963(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(37,c,4)))){
C_save_and_reclaim((void *)f_8963,c,av);}
a=C_alloc(37);
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t0)[2];
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=t1;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_TRUE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8968,a[2]=t3,a[3]=t5,a[4]=t7,a[5]=t9,a[6]=t11,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word)li92),tmp=(C_word)a,a+=12,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9024,a[2]=((C_word*)t0)[7],a[3]=((C_word)li93),tmp=(C_word)a,a+=4,tmp);
t14=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9030,a[2]=t3,a[3]=t5,a[4]=t7,a[5]=t9,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word)li94),tmp=(C_word)a,a+=11,tmp);
/* modules.scm:626: ##sys#dynamic-wind */
t15=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t15;
av2[1]=((C_word*)t0)[8];
av2[2]=t12;
av2[3]=t13;
av2[4]=t14;
((C_proc)(void*)(*((C_word*)t15+1)))(5,av2);}}

/* a8967 in k8961 in k8958 in ##sys#with-environment in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8968(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_8968,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8972,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
/* modules.scm:626: ##sys#current-module1978 */
t3=((C_word*)t0)[10];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)((C_word*)t0)[2])[1];
f_8972(2,av2);}}}

/* k8970 in a8967 in k8961 in k8958 in ##sys#with-environment in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8972(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_8972,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_8975,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t1,tmp=(C_word)a,a+=13,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
/* modules.scm:626: ##sys#current-environment1979 */
t3=((C_word*)t0)[10];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)((C_word*)t0)[3])[1];
f_8975(2,av2);}}}

/* k8973 in k8970 in a8967 in k8961 in k8958 in ##sys#with-environment in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8975(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_8975,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_8978,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
/* modules.scm:626: ##sys#current-meta-environment1980 */
t3=((C_word*)t0)[9];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)((C_word*)t0)[4])[1];
f_8978(2,av2);}}}

/* k8976 in k8973 in k8970 in a8967 in k8961 in k8958 in ##sys#with-environment in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8978(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_8978,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_8981,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
/* modules.scm:626: ##sys#macro-environment1981 */
t3=((C_word*)t0)[8];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[5])[1];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)((C_word*)t0)[5])[1];
f_8981(2,av2);}}}

/* k8979 in k8976 in k8973 in k8970 in a8967 in k8961 in k8958 in ##sys#with-environment in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8981(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_8981,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_8985,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],tmp=(C_word)a,a+=16,tmp);
/* modules.scm:626: ##sys#current-module1978 */
t3=((C_word*)t0)[13];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k8983 in k8979 in k8976 in k8973 in k8970 in a8967 in k8961 in k8958 in ##sys#with-environment in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8985(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_8985,c,av);}
a=C_alloc(15);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_8989,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],tmp=(C_word)a,a+=15,tmp);
/* modules.scm:626: ##sys#current-environment1979 */
t4=((C_word*)t0)[12];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k8987 in k8983 in k8979 in k8976 in k8973 in k8970 in a8967 in k8961 in k8958 in ##sys#with-environment in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8989(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_8989,c,av);}
a=C_alloc(14);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_8993,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],tmp=(C_word)a,a+=14,tmp);
/* modules.scm:626: ##sys#current-meta-environment1980 */
t4=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k8991 in k8987 in k8983 in k8979 in k8976 in k8973 in k8970 in a8967 in k8961 in k8958 in ##sys#with-environment in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8993(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_8993,c,av);}
a=C_alloc(13);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_8997,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],tmp=(C_word)a,a+=13,tmp);
/* modules.scm:626: ##sys#macro-environment1981 */
t4=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k8995 in k8991 in k8987 in k8983 in k8979 in k8976 in k8973 in k8970 in a8967 in k8961 in k8958 in ##sys#with-environment in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_8997(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_8997,c,av);}
a=C_alloc(10);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9000,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
/* modules.scm:626: ##sys#current-module1978 */
t4=((C_word*)t0)[11];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[12];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}

/* k8998 in k8995 in k8991 in k8987 in k8983 in k8979 in k8976 in k8973 in k8970 in a8967 in k8961 in k8958 in ##sys#with-environment in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9000(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_9000,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9003,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:626: ##sys#current-environment1979 */
t3=((C_word*)t0)[8];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[9];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k9001 in k8998 in k8995 in k8991 in k8987 in k8983 in k8979 in k8976 in k8973 in k8970 in a8967 in k8961 in k8958 in ##sys#with-environment in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in ... */
static void C_ccall f_9003(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_9003,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9006,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:626: ##sys#current-meta-environment1980 */
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k9004 in k9001 in k8998 in k8995 in k8991 in k8987 in k8983 in k8979 in k8976 in k8973 in k8970 in a8967 in k8961 in k8958 in ##sys#with-environment in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in ... */
static void C_ccall f_9006(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_9006,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9009,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:626: ##sys#macro-environment1981 */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k9007 in k9004 in k9001 in k8998 in k8995 in k8991 in k8987 in k8983 in k8979 in k8976 in k8973 in k8970 in a8967 in k8961 in k8958 in ##sys#with-environment in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in ... */
static void C_ccall f_9009(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9009,c,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a9023 in k8961 in k8958 in ##sys#with-environment in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9024(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9024,c,av);}
/* modules.scm:632: thunk */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a9029 in k8961 in k8958 in ##sys#with-environment in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9030(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_9030,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9034,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* modules.scm:626: ##sys#current-module1978 */
t3=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k9032 in a9029 in k8961 in k8958 in ##sys#with-environment in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9034(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_9034,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9037,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* modules.scm:626: ##sys#current-environment1979 */
t3=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k9035 in k9032 in a9029 in k8961 in k8958 in ##sys#with-environment in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9037(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_9037,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_9040,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* modules.scm:626: ##sys#current-meta-environment1980 */
t3=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k9038 in k9035 in k9032 in a9029 in k8961 in k8958 in ##sys#with-environment in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9040(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_9040,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_9043,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* modules.scm:626: ##sys#macro-environment1981 */
t3=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k9041 in k9038 in k9035 in k9032 in a9029 in k8961 in k8958 in ##sys#with-environment in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9043(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_9043,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_9046,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* modules.scm:626: ##sys#current-module1978 */
t3=((C_word*)t0)[13];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k9044 in k9041 in k9038 in k9035 in k9032 in a9029 in k8961 in k8958 in ##sys#with-environment in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9046(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_9046,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_9049,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
/* modules.scm:626: ##sys#current-environment1979 */
t3=((C_word*)t0)[13];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k9047 in k9044 in k9041 in k9038 in k9035 in k9032 in a9029 in k8961 in k8958 in ##sys#with-environment in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9049(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_9049,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9052,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* modules.scm:626: ##sys#current-meta-environment1980 */
t3=((C_word*)t0)[12];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[6])[1];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k9050 in k9047 in k9044 in k9041 in k9038 in k9035 in k9032 in a9029 in k8961 in k8958 in ##sys#with-environment in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9052(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_9052,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9055,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* modules.scm:626: ##sys#macro-environment1981 */
t3=((C_word*)t0)[11];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[8])[1];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k9053 in k9050 in k9047 in k9044 in k9041 in k9038 in k9035 in k9032 in a9029 in k8961 in k8958 in ##sys#with-environment in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9055(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9055,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,((C_word*)t0)[5]);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,((C_word*)t0)[7]);
t5=C_mutate(((C_word *)((C_word*)t0)[8])+1,((C_word*)t0)[9]);
t6=((C_word*)t0)[10];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* ##sys#import-library-hook in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9061(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_9061,c,av);}
a=C_alloc(10);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9065,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9100,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9104,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:636: scheme#symbol->string */
t6=*((C_word*)lf[116]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k9063 in ##sys#import-library-hook in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9065(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_9065,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9073,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word)li99),tmp=(C_word)a,a+=5,tmp);
/* modules.scm:638: ##sys#with-environment */
t3=*((C_word*)lf[62]+1);{
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
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* a9072 in k9063 in ##sys#import-library-hook in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9073(C_word c,C_word *av){
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
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(19,c,4)))){
C_save_and_reclaim((void *)f_9073,c,av);}
a=C_alloc(19);
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9079,a[2]=t5,a[3]=t3,a[4]=((C_word)li96),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9084,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li97),tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9093,a[2]=t3,a[3]=t5,a[4]=((C_word)li98),tmp=(C_word)a,a+=5,tmp);
/* modules.scm:640: ##sys#dynamic-wind */
t9=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=t1;
av2[2]=t6;
av2[3]=t7;
av2[4]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}

/* a9078 in a9072 in k9063 in ##sys#import-library-hook in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9079(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9079,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[133]+1));
t3=C_mutate((C_word*)lf[133]+1 /* (set! ##sys#notices-enabled ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a9083 in a9072 in k9063 in ##sys#import-library-hook in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9084(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_9084,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9088,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:641: scheme#load */
t3=*((C_word*)lf[134]+1);{
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

/* k9086 in a9083 in a9072 in k9063 in ##sys#import-library-hook in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9088(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9088,c,av);}
/* modules.scm:642: ##sys#find-module */
t2=*((C_word*)lf[26]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[81];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* a9092 in a9072 in k9063 in ##sys#import-library-hook in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9093(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9093,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[133]+1));
t3=C_mutate((C_word*)lf[133]+1 /* (set! ##sys#notices-enabled ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k9098 in ##sys#import-library-hook in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9100(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9100,c,av);}
/* modules.scm:635: chicken.load#find-dynamic-extension */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[135]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[135]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_TRUE;
tp(4,av2);}}

/* k9102 in ##sys#import-library-hook in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9104(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9104,c,av);}
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[136]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[136]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[137];
tp(4,av2);}}

/* find-module/import-library in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_9107(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_9107,3,t1,t2,t3);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9111,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:645: ##sys#resolve-module-name */
t5=*((C_word*)lf[22]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k9109 in find-module/import-library in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9111(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_9111,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9114,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:646: ##sys#find-module */
t3=*((C_word*)lf[26]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k9112 in k9109 in find-module/import-library in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9114(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9114,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* modules.scm:647: ##sys#import-library-hook */
t2=*((C_word*)lf[132]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9122(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_9122,c,av);}
a=C_alloc(7);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9126,a[2]=t5,a[3]=t4,a[4]=t2,a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* modules.scm:650: r */
t7=t3;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[161];
((C_proc)C_fast_retrieve_proc(t7))(3,av2);}}

/* k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9126(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_9126,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9129,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:651: r */
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[160];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9129(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_9129,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9132,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* modules.scm:652: r */
t3=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[159];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9132(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_9132,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9135,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* modules.scm:653: r */
t3=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[158];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9135(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(23,c,5)))){
C_save_and_reclaim((void *)f_9135,c,av);}
a=C_alloc(23);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9137,a[2]=((C_word)li102),tmp=(C_word)a,a+=3,tmp));
t7=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9151,a[2]=((C_word*)t0)[2],a[3]=((C_word)li103),tmp=(C_word)a,a+=4,tmp));
t8=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9198,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t5,a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=((C_word)li135),tmp=(C_word)a,a+=12,tmp);
/* modules.scm:662: scheme#call-with-current-continuation */
t9=*((C_word*)lf[157]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=((C_word*)t0)[8];
av2[2]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* warn in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_9137(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_9137,4,t1,t2,t3,t4);}
a=C_alloc(8);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9145,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9149,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:655: scheme#symbol->string */
t7=*((C_word*)lf[116]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k9143 in warn in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9145(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9145,c,av);}
/* modules.scm:655: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[40]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[40]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k9147 in warn in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9149(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_9149,c,av);}
/* modules.scm:655: scheme#string-append */
t2=*((C_word*)lf[113]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[139];
av2[4]=t1;
av2[5]=lf[140];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* tostr in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_9151(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_9151,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_stringp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9164,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:658: chicken.keyword#keyword? */
t4=*((C_word*)lf[146]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k9162 in tostr in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9164(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_9164,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9171,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:658: ##sys#symbol->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[142]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[142]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[3]))){
/* modules.scm:659: ##sys#symbol->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[142]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[142]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
if(C_truep(C_i_numberp(((C_word*)t0)[3]))){
/* ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[143]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[143]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_fix(10);
tp(4,av2);}}
else{
/* modules.scm:661: ##sys#syntax-error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[144]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[144]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[145];
tp(4,av2);}}}}}

/* k9169 in k9162 in tostr in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9171(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9171,c,av);}
/* modules.scm:658: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[136]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[136]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[141];
tp(4,av2);}}

/* a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9198(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,3)))){
C_save_and_reclaim((void *)f_9198,c,av);}
a=C_alloc(20);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9201,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li104),tmp=(C_word)a,a+=5,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_9249,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word)li134),tmp=(C_word)a,a+=13,tmp));
t7=((C_word*)t5)[1];
f_9249(t7,t1,((C_word*)t0)[10]);}

/* module-imports in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_9201(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_9201,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9205,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:665: chicken.internal#library-id */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[25]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t3;
av2[2]=t2;
tp(3,av2);}}

/* k9203 in module-imports in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9205(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_9205,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9208,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:666: find-module/import-library */
f_9107(t2,t1,((C_word*)t0)[4]);}

/* k9206 in k9203 in module-imports in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9208(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_9208,c,av);}
if(C_truep(C_i_not(t1))){
/* modules.scm:668: k */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[4];
av2[4]=C_SCHEME_FALSE;
av2[5]=C_SCHEME_FALSE;
av2[6]=C_SCHEME_FALSE;
av2[7]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t2))(8,av2);}}
else{
t2=C_i_check_structure_2(t1,lf[6],lf[8]);
t3=C_i_block_ref(t1,C_fix(1));
t4=C_i_check_structure_2(t1,lf[6],lf[65]);
t5=C_i_block_ref(t1,C_fix(2));
t6=C_i_check_structure_2(t1,lf[6],lf[8]);
t7=C_i_block_ref(t1,C_fix(1));
t8=C_i_check_structure_2(t1,lf[6],lf[15]);
t9=C_i_block_ref(t1,C_fix(11));
t10=C_i_check_structure_2(t1,lf[6],lf[16]);
t11=C_i_block_ref(t1,C_fix(12));
t12=C_i_check_structure_2(t1,lf[6],lf[66]);
/* modules.scm:669: scheme#values */{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=t3;
av2[3]=t5;
av2[4]=t7;
av2[5]=t9;
av2[6]=t11;
av2[7]=C_i_block_ref(t1,C_fix(13));
C_values(8,av2);}}}

/* loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_9249(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,4)))){
C_save_and_reclaim_args((void *)trf_9249,3,t0,t1,t2);}
a=C_alloc(14);
if(C_truep(C_i_symbolp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9263,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:677: chicken.syntax#strip-syntax */
t4=*((C_word*)lf[69]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=C_i_pairp(t2);
if(C_truep(C_i_not(t3))){
/* modules.scm:679: ##sys#syntax-error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[144]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[144]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[147];
av2[4]=t2;
tp(5,av2);}}
else{
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_9281,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=t4,a[6]=t1,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[2],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],a[12]=((C_word*)t0)[9],a[13]=((C_word*)t0)[10],tmp=(C_word)a,a+=14,tmp);
/* modules.scm:682: c */
t6=((C_word*)t0)[7];{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[11];
av2[3]=t4;
((C_proc)C_fast_retrieve_proc(t6))(4,av2);}}}}

/* k9261 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9263(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9263,c,av);}
/* modules.scm:677: module-imports */
t2=((C_word*)t0)[2];
f_9201(t2,((C_word*)t0)[3],t1);}

/* k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9281(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_9281,c,av);}
a=C_alloc(13);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9284,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* modules.scm:683: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[149]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[149]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[150];
tp(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_9431,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
/* modules.scm:701: c */
t3=((C_word*)t0)[10];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[13];
av2[3]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}}

/* k9282 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9284(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,8)))){
C_save_and_reclaim((void *)f_9284,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9289,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li105),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9299,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word)li111),tmp=(C_word)a,a+=6,tmp);
/* modules.scm:684: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[6];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* a9288 in k9282 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9289(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9289,c,av);}
/* modules.scm:684: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_9249(t2,t1,C_i_cadr(((C_word*)t0)[3]));}

/* a9298 in k9282 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9299(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_9299,c,av);}
a=C_alloc(11);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9303,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=t3,a[7]=t7,a[8]=t5,a[9]=t6,a[10]=t1,tmp=(C_word)a,a+=11,tmp);
/* modules.scm:685: chicken.syntax#strip-syntax */
t9=*((C_word*)lf[69]+1);{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
av2[2]=C_i_cddr(((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* k9301 in a9298 in k9282 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9303(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,6)))){
C_save_and_reclaim((void *)f_9303,c,av);}
a=C_alloc(15);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_9308,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=t3,a[11]=((C_word*)t0)[9],a[12]=((C_word)li110),tmp=(C_word)a,a+=13,tmp));
t5=((C_word*)t3)[1];
f_9308(t5,((C_word*)t0)[10],t1,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* loop in k9301 in a9298 in k9282 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_9308(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(23,0,5)))){
C_save_and_reclaim_args((void *)trf_9308,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(23);
if(C_truep(C_i_nullp(t2))){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9316,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li106),tmp=(C_word)a,a+=5,tmp);
t7=C_i_check_list_2(t5,lf[35]);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9326,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[7],a[8]=t3,a[9]=t4,a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9339,a[2]=t10,a[3]=t6,a[4]=((C_word)li107),tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_9339(t12,t8,t5);}
else{
t6=C_i_car(t2);
t7=C_i_assq(t6,((C_word*)t0)[9]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9367,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[10],a[5]=t4,a[6]=t5,a[7]=((C_word)li108),tmp=(C_word)a,a+=8,tmp);
/* modules.scm:687: g2152 */
t9=t8;
f_9367(t9,t1,t7);}
else{
t8=C_i_assq(C_u_i_car(t2),((C_word*)t0)[11]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9389,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[10],a[5]=t3,a[6]=t5,a[7]=((C_word)li109),tmp=(C_word)a,a+=8,tmp);
/* modules.scm:687: g2156 */
t10=t9;
f_9389(t10,t1,t8);}
else{
t9=C_u_i_cdr(t2);
t10=C_u_i_car(t2);
t11=C_a_i_cons(&a,2,t10,t5);
/* modules.scm:700: loop */
t13=t1;
t14=t9;
t15=t3;
t16=t4;
t17=t11;
t1=t13;
t2=t14;
t3=t15;
t4=t16;
t5=t17;
goto loop;}}}}

/* g2132 in loop in k9301 in a9298 in k9282 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_9316(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_9316,3,t0,t1,t2);}
/* modules.scm:690: warn */
f_9137(t1,lf[148],((C_word*)t0)[3],t2);}

/* k9324 in loop in k9301 in a9298 in k9282 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9326(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,7)))){
C_save_and_reclaim((void *)f_9326,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
/* modules.scm:692: scheme#values */{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=0;
av2[1]=((C_word*)t0)[5];
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[7];
av2[4]=t3;
av2[5]=((C_word*)t0)[8];
av2[6]=((C_word*)t0)[9];
av2[7]=((C_word*)t0)[10];
C_values(8,av2);}}

/* for-each-loop2131 in loop in k9301 in a9298 in k9282 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_9339(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_9339,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9349,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:688: g2132 */
t4=((C_word*)t0)[3];
f_9316(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k9347 in for-each-loop2131 in loop in k9301 in a9298 in k9282 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in ... */
static void C_ccall f_9349(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9349,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_9339(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* g2152 in loop in k9301 in a9298 in k9282 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_9367(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,5)))){
C_save_and_reclaim_args((void *)trf_9367,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
/* modules.scm:695: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_9308(t5,t1,t3,t4,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* g2156 in loop in k9301 in a9298 in k9282 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_9389(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,5)))){
C_save_and_reclaim_args((void *)trf_9389,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
/* modules.scm:698: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_9308(t5,t1,t3,((C_word*)t0)[5],t4,((C_word*)t0)[6]);}

/* k9429 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9431(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_9431,c,av);}
a=C_alloc(12);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9434,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* modules.scm:702: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[149]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[149]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[152];
tp(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9614,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* modules.scm:724: c */
t3=((C_word*)t0)[10];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[12];
av2[3]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}}

/* k9432 in k9429 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9434(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,8)))){
C_save_and_reclaim((void *)f_9434,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9439,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li112),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9449,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word)li119),tmp=(C_word)a,a+=6,tmp);
/* modules.scm:703: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[6];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* a9438 in k9432 in k9429 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9439(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9439,c,av);}
/* modules.scm:703: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_9249(t2,t1,C_i_cadr(((C_word*)t0)[3]));}

/* a9448 in k9432 in k9429 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9449(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_9449,c,av);}
a=C_alloc(11);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9453,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=t3,a[7]=t7,a[8]=t6,a[9]=t1,a[10]=t5,tmp=(C_word)a,a+=11,tmp);
/* modules.scm:704: chicken.syntax#strip-syntax */
t9=*((C_word*)lf[69]+1);{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
av2[2]=C_i_cddr(((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* k9451 in a9448 in k9432 in k9429 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9453(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,5)))){
C_save_and_reclaim((void *)f_9453,c,av);}
a=C_alloc(14);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9458,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=t3,a[11]=((C_word)li118),tmp=(C_word)a,a+=12,tmp));
t5=((C_word*)t3)[1];
f_9458(t5,((C_word*)t0)[9],((C_word*)t0)[10],C_SCHEME_END_OF_LIST,t1);}

/* loop in k9451 in a9448 in k9432 in k9429 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_fcall f_9458(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(14,0,5)))){
C_save_and_reclaim_args((void *)trf_9458,5,t0,t1,t2,t3,t4);}
a=C_alloc(14);
if(C_truep(C_i_nullp(t2))){
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9470,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t3,a[9]=((C_word*)t0)[8],a[10]=t6,a[11]=((C_word)li116),tmp=(C_word)a,a+=12,tmp));
t8=((C_word*)t6)[1];
f_9470(t8,t1,((C_word*)t0)[9],C_SCHEME_END_OF_LIST,t4);}
else{
t5=C_i_caar(t2);
t6=C_i_memq(t5,t4);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9570,a[2]=t2,a[3]=((C_word*)t0)[10],a[4]=t3,a[5]=t4,a[6]=((C_word)li117),tmp=(C_word)a,a+=7,tmp);
/* modules.scm:706: g2235 */
t8=t7;
f_9570(t8,t1,t6);}
else{
t7=C_u_i_cdr(t2);
t8=C_u_i_car(t2);
t9=C_a_i_cons(&a,2,t8,t3);
/* modules.scm:723: loop */
t11=t1;
t12=t7;
t13=t9;
t14=t4;
t1=t11;
t2=t12;
t3=t13;
t4=t14;
goto loop;}}}

/* loop in loop in k9451 in a9448 in k9432 in k9429 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in ... */
static void C_fcall f_9470(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
if(C_unlikely(!C_demand(C_calculate_demand(23,0,4)))){
C_save_and_reclaim_args((void *)trf_9470,5,t0,t1,t2,t3,t4);}
a=C_alloc(23);
if(C_truep(C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9478,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li113),tmp=(C_word)a,a+=5,tmp);
t6=C_i_check_list_2(t4,lf[35]);
t7=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9488,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t3,a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9501,a[2]=t9,a[3]=t5,a[4]=((C_word)li114),tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_9501(t11,t7,t4);}
else{
t5=C_i_caar(t2);
t6=C_i_memq(t5,t4);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9529,a[2]=t2,a[3]=((C_word*)t0)[10],a[4]=t3,a[5]=t4,a[6]=((C_word)li115),tmp=(C_word)a,a+=7,tmp);
/* modules.scm:708: g2230 */
t8=t7;
f_9529(t8,t1,t6);}
else{
t7=C_u_i_cdr(t2);
t8=C_u_i_car(t2);
t9=C_a_i_cons(&a,2,t8,t3);
/* modules.scm:718: loop */
t12=t1;
t13=t7;
t14=t9;
t15=t4;
t1=t12;
t2=t13;
t3=t14;
t4=t15;
goto loop;}}}

/* g2210 in loop in loop in k9451 in a9448 in k9432 in k9429 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in ... */
static void C_fcall f_9478(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_9478,3,t0,t1,t2);}
/* modules.scm:711: warn */
f_9137(t1,lf[151],((C_word*)t0)[3],t2);}

/* k9486 in loop in loop in k9451 in a9448 in k9432 in k9429 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in ... */
static void C_ccall f_9488(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,7)))){
C_save_and_reclaim((void *)f_9488,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
/* modules.scm:713: scheme#values */{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=0;
av2[1]=((C_word*)t0)[5];
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[7];
av2[4]=t3;
av2[5]=((C_word*)t0)[8];
av2[6]=((C_word*)t0)[9];
av2[7]=((C_word*)t0)[10];
C_values(8,av2);}}

/* for-each-loop2209 in loop in loop in k9451 in a9448 in k9432 in k9429 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in ... */
static void C_fcall f_9501(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_9501,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9511,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:709: g2210 */
t4=((C_word*)t0)[3];
f_9478(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k9509 in for-each-loop2209 in loop in loop in k9451 in a9448 in k9432 in k9429 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in ... */
static void C_ccall f_9511(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9511,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_9501(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* g2230 in loop in loop in k9451 in a9448 in k9432 in k9429 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in ... */
static void C_fcall f_9529(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_9529,3,t0,t1,t2);}
a=C_alloc(6);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9541,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:716: delete */
f_4746(t4,C_i_car(t2),((C_word*)t0)[5],*((C_word*)lf[45]+1));}

/* k9539 in g2230 in loop in loop in k9451 in a9448 in k9432 in k9429 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in ... */
static void C_ccall f_9541(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9541,c,av);}
/* modules.scm:716: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_9470(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* g2235 in loop in k9451 in a9448 in k9432 in k9429 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in ... */
static void C_fcall f_9570(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_9570,3,t0,t1,t2);}
a=C_alloc(6);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9582,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:721: delete */
f_4746(t4,C_i_car(t2),((C_word*)t0)[5],*((C_word*)lf[45]+1));}

/* k9580 in g2235 in loop in k9451 in a9448 in k9432 in k9429 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in ... */
static void C_ccall f_9582(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9582,c,av);}
/* modules.scm:721: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_9458(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k9612 in k9429 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9614(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_9614,c,av);}
a=C_alloc(9);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9617,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* modules.scm:725: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[149]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[149]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[154];
tp(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9864,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
/* modules.scm:751: c */
t3=((C_word*)t0)[10];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[11];
av2[3]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}}

/* k9615 in k9612 in k9429 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9617(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,8)))){
C_save_and_reclaim((void *)f_9617,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9622,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li120),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9632,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word)li128),tmp=(C_word)a,a+=6,tmp);
/* modules.scm:726: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[6];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* a9621 in k9615 in k9612 in k9429 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9622(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9622,c,av);}
/* modules.scm:726: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_9249(t2,t1,C_i_cadr(((C_word*)t0)[3]));}

/* a9631 in k9615 in k9612 in k9429 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9632(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_9632,c,av);}
a=C_alloc(11);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9636,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=t3,a[7]=t7,a[8]=t6,a[9]=t1,a[10]=t5,tmp=(C_word)a,a+=11,tmp);
/* modules.scm:727: chicken.syntax#strip-syntax */
t9=*((C_word*)lf[69]+1);{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
av2[2]=C_i_cddr(((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* k9634 in a9631 in k9615 in k9612 in k9429 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9636(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,5)))){
C_save_and_reclaim((void *)f_9636,c,av);}
a=C_alloc(14);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9641,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=t3,a[11]=((C_word)li127),tmp=(C_word)a,a+=12,tmp));
t5=((C_word*)t3)[1];
f_9641(t5,((C_word*)t0)[9],((C_word*)t0)[10],C_SCHEME_END_OF_LIST,t1);}

/* loop in k9634 in a9631 in k9615 in k9612 in k9429 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in ... */
static void C_fcall f_9641(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(14,0,5)))){
C_save_and_reclaim_args((void *)trf_9641,5,t0,t1,t2,t3,t4);}
a=C_alloc(14);
if(C_truep(C_i_nullp(t2))){
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9653,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t3,a[9]=((C_word*)t0)[8],a[10]=t6,a[11]=((C_word)li125),tmp=(C_word)a,a+=12,tmp));
t8=((C_word*)t6)[1];
f_9653(t8,t1,((C_word*)t0)[9],C_SCHEME_END_OF_LIST,t4);}
else{
t5=C_i_caar(t2);
t6=C_i_assq(t5,t4);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9808,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[10],a[5]=t4,a[6]=((C_word)li126),tmp=(C_word)a,a+=7,tmp);
/* modules.scm:729: g2340 */
t8=t7;
f_9808(t8,t1,t6);}
else{
t7=C_u_i_cdr(t2);
t8=C_u_i_car(t2);
t9=C_a_i_cons(&a,2,t8,t3);
/* modules.scm:750: loop */
t11=t1;
t12=t7;
t13=t9;
t14=t4;
t1=t11;
t2=t12;
t3=t13;
t4=t14;
goto loop;}}}

/* loop in loop in k9634 in a9631 in k9615 in k9612 in k9429 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in ... */
static void C_fcall f_9653(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
if(C_unlikely(!C_demand(C_calculate_demand(30,0,4)))){
C_save_and_reclaim_args((void *)trf_9653,5,t0,t1,t2,t3,t4);}
a=C_alloc(30);
if(C_truep(C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9661,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li121),tmp=(C_word)a,a+=5,tmp);
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=C_i_check_list_2(t4,lf[20]);
t11=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9674,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t3,a[10]=((C_word*)t0)[9],a[11]=t5,tmp=(C_word)a,a+=12,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9716,a[2]=t8,a[3]=t13,a[4]=t9,a[5]=((C_word)li123),tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_9716(t15,t11,t4);}
else{
t5=C_i_caar(t2);
t6=C_i_assq(t5,t4);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9755,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[10],a[5]=t4,a[6]=((C_word)li124),tmp=(C_word)a,a+=7,tmp);
/* modules.scm:731: g2335 */
t8=t7;
f_9755(t8,t1,t6);}
else{
t7=C_u_i_cdr(t2);
t8=C_u_i_car(t2);
t9=C_a_i_cons(&a,2,t8,t3);
/* modules.scm:743: loop */
t16=t1;
t17=t7;
t18=t9;
t19=t4;
t1=t16;
t2=t17;
t3=t18;
t4=t19;
goto loop;}}}

/* g2289 in loop in loop in k9634 in a9631 in k9615 in k9612 in k9429 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in ... */
static void C_fcall f_9661(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_9661,3,t0,t1,t2);}
/* modules.scm:734: warn */
f_9137(t1,lf[153],((C_word*)t0)[3],t2);}

/* k9672 in loop in loop in k9634 in a9631 in k9615 in k9612 in k9429 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in ... */
static void C_ccall f_9674(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9674,c,av);}
a=C_alloc(18);
t2=C_i_check_list_2(t1,lf[35]);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9680,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9693,a[2]=t5,a[3]=((C_word*)t0)[11],a[4]=((C_word)li122),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_9693(t7,t3,t1);}

/* k9678 in k9672 in loop in loop in k9634 in a9631 in k9615 in k9612 in k9429 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in ... */
static void C_ccall f_9680(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,7)))){
C_save_and_reclaim((void *)f_9680,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
/* modules.scm:736: scheme#values */{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=0;
av2[1]=((C_word*)t0)[5];
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[7];
av2[4]=t3;
av2[5]=((C_word*)t0)[8];
av2[6]=((C_word*)t0)[9];
av2[7]=((C_word*)t0)[10];
C_values(8,av2);}}

/* for-each-loop2288 in k9672 in loop in loop in k9634 in a9631 in k9615 in k9612 in k9429 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in ... */
static void C_fcall f_9693(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_9693,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9703,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:732: g2289 */
t4=((C_word*)t0)[3];
f_9661(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k9701 in for-each-loop2288 in k9672 in loop in loop in k9634 in a9631 in k9615 in k9612 in k9429 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in ... */
static void C_ccall f_9703(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9703,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_9693(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* map-loop2301 in loop in loop in k9634 in a9631 in k9615 in k9612 in k9429 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in ... */
static void C_fcall f_9716(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_9716,3,t0,t1,t2);}
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

/* g2335 in loop in loop in k9634 in a9631 in k9615 in k9612 in k9429 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in ... */
static void C_fcall f_9755(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,4)))){
C_save_and_reclaim_args((void *)trf_9755,3,t0,t1,t2);}
a=C_alloc(12);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_i_cadr(t2);
t5=C_i_cdar(((C_word*)t0)[2]);
t6=C_a_i_cons(&a,2,t4,t5);
t7=C_a_i_cons(&a,2,t6,((C_word*)t0)[3]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9771,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t3,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:741: delete */
f_4746(t8,t2,((C_word*)t0)[5],*((C_word*)lf[45]+1));}

/* k9769 in g2335 in loop in loop in k9634 in a9631 in k9615 in k9612 in k9429 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in ... */
static void C_ccall f_9771(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9771,c,av);}
/* modules.scm:739: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_9653(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* g2340 in loop in k9634 in a9631 in k9615 in k9612 in k9429 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in ... */
static void C_fcall f_9808(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,4)))){
C_save_and_reclaim_args((void *)trf_9808,3,t0,t1,t2);}
a=C_alloc(12);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_i_cadr(t2);
t5=C_i_cdar(((C_word*)t0)[2]);
t6=C_a_i_cons(&a,2,t4,t5);
t7=C_a_i_cons(&a,2,t6,((C_word*)t0)[3]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9824,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t3,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:748: delete */
f_4746(t8,t2,((C_word*)t0)[5],*((C_word*)lf[45]+1));}

/* k9822 in g2340 in loop in k9634 in a9631 in k9615 in k9612 in k9429 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in ... */
static void C_ccall f_9824(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9824,c,av);}
/* modules.scm:746: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_9641(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k9862 in k9612 in k9429 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9864(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_9864,c,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9867,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* modules.scm:752: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[149]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[149]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[156];
tp(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10020,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:762: chicken.syntax#strip-syntax */
t3=*((C_word*)lf[69]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k9865 in k9862 in k9612 in k9429 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9867(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,8)))){
C_save_and_reclaim((void *)f_9867,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9872,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li129),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9882,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word)li133),tmp=(C_word)a,a+=6,tmp);
/* modules.scm:753: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[6];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* a9871 in k9865 in k9862 in k9612 in k9429 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9872(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9872,c,av);}
/* modules.scm:753: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_9249(t2,t1,C_i_cadr(((C_word*)t0)[3]));}

/* a9881 in k9865 in k9862 in k9612 in k9429 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 */
static void C_ccall f_9882(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_9882,c,av);}
a=C_alloc(11);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9886,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=t5,a[6]=t6,a[7]=t1,a[8]=t2,a[9]=t3,a[10]=t7,tmp=(C_word)a,a+=11,tmp);
/* modules.scm:754: chicken.syntax#strip-syntax */
t9=*((C_word*)lf[69]+1);{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
av2[2]=C_i_caddr(((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* k9884 in a9881 in k9865 in k9862 in k9612 in k9429 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in ... */
static void C_ccall f_9886(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(37,c,3)))){
C_save_and_reclaim((void *)f_9886,c,av);}
a=C_alloc(37);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9888,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word)li130),tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t1);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_i_check_list_2(((C_word*)t0)[5],lf[20]);
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9931,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=t3,a[7]=((C_word*)t0)[10],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9977,a[2]=t6,a[3]=t11,a[4]=t2,a[5]=t7,a[6]=((C_word)li132),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_9977(t13,t9,((C_word*)t0)[5]);}

/* rename in k9884 in a9881 in k9865 in k9862 in k9612 in k9429 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in ... */
static void C_fcall f_9888(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,2)))){
C_save_and_reclaim_args((void *)trf_9888,3,t0,t1,t2);}
a=C_alloc(11);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9896,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9902,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9906,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:758: tostr */
t6=((C_word*)((C_word*)t0)[2])[1];
f_9151(t6,t5,((C_word*)t0)[3]);}

/* k9894 in rename in k9884 in a9881 in k9865 in k9862 in k9612 in k9429 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in ... */
static void C_ccall f_9896(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_9896,c,av);}
a=C_alloc(3);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,t1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k9900 in rename in k9884 in a9881 in k9865 in k9862 in k9612 in k9429 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in ... */
static void C_ccall f_9902(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9902,c,av);}
/* modules.scm:757: ##sys#string->symbol */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[155]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[155]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k9904 in rename in k9884 in a9881 in k9865 in k9862 in k9612 in k9429 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in ... */
static void C_ccall f_9906(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_9906,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9910,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:758: ##sys#symbol->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[142]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[142]+1);
av2[1]=t2;
av2[2]=C_i_car(((C_word*)t0)[3]);
tp(3,av2);}}

/* k9908 in k9904 in rename in k9884 in a9881 in k9865 in k9862 in k9612 in k9429 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in ... */
static void C_ccall f_9910(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9910,c,av);}
/* modules.scm:758: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[136]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[136]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* k9929 in k9884 in a9881 in k9865 in k9862 in k9612 in k9429 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in ... */
static void C_ccall f_9931(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_9931,c,av);}
a=C_alloc(22);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[20]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9941,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9943,a[2]=t4,a[3]=t9,a[4]=((C_word*)t0)[8],a[5]=t5,a[6]=((C_word)li131),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_9943(t11,t7,((C_word*)t0)[2]);}

/* k9939 in k9929 in k9884 in a9881 in k9865 in k9862 in k9612 in k9429 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in ... */
static void C_ccall f_9941(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_9941,c,av);}
/* modules.scm:760: scheme#values */{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
av2[5]=((C_word*)t0)[6];
av2[6]=t1;
av2[7]=((C_word*)t0)[7];
C_values(8,av2);}}

/* map-loop2406 in k9929 in k9884 in a9881 in k9865 in k9862 in k9612 in k9429 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in ... */
static void C_fcall f_9943(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_9943,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9968,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:760: g2412 */
t4=((C_word*)t0)[4];
f_9888(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k9966 in map-loop2406 in k9929 in k9884 in a9881 in k9865 in k9862 in k9612 in k9429 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in ... */
static void C_ccall f_9968(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_9968,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_9943(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop2380 in k9884 in a9881 in k9865 in k9862 in k9612 in k9429 in k9279 in loop in a9197 in k9133 in k9130 in k9127 in k9124 in ##sys#decompose-import in k5539 in k5535 in k4253 in k4250 in k4247 in k4244 in k4241 in ... */
static void C_fcall f_9977(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_9977,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10002,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:760: g2386 */
t4=((C_word*)t0)[4];
f_9888(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_modules_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("modules"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_modules_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(7693))){
C_save(t1);
C_rereclaim2(7693*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,270);
lf[0]=C_h_intern(&lf[0],7, C_text("modules"));
lf[3]=C_h_intern(&lf[3],5, C_text("foldr"));
lf[4]=C_h_intern(&lf[4],20, C_text("##sys#current-module"));
lf[5]=C_h_intern(&lf[5],30, C_text("##sys#module-alias-environment"));
lf[6]=C_h_intern(&lf[6],6, C_text("module"));
lf[8]=C_h_intern(&lf[8],11, C_text("module-name"));
lf[9]=C_h_intern(&lf[9],21, C_text("module-undefined-list"));
lf[10]=C_h_intern(&lf[10],26, C_text("set-module-undefined-list!"));
lf[11]=C_h_intern(&lf[11],16, C_text("##sys#block-set!"));
lf[12]=C_h_intern(&lf[12],17, C_text("##sys#module-name"));
lf[13]=C_h_intern(&lf[13],20, C_text("##sys#module-exports"));
lf[14]=C_h_intern(&lf[14],18, C_text("module-export-list"));
lf[15]=C_h_intern(&lf[15],15, C_text("module-vexports"));
lf[16]=C_h_intern(&lf[16],15, C_text("module-sexports"));
lf[17]=C_h_intern(&lf[17],27, C_text("##sys#register-module-alias"));
lf[18]=C_h_intern(&lf[18],25, C_text("##sys#with-module-aliases"));
lf[19]=C_h_intern(&lf[19],18, C_text("##sys#dynamic-wind"));
lf[20]=C_h_intern(&lf[20],3, C_text("map"));
lf[21]=C_h_intern(&lf[21],13, C_text("scheme#append"));
lf[22]=C_h_intern(&lf[22],25, C_text("##sys#resolve-module-name"));
lf[23]=C_h_intern(&lf[23],18, C_text("chicken.base#error"));
lf[24]=C_decode_literal(C_heaptop,C_text("\376B\000\000\035module alias refers to itself"));
lf[25]=C_h_intern(&lf[25],27, C_text("chicken.internal#library-id"));
lf[26]=C_h_intern(&lf[26],17, C_text("##sys#find-module"));
lf[27]=C_h_intern(&lf[27],18, C_text("##sys#module-table"));
lf[28]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020module not found"));
lf[29]=C_h_intern(&lf[29],19, C_text("##sys#switch-module"));
lf[30]=C_h_intern(&lf[30],23, C_text("##sys#macro-environment"));
lf[31]=C_h_intern(&lf[31],25, C_text("##sys#current-environment"));
lf[32]=C_h_intern(&lf[32],25, C_text("module-saved-environments"));
lf[33]=C_h_intern(&lf[33],24, C_text("##sys#add-to-export-list"));
lf[34]=C_h_intern(&lf[34],17, C_text("module-exist-list"));
lf[35]=C_h_intern(&lf[35],8, C_text("for-each"));
lf[36]=C_h_intern(&lf[36],30, C_text("##sys#toplevel-definition-hook"));
lf[37]=C_h_intern(&lf[37],30, C_text("##sys#register-meta-expression"));
lf[38]=C_h_intern(&lf[38],23, C_text("module-meta-expressions"));
lf[40]=C_h_intern(&lf[40],10, C_text("##sys#warn"));
lf[41]=C_decode_literal(C_heaptop,C_text("\376B\000\000\047redefinition of imported syntax binding"));
lf[42]=C_decode_literal(C_heaptop,C_text("\376B\000\000&redefinition of imported value binding"));
lf[43]=C_h_intern(&lf[43],21, C_text("##sys#register-export"));
lf[44]=C_h_intern(&lf[44],19, C_text("module-defined-list"));
lf[45]=C_h_intern(&lf[45],10, C_text("scheme#eq\077"));
lf[48]=C_h_intern(&lf[48],28, C_text("##sys#register-syntax-export"));
lf[49]=C_h_intern(&lf[49],26, C_text("module-defined-syntax-list"));
lf[50]=C_decode_literal(C_heaptop,C_text("\376B\000\000!use of syntax precedes definition"));
lf[51]=C_h_intern(&lf[51],30, C_text("##sys#unregister-syntax-export"));
lf[52]=C_h_intern(&lf[52],21, C_text("##sys#register-module"));
lf[54]=C_h_intern(&lf[54],32, C_text("chicken.internal#hash-table-set!"));
lf[55]=C_h_intern(&lf[55],31, C_text("chicken.internal#hash-table-ref"));
lf[56]=C_h_intern(&lf[56],14, C_text("scheme#reverse"));
lf[57]=C_h_intern(&lf[57],32, C_text("chicken.internal#make-hash-table"));
lf[58]=C_h_intern(&lf[58],34, C_text("##sys#compiled-module-registration"));
lf[59]=C_h_intern(&lf[59],19, C_text("module-import-forms"));
lf[60]=C_h_intern(&lf[60],24, C_text("module-meta-import-forms"));
lf[61]=C_h_intern(&lf[61],6, C_text("lambda"));
lf[62]=C_h_intern(&lf[62],22, C_text("##sys#with-environment"));
lf[63]=C_h_intern(&lf[63],12, C_text("##sys#append"));
lf[64]=C_h_intern(&lf[64],5, C_text("quote"));
lf[65]=C_h_intern(&lf[65],14, C_text("module-library"));
lf[66]=C_h_intern(&lf[66],15, C_text("module-iexports"));
lf[67]=C_h_intern(&lf[67],11, C_text("scheme#list"));
lf[68]=C_h_intern(&lf[68],11, C_text("scheme#cons"));
lf[69]=C_h_intern(&lf[69],27, C_text("chicken.syntax#strip-syntax"));
lf[70]=C_h_intern(&lf[70],30, C_text("##sys#register-compiled-module"));
lf[71]=C_h_intern(&lf[71],14, C_text("##core#functor"));
lf[72]=C_h_intern(&lf[72],18, C_text("##sys#fast-reverse"));
lf[73]=C_h_intern(&lf[73],13, C_text("import-syntax"));
lf[74]=C_h_intern(&lf[74],11, C_text("scheme#eval"));
lf[75]=C_h_intern(&lf[75],14, C_text("##core#require"));
lf[76]=C_h_intern(&lf[76],22, C_text("##sys#decompose-import"));
lf[77]=C_h_intern(&lf[77],14, C_text("chicken.base#o"));
lf[78]=C_h_intern(&lf[78],6, C_text("static"));
lf[79]=C_h_intern(&lf[79],24, C_text("##sys#ensure-transformer"));
lf[80]=C_h_intern(&lf[80],11, C_text("##sys#error"));
lf[81]=C_h_intern(&lf[81],6, C_text("import"));
lf[82]=C_decode_literal(C_heaptop,C_text("\376B\000\0000cannot find implementation of re-exported syntax"));
lf[83]=C_h_intern(&lf[83],26, C_text("##sys#register-core-module"));
lf[84]=C_decode_literal(C_heaptop,C_text("\376B\000\0002unknown syntax referenced while registering module"));
lf[85]=C_h_intern(&lf[85],31, C_text("##sys#register-primitive-module"));
lf[86]=C_h_intern(&lf[86],21, C_text("##sys#finalize-module"));
lf[87]=C_h_intern(&lf[87],7, C_text("fprintf"));
lf[88]=C_h_intern(&lf[88],27, C_text("chicken.string#string-split"));
lf[89]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001:"));
lf[90]=C_h_intern(&lf[90],11, C_text("##sys#print"));
lf[91]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005\012    "));
lf[92]=C_h_intern(&lf[92],6, C_text("format"));
lf[93]=C_h_intern(&lf[93],30, C_text("chicken.base#get-output-string"));
lf[94]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012\047 on line "));
lf[95]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016In procedure `"));
lf[96]=C_h_intern(&lf[96],31, C_text("chicken.base#open-output-string"));
lf[97]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010On line "));
lf[98]=C_h_intern(&lf[98],18, C_text("##sys#write-char-0"));
lf[99]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016In procedure `"));
lf[100]=C_h_intern(&lf[100],9, C_text("##core#db"));
lf[101]=C_h_intern(&lf[101],12, C_text("scheme#cadar"));
lf[102]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010module `"));
lf[103]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005\012    "));
lf[104]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025one of these modules:"));
lf[105]=C_decode_literal(C_heaptop,C_text("\376B\000\000\035\012  Suggestion: try importing "));
lf[106]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030\012\012  Unknown identifier `"));
lf[107]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002\047:"));
lf[108]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014\012  In file `"));
lf[109]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001:"));
lf[110]=C_decode_literal(C_heaptop,C_text("\376B\000\000\034\047 has unresolved identifiers"));
lf[111]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010Module `"));
lf[112]=C_decode_literal(C_heaptop,C_text("\376B\000\000$(internal) indirect export not found"));
lf[113]=C_h_intern(&lf[113],20, C_text("scheme#string-append"));
lf[114]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014 in module `"));
lf[115]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\047"));
lf[116]=C_h_intern(&lf[116],21, C_text("scheme#symbol->string"));
lf[117]=C_decode_literal(C_heaptop,C_text("\376B\000\000!indirect export of syntax binding"));
lf[118]=C_decode_literal(C_heaptop,C_text("\376B\000\000\033indirect reexport of syntax"));
lf[119]=C_decode_literal(C_heaptop,C_text("\376B\000\000\042indirect export of unknown binding"));
lf[120]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021module unresolved"));
lf[121]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001`"));
lf[122]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\047"));
lf[123]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016Cannot export "));
lf[124]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017 because it is "));
lf[125]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001."));
lf[126]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024Exported identifier "));
lf[127]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026 has not been defined."));
lf[128]=C_h_intern(&lf[128],4, C_text("bomb"));
lf[129]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004fail"));
lf[130]=C_h_intern(&lf[130],30, C_text("##sys#current-meta-environment"));
lf[131]=C_h_intern(&lf[131],28, C_text("##sys#meta-macro-environment"));
lf[132]=C_h_intern(&lf[132],25, C_text("##sys#import-library-hook"));
lf[133]=C_h_intern(&lf[133],21, C_text("##sys#notices-enabled"));
lf[134]=C_h_intern(&lf[134],11, C_text("scheme#load"));
lf[135]=C_h_intern(&lf[135],35, C_text("chicken.load#find-dynamic-extension"));
lf[136]=C_h_intern(&lf[136],19, C_text("##sys#string-append"));
lf[137]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007.import"));
lf[139]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014 in module `"));
lf[140]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\047"));
lf[141]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001:"));
lf[142]=C_h_intern(&lf[142],20, C_text("##sys#symbol->string"));
lf[143]=C_h_intern(&lf[143],20, C_text("##sys#number->string"));
lf[144]=C_h_intern(&lf[144],23, C_text("##sys#syntax-error-hook"));
lf[145]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016invalid prefix"));
lf[146]=C_h_intern(&lf[146],24, C_text("chicken.keyword#keyword\077"));
lf[147]=C_decode_literal(C_heaptop,C_text("\376B\000\000\034invalid import specification"));
lf[148]=C_decode_literal(C_heaptop,C_text("\376B\000\000!imported identifier doesn\047t exist"));
lf[149]=C_h_intern(&lf[149],18, C_text("##sys#check-syntax"));
lf[150]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\002\376\001\000\000\006\001symbol\376\377\001\000\000\000\000"));
lf[151]=C_decode_literal(C_heaptop,C_text("\376B\000\000!excluded identifier doesn\047t exist"));
lf[152]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\002\376\001\000\000\006\001symbol\376\377\001\000\000\000\000"));
lf[153]=C_decode_literal(C_heaptop,C_text("\376B\000\000 renamed identifier doesn\047t exist"));
lf[154]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006\001symbol\376\003\000\000\002\376\001\000\000\006\001symbol\376\377\016\376\377\001\000\000\000\000"));
lf[155]=C_h_intern(&lf[155],20, C_text("##sys#string->symbol"));
lf[156]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\377\016"));
lf[157]=C_h_intern(&lf[157],37, C_text("scheme#call-with-current-continuation"));
lf[158]=C_h_intern(&lf[158],6, C_text("prefix"));
lf[159]=C_h_intern(&lf[159],6, C_text("except"));
lf[160]=C_h_intern(&lf[160],6, C_text("rename"));
lf[161]=C_h_intern(&lf[161],4, C_text("only"));
lf[162]=C_h_intern(&lf[162],19, C_text("##sys#expand-import"));
lf[163]=C_decode_literal(C_heaptop,C_text("\376B\000\000#cannot import from undefined module"));
lf[164]=C_h_intern(&lf[164],12, C_text("##sys#import"));
lf[165]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001##core#undefined\376\377\016"));
lf[166]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\001"));
lf[167]=C_h_intern(&lf[167],12, C_text("##sys#notice"));
lf[168]=C_decode_literal(C_heaptop,C_text("\376B\000\000(re-importing already imported identifier"));
lf[169]=C_decode_literal(C_heaptop,C_text("\376B\000\000$re-importing already imported syntax"));
lf[170]=C_decode_literal(C_heaptop,C_text("\376B\000\000%`reexport\047 only valid inside a module"));
lf[171]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001#"));
lf[172]=C_h_intern(&lf[172],23, C_text("##sys#alias-global-hook"));
lf[173]=C_h_intern(&lf[173],22, C_text("##sys#validate-exports"));
lf[174]=C_h_intern(&lf[174],16, C_text("##core#interface"));
lf[175]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021unknown interface"));
lf[176]=C_h_intern(&lf[176],1, C_text("\052"));
lf[177]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017invalid exports"));
lf[178]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017invalid exports"));
lf[179]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016invalid export"));
lf[180]=C_h_intern_kw(&lf[180],6, C_text("syntax"));
lf[181]=C_h_intern_kw(&lf[181],9, C_text("interface"));
lf[182]=C_decode_literal(C_heaptop,C_text("\376B\000\000\037invalid interface specification"));
lf[183]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016invalid export"));
lf[184]=C_h_intern(&lf[184],22, C_text("##sys#register-functor"));
lf[185]=C_h_intern(&lf[185],25, C_text("##sys#instantiate-functor"));
lf[186]=C_decode_literal(C_heaptop,C_text("\376B\000\000/argument list mismatch in functor instantiation"));
lf[187]=C_h_intern(&lf[187],13, C_text("##core#module"));
lf[188]=C_h_intern(&lf[188],23, C_text("##core#let-module-alias"));
lf[190]=C_decode_literal(C_heaptop,C_text("\376B\000\000!instantation of undefined functor"));
lf[191]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021argument module `"));
lf[192]=C_decode_literal(C_heaptop,C_text("\376B\000\000$\047 does not match required signature\012"));
lf[193]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022in instantiation `"));
lf[194]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016\047 of functor `"));
lf[195]=C_decode_literal(C_heaptop,C_text("\376B\000\0007\047, because the following required exports are missing:\012"));
lf[196]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003\012  "));
lf[197]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001not\376\001\000\000\012\001scheme#not\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001boolean\077\376\001\000\000\017\001scheme#boolean\077"
"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001eq\077\376\001\000\000\012\001scheme#eq\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001eqv\077\376\001\000\000\013\001scheme#eqv\077\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\006\001equal\077\376\001\000\000\015\001scheme#equal\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001pair\077\376\001\000\000\014\001scheme#pair\077\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\004\001cons\376\001\000\000\013\001scheme#cons\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001car\376\001\000\000\012\001scheme#car\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001"
"cdr\376\001\000\000\012\001scheme#cdr\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001caar\376\001\000\000\013\001scheme#caar\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001cadr\376\001\000\000"
"\013\001scheme#cadr\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001cdar\376\001\000\000\013\001scheme#cdar\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001cddr\376\001\000\000\013\001sche"
"me#cddr\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001caaar\376\001\000\000\014\001scheme#caaar\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001caadr\376\001\000\000\014\001scheme#"
"caadr\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001cadar\376\001\000\000\014\001scheme#cadar\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001caddr\376\001\000\000\014\001scheme#ca"
"ddr\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001cdaar\376\001\000\000\014\001scheme#cdaar\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001cdadr\376\001\000\000\014\001scheme#cdad"
"r\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001cddar\376\001\000\000\014\001scheme#cddar\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001cdddr\376\001\000\000\014\001scheme#cdddr\376"
"\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001caaaar\376\001\000\000\015\001scheme#caaaar\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001caaadr\376\001\000\000\015\001scheme#caaad"
"r\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001caadar\376\001\000\000\015\001scheme#caadar\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001caaddr\376\001\000\000\015\001scheme#caa"
"ddr\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001cadaar\376\001\000\000\015\001scheme#cadaar\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001cadadr\376\001\000\000\015\001scheme#c"
"adadr\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001caddar\376\001\000\000\015\001scheme#caddar\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001cadddr\376\001\000\000\015\001scheme"
"#cadddr\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001cdaaar\376\001\000\000\015\001scheme#cdaaar\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001cdaadr\376\001\000\000\015\001sche"
"me#cdaadr\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001cdadar\376\001\000\000\015\001scheme#cdadar\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001cdaddr\376\001\000\000\015\001sc"
"heme#cdaddr\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001cddaar\376\001\000\000\015\001scheme#cddaar\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001cddadr\376\001\000\000\015\001"
"scheme#cddadr\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001cdddar\376\001\000\000\015\001scheme#cdddar\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001cddddr\376\001\000\000"
"\015\001scheme#cddddr\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001set-car!\376\001\000\000\017\001scheme#set-car!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001set-"
"cdr!\376\001\000\000\017\001scheme#set-cdr!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001null\077\376\001\000\000\014\001scheme#null\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001"
"list\077\376\001\000\000\014\001scheme#list\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001list\376\001\000\000\013\001scheme#list\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001leng"
"th\376\001\000\000\015\001scheme#length\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001list-tail\376\001\000\000\020\001scheme#list-tail\376\003\000\000\002\376\003\000\000\002\376\001"
"\000\000\010\001list-ref\376\001\000\000\017\001scheme#list-ref\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001append\376\001\000\000\015\001scheme#append\376\003\000\000\002\376"
"\003\000\000\002\376\001\000\000\007\001reverse\376\001\000\000\016\001scheme#reverse\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001memq\376\001\000\000\013\001scheme#memq\376\003\000\000\002\376"
"\003\000\000\002\376\001\000\000\004\001memv\376\001\000\000\013\001scheme#memv\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001member\376\001\000\000\015\001scheme#member\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\004\001assq\376\001\000\000\013\001scheme#assq\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001assv\376\001\000\000\013\001scheme#assv\376\003\000\000\002\376\003\000\000\002\376\001\000\000"
"\005\001assoc\376\001\000\000\014\001scheme#assoc\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001symbol\077\376\001\000\000\016\001scheme#symbol\077\376\003\000\000\002\376\003\000\000\002\376\001"
"\000\000\016\001symbol->string\376\001\000\000\025\001scheme#symbol->string\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001string->symbol\376\001\000\000\025"
"\001scheme#string->symbol\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001number\077\376\001\000\000\016\001scheme#number\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010"
"\001integer\077\376\001\000\000\017\001scheme#integer\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001exact\077\376\001\000\000\015\001scheme#exact\077\376\003\000\000\002\376\003\000\000"
"\002\376\001\000\000\005\001real\077\376\001\000\000\014\001scheme#real\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001complex\077\376\001\000\000\017\001scheme#complex\077\376\003\000\000\002"
"\376\003\000\000\002\376\001\000\000\010\001inexact\077\376\001\000\000\017\001scheme#inexact\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001rational\077\376\001\000\000\020\001scheme#ra"
"tional\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001zero\077\376\001\000\000\014\001scheme#zero\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001odd\077\376\001\000\000\013\001scheme#o"
"dd\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001even\077\376\001\000\000\014\001scheme#even\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001positive\077\376\001\000\000\020\001scheme#"
"positive\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001negative\077\376\001\000\000\020\001scheme#negative\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001max\376\001\000\000\012"
"\001scheme#max\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001min\376\001\000\000\012\001scheme#min\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001\001+\376\001\000\000\010\001scheme#+\376\003\000"
"\000\002\376\003\000\000\002\376\001\000\000\001\001-\376\001\000\000\010\001scheme#-\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001\001\052\376\001\000\000\010\001scheme#\052\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001\001/\376\001\000\000"
"\010\001scheme#/\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001\001=\376\001\000\000\010\001scheme#=\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001\001>\376\001\000\000\010\001scheme#>\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\001\001<\376\001\000\000\010\001scheme#<\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002\001>=\376\001\000\000\011\001scheme#>=\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002\001<=\376\001\000\000\011\001"
"scheme#<=\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001quotient\376\001\000\000\017\001scheme#quotient\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001remainder\376"
"\001\000\000\020\001scheme#remainder\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001modulo\376\001\000\000\015\001scheme#modulo\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001gc"
"d\376\001\000\000\012\001scheme#gcd\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001lcm\376\001\000\000\012\001scheme#lcm\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001abs\376\001\000\000\012\001sch"
"eme#abs\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001floor\376\001\000\000\014\001scheme#floor\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001ceiling\376\001\000\000\016\001schem"
"e#ceiling\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001truncate\376\001\000\000\017\001scheme#truncate\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001round\376\001\000\000\014"
"\001scheme#round\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001rationalize\376\001\000\000\022\001scheme#rationalize\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001"
"exact->inexact\376\001\000\000\025\001scheme#exact->inexact\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001inexact->exact\376\001\000\000\025\001sch"
"eme#inexact->exact\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001exp\376\001\000\000\012\001scheme#exp\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001log\376\001\000\000\012\001sc"
"heme#log\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001expt\376\001\000\000\013\001scheme#expt\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001sqrt\376\001\000\000\013\001scheme#sq"
"rt\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001sin\376\001\000\000\012\001scheme#sin\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001cos\376\001\000\000\012\001scheme#cos\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\003\001tan\376\001\000\000\012\001scheme#tan\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001asin\376\001\000\000\013\001scheme#asin\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001"
"acos\376\001\000\000\013\001scheme#acos\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001atan\376\001\000\000\013\001scheme#atan\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001number"
"->string\376\001\000\000\025\001scheme#number->string\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001string->number\376\001\000\000\025\001scheme#st"
"ring->number\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001char\077\376\001\000\000\014\001scheme#char\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001char=\077\376\001\000\000\015\001s"
"cheme#char=\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001char>\077\376\001\000\000\015\001scheme#char>\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001char<\077\376\001\000\000\015"
"\001scheme#char<\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001char>=\077\376\001\000\000\016\001scheme#char>=\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001char<=\077"
"\376\001\000\000\016\001scheme#char<=\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001char-ci=\077\376\001\000\000\020\001scheme#char-ci=\077\376\003\000\000\002\376\003\000\000\002\376\001\000"
"\000\011\001char-ci<\077\376\001\000\000\020\001scheme#char-ci<\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001char-ci>\077\376\001\000\000\020\001scheme#char-ci>"
"\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001char-ci>=\077\376\001\000\000\021\001scheme#char-ci>=\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001char-ci<=\077\376\001\000\000"
"\021\001scheme#char-ci<=\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001char-alphabetic\077\376\001\000\000\027\001scheme#char-alphabetic\077"
"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001char-whitespace\077\376\001\000\000\027\001scheme#char-whitespace\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001cha"
"r-numeric\077\376\001\000\000\024\001scheme#char-numeric\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001char-upper-case\077\376\001\000\000\027\001scheme"
"#char-upper-case\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001char-lower-case\077\376\001\000\000\027\001scheme#char-lower-case\077\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\013\001char-upcase\376\001\000\000\022\001scheme#char-upcase\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001char-downcase\376\001"
"\000\000\024\001scheme#char-downcase\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001char->integer\376\001\000\000\024\001scheme#char->integer\376"
"\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001integer->char\376\001\000\000\024\001scheme#integer->char\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001string\077\376\001\000"
"\000\016\001scheme#string\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001string=\077\376\001\000\000\017\001scheme#string=\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001st"
"ring>\077\376\001\000\000\017\001scheme#string>\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001string<\077\376\001\000\000\017\001scheme#string<\077\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\011\001string>=\077\376\001\000\000\020\001scheme#string>=\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001string<=\077\376\001\000\000\020\001scheme#str"
"ing<=\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001string-ci=\077\376\001\000\000\022\001scheme#string-ci=\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001string-"
"ci<\077\376\001\000\000\022\001scheme#string-ci<\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001string-ci>\077\376\001\000\000\022\001scheme#string-ci>\077\376"
"\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001string-ci>=\077\376\001\000\000\023\001scheme#string-ci>=\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001string-ci<=\077"
"\376\001\000\000\023\001scheme#string-ci<=\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001make-string\376\001\000\000\022\001scheme#make-string\376\003\000\000"
"\002\376\003\000\000\002\376\001\000\000\015\001string-length\376\001\000\000\024\001scheme#string-length\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001string-ref\376\001\000"
"\000\021\001scheme#string-ref\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001string-set!\376\001\000\000\022\001scheme#string-set!\376\003\000\000\002\376\003\000\000"
"\002\376\001\000\000\015\001string-append\376\001\000\000\024\001scheme#string-append\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001string-copy\376\001\000\000\022\001s"
"cheme#string-copy\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001string->list\376\001\000\000\023\001scheme#string->list\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\014\001list->string\376\001\000\000\023\001scheme#list->string\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001substring\376\001\000\000\020\001scheme"
"#substring\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001string-fill!\376\001\000\000\023\001scheme#string-fill!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001v"
"ector\077\376\001\000\000\016\001scheme#vector\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001make-vector\376\001\000\000\022\001scheme#make-vector\376\003\000"
"\000\002\376\003\000\000\002\376\001\000\000\012\001vector-ref\376\001\000\000\021\001scheme#vector-ref\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001vector-set!\376\001\000\000\022\001s"
"cheme#vector-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001string\376\001\000\000\015\001scheme#string\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001vector"
"\376\001\000\000\015\001scheme#vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001vector-length\376\001\000\000\024\001scheme#vector-length\376\003\000\000\002\376"
"\003\000\000\002\376\001\000\000\014\001vector->list\376\001\000\000\023\001scheme#vector->list\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001list->vector\376\001\000\000\023"
"\001scheme#list->vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001vector-fill!\376\001\000\000\023\001scheme#vector-fill!\376\003\000\000\002\376\003"
"\000\000\002\376\001\000\000\012\001procedure\077\376\001\000\000\021\001scheme#procedure\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001map\376\001\000\000\012\001scheme#map\376\003\000"
"\000\002\376\003\000\000\002\376\001\000\000\010\001for-each\376\001\000\000\017\001scheme#for-each\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001apply\376\001\000\000\014\001scheme#appl"
"y\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001force\376\001\000\000\014\001scheme#force\376\003\000\000\002\376\003\000\000\002\376\001\000\000\036\001call-with-current-contin"
"uation\376\001\000\000%\001scheme#call-with-current-continuation\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001input-port\077\376\001\000\000"
"\022\001scheme#input-port\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001output-port\077\376\001\000\000\023\001scheme#output-port\077\376\003\000\000\002\376\003"
"\000\000\002\376\001\000\000\022\001current-input-port\376\001\000\000\031\001scheme#current-input-port\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001curren"
"t-output-port\376\001\000\000\032\001scheme#current-output-port\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001call-with-input-fil"
"e\376\001\000\000\033\001scheme#call-with-input-file\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001call-with-output-file\376\001\000\000\034\001sch"
"eme#call-with-output-file\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001open-input-file\376\001\000\000\026\001scheme#open-input-"
"file\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001open-output-file\376\001\000\000\027\001scheme#open-output-file\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020"
"\001close-input-port\376\001\000\000\027\001scheme#close-input-port\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001close-output-port\376"
"\001\000\000\030\001scheme#close-output-port\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001load\376\001\000\000\013\001scheme#load\376\003\000\000\002\376\003\000\000\002\376\001\000\000"
"\004\001read\376\001\000\000\013\001scheme#read\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001read-char\376\001\000\000\020\001scheme#read-char\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\011\001peek-char\376\001\000\000\020\001scheme#peek-char\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001write\376\001\000\000\014\001scheme#write\376\003\000\000"
"\002\376\003\000\000\002\376\001\000\000\007\001display\376\001\000\000\016\001scheme#display\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001write-char\376\001\000\000\021\001scheme#wr"
"ite-char\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001newline\376\001\000\000\016\001scheme#newline\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001eof-object\077\376\001"
"\000\000\022\001scheme#eof-object\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001with-input-from-file\376\001\000\000\033\001scheme#with-inpu"
"t-from-file\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001with-output-to-file\376\001\000\000\032\001scheme#with-output-to-file\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\013\001char-ready\077\376\001\000\000\022\001scheme#char-ready\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001imag-part\376\001\000\000\020\001"
"scheme#imag-part\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001real-part\376\001\000\000\020\001scheme#real-part\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001m"
"ake-rectangular\376\001\000\000\027\001scheme#make-rectangular\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001make-polar\376\001\000\000\021\001sche"
"me#make-polar\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001angle\376\001\000\000\014\001scheme#angle\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001magnitude\376\001\000"
"\000\020\001scheme#magnitude\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001numerator\376\001\000\000\020\001scheme#numerator\376\003\000\000\002\376\003\000\000\002\376\001\000\000"
"\013\001denominator\376\001\000\000\022\001scheme#denominator\376\003\000\000\002\376\003\000\000\002\376\001\000\000\031\001scheme-report-environment\376\001"
"\000\000 \001scheme#scheme-report-environment\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001null-environment\376\001\000\000\027\001scheme"
"#null-environment\376\003\000\000\002\376\003\000\000\002\376\001\000\000\027\001interaction-environment\376\001\000\000\036\001scheme#interaction"
"-environment\376\377\016"));
lf[198]=C_h_intern(&lf[198],30, C_text("##sys#scheme-macro-environment"));
lf[199]=C_h_intern(&lf[199],33, C_text("chicken.module#module-environment"));
lf[200]=C_h_intern(&lf[200],18, C_text("module-environment"));
lf[201]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020undefined module"));
lf[202]=C_h_intern(&lf[202],11, C_text("environment"));
lf[203]=C_h_intern(&lf[203],14, C_text("chicken.syntax"));
lf[204]=C_h_intern(&lf[204],6, C_text("expand"));
lf[205]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001expand\376\001\000\000\025\001chicken.syntax#expand\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001get-line-number"
"\376\001\000\000\036\001chicken.syntax#get-line-number\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001strip-syntax\376\001\000\000\033\001chicken.sy"
"ntax#strip-syntax\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001syntax-error\376\001\000\000\033\001chicken.syntax#syntax-error\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\024\001er-macro-transformer\376\001\000\000#\001chicken.syntax#er-macro-transformer\376\003\000\000\002"
"\376\003\000\000\002\376\001\000\000\024\001ir-macro-transformer\376\001\000\000#\001chicken.syntax#ir-macro-transformer\376\377\016"));
lf[206]=C_h_intern(&lf[206],38, C_text("##sys#chicken.syntax-macro-environment"));
lf[207]=C_h_intern(&lf[207],12, C_text("chicken.base"));
lf[208]=C_h_intern(&lf[208],7, C_text("library"));
lf[209]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001add1\376\001\000\000\021\001chicken.base#add1\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001alist-ref\376\001\000\000\026\001chicke"
"n.base#alist-ref\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001alist-update\376\001\000\000\031\001chicken.base#alist-update\376\003\000\000\002"
"\376\003\000\000\002\376\001\000\000\015\001alist-update!\376\001\000\000\032\001chicken.base#alist-update!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001atom\077\376\001\000"
"\000\022\001chicken.base#atom\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001bignum\077\376\001\000\000\024\001chicken.base#bignum\077\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\007\001butlast\376\001\000\000\024\001chicken.base#butlast\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001call/cc\376\001\000\000\024\001chicken.base"
"#call/cc\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001case-sensitive\376\001\000\000\033\001chicken.base#case-sensitive\376\003\000\000\002\376\003\000\000"
"\002\376\001\000\000\011\001char-name\376\001\000\000\026\001chicken.base#char-name\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001chop\376\001\000\000\021\001chicken.ba"
"se#chop\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001complement\376\001\000\000\027\001chicken.base#complement\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001co"
"mpose\376\001\000\000\024\001chicken.base#compose\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001compress\376\001\000\000\025\001chicken.base#compre"
"ss\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001conjoin\376\001\000\000\024\001chicken.base#conjoin\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001constantly\376\001\000"
"\000\027\001chicken.base#constantly\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001cplxnum\077\376\001\000\000\025\001chicken.base#cplxnum\077\376\003\000"
"\000\002\376\003\000\000\002\376\001\000\000\022\001current-error-port\376\001\000\000\037\001chicken.base#current-error-port\376\003\000\000\002\376\003\000\000\002\376\001"
"\000\000\007\001disjoin\376\001\000\000\024\001chicken.base#disjoin\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001each\376\001\000\000\021\001chicken.base#each"
"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001emergency-exit\376\001\000\000\033\001chicken.base#emergency-exit\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001e"
"nable-warnings\376\001\000\000\034\001chicken.base#enable-warnings\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001equal=\077\376\001\000\000\024\001chi"
"cken.base#equal=\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001error\376\001\000\000\022\001chicken.base#error\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001ex"
"act-integer\077\376\001\000\000\033\001chicken.base#exact-integer\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001exact-integer-nth-r"
"oot\376\001\000\000#\001chicken.base#exact-integer-nth-root\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001exact-integer-sqrt\376\001"
"\000\000\037\001chicken.base#exact-integer-sqrt\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001exit\376\001\000\000\021\001chicken.base#exit\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\014\001exit-handler\376\001\000\000\031\001chicken.base#exit-handler\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001finite\077"
"\376\001\000\000\024\001chicken.base#finite\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001fixnum\077\376\001\000\000\024\001chicken.base#fixnum\077\376\003\000\000\002"
"\376\003\000\000\002\376\001\000\000\007\001flatten\376\001\000\000\024\001chicken.base#flatten\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001flip\376\001\000\000\021\001chicken.ba"
"se#flip\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001flonum\077\376\001\000\000\024\001chicken.base#flonum\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001flush-ou"
"tput\376\001\000\000\031\001chicken.base#flush-output\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001foldl\376\001\000\000\022\001chicken.base#foldl"
"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001foldr\376\001\000\000\022\001chicken.base#foldr\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001gensym\376\001\000\000\023\001chicken"
".base#gensym\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001get-call-chain\376\001\000\000\033\001chicken.base#get-call-chain\376\003\000\000\002"
"\376\003\000\000\002\376\001\000\000\021\001get-output-string\376\001\000\000\036\001chicken.base#get-output-string\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001"
"getter-with-setter\376\001\000\000\037\001chicken.base#getter-with-setter\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001identity\376"
"\001\000\000\025\001chicken.base#identity\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001implicit-exit-handler\376\001\000\000\042\001chicken.bas"
"e#implicit-exit-handler\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001infinite\077\376\001\000\000\026\001chicken.base#infinite\077\376\003\000\000"
"\002\376\003\000\000\002\376\001\000\000\020\001input-port-open\077\376\001\000\000\035\001chicken.base#input-port-open\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001i"
"ntersperse\376\001\000\000\030\001chicken.base#intersperse\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001join\376\001\000\000\021\001chicken.base#j"
"oin\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001keyword-style\376\001\000\000\032\001chicken.base#keyword-style\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001"
"list-of\077\376\001\000\000\025\001chicken.base#list-of\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001make-parameter\376\001\000\000\033\001chicken.b"
"ase#make-parameter\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001make-promise\376\001\000\000\031\001chicken.base#make-promise\376\003\000"
"\000\002\376\003\000\000\002\376\001\000\000\004\001nan\077\376\001\000\000\021\001chicken.base#nan\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001notice\376\001\000\000\023\001chicken.base"
"#notice\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001\001o\376\001\000\000\016\001chicken.base#o\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001on-exit\376\001\000\000\024\001chicken"
".base#on-exit\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001open-input-string\376\001\000\000\036\001chicken.base#open-input-stri"
"ng\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001open-output-string\376\001\000\000\037\001chicken.base#open-output-string\376\003\000\000\002\376\003"
"\000\000\002\376\001\000\000\021\001output-port-open\077\376\001\000\000\036\001chicken.base#output-port-open\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001pa"
"rentheses-synonyms\376\001\000\000!\001chicken.base#parentheses-synonyms\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001port\077\376\001"
"\000\000\022\001chicken.base#port\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001port-closed\077\376\001\000\000\031\001chicken.base#port-closed"
"\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001print-call-chain\376\001\000\000\035\001chicken.base#print-call-chain\376\003\000\000\002\376\003\000\000\002\376\001"
"\000\000\005\001print\376\001\000\000\022\001chicken.base#print\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001print\052\376\001\000\000\023\001chicken.base#print\052"
"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001procedure-information\376\001\000\000\042\001chicken.base#procedure-information\376\003\000"
"\000\002\376\003\000\000\002\376\001\000\000\010\001promise\077\376\001\000\000\025\001chicken.base#promise\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001quotient&modulo\376"
"\001\000\000\034\001chicken.base#quotient&modulo\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001quotient&remainder\376\001\000\000\037\001chicken"
".base#quotient&remainder\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001rassoc\376\001\000\000\023\001chicken.base#rassoc\376\003\000\000\002\376\003\000\000"
"\002\376\001\000\000\007\001ratnum\077\376\001\000\000\024\001chicken.base#ratnum\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001record-printer\376\001\000\000\033\001chic"
"ken.base#record-printer\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001set-record-printer!\376\001\000\000 \001chicken.base#set"
"-record-printer!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001setter\376\001\000\000\023\001chicken.base#setter\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001s"
"ignum\376\001\000\000\023\001chicken.base#signum\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001sleep\376\001\000\000\022\001chicken.base#sleep\376\003\000\000\002"
"\376\003\000\000\002\376\001\000\000\031\001string->uninterned-symbol\376\001\000\000&\001chicken.base#string->uninterned-symbol"
"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001sub1\376\001\000\000\021\001chicken.base#sub1\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001subvector\376\001\000\000\026\001chicke"
"n.base#subvector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001symbol-append\376\001\000\000\032\001chicken.base#symbol-append\376\003\000"
"\000\002\376\003\000\000\002\376\001\000\000\015\001symbol-escape\376\001\000\000\032\001chicken.base#symbol-escape\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001tail\077\376"
"\001\000\000\022\001chicken.base#tail\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001vector-copy!\376\001\000\000\031\001chicken.base#vector-cop"
"y!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001vector-resize\376\001\000\000\032\001chicken.base#vector-resize\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001v"
"oid\376\001\000\000\021\001chicken.base#void\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001warning\376\001\000\000\024\001chicken.base#warning\376\377\016"));
lf[210]=C_h_intern(&lf[210],36, C_text("##sys#chicken.base-macro-environment"));
lf[211]=C_h_intern(&lf[211],7, C_text("srfi-98"));
lf[212]=C_h_intern(&lf[212],5, C_text("posix"));
lf[213]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\030\001get-environment-variable\376\001\000\0000\001chicken.process-context#get-enviro"
"nment-variable\376\003\000\000\002\376\003\000\000\002\376\001\000\000\031\001get-environment-variables\376\001\000\0001\001chicken.process-con"
"text#get-environment-variables\376\377\016"));
lf[214]=C_h_intern(&lf[214],7, C_text("srfi-88"));
lf[215]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001keyword\077\376\001\000\000\030\001chicken.keyword#keyword\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001keyword->s"
"tring\376\003\000\000\002\376\001\000\000\037\001chicken.keyword#keyword->string\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001string->keywor"
"d\376\003\000\000\002\376\001\000\000\037\001chicken.keyword#string->keyword\376\377\016\376\377\016"));
lf[216]=C_h_intern(&lf[216],7, C_text("srfi-55"));
lf[217]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\021\001require-extension\376\377\016"));
lf[218]=C_h_intern(&lf[218],7, C_text("srfi-39"));
lf[219]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001make-parameter\376\001\000\000\033\001chicken.base#make-parameter\376\377\016"));
lf[220]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\014\001parameterize\376\377\016"));
lf[221]=C_h_intern(&lf[221],7, C_text("srfi-31"));
lf[222]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\003\001rec\376\377\016"));
lf[223]=C_h_intern(&lf[223],7, C_text("srfi-28"));
lf[224]=C_h_intern(&lf[224],6, C_text("extras"));
lf[225]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001format\376\001\000\000\025\001chicken.format#format\376\377\016"));
lf[226]=C_h_intern(&lf[226],7, C_text("srfi-26"));
lf[227]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\003\001cut\376\003\000\000\002\376\001\000\000\004\001cute\376\377\016"));
lf[228]=C_h_intern(&lf[228],7, C_text("srfi-23"));
lf[229]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001error\376\001\000\000\022\001chicken.base#error\376\377\016"));
lf[230]=C_h_intern(&lf[230],7, C_text("srfi-17"));
lf[231]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001getter-with-setter\376\001\000\000\037\001chicken.base#getter-with-setter\376\003\000\000\002\376\003\000\000"
"\002\376\001\000\000\006\001setter\376\001\000\000\023\001chicken.base#setter\376\377\016"));
lf[232]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\004\001set!\376\377\016"));
lf[233]=C_h_intern(&lf[233],31, C_text("##sys#default-macro-environment"));
lf[234]=C_h_intern(&lf[234],7, C_text("srfi-16"));
lf[235]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\013\001case-lambda\376\377\016"));
lf[236]=C_h_intern(&lf[236],7, C_text("srfi-15"));
lf[237]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\011\001fluid-let\376\377\016"));
lf[238]=C_h_intern(&lf[238],7, C_text("srfi-12"));
lf[239]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001abort\376\001\000\000\027\001chicken.condition#abort\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001condition\077\376\001\000\000"
"\034\001chicken.condition#condition\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001condition-predicate\376\001\000\000%\001chicken.c"
"ondition#condition-predicate\376\003\000\000\002\376\003\000\000\002\376\001\000\000\033\001condition-property-accessor\376\001\000\000-\001chi"
"cken.condition#condition-property-accessor\376\003\000\000\002\376\003\000\000\002\376\001\000\000\031\001current-exception-hand"
"ler\376\001\000\000+\001chicken.condition#current-exception-handler\376\003\000\000\002\376\003\000\000\002\376\001\000\000\030\001make-composi"
"te-condition\376\001\000\000\052\001chicken.condition#make-composite-condition\376\003\000\000\002\376\003\000\000\002\376\001\000\000\027\001make"
"-property-condition\376\001\000\000)\001chicken.condition#make-property-condition\376\003\000\000\002\376\003\000\000\002\376\001\000\000"
"\006\001signal\376\001\000\000\030\001chicken.condition#signal\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001with-exception-handler\376\001\000\000"
"(\001chicken.condition#with-exception-handler\376\377\016"));
lf[240]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\021\001handle-exceptions\376\377\016"));
lf[241]=C_h_intern(&lf[241],41, C_text("##sys#chicken.condition-macro-environment"));
lf[242]=C_h_intern(&lf[242],7, C_text("srfi-11"));
lf[243]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\012\001let-values\376\003\000\000\002\376\001\000\000\013\001let\052-values\376\377\016"));
lf[244]=C_h_intern(&lf[244],7, C_text("srfi-10"));
lf[245]=C_h_intern(&lf[245],11, C_text("read-syntax"));
lf[246]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001define-reader-ctor\376\001\000\000&\001chicken.read-syntax#define-reader-ctor\376\377"
"\016"));
lf[247]=C_h_intern(&lf[247],6, C_text("srfi-9"));
lf[248]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\022\001define-record-type\376\377\016"));
lf[249]=C_h_intern(&lf[249],6, C_text("srfi-8"));
lf[250]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\007\001receive\376\377\016"));
lf[251]=C_h_intern(&lf[251],6, C_text("srfi-6"));
lf[252]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001get-output-string\376\001\000\000\036\001chicken.base#get-output-string\376\003\000\000\002\376\003\000\000\002\376"
"\001\000\000\021\001open-input-string\376\001\000\000\036\001chicken.base#open-input-string\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001open-o"
"utput-string\376\001\000\000\037\001chicken.base#open-output-string\376\377\016"));
lf[253]=C_h_intern(&lf[253],6, C_text("srfi-2"));
lf[254]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\010\001and-let\052\376\377\016"));
lf[255]=C_h_intern(&lf[255],6, C_text("srfi-0"));
lf[256]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\013\001cond-expand\376\377\016"));
lf[257]=C_h_intern(&lf[257],12, C_text("chicken.type"));
lf[258]=C_h_intern(&lf[258],36, C_text("##sys#chicken.type-macro-environment"));
lf[259]=C_h_intern(&lf[259],14, C_text("chicken.module"));
lf[260]=C_h_intern(&lf[260],38, C_text("##sys#chicken.module-macro-environment"));
lf[261]=C_h_intern(&lf[261],23, C_text("chicken.internal.syntax"));
lf[262]=C_h_intern(&lf[262],15, C_text("chicken.keyword"));
lf[263]=C_h_intern(&lf[263],4, C_text("r5rs"));
lf[264]=C_h_intern(&lf[264],6, C_text("scheme"));
lf[265]=C_h_intern(&lf[265],9, C_text("r5rs-null"));
lf[266]=C_h_intern(&lf[266],9, C_text("r4rs-null"));
lf[267]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001dynamic-wind\376\001\000\000\023\001scheme#dynamic-wind\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001eval\376\001\000\000\013\001s"
"cheme#eval\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001values\376\001\000\000\015\001scheme#values\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001call-with-val"
"ues\376\001\000\000\027\001scheme#call-with-values\376\377\016"));
lf[268]=C_h_intern(&lf[268],4, C_text("r4rs"));
lf[269]=C_h_intern(&lf[269],27, C_text("chicken.base#make-parameter"));
C_register_lf2(lf,270,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4240,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_chicken_2dsyntax_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[592] = {
{C_text("f13587:modules_2escm"),(void*)f13587},
{C_text("f13591:modules_2escm"),(void*)f13591},
{C_text("f_10002:modules_2escm"),(void*)f_10002},
{C_text("f_10020:modules_2escm"),(void*)f_10020},
{C_text("f_10026:modules_2escm"),(void*)f_10026},
{C_text("f_10030:modules_2escm"),(void*)f_10030},
{C_text("f_10031:modules_2escm"),(void*)f_10031},
{C_text("f_10037:modules_2escm"),(void*)f_10037},
{C_text("f_10043:modules_2escm"),(void*)f_10043},
{C_text("f_10065:modules_2escm"),(void*)f_10065},
{C_text("f_10067:modules_2escm"),(void*)f_10067},
{C_text("f_10077:modules_2escm"),(void*)f_10077},
{C_text("f_10090:modules_2escm"),(void*)f_10090},
{C_text("f_10094:modules_2escm"),(void*)f_10094},
{C_text("f_10097:modules_2escm"),(void*)f_10097},
{C_text("f_10107:modules_2escm"),(void*)f_10107},
{C_text("f_10145:modules_2escm"),(void*)f_10145},
{C_text("f_10151:modules_2escm"),(void*)f_10151},
{C_text("f_10152:modules_2escm"),(void*)f_10152},
{C_text("f_10188:modules_2escm"),(void*)f_10188},
{C_text("f_10194:modules_2escm"),(void*)f_10194},
{C_text("f_10197:modules_2escm"),(void*)f_10197},
{C_text("f_10200:modules_2escm"),(void*)f_10200},
{C_text("f_10207:modules_2escm"),(void*)f_10207},
{C_text("f_10211:modules_2escm"),(void*)f_10211},
{C_text("f_10215:modules_2escm"),(void*)f_10215},
{C_text("f_10219:modules_2escm"),(void*)f_10219},
{C_text("f_10222:modules_2escm"),(void*)f_10222},
{C_text("f_10228:modules_2escm"),(void*)f_10228},
{C_text("f_10231:modules_2escm"),(void*)f_10231},
{C_text("f_10238:modules_2escm"),(void*)f_10238},
{C_text("f_10248:modules_2escm"),(void*)f_10248},
{C_text("f_10255:modules_2escm"),(void*)f_10255},
{C_text("f_10266:modules_2escm"),(void*)f_10266},
{C_text("f_10273:modules_2escm"),(void*)f_10273},
{C_text("f_10275:modules_2escm"),(void*)f_10275},
{C_text("f_10309:modules_2escm"),(void*)f_10309},
{C_text("f_10345:modules_2escm"),(void*)f_10345},
{C_text("f_10356:modules_2escm"),(void*)f_10356},
{C_text("f_10370:modules_2escm"),(void*)f_10370},
{C_text("f_10377:modules_2escm"),(void*)f_10377},
{C_text("f_10379:modules_2escm"),(void*)f_10379},
{C_text("f_10413:modules_2escm"),(void*)f_10413},
{C_text("f_10453:modules_2escm"),(void*)f_10453},
{C_text("f_10463:modules_2escm"),(void*)f_10463},
{C_text("f_10476:modules_2escm"),(void*)f_10476},
{C_text("f_10486:modules_2escm"),(void*)f_10486},
{C_text("f_10507:modules_2escm"),(void*)f_10507},
{C_text("f_10522:modules_2escm"),(void*)f_10522},
{C_text("f_10532:modules_2escm"),(void*)f_10532},
{C_text("f_10540:modules_2escm"),(void*)f_10540},
{C_text("f_10550:modules_2escm"),(void*)f_10550},
{C_text("f_10553:modules_2escm"),(void*)f_10553},
{C_text("f_10557:modules_2escm"),(void*)f_10557},
{C_text("f_10561:modules_2escm"),(void*)f_10561},
{C_text("f_10568:modules_2escm"),(void*)f_10568},
{C_text("f_10596:modules_2escm"),(void*)f_10596},
{C_text("f_10622:modules_2escm"),(void*)f_10622},
{C_text("f_10624:modules_2escm"),(void*)f_10624},
{C_text("f_10627:modules_2escm"),(void*)f_10627},
{C_text("f_10633:modules_2escm"),(void*)f_10633},
{C_text("f_10674:modules_2escm"),(void*)f_10674},
{C_text("f_10706:modules_2escm"),(void*)f_10706},
{C_text("f_10732:modules_2escm"),(void*)f_10732},
{C_text("f_10753:modules_2escm"),(void*)f_10753},
{C_text("f_10757:modules_2escm"),(void*)f_10757},
{C_text("f_10783:modules_2escm"),(void*)f_10783},
{C_text("f_10797:modules_2escm"),(void*)f_10797},
{C_text("f_10839:modules_2escm"),(void*)f_10839},
{C_text("f_10855:modules_2escm"),(void*)f_10855},
{C_text("f_10863:modules_2escm"),(void*)f_10863},
{C_text("f_10870:modules_2escm"),(void*)f_10870},
{C_text("f_10880:modules_2escm"),(void*)f_10880},
{C_text("f_10902:modules_2escm"),(void*)f_10902},
{C_text("f_10904:modules_2escm"),(void*)f_10904},
{C_text("f_10943:modules_2escm"),(void*)f_10943},
{C_text("f_10964:modules_2escm"),(void*)f_10964},
{C_text("f_10976:modules_2escm"),(void*)f_10976},
{C_text("f_10999:modules_2escm"),(void*)f_10999},
{C_text("f_11002:modules_2escm"),(void*)f_11002},
{C_text("f_11013:modules_2escm"),(void*)f_11013},
{C_text("f_11019:modules_2escm"),(void*)f_11019},
{C_text("f_11051:modules_2escm"),(void*)f_11051},
{C_text("f_11054:modules_2escm"),(void*)f_11054},
{C_text("f_11065:modules_2escm"),(void*)f_11065},
{C_text("f_11081:modules_2escm"),(void*)f_11081},
{C_text("f_11085:modules_2escm"),(void*)f_11085},
{C_text("f_11092:modules_2escm"),(void*)f_11092},
{C_text("f_11105:modules_2escm"),(void*)f_11105},
{C_text("f_11132:modules_2escm"),(void*)f_11132},
{C_text("f_11145:modules_2escm"),(void*)f_11145},
{C_text("f_11149:modules_2escm"),(void*)f_11149},
{C_text("f_11153:modules_2escm"),(void*)f_11153},
{C_text("f_11157:modules_2escm"),(void*)f_11157},
{C_text("f_11171:modules_2escm"),(void*)f_11171},
{C_text("f_11177:modules_2escm"),(void*)f_11177},
{C_text("f_11179:modules_2escm"),(void*)f_11179},
{C_text("f_11204:modules_2escm"),(void*)f_11204},
{C_text("f_11213:modules_2escm"),(void*)f_11213},
{C_text("f_11223:modules_2escm"),(void*)f_11223},
{C_text("f_11238:modules_2escm"),(void*)f_11238},
{C_text("f_11241:modules_2escm"),(void*)f_11241},
{C_text("f_11244:modules_2escm"),(void*)f_11244},
{C_text("f_11247:modules_2escm"),(void*)f_11247},
{C_text("f_11250:modules_2escm"),(void*)f_11250},
{C_text("f_11253:modules_2escm"),(void*)f_11253},
{C_text("f_11256:modules_2escm"),(void*)f_11256},
{C_text("f_11259:modules_2escm"),(void*)f_11259},
{C_text("f_11262:modules_2escm"),(void*)f_11262},
{C_text("f_11265:modules_2escm"),(void*)f_11265},
{C_text("f_11268:modules_2escm"),(void*)f_11268},
{C_text("f_11271:modules_2escm"),(void*)f_11271},
{C_text("f_11274:modules_2escm"),(void*)f_11274},
{C_text("f_11277:modules_2escm"),(void*)f_11277},
{C_text("f_11280:modules_2escm"),(void*)f_11280},
{C_text("f_11283:modules_2escm"),(void*)f_11283},
{C_text("f_11286:modules_2escm"),(void*)f_11286},
{C_text("f_11289:modules_2escm"),(void*)f_11289},
{C_text("f_11292:modules_2escm"),(void*)f_11292},
{C_text("f_11295:modules_2escm"),(void*)f_11295},
{C_text("f_11298:modules_2escm"),(void*)f_11298},
{C_text("f_11301:modules_2escm"),(void*)f_11301},
{C_text("f_11304:modules_2escm"),(void*)f_11304},
{C_text("f_11307:modules_2escm"),(void*)f_11307},
{C_text("f_11310:modules_2escm"),(void*)f_11310},
{C_text("f_11313:modules_2escm"),(void*)f_11313},
{C_text("f_11316:modules_2escm"),(void*)f_11316},
{C_text("f_11319:modules_2escm"),(void*)f_11319},
{C_text("f_11322:modules_2escm"),(void*)f_11322},
{C_text("f_11324:modules_2escm"),(void*)f_11324},
{C_text("f_11331:modules_2escm"),(void*)f_11331},
{C_text("f_11360:modules_2escm"),(void*)f_11360},
{C_text("f_11363:modules_2escm"),(void*)f_11363},
{C_text("f_11370:modules_2escm"),(void*)f_11370},
{C_text("f_11382:modules_2escm"),(void*)f_11382},
{C_text("f_11417:modules_2escm"),(void*)f_11417},
{C_text("f_11424:modules_2escm"),(void*)f_11424},
{C_text("f_11436:modules_2escm"),(void*)f_11436},
{C_text("f_11471:modules_2escm"),(void*)f_11471},
{C_text("f_11478:modules_2escm"),(void*)f_11478},
{C_text("f_11490:modules_2escm"),(void*)f_11490},
{C_text("f_11525:modules_2escm"),(void*)f_11525},
{C_text("f_11532:modules_2escm"),(void*)f_11532},
{C_text("f_11544:modules_2escm"),(void*)f_11544},
{C_text("f_11579:modules_2escm"),(void*)f_11579},
{C_text("f_11586:modules_2escm"),(void*)f_11586},
{C_text("f_11598:modules_2escm"),(void*)f_11598},
{C_text("f_11633:modules_2escm"),(void*)f_11633},
{C_text("f_11640:modules_2escm"),(void*)f_11640},
{C_text("f_11652:modules_2escm"),(void*)f_11652},
{C_text("f_11687:modules_2escm"),(void*)f_11687},
{C_text("f_11694:modules_2escm"),(void*)f_11694},
{C_text("f_11706:modules_2escm"),(void*)f_11706},
{C_text("f_11741:modules_2escm"),(void*)f_11741},
{C_text("f_11748:modules_2escm"),(void*)f_11748},
{C_text("f_11760:modules_2escm"),(void*)f_11760},
{C_text("f_11795:modules_2escm"),(void*)f_11795},
{C_text("f_11802:modules_2escm"),(void*)f_11802},
{C_text("f_11814:modules_2escm"),(void*)f_11814},
{C_text("f_11849:modules_2escm"),(void*)f_11849},
{C_text("f_11856:modules_2escm"),(void*)f_11856},
{C_text("f_11868:modules_2escm"),(void*)f_11868},
{C_text("f_11903:modules_2escm"),(void*)f_11903},
{C_text("f_11910:modules_2escm"),(void*)f_11910},
{C_text("f_11922:modules_2escm"),(void*)f_11922},
{C_text("f_11957:modules_2escm"),(void*)f_11957},
{C_text("f_11964:modules_2escm"),(void*)f_11964},
{C_text("f_11976:modules_2escm"),(void*)f_11976},
{C_text("f_12011:modules_2escm"),(void*)f_12011},
{C_text("f_12018:modules_2escm"),(void*)f_12018},
{C_text("f_12030:modules_2escm"),(void*)f_12030},
{C_text("f_12065:modules_2escm"),(void*)f_12065},
{C_text("f_12069:modules_2escm"),(void*)f_12069},
{C_text("f_12073:modules_2escm"),(void*)f_12073},
{C_text("f_4240:modules_2escm"),(void*)f_4240},
{C_text("f_4243:modules_2escm"),(void*)f_4243},
{C_text("f_4246:modules_2escm"),(void*)f_4246},
{C_text("f_4249:modules_2escm"),(void*)f_4249},
{C_text("f_4252:modules_2escm"),(void*)f_4252},
{C_text("f_4255:modules_2escm"),(void*)f_4255},
{C_text("f_4746:modules_2escm"),(void*)f_4746},
{C_text("f_4752:modules_2escm"),(void*)f_4752},
{C_text("f_4765:modules_2escm"),(void*)f_4765},
{C_text("f_4779:modules_2escm"),(void*)f_4779},
{C_text("f_4827:modules_2escm"),(void*)f_4827},
{C_text("f_4841:modules_2escm"),(void*)f_4841},
{C_text("f_4854:modules_2escm"),(void*)f_4854},
{C_text("f_4910:modules_2escm"),(void*)f_4910},
{C_text("f_4919:modules_2escm"),(void*)f_4919},
{C_text("f_4927:modules_2escm"),(void*)f_4927},
{C_text("f_4931:modules_2escm"),(void*)f_4931},
{C_text("f_4935:modules_2escm"),(void*)f_4935},
{C_text("f_4953:modules_2escm"),(void*)f_4953},
{C_text("f_5537:modules_2escm"),(void*)f_5537},
{C_text("f_5541:modules_2escm"),(void*)f_5541},
{C_text("f_5556:modules_2escm"),(void*)f_5556},
{C_text("f_5646:modules_2escm"),(void*)f_5646},
{C_text("f_5655:modules_2escm"),(void*)f_5655},
{C_text("f_5791:modules_2escm"),(void*)f_5791},
{C_text("f_5815:modules_2escm"),(void*)f_5815},
{C_text("f_5831:modules_2escm"),(void*)f_5831},
{C_text("f_5833:modules_2escm"),(void*)f_5833},
{C_text("f_5837:modules_2escm"),(void*)f_5837},
{C_text("f_5842:modules_2escm"),(void*)f_5842},
{C_text("f_5846:modules_2escm"),(void*)f_5846},
{C_text("f_5850:modules_2escm"),(void*)f_5850},
{C_text("f_5853:modules_2escm"),(void*)f_5853},
{C_text("f_5859:modules_2escm"),(void*)f_5859},
{C_text("f_5865:modules_2escm"),(void*)f_5865},
{C_text("f_5869:modules_2escm"),(void*)f_5869},
{C_text("f_5872:modules_2escm"),(void*)f_5872},
{C_text("f_5896:modules_2escm"),(void*)f_5896},
{C_text("f_5900:modules_2escm"),(void*)f_5900},
{C_text("f_5902:modules_2escm"),(void*)f_5902},
{C_text("f_5936:modules_2escm"),(void*)f_5936},
{C_text("f_5944:modules_2escm"),(void*)f_5944},
{C_text("f_5946:modules_2escm"),(void*)f_5946},
{C_text("f_5954:modules_2escm"),(void*)f_5954},
{C_text("f_5981:modules_2escm"),(void*)f_5981},
{C_text("f_5983:modules_2escm"),(void*)f_5983},
{C_text("f_6037:modules_2escm"),(void*)f_6037},
{C_text("f_6044:modules_2escm"),(void*)f_6044},
{C_text("f_6047:modules_2escm"),(void*)f_6047},
{C_text("f_6050:modules_2escm"),(void*)f_6050},
{C_text("f_6053:modules_2escm"),(void*)f_6053},
{C_text("f_6059:modules_2escm"),(void*)f_6059},
{C_text("f_6072:modules_2escm"),(void*)f_6072},
{C_text("f_6084:modules_2escm"),(void*)f_6084},
{C_text("f_6088:modules_2escm"),(void*)f_6088},
{C_text("f_6090:modules_2escm"),(void*)f_6090},
{C_text("f_6106:modules_2escm"),(void*)f_6106},
{C_text("f_6107:modules_2escm"),(void*)f_6107},
{C_text("f_6115:modules_2escm"),(void*)f_6115},
{C_text("f_6129:modules_2escm"),(void*)f_6129},
{C_text("f_6132:modules_2escm"),(void*)f_6132},
{C_text("f_6139:modules_2escm"),(void*)f_6139},
{C_text("f_6143:modules_2escm"),(void*)f_6143},
{C_text("f_6149:modules_2escm"),(void*)f_6149},
{C_text("f_6177:modules_2escm"),(void*)f_6177},
{C_text("f_6179:modules_2escm"),(void*)f_6179},
{C_text("f_6182:modules_2escm"),(void*)f_6182},
{C_text("f_6186:modules_2escm"),(void*)f_6186},
{C_text("f_6202:modules_2escm"),(void*)f_6202},
{C_text("f_6209:modules_2escm"),(void*)f_6209},
{C_text("f_6223:modules_2escm"),(void*)f_6223},
{C_text("f_6233:modules_2escm"),(void*)f_6233},
{C_text("f_6236:modules_2escm"),(void*)f_6236},
{C_text("f_6239:modules_2escm"),(void*)f_6239},
{C_text("f_6245:modules_2escm"),(void*)f_6245},
{C_text("f_6248:modules_2escm"),(void*)f_6248},
{C_text("f_6251:modules_2escm"),(void*)f_6251},
{C_text("f_6284:modules_2escm"),(void*)f_6284},
{C_text("f_6288:modules_2escm"),(void*)f_6288},
{C_text("f_6295:modules_2escm"),(void*)f_6295},
{C_text("f_6299:modules_2escm"),(void*)f_6299},
{C_text("f_6312:modules_2escm"),(void*)f_6312},
{C_text("f_6322:modules_2escm"),(void*)f_6322},
{C_text("f_6325:modules_2escm"),(void*)f_6325},
{C_text("f_6331:modules_2escm"),(void*)f_6331},
{C_text("f_6334:modules_2escm"),(void*)f_6334},
{C_text("f_6340:modules_2escm"),(void*)f_6340},
{C_text("f_6374:modules_2escm"),(void*)f_6374},
{C_text("f_6378:modules_2escm"),(void*)f_6378},
{C_text("f_6393:modules_2escm"),(void*)f_6393},
{C_text("f_6404:modules_2escm"),(void*)f_6404},
{C_text("f_6410:modules_2escm"),(void*)f_6410},
{C_text("f_6427:modules_2escm"),(void*)f_6427},
{C_text("f_6434:modules_2escm"),(void*)f_6434},
{C_text("f_6441:modules_2escm"),(void*)f_6441},
{C_text("f_6486:modules_2escm"),(void*)f_6486},
{C_text("f_6592:modules_2escm"),(void*)f_6592},
{C_text("f_6600:modules_2escm"),(void*)f_6600},
{C_text("f_6604:modules_2escm"),(void*)f_6604},
{C_text("f_6615:modules_2escm"),(void*)f_6615},
{C_text("f_6642:modules_2escm"),(void*)f_6642},
{C_text("f_6665:modules_2escm"),(void*)f_6665},
{C_text("f_6679:modules_2escm"),(void*)f_6679},
{C_text("f_6704:modules_2escm"),(void*)f_6704},
{C_text("f_6719:modules_2escm"),(void*)f_6719},
{C_text("f_6737:modules_2escm"),(void*)f_6737},
{C_text("f_6748:modules_2escm"),(void*)f_6748},
{C_text("f_6767:modules_2escm"),(void*)f_6767},
{C_text("f_6780:modules_2escm"),(void*)f_6780},
{C_text("f_6790:modules_2escm"),(void*)f_6790},
{C_text("f_6796:modules_2escm"),(void*)f_6796},
{C_text("f_6800:modules_2escm"),(void*)f_6800},
{C_text("f_6803:modules_2escm"),(void*)f_6803},
{C_text("f_6814:modules_2escm"),(void*)f_6814},
{C_text("f_6842:modules_2escm"),(void*)f_6842},
{C_text("f_6856:modules_2escm"),(void*)f_6856},
{C_text("f_6861:modules_2escm"),(void*)f_6861},
{C_text("f_6871:modules_2escm"),(void*)f_6871},
{C_text("f_6889:modules_2escm"),(void*)f_6889},
{C_text("f_6911:modules_2escm"),(void*)f_6911},
{C_text("f_6919:modules_2escm"),(void*)f_6919},
{C_text("f_6953:modules_2escm"),(void*)f_6953},
{C_text("f_6964:modules_2escm"),(void*)f_6964},
{C_text("f_6972:modules_2escm"),(void*)f_6972},
{C_text("f_7006:modules_2escm"),(void*)f_7006},
{C_text("f_7012:modules_2escm"),(void*)f_7012},
{C_text("f_7018:modules_2escm"),(void*)f_7018},
{C_text("f_7028:modules_2escm"),(void*)f_7028},
{C_text("f_7063:modules_2escm"),(void*)f_7063},
{C_text("f_7067:modules_2escm"),(void*)f_7067},
{C_text("f_7071:modules_2escm"),(void*)f_7071},
{C_text("f_7075:modules_2escm"),(void*)f_7075},
{C_text("f_7079:modules_2escm"),(void*)f_7079},
{C_text("f_7083:modules_2escm"),(void*)f_7083},
{C_text("f_7087:modules_2escm"),(void*)f_7087},
{C_text("f_7091:modules_2escm"),(void*)f_7091},
{C_text("f_7123:modules_2escm"),(void*)f_7123},
{C_text("f_7127:modules_2escm"),(void*)f_7127},
{C_text("f_7139:modules_2escm"),(void*)f_7139},
{C_text("f_7171:modules_2escm"),(void*)f_7171},
{C_text("f_7181:modules_2escm"),(void*)f_7181},
{C_text("f_7196:modules_2escm"),(void*)f_7196},
{C_text("f_7220:modules_2escm"),(void*)f_7220},
{C_text("f_7236:modules_2escm"),(void*)f_7236},
{C_text("f_7238:modules_2escm"),(void*)f_7238},
{C_text("f_7263:modules_2escm"),(void*)f_7263},
{C_text("f_7325:modules_2escm"),(void*)f_7325},
{C_text("f_7327:modules_2escm"),(void*)f_7327},
{C_text("f_7352:modules_2escm"),(void*)f_7352},
{C_text("f_7382:modules_2escm"),(void*)f_7382},
{C_text("f_7403:modules_2escm"),(void*)f_7403},
{C_text("f_7431:modules_2escm"),(void*)f_7431},
{C_text("f_7440:modules_2escm"),(void*)f_7440},
{C_text("f_7457:modules_2escm"),(void*)f_7457},
{C_text("f_7487:modules_2escm"),(void*)f_7487},
{C_text("f_7490:modules_2escm"),(void*)f_7490},
{C_text("f_7493:modules_2escm"),(void*)f_7493},
{C_text("f_7509:modules_2escm"),(void*)f_7509},
{C_text("f_7519:modules_2escm"),(void*)f_7519},
{C_text("f_7525:modules_2escm"),(void*)f_7525},
{C_text("f_7526:modules_2escm"),(void*)f_7526},
{C_text("f_7538:modules_2escm"),(void*)f_7538},
{C_text("f_7551:modules_2escm"),(void*)f_7551},
{C_text("f_7552:modules_2escm"),(void*)f_7552},
{C_text("f_7564:modules_2escm"),(void*)f_7564},
{C_text("f_7577:modules_2escm"),(void*)f_7577},
{C_text("f_7580:modules_2escm"),(void*)f_7580},
{C_text("f_7596:modules_2escm"),(void*)f_7596},
{C_text("f_7600:modules_2escm"),(void*)f_7600},
{C_text("f_7604:modules_2escm"),(void*)f_7604},
{C_text("f_7606:modules_2escm"),(void*)f_7606},
{C_text("f_7616:modules_2escm"),(void*)f_7616},
{C_text("f_7629:modules_2escm"),(void*)f_7629},
{C_text("f_7639:modules_2escm"),(void*)f_7639},
{C_text("f_7663:modules_2escm"),(void*)f_7663},
{C_text("f_7667:modules_2escm"),(void*)f_7667},
{C_text("f_7682:modules_2escm"),(void*)f_7682},
{C_text("f_7684:modules_2escm"),(void*)f_7684},
{C_text("f_7718:modules_2escm"),(void*)f_7718},
{C_text("f_7730:modules_2escm"),(void*)f_7730},
{C_text("f_7748:modules_2escm"),(void*)f_7748},
{C_text("f_7764:modules_2escm"),(void*)f_7764},
{C_text("f_7771:modules_2escm"),(void*)f_7771},
{C_text("f_7777:modules_2escm"),(void*)f_7777},
{C_text("f_7793:modules_2escm"),(void*)f_7793},
{C_text("f_7797:modules_2escm"),(void*)f_7797},
{C_text("f_7801:modules_2escm"),(void*)f_7801},
{C_text("f_7814:modules_2escm"),(void*)f_7814},
{C_text("f_7836:modules_2escm"),(void*)f_7836},
{C_text("f_7838:modules_2escm"),(void*)f_7838},
{C_text("f_7863:modules_2escm"),(void*)f_7863},
{C_text("f_7878:modules_2escm"),(void*)f_7878},
{C_text("f_7893:modules_2escm"),(void*)f_7893},
{C_text("f_7904:modules_2escm"),(void*)f_7904},
{C_text("f_7906:modules_2escm"),(void*)f_7906},
{C_text("f_7971:modules_2escm"),(void*)f_7971},
{C_text("f_7977:modules_2escm"),(void*)f_7977},
{C_text("f_7981:modules_2escm"),(void*)f_7981},
{C_text("f_7987:modules_2escm"),(void*)f_7987},
{C_text("f_7990:modules_2escm"),(void*)f_7990},
{C_text("f_7993:modules_2escm"),(void*)f_7993},
{C_text("f_7996:modules_2escm"),(void*)f_7996},
{C_text("f_7997:modules_2escm"),(void*)f_7997},
{C_text("f_8004:modules_2escm"),(void*)f_8004},
{C_text("f_8007:modules_2escm"),(void*)f_8007},
{C_text("f_8010:modules_2escm"),(void*)f_8010},
{C_text("f_8011:modules_2escm"),(void*)f_8011},
{C_text("f_8014:modules_2escm"),(void*)f_8014},
{C_text("f_8018:modules_2escm"),(void*)f_8018},
{C_text("f_8044:modules_2escm"),(void*)f_8044},
{C_text("f_8050:modules_2escm"),(void*)f_8050},
{C_text("f_8054:modules_2escm"),(void*)f_8054},
{C_text("f_8058:modules_2escm"),(void*)f_8058},
{C_text("f_8064:modules_2escm"),(void*)f_8064},
{C_text("f_8067:modules_2escm"),(void*)f_8067},
{C_text("f_8070:modules_2escm"),(void*)f_8070},
{C_text("f_8073:modules_2escm"),(void*)f_8073},
{C_text("f_8080:modules_2escm"),(void*)f_8080},
{C_text("f_8096:modules_2escm"),(void*)f_8096},
{C_text("f_8102:modules_2escm"),(void*)f_8102},
{C_text("f_8105:modules_2escm"),(void*)f_8105},
{C_text("f_8112:modules_2escm"),(void*)f_8112},
{C_text("f_8119:modules_2escm"),(void*)f_8119},
{C_text("f_8125:modules_2escm"),(void*)f_8125},
{C_text("f_8128:modules_2escm"),(void*)f_8128},
{C_text("f_8131:modules_2escm"),(void*)f_8131},
{C_text("f_8149:modules_2escm"),(void*)f_8149},
{C_text("f_8152:modules_2escm"),(void*)f_8152},
{C_text("f_8170:modules_2escm"),(void*)f_8170},
{C_text("f_8182:modules_2escm"),(void*)f_8182},
{C_text("f_8185:modules_2escm"),(void*)f_8185},
{C_text("f_8192:modules_2escm"),(void*)f_8192},
{C_text("f_8198:modules_2escm"),(void*)f_8198},
{C_text("f_8199:modules_2escm"),(void*)f_8199},
{C_text("f_8206:modules_2escm"),(void*)f_8206},
{C_text("f_8218:modules_2escm"),(void*)f_8218},
{C_text("f_8228:modules_2escm"),(void*)f_8228},
{C_text("f_8246:modules_2escm"),(void*)f_8246},
{C_text("f_8256:modules_2escm"),(void*)f_8256},
{C_text("f_8276:modules_2escm"),(void*)f_8276},
{C_text("f_8283:modules_2escm"),(void*)f_8283},
{C_text("f_8285:modules_2escm"),(void*)f_8285},
{C_text("f_8295:modules_2escm"),(void*)f_8295},
{C_text("f_8310:modules_2escm"),(void*)f_8310},
{C_text("f_8312:modules_2escm"),(void*)f_8312},
{C_text("f_8342:modules_2escm"),(void*)f_8342},
{C_text("f_8354:modules_2escm"),(void*)f_8354},
{C_text("f_8357:modules_2escm"),(void*)f_8357},
{C_text("f_8360:modules_2escm"),(void*)f_8360},
{C_text("f_8381:modules_2escm"),(void*)f_8381},
{C_text("f_8383:modules_2escm"),(void*)f_8383},
{C_text("f_8447:modules_2escm"),(void*)f_8447},
{C_text("f_8456:modules_2escm"),(void*)f_8456},
{C_text("f_8459:modules_2escm"),(void*)f_8459},
{C_text("f_8462:modules_2escm"),(void*)f_8462},
{C_text("f_8463:modules_2escm"),(void*)f_8463},
{C_text("f_8481:modules_2escm"),(void*)f_8481},
{C_text("f_8487:modules_2escm"),(void*)f_8487},
{C_text("f_8490:modules_2escm"),(void*)f_8490},
{C_text("f_8493:modules_2escm"),(void*)f_8493},
{C_text("f_8521:modules_2escm"),(void*)f_8521},
{C_text("f_8528:modules_2escm"),(void*)f_8528},
{C_text("f_8534:modules_2escm"),(void*)f_8534},
{C_text("f_8537:modules_2escm"),(void*)f_8537},
{C_text("f_8538:modules_2escm"),(void*)f_8538},
{C_text("f_8542:modules_2escm"),(void*)f_8542},
{C_text("f_8560:modules_2escm"),(void*)f_8560},
{C_text("f_8566:modules_2escm"),(void*)f_8566},
{C_text("f_8569:modules_2escm"),(void*)f_8569},
{C_text("f_8572:modules_2escm"),(void*)f_8572},
{C_text("f_8583:modules_2escm"),(void*)f_8583},
{C_text("f_8587:modules_2escm"),(void*)f_8587},
{C_text("f_8591:modules_2escm"),(void*)f_8591},
{C_text("f_8595:modules_2escm"),(void*)f_8595},
{C_text("f_8601:modules_2escm"),(void*)f_8601},
{C_text("f_8611:modules_2escm"),(void*)f_8611},
{C_text("f_8626:modules_2escm"),(void*)f_8626},
{C_text("f_8630:modules_2escm"),(void*)f_8630},
{C_text("f_8632:modules_2escm"),(void*)f_8632},
{C_text("f_8642:modules_2escm"),(void*)f_8642},
{C_text("f_8657:modules_2escm"),(void*)f_8657},
{C_text("f_8675:modules_2escm"),(void*)f_8675},
{C_text("f_8702:modules_2escm"),(void*)f_8702},
{C_text("f_8737:modules_2escm"),(void*)f_8737},
{C_text("f_8746:modules_2escm"),(void*)f_8746},
{C_text("f_8757:modules_2escm"),(void*)f_8757},
{C_text("f_8761:modules_2escm"),(void*)f_8761},
{C_text("f_8764:modules_2escm"),(void*)f_8764},
{C_text("f_8772:modules_2escm"),(void*)f_8772},
{C_text("f_8793:modules_2escm"),(void*)f_8793},
{C_text("f_8797:modules_2escm"),(void*)f_8797},
{C_text("f_8805:modules_2escm"),(void*)f_8805},
{C_text("f_8809:modules_2escm"),(void*)f_8809},
{C_text("f_8825:modules_2escm"),(void*)f_8825},
{C_text("f_8829:modules_2escm"),(void*)f_8829},
{C_text("f_8843:modules_2escm"),(void*)f_8843},
{C_text("f_8876:modules_2escm"),(void*)f_8876},
{C_text("f_8878:modules_2escm"),(void*)f_8878},
{C_text("f_8891:modules_2escm"),(void*)f_8891},
{C_text("f_8900:modules_2escm"),(void*)f_8900},
{C_text("f_8913:modules_2escm"),(void*)f_8913},
{C_text("f_8949:modules_2escm"),(void*)f_8949},
{C_text("f_8956:modules_2escm"),(void*)f_8956},
{C_text("f_8960:modules_2escm"),(void*)f_8960},
{C_text("f_8963:modules_2escm"),(void*)f_8963},
{C_text("f_8968:modules_2escm"),(void*)f_8968},
{C_text("f_8972:modules_2escm"),(void*)f_8972},
{C_text("f_8975:modules_2escm"),(void*)f_8975},
{C_text("f_8978:modules_2escm"),(void*)f_8978},
{C_text("f_8981:modules_2escm"),(void*)f_8981},
{C_text("f_8985:modules_2escm"),(void*)f_8985},
{C_text("f_8989:modules_2escm"),(void*)f_8989},
{C_text("f_8993:modules_2escm"),(void*)f_8993},
{C_text("f_8997:modules_2escm"),(void*)f_8997},
{C_text("f_9000:modules_2escm"),(void*)f_9000},
{C_text("f_9003:modules_2escm"),(void*)f_9003},
{C_text("f_9006:modules_2escm"),(void*)f_9006},
{C_text("f_9009:modules_2escm"),(void*)f_9009},
{C_text("f_9024:modules_2escm"),(void*)f_9024},
{C_text("f_9030:modules_2escm"),(void*)f_9030},
{C_text("f_9034:modules_2escm"),(void*)f_9034},
{C_text("f_9037:modules_2escm"),(void*)f_9037},
{C_text("f_9040:modules_2escm"),(void*)f_9040},
{C_text("f_9043:modules_2escm"),(void*)f_9043},
{C_text("f_9046:modules_2escm"),(void*)f_9046},
{C_text("f_9049:modules_2escm"),(void*)f_9049},
{C_text("f_9052:modules_2escm"),(void*)f_9052},
{C_text("f_9055:modules_2escm"),(void*)f_9055},
{C_text("f_9061:modules_2escm"),(void*)f_9061},
{C_text("f_9065:modules_2escm"),(void*)f_9065},
{C_text("f_9073:modules_2escm"),(void*)f_9073},
{C_text("f_9079:modules_2escm"),(void*)f_9079},
{C_text("f_9084:modules_2escm"),(void*)f_9084},
{C_text("f_9088:modules_2escm"),(void*)f_9088},
{C_text("f_9093:modules_2escm"),(void*)f_9093},
{C_text("f_9100:modules_2escm"),(void*)f_9100},
{C_text("f_9104:modules_2escm"),(void*)f_9104},
{C_text("f_9107:modules_2escm"),(void*)f_9107},
{C_text("f_9111:modules_2escm"),(void*)f_9111},
{C_text("f_9114:modules_2escm"),(void*)f_9114},
{C_text("f_9122:modules_2escm"),(void*)f_9122},
{C_text("f_9126:modules_2escm"),(void*)f_9126},
{C_text("f_9129:modules_2escm"),(void*)f_9129},
{C_text("f_9132:modules_2escm"),(void*)f_9132},
{C_text("f_9135:modules_2escm"),(void*)f_9135},
{C_text("f_9137:modules_2escm"),(void*)f_9137},
{C_text("f_9145:modules_2escm"),(void*)f_9145},
{C_text("f_9149:modules_2escm"),(void*)f_9149},
{C_text("f_9151:modules_2escm"),(void*)f_9151},
{C_text("f_9164:modules_2escm"),(void*)f_9164},
{C_text("f_9171:modules_2escm"),(void*)f_9171},
{C_text("f_9198:modules_2escm"),(void*)f_9198},
{C_text("f_9201:modules_2escm"),(void*)f_9201},
{C_text("f_9205:modules_2escm"),(void*)f_9205},
{C_text("f_9208:modules_2escm"),(void*)f_9208},
{C_text("f_9249:modules_2escm"),(void*)f_9249},
{C_text("f_9263:modules_2escm"),(void*)f_9263},
{C_text("f_9281:modules_2escm"),(void*)f_9281},
{C_text("f_9284:modules_2escm"),(void*)f_9284},
{C_text("f_9289:modules_2escm"),(void*)f_9289},
{C_text("f_9299:modules_2escm"),(void*)f_9299},
{C_text("f_9303:modules_2escm"),(void*)f_9303},
{C_text("f_9308:modules_2escm"),(void*)f_9308},
{C_text("f_9316:modules_2escm"),(void*)f_9316},
{C_text("f_9326:modules_2escm"),(void*)f_9326},
{C_text("f_9339:modules_2escm"),(void*)f_9339},
{C_text("f_9349:modules_2escm"),(void*)f_9349},
{C_text("f_9367:modules_2escm"),(void*)f_9367},
{C_text("f_9389:modules_2escm"),(void*)f_9389},
{C_text("f_9431:modules_2escm"),(void*)f_9431},
{C_text("f_9434:modules_2escm"),(void*)f_9434},
{C_text("f_9439:modules_2escm"),(void*)f_9439},
{C_text("f_9449:modules_2escm"),(void*)f_9449},
{C_text("f_9453:modules_2escm"),(void*)f_9453},
{C_text("f_9458:modules_2escm"),(void*)f_9458},
{C_text("f_9470:modules_2escm"),(void*)f_9470},
{C_text("f_9478:modules_2escm"),(void*)f_9478},
{C_text("f_9488:modules_2escm"),(void*)f_9488},
{C_text("f_9501:modules_2escm"),(void*)f_9501},
{C_text("f_9511:modules_2escm"),(void*)f_9511},
{C_text("f_9529:modules_2escm"),(void*)f_9529},
{C_text("f_9541:modules_2escm"),(void*)f_9541},
{C_text("f_9570:modules_2escm"),(void*)f_9570},
{C_text("f_9582:modules_2escm"),(void*)f_9582},
{C_text("f_9614:modules_2escm"),(void*)f_9614},
{C_text("f_9617:modules_2escm"),(void*)f_9617},
{C_text("f_9622:modules_2escm"),(void*)f_9622},
{C_text("f_9632:modules_2escm"),(void*)f_9632},
{C_text("f_9636:modules_2escm"),(void*)f_9636},
{C_text("f_9641:modules_2escm"),(void*)f_9641},
{C_text("f_9653:modules_2escm"),(void*)f_9653},
{C_text("f_9661:modules_2escm"),(void*)f_9661},
{C_text("f_9674:modules_2escm"),(void*)f_9674},
{C_text("f_9680:modules_2escm"),(void*)f_9680},
{C_text("f_9693:modules_2escm"),(void*)f_9693},
{C_text("f_9703:modules_2escm"),(void*)f_9703},
{C_text("f_9716:modules_2escm"),(void*)f_9716},
{C_text("f_9755:modules_2escm"),(void*)f_9755},
{C_text("f_9771:modules_2escm"),(void*)f_9771},
{C_text("f_9808:modules_2escm"),(void*)f_9808},
{C_text("f_9824:modules_2escm"),(void*)f_9824},
{C_text("f_9864:modules_2escm"),(void*)f_9864},
{C_text("f_9867:modules_2escm"),(void*)f_9867},
{C_text("f_9872:modules_2escm"),(void*)f_9872},
{C_text("f_9882:modules_2escm"),(void*)f_9882},
{C_text("f_9886:modules_2escm"),(void*)f_9886},
{C_text("f_9888:modules_2escm"),(void*)f_9888},
{C_text("f_9896:modules_2escm"),(void*)f_9896},
{C_text("f_9902:modules_2escm"),(void*)f_9902},
{C_text("f_9906:modules_2escm"),(void*)f_9906},
{C_text("f_9910:modules_2escm"),(void*)f_9910},
{C_text("f_9931:modules_2escm"),(void*)f_9931},
{C_text("f_9941:modules_2escm"),(void*)f_9941},
{C_text("f_9943:modules_2escm"),(void*)f_9943},
{C_text("f_9968:modules_2escm"),(void*)f_9968},
{C_text("f_9977:modules_2escm"),(void*)f_9977},
{C_text("toplevel:modules_2escm"),(void*)C_modules_toplevel},
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
S|  chicken.format#format		3
S|  chicken.format#fprintf		8
S|  scheme#for-each		16
S|  chicken.base#foldl		3
S|  scheme#map		34
S|  chicken.base#foldr		3
o|eliminated procedure checks: 486 
o|specializations:
o|  1 (scheme#cddr (pair * pair))
o|  1 (scheme#number->string *)
o|  2 (scheme#string-append string string)
o|  3 (scheme#= fixnum fixnum)
o|  1 (scheme#length list)
o|  11 (##sys#check-output-port * * *)
o|  2 (scheme#cdar (pair pair *))
o|  1 (scheme#caar (pair pair *))
o|  1 (null (not null))
o|  1 (scheme#eqv? * *)
o|  10 (##sys#check-list (or pair list) *)
o|  72 (scheme#cdr pair)
o|  36 (scheme#car pair)
(o e)|safe calls: 1163 
(o e)|dropped branches: 3 
(o e)|assignments to immediate values: 1 
o|safe globals: (posv posq make-list iota find-tail find length+ lset=/eq? lset<=/eq? list-tabulate lset-intersection/eq? lset-union/eq? lset-difference/eq? lset-adjoin/eq? list-index last unzip1 remove filter-map filter alist-cons delete-duplicates fifth fourth third second first delete concatenate cons* any every append-map split-at drop take span partition) 
o|removed side-effect free assignment to unused variable: partition 
o|removed side-effect free assignment to unused variable: span 
o|removed side-effect free assignment to unused variable: drop 
o|removed side-effect free assignment to unused variable: split-at 
o|removed side-effect free assignment to unused variable: append-map 
o|inlining procedure: k4637 
o|inlining procedure: k4637 
o|inlining procedure: k4668 
o|inlining procedure: k4668 
o|removed side-effect free assignment to unused variable: cons* 
o|removed side-effect free assignment to unused variable: concatenate 
o|inlining procedure: k4754 
o|inlining procedure: k4754 
o|removed side-effect free assignment to unused variable: first 
o|removed side-effect free assignment to unused variable: second 
o|removed side-effect free assignment to unused variable: third 
o|removed side-effect free assignment to unused variable: fourth 
o|removed side-effect free assignment to unused variable: fifth 
o|removed side-effect free assignment to unused variable: alist-cons 
o|inlining procedure: k4885 
o|inlining procedure: k4885 
o|inlining procedure: k4877 
o|inlining procedure: k4877 
o|inlining procedure: k4932 
o|inlining procedure: k4932 
o|inlining procedure: k4921 
o|inlining procedure: k4921 
o|removed side-effect free assignment to unused variable: remove 
o|removed side-effect free assignment to unused variable: unzip1 
o|removed side-effect free assignment to unused variable: last 
o|removed side-effect free assignment to unused variable: list-index 
o|removed side-effect free assignment to unused variable: lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: lset-difference/eq? 
o|removed side-effect free assignment to unused variable: lset-union/eq? 
o|removed side-effect free assignment to unused variable: lset-intersection/eq? 
o|inlining procedure: k5276 
o|inlining procedure: k5276 
o|removed side-effect free assignment to unused variable: lset<=/eq? 
o|removed side-effect free assignment to unused variable: lset=/eq? 
o|removed side-effect free assignment to unused variable: length+ 
o|removed side-effect free assignment to unused variable: find 
o|removed side-effect free assignment to unused variable: find-tail 
o|removed side-effect free assignment to unused variable: iota 
o|removed side-effect free assignment to unused variable: make-list 
o|removed side-effect free assignment to unused variable: posq 
o|removed side-effect free assignment to unused variable: posv 
o|removed side-effect free assignment to unused variable: module? 
o|contracted procedure: "(modules.scm:125) %make-module" 
o|inlining procedure: k5904 
o|contracted procedure: "(modules.scm:134) g930939" 
o|inlining procedure: k5904 
o|inlining procedure: k5959 
o|inlining procedure: k5959 
o|inlining procedure: k5951 
o|inlining procedure: k5951 
o|inlining procedure: k6000 
o|inlining procedure: k6000 
o|inlining procedure: k6051 
o|inlining procedure: k6051 
o|inlining procedure: k6112 
o|inlining procedure: k6112 
o|inlining procedure: k6095 
o|inlining procedure: k6151 
o|inlining procedure: k6151 
o|inlining procedure: k6095 
o|inlining procedure: k6187 
o|contracted procedure: "(modules.scm:188) set-module-meta-expressions!" 
o|inlining procedure: k6187 
o|inlining procedure: k6213 
o|inlining procedure: k6213 
o|inlining procedure: k6225 
o|inlining procedure: k6225 
o|inlining procedure: k6314 
o|inlining procedure: k6314 
o|inlining procedure: k6395 
o|inlining procedure: k6395 
o|merged explicitly consed rest parameter: ses*1194 
o|inlining procedure: k6816 
o|inlining procedure: k6816 
o|inlining procedure: k6836 
o|inlining procedure: k6863 
o|inlining procedure: k6863 
o|inlining procedure: k6836 
o|inlining procedure: k6891 
o|inlining procedure: k6891 
o|inlining procedure: k7125 
o|inlining procedure: k7125 
o|inlining procedure: k7141 
o|inlining procedure: k7141 
o|inlining procedure: k7204 
o|inlining procedure: k7204 
o|inlining procedure: k7240 
o|inlining procedure: k7240 
o|inlining procedure: k7329 
o|contracted procedure: "(modules.scm:347) g13101319" 
o|inlining procedure: k7281 
o|inlining procedure: k7281 
o|inlining procedure: k7329 
o|contracted procedure: "(modules.scm:340) g12981299" 
o|contracted procedure: "(modules.scm:332) compiled-module-dependencies" 
o|inlining procedure: k6974 
o|contracted procedure: "(modules.scm:320) g12521261" 
o|inlining procedure: k6974 
o|contracted procedure: "(modules.scm:321) delete-duplicates" 
o|inlining procedure: k4829 
o|inlining procedure: k4829 
o|inlining procedure: k7447 
o|inlining procedure: k7447 
o|consed rest parameter at call site: "(modules.scm:409) merge-se" 1 
o|inlining procedure: k7543 
o|consed rest parameter at call site: "(modules.scm:409) merge-se" 1 
o|inlining procedure: k7543 
o|consed rest parameter at call site: "(modules.scm:409) merge-se" 1 
o|consed rest parameter at call site: "(modules.scm:413) merge-se" 1 
o|inlining procedure: k7569 
o|consed rest parameter at call site: "(modules.scm:413) merge-se" 1 
o|inlining procedure: k7569 
o|consed rest parameter at call site: "(modules.scm:413) merge-se" 1 
o|consed rest parameter at call site: "(modules.scm:417) merge-se" 1 
o|inlining procedure: k7608 
o|inlining procedure: k7608 
o|inlining procedure: k7631 
o|inlining procedure: k7631 
o|consed rest parameter at call site: "(modules.scm:402) merge-se" 1 
o|inlining procedure: k7686 
o|contracted procedure: "(modules.scm:396) g14231432" 
o|inlining procedure: k7686 
o|inlining procedure: k7720 
o|contracted procedure: "(modules.scm:393) find-reexport1404" 
o|inlining procedure: k7468 
o|inlining procedure: k7468 
o|inlining procedure: k7720 
o|inlining procedure: k7732 
o|inlining procedure: k7732 
o|consed rest parameter at call site: "(modules.scm:438) merge-se" 1 
o|inlining procedure: k7816 
o|inlining procedure: k7816 
o|inlining procedure: k7840 
o|inlining procedure: k7840 
o|inlining procedure: k7908 
o|inlining procedure: k7908 
o|inlining procedure: k7920 
o|inlining procedure: k7935 
o|inlining procedure: k7935 
o|inlining procedure: k7920 
o|substituted constant variable: a7983 
o|substituted constant variable: a7984 
o|substituted constant variable: a8000 
o|substituted constant variable: a8001 
o|inlining procedure: k8019 
o|inlining procedure: k8019 
o|substituted constant variable: a8034 
o|substituted constant variable: a8046 
o|substituted constant variable: a8047 
o|substituted constant variable: a8060 
o|substituted constant variable: a8061 
o|substituted constant variable: a8098 
o|substituted constant variable: a8099 
o|inlining procedure: k8088 
o|substituted constant variable: a8121 
o|substituted constant variable: a8122 
o|inlining procedure: k8088 
o|inlining procedure: k8142 
o|inlining procedure: k8142 
o|inlining procedure: k8154 
o|substituted constant variable: a8166 
o|substituted constant variable: a8167 
o|substituted constant variable: a8178 
o|substituted constant variable: a8179 
o|inlining procedure: k8171 
o|substituted constant variable: a8194 
o|substituted constant variable: a8195 
o|substituted constant variable: a8202 
o|substituted constant variable: a8203 
o|inlining procedure: k8171 
o|inlining procedure: k8220 
o|inlining procedure: k8220 
o|substituted constant variable: a8240 
o|contracted procedure: "(modules.scm:509) g17511752" 
o|inlining procedure: k8154 
o|inlining procedure: k8248 
o|inlining procedure: k8248 
o|inlining procedure: k8287 
o|inlining procedure: k8287 
o|inlining procedure: k8314 
o|inlining procedure: k8314 
o|inlining procedure: k8337 
o|substituted constant variable: a8350 
o|substituted constant variable: a8351 
o|substituted constant variable: a8365 
o|inlining procedure: k8337 
o|inlining procedure: k8385 
o|inlining procedure: k8385 
o|inlining procedure: k8465 
o|inlining procedure: k8465 
o|consed rest parameter at call site: "(modules.scm:599) merge-se" 1 
o|consed rest parameter at call site: "(modules.scm:617) merge-se" 1 
o|consed rest parameter at call site: "(modules.scm:614) merge-se" 1 
o|contracted procedure: "(modules.scm:610) set-module-vexports!" 
o|inlining procedure: k8603 
o|inlining procedure: k8603 
o|consed rest parameter at call site: "(modules.scm:593) merge-se" 1 
o|inlining procedure: k8634 
o|contracted procedure: "(modules.scm:588) g19151924" 
o|inlining procedure: k8499 
o|inlining procedure: k8499 
o|inlining procedure: k8634 
o|contracted procedure: "(modules.scm:592) module-indirect-exports" 
o|removed side-effect free assignment to unused variable: indirect?1145 
o|inlining procedure: k6605 
o|inlining procedure: k6605 
o|inlining procedure: k6617 
o|inlining procedure: k6617 
o|inlining procedure: k6644 
o|inlining procedure: k6644 
o|inlining procedure: k6702 
o|inlining procedure: k6702 
o|inlining procedure: k6676 
o|inlining procedure: k6676 
o|inlining procedure: k6721 
o|inlining procedure: k6721 
o|inlining procedure: k8677 
o|inlining procedure: k8677 
o|inlining procedure: k8704 
o|inlining procedure: k8704 
o|inlining procedure: k8744 
o|inlining procedure: k8744 
o|inlining procedure: k8785 
o|inlining procedure: k8785 
o|inlining procedure: k8813 
o|inlining procedure: k8813 
o|consed rest parameter at call site: "(modules.scm:533) merge-se" 1 
o|inlining procedure: k8880 
o|inlining procedure: k8880 
o|inlining procedure: k8915 
o|contracted procedure: "(modules.scm:529) g18271836" 
o|inlining procedure: k8915 
o|substituted constant variable: saved198219832002 
o|substituted constant variable: saved198419852003 
o|inlining procedure: k9066 
o|inlining procedure: k9066 
o|substituted constant variable: a9105 
o|inlining procedure: k9115 
o|inlining procedure: k9115 
o|inlining procedure: k9153 
o|inlining procedure: k9153 
o|inlining procedure: k9172 
o|inlining procedure: k9172 
o|inlining procedure: k9209 
o|inlining procedure: k9209 
o|inlining procedure: k9251 
o|inlining procedure: k9251 
o|inlining procedure: k9276 
o|inlining procedure: k9310 
o|inlining procedure: k9341 
o|inlining procedure: k9341 
o|inlining procedure: k9310 
o|inlining procedure: k9386 
o|inlining procedure: k9386 
o|inlining procedure: k9276 
o|inlining procedure: k9460 
o|inlining procedure: k9472 
o|inlining procedure: k9503 
o|inlining procedure: k9503 
o|inlining procedure: k9472 
o|inlining procedure: k9460 
o|inlining procedure: k9609 
o|inlining procedure: k9643 
o|inlining procedure: k9655 
o|inlining procedure: k9695 
o|inlining procedure: k9695 
o|inlining procedure: k9718 
o|inlining procedure: k9718 
o|inlining procedure: k9655 
o|inlining procedure: k9643 
o|inlining procedure: k9609 
o|inlining procedure: k9945 
o|inlining procedure: k9945 
o|inlining procedure: k9979 
o|inlining procedure: k9979 
o|inlining procedure: k10045 
o|inlining procedure: k10045 
o|inlining procedure: k10069 
o|inlining procedure: k10069 
o|inlining procedure: k10112 
o|inlining procedure: k10122 
o|inlining procedure: k10122 
o|inlining procedure: k10112 
o|inlining procedure: k10157 
o|inlining procedure: k10157 
o|consed rest parameter at call site: "(modules.scm:826) merge-se" 1 
o|consed rest parameter at call site: "(modules.scm:825) merge-se" 1 
o|consed rest parameter at call site: "(modules.scm:823) merge-se" 1 
o|inlining procedure: k10277 
o|inlining procedure: k10277 
o|inlining procedure: k10311 
o|inlining procedure: k10311 
o|inlining procedure: k10381 
o|inlining procedure: k10381 
o|inlining procedure: k10415 
o|inlining procedure: k10415 
o|inlining procedure: k10455 
o|inlining procedure: k10455 
o|inlining procedure: k10478 
o|inlining procedure: k10478 
o|inlining procedure: k10498 
o|contracted procedure: "(modules.scm:779) set-module-meta-import-forms!" 
o|inlining procedure: k10498 
o|contracted procedure: "(modules.scm:782) set-module-import-forms!" 
o|contracted procedure: "(modules.scm:841) register-undefined" 
o|inlining procedure: k6422 
o|inlining procedure: k6436 
o|inlining procedure: k6436 
o|inlining procedure: k6479 
o|inlining procedure: k6479 
o|inlining procedure: k6422 
o|inlining procedure: k10558 
o|inlining procedure: k10558 
o|inlining procedure: k10582 
o|inlining procedure: k10582 
o|inlining procedure: k10604 
o|inlining procedure: k10604 
o|contracted procedure: "(modules.scm:844) g27052706" 
o|merged explicitly consed rest parameter: args2726 
o|inlining procedure: k10640 
o|inlining procedure: k10640 
o|consed rest parameter at call site: "(modules.scm:859) err2724" 1 
o|contracted procedure: "(modules.scm:858) g27312732" 
o|inlining procedure: k10646 
o|inlining procedure: k10646 
o|inlining procedure: k10661 
o|consed rest parameter at call site: "(modules.scm:863) err2724" 1 
o|inlining procedure: k10661 
o|inlining procedure: k10676 
o|inlining procedure: k10676 
o|consed rest parameter at call site: "(modules.scm:868) err2724" 1 
o|inlining procedure: k10694 
o|inlining procedure: k10694 
o|consed rest parameter at call site: "(modules.scm:873) err2724" 1 
o|inlining procedure: k10718 
o|inlining procedure: k10718 
o|inlining procedure: k10741 
o|inlining procedure: k10741 
o|consed rest parameter at call site: "(modules.scm:879) err2724" 1 
o|inlining procedure: k10785 
o|inlining procedure: k10785 
o|consed rest parameter at call site: "(modules.scm:884) err2724" 1 
o|contracted procedure: "(modules.scm:887) g27622763" 
o|merged explicitly consed rest parameter: args2777 
o|consed rest parameter at call site: "(modules.scm:898) err2776" 1 
o|inlining procedure: k10906 
o|inlining procedure: k10906 
o|inlining procedure: k10957 
o|inlining procedure: k10957 
o|inlining procedure: k10966 
o|inlining procedure: k10978 
o|inlining procedure: k10978 
o|removed unused parameter to known procedure: alias2838 "(modules.scm:912) match-functor-argument" 
o|inlining procedure: k10966 
o|removed unused parameter to known procedure: alias2838 "(modules.scm:926) match-functor-argument" 
o|consed rest parameter at call site: "(modules.scm:893) err2776" 1 
o|contracted procedure: "(modules.scm:890) g27722773" 
o|removed unused formal parameters: (alias2838) 
o|inlining procedure: k11086 
o|inlining procedure: k11097 
o|inlining procedure: k11097 
o|inlining procedure: k11086 
o|inlining procedure: k11181 
o|contracted procedure: "(modules.scm:953) g28752884" 
o|substituted constant variable: a11167 
o|inlining procedure: k11181 
o|inlining procedure: k11215 
o|inlining procedure: k11215 
o|inlining procedure: k11332 
o|inlining procedure: k11332 
o|contracted procedure: "(modules.scm:1178) g33563357" 
o|inlining procedure: k11384 
o|inlining procedure: k11384 
o|contracted procedure: "(modules.scm:1175) g33183319" 
o|inlining procedure: k11438 
o|inlining procedure: k11438 
o|contracted procedure: "(modules.scm:1171) g32803281" 
o|inlining procedure: k11492 
o|inlining procedure: k11492 
o|contracted procedure: "(modules.scm:1165) g32423243" 
o|inlining procedure: k11546 
o|inlining procedure: k11546 
o|contracted procedure: "(modules.scm:1159) g32043205" 
o|inlining procedure: k11600 
o|inlining procedure: k11600 
o|contracted procedure: "(modules.scm:1153) g31663167" 
o|inlining procedure: k11654 
o|inlining procedure: k11654 
o|contracted procedure: "(modules.scm:1150) g31283129" 
o|inlining procedure: k11708 
o|inlining procedure: k11708 
o|contracted procedure: "(modules.scm:1147) g30903091" 
o|inlining procedure: k11762 
o|inlining procedure: k11762 
o|contracted procedure: "(modules.scm:1134) g30523053" 
o|inlining procedure: k11816 
o|inlining procedure: k11816 
o|contracted procedure: "(modules.scm:1128) g30143015" 
o|inlining procedure: k11870 
o|inlining procedure: k11870 
o|contracted procedure: "(modules.scm:1125) g29762977" 
o|inlining procedure: k11924 
o|inlining procedure: k11924 
o|contracted procedure: "(modules.scm:1116) g29382939" 
o|inlining procedure: k11978 
o|inlining procedure: k11978 
o|contracted procedure: "(modules.scm:1113) g29002901" 
o|inlining procedure: k12032 
o|inlining procedure: k12032 
o|propagated global variable: r4rs-syntax2896 ##sys#scheme-macro-environment 
o|replaced variables: 1755 
o|removed binding forms: 563 
o|removed side-effect free assignment to unused variable: every 
o|removed side-effect free assignment to unused variable: any 
o|removed side-effect free assignment to unused variable: filter 
o|substituted constant variable: r492212087 
o|removed side-effect free assignment to unused variable: list-tabulate 
o|substituted constant variable: defined-list767 
o|substituted constant variable: exist-list768 
o|substituted constant variable: defined-syntax-list769 
o|substituted constant variable: undefined-list770 
o|substituted constant variable: import-forms771 
o|substituted constant variable: meta-import-forms772 
o|substituted constant variable: meta-expressions773 
o|substituted constant variable: saved-environments777 
o|substituted constant variable: r618812115 
o|substituted constant variable: r621412117 
o|removed call to pure procedure with unused result: "(modules.scm:208) chicken.base#void" 
o|removed call to pure procedure with unused result: "(modules.scm:223) chicken.base#void" 
o|substituted constant variable: r712612132 
o|substituted constant variable: r712612132 
o|substituted constant variable: r714212136 
o|removed call to pure procedure with unused result: "(modules.scm:360) chicken.base#void" 
o|substituted constant variable: prop1301 
o|substituted constant variable: r744812151 
o|substituted constant variable: r754412154 
o|substituted constant variable: r754412154 
o|substituted constant variable: r757012158 
o|substituted constant variable: r757012158 
o|substituted constant variable: r772112169 
o|substituted constant variable: r773312171 
o|substituted constant variable: r790912176 
o|substituted constant variable: r814312187 
o|converted assignments to bindings: (ln->num1683) 
o|substituted constant variable: prop1754 
o|substituted constant variable: r815512193 
o|substituted constant variable: r833812201 
o|removed call to pure procedure with unused result: "(modules.scm:600) chicken.base#void" 
o|removed call to pure procedure with unused result: "(modules.scm:603) chicken.base#void" 
o|substituted constant variable: r660612212 
o|substituted constant variable: r661812214 
o|converted assignments to bindings: (warn1146) 
o|substituted constant variable: r870512228 
o|removed call to pure procedure with unused result: "(modules.scm:560) chicken.base#void" 
o|substituted constant variable: r888112238 
o|converted assignments to bindings: (report-unresolved-identifiers1592) 
o|substituted constant variable: r906712243 
o|converted assignments to bindings: (rename2373) 
o|converted assignments to bindings: (module-imports2076) 
o|substituted constant variable: r1012312288 
o|substituted constant variable: r1011312289 
o|substituted constant variable: r1015812291 
o|removed call to pure procedure with unused result: "(modules.scm:824) chicken.base#void" 
o|removed call to pure procedure with unused result: "(modules.scm:787) chicken.base#void" 
o|removed call to pure procedure with unused result: "(modules.scm:786) chicken.base#void" 
o|removed call to pure procedure with unused result: "(modules.scm:785) chicken.base#void" 
o|substituted constant variable: r648012311 
o|substituted constant variable: r648012311 
o|removed call to pure procedure with unused result: "(modules.scm:839) chicken.base#void" 
o|removed call to pure procedure with unused result: "(modules.scm:848) chicken.base#void" 
o|converted assignments to bindings: (mrename2690) 
o|substituted constant variable: prop2734 
o|substituted constant variable: r1067712326 
o|substituted constant variable: prop2765 
o|substituted constant variable: r1095812338 
o|substituted constant variable: r1095812338 
o|substituted constant variable: r1097912343 
o|converted assignments to bindings: (merr2784) 
o|converted assignments to bindings: (err2776) 
o|substituted constant variable: prop2775 
o|simplifications: ((let . 8)) 
o|replaced variables: 131 
o|removed binding forms: 1547 
o|contracted procedure: k6255 
o|contracted procedure: k6335 
o|contracted procedure: k7225 
o|inlining procedure: k7880 
o|inlining procedure: k8022 
o|inlining procedure: k8323 
o|inlining procedure: k8323 
o|inlining procedure: k8323 
o|inlining procedure: k8323 
o|contracted procedure: k8543 
o|contracted procedure: k8561 
o|inlining procedure: k8655 
o|inlining procedure: k8655 
o|contracted procedure: k8779 
o|contracted procedure: k10098 
o|contracted procedure: k10101 
o|contracted procedure: k10104 
o|contracted procedure: k10563 
o|inlining procedure: k10566 
o|inlining procedure: k10566 
o|contracted procedure: k10601 
o|removed binding forms: 159 
o|contracted procedure: k7370 
o|inlining procedure: k7471 
o|substituted constant variable: r788112684 
o|inlining procedure: k7932 
o|substituted constant variable: r802312687 
o|contracted procedure: k8159 
o|substituted constant variable: r832412695 
o|substituted constant variable: r832412695 
o|substituted constant variable: r832412697 
o|substituted constant variable: r832412697 
o|substituted constant variable: r832412699 
o|substituted constant variable: r832412699 
o|substituted constant variable: r832412701 
o|substituted constant variable: r832412701 
o|contracted procedure: k10587 
o|contracted procedure: k10637 
o|contracted procedure: k10859 
o|simplifications: ((let . 1)) 
o|replaced variables: 2 
o|removed binding forms: 20 
o|removed conditional forms: 5 
o|substituted constant variable: r747212843 
o|substituted constant variable: r793312846 
o|substituted constant variable: r793312846 
o|removed binding forms: 9 
o|removed conditional forms: 2 
o|removed binding forms: 2 
o|simplifications: ((if . 29) (##core#call . 785) (let . 53)) 
o|  call simplifications:
o|    scheme#list?	2
o|    scheme#set-cdr!
o|    scheme#caddr
o|    scheme#cddr	3
o|    scheme#string?
o|    scheme#number?
o|    scheme#cdar	3
o|    scheme#apply	4
o|    scheme#length	2
o|    scheme#list	7
o|    scheme#set-car!	3
o|    ##sys#call-with-values	6
o|    scheme#list-ref
o|    scheme#equal?
o|    scheme#symbol?	17
o|    ##sys#cons	19
o|    ##sys#list	23
o|    scheme#not	15
o|    scheme#caar	11
o|    scheme#eq?	24
o|    scheme#assq	42
o|    scheme#cdr	35
o|    scheme#memq	6
o|    scheme#cadr	15
o|    ##sys#setslot	31
o|    ##sys#make-structure	2
o|    scheme#values	6
o|    ##sys#check-structure	26
o|    ##sys#block-ref	14
o|    ##sys#check-list	41
o|    scheme#pair?	69
o|    ##sys#slot	129
o|    scheme#null?	39
o|    scheme#car	58
o|    scheme#cons	127
o|contracted procedure: k4757 
o|contracted procedure: k4783 
o|contracted procedure: k4912 
o|contracted procedure: k4924 
o|contracted procedure: k4947 
o|contracted procedure: k4955 
o|contracted procedure: k5558 
o|contracted procedure: k5567 
o|contracted procedure: k5576 
o|contracted procedure: k5585 
o|contracted procedure: k5594 
o|contracted procedure: k5603 
o|contracted procedure: k5612 
o|contracted procedure: k5621 
o|contracted procedure: k5630 
o|contracted procedure: k5639 
o|contracted procedure: k5648 
o|contracted procedure: k5657 
o|contracted procedure: k5666 
o|contracted procedure: k5684 
o|contracted procedure: k5702 
o|contracted procedure: k5720 
o|contracted procedure: k5738 
o|contracted procedure: k5747 
o|contracted procedure: k5756 
o|contracted procedure: k5765 
o|contracted procedure: k5774 
o|contracted procedure: k5783 
o|contracted procedure: k5825 
o|contracted procedure: k5821 
o|contracted procedure: k5875 
o|contracted procedure: k5891 
o|contracted procedure: k5907 
o|contracted procedure: k5929 
o|contracted procedure: k5884 
o|contracted procedure: k5888 
o|contracted procedure: k5925 
o|contracted procedure: k5910 
o|contracted procedure: k5913 
o|contracted procedure: k5921 
o|contracted procedure: k5948 
o|contracted procedure: k5956 
o|contracted procedure: k5962 
o|contracted procedure: k5972 
o|contracted procedure: k6030 
o|contracted procedure: k5985 
o|contracted procedure: k6024 
o|contracted procedure: k5988 
o|contracted procedure: k6018 
o|contracted procedure: k5991 
o|contracted procedure: k6012 
o|contracted procedure: k5994 
o|contracted procedure: k5997 
o|contracted procedure: k6039 
o|contracted procedure: k6066 
o|contracted procedure: k6098 
o|contracted procedure: k6109 
o|contracted procedure: k6118 
o|contracted procedure: k6124 
o|contracted procedure: k6154 
o|contracted procedure: k6164 
o|contracted procedure: k6168 
o|contracted procedure: k6194 
o|contracted procedure: k5711 
o|contracted procedure: k6204 
o|contracted procedure: k6210 
o|contracted procedure: k6228 
o|contracted procedure: k6240 
o|contracted procedure: k6266 
o|contracted procedure: k6262 
o|contracted procedure: k6274 
o|contracted procedure: k6317 
o|contracted procedure: k6349 
o|contracted procedure: k6345 
o|contracted procedure: k6364 
o|contracted procedure: k6360 
o|contracted procedure: k6379 
o|contracted procedure: k6416 
o|contracted procedure: k6529 
o|contracted procedure: k6488 
o|contracted procedure: k6523 
o|contracted procedure: k6491 
o|contracted procedure: k6517 
o|contracted procedure: k6494 
o|contracted procedure: k6511 
o|contracted procedure: k6497 
o|contracted procedure: k6508 
o|contracted procedure: k6504 
o|inlining procedure: "(modules.scm:252) make-module" 
o|contracted procedure: k6808 
o|contracted procedure: k6819 
o|contracted procedure: k6945 
o|contracted procedure: k6825 
o|contracted procedure: k6828 
o|contracted procedure: k6839 
o|contracted procedure: k6848 
o|contracted procedure: k6851 
o|contracted procedure: k6866 
o|contracted procedure: k6876 
o|contracted procedure: k6880 
o|contracted procedure: k6894 
o|contracted procedure: k6901 
o|contracted procedure: k6926 
o|contracted procedure: k6932 
o|contracted procedure: k6936 
o|contracted procedure: k7057 
o|contracted procedure: k7053 
o|contracted procedure: k7049 
o|contracted procedure: k7101 
o|contracted procedure: k7105 
o|contracted procedure: k7276 
o|contracted procedure: k7320 
o|contracted procedure: k7109 
o|contracted procedure: k7113 
o|contracted procedure: k7193 
o|contracted procedure: k7198 
o|contracted procedure: k7201 
o|contracted procedure: k7207 
o|contracted procedure: k7214 
o|contracted procedure: k7231 
o|contracted procedure: k7117 
o|contracted procedure: k7097 
o|contracted procedure: k7093 
o|contracted procedure: k7128 
o|contracted procedure: k7144 
o|contracted procedure: k7189 
o|contracted procedure: k7150 
o|contracted procedure: k7158 
o|contracted procedure: k7175 
o|contracted procedure: k7165 
o|contracted procedure: k7243 
o|contracted procedure: k7246 
o|contracted procedure: k7249 
o|contracted procedure: k7257 
o|contracted procedure: k7265 
o|contracted procedure: k7332 
o|contracted procedure: k7335 
o|contracted procedure: k7338 
o|contracted procedure: k7346 
o|contracted procedure: k7354 
o|contracted procedure: k7314 
o|contracted procedure: k7284 
o|contracted procedure: k7291 
o|contracted procedure: k7302 
o|contracted procedure: k7306 
o|contracted procedure: k7373 
o|contracted procedure: k7404 
o|contracted procedure: k7390 
o|contracted procedure: k7397 
o|contracted procedure: k7432 
o|contracted procedure: k7410 
o|contracted procedure: k7425 
o|contracted procedure: k7421 
o|contracted procedure: k7417 
o|contracted procedure: k6954 
o|contracted procedure: k6965 
o|contracted procedure: k6977 
o|contracted procedure: k6999 
o|contracted procedure: k6995 
o|contracted procedure: k6980 
o|contracted procedure: k6983 
o|contracted procedure: k6991 
o|contracted procedure: k4832 
o|contracted procedure: k4835 
o|contracted procedure: k4845 
o|contracted procedure: k7444 
o|contracted procedure: k7450 
o|contracted procedure: k7757 
o|contracted procedure: k7459 
o|contracted procedure: k7494 
o|contracted procedure: k7514 
o|contracted procedure: k7532 
o|contracted procedure: k7540 
o|contracted procedure: k7546 
o|contracted procedure: k7558 
o|contracted procedure: k7566 
o|contracted procedure: k7572 
o|contracted procedure: k7586 
o|contracted procedure: k7582 
o|contracted procedure: k7590 
o|contracted procedure: k7611 
o|contracted procedure: k7621 
o|contracted procedure: k7625 
o|contracted procedure: k7634 
o|contracted procedure: k7644 
o|contracted procedure: k7648 
o|contracted procedure: k7676 
o|contracted procedure: k7651 
o|contracted procedure: k7672 
o|inlining procedure: "(modules.scm:399) make-module" 
o|contracted procedure: k7689 
o|contracted procedure: k7711 
o|contracted procedure: k7503 
o|contracted procedure: k7707 
o|contracted procedure: k7692 
o|contracted procedure: k7695 
o|contracted procedure: k7703 
o|contracted procedure: k7723 
o|contracted procedure: k7465 
o|contracted procedure: k7481 
o|contracted procedure: k7471 
o|contracted procedure: k7754 
o|contracted procedure: k7735 
o|contracted procedure: k7742 
o|contracted procedure: k7871 
o|contracted procedure: k7766 
o|contracted procedure: k7783 
o|contracted procedure: k7779 
o|contracted procedure: k7787 
o|contracted procedure: k7811 
o|contracted procedure: k7819 
o|contracted procedure: k7822 
o|contracted procedure: k7831 
o|inlining procedure: "(modules.scm:424) make-module" 
o|contracted procedure: k7843 
o|contracted procedure: k7846 
o|contracted procedure: k7849 
o|contracted procedure: k7857 
o|contracted procedure: k7865 
o|contracted procedure: k7886 
o|contracted procedure: k7880 
o|contracted procedure: k7911 
o|contracted procedure: k7961 
o|contracted procedure: k7914 
o|contracted procedure: k7923 
o|contracted procedure: k7950 
o|contracted procedure: k7926 
o|contracted procedure: k7932 
o|contracted procedure: k7964 
o|contracted procedure: k8946 
o|contracted procedure: k7973 
o|contracted procedure: k8028 
o|contracted procedure: k8036 
o|contracted procedure: k8022 
o|contracted procedure: k8139 
o|contracted procedure: k8039 
o|contracted procedure: k8082 
o|contracted procedure: k8135 
o|contracted procedure: k8091 
o|contracted procedure: k8114 
o|contracted procedure: k8242 
o|contracted procedure: k8174 
o|contracted procedure: k8211 
o|contracted procedure: k8223 
o|contracted procedure: k8233 
o|contracted procedure: k8237 
o|contracted procedure: k8251 
o|contracted procedure: k8261 
o|contracted procedure: k8265 
o|contracted procedure: k8271 
o|contracted procedure: k8290 
o|contracted procedure: k8300 
o|contracted procedure: k8304 
o|contracted procedure: k8317 
o|contracted procedure: k8320 
o|contracted procedure: k8368 
o|contracted procedure: k8334 
o|contracted procedure: k8343 
o|contracted procedure: k8362 
o|contracted procedure: k8373 
o|contracted procedure: k8376 
o|contracted procedure: k8388 
o|contracted procedure: k8410 
o|contracted procedure: k8406 
o|contracted procedure: k8391 
o|contracted procedure: k8394 
o|contracted procedure: k8402 
o|contracted procedure: k8432 
o|contracted procedure: k8451 
o|contracted procedure: k8476 
o|contracted procedure: k8468 
o|contracted procedure: k8472 
o|contracted procedure: k8482 
o|contracted procedure: k8494 
o|contracted procedure: k8529 
o|contracted procedure: k8552 
o|contracted procedure: k8555 
o|contracted procedure: k8577 
o|contracted procedure: k5729 
o|contracted procedure: k8606 
o|contracted procedure: k8616 
o|contracted procedure: k8620 
o|contracted procedure: k8637 
o|contracted procedure: k8643 
o|contracted procedure: k8651 
o|contracted procedure: k8659 
o|contracted procedure: k8523 
o|contracted procedure: k8502 
o|contracted procedure: k8505 
o|contracted procedure: k6608 
o|contracted procedure: k6620 
o|contracted procedure: k6792 
o|contracted procedure: k6626 
o|contracted procedure: k6638 
o|contracted procedure: k6647 
o|contracted procedure: k6654 
o|contracted procedure: k6784 
o|contracted procedure: k6660 
o|contracted procedure: k6673 
o|contracted procedure: k6695 
o|contracted procedure: k6699 
o|inlining procedure: k6685 
o|inlining procedure: k6685 
o|contracted procedure: k6713 
o|contracted procedure: k6759 
o|contracted procedure: k6724 
o|contracted procedure: k6741 
o|contracted procedure: k6731 
o|contracted procedure: k6755 
o|contracted procedure: k8668 
o|contracted procedure: k8680 
o|contracted procedure: k8690 
o|contracted procedure: k8694 
o|contracted procedure: k8857 
o|contracted procedure: k8698 
o|contracted procedure: k8707 
o|contracted procedure: k8710 
o|contracted procedure: k8851 
o|contracted procedure: k8713 
o|contracted procedure: k8719 
o|contracted procedure: k8741 
o|contracted procedure: k8731 
o|contracted procedure: k8753 
o|contracted procedure: k8816 
o|contracted procedure: k8837 
o|contracted procedure: k8848 
o|contracted procedure: k8860 
o|contracted procedure: k8883 
o|contracted procedure: k8909 
o|contracted procedure: k8918 
o|contracted procedure: k8940 
o|contracted procedure: k8441 
o|contracted procedure: k8936 
o|contracted procedure: k8921 
o|contracted procedure: k8924 
o|contracted procedure: k8932 
o|contracted procedure: k9156 
o|contracted procedure: k9175 
o|contracted procedure: k9184 
o|contracted procedure: k9212 
o|contracted procedure: k9254 
o|contracted procedure: k10022 
o|contracted procedure: k9267 
o|contracted procedure: k9273 
o|contracted procedure: k9295 
o|contracted procedure: k9313 
o|contracted procedure: k9321 
o|contracted procedure: k9335 
o|contracted procedure: k9331 
o|contracted procedure: k9344 
o|contracted procedure: k9354 
o|contracted procedure: k9358 
o|contracted procedure: k9419 
o|contracted procedure: k9361 
o|contracted procedure: k9373 
o|contracted procedure: k9377 
o|contracted procedure: k9383 
o|contracted procedure: k9395 
o|contracted procedure: k9399 
o|contracted procedure: k9411 
o|contracted procedure: k9423 
o|contracted procedure: k9445 
o|contracted procedure: k9463 
o|contracted procedure: k9475 
o|contracted procedure: k9483 
o|contracted procedure: k9497 
o|contracted procedure: k9493 
o|contracted procedure: k9506 
o|contracted procedure: k9516 
o|contracted procedure: k9520 
o|contracted procedure: k9561 
o|contracted procedure: k9523 
o|contracted procedure: k9535 
o|contracted procedure: k9543 
o|contracted procedure: k9555 
o|contracted procedure: k9602 
o|contracted procedure: k9564 
o|contracted procedure: k9576 
o|contracted procedure: k9584 
o|contracted procedure: k9596 
o|contracted procedure: k9606 
o|contracted procedure: k9628 
o|contracted procedure: k9646 
o|contracted procedure: k9658 
o|contracted procedure: k9666 
o|contracted procedure: k9669 
o|contracted procedure: k9675 
o|contracted procedure: k9689 
o|contracted procedure: k9685 
o|contracted procedure: k9698 
o|contracted procedure: k9708 
o|contracted procedure: k9712 
o|contracted procedure: k9721 
o|contracted procedure: k9743 
o|contracted procedure: k9739 
o|contracted procedure: k9724 
o|contracted procedure: k9727 
o|contracted procedure: k9735 
o|contracted procedure: k9799 
o|contracted procedure: k9749 
o|contracted procedure: k9761 
o|contracted procedure: k9777 
o|contracted procedure: k9781 
o|contracted procedure: k9773 
o|contracted procedure: k9765 
o|contracted procedure: k9793 
o|contracted procedure: k9852 
o|contracted procedure: k9802 
o|contracted procedure: k9814 
o|contracted procedure: k9830 
o|contracted procedure: k9834 
o|contracted procedure: k9826 
o|contracted procedure: k9818 
o|contracted procedure: k9846 
o|contracted procedure: k9856 
o|contracted procedure: k9878 
o|contracted procedure: k9912 
o|contracted procedure: k9919 
o|contracted procedure: k9923 
o|contracted procedure: k9926 
o|contracted procedure: k9933 
o|contracted procedure: k9936 
o|contracted procedure: k9948 
o|contracted procedure: k9951 
o|contracted procedure: k9954 
o|contracted procedure: k9962 
o|contracted procedure: k9970 
o|contracted procedure: k9982 
o|contracted procedure: k9985 
o|contracted procedure: k9988 
o|contracted procedure: k9996 
o|contracted procedure: k10004 
o|contracted procedure: k10011 
o|contracted procedure: k10048 
o|contracted procedure: k10057 
o|contracted procedure: k10060 
o|contracted procedure: k10072 
o|contracted procedure: k10082 
o|contracted procedure: k10086 
o|contracted procedure: k10109 
o|contracted procedure: k10115 
o|contracted procedure: k10139 
o|contracted procedure: k10135 
o|contracted procedure: k10125 
o|contracted procedure: k10146 
o|contracted procedure: k10182 
o|contracted procedure: k10154 
o|contracted procedure: k10178 
o|contracted procedure: k10172 
o|contracted procedure: k10160 
o|contracted procedure: k10189 
o|contracted procedure: k10243 
o|contracted procedure: k10261 
o|contracted procedure: k10268 
o|contracted procedure: k10280 
o|contracted procedure: k10302 
o|contracted procedure: k10298 
o|contracted procedure: k10283 
o|contracted procedure: k10286 
o|contracted procedure: k10294 
o|contracted procedure: k10314 
o|contracted procedure: k10336 
o|contracted procedure: k10332 
o|contracted procedure: k10317 
o|contracted procedure: k10320 
o|contracted procedure: k10328 
o|contracted procedure: k10446 
o|contracted procedure: k10361 
o|contracted procedure: k10365 
o|contracted procedure: k10372 
o|contracted procedure: k10384 
o|contracted procedure: k10406 
o|contracted procedure: k10402 
o|contracted procedure: k10387 
o|contracted procedure: k10390 
o|contracted procedure: k10398 
o|contracted procedure: k10418 
o|contracted procedure: k10440 
o|contracted procedure: k10436 
o|contracted procedure: k10421 
o|contracted procedure: k10424 
o|contracted procedure: k10432 
o|contracted procedure: k10458 
o|contracted procedure: k10468 
o|contracted procedure: k10472 
o|contracted procedure: k10481 
o|contracted procedure: k10491 
o|contracted procedure: k10495 
o|contracted procedure: k5693 
o|contracted procedure: k10513 
o|contracted procedure: k5675 
o|contracted procedure: k10528 
o|contracted procedure: k10542 
o|contracted procedure: k10546 
o|contracted procedure: k6428 
o|contracted procedure: k6450 
o|contracted procedure: k6446 
o|contracted procedure: k6461 
o|contracted procedure: k6457 
o|contracted procedure: k6471 
o|contracted procedure: k6479 
o|contracted procedure: k10590 
o|contracted procedure: k10598 
o|contracted procedure: k10607 
o|contracted procedure: k10649 
o|contracted procedure: k10655 
o|contracted procedure: k10835 
o|contracted procedure: k10664 
o|contracted procedure: k10679 
o|contracted procedure: k10831 
o|contracted procedure: k10685 
o|contracted procedure: k10691 
o|contracted procedure: k10697 
o|contracted procedure: k10827 
o|contracted procedure: k10712 
o|contracted procedure: k10823 
o|contracted procedure: k10721 
o|contracted procedure: k10738 
o|contracted procedure: k10761 
o|contracted procedure: k10767 
o|contracted procedure: k10774 
o|contracted procedure: k10788 
o|contracted procedure: k10799 
o|contracted procedure: k10817 
o|contracted procedure: k10805 
o|contracted procedure: k10851 
o|contracted procedure: k10847 
o|contracted procedure: k10871 
o|contracted procedure: k10874 
o|contracted procedure: k10886 
o|contracted procedure: k10894 
o|contracted procedure: k10897 
o|contracted procedure: k10890 
o|contracted procedure: k10909 
o|contracted procedure: k10931 
o|contracted procedure: k10927 
o|contracted procedure: k10912 
o|contracted procedure: k10915 
o|contracted procedure: k10923 
o|contracted procedure: k10960 
o|contracted procedure: k10953 
o|contracted procedure: k10949 
o|contracted procedure: k10945 
o|contracted procedure: k10969 
o|contracted procedure: k10981 
o|contracted procedure: k10984 
o|contracted procedure: k11024 
o|contracted procedure: k10990 
o|contracted procedure: k10994 
o|contracted procedure: k11007 
o|contracted procedure: k11030 
o|contracted procedure: k11036 
o|contracted procedure: k11039 
o|contracted procedure: k11043 
o|contracted procedure: k11046 
o|contracted procedure: k11059 
o|contracted procedure: k11071 
o|contracted procedure: k11089 
o|contracted procedure: k11121 
o|contracted procedure: k11094 
o|contracted procedure: k11100 
o|contracted procedure: k11107 
o|contracted procedure: k11127 
o|contracted procedure: k11136 
o|contracted procedure: k11159 
o|contracted procedure: k11172 
o|contracted procedure: k11184 
o|contracted procedure: k11187 
o|contracted procedure: k11190 
o|contracted procedure: k11198 
o|contracted procedure: k11206 
o|contracted procedure: k11218 
o|contracted procedure: k11228 
o|contracted procedure: k11232 
o|contracted procedure: k11352 
o|contracted procedure: k11326 
o|contracted procedure: k11335 
o|contracted procedure: k11345 
o|contracted procedure: k11367 
o|contracted procedure: k11375 
o|contracted procedure: k11387 
o|contracted procedure: k11390 
o|contracted procedure: k11393 
o|contracted procedure: k11401 
o|contracted procedure: k11409 
o|contracted procedure: k11421 
o|contracted procedure: k11429 
o|contracted procedure: k11441 
o|contracted procedure: k11444 
o|contracted procedure: k11447 
o|contracted procedure: k11455 
o|contracted procedure: k11463 
o|contracted procedure: k11475 
o|contracted procedure: k11483 
o|contracted procedure: k11495 
o|contracted procedure: k11498 
o|contracted procedure: k11501 
o|contracted procedure: k11509 
o|contracted procedure: k11517 
o|contracted procedure: k11529 
o|contracted procedure: k11537 
o|contracted procedure: k11549 
o|contracted procedure: k11552 
o|contracted procedure: k11555 
o|contracted procedure: k11563 
o|contracted procedure: k11571 
o|contracted procedure: k11583 
o|contracted procedure: k11591 
o|contracted procedure: k11603 
o|contracted procedure: k11606 
o|contracted procedure: k11609 
o|contracted procedure: k11617 
o|contracted procedure: k11625 
o|contracted procedure: k11637 
o|contracted procedure: k11645 
o|contracted procedure: k11657 
o|contracted procedure: k11660 
o|contracted procedure: k11663 
o|contracted procedure: k11671 
o|contracted procedure: k11679 
o|contracted procedure: k11691 
o|contracted procedure: k11699 
o|contracted procedure: k11711 
o|contracted procedure: k11714 
o|contracted procedure: k11717 
o|contracted procedure: k11725 
o|contracted procedure: k11733 
o|contracted procedure: k11745 
o|contracted procedure: k11753 
o|contracted procedure: k11765 
o|contracted procedure: k11768 
o|contracted procedure: k11771 
o|contracted procedure: k11779 
o|contracted procedure: k11787 
o|contracted procedure: k11799 
o|contracted procedure: k11807 
o|contracted procedure: k11819 
o|contracted procedure: k11822 
o|contracted procedure: k11825 
o|contracted procedure: k11833 
o|contracted procedure: k11841 
o|contracted procedure: k11853 
o|contracted procedure: k11861 
o|contracted procedure: k11873 
o|contracted procedure: k11876 
o|contracted procedure: k11879 
o|contracted procedure: k11887 
o|contracted procedure: k11895 
o|contracted procedure: k11907 
o|contracted procedure: k11915 
o|contracted procedure: k11927 
o|contracted procedure: k11930 
o|contracted procedure: k11933 
o|contracted procedure: k11941 
o|contracted procedure: k11949 
o|contracted procedure: k11961 
o|contracted procedure: k11969 
o|contracted procedure: k11981 
o|contracted procedure: k11984 
o|contracted procedure: k11987 
o|contracted procedure: k11995 
o|contracted procedure: k12003 
o|contracted procedure: k12015 
o|contracted procedure: k12023 
o|contracted procedure: k12035 
o|contracted procedure: k12038 
o|contracted procedure: k12041 
o|contracted procedure: k12049 
o|contracted procedure: k12057 
o|simplifications: ((if . 4) (let . 229)) 
o|removed binding forms: 664 
o|inlining procedure: "(modules.scm:122) module-sexports" 
o|inlining procedure: "(modules.scm:121) module-vexports" 
o|inlining procedure: "(modules.scm:120) module-export-list" 
o|removed side-effect free assignment to unused variable: make-module 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest977979 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest977979 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest977979 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest977979 0 
o|inlining procedure: "(modules.scm:162) module-saved-environments" 
o|inlining procedure: "(modules.scm:159) set-module-saved-environments!" 
o|inlining procedure: "(modules.scm:181) set-module-exist-list!" 
o|inlining procedure: "(modules.scm:180) set-module-sexports!" 
o|inlining procedure: "(modules.scm:180) module-sexports" 
o|inlining procedure: "(modules.scm:171) module-exist-list" 
o|inlining procedure: "(modules.scm:182) set-module-export-list!" 
o|inlining procedure: "(modules.scm:169) module-export-list" 
o|inlining procedure: "(modules.scm:188) module-meta-expressions" 
o|inlining procedure: "(modules.scm:209) set-module-defined-list!" 
o|inlining procedure: "(modules.scm:212) module-defined-list" 
o|inlining procedure: "(modules.scm:206) set-module-exist-list!" 
o|inlining procedure: "(modules.scm:206) module-exist-list" 
o|inlining procedure: "(modules.scm:202) module-name" 
o|inlining procedure: "(modules.scm:198) module-export-list" 
o|inlining procedure: "(modules.scm:229) set-module-defined-syntax-list!" 
o|inlining procedure: "(modules.scm:231) module-defined-syntax-list" 
o|inlining procedure: "(modules.scm:225) set-module-defined-list!" 
o|inlining procedure: "(modules.scm:228) module-defined-list" 
o|inlining procedure: "(modules.scm:219) module-name" 
o|inlining procedure: "(modules.scm:216) module-export-list" 
o|inlining procedure: "(modules.scm:235) set-module-defined-syntax-list!" 
o|inlining procedure: "(modules.scm:237) module-defined-syntax-list" 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest11231127 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest11231127 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest11231127 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest11231127 0 
o|substituted constant variable: iexports90713530 
o|inlining procedure: "(modules.scm:366) module-defined-syntax-list" 
o|inlining procedure: "(modules.scm:352) module-vexports" 
o|inlining procedure: "(modules.scm:351) module-iexports" 
o|inlining procedure: "(modules.scm:345) module-library" 
o|inlining procedure: "(modules.scm:344) module-name" 
o|inlining procedure: "(modules.scm:341) module-meta-expressions" 
o|inlining procedure: "(modules.scm:319) module-import-forms" 
o|inlining procedure: "(modules.scm:328) module-meta-import-forms" 
o|inlining procedure: "(modules.scm:327) module-sexports" 
o|inlining procedure: "(modules.scm:326) module-import-forms" 
o|inlining procedure: "(modules.scm:325) module-name" 
o|inlining procedure: "(modules.scm:324) module-defined-list" 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest13921398 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest13921398 0 
o|inlining procedure: "(modules.scm:415) set-module-saved-environments!" 
o|contracted procedure: k7654 
o|substituted constant variable: explist90413554 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest14981502 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest14981502 0 
o|inlining procedure: "(modules.scm:436) set-module-saved-environments!" 
o|inlining procedure: "(modules.scm:440) module-sexports" 
o|inlining procedure: "(modules.scm:439) module-vexports" 
o|substituted constant variable: explist90413563 
o|substituted constant variable: iexports90713566 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest15461549 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest15461549 0 
o|inlining procedure: "(modules.scm:451) module-exist-list" 
o|inlining procedure: "(modules.scm:450) module-export-list" 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest15831585 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest15831585 0 
o|inlining procedure: "(modules.scm:472) module-name" 
o|inlining procedure: "(modules.scm:615) set-module-saved-environments!" 
o|inlining procedure: "(modules.scm:612) set-module-iexports!" 
o|inlining procedure: "(modules.scm:614) module-iexports" 
o|inlining procedure: "(modules.scm:611) set-module-sexports!" 
o|inlining procedure: "(modules.scm:259) module-defined-list" 
o|inlining procedure: "(modules.scm:258) module-name" 
o|inlining procedure: "(modules.scm:257) module-export-list" 
o|contracted procedure: k8747 
o|contracted procedure: k8776 
o|inlining procedure: "(modules.scm:533) module-sexports" 
o|inlining procedure: "(modules.scm:530) module-defined-syntax-list" 
o|inlining procedure: "(modules.scm:527) module-exist-list" 
o|inlining procedure: "(modules.scm:526) module-defined-list" 
o|inlining procedure: "(modules.scm:525) module-name" 
o|inlining procedure: "(modules.scm:524) module-export-list" 
o|inlining procedure: "(modules.scm:674) module-iexports" 
o|inlining procedure: "(modules.scm:673) module-sexports" 
o|inlining procedure: "(modules.scm:672) module-vexports" 
o|inlining procedure: "(modules.scm:671) module-name" 
o|inlining procedure: "(modules.scm:670) module-library" 
o|inlining procedure: "(modules.scm:669) module-name" 
o|inlining procedure: "(modules.scm:821) set-module-iexports!" 
o|inlining procedure: "(modules.scm:823) module-iexports" 
o|inlining procedure: "(modules.scm:808) set-module-exist-list!" 
o|inlining procedure: "(modules.scm:810) module-exist-list" 
o|inlining procedure: "(modules.scm:807) set-module-sexports!" 
o|inlining procedure: "(modules.scm:807) module-sexports" 
o|inlining procedure: "(modules.scm:814) set-module-export-list!" 
o|inlining procedure: "(modules.scm:817) module-export-list" 
o|inlining procedure: "(modules.scm:805) module-export-list" 
o|inlining procedure: "(modules.scm:781) module-meta-import-forms" 
o|inlining procedure: "(modules.scm:784) module-import-forms" 
o|inlining procedure: "(modules.scm:842) module-name" 
o|inlining procedure: "(modules.scm:842) module-name" 
o|inlining procedure: k6475 
o|inlining procedure: k6475 
o|inlining procedure: "(modules.scm:842) module-name" 
o|contracted procedure: k10744 
o|inlining procedure: "(modules.scm:942) module-sexports" 
o|inlining procedure: "(modules.scm:941) module-vexports" 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest33983400 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest33983400 0 
o|inlining procedure: "(modules.scm:1197) module-saved-environments" 
o|replaced variables: 17 
o|removed binding forms: 5 
o|removed side-effect free assignment to unused variable: module-library 
o|removed side-effect free assignment to unused variable: module-export-list 
o|removed side-effect free assignment to unused variable: set-module-export-list! 
o|removed side-effect free assignment to unused variable: module-defined-list 
o|removed side-effect free assignment to unused variable: set-module-defined-list! 
o|removed side-effect free assignment to unused variable: module-exist-list 
o|removed side-effect free assignment to unused variable: set-module-exist-list! 
o|removed side-effect free assignment to unused variable: module-defined-syntax-list 
o|removed side-effect free assignment to unused variable: set-module-defined-syntax-list! 
o|removed side-effect free assignment to unused variable: module-import-forms 
o|removed side-effect free assignment to unused variable: module-meta-import-forms 
o|removed side-effect free assignment to unused variable: module-meta-expressions 
o|removed side-effect free assignment to unused variable: module-vexports 
o|removed side-effect free assignment to unused variable: module-sexports 
o|removed side-effect free assignment to unused variable: set-module-sexports! 
o|removed side-effect free assignment to unused variable: module-iexports 
o|removed side-effect free assignment to unused variable: set-module-iexports! 
o|removed side-effect free assignment to unused variable: module-saved-environments 
o|removed side-effect free assignment to unused variable: set-module-saved-environments! 
(o x)|known list op on rest arg sublist: ##core#rest-null? r5989 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r5989 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r5989 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r5989 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r6492 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r6492 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r6492 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r6492 1 
o|inlining procedure: k6500 
o|replaced variables: 261 
o|removed binding forms: 23 
o|inlining procedure: k5805 
o|inlining procedure: k6145 
o|inlining procedure: k6301 
o|inlining procedure: k7384 
o|inlining procedure: k7024 
o|contracted procedure: k7520 
o|contracted procedure: k7772 
o|inlining procedure: k7807 
o|inlining procedure: k8417 
o|inlining procedure: k8597 
o|inlining procedure: k8867 
o|inlining procedure: k9242 
o|inlining procedure: k10240 
o|inlining procedure: k10347 
o|inlining procedure: k10509 
o|inlining procedure: k10524 
o|inlining procedure: k10573 
o|inlining procedure: k1057312766 
o|inlining procedure: k1057312770 
o|inlining procedure: k11114 
o|inlining procedure: k11349 
o|removed binding forms: 206 
o|contracted procedure: k5797 
o|contracted procedure: k5801 
o|contracted procedure: k6092 
o|contracted procedure: k6101 
o|contracted procedure: k6198 
o|contracted procedure: k6308 
o|contracted procedure: k6270 
o|contracted procedure: k6278 
o|contracted procedure: k6389 
o|contracted procedure: k6326 
o|contracted procedure: k6353 
o|contracted procedure: k6368 
o|contracted procedure: k6406 
o|contracted procedure: k7030 
o|contracted procedure: k7033 
o|contracted procedure: k7036 
o|contracted procedure: k7039 
o|contracted procedure: k7042 
o|contracted procedure: k7365 
o|contracted procedure: k7361 
o|contracted procedure: k7317 
o|contracted procedure: k7272 
o|contracted procedure: k7135 
o|contracted procedure: k7803 
o|contracted procedure: k7895 
o|contracted procedure: k8420 
o|contracted procedure: k8423 
o|contracted procedure: k8426 
o|contracted procedure: k8429 
o|contracted procedure: k8448 
o|contracted procedure: k6538 
o|contracted procedure: k6541 
o|contracted procedure: k6544 
o|contracted procedure: k9222 
o|contracted procedure: k9226 
o|contracted procedure: k9230 
o|contracted procedure: k9234 
o|contracted procedure: k9238 
o|contracted procedure: k10223 
o|contracted procedure: k10257 
o|contracted procedure: k10358 
o|contracted procedure: k11118 
o|simplifications: ((let . 12)) 
o|removed binding forms: 61 
o|direct leaf routine/allocation: g349350 3 
o|direct leaf routine/allocation: g10391040 3 
o|direct leaf routine/allocation: loop1560 0 
o|direct leaf routine/allocation: g18901897 3 
o|direct leaf routine/allocation: g33683377 0 
o|direct leaf routine/allocation: g33303339 0 
o|direct leaf routine/allocation: g32923301 0 
o|direct leaf routine/allocation: g32543263 0 
o|direct leaf routine/allocation: g32163225 0 
o|direct leaf routine/allocation: g31783187 0 
o|direct leaf routine/allocation: g31403149 0 
o|direct leaf routine/allocation: g31023111 0 
o|direct leaf routine/allocation: g30643073 0 
o|direct leaf routine/allocation: g30263035 0 
o|direct leaf routine/allocation: g29882997 0 
o|direct leaf routine/allocation: g29502959 0 
o|direct leaf routine/allocation: g29122921 0 
o|converted assignments to bindings: (loop1560) 
o|contracted procedure: "(modules.scm:578) k8683" 
o|contracted procedure: "(modules.scm:1100) k11405" 
o|contracted procedure: "(modules.scm:1100) k11459" 
o|contracted procedure: "(modules.scm:1100) k11513" 
o|contracted procedure: "(modules.scm:1100) k11567" 
o|contracted procedure: "(modules.scm:1100) k11621" 
o|contracted procedure: "(modules.scm:1100) k11675" 
o|contracted procedure: "(modules.scm:1100) k11729" 
o|contracted procedure: "(modules.scm:1100) k11783" 
o|contracted procedure: "(modules.scm:1100) k11837" 
o|contracted procedure: "(modules.scm:1100) k11891" 
o|contracted procedure: "(modules.scm:1100) k11945" 
o|contracted procedure: "(modules.scm:1100) k11999" 
o|contracted procedure: "(modules.scm:1100) k12053" 
o|simplifications: ((let . 1)) 
o|removed binding forms: 14 
o|direct leaf routine with hoistable closures/allocation: g10231030 (g10391040) 3 
o|contracted procedure: "(modules.scm:174) k6157" 
o|removed binding forms: 2 
x|eliminated type checks:
x|  C_i_check_list_2:	13
o|customizable procedures: (map-loop29062931 map-loop29442969 map-loop29823007 map-loop30203045 map-loop30583083 map-loop30963121 map-loop31343159 map-loop31723197 map-loop32103235 map-loop32483273 map-loop32863311 map-loop33243349 map-loop33623387 g28482855 for-each-loop28472862 map-loop28692887 k11103 loop2811 merr2784 match-functor-argument loop22818 map-loop27872804 err2776 loop22747 loop2735 iface2725 err2724 g27092710 mrename2690 g26982699 g11151116 k6439 g25092526 for-each-loop25082536 g25192541 for-each-loop25182549 map-loop26152632 map-loop26412658 map-loop25612578 map-loop25872604 k10195 g24482455 for-each-loop24472482 map-loop23802397 rename2373 map-loop24062423 tostr2066 g23402341 loop2268 g23352336 loop2277 map-loop23012318 g22892296 for-each-loop22882325 g22352236 loop2189 g22302231 loop2198 g22102217 for-each-loop22092220 g21562157 g21522153 loop2119 g21322139 for-each-loop21312142 warn2065 loop2080 module-imports2076 find-module/import-library map-loop18211839 loop1847 g18801881 id-string1872 fail1871 loop1855 for-each-loop18891900 report-unresolved-identifiers1592 g11801181 g11731174 warn1146 loop21164 loop1158 k8640 map-loop19091934 g19451954 for-each-loop19441961 map-loop16361653 lp1612 g16011660 for-each-loop16001805 g16691680 for-each-loop16681744 g17791786 for-each-loop17781795 g16961697 ln->num1683 k7902 g15181527 map-loop15121533 map-loop14171435 g14501467 for-each-loop14491473 g14601478 for-each-loop14591484 merge-se k7438 filter-map loop299 map-loop12461267 k7073 k7081 k7350 map-loop13041328 g13431352 map-loop13371370 loop1377 k7121 lp1227 g12111218 for-each-loop12101221 loop1197 find-export module-rename delete check-for-redef for-each-loop10221042 g10061007 k6048 g968969 loop959 map-loop924942 foldr334337 g339340 loop279) 
o|calls to known targets: 315 
o|identified direct recursive calls: f_4919 1 
o|identified direct recursive calls: f_5902 1 
o|unused rest argument: rest977979 f_5983 
o|identified direct recursive calls: f_6149 1 
o|unused rest argument: rest11231127 f_6486 
o|identified direct recursive calls: f_6814 1 
o|identified direct recursive calls: f_7139 1 
o|identified direct recursive calls: f_6972 1 
o|unused rest argument: rest13921398 f_7457 
o|unused rest argument: rest14981502 f_7764 
o|unused rest argument: rest15461549 f_7878 
o|identified direct recursive calls: f_7906 3 
o|unused rest argument: _1591 f_8949 
o|identified direct recursive calls: f_8312 2 
o|identified direct recursive calls: f_8383 1 
o|identified direct recursive calls: f_6615 1 
o|identified direct recursive calls: f_8675 1 
o|identified direct recursive calls: f_8702 1 
o|unused rest argument: rest15831585 f_7971 
o|identified direct recursive calls: f_9308 1 
o|identified direct recursive calls: f_9470 1 
o|identified direct recursive calls: f_9458 1 
o|identified direct recursive calls: f_9716 1 
o|identified direct recursive calls: f_9653 1 
o|identified direct recursive calls: f_9641 1 
o|identified direct recursive calls: f_10275 1 
o|identified direct recursive calls: f_10309 1 
o|identified direct recursive calls: f_10379 1 
o|identified direct recursive calls: f_10413 1 
o|identified direct recursive calls: f_10783 1 
o|identified direct recursive calls: f_10674 2 
o|identified direct recursive calls: f_10904 1 
o|unused rest argument: rest33983400 f_11324 
o|identified direct recursive calls: f_11382 1 
o|identified direct recursive calls: f_11436 1 
o|identified direct recursive calls: f_11490 1 
o|identified direct recursive calls: f_11544 1 
o|identified direct recursive calls: f_11598 1 
o|identified direct recursive calls: f_11652 1 
o|identified direct recursive calls: f_11706 1 
o|identified direct recursive calls: f_11760 1 
o|identified direct recursive calls: f_11814 1 
o|identified direct recursive calls: f_11868 1 
o|identified direct recursive calls: f_11922 1 
o|identified direct recursive calls: f_11976 1 
o|identified direct recursive calls: f_12030 1 
o|fast box initializations: 75 
o|fast global references: 41 
o|fast global assignments: 9 
o|dropping unused closure argument: f_10532 
o|dropping unused closure argument: f_11081 
o|dropping unused closure argument: f_4746 
o|dropping unused closure argument: f_4910 
o|dropping unused closure argument: f_6202 
o|dropping unused closure argument: f_6796 
o|dropping unused closure argument: f_7893 
o|dropping unused closure argument: f_8014 
o|dropping unused closure argument: f_9107 
o|dropping unused closure argument: f_9137 
*/
/* end of file */
