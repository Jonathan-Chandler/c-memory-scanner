/* Generated from chicken-syntax.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.3.0rc4 ((HEAD detached at 5.3.0rc4)) (rev b6cbb1ba)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: chicken-syntax.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file chicken-syntax.c
   unit: chicken-syntax
   uses: internal expand library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_internal_toplevel)
C_externimport void C_ccall C_internal_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_expand_toplevel)
C_externimport void C_ccall C_expand_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[282];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,12),40,116,97,107,101,32,108,115,116,32,110,41,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,16),40,97,53,54,56,53,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,16),40,97,53,55,51,52,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,13),40,97,53,56,50,51,32,120,32,114,32,99,41,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,16),40,97,53,56,52,49,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,27),40,108,111,111,112,32,120,115,32,118,97,114,115,32,98,115,32,118,97,108,115,32,114,101,115,116,41,0,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,16),40,97,53,57,48,54,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,24),40,108,111,111,112,32,120,115,32,118,97,114,115,32,118,97,108,115,32,114,101,115,116,41};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,16),40,97,54,49,48,49,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,13),40,103,51,48,51,56,32,118,110,97,109,101,41,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,7),40,103,51,48,54,52,41,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,115,108,111,116,115,32,105,41,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,51,48,53,56,32,103,51,48,55,48,41,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,51,48,51,55,32,103,51,48,52,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,51,48,49,49,32,103,51,48,50,51,41,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,16),40,97,54,50,55,51,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,16),40,97,54,55,49,50,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,105,41};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,11),40,103,101,110,118,97,114,115,32,110,41,0,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,32,110,32,112,114,101,118,32,110,111,100,101,41,0,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,7),40,97,54,57,53,54,41,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,50,57,51,52,32,103,50,57,52,54,32,103,50,57,52,55,41,0,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,19),40,98,117,105,108,100,32,118,97,114,115,50,32,118,114,101,115,116,41,0,0,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,19),40,97,54,57,54,54,32,118,97,114,115,49,32,118,97,114,115,50,41,0,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,22),40,97,54,57,51,54,32,118,97,114,115,32,97,114,103,99,32,114,101,115,116,41,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,14),40,103,50,56,57,49,32,99,32,98,111,100,121,41,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,17),40,102,111,108,100,114,50,56,56,54,32,103,50,56,56,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,22),40,97,55,49,57,56,32,118,97,114,115,32,97,114,103,99,32,114,101,115,116,41,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,56,52,51,32,103,50,56,53,53,41,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,16),40,97,54,56,50,56,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,19),40,108,111,111,112,32,97,114,103,115,32,118,97,114,100,101,102,115,41,0,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,16),40,97,55,50,55,50,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,16),40,97,55,52,51,50,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,36),40,114,101,99,117,114,32,118,97,114,115,32,100,101,102,97,117,108,116,101,114,115,32,110,111,110,45,100,101,102,97,117,108,116,115,41,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,45),40,109,97,107,101,45,105,102,45,116,114,101,101,32,118,97,114,115,32,100,101,102,97,117,108,116,101,114,115,32,98,111,100,121,45,112,114,111,99,32,114,101,115,116,41,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,23),40,112,114,101,102,105,120,45,115,121,109,32,112,114,101,102,105,120,32,115,121,109,41,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,9),40,103,50,54,57,54,32,118,41,0,0,0,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,11),40,103,50,55,53,51,32,118,97,114,41,0,0,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,42),40,114,101,99,117,114,32,118,97,114,115,32,100,101,102,97,117,108,116,101,114,45,110,97,109,101,115,32,100,101,102,115,32,110,101,120,116,45,103,117,121,41,0,0,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,55,52,55,32,103,50,55,53,57,41,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,55,49,56,32,103,50,55,51,48,41,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,54,57,48,32,103,50,55,48,50,41,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,54,54,48,32,103,50,54,55,50,41,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,16),40,97,55,53,48,57,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,14),40,102,111,108,100,32,98,115,32,108,97,115,116,41,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,16),40,97,55,57,53,55,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,24),40,113,117,111,116,105,102,121,45,112,114,111,99,50,53,54,48,32,120,115,32,105,100,41};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,16),40,97,56,48,57,57,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,16),40,97,56,50,48,51,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,13),40,97,56,50,52,55,32,120,32,114,32,99,41,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,50,53,48,56,32,103,50,53,50,48,32,103,50,53,50,49,41,0,0,0,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,52,54,48,32,103,50,52,55,50,41,0,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,13),40,97,56,52,52,53,32,97,32,95,32,95,41,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,23),40,102,111,108,100,108,50,52,56,51,32,103,50,52,56,52,32,103,50,52,56,50,41,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,52,51,49,32,103,50,52,52,51,41,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,52,48,53,32,103,50,52,49,55,41,0,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,16),40,97,56,50,54,57,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,16),40,102,111,108,100,32,118,98,105,110,100,105,110,103,115,41};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,16),40,97,56,53,50,55,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,18),40,97,112,112,101,110,100,42,50,50,49,49,32,105,108,32,108,41,0,0,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,17),40,109,97,112,42,50,50,49,50,32,112,114,111,99,32,108,41,0,0,0,0,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,9),40,103,50,50,55,50,32,118,41,0,0,0,0,0,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,10),40,108,111,111,107,117,112,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,9),40,103,50,51,50,51,32,118,41,0,0,0,0,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,51,49,55,32,103,50,51,50,57,41,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,26),40,102,111,108,100,32,108,108,105,115,116,115,32,101,120,112,115,32,108,108,105,115,116,115,50,41,0,0,0,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,51,53,50,32,103,50,51,54,52,41,0,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,108,108,105,115,116,115,32,97,99,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,50,54,54,32,103,50,50,55,56,41,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,108,108,105,115,116,115,32,97,99,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,50,50,56,32,103,50,50,52,48,41,0,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,16),40,97,56,53,56,49,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,49,54,55,32,103,50,49,55,57,41,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,49,53,55,32,103,50,49,54,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,22),40,97,57,48,57,53,32,118,97,114,115,32,97,114,103,99,32,114,101,115,116,41,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,16),40,97,57,48,53,56,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,16),40,97,57,49,56,56,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,16),40,97,57,50,48,57,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,16),40,97,57,50,51,55,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,7),40,97,57,50,55,54,41,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,48),40,97,57,50,56,50,32,110,97,109,101,50,48,57,52,32,108,105,98,50,48,57,54,32,95,50,48,57,56,32,95,50,48,57,56,32,95,50,48,57,56,32,95,50,48,57,56,41};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,9),40,103,50,48,56,50,32,120,41,0,0,0,0,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,48,55,54,32,103,50,48,56,56,41,0,0,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,13),40,97,57,50,54,49,32,120,32,114,32,99,41,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,9),40,103,49,54,54,55,32,122,41,0,0,0,0,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,7),40,103,49,54,57,53,41,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,7),40,103,49,55,50,51,41,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,14),40,103,49,56,52,54,32,115,32,116,101,109,112,41,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,50,48,51,50,32,103,50,48,52,52,32,103,50,48,52,53,41,0,0,0,0,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,57,57,54,32,103,50,48,48,56,32,103,50,48,48,57,41,0,0,0,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,32),40,109,97,112,45,108,111,111,112,49,57,53,52,32,103,49,57,54,54,32,103,49,57,54,55,32,103,49,57,54,56,41};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,57,49,56,32,103,49,57,51,48,32,103,49,57,51,49,41,0,0,0,0,0,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,56,56,50,32,103,49,56,57,52,32,103,49,56,57,53,41,0,0,0,0,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,32),40,109,97,112,45,108,111,111,112,49,56,52,48,32,103,49,56,53,50,32,103,49,56,53,51,32,103,49,56,53,52,41};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,56,48,57,32,103,49,56,50,49,32,103,49,56,50,50,41,0,0,0,0,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,55,55,56,32,103,49,55,57,48,32,103,49,55,57,49,41,0,0,0,0,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,55,52,55,32,103,49,55,53,57,32,103,49,55,54,48,41,0,0,0,0,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,55,49,55,32,103,49,55,50,57,41,0,0,0,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,54,56,57,32,103,49,55,48,49,41,0,0,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,54,54,49,32,103,49,54,55,51,41,0,0,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,54,51,52,32,103,49,54,52,54,41,0,0,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,54,48,55,32,103,49,54,49,57,41,0,0,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,16),40,97,57,51,52,49,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,7),40,103,49,51,49,48,41,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,7),40,103,49,51,51,56,41,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,53,54,49,32,103,49,53,55,51,32,103,49,53,55,52,41,0,0,0,0,0,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,53,50,53,32,103,49,53,51,55,32,103,49,53,51,56,41,0,0,0,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,52,56,57,32,103,49,53,48,49,32,103,49,53,48,50,41,0,0,0,0,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,52,53,51,32,103,49,52,54,53,32,103,49,52,54,54,41,0,0,0,0,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,52,49,57,32,103,49,52,51,49,32,103,49,52,51,50,41,0,0,0,0,0,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,110,41};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,51,54,50,32,103,49,51,55,52,32,103,49,51,55,53,41,0,0,0,0,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,51,56,51,32,103,49,51,57,53,41,0,0,0,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,51,51,50,32,103,49,51,52,52,41,0,0,0,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,51,48,52,32,103,49,51,49,54,41,0,0,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,50,55,55,32,103,49,50,56,57,41,0,0,0,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,17),40,97,49,48,50,55,49,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,17),40,97,49,48,57,50,52,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,17),40,97,49,48,57,52,49,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,17),40,97,49,48,57,53,56,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,17),40,97,49,48,57,55,57,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,17),40,97,49,48,57,57,51,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,12),40,103,49,49,54,52,32,115,108,111,116,41,0,0,0,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,18),40,109,97,112,115,108,111,116,115,32,115,108,111,116,115,32,105,41,0,0,0,0,0,0};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,49,53,56,32,103,49,49,55,48,41,0,0,0,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,14),40,97,49,49,48,56,54,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,17),40,97,49,49,52,56,49,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,49,48,56,57,32,108,32,108,101,110,41};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,49,48,56,57,32,108,32,108,101,110,41};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,29),40,97,49,49,52,57,56,32,105,110,112,117,116,32,114,101,110,97,109,101,32,99,111,109,112,97,114,101,41,0,0,0};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,29),40,97,49,49,54,52,54,32,105,110,112,117,116,32,114,101,110,97,109,101,32,99,111,109,112,97,114,101,41,0,0,0};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,17),40,97,49,49,55,52,51,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,14),40,97,49,49,55,55,50,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,14),40,97,49,49,56,48,50,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,14),40,97,49,49,56,49,57,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li135[] C_aligned={C_lihdr(0,0,13),40,103,57,55,53,32,99,108,97,117,115,101,41,0,0,0};
static C_char C_TLS li136[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,57,54,57,32,103,57,56,49,41,0,0,0,0,0,0};
static C_char C_TLS li137[] C_aligned={C_lihdr(0,0,14),40,97,49,49,56,55,57,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li138[] C_aligned={C_lihdr(0,0,23),40,109,97,112,45,108,111,111,112,57,49,53,32,103,57,50,55,32,103,57,50,56,41,0};
static C_char C_TLS li139[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,56,56,49,32,103,56,57,51,41,0,0,0,0,0,0};
static C_char C_TLS li140[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,50,32,97,110,97,109,101,115,32,105,41};
static C_char C_TLS li141[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,32,97,114,103,115,32,97,110,97,109,101,115,32,97,116,121,112,101,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li142[] C_aligned={C_lihdr(0,0,14),40,97,49,50,48,48,50,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li143[] C_aligned={C_lihdr(0,0,17),40,97,49,50,52,50,48,32,116,121,112,101,32,118,97,114,41,0,0,0,0,0,0,0};
static C_char C_TLS li144[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,56,49,52,32,103,56,50,54,41,0,0,0,0,0,0};
static C_char C_TLS li145[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,55,56,54,32,103,55,57,56,41,0,0,0,0,0,0};
static C_char C_TLS li146[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,55,51,56,32,108,32,108,101,110,41,0};
static C_char C_TLS li147[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,55,51,56,32,108,32,108,101,110,41,0};
static C_char C_TLS li148[] C_aligned={C_lihdr(0,0,29),40,97,49,50,51,53,50,32,105,110,112,117,116,32,114,101,110,97,109,101,32,99,111,109,112,97,114,101,41,0,0,0};
static C_char C_TLS li149[] C_aligned={C_lihdr(0,0,14),40,97,49,50,54,54,49,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li150[] C_aligned={C_lihdr(0,0,8),40,97,49,50,55,49,57,41};
static C_char C_TLS li151[] C_aligned={C_lihdr(0,0,32),40,97,49,50,55,50,57,32,116,121,112,101,54,57,53,32,112,114,101,100,54,57,55,32,112,117,114,101,54,57,57,41};
static C_char C_TLS li152[] C_aligned={C_lihdr(0,0,14),40,97,49,50,54,57,57,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li153[] C_aligned={C_lihdr(0,0,6),40,103,54,50,55,41,0,0};
static C_char C_TLS li154[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,54,50,49,32,103,54,51,51,41,0,0,0,0,0,0};
static C_char C_TLS li155[] C_aligned={C_lihdr(0,0,16),40,112,97,114,115,101,45,99,108,97,117,115,101,32,99,41};
static C_char C_TLS li156[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,54,53,50,32,103,54,54,52,41,0,0,0,0,0,0};
static C_char C_TLS li157[] C_aligned={C_lihdr(0,0,17),40,97,49,50,56,49,48,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li158[] C_aligned={C_lihdr(0,0,17),40,97,49,51,48,56,51,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li159[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_10002)
static void C_fcall f_10002(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10050)
static void C_fcall f_10050(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10098)
static void C_fcall f_10098(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10123)
static void C_ccall f_10123(C_word c,C_word *av) C_noret;
C_noret_decl(f_10132)
static void C_fcall f_10132(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10157)
static void C_ccall f_10157(C_word c,C_word *av) C_noret;
C_noret_decl(f_10166)
static void C_fcall f_10166(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10191)
static void C_ccall f_10191(C_word c,C_word *av) C_noret;
C_noret_decl(f_10200)
static void C_fcall f_10200(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10234)
static void C_fcall f_10234(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10270)
static void C_ccall f_10270(C_word c,C_word *av) C_noret;
C_noret_decl(f_10272)
static void C_ccall f_10272(C_word c,C_word *av) C_noret;
C_noret_decl(f_10276)
static void C_ccall f_10276(C_word c,C_word *av) C_noret;
C_noret_decl(f_10290)
static void C_ccall f_10290(C_word c,C_word *av) C_noret;
C_noret_decl(f_10294)
static void C_fcall f_10294(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10302)
static void C_ccall f_10302(C_word c,C_word *av) C_noret;
C_noret_decl(f_10305)
static void C_ccall f_10305(C_word c,C_word *av) C_noret;
C_noret_decl(f_10309)
static void C_fcall f_10309(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10317)
static void C_ccall f_10317(C_word c,C_word *av) C_noret;
C_noret_decl(f_10320)
static void C_ccall f_10320(C_word c,C_word *av) C_noret;
C_noret_decl(f_10327)
static void C_ccall f_10327(C_word c,C_word *av) C_noret;
C_noret_decl(f_10351)
static void C_ccall f_10351(C_word c,C_word *av) C_noret;
C_noret_decl(f_10363)
static void C_ccall f_10363(C_word c,C_word *av) C_noret;
C_noret_decl(f_10367)
static void C_ccall f_10367(C_word c,C_word *av) C_noret;
C_noret_decl(f_10379)
static void C_ccall f_10379(C_word c,C_word *av) C_noret;
C_noret_decl(f_10389)
static void C_fcall f_10389(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10437)
static void C_fcall f_10437(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10495)
static void C_ccall f_10495(C_word c,C_word *av) C_noret;
C_noret_decl(f_10510)
static void C_ccall f_10510(C_word c,C_word *av) C_noret;
C_noret_decl(f_10514)
static void C_ccall f_10514(C_word c,C_word *av) C_noret;
C_noret_decl(f_10526)
static void C_ccall f_10526(C_word c,C_word *av) C_noret;
C_noret_decl(f_10536)
static void C_fcall f_10536(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10584)
static void C_fcall f_10584(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10640)
static void C_ccall f_10640(C_word c,C_word *av) C_noret;
C_noret_decl(f_10649)
static void C_ccall f_10649(C_word c,C_word *av) C_noret;
C_noret_decl(f_10656)
static void C_ccall f_10656(C_word c,C_word *av) C_noret;
C_noret_decl(f_10665)
static void C_ccall f_10665(C_word c,C_word *av) C_noret;
C_noret_decl(f_10667)
static void C_fcall f_10667(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10717)
static void C_fcall f_10717(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10731)
static void C_ccall f_10731(C_word c,C_word *av) C_noret;
C_noret_decl(f_10737)
static void C_fcall f_10737(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10785)
static void C_fcall f_10785(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10819)
static void C_fcall f_10819(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10844)
static void C_ccall f_10844(C_word c,C_word *av) C_noret;
C_noret_decl(f_10853)
static void C_fcall f_10853(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10878)
static void C_ccall f_10878(C_word c,C_word *av) C_noret;
C_noret_decl(f_10887)
static void C_fcall f_10887(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10923)
static void C_ccall f_10923(C_word c,C_word *av) C_noret;
C_noret_decl(f_10925)
static void C_ccall f_10925(C_word c,C_word *av) C_noret;
C_noret_decl(f_10929)
static void C_ccall f_10929(C_word c,C_word *av) C_noret;
C_noret_decl(f_10940)
static void C_ccall f_10940(C_word c,C_word *av) C_noret;
C_noret_decl(f_10942)
static void C_ccall f_10942(C_word c,C_word *av) C_noret;
C_noret_decl(f_10946)
static void C_ccall f_10946(C_word c,C_word *av) C_noret;
C_noret_decl(f_10957)
static void C_ccall f_10957(C_word c,C_word *av) C_noret;
C_noret_decl(f_10959)
static void C_ccall f_10959(C_word c,C_word *av) C_noret;
C_noret_decl(f_10963)
static void C_ccall f_10963(C_word c,C_word *av) C_noret;
C_noret_decl(f_10978)
static void C_ccall f_10978(C_word c,C_word *av) C_noret;
C_noret_decl(f_10980)
static void C_ccall f_10980(C_word c,C_word *av) C_noret;
C_noret_decl(f_10992)
static void C_ccall f_10992(C_word c,C_word *av) C_noret;
C_noret_decl(f_10994)
static void C_ccall f_10994(C_word c,C_word *av) C_noret;
C_noret_decl(f_10998)
static void C_ccall f_10998(C_word c,C_word *av) C_noret;
C_noret_decl(f_11020)
static void C_ccall f_11020(C_word c,C_word *av) C_noret;
C_noret_decl(f_11085)
static void C_ccall f_11085(C_word c,C_word *av) C_noret;
C_noret_decl(f_11087)
static void C_ccall f_11087(C_word c,C_word *av) C_noret;
C_noret_decl(f_11091)
static void C_ccall f_11091(C_word c,C_word *av) C_noret;
C_noret_decl(f_11097)
static void C_ccall f_11097(C_word c,C_word *av) C_noret;
C_noret_decl(f_11100)
static void C_ccall f_11100(C_word c,C_word *av) C_noret;
C_noret_decl(f_11103)
static void C_ccall f_11103(C_word c,C_word *av) C_noret;
C_noret_decl(f_11109)
static void C_ccall f_11109(C_word c,C_word *av) C_noret;
C_noret_decl(f_11112)
static void C_ccall f_11112(C_word c,C_word *av) C_noret;
C_noret_decl(f_11115)
static void C_ccall f_11115(C_word c,C_word *av) C_noret;
C_noret_decl(f_11119)
static void C_fcall f_11119(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11132)
static void C_fcall f_11132(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11147)
static void C_ccall f_11147(C_word c,C_word *av) C_noret;
C_noret_decl(f_11179)
static void C_ccall f_11179(C_word c,C_word *av) C_noret;
C_noret_decl(f_11210)
static void C_ccall f_11210(C_word c,C_word *av) C_noret;
C_noret_decl(f_11212)
static void C_fcall f_11212(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11228)
static void C_ccall f_11228(C_word c,C_word *av) C_noret;
C_noret_decl(f_11231)
static void C_ccall f_11231(C_word c,C_word *av) C_noret;
C_noret_decl(f_11234)
static void C_ccall f_11234(C_word c,C_word *av) C_noret;
C_noret_decl(f_11248)
static void C_ccall f_11248(C_word c,C_word *av) C_noret;
C_noret_decl(f_11260)
static void C_ccall f_11260(C_word c,C_word *av) C_noret;
C_noret_decl(f_11264)
static void C_fcall f_11264(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11357)
static void C_ccall f_11357(C_word c,C_word *av) C_noret;
C_noret_decl(f_11361)
static void C_ccall f_11361(C_word c,C_word *av) C_noret;
C_noret_decl(f_11376)
static void C_ccall f_11376(C_word c,C_word *av) C_noret;
C_noret_decl(f_11396)
static void C_ccall f_11396(C_word c,C_word *av) C_noret;
C_noret_decl(f_11402)
static void C_ccall f_11402(C_word c,C_word *av) C_noret;
C_noret_decl(f_11422)
static void C_ccall f_11422(C_word c,C_word *av) C_noret;
C_noret_decl(f_11430)
static void C_fcall f_11430(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11455)
static void C_ccall f_11455(C_word c,C_word *av) C_noret;
C_noret_decl(f_11465)
static void C_ccall f_11465(C_word c,C_word *av) C_noret;
C_noret_decl(f_11472)
static void C_ccall f_11472(C_word c,C_word *av) C_noret;
C_noret_decl(f_11476)
static void C_ccall f_11476(C_word c,C_word *av) C_noret;
C_noret_decl(f_11480)
static void C_ccall f_11480(C_word c,C_word *av) C_noret;
C_noret_decl(f_11482)
static void C_ccall f_11482(C_word c,C_word *av) C_noret;
C_noret_decl(f_11486)
static void C_ccall f_11486(C_word c,C_word *av) C_noret;
C_noret_decl(f_11497)
static void C_ccall f_11497(C_word c,C_word *av) C_noret;
C_noret_decl(f_11499)
static void C_ccall f_11499(C_word c,C_word *av) C_noret;
C_noret_decl(f_11509)
static void C_ccall f_11509(C_word c,C_word *av) C_noret;
C_noret_decl(f_11522)
static void C_ccall f_11522(C_word c,C_word *av) C_noret;
C_noret_decl(f_11538)
static void C_ccall f_11538(C_word c,C_word *av) C_noret;
C_noret_decl(f_11544)
static void C_ccall f_11544(C_word c,C_word *av) C_noret;
C_noret_decl(f_11547)
static void C_ccall f_11547(C_word c,C_word *av) C_noret;
C_noret_decl(f_11553)
static void C_ccall f_11553(C_word c,C_word *av) C_noret;
C_noret_decl(f_11562)
static void C_fcall f_11562(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11569)
static void C_ccall f_11569(C_word c,C_word *av) C_noret;
C_noret_decl(f_11583)
static void C_ccall f_11583(C_word c,C_word *av) C_noret;
C_noret_decl(f_11594)
static void C_ccall f_11594(C_word c,C_word *av) C_noret;
C_noret_decl(f_11597)
static void C_ccall f_11597(C_word c,C_word *av) C_noret;
C_noret_decl(f_11603)
static void C_ccall f_11603(C_word c,C_word *av) C_noret;
C_noret_decl(f_11612)
static void C_fcall f_11612(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11619)
static void C_ccall f_11619(C_word c,C_word *av) C_noret;
C_noret_decl(f_11633)
static void C_ccall f_11633(C_word c,C_word *av) C_noret;
C_noret_decl(f_11645)
static void C_ccall f_11645(C_word c,C_word *av) C_noret;
C_noret_decl(f_11647)
static void C_ccall f_11647(C_word c,C_word *av) C_noret;
C_noret_decl(f_11667)
static void C_ccall f_11667(C_word c,C_word *av) C_noret;
C_noret_decl(f_11681)
static void C_fcall f_11681(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11694)
static void C_ccall f_11694(C_word c,C_word *av) C_noret;
C_noret_decl(f_11742)
static void C_ccall f_11742(C_word c,C_word *av) C_noret;
C_noret_decl(f_11744)
static void C_ccall f_11744(C_word c,C_word *av) C_noret;
C_noret_decl(f_11748)
static void C_ccall f_11748(C_word c,C_word *av) C_noret;
C_noret_decl(f_11755)
static void C_ccall f_11755(C_word c,C_word *av) C_noret;
C_noret_decl(f_11763)
static void C_ccall f_11763(C_word c,C_word *av) C_noret;
C_noret_decl(f_11771)
static void C_ccall f_11771(C_word c,C_word *av) C_noret;
C_noret_decl(f_11773)
static void C_ccall f_11773(C_word c,C_word *av) C_noret;
C_noret_decl(f_11777)
static void C_ccall f_11777(C_word c,C_word *av) C_noret;
C_noret_decl(f_11780)
static void C_ccall f_11780(C_word c,C_word *av) C_noret;
C_noret_decl(f_11801)
static void C_ccall f_11801(C_word c,C_word *av) C_noret;
C_noret_decl(f_11803)
static void C_ccall f_11803(C_word c,C_word *av) C_noret;
C_noret_decl(f_11807)
static void C_ccall f_11807(C_word c,C_word *av) C_noret;
C_noret_decl(f_11818)
static void C_ccall f_11818(C_word c,C_word *av) C_noret;
C_noret_decl(f_11820)
static void C_ccall f_11820(C_word c,C_word *av) C_noret;
C_noret_decl(f_11824)
static void C_ccall f_11824(C_word c,C_word *av) C_noret;
C_noret_decl(f_11833)
static void C_ccall f_11833(C_word c,C_word *av) C_noret;
C_noret_decl(f_11836)
static void C_ccall f_11836(C_word c,C_word *av) C_noret;
C_noret_decl(f_11839)
static void C_ccall f_11839(C_word c,C_word *av) C_noret;
C_noret_decl(f_11862)
static void C_ccall f_11862(C_word c,C_word *av) C_noret;
C_noret_decl(f_11878)
static void C_ccall f_11878(C_word c,C_word *av) C_noret;
C_noret_decl(f_11880)
static void C_ccall f_11880(C_word c,C_word *av) C_noret;
C_noret_decl(f_11884)
static void C_ccall f_11884(C_word c,C_word *av) C_noret;
C_noret_decl(f_11890)
static void C_ccall f_11890(C_word c,C_word *av) C_noret;
C_noret_decl(f_11893)
static void C_ccall f_11893(C_word c,C_word *av) C_noret;
C_noret_decl(f_11917)
static void C_fcall f_11917(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11921)
static void C_ccall f_11921(C_word c,C_word *av) C_noret;
C_noret_decl(f_11928)
static void C_ccall f_11928(C_word c,C_word *av) C_noret;
C_noret_decl(f_11955)
static void C_ccall f_11955(C_word c,C_word *av) C_noret;
C_noret_decl(f_11957)
static void C_fcall f_11957(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11982)
static void C_ccall f_11982(C_word c,C_word *av) C_noret;
C_noret_decl(f_12001)
static void C_ccall f_12001(C_word c,C_word *av) C_noret;
C_noret_decl(f_12003)
static void C_ccall f_12003(C_word c,C_word *av) C_noret;
C_noret_decl(f_12013)
static void C_ccall f_12013(C_word c,C_word *av) C_noret;
C_noret_decl(f_12023)
static void C_ccall f_12023(C_word c,C_word *av) C_noret;
C_noret_decl(f_12026)
static void C_ccall f_12026(C_word c,C_word *av) C_noret;
C_noret_decl(f_12029)
static void C_ccall f_12029(C_word c,C_word *av) C_noret;
C_noret_decl(f_12037)
static void C_fcall f_12037(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_12047)
static void C_ccall f_12047(C_word c,C_word *av) C_noret;
C_noret_decl(f_12050)
static void C_ccall f_12050(C_word c,C_word *av) C_noret;
C_noret_decl(f_12092)
static void C_ccall f_12092(C_word c,C_word *av) C_noret;
C_noret_decl(f_12094)
static void C_fcall f_12094(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12156)
static void C_fcall f_12156(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12177)
static void C_ccall f_12177(C_word c,C_word *av) C_noret;
C_noret_decl(f_12179)
static void C_fcall f_12179(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12204)
static void C_ccall f_12204(C_word c,C_word *av) C_noret;
C_noret_decl(f_12221)
static void C_ccall f_12221(C_word c,C_word *av) C_noret;
C_noret_decl(f_12223)
static void C_fcall f_12223(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12241)
static void C_ccall f_12241(C_word c,C_word *av) C_noret;
C_noret_decl(f_12277)
static void C_fcall f_12277(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12294)
static void C_ccall f_12294(C_word c,C_word *av) C_noret;
C_noret_decl(f_12351)
static void C_ccall f_12351(C_word c,C_word *av) C_noret;
C_noret_decl(f_12353)
static void C_ccall f_12353(C_word c,C_word *av) C_noret;
C_noret_decl(f_12363)
static void C_ccall f_12363(C_word c,C_word *av) C_noret;
C_noret_decl(f_12380)
static void C_ccall f_12380(C_word c,C_word *av) C_noret;
C_noret_decl(f_12401)
static void C_ccall f_12401(C_word c,C_word *av) C_noret;
C_noret_decl(f_12411)
static void C_ccall f_12411(C_word c,C_word *av) C_noret;
C_noret_decl(f_12419)
static void C_ccall f_12419(C_word c,C_word *av) C_noret;
C_noret_decl(f_12421)
static void C_ccall f_12421(C_word c,C_word *av) C_noret;
C_noret_decl(f_12437)
static void C_ccall f_12437(C_word c,C_word *av) C_noret;
C_noret_decl(f_12447)
static void C_fcall f_12447(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12481)
static void C_fcall f_12481(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12525)
static void C_ccall f_12525(C_word c,C_word *av) C_noret;
C_noret_decl(f_12531)
static void C_ccall f_12531(C_word c,C_word *av) C_noret;
C_noret_decl(f_12534)
static void C_ccall f_12534(C_word c,C_word *av) C_noret;
C_noret_decl(f_12540)
static void C_ccall f_12540(C_word c,C_word *av) C_noret;
C_noret_decl(f_12549)
static void C_fcall f_12549(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12556)
static void C_ccall f_12556(C_word c,C_word *av) C_noret;
C_noret_decl(f_12570)
static void C_ccall f_12570(C_word c,C_word *av) C_noret;
C_noret_decl(f_12581)
static void C_ccall f_12581(C_word c,C_word *av) C_noret;
C_noret_decl(f_12584)
static void C_ccall f_12584(C_word c,C_word *av) C_noret;
C_noret_decl(f_12590)
static void C_ccall f_12590(C_word c,C_word *av) C_noret;
C_noret_decl(f_12599)
static void C_fcall f_12599(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12606)
static void C_ccall f_12606(C_word c,C_word *av) C_noret;
C_noret_decl(f_12618)
static void C_fcall f_12618(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12629)
static void C_ccall f_12629(C_word c,C_word *av) C_noret;
C_noret_decl(f_12660)
static void C_ccall f_12660(C_word c,C_word *av) C_noret;
C_noret_decl(f_12662)
static void C_ccall f_12662(C_word c,C_word *av) C_noret;
C_noret_decl(f_12666)
static void C_ccall f_12666(C_word c,C_word *av) C_noret;
C_noret_decl(f_12682)
static void C_ccall f_12682(C_word c,C_word *av) C_noret;
C_noret_decl(f_12698)
static void C_ccall f_12698(C_word c,C_word *av) C_noret;
C_noret_decl(f_12700)
static void C_ccall f_12700(C_word c,C_word *av) C_noret;
C_noret_decl(f_12704)
static void C_ccall f_12704(C_word c,C_word *av) C_noret;
C_noret_decl(f_12713)
static void C_ccall f_12713(C_word c,C_word *av) C_noret;
C_noret_decl(f_12720)
static void C_ccall f_12720(C_word c,C_word *av) C_noret;
C_noret_decl(f_12728)
static void C_ccall f_12728(C_word c,C_word *av) C_noret;
C_noret_decl(f_12730)
static void C_ccall f_12730(C_word c,C_word *av) C_noret;
C_noret_decl(f_12755)
static void C_ccall f_12755(C_word c,C_word *av) C_noret;
C_noret_decl(f_12759)
static void C_fcall f_12759(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12809)
static void C_ccall f_12809(C_word c,C_word *av) C_noret;
C_noret_decl(f_12811)
static void C_ccall f_12811(C_word c,C_word *av) C_noret;
C_noret_decl(f_12815)
static void C_ccall f_12815(C_word c,C_word *av) C_noret;
C_noret_decl(f_12818)
static void C_ccall f_12818(C_word c,C_word *av) C_noret;
C_noret_decl(f_12821)
static void C_ccall f_12821(C_word c,C_word *av) C_noret;
C_noret_decl(f_12824)
static void C_ccall f_12824(C_word c,C_word *av) C_noret;
C_noret_decl(f_12827)
static void C_ccall f_12827(C_word c,C_word *av) C_noret;
C_noret_decl(f_12830)
static void C_ccall f_12830(C_word c,C_word *av) C_noret;
C_noret_decl(f_12832)
static void C_fcall f_12832(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12842)
static void C_fcall f_12842(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12867)
static C_word C_fcall f_12867(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_12881)
static void C_ccall f_12881(C_word c,C_word *av) C_noret;
C_noret_decl(f_12883)
static void C_fcall f_12883(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12962)
static void C_ccall f_12962(C_word c,C_word *av) C_noret;
C_noret_decl(f_12987)
static void C_ccall f_12987(C_word c,C_word *av) C_noret;
C_noret_decl(f_12994)
static void C_ccall f_12994(C_word c,C_word *av) C_noret;
C_noret_decl(f_12998)
static void C_ccall f_12998(C_word c,C_word *av) C_noret;
C_noret_decl(f_13018)
static void C_fcall f_13018(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13043)
static void C_ccall f_13043(C_word c,C_word *av) C_noret;
C_noret_decl(f_13082)
static void C_ccall f_13082(C_word c,C_word *av) C_noret;
C_noret_decl(f_13084)
static void C_ccall f_13084(C_word c,C_word *av) C_noret;
C_noret_decl(f_13088)
static void C_ccall f_13088(C_word c,C_word *av) C_noret;
C_noret_decl(f_13091)
static void C_ccall f_13091(C_word c,C_word *av) C_noret;
C_noret_decl(f_13094)
static void C_ccall f_13094(C_word c,C_word *av) C_noret;
C_noret_decl(f_13105)
static void C_ccall f_13105(C_word c,C_word *av) C_noret;
C_noret_decl(f_4219)
static void C_ccall f_4219(C_word c,C_word *av) C_noret;
C_noret_decl(f_4222)
static void C_ccall f_4222(C_word c,C_word *av) C_noret;
C_noret_decl(f_4225)
static void C_ccall f_4225(C_word c,C_word *av) C_noret;
C_noret_decl(f_4335)
static void C_fcall f_4335(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4353)
static void C_ccall f_4353(C_word c,C_word *av) C_noret;
C_noret_decl(f_4393)
static void C_fcall f_4393(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4407)
static void C_ccall f_4407(C_word c,C_word *av) C_noret;
C_noret_decl(f_5507)
static void C_ccall f_5507(C_word c,C_word *av) C_noret;
C_noret_decl(f_5510)
static void C_ccall f_5510(C_word c,C_word *av) C_noret;
C_noret_decl(f_5513)
static void C_ccall f_5513(C_word c,C_word *av) C_noret;
C_noret_decl(f_5516)
static void C_ccall f_5516(C_word c,C_word *av) C_noret;
C_noret_decl(f_5520)
static void C_ccall f_5520(C_word c,C_word *av) C_noret;
C_noret_decl(f_5523)
static void C_ccall f_5523(C_word c,C_word *av) C_noret;
C_noret_decl(f_5526)
static void C_ccall f_5526(C_word c,C_word *av) C_noret;
C_noret_decl(f_5529)
static void C_ccall f_5529(C_word c,C_word *av) C_noret;
C_noret_decl(f_5532)
static void C_ccall f_5532(C_word c,C_word *av) C_noret;
C_noret_decl(f_5535)
static void C_ccall f_5535(C_word c,C_word *av) C_noret;
C_noret_decl(f_5538)
static void C_ccall f_5538(C_word c,C_word *av) C_noret;
C_noret_decl(f_5541)
static void C_ccall f_5541(C_word c,C_word *av) C_noret;
C_noret_decl(f_5545)
static void C_ccall f_5545(C_word c,C_word *av) C_noret;
C_noret_decl(f_5548)
static void C_ccall f_5548(C_word c,C_word *av) C_noret;
C_noret_decl(f_5551)
static void C_ccall f_5551(C_word c,C_word *av) C_noret;
C_noret_decl(f_5554)
static void C_ccall f_5554(C_word c,C_word *av) C_noret;
C_noret_decl(f_5557)
static void C_ccall f_5557(C_word c,C_word *av) C_noret;
C_noret_decl(f_5560)
static void C_ccall f_5560(C_word c,C_word *av) C_noret;
C_noret_decl(f_5563)
static void C_ccall f_5563(C_word c,C_word *av) C_noret;
C_noret_decl(f_5567)
static void C_ccall f_5567(C_word c,C_word *av) C_noret;
C_noret_decl(f_5570)
static void C_ccall f_5570(C_word c,C_word *av) C_noret;
C_noret_decl(f_5573)
static void C_ccall f_5573(C_word c,C_word *av) C_noret;
C_noret_decl(f_5576)
static void C_ccall f_5576(C_word c,C_word *av) C_noret;
C_noret_decl(f_5579)
static void C_ccall f_5579(C_word c,C_word *av) C_noret;
C_noret_decl(f_5582)
static void C_ccall f_5582(C_word c,C_word *av) C_noret;
C_noret_decl(f_5585)
static void C_ccall f_5585(C_word c,C_word *av) C_noret;
C_noret_decl(f_5588)
static void C_ccall f_5588(C_word c,C_word *av) C_noret;
C_noret_decl(f_5591)
static void C_ccall f_5591(C_word c,C_word *av) C_noret;
C_noret_decl(f_5594)
static void C_ccall f_5594(C_word c,C_word *av) C_noret;
C_noret_decl(f_5597)
static void C_ccall f_5597(C_word c,C_word *av) C_noret;
C_noret_decl(f_5600)
static void C_ccall f_5600(C_word c,C_word *av) C_noret;
C_noret_decl(f_5603)
static void C_ccall f_5603(C_word c,C_word *av) C_noret;
C_noret_decl(f_5606)
static void C_ccall f_5606(C_word c,C_word *av) C_noret;
C_noret_decl(f_5610)
static void C_ccall f_5610(C_word c,C_word *av) C_noret;
C_noret_decl(f_5613)
static void C_ccall f_5613(C_word c,C_word *av) C_noret;
C_noret_decl(f_5616)
static void C_ccall f_5616(C_word c,C_word *av) C_noret;
C_noret_decl(f_5619)
static void C_ccall f_5619(C_word c,C_word *av) C_noret;
C_noret_decl(f_5622)
static void C_ccall f_5622(C_word c,C_word *av) C_noret;
C_noret_decl(f_5625)
static void C_ccall f_5625(C_word c,C_word *av) C_noret;
C_noret_decl(f_5628)
static void C_ccall f_5628(C_word c,C_word *av) C_noret;
C_noret_decl(f_5631)
static void C_ccall f_5631(C_word c,C_word *av) C_noret;
C_noret_decl(f_5634)
static void C_ccall f_5634(C_word c,C_word *av) C_noret;
C_noret_decl(f_5637)
static void C_ccall f_5637(C_word c,C_word *av) C_noret;
C_noret_decl(f_5640)
static void C_ccall f_5640(C_word c,C_word *av) C_noret;
C_noret_decl(f_5643)
static void C_ccall f_5643(C_word c,C_word *av) C_noret;
C_noret_decl(f_5646)
static void C_ccall f_5646(C_word c,C_word *av) C_noret;
C_noret_decl(f_5649)
static void C_ccall f_5649(C_word c,C_word *av) C_noret;
C_noret_decl(f_5652)
static void C_ccall f_5652(C_word c,C_word *av) C_noret;
C_noret_decl(f_5655)
static void C_ccall f_5655(C_word c,C_word *av) C_noret;
C_noret_decl(f_5658)
static void C_ccall f_5658(C_word c,C_word *av) C_noret;
C_noret_decl(f_5661)
static void C_ccall f_5661(C_word c,C_word *av) C_noret;
C_noret_decl(f_5664)
static void C_ccall f_5664(C_word c,C_word *av) C_noret;
C_noret_decl(f_5667)
static void C_ccall f_5667(C_word c,C_word *av) C_noret;
C_noret_decl(f_5671)
static void C_ccall f_5671(C_word c,C_word *av) C_noret;
C_noret_decl(f_5674)
static void C_ccall f_5674(C_word c,C_word *av) C_noret;
C_noret_decl(f_5677)
static void C_ccall f_5677(C_word c,C_word *av) C_noret;
C_noret_decl(f_5680)
static void C_ccall f_5680(C_word c,C_word *av) C_noret;
C_noret_decl(f_5684)
static void C_ccall f_5684(C_word c,C_word *av) C_noret;
C_noret_decl(f_5686)
static void C_ccall f_5686(C_word c,C_word *av) C_noret;
C_noret_decl(f_5690)
static void C_ccall f_5690(C_word c,C_word *av) C_noret;
C_noret_decl(f_5733)
static void C_ccall f_5733(C_word c,C_word *av) C_noret;
C_noret_decl(f_5735)
static void C_ccall f_5735(C_word c,C_word *av) C_noret;
C_noret_decl(f_5739)
static void C_ccall f_5739(C_word c,C_word *av) C_noret;
C_noret_decl(f_5750)
static void C_ccall f_5750(C_word c,C_word *av) C_noret;
C_noret_decl(f_5753)
static void C_fcall f_5753(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5776)
static void C_fcall f_5776(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5795)
static void C_ccall f_5795(C_word c,C_word *av) C_noret;
C_noret_decl(f_5805)
static void C_ccall f_5805(C_word c,C_word *av) C_noret;
C_noret_decl(f_5812)
static void C_ccall f_5812(C_word c,C_word *av) C_noret;
C_noret_decl(f_5822)
static void C_ccall f_5822(C_word c,C_word *av) C_noret;
C_noret_decl(f_5824)
static void C_ccall f_5824(C_word c,C_word *av) C_noret;
C_noret_decl(f_5832)
static void C_ccall f_5832(C_word c,C_word *av) C_noret;
C_noret_decl(f_5840)
static void C_ccall f_5840(C_word c,C_word *av) C_noret;
C_noret_decl(f_5842)
static void C_ccall f_5842(C_word c,C_word *av) C_noret;
C_noret_decl(f_5846)
static void C_ccall f_5846(C_word c,C_word *av) C_noret;
C_noret_decl(f_5905)
static void C_ccall f_5905(C_word c,C_word *av) C_noret;
C_noret_decl(f_5907)
static void C_ccall f_5907(C_word c,C_word *av) C_noret;
C_noret_decl(f_5911)
static void C_ccall f_5911(C_word c,C_word *av) C_noret;
C_noret_decl(f_5914)
static void C_ccall f_5914(C_word c,C_word *av) C_noret;
C_noret_decl(f_5917)
static void C_ccall f_5917(C_word c,C_word *av) C_noret;
C_noret_decl(f_5920)
static void C_ccall f_5920(C_word c,C_word *av) C_noret;
C_noret_decl(f_5927)
static void C_fcall f_5927(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_5937)
static void C_ccall f_5937(C_word c,C_word *av) C_noret;
C_noret_decl(f_5940)
static void C_ccall f_5940(C_word c,C_word *av) C_noret;
C_noret_decl(f_5946)
static void C_ccall f_5946(C_word c,C_word *av) C_noret;
C_noret_decl(f_5957)
static void C_ccall f_5957(C_word c,C_word *av) C_noret;
C_noret_decl(f_5973)
static void C_ccall f_5973(C_word c,C_word *av) C_noret;
C_noret_decl(f_5983)
static void C_ccall f_5983(C_word c,C_word *av) C_noret;
C_noret_decl(f_6006)
static void C_ccall f_6006(C_word c,C_word *av) C_noret;
C_noret_decl(f_6009)
static void C_ccall f_6009(C_word c,C_word *av) C_noret;
C_noret_decl(f_6026)
static void C_ccall f_6026(C_word c,C_word *av) C_noret;
C_noret_decl(f_6032)
static void C_ccall f_6032(C_word c,C_word *av) C_noret;
C_noret_decl(f_6049)
static void C_ccall f_6049(C_word c,C_word *av) C_noret;
C_noret_decl(f_6072)
static void C_ccall f_6072(C_word c,C_word *av) C_noret;
C_noret_decl(f_6100)
static void C_ccall f_6100(C_word c,C_word *av) C_noret;
C_noret_decl(f_6102)
static void C_ccall f_6102(C_word c,C_word *av) C_noret;
C_noret_decl(f_6106)
static void C_ccall f_6106(C_word c,C_word *av) C_noret;
C_noret_decl(f_6109)
static void C_ccall f_6109(C_word c,C_word *av) C_noret;
C_noret_decl(f_6112)
static void C_ccall f_6112(C_word c,C_word *av) C_noret;
C_noret_decl(f_6115)
static void C_ccall f_6115(C_word c,C_word *av) C_noret;
C_noret_decl(f_6122)
static void C_fcall f_6122(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_6132)
static void C_ccall f_6132(C_word c,C_word *av) C_noret;
C_noret_decl(f_6135)
static void C_ccall f_6135(C_word c,C_word *av) C_noret;
C_noret_decl(f_6141)
static void C_ccall f_6141(C_word c,C_word *av) C_noret;
C_noret_decl(f_6148)
static void C_ccall f_6148(C_word c,C_word *av) C_noret;
C_noret_decl(f_6164)
static void C_ccall f_6164(C_word c,C_word *av) C_noret;
C_noret_decl(f_6174)
static void C_ccall f_6174(C_word c,C_word *av) C_noret;
C_noret_decl(f_6197)
static void C_ccall f_6197(C_word c,C_word *av) C_noret;
C_noret_decl(f_6200)
static void C_ccall f_6200(C_word c,C_word *av) C_noret;
C_noret_decl(f_6217)
static void C_ccall f_6217(C_word c,C_word *av) C_noret;
C_noret_decl(f_6223)
static void C_ccall f_6223(C_word c,C_word *av) C_noret;
C_noret_decl(f_6272)
static void C_ccall f_6272(C_word c,C_word *av) C_noret;
C_noret_decl(f_6274)
static void C_ccall f_6274(C_word c,C_word *av) C_noret;
C_noret_decl(f_6278)
static void C_ccall f_6278(C_word c,C_word *av) C_noret;
C_noret_decl(f_6284)
static void C_ccall f_6284(C_word c,C_word *av) C_noret;
C_noret_decl(f_6287)
static void C_ccall f_6287(C_word c,C_word *av) C_noret;
C_noret_decl(f_6299)
static void C_ccall f_6299(C_word c,C_word *av) C_noret;
C_noret_decl(f_6302)
static void C_ccall f_6302(C_word c,C_word *av) C_noret;
C_noret_decl(f_6308)
static void C_ccall f_6308(C_word c,C_word *av) C_noret;
C_noret_decl(f_6311)
static void C_ccall f_6311(C_word c,C_word *av) C_noret;
C_noret_decl(f_6320)
static void C_ccall f_6320(C_word c,C_word *av) C_noret;
C_noret_decl(f_6321)
static void C_fcall f_6321(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6337)
static void C_ccall f_6337(C_word c,C_word *av) C_noret;
C_noret_decl(f_6368)
static void C_ccall f_6368(C_word c,C_word *av) C_noret;
C_noret_decl(f_6370)
static void C_fcall f_6370(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6389)
static void C_fcall f_6389(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6395)
static void C_fcall f_6395(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6402)
static void C_fcall f_6402(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6406)
static void C_ccall f_6406(C_word c,C_word *av) C_noret;
C_noret_decl(f_6410)
static void C_fcall f_6410(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6414)
static void C_ccall f_6414(C_word c,C_word *av) C_noret;
C_noret_decl(f_6442)
static void C_ccall f_6442(C_word c,C_word *av) C_noret;
C_noret_decl(f_6463)
static void C_ccall f_6463(C_word c,C_word *av) C_noret;
C_noret_decl(f_6542)
static void C_ccall f_6542(C_word c,C_word *av) C_noret;
C_noret_decl(f_6585)
static C_word C_fcall f_6585(C_word t0,C_word t1);
C_noret_decl(f_6598)
static void C_ccall f_6598(C_word c,C_word *av) C_noret;
C_noret_decl(f_6600)
static void C_fcall f_6600(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6638)
static void C_fcall f_6638(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6648)
static void C_ccall f_6648(C_word c,C_word *av) C_noret;
C_noret_decl(f_6661)
static void C_fcall f_6661(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6696)
static void C_ccall f_6696(C_word c,C_word *av) C_noret;
C_noret_decl(f_6703)
static void C_ccall f_6703(C_word c,C_word *av) C_noret;
C_noret_decl(f_6707)
static void C_ccall f_6707(C_word c,C_word *av) C_noret;
C_noret_decl(f_6711)
static void C_ccall f_6711(C_word c,C_word *av) C_noret;
C_noret_decl(f_6713)
static void C_ccall f_6713(C_word c,C_word *av) C_noret;
C_noret_decl(f_6717)
static void C_ccall f_6717(C_word c,C_word *av) C_noret;
C_noret_decl(f_6725)
static void C_ccall f_6725(C_word c,C_word *av) C_noret;
C_noret_decl(f_6734)
static void C_ccall f_6734(C_word c,C_word *av) C_noret;
C_noret_decl(f_6737)
static void C_ccall f_6737(C_word c,C_word *av) C_noret;
C_noret_decl(f_6740)
static void C_ccall f_6740(C_word c,C_word *av) C_noret;
C_noret_decl(f_6762)
static void C_ccall f_6762(C_word c,C_word *av) C_noret;
C_noret_decl(f_6769)
static void C_ccall f_6769(C_word c,C_word *av) C_noret;
C_noret_decl(f_6773)
static void C_ccall f_6773(C_word c,C_word *av) C_noret;
C_noret_decl(f_6784)
static void C_ccall f_6784(C_word c,C_word *av) C_noret;
C_noret_decl(f_6787)
static void C_ccall f_6787(C_word c,C_word *av) C_noret;
C_noret_decl(f_6790)
static void C_ccall f_6790(C_word c,C_word *av) C_noret;
C_noret_decl(f_6804)
static void C_ccall f_6804(C_word c,C_word *av) C_noret;
C_noret_decl(f_6811)
static void C_ccall f_6811(C_word c,C_word *av) C_noret;
C_noret_decl(f_6815)
static void C_ccall f_6815(C_word c,C_word *av) C_noret;
C_noret_decl(f_6827)
static void C_ccall f_6827(C_word c,C_word *av) C_noret;
C_noret_decl(f_6829)
static void C_ccall f_6829(C_word c,C_word *av) C_noret;
C_noret_decl(f_6833)
static void C_ccall f_6833(C_word c,C_word *av) C_noret;
C_noret_decl(f_6835)
static void C_fcall f_6835(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6841)
static void C_fcall f_6841(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6855)
static void C_ccall f_6855(C_word c,C_word *av) C_noret;
C_noret_decl(f_6859)
static void C_ccall f_6859(C_word c,C_word *av) C_noret;
C_noret_decl(f_6867)
static void C_ccall f_6867(C_word c,C_word *av) C_noret;
C_noret_decl(f_6870)
static void C_ccall f_6870(C_word c,C_word *av) C_noret;
C_noret_decl(f_6873)
static void C_ccall f_6873(C_word c,C_word *av) C_noret;
C_noret_decl(f_6876)
static void C_ccall f_6876(C_word c,C_word *av) C_noret;
C_noret_decl(f_6879)
static void C_ccall f_6879(C_word c,C_word *av) C_noret;
C_noret_decl(f_6882)
static void C_ccall f_6882(C_word c,C_word *av) C_noret;
C_noret_decl(f_6885)
static void C_ccall f_6885(C_word c,C_word *av) C_noret;
C_noret_decl(f_6888)
static void C_ccall f_6888(C_word c,C_word *av) C_noret;
C_noret_decl(f_6891)
static void C_ccall f_6891(C_word c,C_word *av) C_noret;
C_noret_decl(f_6894)
static void C_ccall f_6894(C_word c,C_word *av) C_noret;
C_noret_decl(f_6901)
static void C_ccall f_6901(C_word c,C_word *av) C_noret;
C_noret_decl(f_6917)
static void C_ccall f_6917(C_word c,C_word *av) C_noret;
C_noret_decl(f_6919)
static void C_fcall f_6919(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6927)
static void C_fcall f_6927(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6937)
static void C_ccall f_6937(C_word c,C_word *av) C_noret;
C_noret_decl(f_6941)
static void C_ccall f_6941(C_word c,C_word *av) C_noret;
C_noret_decl(f_6951)
static void C_fcall f_6951(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6955)
static void C_ccall f_6955(C_word c,C_word *av) C_noret;
C_noret_decl(f_6957)
static void C_ccall f_6957(C_word c,C_word *av) C_noret;
C_noret_decl(f_6965)
static void C_ccall f_6965(C_word c,C_word *av) C_noret;
C_noret_decl(f_6967)
static void C_ccall f_6967(C_word c,C_word *av) C_noret;
C_noret_decl(f_6971)
static void C_ccall f_6971(C_word c,C_word *av) C_noret;
C_noret_decl(f_6993)
static void C_ccall f_6993(C_word c,C_word *av) C_noret;
C_noret_decl(f_6995)
static void C_fcall f_6995(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7043)
static void C_fcall f_7043(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7096)
static void C_ccall f_7096(C_word c,C_word *av) C_noret;
C_noret_decl(f_7107)
static void C_ccall f_7107(C_word c,C_word *av) C_noret;
C_noret_decl(f_7144)
static void C_ccall f_7144(C_word c,C_word *av) C_noret;
C_noret_decl(f_7172)
static void C_ccall f_7172(C_word c,C_word *av) C_noret;
C_noret_decl(f_7199)
static void C_ccall f_7199(C_word c,C_word *av) C_noret;
C_noret_decl(f_7209)
static void C_ccall f_7209(C_word c,C_word *av) C_noret;
C_noret_decl(f_7211)
static void C_fcall f_7211(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7236)
static void C_ccall f_7236(C_word c,C_word *av) C_noret;
C_noret_decl(f_7271)
static void C_ccall f_7271(C_word c,C_word *av) C_noret;
C_noret_decl(f_7273)
static void C_ccall f_7273(C_word c,C_word *av) C_noret;
C_noret_decl(f_7277)
static void C_ccall f_7277(C_word c,C_word *av) C_noret;
C_noret_decl(f_7289)
static void C_ccall f_7289(C_word c,C_word *av) C_noret;
C_noret_decl(f_7292)
static void C_ccall f_7292(C_word c,C_word *av) C_noret;
C_noret_decl(f_7295)
static void C_ccall f_7295(C_word c,C_word *av) C_noret;
C_noret_decl(f_7298)
static void C_ccall f_7298(C_word c,C_word *av) C_noret;
C_noret_decl(f_7309)
static void C_ccall f_7309(C_word c,C_word *av) C_noret;
C_noret_decl(f_7311)
static void C_fcall f_7311(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7337)
static void C_ccall f_7337(C_word c,C_word *av) C_noret;
C_noret_decl(f_7348)
static void C_ccall f_7348(C_word c,C_word *av) C_noret;
C_noret_decl(f_7431)
static void C_ccall f_7431(C_word c,C_word *av) C_noret;
C_noret_decl(f_7433)
static void C_ccall f_7433(C_word c,C_word *av) C_noret;
C_noret_decl(f_7437)
static void C_ccall f_7437(C_word c,C_word *av) C_noret;
C_noret_decl(f_7440)
static void C_ccall f_7440(C_word c,C_word *av) C_noret;
C_noret_decl(f_7470)
static void C_ccall f_7470(C_word c,C_word *av) C_noret;
C_noret_decl(f_7480)
static void C_ccall f_7480(C_word c,C_word *av) C_noret;
C_noret_decl(f_7508)
static void C_ccall f_7508(C_word c,C_word *av) C_noret;
C_noret_decl(f_7510)
static void C_ccall f_7510(C_word c,C_word *av) C_noret;
C_noret_decl(f_7514)
static void C_ccall f_7514(C_word c,C_word *av) C_noret;
C_noret_decl(f_7533)
static void C_ccall f_7533(C_word c,C_word *av) C_noret;
C_noret_decl(f_7537)
static void C_ccall f_7537(C_word c,C_word *av) C_noret;
C_noret_decl(f_7541)
static void C_ccall f_7541(C_word c,C_word *av) C_noret;
C_noret_decl(f_7543)
static void C_fcall f_7543(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_7564)
static void C_ccall f_7564(C_word c,C_word *av) C_noret;
C_noret_decl(f_7582)
static void C_ccall f_7582(C_word c,C_word *av) C_noret;
C_noret_decl(f_7590)
static void C_ccall f_7590(C_word c,C_word *av) C_noret;
C_noret_decl(f_7594)
static void C_ccall f_7594(C_word c,C_word *av) C_noret;
C_noret_decl(f_7604)
static void C_fcall f_7604(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_7610)
static void C_fcall f_7610(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7624)
static void C_ccall f_7624(C_word c,C_word *av) C_noret;
C_noret_decl(f_7650)
static void C_ccall f_7650(C_word c,C_word *av) C_noret;
C_noret_decl(f_7674)
static void C_ccall f_7674(C_word c,C_word *av) C_noret;
C_noret_decl(f_7682)
static void C_ccall f_7682(C_word c,C_word *av) C_noret;
C_noret_decl(f_7690)
static void C_ccall f_7690(C_word c,C_word *av) C_noret;
C_noret_decl(f_7694)
static void C_ccall f_7694(C_word c,C_word *av) C_noret;
C_noret_decl(f_7697)
static void C_ccall f_7697(C_word c,C_word *av) C_noret;
C_noret_decl(f_7700)
static void C_ccall f_7700(C_word c,C_word *av) C_noret;
C_noret_decl(f_7709)
static void C_ccall f_7709(C_word c,C_word *av) C_noret;
C_noret_decl(f_7710)
static void C_fcall f_7710(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7718)
static void C_ccall f_7718(C_word c,C_word *av) C_noret;
C_noret_decl(f_7722)
static void C_ccall f_7722(C_word c,C_word *av) C_noret;
C_noret_decl(f_7726)
static void C_fcall f_7726(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7734)
static void C_ccall f_7734(C_word c,C_word *av) C_noret;
C_noret_decl(f_7740)
static void C_ccall f_7740(C_word c,C_word *av) C_noret;
C_noret_decl(f_7746)
static void C_ccall f_7746(C_word c,C_word *av) C_noret;
C_noret_decl(f_7749)
static void C_ccall f_7749(C_word c,C_word *av) C_noret;
C_noret_decl(f_7752)
static void C_ccall f_7752(C_word c,C_word *av) C_noret;
C_noret_decl(f_7756)
static void C_fcall f_7756(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7764)
static void C_ccall f_7764(C_word c,C_word *av) C_noret;
C_noret_decl(f_7767)
static void C_ccall f_7767(C_word c,C_word *av) C_noret;
C_noret_decl(f_7770)
static void C_ccall f_7770(C_word c,C_word *av) C_noret;
C_noret_decl(f_7773)
static void C_ccall f_7773(C_word c,C_word *av) C_noret;
C_noret_decl(f_7780)
static void C_ccall f_7780(C_word c,C_word *av) C_noret;
C_noret_decl(f_7806)
static void C_fcall f_7806(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7831)
static void C_ccall f_7831(C_word c,C_word *av) C_noret;
C_noret_decl(f_7840)
static void C_fcall f_7840(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7874)
static void C_fcall f_7874(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7899)
static void C_ccall f_7899(C_word c,C_word *av) C_noret;
C_noret_decl(f_7908)
static void C_fcall f_7908(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7956)
static void C_ccall f_7956(C_word c,C_word *av) C_noret;
C_noret_decl(f_7958)
static void C_ccall f_7958(C_word c,C_word *av) C_noret;
C_noret_decl(f_7962)
static void C_ccall f_7962(C_word c,C_word *av) C_noret;
C_noret_decl(f_7972)
static void C_fcall f_7972(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7999)
static void C_ccall f_7999(C_word c,C_word *av) C_noret;
C_noret_decl(f_8002)
static void C_ccall f_8002(C_word c,C_word *av) C_noret;
C_noret_decl(f_8017)
static void C_ccall f_8017(C_word c,C_word *av) C_noret;
C_noret_decl(f_8025)
static void C_ccall f_8025(C_word c,C_word *av) C_noret;
C_noret_decl(f_8034)
static void C_ccall f_8034(C_word c,C_word *av) C_noret;
C_noret_decl(f_8049)
static void C_ccall f_8049(C_word c,C_word *av) C_noret;
C_noret_decl(f_8059)
static void C_ccall f_8059(C_word c,C_word *av) C_noret;
C_noret_decl(f_8062)
static void C_ccall f_8062(C_word c,C_word *av) C_noret;
C_noret_decl(f_8078)
static void C_ccall f_8078(C_word c,C_word *av) C_noret;
C_noret_decl(f_8098)
static void C_ccall f_8098(C_word c,C_word *av) C_noret;
C_noret_decl(f_8100)
static void C_ccall f_8100(C_word c,C_word *av) C_noret;
C_noret_decl(f_8102)
static void C_ccall f_8102(C_word c,C_word *av) C_noret;
C_noret_decl(f_8106)
static void C_ccall f_8106(C_word c,C_word *av) C_noret;
C_noret_decl(f_8115)
static void C_fcall f_8115(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8118)
static void C_ccall f_8118(C_word c,C_word *av) C_noret;
C_noret_decl(f_8127)
static void C_fcall f_8127(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8143)
static void C_ccall f_8143(C_word c,C_word *av) C_noret;
C_noret_decl(f_8147)
static void C_ccall f_8147(C_word c,C_word *av) C_noret;
C_noret_decl(f_8190)
static void C_ccall f_8190(C_word c,C_word *av) C_noret;
C_noret_decl(f_8202)
static void C_ccall f_8202(C_word c,C_word *av) C_noret;
C_noret_decl(f_8204)
static void C_ccall f_8204(C_word c,C_word *av) C_noret;
C_noret_decl(f_8208)
static void C_ccall f_8208(C_word c,C_word *av) C_noret;
C_noret_decl(f_8211)
static void C_ccall f_8211(C_word c,C_word *av) C_noret;
C_noret_decl(f_8230)
static void C_ccall f_8230(C_word c,C_word *av) C_noret;
C_noret_decl(f_8246)
static void C_ccall f_8246(C_word c,C_word *av) C_noret;
C_noret_decl(f_8248)
static void C_ccall f_8248(C_word c,C_word *av) C_noret;
C_noret_decl(f_8252)
static void C_ccall f_8252(C_word c,C_word *av) C_noret;
C_noret_decl(f_8255)
static void C_ccall f_8255(C_word c,C_word *av) C_noret;
C_noret_decl(f_8268)
static void C_ccall f_8268(C_word c,C_word *av) C_noret;
C_noret_decl(f_8270)
static void C_ccall f_8270(C_word c,C_word *av) C_noret;
C_noret_decl(f_8274)
static void C_ccall f_8274(C_word c,C_word *av) C_noret;
C_noret_decl(f_8288)
static void C_ccall f_8288(C_word c,C_word *av) C_noret;
C_noret_decl(f_8294)
static void C_ccall f_8294(C_word c,C_word *av) C_noret;
C_noret_decl(f_8316)
static void C_ccall f_8316(C_word c,C_word *av) C_noret;
C_noret_decl(f_8322)
static void C_ccall f_8322(C_word c,C_word *av) C_noret;
C_noret_decl(f_8326)
static void C_ccall f_8326(C_word c,C_word *av) C_noret;
C_noret_decl(f_8336)
static void C_ccall f_8336(C_word c,C_word *av) C_noret;
C_noret_decl(f_8338)
static void C_fcall f_8338(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8367)
static void C_ccall f_8367(C_word c,C_word *av) C_noret;
C_noret_decl(f_8386)
static void C_fcall f_8386(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8420)
static void C_fcall f_8420(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8444)
static void C_ccall f_8444(C_word c,C_word *av) C_noret;
C_noret_decl(f_8446)
static void C_ccall f_8446(C_word c,C_word *av) C_noret;
C_noret_decl(f_8450)
static void C_ccall f_8450(C_word c,C_word *av) C_noret;
C_noret_decl(f_8456)
static void C_fcall f_8456(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8490)
static void C_fcall f_8490(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8526)
static void C_ccall f_8526(C_word c,C_word *av) C_noret;
C_noret_decl(f_8528)
static void C_ccall f_8528(C_word c,C_word *av) C_noret;
C_noret_decl(f_8532)
static void C_ccall f_8532(C_word c,C_word *av) C_noret;
C_noret_decl(f_8540)
static void C_ccall f_8540(C_word c,C_word *av) C_noret;
C_noret_decl(f_8545)
static void C_fcall f_8545(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8570)
static void C_ccall f_8570(C_word c,C_word *av) C_noret;
C_noret_decl(f_8580)
static void C_ccall f_8580(C_word c,C_word *av) C_noret;
C_noret_decl(f_8582)
static void C_ccall f_8582(C_word c,C_word *av) C_noret;
C_noret_decl(f_8586)
static void C_ccall f_8586(C_word c,C_word *av) C_noret;
C_noret_decl(f_8592)
static void C_ccall f_8592(C_word c,C_word *av) C_noret;
C_noret_decl(f_8613)
static void C_ccall f_8613(C_word c,C_word *av) C_noret;
C_noret_decl(f_8620)
static void C_ccall f_8620(C_word c,C_word *av) C_noret;
C_noret_decl(f_8643)
static void C_ccall f_8643(C_word c,C_word *av) C_noret;
C_noret_decl(f_8647)
static void C_ccall f_8647(C_word c,C_word *av) C_noret;
C_noret_decl(f_8668)
static void C_ccall f_8668(C_word c,C_word *av) C_noret;
C_noret_decl(f_8671)
static void C_ccall f_8671(C_word c,C_word *av) C_noret;
C_noret_decl(f_8675)
static void C_fcall f_8675(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8683)
static void C_ccall f_8683(C_word c,C_word *av) C_noret;
C_noret_decl(f_8687)
static void C_ccall f_8687(C_word c,C_word *av) C_noret;
C_noret_decl(f_8693)
static void C_ccall f_8693(C_word c,C_word *av) C_noret;
C_noret_decl(f_8694)
static void C_ccall f_8694(C_word c,C_word *av) C_noret;
C_noret_decl(f_8705)
static void C_ccall f_8705(C_word c,C_word *av) C_noret;
C_noret_decl(f_8720)
static void C_ccall f_8720(C_word c,C_word *av) C_noret;
C_noret_decl(f_8722)
static void C_fcall f_8722(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8741)
static void C_fcall f_8741(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8749)
static void C_ccall f_8749(C_word c,C_word *av) C_noret;
C_noret_decl(f_8755)
static void C_ccall f_8755(C_word c,C_word *av) C_noret;
C_noret_decl(f_8757)
static void C_fcall f_8757(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8782)
static void C_ccall f_8782(C_word c,C_word *av) C_noret;
C_noret_decl(f_8806)
static void C_ccall f_8806(C_word c,C_word *av) C_noret;
C_noret_decl(f_8843)
static void C_ccall f_8843(C_word c,C_word *av) C_noret;
C_noret_decl(f_8871)
static void C_fcall f_8871(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8905)
static void C_fcall f_8905(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8936)
static void C_ccall f_8936(C_word c,C_word *av) C_noret;
C_noret_decl(f_8943)
static void C_ccall f_8943(C_word c,C_word *av) C_noret;
C_noret_decl(f_8949)
static void C_fcall f_8949(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8974)
static void C_ccall f_8974(C_word c,C_word *av) C_noret;
C_noret_decl(f_8983)
static void C_fcall f_8983(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8996)
static void C_ccall f_8996(C_word c,C_word *av) C_noret;
C_noret_decl(f_9021)
static void C_fcall f_9021(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9057)
static void C_ccall f_9057(C_word c,C_word *av) C_noret;
C_noret_decl(f_9059)
static void C_ccall f_9059(C_word c,C_word *av) C_noret;
C_noret_decl(f_9063)
static void C_ccall f_9063(C_word c,C_word *av) C_noret;
C_noret_decl(f_9070)
static void C_ccall f_9070(C_word c,C_word *av) C_noret;
C_noret_decl(f_9074)
static void C_ccall f_9074(C_word c,C_word *av) C_noret;
C_noret_decl(f_9082)
static void C_ccall f_9082(C_word c,C_word *av) C_noret;
C_noret_decl(f_9096)
static void C_ccall f_9096(C_word c,C_word *av) C_noret;
C_noret_decl(f_9102)
static void C_ccall f_9102(C_word c,C_word *av) C_noret;
C_noret_decl(f_9109)
static void C_ccall f_9109(C_word c,C_word *av) C_noret;
C_noret_decl(f_9115)
static void C_ccall f_9115(C_word c,C_word *av) C_noret;
C_noret_decl(f_9128)
static void C_fcall f_9128(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9162)
static void C_fcall f_9162(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9172)
static void C_ccall f_9172(C_word c,C_word *av) C_noret;
C_noret_decl(f_9187)
static void C_ccall f_9187(C_word c,C_word *av) C_noret;
C_noret_decl(f_9189)
static void C_ccall f_9189(C_word c,C_word *av) C_noret;
C_noret_decl(f_9193)
static void C_ccall f_9193(C_word c,C_word *av) C_noret;
C_noret_decl(f_9208)
static void C_ccall f_9208(C_word c,C_word *av) C_noret;
C_noret_decl(f_9210)
static void C_ccall f_9210(C_word c,C_word *av) C_noret;
C_noret_decl(f_9214)
static void C_ccall f_9214(C_word c,C_word *av) C_noret;
C_noret_decl(f_9236)
static void C_ccall f_9236(C_word c,C_word *av) C_noret;
C_noret_decl(f_9238)
static void C_ccall f_9238(C_word c,C_word *av) C_noret;
C_noret_decl(f_9242)
static void C_ccall f_9242(C_word c,C_word *av) C_noret;
C_noret_decl(f_9260)
static void C_ccall f_9260(C_word c,C_word *av) C_noret;
C_noret_decl(f_9262)
static void C_ccall f_9262(C_word c,C_word *av) C_noret;
C_noret_decl(f_9271)
static void C_fcall f_9271(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9277)
static void C_ccall f_9277(C_word c,C_word *av) C_noret;
C_noret_decl(f_9283)
static void C_ccall f_9283(C_word c,C_word *av) C_noret;
C_noret_decl(f_9302)
static void C_ccall f_9302(C_word c,C_word *av) C_noret;
C_noret_decl(f_9304)
static void C_fcall f_9304(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9329)
static void C_ccall f_9329(C_word c,C_word *av) C_noret;
C_noret_decl(f_9340)
static void C_ccall f_9340(C_word c,C_word *av) C_noret;
C_noret_decl(f_9342)
static void C_ccall f_9342(C_word c,C_word *av) C_noret;
C_noret_decl(f_9361)
static void C_ccall f_9361(C_word c,C_word *av) C_noret;
C_noret_decl(f_9369)
static void C_ccall f_9369(C_word c,C_word *av) C_noret;
C_noret_decl(f_9378)
static void C_ccall f_9378(C_word c,C_word *av) C_noret;
C_noret_decl(f_9384)
static void C_ccall f_9384(C_word c,C_word *av) C_noret;
C_noret_decl(f_9388)
static void C_fcall f_9388(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9396)
static void C_ccall f_9396(C_word c,C_word *av) C_noret;
C_noret_decl(f_9402)
static void C_ccall f_9402(C_word c,C_word *av) C_noret;
C_noret_decl(f_9406)
static void C_fcall f_9406(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9414)
static void C_ccall f_9414(C_word c,C_word *av) C_noret;
C_noret_decl(f_9417)
static void C_ccall f_9417(C_word c,C_word *av) C_noret;
C_noret_decl(f_9421)
static void C_fcall f_9421(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9429)
static void C_ccall f_9429(C_word c,C_word *av) C_noret;
C_noret_decl(f_9432)
static void C_ccall f_9432(C_word c,C_word *av) C_noret;
C_noret_decl(f_9445)
static void C_ccall f_9445(C_word c,C_word *av) C_noret;
C_noret_decl(f_9462)
static void C_ccall f_9462(C_word c,C_word *av) C_noret;
C_noret_decl(f_9473)
static void C_ccall f_9473(C_word c,C_word *av) C_noret;
C_noret_decl(f_9521)
static void C_ccall f_9521(C_word c,C_word *av) C_noret;
C_noret_decl(f_9525)
static void C_ccall f_9525(C_word c,C_word *av) C_noret;
C_noret_decl(f_9537)
static void C_ccall f_9537(C_word c,C_word *av) C_noret;
C_noret_decl(f_9549)
static void C_ccall f_9549(C_word c,C_word *av) C_noret;
C_noret_decl(f_9551)
static void C_fcall f_9551(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9599)
static void C_fcall f_9599(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9647)
static void C_fcall f_9647(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9654)
static void C_fcall f_9654(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9724)
static C_word C_fcall f_9724(C_word *a,C_word t0,C_word t1,C_word t2,C_word t3);
C_noret_decl(f_9742)
static void C_ccall f_9742(C_word c,C_word *av) C_noret;
C_noret_decl(f_9746)
static void C_ccall f_9746(C_word c,C_word *av) C_noret;
C_noret_decl(f_9762)
static void C_ccall f_9762(C_word c,C_word *av) C_noret;
C_noret_decl(f_9766)
static void C_ccall f_9766(C_word c,C_word *av) C_noret;
C_noret_decl(f_9778)
static void C_ccall f_9778(C_word c,C_word *av) C_noret;
C_noret_decl(f_9788)
static void C_fcall f_9788(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9836)
static void C_fcall f_9836(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9884)
static void C_fcall f_9884(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9891)
static void C_fcall f_9891(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9954)
static void C_fcall f_9954(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externexport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_10002)
static void C_ccall trf_10002(C_word c,C_word *av) C_noret;
static void C_ccall trf_10002(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10002(t0,t1,t2,t3);}

C_noret_decl(trf_10050)
static void C_ccall trf_10050(C_word c,C_word *av) C_noret;
static void C_ccall trf_10050(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10050(t0,t1,t2,t3);}

C_noret_decl(trf_10098)
static void C_ccall trf_10098(C_word c,C_word *av) C_noret;
static void C_ccall trf_10098(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10098(t0,t1,t2);}

C_noret_decl(trf_10132)
static void C_ccall trf_10132(C_word c,C_word *av) C_noret;
static void C_ccall trf_10132(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10132(t0,t1,t2);}

C_noret_decl(trf_10166)
static void C_ccall trf_10166(C_word c,C_word *av) C_noret;
static void C_ccall trf_10166(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10166(t0,t1,t2);}

C_noret_decl(trf_10200)
static void C_ccall trf_10200(C_word c,C_word *av) C_noret;
static void C_ccall trf_10200(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10200(t0,t1,t2);}

C_noret_decl(trf_10234)
static void C_ccall trf_10234(C_word c,C_word *av) C_noret;
static void C_ccall trf_10234(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10234(t0,t1,t2);}

C_noret_decl(trf_10294)
static void C_ccall trf_10294(C_word c,C_word *av) C_noret;
static void C_ccall trf_10294(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10294(t0,t1);}

C_noret_decl(trf_10309)
static void C_ccall trf_10309(C_word c,C_word *av) C_noret;
static void C_ccall trf_10309(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10309(t0,t1);}

C_noret_decl(trf_10389)
static void C_ccall trf_10389(C_word c,C_word *av) C_noret;
static void C_ccall trf_10389(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10389(t0,t1,t2,t3);}

C_noret_decl(trf_10437)
static void C_ccall trf_10437(C_word c,C_word *av) C_noret;
static void C_ccall trf_10437(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10437(t0,t1,t2,t3);}

C_noret_decl(trf_10536)
static void C_ccall trf_10536(C_word c,C_word *av) C_noret;
static void C_ccall trf_10536(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10536(t0,t1,t2,t3);}

C_noret_decl(trf_10584)
static void C_ccall trf_10584(C_word c,C_word *av) C_noret;
static void C_ccall trf_10584(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10584(t0,t1,t2,t3);}

C_noret_decl(trf_10667)
static void C_ccall trf_10667(C_word c,C_word *av) C_noret;
static void C_ccall trf_10667(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10667(t0,t1,t2,t3);}

C_noret_decl(trf_10717)
static void C_ccall trf_10717(C_word c,C_word *av) C_noret;
static void C_ccall trf_10717(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10717(t0,t1,t2);}

C_noret_decl(trf_10737)
static void C_ccall trf_10737(C_word c,C_word *av) C_noret;
static void C_ccall trf_10737(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10737(t0,t1,t2,t3);}

C_noret_decl(trf_10785)
static void C_ccall trf_10785(C_word c,C_word *av) C_noret;
static void C_ccall trf_10785(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10785(t0,t1,t2);}

C_noret_decl(trf_10819)
static void C_ccall trf_10819(C_word c,C_word *av) C_noret;
static void C_ccall trf_10819(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10819(t0,t1,t2);}

C_noret_decl(trf_10853)
static void C_ccall trf_10853(C_word c,C_word *av) C_noret;
static void C_ccall trf_10853(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10853(t0,t1,t2);}

C_noret_decl(trf_10887)
static void C_ccall trf_10887(C_word c,C_word *av) C_noret;
static void C_ccall trf_10887(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10887(t0,t1,t2);}

C_noret_decl(trf_11119)
static void C_ccall trf_11119(C_word c,C_word *av) C_noret;
static void C_ccall trf_11119(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11119(t0,t1,t2);}

C_noret_decl(trf_11132)
static void C_ccall trf_11132(C_word c,C_word *av) C_noret;
static void C_ccall trf_11132(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11132(t0,t1);}

C_noret_decl(trf_11212)
static void C_ccall trf_11212(C_word c,C_word *av) C_noret;
static void C_ccall trf_11212(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_11212(t0,t1,t2,t3);}

C_noret_decl(trf_11264)
static void C_ccall trf_11264(C_word c,C_word *av) C_noret;
static void C_ccall trf_11264(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11264(t0,t1);}

C_noret_decl(trf_11430)
static void C_ccall trf_11430(C_word c,C_word *av) C_noret;
static void C_ccall trf_11430(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11430(t0,t1,t2);}

C_noret_decl(trf_11562)
static void C_ccall trf_11562(C_word c,C_word *av) C_noret;
static void C_ccall trf_11562(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_11562(t0,t1,t2,t3);}

C_noret_decl(trf_11612)
static void C_ccall trf_11612(C_word c,C_word *av) C_noret;
static void C_ccall trf_11612(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_11612(t0,t1,t2,t3);}

C_noret_decl(trf_11681)
static void C_ccall trf_11681(C_word c,C_word *av) C_noret;
static void C_ccall trf_11681(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11681(t0,t1);}

C_noret_decl(trf_11917)
static void C_ccall trf_11917(C_word c,C_word *av) C_noret;
static void C_ccall trf_11917(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11917(t0,t1,t2);}

C_noret_decl(trf_11957)
static void C_ccall trf_11957(C_word c,C_word *av) C_noret;
static void C_ccall trf_11957(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11957(t0,t1,t2);}

C_noret_decl(trf_12037)
static void C_ccall trf_12037(C_word c,C_word *av) C_noret;
static void C_ccall trf_12037(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_12037(t0,t1,t2,t3,t4);}

C_noret_decl(trf_12094)
static void C_ccall trf_12094(C_word c,C_word *av) C_noret;
static void C_ccall trf_12094(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_12094(t0,t1,t2,t3);}

C_noret_decl(trf_12156)
static void C_ccall trf_12156(C_word c,C_word *av) C_noret;
static void C_ccall trf_12156(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12156(t0,t1);}

C_noret_decl(trf_12179)
static void C_ccall trf_12179(C_word c,C_word *av) C_noret;
static void C_ccall trf_12179(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12179(t0,t1,t2);}

C_noret_decl(trf_12223)
static void C_ccall trf_12223(C_word c,C_word *av) C_noret;
static void C_ccall trf_12223(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_12223(t0,t1,t2,t3);}

C_noret_decl(trf_12277)
static void C_ccall trf_12277(C_word c,C_word *av) C_noret;
static void C_ccall trf_12277(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12277(t0,t1);}

C_noret_decl(trf_12447)
static void C_ccall trf_12447(C_word c,C_word *av) C_noret;
static void C_ccall trf_12447(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12447(t0,t1,t2);}

C_noret_decl(trf_12481)
static void C_ccall trf_12481(C_word c,C_word *av) C_noret;
static void C_ccall trf_12481(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12481(t0,t1,t2);}

C_noret_decl(trf_12549)
static void C_ccall trf_12549(C_word c,C_word *av) C_noret;
static void C_ccall trf_12549(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_12549(t0,t1,t2,t3);}

C_noret_decl(trf_12599)
static void C_ccall trf_12599(C_word c,C_word *av) C_noret;
static void C_ccall trf_12599(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_12599(t0,t1,t2,t3);}

C_noret_decl(trf_12618)
static void C_ccall trf_12618(C_word c,C_word *av) C_noret;
static void C_ccall trf_12618(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12618(t0,t1);}

C_noret_decl(trf_12759)
static void C_ccall trf_12759(C_word c,C_word *av) C_noret;
static void C_ccall trf_12759(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12759(t0,t1);}

C_noret_decl(trf_12832)
static void C_ccall trf_12832(C_word c,C_word *av) C_noret;
static void C_ccall trf_12832(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12832(t0,t1,t2);}

C_noret_decl(trf_12842)
static void C_ccall trf_12842(C_word c,C_word *av) C_noret;
static void C_ccall trf_12842(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12842(t0,t1);}

C_noret_decl(trf_12883)
static void C_ccall trf_12883(C_word c,C_word *av) C_noret;
static void C_ccall trf_12883(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12883(t0,t1,t2);}

C_noret_decl(trf_13018)
static void C_ccall trf_13018(C_word c,C_word *av) C_noret;
static void C_ccall trf_13018(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_13018(t0,t1,t2);}

C_noret_decl(trf_4335)
static void C_ccall trf_4335(C_word c,C_word *av) C_noret;
static void C_ccall trf_4335(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4335(t0,t1,t2);}

C_noret_decl(trf_4393)
static void C_ccall trf_4393(C_word c,C_word *av) C_noret;
static void C_ccall trf_4393(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_4393(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5753)
static void C_ccall trf_5753(C_word c,C_word *av) C_noret;
static void C_ccall trf_5753(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5753(t0,t1);}

C_noret_decl(trf_5776)
static void C_ccall trf_5776(C_word c,C_word *av) C_noret;
static void C_ccall trf_5776(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5776(t0,t1);}

C_noret_decl(trf_5927)
static void C_ccall trf_5927(C_word c,C_word *av) C_noret;
static void C_ccall trf_5927(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_5927(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_6122)
static void C_ccall trf_6122(C_word c,C_word *av) C_noret;
static void C_ccall trf_6122(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_6122(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_6321)
static void C_ccall trf_6321(C_word c,C_word *av) C_noret;
static void C_ccall trf_6321(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6321(t0,t1,t2);}

C_noret_decl(trf_6370)
static void C_ccall trf_6370(C_word c,C_word *av) C_noret;
static void C_ccall trf_6370(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6370(t0,t1,t2,t3);}

C_noret_decl(trf_6389)
static void C_ccall trf_6389(C_word c,C_word *av) C_noret;
static void C_ccall trf_6389(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6389(t0,t1);}

C_noret_decl(trf_6395)
static void C_ccall trf_6395(C_word c,C_word *av) C_noret;
static void C_ccall trf_6395(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6395(t0,t1);}

C_noret_decl(trf_6402)
static void C_ccall trf_6402(C_word c,C_word *av) C_noret;
static void C_ccall trf_6402(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6402(t0,t1);}

C_noret_decl(trf_6410)
static void C_ccall trf_6410(C_word c,C_word *av) C_noret;
static void C_ccall trf_6410(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6410(t0,t1);}

C_noret_decl(trf_6600)
static void C_ccall trf_6600(C_word c,C_word *av) C_noret;
static void C_ccall trf_6600(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6600(t0,t1,t2);}

C_noret_decl(trf_6638)
static void C_ccall trf_6638(C_word c,C_word *av) C_noret;
static void C_ccall trf_6638(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6638(t0,t1,t2);}

C_noret_decl(trf_6661)
static void C_ccall trf_6661(C_word c,C_word *av) C_noret;
static void C_ccall trf_6661(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6661(t0,t1,t2);}

C_noret_decl(trf_6835)
static void C_ccall trf_6835(C_word c,C_word *av) C_noret;
static void C_ccall trf_6835(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6835(t0,t1,t2);}

C_noret_decl(trf_6841)
static void C_ccall trf_6841(C_word c,C_word *av) C_noret;
static void C_ccall trf_6841(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6841(t0,t1,t2);}

C_noret_decl(trf_6919)
static void C_ccall trf_6919(C_word c,C_word *av) C_noret;
static void C_ccall trf_6919(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6919(t0,t1,t2);}

C_noret_decl(trf_6927)
static void C_ccall trf_6927(C_word c,C_word *av) C_noret;
static void C_ccall trf_6927(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6927(t0,t1,t2,t3);}

C_noret_decl(trf_6951)
static void C_ccall trf_6951(C_word c,C_word *av) C_noret;
static void C_ccall trf_6951(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6951(t0,t1);}

C_noret_decl(trf_6995)
static void C_ccall trf_6995(C_word c,C_word *av) C_noret;
static void C_ccall trf_6995(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6995(t0,t1,t2,t3);}

C_noret_decl(trf_7043)
static void C_ccall trf_7043(C_word c,C_word *av) C_noret;
static void C_ccall trf_7043(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7043(t0,t1,t2,t3);}

C_noret_decl(trf_7211)
static void C_ccall trf_7211(C_word c,C_word *av) C_noret;
static void C_ccall trf_7211(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7211(t0,t1,t2);}

C_noret_decl(trf_7311)
static void C_ccall trf_7311(C_word c,C_word *av) C_noret;
static void C_ccall trf_7311(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7311(t0,t1,t2,t3);}

C_noret_decl(trf_7543)
static void C_ccall trf_7543(C_word c,C_word *av) C_noret;
static void C_ccall trf_7543(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_7543(t0,t1,t2,t3,t4,t5);}

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

C_noret_decl(trf_7610)
static void C_ccall trf_7610(C_word c,C_word *av) C_noret;
static void C_ccall trf_7610(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_7610(t0,t1,t2,t3,t4);}

C_noret_decl(trf_7710)
static void C_ccall trf_7710(C_word c,C_word *av) C_noret;
static void C_ccall trf_7710(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7710(t0,t1,t2);}

C_noret_decl(trf_7726)
static void C_ccall trf_7726(C_word c,C_word *av) C_noret;
static void C_ccall trf_7726(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7726(t0,t1,t2);}

C_noret_decl(trf_7756)
static void C_ccall trf_7756(C_word c,C_word *av) C_noret;
static void C_ccall trf_7756(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7756(t0,t1,t2);}

C_noret_decl(trf_7806)
static void C_ccall trf_7806(C_word c,C_word *av) C_noret;
static void C_ccall trf_7806(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7806(t0,t1,t2);}

C_noret_decl(trf_7840)
static void C_ccall trf_7840(C_word c,C_word *av) C_noret;
static void C_ccall trf_7840(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7840(t0,t1,t2);}

C_noret_decl(trf_7874)
static void C_ccall trf_7874(C_word c,C_word *av) C_noret;
static void C_ccall trf_7874(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7874(t0,t1,t2);}

C_noret_decl(trf_7908)
static void C_ccall trf_7908(C_word c,C_word *av) C_noret;
static void C_ccall trf_7908(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7908(t0,t1,t2);}

C_noret_decl(trf_7972)
static void C_ccall trf_7972(C_word c,C_word *av) C_noret;
static void C_ccall trf_7972(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7972(t0,t1,t2,t3);}

C_noret_decl(trf_8115)
static void C_ccall trf_8115(C_word c,C_word *av) C_noret;
static void C_ccall trf_8115(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8115(t0,t1);}

C_noret_decl(trf_8127)
static void C_ccall trf_8127(C_word c,C_word *av) C_noret;
static void C_ccall trf_8127(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8127(t0,t1);}

C_noret_decl(trf_8338)
static void C_ccall trf_8338(C_word c,C_word *av) C_noret;
static void C_ccall trf_8338(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_8338(t0,t1,t2,t3);}

C_noret_decl(trf_8386)
static void C_ccall trf_8386(C_word c,C_word *av) C_noret;
static void C_ccall trf_8386(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8386(t0,t1,t2);}

C_noret_decl(trf_8420)
static void C_ccall trf_8420(C_word c,C_word *av) C_noret;
static void C_ccall trf_8420(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_8420(t0,t1,t2,t3);}

C_noret_decl(trf_8456)
static void C_ccall trf_8456(C_word c,C_word *av) C_noret;
static void C_ccall trf_8456(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8456(t0,t1,t2);}

C_noret_decl(trf_8490)
static void C_ccall trf_8490(C_word c,C_word *av) C_noret;
static void C_ccall trf_8490(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8490(t0,t1,t2);}

C_noret_decl(trf_8545)
static void C_ccall trf_8545(C_word c,C_word *av) C_noret;
static void C_ccall trf_8545(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8545(t0,t1,t2);}

C_noret_decl(trf_8675)
static void C_ccall trf_8675(C_word c,C_word *av) C_noret;
static void C_ccall trf_8675(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8675(t0,t1,t2);}

C_noret_decl(trf_8722)
static void C_ccall trf_8722(C_word c,C_word *av) C_noret;
static void C_ccall trf_8722(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_8722(t0,t1,t2,t3,t4);}

C_noret_decl(trf_8741)
static void C_ccall trf_8741(C_word c,C_word *av) C_noret;
static void C_ccall trf_8741(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8741(t0,t1,t2);}

C_noret_decl(trf_8757)
static void C_ccall trf_8757(C_word c,C_word *av) C_noret;
static void C_ccall trf_8757(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8757(t0,t1,t2);}

C_noret_decl(trf_8871)
static void C_ccall trf_8871(C_word c,C_word *av) C_noret;
static void C_ccall trf_8871(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8871(t0,t1,t2);}

C_noret_decl(trf_8905)
static void C_ccall trf_8905(C_word c,C_word *av) C_noret;
static void C_ccall trf_8905(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_8905(t0,t1,t2,t3);}

C_noret_decl(trf_8949)
static void C_ccall trf_8949(C_word c,C_word *av) C_noret;
static void C_ccall trf_8949(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8949(t0,t1,t2);}

C_noret_decl(trf_8983)
static void C_ccall trf_8983(C_word c,C_word *av) C_noret;
static void C_ccall trf_8983(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_8983(t0,t1,t2,t3);}

C_noret_decl(trf_9021)
static void C_ccall trf_9021(C_word c,C_word *av) C_noret;
static void C_ccall trf_9021(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9021(t0,t1,t2);}

C_noret_decl(trf_9128)
static void C_ccall trf_9128(C_word c,C_word *av) C_noret;
static void C_ccall trf_9128(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9128(t0,t1,t2);}

C_noret_decl(trf_9162)
static void C_ccall trf_9162(C_word c,C_word *av) C_noret;
static void C_ccall trf_9162(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9162(t0,t1,t2);}

C_noret_decl(trf_9271)
static void C_ccall trf_9271(C_word c,C_word *av) C_noret;
static void C_ccall trf_9271(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9271(t0,t1,t2);}

C_noret_decl(trf_9304)
static void C_ccall trf_9304(C_word c,C_word *av) C_noret;
static void C_ccall trf_9304(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9304(t0,t1,t2);}

C_noret_decl(trf_9388)
static void C_ccall trf_9388(C_word c,C_word *av) C_noret;
static void C_ccall trf_9388(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9388(t0,t1,t2);}

C_noret_decl(trf_9406)
static void C_ccall trf_9406(C_word c,C_word *av) C_noret;
static void C_ccall trf_9406(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9406(t0,t1);}

C_noret_decl(trf_9421)
static void C_ccall trf_9421(C_word c,C_word *av) C_noret;
static void C_ccall trf_9421(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9421(t0,t1);}

C_noret_decl(trf_9551)
static void C_ccall trf_9551(C_word c,C_word *av) C_noret;
static void C_ccall trf_9551(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9551(t0,t1,t2,t3);}

C_noret_decl(trf_9599)
static void C_ccall trf_9599(C_word c,C_word *av) C_noret;
static void C_ccall trf_9599(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9599(t0,t1,t2,t3);}

C_noret_decl(trf_9647)
static void C_ccall trf_9647(C_word c,C_word *av) C_noret;
static void C_ccall trf_9647(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_9647(t0,t1,t2,t3,t4);}

C_noret_decl(trf_9654)
static void C_ccall trf_9654(C_word c,C_word *av) C_noret;
static void C_ccall trf_9654(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9654(t0,t1);}

C_noret_decl(trf_9788)
static void C_ccall trf_9788(C_word c,C_word *av) C_noret;
static void C_ccall trf_9788(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9788(t0,t1,t2,t3);}

C_noret_decl(trf_9836)
static void C_ccall trf_9836(C_word c,C_word *av) C_noret;
static void C_ccall trf_9836(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9836(t0,t1,t2,t3);}

C_noret_decl(trf_9884)
static void C_ccall trf_9884(C_word c,C_word *av) C_noret;
static void C_ccall trf_9884(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_9884(t0,t1,t2,t3,t4);}

C_noret_decl(trf_9891)
static void C_ccall trf_9891(C_word c,C_word *av) C_noret;
static void C_ccall trf_9891(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9891(t0,t1);}

C_noret_decl(trf_9954)
static void C_ccall trf_9954(C_word c,C_word *av) C_noret;
static void C_ccall trf_9954(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9954(t0,t1,t2,t3);}

/* map-loop1778 in k9443 in k9430 in k9415 in k9400 in k9382 in k9376 in k9367 in k9359 in a9341 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in ... */
static void C_fcall f_10002(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_10002,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,2,t6,t7);
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

/* map-loop1747 in k9430 in k9415 in k9400 in k9382 in k9376 in k9367 in k9359 in a9341 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_fcall f_10050(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_10050,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,2,t6,t7);
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

/* map-loop1717 in k9415 in k9400 in k9382 in k9376 in k9367 in k9359 in a9341 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in ... */
static void C_fcall f_10098(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10098,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10123,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:492: g1723 */
t4=((C_word*)t0)[4];
f_9421(t4,t3);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10121 in map-loop1717 in k9415 in k9400 in k9382 in k9376 in k9367 in k9359 in a9341 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_ccall f_10123(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10123,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_10098(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop1689 in k9400 in k9382 in k9376 in k9367 in k9359 in a9341 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in ... */
static void C_fcall f_10132(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10132,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10157,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:491: g1695 */
t4=((C_word*)t0)[4];
f_9406(t4,t3);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10155 in map-loop1689 in k9400 in k9382 in k9376 in k9367 in k9359 in a9341 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in ... */
static void C_ccall f_10157(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10157,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_10132(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop1661 in k9382 in k9376 in k9367 in k9359 in a9341 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in ... */
static void C_fcall f_10166(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10166,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10191,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:490: g1667 */
t4=((C_word*)t0)[4];
f_9388(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10189 in map-loop1661 in k9382 in k9376 in k9367 in k9359 in a9341 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in ... */
static void C_ccall f_10191(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10191,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_10166(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop1634 in k9376 in k9367 in k9359 in a9341 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in ... */
static void C_fcall f_10200(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10200,3,t0,t1,t2);}
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

/* map-loop1607 in k9367 in k9359 in a9341 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in ... */
static void C_fcall f_10234(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10234,3,t0,t1,t2);}
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

/* k10268 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in ... */
static void C_ccall f_10270(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10270,c,av);}
/* chicken-syntax.scm:444: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[180];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a10271 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in ... */
static void C_ccall f_10272(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10272,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10276,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:448: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[180];
av2[3]=t2;
av2[4]=lf[181];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k10274 in a10271 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in ... */
static void C_ccall f_10276(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,3)))){
C_save_and_reclaim((void *)f_10276,c,av);}
a=C_alloc(19);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=C_i_check_list_2(t2,lf[65]);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10290,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10887,a[2]=t7,a[3]=t12,a[4]=t8,a[5]=((C_word)li115),tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_10887(t14,t10,t2);}

/* k10288 in k10274 in a10271 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in ... */
static void C_ccall f_10290(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10290,c,av);}
a=C_alloc(25);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10294,a[2]=((C_word*)t0)[2],a[3]=((C_word)li103),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10305,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10853,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=t5,a[6]=((C_word)li114),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_10853(t11,t7,((C_word*)t0)[5]);}

/* g1310 in k10288 in k10274 in a10271 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in ... */
static void C_fcall f_10294(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_10294,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10302,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:452: chicken.base#gensym */
t3=*((C_word*)lf[54]+1);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k10300 in g1310 in k10288 in k10274 in a10271 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in ... */
static void C_ccall f_10302(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10302,c,av);}
/* chicken-syntax.scm:452: r */
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
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k10303 in k10288 in k10274 in a10271 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in ... */
static void C_ccall f_10305(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10305,c,av);}
a=C_alloc(25);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10309,a[2]=((C_word*)t0)[2],a[3]=((C_word)li104),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10320,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10819,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=t5,a[6]=((C_word)li113),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_10819(t11,t7,((C_word*)t0)[6]);}

/* g1338 in k10303 in k10288 in k10274 in a10271 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in ... */
static void C_fcall f_10309(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_10309,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10317,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:453: chicken.base#gensym */
t3=*((C_word*)lf[54]+1);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k10315 in g1338 in k10303 in k10288 in k10274 in a10271 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in ... */
static void C_ccall f_10317(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10317,c,av);}
/* chicken-syntax.scm:453: r */
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
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k10318 in k10303 in k10288 in k10274 in a10271 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in ... */
static void C_ccall f_10320(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(33,c,3)))){
C_save_and_reclaim((void *)f_10320,c,av);}
a=C_alloc(33);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10327,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t8=t7;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=((C_word*)t9)[1];
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10640,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[6],a[6]=t5,a[7]=t6,tmp=(C_word)a,a+=8,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10785,a[2]=t9,a[3]=t13,a[4]=t10,a[5]=((C_word)li112),tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_10785(t15,t11,((C_word*)t0)[6]);}

/* k10325 in k10318 in k10303 in k10288 in k10274 in a10271 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in ... */
static void C_ccall f_10327(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(26,c,4)))){
C_save_and_reclaim((void *)f_10327,c,av);}
a=C_alloc(26);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10495,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_check_list_2(((C_word*)t0)[4],lf[65]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10510,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10584,a[2]=t5,a[3]=t10,a[4]=t6,a[5]=((C_word)li108),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_10584(t12,t8,((C_word*)t0)[5],((C_word*)t0)[4]);}

/* k10349 in k10493 in k10325 in k10318 in k10303 in k10288 in k10274 in a10271 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in ... */
static void C_ccall f_10351(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,1)))){
C_save_and_reclaim((void *)f_10351,c,av);}
a=C_alloc(27);
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=C_a_i_cons(&a,2,lf[20],t2);
t4=C_a_i_list(&a,4,lf[176],((C_word*)t0)[2],((C_word*)t0)[3],t3);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[5],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k10361 in k10493 in k10325 in k10318 in k10303 in k10288 in k10274 in a10271 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in ... */
static void C_ccall f_10363(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,4)))){
C_save_and_reclaim((void *)f_10363,c,av);}
a=C_alloc(20);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10367,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10379,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10389,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li105),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_10389(t11,t7,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k10365 in k10361 in k10493 in k10325 in k10318 in k10303 in k10288 in k10274 in a10271 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in ... */
static void C_ccall f_10367(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10367,c,av);}
/* chicken-syntax.scm:454: ##sys#append */
t2=*((C_word*)lf[53]+1);{
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

/* k10377 in k10361 in k10493 in k10325 in k10318 in k10303 in k10288 in k10274 in a10271 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in ... */
static void C_ccall f_10379(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_10379,c,av);}
a=C_alloc(6);
t2=C_a_i_list(&a,1,lf[163]);
t3=C_a_i_list(&a,1,t2);
/* chicken-syntax.scm:454: ##sys#append */
t4=*((C_word*)lf[53]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* map-loop1561 in k10361 in k10493 in k10325 in k10318 in k10303 in k10288 in k10274 in a10271 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in ... */
static void C_fcall f_10389(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_10389,4,t0,t1,t2,t3);}
a=C_alloc(12);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,3,lf[177],t6,t7);
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

/* map-loop1525 in k10493 in k10325 in k10318 in k10303 in k10288 in k10274 in a10271 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in ... */
static void C_fcall f_10437(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_10437,4,t0,t1,t2,t3);}
a=C_alloc(12);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,3,lf[177],t6,t7);
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

/* k10493 in k10325 in k10318 in k10303 in k10288 in k10274 in a10271 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in ... */
static void C_ccall f_10495(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(36,c,4)))){
C_save_and_reclaim((void *)f_10495,c,av);}
a=C_alloc(36);
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=C_a_i_cons(&a,2,lf[20],t2);
t4=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t5=C_a_i_cons(&a,2,lf[20],t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10351,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t7=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t8=t7;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=((C_word*)t9)[1];
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10363,a[2]=t6,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10437,a[2]=t9,a[3]=t13,a[4]=t10,a[5]=((C_word)li106),tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_10437(t15,t11,((C_word*)t0)[7],((C_word*)t0)[5]);}

/* k10508 in k10325 in k10318 in k10303 in k10288 in k10274 in a10271 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in ... */
static void C_ccall f_10510(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,4)))){
C_save_and_reclaim((void *)f_10510,c,av);}
a=C_alloc(20);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10514,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10526,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10536,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li107),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_10536(t11,t7,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k10512 in k10508 in k10325 in k10318 in k10303 in k10288 in k10274 in a10271 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in ... */
static void C_ccall f_10514(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10514,c,av);}
/* chicken-syntax.scm:454: ##sys#append */
t2=*((C_word*)lf[53]+1);{
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

/* k10524 in k10508 in k10325 in k10318 in k10303 in k10288 in k10274 in a10271 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in ... */
static void C_ccall f_10526(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_10526,c,av);}
a=C_alloc(6);
t2=C_a_i_list(&a,1,lf[163]);
t3=C_a_i_list(&a,1,t2);
/* chicken-syntax.scm:454: ##sys#append */
t4=*((C_word*)lf[53]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* map-loop1489 in k10508 in k10325 in k10318 in k10303 in k10288 in k10274 in a10271 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in ... */
static void C_fcall f_10536(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_10536,4,t0,t1,t2,t3);}
a=C_alloc(12);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,3,lf[177],t6,t7);
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

/* map-loop1453 in k10325 in k10318 in k10303 in k10288 in k10274 in a10271 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in ... */
static void C_fcall f_10584(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_10584,4,t0,t1,t2,t3);}
a=C_alloc(12);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,3,lf[177],t6,t7);
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

/* k10638 in k10318 in k10303 in k10288 in k10274 in a10271 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in ... */
static void C_ccall f_10640(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_10640,c,av);}
a=C_alloc(13);
t2=C_i_check_list_2(((C_word*)t0)[2],lf[65]);
t3=C_i_check_list_2(t1,lf[65]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10649,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10737,a[2]=((C_word*)t0)[6],a[3]=t6,a[4]=((C_word*)t0)[7],a[5]=((C_word)li111),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_10737(t8,t4,((C_word*)t0)[2],t1);}

/* k10647 in k10638 in k10318 in k10303 in k10288 in k10274 in a10271 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in ... */
static void C_ccall f_10649(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10649,c,av);}
a=C_alloc(18);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10656,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t4,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
t7=C_u_i_length(((C_word*)t0)[4]);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10717,a[2]=t9,a[3]=((C_word)li110),tmp=(C_word)a,a+=4,tmp));
t11=((C_word*)t9)[1];
f_10717(t11,t6,t7);}

/* k10654 in k10647 in k10638 in k10318 in k10303 in k10288 in k10274 in a10271 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in ... */
static void C_ccall f_10656(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10656,c,av);}
a=C_alloc(12);
t2=C_i_check_list_2(((C_word*)t0)[2],lf[65]);
t3=C_i_check_list_2(t1,lf[65]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10665,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10667,a[2]=((C_word*)t0)[5],a[3]=t6,a[4]=((C_word*)t0)[6],a[5]=((C_word)li109),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_10667(t8,t4,((C_word*)t0)[2],t1);}

/* k10663 in k10654 in k10647 in k10638 in k10318 in k10303 in k10288 in k10274 in a10271 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in ... */
static void C_ccall f_10665(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10665,c,av);}
/* chicken-syntax.scm:454: ##sys#append */
t2=*((C_word*)lf[53]+1);{
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

/* map-loop1419 in k10654 in k10647 in k10638 in k10318 in k10303 in k10288 in k10274 in a10271 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in ... */
static void C_fcall f_10667(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_10667,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,2,t6,t7);
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

/* loop in k10647 in k10638 in k10318 in k10303 in k10288 in k10274 in a10271 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in ... */
static void C_fcall f_10717(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_10717,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_eqp(t2,C_fix(0));
if(C_truep(t3)){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10731,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:460: loop */
t6=t4;
t7=C_fixnum_difference(t2,C_fix(1));
t1=t6;
t2=t7;
goto loop;}}

/* k10729 in loop in k10647 in k10638 in k10318 in k10303 in k10288 in k10274 in a10271 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in ... */
static void C_ccall f_10731(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_10731,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,C_SCHEME_FALSE,t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* map-loop1362 in k10638 in k10318 in k10303 in k10288 in k10274 in a10271 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in ... */
static void C_fcall f_10737(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_10737,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,2,t6,t7);
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

/* map-loop1383 in k10318 in k10303 in k10288 in k10274 in a10271 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in ... */
static void C_fcall f_10785(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10785,3,t0,t1,t2);}
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

/* map-loop1332 in k10303 in k10288 in k10274 in a10271 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in ... */
static void C_fcall f_10819(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10819,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10844,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:453: g1338 */
t4=((C_word*)t0)[4];
f_10309(t4,t3);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10842 in map-loop1332 in k10303 in k10288 in k10274 in a10271 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in ... */
static void C_ccall f_10844(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10844,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_10819(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop1304 in k10288 in k10274 in a10271 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in ... */
static void C_fcall f_10853(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10853,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10878,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:452: g1310 */
t4=((C_word*)t0)[4];
f_10294(t4,t3);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10876 in map-loop1304 in k10288 in k10274 in a10271 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in ... */
static void C_ccall f_10878(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10878,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_10853(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop1277 in k10274 in a10271 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in ... */
static void C_fcall f_10887(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10887,3,t0,t1,t2);}
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

/* k10921 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in ... */
static void C_ccall f_10923(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10923,c,av);}
/* chicken-syntax.scm:437: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[182];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a10924 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in ... */
static void C_ccall f_10925(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10925,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10929,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:441: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[182];
av2[3]=t2;
av2[4]=lf[185];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k10927 in a10924 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in ... */
static void C_ccall f_10929(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_10929,c,av);}
a=C_alloc(9);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[183],t2,*((C_word*)lf[184]+1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k10938 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in ... */
static void C_ccall f_10940(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10940,c,av);}
/* chicken-syntax.scm:430: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[186];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a10941 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in ... */
static void C_ccall f_10942(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10942,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10946,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:434: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[186];
av2[3]=t2;
av2[4]=lf[187];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k10944 in a10941 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in ... */
static void C_ccall f_10946(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_10946,c,av);}
a=C_alloc(9);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[183],t2,C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k10955 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in ... */
static void C_ccall f_10957(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10957,c,av);}
/* chicken-syntax.scm:422: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[188];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a10958 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in ... */
static void C_ccall f_10959(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10959,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10963,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:427: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[188];
av2[3]=t2;
av2[4]=lf[190];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k10961 in a10958 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in ... */
static void C_ccall f_10963(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,1)))){
C_save_and_reclaim((void *)f_10963,c,av);}
a=C_alloc(15);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,lf[20],C_SCHEME_END_OF_LIST,t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,lf[189],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k10976 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in ... */
static void C_ccall f_10978(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10978,c,av);}
/* chicken-syntax.scm:416: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[191];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a10979 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in ... */
static void C_ccall f_10980(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_10980,c,av);}
a=C_alloc(3);
t5=C_i_cdr(t2);
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_cons(&a,2,lf[192],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k10990 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in ... */
static void C_ccall f_10992(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10992,c,av);}
/* chicken-syntax.scm:397: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[193];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a10993 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in ... */
static void C_ccall f_10994(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10994,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10998,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:402: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[193];
av2[3]=t2;
av2[4]=lf[196];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k10996 in a10993 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in ... */
static void C_ccall f_10998(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10998,c,av);}
a=C_alloc(15);
t2=C_i_cddr(((C_word*)t0)[2]);
if(C_truep(C_i_nullp(t2))){
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t3);
t5=C_a_i_cons(&a,2,lf[20],t4);
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list(&a,3,lf[25],t5,lf[194]);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11020,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:406: ##sys#check-syntax */
t4=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[193];
av2[3]=((C_word*)t0)[2];
av2[4]=lf[195];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}

/* k11018 in k10996 in a10993 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in ... */
static void C_ccall f_11020(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,1)))){
C_save_and_reclaim((void *)f_11020,c,av);}
a=C_alloc(24);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_caddr(((C_word*)t0)[2]);
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=C_i_pairp(t2);
t8=(C_truep(t7)?C_i_nullp(C_u_i_cdr(t2)):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=C_i_car(t2);
t10=C_a_i_list(&a,2,t9,t3);
t11=C_a_i_list(&a,1,t10);
t12=C_a_i_cons(&a,2,t11,t6);
t13=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t13;
av2[1]=C_a_i_cons(&a,2,lf[35],t12);
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}
else{
t9=C_a_i_list(&a,3,lf[20],C_SCHEME_END_OF_LIST,t3);
t10=C_a_i_cons(&a,2,t2,t6);
t11=C_a_i_cons(&a,2,lf[20],t10);
t12=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t12;
av2[1]=C_a_i_list(&a,3,lf[25],t9,t11);
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}}

/* k11083 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in ... */
static void C_ccall f_11085(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11085,c,av);}
/* chicken-syntax.scm:325: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
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

/* a11086 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in ... */
static void C_ccall f_11087(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11087,c,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11091,a[2]=t2,a[3]=t4,a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:329: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[197];
av2[3]=t2;
av2[4]=lf[207];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11089 in a11086 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in ... */
static void C_ccall f_11091(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_11091,c,av);}
a=C_alloc(7);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11097,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:331: chicken.syntax#strip-syntax */
t4=*((C_word*)lf[37]+1);{
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

/* k11095 in k11089 in a11086 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in ... */
static void C_ccall f_11097(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_11097,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11100,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:332: scheme#symbol->string */
t3=*((C_word*)lf[119]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k11098 in k11095 in k11089 in a11086 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in ... */
static void C_ccall f_11100(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_11100,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11103,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11465,a[2]=t2,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:333: ##sys#current-module */
t4=*((C_word*)lf[83]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11101 in k11098 in k11095 in k11089 in a11086 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in ... */
static void C_ccall f_11103(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_11103,c,av);}
a=C_alloc(9);
t2=C_i_cddr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11109,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:338: r */
t4=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[79];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k11107 in k11101 in k11098 in k11095 in k11089 in a11086 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in ... */
static void C_ccall f_11109(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_11109,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11112,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:339: r */
t3=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[206];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k11110 in k11107 in k11101 in k11098 in k11095 in k11089 in a11086 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in ... */
static void C_ccall f_11112(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_11112,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11115,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:340: r */
t3=((C_word*)t0)[9];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[78];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k11113 in k11110 in k11107 in k11101 in k11098 in k11095 in k11089 in a11086 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in ... */
static void C_ccall f_11115(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(28,c,3)))){
C_save_and_reclaim((void *)f_11115,c,av);}
a=C_alloc(28);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11119,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li122),tmp=(C_word)a,a+=5,tmp);
t7=C_i_check_list_2(((C_word*)t0)[4],lf[65]);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11179,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=t1,a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11430,a[2]=t4,a[3]=t10,a[4]=t6,a[5]=t5,a[6]=((C_word)li124),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_11430(t12,t8,((C_word*)t0)[4]);}

/* g1164 in k11113 in k11110 in k11107 in k11101 in k11098 in k11095 in k11089 in a11086 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in ... */
static void C_fcall f_11119(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_11119,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_symbolp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11132,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t2))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11147,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:345: c */
t5=((C_word*)t0)[2];{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=C_u_i_car(t2);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
/* chicken-syntax.scm:351: chicken.syntax#syntax-error */
t4=*((C_word*)lf[56]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=lf[197];
av2[3]=lf[198];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}}

/* k11130 in g1164 in k11113 in k11110 in k11107 in k11101 in k11098 in k11095 in k11089 in a11086 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in ... */
static void C_fcall f_11132(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_11132,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_i_cadr(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* chicken-syntax.scm:351: chicken.syntax#syntax-error */
t2=*((C_word*)lf[56]+1);{
C_word av2[5];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[197];
av2[3]=lf[198];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* k11145 in g1164 in k11113 in k11110 in k11107 in k11101 in k11098 in k11095 in k11089 in a11086 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in ... */
static void C_ccall f_11147(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11147,c,av);}
if(C_truep(t1)){
if(C_truep(C_i_pairp(C_u_i_cdr(((C_word*)t0)[2])))){
t2=C_i_cadr(((C_word*)t0)[2]);
if(C_truep(C_i_symbolp(t2))){
t3=C_u_i_cdr(((C_word*)t0)[2]);
if(C_truep(C_i_nullp(C_u_i_cdr(t3)))){
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_cadr(((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* chicken-syntax.scm:351: chicken.syntax#syntax-error */
t4=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[197];
av2[3]=lf[198];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}
else{
/* chicken-syntax.scm:351: chicken.syntax#syntax-error */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[197];
av2[3]=lf[198];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}
else{
t2=((C_word*)t0)[4];
f_11132(t2,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[4];
f_11132(t2,C_SCHEME_FALSE);}}

/* k11177 in k11113 in k11110 in k11107 in k11101 in k11098 in k11095 in k11089 in a11086 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in ... */
static void C_ccall f_11179(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(28,c,3)))){
C_save_and_reclaim((void *)f_11179,c,av);}
a=C_alloc(28);
t2=C_a_i_list(&a,2,lf[36],((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11402,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11422,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
t6=*((C_word*)lf[203]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[205];
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k11208 in k11374 in k11400 in k11177 in k11113 in k11110 in k11107 in k11101 in k11098 in k11095 in k11089 in a11086 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in ... */
static void C_ccall f_11210(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_11210,c,av);}
a=C_alloc(12);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_cons(&a,2,lf[26],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* mapslots in k11374 in k11400 in k11177 in k11113 in k11110 in k11107 in k11101 in k11098 in k11095 in k11089 in a11086 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in ... */
static void C_fcall f_11212(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,2)))){
C_save_and_reclaim_args((void *)trf_11212,4,t0,t1,t2,t3);}
a=C_alloc(11);
t4=C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t4)){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_i_car(t2);
t6=C_i_symbolp(t5);
t7=C_i_not(t6);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_11228,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t2,a[7]=t7,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],tmp=(C_word)a,a+=11,tmp);
if(C_truep(t7)){
/* chicken-syntax.scm:369: scheme#symbol->string */
t9=*((C_word*)lf[119]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=C_i_cadr(t5);
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
/* chicken-syntax.scm:369: scheme#symbol->string */
t9=*((C_word*)lf[119]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}}}

/* k11226 in mapslots in k11374 in k11400 in k11177 in k11113 in k11110 in k11107 in k11101 in k11098 in k11095 in k11089 in a11086 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in ... */
static void C_ccall f_11228(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,5)))){
C_save_and_reclaim((void *)f_11228,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_11231,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11361,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:370: scheme#string-append */
t4=*((C_word*)lf[38]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[10];
av2[3]=lf[201];
av2[4]=t1;
av2[5]=lf[202];
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}

/* k11229 in k11226 in mapslots in k11374 in k11400 in k11177 in k11113 in k11110 in k11107 in k11101 in k11098 in k11095 in k11089 in a11086 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in ... */
static void C_ccall f_11231(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_11231,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_11234,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11357,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:371: scheme#string-append */
t4=*((C_word*)lf[38]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[10];
av2[3]=lf[200];
av2[4]=((C_word*)t0)[11];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k11232 in k11229 in k11226 in mapslots in k11374 in k11400 in k11177 in k11113 in k11110 in k11107 in k11101 in k11098 in k11095 in k11089 in a11086 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in ... */
static void C_ccall f_11234(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(79,c,2)))){
C_save_and_reclaim((void *)f_11234,c,av);}
a=C_alloc(79);
t2=C_a_i_list(&a,2,lf[77],lf[199]);
t3=C_a_i_list(&a,2,lf[36],((C_word*)t0)[2]);
t4=C_a_i_list(&a,3,lf[71],lf[77],t3);
t5=C_a_i_list(&a,2,lf[32],t4);
t6=C_a_i_list(&a,4,lf[74],lf[77],((C_word*)t0)[3],lf[199]);
t7=C_a_i_list(&a,4,lf[20],t2,t5,t6);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11260,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11264,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[8],a[6]=t7,a[7]=((C_word*)t0)[9],a[8]=t1,a[9]=t8,tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[7])){
t10=t9;
f_11264(t10,C_SCHEME_END_OF_LIST);}
else{
t10=C_a_i_list(&a,3,((C_word*)t0)[9],((C_word*)t0)[10],t7);
t11=t9;
f_11264(t11,C_a_i_list(&a,1,t10));}}

/* k11246 in k11258 in k11232 in k11229 in k11226 in mapslots in k11374 in k11400 in k11177 in k11113 in k11110 in k11107 in k11101 in k11098 in k11095 in k11089 in a11086 in k5568 in k5565 in k5561 in k5558 in k5555 in ... */
static void C_ccall f_11248(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_11248,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k11258 in k11232 in k11229 in k11226 in mapslots in k11374 in k11400 in k11177 in k11113 in k11110 in k11107 in k11101 in k11098 in k11095 in k11089 in a11086 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_ccall f_11260(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_11260,c,av);}
a=C_alloc(7);
t2=C_a_i_cons(&a,2,lf[26],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11248,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:395: mapslots */
t4=((C_word*)((C_word*)t0)[3])[1];
f_11212(t4,t3,C_slot(((C_word*)t0)[4],C_fix(1)),C_fixnum_plus(((C_word*)t0)[5],C_fix(1)));}

/* k11262 in k11232 in k11229 in k11226 in mapslots in k11374 in k11400 in k11177 in k11113 in k11110 in k11107 in k11101 in k11098 in k11095 in k11089 in a11086 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_fcall f_11264(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(66,0,3)))){
C_save_and_reclaim_args((void *)trf_11264,2,t0,t1);}
a=C_alloc(66);
if(C_truep(((C_word*)t0)[2])){
t2=C_a_i_list(&a,1,lf[77]);
t3=C_a_i_list(&a,2,lf[36],((C_word*)t0)[3]);
t4=C_a_i_list(&a,3,lf[71],lf[77],t3);
t5=C_a_i_list(&a,2,lf[32],t4);
t6=C_a_i_list(&a,3,lf[72],lf[77],((C_word*)t0)[4]);
t7=C_a_i_list(&a,4,lf[20],t2,t5,t6);
t8=C_a_i_list(&a,3,((C_word*)t0)[5],t7,((C_word*)t0)[6]);
t9=C_a_i_list(&a,3,((C_word*)t0)[7],((C_word*)t0)[8],t8);
t10=C_a_i_list(&a,1,t9);
/* chicken-syntax.scm:378: ##sys#append */
t11=*((C_word*)lf[53]+1);{
C_word av2[4];
av2[0]=t11;
av2[1]=((C_word*)t0)[9];
av2[2]=t1;
av2[3]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(4,av2);}}
else{
t2=C_a_i_list(&a,1,lf[77]);
t3=C_a_i_list(&a,2,lf[36],((C_word*)t0)[3]);
t4=C_a_i_list(&a,3,lf[71],lf[77],t3);
t5=C_a_i_list(&a,2,lf[32],t4);
t6=C_a_i_list(&a,3,lf[72],lf[77],((C_word*)t0)[4]);
t7=C_a_i_list(&a,4,lf[20],t2,t5,t6);
t8=C_a_i_list(&a,3,((C_word*)t0)[7],((C_word*)t0)[8],t7);
t9=C_a_i_list(&a,1,t8);
/* chicken-syntax.scm:378: ##sys#append */
t10=*((C_word*)lf[53]+1);{
C_word av2[4];
av2[0]=t10;
av2[1]=((C_word*)t0)[9];
av2[2]=t1;
av2[3]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}}

/* k11355 in k11229 in k11226 in mapslots in k11374 in k11400 in k11177 in k11113 in k11110 in k11107 in k11101 in k11098 in k11095 in k11089 in a11086 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in ... */
static void C_ccall f_11357(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11357,c,av);}
/* chicken-syntax.scm:371: scheme#string->symbol */
t2=*((C_word*)lf[118]+1);{
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

/* k11359 in k11226 in mapslots in k11374 in k11400 in k11177 in k11113 in k11110 in k11107 in k11101 in k11098 in k11095 in k11089 in a11086 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in ... */
static void C_ccall f_11361(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11361,c,av);}
/* chicken-syntax.scm:370: scheme#string->symbol */
t2=*((C_word*)lf[118]+1);{
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

/* k11374 in k11400 in k11177 in k11113 in k11110 in k11107 in k11101 in k11098 in k11095 in k11089 in a11086 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in ... */
static void C_ccall f_11376(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(52,c,4)))){
C_save_and_reclaim((void *)f_11376,c,av);}
a=C_alloc(52);
t2=C_a_i_list(&a,1,lf[77]);
t3=C_a_i_list(&a,2,lf[36],((C_word*)t0)[2]);
t4=C_a_i_list(&a,3,lf[70],lf[77],t3);
t5=C_a_i_list(&a,3,lf[20],t2,t4);
t6=C_a_i_list(&a,3,((C_word*)t0)[3],t1,t5);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11210,a[2]=t6,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11212,a[2]=((C_word*)t0)[2],a[3]=t9,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[8],a[7]=((C_word)li123),tmp=(C_word)a,a+=8,tmp));
t11=((C_word*)t9)[1];
f_11212(t11,t7,((C_word*)t0)[9],C_fix(1));}

/* k11394 in k11400 in k11177 in k11113 in k11110 in k11107 in k11101 in k11098 in k11095 in k11089 in a11086 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in ... */
static void C_ccall f_11396(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11396,c,av);}
/* chicken-syntax.scm:362: scheme#string->symbol */
t2=*((C_word*)lf[118]+1);{
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

/* k11400 in k11177 in k11113 in k11110 in k11107 in k11101 in k11098 in k11095 in k11089 in a11086 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in ... */
static void C_ccall f_11402(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(43,c,3)))){
C_save_and_reclaim((void *)f_11402,c,av);}
a=C_alloc(43);
t2=C_a_i_list(&a,2,lf[36],((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,lf[69],t3);
t5=C_a_i_list(&a,3,lf[20],((C_word*)t0)[3],t4);
t6=C_a_i_list(&a,3,((C_word*)t0)[4],t1,t5);
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11376,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t6,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11396,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
t9=*((C_word*)lf[203]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=((C_word*)t0)[8];
av2[3]=lf[204];
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}

/* k11420 in k11177 in k11113 in k11110 in k11107 in k11101 in k11098 in k11095 in k11089 in a11086 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in ... */
static void C_ccall f_11422(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11422,c,av);}
/* chicken-syntax.scm:357: scheme#string->symbol */
t2=*((C_word*)lf[118]+1);{
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

/* map-loop1158 in k11113 in k11110 in k11107 in k11101 in k11098 in k11095 in k11089 in a11086 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in ... */
static void C_fcall f_11430(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_11430,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11455,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:342: g1164 */
t4=((C_word*)t0)[4];
f_11119(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k11453 in map-loop1158 in k11113 in k11110 in k11107 in k11101 in k11098 in k11095 in k11089 in a11086 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in ... */
static void C_ccall f_11455(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11455,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_11430(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k11463 in k11098 in k11095 in k11089 in a11086 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in ... */
static void C_ccall f_11465(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_11465,c,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11472,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11476,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:335: ##sys#current-module */
t4=*((C_word*)lf[83]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
f_11103(2,av2);}}}

/* k11470 in k11463 in k11098 in k11095 in k11089 in a11086 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in ... */
static void C_ccall f_11472(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11472,c,av);}
/* chicken-syntax.scm:334: chicken.base#symbol-append */
t2=*((C_word*)lf[80]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[81];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k11474 in k11463 in k11098 in k11095 in k11089 in a11086 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in ... */
static void C_ccall f_11476(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11476,c,av);}
/* chicken-syntax.scm:335: ##sys#module-name */
t2=*((C_word*)lf[82]+1);{
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

/* k11478 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in ... */
static void C_ccall f_11480(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11480,c,av);}
/* chicken-syntax.scm:317: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[208];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11481 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in ... */
static void C_ccall f_11482(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11482,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11486,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:322: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[208];
av2[3]=t2;
av2[4]=lf[210];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11484 in a11481 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in ... */
static void C_ccall f_11486(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_11486,c,av);}
a=C_alloc(3);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[209],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k11495 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_11497(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11497,c,av);}
/* chicken-syntax.scm:303: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[211];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11498 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_11499(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_11499,c,av);}
a=C_alloc(14);
t5=C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11509,a[2]=t5,a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t5))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11538,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11594,a[2]=t5,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:305: ##sys#list? */
t9=*((C_word*)lf[218]+1);{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
av2[2]=C_i_car(t5);
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
t7=t6;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
f_11509(2,av2);}}}

/* k11507 in a11498 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 in ... */
static void C_ccall f_11509(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11509,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11522,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:305: rename1092 */
t5=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[212];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
/* chicken-syntax.scm:305: chicken.internal.syntax-rules#syntax-rules-mismatch */
t2=*((C_word*)lf[213]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* k11520 in k11507 in a11498 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in ... */
static void C_ccall f_11522(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_11522,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,t1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k11536 in a11498 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 in ... */
static void C_ccall f_11538(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_11538,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11544,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:305: ##sys#list? */
t3=*((C_word*)lf[218]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_cdr(((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_11509(2,av2);}}}

/* k11542 in k11536 in a11498 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in ... */
static void C_ccall f_11544(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_11544,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11547,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:305: ##sys#length */
t3=*((C_word*)lf[217]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_cdr(((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_11509(2,av2);}}}

/* k11545 in k11542 in k11536 in a11498 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in ... */
static void C_ccall f_11547(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_11547,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11553,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:305: ##sys#>= */
t3=*((C_word*)lf[216]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k11551 in k11545 in k11542 in k11536 in a11498 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in ... */
static void C_ccall f_11553(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_11553,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11562,a[2]=t4,a[3]=((C_word)li127),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_11562(t6,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_11509(2,av2);}}}

/* loop1089 in k11551 in k11545 in k11542 in k11536 in a11498 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in ... */
static void C_fcall f_11562(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_11562,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11569,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:305: ##sys#= */
t5=*((C_word*)lf[215]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k11567 in loop1089 in k11551 in k11545 in k11542 in k11536 in a11498 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in ... */
static void C_ccall f_11569(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_11569,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_i_cdr(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11583,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:305: ##sys#+ */
t4=*((C_word*)lf[214]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(-1);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k11581 in k11567 in loop1089 in k11551 in k11545 in k11542 in k11536 in a11498 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in ... */
static void C_ccall f_11583(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11583,c,av);}
/* chicken-syntax.scm:305: loop1089 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_11562(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k11592 in a11498 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 in ... */
static void C_ccall f_11594(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_11594,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11597,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:305: ##sys#length */
t3=*((C_word*)lf[217]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_car(((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_11538(2,av2);}}}

/* k11595 in k11592 in a11498 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in ... */
static void C_ccall f_11597(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_11597,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11603,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:305: ##sys#>= */
t3=*((C_word*)lf[216]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k11601 in k11595 in k11592 in a11498 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in ... */
static void C_ccall f_11603(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_11603,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11612,a[2]=t4,a[3]=((C_word)li128),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_11612(t6,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_11538(2,av2);}}}

/* loop1089 in k11601 in k11595 in k11592 in a11498 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in ... */
static void C_fcall f_11612(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_11612,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11619,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:305: ##sys#= */
t5=*((C_word*)lf[215]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k11617 in loop1089 in k11601 in k11595 in k11592 in a11498 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in ... */
static void C_ccall f_11619(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_11619,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_i_cdr(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11633,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:305: ##sys#+ */
t4=*((C_word*)lf[214]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(-1);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k11631 in k11617 in loop1089 in k11601 in k11595 in k11592 in a11498 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in ... */
static void C_ccall f_11633(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11633,c,av);}
/* chicken-syntax.scm:305: loop1089 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_11612(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k11643 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_11645(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11645,c,av);}
/* chicken-syntax.scm:295: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[219];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11646 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_11647(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_11647,c,av);}
a=C_alloc(6);
t5=C_i_cdr(t2);
t6=C_i_pairp(t5);
t7=(C_truep(t6)?C_eqp(C_i_cdr(t5),C_SCHEME_END_OF_LIST):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=C_i_car(t5);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11667,a[2]=t8,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:297: rename1058 */
t10=t3;{
C_word *av2=av;
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[220];
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11681,a[2]=t5,a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t5))){
t9=C_i_cdr(t5);
t10=C_i_pairp(t9);
t11=t8;
f_11681(t11,(C_truep(t10)?C_eqp(C_i_cdr(t9),C_SCHEME_END_OF_LIST):C_SCHEME_FALSE));}
else{
t9=t8;
f_11681(t9,C_SCHEME_FALSE);}}}

/* k11665 in a11646 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_11667(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_11667,c,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,t1,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11679 in a11646 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_fcall f_11681(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_11681,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11694,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:297: rename1058 */
t6=((C_word*)t0)[4];{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[220];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
/* chicken-syntax.scm:297: chicken.internal.syntax-rules#syntax-rules-mismatch */
t2=*((C_word*)lf[213]+1);{
C_word av2[3];
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* k11692 in k11679 in a11646 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 in ... */
static void C_ccall f_11694(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_11694,c,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,t1,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11740 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_11742(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11742,c,av);}
/* chicken-syntax.scm:284: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
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

/* a11743 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_11744(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11744,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11748,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:288: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[221];
av2[3]=t2;
av2[4]=lf[223];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11746 in a11743 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_11748(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11748,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11755,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:289: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[222];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k11753 in k11746 in a11743 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_11755(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11755,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11763,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:290: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[79];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k11761 in k11753 in k11746 in a11743 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 in ... */
static void C_ccall f_11763(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_11763,c,av);}
a=C_alloc(9);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,((C_word*)t0)[4],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11769 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_11771(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11771,c,av);}
/* chicken-syntax.scm:276: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[222];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11772 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_11773(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11773,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11777,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:280: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[222];
av2[3]=t2;
av2[4]=lf[226];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11775 in a11772 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_11777(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_11777,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11780,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,lf[26],t3);
/* chicken-syntax.scm:281: ##sys#register-meta-expression */
t5=*((C_word*)lf[225]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k11778 in k11775 in a11772 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_11780(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_11780,c,av);}
a=C_alloc(9);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[26],t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,lf[224],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11799 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_11801(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11801,c,av);}
/* chicken-syntax.scm:268: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[227];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11802 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_11803(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11803,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11807,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:273: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[227];
av2[3]=t2;
av2[4]=lf[229];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11805 in a11802 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_11807(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_11807,c,av);}
a=C_alloc(6);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,2,lf[228],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k11816 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_11818(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11818,c,av);}
/* chicken-syntax.scm:243: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[230];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11819 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_11820(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11820,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11824,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:247: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[230];
av2[3]=t2;
av2[4]=lf[238];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11822 in a11819 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_11824(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11824,c,av);}
a=C_alloc(5);
t2=C_i_memq(lf[231],*((C_word*)lf[232]+1));
if(C_truep(C_i_not(t2))){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=lf[233];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11833,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:250: chicken.syntax#strip-syntax */
t4=*((C_word*)lf[37]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_cadr(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k11831 in k11822 in a11819 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_11833(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11833,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11836,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:251: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[237];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k11834 in k11831 in k11822 in a11819 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_11836(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11836,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11839,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:252: chicken.syntax#strip-syntax */
t3=*((C_word*)lf[37]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_caddr(((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k11837 in k11834 in k11831 in k11822 in a11819 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_11839(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_11839,c,av);}
a=C_alloc(18);
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_list(&a,2,((C_word*)t0)[2],lf[234]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11862,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:258: chicken.compiler.scrutinizer#check-and-validate-type */
t5=*((C_word*)lf[236]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t1;
av2[3]=lf[230];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k11860 in k11837 in k11834 in k11831 in k11822 in a11819 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_11862(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,1)))){
C_save_and_reclaim((void *)f_11862,c,av);}
a=C_alloc(24);
t2=C_a_i_list(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list(&a,4,lf[235],((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,lf[224],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11876 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_11878(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11878,c,av);}
/* chicken-syntax.scm:218: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[239];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11879 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_11880(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11880,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11884,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:222: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[239];
av2[3]=t2;
av2[4]=lf[242];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11882 in a11879 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_11884(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11884,c,av);}
a=C_alloc(5);
t2=C_i_memq(lf[231],*((C_word*)lf[232]+1));
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11890,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:224: chicken.base#gensym */
t4=*((C_word*)lf[54]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11888 in k11882 in a11879 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_11890(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_11890,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11893,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:225: chicken.syntax#get-line-number */
t3=*((C_word*)lf[41]+1);{
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

/* k11891 in k11888 in k11882 in a11879 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_11893(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(33,c,3)))){
C_save_and_reclaim((void *)f_11893,c,av);}
a=C_alloc(33);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_list(&a,1,t3);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11917,a[2]=((C_word*)t0)[4],a[3]=((C_word)li135),tmp=(C_word)a,a+=4,tmp);
t10=C_u_i_cdr(((C_word*)t0)[2]);
t11=C_u_i_cdr(t10);
t12=C_i_check_list_2(t11,lf[65]);
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11955,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11957,a[2]=t7,a[3]=t15,a[4]=t9,a[5]=t8,a[6]=((C_word)li136),tmp=(C_word)a,a+=7,tmp));
t17=((C_word*)t15)[1];
f_11957(t17,t13,t11);}

/* g975 in k11891 in k11888 in k11882 in a11879 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_fcall f_11917(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_11917,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11921,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:231: chicken.syntax#strip-syntax */
t4=*((C_word*)lf[37]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_car(t2);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k11919 in g975 in k11891 in k11888 in k11882 in a11879 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_11921(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_11921,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11928,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_eqp(t1,lf[240]);
if(C_truep(t3)){
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_a_i_cons(&a,2,lf[26],t4);
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list2(&a,2,lf[240],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
if(C_truep(((C_word*)t0)[4])){
/* chicken-syntax.scm:236: chicken.compiler.scrutinizer#check-and-validate-type */
t4=*((C_word*)lf[236]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t1;
av2[3]=lf[239];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_a_i_cons(&a,2,lf[26],t4);
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list2(&a,2,t1,t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}}

/* k11926 in k11919 in g975 in k11891 in k11888 in k11882 in a11879 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_11928(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_11928,c,av);}
a=C_alloc(9);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[26],t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list2(&a,2,t1,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11953 in k11891 in k11888 in k11882 in a11879 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_11955(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_11955,c,av);}
a=C_alloc(18);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_cons(&a,2,lf[241],t3);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[5],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* map-loop969 in k11891 in k11888 in k11882 in a11879 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_fcall f_11957(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_11957,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11982,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:230: g975 */
t4=((C_word*)t0)[4];
f_11917(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k11980 in map-loop969 in k11891 in k11888 in k11882 in a11879 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_11982(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11982,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_11957(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k11999 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12001(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12001,c,av);}
/* chicken-syntax.scm:158: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
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

/* a12002 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12003(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_12003,c,av);}
a=C_alloc(5);
t5=C_i_memq(lf[231],*((C_word*)lf[232]+1));
if(C_truep(C_i_not(t5))){
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=lf[244];
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12013,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:164: ##sys#check-syntax */
t7=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[243];
av2[3]=t2;
av2[4]=lf[250];
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}}

/* k12011 in a12002 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12013(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_12013,c,av);}
a=C_alloc(8);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_car(t2);
t4=C_u_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12023,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=t4,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:168: chicken.base#gensym */
t6=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k12021 in k12011 in a12002 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12023(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12023,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12026,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=C_i_cdddr(((C_word*)t0)[2]);
if(C_truep(C_i_pairp(t3))){
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_u_i_cdr(t4);
/* chicken-syntax.scm:169: chicken.syntax#strip-syntax */
t6=*((C_word*)lf[37]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t2;
av2[2]=C_u_i_car(t5);
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_12026(2,av2);}}}

/* k12024 in k12021 in k12011 in a12002 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12026(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_12026,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12029,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:170: r */
t3=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[79];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k12027 in k12024 in k12021 in k12011 in a12002 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12029(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12029,c,av);}
a=C_alloc(12);
t2=(C_truep(((C_word*)t0)[2])?C_i_cadddr(((C_word*)t0)[3]):C_i_caddr(((C_word*)t0)[3]));
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_12037,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t2,a[5]=t1,a[6]=((C_word*)t0)[2],a[7]=t4,a[8]=((C_word*)t0)[6],a[9]=((C_word)li141),tmp=(C_word)a,a+=10,tmp));
t6=((C_word*)t4)[1];
f_12037(t6,((C_word*)t0)[7],((C_word*)t0)[8],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* loop in k12027 in k12024 in k12021 in k12011 in a12002 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_fcall f_12037(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_12037,5,t0,t1,t2,t3,t4);}
a=C_alloc(10);
if(C_truep(C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_12047,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=t3,a[9]=t4,tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:174: scheme#reverse */
t6=*((C_word*)lf[55]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=C_i_car(t2);
if(C_truep(C_i_symbolp(t5))){
t6=C_u_i_cdr(t2);
t7=C_a_i_cons(&a,2,t5,t3);
t8=C_a_i_cons(&a,2,lf[248],t4);
/* chicken-syntax.scm:204: loop */
t10=t1;
t11=t6;
t12=t7;
t13=t8;
t1=t10;
t2=t11;
t3=t12;
t4=t13;
goto loop;}
else{
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12277,a[2]=t2,a[3]=t5,a[4]=t3,a[5]=t4,a[6]=((C_word*)t0)[7],a[7]=t1,a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_listp(t5))){
t7=C_eqp(C_fix(2),C_u_i_length(t5));
t8=t6;
f_12277(t8,(C_truep(t7)?C_i_symbolp(C_i_car(t5)):C_SCHEME_FALSE));}
else{
t7=t6;
f_12277(t7,C_SCHEME_FALSE);}}}}

/* k12045 in loop in k12027 in k12024 in k12021 in k12011 in a12002 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12047(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_12047,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_12050,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:175: scheme#reverse */
t3=*((C_word*)lf[55]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k12048 in k12045 in loop in k12027 in k12024 in k12021 in k12011 in a12002 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12050(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,4)))){
C_save_and_reclaim((void *)f_12050,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_12221,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12223,a[2]=t4,a[3]=((C_word)li140),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_12223(t6,t2,((C_word*)t0)[9],C_fix(1));}

/* k12090 in k12154 in k12219 in k12048 in k12045 in loop in k12027 in k12024 in k12021 in k12011 in a12002 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 in ... */
static void C_ccall f_12092(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(30,c,1)))){
C_save_and_reclaim((void *)f_12092,c,av);}
a=C_alloc(30);
t2=C_a_i_list(&a,3,lf[35],t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,4,lf[26],((C_word*)t0)[6],((C_word*)t0)[7],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* map-loop915 in k12154 in k12219 in k12048 in k12045 in loop in k12027 in k12024 in k12021 in k12011 in a12002 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 in ... */
static void C_fcall f_12094(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,0,3)))){
C_save_and_reclaim_args((void *)trf_12094,4,t0,t1,t2,t3);}
a=C_alloc(21);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,4,lf[174],t7,C_SCHEME_TRUE,t6);
t9=C_a_i_list2(&a,2,t6,t8);
t10=C_a_i_cons(&a,2,t9,C_SCHEME_END_OF_LIST);
t11=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t10);
t12=C_mutate(((C_word *)((C_word*)t0)[2])+1,t10);
t14=t1;
t15=C_slot(t2,C_fix(1));
t16=C_slot(t3,C_fix(1));
t1=t14;
t2=t15;
t3=t16;
goto loop;}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k12154 in k12219 in k12048 in k12045 in loop in k12027 in k12024 in k12021 in k12011 in a12002 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_fcall f_12156(C_word t0,C_word t1){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(60,0,4)))){
C_save_and_reclaim_args((void *)trf_12156,2,t0,t1);}
a=C_alloc(60);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list(&a,4,lf[245],((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=C_a_i_list(&a,2,lf[246],((C_word*)t0)[4]);
t5=C_a_i_list(&a,2,lf[247],((C_word*)t0)[4]);
t6=C_a_i_list(&a,3,lf[192],t4,t5);
t7=C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[5]);
t8=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t9=t8;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=((C_word*)t10)[1];
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12092,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t7,a[5]=((C_word*)t0)[8],a[6]=t3,a[7]=t6,tmp=(C_word)a,a+=8,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12094,a[2]=t10,a[3]=t14,a[4]=t11,a[5]=((C_word)li138),tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_12094(t16,t12,((C_word*)t0)[5],((C_word*)t0)[2]);}

/* k12175 in k12219 in k12048 in k12045 in loop in k12027 in k12024 in k12021 in k12011 in a12002 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12177(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_12177,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
f_12156(t2,C_a_i_list2(&a,2,t1,((C_word*)t0)[3]));}

/* map-loop881 in k12219 in k12048 in k12045 in loop in k12027 in k12024 in k12021 in k12011 in a12002 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_fcall f_12179(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_12179,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12204,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[236]+1);
/* chicken-syntax.scm:189: g904 */
t6=*((C_word*)lf[236]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=lf[243];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k12202 in map-loop881 in k12219 in k12048 in k12045 in loop in k12027 in k12024 in k12021 in k12011 in a12002 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 in ... */
static void C_ccall f_12204(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_12204,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_12179(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k12219 in k12048 in k12045 in loop in k12027 in k12024 in k12021 in k12011 in a12002 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12221(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,3)))){
C_save_and_reclaim((void *)f_12221,c,av);}
a=C_alloc(29);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12156,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t4=(C_truep(((C_word*)t0)[9])?C_i_pairp(((C_word*)t0)[9]):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=C_i_check_list_2(((C_word*)t0)[9],lf[65]);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12177,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12179,a[2]=t7,a[3]=t12,a[4]=t8,a[5]=((C_word)li139),tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_12179(t14,t10,((C_word*)t0)[9]);}
else{
t5=t3;
f_12156(t5,C_a_i_list1(&a,1,t2));}}

/* loop2 in k12048 in k12045 in loop in k12027 in k12024 in k12021 in k12011 in a12002 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_fcall f_12223(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_12223,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_a_i_vector1(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12241,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:181: loop2 */
t7=t5;
t8=C_i_cdr(t2);
t9=C_fixnum_plus(t3,C_fix(1));
t1=t7;
t2=t8;
t3=t9;
goto loop;}}

/* k12239 in loop2 in k12048 in k12045 in loop in k12027 in k12024 in k12021 in k12011 in a12002 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12241(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_12241,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k12275 in loop in k12027 in k12024 in k12021 in k12011 in a12002 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_fcall f_12277(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,5)))){
C_save_and_reclaim_args((void *)trf_12277,2,t0,t1);}
a=C_alloc(10);
if(C_truep(t1)){
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_i_car(((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[4]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12294,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=t2,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:210: chicken.compiler.scrutinizer#check-and-validate-type */
t6=*((C_word*)lf[236]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=C_i_cadr(((C_word*)t0)[3]);
av2[3]=lf[243];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
/* chicken-syntax.scm:214: chicken.syntax#syntax-error */
t2=*((C_word*)lf[56]+1);{
C_word av2[6];
av2[0]=t2;
av2[1]=((C_word*)t0)[7];
av2[2]=lf[243];
av2[3]=lf[249];
av2[4]=((C_word*)t0)[3];
av2[5]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}

/* k12292 in k12275 in loop in k12027 in k12024 in k12021 in k12011 in a12002 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12294(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_12294,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* chicken-syntax.scm:206: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_12037(t3,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t2);}

/* k12349 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12351(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12351,c,av);}
/* chicken-syntax.scm:152: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[251];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a12352 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12353(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_12353,c,av);}
a=C_alloc(14);
t5=C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12363,a[2]=t5,a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t5))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12525,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12581,a[2]=t5,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:154: ##sys#list? */
t9=*((C_word*)lf[218]+1);{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
av2[2]=C_i_car(t5);
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
t7=t6;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
f_12363(2,av2);}}}

/* k12361 in a12352 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12363(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_12363,c,av);}
a=C_alloc(18);
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_car(((C_word*)t0)[2]);
t7=C_i_check_list_2(t6,lf[65]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12380,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12481,a[2]=t4,a[3]=t10,a[4]=t5,a[5]=((C_word)li145),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_12481(t12,t8,t6);}
else{
/* chicken-syntax.scm:154: chicken.internal.syntax-rules#syntax-rules-mismatch */
t2=*((C_word*)lf[213]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* k12378 in k12361 in a12352 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12380(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12380,c,av);}
a=C_alloc(19);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_car(((C_word*)t0)[2]);
t7=C_i_check_list_2(t6,lf[65]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12401,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12447,a[2]=t4,a[3]=t10,a[4]=t5,a[5]=((C_word)li144),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_12447(t12,t8,t6);}

/* k12399 in k12378 in k12361 in a12352 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12401(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_12401,c,av);}
a=C_alloc(7);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12411,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:154: rename741 */
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[254];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k12409 in k12399 in k12378 in k12361 in a12352 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12411(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_12411,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12419,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12421,a[2]=((C_word*)t0)[4],a[3]=((C_word)li143),tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:154: ##sys#map-n */
t4=*((C_word*)lf[253]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k12417 in k12409 in k12399 in k12378 in k12361 in a12352 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12419(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_12419,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a12420 in k12409 in k12399 in k12378 in k12361 in a12352 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12421(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12421,c,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12437,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:154: rename741 */
t5=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[252];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k12435 in a12420 in k12409 in k12399 in k12378 in k12361 in a12352 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12437(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,1)))){
C_save_and_reclaim((void *)f_12437,c,av);}
a=C_alloc(15);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_cons(&a,2,t1,t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[2],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* map-loop814 in k12378 in k12361 in a12352 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_fcall f_12447(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_12447,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cdr(t3);
t5=C_i_car(t4);
t6=C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t6);
t8=C_mutate(((C_word *)((C_word*)t0)[2])+1,t6);
t10=t1;
t11=C_slot(t2,C_fix(1));
t1=t10;
t2=t11;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* map-loop786 in k12361 in a12352 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_fcall f_12481(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_12481,3,t0,t1,t2);}
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

/* k12523 in a12352 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12525(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_12525,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12531,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:154: ##sys#list? */
t3=*((C_word*)lf[218]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_cdr(((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_12363(2,av2);}}}

/* k12529 in k12523 in a12352 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12531(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_12531,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12534,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:154: ##sys#length */
t3=*((C_word*)lf[217]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_cdr(((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_12363(2,av2);}}}

/* k12532 in k12529 in k12523 in a12352 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12534(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_12534,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12540,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:154: ##sys#>= */
t3=*((C_word*)lf[216]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k12538 in k12532 in k12529 in k12523 in a12352 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12540(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_12540,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12549,a[2]=t4,a[3]=((C_word)li146),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_12549(t6,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_12363(2,av2);}}}

/* loop738 in k12538 in k12532 in k12529 in k12523 in a12352 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_fcall f_12549(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_12549,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12556,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:154: ##sys#= */
t5=*((C_word*)lf[215]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k12554 in loop738 in k12538 in k12532 in k12529 in k12523 in a12352 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12556(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_12556,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_i_cdr(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12570,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:154: ##sys#+ */
t4=*((C_word*)lf[214]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(-1);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k12568 in k12554 in loop738 in k12538 in k12532 in k12529 in k12523 in a12352 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12570(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_12570,c,av);}
/* chicken-syntax.scm:154: loop738 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_12549(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k12579 in a12352 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12581(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_12581,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12584,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:154: ##sys#length */
t3=*((C_word*)lf[217]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_car(((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_12525(2,av2);}}}

/* k12582 in k12579 in a12352 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12584(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_12584,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12590,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:154: ##sys#>= */
t3=*((C_word*)lf[216]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k12588 in k12582 in k12579 in a12352 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12590(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_12590,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12599,a[2]=t4,a[3]=((C_word)li147),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_12599(t6,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_12525(2,av2);}}}

/* loop738 in k12588 in k12582 in k12579 in a12352 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_fcall f_12599(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_12599,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12606,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:154: ##sys#= */
t5=*((C_word*)lf[215]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k12604 in loop738 in k12588 in k12582 in k12579 in a12352 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12606(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_12606,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_i_car(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12618,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t2))){
t4=C_i_cdr(t2);
t5=C_i_pairp(t4);
t6=t3;
f_12618(t6,(C_truep(t5)?C_eqp(C_i_cdr(t4),C_SCHEME_END_OF_LIST):C_SCHEME_FALSE));}
else{
t4=t3;
f_12618(t4,C_SCHEME_FALSE);}}}

/* k12616 in k12604 in loop738 in k12588 in k12582 in k12579 in a12352 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_fcall f_12618(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_12618,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12629,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:154: ##sys#+ */
t4=*((C_word*)lf[214]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(-1);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k12627 in k12616 in k12604 in loop738 in k12588 in k12582 in k12579 in a12352 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12629(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_12629,c,av);}
/* chicken-syntax.scm:154: loop738 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_12599(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k12658 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12660(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12660,c,av);}
/* chicken-syntax.scm:141: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[252];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a12661 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12662(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12662,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12666,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:145: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[252];
av2[3]=t2;
av2[4]=lf[255];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k12664 in a12661 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12666(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_12666,c,av);}
a=C_alloc(4);
t2=C_i_memq(lf[231],*((C_word*)lf[232]+1));
if(C_truep(C_i_not(t2))){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_caddr(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12682,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:148: chicken.compiler.scrutinizer#check-and-validate-type */
t4=*((C_word*)lf[236]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_cadr(((C_word*)t0)[3]);
av2[3]=lf[252];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k12680 in k12664 in a12661 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12682(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_12682,c,av);}
a=C_alloc(12);
t2=C_i_caddr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,4,lf[174],t1,C_SCHEME_TRUE,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k12696 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12698(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12698,c,av);}
/* chicken-syntax.scm:118: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[256];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a12699 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12700(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12700,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12704,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:122: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[256];
av2[3]=t2;
av2[4]=lf[263];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k12702 in a12699 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12704(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_12704,c,av);}
a=C_alloc(4);
t2=C_i_memq(lf[231],*((C_word*)lf[232]+1));
if(C_truep(C_i_not(t2))){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=lf[257];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12713,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:125: chicken.syntax#strip-syntax */
t4=*((C_word*)lf[37]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_caddr(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k12711 in k12702 in a12699 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12713(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_12713,c,av);}
a=C_alloc(11);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12720,a[2]=t1,a[3]=t3,a[4]=((C_word)li150),tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12730,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word)li151),tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:129: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=t4;
av2[3]=t5;
C_call_with_values(4,av2);}}

/* a12719 in k12711 in k12702 in a12699 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12720(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_12720,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12728,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:132: chicken.syntax#strip-syntax */
t3=*((C_word*)lf[37]+1);{
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

/* k12726 in a12719 in k12711 in k12702 in a12699 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12728(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_12728,c,av);}
/* chicken-syntax.scm:130: chicken.compiler.scrutinizer#validate-type */
t2=*((C_word*)lf[258]+1);{
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

/* a12729 in k12711 in k12702 in a12699 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12730(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(30,c,5)))){
C_save_and_reclaim((void *)f_12730,c,av);}
a=C_alloc(30);
if(C_truep(C_i_not(t2))){
/* chicken-syntax.scm:134: chicken.syntax#syntax-error */
t5=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=lf[256];
av2[3]=lf[259];
av2[4]=((C_word*)t0)[2];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}
else{
t5=C_i_cdddr(((C_word*)t0)[4]);
t6=C_a_i_cons(&a,2,((C_word*)t0)[3],t5);
t7=C_a_i_cons(&a,2,((C_word*)t0)[2],t6);
t8=C_a_i_list(&a,2,lf[260],t7);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12755,a[2]=t8,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12759,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t9,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t4)){
t11=C_a_i_list(&a,2,lf[262],((C_word*)t0)[2]);
t12=t10;
f_12759(t12,C_a_i_list(&a,1,t11));}
else{
t11=t10;
f_12759(t11,C_SCHEME_END_OF_LIST);}}}

/* k12753 in a12729 in k12711 in k12702 in a12699 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12755(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_12755,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[192],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k12757 in a12729 in k12711 in k12702 in a12699 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_fcall f_12759(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,3)))){
C_save_and_reclaim_args((void *)trf_12759,2,t0,t1);}
a=C_alloc(15);
if(C_truep(((C_word*)t0)[2])){
t2=C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,lf[261],t2);
t4=C_a_i_list(&a,1,t3);
/* chicken-syntax.scm:136: ##sys#append */
t5=*((C_word*)lf[53]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=((C_word*)t0)[4];
av2[2]=t1;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
/* chicken-syntax.scm:136: ##sys#append */
t2=*((C_word*)lf[53]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
av2[2]=t1;
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k12807 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12809(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12809,c,av);}
/* chicken-syntax.scm:76: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[266];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a12810 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12811(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12811,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12815,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:81: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[266];
av2[3]=t2;
av2[4]=lf[275];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k12813 in a12810 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12815(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_12815,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12818,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:82: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[274];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k12816 in k12813 in a12810 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12818(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_12818,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12821,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:83: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[273];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k12819 in k12816 in k12813 in a12810 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12821(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_12821,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12824,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:84: r */
t3=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[272];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k12822 in k12819 in k12816 in k12813 in a12810 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12824(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_12824,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12827,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:85: r */
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[264];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k12825 in k12822 in k12819 in k12816 in k12813 in a12810 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12827(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_12827,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12830,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:86: r */
t3=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[240];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k12828 in k12825 in k12822 in k12819 in k12816 in k12813 in a12810 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12830(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_12830,c,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12832,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word)li155),tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_12962,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,a[8]=((C_word*)t0)[8],a[9]=t2,tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:98: r */
t4=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[271];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* parse-clause in k12828 in k12825 in k12822 in k12819 in k12816 in k12813 in a12810 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_fcall f_12832(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(23,0,2)))){
C_save_and_reclaim_args((void *)trf_12832,3,t0,t1,t2);}
a=C_alloc(23);
t3=C_i_car(t2);
t4=C_i_symbolp(t3);
t5=(C_truep(t4)?C_u_i_car(t2):C_SCHEME_FALSE);
t6=(C_truep(t5)?C_i_cadr(t2):C_u_i_car(t2));
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12842,a[2]=t6,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t5)){
t8=C_a_i_list(&a,2,t5,((C_word*)t0)[6]);
t9=C_a_i_list(&a,1,t8);
t10=C_i_cddr(t2);
t11=C_a_i_cons(&a,2,t9,t10);
t12=t7;
f_12842(t12,C_a_i_cons(&a,2,lf[35],t11));}
else{
t8=C_u_i_cdr(t2);
t9=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t8);
t10=t7;
f_12842(t10,C_a_i_cons(&a,2,lf[35],t9));}}

/* k12840 in parse-clause in k12828 in k12825 in k12822 in k12819 in k12816 in k12813 in a12810 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_fcall f_12842(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(25,0,3)))){
C_save_and_reclaim_args((void *)trf_12842,2,t0,t1);}
a=C_alloc(25);
if(C_truep(C_i_nullp(((C_word*)t0)[2]))){
t2=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_a_i_list(&a,2,((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12867,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word)li153),tmp=(C_word)a,a+=5,tmp);
t7=C_i_check_list_2(((C_word*)t0)[2],lf[65]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12881,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12883,a[2]=t6,a[3]=t4,a[4]=t10,a[5]=t5,a[6]=((C_word)li154),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_12883(t12,t8,((C_word*)t0)[2]);}}

/* g627 in k12840 in parse-clause in k12828 in k12825 in k12822 in k12819 in k12816 in k12813 in a12810 in k5508 in k5505 in k4223 in k4220 in k4217 */
static C_word C_fcall f_12867(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_a_i_list(&a,2,lf[36],t1);
return(C_a_i_list(&a,3,((C_word*)t0)[2],t2,((C_word*)t0)[3]));}

/* k12879 in k12840 in parse-clause in k12828 in k12825 in k12822 in k12819 in k12816 in k12813 in a12810 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12881(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_12881,c,av);}
a=C_alloc(12);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,t3,((C_word*)t0)[5]);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* map-loop621 in k12840 in parse-clause in k12828 in k12825 in k12822 in k12819 in k12816 in k12813 in a12810 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_fcall f_12883(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_12883,3,t0,t1,t2);}
a=C_alloc(18);
if(C_truep(C_i_pairp(t2))){
t3=(
/* chicken-syntax.scm:95: g627 */
  f_12867(C_a_i(&a,15),((C_word*)t0)[2],C_slot(t2,C_fix(0)))
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

/* k12960 in k12828 in k12825 in k12822 in k12819 in k12816 in k12813 in a12810 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12962(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(65,c,3)))){
C_save_and_reclaim((void *)f_12962,c,av);}
a=C_alloc(65);
t2=C_a_i_list(&a,2,lf[36],lf[267]);
t3=C_a_i_list(&a,3,lf[70],((C_word*)t0)[2],t2);
t4=C_a_i_list(&a,3,lf[268],((C_word*)t0)[2],C_fix(1));
t5=C_a_i_list(&a,3,((C_word*)t0)[3],t3,t4);
t6=C_a_i_list(&a,2,((C_word*)t0)[4],t5);
t7=C_a_i_list(&a,1,t6);
t8=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t9=t8;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=((C_word*)t10)[1];
t12=C_i_cddr(((C_word*)t0)[5]);
t13=C_i_check_list_2(t12,lf[65]);
t14=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12987,a[2]=t7,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13018,a[2]=t10,a[3]=t16,a[4]=((C_word*)t0)[9],a[5]=t11,a[6]=((C_word)li156),tmp=(C_word)a,a+=7,tmp));
t18=((C_word*)t16)[1];
f_13018(t18,t14,t12);}

/* k12985 in k12960 in k12828 in k12825 in k12822 in k12819 in k12816 in k12813 in a12810 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12987(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_12987,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12994,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:103: r */
t3=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[270];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k12992 in k12985 in k12960 in k12828 in k12825 in k12822 in k12819 in k12816 in k12813 in a12810 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12994(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(23,c,3)))){
C_save_and_reclaim((void *)f_12994,c,av);}
a=C_alloc(23);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12998,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_assq(((C_word*)t0)[7],((C_word*)t0)[8]))){
/* chicken-syntax.scm:103: ##sys#append */
t3=*((C_word*)lf[53]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[8];
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=C_a_i_list(&a,2,lf[269],((C_word*)t0)[6]);
t4=C_a_i_list(&a,2,((C_word*)t0)[7],t3);
t5=C_a_i_list(&a,1,t4);
/* chicken-syntax.scm:103: ##sys#append */
t6=*((C_word*)lf[53]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t2;
av2[2]=((C_word*)t0)[8];
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* k12996 in k12992 in k12985 in k12960 in k12828 in k12825 in k12822 in k12819 in k12816 in k12813 in a12810 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_12998(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,1)))){
C_save_and_reclaim((void *)f_12998,c,av);}
a=C_alloc(24);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list(&a,3,lf[35],((C_word*)t0)[3],t2);
t4=C_i_cadr(((C_word*)t0)[4]);
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,4,((C_word*)t0)[6],((C_word*)t0)[7],t3,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* map-loop652 in k12960 in k12828 in k12825 in k12822 in k12819 in k12816 in k12813 in a12810 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_fcall f_13018(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_13018,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13043,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:102: g658 */
t4=((C_word*)t0)[4];
f_12832(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k13041 in map-loop652 in k12960 in k12828 in k12825 in k12822 in k12819 in k12816 in k12813 in a12810 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_13043(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_13043,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_13018(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k13080 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_13082(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_13082,c,av);}
/* chicken-syntax.scm:55: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[271];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a13083 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_13084(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_13084,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13088,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:60: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[271];
av2[3]=t2;
av2[4]=lf[281];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k13086 in a13083 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_13088(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_13088,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13091,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:61: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[280];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k13089 in k13086 in a13083 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_13091(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_13091,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13094,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:62: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[279];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k13092 in k13089 in k13086 in a13083 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_13094(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_13094,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13105,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:63: r */
t3=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[276];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k13103 in k13092 in k13089 in k13086 in a13083 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_13105(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(114,c,1)))){
C_save_and_reclaim((void *)f_13105,c,av);}
a=C_alloc(114);
t2=C_a_i_list(&a,1,((C_word*)t0)[2]);
t3=C_i_cadr(((C_word*)t0)[3]);
t4=C_a_i_list(&a,1,t3);
t5=C_i_caddr(((C_word*)t0)[3]);
t6=C_a_i_list(&a,3,lf[20],C_SCHEME_END_OF_LIST,t5);
t7=C_a_i_list(&a,2,((C_word*)t0)[2],t6);
t8=C_a_i_list(&a,3,lf[20],t4,t7);
t9=C_u_i_cdr(((C_word*)t0)[3]);
t10=C_u_i_cdr(t9);
t11=C_u_i_cdr(t10);
t12=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t11);
t13=C_a_i_cons(&a,2,lf[20],t12);
t14=C_a_i_list(&a,3,lf[23],lf[24],((C_word*)t0)[4]);
t15=C_a_i_list(&a,3,lf[20],C_SCHEME_END_OF_LIST,t14);
t16=C_a_i_list(&a,2,((C_word*)t0)[2],t15);
t17=C_a_i_list(&a,3,lf[20],((C_word*)t0)[4],t16);
t18=C_a_i_list(&a,3,lf[25],t13,t17);
t19=C_a_i_list(&a,3,lf[20],C_SCHEME_END_OF_LIST,t18);
t20=C_a_i_list(&a,3,lf[278],t8,t19);
t21=C_a_i_list(&a,3,lf[20],t2,t20);
t22=C_a_i_list(&a,2,t1,t21);
t23=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t23;
av2[1]=C_a_i_list(&a,1,t22);
((C_proc)(void*)(*((C_word*)t23+1)))(2,av2);}}

/* k4217 */
static void C_ccall f_4219(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4219,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4222,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_internal_toplevel(2,av2);}}

/* k4220 in k4217 */
static void C_ccall f_4222(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_4222,c,av);}
a=C_alloc(11);
t2=C_a_i_provide(&a,1,lf[0]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4225,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t3;
C_library_toplevel(2,av2);}}

/* k4223 in k4220 in k4217 */
static void C_ccall f_4225(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4225,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[1] /* (set! take ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4335,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5507,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:53: ##sys#macro-environment */
t4=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* take in k4223 in k4220 in k4217 */
static void C_fcall f_4335(C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_4335,3,t1,t2,t3);}
a=C_alloc(4);
if(C_truep(C_fixnum_less_or_equal_p(t3,C_fix(0)))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4353,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:56: take */
t7=t5;
t8=C_u_i_cdr(t2);
t9=C_fixnum_difference(t3,C_fix(1));
t1=t7;
t2=t8;
t3=t9;
goto loop;}}

/* k4351 in take in k4223 in k4220 in k4217 */
static void C_ccall f_4353(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4353,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in k6963 in a6956 in k6949 in k6939 in a6936 in g2891 in foldr2886 in k6899 in k6892 in k6889 in k6886 in k6883 in k6880 in k6877 in k6874 in k6871 in k6868 in k6831 in a6828 in k5638 in k5635 in ... */
static void C_fcall f_4393(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(4,0,4)))){
C_save_and_reclaim_args((void *)trf_4393,5,t0,t1,t2,t3,t4);}
a=C_alloc(4);
if(C_truep(C_fixnum_less_or_equal_p(t2,C_fix(0)))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4407,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:67: scheme#reverse */
t6=*((C_word*)lf[55]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=C_fixnum_difference(t2,C_fix(1));
t6=C_i_car(t4);
t7=C_a_i_cons(&a,2,t6,t3);
/* mini-srfi-1.scm:68: loop */
t9=t1;
t10=t5;
t11=t7;
t12=C_u_i_cdr(t4);
t1=t9;
t2=t10;
t3=t11;
t4=t12;
goto loop;}}

/* k4405 in loop in k6963 in a6956 in k6949 in k6939 in a6936 in g2891 in foldr2886 in k6899 in k6892 in k6889 in k6886 in k6883 in k6880 in k6877 in k6874 in k6871 in k6868 in k6831 in a6828 in k5638 in ... */
static void C_ccall f_4407(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4407,c,av);}
/* mini-srfi-1.scm:67: scheme#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
C_values(4,av2);}}

/* k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_5507(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,5)))){
C_save_and_reclaim((void *)f_5507,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5510,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[276],lf[277]);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13082,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13084,a[2]=((C_word)li158),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:58: ##sys#er-transformer */
t7=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_5510(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,5)))){
C_save_and_reclaim((void *)f_5510,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5513,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[264],lf[265]);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12809,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12811,a[2]=((C_word)li157),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:79: ##sys#er-transformer */
t7=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_5513(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5513,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5516,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:110: chicken.internal#macro-subset */
t3=*((C_word*)lf[15]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=*((C_word*)lf[16]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_5516(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5516,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[2]+1 /* (set! ##sys#chicken.condition-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5520,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:116: ##sys#macro-environment */
t4=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_5520(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5520,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5523,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12698,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12700,a[2]=((C_word)li152),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:120: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
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

/* k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_5523(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5523,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5526,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12660,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12662,a[2]=((C_word)li149),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:143: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
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

/* k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_5526(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5526,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5529,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12351,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12353,a[2]=((C_word)li148),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:154: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
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

/* k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_5529(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5529,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5532,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12001,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12003,a[2]=((C_word)li142),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:160: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
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

/* k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_5532(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5532,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5535,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11878,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11880,a[2]=((C_word)li137),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:220: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
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

/* k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_5535(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5535,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5538,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11818,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11820,a[2]=((C_word)li134),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:245: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
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

/* k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_5538(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5538,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5541,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:261: chicken.internal#macro-subset */
t3=*((C_word*)lf[15]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=*((C_word*)lf[16]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_5541(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5541,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[3]+1 /* (set! ##sys#chicken.type-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5545,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:266: ##sys#macro-environment */
t4=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_5545(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5545,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5548,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11801,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11803,a[2]=((C_word)li133),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:271: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
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

/* k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_5548(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5548,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5551,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11771,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11773,a[2]=((C_word)li132),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:278: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
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

/* k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_5551(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5551,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5554,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11742,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11744,a[2]=((C_word)li131),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:286: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
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

/* k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_5554(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5554,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5557,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11645,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11647,a[2]=((C_word)li130),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:297: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
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

/* k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_5557(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5557,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5560,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11497,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11499,a[2]=((C_word)li129),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:305: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
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

/* k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 */
static void C_ccall f_5560(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5560,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5563,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:309: chicken.internal#macro-subset */
t3=*((C_word*)lf[15]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=*((C_word*)lf[16]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in k4217 in ... */
static void C_ccall f_5563(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5563,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[4]+1 /* (set! ##sys#chicken.syntax-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5567,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:315: ##sys#macro-environment */
t4=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in k4220 in ... */
static void C_ccall f_5567(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5567,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5570,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11480,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11482,a[2]=((C_word)li126),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:320: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
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

/* k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in k4223 in ... */
static void C_ccall f_5570(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5570,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5573,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11085,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11087,a[2]=((C_word)li125),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:327: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
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

/* k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in k5505 in ... */
static void C_ccall f_5573(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5573,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5576,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10992,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10994,a[2]=((C_word)li121),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:400: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
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

/* k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in k5508 in ... */
static void C_ccall f_5576(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5576,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5579,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10978,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10980,a[2]=((C_word)li120),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:418: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
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

/* k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in k5511 in ... */
static void C_ccall f_5579(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5579,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5582,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10957,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10959,a[2]=((C_word)li119),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:425: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
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

/* k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in k5514 in ... */
static void C_ccall f_5582(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5582,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5585,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10940,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10942,a[2]=((C_word)li118),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:432: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
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

/* k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in k5518 in ... */
static void C_ccall f_5585(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5585,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5588,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10923,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10925,a[2]=((C_word)li117),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:439: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
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

/* k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in k5521 in ... */
static void C_ccall f_5588(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5588,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5591,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10270,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10272,a[2]=((C_word)li116),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:446: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
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

/* k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in k5524 in ... */
static void C_ccall f_5591(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5591,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5594,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9340,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9342,a[2]=((C_word)li102),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:478: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
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

/* k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in ... */
static void C_ccall f_5594(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5594,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5597,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9260,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9262,a[2]=((C_word)li83),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:533: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
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

/* k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in ... */
static void C_ccall f_5597(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5597,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5600,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9236,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9238,a[2]=((C_word)li78),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:545: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
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

/* k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in ... */
static void C_ccall f_5600(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5600,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5603,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9208,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9210,a[2]=((C_word)li77),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:553: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
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

/* k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in ... */
static void C_ccall f_5603(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5603,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5606,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9187,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9189,a[2]=((C_word)li76),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:562: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
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

/* k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in ... */
static void C_ccall f_5606(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5606,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5610,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9057,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9059,a[2]=((C_word)li75),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:570: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
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

/* k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in ... */
static void C_ccall f_5610(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5610,c,av);}
a=C_alloc(10);
t2=C_mutate((C_word*)lf[5]+1 /* (set! chicken.syntax#define-values-definition ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5613,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8580,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8582,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:587: ##sys#er-transformer */
t6=*((C_word*)lf[28]+1);{
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

/* k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in ... */
static void C_ccall f_5613(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5613,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5616,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8526,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8528,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:641: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
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

/* k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in ... */
static void C_ccall f_5616(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5616,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5619,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8268,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8270,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:656: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
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

/* k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_ccall f_5619(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5619,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5622,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8246,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8248,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:676: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
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

/* k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in ... */
static void C_ccall f_5622(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,5)))){
C_save_and_reclaim((void *)f_5622,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5625,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[137],lf[138]);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8202,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8204,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:685: ##sys#er-transformer */
t7=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in ... */
static void C_ccall f_5625(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5625,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5628,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8098,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8100,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:695: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
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

/* k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in ... */
static void C_ccall f_5628(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5628,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5631,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7956,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7958,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:716: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
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

/* k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in ... */
static void C_ccall f_5631(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(29,c,5)))){
C_save_and_reclaim((void *)f_5631,c,av);}
a=C_alloc(29);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5634,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[110],lf[111]);
t4=C_a_i_cons(&a,2,lf[92],lf[93]);
t5=C_a_i_cons(&a,2,lf[94],lf[95]);
t6=C_a_i_list(&a,3,t3,t4,t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7508,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7510,a[2]=((C_word)li43),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:823: ##sys#er-transformer */
t9=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t7;
av2[2]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in ... */
static void C_ccall f_5634(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(29,c,5)))){
C_save_and_reclaim((void *)f_5634,c,av);}
a=C_alloc(29);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5637,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[110],lf[111]);
t4=C_a_i_cons(&a,2,lf[92],lf[93]);
t5=C_a_i_cons(&a,2,lf[94],lf[95]);
t6=C_a_i_list(&a,3,t3,t4,t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7431,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7433,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:912: ##sys#er-transformer */
t9=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t7;
av2[2]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in ... */
static void C_ccall f_5637(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(29,c,5)))){
C_save_and_reclaim((void *)f_5637,c,av);}
a=C_alloc(29);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5640,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[110],lf[111]);
t4=C_a_i_cons(&a,2,lf[92],lf[93]);
t5=C_a_i_cons(&a,2,lf[94],lf[95]);
t6=C_a_i_list(&a,3,t3,t4,t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7271,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7273,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:940: ##sys#er-transformer */
t9=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t7;
av2[2]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in ... */
static void C_ccall f_5640(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(41,c,5)))){
C_save_and_reclaim((void *)f_5640,c,av);}
a=C_alloc(41);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5643,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[90],lf[91]);
t4=C_a_i_cons(&a,2,lf[92],lf[93]);
t5=C_a_i_cons(&a,2,lf[94],lf[95]);
t6=C_a_i_cons(&a,2,lf[96],lf[97]);
t7=C_a_i_cons(&a,2,lf[98],lf[99]);
t8=C_a_i_list(&a,5,t3,t4,t5,t6,t7);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6827,a[2]=t2,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6829,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:977: ##sys#er-transformer */
t11=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t11;
av2[1]=t9;
av2[2]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}

/* k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in ... */
static void C_ccall f_5643(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5643,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5646,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6711,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6713,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1040: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
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

/* k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in ... */
static void C_ccall f_5646(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5646,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5649,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6272,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6274,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1075: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
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

/* k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in ... */
static void C_ccall f_5649(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,5)))){
C_save_and_reclaim((void *)f_5649,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5652,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[50],lf[51]);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6100,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6102,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1164: ##sys#er-transformer */
t7=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in ... */
static void C_ccall f_5652(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,5)))){
C_save_and_reclaim((void *)f_5652,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5655,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[50],lf[51]);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5905,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5907,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1197: ##sys#er-transformer */
t7=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in ... */
static void C_ccall f_5655(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5655,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5658,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5840,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5842,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1238: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
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

/* k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in ... */
static void C_ccall f_5658(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5658,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5661,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5822,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5824,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1255: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
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

/* k5659 in k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in ... */
static void C_ccall f_5661(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5661,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5664,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5733,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5735,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1264: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
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

/* k5662 in k5659 in k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in ... */
static void C_ccall f_5664(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5664,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5667,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1284: chicken.internal#macro-subset */
t3=*((C_word*)lf[15]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=*((C_word*)lf[16]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5665 in k5662 in k5659 in k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in ... */
static void C_ccall f_5667(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5667,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[6]+1 /* (set! ##sys#chicken.base-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5671,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1290: ##sys#macro-environment */
t4=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5669 in k5665 in k5662 in k5659 in k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in ... */
static void C_ccall f_5671(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5671,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5674,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5684,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5686,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1294: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
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

/* k5672 in k5669 in k5665 in k5662 in k5659 in k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in ... */
static void C_ccall f_5674(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5674,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5677,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1306: chicken.internal#macro-subset */
t3=*((C_word*)lf[15]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=*((C_word*)lf[16]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5675 in k5672 in k5669 in k5665 in k5662 in k5659 in k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in ... */
static void C_ccall f_5677(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_5677,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[7]+1 /* (set! ##sys#chicken.time-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5680,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1310: chicken.platform#register-feature! */
t4=*((C_word*)lf[8]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[9];
av2[3]=lf[10];
av2[4]=lf[11];
av2[5]=lf[12];
av2[6]=lf[13];
av2[7]=lf[14];
((C_proc)(void*)(*((C_word*)t4+1)))(8,av2);}}

/* k5678 in k5675 in k5672 in k5669 in k5665 in k5662 in k5659 in k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in ... */
static void C_ccall f_5680(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5680,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5682 in k5669 in k5665 in k5662 in k5659 in k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in ... */
static void C_ccall f_5684(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5684,c,av);}
/* chicken-syntax.scm:1292: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[18];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a5685 in k5669 in k5665 in k5662 in k5659 in k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in ... */
static void C_ccall f_5686(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5686,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5690,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1296: r */
t6=t3;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[27];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k5688 in a5685 in k5669 in k5665 in k5662 in k5659 in k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in ... */
static void C_ccall f_5690(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(57,c,1)))){
C_save_and_reclaim((void *)f_5690,c,av);}
a=C_alloc(57);
t2=C_a_i_list(&a,1,lf[19]);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t3);
t5=C_a_i_cons(&a,2,lf[20],t4);
t6=C_a_i_list(&a,1,lf[21]);
t7=C_a_i_list(&a,2,lf[22],t6);
t8=C_a_i_list(&a,3,lf[23],lf[24],t1);
t9=C_a_i_list(&a,4,lf[20],t1,t7,t8);
t10=C_a_i_list(&a,3,lf[25],t5,t9);
t11=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t11;
av2[1]=C_a_i_list(&a,3,lf[26],t2,t10);
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}

/* k5731 in k5659 in k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in ... */
static void C_ccall f_5733(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5733,c,av);}
/* chicken-syntax.scm:1262: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[30];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a5734 in k5659 in k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in ... */
static void C_ccall f_5735(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5735,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5739,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1267: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[30];
av2[3]=t2;
av2[4]=lf[44];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k5737 in a5734 in k5659 in k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in ... */
static void C_ccall f_5739(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_5739,c,av);}
a=C_alloc(9);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?lf[31]:C_i_car(t4));
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5750,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=t8,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1271: r */
t10=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[42];
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}

/* k5748 in k5737 in a5734 in k5659 in k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in ... */
static void C_ccall f_5750(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_5750,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5753,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_stringp(((C_word*)((C_word*)t0)[5])[1]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5805,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1273: chicken.syntax#get-line-number */
t4=*((C_word*)lf[41]+1);{
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
t3=t2;
f_5753(t3,C_SCHEME_UNDEFINED);}}

/* k5751 in k5748 in k5737 in a5734 in k5659 in k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in ... */
static void C_fcall f_5753(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(25,0,2)))){
C_save_and_reclaim_args((void *)trf_5753,2,t0,t1);}
a=C_alloc(25);
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_list(&a,1,t2);
t4=C_a_i_list(&a,2,lf[32],((C_word*)t0)[2]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5776,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t6=C_u_i_cdr(((C_word*)t0)[5]);
t7=t5;
f_5776(t7,C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[6])[1],t6));}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5795,a[2]=t5,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1282: chicken.syntax#strip-syntax */
t7=*((C_word*)lf[37]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}

/* k5774 in k5751 in k5748 in k5737 in a5734 in k5659 in k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in ... */
static void C_fcall f_5776(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,0,1)))){
C_save_and_reclaim_args((void *)trf_5776,2,t0,t1);}
a=C_alloc(24);
t2=C_a_i_cons(&a,2,lf[33],t1);
t3=C_a_i_list(&a,4,lf[34],((C_word*)t0)[2],((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[5],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5793 in k5751 in k5748 in k5737 in a5734 in k5659 in k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in ... */
static void C_ccall f_5795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_5795,c,av);}
a=C_alloc(12);
t2=C_a_i_list(&a,2,lf[36],t1);
t3=C_a_i_list(&a,1,t2);
t4=((C_word*)t0)[2];
f_5776(t4,C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[3])[1],t3));}

/* k5803 in k5748 in k5737 in a5734 in k5659 in k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in ... */
static void C_ccall f_5805(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_5805,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5812,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1274: string-append */
t3=*((C_word*)lf[38]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[39];
av2[3]=t1;
av2[4]=lf[40];
av2[5]=((C_word*)((C_word*)t0)[2])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}
else{
t2=((C_word*)t0)[3];
f_5753(t2,C_SCHEME_FALSE);}}

/* k5810 in k5803 in k5748 in k5737 in a5734 in k5659 in k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in ... */
static void C_ccall f_5812(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5812,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_5753(t3,t2);}

/* k5820 in k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in ... */
static void C_ccall f_5822(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5822,c,av);}
/* chicken-syntax.scm:1252: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[45];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a5823 in k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in ... */
static void C_ccall f_5824(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5824,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5832,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1257: r */
t6=t3;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[46];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k5830 in a5823 in k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in ... */
static void C_ccall f_5832(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_5832,c,av);}
a=C_alloc(3);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,t1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5838 in k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in ... */
static void C_ccall f_5840(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5840,c,av);}
/* chicken-syntax.scm:1236: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[47];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a5841 in k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in ... */
static void C_ccall f_5842(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5842,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5846,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1240: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[47];
av2[3]=t2;
av2[4]=lf[49];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k5844 in a5841 in k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in ... */
static void C_ccall f_5846(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,1)))){
C_save_and_reclaim((void *)f_5846,c,av);}
a=C_alloc(24);
t2=C_i_cadr(((C_word*)t0)[2]);
if(C_truep(C_i_pairp(t2))){
t3=C_u_i_car(t2);
t4=C_u_i_cdr(t2);
t5=C_u_i_cdr(((C_word*)t0)[2]);
t6=C_u_i_cdr(t5);
t7=C_a_i_cons(&a,2,t4,t6);
t8=C_a_i_cons(&a,2,lf[20],t7);
t9=C_a_i_list(&a,2,t3,t8);
t10=C_a_i_list(&a,1,t9);
t11=C_u_i_car(t2);
t12=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t12;
av2[1]=C_a_i_list(&a,3,lf[48],t10,t11);
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}
else{
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=C_a_i_cons(&a,2,t2,t4);
t6=C_a_i_list(&a,1,t5);
t7=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_a_i_list(&a,3,lf[48],t6,t2);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k5903 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in ... */
static void C_ccall f_5905(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5905,c,av);}
/* chicken-syntax.scm:1194: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[52];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a5906 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in ... */
static void C_ccall f_5907(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5907,c,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5911,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1199: r */
t6=t3;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[50];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k5909 in a5906 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in ... */
static void C_ccall f_5911(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_5911,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5914,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1200: r */
t3=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[60];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5912 in k5909 in a5906 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in ... */
static void C_ccall f_5914(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_5914,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5917,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1201: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[59];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5915 in k5912 in k5909 in a5906 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in ... */
static void C_ccall f_5917(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_5917,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5920,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
if(C_truep(C_i_nullp(t3))){
/* chicken-syntax.scm:1203: chicken.syntax#syntax-error */
t4=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[52];
av2[3]=lf[58];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_5920(2,av2);}}}

/* k5918 in k5915 in k5912 in k5909 in a5906 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in ... */
static void C_ccall f_5920(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,7)))){
C_save_and_reclaim((void *)f_5920,c,av);}
a=C_alloc(12);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5927,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word)li5),tmp=(C_word)a,a+=10,tmp));
t6=((C_word*)t4)[1];
f_5927(t6,((C_word*)t0)[8],t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* loop in k5918 in k5915 in k5912 in k5909 in a5906 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in ... */
static void C_fcall f_5927(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_5927,7,t0,t1,t2,t3,t4,t5,t6);}
a=C_alloc(12);
if(C_truep(C_i_nullp(t2))){
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5937,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=t5,tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1206: scheme#reverse */
t8=*((C_word*)lf[55]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6006,a[2]=t2,a[3]=t3,a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=t4,a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:1216: c */
t8=((C_word*)t0)[6];{
C_word av2[4];
av2[0]=t8;
av2[1]=t7;
av2[2]=((C_word*)t0)[8];
av2[3]=C_i_car(t2);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}}

/* k5935 in loop in k5918 in k5915 in k5912 in k5909 in a5906 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in ... */
static void C_ccall f_5937(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_5937,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5940,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1207: scheme#reverse */
t3=*((C_word*)lf[55]+1);{
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

/* k5938 in k5935 in loop in k5918 in k5915 in k5912 in k5909 in a5906 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in ... */
static void C_ccall f_5940(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,2)))){
C_save_and_reclaim((void *)f_5940,c,av);}
a=C_alloc(21);
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5946,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5983,a[2]=((C_word*)t0)[7],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1209: chicken.base#gensym */
t4=*((C_word*)lf[54]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=C_i_car(t1);
t3=C_u_i_cdr(t1);
t4=C_a_i_cons(&a,2,t2,t3);
t5=C_a_i_list(&a,3,lf[20],((C_word*)t0)[6],t4);
t6=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[5],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k5944 in k5938 in k5935 in loop in k5918 in k5915 in k5912 in k5909 in a5906 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in ... */
static void C_ccall f_5946(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_5946,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5957,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1210: ##sys#append */
t3=*((C_word*)lf[53]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5955 in k5944 in k5938 in k5935 in loop in k5918 in k5915 in k5912 in k5909 in a5906 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in ... */
static void C_ccall f_5957(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_5957,c,av);}
a=C_alloc(10);
t2=C_i_car(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5973,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_a_i_list(&a,1,((C_word*)t0)[6]);
/* chicken-syntax.scm:1210: ##sys#append */
t6=*((C_word*)lf[53]+1);{
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
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k5971 in k5955 in k5944 in k5938 in k5935 in loop in k5918 in k5915 in k5912 in k5909 in a5906 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in ... */
static void C_ccall f_5973(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,1)))){
C_save_and_reclaim((void *)f_5973,c,av);}
a=C_alloc(24);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_list(&a,3,lf[20],((C_word*)t0)[4],t3);
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[6],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k5981 in k5938 in k5935 in loop in k5918 in k5915 in k5912 in k5909 in a5906 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in ... */
static void C_ccall f_5983(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5983,c,av);}
/* chicken-syntax.scm:1209: r */
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
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k6004 in loop in k5918 in k5915 in k5912 in k5909 in a5906 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in ... */
static void C_ccall f_6006(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_6006,c,av);}
a=C_alloc(12);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6009,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6026,a[2]=((C_word*)t0)[8],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1217: chicken.base#gensym */
t4=*((C_word*)lf[54]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6032,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:1219: c */
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
av2[3]=C_u_i_car(((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k6007 in k6004 in loop in k5918 in k5915 in k5912 in k5909 in a5906 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in ... */
static void C_ccall f_6009(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_6009,c,av);}
a=C_alloc(6);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
/* chicken-syntax.scm:1218: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_5927(t5,((C_word*)t0)[6],t2,t3,((C_word*)t0)[7],t4,C_SCHEME_FALSE);}

/* k6024 in k6004 in loop in k5918 in k5915 in k5912 in k5909 in a5906 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in ... */
static void C_ccall f_6026(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6026,c,av);}
/* chicken-syntax.scm:1217: r */
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
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k6030 in k6004 in loop in k5918 in k5915 in k5912 in k5909 in a5906 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in ... */
static void C_ccall f_6032(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,6)))){
C_save_and_reclaim((void *)f_6032,c,av);}
a=C_alloc(12);
if(C_truep(t1)){
if(C_truep(C_i_nullp(C_u_i_cdr(((C_word*)t0)[2])))){
/* chicken-syntax.scm:1221: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_5927(t2,((C_word*)t0)[4],C_SCHEME_END_OF_LIST,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_TRUE);}
else{
/* chicken-syntax.scm:1222: chicken.syntax#syntax-error */
t2=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
av2[2]=lf[52];
av2[3]=lf[57];
av2[4]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6049,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6072,a[2]=((C_word*)t0)[9],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1227: chicken.base#gensym */
t4=*((C_word*)lf[54]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6047 in k6030 in k6004 in loop in k5918 in k5915 in k5912 in k5909 in a5906 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in ... */
static void C_ccall f_6049(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,6)))){
C_save_and_reclaim((void *)f_6049,c,av);}
a=C_alloc(12);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_u_i_car(((C_word*)t0)[2]);
t4=C_a_i_list2(&a,2,t1,t3);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[3]);
t6=C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
/* chicken-syntax.scm:1228: loop */
t7=((C_word*)((C_word*)t0)[5])[1];
f_5927(t7,((C_word*)t0)[6],t2,((C_word*)t0)[7],t5,t6,C_SCHEME_FALSE);}

/* k6070 in k6030 in k6004 in loop in k5918 in k5915 in k5912 in k5909 in a5906 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in ... */
static void C_ccall f_6072(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6072,c,av);}
/* chicken-syntax.scm:1227: r */
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
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k6098 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in ... */
static void C_ccall f_6100(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6100,c,av);}
/* chicken-syntax.scm:1161: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[61];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a6101 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in ... */
static void C_ccall f_6102(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6102,c,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6106,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1166: r */
t6=t3;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[60];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k6104 in a6101 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in ... */
static void C_ccall f_6106(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6106,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6109,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1167: r */
t3=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[59];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6107 in k6104 in a6101 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in ... */
static void C_ccall f_6109(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6109,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6112,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1168: r */
t3=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[50];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6110 in k6107 in k6104 in a6101 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in ... */
static void C_ccall f_6112(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_6112,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6115,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
if(C_truep(C_i_nullp(t3))){
/* chicken-syntax.scm:1170: chicken.syntax#syntax-error */
t4=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[61];
av2[3]=lf[63];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_6115(2,av2);}}}

/* k6113 in k6110 in k6107 in k6104 in a6101 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in ... */
static void C_ccall f_6115(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,6)))){
C_save_and_reclaim((void *)f_6115,c,av);}
a=C_alloc(12);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6122,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word)li7),tmp=(C_word)a,a+=10,tmp));
t6=((C_word*)t4)[1];
f_6122(t6,((C_word*)t0)[8],t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* loop in k6113 in k6110 in k6107 in k6104 in a6101 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in ... */
static void C_fcall f_6122(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_6122,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(11);
if(C_truep(C_i_nullp(t2))){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6132,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1173: scheme#reverse */
t7=*((C_word*)lf[55]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6197,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm:1182: c */
t7=((C_word*)t0)[6];{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[8];
av2[3]=C_i_car(t2);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}

/* k6130 in loop in k6113 in k6110 in k6107 in k6104 in a6101 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in ... */
static void C_ccall f_6132(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6132,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6135,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1174: scheme#reverse */
t3=*((C_word*)lf[55]+1);{
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

/* k6133 in k6130 in loop in k6113 in k6110 in k6107 in k6104 in a6101 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in ... */
static void C_ccall f_6135(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6135,c,av);}
a=C_alloc(18);
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6141,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6174,a[2]=((C_word*)t0)[6],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1176: chicken.base#gensym */
t4=*((C_word*)lf[54]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=C_i_car(t1);
t3=C_a_i_list(&a,2,lf[26],t2);
t4=C_u_i_cdr(t1);
t5=C_a_i_cons(&a,2,t3,t4);
t6=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list(&a,3,lf[20],((C_word*)t0)[5],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k6139 in k6133 in k6130 in loop in k6113 in k6110 in k6107 in k6104 in a6101 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in ... */
static void C_ccall f_6141(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_6141,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6148,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1177: ##sys#append */
t3=*((C_word*)lf[53]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k6146 in k6139 in k6133 in k6130 in loop in k6113 in k6110 in k6107 in k6104 in a6101 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in ... */
static void C_ccall f_6148(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6148,c,av);}
a=C_alloc(9);
t2=C_i_car(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6164,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_a_i_list(&a,1,((C_word*)t0)[5]);
/* chicken-syntax.scm:1177: ##sys#append */
t6=*((C_word*)lf[53]+1);{
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
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k6162 in k6146 in k6139 in k6133 in k6130 in loop in k6113 in k6110 in k6107 in k6104 in a6101 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in ... */
static void C_ccall f_6164(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,1)))){
C_save_and_reclaim((void *)f_6164,c,av);}
a=C_alloc(15);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[20],((C_word*)t0)[5],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k6172 in k6133 in k6130 in loop in k6113 in k6110 in k6107 in k6104 in a6101 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in ... */
static void C_ccall f_6174(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6174,c,av);}
/* chicken-syntax.scm:1176: r */
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
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k6195 in loop in k6113 in k6110 in k6107 in k6104 in a6101 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in ... */
static void C_ccall f_6197(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_6197,c,av);}
a=C_alloc(11);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6200,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6217,a[2]=((C_word*)t0)[7],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1183: chicken.base#gensym */
t4=*((C_word*)lf[54]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6223,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1185: c */
t3=((C_word*)t0)[9];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[10];
av2[3]=C_u_i_car(((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k6198 in k6195 in loop in k6113 in k6110 in k6107 in k6104 in a6101 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in ... */
static void C_ccall f_6200(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_6200,c,av);}
a=C_alloc(6);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
/* chicken-syntax.scm:1184: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_6122(t5,((C_word*)t0)[6],t2,t3,t4,C_SCHEME_FALSE);}

/* k6215 in k6195 in loop in k6113 in k6110 in k6107 in k6104 in a6101 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in ... */
static void C_ccall f_6217(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6217,c,av);}
/* chicken-syntax.scm:1183: r */
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
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k6221 in k6195 in loop in k6113 in k6110 in k6107 in k6104 in a6101 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in ... */
static void C_ccall f_6223(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_6223,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
if(C_truep(C_i_nullp(C_u_i_cdr(((C_word*)t0)[2])))){
/* chicken-syntax.scm:1187: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_6122(t2,((C_word*)t0)[4],C_SCHEME_END_OF_LIST,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_TRUE);}
else{
/* chicken-syntax.scm:1188: chicken.syntax#syntax-error */
t2=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
av2[2]=lf[61];
av2[3]=lf[62];
av2[4]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}
else{
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_u_i_car(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[6]);
/* chicken-syntax.scm:1192: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_6122(t5,((C_word*)t0)[4],t2,((C_word*)t0)[5],t4,C_SCHEME_FALSE);}}

/* k6270 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in ... */
static void C_ccall f_6272(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6272,c,av);}
/* chicken-syntax.scm:1072: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[64];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a6273 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in ... */
static void C_ccall f_6274(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6274,c,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6278,a[2]=t2,a[3]=t1,a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1077: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[64];
av2[3]=t2;
av2[4]=lf[84];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k6276 in a6273 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in ... */
static void C_ccall f_6278(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6278,c,av);}
a=C_alloc(7);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6284,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1082: chicken.syntax#strip-syntax */
t4=*((C_word*)lf[37]+1);{
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

/* k6282 in k6276 in a6273 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in ... */
static void C_ccall f_6284(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_6284,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6287,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6696,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1083: ##sys#current-module */
t4=*((C_word*)lf[83]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k6285 in k6282 in k6276 in a6273 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in ... */
static void C_ccall f_6287(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_6287,c,av);}
a=C_alloc(10);
t2=C_i_caddr(((C_word*)t0)[2]);
t3=C_i_cadddr(((C_word*)t0)[2]);
t4=C_i_cddddr(((C_word*)t0)[2]);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6299,a[2]=t2,a[3]=t4,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t3,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:1091: r */
t6=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[79];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k6297 in k6285 in k6282 in k6276 in a6273 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in ... */
static void C_ccall f_6299(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_6299,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6302,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm:1092: r */
t3=((C_word*)t0)[9];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[78];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6300 in k6297 in k6285 in k6282 in k6276 in a6273 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in ... */
static void C_ccall f_6302(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_6302,c,av);}
a=C_alloc(13);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6308,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=t1,a[12]=((C_word*)t0)[10],tmp=(C_word)a,a+=13,tmp);
/* chicken-syntax.scm:1094: r */
t4=((C_word*)t0)[10];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[77];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k6306 in k6300 in k6297 in k6285 in k6282 in k6276 in a6273 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in ... */
static void C_ccall f_6308(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_6308,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6311,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* chicken-syntax.scm:1095: r */
t3=((C_word*)t0)[12];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[76];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6309 in k6306 in k6300 in k6297 in k6285 in k6282 in k6276 in a6273 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in ... */
static void C_ccall f_6311(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(27,c,3)))){
C_save_and_reclaim((void *)f_6311,c,av);}
a=C_alloc(27);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[65]);
t7=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6320,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=t1,a[13]=((C_word*)t0)[2],tmp=(C_word)a,a+=14,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6661,a[2]=t4,a[3]=t9,a[4]=t5,a[5]=((C_word)li14),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_6661(t11,t7,((C_word*)t0)[2]);}

/* k6318 in k6309 in k6306 in k6300 in k6297 in k6285 in k6282 in k6276 in a6273 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in ... */
static void C_ccall f_6320(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(26,c,3)))){
C_save_and_reclaim((void *)f_6320,c,av);}
a=C_alloc(26);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6321,a[2]=t1,a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[2],lf[67]);
t4=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_6337,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6638,a[2]=t6,a[3]=t2,a[4]=((C_word)li13),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_6638(t8,t4,((C_word*)t0)[2]);}

/* g3038 in k6318 in k6309 in k6306 in k6300 in k6297 in k6285 in k6282 in k6276 in a6273 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in ... */
static void C_fcall f_6321(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_6321,3,t0,t1,t2);}
if(C_truep(C_i_memq(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* chicken-syntax.scm:1100: chicken.syntax#syntax-error */
t3=*((C_word*)lf[56]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t1;
av2[2]=lf[64];
av2[3]=lf[66];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* k6335 in k6318 in k6309 in k6306 in k6300 in k6297 in k6285 in k6282 in k6276 in a6273 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in ... */
static void C_ccall f_6337(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(53,c,3)))){
C_save_and_reclaim((void *)f_6337,c,av);}
a=C_alloc(53);
t2=C_a_i_list(&a,2,lf[36],((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=C_a_i_list(&a,2,lf[36],((C_word*)t0)[2]);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6585,a[2]=((C_word*)t0)[5],a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp);
t10=C_i_check_list_2(((C_word*)t0)[6],lf[65]);
t11=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6598,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[2],a[8]=t3,a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],tmp=(C_word)a,a+=14,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6600,a[2]=t9,a[3]=t7,a[4]=t13,a[5]=t8,a[6]=((C_word)li12),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_6600(t15,t11,((C_word*)t0)[6]);}

/* k6366 in k6596 in k6335 in k6318 in k6309 in k6306 in k6300 in k6297 in k6285 in k6282 in k6276 in a6273 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in ... */
static void C_ccall f_6368(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_6368,c,av);}
a=C_alloc(12);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_cons(&a,2,lf[26],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* loop in k6596 in k6335 in k6318 in k6309 in k6306 in k6300 in k6297 in k6285 in k6282 in k6276 in a6273 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in ... */
static void C_fcall f_6370(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,0,3)))){
C_save_and_reclaim_args((void *)trf_6370,4,t0,t1,t2,t3);}
a=C_alloc(19);
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=C_i_cddr(t4);
t6=C_i_pairp(t5);
t7=(C_truep(t6)?C_i_caddr(t4):C_SCHEME_FALSE);
t8=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_6389,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=t3,a[6]=t1,a[7]=t2,a[8]=((C_word*)t0)[4],a[9]=t6,a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[6],a[12]=t7,a[13]=((C_word*)t0)[7],a[14]=((C_word*)t0)[8],tmp=(C_word)a,a+=15,tmp);
if(C_truep(C_i_pairp(t7))){
if(C_truep(C_i_pairp(C_u_i_cdr(t7)))){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6542,a[2]=t8,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1125: c */
t10=((C_word*)t0)[5];{
C_word av2[4];
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[75];
av2[3]=C_u_i_car(t7);
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}
else{
t9=t8;
f_6389(t9,C_SCHEME_FALSE);}}
else{
t9=t8;
f_6389(t9,C_SCHEME_FALSE);}}}

/* k6387 in loop in k6596 in k6335 in k6318 in k6309 in k6306 in k6300 in k6297 in k6285 in k6282 in k6276 in a6273 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in ... */
static void C_fcall f_6389(C_word t0,C_word t1){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(128,0,2)))){
C_save_and_reclaim_args((void *)trf_6389,2,t0,t1);}
a=C_alloc(128);
t2=C_a_i_list(&a,1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,lf[36],((C_word*)t0)[3]);
t4=C_i_cadr(((C_word*)t0)[4]);
t5=C_a_i_list(&a,2,lf[36],t4);
t6=C_a_i_list(&a,4,lf[71],((C_word*)t0)[2],t3,t5);
t7=C_a_i_list(&a,2,lf[32],t6);
t8=C_a_i_list(&a,3,lf[72],((C_word*)t0)[2],((C_word*)t0)[5]);
t9=C_a_i_list(&a,4,lf[20],t2,t7,t8);
t10=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6395,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=t1,a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=t9,tmp=(C_word)a,a+=14,tmp);
if(C_truep(((C_word*)t0)[9])){
t11=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[14]);
t12=C_a_i_list(&a,2,lf[36],((C_word*)t0)[3]);
t13=C_a_i_list(&a,2,lf[36],t1);
t14=C_a_i_list(&a,4,lf[71],((C_word*)t0)[2],t12,t13);
t15=C_a_i_list(&a,2,lf[32],t14);
t16=C_a_i_list(&a,4,lf[74],((C_word*)t0)[2],((C_word*)t0)[5],((C_word*)t0)[14]);
t17=t10;
f_6395(t17,C_a_i_list(&a,4,lf[20],t11,t15,t16));}
else{
t11=t10;
f_6395(t11,C_SCHEME_FALSE);}}

/* k6393 in k6387 in loop in k6596 in k6335 in k6318 in k6309 in k6306 in k6300 in k6297 in k6285 in k6282 in k6276 in a6273 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in ... */
static void C_fcall f_6395(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,0,3)))){
C_save_and_reclaim_args((void *)trf_6395,2,t0,t1);}
a=C_alloc(21);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6402,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
t3=C_u_i_cdr(((C_word*)t0)[9]);
t4=C_u_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6463,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[13],a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[10],a[7]=t4,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[7])){
t6=C_u_i_cdr(((C_word*)t0)[9]);
/* chicken-syntax.scm:1146: c */
t7=((C_word*)t0)[8];{
C_word av2[4];
av2[0]=t7;
av2[1]=t5;
av2[2]=((C_word*)t0)[7];
av2[3]=C_u_i_car(t6);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t6=t5;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
f_6463(2,av2);}}}

/* k6400 in k6393 in k6387 in loop in k6596 in k6335 in k6318 in k6309 in k6306 in k6300 in k6297 in k6285 in k6282 in k6276 in a6273 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in ... */
static void C_fcall f_6402(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(22,0,3)))){
C_save_and_reclaim_args((void *)trf_6402,2,t0,t1);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6406,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6410,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[6])){
if(C_truep(((C_word*)t0)[7])){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6442,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1151: c */
t5=((C_word*)t0)[9];{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[7];
av2[3]=C_i_cadr(((C_word*)t0)[10]);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t4=C_a_i_list(&a,3,((C_word*)t0)[11],((C_word*)t0)[12],((C_word*)t0)[8]);
t5=t3;
f_6410(t5,C_a_i_list(&a,1,t4));}}
else{
t4=t3;
f_6410(t4,C_SCHEME_END_OF_LIST);}}

/* k6404 in k6400 in k6393 in k6387 in loop in k6596 in k6335 in k6318 in k6309 in k6306 in k6300 in k6297 in k6285 in k6282 in k6276 in a6273 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in ... */
static void C_ccall f_6406(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_6406,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6408 in k6400 in k6393 in k6387 in loop in k6596 in k6335 in k6318 in k6309 in k6306 in k6300 in k6297 in k6285 in k6282 in k6276 in a6273 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in ... */
static void C_fcall f_6410(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,0,3)))){
C_save_and_reclaim_args((void *)trf_6410,2,t0,t1);}
a=C_alloc(33);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6414,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_u_i_cdr(((C_word*)t0)[3]);
t4=C_s_a_i_plus(&a,2,((C_word*)t0)[4],C_fix(1));
/* chicken-syntax.scm:1156: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_6370(t5,t2,t3,t4);}

/* k6412 in k6408 in k6400 in k6393 in k6387 in loop in k6596 in k6335 in k6318 in k6309 in k6306 in k6300 in k6297 in k6285 in k6282 in k6276 in a6273 in k5644 in k5641 in k5638 in k5635 in k5632 in ... */
static void C_ccall f_6414(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6414,c,av);}
/* chicken-syntax.scm:1144: ##sys#append */
t2=*((C_word*)lf[53]+1);{
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

/* k6440 in k6400 in k6393 in k6387 in loop in k6596 in k6335 in k6318 in k6309 in k6306 in k6300 in k6297 in k6285 in k6282 in k6276 in a6273 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in ... */
static void C_ccall f_6442(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_6442,c,av);}
a=C_alloc(18);
if(C_truep(C_i_not(t1))){
t2=C_a_i_list(&a,2,lf[73],lf[73]);
t3=C_a_i_list(&a,3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=((C_word*)t0)[4];
f_6410(t4,C_a_i_list(&a,1,t3));}
else{
t2=((C_word*)t0)[4];
f_6410(t2,C_SCHEME_END_OF_LIST);}}

/* k6461 in k6393 in k6387 in loop in k6596 in k6335 in k6318 in k6309 in k6306 in k6300 in k6297 in k6285 in k6282 in k6276 in a6273 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in ... */
static void C_ccall f_6463(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_6463,c,av);}
a=C_alloc(18);
if(C_truep(t1)){
t2=C_a_i_list(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=((C_word*)t0)[5];
f_6402(t3,C_a_i_list(&a,3,((C_word*)t0)[6],((C_word*)t0)[7],t2));}
else{
t2=((C_word*)t0)[5];
f_6402(t2,C_a_i_list(&a,3,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[3]));}}

/* k6540 in loop in k6596 in k6335 in k6318 in k6309 in k6306 in k6300 in k6297 in k6285 in k6282 in k6276 in a6273 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in ... */
static void C_ccall f_6542(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6542,c,av);}
t2=((C_word*)t0)[2];
f_6389(t2,(C_truep(t1)?C_i_cadr(((C_word*)t0)[3]):C_SCHEME_FALSE));}

/* g3064 in k6335 in k6318 in k6309 in k6306 in k6300 in k6297 in k6285 in k6282 in k6276 in a6273 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in ... */
static C_word C_fcall f_6585(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_i_memq(t1,((C_word*)t0)[2]);
return((C_truep(t2)?t1:lf[68]));}

/* k6596 in k6335 in k6318 in k6309 in k6306 in k6300 in k6297 in k6285 in k6282 in k6276 in a6273 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in ... */
static void C_ccall f_6598(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(63,c,4)))){
C_save_and_reclaim((void *)f_6598,c,av);}
a=C_alloc(63);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[69],t2);
t4=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t3);
t5=C_a_i_list(&a,2,((C_word*)t0)[5],((C_word*)t0)[6]);
t6=C_a_i_list(&a,2,lf[36],((C_word*)t0)[7]);
t7=C_a_i_list(&a,3,lf[70],((C_word*)t0)[6],t6);
t8=C_a_i_list(&a,3,((C_word*)t0)[3],t5,t7);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6368,a[2]=t8,a[3]=t4,a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6370,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t11,a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[12],a[9]=((C_word)li11),tmp=(C_word)a,a+=10,tmp));
t13=((C_word*)t11)[1];
f_6370(t13,t9,((C_word*)t0)[13],C_fix(1));}

/* map-loop3058 in k6335 in k6318 in k6309 in k6306 in k6300 in k6297 in k6285 in k6282 in k6276 in a6273 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in ... */
static void C_fcall f_6600(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_6600,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=(
/* chicken-syntax.scm:1111: g3064 */
  f_6585(((C_word*)t0)[2],C_slot(t2,C_fix(0)))
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

/* for-each-loop3037 in k6318 in k6309 in k6306 in k6300 in k6297 in k6285 in k6282 in k6276 in a6273 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in ... */
static void C_fcall f_6638(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6638,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6648,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1098: g3038 */
t4=((C_word*)t0)[3];
f_6321(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6646 in for-each-loop3037 in k6318 in k6309 in k6306 in k6300 in k6297 in k6285 in k6282 in k6276 in a6273 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in ... */
static void C_ccall f_6648(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6648,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_6638(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* map-loop3011 in k6309 in k6306 in k6300 in k6297 in k6285 in k6282 in k6276 in a6273 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in ... */
static void C_fcall f_6661(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_6661,3,t0,t1,t2);}
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

/* k6694 in k6282 in k6276 in a6273 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in ... */
static void C_ccall f_6696(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6696,c,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6703,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6707,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1085: ##sys#current-module */
t4=*((C_word*)lf[83]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
f_6287(2,av2);}}}

/* k6701 in k6694 in k6282 in k6276 in a6273 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in ... */
static void C_ccall f_6703(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6703,c,av);}
/* chicken-syntax.scm:1084: chicken.base#symbol-append */
t2=*((C_word*)lf[80]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[81];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k6705 in k6694 in k6282 in k6276 in a6273 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in ... */
static void C_ccall f_6707(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6707,c,av);}
/* chicken-syntax.scm:1085: ##sys#module-name */
t2=*((C_word*)lf[82]+1);{
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

/* k6709 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in ... */
static void C_ccall f_6711(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6711,c,av);}
/* chicken-syntax.scm:1038: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[85];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a6712 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in ... */
static void C_ccall f_6713(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6713,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6717,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1042: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[85];
av2[3]=t2;
av2[4]=lf[89];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k6715 in a6712 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in ... */
static void C_ccall f_6717(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6717,c,av);}
a=C_alloc(5);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6725,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1045: r */
t6=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[88];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k6723 in k6715 in a6712 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in ... */
static void C_ccall f_6725(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_6725,c,av);}
a=C_alloc(9);
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6734,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
/* chicken-syntax.scm:1047: ##sys#check-syntax */
t4=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[85];
av2[3]=t3;
av2[4]=lf[86];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6784,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
/* chicken-syntax.scm:1060: ##sys#check-syntax */
t4=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[85];
av2[3]=t3;
av2[4]=lf[87];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}

/* k6732 in k6723 in k6715 in a6712 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in ... */
static void C_ccall f_6734(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6734,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6737,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1050: chicken.syntax#strip-syntax */
t3=*((C_word*)lf[37]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_slot(((C_word*)t0)[2],C_fix(0));
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6735 in k6732 in k6723 in k6715 in a6712 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in ... */
static void C_ccall f_6737(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_6737,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6740,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6762,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1051: ##sys#current-module */
t4=*((C_word*)lf[83]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k6738 in k6735 in k6732 in k6723 in k6715 in a6712 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in ... */
static void C_ccall f_6740(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,1)))){
C_save_and_reclaim((void *)f_6740,c,av);}
a=C_alloc(21);
t2=C_a_i_list(&a,2,lf[36],t1);
t3=C_slot(((C_word*)t0)[2],C_fix(1));
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[3]);
t5=C_a_i_cons(&a,2,lf[20],t4);
t6=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list(&a,3,((C_word*)t0)[5],t2,t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k6760 in k6735 in k6732 in k6723 in k6715 in a6712 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in ... */
static void C_ccall f_6762(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6762,c,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6769,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6773,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1053: ##sys#current-module */
t4=*((C_word*)lf[83]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
f_6740(2,av2);}}}

/* k6767 in k6760 in k6735 in k6732 in k6723 in k6715 in a6712 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in ... */
static void C_ccall f_6769(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6769,c,av);}
/* chicken-syntax.scm:1052: chicken.base#symbol-append */
t2=*((C_word*)lf[80]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[81];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k6771 in k6760 in k6735 in k6732 in k6723 in k6715 in a6712 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in ... */
static void C_ccall f_6773(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6773,c,av);}
/* chicken-syntax.scm:1053: ##sys#module-name */
t2=*((C_word*)lf[82]+1);{
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

/* k6782 in k6723 in k6715 in a6712 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in ... */
static void C_ccall f_6784(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6784,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6787,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1061: chicken.syntax#strip-syntax */
t3=*((C_word*)lf[37]+1);{
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

/* k6785 in k6782 in k6723 in k6715 in a6712 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in ... */
static void C_ccall f_6787(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_6787,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6790,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6804,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1062: ##sys#current-module */
t4=*((C_word*)lf[83]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k6788 in k6785 in k6782 in k6723 in k6715 in a6712 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in ... */
static void C_ccall f_6790(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_6790,c,av);}
a=C_alloc(12);
t2=C_a_i_list(&a,2,lf[36],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[2]);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k6802 in k6785 in k6782 in k6723 in k6715 in a6712 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in ... */
static void C_ccall f_6804(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_6804,c,av);}
a=C_alloc(12);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6811,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6815,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1064: ##sys#current-module */
t4=*((C_word*)lf[83]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=C_a_i_list(&a,2,lf[36],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[4]);
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[6],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6809 in k6802 in k6785 in k6782 in k6723 in k6715 in a6712 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in ... */
static void C_ccall f_6811(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6811,c,av);}
/* chicken-syntax.scm:1063: chicken.base#symbol-append */
t2=*((C_word*)lf[80]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[81];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k6813 in k6802 in k6785 in k6782 in k6723 in k6715 in a6712 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in ... */
static void C_ccall f_6815(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6815,c,av);}
/* chicken-syntax.scm:1064: ##sys#module-name */
t2=*((C_word*)lf[82]+1);{
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

/* k6825 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in ... */
static void C_ccall f_6827(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6827,c,av);}
/* chicken-syntax.scm:970: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[100];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a6828 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in ... */
static void C_ccall f_6829(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6829,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6833,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:979: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[100];
av2[3]=t2;
av2[4]=lf[109];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k6831 in a6828 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in ... */
static void C_ccall f_6833(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(26,c,3)))){
C_save_and_reclaim((void *)f_6833,c,av);}
a=C_alloc(26);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6835,a[2]=((C_word*)t0)[2],a[3]=((C_word)li18),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6870,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_i_cdr(((C_word*)t0)[3]);
t9=C_i_check_list_2(t8,lf[65]);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7209,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7211,a[2]=t6,a[3]=t12,a[4]=t7,a[5]=((C_word)li28),tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_7211(t14,t10,t8);}

/* genvars in k6831 in a6828 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in ... */
static void C_fcall f_6835(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_6835,3,t0,t1,t2);}
a=C_alloc(8);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6841,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word)li17),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_6841(t6,t1,C_fix(0));}

/* loop in genvars in k6831 in a6828 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in ... */
static void C_fcall f_6841(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_6841,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6855,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6867,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:984: chicken.base#gensym */
t5=*((C_word*)lf[54]+1);{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k6853 in loop in genvars in k6831 in a6828 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in ... */
static void C_ccall f_6855(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6855,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6859,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:984: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_6841(t3,t2,C_fixnum_plus(((C_word*)t0)[4],C_fix(1)));}

/* k6857 in k6853 in loop in genvars in k6831 in a6828 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in ... */
static void C_ccall f_6859(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_6859,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6865 in loop in genvars in k6831 in a6828 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in ... */
static void C_ccall f_6867(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6867,c,av);}
/* chicken-syntax.scm:984: r */
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
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k6868 in k6831 in a6828 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in ... */
static void C_ccall f_6870(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6870,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6873,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:990: genvars */
t3=((C_word*)t0)[5];
f_6835(t3,t2,t1);}

/* k6871 in k6868 in k6831 in a6828 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in ... */
static void C_ccall f_6873(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6873,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6876,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:991: r */
t3=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[107];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6874 in k6871 in k6868 in k6831 in a6828 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in ... */
static void C_ccall f_6876(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6876,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6879,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:992: r */
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[106];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6877 in k6874 in k6871 in k6868 in k6831 in a6828 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in ... */
static void C_ccall f_6879(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_6879,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6882,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:993: r */
t3=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[90];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6880 in k6877 in k6874 in k6871 in k6868 in k6831 in a6828 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in ... */
static void C_ccall f_6882(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_6882,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6885,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:994: r */
t3=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[96];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6883 in k6880 in k6877 in k6874 in k6871 in k6868 in k6831 in a6828 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in ... */
static void C_ccall f_6885(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_6885,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6888,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm:995: r */
t3=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[92];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6886 in k6883 in k6880 in k6877 in k6874 in k6871 in k6868 in k6831 in a6828 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in ... */
static void C_ccall f_6888(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_6888,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6891,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:996: r */
t3=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[94];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6889 in k6886 in k6883 in k6880 in k6877 in k6874 in k6871 in k6868 in k6831 in a6828 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in ... */
static void C_ccall f_6891(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_6891,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6894,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* chicken-syntax.scm:997: r */
t3=((C_word*)t0)[9];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[98];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6892 in k6889 in k6886 in k6883 in k6880 in k6877 in k6874 in k6871 in k6868 in k6831 in a6828 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in ... */
static void C_ccall f_6894(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_6894,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6901,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* chicken-syntax.scm:999: scheme#append */
t3=*((C_word*)lf[105]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k6899 in k6892 in k6889 in k6886 in k6883 in k6880 in k6877 in k6874 in k6871 in k6868 in k6831 in a6828 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in ... */
static void C_ccall f_6901(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(35,c,3)))){
C_save_and_reclaim((void *)f_6901,c,av);}
a=C_alloc(35);
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_list(&a,2,((C_word*)t0)[4],t2);
t4=C_a_i_list(&a,1,t3);
t5=C_u_i_cdr(((C_word*)t0)[5]);
t6=C_i_check_list_2(t5,lf[101]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6917,a[2]=t4,a[3]=((C_word*)t0)[6],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6919,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[13],a[11]=t9,a[12]=((C_word)li26),tmp=(C_word)a,a+=13,tmp));
t11=((C_word*)t9)[1];
f_6919(t11,t7,t5);}

/* k6915 in k6899 in k6892 in k6889 in k6886 in k6883 in k6880 in k6877 in k6874 in k6871 in k6868 in k6831 in a6828 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in ... */
static void C_ccall f_6917(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_6917,c,av);}
a=C_alloc(18);
t2=C_a_i_list(&a,3,lf[35],((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[20],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* foldr2886 in k6899 in k6892 in k6889 in k6886 in k6883 in k6880 in k6877 in k6874 in k6871 in k6868 in k6831 in a6828 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in ... */
static void C_fcall f_6919(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(17,0,4)))){
C_save_and_reclaim_args((void *)trf_6919,3,t0,t1,t2);}
a=C_alloc(17);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6927,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word)li25),tmp=(C_word)a,a+=12,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7172,a[2]=t3,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t7=t5;
t8=C_slot(t2,C_fix(1));
t1=t7;
t2=t8;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=lf[104];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* g2891 in foldr2886 in k6899 in k6892 in k6889 in k6886 in k6883 in k6880 in k6877 in k6874 in k6871 in k6868 in k6831 in a6828 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in ... */
static void C_fcall f_6927(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,5)))){
C_save_and_reclaim_args((void *)trf_6927,4,t0,t1,t2,t3);}
a=C_alloc(14);
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6937,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word)li24),tmp=(C_word)a,a+=14,tmp);
/* chicken-syntax.scm:1004: ##sys#decompose-lambda-list */
t6=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t1;
av2[2]=t4;
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* a6936 in g2891 in foldr2886 in k6899 in k6892 in k6889 in k6886 in k6883 in k6880 in k6877 in k6874 in k6871 in k6868 in k6831 in a6828 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in ... */
static void C_ccall f_6937(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,4)))){
C_save_and_reclaim((void *)f_6937,c,av);}
a=C_alloc(17);
t5=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_6941,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t2,a[7]=((C_word*)t0)[4],a[8]=t4,a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[8],a[13]=((C_word*)t0)[9],a[14]=((C_word*)t0)[10],a[15]=((C_word*)t0)[11],a[16]=((C_word*)t0)[12],tmp=(C_word)a,a+=17,tmp);
/* chicken-syntax.scm:1007: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[100];
av2[3]=C_i_car(((C_word*)t0)[5]);
av2[4]=lf[102];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k6939 in a6936 in g2891 in foldr2886 in k6899 in k6892 in k6889 in k6886 in k6883 in k6880 in k6877 in k6874 in k6871 in k6868 in k6831 in a6828 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in ... */
static void C_ccall f_6941(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(23,c,2)))){
C_save_and_reclaim((void *)f_6941,c,av);}
a=C_alloc(23);
t2=C_fixnum_difference(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6951,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
if(C_truep(((C_word*)t0)[8])){
t4=C_eqp(t2,C_fix(0));
t5=t3;
f_6951(t5,(C_truep(t4)?C_SCHEME_TRUE:C_a_i_list(&a,3,((C_word*)t0)[14],((C_word*)t0)[15],t2)));}
else{
t4=t3;
f_6951(t4,C_a_i_list(&a,3,((C_word*)t0)[16],((C_word*)t0)[15],t2));}}

/* k6949 in k6939 in a6936 in g2891 in foldr2886 in k6899 in k6892 in k6889 in k6886 in k6883 in k6880 in k6877 in k6874 in k6871 in k6868 in k6831 in a6828 in k5638 in k5635 in k5632 in k5629 in k5626 in ... */
static void C_fcall f_6951(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,0,4)))){
C_save_and_reclaim_args((void *)trf_6951,2,t0,t1);}
a=C_alloc(21);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6955,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6957,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li20),tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6967,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[13],a[9]=((C_word)li23),tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:1014: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=t2;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* k6953 in k6949 in k6939 in a6936 in g2891 in foldr2886 in k6899 in k6892 in k6889 in k6886 in k6883 in k6880 in k6877 in k6874 in k6871 in k6868 in k6831 in a6828 in k5638 in k5635 in k5632 in k5629 in ... */
static void C_ccall f_6955(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_6955,c,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,4,lf[34],((C_word*)t0)[3],t1,((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a6956 in k6949 in k6939 in a6936 in g2891 in foldr2886 in k6899 in k6892 in k6889 in k6886 in k6883 in k6880 in k6877 in k6874 in k6871 in k6868 in k6831 in a6828 in k5638 in k5635 in k5632 in k5629 in ... */
static void C_ccall f_6957(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_6957,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6965,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1015: take */
f_4335(t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k6963 in a6956 in k6949 in k6939 in a6936 in g2891 in foldr2886 in k6899 in k6892 in k6889 in k6886 in k6883 in k6880 in k6877 in k6874 in k6871 in k6868 in k6831 in a6828 in k5638 in k5635 in k5632 in ... */
static void C_ccall f_6965(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_6965,c,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4393,a[2]=t3,a[3]=((C_word)li19),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_4393(t5,((C_word*)t0)[2],((C_word*)t0)[3],C_SCHEME_END_OF_LIST,t1);}

/* a6966 in k6949 in k6939 in a6936 in g2891 in foldr2886 in k6899 in k6892 in k6889 in k6886 in k6883 in k6880 in k6877 in k6874 in k6871 in k6868 in k6831 in a6828 in k5638 in k5635 in k5632 in k5629 in ... */
static void C_ccall f_6967(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,4)))){
C_save_and_reclaim((void *)f_6967,c,av);}
a=C_alloc(16);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6971,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7043,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t6,a[7]=((C_word*)t0)[7],a[8]=((C_word)li22),tmp=(C_word)a,a+=9,tmp));
t8=((C_word*)t6)[1];
f_7043(t8,t4,t3,((C_word*)t0)[8]);}

/* k6969 in a6966 in k6949 in k6939 in a6936 in g2891 in foldr2886 in k6899 in k6892 in k6889 in k6886 in k6883 in k6880 in k6877 in k6874 in k6871 in k6868 in k6831 in a6828 in k5638 in k5635 in k5632 in ... */
static void C_ccall f_6971(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,4)))){
C_save_and_reclaim((void *)f_6971,c,av);}
a=C_alloc(17);
if(C_truep(C_i_nullp(((C_word*)t0)[2]))){
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[65]);
t7=C_i_check_list_2(((C_word*)t0)[4],lf[65]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6993,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6995,a[2]=t4,a[3]=t10,a[4]=t5,a[5]=((C_word)li21),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_6995(t12,t8,((C_word*)t0)[2],((C_word*)t0)[4]);}}

/* k6991 in k6969 in a6966 in k6949 in k6939 in a6936 in g2891 in foldr2886 in k6899 in k6892 in k6889 in k6886 in k6883 in k6880 in k6877 in k6874 in k6871 in k6868 in k6831 in a6828 in k5638 in k5635 in ... */
static void C_ccall f_6993(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_6993,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[35],t1,((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* map-loop2934 in k6969 in a6966 in k6949 in k6939 in a6936 in g2891 in foldr2886 in k6899 in k6892 in k6889 in k6886 in k6883 in k6880 in k6877 in k6874 in k6871 in k6868 in k6831 in a6828 in k5638 in k5635 in ... */
static void C_fcall f_6995(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_6995,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list2(&a,2,t6,t7);
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

/* build in a6966 in k6949 in k6939 in a6936 in g2891 in foldr2886 in k6899 in k6892 in k6889 in k6886 in k6883 in k6880 in k6877 in k6874 in k6871 in k6868 in k6831 in a6828 in k5638 in k5635 in k5632 in ... */
static void C_fcall f_7043(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,2)))){
C_save_and_reclaim_args((void *)trf_7043,4,t0,t1,t2,t3);}
a=C_alloc(15);
if(C_truep(C_i_nullp(t2))){
if(C_truep(((C_word*)t0)[2])){
t4=C_a_i_list(&a,2,((C_word*)t0)[2],t3);
t5=C_a_i_list(&a,1,t4);
t6=C_i_cdr(((C_word*)t0)[3]);
t7=C_a_i_cons(&a,2,t5,t6);
t8=t1;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_a_i_cons(&a,2,lf[35],t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t4=C_i_cddr(((C_word*)t0)[3]);
if(C_truep(C_i_nullp(t4))){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_u_i_car(C_u_i_cdr(((C_word*)t0)[3]));
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_u_i_cdr(((C_word*)t0)[3]);
t6=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t5);
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_a_i_cons(&a,2,lf[35],t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}}
else{
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7096,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7144,a[2]=((C_word*)t0)[7],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1022: chicken.base#gensym */
t6=*((C_word*)lf[54]+1);{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k7094 in build in a6966 in k6949 in k6939 in a6936 in g2891 in foldr2886 in k6899 in k6892 in k6889 in k6886 in k6883 in k6880 in k6877 in k6874 in k6871 in k6868 in k6831 in a6828 in k5638 in k5635 in ... */
static void C_ccall f_7096(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7096,c,av);}
a=C_alloc(34);
t2=C_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t4=C_a_i_list(&a,2,t2,t3);
t5=C_a_i_list(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
t6=C_a_i_list(&a,2,t1,t5);
t7=C_a_i_list(&a,2,t4,t6);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7107,a[2]=((C_word*)t0)[6],a[3]=t7,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(C_u_i_cdr(((C_word*)t0)[2])))){
/* chicken-syntax.scm:1026: build */
t9=((C_word*)((C_word*)t0)[7])[1];
f_7043(t9,t8,C_u_i_cdr(((C_word*)t0)[2]),t1);}
else{
/* chicken-syntax.scm:1027: build */
t9=((C_word*)((C_word*)t0)[7])[1];
f_7043(t9,t8,C_SCHEME_END_OF_LIST,t1);}}

/* k7105 in k7094 in build in a6966 in k6949 in k6939 in a6936 in g2891 in foldr2886 in k6899 in k6892 in k6889 in k6886 in k6883 in k6880 in k6877 in k6874 in k6871 in k6868 in k6831 in a6828 in k5638 in ... */
static void C_ccall f_7107(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_7107,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7142 in build in a6966 in k6949 in k6939 in a6936 in g2891 in foldr2886 in k6899 in k6892 in k6889 in k6886 in k6883 in k6880 in k6877 in k6874 in k6871 in k6868 in k6831 in a6828 in k5638 in k5635 in ... */
static void C_ccall f_7144(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7144,c,av);}
/* chicken-syntax.scm:1022: r */
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
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k7170 in foldr2886 in k6899 in k6892 in k6889 in k6886 in k6883 in k6880 in k6877 in k6874 in k6871 in k6868 in k6831 in a6828 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in ... */
static void C_ccall f_7172(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7172,c,av);}
/* chicken-syntax.scm:1002: g2891 */
t2=((C_word*)t0)[2];
f_6927(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* a7198 in map-loop2843 in k6831 in a6828 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in ... */
static void C_ccall f_7199(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7199,c,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k7207 in k6831 in a6828 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in ... */
static void C_ccall f_7209(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7209,c,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[108]+1);
av2[3]=t1;
C_apply(4,av2);}}

/* map-loop2843 in k6831 in a6828 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in ... */
static void C_fcall f_7211(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,5)))){
C_save_and_reclaim_args((void *)trf_7211,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7236,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_i_car(t4);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7199,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:986: ##sys#decompose-lambda-list */
t7=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t7;
av2[1]=t3;
av2[2]=t5;
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7234 in map-loop2843 in k6831 in a6828 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in ... */
static void C_ccall f_7236(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7236,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7211(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k7269 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in ... */
static void C_ccall f_7271(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7271,c,av);}
/* chicken-syntax.scm:935: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[112];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a7272 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in ... */
static void C_ccall f_7273(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7273,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7277,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:942: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[112];
av2[3]=t2;
av2[4]=lf[114];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k7275 in a7272 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in ... */
static void C_ccall f_7277(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_7277,c,av);}
a=C_alloc(7);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_caddr(((C_word*)t0)[2]);
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7289,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t6,a[5]=((C_word*)t0)[4],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:946: r */
t8=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[110];
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}

/* k7287 in k7275 in a7272 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in ... */
static void C_ccall f_7289(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7289,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7292,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:947: r */
t3=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[92];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7290 in k7287 in k7275 in a7272 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in ... */
static void C_ccall f_7292(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_7292,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7295,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:948: r */
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[94];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7293 in k7290 in k7287 in k7275 in a7272 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in ... */
static void C_ccall f_7295(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_7295,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7298,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:949: r */
t3=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[42];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7296 in k7293 in k7290 in k7287 in k7275 in a7272 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in ... */
static void C_ccall f_7298(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,4)))){
C_save_and_reclaim((void *)f_7298,c,av);}
a=C_alloc(24);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7309,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7311,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t6,a[7]=((C_word*)t0)[8],a[8]=((C_word)li30),tmp=(C_word)a,a+=9,tmp));
t8=((C_word*)t6)[1];
f_7311(t8,t4,t1,((C_word*)t0)[9]);}

/* k7307 in k7296 in k7293 in k7290 in k7287 in k7275 in a7272 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in ... */
static void C_ccall f_7309(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_7309,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in k7296 in k7293 in k7290 in k7287 in k7275 in a7272 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in ... */
static void C_fcall f_7311(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,2)))){
C_save_and_reclaim_args((void *)trf_7311,4,t0,t1,t2,t3);}
a=C_alloc(15);
if(C_truep(C_i_nullp(t3))){
t4=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_a_i_cons(&a,2,lf[35],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_i_car(t3);
if(C_truep(C_i_pairp(t4))){
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7337,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t1,a[8]=((C_word*)t0)[6],a[9]=t3,tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:957: r */
t6=((C_word*)t0)[7];{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[113];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=C_a_i_list(&a,2,t4,t2);
t6=C_a_i_list(&a,1,t5);
t7=C_a_i_cons(&a,2,t6,((C_word*)t0)[2]);
t8=t1;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_a_i_cons(&a,2,lf[35],t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}}

/* k7335 in loop in k7296 in k7293 in k7290 in k7287 in k7275 in a7272 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in ... */
static void C_ccall f_7337(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(76,c,3)))){
C_save_and_reclaim((void *)f_7337,c,av);}
a=C_alloc(76);
t2=C_u_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t4=C_i_cadr(((C_word*)t0)[2]);
t5=C_a_i_list(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
t6=C_a_i_list(&a,4,lf[34],t3,t4,t5);
t7=C_a_i_list(&a,2,t2,t6);
t8=C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t9=C_a_i_list(&a,2,lf[36],C_SCHEME_END_OF_LIST);
t10=C_a_i_list(&a,2,((C_word*)t0)[6],((C_word*)t0)[4]);
t11=C_a_i_list(&a,4,lf[34],t8,t9,t10);
t12=C_a_i_list(&a,2,t1,t11);
t13=C_a_i_list(&a,2,t7,t12);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7348,a[2]=((C_word*)t0)[7],a[3]=t13,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:964: loop */
t15=((C_word*)((C_word*)t0)[8])[1];
f_7311(t15,t14,t1,C_u_i_cdr(((C_word*)t0)[9]));}

/* k7346 in k7335 in loop in k7296 in k7293 in k7290 in k7287 in k7275 in a7272 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in ... */
static void C_ccall f_7348(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_7348,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7429 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in ... */
static void C_ccall f_7431(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7431,c,av);}
/* chicken-syntax.scm:907: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[115];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a7432 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in ... */
static void C_ccall f_7433(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7433,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7437,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:914: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[115];
av2[3]=t2;
av2[4]=lf[116];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k7435 in a7432 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in ... */
static void C_ccall f_7437(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_7437,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7440,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:915: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[42];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7438 in k7435 in a7432 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in ... */
static void C_ccall f_7440(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7440,c,av);}
a=C_alloc(16);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,t1,t2);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7480,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:917: r */
t6=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[110];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k7468 in k7478 in k7438 in k7435 in a7432 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in ... */
static void C_ccall f_7470(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,1)))){
C_save_and_reclaim((void *)f_7470,c,av);}
a=C_alloc(27);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,4,lf[34],((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[6],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k7478 in k7438 in k7435 in a7432 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in ... */
static void C_ccall f_7480(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7480,c,av);}
a=C_alloc(13);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_i_cddr(((C_word*)t0)[3]);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7470,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:919: r */
t7=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[92];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k7506 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in ... */
static void C_ccall f_7508(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7508,c,av);}
/* chicken-syntax.scm:818: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[117];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a7509 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in ... */
static void C_ccall f_7510(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7510,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7514,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:825: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[117];
av2[3]=t2;
av2[4]=lf[127];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k7512 in a7509 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in ... */
static void C_ccall f_7514(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,6)))){
C_save_and_reclaim((void *)f_7514,c,av);}
a=C_alloc(12);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_caddr(((C_word*)t0)[2]);
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7604,a[2]=((C_word*)t0)[3],a[3]=((C_word)li34),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7697,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t6,a[6]=((C_word*)t0)[4],a[7]=t7,tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:864: ##sys#check-syntax */
t9=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[117];
av2[3]=t3;
av2[4]=lf[126];
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}

/* k7531 in k7765 in k7750 in k7747 in k7744 in k7738 in k7707 in k7698 in k7695 in k7512 in a7509 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in ... */
static void C_ccall f_7533(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_7533,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7537,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:835: scheme#reverse */
t3=*((C_word*)lf[55]+1);{
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

/* k7535 in k7531 in k7765 in k7750 in k7747 in k7744 in k7738 in k7707 in k7698 in k7695 in k7512 in a7509 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in ... */
static void C_ccall f_7537(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_7537,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7541,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:836: scheme#reverse */
t3=*((C_word*)lf[55]+1);{
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

/* k7539 in k7535 in k7531 in k7765 in k7750 in k7747 in k7744 in k7738 in k7707 in k7698 in k7695 in k7512 in a7509 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in ... */
static void C_ccall f_7541(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_7541,c,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7543,a[2]=t3,a[3]=((C_word)li38),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_7543(t5,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5]);}

/* recur in k7539 in k7535 in k7531 in k7765 in k7750 in k7747 in k7744 in k7738 in k7707 in k7698 in k7695 in k7512 in a7509 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in ... */
static void C_fcall f_7543(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_7543,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_i_cdr(t2);
t7=C_i_car(t3);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7582,a[2]=t5,a[3]=t7,a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=t6,a[7]=t3,a[8]=t4,tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:841: scheme#reverse */
t9=*((C_word*)lf[55]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}}

/* k7562 in k7588 in k7580 in recur in k7539 in k7535 in k7531 in k7765 in k7750 in k7747 in k7744 in k7738 in k7707 in k7698 in k7695 in k7512 in a7509 in k5629 in k5626 in k5623 in k5620 in k5617 in ... */
static void C_ccall f_7564(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7564,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7580 in recur in k7539 in k7535 in k7531 in k7765 in k7750 in k7747 in k7744 in k7738 in k7707 in k7698 in k7695 in k7512 in a7509 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in ... */
static void C_ccall f_7582(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_7582,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7590,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7594,a[2]=((C_word*)t0)[8],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:842: scheme#reverse */
t4=*((C_word*)lf[55]+1);{
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

/* k7588 in k7580 in recur in k7539 in k7535 in k7531 in k7765 in k7750 in k7747 in k7744 in k7738 in k7707 in k7698 in k7695 in k7512 in a7509 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in ... */
static void C_ccall f_7590(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(22,c,5)))){
C_save_and_reclaim((void *)f_7590,c,av);}
a=C_alloc(22);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list(&a,3,lf[20],((C_word*)t0)[3],t2);
t4=C_a_i_list(&a,2,((C_word*)t0)[4],t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7564,a[2]=((C_word*)t0)[5],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:843: recur */
t6=((C_word*)((C_word*)t0)[6])[1];
f_7543(t6,t5,((C_word*)t0)[7],C_u_i_cdr(((C_word*)t0)[8]),C_u_i_cdr(((C_word*)t0)[9]),C_u_i_car(((C_word*)t0)[8]));}

/* k7592 in k7580 in recur in k7539 in k7535 in k7531 in k7765 in k7750 in k7747 in k7744 in k7738 in k7707 in k7698 in k7695 in k7512 in a7509 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in ... */
static void C_ccall f_7594(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_7594,c,av);}
a=C_alloc(3);
t2=C_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
/* chicken-syntax.scm:840: ##sys#append */
t4=*((C_word*)lf[53]+1);{
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

/* make-if-tree in k7512 in a7509 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in ... */
static void C_fcall f_7604(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,5)))){
C_save_and_reclaim_args((void *)trf_7604,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(9);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7610,a[2]=t4,a[3]=t5,a[4]=t7,a[5]=((C_word*)t0)[2],a[6]=((C_word)li33),tmp=(C_word)a,a+=7,tmp));
t9=((C_word*)t7)[1];
f_7610(t9,t1,t2,t3,C_SCHEME_END_OF_LIST);}

/* recur in make-if-tree in k7512 in a7509 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in ... */
static void C_fcall f_7610(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_7610,5,t0,t1,t2,t3,t4);}
a=C_alloc(10);
if(C_truep(C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7624,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:854: scheme#reverse */
t6=*((C_word*)lf[55]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=C_i_car(t2);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7694,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t5,a[5]=t1,a[6]=t2,a[7]=t4,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:856: r */
t7=((C_word*)t0)[5];{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[110];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}

/* k7622 in recur in make-if-tree in k7512 in a7509 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in ... */
static void C_ccall f_7624(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7624,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7648 in k7672 in k7680 in k7688 in k7692 in recur in make-if-tree in k7512 in a7509 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in ... */
static void C_ccall f_7650(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,1)))){
C_save_and_reclaim((void *)f_7650,c,av);}
a=C_alloc(21);
t2=C_a_i_list(&a,3,lf[35],((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,4,lf[34],((C_word*)t0)[4],((C_word*)t0)[5],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k7672 in k7680 in k7688 in k7692 in recur in make-if-tree in k7512 in a7509 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in ... */
static void C_ccall f_7674(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(27,c,4)))){
C_save_and_reclaim((void *)f_7674,c,av);}
a=C_alloc(27);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,((C_word*)t0)[2],t2);
t4=C_a_i_list(&a,2,((C_word*)t0)[3],t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7650,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t6=C_u_i_cdr(((C_word*)t0)[7]);
t7=C_u_i_cdr(((C_word*)t0)[8]);
t8=C_a_i_cons(&a,2,((C_word*)t0)[9],((C_word*)t0)[10]);
/* chicken-syntax.scm:860: recur */
t9=((C_word*)((C_word*)t0)[11])[1];
f_7610(t9,t5,t6,t7,t8);}

/* k7680 in k7688 in k7692 in recur in make-if-tree in k7512 in a7509 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in ... */
static void C_ccall f_7682(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,2)))){
C_save_and_reclaim((void *)f_7682,c,av);}
a=C_alloc(24);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7674,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[3],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:859: r */
t5=((C_word*)t0)[11];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[94];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k7688 in k7692 in recur in make-if-tree in k7512 in a7509 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in ... */
static void C_ccall f_7690(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_7690,c,av);}
a=C_alloc(15);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7682,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:858: r */
t4=((C_word*)t0)[11];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[92];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k7692 in recur in make-if-tree in k7512 in a7509 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in ... */
static void C_ccall f_7694(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_7694,c,av);}
a=C_alloc(18);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_i_car(((C_word*)t0)[3]);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7690,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:857: scheme#reverse */
t5=*((C_word*)lf[55]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k7695 in k7512 in a7509 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in ... */
static void C_ccall f_7697(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_7697,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7700,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:865: ##sys#check-syntax */
t3=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[117];
av2[3]=((C_word*)t0)[5];
av2[4]=lf[125];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k7698 in k7695 in k7512 in a7509 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in ... */
static void C_ccall f_7700(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7700,c,av);}
a=C_alloc(21);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[65]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7709,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7908,a[2]=t4,a[3]=t9,a[4]=t5,a[5]=((C_word)li42),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_7908(t11,t7,((C_word*)t0)[2]);}

/* k7707 in k7698 in k7695 in k7512 in a7509 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in ... */
static void C_ccall f_7709(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(32,c,4)))){
C_save_and_reclaim((void *)f_7709,c,av);}
a=C_alloc(32);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7710,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7726,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li36),tmp=(C_word)a,a+=5,tmp);
t8=C_i_check_list_2(t1,lf[65]);
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7740,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7874,a[2]=t5,a[3]=t11,a[4]=t7,a[5]=t6,a[6]=((C_word)li41),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_7874(t13,t9,t1);}

/* prefix-sym in k7707 in k7698 in k7695 in k7512 in a7509 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in ... */
static void C_fcall f_7710(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_7710,3,t1,t2,t3);}
a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7718,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7722,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:868: scheme#symbol->string */
t6=*((C_word*)lf[119]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k7716 in prefix-sym in k7707 in k7698 in k7695 in k7512 in a7509 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in ... */
static void C_ccall f_7718(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7718,c,av);}
/* chicken-syntax.scm:868: scheme#string->symbol */
t2=*((C_word*)lf[118]+1);{
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

/* k7720 in prefix-sym in k7707 in k7698 in k7695 in k7512 in a7509 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in ... */
static void C_ccall f_7722(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7722,c,av);}
/* chicken-syntax.scm:868: scheme#string-append */
t2=*((C_word*)lf[38]+1);{
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

/* g2696 in k7707 in k7698 in k7695 in k7512 in a7509 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in ... */
static void C_fcall f_7726(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_7726,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7734,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:873: prefix-sym */
f_7710(t3,lf[120],t2);}

/* k7732 in g2696 in k7707 in k7698 in k7695 in k7512 in a7509 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in ... */
static void C_ccall f_7734(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7734,c,av);}
/* chicken-syntax.scm:873: r */
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
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k7738 in k7707 in k7698 in k7695 in k7512 in a7509 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in ... */
static void C_ccall f_7740(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(23,c,3)))){
C_save_and_reclaim((void *)f_7740,c,av);}
a=C_alloc(23);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7746,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7840,a[2]=t4,a[3]=t8,a[4]=t5,a[5]=((C_word)li40),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_7840(t10,t6,((C_word*)t0)[9]);}

/* k7744 in k7738 in k7707 in k7698 in k7695 in k7512 in a7509 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in ... */
static void C_ccall f_7746(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_7746,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7749,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm:877: r */
t3=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[124];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7747 in k7744 in k7738 in k7707 in k7698 in k7695 in k7512 in a7509 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in ... */
static void C_ccall f_7749(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_7749,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7752,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:880: r */
t3=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[123];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7750 in k7747 in k7744 in k7738 in k7707 in k7698 in k7695 in k7512 in a7509 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in ... */
static void C_ccall f_7752(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(31,c,3)))){
C_save_and_reclaim((void *)f_7752,c,av);}
a=C_alloc(31);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7756,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li37),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7767,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[2],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7806,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=t5,a[6]=((C_word)li39),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_7806(t11,t7,((C_word*)t0)[5]);}

/* g2753 in k7750 in k7747 in k7744 in k7738 in k7707 in k7698 in k7695 in k7512 in a7509 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in ... */
static void C_fcall f_7756(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_7756,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7764,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:882: prefix-sym */
f_7710(t3,lf[121],t2);}

/* k7762 in g2753 in k7750 in k7747 in k7744 in k7738 in k7707 in k7698 in k7695 in k7512 in a7509 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in ... */
static void C_ccall f_7764(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7764,c,av);}
/* chicken-syntax.scm:882: r */
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
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k7765 in k7750 in k7747 in k7744 in k7738 in k7707 in k7698 in k7695 in k7512 in a7509 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in ... */
static void C_ccall f_7767(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_7767,c,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7770,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7533,a[2]=t2,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[11],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:834: scheme#reverse */
t4=*((C_word*)lf[55]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[10];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k7768 in k7765 in k7750 in k7747 in k7744 in k7738 in k7707 in k7698 in k7695 in k7512 in a7509 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in ... */
static void C_ccall f_7770(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_7770,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7773,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:887: make-if-tree */
t3=((C_word*)t0)[9];
f_7604(t3,t2,((C_word*)t0)[10],((C_word*)t0)[11],((C_word*)t0)[6],((C_word*)t0)[2]);}

/* k7771 in k7768 in k7765 in k7750 in k7747 in k7744 in k7738 in k7707 in k7698 in k7695 in k7512 in a7509 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in ... */
static void C_ccall f_7773(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_7773,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7780,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:890: r */
t3=((C_word*)t0)[9];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[122];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7778 in k7771 in k7768 in k7765 in k7750 in k7747 in k7744 in k7738 in k7707 in k7698 in k7695 in k7512 in a7509 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in ... */
static void C_ccall f_7780(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(33,c,1)))){
C_save_and_reclaim((void *)f_7780,c,av);}
a=C_alloc(33);
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[5]);
t4=C_a_i_cons(&a,2,lf[20],t3);
t5=C_a_i_list(&a,2,((C_word*)t0)[6],t4);
t6=C_a_i_cons(&a,2,t5,((C_word*)t0)[7]);
t7=C_a_i_cons(&a,2,t2,t6);
t8=((C_word*)t0)[8];{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_a_i_list(&a,3,t1,t7,((C_word*)t0)[9]);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* map-loop2747 in k7750 in k7747 in k7744 in k7738 in k7707 in k7698 in k7695 in k7512 in a7509 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in ... */
static void C_fcall f_7806(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7806,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7831,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:882: g2753 */
t4=((C_word*)t0)[4];
f_7756(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7829 in map-loop2747 in k7750 in k7747 in k7744 in k7738 in k7707 in k7698 in k7695 in k7512 in a7509 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in ... */
static void C_ccall f_7831(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7831,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7806(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop2718 in k7738 in k7707 in k7698 in k7695 in k7512 in a7509 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in ... */
static void C_fcall f_7840(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_7840,3,t0,t1,t2);}
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

/* map-loop2690 in k7707 in k7698 in k7695 in k7512 in a7509 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in ... */
static void C_fcall f_7874(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7874,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7899,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:873: g2696 */
t4=((C_word*)t0)[4];
f_7726(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7897 in map-loop2690 in k7707 in k7698 in k7695 in k7512 in a7509 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in ... */
static void C_ccall f_7899(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7899,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7874(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop2660 in k7698 in k7695 in k7512 in a7509 in k5629 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in ... */
static void C_fcall f_7908(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_7908,3,t0,t1,t2);}
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

/* k7954 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in ... */
static void C_ccall f_7956(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7956,c,av);}
/* chicken-syntax.scm:714: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[128];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a7957 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in ... */
static void C_ccall f_7958(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7958,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7962,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:718: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[128];
av2[3]=t2;
av2[4]=lf[131];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k7960 in a7957 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in ... */
static void C_ccall f_7962(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_7962,c,av);}
a=C_alloc(8);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7972,a[2]=t4,a[3]=t6,a[4]=((C_word*)t0)[3],a[5]=((C_word)li44),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_7972(t8,((C_word*)t0)[4],t2,C_SCHEME_TRUE);}

/* fold in k7960 in a7957 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in ... */
static void C_fcall f_7972(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_7972,4,t0,t1,t2,t3);}
a=C_alloc(10);
if(C_truep(C_i_nullp(t2))){
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[2]);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_a_i_cons(&a,2,lf[26],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=C_u_i_cdr(t2);
t6=C_i_pairp(t4);
if(C_truep(C_i_not(t6))){
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7999,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t5,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:727: ##sys#check-syntax */
t8=*((C_word*)lf[43]+1);{
C_word av2[5];
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[128];
av2[3]=t4;
av2[4]=lf[129];
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}
else{
t7=C_i_cdr(t4);
if(C_truep(C_i_nullp(t7))){
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8034,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8059,a[2]=((C_word*)t0)[4],a[3]=t8,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:732: chicken.base#gensym */
t10=*((C_word*)lf[54]+1);{
C_word av2[2];
av2[0]=t10;
av2[1]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8062,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:736: ##sys#check-syntax */
t9=*((C_word*)lf[43]+1);{
C_word av2[5];
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[128];
av2[3]=t4;
av2[4]=lf[130];
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}}}}

/* k7997 in fold in k7960 in a7957 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in ... */
static void C_ccall f_7999(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_7999,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8002,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8025,a[2]=((C_word*)t0)[6],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:728: chicken.base#gensym */
t4=*((C_word*)lf[54]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k8000 in k7997 in fold in k7960 in a7957 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in ... */
static void C_ccall f_8002(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_8002,c,av);}
a=C_alloc(14);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8017,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:730: fold */
t5=((C_word*)((C_word*)t0)[4])[1];
f_7972(t5,t4,((C_word*)t0)[5],t1);}

/* k8015 in k8000 in k7997 in fold in k7960 in a7957 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in ... */
static void C_ccall f_8017(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,1)))){
C_save_and_reclaim((void *)f_8017,c,av);}
a=C_alloc(21);
t2=C_a_i_list(&a,4,lf[34],((C_word*)t0)[2],t1,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8023 in k7997 in fold in k7960 in a7957 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in ... */
static void C_ccall f_8025(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8025,c,av);}
/* chicken-syntax.scm:728: r */
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
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k8032 in fold in k7960 in a7957 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in ... */
static void C_ccall f_8034(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8034,c,av);}
a=C_alloc(14);
t2=C_u_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,t1,t2);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8049,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:734: fold */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7972(t6,t5,((C_word*)t0)[5],t1);}

/* k8047 in k8032 in fold in k7960 in a7957 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in ... */
static void C_ccall f_8049(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,1)))){
C_save_and_reclaim((void *)f_8049,c,av);}
a=C_alloc(21);
t2=C_a_i_list(&a,4,lf[34],((C_word*)t0)[2],t1,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8057 in fold in k7960 in a7957 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in ... */
static void C_ccall f_8059(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8059,c,av);}
/* chicken-syntax.scm:732: r */
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
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k8060 in fold in k7960 in a7957 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in ... */
static void C_ccall f_8062(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8062,c,av);}
a=C_alloc(14);
t2=C_u_i_car(((C_word*)t0)[2]);
t3=C_i_cadr(((C_word*)t0)[2]);
t4=C_a_i_list(&a,2,t2,t3);
t5=C_a_i_list(&a,1,t4);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8078,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:739: fold */
t7=((C_word*)((C_word*)t0)[4])[1];
f_7972(t7,t6,((C_word*)t0)[5],t2);}

/* k8076 in k8060 in fold in k7960 in a7957 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in ... */
static void C_ccall f_8078(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,1)))){
C_save_and_reclaim((void *)f_8078,c,av);}
a=C_alloc(21);
t2=C_a_i_list(&a,4,lf[34],((C_word*)t0)[2],t1,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8096 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in ... */
static void C_ccall f_8098(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8098,c,av);}
/* chicken-syntax.scm:693: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[132];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a8099 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in ... */
static void C_ccall f_8100(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_8100,c,av);}
a=C_alloc(8);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8102,a[2]=t4,a[3]=t3,a[4]=((C_word)li46),tmp=(C_word)a,a+=5,tmp);
t7=t5=t6;
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8190,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:712: quotify-proc */
t9=t5;{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
av2[2]=C_i_cdr(t2);
av2[3]=lf[132];
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}

/* quotify-proc2560 in a8099 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in ... */
static void C_ccall f_8102(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_8102,c,av);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8106,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:699: ##sys#check-syntax */
t5=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=t2;
av2[4]=lf[135];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k8104 in quotify-proc2560 in a8099 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in ... */
static void C_ccall f_8106(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_8106,c,av);}
a=C_alloc(12);
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_pairp(t2);
t4=(C_truep(t3)?C_u_i_car(t2):t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8115,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t2))){
t6=C_u_i_cdr(t2);
t7=C_u_i_cdr(((C_word*)t0)[2]);
t8=C_a_i_cons(&a,2,t6,t7);
t9=t5;
f_8115(t9,C_a_i_cons(&a,2,lf[20],t8));}
else{
t6=t5;
f_8115(t6,C_i_cadr(((C_word*)t0)[2]));}}

/* k8113 in k8104 in quotify-proc2560 in a8099 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in ... */
static void C_fcall f_8115(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,0,2)))){
C_save_and_reclaim_args((void *)trf_8115,2,t0,t1);}
a=C_alloc(19);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8118,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=C_i_pairp(t1);
t4=C_i_not(t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8127,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t4)){
t6=t5;
f_8127(t6,t4);}
else{
t6=C_i_car(t1);
t7=C_eqp(lf[20],t6);
if(C_truep(C_i_not(t7))){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8143,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8147,a[2]=((C_word*)t0)[4],a[3]=t8,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:707: r */
t10=((C_word*)t0)[5];{
C_word av2[3];
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[134];
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
t8=t5;
f_8127(t8,C_SCHEME_FALSE);}}}

/* k8116 in k8113 in k8104 in quotify-proc2560 in a8099 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in ... */
static void C_ccall f_8118(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_8118,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list2(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8125 in k8113 in k8104 in quotify-proc2560 in a8099 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in ... */
static void C_fcall f_8127(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,5)))){
C_save_and_reclaim_args((void *)trf_8127,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
/* chicken-syntax.scm:708: chicken.syntax#syntax-error */
t2=*((C_word*)lf[56]+1);{
C_word av2[6];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[132];
av2[3]=lf[133];
av2[4]=((C_word*)t0)[3];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}
else{
t2=((C_word*)t0)[5];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_a_i_list2(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k8141 in k8113 in k8104 in quotify-proc2560 in a8099 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in ... */
static void C_ccall f_8143(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8143,c,av);}
t2=((C_word*)t0)[2];
f_8127(t2,C_i_not(t1));}

/* k8145 in k8113 in k8104 in quotify-proc2560 in a8099 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in ... */
static void C_ccall f_8147(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8147,c,av);}
/* chicken-syntax.scm:707: c */
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
av2[3]=C_u_i_car(((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k8188 in a8099 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in ... */
static void C_ccall f_8190(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8190,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,lf[136],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8200 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in ... */
static void C_ccall f_8202(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8202,c,av);}
/* chicken-syntax.scm:682: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[139];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a8203 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in ... */
static void C_ccall f_8204(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8204,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8208,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:687: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[139];
av2[3]=t2;
av2[4]=lf[140];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k8206 in a8203 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in ... */
static void C_ccall f_8208(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_8208,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8211,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:688: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[42];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k8209 in k8206 in a8203 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in ... */
static void C_ccall f_8211(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_8211,c,av);}
a=C_alloc(15);
t2=C_i_caddr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,lf[20],C_SCHEME_END_OF_LIST,t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8230,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:691: r */
t5=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[137];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k8228 in k8209 in k8206 in a8203 in k5620 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in ... */
static void C_ccall f_8230(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,1)))){
C_save_and_reclaim((void *)f_8230,c,av);}
a=C_alloc(27);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,t1,((C_word*)t0)[3],t2);
t4=C_a_i_list(&a,3,lf[20],((C_word*)t0)[3],t3);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,lf[25],((C_word*)t0)[5],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k8244 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in ... */
static void C_ccall f_8246(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8246,c,av);}
/* chicken-syntax.scm:673: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[141];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a8247 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in ... */
static void C_ccall f_8248(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8248,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8252,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:678: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[141];
av2[3]=t2;
av2[4]=lf[144];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k8250 in a8247 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in ... */
static void C_ccall f_8252(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_8252,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8255,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:679: chicken.internal#check-for-multiple-bindings */
t3=*((C_word*)lf[142]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_cadr(((C_word*)t0)[2]);
av2[3]=((C_word*)t0)[2];
av2[4]=lf[143];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k8253 in k8250 in a8247 in k5617 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in ... */
static void C_ccall f_8255(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8255,c,av);}
a=C_alloc(3);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[48],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8266 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_ccall f_8268(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8268,c,av);}
/* chicken-syntax.scm:654: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[145];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a8269 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_ccall f_8270(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8270,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8274,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:658: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[145];
av2[3]=t2;
av2[4]=lf[149];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k8272 in a8269 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in ... */
static void C_ccall f_8274(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_8274,c,av);}
a=C_alloc(18);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=C_i_check_list_2(t2,lf[65]);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8288,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8490,a[2]=t7,a[3]=t12,a[4]=t8,a[5]=((C_word)li55),tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_8490(t14,t10,t2);}

/* k8286 in k8272 in a8269 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in ... */
static void C_ccall f_8288(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8288,c,av);}
a=C_alloc(18);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8294,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8456,a[2]=t4,a[3]=t8,a[4]=t5,a[5]=((C_word)li54),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_8456(t10,t6,((C_word*)t0)[4]);}

/* k8292 in k8286 in k8272 in a8269 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in ... */
static void C_ccall f_8294(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,4)))){
C_save_and_reclaim((void *)f_8294,c,av);}
a=C_alloc(19);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[146]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8316,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],a[6]=t4,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8420,a[2]=t9,a[3]=((C_word)li53),tmp=(C_word)a,a+=4,tmp));
t11=((C_word*)t9)[1];
f_8420(t11,t7,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k8314 in k8292 in k8286 in k8272 in a8269 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in ... */
static void C_ccall f_8316(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8316,c,av);}
a=C_alloc(14);
t2=C_i_check_list_2(t1,lf[65]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8322,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8386,a[2]=((C_word*)t0)[6],a[3]=t5,a[4]=((C_word*)t0)[7],a[5]=((C_word)li51),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_8386(t7,t3,t1);}

/* k8320 in k8314 in k8292 in k8286 in k8272 in a8269 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in ... */
static void C_ccall f_8322(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,4)))){
C_save_and_reclaim((void *)f_8322,c,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8326,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=*((C_word*)lf[147]+1);
t8=C_i_check_list_2(((C_word*)t0)[3],lf[65]);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8336,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8338,a[2]=t5,a[3]=t11,a[4]=t7,a[5]=t6,a[6]=((C_word)li50),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_8338(t13,t9,((C_word*)t0)[5],((C_word*)t0)[3]);}

/* k8324 in k8320 in k8314 in k8292 in k8286 in k8272 in a8269 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in ... */
static void C_ccall f_8326(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_8326,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[35],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8334 in k8320 in k8314 in k8292 in k8286 in k8272 in a8269 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in ... */
static void C_ccall f_8336(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8336,c,av);}
/* chicken-syntax.scm:663: ##sys#append */
t2=*((C_word*)lf[53]+1);{
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

/* map-loop2508 in k8320 in k8314 in k8292 in k8286 in k8272 in a8269 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in ... */
static void C_fcall f_8338(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_8338,4,t0,t1,t2,t3);}
a=C_alloc(7);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8367,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:670: g2514 */
t7=((C_word*)t0)[4];{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=C_slot(t2,C_fix(0));
av2[3]=C_slot(t3,C_fix(0));
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k8365 in map-loop2508 in k8320 in k8314 in k8292 in k8286 in k8272 in a8269 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in ... */
static void C_ccall f_8367(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_8367,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_8338(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)),C_slot(((C_word*)t0)[6],C_fix(1)));}

/* map-loop2460 in k8314 in k8292 in k8286 in k8272 in a8269 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in ... */
static void C_fcall f_8386(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_8386,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,2,t3,lf[148]);
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

/* foldl2483 in k8292 in k8286 in k8272 in a8269 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in ... */
static void C_fcall f_8420(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,5)))){
C_save_and_reclaim_args((void *)trf_8420,4,t0,t1,t2,t3);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8450,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=C_slot(t2,C_fix(0));
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8444,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8446,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:666: ##sys#decompose-lambda-list */
t9=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t9;
av2[1]=t7;
av2[2]=t6;
av2[3]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k8442 in foldl2483 in k8292 in k8286 in k8272 in a8269 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in ... */
static void C_ccall f_8444(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8444,c,av);}
/* chicken-syntax.scm:666: ##sys#append */
t2=*((C_word*)lf[53]+1);{
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

/* a8445 in foldl2483 in k8292 in k8286 in k8272 in a8269 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in ... */
static void C_ccall f_8446(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8446,c,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k8448 in foldl2483 in k8292 in k8286 in k8272 in a8269 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in ... */
static void C_ccall f_8450(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8450,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_8420(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* map-loop2431 in k8286 in k8272 in a8269 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in ... */
static void C_fcall f_8456(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_8456,3,t0,t1,t2);}
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

/* map-loop2405 in k8272 in a8269 in k5614 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in ... */
static void C_fcall f_8490(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_8490,3,t0,t1,t2);}
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

/* k8524 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in ... */
static void C_ccall f_8526(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8526,c,av);}
/* chicken-syntax.scm:639: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[150];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a8527 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in ... */
static void C_ccall f_8528(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8528,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8532,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:643: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[150];
av2[3]=t2;
av2[4]=lf[152];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k8530 in a8527 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_ccall f_8532(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8532,c,av);}
a=C_alloc(5);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8540,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:646: r */
t6=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[151];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k8538 in k8530 in a8527 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in ... */
static void C_ccall f_8540(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_8540,c,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8545,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=((C_word)li57),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_8545(t5,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* fold in k8538 in k8530 in a8527 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in ... */
static void C_fcall f_8545(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_8545,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_nullp(t2))){
t3=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,lf[35],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8570,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:651: fold */
t7=t5;
t8=C_u_i_cdr(t2);
t1=t7;
t2=t8;
goto loop;}}

/* k8568 in fold in k8538 in k8530 in a8527 in k5611 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in ... */
static void C_ccall f_8570(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_8570,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8578 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in ... */
static void C_ccall f_8580(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8580,c,av);}
/* chicken-syntax.scm:585: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[151];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a8581 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in ... */
static void C_ccall f_8582(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8582,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8586,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:589: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[151];
av2[3]=t2;
av2[4]=lf[153];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k8584 in a8581 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in ... */
static void C_ccall f_8586(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,4)))){
C_save_and_reclaim((void *)f_8586,c,av);}
a=C_alloc(33);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8592,a[2]=t6,a[3]=((C_word)li59),tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8620,a[2]=t8,a[3]=((C_word)li60),tmp=(C_word)a,a+=4,tmp);
t11=C_set_block_item(t6,0,t9);
t12=C_set_block_item(t8,0,t10);
t13=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t14=t13;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=((C_word*)t15)[1];
t17=C_i_check_list_2(t2,lf[65]);
t18=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8668,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=t8,a[7]=t6,tmp=(C_word)a,a+=8,tmp);
t19=C_SCHEME_UNDEFINED;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_set_block_item(t20,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9021,a[2]=t15,a[3]=t20,a[4]=t16,a[5]=((C_word)li70),tmp=(C_word)a,a+=6,tmp));
t22=((C_word*)t20)[1];
f_9021(t22,t18,t2);}

/* append*2211 in k8584 in a8581 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_ccall f_8592(C_word c,C_word *av){
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
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_8592,c,av);}
a=C_alloc(4);
t4=C_i_pairp(t2);
if(C_truep(C_i_not(t4))){
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_cons(&a,2,t2,t3);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_i_car(t2);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8613,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:596: append* */
t7=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=C_u_i_cdr(t2);
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}

/* k8611 in append*2211 in k8584 in a8581 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in ... */
static void C_ccall f_8613(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8613,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* map*2212 in k8584 in a8581 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_ccall f_8620(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_8620,c,av);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t3))){
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_pairp(t3);
if(C_truep(C_i_not(t4))){
/* chicken-syntax.scm:599: proc */
t5=t2;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8643,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:600: proc */
t6=t2;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=C_i_car(t3);
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}}

/* k8641 in map*2212 in k8584 in a8581 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in ... */
static void C_ccall f_8643(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_8643,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8647,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:600: map* */
t3=((C_word*)((C_word*)t0)[3])[1];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_u_i_cdr(((C_word*)t0)[5]);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k8645 in k8641 in map*2212 in k8584 in a8581 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in ... */
static void C_ccall f_8647(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8647,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8666 in k8584 in a8581 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_ccall f_8668(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8668,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8671,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8983,a[2]=t4,a[3]=((C_word*)t0)[7],a[4]=((C_word)li69),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_8983(t6,t2,t1,C_SCHEME_END_OF_LIST);}

/* k8669 in k8666 in k8584 in a8581 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in ... */
static void C_ccall f_8671(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(26,c,3)))){
C_save_and_reclaim((void *)f_8671,c,av);}
a=C_alloc(26);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8675,a[2]=((C_word*)t0)[2],a[3]=((C_word)li61),tmp=(C_word)a,a+=4,tmp);
t7=C_i_check_list_2(t1,lf[65]);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8693,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8949,a[2]=t4,a[3]=t10,a[4]=t6,a[5]=t5,a[6]=((C_word)li68),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_8949(t12,t8,t1);}

/* g2272 in k8669 in k8666 in k8584 in a8581 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in ... */
static void C_fcall f_8675(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_8675,3,t0,t1,t2);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8683,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8687,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:611: chicken.base#gensym */
t5=*((C_word*)lf[54]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k8681 in g2272 in k8669 in k8666 in k8584 in a8581 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in ... */
static void C_ccall f_8683(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8683,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8685 in g2272 in k8669 in k8666 in k8584 in a8581 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in ... */
static void C_ccall f_8687(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8687,c,av);}
/* chicken-syntax.scm:611: r */
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
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k8691 in k8669 in k8666 in k8584 in a8581 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in ... */
static void C_ccall f_8693(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8693,c,av);}
a=C_alloc(20);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8694,a[2]=t1,a[3]=((C_word)li62),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8705,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8905,a[2]=t5,a[3]=t2,a[4]=((C_word*)t0)[7],a[5]=((C_word)li67),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_8905(t7,t3,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* lookup in k8691 in k8669 in k8666 in k8584 in a8581 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in ... */
static void C_ccall f_8694(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8694,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_cdr(C_i_assq(t2,((C_word*)t0)[2]));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8703 in k8691 in k8669 in k8666 in k8584 in a8581 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in ... */
static void C_ccall f_8705(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_8705,c,av);}
a=C_alloc(21);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8720,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8871,a[2]=t4,a[3]=t8,a[4]=t5,a[5]=((C_word)li66),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_8871(t10,t6,((C_word*)t0)[7]);}

/* k8718 in k8703 in k8691 in k8669 in k8666 in k8584 in a8581 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in ... */
static void C_ccall f_8720(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_8720,c,av);}
a=C_alloc(9);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8722,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word)li65),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_8722(t5,((C_word*)t0)[5],((C_word*)t0)[6],t1,((C_word*)t0)[7]);}

/* fold in k8718 in k8703 in k8691 in k8669 in k8666 in k8584 in a8581 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in ... */
static void C_fcall f_8722(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,0,4)))){
C_save_and_reclaim_args((void *)trf_8722,5,t0,t1,t2,t3,t4);}
a=C_alloc(22);
if(C_truep(C_i_nullp(t2))){
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8741,a[2]=((C_word*)t0)[2],a[3]=((C_word)li63),tmp=(C_word)a,a+=4,tmp);
t10=C_i_check_list_2(((C_word*)t0)[3],lf[65]);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8755,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8757,a[2]=t7,a[3]=t13,a[4]=t9,a[5]=t8,a[6]=((C_word)li64),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_8757(t15,t11,((C_word*)t0)[3]);}
else{
t5=C_i_car(t4);
t6=C_i_pairp(t5);
t7=(C_truep(t6)?C_i_nullp(C_i_cdar(t4)):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=C_i_caar(t4);
t9=C_i_car(t3);
t10=C_a_i_list(&a,2,t8,t9);
t11=C_a_i_list(&a,1,t10);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8806,a[2]=t1,a[3]=t11,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:631: fold */
t16=t12;
t17=C_i_cdr(t2);
t18=C_u_i_cdr(t3);
t19=C_u_i_cdr(t4);
t1=t16;
t2=t17;
t3=t18;
t4=t19;
goto loop;}
else{
t8=C_i_car(t3);
t9=C_a_i_list(&a,3,lf[20],C_SCHEME_END_OF_LIST,t8);
t10=C_u_i_car(t4);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8843,a[2]=t10,a[3]=t1,a[4]=t9,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:637: fold */
t16=t11;
t17=C_i_cdr(t2);
t18=C_u_i_cdr(t3);
t19=C_u_i_cdr(t4);
t1=t16;
t2=t17;
t3=t18;
t4=t19;
goto loop;}}}

/* g2323 in fold in k8718 in k8703 in k8691 in k8669 in k8666 in k8584 in a8581 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in ... */
static void C_fcall f_8741(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_8741,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8749,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:626: lookup */
t4=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
f_8694(3,av2);}}

/* k8747 in g2323 in fold in k8718 in k8703 in k8691 in k8669 in k8666 in k8584 in a8581 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in ... */
static void C_ccall f_8749(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_8749,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8753 in fold in k8718 in k8703 in k8691 in k8669 in k8666 in k8584 in a8581 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in ... */
static void C_ccall f_8755(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_8755,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[35],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* map-loop2317 in fold in k8718 in k8703 in k8691 in k8669 in k8666 in k8584 in a8581 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in ... */
static void C_fcall f_8757(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_8757,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8782,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:626: g2323 */
t4=((C_word*)t0)[4];
f_8741(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k8780 in map-loop2317 in fold in k8718 in k8703 in k8691 in k8669 in k8666 in k8584 in a8581 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in ... */
static void C_ccall f_8782(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8782,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_8757(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k8804 in fold in k8718 in k8703 in k8691 in k8669 in k8666 in k8584 in a8581 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in ... */
static void C_ccall f_8806(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_8806,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8841 in fold in k8718 in k8703 in k8691 in k8669 in k8666 in k8584 in a8581 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in ... */
static void C_ccall f_8843(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_8843,c,av);}
a=C_alloc(18);
t2=C_a_i_list(&a,3,lf[20],((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[25],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* map-loop2352 in k8703 in k8691 in k8669 in k8666 in k8584 in a8581 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in ... */
static void C_fcall f_8871(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_8871,3,t0,t1,t2);}
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

/* loop in k8691 in k8669 in k8666 in k8584 in a8581 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in ... */
static void C_fcall f_8905(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_8905,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
/* chicken-syntax.scm:615: scheme#reverse */
t4=*((C_word*)lf[55]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t4=C_i_car(t2);
t5=C_i_pairp(t4);
if(C_truep(C_i_not(t5))){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8936,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:618: lookup */
t7=((C_word*)t0)[3];{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t4;
f_8694(3,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8943,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:619: map* */
t7=((C_word*)((C_word*)t0)[4])[1];{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[3];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}}

/* k8934 in loop in k8691 in k8669 in k8666 in k8584 in a8581 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in ... */
static void C_ccall f_8936(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_8936,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* chicken-syntax.scm:620: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_8905(t3,((C_word*)t0)[4],C_u_i_cdr(((C_word*)t0)[5]),t2);}

/* k8941 in loop in k8691 in k8669 in k8666 in k8584 in a8581 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in ... */
static void C_ccall f_8943(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_8943,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* chicken-syntax.scm:620: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_8905(t3,((C_word*)t0)[4],C_u_i_cdr(((C_word*)t0)[5]),t2);}

/* map-loop2266 in k8669 in k8666 in k8584 in a8581 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in ... */
static void C_fcall f_8949(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_8949,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8974,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:611: g2272 */
t4=((C_word*)t0)[4];
f_8675(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k8972 in map-loop2266 in k8669 in k8666 in k8584 in a8581 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in ... */
static void C_ccall f_8974(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8974,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_8949(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* loop in k8666 in k8584 in a8581 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in ... */
static void C_fcall f_8983(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_8983,4,t0,t1,t2,t3);}
a=C_alloc(8);
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8996,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_listp(t4))){
/* chicken-syntax.scm:607: scheme#append */
t6=*((C_word*)lf[105]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
if(C_truep(C_i_pairp(t4))){
/* chicken-syntax.scm:608: append* */
t6=((C_word*)((C_word*)t0)[3])[1];{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t6=C_a_i_cons(&a,2,t4,t3);
/* chicken-syntax.scm:610: loop */
t8=t1;
t9=C_u_i_cdr(t2);
t10=t6;
t1=t8;
t2=t9;
t3=t10;
goto loop;}}}}

/* k8994 in loop in k8666 in k8584 in a8581 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in ... */
static void C_ccall f_8996(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8996,c,av);}
/* chicken-syntax.scm:610: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_8983(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]),t1);}

/* map-loop2228 in k8584 in a8581 in k5608 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_fcall f_9021(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_9021,3,t0,t1,t2);}
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

/* k9055 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in ... */
static void C_ccall f_9057(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9057,c,av);}
/* chicken-syntax.scm:568: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[154];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a9058 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in ... */
static void C_ccall f_9059(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9059,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9063,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:572: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[154];
av2[3]=t2;
av2[4]=lf[159];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k9061 in a9058 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in ... */
static void C_ccall f_9063(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9063,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9070,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9074,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_i_cadr(((C_word*)t0)[3]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9096,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:574: ##sys#decompose-lambda-list */
t6=*((C_word*)lf[103]+1);{
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
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k9068 in k9061 in a9058 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in ... */
static void C_ccall f_9070(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_9070,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,lf[26],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k9072 in k9061 in a9058 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in ... */
static void C_ccall f_9074(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_9074,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9082,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:583: ##sys#expand-multiple-values-assignment */
t3=*((C_word*)lf[147]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_cadr(((C_word*)t0)[3]);
av2[3]=C_i_caddr(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k9080 in k9072 in k9061 in a9058 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_ccall f_9082(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_9082,c,av);}
a=C_alloc(3);
t2=C_a_i_list(&a,1,t1);
/* chicken-syntax.scm:573: ##sys#append */
t3=*((C_word*)lf[53]+1);{
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

/* a9095 in k9061 in a9058 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in ... */
static void C_ccall f_9096(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_9096,c,av);}
a=C_alloc(10);
t5=C_i_check_list_2(t2,lf[67]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9115,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9162,a[2]=t8,a[3]=((C_word)li73),tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_9162(t10,t6,t2);}

/* k9100 in for-each-loop2157 in a9095 in k9061 in a9058 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in ... */
static void C_ccall f_9102(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_9102,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9109,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:579: ##sys#current-module */
t3=*((C_word*)lf[83]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k9107 in k9100 in for-each-loop2157 in a9095 in k9061 in a9058 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in ... */
static void C_ccall f_9109(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9109,c,av);}
/* chicken-syntax.scm:579: ##sys#register-export */
t2=*((C_word*)lf[156]+1);{
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

/* k9113 in a9095 in k9061 in a9058 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_ccall f_9115(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9115,c,av);}
a=C_alloc(13);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9128,a[2]=t4,a[3]=t7,a[4]=t5,a[5]=((C_word)li72),tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_9128(t9,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* map-loop2167 in k9113 in a9095 in k9061 in a9058 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in ... */
static void C_fcall f_9128(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_9128,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,2,lf[155],t3);
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

/* for-each-loop2157 in a9095 in k9061 in a9058 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_fcall f_9162(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_9162,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9172,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9102,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:578: ##sys#get */
t6=*((C_word*)lf[157]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
av2[3]=lf[158];
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k9170 in for-each-loop2157 in a9095 in k9061 in a9058 in k5604 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in ... */
static void C_ccall f_9172(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9172,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_9162(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k9185 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in ... */
static void C_ccall f_9187(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9187,c,av);}
/* chicken-syntax.scm:560: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[160];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a9188 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in ... */
static void C_ccall f_9189(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9189,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9193,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:564: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[160];
av2[3]=t2;
av2[4]=lf[161];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k9191 in a9188 in k5601 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in ... */
static void C_ccall f_9193(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9193,c,av);}
/* chicken-syntax.scm:565: ##sys#expand-multiple-values-assignment */
t2=*((C_word*)lf[147]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_i_cadr(((C_word*)t0)[3]);
av2[3]=C_i_caddr(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k9206 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in ... */
static void C_ccall f_9208(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9208,c,av);}
/* chicken-syntax.scm:551: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[162];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a9209 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in ... */
static void C_ccall f_9210(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9210,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9214,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:555: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[162];
av2[3]=t2;
av2[4]=lf[164];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k9212 in a9209 in k5598 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in ... */
static void C_ccall f_9214(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_9214,c,av);}
a=C_alloc(18);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,lf[163]);
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_u_i_cdr(t4);
t6=C_a_i_cons(&a,2,lf[26],t5);
t7=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_a_i_list(&a,4,lf[34],t2,t3,t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* k9234 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in ... */
static void C_ccall f_9236(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9236,c,av);}
/* chicken-syntax.scm:543: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[165];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a9237 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in ... */
static void C_ccall f_9238(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9238,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9242,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:547: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[165];
av2[3]=t2;
av2[4]=lf[166];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k9240 in a9237 in k5595 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in ... */
static void C_ccall f_9242(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_9242,c,av);}
a=C_alloc(12);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=C_a_i_cons(&a,2,lf[26],t4);
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list(&a,3,lf[34],t2,t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k9258 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in ... */
static void C_ccall f_9260(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9260,c,av);}
/* chicken-syntax.scm:530: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[167];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a9261 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in ... */
static void C_ccall f_9262(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9262,c,av);}
a=C_alloc(22);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9271,a[2]=t3,a[3]=t4,a[4]=((C_word)li81),tmp=(C_word)a,a+=5,tmp);
t10=C_i_cdr(t2);
t11=C_i_check_list_2(t10,lf[65]);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9302,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9304,a[2]=t7,a[3]=t14,a[4]=t9,a[5]=t8,a[6]=((C_word)li82),tmp=(C_word)a,a+=7,tmp));
t16=((C_word*)t14)[1];
f_9304(t16,t12,t10);}

/* g2082 in a9261 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in ... */
static void C_fcall f_9271(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,8)))){
C_save_and_reclaim_args((void *)trf_9271,3,t0,t1,t2);}
a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9277,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li79),tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9283,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:537: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* a9276 in g2082 in a9261 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in ... */
static void C_ccall f_9277(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_9277,c,av);}
/* chicken-syntax.scm:537: ##sys#decompose-import */
t2=*((C_word*)lf[168]+1);{
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
av2[5]=lf[46];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* a9282 in g2082 in a9261 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in ... */
static void C_ccall f_9283(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_9283,c,av);}
a=C_alloc(9);
t8=C_i_not(t3);
t9=t1;{
C_word *av2=av;
av2[0]=t9;
av2[1]=(C_truep(t8)?lf[169]:C_a_i_list(&a,3,lf[170],t3,t2));
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}

/* k9300 in a9261 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in ... */
static void C_ccall f_9302(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_9302,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,lf[26],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* map-loop2076 in a9261 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in ... */
static void C_fcall f_9304(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_9304,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9329,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:536: g2082 */
t4=((C_word*)t0)[4];
f_9271(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k9327 in map-loop2076 in a9261 in k5592 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in ... */
static void C_ccall f_9329(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_9329,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_9304(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k9338 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in ... */
static void C_ccall f_9340(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9340,c,av);}
/* chicken-syntax.scm:476: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[171];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a9341 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in k5527 in ... */
static void C_ccall f_9342(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9342,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9361,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:484: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[171];
av2[3]=t2;
av2[4]=lf[179];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k9359 in a9341 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in k5530 in ... */
static void C_ccall f_9361(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_9361,c,av);}
a=C_alloc(6);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9369,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:487: r */
t6=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[178];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k9367 in k9359 in a9341 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in k5533 in ... */
static void C_ccall f_9369(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9369,c,av);}
a=C_alloc(20);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[65]);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9378,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10234,a[2]=t4,a[3]=t9,a[4]=t5,a[5]=((C_word)li101),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_10234(t11,t7,((C_word*)t0)[2]);}

/* k9376 in k9367 in k9359 in a9341 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in k5536 in ... */
static void C_ccall f_9378(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,3)))){
C_save_and_reclaim((void *)f_9378,c,av);}
a=C_alloc(20);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9384,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10200,a[2]=t4,a[3]=t8,a[4]=t5,a[5]=((C_word)li100),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_10200(t10,t6,((C_word*)t0)[6]);}

/* k9382 in k9376 in k9367 in k9359 in a9341 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5539 in ... */
static void C_ccall f_9384(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(26,c,3)))){
C_save_and_reclaim((void *)f_9384,c,av);}
a=C_alloc(26);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9388,a[2]=((C_word*)t0)[2],a[3]=((C_word)li84),tmp=(C_word)a,a+=4,tmp);
t7=C_i_check_list_2(((C_word*)t0)[3],lf[65]);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9402,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10166,a[2]=t4,a[3]=t10,a[4]=t6,a[5]=t5,a[6]=((C_word)li99),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_10166(t12,t8,((C_word*)t0)[3]);}

/* g1667 in k9382 in k9376 in k9367 in k9359 in a9341 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in ... */
static void C_fcall f_9388(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_9388,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9396,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_symbolp(t2))){
/* chicken-syntax.scm:482: chicken.base#gensym */
t4=*((C_word*)lf[54]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
/* chicken-syntax.scm:483: chicken.base#gensym */
t4=*((C_word*)lf[54]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[172];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k9394 in g1667 in k9382 in k9376 in k9367 in k9359 in a9341 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in ... */
static void C_ccall f_9396(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9396,c,av);}
/* chicken-syntax.scm:490: r */
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
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k9400 in k9382 in k9376 in k9367 in k9359 in a9341 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in ... */
static void C_ccall f_9402(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(27,c,3)))){
C_save_and_reclaim((void *)f_9402,c,av);}
a=C_alloc(27);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9406,a[2]=((C_word*)t0)[2],a[3]=((C_word)li85),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9417,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10132,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=t5,a[6]=((C_word)li98),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_10132(t11,t7,((C_word*)t0)[7]);}

/* g1695 in k9400 in k9382 in k9376 in k9367 in k9359 in a9341 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in ... */
static void C_fcall f_9406(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_9406,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9414,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:491: chicken.base#gensym */
t3=*((C_word*)lf[54]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[173];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k9412 in g1695 in k9400 in k9382 in k9376 in k9367 in k9359 in a9341 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in ... */
static void C_ccall f_9414(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9414,c,av);}
/* chicken-syntax.scm:491: r */
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
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k9415 in k9400 in k9382 in k9376 in k9367 in k9359 in a9341 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in k5546 in ... */
static void C_ccall f_9417(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(27,c,3)))){
C_save_and_reclaim((void *)f_9417,c,av);}
a=C_alloc(27);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9421,a[2]=((C_word*)t0)[2],a[3]=((C_word)li86),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9432,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10098,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=t5,a[6]=((C_word)li97),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_10098(t11,t7,((C_word*)t0)[8]);}

/* g1723 in k9415 in k9400 in k9382 in k9376 in k9367 in k9359 in a9341 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in ... */
static void C_fcall f_9421(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_9421,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9429,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:492: chicken.base#gensym */
t3=*((C_word*)lf[54]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[42];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k9427 in g1723 in k9415 in k9400 in k9382 in k9376 in k9367 in k9359 in a9341 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_ccall f_9429(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9429,c,av);}
/* chicken-syntax.scm:492: r */
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
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k9430 in k9415 in k9400 in k9382 in k9376 in k9367 in k9359 in a9341 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in k5549 in ... */
static void C_ccall f_9432(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,4)))){
C_save_and_reclaim((void *)f_9432,c,av);}
a=C_alloc(22);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[65]);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9445,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10050,a[2]=t4,a[3]=t9,a[4]=t5,a[5]=((C_word)li96),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_10050(t11,t7,((C_word*)t0)[2],((C_word*)t0)[8]);}

/* k9443 in k9430 in k9415 in k9400 in k9382 in k9376 in k9367 in k9359 in a9341 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_ccall f_9445(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,4)))){
C_save_and_reclaim((void *)f_9445,c,av);}
a=C_alloc(22);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[65]);
t7=C_i_check_list_2(((C_word*)t0)[3],lf[65]);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9462,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t1,a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10002,a[2]=t4,a[3]=t10,a[4]=t5,a[5]=((C_word)li95),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_10002(t12,t8,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9460 in k9443 in k9430 in k9415 in k9400 in k9382 in k9376 in k9367 in k9359 in a9341 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in k5555 in ... */
static void C_ccall f_9462(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(23,c,4)))){
C_save_and_reclaim((void *)f_9462,c,av);}
a=C_alloc(23);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9473,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9954,a[2]=t4,a[3]=t8,a[4]=t5,a[5]=((C_word)li94),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_9954(t10,t6,((C_word*)t0)[7],((C_word*)t0)[7]);}

/* k9471 in k9460 in k9443 in k9430 in k9415 in k9400 in k9382 in k9376 in k9367 in k9359 in a9341 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in ... */
static void C_ccall f_9473(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(51,c,5)))){
C_save_and_reclaim((void *)f_9473,c,av);}
a=C_alloc(51);
t2=C_a_i_list(&a,4,lf[174],lf[175],C_SCHEME_TRUE,C_SCHEME_TRUE);
t3=C_a_i_list(&a,2,((C_word*)t0)[2],t2);
t4=C_a_i_list(&a,1,t3);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9724,a[2]=((C_word*)t0)[2],a[3]=((C_word)li87),tmp=(C_word)a,a+=4,tmp);
t10=C_i_check_list_2(((C_word*)t0)[3],lf[65]);
t11=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9742,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[3],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[2],tmp=(C_word)a,a+=12,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9884,a[2]=t9,a[3]=t7,a[4]=t13,a[5]=t8,a[6]=((C_word)li93),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_9884(t15,t11,((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[3]);}

/* k9519 in k9744 in k9740 in k9471 in k9460 in k9443 in k9430 in k9415 in k9400 in k9382 in k9376 in k9367 in k9359 in a9341 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in ... */
static void C_ccall f_9521(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(28,c,4)))){
C_save_and_reclaim((void *)f_9521,c,av);}
a=C_alloc(28);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9525,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9537,a[2]=t2,a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9599,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li89),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_9599(t11,t7,((C_word*)t0)[11],((C_word*)t0)[9]);}

/* k9523 in k9519 in k9744 in k9740 in k9471 in k9460 in k9443 in k9430 in k9415 in k9400 in k9382 in k9376 in k9367 in k9359 in a9341 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in ... */
static void C_ccall f_9525(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(63,c,1)))){
C_save_and_reclaim((void *)f_9525,c,av);}
a=C_alloc(63);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[35],t2);
t4=C_a_i_list(&a,3,lf[20],C_SCHEME_END_OF_LIST,t3);
t5=C_a_i_list(&a,4,lf[176],((C_word*)t0)[3],((C_word*)t0)[4],t4);
t6=C_a_i_list(&a,3,lf[35],((C_word*)t0)[5],t5);
t7=C_a_i_list(&a,3,lf[35],((C_word*)t0)[6],t6);
t8=C_a_i_list(&a,3,lf[35],((C_word*)t0)[7],t7);
t9=((C_word*)t0)[8];{
C_word *av2=av;
av2[0]=t9;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[9],t8);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}

/* k9535 in k9519 in k9744 in k9740 in k9471 in k9460 in k9443 in k9430 in k9415 in k9400 in k9382 in k9376 in k9367 in k9359 in a9341 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in ... */
static void C_ccall f_9537(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9537,c,av);}
a=C_alloc(17);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9549,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9551,a[2]=t4,a[3]=t8,a[4]=t5,a[5]=((C_word)li88),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_9551(t10,t6,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k9547 in k9535 in k9519 in k9744 in k9740 in k9471 in k9460 in k9443 in k9430 in k9415 in k9400 in k9382 in k9376 in k9367 in k9359 in a9341 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in ... */
static void C_ccall f_9549(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9549,c,av);}
/* chicken-syntax.scm:493: ##sys#append */
t2=*((C_word*)lf[53]+1);{
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

/* map-loop2032 in k9535 in k9519 in k9744 in k9740 in k9471 in k9460 in k9443 in k9430 in k9415 in k9400 in k9382 in k9376 in k9367 in k9359 in a9341 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in ... */
static void C_fcall f_9551(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_9551,4,t0,t1,t2,t3);}
a=C_alloc(12);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,3,lf[177],t6,t7);
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

/* map-loop1996 in k9519 in k9744 in k9740 in k9471 in k9460 in k9443 in k9430 in k9415 in k9400 in k9382 in k9376 in k9367 in k9359 in a9341 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in ... */
static void C_fcall f_9599(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,0,3)))){
C_save_and_reclaim_args((void *)trf_9599,4,t0,t1,t2,t3);}
a=C_alloc(15);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,4,t6,t7,C_SCHEME_FALSE,C_SCHEME_TRUE);
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

/* map-loop1954 in k9744 in k9740 in k9471 in k9460 in k9443 in k9430 in k9415 in k9400 in k9382 in k9376 in k9367 in k9359 in a9341 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in ... */
static void C_fcall f_9647(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_9647,5,t0,t1,t2,t3,t4);}
a=C_alloc(9);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9654,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=t3,a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_pairp(t2))){
t6=C_i_pairp(t3);
t7=t5;
f_9654(t7,(C_truep(t6)?C_i_pairp(t4):C_SCHEME_FALSE));}
else{
t6=t5;
f_9654(t6,C_SCHEME_FALSE);}}

/* k9652 in map-loop1954 in k9744 in k9740 in k9471 in k9460 in k9443 in k9430 in k9415 in k9400 in k9382 in k9376 in k9367 in k9359 in a9341 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in ... */
static void C_fcall f_9654(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,4)))){
C_save_and_reclaim_args((void *)trf_9654,2,t0,t1);}
a=C_alloc(12);
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(0));
t3=C_slot(((C_word*)t0)[3],C_fix(0));
t4=C_a_i_list(&a,1,t2);
t5=C_a_i_list(&a,2,t3,t4);
t6=C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t9=((C_word*)((C_word*)t0)[5])[1];
f_9647(t9,((C_word*)t0)[6],C_slot(((C_word*)t0)[2],C_fix(1)),C_slot(((C_word*)t0)[7],C_fix(1)),C_slot(((C_word*)t0)[3],C_fix(1)));}
else{
t2=((C_word*)t0)[6];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_slot(((C_word*)t0)[8],C_fix(1));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* g1846 in k9471 in k9460 in k9443 in k9430 in k9415 in k9400 in k9382 in k9376 in k9367 in k9359 in a9341 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in ... */
static C_word C_fcall f_9724(C_word *a,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;{}
t4=C_a_i_list(&a,4,t1,t2,C_SCHEME_TRUE,C_SCHEME_FALSE);
t5=C_a_i_list(&a,4,lf[34],((C_word*)t0)[2],t4,t2);
return(C_a_i_list(&a,2,t3,t5));}

/* k9740 in k9471 in k9460 in k9443 in k9430 in k9415 in k9400 in k9382 in k9376 in k9367 in k9359 in a9341 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in ... */
static void C_ccall f_9742(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(31,c,4)))){
C_save_and_reclaim((void *)f_9742,c,av);}
a=C_alloc(31);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9746,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9762,a[2]=t2,a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9836,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li92),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_9836(t11,t7,((C_word*)t0)[10],((C_word*)t0)[8]);}

/* k9744 in k9740 in k9471 in k9460 in k9443 in k9430 in k9415 in k9400 in k9382 in k9376 in k9367 in k9359 in a9341 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in ... */
static void C_ccall f_9746(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(46,c,5)))){
C_save_and_reclaim((void *)f_9746,c,av);}
a=C_alloc(46);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[35],t2);
t4=C_a_i_list(&a,3,lf[20],C_SCHEME_END_OF_LIST,t3);
t5=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[3]);
t6=C_a_i_cons(&a,2,lf[20],t5);
t7=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t8=t7;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=((C_word*)t9)[1];
t11=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9521,a[2]=t4,a[3]=t6,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9647,a[2]=t9,a[3]=t13,a[4]=t10,a[5]=((C_word)li90),tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_9647(t15,t11,((C_word*)t0)[11],((C_word*)t0)[9],((C_word*)t0)[10]);}

/* k9760 in k9740 in k9471 in k9460 in k9443 in k9430 in k9415 in k9400 in k9382 in k9376 in k9367 in k9359 in a9341 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in ... */
static void C_ccall f_9762(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,4)))){
C_save_and_reclaim((void *)f_9762,c,av);}
a=C_alloc(21);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9766,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9778,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9788,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li91),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_9788(t11,t7,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k9764 in k9760 in k9740 in k9471 in k9460 in k9443 in k9430 in k9415 in k9400 in k9382 in k9376 in k9367 in k9359 in a9341 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in ... */
static void C_ccall f_9766(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9766,c,av);}
/* chicken-syntax.scm:493: ##sys#append */
t2=*((C_word*)lf[53]+1);{
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

/* k9776 in k9760 in k9740 in k9471 in k9460 in k9443 in k9430 in k9415 in k9400 in k9382 in k9376 in k9367 in k9359 in a9341 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in ... */
static void C_ccall f_9778(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_9778,c,av);}
a=C_alloc(12);
t2=C_a_i_list(&a,3,lf[177],((C_word*)t0)[2],C_SCHEME_FALSE);
t3=C_a_i_list(&a,1,t2);
/* chicken-syntax.scm:493: ##sys#append */
t4=*((C_word*)lf[53]+1);{
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

/* map-loop1918 in k9760 in k9740 in k9471 in k9460 in k9443 in k9430 in k9415 in k9400 in k9382 in k9376 in k9367 in k9359 in a9341 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in ... */
static void C_fcall f_9788(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,0,3)))){
C_save_and_reclaim_args((void *)trf_9788,4,t0,t1,t2,t3);}
a=C_alloc(15);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,4,t6,t7,C_SCHEME_FALSE,C_SCHEME_TRUE);
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

/* map-loop1882 in k9740 in k9471 in k9460 in k9443 in k9430 in k9415 in k9400 in k9382 in k9376 in k9367 in k9359 in a9341 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in ... */
static void C_fcall f_9836(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,0,3)))){
C_save_and_reclaim_args((void *)trf_9836,4,t0,t1,t2,t3);}
a=C_alloc(15);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,1,t6);
t9=C_a_i_list(&a,3,lf[177],t7,t8);
t10=C_a_i_cons(&a,2,t9,C_SCHEME_END_OF_LIST);
t11=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t10);
t12=C_mutate(((C_word *)((C_word*)t0)[2])+1,t10);
t14=t1;
t15=C_slot(t2,C_fix(1));
t16=C_slot(t3,C_fix(1));
t1=t14;
t2=t15;
t3=t16;
goto loop;}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* map-loop1840 in k9471 in k9460 in k9443 in k9430 in k9415 in k9400 in k9382 in k9376 in k9367 in k9359 in a9341 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in ... */
static void C_fcall f_9884(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_9884,5,t0,t1,t2,t3,t4);}
a=C_alloc(10);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9891,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=t1,a[9]=((C_word*)t0)[5],tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_i_pairp(t2))){
t6=C_i_pairp(t3);
t7=t5;
f_9891(t7,(C_truep(t6)?C_i_pairp(t4):C_SCHEME_FALSE));}
else{
t6=t5;
f_9891(t6,C_SCHEME_FALSE);}}

/* k9889 in map-loop1840 in k9471 in k9460 in k9443 in k9430 in k9415 in k9400 in k9382 in k9376 in k9367 in k9359 in a9341 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in ... */
static void C_fcall f_9891(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,0,4)))){
C_save_and_reclaim_args((void *)trf_9891,2,t0,t1);}
a=C_alloc(33);
if(C_truep(t1)){
t2=(
/* chicken-syntax.scm:508: g1846 */
  f_9724(C_a_i(&a,30),((C_word*)t0)[2],C_slot(((C_word*)t0)[3],C_fix(0)),C_slot(((C_word*)t0)[4],C_fix(0)),C_slot(((C_word*)t0)[5],C_fix(0)))
);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t3);
t5=C_mutate(((C_word *)((C_word*)t0)[6])+1,t3);
t6=((C_word*)((C_word*)t0)[7])[1];
f_9884(t6,((C_word*)t0)[8],C_slot(((C_word*)t0)[3],C_fix(1)),C_slot(((C_word*)t0)[4],C_fix(1)),C_slot(((C_word*)t0)[5],C_fix(1)));}
else{
t2=((C_word*)t0)[8];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_slot(((C_word*)t0)[9],C_fix(1));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* map-loop1809 in k9460 in k9443 in k9430 in k9415 in k9400 in k9382 in k9376 in k9367 in k9359 in a9341 in k5589 in k5586 in k5583 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5561 in k5558 in ... */
static void C_fcall f_9954(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_9954,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,2,t6,t7);
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

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("chicken-syntax"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_chicken_2dsyntax_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(2779))){
C_save(t1);
C_rereclaim2(2779*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,282);
lf[0]=C_h_intern(&lf[0],14, C_text("chicken-syntax"));
lf[2]=C_h_intern(&lf[2],41, C_text("##sys#chicken.condition-macro-environment"));
lf[3]=C_h_intern(&lf[3],36, C_text("##sys#chicken.type-macro-environment"));
lf[4]=C_h_intern(&lf[4],38, C_text("##sys#chicken.syntax-macro-environment"));
lf[5]=C_h_intern(&lf[5],39, C_text("chicken.syntax#define-values-definition"));
lf[6]=C_h_intern(&lf[6],36, C_text("##sys#chicken.base-macro-environment"));
lf[7]=C_h_intern(&lf[7],36, C_text("##sys#chicken.time-macro-environment"));
lf[8]=C_h_intern(&lf[8],34, C_text("chicken.platform#register-feature!"));
lf[9]=C_h_intern(&lf[9],6, C_text("srfi-8"));
lf[10]=C_h_intern(&lf[10],7, C_text("srfi-11"));
lf[11]=C_h_intern(&lf[11],7, C_text("srfi-15"));
lf[12]=C_h_intern(&lf[12],7, C_text("srfi-16"));
lf[13]=C_h_intern(&lf[13],7, C_text("srfi-26"));
lf[14]=C_h_intern(&lf[14],7, C_text("srfi-31"));
lf[15]=C_h_intern(&lf[15],29, C_text("chicken.internal#macro-subset"));
lf[16]=C_h_intern(&lf[16],31, C_text("##sys#default-macro-environment"));
lf[17]=C_h_intern(&lf[17],30, C_text("##sys#extend-macro-environment"));
lf[18]=C_h_intern(&lf[18],4, C_text("time"));
lf[19]=C_h_intern(&lf[19],17, C_text("##sys#start-timer"));
lf[20]=C_h_intern(&lf[20],13, C_text("##core#lambda"));
lf[21]=C_h_intern(&lf[21],16, C_text("##sys#stop-timer"));
lf[22]=C_h_intern(&lf[22],19, C_text("##sys#display-times"));
lf[23]=C_h_intern(&lf[23],11, C_text("##sys#apply"));
lf[24]=C_h_intern(&lf[24],12, C_text("##sys#values"));
lf[25]=C_h_intern(&lf[25],22, C_text("##sys#call-with-values"));
lf[26]=C_h_intern(&lf[26],12, C_text("##core#begin"));
lf[27]=C_h_intern(&lf[27],1, C_text("t"));
lf[28]=C_h_intern(&lf[28],20, C_text("##sys#er-transformer"));
lf[29]=C_h_intern(&lf[29],23, C_text("##sys#macro-environment"));
lf[30]=C_h_intern(&lf[30],6, C_text("assert"));
lf[31]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020assertion failed"));
lf[32]=C_h_intern(&lf[32],12, C_text("##core#check"));
lf[33]=C_h_intern(&lf[33],11, C_text("##sys#error"));
lf[34]=C_h_intern(&lf[34],9, C_text("##core#if"));
lf[35]=C_h_intern(&lf[35],10, C_text("##core#let"));
lf[36]=C_h_intern(&lf[36],12, C_text("##core#quote"));
lf[37]=C_h_intern(&lf[37],27, C_text("chicken.syntax#strip-syntax"));
lf[38]=C_h_intern(&lf[38],20, C_text("scheme#string-append"));
lf[39]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001("));
lf[40]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002) "));
lf[41]=C_h_intern(&lf[41],30, C_text("chicken.syntax#get-line-number"));
lf[42]=C_h_intern(&lf[42],3, C_text("tmp"));
lf[43]=C_h_intern(&lf[43],18, C_text("##sys#check-syntax"));
lf[44]=C_decode_literal(C_heaptop,C_text("\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\001"));
lf[45]=C_h_intern(&lf[45],17, C_text("require-extension"));
lf[46]=C_h_intern(&lf[46],6, C_text("import"));
lf[47]=C_h_intern(&lf[47],3, C_text("rec"));
lf[48]=C_h_intern(&lf[48],14, C_text("##core#letrec\052"));
lf[49]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\001\000\000\001\001_"));
lf[50]=C_h_intern(&lf[50],5, C_text("apply"));
lf[51]=C_h_intern(&lf[51],12, C_text("scheme#apply"));
lf[52]=C_h_intern(&lf[52],4, C_text("cute"));
lf[53]=C_h_intern(&lf[53],12, C_text("##sys#append"));
lf[54]=C_h_intern(&lf[54],19, C_text("chicken.base#gensym"));
lf[55]=C_h_intern(&lf[55],14, C_text("scheme#reverse"));
lf[56]=C_h_intern(&lf[56],27, C_text("chicken.syntax#syntax-error"));
lf[57]=C_decode_literal(C_heaptop,C_text("\376B\000\000+tail patterns after <...> are not supported"));
lf[58]=C_decode_literal(C_heaptop,C_text("\376B\000\000\047you need to supply at least a procedure"));
lf[59]=C_h_intern(&lf[59],5, C_text("<...>"));
lf[60]=C_h_intern(&lf[60],2, C_text("<>"));
lf[61]=C_h_intern(&lf[61],3, C_text("cut"));
lf[62]=C_decode_literal(C_heaptop,C_text("\376B\000\000+tail patterns after <...> are not supported"));
lf[63]=C_decode_literal(C_heaptop,C_text("\376B\000\000\047you need to supply at least a procedure"));
lf[64]=C_h_intern(&lf[64],18, C_text("define-record-type"));
lf[65]=C_h_intern(&lf[65],3, C_text("map"));
lf[66]=C_decode_literal(C_heaptop,C_text("\376B\000\000+unknown slot name in constructor definition"));
lf[67]=C_h_intern(&lf[67],8, C_text("for-each"));
lf[68]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001##core#undefined\376\377\016"));
lf[69]=C_h_intern(&lf[69],20, C_text("##sys#make-structure"));
lf[70]=C_h_intern(&lf[70],16, C_text("##sys#structure\077"));
lf[71]=C_h_intern(&lf[71],21, C_text("##sys#check-structure"));
lf[72]=C_h_intern(&lf[72],15, C_text("##sys#block-ref"));
lf[73]=C_h_intern(&lf[73],12, C_text("##sys#setter"));
lf[74]=C_h_intern(&lf[74],16, C_text("##sys#block-set!"));
lf[75]=C_h_intern(&lf[75],6, C_text("setter"));
lf[76]=C_h_intern(&lf[76],1, C_text("y"));
lf[77]=C_h_intern(&lf[77],1, C_text("x"));
lf[78]=C_h_intern(&lf[78],31, C_text("chicken.base#getter-with-setter"));
lf[79]=C_h_intern(&lf[79],6, C_text("define"));
lf[80]=C_h_intern(&lf[80],26, C_text("chicken.base#symbol-append"));
lf[81]=C_h_intern(&lf[81],1, C_text("#"));
lf[82]=C_h_intern(&lf[82],17, C_text("##sys#module-name"));
lf[83]=C_h_intern(&lf[83],20, C_text("##sys#current-module"));
lf[84]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\010\001variable\376\003\000\000\002\376\000\000\000\002\376\001\000\000\010\001variable\376\377\001\000\000\000\001\376\003\000\000\002\376\001\000\000\010\001variabl"
"e\376\001\000\000\001\001_"));
lf[85]=C_h_intern(&lf[85],21, C_text("define-record-printer"));
lf[86]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001variable\376\003\000\000\002\376\001\000\000\010\001variable\376\003\000\000\002\376\001\000\000\010\001variable\376\377\016\376\000\000\000\002\376\001\000\000\001\001_\376\377\001"
"\000\000\000\001"));
lf[87]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\010\001variable\376\003\000\000\002\376\001\000\000\001\001_\376\377\016"));
lf[88]=C_h_intern(&lf[88],32, C_text("chicken.base#set-record-printer!"));
lf[89]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\001\000\000\001\001_"));
lf[90]=C_h_intern(&lf[90],2, C_text(">="));
lf[91]=C_h_intern(&lf[91],9, C_text("scheme#>="));
lf[92]=C_h_intern(&lf[92],3, C_text("car"));
lf[93]=C_h_intern(&lf[93],10, C_text("scheme#car"));
lf[94]=C_h_intern(&lf[94],3, C_text("cdr"));
lf[95]=C_h_intern(&lf[95],10, C_text("scheme#cdr"));
lf[96]=C_h_intern(&lf[96],3, C_text("eq\077"));
lf[97]=C_h_intern(&lf[97],10, C_text("scheme#eq\077"));
lf[98]=C_h_intern(&lf[98],6, C_text("length"));
lf[99]=C_h_intern(&lf[99],13, C_text("scheme#length"));
lf[100]=C_h_intern(&lf[100],11, C_text("case-lambda"));
lf[101]=C_h_intern(&lf[101],5, C_text("foldr"));
lf[102]=C_h_intern(&lf[102],11, C_text("lambda-list"));
lf[103]=C_h_intern(&lf[103],27, C_text("##sys#decompose-lambda-list"));
lf[104]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\014\001##core#check\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001##sys#error\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001##core#immutab"
"le\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001##core#quote\376\003\000\000\002\376B\000\0000no matching clause in call to \047case-lamb"
"da\047 form\376\377\016\376\377\016\376\377\016\376\377\016"));
lf[105]=C_h_intern(&lf[105],13, C_text("scheme#append"));
lf[106]=C_h_intern(&lf[106],4, C_text("lvar"));
lf[107]=C_h_intern(&lf[107],4, C_text("rvar"));
lf[108]=C_h_intern(&lf[108],10, C_text("scheme#min"));
lf[109]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\001\000\000\001\001_"));
lf[110]=C_h_intern(&lf[110],5, C_text("null\077"));
lf[111]=C_h_intern(&lf[111],12, C_text("scheme#null\077"));
lf[112]=C_h_intern(&lf[112],14, C_text("let-optionals\052"));
lf[113]=C_h_intern(&lf[113],4, C_text("tmp2"));
lf[114]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\004\001list\376\001\000\000\001\001_"));
lf[115]=C_h_intern(&lf[115],8, C_text("optional"));
lf[116]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\003\376\001\000\000\001\001_\376\377\001\000\000\000\000\376\377\001\000\000\000\001"));
lf[117]=C_h_intern(&lf[117],13, C_text("let-optionals"));
lf[118]=C_h_intern(&lf[118],21, C_text("scheme#string->symbol"));
lf[119]=C_h_intern(&lf[119],21, C_text("scheme#symbol->string"));
lf[120]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001%"));
lf[121]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004def-"));
lf[122]=C_h_intern(&lf[122],4, C_text("let\052"));
lf[123]=C_h_intern(&lf[123],6, C_text("_%rest"));
lf[124]=C_h_intern(&lf[124],4, C_text("body"));
lf[125]=C_decode_literal(C_heaptop,C_text("\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\001"));
lf[126]=C_decode_literal(C_heaptop,C_text("\376\000\000\000\002\376\003\000\000\002\376\001\000\000\010\001variable\376\003\000\000\002\376\001\000\000\001\001_\376\377\016\376\377\001\000\000\000\000"));
lf[127]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\001\000\000\001\001_"));
lf[128]=C_h_intern(&lf[128],8, C_text("and-let\052"));
lf[129]=C_h_intern(&lf[129],8, C_text("variable"));
lf[130]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\010\001variable\376\003\000\000\002\376\001\000\000\001\001_\376\377\016"));
lf[131]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\000\376\001\000\000\001\001_"));
lf[132]=C_h_intern(&lf[132],13, C_text("define-inline"));
lf[133]=C_decode_literal(C_heaptop,C_text("\376B\000\000\052invalid substitution form - must be lambda"));
lf[134]=C_h_intern(&lf[134],6, C_text("lambda"));
lf[135]=C_decode_literal(C_heaptop,C_text("\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\001"));
lf[136]=C_h_intern(&lf[136],20, C_text("##core#define-inline"));
lf[137]=C_h_intern(&lf[137],8, C_text("list-ref"));
lf[138]=C_h_intern(&lf[138],15, C_text("scheme#list-ref"));
lf[139]=C_h_intern(&lf[139],9, C_text("nth-value"));
lf[140]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\377\016"));
lf[141]=C_h_intern(&lf[141],7, C_text("letrec\052"));
lf[142]=C_h_intern(&lf[142],44, C_text("chicken.internal#check-for-multiple-bindings"));
lf[143]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007letrec\052"));
lf[144]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\010\001variable\376\003\000\000\002\376\001\000\000\001\001_\376\377\016\376\377\001\000\000\000\000\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000"
"\000\001"));
lf[145]=C_h_intern(&lf[145],13, C_text("letrec-values"));
lf[146]=C_h_intern(&lf[146],5, C_text("foldl"));
lf[147]=C_h_intern(&lf[147],39, C_text("##sys#expand-multiple-values-assignment"));
lf[148]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001##core#undefined\376\377\016"));
lf[149]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\013\001lambda-list\376\001\000\000\001\001_\376\377\001\000\000\000\000\376\001\000\000\001\001_"));
lf[150]=C_h_intern(&lf[150],11, C_text("let\052-values"));
lf[151]=C_h_intern(&lf[151],10, C_text("let-values"));
lf[152]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\004\001list\376\001\000\000\001\001_"));
lf[153]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\004\001list\376\001\000\000\001\001_"));
lf[154]=C_h_intern(&lf[154],13, C_text("define-values"));
lf[155]=C_h_intern(&lf[155],33, C_text("##core#ensure-toplevel-definition"));
lf[156]=C_h_intern(&lf[156],21, C_text("##sys#register-export"));
lf[157]=C_h_intern(&lf[157],9, C_text("##sys#get"));
lf[158]=C_h_intern(&lf[158],18, C_text("##core#macro-alias"));
lf[159]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\013\001lambda-list\376\003\000\000\002\376\001\000\000\001\001_\376\377\016"));
lf[160]=C_h_intern(&lf[160],11, C_text("set!-values"));
lf[161]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\013\001lambda-list\376\003\000\000\002\376\001\000\000\001\001_\376\377\016"));
lf[162]=C_h_intern(&lf[162],6, C_text("unless"));
lf[163]=C_h_intern(&lf[163],16, C_text("##core#undefined"));
lf[164]=C_decode_literal(C_heaptop,C_text("\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\002"));
lf[165]=C_h_intern(&lf[165],4, C_text("when"));
lf[166]=C_decode_literal(C_heaptop,C_text("\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\002"));
lf[167]=C_h_intern(&lf[167],15, C_text("require-library"));
lf[168]=C_h_intern(&lf[168],22, C_text("##sys#decompose-import"));
lf[169]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001##core#undefined\376\377\016"));
lf[170]=C_h_intern(&lf[170],14, C_text("##core#require"));
lf[171]=C_h_intern(&lf[171],12, C_text("parameterize"));
lf[172]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011parameter"));
lf[173]=C_h_intern(&lf[173],5, C_text("saved"));
lf[174]=C_h_intern(&lf[174],10, C_text("##core#the"));
lf[175]=C_h_intern(&lf[175],7, C_text("boolean"));
lf[176]=C_h_intern(&lf[176],18, C_text("##sys#dynamic-wind"));
lf[177]=C_h_intern(&lf[177],11, C_text("##core#set!"));
lf[178]=C_h_intern(&lf[178],8, C_text("convert\077"));
lf[179]=C_decode_literal(C_heaptop,C_text("\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\002"));
lf[180]=C_h_intern(&lf[180],9, C_text("fluid-let"));
lf[181]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\010\001variable\376\003\000\000\002\376\001\000\000\001\001_\376\377\016\376\377\001\000\000\000\000\376\001\000\000\001\001_"));
lf[182]=C_h_intern(&lf[182],16, C_text("include-relative"));
lf[183]=C_h_intern(&lf[183],14, C_text("##core#include"));
lf[184]=C_h_intern(&lf[184],29, C_text("##sys#current-source-filename"));
lf[185]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\006\001string\376\377\016"));
lf[186]=C_h_intern(&lf[186],7, C_text("include"));
lf[187]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\006\001string\376\377\016"));
lf[188]=C_h_intern(&lf[188],11, C_text("delay-force"));
lf[189]=C_h_intern(&lf[189],18, C_text("##sys#make-promise"));
lf[190]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\377\016"));
lf[191]=C_h_intern(&lf[191],7, C_text("declare"));
lf[192]=C_h_intern(&lf[192],14, C_text("##core#declare"));
lf[193]=C_h_intern(&lf[193],7, C_text("receive"));
lf[194]=C_h_intern(&lf[194],10, C_text("##sys#list"));
lf[195]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\013\001lambda-list\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\001"));
lf[196]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\000"));
lf[197]=C_h_intern(&lf[197],13, C_text("define-record"));
lf[198]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032invalid slot specification"));
lf[199]=C_h_intern(&lf[199],3, C_text("val"));
lf[200]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001-"));
lf[201]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001-"));
lf[202]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005-set!"));
lf[203]=C_h_intern(&lf[203],19, C_text("##sys#string-append"));
lf[204]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\077"));
lf[205]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005make-"));
lf[206]=C_h_intern(&lf[206],19, C_text("chicken.base#setter"));
lf[207]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\010\001variable\376\001\000\000\001\001_"));
lf[208]=C_h_intern(&lf[208],15, C_text("define-constant"));
lf[209]=C_h_intern(&lf[209],22, C_text("##core#define-constant"));
lf[210]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\010\001variable\376\003\000\000\002\376\001\000\000\001\001_\376\377\016"));
lf[211]=C_h_intern(&lf[211],19, C_text("let-compiler-syntax"));
lf[212]=C_h_intern(&lf[212],26, C_text("##core#let-compiler-syntax"));
lf[213]=C_h_intern(&lf[213],51, C_text("chicken.internal.syntax-rules#syntax-rules-mismatch"));
lf[214]=C_h_intern(&lf[214],7, C_text("##sys#+"));
lf[215]=C_h_intern(&lf[215],7, C_text("##sys#="));
lf[216]=C_h_intern(&lf[216],8, C_text("##sys#>="));
lf[217]=C_h_intern(&lf[217],12, C_text("##sys#length"));
lf[218]=C_h_intern(&lf[218],11, C_text("##sys#list\077"));
lf[219]=C_h_intern(&lf[219],22, C_text("define-compiler-syntax"));
lf[220]=C_h_intern(&lf[220],29, C_text("##core#define-compiler-syntax"));
lf[221]=C_h_intern(&lf[221],17, C_text("define-for-syntax"));
lf[222]=C_h_intern(&lf[222],16, C_text("begin-for-syntax"));
lf[223]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\001\000\000\001\001_"));
lf[224]=C_h_intern(&lf[224],26, C_text("##core#elaborationtimeonly"));
lf[225]=C_h_intern(&lf[225],30, C_text("##sys#register-meta-expression"));
lf[226]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\000"));
lf[227]=C_h_intern(&lf[227],6, C_text("syntax"));
lf[228]=C_h_intern(&lf[228],13, C_text("##core#syntax"));
lf[229]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\377\016"));
lf[230]=C_h_intern(&lf[230],11, C_text("define-type"));
lf[231]=C_h_intern_kw(&lf[231],9, C_text("compiling"));
lf[232]=C_h_intern(&lf[232],14, C_text("##sys#features"));
lf[233]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001##core#undefined\376\377\016"));
lf[234]=C_h_intern(&lf[234],28, C_text("##compiler#type-abbreviation"));
lf[235]=C_h_intern(&lf[235],18, C_text("##sys#put/restore!"));
lf[236]=C_h_intern(&lf[236],52, C_text("chicken.compiler.scrutinizer#check-and-validate-type"));
lf[237]=C_h_intern(&lf[237],5, C_text("quote"));
lf[238]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\010\001variable\376\003\000\000\002\376\001\000\000\001\001_\376\377\016"));
lf[239]=C_h_intern(&lf[239],17, C_text("compiler-typecase"));
lf[240]=C_h_intern(&lf[240],4, C_text("else"));
lf[241]=C_h_intern(&lf[241],15, C_text("##core#typecase"));
lf[242]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\002\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\001\376\377\001\000\000\000\001"));
lf[243]=C_h_intern(&lf[243],21, C_text("define-specialization"));
lf[244]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001##core#undefined\376\377\016"));
lf[245]=C_h_intern(&lf[245],27, C_text("##core#local-specialization"));
lf[246]=C_h_intern(&lf[246],6, C_text("inline"));
lf[247]=C_h_intern(&lf[247],4, C_text("hide"));
lf[248]=C_h_intern(&lf[248],1, C_text("\052"));
lf[249]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027invalid argument syntax"));
lf[250]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001variable\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\000\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\003\376\001\000\000\001\001_\376"
"\377\001\000\000\000\000\376\377\001\000\000\000\001"));
lf[251]=C_h_intern(&lf[251],6, C_text("assume"));
lf[252]=C_h_intern(&lf[252],3, C_text("the"));
lf[253]=C_h_intern(&lf[253],11, C_text("##sys#map-n"));
lf[254]=C_h_intern(&lf[254],3, C_text("let"));
lf[255]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\377\016"));
lf[256]=C_h_intern(&lf[256],1, C_text(":"));
lf[257]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001##core#undefined\376\377\016"));
lf[258]=C_h_intern(&lf[258],42, C_text("chicken.compiler.scrutinizer#validate-type"));
lf[259]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023invalid type syntax"));
lf[260]=C_h_intern(&lf[260],4, C_text("type"));
lf[261]=C_h_intern(&lf[261],9, C_text("predicate"));
lf[262]=C_h_intern(&lf[262],4, C_text("pure"));
lf[263]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\006\001symbol\376\003\000\000\002\376\001\000\000\001\001_\376\001\000\000\001\001_"));
lf[264]=C_h_intern(&lf[264],4, C_text("memv"));
lf[265]=C_h_intern(&lf[265],11, C_text("scheme#memv"));
lf[266]=C_h_intern(&lf[266],14, C_text("condition-case"));
lf[267]=C_h_intern(&lf[267],9, C_text("condition"));
lf[268]=C_h_intern(&lf[268],10, C_text("##sys#slot"));
lf[269]=C_h_intern(&lf[269],24, C_text("chicken.condition#signal"));
lf[270]=C_h_intern(&lf[270],4, C_text("cond"));
lf[271]=C_h_intern(&lf[271],17, C_text("handle-exceptions"));
lf[272]=C_h_intern(&lf[272],3, C_text("and"));
lf[273]=C_h_intern(&lf[273],4, C_text("kvar"));
lf[274]=C_h_intern(&lf[274],5, C_text("exvar"));
lf[275]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\001\000\000\001\001_"));
lf[276]=C_h_intern(&lf[276],30, C_text("call-with-current-continuation"));
lf[277]=C_h_intern(&lf[277],37, C_text("scheme#call-with-current-continuation"));
lf[278]=C_h_intern(&lf[278],40, C_text("chicken.condition#with-exception-handler"));
lf[279]=C_h_intern(&lf[279],4, C_text("args"));
lf[280]=C_h_intern(&lf[280],1, C_text("k"));
lf[281]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\010\001variable\376\003\000\000\002\376\001\000\000\001\001_\376\001\000\000\001\001_"));
C_register_lf2(lf,282,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4219,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_expand_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[657] = {
{C_text("f_10002:chicken_2dsyntax_2escm"),(void*)f_10002},
{C_text("f_10050:chicken_2dsyntax_2escm"),(void*)f_10050},
{C_text("f_10098:chicken_2dsyntax_2escm"),(void*)f_10098},
{C_text("f_10123:chicken_2dsyntax_2escm"),(void*)f_10123},
{C_text("f_10132:chicken_2dsyntax_2escm"),(void*)f_10132},
{C_text("f_10157:chicken_2dsyntax_2escm"),(void*)f_10157},
{C_text("f_10166:chicken_2dsyntax_2escm"),(void*)f_10166},
{C_text("f_10191:chicken_2dsyntax_2escm"),(void*)f_10191},
{C_text("f_10200:chicken_2dsyntax_2escm"),(void*)f_10200},
{C_text("f_10234:chicken_2dsyntax_2escm"),(void*)f_10234},
{C_text("f_10270:chicken_2dsyntax_2escm"),(void*)f_10270},
{C_text("f_10272:chicken_2dsyntax_2escm"),(void*)f_10272},
{C_text("f_10276:chicken_2dsyntax_2escm"),(void*)f_10276},
{C_text("f_10290:chicken_2dsyntax_2escm"),(void*)f_10290},
{C_text("f_10294:chicken_2dsyntax_2escm"),(void*)f_10294},
{C_text("f_10302:chicken_2dsyntax_2escm"),(void*)f_10302},
{C_text("f_10305:chicken_2dsyntax_2escm"),(void*)f_10305},
{C_text("f_10309:chicken_2dsyntax_2escm"),(void*)f_10309},
{C_text("f_10317:chicken_2dsyntax_2escm"),(void*)f_10317},
{C_text("f_10320:chicken_2dsyntax_2escm"),(void*)f_10320},
{C_text("f_10327:chicken_2dsyntax_2escm"),(void*)f_10327},
{C_text("f_10351:chicken_2dsyntax_2escm"),(void*)f_10351},
{C_text("f_10363:chicken_2dsyntax_2escm"),(void*)f_10363},
{C_text("f_10367:chicken_2dsyntax_2escm"),(void*)f_10367},
{C_text("f_10379:chicken_2dsyntax_2escm"),(void*)f_10379},
{C_text("f_10389:chicken_2dsyntax_2escm"),(void*)f_10389},
{C_text("f_10437:chicken_2dsyntax_2escm"),(void*)f_10437},
{C_text("f_10495:chicken_2dsyntax_2escm"),(void*)f_10495},
{C_text("f_10510:chicken_2dsyntax_2escm"),(void*)f_10510},
{C_text("f_10514:chicken_2dsyntax_2escm"),(void*)f_10514},
{C_text("f_10526:chicken_2dsyntax_2escm"),(void*)f_10526},
{C_text("f_10536:chicken_2dsyntax_2escm"),(void*)f_10536},
{C_text("f_10584:chicken_2dsyntax_2escm"),(void*)f_10584},
{C_text("f_10640:chicken_2dsyntax_2escm"),(void*)f_10640},
{C_text("f_10649:chicken_2dsyntax_2escm"),(void*)f_10649},
{C_text("f_10656:chicken_2dsyntax_2escm"),(void*)f_10656},
{C_text("f_10665:chicken_2dsyntax_2escm"),(void*)f_10665},
{C_text("f_10667:chicken_2dsyntax_2escm"),(void*)f_10667},
{C_text("f_10717:chicken_2dsyntax_2escm"),(void*)f_10717},
{C_text("f_10731:chicken_2dsyntax_2escm"),(void*)f_10731},
{C_text("f_10737:chicken_2dsyntax_2escm"),(void*)f_10737},
{C_text("f_10785:chicken_2dsyntax_2escm"),(void*)f_10785},
{C_text("f_10819:chicken_2dsyntax_2escm"),(void*)f_10819},
{C_text("f_10844:chicken_2dsyntax_2escm"),(void*)f_10844},
{C_text("f_10853:chicken_2dsyntax_2escm"),(void*)f_10853},
{C_text("f_10878:chicken_2dsyntax_2escm"),(void*)f_10878},
{C_text("f_10887:chicken_2dsyntax_2escm"),(void*)f_10887},
{C_text("f_10923:chicken_2dsyntax_2escm"),(void*)f_10923},
{C_text("f_10925:chicken_2dsyntax_2escm"),(void*)f_10925},
{C_text("f_10929:chicken_2dsyntax_2escm"),(void*)f_10929},
{C_text("f_10940:chicken_2dsyntax_2escm"),(void*)f_10940},
{C_text("f_10942:chicken_2dsyntax_2escm"),(void*)f_10942},
{C_text("f_10946:chicken_2dsyntax_2escm"),(void*)f_10946},
{C_text("f_10957:chicken_2dsyntax_2escm"),(void*)f_10957},
{C_text("f_10959:chicken_2dsyntax_2escm"),(void*)f_10959},
{C_text("f_10963:chicken_2dsyntax_2escm"),(void*)f_10963},
{C_text("f_10978:chicken_2dsyntax_2escm"),(void*)f_10978},
{C_text("f_10980:chicken_2dsyntax_2escm"),(void*)f_10980},
{C_text("f_10992:chicken_2dsyntax_2escm"),(void*)f_10992},
{C_text("f_10994:chicken_2dsyntax_2escm"),(void*)f_10994},
{C_text("f_10998:chicken_2dsyntax_2escm"),(void*)f_10998},
{C_text("f_11020:chicken_2dsyntax_2escm"),(void*)f_11020},
{C_text("f_11085:chicken_2dsyntax_2escm"),(void*)f_11085},
{C_text("f_11087:chicken_2dsyntax_2escm"),(void*)f_11087},
{C_text("f_11091:chicken_2dsyntax_2escm"),(void*)f_11091},
{C_text("f_11097:chicken_2dsyntax_2escm"),(void*)f_11097},
{C_text("f_11100:chicken_2dsyntax_2escm"),(void*)f_11100},
{C_text("f_11103:chicken_2dsyntax_2escm"),(void*)f_11103},
{C_text("f_11109:chicken_2dsyntax_2escm"),(void*)f_11109},
{C_text("f_11112:chicken_2dsyntax_2escm"),(void*)f_11112},
{C_text("f_11115:chicken_2dsyntax_2escm"),(void*)f_11115},
{C_text("f_11119:chicken_2dsyntax_2escm"),(void*)f_11119},
{C_text("f_11132:chicken_2dsyntax_2escm"),(void*)f_11132},
{C_text("f_11147:chicken_2dsyntax_2escm"),(void*)f_11147},
{C_text("f_11179:chicken_2dsyntax_2escm"),(void*)f_11179},
{C_text("f_11210:chicken_2dsyntax_2escm"),(void*)f_11210},
{C_text("f_11212:chicken_2dsyntax_2escm"),(void*)f_11212},
{C_text("f_11228:chicken_2dsyntax_2escm"),(void*)f_11228},
{C_text("f_11231:chicken_2dsyntax_2escm"),(void*)f_11231},
{C_text("f_11234:chicken_2dsyntax_2escm"),(void*)f_11234},
{C_text("f_11248:chicken_2dsyntax_2escm"),(void*)f_11248},
{C_text("f_11260:chicken_2dsyntax_2escm"),(void*)f_11260},
{C_text("f_11264:chicken_2dsyntax_2escm"),(void*)f_11264},
{C_text("f_11357:chicken_2dsyntax_2escm"),(void*)f_11357},
{C_text("f_11361:chicken_2dsyntax_2escm"),(void*)f_11361},
{C_text("f_11376:chicken_2dsyntax_2escm"),(void*)f_11376},
{C_text("f_11396:chicken_2dsyntax_2escm"),(void*)f_11396},
{C_text("f_11402:chicken_2dsyntax_2escm"),(void*)f_11402},
{C_text("f_11422:chicken_2dsyntax_2escm"),(void*)f_11422},
{C_text("f_11430:chicken_2dsyntax_2escm"),(void*)f_11430},
{C_text("f_11455:chicken_2dsyntax_2escm"),(void*)f_11455},
{C_text("f_11465:chicken_2dsyntax_2escm"),(void*)f_11465},
{C_text("f_11472:chicken_2dsyntax_2escm"),(void*)f_11472},
{C_text("f_11476:chicken_2dsyntax_2escm"),(void*)f_11476},
{C_text("f_11480:chicken_2dsyntax_2escm"),(void*)f_11480},
{C_text("f_11482:chicken_2dsyntax_2escm"),(void*)f_11482},
{C_text("f_11486:chicken_2dsyntax_2escm"),(void*)f_11486},
{C_text("f_11497:chicken_2dsyntax_2escm"),(void*)f_11497},
{C_text("f_11499:chicken_2dsyntax_2escm"),(void*)f_11499},
{C_text("f_11509:chicken_2dsyntax_2escm"),(void*)f_11509},
{C_text("f_11522:chicken_2dsyntax_2escm"),(void*)f_11522},
{C_text("f_11538:chicken_2dsyntax_2escm"),(void*)f_11538},
{C_text("f_11544:chicken_2dsyntax_2escm"),(void*)f_11544},
{C_text("f_11547:chicken_2dsyntax_2escm"),(void*)f_11547},
{C_text("f_11553:chicken_2dsyntax_2escm"),(void*)f_11553},
{C_text("f_11562:chicken_2dsyntax_2escm"),(void*)f_11562},
{C_text("f_11569:chicken_2dsyntax_2escm"),(void*)f_11569},
{C_text("f_11583:chicken_2dsyntax_2escm"),(void*)f_11583},
{C_text("f_11594:chicken_2dsyntax_2escm"),(void*)f_11594},
{C_text("f_11597:chicken_2dsyntax_2escm"),(void*)f_11597},
{C_text("f_11603:chicken_2dsyntax_2escm"),(void*)f_11603},
{C_text("f_11612:chicken_2dsyntax_2escm"),(void*)f_11612},
{C_text("f_11619:chicken_2dsyntax_2escm"),(void*)f_11619},
{C_text("f_11633:chicken_2dsyntax_2escm"),(void*)f_11633},
{C_text("f_11645:chicken_2dsyntax_2escm"),(void*)f_11645},
{C_text("f_11647:chicken_2dsyntax_2escm"),(void*)f_11647},
{C_text("f_11667:chicken_2dsyntax_2escm"),(void*)f_11667},
{C_text("f_11681:chicken_2dsyntax_2escm"),(void*)f_11681},
{C_text("f_11694:chicken_2dsyntax_2escm"),(void*)f_11694},
{C_text("f_11742:chicken_2dsyntax_2escm"),(void*)f_11742},
{C_text("f_11744:chicken_2dsyntax_2escm"),(void*)f_11744},
{C_text("f_11748:chicken_2dsyntax_2escm"),(void*)f_11748},
{C_text("f_11755:chicken_2dsyntax_2escm"),(void*)f_11755},
{C_text("f_11763:chicken_2dsyntax_2escm"),(void*)f_11763},
{C_text("f_11771:chicken_2dsyntax_2escm"),(void*)f_11771},
{C_text("f_11773:chicken_2dsyntax_2escm"),(void*)f_11773},
{C_text("f_11777:chicken_2dsyntax_2escm"),(void*)f_11777},
{C_text("f_11780:chicken_2dsyntax_2escm"),(void*)f_11780},
{C_text("f_11801:chicken_2dsyntax_2escm"),(void*)f_11801},
{C_text("f_11803:chicken_2dsyntax_2escm"),(void*)f_11803},
{C_text("f_11807:chicken_2dsyntax_2escm"),(void*)f_11807},
{C_text("f_11818:chicken_2dsyntax_2escm"),(void*)f_11818},
{C_text("f_11820:chicken_2dsyntax_2escm"),(void*)f_11820},
{C_text("f_11824:chicken_2dsyntax_2escm"),(void*)f_11824},
{C_text("f_11833:chicken_2dsyntax_2escm"),(void*)f_11833},
{C_text("f_11836:chicken_2dsyntax_2escm"),(void*)f_11836},
{C_text("f_11839:chicken_2dsyntax_2escm"),(void*)f_11839},
{C_text("f_11862:chicken_2dsyntax_2escm"),(void*)f_11862},
{C_text("f_11878:chicken_2dsyntax_2escm"),(void*)f_11878},
{C_text("f_11880:chicken_2dsyntax_2escm"),(void*)f_11880},
{C_text("f_11884:chicken_2dsyntax_2escm"),(void*)f_11884},
{C_text("f_11890:chicken_2dsyntax_2escm"),(void*)f_11890},
{C_text("f_11893:chicken_2dsyntax_2escm"),(void*)f_11893},
{C_text("f_11917:chicken_2dsyntax_2escm"),(void*)f_11917},
{C_text("f_11921:chicken_2dsyntax_2escm"),(void*)f_11921},
{C_text("f_11928:chicken_2dsyntax_2escm"),(void*)f_11928},
{C_text("f_11955:chicken_2dsyntax_2escm"),(void*)f_11955},
{C_text("f_11957:chicken_2dsyntax_2escm"),(void*)f_11957},
{C_text("f_11982:chicken_2dsyntax_2escm"),(void*)f_11982},
{C_text("f_12001:chicken_2dsyntax_2escm"),(void*)f_12001},
{C_text("f_12003:chicken_2dsyntax_2escm"),(void*)f_12003},
{C_text("f_12013:chicken_2dsyntax_2escm"),(void*)f_12013},
{C_text("f_12023:chicken_2dsyntax_2escm"),(void*)f_12023},
{C_text("f_12026:chicken_2dsyntax_2escm"),(void*)f_12026},
{C_text("f_12029:chicken_2dsyntax_2escm"),(void*)f_12029},
{C_text("f_12037:chicken_2dsyntax_2escm"),(void*)f_12037},
{C_text("f_12047:chicken_2dsyntax_2escm"),(void*)f_12047},
{C_text("f_12050:chicken_2dsyntax_2escm"),(void*)f_12050},
{C_text("f_12092:chicken_2dsyntax_2escm"),(void*)f_12092},
{C_text("f_12094:chicken_2dsyntax_2escm"),(void*)f_12094},
{C_text("f_12156:chicken_2dsyntax_2escm"),(void*)f_12156},
{C_text("f_12177:chicken_2dsyntax_2escm"),(void*)f_12177},
{C_text("f_12179:chicken_2dsyntax_2escm"),(void*)f_12179},
{C_text("f_12204:chicken_2dsyntax_2escm"),(void*)f_12204},
{C_text("f_12221:chicken_2dsyntax_2escm"),(void*)f_12221},
{C_text("f_12223:chicken_2dsyntax_2escm"),(void*)f_12223},
{C_text("f_12241:chicken_2dsyntax_2escm"),(void*)f_12241},
{C_text("f_12277:chicken_2dsyntax_2escm"),(void*)f_12277},
{C_text("f_12294:chicken_2dsyntax_2escm"),(void*)f_12294},
{C_text("f_12351:chicken_2dsyntax_2escm"),(void*)f_12351},
{C_text("f_12353:chicken_2dsyntax_2escm"),(void*)f_12353},
{C_text("f_12363:chicken_2dsyntax_2escm"),(void*)f_12363},
{C_text("f_12380:chicken_2dsyntax_2escm"),(void*)f_12380},
{C_text("f_12401:chicken_2dsyntax_2escm"),(void*)f_12401},
{C_text("f_12411:chicken_2dsyntax_2escm"),(void*)f_12411},
{C_text("f_12419:chicken_2dsyntax_2escm"),(void*)f_12419},
{C_text("f_12421:chicken_2dsyntax_2escm"),(void*)f_12421},
{C_text("f_12437:chicken_2dsyntax_2escm"),(void*)f_12437},
{C_text("f_12447:chicken_2dsyntax_2escm"),(void*)f_12447},
{C_text("f_12481:chicken_2dsyntax_2escm"),(void*)f_12481},
{C_text("f_12525:chicken_2dsyntax_2escm"),(void*)f_12525},
{C_text("f_12531:chicken_2dsyntax_2escm"),(void*)f_12531},
{C_text("f_12534:chicken_2dsyntax_2escm"),(void*)f_12534},
{C_text("f_12540:chicken_2dsyntax_2escm"),(void*)f_12540},
{C_text("f_12549:chicken_2dsyntax_2escm"),(void*)f_12549},
{C_text("f_12556:chicken_2dsyntax_2escm"),(void*)f_12556},
{C_text("f_12570:chicken_2dsyntax_2escm"),(void*)f_12570},
{C_text("f_12581:chicken_2dsyntax_2escm"),(void*)f_12581},
{C_text("f_12584:chicken_2dsyntax_2escm"),(void*)f_12584},
{C_text("f_12590:chicken_2dsyntax_2escm"),(void*)f_12590},
{C_text("f_12599:chicken_2dsyntax_2escm"),(void*)f_12599},
{C_text("f_12606:chicken_2dsyntax_2escm"),(void*)f_12606},
{C_text("f_12618:chicken_2dsyntax_2escm"),(void*)f_12618},
{C_text("f_12629:chicken_2dsyntax_2escm"),(void*)f_12629},
{C_text("f_12660:chicken_2dsyntax_2escm"),(void*)f_12660},
{C_text("f_12662:chicken_2dsyntax_2escm"),(void*)f_12662},
{C_text("f_12666:chicken_2dsyntax_2escm"),(void*)f_12666},
{C_text("f_12682:chicken_2dsyntax_2escm"),(void*)f_12682},
{C_text("f_12698:chicken_2dsyntax_2escm"),(void*)f_12698},
{C_text("f_12700:chicken_2dsyntax_2escm"),(void*)f_12700},
{C_text("f_12704:chicken_2dsyntax_2escm"),(void*)f_12704},
{C_text("f_12713:chicken_2dsyntax_2escm"),(void*)f_12713},
{C_text("f_12720:chicken_2dsyntax_2escm"),(void*)f_12720},
{C_text("f_12728:chicken_2dsyntax_2escm"),(void*)f_12728},
{C_text("f_12730:chicken_2dsyntax_2escm"),(void*)f_12730},
{C_text("f_12755:chicken_2dsyntax_2escm"),(void*)f_12755},
{C_text("f_12759:chicken_2dsyntax_2escm"),(void*)f_12759},
{C_text("f_12809:chicken_2dsyntax_2escm"),(void*)f_12809},
{C_text("f_12811:chicken_2dsyntax_2escm"),(void*)f_12811},
{C_text("f_12815:chicken_2dsyntax_2escm"),(void*)f_12815},
{C_text("f_12818:chicken_2dsyntax_2escm"),(void*)f_12818},
{C_text("f_12821:chicken_2dsyntax_2escm"),(void*)f_12821},
{C_text("f_12824:chicken_2dsyntax_2escm"),(void*)f_12824},
{C_text("f_12827:chicken_2dsyntax_2escm"),(void*)f_12827},
{C_text("f_12830:chicken_2dsyntax_2escm"),(void*)f_12830},
{C_text("f_12832:chicken_2dsyntax_2escm"),(void*)f_12832},
{C_text("f_12842:chicken_2dsyntax_2escm"),(void*)f_12842},
{C_text("f_12867:chicken_2dsyntax_2escm"),(void*)f_12867},
{C_text("f_12881:chicken_2dsyntax_2escm"),(void*)f_12881},
{C_text("f_12883:chicken_2dsyntax_2escm"),(void*)f_12883},
{C_text("f_12962:chicken_2dsyntax_2escm"),(void*)f_12962},
{C_text("f_12987:chicken_2dsyntax_2escm"),(void*)f_12987},
{C_text("f_12994:chicken_2dsyntax_2escm"),(void*)f_12994},
{C_text("f_12998:chicken_2dsyntax_2escm"),(void*)f_12998},
{C_text("f_13018:chicken_2dsyntax_2escm"),(void*)f_13018},
{C_text("f_13043:chicken_2dsyntax_2escm"),(void*)f_13043},
{C_text("f_13082:chicken_2dsyntax_2escm"),(void*)f_13082},
{C_text("f_13084:chicken_2dsyntax_2escm"),(void*)f_13084},
{C_text("f_13088:chicken_2dsyntax_2escm"),(void*)f_13088},
{C_text("f_13091:chicken_2dsyntax_2escm"),(void*)f_13091},
{C_text("f_13094:chicken_2dsyntax_2escm"),(void*)f_13094},
{C_text("f_13105:chicken_2dsyntax_2escm"),(void*)f_13105},
{C_text("f_4219:chicken_2dsyntax_2escm"),(void*)f_4219},
{C_text("f_4222:chicken_2dsyntax_2escm"),(void*)f_4222},
{C_text("f_4225:chicken_2dsyntax_2escm"),(void*)f_4225},
{C_text("f_4335:chicken_2dsyntax_2escm"),(void*)f_4335},
{C_text("f_4353:chicken_2dsyntax_2escm"),(void*)f_4353},
{C_text("f_4393:chicken_2dsyntax_2escm"),(void*)f_4393},
{C_text("f_4407:chicken_2dsyntax_2escm"),(void*)f_4407},
{C_text("f_5507:chicken_2dsyntax_2escm"),(void*)f_5507},
{C_text("f_5510:chicken_2dsyntax_2escm"),(void*)f_5510},
{C_text("f_5513:chicken_2dsyntax_2escm"),(void*)f_5513},
{C_text("f_5516:chicken_2dsyntax_2escm"),(void*)f_5516},
{C_text("f_5520:chicken_2dsyntax_2escm"),(void*)f_5520},
{C_text("f_5523:chicken_2dsyntax_2escm"),(void*)f_5523},
{C_text("f_5526:chicken_2dsyntax_2escm"),(void*)f_5526},
{C_text("f_5529:chicken_2dsyntax_2escm"),(void*)f_5529},
{C_text("f_5532:chicken_2dsyntax_2escm"),(void*)f_5532},
{C_text("f_5535:chicken_2dsyntax_2escm"),(void*)f_5535},
{C_text("f_5538:chicken_2dsyntax_2escm"),(void*)f_5538},
{C_text("f_5541:chicken_2dsyntax_2escm"),(void*)f_5541},
{C_text("f_5545:chicken_2dsyntax_2escm"),(void*)f_5545},
{C_text("f_5548:chicken_2dsyntax_2escm"),(void*)f_5548},
{C_text("f_5551:chicken_2dsyntax_2escm"),(void*)f_5551},
{C_text("f_5554:chicken_2dsyntax_2escm"),(void*)f_5554},
{C_text("f_5557:chicken_2dsyntax_2escm"),(void*)f_5557},
{C_text("f_5560:chicken_2dsyntax_2escm"),(void*)f_5560},
{C_text("f_5563:chicken_2dsyntax_2escm"),(void*)f_5563},
{C_text("f_5567:chicken_2dsyntax_2escm"),(void*)f_5567},
{C_text("f_5570:chicken_2dsyntax_2escm"),(void*)f_5570},
{C_text("f_5573:chicken_2dsyntax_2escm"),(void*)f_5573},
{C_text("f_5576:chicken_2dsyntax_2escm"),(void*)f_5576},
{C_text("f_5579:chicken_2dsyntax_2escm"),(void*)f_5579},
{C_text("f_5582:chicken_2dsyntax_2escm"),(void*)f_5582},
{C_text("f_5585:chicken_2dsyntax_2escm"),(void*)f_5585},
{C_text("f_5588:chicken_2dsyntax_2escm"),(void*)f_5588},
{C_text("f_5591:chicken_2dsyntax_2escm"),(void*)f_5591},
{C_text("f_5594:chicken_2dsyntax_2escm"),(void*)f_5594},
{C_text("f_5597:chicken_2dsyntax_2escm"),(void*)f_5597},
{C_text("f_5600:chicken_2dsyntax_2escm"),(void*)f_5600},
{C_text("f_5603:chicken_2dsyntax_2escm"),(void*)f_5603},
{C_text("f_5606:chicken_2dsyntax_2escm"),(void*)f_5606},
{C_text("f_5610:chicken_2dsyntax_2escm"),(void*)f_5610},
{C_text("f_5613:chicken_2dsyntax_2escm"),(void*)f_5613},
{C_text("f_5616:chicken_2dsyntax_2escm"),(void*)f_5616},
{C_text("f_5619:chicken_2dsyntax_2escm"),(void*)f_5619},
{C_text("f_5622:chicken_2dsyntax_2escm"),(void*)f_5622},
{C_text("f_5625:chicken_2dsyntax_2escm"),(void*)f_5625},
{C_text("f_5628:chicken_2dsyntax_2escm"),(void*)f_5628},
{C_text("f_5631:chicken_2dsyntax_2escm"),(void*)f_5631},
{C_text("f_5634:chicken_2dsyntax_2escm"),(void*)f_5634},
{C_text("f_5637:chicken_2dsyntax_2escm"),(void*)f_5637},
{C_text("f_5640:chicken_2dsyntax_2escm"),(void*)f_5640},
{C_text("f_5643:chicken_2dsyntax_2escm"),(void*)f_5643},
{C_text("f_5646:chicken_2dsyntax_2escm"),(void*)f_5646},
{C_text("f_5649:chicken_2dsyntax_2escm"),(void*)f_5649},
{C_text("f_5652:chicken_2dsyntax_2escm"),(void*)f_5652},
{C_text("f_5655:chicken_2dsyntax_2escm"),(void*)f_5655},
{C_text("f_5658:chicken_2dsyntax_2escm"),(void*)f_5658},
{C_text("f_5661:chicken_2dsyntax_2escm"),(void*)f_5661},
{C_text("f_5664:chicken_2dsyntax_2escm"),(void*)f_5664},
{C_text("f_5667:chicken_2dsyntax_2escm"),(void*)f_5667},
{C_text("f_5671:chicken_2dsyntax_2escm"),(void*)f_5671},
{C_text("f_5674:chicken_2dsyntax_2escm"),(void*)f_5674},
{C_text("f_5677:chicken_2dsyntax_2escm"),(void*)f_5677},
{C_text("f_5680:chicken_2dsyntax_2escm"),(void*)f_5680},
{C_text("f_5684:chicken_2dsyntax_2escm"),(void*)f_5684},
{C_text("f_5686:chicken_2dsyntax_2escm"),(void*)f_5686},
{C_text("f_5690:chicken_2dsyntax_2escm"),(void*)f_5690},
{C_text("f_5733:chicken_2dsyntax_2escm"),(void*)f_5733},
{C_text("f_5735:chicken_2dsyntax_2escm"),(void*)f_5735},
{C_text("f_5739:chicken_2dsyntax_2escm"),(void*)f_5739},
{C_text("f_5750:chicken_2dsyntax_2escm"),(void*)f_5750},
{C_text("f_5753:chicken_2dsyntax_2escm"),(void*)f_5753},
{C_text("f_5776:chicken_2dsyntax_2escm"),(void*)f_5776},
{C_text("f_5795:chicken_2dsyntax_2escm"),(void*)f_5795},
{C_text("f_5805:chicken_2dsyntax_2escm"),(void*)f_5805},
{C_text("f_5812:chicken_2dsyntax_2escm"),(void*)f_5812},
{C_text("f_5822:chicken_2dsyntax_2escm"),(void*)f_5822},
{C_text("f_5824:chicken_2dsyntax_2escm"),(void*)f_5824},
{C_text("f_5832:chicken_2dsyntax_2escm"),(void*)f_5832},
{C_text("f_5840:chicken_2dsyntax_2escm"),(void*)f_5840},
{C_text("f_5842:chicken_2dsyntax_2escm"),(void*)f_5842},
{C_text("f_5846:chicken_2dsyntax_2escm"),(void*)f_5846},
{C_text("f_5905:chicken_2dsyntax_2escm"),(void*)f_5905},
{C_text("f_5907:chicken_2dsyntax_2escm"),(void*)f_5907},
{C_text("f_5911:chicken_2dsyntax_2escm"),(void*)f_5911},
{C_text("f_5914:chicken_2dsyntax_2escm"),(void*)f_5914},
{C_text("f_5917:chicken_2dsyntax_2escm"),(void*)f_5917},
{C_text("f_5920:chicken_2dsyntax_2escm"),(void*)f_5920},
{C_text("f_5927:chicken_2dsyntax_2escm"),(void*)f_5927},
{C_text("f_5937:chicken_2dsyntax_2escm"),(void*)f_5937},
{C_text("f_5940:chicken_2dsyntax_2escm"),(void*)f_5940},
{C_text("f_5946:chicken_2dsyntax_2escm"),(void*)f_5946},
{C_text("f_5957:chicken_2dsyntax_2escm"),(void*)f_5957},
{C_text("f_5973:chicken_2dsyntax_2escm"),(void*)f_5973},
{C_text("f_5983:chicken_2dsyntax_2escm"),(void*)f_5983},
{C_text("f_6006:chicken_2dsyntax_2escm"),(void*)f_6006},
{C_text("f_6009:chicken_2dsyntax_2escm"),(void*)f_6009},
{C_text("f_6026:chicken_2dsyntax_2escm"),(void*)f_6026},
{C_text("f_6032:chicken_2dsyntax_2escm"),(void*)f_6032},
{C_text("f_6049:chicken_2dsyntax_2escm"),(void*)f_6049},
{C_text("f_6072:chicken_2dsyntax_2escm"),(void*)f_6072},
{C_text("f_6100:chicken_2dsyntax_2escm"),(void*)f_6100},
{C_text("f_6102:chicken_2dsyntax_2escm"),(void*)f_6102},
{C_text("f_6106:chicken_2dsyntax_2escm"),(void*)f_6106},
{C_text("f_6109:chicken_2dsyntax_2escm"),(void*)f_6109},
{C_text("f_6112:chicken_2dsyntax_2escm"),(void*)f_6112},
{C_text("f_6115:chicken_2dsyntax_2escm"),(void*)f_6115},
{C_text("f_6122:chicken_2dsyntax_2escm"),(void*)f_6122},
{C_text("f_6132:chicken_2dsyntax_2escm"),(void*)f_6132},
{C_text("f_6135:chicken_2dsyntax_2escm"),(void*)f_6135},
{C_text("f_6141:chicken_2dsyntax_2escm"),(void*)f_6141},
{C_text("f_6148:chicken_2dsyntax_2escm"),(void*)f_6148},
{C_text("f_6164:chicken_2dsyntax_2escm"),(void*)f_6164},
{C_text("f_6174:chicken_2dsyntax_2escm"),(void*)f_6174},
{C_text("f_6197:chicken_2dsyntax_2escm"),(void*)f_6197},
{C_text("f_6200:chicken_2dsyntax_2escm"),(void*)f_6200},
{C_text("f_6217:chicken_2dsyntax_2escm"),(void*)f_6217},
{C_text("f_6223:chicken_2dsyntax_2escm"),(void*)f_6223},
{C_text("f_6272:chicken_2dsyntax_2escm"),(void*)f_6272},
{C_text("f_6274:chicken_2dsyntax_2escm"),(void*)f_6274},
{C_text("f_6278:chicken_2dsyntax_2escm"),(void*)f_6278},
{C_text("f_6284:chicken_2dsyntax_2escm"),(void*)f_6284},
{C_text("f_6287:chicken_2dsyntax_2escm"),(void*)f_6287},
{C_text("f_6299:chicken_2dsyntax_2escm"),(void*)f_6299},
{C_text("f_6302:chicken_2dsyntax_2escm"),(void*)f_6302},
{C_text("f_6308:chicken_2dsyntax_2escm"),(void*)f_6308},
{C_text("f_6311:chicken_2dsyntax_2escm"),(void*)f_6311},
{C_text("f_6320:chicken_2dsyntax_2escm"),(void*)f_6320},
{C_text("f_6321:chicken_2dsyntax_2escm"),(void*)f_6321},
{C_text("f_6337:chicken_2dsyntax_2escm"),(void*)f_6337},
{C_text("f_6368:chicken_2dsyntax_2escm"),(void*)f_6368},
{C_text("f_6370:chicken_2dsyntax_2escm"),(void*)f_6370},
{C_text("f_6389:chicken_2dsyntax_2escm"),(void*)f_6389},
{C_text("f_6395:chicken_2dsyntax_2escm"),(void*)f_6395},
{C_text("f_6402:chicken_2dsyntax_2escm"),(void*)f_6402},
{C_text("f_6406:chicken_2dsyntax_2escm"),(void*)f_6406},
{C_text("f_6410:chicken_2dsyntax_2escm"),(void*)f_6410},
{C_text("f_6414:chicken_2dsyntax_2escm"),(void*)f_6414},
{C_text("f_6442:chicken_2dsyntax_2escm"),(void*)f_6442},
{C_text("f_6463:chicken_2dsyntax_2escm"),(void*)f_6463},
{C_text("f_6542:chicken_2dsyntax_2escm"),(void*)f_6542},
{C_text("f_6585:chicken_2dsyntax_2escm"),(void*)f_6585},
{C_text("f_6598:chicken_2dsyntax_2escm"),(void*)f_6598},
{C_text("f_6600:chicken_2dsyntax_2escm"),(void*)f_6600},
{C_text("f_6638:chicken_2dsyntax_2escm"),(void*)f_6638},
{C_text("f_6648:chicken_2dsyntax_2escm"),(void*)f_6648},
{C_text("f_6661:chicken_2dsyntax_2escm"),(void*)f_6661},
{C_text("f_6696:chicken_2dsyntax_2escm"),(void*)f_6696},
{C_text("f_6703:chicken_2dsyntax_2escm"),(void*)f_6703},
{C_text("f_6707:chicken_2dsyntax_2escm"),(void*)f_6707},
{C_text("f_6711:chicken_2dsyntax_2escm"),(void*)f_6711},
{C_text("f_6713:chicken_2dsyntax_2escm"),(void*)f_6713},
{C_text("f_6717:chicken_2dsyntax_2escm"),(void*)f_6717},
{C_text("f_6725:chicken_2dsyntax_2escm"),(void*)f_6725},
{C_text("f_6734:chicken_2dsyntax_2escm"),(void*)f_6734},
{C_text("f_6737:chicken_2dsyntax_2escm"),(void*)f_6737},
{C_text("f_6740:chicken_2dsyntax_2escm"),(void*)f_6740},
{C_text("f_6762:chicken_2dsyntax_2escm"),(void*)f_6762},
{C_text("f_6769:chicken_2dsyntax_2escm"),(void*)f_6769},
{C_text("f_6773:chicken_2dsyntax_2escm"),(void*)f_6773},
{C_text("f_6784:chicken_2dsyntax_2escm"),(void*)f_6784},
{C_text("f_6787:chicken_2dsyntax_2escm"),(void*)f_6787},
{C_text("f_6790:chicken_2dsyntax_2escm"),(void*)f_6790},
{C_text("f_6804:chicken_2dsyntax_2escm"),(void*)f_6804},
{C_text("f_6811:chicken_2dsyntax_2escm"),(void*)f_6811},
{C_text("f_6815:chicken_2dsyntax_2escm"),(void*)f_6815},
{C_text("f_6827:chicken_2dsyntax_2escm"),(void*)f_6827},
{C_text("f_6829:chicken_2dsyntax_2escm"),(void*)f_6829},
{C_text("f_6833:chicken_2dsyntax_2escm"),(void*)f_6833},
{C_text("f_6835:chicken_2dsyntax_2escm"),(void*)f_6835},
{C_text("f_6841:chicken_2dsyntax_2escm"),(void*)f_6841},
{C_text("f_6855:chicken_2dsyntax_2escm"),(void*)f_6855},
{C_text("f_6859:chicken_2dsyntax_2escm"),(void*)f_6859},
{C_text("f_6867:chicken_2dsyntax_2escm"),(void*)f_6867},
{C_text("f_6870:chicken_2dsyntax_2escm"),(void*)f_6870},
{C_text("f_6873:chicken_2dsyntax_2escm"),(void*)f_6873},
{C_text("f_6876:chicken_2dsyntax_2escm"),(void*)f_6876},
{C_text("f_6879:chicken_2dsyntax_2escm"),(void*)f_6879},
{C_text("f_6882:chicken_2dsyntax_2escm"),(void*)f_6882},
{C_text("f_6885:chicken_2dsyntax_2escm"),(void*)f_6885},
{C_text("f_6888:chicken_2dsyntax_2escm"),(void*)f_6888},
{C_text("f_6891:chicken_2dsyntax_2escm"),(void*)f_6891},
{C_text("f_6894:chicken_2dsyntax_2escm"),(void*)f_6894},
{C_text("f_6901:chicken_2dsyntax_2escm"),(void*)f_6901},
{C_text("f_6917:chicken_2dsyntax_2escm"),(void*)f_6917},
{C_text("f_6919:chicken_2dsyntax_2escm"),(void*)f_6919},
{C_text("f_6927:chicken_2dsyntax_2escm"),(void*)f_6927},
{C_text("f_6937:chicken_2dsyntax_2escm"),(void*)f_6937},
{C_text("f_6941:chicken_2dsyntax_2escm"),(void*)f_6941},
{C_text("f_6951:chicken_2dsyntax_2escm"),(void*)f_6951},
{C_text("f_6955:chicken_2dsyntax_2escm"),(void*)f_6955},
{C_text("f_6957:chicken_2dsyntax_2escm"),(void*)f_6957},
{C_text("f_6965:chicken_2dsyntax_2escm"),(void*)f_6965},
{C_text("f_6967:chicken_2dsyntax_2escm"),(void*)f_6967},
{C_text("f_6971:chicken_2dsyntax_2escm"),(void*)f_6971},
{C_text("f_6993:chicken_2dsyntax_2escm"),(void*)f_6993},
{C_text("f_6995:chicken_2dsyntax_2escm"),(void*)f_6995},
{C_text("f_7043:chicken_2dsyntax_2escm"),(void*)f_7043},
{C_text("f_7096:chicken_2dsyntax_2escm"),(void*)f_7096},
{C_text("f_7107:chicken_2dsyntax_2escm"),(void*)f_7107},
{C_text("f_7144:chicken_2dsyntax_2escm"),(void*)f_7144},
{C_text("f_7172:chicken_2dsyntax_2escm"),(void*)f_7172},
{C_text("f_7199:chicken_2dsyntax_2escm"),(void*)f_7199},
{C_text("f_7209:chicken_2dsyntax_2escm"),(void*)f_7209},
{C_text("f_7211:chicken_2dsyntax_2escm"),(void*)f_7211},
{C_text("f_7236:chicken_2dsyntax_2escm"),(void*)f_7236},
{C_text("f_7271:chicken_2dsyntax_2escm"),(void*)f_7271},
{C_text("f_7273:chicken_2dsyntax_2escm"),(void*)f_7273},
{C_text("f_7277:chicken_2dsyntax_2escm"),(void*)f_7277},
{C_text("f_7289:chicken_2dsyntax_2escm"),(void*)f_7289},
{C_text("f_7292:chicken_2dsyntax_2escm"),(void*)f_7292},
{C_text("f_7295:chicken_2dsyntax_2escm"),(void*)f_7295},
{C_text("f_7298:chicken_2dsyntax_2escm"),(void*)f_7298},
{C_text("f_7309:chicken_2dsyntax_2escm"),(void*)f_7309},
{C_text("f_7311:chicken_2dsyntax_2escm"),(void*)f_7311},
{C_text("f_7337:chicken_2dsyntax_2escm"),(void*)f_7337},
{C_text("f_7348:chicken_2dsyntax_2escm"),(void*)f_7348},
{C_text("f_7431:chicken_2dsyntax_2escm"),(void*)f_7431},
{C_text("f_7433:chicken_2dsyntax_2escm"),(void*)f_7433},
{C_text("f_7437:chicken_2dsyntax_2escm"),(void*)f_7437},
{C_text("f_7440:chicken_2dsyntax_2escm"),(void*)f_7440},
{C_text("f_7470:chicken_2dsyntax_2escm"),(void*)f_7470},
{C_text("f_7480:chicken_2dsyntax_2escm"),(void*)f_7480},
{C_text("f_7508:chicken_2dsyntax_2escm"),(void*)f_7508},
{C_text("f_7510:chicken_2dsyntax_2escm"),(void*)f_7510},
{C_text("f_7514:chicken_2dsyntax_2escm"),(void*)f_7514},
{C_text("f_7533:chicken_2dsyntax_2escm"),(void*)f_7533},
{C_text("f_7537:chicken_2dsyntax_2escm"),(void*)f_7537},
{C_text("f_7541:chicken_2dsyntax_2escm"),(void*)f_7541},
{C_text("f_7543:chicken_2dsyntax_2escm"),(void*)f_7543},
{C_text("f_7564:chicken_2dsyntax_2escm"),(void*)f_7564},
{C_text("f_7582:chicken_2dsyntax_2escm"),(void*)f_7582},
{C_text("f_7590:chicken_2dsyntax_2escm"),(void*)f_7590},
{C_text("f_7594:chicken_2dsyntax_2escm"),(void*)f_7594},
{C_text("f_7604:chicken_2dsyntax_2escm"),(void*)f_7604},
{C_text("f_7610:chicken_2dsyntax_2escm"),(void*)f_7610},
{C_text("f_7624:chicken_2dsyntax_2escm"),(void*)f_7624},
{C_text("f_7650:chicken_2dsyntax_2escm"),(void*)f_7650},
{C_text("f_7674:chicken_2dsyntax_2escm"),(void*)f_7674},
{C_text("f_7682:chicken_2dsyntax_2escm"),(void*)f_7682},
{C_text("f_7690:chicken_2dsyntax_2escm"),(void*)f_7690},
{C_text("f_7694:chicken_2dsyntax_2escm"),(void*)f_7694},
{C_text("f_7697:chicken_2dsyntax_2escm"),(void*)f_7697},
{C_text("f_7700:chicken_2dsyntax_2escm"),(void*)f_7700},
{C_text("f_7709:chicken_2dsyntax_2escm"),(void*)f_7709},
{C_text("f_7710:chicken_2dsyntax_2escm"),(void*)f_7710},
{C_text("f_7718:chicken_2dsyntax_2escm"),(void*)f_7718},
{C_text("f_7722:chicken_2dsyntax_2escm"),(void*)f_7722},
{C_text("f_7726:chicken_2dsyntax_2escm"),(void*)f_7726},
{C_text("f_7734:chicken_2dsyntax_2escm"),(void*)f_7734},
{C_text("f_7740:chicken_2dsyntax_2escm"),(void*)f_7740},
{C_text("f_7746:chicken_2dsyntax_2escm"),(void*)f_7746},
{C_text("f_7749:chicken_2dsyntax_2escm"),(void*)f_7749},
{C_text("f_7752:chicken_2dsyntax_2escm"),(void*)f_7752},
{C_text("f_7756:chicken_2dsyntax_2escm"),(void*)f_7756},
{C_text("f_7764:chicken_2dsyntax_2escm"),(void*)f_7764},
{C_text("f_7767:chicken_2dsyntax_2escm"),(void*)f_7767},
{C_text("f_7770:chicken_2dsyntax_2escm"),(void*)f_7770},
{C_text("f_7773:chicken_2dsyntax_2escm"),(void*)f_7773},
{C_text("f_7780:chicken_2dsyntax_2escm"),(void*)f_7780},
{C_text("f_7806:chicken_2dsyntax_2escm"),(void*)f_7806},
{C_text("f_7831:chicken_2dsyntax_2escm"),(void*)f_7831},
{C_text("f_7840:chicken_2dsyntax_2escm"),(void*)f_7840},
{C_text("f_7874:chicken_2dsyntax_2escm"),(void*)f_7874},
{C_text("f_7899:chicken_2dsyntax_2escm"),(void*)f_7899},
{C_text("f_7908:chicken_2dsyntax_2escm"),(void*)f_7908},
{C_text("f_7956:chicken_2dsyntax_2escm"),(void*)f_7956},
{C_text("f_7958:chicken_2dsyntax_2escm"),(void*)f_7958},
{C_text("f_7962:chicken_2dsyntax_2escm"),(void*)f_7962},
{C_text("f_7972:chicken_2dsyntax_2escm"),(void*)f_7972},
{C_text("f_7999:chicken_2dsyntax_2escm"),(void*)f_7999},
{C_text("f_8002:chicken_2dsyntax_2escm"),(void*)f_8002},
{C_text("f_8017:chicken_2dsyntax_2escm"),(void*)f_8017},
{C_text("f_8025:chicken_2dsyntax_2escm"),(void*)f_8025},
{C_text("f_8034:chicken_2dsyntax_2escm"),(void*)f_8034},
{C_text("f_8049:chicken_2dsyntax_2escm"),(void*)f_8049},
{C_text("f_8059:chicken_2dsyntax_2escm"),(void*)f_8059},
{C_text("f_8062:chicken_2dsyntax_2escm"),(void*)f_8062},
{C_text("f_8078:chicken_2dsyntax_2escm"),(void*)f_8078},
{C_text("f_8098:chicken_2dsyntax_2escm"),(void*)f_8098},
{C_text("f_8100:chicken_2dsyntax_2escm"),(void*)f_8100},
{C_text("f_8102:chicken_2dsyntax_2escm"),(void*)f_8102},
{C_text("f_8106:chicken_2dsyntax_2escm"),(void*)f_8106},
{C_text("f_8115:chicken_2dsyntax_2escm"),(void*)f_8115},
{C_text("f_8118:chicken_2dsyntax_2escm"),(void*)f_8118},
{C_text("f_8127:chicken_2dsyntax_2escm"),(void*)f_8127},
{C_text("f_8143:chicken_2dsyntax_2escm"),(void*)f_8143},
{C_text("f_8147:chicken_2dsyntax_2escm"),(void*)f_8147},
{C_text("f_8190:chicken_2dsyntax_2escm"),(void*)f_8190},
{C_text("f_8202:chicken_2dsyntax_2escm"),(void*)f_8202},
{C_text("f_8204:chicken_2dsyntax_2escm"),(void*)f_8204},
{C_text("f_8208:chicken_2dsyntax_2escm"),(void*)f_8208},
{C_text("f_8211:chicken_2dsyntax_2escm"),(void*)f_8211},
{C_text("f_8230:chicken_2dsyntax_2escm"),(void*)f_8230},
{C_text("f_8246:chicken_2dsyntax_2escm"),(void*)f_8246},
{C_text("f_8248:chicken_2dsyntax_2escm"),(void*)f_8248},
{C_text("f_8252:chicken_2dsyntax_2escm"),(void*)f_8252},
{C_text("f_8255:chicken_2dsyntax_2escm"),(void*)f_8255},
{C_text("f_8268:chicken_2dsyntax_2escm"),(void*)f_8268},
{C_text("f_8270:chicken_2dsyntax_2escm"),(void*)f_8270},
{C_text("f_8274:chicken_2dsyntax_2escm"),(void*)f_8274},
{C_text("f_8288:chicken_2dsyntax_2escm"),(void*)f_8288},
{C_text("f_8294:chicken_2dsyntax_2escm"),(void*)f_8294},
{C_text("f_8316:chicken_2dsyntax_2escm"),(void*)f_8316},
{C_text("f_8322:chicken_2dsyntax_2escm"),(void*)f_8322},
{C_text("f_8326:chicken_2dsyntax_2escm"),(void*)f_8326},
{C_text("f_8336:chicken_2dsyntax_2escm"),(void*)f_8336},
{C_text("f_8338:chicken_2dsyntax_2escm"),(void*)f_8338},
{C_text("f_8367:chicken_2dsyntax_2escm"),(void*)f_8367},
{C_text("f_8386:chicken_2dsyntax_2escm"),(void*)f_8386},
{C_text("f_8420:chicken_2dsyntax_2escm"),(void*)f_8420},
{C_text("f_8444:chicken_2dsyntax_2escm"),(void*)f_8444},
{C_text("f_8446:chicken_2dsyntax_2escm"),(void*)f_8446},
{C_text("f_8450:chicken_2dsyntax_2escm"),(void*)f_8450},
{C_text("f_8456:chicken_2dsyntax_2escm"),(void*)f_8456},
{C_text("f_8490:chicken_2dsyntax_2escm"),(void*)f_8490},
{C_text("f_8526:chicken_2dsyntax_2escm"),(void*)f_8526},
{C_text("f_8528:chicken_2dsyntax_2escm"),(void*)f_8528},
{C_text("f_8532:chicken_2dsyntax_2escm"),(void*)f_8532},
{C_text("f_8540:chicken_2dsyntax_2escm"),(void*)f_8540},
{C_text("f_8545:chicken_2dsyntax_2escm"),(void*)f_8545},
{C_text("f_8570:chicken_2dsyntax_2escm"),(void*)f_8570},
{C_text("f_8580:chicken_2dsyntax_2escm"),(void*)f_8580},
{C_text("f_8582:chicken_2dsyntax_2escm"),(void*)f_8582},
{C_text("f_8586:chicken_2dsyntax_2escm"),(void*)f_8586},
{C_text("f_8592:chicken_2dsyntax_2escm"),(void*)f_8592},
{C_text("f_8613:chicken_2dsyntax_2escm"),(void*)f_8613},
{C_text("f_8620:chicken_2dsyntax_2escm"),(void*)f_8620},
{C_text("f_8643:chicken_2dsyntax_2escm"),(void*)f_8643},
{C_text("f_8647:chicken_2dsyntax_2escm"),(void*)f_8647},
{C_text("f_8668:chicken_2dsyntax_2escm"),(void*)f_8668},
{C_text("f_8671:chicken_2dsyntax_2escm"),(void*)f_8671},
{C_text("f_8675:chicken_2dsyntax_2escm"),(void*)f_8675},
{C_text("f_8683:chicken_2dsyntax_2escm"),(void*)f_8683},
{C_text("f_8687:chicken_2dsyntax_2escm"),(void*)f_8687},
{C_text("f_8693:chicken_2dsyntax_2escm"),(void*)f_8693},
{C_text("f_8694:chicken_2dsyntax_2escm"),(void*)f_8694},
{C_text("f_8705:chicken_2dsyntax_2escm"),(void*)f_8705},
{C_text("f_8720:chicken_2dsyntax_2escm"),(void*)f_8720},
{C_text("f_8722:chicken_2dsyntax_2escm"),(void*)f_8722},
{C_text("f_8741:chicken_2dsyntax_2escm"),(void*)f_8741},
{C_text("f_8749:chicken_2dsyntax_2escm"),(void*)f_8749},
{C_text("f_8755:chicken_2dsyntax_2escm"),(void*)f_8755},
{C_text("f_8757:chicken_2dsyntax_2escm"),(void*)f_8757},
{C_text("f_8782:chicken_2dsyntax_2escm"),(void*)f_8782},
{C_text("f_8806:chicken_2dsyntax_2escm"),(void*)f_8806},
{C_text("f_8843:chicken_2dsyntax_2escm"),(void*)f_8843},
{C_text("f_8871:chicken_2dsyntax_2escm"),(void*)f_8871},
{C_text("f_8905:chicken_2dsyntax_2escm"),(void*)f_8905},
{C_text("f_8936:chicken_2dsyntax_2escm"),(void*)f_8936},
{C_text("f_8943:chicken_2dsyntax_2escm"),(void*)f_8943},
{C_text("f_8949:chicken_2dsyntax_2escm"),(void*)f_8949},
{C_text("f_8974:chicken_2dsyntax_2escm"),(void*)f_8974},
{C_text("f_8983:chicken_2dsyntax_2escm"),(void*)f_8983},
{C_text("f_8996:chicken_2dsyntax_2escm"),(void*)f_8996},
{C_text("f_9021:chicken_2dsyntax_2escm"),(void*)f_9021},
{C_text("f_9057:chicken_2dsyntax_2escm"),(void*)f_9057},
{C_text("f_9059:chicken_2dsyntax_2escm"),(void*)f_9059},
{C_text("f_9063:chicken_2dsyntax_2escm"),(void*)f_9063},
{C_text("f_9070:chicken_2dsyntax_2escm"),(void*)f_9070},
{C_text("f_9074:chicken_2dsyntax_2escm"),(void*)f_9074},
{C_text("f_9082:chicken_2dsyntax_2escm"),(void*)f_9082},
{C_text("f_9096:chicken_2dsyntax_2escm"),(void*)f_9096},
{C_text("f_9102:chicken_2dsyntax_2escm"),(void*)f_9102},
{C_text("f_9109:chicken_2dsyntax_2escm"),(void*)f_9109},
{C_text("f_9115:chicken_2dsyntax_2escm"),(void*)f_9115},
{C_text("f_9128:chicken_2dsyntax_2escm"),(void*)f_9128},
{C_text("f_9162:chicken_2dsyntax_2escm"),(void*)f_9162},
{C_text("f_9172:chicken_2dsyntax_2escm"),(void*)f_9172},
{C_text("f_9187:chicken_2dsyntax_2escm"),(void*)f_9187},
{C_text("f_9189:chicken_2dsyntax_2escm"),(void*)f_9189},
{C_text("f_9193:chicken_2dsyntax_2escm"),(void*)f_9193},
{C_text("f_9208:chicken_2dsyntax_2escm"),(void*)f_9208},
{C_text("f_9210:chicken_2dsyntax_2escm"),(void*)f_9210},
{C_text("f_9214:chicken_2dsyntax_2escm"),(void*)f_9214},
{C_text("f_9236:chicken_2dsyntax_2escm"),(void*)f_9236},
{C_text("f_9238:chicken_2dsyntax_2escm"),(void*)f_9238},
{C_text("f_9242:chicken_2dsyntax_2escm"),(void*)f_9242},
{C_text("f_9260:chicken_2dsyntax_2escm"),(void*)f_9260},
{C_text("f_9262:chicken_2dsyntax_2escm"),(void*)f_9262},
{C_text("f_9271:chicken_2dsyntax_2escm"),(void*)f_9271},
{C_text("f_9277:chicken_2dsyntax_2escm"),(void*)f_9277},
{C_text("f_9283:chicken_2dsyntax_2escm"),(void*)f_9283},
{C_text("f_9302:chicken_2dsyntax_2escm"),(void*)f_9302},
{C_text("f_9304:chicken_2dsyntax_2escm"),(void*)f_9304},
{C_text("f_9329:chicken_2dsyntax_2escm"),(void*)f_9329},
{C_text("f_9340:chicken_2dsyntax_2escm"),(void*)f_9340},
{C_text("f_9342:chicken_2dsyntax_2escm"),(void*)f_9342},
{C_text("f_9361:chicken_2dsyntax_2escm"),(void*)f_9361},
{C_text("f_9369:chicken_2dsyntax_2escm"),(void*)f_9369},
{C_text("f_9378:chicken_2dsyntax_2escm"),(void*)f_9378},
{C_text("f_9384:chicken_2dsyntax_2escm"),(void*)f_9384},
{C_text("f_9388:chicken_2dsyntax_2escm"),(void*)f_9388},
{C_text("f_9396:chicken_2dsyntax_2escm"),(void*)f_9396},
{C_text("f_9402:chicken_2dsyntax_2escm"),(void*)f_9402},
{C_text("f_9406:chicken_2dsyntax_2escm"),(void*)f_9406},
{C_text("f_9414:chicken_2dsyntax_2escm"),(void*)f_9414},
{C_text("f_9417:chicken_2dsyntax_2escm"),(void*)f_9417},
{C_text("f_9421:chicken_2dsyntax_2escm"),(void*)f_9421},
{C_text("f_9429:chicken_2dsyntax_2escm"),(void*)f_9429},
{C_text("f_9432:chicken_2dsyntax_2escm"),(void*)f_9432},
{C_text("f_9445:chicken_2dsyntax_2escm"),(void*)f_9445},
{C_text("f_9462:chicken_2dsyntax_2escm"),(void*)f_9462},
{C_text("f_9473:chicken_2dsyntax_2escm"),(void*)f_9473},
{C_text("f_9521:chicken_2dsyntax_2escm"),(void*)f_9521},
{C_text("f_9525:chicken_2dsyntax_2escm"),(void*)f_9525},
{C_text("f_9537:chicken_2dsyntax_2escm"),(void*)f_9537},
{C_text("f_9549:chicken_2dsyntax_2escm"),(void*)f_9549},
{C_text("f_9551:chicken_2dsyntax_2escm"),(void*)f_9551},
{C_text("f_9599:chicken_2dsyntax_2escm"),(void*)f_9599},
{C_text("f_9647:chicken_2dsyntax_2escm"),(void*)f_9647},
{C_text("f_9654:chicken_2dsyntax_2escm"),(void*)f_9654},
{C_text("f_9724:chicken_2dsyntax_2escm"),(void*)f_9724},
{C_text("f_9742:chicken_2dsyntax_2escm"),(void*)f_9742},
{C_text("f_9746:chicken_2dsyntax_2escm"),(void*)f_9746},
{C_text("f_9762:chicken_2dsyntax_2escm"),(void*)f_9762},
{C_text("f_9766:chicken_2dsyntax_2escm"),(void*)f_9766},
{C_text("f_9778:chicken_2dsyntax_2escm"),(void*)f_9778},
{C_text("f_9788:chicken_2dsyntax_2escm"),(void*)f_9788},
{C_text("f_9836:chicken_2dsyntax_2escm"),(void*)f_9836},
{C_text("f_9884:chicken_2dsyntax_2escm"),(void*)f_9884},
{C_text("f_9891:chicken_2dsyntax_2escm"),(void*)f_9891},
{C_text("f_9954:chicken_2dsyntax_2escm"),(void*)f_9954},
{C_text("toplevel:chicken_2dsyntax_2escm"),(void*)C_chicken_2dsyntax_toplevel},
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
S|  scheme#for-each		2
S|  ##sys#map		11
S|  chicken.base#foldl		4
S|  scheme#map		42
S|  chicken.base#foldr		4
o|eliminated procedure checks: 738 
o|specializations:
o|  1 (chicken.base#add1 *)
o|  1 (scheme#zero? integer)
o|  2 (scheme#string-append string string)
o|  14 (scheme#cddr (pair * pair))
o|  2 (scheme#length list)
o|  1 (scheme#caddr (pair * (pair * pair)))
o|  4 (scheme#cadr (pair * pair))
o|  4 (scheme#cdddr (pair * (pair * pair)))
o|  1 (scheme#eqv? * *)
o|  40 (##sys#check-list (or pair list) *)
o|  69 (scheme#cdr pair)
o|  24 (scheme#car pair)
(o e)|safe calls: 1479 
o|safe globals: (posv posq make-list iota find-tail find length+ lset=/eq? lset<=/eq? list-tabulate lset-intersection/eq? lset-union/eq? lset-difference/eq? lset-adjoin/eq? list-index last unzip1 remove filter-map filter alist-cons delete-duplicates fifth fourth third second first delete concatenate cons* any every append-map split-at drop take span partition) 
o|removed side-effect free assignment to unused variable: partition 
o|removed side-effect free assignment to unused variable: span 
o|inlining procedure: k4337 
o|inlining procedure: k4337 
o|removed side-effect free assignment to unused variable: drop 
o|removed side-effect free assignment to unused variable: append-map 
o|inlining procedure: k4607 
o|inlining procedure: k4607 
o|inlining procedure: k4638 
o|inlining procedure: k4638 
o|removed side-effect free assignment to unused variable: cons* 
o|removed side-effect free assignment to unused variable: concatenate 
o|removed side-effect free assignment to unused variable: first 
o|removed side-effect free assignment to unused variable: second 
o|removed side-effect free assignment to unused variable: third 
o|removed side-effect free assignment to unused variable: fourth 
o|removed side-effect free assignment to unused variable: fifth 
o|removed side-effect free assignment to unused variable: delete-duplicates 
o|removed side-effect free assignment to unused variable: alist-cons 
o|inlining procedure: k4855 
o|inlining procedure: k4855 
o|inlining procedure: k4847 
o|inlining procedure: k4847 
o|removed side-effect free assignment to unused variable: filter-map 
o|removed side-effect free assignment to unused variable: remove 
o|removed side-effect free assignment to unused variable: unzip1 
o|removed side-effect free assignment to unused variable: last 
o|removed side-effect free assignment to unused variable: list-index 
o|removed side-effect free assignment to unused variable: lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: lset-difference/eq? 
o|removed side-effect free assignment to unused variable: lset-union/eq? 
o|removed side-effect free assignment to unused variable: lset-intersection/eq? 
o|inlining procedure: k5246 
o|inlining procedure: k5246 
o|removed side-effect free assignment to unused variable: lset<=/eq? 
o|removed side-effect free assignment to unused variable: lset=/eq? 
o|removed side-effect free assignment to unused variable: length+ 
o|removed side-effect free assignment to unused variable: find 
o|removed side-effect free assignment to unused variable: find-tail 
o|removed side-effect free assignment to unused variable: iota 
o|removed side-effect free assignment to unused variable: make-list 
o|removed side-effect free assignment to unused variable: posq 
o|removed side-effect free assignment to unused variable: posv 
o|inlining procedure: k5778 
o|inlining procedure: k5778 
o|inlining procedure: k5806 
o|inlining procedure: k5806 
o|inlining procedure: k5850 
o|inlining procedure: k5850 
o|inlining procedure: k5929 
o|inlining procedure: k5929 
o|inlining procedure: k6027 
o|inlining procedure: k6027 
o|inlining procedure: k6124 
o|inlining procedure: k6124 
o|inlining procedure: k6218 
o|inlining procedure: k6218 
o|inlining procedure: k6323 
o|inlining procedure: k6323 
o|inlining procedure: k6372 
o|inlining procedure: k6372 
o|inlining procedure: k6419 
o|inlining procedure: k6419 
o|inlining procedure: k6458 
o|inlining procedure: k6458 
o|inlining procedure: k6531 
o|inlining procedure: k6531 
o|inlining procedure: k6587 
o|inlining procedure: k6587 
o|inlining procedure: k6602 
o|inlining procedure: k6602 
o|inlining procedure: k6640 
o|inlining procedure: k6640 
o|inlining procedure: k6663 
o|inlining procedure: k6663 
o|inlining procedure: k6726 
o|inlining procedure: k6726 
o|inlining procedure: k6843 
o|inlining procedure: k6843 
o|contracted procedure: "(chicken-syntax.scm:1015) split-at" 
o|inlining procedure: k4395 
o|inlining procedure: k4395 
o|inlining procedure: k6972 
o|inlining procedure: k6972 
o|inlining procedure: k6997 
o|inlining procedure: k6997 
o|inlining procedure: k7045 
o|inlining procedure: k7073 
o|inlining procedure: k7073 
o|inlining procedure: k7045 
o|inlining procedure: k7105 
o|inlining procedure: k7105 
o|inlining procedure: k7145 
o|inlining procedure: k7145 
o|inlining procedure: k6921 
o|inlining procedure: k6921 
o|inlining procedure: k7213 
o|contracted procedure: "(chicken-syntax.scm:985) g28492858" 
o|inlining procedure: k7213 
o|inlining procedure: k7313 
o|inlining procedure: k7313 
o|removed unused formal parameters: (rename2644) 
o|inlining procedure: k7612 
o|inlining procedure: k7612 
o|removed unused parameter to known procedure: rename2644 "(chicken-syntax.scm:887) make-if-tree2624" 
o|contracted procedure: "(chicken-syntax.scm:885) make-default-procs2623" 
o|inlining procedure: k7545 
o|inlining procedure: k7545 
o|inlining procedure: k7808 
o|inlining procedure: k7808 
o|inlining procedure: k7842 
o|inlining procedure: k7842 
o|inlining procedure: k7876 
o|inlining procedure: k7876 
o|inlining procedure: k7910 
o|inlining procedure: k7910 
o|inlining procedure: k7974 
o|inlining procedure: k7974 
o|inlining procedure: k8026 
o|inlining procedure: k8026 
o|inlining procedure: k8116 
o|inlining procedure: k8116 
o|inlining procedure: k8131 
o|inlining procedure: k8131 
o|inlining procedure: k8340 
o|inlining procedure: k8340 
o|inlining procedure: k8388 
o|contracted procedure: "(chicken-syntax.scm:664) g24662475" 
o|inlining procedure: k8388 
o|inlining procedure: k8422 
o|contracted procedure: "(chicken-syntax.scm:665) g24902491" 
o|inlining procedure: k8422 
o|substituted constant variable: g24822485 
o|inlining procedure: k8458 
o|inlining procedure: k8458 
o|inlining procedure: k8492 
o|inlining procedure: k8492 
o|inlining procedure: k8547 
o|inlining procedure: k8547 
o|inlining procedure: k8594 
o|inlining procedure: k8594 
o|inlining procedure: k8622 
o|inlining procedure: k8622 
o|inlining procedure: k8724 
o|inlining procedure: k8759 
o|inlining procedure: k8759 
o|inlining procedure: k8724 
o|inlining procedure: k8873 
o|contracted procedure: "(chicken-syntax.scm:622) g23582367" 
o|inlining procedure: k8873 
o|inlining procedure: k8907 
o|inlining procedure: k8907 
o|inlining procedure: k8951 
o|inlining procedure: k8951 
o|inlining procedure: k8985 
o|inlining procedure: k8985 
o|inlining procedure: k9008 
o|inlining procedure: k9008 
o|inlining procedure: k9023 
o|inlining procedure: k9023 
o|inlining procedure: k9130 
o|contracted procedure: "(chicken-syntax.scm:581) g21732191" 
o|inlining procedure: k9130 
o|inlining procedure: k9164 
o|contracted procedure: "(chicken-syntax.scm:577) g21582180" 
o|inlining procedure: k9164 
o|inlining procedure: k9285 
o|inlining procedure: k9285 
o|inlining procedure: k9306 
o|inlining procedure: k9306 
o|contracted procedure: "(chicken-syntax.scm:490) pname1599" 
o|inlining procedure: k9347 
o|inlining procedure: k9347 
o|removed unused formal parameters: (z1706) 
o|removed unused formal parameters: (z1734) 
o|inlining procedure: k9553 
o|contracted procedure: "(chicken-syntax.scm:527) g20382048" 
o|inlining procedure: k9553 
o|inlining procedure: k9601 
o|contracted procedure: "(chicken-syntax.scm:525) g20022012" 
o|inlining procedure: k9601 
o|inlining procedure: k9649 
o|contracted procedure: "(chicken-syntax.scm:522) g19601971" 
o|inlining procedure: k9649 
o|inlining procedure: k9699 
o|inlining procedure: k9699 
o|inlining procedure: k9790 
o|contracted procedure: "(chicken-syntax.scm:515) g19241934" 
o|inlining procedure: k9790 
o|inlining procedure: k9838 
o|contracted procedure: "(chicken-syntax.scm:512) g18881898" 
o|inlining procedure: k9838 
o|inlining procedure: k9886 
o|inlining procedure: k9886 
o|inlining procedure: k9936 
o|inlining procedure: k9936 
o|inlining procedure: k9956 
o|inlining procedure: k9956 
o|inlining procedure: k10004 
o|inlining procedure: k10004 
o|inlining procedure: k10052 
o|inlining procedure: k10052 
o|inlining procedure: k10100 
o|removed unused parameter to known procedure: z1734 "(chicken-syntax.scm:492) g17231732" 
o|inlining procedure: k10100 
o|inlining procedure: k10134 
o|removed unused parameter to known procedure: z1706 "(chicken-syntax.scm:491) g16951704" 
o|inlining procedure: k10134 
o|inlining procedure: k10168 
o|inlining procedure: k10168 
o|inlining procedure: k10202 
o|inlining procedure: k10202 
o|inlining procedure: k10236 
o|inlining procedure: k10236 
o|removed unused formal parameters: (x1321) 
o|removed unused formal parameters: (x1349) 
o|inlining procedure: k10391 
o|contracted procedure: "(chicken-syntax.scm:472) g15671577" 
o|inlining procedure: k10391 
o|inlining procedure: k10439 
o|contracted procedure: "(chicken-syntax.scm:470) g15311541" 
o|inlining procedure: k10439 
o|inlining procedure: k10538 
o|contracted procedure: "(chicken-syntax.scm:465) g14951505" 
o|inlining procedure: k10538 
o|inlining procedure: k10586 
o|contracted procedure: "(chicken-syntax.scm:463) g14591469" 
o|inlining procedure: k10586 
o|inlining procedure: k10669 
o|inlining procedure: k10669 
o|inlining procedure: k10719 
o|inlining procedure: k10719 
o|inlining procedure: k10739 
o|inlining procedure: k10739 
o|inlining procedure: k10787 
o|inlining procedure: k10787 
o|inlining procedure: k10821 
o|removed unused parameter to known procedure: x1349 "(chicken-syntax.scm:453) g13381347" 
o|inlining procedure: k10821 
o|inlining procedure: k10855 
o|removed unused parameter to known procedure: x1321 "(chicken-syntax.scm:452) g13101319" 
o|inlining procedure: k10855 
o|inlining procedure: k10889 
o|inlining procedure: k10889 
o|inlining procedure: k10999 
o|inlining procedure: k10999 
o|inlining procedure: k11121 
o|inlining procedure: k11121 
o|inlining procedure: k11142 
o|inlining procedure: k11154 
o|inlining procedure: k11154 
o|inlining procedure: k11142 
o|inlining procedure: k11214 
o|inlining procedure: k11214 
o|inlining procedure: k11274 
o|inlining procedure: k11274 
o|inlining procedure: k11363 
o|inlining procedure: k11363 
o|substituted constant variable: a11398 
o|substituted constant variable: a11423 
o|inlining procedure: k11432 
o|inlining procedure: k11432 
o|inlining procedure: k11504 
o|inlining procedure: k11504 
o|inlining procedure: k11533 
o|inlining procedure: k11548 
o|inlining procedure: k11564 
o|inlining procedure: k11564 
o|inlining procedure: k11548 
o|inlining procedure: k11533 
o|inlining procedure: k11598 
o|inlining procedure: k11614 
o|inlining procedure: k11614 
o|inlining procedure: k11598 
o|inlining procedure: k11652 
o|inlining procedure: k11652 
o|inlining procedure: k11716 
o|inlining procedure: k11716 
o|inlining procedure: k11825 
o|inlining procedure: k11825 
o|inlining procedure: k11938 
o|inlining procedure: k11938 
o|inlining procedure: k11959 
o|inlining procedure: k11959 
o|inlining procedure: k12005 
o|inlining procedure: k12005 
o|inlining procedure: k12039 
o|inlining procedure: k12096 
o|contracted procedure: "(chicken-syntax.scm:197) g921931" 
o|inlining procedure: k12096 
o|inlining procedure: k12154 
o|inlining procedure: k12181 
o|contracted procedure: "(chicken-syntax.scm:189) g887896" 
o|propagated global variable: g904905 chicken.compiler.scrutinizer#check-and-validate-type 
o|inlining procedure: k12181 
o|inlining procedure: k12154 
o|inlining procedure: k12225 
o|inlining procedure: k12225 
o|inlining procedure: k12039 
o|inlining procedure: k12272 
o|inlining procedure: k12272 
o|inlining procedure: k12309 
o|inlining procedure: k12309 
o|inlining procedure: k12358 
o|inlining procedure: k12449 
o|contracted procedure: "(chicken-syntax.scm:154) g820829" 
o|inlining procedure: k12449 
o|inlining procedure: k12483 
o|contracted procedure: "(chicken-syntax.scm:154) g792801" 
o|inlining procedure: k12483 
o|inlining procedure: k12358 
o|inlining procedure: k12520 
o|inlining procedure: k12535 
o|inlining procedure: k12551 
o|inlining procedure: k12551 
o|inlining procedure: k12535 
o|inlining procedure: k12520 
o|inlining procedure: k12585 
o|inlining procedure: k12601 
o|inlining procedure: k12601 
o|inlining procedure: k12636 
o|inlining procedure: k12636 
o|inlining procedure: k12585 
o|inlining procedure: k12667 
o|inlining procedure: k12667 
o|inlining procedure: k12705 
o|inlining procedure: k12705 
o|inlining procedure: k12732 
o|inlining procedure: k12732 
o|inlining procedure: k12761 
o|inlining procedure: k12761 
o|inlining procedure: k12843 
o|inlining procedure: k12843 
o|inlining procedure: k12885 
o|inlining procedure: k12885 
o|inlining procedure: k13000 
o|inlining procedure: k13000 
o|inlining procedure: k13020 
o|inlining procedure: k13020 
o|replaced variables: 2095 
o|removed binding forms: 478 
o|substituted constant variable: r433813182 
o|removed side-effect free assignment to unused variable: every 
o|removed side-effect free assignment to unused variable: any 
o|removed side-effect free assignment to unused variable: filter 
o|removed side-effect free assignment to unused variable: list-tabulate 
o|substituted constant variable: r580713199 
o|substituted constant variable: r637313212 
o|substituted constant variable: r653213221 
o|substituted constant variable: r658813223 
o|substituted constant variable: r684413232 
o|substituted constant variable: r714613248 
o|substituted constant variable: r692213251 
o|converted assignments to bindings: (genvars2835) 
o|substituted constant variable: r754613258 
o|converted assignments to bindings: (make-if-tree2624) 
o|substituted constant variable: r813213283 
o|substituted constant variable: r862313298 
o|substituted constant variable: r928613320 
o|substituted constant variable: r970013333 
o|substituted constant variable: r993713341 
o|substituted constant variable: r1072013368 
o|substituted constant variable: r1115513386 
o|substituted constant variable: r1114313387 
o|substituted constant variable: r1154913406 
o|substituted constant variable: r1153413407 
o|substituted constant variable: r1159913411 
o|substituted constant variable: r1171713415 
o|substituted constant variable: r1182613416 
o|substituted constant variable: r1200613422 
o|substituted constant variable: r1222613433 
o|substituted constant variable: r1231013439 
o|substituted constant variable: r1253613450 
o|substituted constant variable: r1252113451 
o|substituted constant variable: r1263713456 
o|substituted constant variable: r1258613457 
o|substituted constant variable: r1270613460 
o|substituted constant variable: r1276213466 
o|substituted constant variable: r1276213466 
o|substituted constant variable: r1300113472 
o|substituted constant variable: r1300113472 
o|converted assignments to bindings: (parse-clause601) 
o|simplifications: ((let . 3)) 
o|replaced variables: 77 
o|removed binding forms: 1831 
o|removed call to pure procedure with unused result: "(chicken-syntax.scm:522) ##sys#slot" 
o|removed call to pure procedure with unused result: "(chicken-syntax.scm:492) ##sys#slot" 
o|removed call to pure procedure with unused result: "(chicken-syntax.scm:491) ##sys#slot" 
o|removed call to pure procedure with unused result: "(chicken-syntax.scm:453) ##sys#slot" 
o|removed call to pure procedure with unused result: "(chicken-syntax.scm:452) ##sys#slot" 
o|removed binding forms: 112 
o|contracted procedure: k9686 
o|contracted procedure: k10125 
o|contracted procedure: k10159 
o|contracted procedure: k10846 
o|contracted procedure: k10880 
o|removed binding forms: 5 
o|removed binding forms: 5 
o|simplifications: ((let . 32) (if . 31) (##core#call . 1224)) 
o|  call simplifications:
o|    scheme#cdddr	2
o|    chicken.fixnum#fx=
o|    scheme#vector
o|    ##sys#pair?	7
o|    ##sys#eq?	7
o|    ##sys#car	15
o|    ##sys#cdr	22
o|    scheme#symbol?	7
o|    scheme#list?	2
o|    scheme#cdar
o|    scheme#caar
o|    scheme#assq	2
o|    scheme#apply
o|    scheme#eq?	5
o|    ##sys#call-with-values	3
o|    scheme#values
o|    chicken.fixnum#fx>=
o|    chicken.fixnum#fx+	3
o|    scheme#cadddr	2
o|    scheme#cddddr
o|    ##sys#check-list	37
o|    ##sys#setslot	50
o|    ##sys#slot	196
o|    scheme#cddr	7
o|    scheme#caddr	14
o|    scheme#not	15
o|    scheme#memq	7
o|    scheme#list	8
o|    scheme#cadr	48
o|    scheme#null?	29
o|    scheme#string?
o|    scheme#pair?	96
o|    scheme#cdr	19
o|    ##sys#cons	141
o|    ##sys#list	292
o|    chicken.fixnum#fx<=	2
o|    scheme#car	45
o|    chicken.fixnum#fx-	4
o|    scheme#cons	128
o|contracted procedure: k4340 
o|contracted procedure: k4347 
o|contracted procedure: k4357 
o|contracted procedure: k5695 
o|contracted procedure: k5727 
o|contracted procedure: k5723 
o|contracted procedure: k5703 
o|contracted procedure: k5719 
o|contracted procedure: k5711 
o|contracted procedure: k5715 
o|contracted procedure: k5707 
o|contracted procedure: k5699 
o|contracted procedure: k5740 
o|contracted procedure: k5813 
o|contracted procedure: k5745 
o|contracted procedure: k5797 
o|contracted procedure: k5758 
o|contracted procedure: k5766 
o|contracted procedure: k5770 
o|contracted procedure: k5762 
o|contracted procedure: k5781 
o|contracted procedure: k5789 
o|contracted procedure: k5778 
o|contracted procedure: k5800 
o|contracted procedure: k5834 
o|contracted procedure: k5847 
o|contracted procedure: k5853 
o|contracted procedure: k5876 
o|contracted procedure: k5872 
o|contracted procedure: k5866 
o|contracted procedure: k5860 
o|contracted procedure: k5892 
o|contracted procedure: k5888 
o|contracted procedure: k6090 
o|contracted procedure: k5899 
o|contracted procedure: k5932 
o|contracted procedure: k5967 
o|contracted procedure: k5963 
o|contracted procedure: k5959 
o|contracted procedure: k5951 
o|contracted procedure: k5977 
o|contracted procedure: k5996 
o|contracted procedure: k5992 
o|contracted procedure: k5988 
o|contracted procedure: k6016 
o|contracted procedure: k6020 
o|contracted procedure: k6036 
o|contracted procedure: k6064 
o|contracted procedure: k6056 
o|contracted procedure: k6060 
o|contracted procedure: k6076 
o|contracted procedure: k6086 
o|contracted procedure: k6079 
o|contracted procedure: k6266 
o|contracted procedure: k6094 
o|contracted procedure: k6127 
o|contracted procedure: k6158 
o|contracted procedure: k6154 
o|contracted procedure: k6150 
o|contracted procedure: k6168 
o|contracted procedure: k6189 
o|contracted procedure: k6183 
o|contracted procedure: k6179 
o|contracted procedure: k6207 
o|contracted procedure: k6211 
o|contracted procedure: k6227 
o|contracted procedure: k6244 
o|contracted procedure: k6252 
o|contracted procedure: k6262 
o|contracted procedure: k6255 
o|contracted procedure: k6279 
o|contracted procedure: k6288 
o|contracted procedure: k6291 
o|contracted procedure: k6294 
o|contracted procedure: k6303 
o|contracted procedure: k6312 
o|contracted procedure: k6315 
o|contracted procedure: k6326 
o|contracted procedure: k6332 
o|contracted procedure: k6634 
o|contracted procedure: k6346 
o|contracted procedure: k6578 
o|contracted procedure: k6582 
o|contracted procedure: k6590 
o|contracted procedure: k6593 
o|contracted procedure: k6574 
o|contracted procedure: k6570 
o|contracted procedure: k6354 
o|contracted procedure: k6558 
o|contracted procedure: k6566 
o|contracted procedure: k6562 
o|contracted procedure: k6362 
o|contracted procedure: k6358 
o|contracted procedure: k6350 
o|contracted procedure: k6342 
o|contracted procedure: k6375 
o|contracted procedure: k6378 
o|contracted procedure: k6554 
o|contracted procedure: k6381 
o|contracted procedure: k6384 
o|contracted procedure: k6501 
o|contracted procedure: k6517 
o|contracted procedure: k6525 
o|contracted procedure: k6521 
o|contracted procedure: k6513 
o|contracted procedure: k6505 
o|contracted procedure: k6509 
o|contracted procedure: k6390 
o|contracted procedure: k6425 
o|contracted procedure: k6436 
o|contracted procedure: k6432 
o|contracted procedure: k6444 
o|contracted procedure: k6451 
o|contracted procedure: k6458 
o|contracted procedure: k6477 
o|contracted procedure: k6493 
o|contracted procedure: k6497 
o|contracted procedure: k6489 
o|contracted procedure: k6481 
o|contracted procedure: k6485 
o|contracted procedure: k6528 
o|contracted procedure: k6534 
o|contracted procedure: k6605 
o|contracted procedure: k6608 
o|contracted procedure: k6611 
o|contracted procedure: k6619 
o|contracted procedure: k6627 
o|contracted procedure: k6643 
o|contracted procedure: k6653 
o|contracted procedure: k6657 
o|contracted procedure: k6666 
o|contracted procedure: k6688 
o|contracted procedure: k6684 
o|contracted procedure: k6669 
o|contracted procedure: k6672 
o|contracted procedure: k6680 
o|contracted procedure: k6718 
o|contracted procedure: k6729 
o|contracted procedure: k6745 
o|contracted procedure: k6757 
o|contracted procedure: k6753 
o|contracted procedure: k6749 
o|contracted procedure: k6775 
o|contracted procedure: k6779 
o|contracted procedure: k6799 
o|contracted procedure: k6795 
o|contracted procedure: k6817 
o|contracted procedure: k7245 
o|contracted procedure: k7249 
o|contracted procedure: k7253 
o|contracted procedure: k7257 
o|contracted procedure: k7261 
o|contracted procedure: k6821 
o|contracted procedure: k6846 
o|contracted procedure: k6861 
o|contracted procedure: k7182 
o|contracted procedure: k7178 
o|contracted procedure: k6907 
o|contracted procedure: k6912 
o|contracted procedure: k6903 
o|contracted procedure: k6924 
o|contracted procedure: k6933 
o|contracted procedure: k6946 
o|contracted procedure: k4398 
o|contracted procedure: k4412 
o|contracted procedure: k4422 
o|contracted procedure: k4416 
o|contracted procedure: k6975 
o|contracted procedure: k6982 
o|contracted procedure: k6985 
o|contracted procedure: k6988 
o|contracted procedure: k7036 
o|contracted procedure: k7000 
o|contracted procedure: k7026 
o|contracted procedure: k7030 
o|contracted procedure: k7022 
o|contracted procedure: k7003 
o|contracted procedure: k7006 
o|contracted procedure: k7014 
o|contracted procedure: k7018 
o|contracted procedure: k7048 
o|contracted procedure: k7070 
o|contracted procedure: k7062 
o|contracted procedure: k7066 
o|contracted procedure: k7058 
o|contracted procedure: k7091 
o|contracted procedure: k7076 
o|contracted procedure: k7085 
o|contracted procedure: k7134 
o|contracted procedure: k7138 
o|contracted procedure: k7122 
o|contracted procedure: k7130 
o|contracted procedure: k7126 
o|contracted procedure: k7101 
o|contracted procedure: k7108 
o|contracted procedure: k7148 
o|contracted procedure: k7159 
o|contracted procedure: k7166 
o|contracted procedure: k7174 
o|contracted procedure: k7186 
o|contracted procedure: k7201 
o|contracted procedure: k7204 
o|contracted procedure: k7216 
o|contracted procedure: k7219 
o|contracted procedure: k7222 
o|contracted procedure: k7230 
o|contracted procedure: k7238 
o|contracted procedure: k7195 
o|contracted procedure: k7413 
o|contracted procedure: k7417 
o|contracted procedure: k7421 
o|contracted procedure: k7265 
o|contracted procedure: k7278 
o|contracted procedure: k7281 
o|contracted procedure: k7409 
o|contracted procedure: k7303 
o|contracted procedure: k7316 
o|contracted procedure: k7323 
o|contracted procedure: k7326 
o|contracted procedure: k7332 
o|contracted procedure: k7382 
o|contracted procedure: k7386 
o|contracted procedure: k7390 
o|contracted procedure: k7378 
o|contracted procedure: k7352 
o|contracted procedure: k7364 
o|contracted procedure: k7368 
o|contracted procedure: k7372 
o|contracted procedure: k7360 
o|contracted procedure: k7356 
o|contracted procedure: k7342 
o|contracted procedure: k7405 
o|contracted procedure: k7401 
o|contracted procedure: k7397 
o|contracted procedure: k7490 
o|contracted procedure: k7494 
o|contracted procedure: k7498 
o|contracted procedure: k7425 
o|contracted procedure: k7486 
o|contracted procedure: k7482 
o|contracted procedure: k7445 
o|contracted procedure: k7453 
o|contracted procedure: k7457 
o|contracted procedure: k7471 
o|contracted procedure: k7460 
o|contracted procedure: k7464 
o|contracted procedure: k7449 
o|contracted procedure: k7942 
o|contracted procedure: k7946 
o|contracted procedure: k7950 
o|contracted procedure: k7502 
o|contracted procedure: k7515 
o|contracted procedure: k7518 
o|contracted procedure: k7615 
o|contracted procedure: k7625 
o|contracted procedure: k7632 
o|contracted procedure: k7684 
o|contracted procedure: k7636 
o|contracted procedure: k7676 
o|contracted procedure: k7660 
o|contracted procedure: k7668 
o|contracted procedure: k7664 
o|contracted procedure: k7644 
o|contracted procedure: k7640 
o|contracted procedure: k7656 
o|contracted procedure: k7701 
o|contracted procedure: k7704 
o|contracted procedure: k7723 
o|contracted procedure: k7735 
o|contracted procedure: k7741 
o|contracted procedure: k7753 
o|contracted procedure: k7786 
o|contracted procedure: k7802 
o|contracted procedure: k7798 
o|contracted procedure: k7794 
o|contracted procedure: k7790 
o|contracted procedure: k7782 
o|contracted procedure: k7548 
o|contracted procedure: k7551 
o|contracted procedure: k7572 
o|contracted procedure: k7584 
o|contracted procedure: k7576 
o|contracted procedure: k7558 
o|contracted procedure: k7600 
o|contracted procedure: k7596 
o|contracted procedure: k7811 
o|contracted procedure: k7814 
o|contracted procedure: k7817 
o|contracted procedure: k7825 
o|contracted procedure: k7833 
o|contracted procedure: k7845 
o|contracted procedure: k7867 
o|contracted procedure: k7863 
o|contracted procedure: k7848 
o|contracted procedure: k7851 
o|contracted procedure: k7859 
o|contracted procedure: k7879 
o|contracted procedure: k7882 
o|contracted procedure: k7885 
o|contracted procedure: k7893 
o|contracted procedure: k7901 
o|contracted procedure: k7913 
o|contracted procedure: k7935 
o|contracted procedure: k7931 
o|contracted procedure: k7916 
o|contracted procedure: k7919 
o|contracted procedure: k7927 
o|contracted procedure: k7963 
o|contracted procedure: k7977 
o|contracted procedure: k7984 
o|contracted procedure: k7987 
o|contracted procedure: k8092 
o|contracted procedure: k7994 
o|contracted procedure: k8019 
o|contracted procedure: k8007 
o|contracted procedure: k8011 
o|contracted procedure: k8088 
o|contracted procedure: k8029 
o|contracted procedure: k8051 
o|contracted procedure: k8039 
o|contracted procedure: k8043 
o|contracted procedure: k8084 
o|contracted procedure: k8080 
o|contracted procedure: k8068 
o|contracted procedure: k8072 
o|contracted procedure: k8107 
o|contracted procedure: k8179 
o|contracted procedure: k8110 
o|contracted procedure: k8159 
o|contracted procedure: k8122 
o|contracted procedure: k8155 
o|contracted procedure: k8151 
o|contracted procedure: k8134 
o|contracted procedure: k8162 
o|contracted procedure: k8169 
o|contracted procedure: k8192 
o|contracted procedure: k8240 
o|contracted procedure: k8196 
o|contracted procedure: k8236 
o|contracted procedure: k8216 
o|contracted procedure: k8232 
o|contracted procedure: k8224 
o|contracted procedure: k8220 
o|contracted procedure: k8262 
o|contracted procedure: k8275 
o|contracted procedure: k8280 
o|contracted procedure: k8283 
o|contracted procedure: k8289 
o|contracted procedure: k8303 
o|contracted procedure: k8311 
o|contracted procedure: k8317 
o|contracted procedure: k8299 
o|contracted procedure: k8328 
o|contracted procedure: k8331 
o|contracted procedure: k8379 
o|contracted procedure: k8343 
o|contracted procedure: k8346 
o|contracted procedure: k8349 
o|contracted procedure: k8357 
o|contracted procedure: k8361 
o|contracted procedure: k8369 
o|contracted procedure: k8373 
o|contracted procedure: k8391 
o|contracted procedure: k8413 
o|contracted procedure: k8409 
o|contracted procedure: k8394 
o|contracted procedure: k8397 
o|contracted procedure: k8405 
o|contracted procedure: k8425 
o|contracted procedure: k8432 
o|contracted procedure: k8452 
o|contracted procedure: k8461 
o|contracted procedure: k8483 
o|contracted procedure: k8479 
o|contracted procedure: k8464 
o|contracted procedure: k8467 
o|contracted procedure: k8475 
o|contracted procedure: k8495 
o|contracted procedure: k8517 
o|contracted procedure: k8513 
o|contracted procedure: k8498 
o|contracted procedure: k8501 
o|contracted procedure: k8509 
o|contracted procedure: k8533 
o|contracted procedure: k8550 
o|contracted procedure: k8557 
o|contracted procedure: k8574 
o|contracted procedure: k8564 
o|contracted procedure: k8587 
o|contracted procedure: k8617 
o|contracted procedure: k8597 
o|contracted procedure: k8607 
o|contracted procedure: k8625 
o|contracted procedure: k8655 
o|contracted procedure: k8631 
o|contracted procedure: k8651 
o|contracted procedure: k8660 
o|contracted procedure: k8663 
o|contracted procedure: k8672 
o|contracted procedure: k8688 
o|contracted procedure: k8700 
o|contracted procedure: k8710 
o|contracted procedure: k8727 
o|contracted procedure: k8738 
o|contracted procedure: k8750 
o|contracted procedure: k8734 
o|contracted procedure: k8762 
o|contracted procedure: k8765 
o|contracted procedure: k8768 
o|contracted procedure: k8776 
o|contracted procedure: k8784 
o|contracted procedure: k8820 
o|contracted procedure: k8824 
o|contracted procedure: k8816 
o|contracted procedure: k8800 
o|contracted procedure: k8808 
o|contracted procedure: k8853 
o|contracted procedure: k8831 
o|contracted procedure: k8835 
o|contracted procedure: k8845 
o|contracted procedure: k8867 
o|contracted procedure: k8856 
o|contracted procedure: k8863 
o|contracted procedure: k8876 
o|contracted procedure: k8898 
o|contracted procedure: k8894 
o|contracted procedure: k8879 
o|contracted procedure: k8882 
o|contracted procedure: k8890 
o|contracted procedure: k8910 
o|contracted procedure: k8916 
o|contracted procedure: k8945 
o|contracted procedure: k8927 
o|inlining procedure: k8919 
o|inlining procedure: k8919 
o|contracted procedure: k8954 
o|contracted procedure: k8957 
o|contracted procedure: k8960 
o|contracted procedure: k8968 
o|contracted procedure: k8976 
o|contracted procedure: k8988 
o|contracted procedure: k8991 
o|contracted procedure: k9002 
o|contracted procedure: k9011 
o|inlining procedure: k8994 
o|contracted procedure: k9026 
o|contracted procedure: k9048 
o|contracted procedure: k9044 
o|contracted procedure: k9029 
o|contracted procedure: k9032 
o|contracted procedure: k9040 
o|contracted procedure: k9076 
o|contracted procedure: k9084 
o|contracted procedure: k9088 
o|contracted procedure: k9092 
o|contracted procedure: k9110 
o|contracted procedure: k9116 
o|contracted procedure: k9133 
o|contracted procedure: k9155 
o|contracted procedure: k9151 
o|contracted procedure: k9136 
o|contracted procedure: k9139 
o|contracted procedure: k9147 
o|contracted procedure: k9167 
o|contracted procedure: k9177 
o|contracted procedure: k9181 
o|contracted procedure: k9198 
o|contracted procedure: k9202 
o|contracted procedure: k9219 
o|contracted procedure: k9223 
o|contracted procedure: k9227 
o|contracted procedure: k9247 
o|contracted procedure: k9251 
o|contracted procedure: k9268 
o|contracted procedure: k9288 
o|contracted procedure: k9294 
o|contracted procedure: k9297 
o|contracted procedure: k9309 
o|contracted procedure: k9312 
o|contracted procedure: k9315 
o|contracted procedure: k9323 
o|contracted procedure: k9331 
o|contracted procedure: k9362 
o|contracted procedure: k9370 
o|contracted procedure: k9373 
o|contracted procedure: k9379 
o|contracted procedure: k9385 
o|contracted procedure: k9350 
o|contracted procedure: k9397 
o|contracted procedure: k9403 
o|contracted procedure: k9418 
o|contracted procedure: k9437 
o|contracted procedure: k9440 
o|contracted procedure: k9451 
o|contracted procedure: k9454 
o|contracted procedure: k9457 
o|contracted procedure: k9468 
o|contracted procedure: k9950 
o|contracted procedure: k9946 
o|contracted procedure: k9479 
o|contracted procedure: k9721 
o|contracted procedure: k9734 
o|contracted procedure: k9730 
o|contracted procedure: k9737 
o|contracted procedure: k9717 
o|contracted procedure: k9713 
o|contracted procedure: k9487 
o|contracted procedure: k9709 
o|contracted procedure: k9491 
o|contracted procedure: k9507 
o|contracted procedure: k9503 
o|contracted procedure: k9499 
o|contracted procedure: k9495 
o|contracted procedure: k9483 
o|contracted procedure: k9475 
o|contracted procedure: k9464 
o|contracted procedure: k9447 
o|contracted procedure: k9527 
o|contracted procedure: k9539 
o|contracted procedure: k9592 
o|contracted procedure: k9556 
o|contracted procedure: k9582 
o|contracted procedure: k9586 
o|contracted procedure: k9578 
o|contracted procedure: k9559 
o|contracted procedure: k9562 
o|contracted procedure: k9570 
o|contracted procedure: k9574 
o|contracted procedure: k9640 
o|contracted procedure: k9604 
o|contracted procedure: k9630 
o|contracted procedure: k9634 
o|contracted procedure: k9626 
o|contracted procedure: k9607 
o|contracted procedure: k9610 
o|contracted procedure: k9618 
o|contracted procedure: k9622 
o|contracted procedure: k9682 
o|contracted procedure: k9690 
o|contracted procedure: k9516 
o|contracted procedure: k9678 
o|contracted procedure: k9655 
o|contracted procedure: k9658 
o|contracted procedure: k9666 
o|contracted procedure: k9670 
o|contracted procedure: k9674 
o|contracted procedure: k9696 
o|contracted procedure: k9702 
o|contracted procedure: k9748 
o|contracted procedure: k9768 
o|contracted procedure: k9784 
o|contracted procedure: k9780 
o|contracted procedure: k9829 
o|contracted procedure: k9793 
o|contracted procedure: k9819 
o|contracted procedure: k9823 
o|contracted procedure: k9815 
o|contracted procedure: k9796 
o|contracted procedure: k9799 
o|contracted procedure: k9807 
o|contracted procedure: k9811 
o|contracted procedure: k9877 
o|contracted procedure: k9841 
o|contracted procedure: k9867 
o|contracted procedure: k9871 
o|contracted procedure: k9757 
o|contracted procedure: k9863 
o|contracted procedure: k9844 
o|contracted procedure: k9847 
o|contracted procedure: k9855 
o|contracted procedure: k9859 
o|contracted procedure: k9892 
o|contracted procedure: k9895 
o|contracted procedure: k9903 
o|contracted procedure: k9907 
o|contracted procedure: k9911 
o|contracted procedure: k9919 
o|contracted procedure: k9923 
o|contracted procedure: k9927 
o|contracted procedure: k9933 
o|contracted procedure: k9939 
o|contracted procedure: k9995 
o|contracted procedure: k9959 
o|contracted procedure: k9985 
o|contracted procedure: k9989 
o|contracted procedure: k9981 
o|contracted procedure: k9962 
o|contracted procedure: k9965 
o|contracted procedure: k9973 
o|contracted procedure: k9977 
o|contracted procedure: k10043 
o|contracted procedure: k10007 
o|contracted procedure: k10033 
o|contracted procedure: k10037 
o|contracted procedure: k10029 
o|contracted procedure: k10010 
o|contracted procedure: k10013 
o|contracted procedure: k10021 
o|contracted procedure: k10025 
o|contracted procedure: k10091 
o|contracted procedure: k10055 
o|contracted procedure: k10081 
o|contracted procedure: k10085 
o|contracted procedure: k10077 
o|contracted procedure: k10058 
o|contracted procedure: k10061 
o|contracted procedure: k10069 
o|contracted procedure: k10073 
o|contracted procedure: k10103 
o|contracted procedure: k10106 
o|contracted procedure: k10109 
o|contracted procedure: k10117 
o|contracted procedure: k10137 
o|contracted procedure: k10140 
o|contracted procedure: k10143 
o|contracted procedure: k10151 
o|contracted procedure: k10171 
o|contracted procedure: k10174 
o|contracted procedure: k10177 
o|contracted procedure: k10185 
o|contracted procedure: k10193 
o|contracted procedure: k10205 
o|contracted procedure: k10227 
o|contracted procedure: k10223 
o|contracted procedure: k10208 
o|contracted procedure: k10211 
o|contracted procedure: k10219 
o|contracted procedure: k10239 
o|contracted procedure: k10261 
o|contracted procedure: k10257 
o|contracted procedure: k10242 
o|contracted procedure: k10245 
o|contracted procedure: k10253 
o|contracted procedure: k10277 
o|contracted procedure: k10282 
o|contracted procedure: k10285 
o|contracted procedure: k10291 
o|contracted procedure: k10306 
o|contracted procedure: k10489 
o|contracted procedure: k10333 
o|contracted procedure: k10485 
o|contracted procedure: k10337 
o|contracted procedure: k10345 
o|contracted procedure: k10341 
o|contracted procedure: k10329 
o|contracted procedure: k10353 
o|contracted procedure: k10369 
o|contracted procedure: k10385 
o|contracted procedure: k10381 
o|contracted procedure: k10430 
o|contracted procedure: k10394 
o|contracted procedure: k10420 
o|contracted procedure: k10424 
o|contracted procedure: k10416 
o|contracted procedure: k10397 
o|contracted procedure: k10400 
o|contracted procedure: k10408 
o|contracted procedure: k10412 
o|contracted procedure: k10478 
o|contracted procedure: k10442 
o|contracted procedure: k10468 
o|contracted procedure: k10472 
o|contracted procedure: k10464 
o|contracted procedure: k10445 
o|contracted procedure: k10448 
o|contracted procedure: k10456 
o|contracted procedure: k10460 
o|contracted procedure: k10497 
o|contracted procedure: k10505 
o|contracted procedure: k10516 
o|contracted procedure: k10532 
o|contracted procedure: k10528 
o|contracted procedure: k10577 
o|contracted procedure: k10541 
o|contracted procedure: k10567 
o|contracted procedure: k10571 
o|contracted procedure: k10563 
o|contracted procedure: k10544 
o|contracted procedure: k10547 
o|contracted procedure: k10555 
o|contracted procedure: k10559 
o|contracted procedure: k10625 
o|contracted procedure: k10589 
o|contracted procedure: k10615 
o|contracted procedure: k10619 
o|contracted procedure: k10611 
o|contracted procedure: k10592 
o|contracted procedure: k10595 
o|contracted procedure: k10603 
o|contracted procedure: k10607 
o|contracted procedure: k10632 
o|contracted procedure: k10635 
o|contracted procedure: k10641 
o|contracted procedure: k10644 
o|contracted procedure: k10651 
o|contracted procedure: k10657 
o|contracted procedure: k10660 
o|contracted procedure: k10708 
o|contracted procedure: k10672 
o|contracted procedure: k10698 
o|contracted procedure: k10702 
o|contracted procedure: k10694 
o|contracted procedure: k10675 
o|contracted procedure: k10678 
o|contracted procedure: k10686 
o|contracted procedure: k10690 
o|contracted procedure: k10722 
o|contracted procedure: k10733 
o|contracted procedure: k10778 
o|contracted procedure: k10742 
o|contracted procedure: k10768 
o|contracted procedure: k10772 
o|contracted procedure: k10764 
o|contracted procedure: k10745 
o|contracted procedure: k10748 
o|contracted procedure: k10756 
o|contracted procedure: k10760 
o|contracted procedure: k10790 
o|contracted procedure: k10812 
o|contracted procedure: k10808 
o|contracted procedure: k10793 
o|contracted procedure: k10796 
o|contracted procedure: k10804 
o|contracted procedure: k10824 
o|contracted procedure: k10827 
o|contracted procedure: k10830 
o|contracted procedure: k10838 
o|contracted procedure: k10858 
o|contracted procedure: k10861 
o|contracted procedure: k10864 
o|contracted procedure: k10872 
o|contracted procedure: k10892 
o|contracted procedure: k10914 
o|contracted procedure: k10910 
o|contracted procedure: k10895 
o|contracted procedure: k10898 
o|contracted procedure: k10906 
o|contracted procedure: k10934 
o|contracted procedure: k10951 
o|contracted procedure: k10972 
o|contracted procedure: k10968 
o|contracted procedure: k10986 
o|contracted procedure: k11079 
o|contracted procedure: k11002 
o|contracted procedure: k11013 
o|contracted procedure: k11009 
o|contracted procedure: k11021 
o|contracted procedure: k11024 
o|contracted procedure: k11070 
o|contracted procedure: k11033 
o|contracted procedure: k11052 
o|contracted procedure: k11048 
o|contracted procedure: k11044 
o|contracted procedure: k11040 
o|contracted procedure: k11059 
o|contracted procedure: k11067 
o|contracted procedure: k11063 
o|contracted procedure: k11092 
o|contracted procedure: k11104 
o|contracted procedure: k11116 
o|contracted procedure: k11124 
o|contracted procedure: k11139 
o|contracted procedure: k11151 
o|contracted procedure: k11167 
o|contracted procedure: k11157 
o|inlining procedure: k11130 
o|inlining procedure: k11130 
o|inlining procedure: k11130 
o|contracted procedure: k11174 
o|contracted procedure: k11426 
o|contracted procedure: k11188 
o|contracted procedure: k11416 
o|contracted procedure: k11412 
o|contracted procedure: k11408 
o|contracted procedure: k11404 
o|contracted procedure: k11196 
o|contracted procedure: k11382 
o|contracted procedure: k11390 
o|contracted procedure: k11386 
o|contracted procedure: k11378 
o|contracted procedure: k11204 
o|contracted procedure: k11200 
o|contracted procedure: k11192 
o|contracted procedure: k11184 
o|contracted procedure: k11217 
o|contracted procedure: k11220 
o|contracted procedure: k11370 
o|contracted procedure: k11223 
o|contracted procedure: k11335 
o|contracted procedure: k11351 
o|contracted procedure: k11347 
o|contracted procedure: k11339 
o|contracted procedure: k11343 
o|contracted procedure: k11235 
o|contracted procedure: k11242 
o|contracted procedure: k11250 
o|contracted procedure: k11254 
o|contracted procedure: k11270 
o|contracted procedure: k11266 
o|contracted procedure: k11285 
o|contracted procedure: k11301 
o|contracted procedure: k11297 
o|contracted procedure: k11289 
o|contracted procedure: k11293 
o|contracted procedure: k11281 
o|contracted procedure: k11308 
o|contracted procedure: k11324 
o|contracted procedure: k11320 
o|contracted procedure: k11312 
o|contracted procedure: k11316 
o|contracted procedure: k11331 
o|contracted procedure: k11363 
o|contracted procedure: k11435 
o|contracted procedure: k11438 
o|contracted procedure: k11441 
o|contracted procedure: k11449 
o|contracted procedure: k11457 
o|contracted procedure: k11491 
o|contracted procedure: k11501 
o|contracted procedure: k11510 
o|contracted procedure: k11513 
o|contracted procedure: k11524 
o|contracted procedure: k11530 
o|contracted procedure: k11558 
o|contracted procedure: k11577 
o|contracted procedure: k11585 
o|contracted procedure: k11589 
o|contracted procedure: k11608 
o|contracted procedure: k11627 
o|contracted procedure: k11635 
o|contracted procedure: k11639 
o|contracted procedure: k11649 
o|contracted procedure: k11658 
o|contracted procedure: k11673 
o|contracted procedure: k11669 
o|contracted procedure: k11682 
o|contracted procedure: k11704 
o|contracted procedure: k11685 
o|contracted procedure: k11700 
o|contracted procedure: k11696 
o|contracted procedure: k11710 
o|contracted procedure: k11713 
o|contracted procedure: k11719 
o|contracted procedure: k11726 
o|contracted procedure: k11729 
o|contracted procedure: k11736 
o|contracted procedure: k11765 
o|contracted procedure: k11757 
o|contracted procedure: k11785 
o|contracted procedure: k11795 
o|contracted procedure: k11791 
o|contracted procedure: k11812 
o|contracted procedure: k11872 
o|contracted procedure: k11828 
o|contracted procedure: k11848 
o|contracted procedure: k11852 
o|contracted procedure: k11856 
o|contracted procedure: k11844 
o|contracted procedure: k11864 
o|contracted procedure: k11868 
o|contracted procedure: k11885 
o|contracted procedure: k11995 
o|contracted procedure: k11991 
o|contracted procedure: k11898 
o|contracted procedure: k11914 
o|contracted procedure: k11930 
o|contracted procedure: k11935 
o|contracted procedure: k11945 
o|contracted procedure: k11950 
o|contracted procedure: k11910 
o|contracted procedure: k11906 
o|contracted procedure: k11902 
o|contracted procedure: k11962 
o|contracted procedure: k11965 
o|contracted procedure: k11968 
o|contracted procedure: k11976 
o|contracted procedure: k11984 
o|contracted procedure: k12345 
o|contracted procedure: k12008 
o|contracted procedure: k12014 
o|contracted procedure: k12017 
o|contracted procedure: k12030 
o|contracted procedure: k12042 
o|contracted procedure: k12051 
o|contracted procedure: k12150 
o|contracted procedure: k12058 
o|contracted procedure: k12142 
o|contracted procedure: k12146 
o|contracted procedure: k12062 
o|contracted procedure: k12070 
o|contracted procedure: k12078 
o|contracted procedure: k12074 
o|contracted procedure: k12066 
o|contracted procedure: k12135 
o|contracted procedure: k12099 
o|contracted procedure: k12125 
o|contracted procedure: k12129 
o|contracted procedure: k12087 
o|contracted procedure: k12121 
o|contracted procedure: k12102 
o|contracted procedure: k12105 
o|contracted procedure: k12113 
o|contracted procedure: k12117 
o|contracted procedure: k12157 
o|contracted procedure: k12164 
o|contracted procedure: k12172 
o|contracted procedure: k12184 
o|contracted procedure: k12187 
o|contracted procedure: k12190 
o|contracted procedure: k12198 
o|contracted procedure: k12206 
o|contracted procedure: k12228 
o|contracted procedure: k12235 
o|contracted procedure: k12243 
o|contracted procedure: k12247 
o|contracted procedure: k12250 
o|contracted procedure: k12256 
o|contracted procedure: k12265 
o|contracted procedure: k12269 
o|contracted procedure: k12300 
o|contracted procedure: k12284 
o|contracted procedure: k12288 
o|contracted procedure: k12296 
o|contracted procedure: k12306 
o|contracted procedure: k12312 
o|contracted procedure: k12319 
o|contracted procedure: k12341 
o|contracted procedure: k12330 
o|contracted procedure: k12355 
o|contracted procedure: k12364 
o|contracted procedure: k12372 
o|contracted procedure: k12375 
o|contracted procedure: k12381 
o|contracted procedure: k12393 
o|contracted procedure: k12396 
o|contracted procedure: k12402 
o|contracted procedure: k12413 
o|contracted procedure: k12443 
o|contracted procedure: k12439 
o|contracted procedure: k12431 
o|contracted procedure: k12427 
o|contracted procedure: k12452 
o|contracted procedure: k12474 
o|contracted procedure: k12390 
o|contracted procedure: k12470 
o|contracted procedure: k12455 
o|contracted procedure: k12458 
o|contracted procedure: k12466 
o|contracted procedure: k12486 
o|contracted procedure: k12508 
o|contracted procedure: k12504 
o|contracted procedure: k12489 
o|contracted procedure: k12492 
o|contracted procedure: k12500 
o|contracted procedure: k12517 
o|contracted procedure: k12545 
o|contracted procedure: k12564 
o|contracted procedure: k12572 
o|contracted procedure: k12576 
o|contracted procedure: k12595 
o|contracted procedure: k12613 
o|contracted procedure: k12623 
o|contracted procedure: k12630 
o|contracted procedure: k12633 
o|contracted procedure: k12639 
o|contracted procedure: k12646 
o|contracted procedure: k12650 
o|contracted procedure: k12654 
o|contracted procedure: k12692 
o|contracted procedure: k12670 
o|contracted procedure: k12684 
o|contracted procedure: k12688 
o|contracted procedure: k12799 
o|contracted procedure: k12708 
o|contracted procedure: k12735 
o|contracted procedure: k12791 
o|contracted procedure: k12787 
o|contracted procedure: k12783 
o|contracted procedure: k12749 
o|contracted procedure: k12745 
o|contracted procedure: k12772 
o|contracted procedure: k12768 
o|contracted procedure: k12761 
o|contracted procedure: k12779 
o|contracted procedure: k12795 
o|contracted procedure: k13072 
o|contracted procedure: k12803 
o|contracted procedure: k12953 
o|contracted procedure: k12948 
o|contracted procedure: k12834 
o|contracted procedure: k12837 
o|contracted procedure: k12846 
o|contracted procedure: k12864 
o|contracted procedure: k12873 
o|contracted procedure: k12876 
o|contracted procedure: k12860 
o|contracted procedure: k12856 
o|contracted procedure: k12888 
o|contracted procedure: k12891 
o|contracted procedure: k12894 
o|contracted procedure: k12902 
o|contracted procedure: k12910 
o|contracted procedure: k12932 
o|contracted procedure: k12924 
o|contracted procedure: k12928 
o|contracted procedure: k12920 
o|contracted procedure: k12939 
o|contracted procedure: k13068 
o|contracted procedure: k13060 
o|contracted procedure: k13064 
o|contracted procedure: k13056 
o|contracted procedure: k13052 
o|contracted procedure: k12972 
o|contracted procedure: k12976 
o|contracted procedure: k12979 
o|contracted procedure: k12982 
o|contracted procedure: k12988 
o|contracted procedure: k12964 
o|contracted procedure: k12968 
o|contracted procedure: k13003 
o|contracted procedure: k13014 
o|contracted procedure: k13010 
o|contracted procedure: k13000 
o|contracted procedure: k13023 
o|contracted procedure: k13026 
o|contracted procedure: k13029 
o|contracted procedure: k13037 
o|contracted procedure: k13045 
o|contracted procedure: k13179 
o|contracted procedure: k13076 
o|contracted procedure: k13111 
o|contracted procedure: k13175 
o|contracted procedure: k13159 
o|contracted procedure: k13171 
o|contracted procedure: k13167 
o|contracted procedure: k13163 
o|contracted procedure: k13119 
o|contracted procedure: k13151 
o|contracted procedure: k13131 
o|contracted procedure: k13147 
o|contracted procedure: k13143 
o|contracted procedure: k13139 
o|contracted procedure: k13135 
o|contracted procedure: k13127 
o|contracted procedure: k13123 
o|contracted procedure: k13115 
o|contracted procedure: k13107 
o|contracted procedure: k13099 
o|simplifications: ((if . 5) (let . 234)) 
o|removed binding forms: 1042 
o|inlining procedure: k6788 
o|contracted procedure: k8793 
o|substituted constant variable: r1113114557 
o|substituted constant variable: r1113114558 
o|inlining procedure: k11274 
o|inlining procedure: k11274 
o|contracted procedure: k11655 
o|inlining procedure: k11926 
o|inlining procedure: k11926 
o|simplifications: ((let . 1)) 
o|removed binding forms: 3 
o|removed conditional forms: 2 
o|substituted constant variable: r1192714728 
o|replaced variables: 2 
o|removed binding forms: 3 
o|removed binding forms: 3 
o|direct leaf routine/allocation: g30643073 0 
o|direct leaf routine/allocation: g18461857 30 
o|direct leaf routine/allocation: g627636 15 
o|contracted procedure: "(chicken-syntax.scm:1111) k6623" 
o|contracted procedure: "(chicken-syntax.scm:508) k9915" 
o|contracted procedure: "(chicken-syntax.scm:95) k12906" 
o|removed binding forms: 3 
o|customizable procedures: (parse-clause601 map-loop652669 k12840 map-loop621642 k12757 k12616 loop738759 loop738775 map-loop786804 map-loop814832 k12275 loop857 loop2871 map-loop881906 k12154 map-loop915939 g975984 map-loop969991 k11679 loop10891110 loop10891121 g11641173 map-loop11581184 k11262 mapslots1194 k11130 map-loop12771294 g13101319 map-loop13041322 g13381347 map-loop13321350 map-loop13831400 map-loop13621407 loop1438 map-loop14191441 map-loop14531477 map-loop14891513 map-loop15251549 map-loop15611585 map-loop16071624 map-loop16341651 g16671676 map-loop16611679 g16951704 map-loop16891707 g17231732 map-loop17171735 map-loop17471766 map-loop17781797 map-loop18091828 k9889 map-loop18401867 map-loop18821906 map-loop19181942 k9652 map-loop19541981 map-loop19962020 map-loop20322056 g20822091 map-loop20762121 for-each-loop21572184 map-loop21672197 map-loop22282245 loop2253 g22722281 map-loop22662284 loop2294 map-loop23522370 fold2304 g23232332 map-loop23172335 fold2386 map-loop24052422 map-loop24312448 foldl24832487 map-loop24602499 map-loop25082527 k8113 k8125 fold2586 map-loop26602677 g26962705 map-loop26902708 map-loop27182735 g27532762 map-loop27472765 recur2630 make-if-tree2624 prefix-sym2684 recur2645 loop2813 map-loop28432864 genvars2835 foldr28862889 g28912892 k6949 build2911 map-loop29342953 loop126 loop2837 map-loop30113028 g30383048 for-each-loop30373051 map-loop30583076 k6387 k6393 k6400 k6408 loop3083 loop3128 loop3158 k5751 k5774 take) 
o|calls to known targets: 248 
o|identified direct recursive calls: f_4335 1 
o|identified direct recursive calls: f_6600 1 
o|identified direct recursive calls: f_6661 1 
o|identified direct recursive calls: f_4393 1 
o|identified direct recursive calls: f_6995 1 
o|identified direct recursive calls: f_6919 1 
o|identified direct recursive calls: f_7840 1 
o|identified direct recursive calls: f_7908 1 
o|identified direct recursive calls: f_8386 1 
o|identified direct recursive calls: f_8456 1 
o|identified direct recursive calls: f_8490 1 
o|identified direct recursive calls: f_8545 1 
o|identified direct recursive calls: f_8722 2 
o|identified direct recursive calls: f_8871 1 
o|identified direct recursive calls: f_8983 1 
o|identified direct recursive calls: f_9021 1 
o|identified direct recursive calls: f_9128 1 
o|identified direct recursive calls: f_9551 1 
o|identified direct recursive calls: f_9599 1 
o|identified direct recursive calls: f_9788 1 
o|identified direct recursive calls: f_9836 1 
o|identified direct recursive calls: f_9954 1 
o|identified direct recursive calls: f_10002 1 
o|identified direct recursive calls: f_10050 1 
o|identified direct recursive calls: f_10200 1 
o|identified direct recursive calls: f_10234 1 
o|identified direct recursive calls: f_10389 1 
o|identified direct recursive calls: f_10437 1 
o|identified direct recursive calls: f_10536 1 
o|identified direct recursive calls: f_10584 1 
o|identified direct recursive calls: f_10667 1 
o|identified direct recursive calls: f_10717 1 
o|identified direct recursive calls: f_10737 1 
o|identified direct recursive calls: f_10785 1 
o|identified direct recursive calls: f_10887 1 
o|identified direct recursive calls: f_12094 1 
o|identified direct recursive calls: f_12223 1 
o|identified direct recursive calls: f_12037 1 
o|identified direct recursive calls: f_12447 1 
o|identified direct recursive calls: f_12481 1 
o|identified direct recursive calls: f_12883 1 
o|fast box initializations: 78 
o|fast global references: 2 
o|fast global assignments: 1 
o|dropping unused closure argument: f_4335 
o|dropping unused closure argument: f_7710 
*/
/* end of file */
