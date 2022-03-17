/* Generated from srfi-4.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.3.0rc4 ((HEAD detached at 5.3.0rc4)) (rev b6cbb1ba)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: srfi-4.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file srfi-4.c -emit-import-library srfi-4
   unit: srfi-4
   uses: extras expand library
*/
#include "chicken.h"

#define C_copy_subvector(to, from, start_to, start_from, bytes)   \
  (C_memcpy((C_char *)C_data_pointer(to) + C_unfix(start_to), (C_char *)C_data_pointer(from) + C_unfix(start_from), C_unfix(bytes)), \
    C_SCHEME_UNDEFINED)

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_expand_toplevel)
C_externimport void C_ccall C_expand_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[277];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,26),40,115,114,102,105,45,52,35,117,56,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,41,0,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,26),40,115,114,102,105,45,52,35,115,56,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,41,0,0,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,27),40,115,114,102,105,45,52,35,117,49,54,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,41,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,27),40,115,114,102,105,45,52,35,115,49,54,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,41,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,27),40,115,114,102,105,45,52,35,117,51,50,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,41,0,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,27),40,115,114,102,105,45,52,35,115,51,50,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,41,0,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,27),40,115,114,102,105,45,52,35,117,54,52,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,41,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,27),40,115,114,102,105,45,52,35,115,54,52,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,41,0,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,27),40,115,114,102,105,45,52,35,102,51,50,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,41,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,27),40,115,114,102,105,45,52,35,102,54,52,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,41,0,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,28),40,115,114,102,105,45,52,35,117,56,118,101,99,116,111,114,45,115,101,116,33,32,120,32,105,32,121,41,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,28),40,115,114,102,105,45,52,35,115,56,118,101,99,116,111,114,45,115,101,116,33,32,120,32,105,32,121,41,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,29),40,115,114,102,105,45,52,35,117,49,54,118,101,99,116,111,114,45,115,101,116,33,32,120,32,105,32,121,41,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,29),40,115,114,102,105,45,52,35,115,49,54,118,101,99,116,111,114,45,115,101,116,33,32,120,32,105,32,121,41,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,29),40,115,114,102,105,45,52,35,117,51,50,118,101,99,116,111,114,45,115,101,116,33,32,120,32,105,32,121,41,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,29),40,115,114,102,105,45,52,35,115,51,50,118,101,99,116,111,114,45,115,101,116,33,32,120,32,105,32,121,41,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,29),40,115,114,102,105,45,52,35,117,54,52,118,101,99,116,111,114,45,115,101,116,33,32,120,32,105,32,121,41,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,29),40,115,114,102,105,45,52,35,115,54,52,118,101,99,116,111,114,45,115,101,116,33,32,120,32,105,32,121,41,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,29),40,115,114,102,105,45,52,35,102,51,50,118,101,99,116,111,114,45,115,101,116,33,32,120,32,105,32,121,41,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,29),40,115,114,102,105,45,52,35,102,54,52,118,101,99,116,111,114,45,115,101,116,33,32,120,32,105,32,121,41,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,16),40,101,120,116,45,102,114,101,101,32,98,118,50,50,55,41};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,32),40,97,108,108,111,99,32,108,111,99,32,101,108,101,109,45,115,105,122,101,32,101,108,101,109,115,32,101,120,116,63,41};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,32),40,115,114,102,105,45,52,35,114,101,108,101,97,115,101,45,110,117,109,98,101,114,45,118,101,99,116,111,114,32,118,41};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,50,55,52,41,0,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,33),40,115,114,102,105,45,52,35,109,97,107,101,45,117,56,118,101,99,116,111,114,32,108,101,110,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,51,48,56,41,0,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,33),40,115,114,102,105,45,52,35,109,97,107,101,45,115,56,118,101,99,116,111,114,32,108,101,110,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,51,52,50,41,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,34),40,115,114,102,105,45,52,35,109,97,107,101,45,117,49,54,118,101,99,116,111,114,32,108,101,110,32,46,32,114,101,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,51,55,54,41,0,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,34),40,115,114,102,105,45,52,35,109,97,107,101,45,115,49,54,118,101,99,116,111,114,32,108,101,110,32,46,32,114,101,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,52,49,48,41,0,0,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,34),40,115,114,102,105,45,52,35,109,97,107,101,45,117,51,50,118,101,99,116,111,114,32,108,101,110,32,46,32,114,101,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,52,52,52,41,0,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,34),40,115,114,102,105,45,52,35,109,97,107,101,45,117,54,52,118,101,99,116,111,114,32,108,101,110,32,46,32,114,101,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,52,55,56,41,0,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,34),40,115,114,102,105,45,52,35,109,97,107,101,45,115,51,50,118,101,99,116,111,114,32,108,101,110,32,46,32,114,101,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,53,49,50,41,0,0,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,34),40,115,114,102,105,45,52,35,109,97,107,101,45,115,54,52,118,101,99,116,111,114,32,108,101,110,32,46,32,114,101,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,53,52,55,41,0,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,34),40,115,114,102,105,45,52,35,109,97,107,101,45,102,51,50,118,101,99,116,111,114,32,108,101,110,32,46,32,114,101,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,53,56,51,41,0,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,34),40,115,114,102,105,45,52,35,109,97,107,101,45,102,54,52,118,101,99,116,111,114,32,108,101,110,32,46,32,114,101,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,15),40,100,111,108,111,111,112,54,49,56,32,112,32,105,41,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,27),40,115,114,102,105,45,52,35,108,105,115,116,45,62,117,56,118,101,99,116,111,114,32,108,115,116,41,0,0,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,15),40,100,111,108,111,111,112,54,51,49,32,112,32,105,41,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,27),40,115,114,102,105,45,52,35,108,105,115,116,45,62,115,56,118,101,99,116,111,114,32,108,115,116,41,0,0,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,15),40,100,111,108,111,111,112,54,52,52,32,112,32,105,41,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,28),40,115,114,102,105,45,52,35,108,105,115,116,45,62,117,49,54,118,101,99,116,111,114,32,108,115,116,41,0,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,15),40,100,111,108,111,111,112,54,53,55,32,112,32,105,41,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,28),40,115,114,102,105,45,52,35,108,105,115,116,45,62,115,49,54,118,101,99,116,111,114,32,108,115,116,41,0,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,15),40,100,111,108,111,111,112,54,55,48,32,112,32,105,41,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,28),40,115,114,102,105,45,52,35,108,105,115,116,45,62,117,51,50,118,101,99,116,111,114,32,108,115,116,41,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,15),40,100,111,108,111,111,112,54,56,51,32,112,32,105,41,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,28),40,115,114,102,105,45,52,35,108,105,115,116,45,62,115,51,50,118,101,99,116,111,114,32,108,115,116,41,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,15),40,100,111,108,111,111,112,54,57,54,32,112,32,105,41,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,28),40,115,114,102,105,45,52,35,108,105,115,116,45,62,117,54,52,118,101,99,116,111,114,32,108,115,116,41,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,15),40,100,111,108,111,111,112,55,48,57,32,112,32,105,41,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,28),40,115,114,102,105,45,52,35,108,105,115,116,45,62,115,54,52,118,101,99,116,111,114,32,108,115,116,41,0,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,15),40,100,111,108,111,111,112,55,50,50,32,112,32,105,41,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,28),40,115,114,102,105,45,52,35,108,105,115,116,45,62,102,51,50,118,101,99,116,111,114,32,108,115,116,41,0,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,15),40,100,111,108,111,111,112,55,51,53,32,112,32,105,41,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,28),40,115,114,102,105,45,52,35,108,105,115,116,45,62,102,54,52,118,101,99,116,111,114,32,108,115,116,41,0,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,22),40,115,114,102,105,45,52,35,117,56,118,101,99,116,111,114,32,46,32,120,115,41,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,22),40,115,114,102,105,45,52,35,115,56,118,101,99,116,111,114,32,46,32,120,115,41,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,23),40,115,114,102,105,45,52,35,117,49,54,118,101,99,116,111,114,32,46,32,120,115,41,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,23),40,115,114,102,105,45,52,35,115,49,54,118,101,99,116,111,114,32,46,32,120,115,41,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,23),40,115,114,102,105,45,52,35,117,51,50,118,101,99,116,111,114,32,46,32,120,115,41,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,23),40,115,114,102,105,45,52,35,115,51,50,118,101,99,116,111,114,32,46,32,120,115,41,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,23),40,115,114,102,105,45,52,35,117,54,52,118,101,99,116,111,114,32,46,32,120,115,41,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,23),40,115,114,102,105,45,52,35,115,54,52,118,101,99,116,111,114,32,46,32,120,115,41,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,23),40,115,114,102,105,45,52,35,102,51,50,118,101,99,116,111,114,32,46,32,120,115,41,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,23),40,115,114,102,105,45,52,35,102,54,52,118,101,99,116,111,114,32,46,32,120,115,41,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,105,41};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,25),40,115,114,102,105,45,52,35,117,56,118,101,99,116,111,114,45,62,108,105,115,116,32,118,41,0,0,0,0,0,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,105,41};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,25),40,115,114,102,105,45,52,35,115,56,118,101,99,116,111,114,45,62,108,105,115,116,32,118,41,0,0,0,0,0,0,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,105,41};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,26),40,115,114,102,105,45,52,35,117,49,54,118,101,99,116,111,114,45,62,108,105,115,116,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,105,41};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,26),40,115,114,102,105,45,52,35,115,49,54,118,101,99,116,111,114,45,62,108,105,115,116,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,105,41};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,26),40,115,114,102,105,45,52,35,117,51,50,118,101,99,116,111,114,45,62,108,105,115,116,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,105,41};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,26),40,115,114,102,105,45,52,35,115,51,50,118,101,99,116,111,114,45,62,108,105,115,116,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,105,41};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,26),40,115,114,102,105,45,52,35,117,54,52,118,101,99,116,111,114,45,62,108,105,115,116,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,105,41};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,26),40,115,114,102,105,45,52,35,115,54,52,118,101,99,116,111,114,45,62,108,105,115,116,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,105,41};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,26),40,115,114,102,105,45,52,35,102,51,50,118,101,99,116,111,114,45,62,108,105,115,116,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,105,41};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,26),40,115,114,102,105,45,52,35,102,54,52,118,101,99,116,111,114,45,62,108,105,115,116,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,20),40,115,114,102,105,45,52,35,117,56,118,101,99,116,111,114,63,32,120,41,0,0,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,20),40,115,114,102,105,45,52,35,115,56,118,101,99,116,111,114,63,32,120,41,0,0,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,21),40,115,114,102,105,45,52,35,117,49,54,118,101,99,116,111,114,63,32,120,41,0,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,21),40,115,114,102,105,45,52,35,115,49,54,118,101,99,116,111,114,63,32,120,41,0,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,21),40,115,114,102,105,45,52,35,117,51,50,118,101,99,116,111,114,63,32,120,41,0,0,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,21),40,115,114,102,105,45,52,35,115,51,50,118,101,99,116,111,114,63,32,120,41,0,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,21),40,115,114,102,105,45,52,35,117,54,52,118,101,99,116,111,114,63,32,120,41,0,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,21),40,115,114,102,105,45,52,35,115,54,52,118,101,99,116,111,114,63,32,120,41,0,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,21),40,115,114,102,105,45,52,35,102,51,50,118,101,99,116,111,114,63,32,120,41,0,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,21),40,115,114,102,105,45,52,35,102,54,52,118,101,99,116,111,114,63,32,120,41,0,0,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,10),40,102,95,51,54,50,49,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,26),40,115,114,102,105,45,52,35,112,97,99,107,45,99,111,112,121,32,116,97,103,32,108,111,99,41,0,0,0,0,0,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,12),40,102,95,51,54,51,57,32,115,116,114,41,0,0,0,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,26),40,115,114,102,105,45,52,35,117,110,112,97,99,107,32,116,97,103,32,115,122,32,108,111,99,41,0,0,0,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,12),40,102,95,51,54,54,57,32,115,116,114,41,0,0,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,31),40,115,114,102,105,45,52,35,117,110,112,97,99,107,45,99,111,112,121,32,116,97,103,32,115,122,32,108,111,99,41,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,16),40,102,53,50,56,56,32,118,56,55,52,53,50,56,55,41};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,16),40,102,53,50,56,49,32,118,56,55,52,53,50,56,48,41};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,16),40,102,53,50,55,52,32,118,56,55,52,53,50,55,51,41};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,16),40,102,53,50,54,55,32,118,56,55,52,53,50,54,54,41};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,16),40,102,53,50,54,48,32,118,56,55,52,53,50,53,57,41};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,16),40,102,53,50,53,51,32,118,56,55,52,53,50,53,50,41};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,16),40,102,53,50,52,54,32,118,56,55,52,53,50,52,53,41};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,16),40,102,53,50,51,57,32,118,56,55,52,53,50,51,56,41};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,16),40,102,53,50,51,50,32,118,56,55,52,53,50,51,49,41};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,16),40,102,53,50,50,53,32,118,56,55,52,53,50,50,52,41};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,8),40,103,57,54,49,32,99,41};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,32),40,35,35,115,121,115,35,117,115,101,114,45,114,101,97,100,45,104,111,111,107,32,99,104,97,114,32,112,111,114,116,41};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,39),40,35,35,115,121,115,35,117,115,101,114,45,112,114,105,110,116,45,104,111,111,107,32,120,32,114,101,97,100,97,98,108,101,32,112,111,114,116,41,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,38),40,115,114,102,105,45,52,35,115,117,98,110,118,101,99,116,111,114,32,118,32,116,32,101,115,32,102,114,111,109,32,116,111,32,108,111,99,41,0,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,30),40,115,114,102,105,45,52,35,115,117,98,117,56,118,101,99,116,111,114,32,118,32,102,114,111,109,32,116,111,41,0,0};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,31),40,115,114,102,105,45,52,35,115,117,98,117,49,54,118,101,99,116,111,114,32,118,32,102,114,111,109,32,116,111,41,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,31),40,115,114,102,105,45,52,35,115,117,98,117,51,50,118,101,99,116,111,114,32,118,32,102,114,111,109,32,116,111,41,0};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,31),40,115,114,102,105,45,52,35,115,117,98,117,54,52,118,101,99,116,111,114,32,118,32,102,114,111,109,32,116,111,41,0};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,30),40,115,114,102,105,45,52,35,115,117,98,115,56,118,101,99,116,111,114,32,118,32,102,114,111,109,32,116,111,41,0,0};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,31),40,115,114,102,105,45,52,35,115,117,98,115,49,54,118,101,99,116,111,114,32,118,32,102,114,111,109,32,116,111,41,0};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,31),40,115,114,102,105,45,52,35,115,117,98,115,51,50,118,101,99,116,111,114,32,118,32,102,114,111,109,32,116,111,41,0};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,31),40,115,114,102,105,45,52,35,115,117,98,115,54,52,118,101,99,116,111,114,32,118,32,102,114,111,109,32,116,111,41,0};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,31),40,115,114,102,105,45,52,35,115,117,98,102,51,50,118,101,99,116,111,114,32,118,32,102,114,111,109,32,116,111,41,0};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,31),40,115,114,102,105,45,52,35,115,117,98,102,54,52,118,101,99,116,111,114,32,118,32,102,114,111,109,32,116,111,41,0};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,32),40,115,114,102,105,45,52,35,119,114,105,116,101,45,117,56,118,101,99,116,111,114,32,118,32,46,32,114,101,115,116,41};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,37),40,115,114,102,105,45,52,35,114,101,97,100,45,117,56,118,101,99,116,111,114,33,32,110,32,100,101,115,116,32,46,32,114,101,115,116,41,0,0,0};
static C_char C_TLS li135[] C_aligned={C_lihdr(0,0,29),40,115,114,102,105,45,52,35,114,101,97,100,45,117,56,118,101,99,116,111,114,32,46,32,114,101,115,116,41,0,0,0};
static C_char C_TLS li136[] C_aligned={C_lihdr(0,0,11),40,97,52,52,53,52,32,120,32,105,41,0,0,0,0,0};
static C_char C_TLS li137[] C_aligned={C_lihdr(0,0,11),40,97,52,52,53,55,32,120,32,105,41,0,0,0,0,0};
static C_char C_TLS li138[] C_aligned={C_lihdr(0,0,11),40,97,52,52,54,48,32,120,32,105,41,0,0,0,0,0};
static C_char C_TLS li139[] C_aligned={C_lihdr(0,0,11),40,97,52,52,54,51,32,120,32,105,41,0,0,0,0,0};
static C_char C_TLS li140[] C_aligned={C_lihdr(0,0,11),40,97,52,52,54,54,32,120,32,105,41,0,0,0,0,0};
static C_char C_TLS li141[] C_aligned={C_lihdr(0,0,11),40,97,52,52,54,57,32,120,32,105,41,0,0,0,0,0};
static C_char C_TLS li142[] C_aligned={C_lihdr(0,0,11),40,97,52,52,55,50,32,120,32,105,41,0,0,0,0,0};
static C_char C_TLS li143[] C_aligned={C_lihdr(0,0,11),40,97,52,52,55,53,32,120,32,105,41,0,0,0,0,0};
static C_char C_TLS li144[] C_aligned={C_lihdr(0,0,11),40,97,52,52,55,56,32,120,32,105,41,0,0,0,0,0};
static C_char C_TLS li145[] C_aligned={C_lihdr(0,0,11),40,97,52,52,56,49,32,120,32,105,41,0,0,0,0,0};
static C_char C_TLS li146[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub228(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word bv=(C_word )(C_a0);
C_free((void *)C_block_item(bv, 1));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub222(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
size_t bytes=(size_t )(size_t)C_num_to_uint64(C_a0);
if (bytes > C_HEADER_SIZE_MASK) C_return(C_SCHEME_FALSE);
C_word *buf = (C_word *)C_malloc(bytes + sizeof(C_header));
if(buf == NULL) C_return(C_SCHEME_FALSE);
C_block_header_init(buf, C_make_header(C_BYTEVECTOR_TYPE, bytes));
C_return(buf);
C_ret:
#undef return

return C_r;}

C_noret_decl(f5225)
static void C_ccall f5225(C_word c,C_word *av) C_noret;
C_noret_decl(f5232)
static void C_ccall f5232(C_word c,C_word *av) C_noret;
C_noret_decl(f5239)
static void C_ccall f5239(C_word c,C_word *av) C_noret;
C_noret_decl(f5246)
static void C_ccall f5246(C_word c,C_word *av) C_noret;
C_noret_decl(f5253)
static void C_ccall f5253(C_word c,C_word *av) C_noret;
C_noret_decl(f5260)
static void C_ccall f5260(C_word c,C_word *av) C_noret;
C_noret_decl(f5267)
static void C_ccall f5267(C_word c,C_word *av) C_noret;
C_noret_decl(f5274)
static void C_ccall f5274(C_word c,C_word *av) C_noret;
C_noret_decl(f5281)
static void C_ccall f5281(C_word c,C_word *av) C_noret;
C_noret_decl(f5288)
static void C_ccall f5288(C_word c,C_word *av) C_noret;
C_noret_decl(f_1513)
static void C_ccall f_1513(C_word c,C_word *av) C_noret;
C_noret_decl(f_1516)
static void C_ccall f_1516(C_word c,C_word *av) C_noret;
C_noret_decl(f_1519)
static void C_ccall f_1519(C_word c,C_word *av) C_noret;
C_noret_decl(f_1521)
static void C_ccall f_1521(C_word c,C_word *av) C_noret;
C_noret_decl(f_1524)
static void C_ccall f_1524(C_word c,C_word *av) C_noret;
C_noret_decl(f_1527)
static void C_ccall f_1527(C_word c,C_word *av) C_noret;
C_noret_decl(f_1530)
static void C_ccall f_1530(C_word c,C_word *av) C_noret;
C_noret_decl(f_1533)
static void C_ccall f_1533(C_word c,C_word *av) C_noret;
C_noret_decl(f_1536)
static void C_ccall f_1536(C_word c,C_word *av) C_noret;
C_noret_decl(f_1539)
static void C_ccall f_1539(C_word c,C_word *av) C_noret;
C_noret_decl(f_1542)
static void C_ccall f_1542(C_word c,C_word *av) C_noret;
C_noret_decl(f_1545)
static void C_ccall f_1545(C_word c,C_word *av) C_noret;
C_noret_decl(f_1548)
static void C_ccall f_1548(C_word c,C_word *av) C_noret;
C_noret_decl(f_1551)
static void C_ccall f_1551(C_word c,C_word *av) C_noret;
C_noret_decl(f_1554)
static void C_ccall f_1554(C_word c,C_word *av) C_noret;
C_noret_decl(f_1557)
static void C_ccall f_1557(C_word c,C_word *av) C_noret;
C_noret_decl(f_1560)
static void C_ccall f_1560(C_word c,C_word *av) C_noret;
C_noret_decl(f_1563)
static void C_ccall f_1563(C_word c,C_word *av) C_noret;
C_noret_decl(f_1566)
static void C_ccall f_1566(C_word c,C_word *av) C_noret;
C_noret_decl(f_1569)
static void C_ccall f_1569(C_word c,C_word *av) C_noret;
C_noret_decl(f_1572)
static void C_ccall f_1572(C_word c,C_word *av) C_noret;
C_noret_decl(f_1575)
static void C_ccall f_1575(C_word c,C_word *av) C_noret;
C_noret_decl(f_1578)
static void C_ccall f_1578(C_word c,C_word *av) C_noret;
C_noret_decl(f_1583)
static void C_ccall f_1583(C_word c,C_word *av) C_noret;
C_noret_decl(f_1587)
static void C_ccall f_1587(C_word c,C_word *av) C_noret;
C_noret_decl(f_1591)
static void C_ccall f_1591(C_word c,C_word *av) C_noret;
C_noret_decl(f_1595)
static void C_ccall f_1595(C_word c,C_word *av) C_noret;
C_noret_decl(f_1599)
static void C_ccall f_1599(C_word c,C_word *av) C_noret;
C_noret_decl(f_1603)
static void C_ccall f_1603(C_word c,C_word *av) C_noret;
C_noret_decl(f_1607)
static void C_ccall f_1607(C_word c,C_word *av) C_noret;
C_noret_decl(f_1611)
static void C_ccall f_1611(C_word c,C_word *av) C_noret;
C_noret_decl(f_1615)
static void C_ccall f_1615(C_word c,C_word *av) C_noret;
C_noret_decl(f_1619)
static void C_ccall f_1619(C_word c,C_word *av) C_noret;
C_noret_decl(f_1627)
static void C_ccall f_1627(C_word c,C_word *av) C_noret;
C_noret_decl(f_1629)
static void C_fcall f_1629(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1633)
static void C_ccall f_1633(C_word c,C_word *av) C_noret;
C_noret_decl(f_1636)
static void C_ccall f_1636(C_word c,C_word *av) C_noret;
C_noret_decl(f_1642)
static void C_ccall f_1642(C_word c,C_word *av) C_noret;
C_noret_decl(f_1657)
static void C_ccall f_1657(C_word c,C_word *av) C_noret;
C_noret_decl(f_1668)
static void C_ccall f_1668(C_word c,C_word *av) C_noret;
C_noret_decl(f_1675)
static void C_ccall f_1675(C_word c,C_word *av) C_noret;
C_noret_decl(f_1683)
static void C_ccall f_1683(C_word c,C_word *av) C_noret;
C_noret_decl(f_1708)
static void C_ccall f_1708(C_word c,C_word *av) C_noret;
C_noret_decl(f_1719)
static void C_ccall f_1719(C_word c,C_word *av) C_noret;
C_noret_decl(f_1738)
static void C_ccall f_1738(C_word c,C_word *av) C_noret;
C_noret_decl(f_1743)
static C_word C_fcall f_1743(C_word t0,C_word t1);
C_noret_decl(f_1761)
static void C_ccall f_1761(C_word c,C_word *av) C_noret;
C_noret_decl(f_1799)
static void C_ccall f_1799(C_word c,C_word *av) C_noret;
C_noret_decl(f_1824)
static void C_ccall f_1824(C_word c,C_word *av) C_noret;
C_noret_decl(f_1835)
static void C_ccall f_1835(C_word c,C_word *av) C_noret;
C_noret_decl(f_1854)
static void C_ccall f_1854(C_word c,C_word *av) C_noret;
C_noret_decl(f_1859)
static C_word C_fcall f_1859(C_word t0,C_word t1);
C_noret_decl(f_1877)
static void C_ccall f_1877(C_word c,C_word *av) C_noret;
C_noret_decl(f_1915)
static void C_ccall f_1915(C_word c,C_word *av) C_noret;
C_noret_decl(f_1940)
static void C_ccall f_1940(C_word c,C_word *av) C_noret;
C_noret_decl(f_1951)
static void C_ccall f_1951(C_word c,C_word *av) C_noret;
C_noret_decl(f_1970)
static void C_ccall f_1970(C_word c,C_word *av) C_noret;
C_noret_decl(f_1975)
static C_word C_fcall f_1975(C_word t0,C_word t1);
C_noret_decl(f_1993)
static void C_ccall f_1993(C_word c,C_word *av) C_noret;
C_noret_decl(f_2031)
static void C_ccall f_2031(C_word c,C_word *av) C_noret;
C_noret_decl(f_2056)
static void C_ccall f_2056(C_word c,C_word *av) C_noret;
C_noret_decl(f_2067)
static void C_ccall f_2067(C_word c,C_word *av) C_noret;
C_noret_decl(f_2096)
static void C_ccall f_2096(C_word c,C_word *av) C_noret;
C_noret_decl(f_2101)
static C_word C_fcall f_2101(C_word t0,C_word t1);
C_noret_decl(f_2119)
static void C_ccall f_2119(C_word c,C_word *av) C_noret;
C_noret_decl(f_2157)
static void C_ccall f_2157(C_word c,C_word *av) C_noret;
C_noret_decl(f_2182)
static void C_ccall f_2182(C_word c,C_word *av) C_noret;
C_noret_decl(f_2193)
static void C_ccall f_2193(C_word c,C_word *av) C_noret;
C_noret_decl(f_2212)
static void C_ccall f_2212(C_word c,C_word *av) C_noret;
C_noret_decl(f_2217)
static C_word C_fcall f_2217(C_word t0,C_word t1);
C_noret_decl(f_2235)
static void C_ccall f_2235(C_word c,C_word *av) C_noret;
C_noret_decl(f_2273)
static void C_ccall f_2273(C_word c,C_word *av) C_noret;
C_noret_decl(f_2298)
static void C_ccall f_2298(C_word c,C_word *av) C_noret;
C_noret_decl(f_2309)
static void C_ccall f_2309(C_word c,C_word *av) C_noret;
C_noret_decl(f_2328)
static void C_ccall f_2328(C_word c,C_word *av) C_noret;
C_noret_decl(f_2333)
static C_word C_fcall f_2333(C_word t0,C_word t1);
C_noret_decl(f_2351)
static void C_ccall f_2351(C_word c,C_word *av) C_noret;
C_noret_decl(f_2389)
static void C_ccall f_2389(C_word c,C_word *av) C_noret;
C_noret_decl(f_2414)
static void C_ccall f_2414(C_word c,C_word *av) C_noret;
C_noret_decl(f_2425)
static void C_ccall f_2425(C_word c,C_word *av) C_noret;
C_noret_decl(f_2454)
static void C_ccall f_2454(C_word c,C_word *av) C_noret;
C_noret_decl(f_2459)
static C_word C_fcall f_2459(C_word t0,C_word t1);
C_noret_decl(f_2477)
static void C_ccall f_2477(C_word c,C_word *av) C_noret;
C_noret_decl(f_2515)
static void C_ccall f_2515(C_word c,C_word *av) C_noret;
C_noret_decl(f_2540)
static void C_ccall f_2540(C_word c,C_word *av) C_noret;
C_noret_decl(f_2551)
static void C_ccall f_2551(C_word c,C_word *av) C_noret;
C_noret_decl(f_2580)
static void C_ccall f_2580(C_word c,C_word *av) C_noret;
C_noret_decl(f_2585)
static C_word C_fcall f_2585(C_word t0,C_word t1);
C_noret_decl(f_2603)
static void C_ccall f_2603(C_word c,C_word *av) C_noret;
C_noret_decl(f_2641)
static void C_ccall f_2641(C_word c,C_word *av) C_noret;
C_noret_decl(f_2666)
static void C_ccall f_2666(C_word c,C_word *av) C_noret;
C_noret_decl(f_2687)
static void C_ccall f_2687(C_word c,C_word *av) C_noret;
C_noret_decl(f_2690)
static void C_fcall f_2690(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2695)
static C_word C_fcall f_2695(C_word t0,C_word t1);
C_noret_decl(f_2714)
static void C_ccall f_2714(C_word c,C_word *av) C_noret;
C_noret_decl(f_2752)
static void C_ccall f_2752(C_word c,C_word *av) C_noret;
C_noret_decl(f_2777)
static void C_ccall f_2777(C_word c,C_word *av) C_noret;
C_noret_decl(f_2798)
static void C_ccall f_2798(C_word c,C_word *av) C_noret;
C_noret_decl(f_2801)
static void C_fcall f_2801(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2806)
static C_word C_fcall f_2806(C_word t0,C_word t1);
C_noret_decl(f_2825)
static void C_ccall f_2825(C_word c,C_word *av) C_noret;
C_noret_decl(f_2863)
static void C_ccall f_2863(C_word c,C_word *av) C_noret;
C_noret_decl(f_2870)
static void C_ccall f_2870(C_word c,C_word *av) C_noret;
C_noret_decl(f_2875)
static void C_fcall f_2875(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2882)
static void C_ccall f_2882(C_word c,C_word *av) C_noret;
C_noret_decl(f_2899)
static void C_ccall f_2899(C_word c,C_word *av) C_noret;
C_noret_decl(f_2906)
static void C_ccall f_2906(C_word c,C_word *av) C_noret;
C_noret_decl(f_2911)
static void C_fcall f_2911(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2918)
static void C_ccall f_2918(C_word c,C_word *av) C_noret;
C_noret_decl(f_2935)
static void C_ccall f_2935(C_word c,C_word *av) C_noret;
C_noret_decl(f_2942)
static void C_ccall f_2942(C_word c,C_word *av) C_noret;
C_noret_decl(f_2947)
static void C_fcall f_2947(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2954)
static void C_ccall f_2954(C_word c,C_word *av) C_noret;
C_noret_decl(f_2971)
static void C_ccall f_2971(C_word c,C_word *av) C_noret;
C_noret_decl(f_2978)
static void C_ccall f_2978(C_word c,C_word *av) C_noret;
C_noret_decl(f_2983)
static void C_fcall f_2983(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2990)
static void C_ccall f_2990(C_word c,C_word *av) C_noret;
C_noret_decl(f_3007)
static void C_ccall f_3007(C_word c,C_word *av) C_noret;
C_noret_decl(f_3014)
static void C_ccall f_3014(C_word c,C_word *av) C_noret;
C_noret_decl(f_3019)
static void C_fcall f_3019(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3026)
static void C_ccall f_3026(C_word c,C_word *av) C_noret;
C_noret_decl(f_3043)
static void C_ccall f_3043(C_word c,C_word *av) C_noret;
C_noret_decl(f_3050)
static void C_ccall f_3050(C_word c,C_word *av) C_noret;
C_noret_decl(f_3055)
static void C_fcall f_3055(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3062)
static void C_ccall f_3062(C_word c,C_word *av) C_noret;
C_noret_decl(f_3079)
static void C_ccall f_3079(C_word c,C_word *av) C_noret;
C_noret_decl(f_3086)
static void C_ccall f_3086(C_word c,C_word *av) C_noret;
C_noret_decl(f_3091)
static void C_fcall f_3091(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3098)
static void C_ccall f_3098(C_word c,C_word *av) C_noret;
C_noret_decl(f_3115)
static void C_ccall f_3115(C_word c,C_word *av) C_noret;
C_noret_decl(f_3122)
static void C_ccall f_3122(C_word c,C_word *av) C_noret;
C_noret_decl(f_3127)
static void C_fcall f_3127(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3134)
static void C_ccall f_3134(C_word c,C_word *av) C_noret;
C_noret_decl(f_3151)
static void C_ccall f_3151(C_word c,C_word *av) C_noret;
C_noret_decl(f_3158)
static void C_ccall f_3158(C_word c,C_word *av) C_noret;
C_noret_decl(f_3163)
static void C_fcall f_3163(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3170)
static void C_ccall f_3170(C_word c,C_word *av) C_noret;
C_noret_decl(f_3187)
static void C_ccall f_3187(C_word c,C_word *av) C_noret;
C_noret_decl(f_3194)
static void C_ccall f_3194(C_word c,C_word *av) C_noret;
C_noret_decl(f_3199)
static void C_fcall f_3199(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3206)
static void C_ccall f_3206(C_word c,C_word *av) C_noret;
C_noret_decl(f_3223)
static void C_ccall f_3223(C_word c,C_word *av) C_noret;
C_noret_decl(f_3229)
static void C_ccall f_3229(C_word c,C_word *av) C_noret;
C_noret_decl(f_3235)
static void C_ccall f_3235(C_word c,C_word *av) C_noret;
C_noret_decl(f_3241)
static void C_ccall f_3241(C_word c,C_word *av) C_noret;
C_noret_decl(f_3247)
static void C_ccall f_3247(C_word c,C_word *av) C_noret;
C_noret_decl(f_3253)
static void C_ccall f_3253(C_word c,C_word *av) C_noret;
C_noret_decl(f_3259)
static void C_ccall f_3259(C_word c,C_word *av) C_noret;
C_noret_decl(f_3265)
static void C_ccall f_3265(C_word c,C_word *av) C_noret;
C_noret_decl(f_3271)
static void C_ccall f_3271(C_word c,C_word *av) C_noret;
C_noret_decl(f_3277)
static void C_ccall f_3277(C_word c,C_word *av) C_noret;
C_noret_decl(f_3283)
static void C_ccall f_3283(C_word c,C_word *av) C_noret;
C_noret_decl(f_3292)
static void C_fcall f_3292(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3307)
static void C_ccall f_3307(C_word c,C_word *av) C_noret;
C_noret_decl(f_3313)
static void C_ccall f_3313(C_word c,C_word *av) C_noret;
C_noret_decl(f_3322)
static void C_fcall f_3322(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3337)
static void C_ccall f_3337(C_word c,C_word *av) C_noret;
C_noret_decl(f_3343)
static void C_ccall f_3343(C_word c,C_word *av) C_noret;
C_noret_decl(f_3352)
static void C_fcall f_3352(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3367)
static void C_ccall f_3367(C_word c,C_word *av) C_noret;
C_noret_decl(f_3373)
static void C_ccall f_3373(C_word c,C_word *av) C_noret;
C_noret_decl(f_3382)
static void C_fcall f_3382(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3397)
static void C_ccall f_3397(C_word c,C_word *av) C_noret;
C_noret_decl(f_3403)
static void C_ccall f_3403(C_word c,C_word *av) C_noret;
C_noret_decl(f_3412)
static void C_fcall f_3412(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3426)
static void C_ccall f_3426(C_word c,C_word *av) C_noret;
C_noret_decl(f_3432)
static void C_ccall f_3432(C_word c,C_word *av) C_noret;
C_noret_decl(f_3441)
static void C_fcall f_3441(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3455)
static void C_ccall f_3455(C_word c,C_word *av) C_noret;
C_noret_decl(f_3461)
static void C_ccall f_3461(C_word c,C_word *av) C_noret;
C_noret_decl(f_3470)
static void C_fcall f_3470(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3484)
static void C_ccall f_3484(C_word c,C_word *av) C_noret;
C_noret_decl(f_3490)
static void C_ccall f_3490(C_word c,C_word *av) C_noret;
C_noret_decl(f_3499)
static void C_fcall f_3499(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3513)
static void C_ccall f_3513(C_word c,C_word *av) C_noret;
C_noret_decl(f_3519)
static void C_ccall f_3519(C_word c,C_word *av) C_noret;
C_noret_decl(f_3528)
static void C_fcall f_3528(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3542)
static void C_ccall f_3542(C_word c,C_word *av) C_noret;
C_noret_decl(f_3548)
static void C_ccall f_3548(C_word c,C_word *av) C_noret;
C_noret_decl(f_3557)
static void C_fcall f_3557(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3571)
static void C_ccall f_3571(C_word c,C_word *av) C_noret;
C_noret_decl(f_3577)
static void C_ccall f_3577(C_word c,C_word *av) C_noret;
C_noret_decl(f_3580)
static void C_ccall f_3580(C_word c,C_word *av) C_noret;
C_noret_decl(f_3583)
static void C_ccall f_3583(C_word c,C_word *av) C_noret;
C_noret_decl(f_3586)
static void C_ccall f_3586(C_word c,C_word *av) C_noret;
C_noret_decl(f_3589)
static void C_ccall f_3589(C_word c,C_word *av) C_noret;
C_noret_decl(f_3592)
static void C_ccall f_3592(C_word c,C_word *av) C_noret;
C_noret_decl(f_3595)
static void C_ccall f_3595(C_word c,C_word *av) C_noret;
C_noret_decl(f_3598)
static void C_ccall f_3598(C_word c,C_word *av) C_noret;
C_noret_decl(f_3601)
static void C_ccall f_3601(C_word c,C_word *av) C_noret;
C_noret_decl(f_3604)
static void C_ccall f_3604(C_word c,C_word *av) C_noret;
C_noret_decl(f_3619)
static void C_fcall f_3619(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3621)
static void C_ccall f_3621(C_word c,C_word *av) C_noret;
C_noret_decl(f_3631)
static void C_ccall f_3631(C_word c,C_word *av) C_noret;
C_noret_decl(f_3637)
static void C_fcall f_3637(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3639)
static void C_ccall f_3639(C_word c,C_word *av) C_noret;
C_noret_decl(f_3667)
static void C_fcall f_3667(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3669)
static void C_ccall f_3669(C_word c,C_word *av) C_noret;
C_noret_decl(f_3679)
static void C_ccall f_3679(C_word c,C_word *av) C_noret;
C_noret_decl(f_3743)
static void C_ccall f_3743(C_word c,C_word *av) C_noret;
C_noret_decl(f_3747)
static void C_ccall f_3747(C_word c,C_word *av) C_noret;
C_noret_decl(f_3751)
static void C_ccall f_3751(C_word c,C_word *av) C_noret;
C_noret_decl(f_3755)
static void C_ccall f_3755(C_word c,C_word *av) C_noret;
C_noret_decl(f_3759)
static void C_ccall f_3759(C_word c,C_word *av) C_noret;
C_noret_decl(f_3763)
static void C_ccall f_3763(C_word c,C_word *av) C_noret;
C_noret_decl(f_3767)
static void C_ccall f_3767(C_word c,C_word *av) C_noret;
C_noret_decl(f_3771)
static void C_ccall f_3771(C_word c,C_word *av) C_noret;
C_noret_decl(f_3775)
static void C_ccall f_3775(C_word c,C_word *av) C_noret;
C_noret_decl(f_3779)
static void C_ccall f_3779(C_word c,C_word *av) C_noret;
C_noret_decl(f_3783)
static void C_ccall f_3783(C_word c,C_word *av) C_noret;
C_noret_decl(f_3787)
static void C_ccall f_3787(C_word c,C_word *av) C_noret;
C_noret_decl(f_3791)
static void C_ccall f_3791(C_word c,C_word *av) C_noret;
C_noret_decl(f_3795)
static void C_ccall f_3795(C_word c,C_word *av) C_noret;
C_noret_decl(f_3799)
static void C_ccall f_3799(C_word c,C_word *av) C_noret;
C_noret_decl(f_3803)
static void C_ccall f_3803(C_word c,C_word *av) C_noret;
C_noret_decl(f_3807)
static void C_ccall f_3807(C_word c,C_word *av) C_noret;
C_noret_decl(f_3811)
static void C_ccall f_3811(C_word c,C_word *av) C_noret;
C_noret_decl(f_3815)
static void C_ccall f_3815(C_word c,C_word *av) C_noret;
C_noret_decl(f_3819)
static void C_ccall f_3819(C_word c,C_word *av) C_noret;
C_noret_decl(f_3823)
static void C_ccall f_3823(C_word c,C_word *av) C_noret;
C_noret_decl(f_3827)
static void C_ccall f_3827(C_word c,C_word *av) C_noret;
C_noret_decl(f_3831)
static void C_ccall f_3831(C_word c,C_word *av) C_noret;
C_noret_decl(f_3835)
static void C_ccall f_3835(C_word c,C_word *av) C_noret;
C_noret_decl(f_3839)
static void C_ccall f_3839(C_word c,C_word *av) C_noret;
C_noret_decl(f_3843)
static void C_ccall f_3843(C_word c,C_word *av) C_noret;
C_noret_decl(f_3847)
static void C_ccall f_3847(C_word c,C_word *av) C_noret;
C_noret_decl(f_3851)
static void C_ccall f_3851(C_word c,C_word *av) C_noret;
C_noret_decl(f_3855)
static void C_ccall f_3855(C_word c,C_word *av) C_noret;
C_noret_decl(f_3859)
static void C_ccall f_3859(C_word c,C_word *av) C_noret;
C_noret_decl(f_3864)
static void C_ccall f_3864(C_word c,C_word *av) C_noret;
C_noret_decl(f_3873)
static void C_ccall f_3873(C_word c,C_word *av) C_noret;
C_noret_decl(f_3892)
static void C_fcall f_3892(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3903)
static void C_ccall f_3903(C_word c,C_word *av) C_noret;
C_noret_decl(f_3924)
static void C_ccall f_3924(C_word c,C_word *av) C_noret;
C_noret_decl(f_3936)
static void C_ccall f_3936(C_word c,C_word *av) C_noret;
C_noret_decl(f_3939)
static void C_ccall f_3939(C_word c,C_word *av) C_noret;
C_noret_decl(f_3949)
static void C_ccall f_3949(C_word c,C_word *av) C_noret;
C_noret_decl(f_3998)
static void C_fcall f_3998(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_4013)
static void C_ccall f_4013(C_word c,C_word *av) C_noret;
C_noret_decl(f_4032)
static void C_ccall f_4032(C_word c,C_word *av) C_noret;
C_noret_decl(f_4037)
static void C_ccall f_4037(C_word c,C_word *av) C_noret;
C_noret_decl(f_4056)
static void C_ccall f_4056(C_word c,C_word *av) C_noret;
C_noret_decl(f_4062)
static void C_ccall f_4062(C_word c,C_word *av) C_noret;
C_noret_decl(f_4083)
static void C_ccall f_4083(C_word c,C_word *av) C_noret;
C_noret_decl(f_4089)
static void C_ccall f_4089(C_word c,C_word *av) C_noret;
C_noret_decl(f_4095)
static void C_ccall f_4095(C_word c,C_word *av) C_noret;
C_noret_decl(f_4101)
static void C_ccall f_4101(C_word c,C_word *av) C_noret;
C_noret_decl(f_4107)
static void C_ccall f_4107(C_word c,C_word *av) C_noret;
C_noret_decl(f_4113)
static void C_ccall f_4113(C_word c,C_word *av) C_noret;
C_noret_decl(f_4119)
static void C_ccall f_4119(C_word c,C_word *av) C_noret;
C_noret_decl(f_4125)
static void C_ccall f_4125(C_word c,C_word *av) C_noret;
C_noret_decl(f_4131)
static void C_ccall f_4131(C_word c,C_word *av) C_noret;
C_noret_decl(f_4137)
static void C_ccall f_4137(C_word c,C_word *av) C_noret;
C_noret_decl(f_4143)
static void C_ccall f_4143(C_word c,C_word *av) C_noret;
C_noret_decl(f_4173)
static void C_ccall f_4173(C_word c,C_word *av) C_noret;
C_noret_decl(f_4192)
static void C_ccall f_4192(C_word c,C_word *av) C_noret;
C_noret_decl(f_4195)
static void C_ccall f_4195(C_word c,C_word *av) C_noret;
C_noret_decl(f_4208)
static void C_fcall f_4208(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4218)
static void C_ccall f_4218(C_word c,C_word *av) C_noret;
C_noret_decl(f_4243)
static void C_ccall f_4243(C_word c,C_word *av) C_noret;
C_noret_decl(f_4312)
static void C_ccall f_4312(C_word c,C_word *av) C_noret;
C_noret_decl(f_4331)
static void C_ccall f_4331(C_word c,C_word *av) C_noret;
C_noret_decl(f_4337)
static void C_ccall f_4337(C_word c,C_word *av) C_noret;
C_noret_decl(f_4392)
static void C_ccall f_4392(C_word c,C_word *av) C_noret;
C_noret_decl(f_4411)
static void C_ccall f_4411(C_word c,C_word *av) C_noret;
C_noret_decl(f_4414)
static void C_ccall f_4414(C_word c,C_word *av) C_noret;
C_noret_decl(f_4453)
static void C_ccall f_4453(C_word c,C_word *av) C_noret;
C_noret_decl(f_4455)
static void C_ccall f_4455(C_word c,C_word *av) C_noret;
C_noret_decl(f_4458)
static void C_ccall f_4458(C_word c,C_word *av) C_noret;
C_noret_decl(f_4461)
static void C_ccall f_4461(C_word c,C_word *av) C_noret;
C_noret_decl(f_4464)
static void C_ccall f_4464(C_word c,C_word *av) C_noret;
C_noret_decl(f_4467)
static void C_ccall f_4467(C_word c,C_word *av) C_noret;
C_noret_decl(f_4470)
static void C_ccall f_4470(C_word c,C_word *av) C_noret;
C_noret_decl(f_4473)
static void C_ccall f_4473(C_word c,C_word *av) C_noret;
C_noret_decl(f_4476)
static void C_ccall f_4476(C_word c,C_word *av) C_noret;
C_noret_decl(f_4479)
static void C_ccall f_4479(C_word c,C_word *av) C_noret;
C_noret_decl(f_4482)
static void C_ccall f_4482(C_word c,C_word *av) C_noret;
C_noret_decl(C_srfi_2d4_toplevel)
C_externexport void C_ccall C_srfi_2d4_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1629)
static void C_ccall trf_1629(C_word c,C_word *av) C_noret;
static void C_ccall trf_1629(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1629(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2690)
static void C_ccall trf_2690(C_word c,C_word *av) C_noret;
static void C_ccall trf_2690(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2690(t0,t1);}

C_noret_decl(trf_2801)
static void C_ccall trf_2801(C_word c,C_word *av) C_noret;
static void C_ccall trf_2801(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2801(t0,t1);}

C_noret_decl(trf_2875)
static void C_ccall trf_2875(C_word c,C_word *av) C_noret;
static void C_ccall trf_2875(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2875(t0,t1,t2,t3);}

C_noret_decl(trf_2911)
static void C_ccall trf_2911(C_word c,C_word *av) C_noret;
static void C_ccall trf_2911(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2911(t0,t1,t2,t3);}

C_noret_decl(trf_2947)
static void C_ccall trf_2947(C_word c,C_word *av) C_noret;
static void C_ccall trf_2947(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2947(t0,t1,t2,t3);}

C_noret_decl(trf_2983)
static void C_ccall trf_2983(C_word c,C_word *av) C_noret;
static void C_ccall trf_2983(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2983(t0,t1,t2,t3);}

C_noret_decl(trf_3019)
static void C_ccall trf_3019(C_word c,C_word *av) C_noret;
static void C_ccall trf_3019(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3019(t0,t1,t2,t3);}

C_noret_decl(trf_3055)
static void C_ccall trf_3055(C_word c,C_word *av) C_noret;
static void C_ccall trf_3055(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3055(t0,t1,t2,t3);}

C_noret_decl(trf_3091)
static void C_ccall trf_3091(C_word c,C_word *av) C_noret;
static void C_ccall trf_3091(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3091(t0,t1,t2,t3);}

C_noret_decl(trf_3127)
static void C_ccall trf_3127(C_word c,C_word *av) C_noret;
static void C_ccall trf_3127(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3127(t0,t1,t2,t3);}

C_noret_decl(trf_3163)
static void C_ccall trf_3163(C_word c,C_word *av) C_noret;
static void C_ccall trf_3163(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3163(t0,t1,t2,t3);}

C_noret_decl(trf_3199)
static void C_ccall trf_3199(C_word c,C_word *av) C_noret;
static void C_ccall trf_3199(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3199(t0,t1,t2,t3);}

C_noret_decl(trf_3292)
static void C_ccall trf_3292(C_word c,C_word *av) C_noret;
static void C_ccall trf_3292(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3292(t0,t1,t2);}

C_noret_decl(trf_3322)
static void C_ccall trf_3322(C_word c,C_word *av) C_noret;
static void C_ccall trf_3322(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3322(t0,t1,t2);}

C_noret_decl(trf_3352)
static void C_ccall trf_3352(C_word c,C_word *av) C_noret;
static void C_ccall trf_3352(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3352(t0,t1,t2);}

C_noret_decl(trf_3382)
static void C_ccall trf_3382(C_word c,C_word *av) C_noret;
static void C_ccall trf_3382(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3382(t0,t1,t2);}

C_noret_decl(trf_3412)
static void C_ccall trf_3412(C_word c,C_word *av) C_noret;
static void C_ccall trf_3412(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3412(t0,t1,t2);}

C_noret_decl(trf_3441)
static void C_ccall trf_3441(C_word c,C_word *av) C_noret;
static void C_ccall trf_3441(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3441(t0,t1,t2);}

C_noret_decl(trf_3470)
static void C_ccall trf_3470(C_word c,C_word *av) C_noret;
static void C_ccall trf_3470(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3470(t0,t1,t2);}

C_noret_decl(trf_3499)
static void C_ccall trf_3499(C_word c,C_word *av) C_noret;
static void C_ccall trf_3499(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3499(t0,t1,t2);}

C_noret_decl(trf_3528)
static void C_ccall trf_3528(C_word c,C_word *av) C_noret;
static void C_ccall trf_3528(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3528(t0,t1,t2);}

C_noret_decl(trf_3557)
static void C_ccall trf_3557(C_word c,C_word *av) C_noret;
static void C_ccall trf_3557(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3557(t0,t1,t2);}

C_noret_decl(trf_3619)
static void C_ccall trf_3619(C_word c,C_word *av) C_noret;
static void C_ccall trf_3619(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3619(t0,t1,t2);}

C_noret_decl(trf_3637)
static void C_ccall trf_3637(C_word c,C_word *av) C_noret;
static void C_ccall trf_3637(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3637(t0,t1,t2,t3);}

C_noret_decl(trf_3667)
static void C_ccall trf_3667(C_word c,C_word *av) C_noret;
static void C_ccall trf_3667(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3667(t0,t1,t2,t3);}

C_noret_decl(trf_3892)
static void C_ccall trf_3892(C_word c,C_word *av) C_noret;
static void C_ccall trf_3892(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3892(t0,t1,t2);}

C_noret_decl(trf_3998)
static void C_ccall trf_3998(C_word c,C_word *av) C_noret;
static void C_ccall trf_3998(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_3998(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_4208)
static void C_ccall trf_4208(C_word c,C_word *av) C_noret;
static void C_ccall trf_4208(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4208(t0,t1);}

/* f5225 in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f5225(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f5225,c,av);}
t3=C_i_check_structure_2(t2,lf[76],lf[154]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* f5232 in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f5232(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f5232,c,av);}
t3=C_i_check_structure_2(t2,lf[73],lf[152]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* f5239 in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f5239(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f5239,c,av);}
t3=C_i_check_structure_2(t2,lf[70],lf[150]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* f5246 in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f5246(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f5246,c,av);}
t3=C_i_check_structure_2(t2,lf[63],lf[148]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* f5253 in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f5253(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f5253,c,av);}
t3=C_i_check_structure_2(t2,lf[67],lf[146]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* f5260 in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f5260(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f5260,c,av);}
t3=C_i_check_structure_2(t2,lf[59],lf[144]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* f5267 in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f5267(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f5267,c,av);}
t3=C_i_check_structure_2(t2,lf[55],lf[142]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* f5274 in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f5274(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f5274,c,av);}
t3=C_i_check_structure_2(t2,lf[52],lf[140]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* f5281 in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f5281(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f5281,c,av);}
t3=C_i_check_structure_2(t2,lf[49],lf[138]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* f5288 in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f5288(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f5288,c,av);}
t3=C_i_check_structure_2(t2,lf[43],lf[136]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k1511 */
static void C_ccall f_1513(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1513,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1516,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k1514 in k1511 */
static void C_ccall f_1516(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_1516,c,av);}
a=C_alloc(19);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1519,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t4;
C_library_toplevel(2,av2);}}

/* k1517 in k1514 in k1511 */
static void C_ccall f_1519(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(66,c,5)))){
C_save_and_reclaim((void *)f_1519,c,av);}
a=C_alloc(66);
t2=C_mutate((C_word*)lf[2]+1 /* (set! srfi-4#u8vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1521,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[3]+1 /* (set! srfi-4#s8vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1524,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[4]+1 /* (set! srfi-4#u16vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1527,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[5]+1 /* (set! srfi-4#s16vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1530,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[6]+1 /* (set! srfi-4#u32vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1533,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[7]+1 /* (set! srfi-4#s32vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1536,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[8]+1 /* (set! srfi-4#u64vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1539,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[9]+1 /* (set! srfi-4#s64vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1542,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[10]+1 /* (set! srfi-4#f32vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1545,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[11]+1 /* (set! srfi-4#f64vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1548,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[12]+1 /* (set! srfi-4#u8vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1551,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[13]+1 /* (set! srfi-4#s8vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1554,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[14]+1 /* (set! srfi-4#u16vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1557,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[15]+1 /* (set! srfi-4#s16vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1560,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[16]+1 /* (set! srfi-4#u32vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1563,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[17]+1 /* (set! srfi-4#s32vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1566,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[18]+1 /* (set! srfi-4#u64vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1569,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[19]+1 /* (set! srfi-4#s64vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1572,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[20]+1 /* (set! srfi-4#f32vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1575,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[21]+1 /* (set! srfi-4#f64vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1578,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t22=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1583,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t23=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4482,a[2]=((C_word)li145),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:187: chicken.base#getter-with-setter */
t24=*((C_word*)lf[266]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t24;
av2[1]=t22;
av2[2]=t23;
av2[3]=*((C_word*)lf[12]+1);
av2[4]=lf[276];
((C_proc)(void*)(*((C_word*)t24+1)))(5,av2);}}

/* srfi-4#u8vector-length in k1517 in k1514 in k1511 */
static void C_ccall f_1521(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1521,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_u8vector_length(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* srfi-4#s8vector-length in k1517 in k1514 in k1511 */
static void C_ccall f_1524(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1524,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_s8vector_length(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* srfi-4#u16vector-length in k1517 in k1514 in k1511 */
static void C_ccall f_1527(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1527,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_u16vector_length(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* srfi-4#s16vector-length in k1517 in k1514 in k1511 */
static void C_ccall f_1530(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1530,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_s16vector_length(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* srfi-4#u32vector-length in k1517 in k1514 in k1511 */
static void C_ccall f_1533(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1533,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_u32vector_length(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* srfi-4#s32vector-length in k1517 in k1514 in k1511 */
static void C_ccall f_1536(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1536,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_s32vector_length(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* srfi-4#u64vector-length in k1517 in k1514 in k1511 */
static void C_ccall f_1539(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1539,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_u64vector_length(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* srfi-4#s64vector-length in k1517 in k1514 in k1511 */
static void C_ccall f_1542(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1542,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_s64vector_length(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* srfi-4#f32vector-length in k1517 in k1514 in k1511 */
static void C_ccall f_1545(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1545,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_f32vector_length(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* srfi-4#f64vector-length in k1517 in k1514 in k1511 */
static void C_ccall f_1548(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1548,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_f64vector_length(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* srfi-4#u8vector-set! in k1517 in k1514 in k1511 */
static void C_ccall f_1551(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1551,c,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_i_u8vector_set(t2,t3,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* srfi-4#s8vector-set! in k1517 in k1514 in k1511 */
static void C_ccall f_1554(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1554,c,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_i_s8vector_set(t2,t3,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* srfi-4#u16vector-set! in k1517 in k1514 in k1511 */
static void C_ccall f_1557(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1557,c,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_i_u16vector_set(t2,t3,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* srfi-4#s16vector-set! in k1517 in k1514 in k1511 */
static void C_ccall f_1560(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1560,c,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_i_s16vector_set(t2,t3,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* srfi-4#u32vector-set! in k1517 in k1514 in k1511 */
static void C_ccall f_1563(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1563,c,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_i_u32vector_set(t2,t3,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* srfi-4#s32vector-set! in k1517 in k1514 in k1511 */
static void C_ccall f_1566(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1566,c,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_i_s32vector_set(t2,t3,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* srfi-4#u64vector-set! in k1517 in k1514 in k1511 */
static void C_ccall f_1569(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1569,c,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_i_u64vector_set(t2,t3,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* srfi-4#s64vector-set! in k1517 in k1514 in k1511 */
static void C_ccall f_1572(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1572,c,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_i_s64vector_set(t2,t3,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* srfi-4#f32vector-set! in k1517 in k1514 in k1511 */
static void C_ccall f_1575(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1575,c,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_i_f32vector_set(t2,t3,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* srfi-4#f64vector-set! in k1517 in k1514 in k1511 */
static void C_ccall f_1578(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1578,c,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_i_f64vector_set(t2,t3,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_1583(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1583,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[22]+1 /* (set! srfi-4#u8vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1587,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4479,a[2]=((C_word)li144),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:193: chicken.base#getter-with-setter */
t5=*((C_word*)lf[266]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[13]+1);
av2[4]=lf[275];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_1587(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1587,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[23]+1 /* (set! srfi-4#s8vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1591,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4476,a[2]=((C_word)li143),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:199: chicken.base#getter-with-setter */
t5=*((C_word*)lf[266]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[14]+1);
av2[4]=lf[274];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_1591(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1591,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[24]+1 /* (set! srfi-4#u16vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1595,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4473,a[2]=((C_word)li142),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:205: chicken.base#getter-with-setter */
t5=*((C_word*)lf[266]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[15]+1);
av2[4]=lf[273];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_1595(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1595,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[25]+1 /* (set! srfi-4#s16vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1599,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4470,a[2]=((C_word)li141),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:211: chicken.base#getter-with-setter */
t5=*((C_word*)lf[266]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[16]+1);
av2[4]=lf[272];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_1599(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1599,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[26]+1 /* (set! srfi-4#u32vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1603,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4467,a[2]=((C_word)li140),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:217: chicken.base#getter-with-setter */
t5=*((C_word*)lf[266]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[17]+1);
av2[4]=lf[271];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_1603(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1603,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[27]+1 /* (set! srfi-4#s32vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1607,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4464,a[2]=((C_word)li139),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:223: chicken.base#getter-with-setter */
t5=*((C_word*)lf[266]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[18]+1);
av2[4]=lf[270];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_1607(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1607,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[28]+1 /* (set! srfi-4#u64vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1611,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4461,a[2]=((C_word)li138),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:229: chicken.base#getter-with-setter */
t5=*((C_word*)lf[266]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[19]+1);
av2[4]=lf[269];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_1611(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1611,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[29]+1 /* (set! srfi-4#s64vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1615,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4458,a[2]=((C_word)li137),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:235: chicken.base#getter-with-setter */
t5=*((C_word*)lf[266]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[20]+1);
av2[4]=lf[268];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_1615(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1615,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[30]+1 /* (set! srfi-4#f32vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1619,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4455,a[2]=((C_word)li136),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:241: chicken.base#getter-with-setter */
t5=*((C_word*)lf[266]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[21]+1);
av2[4]=lf[267];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_1619(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(231,c,6)))){
C_save_and_reclaim((void *)f_1619,c,av);}
a=C_alloc(231);
t2=C_mutate((C_word*)lf[31]+1 /* (set! srfi-4#f64vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1627,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1629,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp);
t5=C_mutate((C_word*)lf[38]+1 /* (set! srfi-4#release-number-vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1668,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[42]+1 /* (set! srfi-4#make-u8vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1683,a[2]=t3,a[3]=t4,a[4]=((C_word)li24),tmp=(C_word)a,a+=5,tmp));
t7=C_mutate((C_word*)lf[48]+1 /* (set! srfi-4#make-s8vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1799,a[2]=t3,a[3]=t4,a[4]=((C_word)li26),tmp=(C_word)a,a+=5,tmp));
t8=C_mutate((C_word*)lf[51]+1 /* (set! srfi-4#make-u16vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1915,a[2]=t3,a[3]=t4,a[4]=((C_word)li28),tmp=(C_word)a,a+=5,tmp));
t9=C_mutate((C_word*)lf[54]+1 /* (set! srfi-4#make-s16vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2031,a[2]=t3,a[3]=t4,a[4]=((C_word)li30),tmp=(C_word)a,a+=5,tmp));
t10=C_mutate((C_word*)lf[58]+1 /* (set! srfi-4#make-u32vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2157,a[2]=t3,a[3]=t4,a[4]=((C_word)li32),tmp=(C_word)a,a+=5,tmp));
t11=C_mutate((C_word*)lf[62]+1 /* (set! srfi-4#make-u64vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2273,a[2]=t3,a[3]=t4,a[4]=((C_word)li34),tmp=(C_word)a,a+=5,tmp));
t12=C_mutate((C_word*)lf[66]+1 /* (set! srfi-4#make-s32vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2389,a[2]=t3,a[3]=t4,a[4]=((C_word)li36),tmp=(C_word)a,a+=5,tmp));
t13=C_mutate((C_word*)lf[69]+1 /* (set! srfi-4#make-s64vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2515,a[2]=t3,a[3]=t4,a[4]=((C_word)li38),tmp=(C_word)a,a+=5,tmp));
t14=C_mutate((C_word*)lf[72]+1 /* (set! srfi-4#make-f32vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2641,a[2]=t3,a[3]=t4,a[4]=((C_word)li40),tmp=(C_word)a,a+=5,tmp));
t15=C_mutate((C_word*)lf[75]+1 /* (set! srfi-4#make-f64vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2752,a[2]=t3,a[3]=t4,a[4]=((C_word)li42),tmp=(C_word)a,a+=5,tmp));
t16=*((C_word*)lf[42]+1);
t17=C_mutate((C_word*)lf[78]+1 /* (set! srfi-4#list->u8vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2863,a[2]=t16,a[3]=((C_word)li44),tmp=(C_word)a,a+=4,tmp));
t18=*((C_word*)lf[48]+1);
t19=C_mutate((C_word*)lf[80]+1 /* (set! srfi-4#list->s8vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2899,a[2]=t18,a[3]=((C_word)li46),tmp=(C_word)a,a+=4,tmp));
t20=*((C_word*)lf[51]+1);
t21=C_mutate((C_word*)lf[81]+1 /* (set! srfi-4#list->u16vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2935,a[2]=t20,a[3]=((C_word)li48),tmp=(C_word)a,a+=4,tmp));
t22=*((C_word*)lf[54]+1);
t23=C_mutate((C_word*)lf[82]+1 /* (set! srfi-4#list->s16vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2971,a[2]=t22,a[3]=((C_word)li50),tmp=(C_word)a,a+=4,tmp));
t24=*((C_word*)lf[58]+1);
t25=C_mutate((C_word*)lf[83]+1 /* (set! srfi-4#list->u32vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3007,a[2]=t24,a[3]=((C_word)li52),tmp=(C_word)a,a+=4,tmp));
t26=*((C_word*)lf[66]+1);
t27=C_mutate((C_word*)lf[84]+1 /* (set! srfi-4#list->s32vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3043,a[2]=t26,a[3]=((C_word)li54),tmp=(C_word)a,a+=4,tmp));
t28=*((C_word*)lf[62]+1);
t29=C_mutate((C_word*)lf[85]+1 /* (set! srfi-4#list->u64vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3079,a[2]=t28,a[3]=((C_word)li56),tmp=(C_word)a,a+=4,tmp));
t30=*((C_word*)lf[69]+1);
t31=C_mutate((C_word*)lf[86]+1 /* (set! srfi-4#list->s64vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3115,a[2]=t30,a[3]=((C_word)li58),tmp=(C_word)a,a+=4,tmp));
t32=*((C_word*)lf[72]+1);
t33=C_mutate((C_word*)lf[87]+1 /* (set! srfi-4#list->f32vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3151,a[2]=t32,a[3]=((C_word)li60),tmp=(C_word)a,a+=4,tmp));
t34=*((C_word*)lf[75]+1);
t35=C_mutate((C_word*)lf[88]+1 /* (set! srfi-4#list->f64vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3187,a[2]=t34,a[3]=((C_word)li62),tmp=(C_word)a,a+=4,tmp));
t36=C_mutate((C_word*)lf[89]+1 /* (set! srfi-4#u8vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3223,a[2]=((C_word)li63),tmp=(C_word)a,a+=3,tmp));
t37=C_mutate((C_word*)lf[90]+1 /* (set! srfi-4#s8vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3229,a[2]=((C_word)li64),tmp=(C_word)a,a+=3,tmp));
t38=C_mutate((C_word*)lf[91]+1 /* (set! srfi-4#u16vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3235,a[2]=((C_word)li65),tmp=(C_word)a,a+=3,tmp));
t39=C_mutate((C_word*)lf[92]+1 /* (set! srfi-4#s16vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3241,a[2]=((C_word)li66),tmp=(C_word)a,a+=3,tmp));
t40=C_mutate((C_word*)lf[93]+1 /* (set! srfi-4#u32vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3247,a[2]=((C_word)li67),tmp=(C_word)a,a+=3,tmp));
t41=C_mutate((C_word*)lf[94]+1 /* (set! srfi-4#s32vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3253,a[2]=((C_word)li68),tmp=(C_word)a,a+=3,tmp));
t42=C_mutate((C_word*)lf[95]+1 /* (set! srfi-4#u64vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3259,a[2]=((C_word)li69),tmp=(C_word)a,a+=3,tmp));
t43=C_mutate((C_word*)lf[96]+1 /* (set! srfi-4#s64vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3265,a[2]=((C_word)li70),tmp=(C_word)a,a+=3,tmp));
t44=C_mutate((C_word*)lf[97]+1 /* (set! srfi-4#f32vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3271,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp));
t45=C_mutate((C_word*)lf[98]+1 /* (set! srfi-4#f64vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3277,a[2]=((C_word)li72),tmp=(C_word)a,a+=3,tmp));
t46=C_mutate((C_word*)lf[99]+1 /* (set! srfi-4#u8vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3283,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp));
t47=C_mutate((C_word*)lf[101]+1 /* (set! srfi-4#s8vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3313,a[2]=((C_word)li76),tmp=(C_word)a,a+=3,tmp));
t48=C_mutate((C_word*)lf[103]+1 /* (set! srfi-4#u16vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3343,a[2]=((C_word)li78),tmp=(C_word)a,a+=3,tmp));
t49=C_mutate((C_word*)lf[105]+1 /* (set! srfi-4#s16vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3373,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp));
t50=C_mutate((C_word*)lf[107]+1 /* (set! srfi-4#u32vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3403,a[2]=((C_word)li82),tmp=(C_word)a,a+=3,tmp));
t51=C_mutate((C_word*)lf[109]+1 /* (set! srfi-4#s32vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3432,a[2]=((C_word)li84),tmp=(C_word)a,a+=3,tmp));
t52=C_mutate((C_word*)lf[111]+1 /* (set! srfi-4#u64vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3461,a[2]=((C_word)li86),tmp=(C_word)a,a+=3,tmp));
t53=C_mutate((C_word*)lf[113]+1 /* (set! srfi-4#s64vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3490,a[2]=((C_word)li88),tmp=(C_word)a,a+=3,tmp));
t54=C_mutate((C_word*)lf[115]+1 /* (set! srfi-4#f32vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3519,a[2]=((C_word)li90),tmp=(C_word)a,a+=3,tmp));
t55=C_mutate((C_word*)lf[117]+1 /* (set! srfi-4#f64vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3548,a[2]=((C_word)li92),tmp=(C_word)a,a+=3,tmp));
t56=C_mutate((C_word*)lf[119]+1 /* (set! srfi-4#u8vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3577,a[2]=((C_word)li93),tmp=(C_word)a,a+=3,tmp));
t57=C_mutate((C_word*)lf[120]+1 /* (set! srfi-4#s8vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3580,a[2]=((C_word)li94),tmp=(C_word)a,a+=3,tmp));
t58=C_mutate((C_word*)lf[121]+1 /* (set! srfi-4#u16vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3583,a[2]=((C_word)li95),tmp=(C_word)a,a+=3,tmp));
t59=C_mutate((C_word*)lf[122]+1 /* (set! srfi-4#s16vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3586,a[2]=((C_word)li96),tmp=(C_word)a,a+=3,tmp));
t60=C_mutate((C_word*)lf[123]+1 /* (set! srfi-4#u32vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3589,a[2]=((C_word)li97),tmp=(C_word)a,a+=3,tmp));
t61=C_mutate((C_word*)lf[124]+1 /* (set! srfi-4#s32vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3592,a[2]=((C_word)li98),tmp=(C_word)a,a+=3,tmp));
t62=C_mutate((C_word*)lf[125]+1 /* (set! srfi-4#u64vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3595,a[2]=((C_word)li99),tmp=(C_word)a,a+=3,tmp));
t63=C_mutate((C_word*)lf[126]+1 /* (set! srfi-4#s64vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3598,a[2]=((C_word)li100),tmp=(C_word)a,a+=3,tmp));
t64=C_mutate((C_word*)lf[127]+1 /* (set! srfi-4#f32vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3601,a[2]=((C_word)li101),tmp=(C_word)a,a+=3,tmp));
t65=C_mutate((C_word*)lf[128]+1 /* (set! srfi-4#f64vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3604,a[2]=((C_word)li102),tmp=(C_word)a,a+=3,tmp));
t66=C_mutate((C_word*)lf[41]+1 /* (set! srfi-4#number-vector? ...) */,*((C_word*)lf[129]+1));
t67=C_mutate(&lf[130] /* (set! srfi-4#pack-copy ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3619,a[2]=((C_word)li104),tmp=(C_word)a,a+=3,tmp));
t68=C_mutate(&lf[132] /* (set! srfi-4#unpack ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3637,a[2]=((C_word)li106),tmp=(C_word)a,a+=3,tmp));
t69=C_mutate(&lf[134] /* (set! srfi-4#unpack-copy ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3667,a[2]=((C_word)li108),tmp=(C_word)a,a+=3,tmp));
t70=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5288,a[2]=((C_word)li109),tmp=(C_word)a,a+=3,tmp);
t71=C_mutate((C_word*)lf[137]+1 /* (set! srfi-4#u8vector->blob/shared ...) */,t70);
t72=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5281,a[2]=((C_word)li110),tmp=(C_word)a,a+=3,tmp);
t73=C_mutate((C_word*)lf[139]+1 /* (set! srfi-4#s8vector->blob/shared ...) */,t72);
t74=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5274,a[2]=((C_word)li111),tmp=(C_word)a,a+=3,tmp);
t75=C_mutate((C_word*)lf[141]+1 /* (set! srfi-4#u16vector->blob/shared ...) */,t74);
t76=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5267,a[2]=((C_word)li112),tmp=(C_word)a,a+=3,tmp);
t77=C_mutate((C_word*)lf[143]+1 /* (set! srfi-4#s16vector->blob/shared ...) */,t76);
t78=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5260,a[2]=((C_word)li113),tmp=(C_word)a,a+=3,tmp);
t79=C_mutate((C_word*)lf[145]+1 /* (set! srfi-4#u32vector->blob/shared ...) */,t78);
t80=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5253,a[2]=((C_word)li114),tmp=(C_word)a,a+=3,tmp);
t81=C_mutate((C_word*)lf[147]+1 /* (set! srfi-4#s32vector->blob/shared ...) */,t80);
t82=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5246,a[2]=((C_word)li115),tmp=(C_word)a,a+=3,tmp);
t83=C_mutate((C_word*)lf[149]+1 /* (set! srfi-4#u64vector->blob/shared ...) */,t82);
t84=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5239,a[2]=((C_word)li116),tmp=(C_word)a,a+=3,tmp);
t85=C_mutate((C_word*)lf[151]+1 /* (set! srfi-4#s64vector->blob/shared ...) */,t84);
t86=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5232,a[2]=((C_word)li117),tmp=(C_word)a,a+=3,tmp);
t87=C_mutate((C_word*)lf[153]+1 /* (set! srfi-4#f32vector->blob/shared ...) */,t86);
t88=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5225,a[2]=((C_word)li118),tmp=(C_word)a,a+=3,tmp);
t89=C_mutate((C_word*)lf[155]+1 /* (set! srfi-4#f64vector->blob/shared ...) */,t88);
t90=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3743,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:579: pack-copy */
f_3619(t90,lf[43],lf[265]);}

/* ext-free in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_1627(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1627,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=stub228(C_SCHEME_UNDEFINED,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* alloc in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_fcall f_1629(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_1629,5,t1,t2,t3,t4,t5);}
a=C_alloc(7);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1633,a[2]=t4,a[3]=t3,a[4]=t5,a[5]=t1,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* srfi-4.scm:273: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[37]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t6;
av2[2]=t4;
av2[3]=t2;
tp(4,av2);}}

/* k1631 in alloc in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_1633(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_1633,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1636,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_fixnum_lessp(((C_word*)t0)[2],C_fix(0)))){
/* srfi-4.scm:274: ##sys#error */
t3=*((C_word*)lf[32]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=lf[36];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_1636(2,av2);}}}

/* k1634 in k1631 in alloc in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_1636(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1636,c,av);}
a=C_alloc(6);
t2=C_i_o_fixnum_times(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1642,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_1642(2,av2);}}
else{
/* srfi-4.scm:276: ##sys#error */
t4=*((C_word*)lf[32]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[35];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k1640 in k1634 in k1631 in alloc in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_1642(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_1642,c,av);}
a=C_alloc(3);
if(C_truep(((C_word*)t0)[2])){
t2=C_fix((C_word)sizeof(size_t) * CHAR_BIT);
t3=C_i_foreign_unsigned_ranged_integer_argumentp(((C_word*)t0)[3],t2);
t4=stub222(C_SCHEME_UNDEFINED,t3);
if(C_truep(t4)){
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
/* srfi-4.scm:280: ##sys#error */
t5=*((C_word*)lf[32]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[5];
av2[3]=lf[33];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1657,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:281: ##sys#allocate-vector */
t3=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
av2[5]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}}

/* k1655 in k1640 in k1634 in k1631 in alloc in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_1657(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1657,c,av);}
t2=C_string_to_bytevector(t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* srfi-4#release-number-vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_1668(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1668,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1675,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:287: number-vector? */
t4=*((C_word*)lf[41]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k1673 in srfi-4#release-number-vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_1675(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1675,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=stub228(C_SCHEME_UNDEFINED,((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* srfi-4.scm:289: ##sys#error */
t2=*((C_word*)lf[32]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[39];
av2[3]=lf[40];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* srfi-4#make-u8vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_1683(C_word c,C_word *av){
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
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_1683,c,av);}
a=C_alloc(8);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=C_rest_nullp(c,3);
t6=C_rest_nullp(c,4);
t7=(C_truep(t6)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,3,t0));
t8=C_rest_nullp(c,4);
t9=C_rest_nullp(c,5);
t10=(C_truep(t9)?C_SCHEME_TRUE:C_get_rest_arg(c,5,av,3,t0));
t11=C_rest_nullp(c,5);
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1761,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t7,a[6]=t10,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:293: alloc */
f_1629(t12,lf[45],C_fix(1),t2,t7);}

/* k1706 in k1759 in srfi-4#make-u8vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_1708(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_1708,c,av);}
a=C_alloc(10);
if(C_truep(C_i_not(((C_word*)t0)[2]))){
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1738,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1719,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:109: ##sys#check-exact-uinteger */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[46]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[45];
tp(4,av2);}}}

/* k1717 in k1706 in k1759 in srfi-4#make-u8vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_1719(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_1719,c,av);}
if(C_truep(C_fixnum_greaterp(C_i_integer_length(((C_word*)t0)[2]),C_fix(8)))){
t2=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:111: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[44]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[44]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=lf[45];
av2[4]=((C_word*)t0)[2];
av2[5]=C_fix(0);
av2[6]=C_fix(256);
tp(7,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_1738(2,av2);}}}

/* k1736 in k1706 in k1759 in srfi-4#make-u8vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_1738(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_1738,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1743,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li23),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(
  f_1743(t2,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* doloop274 in k1736 in k1706 in k1759 in srfi-4#make-u8vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static C_word C_fcall f_1743(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_u8vector_set(((C_word*)t0)[3],t1,((C_word*)t0)[4]);
t4=C_fixnum_plus(t1,C_fix(1));
t1=t4;
goto loop;}}

/* k1759 in srfi-4#make-u8vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_1761(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_1761,c,av);}
a=C_alloc(9);
t2=C_a_i_record2(&a,2,lf[43],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1708,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:294: chicken.gc#set-finalizer! */
t4=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_1708(2,av2);}}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_1708(2,av2);}}}

/* srfi-4#make-s8vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_1799(C_word c,C_word *av){
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
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_1799,c,av);}
a=C_alloc(8);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=C_rest_nullp(c,3);
t6=C_rest_nullp(c,4);
t7=(C_truep(t6)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,3,t0));
t8=C_rest_nullp(c,4);
t9=C_rest_nullp(c,5);
t10=(C_truep(t9)?C_SCHEME_TRUE:C_get_rest_arg(c,5,av,3,t0));
t11=C_rest_nullp(c,5);
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1877,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t7,a[6]=t10,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:305: alloc */
f_1629(t12,lf[50],C_fix(1),t2,t7);}

/* k1822 in k1875 in srfi-4#make-s8vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_1824(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_1824,c,av);}
a=C_alloc(10);
if(C_truep(C_i_not(((C_word*)t0)[2]))){
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1854,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1835,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:109: ##sys#check-exact-uinteger */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[46]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[50];
tp(4,av2);}}}

/* k1833 in k1822 in k1875 in srfi-4#make-s8vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_1835(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_1835,c,av);}
if(C_truep(C_fixnum_greaterp(C_i_integer_length(((C_word*)t0)[2]),C_fix(8)))){
t2=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:111: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[44]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[44]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=lf[50];
av2[4]=((C_word*)t0)[2];
av2[5]=C_fix(0);
av2[6]=C_fix(256);
tp(7,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_1854(2,av2);}}}

/* k1852 in k1822 in k1875 in srfi-4#make-s8vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_1854(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_1854,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1859,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li25),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(
  f_1859(t2,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* doloop308 in k1852 in k1822 in k1875 in srfi-4#make-s8vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static C_word C_fcall f_1859(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_s8vector_set(((C_word*)t0)[3],t1,((C_word*)t0)[4]);
t4=C_fixnum_plus(t1,C_fix(1));
t1=t4;
goto loop;}}

/* k1875 in srfi-4#make-s8vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_1877(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_1877,c,av);}
a=C_alloc(9);
t2=C_a_i_record2(&a,2,lf[49],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1824,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:306: chicken.gc#set-finalizer! */
t4=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_1824(2,av2);}}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_1824(2,av2);}}}

/* srfi-4#make-u16vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_1915(C_word c,C_word *av){
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
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_1915,c,av);}
a=C_alloc(8);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=C_rest_nullp(c,3);
t6=C_rest_nullp(c,4);
t7=(C_truep(t6)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,3,t0));
t8=C_rest_nullp(c,4);
t9=C_rest_nullp(c,5);
t10=(C_truep(t9)?C_SCHEME_TRUE:C_get_rest_arg(c,5,av,3,t0));
t11=C_rest_nullp(c,5);
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1993,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t7,a[6]=t10,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:317: alloc */
f_1629(t12,lf[53],C_fix(2),t2,t7);}

/* k1938 in k1991 in srfi-4#make-u16vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_1940(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_1940,c,av);}
a=C_alloc(10);
if(C_truep(C_i_not(((C_word*)t0)[2]))){
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1970,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1951,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:109: ##sys#check-exact-uinteger */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[46]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[53];
tp(4,av2);}}}

/* k1949 in k1938 in k1991 in srfi-4#make-u16vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_1951(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_1951,c,av);}
if(C_truep(C_fixnum_greaterp(C_i_integer_length(((C_word*)t0)[2]),C_fix(16)))){
t2=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:111: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[44]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[44]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=lf[53];
av2[4]=((C_word*)t0)[2];
av2[5]=C_fix(0);
av2[6]=C_fix(65536);
tp(7,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_1970(2,av2);}}}

/* k1968 in k1938 in k1991 in srfi-4#make-u16vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_1970(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_1970,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1975,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li27),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(
  f_1975(t2,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* doloop342 in k1968 in k1938 in k1991 in srfi-4#make-u16vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static C_word C_fcall f_1975(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_u16vector_set(((C_word*)t0)[3],t1,((C_word*)t0)[4]);
t4=C_fixnum_plus(t1,C_fix(1));
t1=t4;
goto loop;}}

/* k1991 in srfi-4#make-u16vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_1993(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_1993,c,av);}
a=C_alloc(9);
t2=C_a_i_record2(&a,2,lf[52],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1940,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:318: chicken.gc#set-finalizer! */
t4=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_1940(2,av2);}}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_1940(2,av2);}}}

/* srfi-4#make-s16vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_2031(C_word c,C_word *av){
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
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_2031,c,av);}
a=C_alloc(8);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=C_rest_nullp(c,3);
t6=C_rest_nullp(c,4);
t7=(C_truep(t6)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,3,t0));
t8=C_rest_nullp(c,4);
t9=C_rest_nullp(c,5);
t10=(C_truep(t9)?C_SCHEME_TRUE:C_get_rest_arg(c,5,av,3,t0));
t11=C_rest_nullp(c,5);
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2119,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t7,a[6]=t10,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:329: alloc */
f_1629(t12,lf[56],C_fix(2),t2,t7);}

/* k2054 in k2117 in srfi-4#make-s16vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_2056(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_2056,c,av);}
a=C_alloc(10);
if(C_truep(C_i_not(((C_word*)t0)[2]))){
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2096,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2067,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:115: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[57]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[57]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[56];
tp(4,av2);}}}

/* k2065 in k2054 in k2117 in srfi-4#make-s16vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_2067(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(58,c,6)))){
C_save_and_reclaim((void *)f_2067,c,av);}
a=C_alloc(58);
t2=C_i_integer_length(((C_word*)t0)[2]);
t3=C_fixnum_difference(C_fix(16),C_fix(1));
if(C_truep(C_fixnum_greaterp(t2,t3))){
t4=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
t5=C_s_a_i_negate(&a,1,C_fix(65536));
t6=C_s_a_i_minus(&a,2,C_fix(65536),C_fix(1));
/* srfi-4.scm:117: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[44]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[44]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t4;
av2[3]=lf[56];
av2[4]=((C_word*)t0)[2];
av2[5]=t5;
av2[6]=t6;
tp(7,av2);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
f_2096(2,av2);}}}

/* k2094 in k2054 in k2117 in srfi-4#make-s16vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_2096(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2096,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2101,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li29),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(
  f_2101(t2,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* doloop376 in k2094 in k2054 in k2117 in srfi-4#make-s16vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static C_word C_fcall f_2101(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_s16vector_set(((C_word*)t0)[3],t1,((C_word*)t0)[4]);
t4=C_fixnum_plus(t1,C_fix(1));
t1=t4;
goto loop;}}

/* k2117 in srfi-4#make-s16vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_2119(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2119,c,av);}
a=C_alloc(9);
t2=C_a_i_record2(&a,2,lf[55],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2056,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:330: chicken.gc#set-finalizer! */
t4=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2056(2,av2);}}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2056(2,av2);}}}

/* srfi-4#make-u32vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_2157(C_word c,C_word *av){
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
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_2157,c,av);}
a=C_alloc(8);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=C_rest_nullp(c,3);
t6=C_rest_nullp(c,4);
t7=(C_truep(t6)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,3,t0));
t8=C_rest_nullp(c,4);
t9=C_rest_nullp(c,5);
t10=(C_truep(t9)?C_SCHEME_TRUE:C_get_rest_arg(c,5,av,3,t0));
t11=C_rest_nullp(c,5);
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2235,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t7,a[6]=t10,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:341: alloc */
f_1629(t12,lf[60],C_fix(4),t2,t7);}

/* k2180 in k2233 in srfi-4#make-u32vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_2182(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_2182,c,av);}
a=C_alloc(10);
if(C_truep(C_i_not(((C_word*)t0)[2]))){
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2212,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2193,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:109: ##sys#check-exact-uinteger */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[46]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[60];
tp(4,av2);}}}

/* k2191 in k2180 in k2233 in srfi-4#make-u32vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_2193(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_2193,c,av);}
if(C_truep(C_fixnum_greaterp(C_i_integer_length(((C_word*)t0)[2]),C_fix(32)))){
t2=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:111: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[44]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[44]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=lf[60];
av2[4]=((C_word*)t0)[2];
av2[5]=C_fix(0);
av2[6]=lf[61];
tp(7,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_2212(2,av2);}}}

/* k2210 in k2180 in k2233 in srfi-4#make-u32vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_2212(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2212,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2217,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li31),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(
  f_2217(t2,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* doloop410 in k2210 in k2180 in k2233 in srfi-4#make-u32vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static C_word C_fcall f_2217(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_u32vector_set(((C_word*)t0)[3],t1,((C_word*)t0)[4]);
t4=C_fixnum_plus(t1,C_fix(1));
t1=t4;
goto loop;}}

/* k2233 in srfi-4#make-u32vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_2235(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2235,c,av);}
a=C_alloc(9);
t2=C_a_i_record2(&a,2,lf[59],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2182,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:342: chicken.gc#set-finalizer! */
t4=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2182(2,av2);}}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2182(2,av2);}}}

/* srfi-4#make-u64vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_2273(C_word c,C_word *av){
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
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_2273,c,av);}
a=C_alloc(8);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=C_rest_nullp(c,3);
t6=C_rest_nullp(c,4);
t7=(C_truep(t6)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,3,t0));
t8=C_rest_nullp(c,4);
t9=C_rest_nullp(c,5);
t10=(C_truep(t9)?C_SCHEME_TRUE:C_get_rest_arg(c,5,av,3,t0));
t11=C_rest_nullp(c,5);
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2351,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t7,a[6]=t10,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:353: alloc */
f_1629(t12,lf[64],C_fix(8),t2,t7);}

/* k2296 in k2349 in srfi-4#make-u64vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_2298(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_2298,c,av);}
a=C_alloc(10);
if(C_truep(C_i_not(((C_word*)t0)[2]))){
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2328,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2309,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:109: ##sys#check-exact-uinteger */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[46]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[64];
tp(4,av2);}}}

/* k2307 in k2296 in k2349 in srfi-4#make-u64vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_2309(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_2309,c,av);}
if(C_truep(C_fixnum_greaterp(C_i_integer_length(((C_word*)t0)[2]),C_fix(64)))){
t2=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:111: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[44]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[44]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=lf[64];
av2[4]=((C_word*)t0)[2];
av2[5]=C_fix(0);
av2[6]=lf[65];
tp(7,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_2328(2,av2);}}}

/* k2326 in k2296 in k2349 in srfi-4#make-u64vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_2328(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2328,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2333,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li33),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(
  f_2333(t2,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* doloop444 in k2326 in k2296 in k2349 in srfi-4#make-u64vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static C_word C_fcall f_2333(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_u64vector_set(((C_word*)t0)[3],t1,((C_word*)t0)[4]);
t4=C_fixnum_plus(t1,C_fix(1));
t1=t4;
goto loop;}}

/* k2349 in srfi-4#make-u64vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_2351(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2351,c,av);}
a=C_alloc(9);
t2=C_a_i_record2(&a,2,lf[63],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2298,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:354: chicken.gc#set-finalizer! */
t4=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2298(2,av2);}}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2298(2,av2);}}}

/* srfi-4#make-s32vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_2389(C_word c,C_word *av){
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
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_2389,c,av);}
a=C_alloc(8);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=C_rest_nullp(c,3);
t6=C_rest_nullp(c,4);
t7=(C_truep(t6)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,3,t0));
t8=C_rest_nullp(c,4);
t9=C_rest_nullp(c,5);
t10=(C_truep(t9)?C_SCHEME_TRUE:C_get_rest_arg(c,5,av,3,t0));
t11=C_rest_nullp(c,5);
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2477,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t7,a[6]=t10,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:365: alloc */
f_1629(t12,lf[68],C_fix(4),t2,t7);}

/* k2412 in k2475 in srfi-4#make-s32vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_2414(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_2414,c,av);}
a=C_alloc(10);
if(C_truep(C_i_not(((C_word*)t0)[2]))){
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2454,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2425,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:115: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[57]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[57]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[68];
tp(4,av2);}}}

/* k2423 in k2412 in k2475 in srfi-4#make-s32vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_2425(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(58,c,6)))){
C_save_and_reclaim((void *)f_2425,c,av);}
a=C_alloc(58);
t2=C_i_integer_length(((C_word*)t0)[2]);
t3=C_fixnum_difference(C_fix(32),C_fix(1));
if(C_truep(C_fixnum_greaterp(t2,t3))){
t4=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
t5=C_s_a_i_negate(&a,1,lf[61]);
t6=C_s_a_i_minus(&a,2,lf[61],C_fix(1));
/* srfi-4.scm:117: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[44]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[44]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t4;
av2[3]=lf[68];
av2[4]=((C_word*)t0)[2];
av2[5]=t5;
av2[6]=t6;
tp(7,av2);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
f_2454(2,av2);}}}

/* k2452 in k2412 in k2475 in srfi-4#make-s32vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_2454(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2454,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2459,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li35),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(
  f_2459(t2,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* doloop478 in k2452 in k2412 in k2475 in srfi-4#make-s32vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static C_word C_fcall f_2459(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_s32vector_set(((C_word*)t0)[3],t1,((C_word*)t0)[4]);
t4=C_fixnum_plus(t1,C_fix(1));
t1=t4;
goto loop;}}

/* k2475 in srfi-4#make-s32vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_2477(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2477,c,av);}
a=C_alloc(9);
t2=C_a_i_record2(&a,2,lf[67],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2414,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:366: chicken.gc#set-finalizer! */
t4=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2414(2,av2);}}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2414(2,av2);}}}

/* srfi-4#make-s64vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_2515(C_word c,C_word *av){
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
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_2515,c,av);}
a=C_alloc(8);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=C_rest_nullp(c,3);
t6=C_rest_nullp(c,4);
t7=(C_truep(t6)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,3,t0));
t8=C_rest_nullp(c,4);
t9=C_rest_nullp(c,5);
t10=(C_truep(t9)?C_SCHEME_TRUE:C_get_rest_arg(c,5,av,3,t0));
t11=C_rest_nullp(c,5);
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2603,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t7,a[6]=t10,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:377: alloc */
f_1629(t12,lf[71],C_fix(8),t2,t7);}

/* k2538 in k2601 in srfi-4#make-s64vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_2540(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_2540,c,av);}
a=C_alloc(10);
if(C_truep(C_i_not(((C_word*)t0)[2]))){
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2580,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2551,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:115: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[57]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[57]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[71];
tp(4,av2);}}}

/* k2549 in k2538 in k2601 in srfi-4#make-s64vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_2551(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(58,c,6)))){
C_save_and_reclaim((void *)f_2551,c,av);}
a=C_alloc(58);
t2=C_i_integer_length(((C_word*)t0)[2]);
t3=C_fixnum_difference(C_fix(64),C_fix(1));
if(C_truep(C_fixnum_greaterp(t2,t3))){
t4=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
t5=C_s_a_i_negate(&a,1,lf[65]);
t6=C_s_a_i_minus(&a,2,lf[65],C_fix(1));
/* srfi-4.scm:117: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[44]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[44]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t4;
av2[3]=lf[71];
av2[4]=((C_word*)t0)[2];
av2[5]=t5;
av2[6]=t6;
tp(7,av2);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
f_2580(2,av2);}}}

/* k2578 in k2538 in k2601 in srfi-4#make-s64vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_2580(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2580,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2585,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li37),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(
  f_2585(t2,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* doloop512 in k2578 in k2538 in k2601 in srfi-4#make-s64vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static C_word C_fcall f_2585(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_s64vector_set(((C_word*)t0)[3],t1,((C_word*)t0)[4]);
t4=C_fixnum_plus(t1,C_fix(1));
t1=t4;
goto loop;}}

/* k2601 in srfi-4#make-s64vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_2603(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2603,c,av);}
a=C_alloc(9);
t2=C_a_i_record2(&a,2,lf[70],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2540,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:378: chicken.gc#set-finalizer! */
t4=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2540(2,av2);}}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2540(2,av2);}}}

/* srfi-4#make-f32vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_2641(C_word c,C_word *av){
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
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_2641,c,av);}
a=C_alloc(10);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_rest_nullp(c,3);
t8=C_rest_nullp(c,4);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,3,t0));
t10=C_rest_nullp(c,4);
t11=C_rest_nullp(c,5);
t12=(C_truep(t11)?C_SCHEME_TRUE:C_get_rest_arg(c,5,av,3,t0));
t13=C_rest_nullp(c,5);
t14=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2714,a[2]=t6,a[3]=t1,a[4]=t2,a[5]=t9,a[6]=t12,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:389: alloc */
f_1629(t14,lf[74],C_fix(4),t2,t9);}

/* k2664 in k2712 in srfi-4#make-f32vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_2666(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2666,c,av);}
a=C_alloc(6);
if(C_truep(C_i_not(((C_word*)((C_word*)t0)[2])[1]))){
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2687,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)((C_word*)t0)[2])[1];
t4=C_i_exact_integerp(t3);
t5=(C_truep(t4)?t4:C_i_flonump(t3));
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=t2;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
f_2687(2,av2);}}
else{
t6=C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_FLONUM_ERROR);
/* srfi-4.scm:99: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[44]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[44]+1);
av2[1]=t2;
av2[2]=t6;
av2[3]=lf[74];
av2[4]=t3;
tp(5,av2);}}}}

/* k2685 in k2664 in k2712 in srfi-4#make-f32vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_2687(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_2687,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2690,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_flonump(((C_word*)((C_word*)t0)[4])[1]))){
t3=t2;
f_2690(t3,C_SCHEME_UNDEFINED);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,C_a_u_i_int_to_flo(&a,1,((C_word*)((C_word*)t0)[4])[1]));
t4=t2;
f_2690(t4,t3);}}

/* k2688 in k2685 in k2664 in k2712 in srfi-4#make-f32vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_fcall f_2690(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_2690,2,t0,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2695,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li39),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[5];{
C_word av2[2];
av2[0]=t3;
av2[1]=(
  f_2695(t2,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* doloop547 in k2688 in k2685 in k2664 in k2712 in srfi-4#make-f32vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static C_word C_fcall f_2695(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_f32vector_set(((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[4])[1]);
t4=C_fixnum_plus(t1,C_fix(1));
t1=t4;
goto loop;}}

/* k2712 in srfi-4#make-f32vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_2714(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2714,c,av);}
a=C_alloc(9);
t2=C_a_i_record2(&a,2,lf[73],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2666,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:390: chicken.gc#set-finalizer! */
t4=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2666(2,av2);}}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2666(2,av2);}}}

/* srfi-4#make-f64vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_2752(C_word c,C_word *av){
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
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_2752,c,av);}
a=C_alloc(10);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_rest_nullp(c,3);
t8=C_rest_nullp(c,4);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,3,t0));
t10=C_rest_nullp(c,4);
t11=C_rest_nullp(c,5);
t12=(C_truep(t11)?C_SCHEME_TRUE:C_get_rest_arg(c,5,av,3,t0));
t13=C_rest_nullp(c,5);
t14=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2825,a[2]=t6,a[3]=t1,a[4]=t2,a[5]=t9,a[6]=t12,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:403: alloc */
f_1629(t14,lf[77],C_fix(8),t2,t9);}

/* k2775 in k2823 in srfi-4#make-f64vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_2777(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2777,c,av);}
a=C_alloc(6);
if(C_truep(C_i_not(((C_word*)((C_word*)t0)[2])[1]))){
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2798,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)((C_word*)t0)[2])[1];
t4=C_i_exact_integerp(t3);
t5=(C_truep(t4)?t4:C_i_flonump(t3));
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=t2;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
f_2798(2,av2);}}
else{
t6=C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_FLONUM_ERROR);
/* srfi-4.scm:99: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[44]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[44]+1);
av2[1]=t2;
av2[2]=t6;
av2[3]=lf[77];
av2[4]=t3;
tp(5,av2);}}}}

/* k2796 in k2775 in k2823 in srfi-4#make-f64vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_2798(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_2798,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2801,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_flonump(((C_word*)((C_word*)t0)[4])[1]))){
t3=t2;
f_2801(t3,C_SCHEME_UNDEFINED);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,C_a_u_i_int_to_flo(&a,1,((C_word*)((C_word*)t0)[4])[1]));
t4=t2;
f_2801(t4,t3);}}

/* k2799 in k2796 in k2775 in k2823 in srfi-4#make-f64vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_fcall f_2801(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_2801,2,t0,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2806,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li41),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[5];{
C_word av2[2];
av2[0]=t3;
av2[1]=(
  f_2806(t2,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* doloop583 in k2799 in k2796 in k2775 in k2823 in srfi-4#make-f64vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static C_word C_fcall f_2806(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_f64vector_set(((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[4])[1]);
t4=C_fixnum_plus(t1,C_fix(1));
t1=t4;
goto loop;}}

/* k2823 in srfi-4#make-f64vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_2825(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2825,c,av);}
a=C_alloc(9);
t2=C_a_i_record2(&a,2,lf[76],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2777,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:404: chicken.gc#set-finalizer! */
t4=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2777(2,av2);}}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2777(2,av2);}}}

/* srfi-4#list->u8vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_2863(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2863,c,av);}
a=C_alloc(4);
t3=C_i_check_list_2(t2,lf[43]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2870,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:439: make-u8vector */
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k2868 in srfi-4#list->u8vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_2870(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_2870,c,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2875,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word)li43),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2875(t5,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* doloop618 in k2868 in srfi-4#list->u8vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_fcall f_2875(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_2875,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2882,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_i_u8vector_set(((C_word*)t0)[2],t3,C_slot(t2,C_fix(0)));
t8=t1;
t9=C_slot(t2,C_fix(1));
t10=C_fixnum_plus(t3,C_fix(1));
t1=t8;
t2=t9;
t3=t10;
goto loop;}
else{
/* srfi-4.scm:439: ##sys#error-not-a-proper-list */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[79]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[79]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}}}

/* k2880 in doloop618 in k2868 in srfi-4#list->u8vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_2882(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2882,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_2875(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)),C_fixnum_plus(((C_word*)t0)[5],C_fix(1)));}

/* srfi-4#list->s8vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_2899(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2899,c,av);}
a=C_alloc(4);
t3=C_i_check_list_2(t2,lf[49]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2906,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:440: make-s8vector */
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k2904 in srfi-4#list->s8vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_2906(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_2906,c,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2911,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word)li45),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2911(t5,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* doloop631 in k2904 in srfi-4#list->s8vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_fcall f_2911(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_2911,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2918,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_i_s8vector_set(((C_word*)t0)[2],t3,C_slot(t2,C_fix(0)));
t8=t1;
t9=C_slot(t2,C_fix(1));
t10=C_fixnum_plus(t3,C_fix(1));
t1=t8;
t2=t9;
t3=t10;
goto loop;}
else{
/* srfi-4.scm:440: ##sys#error-not-a-proper-list */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[79]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[79]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}}}

/* k2916 in doloop631 in k2904 in srfi-4#list->s8vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_2918(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2918,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_2911(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)),C_fixnum_plus(((C_word*)t0)[5],C_fix(1)));}

/* srfi-4#list->u16vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_2935(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2935,c,av);}
a=C_alloc(4);
t3=C_i_check_list_2(t2,lf[52]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2942,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:441: make-u16vector */
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k2940 in srfi-4#list->u16vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_2942(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_2942,c,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2947,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word)li47),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2947(t5,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* doloop644 in k2940 in srfi-4#list->u16vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_fcall f_2947(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_2947,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2954,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_i_u16vector_set(((C_word*)t0)[2],t3,C_slot(t2,C_fix(0)));
t8=t1;
t9=C_slot(t2,C_fix(1));
t10=C_fixnum_plus(t3,C_fix(1));
t1=t8;
t2=t9;
t3=t10;
goto loop;}
else{
/* srfi-4.scm:441: ##sys#error-not-a-proper-list */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[79]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[79]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}}}

/* k2952 in doloop644 in k2940 in srfi-4#list->u16vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_2954(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2954,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_2947(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)),C_fixnum_plus(((C_word*)t0)[5],C_fix(1)));}

/* srfi-4#list->s16vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_2971(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2971,c,av);}
a=C_alloc(4);
t3=C_i_check_list_2(t2,lf[55]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2978,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:442: make-s16vector */
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k2976 in srfi-4#list->s16vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_2978(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_2978,c,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2983,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word)li49),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2983(t5,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* doloop657 in k2976 in srfi-4#list->s16vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_fcall f_2983(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_2983,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2990,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_i_s16vector_set(((C_word*)t0)[2],t3,C_slot(t2,C_fix(0)));
t8=t1;
t9=C_slot(t2,C_fix(1));
t10=C_fixnum_plus(t3,C_fix(1));
t1=t8;
t2=t9;
t3=t10;
goto loop;}
else{
/* srfi-4.scm:442: ##sys#error-not-a-proper-list */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[79]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[79]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}}}

/* k2988 in doloop657 in k2976 in srfi-4#list->s16vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_2990(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2990,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_2983(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)),C_fixnum_plus(((C_word*)t0)[5],C_fix(1)));}

/* srfi-4#list->u32vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3007(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3007,c,av);}
a=C_alloc(4);
t3=C_i_check_list_2(t2,lf[59]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3014,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:443: make-u32vector */
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k3012 in srfi-4#list->u32vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3014(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_3014,c,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3019,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word)li51),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_3019(t5,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* doloop670 in k3012 in srfi-4#list->u32vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_fcall f_3019(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_3019,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3026,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_i_u32vector_set(((C_word*)t0)[2],t3,C_slot(t2,C_fix(0)));
t8=t1;
t9=C_slot(t2,C_fix(1));
t10=C_fixnum_plus(t3,C_fix(1));
t1=t8;
t2=t9;
t3=t10;
goto loop;}
else{
/* srfi-4.scm:443: ##sys#error-not-a-proper-list */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[79]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[79]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}}}

/* k3024 in doloop670 in k3012 in srfi-4#list->u32vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3026(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3026,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3019(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)),C_fixnum_plus(((C_word*)t0)[5],C_fix(1)));}

/* srfi-4#list->s32vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3043(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3043,c,av);}
a=C_alloc(4);
t3=C_i_check_list_2(t2,lf[67]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3050,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:444: make-s32vector */
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k3048 in srfi-4#list->s32vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3050(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_3050,c,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3055,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word)li53),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_3055(t5,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* doloop683 in k3048 in srfi-4#list->s32vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_fcall f_3055(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_3055,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3062,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_i_s32vector_set(((C_word*)t0)[2],t3,C_slot(t2,C_fix(0)));
t8=t1;
t9=C_slot(t2,C_fix(1));
t10=C_fixnum_plus(t3,C_fix(1));
t1=t8;
t2=t9;
t3=t10;
goto loop;}
else{
/* srfi-4.scm:444: ##sys#error-not-a-proper-list */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[79]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[79]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}}}

/* k3060 in doloop683 in k3048 in srfi-4#list->s32vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3062(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3062,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3055(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)),C_fixnum_plus(((C_word*)t0)[5],C_fix(1)));}

/* srfi-4#list->u64vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3079(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3079,c,av);}
a=C_alloc(4);
t3=C_i_check_list_2(t2,lf[63]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3086,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:445: make-u64vector */
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k3084 in srfi-4#list->u64vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3086(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_3086,c,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3091,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word)li55),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_3091(t5,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* doloop696 in k3084 in srfi-4#list->u64vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_fcall f_3091(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_3091,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3098,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_i_u64vector_set(((C_word*)t0)[2],t3,C_slot(t2,C_fix(0)));
t8=t1;
t9=C_slot(t2,C_fix(1));
t10=C_fixnum_plus(t3,C_fix(1));
t1=t8;
t2=t9;
t3=t10;
goto loop;}
else{
/* srfi-4.scm:445: ##sys#error-not-a-proper-list */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[79]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[79]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}}}

/* k3096 in doloop696 in k3084 in srfi-4#list->u64vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3098(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3098,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3091(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)),C_fixnum_plus(((C_word*)t0)[5],C_fix(1)));}

/* srfi-4#list->s64vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3115(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3115,c,av);}
a=C_alloc(4);
t3=C_i_check_list_2(t2,lf[70]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3122,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:446: make-s64vector */
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}

/* k3120 in srfi-4#list->s64vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3122(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_3122,c,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3127,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word)li57),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_3127(t5,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* doloop709 in k3120 in srfi-4#list->s64vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_fcall f_3127(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_3127,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3134,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_i_s64vector_set(((C_word*)t0)[2],t3,C_slot(t2,C_fix(0)));
t8=t1;
t9=C_slot(t2,C_fix(1));
t10=C_fixnum_plus(t3,C_fix(1));
t1=t8;
t2=t9;
t3=t10;
goto loop;}
else{
/* srfi-4.scm:446: ##sys#error-not-a-proper-list */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[79]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[79]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}}}

/* k3132 in doloop709 in k3120 in srfi-4#list->s64vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3134(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3134,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3127(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)),C_fixnum_plus(((C_word*)t0)[5],C_fix(1)));}

/* srfi-4#list->f32vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3151(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3151,c,av);}
a=C_alloc(4);
t3=C_i_check_list_2(t2,lf[73]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3158,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:447: make-f32vector */
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k3156 in srfi-4#list->f32vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3158(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_3158,c,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3163,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word)li59),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_3163(t5,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* doloop722 in k3156 in srfi-4#list->f32vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_fcall f_3163(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_3163,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3170,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_i_f32vector_set(((C_word*)t0)[2],t3,C_slot(t2,C_fix(0)));
t8=t1;
t9=C_slot(t2,C_fix(1));
t10=C_fixnum_plus(t3,C_fix(1));
t1=t8;
t2=t9;
t3=t10;
goto loop;}
else{
/* srfi-4.scm:447: ##sys#error-not-a-proper-list */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[79]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[79]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}}}

/* k3168 in doloop722 in k3156 in srfi-4#list->f32vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3170(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3170,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3163(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)),C_fixnum_plus(((C_word*)t0)[5],C_fix(1)));}

/* srfi-4#list->f64vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3187(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3187,c,av);}
a=C_alloc(4);
t3=C_i_check_list_2(t2,lf[76]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3194,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:448: make-f64vector */
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k3192 in srfi-4#list->f64vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3194(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_3194,c,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3199,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word)li61),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_3199(t5,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* doloop735 in k3192 in srfi-4#list->f64vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_fcall f_3199(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_3199,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3206,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_i_f64vector_set(((C_word*)t0)[2],t3,C_slot(t2,C_fix(0)));
t8=t1;
t9=C_slot(t2,C_fix(1));
t10=C_fixnum_plus(t3,C_fix(1));
t1=t8;
t2=t9;
t3=t10;
goto loop;}
else{
/* srfi-4.scm:448: ##sys#error-not-a-proper-list */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[79]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[79]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}}}

/* k3204 in doloop735 in k3192 in srfi-4#list->f64vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3206(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3206,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3199(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)),C_fixnum_plus(((C_word*)t0)[5],C_fix(1)));}

/* srfi-4#u8vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3223(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,2)))){
C_save_and_reclaim((void*)f_3223,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
/* srfi-4.scm:454: list->u8vector */
t3=*((C_word*)lf[78]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* srfi-4#s8vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3229(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,2)))){
C_save_and_reclaim((void*)f_3229,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
/* srfi-4.scm:457: list->s8vector */
t3=*((C_word*)lf[80]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* srfi-4#u16vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3235(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,2)))){
C_save_and_reclaim((void*)f_3235,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
/* srfi-4.scm:460: list->u16vector */
t3=*((C_word*)lf[81]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* srfi-4#s16vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3241(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,2)))){
C_save_and_reclaim((void*)f_3241,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
/* srfi-4.scm:463: list->s16vector */
t3=*((C_word*)lf[82]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* srfi-4#u32vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3247(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,2)))){
C_save_and_reclaim((void*)f_3247,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
/* srfi-4.scm:466: list->u32vector */
t3=*((C_word*)lf[83]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* srfi-4#s32vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3253(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,2)))){
C_save_and_reclaim((void*)f_3253,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
/* srfi-4.scm:469: list->s32vector */
t3=*((C_word*)lf[84]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* srfi-4#u64vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3259(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,2)))){
C_save_and_reclaim((void*)f_3259,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
/* srfi-4.scm:472: list->u64vector */
t3=*((C_word*)lf[85]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* srfi-4#s64vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3265(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,2)))){
C_save_and_reclaim((void*)f_3265,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
/* srfi-4.scm:475: list->s64vector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[86]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[86]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* srfi-4#f32vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3271(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,2)))){
C_save_and_reclaim((void*)f_3271,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
/* srfi-4.scm:478: list->f32vector */
t3=*((C_word*)lf[87]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* srfi-4#f64vector in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3277(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,2)))){
C_save_and_reclaim((void*)f_3277,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
/* srfi-4.scm:481: list->f64vector */
t3=*((C_word*)lf[88]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* srfi-4#u8vector->list in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3283(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_3283,c,av);}
a=C_alloc(8);
t3=C_i_check_structure_2(t2,lf[43],lf[100]);
t4=C_u_i_u8vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3292,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li73),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_3292(t8,t1,C_fix(0));}

/* loop in srfi-4#u8vector->list in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_fcall f_3292(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3292,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_u_i_u8vector_ref(((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3307,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:504: loop */
t6=t4;
t7=C_fixnum_plus(t2,C_fix(1));
t1=t6;
t2=t7;
goto loop;}}

/* k3305 in loop in srfi-4#u8vector->list in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3307(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3307,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* srfi-4#s8vector->list in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3313(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_3313,c,av);}
a=C_alloc(8);
t3=C_i_check_structure_2(t2,lf[49],lf[102]);
t4=C_u_i_s8vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3322,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li75),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_3322(t8,t1,C_fix(0));}

/* loop in srfi-4#s8vector->list in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_fcall f_3322(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3322,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_u_i_s8vector_ref(((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3337,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:505: loop */
t6=t4;
t7=C_fixnum_plus(t2,C_fix(1));
t1=t6;
t2=t7;
goto loop;}}

/* k3335 in loop in srfi-4#s8vector->list in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3337(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3337,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* srfi-4#u16vector->list in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3343(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_3343,c,av);}
a=C_alloc(8);
t3=C_i_check_structure_2(t2,lf[52],lf[104]);
t4=C_u_i_u16vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3352,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li77),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_3352(t8,t1,C_fix(0));}

/* loop in srfi-4#u16vector->list in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_fcall f_3352(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3352,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_u_i_u16vector_ref(((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3367,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:506: loop */
t6=t4;
t7=C_fixnum_plus(t2,C_fix(1));
t1=t6;
t2=t7;
goto loop;}}

/* k3365 in loop in srfi-4#u16vector->list in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3367(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3367,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* srfi-4#s16vector->list in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3373(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_3373,c,av);}
a=C_alloc(8);
t3=C_i_check_structure_2(t2,lf[55],lf[106]);
t4=C_u_i_s16vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3382,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li79),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_3382(t8,t1,C_fix(0));}

/* loop in srfi-4#s16vector->list in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_fcall f_3382(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3382,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_u_i_s16vector_ref(((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3397,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:507: loop */
t6=t4;
t7=C_fixnum_plus(t2,C_fix(1));
t1=t6;
t2=t7;
goto loop;}}

/* k3395 in loop in srfi-4#s16vector->list in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3397(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3397,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* srfi-4#u32vector->list in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3403(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_3403,c,av);}
a=C_alloc(8);
t3=C_i_check_structure_2(t2,lf[59],lf[108]);
t4=C_u_i_u32vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3412,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li81),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_3412(t8,t1,C_fix(0));}

/* loop in srfi-4#u32vector->list in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_fcall f_3412(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3412,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3426,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:509: loop */
t5=t3;
t6=C_fixnum_plus(t2,C_fix(1));
t1=t5;
t2=t6;
goto loop;}}

/* k3424 in loop in srfi-4#u32vector->list in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3426(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_3426,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,C_a_u_i_u32vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]),t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* srfi-4#s32vector->list in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3432(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_3432,c,av);}
a=C_alloc(8);
t3=C_i_check_structure_2(t2,lf[67],lf[110]);
t4=C_u_i_s32vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3441,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li83),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_3441(t8,t1,C_fix(0));}

/* loop in srfi-4#s32vector->list in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_fcall f_3441(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3441,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3455,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:510: loop */
t5=t3;
t6=C_fixnum_plus(t2,C_fix(1));
t1=t5;
t2=t6;
goto loop;}}

/* k3453 in loop in srfi-4#s32vector->list in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3455(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_3455,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,C_a_u_i_s32vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]),t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* srfi-4#u64vector->list in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3461(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_3461,c,av);}
a=C_alloc(8);
t3=C_i_check_structure_2(t2,lf[63],lf[112]);
t4=C_u_i_u64vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3470,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li85),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_3470(t8,t1,C_fix(0));}

/* loop in srfi-4#u64vector->list in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_fcall f_3470(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3470,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3484,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:511: loop */
t5=t3;
t6=C_fixnum_plus(t2,C_fix(1));
t1=t5;
t2=t6;
goto loop;}}

/* k3482 in loop in srfi-4#u64vector->list in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3484(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,1)))){
C_save_and_reclaim((void *)f_3484,c,av);}
a=C_alloc(10);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,C_a_u_i_u64vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]),t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* srfi-4#s64vector->list in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3490(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_3490,c,av);}
a=C_alloc(8);
t3=C_i_check_structure_2(t2,lf[70],lf[114]);
t4=C_u_i_s64vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3499,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li87),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_3499(t8,t1,C_fix(0));}

/* loop in srfi-4#s64vector->list in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_fcall f_3499(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3499,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3513,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:512: loop */
t5=t3;
t6=C_fixnum_plus(t2,C_fix(1));
t1=t5;
t2=t6;
goto loop;}}

/* k3511 in loop in srfi-4#s64vector->list in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3513(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,1)))){
C_save_and_reclaim((void *)f_3513,c,av);}
a=C_alloc(10);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,C_a_u_i_s64vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]),t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* srfi-4#f32vector->list in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3519(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_3519,c,av);}
a=C_alloc(8);
t3=C_i_check_structure_2(t2,lf[73],lf[116]);
t4=C_u_i_f32vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3528,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li89),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_3528(t8,t1,C_fix(0));}

/* loop in srfi-4#f32vector->list in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_fcall f_3528(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3528,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3542,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:513: loop */
t5=t3;
t6=C_fixnum_plus(t2,C_fix(1));
t1=t5;
t2=t6;
goto loop;}}

/* k3540 in loop in srfi-4#f32vector->list in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3542(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,1)))){
C_save_and_reclaim((void *)f_3542,c,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,C_a_u_i_f32vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]),t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* srfi-4#f64vector->list in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3548(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_3548,c,av);}
a=C_alloc(8);
t3=C_i_check_structure_2(t2,lf[76],lf[118]);
t4=C_u_i_f64vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3557,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li91),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_3557(t8,t1,C_fix(0));}

/* loop in srfi-4#f64vector->list in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_fcall f_3557(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3557,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3571,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:514: loop */
t5=t3;
t6=C_fixnum_plus(t2,C_fix(1));
t1=t5;
t2=t6;
goto loop;}}

/* k3569 in loop in srfi-4#f64vector->list in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3571(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,1)))){
C_save_and_reclaim((void *)f_3571,c,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,C_a_u_i_f64vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]),t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* srfi-4#u8vector? in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3577(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3577,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_u8vectorp(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* srfi-4#s8vector? in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3580(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3580,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_s8vectorp(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* srfi-4#u16vector? in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3583(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3583,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_u16vectorp(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* srfi-4#s16vector? in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3586(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3586,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_s16vectorp(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* srfi-4#u32vector? in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3589(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3589,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_u32vectorp(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* srfi-4#s32vector? in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3592(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3592,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_s32vectorp(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* srfi-4#u64vector? in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3595(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3595,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_u64vectorp(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* srfi-4#s64vector? in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3598(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3598,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_s64vectorp(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* srfi-4#f32vector? in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3601(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3601,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_f32vectorp(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* srfi-4#f64vector? in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3604(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3604,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_f64vectorp(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* srfi-4#pack-copy in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_fcall f_3619(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_3619,3,t1,t2,t3);}
a=C_alloc(5);
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3621,a[2]=t2,a[3]=t3,a[4]=((C_word)li103),tmp=(C_word)a,a+=5,tmp);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* f_3621 in srfi-4#pack-copy in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3621(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3621,c,av);}
a=C_alloc(4);
t3=C_i_check_structure_2(t2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3631,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:544: ##sys#make-blob */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[131]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[131]+1);
av2[1]=t5;
av2[2]=C_block_size(t4);
tp(3,av2);}}

/* k3629 */
static void C_ccall f_3631(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3631,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_copy_block(((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* srfi-4#unpack in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_fcall f_3637(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_3637,4,t1,t2,t3,t4);}
a=C_alloc(6);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3639,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=((C_word)li105),tmp=(C_word)a,a+=6,tmp);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* f_3639 in srfi-4#unpack in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3639(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3639,c,av);}
a=C_alloc(3);
t3=C_i_check_bytevector_2(t2,((C_word*)t0)[2]);
t4=C_block_size(t2);
t5=C_eqp(C_SCHEME_TRUE,((C_word*)t0)[3]);
t6=(C_truep(t5)?t5:C_eqp(C_fix(0),C_fixnum_modulo(t4,((C_word*)t0)[3])));
if(C_truep(t6)){
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_a_i_record2(&a,2,((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
/* srfi-4.scm:554: ##sys#error */
t7=*((C_word*)lf[32]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t7;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[133];
av2[4]=((C_word*)t0)[4];
av2[5]=t4;
av2[6]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t7+1)))(7,av2);}}}

/* srfi-4#unpack-copy in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_fcall f_3667(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_3667,4,t1,t2,t3,t4);}
a=C_alloc(6);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3669,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=((C_word)li107),tmp=(C_word)a,a+=6,tmp);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* f_3669 in srfi-4#unpack-copy in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3669(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_3669,c,av);}
a=C_alloc(8);
t3=C_i_check_bytevector_2(t2,((C_word*)t0)[2]);
t4=C_block_size(t2);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3679,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t2,a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:560: ##sys#make-blob */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[131]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[131]+1);
av2[1]=t5;
av2[2]=t4;
tp(3,av2);}}

/* k3677 */
static void C_ccall f_3679(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3679,c,av);}
a=C_alloc(3);
t2=C_eqp(C_SCHEME_TRUE,((C_word*)t0)[2]);
t3=(C_truep(t2)?t2:C_eqp(C_fix(0),C_fixnum_modulo(((C_word*)t0)[3],((C_word*)t0)[2])));
if(C_truep(t3)){
t4=C_copy_block(((C_word*)t0)[4],t1);
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_record2(&a,2,((C_word*)t0)[6],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
/* srfi-4.scm:566: ##sys#error */
t4=*((C_word*)lf[32]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[5];
av2[2]=((C_word*)t0)[7];
av2[3]=lf[135];
av2[4]=((C_word*)t0)[6];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}}}

/* k3741 in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3743(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3743,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[156]+1 /* (set! srfi-4#u8vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3747,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:580: pack-copy */
f_3619(t3,lf[49],lf[264]);}

/* k3745 in k3741 in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3747(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3747,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[157]+1 /* (set! srfi-4#s8vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3751,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:581: pack-copy */
f_3619(t3,lf[52],lf[263]);}

/* k3749 in k3745 in k3741 in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3751(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3751,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[158]+1 /* (set! srfi-4#u16vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3755,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:582: pack-copy */
f_3619(t3,lf[55],lf[262]);}

/* k3753 in k3749 in k3745 in k3741 in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3755(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3755,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[159]+1 /* (set! srfi-4#s16vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3759,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:583: pack-copy */
f_3619(t3,lf[59],lf[261]);}

/* k3757 in k3753 in k3749 in k3745 in k3741 in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3759(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3759,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[160]+1 /* (set! srfi-4#u32vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3763,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:584: pack-copy */
f_3619(t3,lf[67],lf[260]);}

/* k3761 in k3757 in k3753 in k3749 in k3745 in k3741 in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3763(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3763,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[161]+1 /* (set! srfi-4#s32vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3767,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:585: pack-copy */
f_3619(t3,lf[63],lf[259]);}

/* k3765 in k3761 in k3757 in k3753 in k3749 in k3745 in k3741 in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3767(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3767,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[162]+1 /* (set! srfi-4#u64vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3771,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:586: pack-copy */
f_3619(t3,lf[70],lf[258]);}

/* k3769 in k3765 in k3761 in k3757 in k3753 in k3749 in k3745 in k3741 in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_3771(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3771,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[163]+1 /* (set! srfi-4#s64vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3775,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:587: pack-copy */
f_3619(t3,lf[73],lf[257]);}

/* k3773 in k3769 in k3765 in k3761 in k3757 in k3753 in k3749 in k3745 in k3741 in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 in ... */
static void C_ccall f_3775(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3775,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[164]+1 /* (set! srfi-4#f32vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3779,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:588: pack-copy */
f_3619(t3,lf[76],lf[256]);}

/* k3777 in k3773 in k3769 in k3765 in k3761 in k3757 in k3753 in k3749 in k3745 in k3741 in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in ... */
static void C_ccall f_3779(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3779,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[165]+1 /* (set! srfi-4#f64vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3783,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:590: unpack */
f_3637(t3,lf[43],C_SCHEME_TRUE,lf[255]);}

/* k3781 in k3777 in k3773 in k3769 in k3765 in k3761 in k3757 in k3753 in k3749 in k3745 in k3741 in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in ... */
static void C_ccall f_3783(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3783,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[166]+1 /* (set! srfi-4#blob->u8vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3787,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:591: unpack */
f_3637(t3,lf[49],C_SCHEME_TRUE,lf[254]);}

/* k3785 in k3781 in k3777 in k3773 in k3769 in k3765 in k3761 in k3757 in k3753 in k3749 in k3745 in k3741 in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in ... */
static void C_ccall f_3787(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3787,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[167]+1 /* (set! srfi-4#blob->s8vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3791,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:592: unpack */
f_3637(t3,lf[52],C_fix(2),lf[253]);}

/* k3789 in k3785 in k3781 in k3777 in k3773 in k3769 in k3765 in k3761 in k3757 in k3753 in k3749 in k3745 in k3741 in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in ... */
static void C_ccall f_3791(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3791,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[168]+1 /* (set! srfi-4#blob->u16vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3795,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:593: unpack */
f_3637(t3,lf[55],C_fix(2),lf[252]);}

/* k3793 in k3789 in k3785 in k3781 in k3777 in k3773 in k3769 in k3765 in k3761 in k3757 in k3753 in k3749 in k3745 in k3741 in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in ... */
static void C_ccall f_3795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3795,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[169]+1 /* (set! srfi-4#blob->s16vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3799,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:594: unpack */
f_3637(t3,lf[59],C_fix(4),lf[251]);}

/* k3797 in k3793 in k3789 in k3785 in k3781 in k3777 in k3773 in k3769 in k3765 in k3761 in k3757 in k3753 in k3749 in k3745 in k3741 in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in ... */
static void C_ccall f_3799(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3799,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[170]+1 /* (set! srfi-4#blob->u32vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3803,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:595: unpack */
f_3637(t3,lf[67],C_fix(4),lf[250]);}

/* k3801 in k3797 in k3793 in k3789 in k3785 in k3781 in k3777 in k3773 in k3769 in k3765 in k3761 in k3757 in k3753 in k3749 in k3745 in k3741 in k1617 in k1613 in k1609 in k1605 in k1601 in k1597 in ... */
static void C_ccall f_3803(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3803,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[171]+1 /* (set! srfi-4#blob->s32vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3807,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:596: unpack */
f_3637(t3,lf[63],C_fix(4),lf[249]);}

/* k3805 in k3801 in k3797 in k3793 in k3789 in k3785 in k3781 in k3777 in k3773 in k3769 in k3765 in k3761 in k3757 in k3753 in k3749 in k3745 in k3741 in k1617 in k1613 in k1609 in k1605 in k1601 in ... */
static void C_ccall f_3807(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3807,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[172]+1 /* (set! srfi-4#blob->u64vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3811,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:597: unpack */
f_3637(t3,lf[70],C_fix(4),lf[248]);}

/* k3809 in k3805 in k3801 in k3797 in k3793 in k3789 in k3785 in k3781 in k3777 in k3773 in k3769 in k3765 in k3761 in k3757 in k3753 in k3749 in k3745 in k3741 in k1617 in k1613 in k1609 in k1605 in ... */
static void C_ccall f_3811(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3811,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[173]+1 /* (set! srfi-4#blob->s64vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3815,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:598: unpack */
f_3637(t3,lf[73],C_fix(4),lf[247]);}

/* k3813 in k3809 in k3805 in k3801 in k3797 in k3793 in k3789 in k3785 in k3781 in k3777 in k3773 in k3769 in k3765 in k3761 in k3757 in k3753 in k3749 in k3745 in k3741 in k1617 in k1613 in k1609 in ... */
static void C_ccall f_3815(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3815,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[174]+1 /* (set! srfi-4#blob->f32vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3819,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:599: unpack */
f_3637(t3,lf[76],C_fix(8),lf[246]);}

/* k3817 in k3813 in k3809 in k3805 in k3801 in k3797 in k3793 in k3789 in k3785 in k3781 in k3777 in k3773 in k3769 in k3765 in k3761 in k3757 in k3753 in k3749 in k3745 in k3741 in k1617 in k1613 in ... */
static void C_ccall f_3819(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3819,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[175]+1 /* (set! srfi-4#blob->f64vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3823,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:601: unpack-copy */
f_3667(t3,lf[43],C_SCHEME_TRUE,lf[245]);}

/* k3821 in k3817 in k3813 in k3809 in k3805 in k3801 in k3797 in k3793 in k3789 in k3785 in k3781 in k3777 in k3773 in k3769 in k3765 in k3761 in k3757 in k3753 in k3749 in k3745 in k3741 in k1617 in ... */
static void C_ccall f_3823(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3823,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[176]+1 /* (set! srfi-4#blob->u8vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3827,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:602: unpack-copy */
f_3667(t3,lf[49],C_SCHEME_TRUE,lf[244]);}

/* k3825 in k3821 in k3817 in k3813 in k3809 in k3805 in k3801 in k3797 in k3793 in k3789 in k3785 in k3781 in k3777 in k3773 in k3769 in k3765 in k3761 in k3757 in k3753 in k3749 in k3745 in k3741 in ... */
static void C_ccall f_3827(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3827,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[177]+1 /* (set! srfi-4#blob->s8vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3831,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:603: unpack-copy */
f_3667(t3,lf[52],C_fix(2),lf[243]);}

/* k3829 in k3825 in k3821 in k3817 in k3813 in k3809 in k3805 in k3801 in k3797 in k3793 in k3789 in k3785 in k3781 in k3777 in k3773 in k3769 in k3765 in k3761 in k3757 in k3753 in k3749 in k3745 in ... */
static void C_ccall f_3831(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3831,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[178]+1 /* (set! srfi-4#blob->u16vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3835,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:604: unpack-copy */
f_3667(t3,lf[55],C_fix(2),lf[242]);}

/* k3833 in k3829 in k3825 in k3821 in k3817 in k3813 in k3809 in k3805 in k3801 in k3797 in k3793 in k3789 in k3785 in k3781 in k3777 in k3773 in k3769 in k3765 in k3761 in k3757 in k3753 in k3749 in ... */
static void C_ccall f_3835(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3835,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[179]+1 /* (set! srfi-4#blob->s16vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3839,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:605: unpack-copy */
f_3667(t3,lf[59],C_fix(4),lf[241]);}

/* k3837 in k3833 in k3829 in k3825 in k3821 in k3817 in k3813 in k3809 in k3805 in k3801 in k3797 in k3793 in k3789 in k3785 in k3781 in k3777 in k3773 in k3769 in k3765 in k3761 in k3757 in k3753 in ... */
static void C_ccall f_3839(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3839,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[180]+1 /* (set! srfi-4#blob->u32vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3843,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:606: unpack-copy */
f_3667(t3,lf[67],C_fix(4),lf[240]);}

/* k3841 in k3837 in k3833 in k3829 in k3825 in k3821 in k3817 in k3813 in k3809 in k3805 in k3801 in k3797 in k3793 in k3789 in k3785 in k3781 in k3777 in k3773 in k3769 in k3765 in k3761 in k3757 in ... */
static void C_ccall f_3843(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3843,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[181]+1 /* (set! srfi-4#blob->s32vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3847,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:607: unpack-copy */
f_3667(t3,lf[63],C_fix(4),lf[239]);}

/* k3845 in k3841 in k3837 in k3833 in k3829 in k3825 in k3821 in k3817 in k3813 in k3809 in k3805 in k3801 in k3797 in k3793 in k3789 in k3785 in k3781 in k3777 in k3773 in k3769 in k3765 in k3761 in ... */
static void C_ccall f_3847(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3847,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[182]+1 /* (set! srfi-4#blob->u64vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3851,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:608: unpack-copy */
f_3667(t3,lf[70],C_fix(4),lf[238]);}

/* k3849 in k3845 in k3841 in k3837 in k3833 in k3829 in k3825 in k3821 in k3817 in k3813 in k3809 in k3805 in k3801 in k3797 in k3793 in k3789 in k3785 in k3781 in k3777 in k3773 in k3769 in k3765 in ... */
static void C_ccall f_3851(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3851,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[183]+1 /* (set! srfi-4#blob->s64vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3855,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:609: unpack-copy */
f_3667(t3,lf[73],C_fix(4),lf[237]);}

/* k3853 in k3849 in k3845 in k3841 in k3837 in k3833 in k3829 in k3825 in k3821 in k3817 in k3813 in k3809 in k3805 in k3801 in k3797 in k3793 in k3789 in k3785 in k3781 in k3777 in k3773 in k3769 in ... */
static void C_ccall f_3855(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3855,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[184]+1 /* (set! srfi-4#blob->f32vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3859,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:610: unpack-copy */
f_3667(t3,lf[76],C_fix(8),lf[236]);}

/* k3857 in k3853 in k3849 in k3845 in k3841 in k3837 in k3833 in k3829 in k3825 in k3821 in k3817 in k3813 in k3809 in k3805 in k3801 in k3797 in k3793 in k3789 in k3785 in k3781 in k3777 in k3773 in ... */
static void C_ccall f_3859(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(114,c,8)))){
C_save_and_reclaim((void *)f_3859,c,av);}
a=C_alloc(114);
t2=C_mutate((C_word*)lf[185]+1 /* (set! srfi-4#blob->f64vector ...) */,t1);
t3=*((C_word*)lf[186]+1);
t4=C_a_i_list(&a,20,lf[187],*((C_word*)lf[78]+1),lf[188],*((C_word*)lf[80]+1),lf[189],*((C_word*)lf[81]+1),lf[190],*((C_word*)lf[82]+1),lf[191],*((C_word*)lf[83]+1),lf[192],*((C_word*)lf[84]+1),lf[193],*((C_word*)lf[85]+1),lf[194],*((C_word*)lf[86]+1),lf[195],*((C_word*)lf[87]+1),lf[196],*((C_word*)lf[88]+1));
t5=C_mutate((C_word*)lf[186]+1 /* (set! ##sys#user-read-hook ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3864,a[2]=t4,a[3]=t3,a[4]=((C_word)li120),tmp=(C_word)a,a+=5,tmp));
t6=*((C_word*)lf[202]+1);
t7=C_mutate((C_word*)lf[202]+1 /* (set! ##sys#user-print-hook ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3924,a[2]=t6,a[3]=((C_word)li121),tmp=(C_word)a,a+=4,tmp));
t8=C_mutate(&lf[204] /* (set! srfi-4#subnvector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3998,a[2]=((C_word)li122),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[205]+1 /* (set! srfi-4#subu8vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4083,a[2]=((C_word)li123),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[207]+1 /* (set! srfi-4#subu16vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4089,a[2]=((C_word)li124),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[209]+1 /* (set! srfi-4#subu32vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4095,a[2]=((C_word)li125),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[211]+1 /* (set! srfi-4#subu64vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4101,a[2]=((C_word)li126),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[213]+1 /* (set! srfi-4#subs8vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4107,a[2]=((C_word)li127),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[215]+1 /* (set! srfi-4#subs16vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4113,a[2]=((C_word)li128),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[217]+1 /* (set! srfi-4#subs32vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4119,a[2]=((C_word)li129),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[219]+1 /* (set! srfi-4#subs64vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4125,a[2]=((C_word)li130),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[221]+1 /* (set! srfi-4#subf32vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4131,a[2]=((C_word)li131),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[223]+1 /* (set! srfi-4#subf64vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4137,a[2]=((C_word)li132),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[225]+1 /* (set! srfi-4#write-u8vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4143,a[2]=((C_word)li133),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[228]+1 /* (set! srfi-4#read-u8vector! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4312,a[2]=((C_word)li134),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[232]+1 /* (set! srfi-4#read-u8vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4392,a[2]=((C_word)li135),tmp=(C_word)a,a+=3,tmp));
t22=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4453,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:722: chicken.platform#register-feature! */
t23=*((C_word*)lf[235]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t23;
av2[1]=t22;
av2[2]=lf[0];
((C_proc)(void*)(*((C_word*)t23+1)))(3,av2);}}

/* ##sys#user-read-hook in k3857 in k3853 in k3849 in k3845 in k3841 in k3837 in k3833 in k3829 in k3825 in k3821 in k3817 in k3813 in k3809 in k3805 in k3801 in k3797 in k3793 in k3789 in k3785 in k3781 in k3777 in ... */
static void C_ccall f_3864(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3864,c,av);}
a=C_alloc(5);
if(C_truep((C_truep(C_eqp(t2,C_make_character(117)))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,C_make_character(115)))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,C_make_character(102)))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,C_make_character(85)))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,C_make_character(83)))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,C_make_character(70)))?C_SCHEME_TRUE:C_SCHEME_FALSE)))))))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3873,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:630: read */
t5=*((C_word*)lf[199]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
/* srfi-4.scm:635: old-hook */
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
((C_proc)C_fast_retrieve_proc(t4))(4,av2);}}}

/* k3871 in ##sys#user-read-hook in k3857 in k3853 in k3849 in k3845 in k3841 in k3837 in k3833 in k3829 in k3825 in k3821 in k3817 in k3813 in k3809 in k3805 in k3801 in k3797 in k3793 in k3789 in k3785 in k3781 in ... */
static void C_ccall f_3873(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_3873,c,av);}
a=C_alloc(4);
t2=C_i_symbolp(t1);
t3=(C_truep(t2)?t1:C_SCHEME_FALSE);
t4=C_eqp(t3,lf[197]);
t5=(C_truep(t4)?t4:C_eqp(t3,lf[198]));
if(C_truep(t5)){
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_i_memq(t3,((C_word*)t0)[3]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3892,a[2]=((C_word*)t0)[4],a[3]=((C_word)li119),tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:632: g961 */
t8=t7;
f_3892(t8,((C_word*)t0)[2],t6);}
else{
/* srfi-4.scm:634: ##sys#read-error */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[200]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[200]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[201];
av2[4]=t3;
tp(5,av2);}}}}

/* g961 in k3871 in ##sys#user-read-hook in k3857 in k3853 in k3849 in k3845 in k3841 in k3837 in k3833 in k3829 in k3825 in k3821 in k3817 in k3813 in k3809 in k3805 in k3801 in k3797 in k3793 in k3789 in k3785 in ... */
static void C_fcall f_3892(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3892,3,t0,t1,t2);}
a=C_alloc(4);
t3=C_slot(t2,C_fix(1));
t4=C_slot(t3,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3903,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:633: read */
t6=*((C_word*)lf[199]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k3901 in g961 in k3871 in ##sys#user-read-hook in k3857 in k3853 in k3849 in k3845 in k3841 in k3837 in k3833 in k3829 in k3825 in k3821 in k3817 in k3813 in k3809 in k3805 in k3801 in k3797 in k3793 in k3789 in ... */
static void C_ccall f_3903(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3903,c,av);}
/* srfi-4.scm:633: g964 */
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

/* ##sys#user-print-hook in k3857 in k3853 in k3849 in k3845 in k3841 in k3837 in k3833 in k3829 in k3825 in k3821 in k3817 in k3813 in k3809 in k3805 in k3801 in k3797 in k3793 in k3789 in k3785 in k3781 in k3777 in ... */
static void C_ccall f_3924(C_word c,C_word *av){
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
C_word t17;
C_word t18;
C_word t19;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(126,c,4)))){
C_save_and_reclaim((void *)f_3924,c,av);}
a=C_alloc(126);
t5=C_slot(t2,C_fix(0));
t6=C_a_i_list(&a,3,lf[43],lf[187],*((C_word*)lf[99]+1));
t7=C_a_i_list(&a,3,lf[49],lf[188],*((C_word*)lf[101]+1));
t8=C_a_i_list(&a,3,lf[52],lf[189],*((C_word*)lf[103]+1));
t9=C_a_i_list(&a,3,lf[55],lf[190],*((C_word*)lf[105]+1));
t10=C_a_i_list(&a,3,lf[59],lf[191],*((C_word*)lf[107]+1));
t11=C_a_i_list(&a,3,lf[67],lf[192],*((C_word*)lf[109]+1));
t12=C_a_i_list(&a,3,lf[63],lf[193],*((C_word*)lf[111]+1));
t13=C_a_i_list(&a,3,lf[70],lf[194],*((C_word*)lf[113]+1));
t14=C_a_i_list(&a,3,lf[73],lf[195],*((C_word*)lf[115]+1));
t15=C_a_i_list(&a,3,lf[76],lf[196],*((C_word*)lf[117]+1));
t16=C_a_i_list(&a,10,t6,t7,t8,t9,t10,t11,t12,t13,t14,t15);
t17=C_u_i_assq(t5,t16);
if(C_truep(t17)){
t18=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3936,a[2]=t17,a[3]=t1,a[4]=t4,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm:655: ##sys#print */
t19=*((C_word*)lf[203]+1);{
C_word *av2=av;
av2[0]=t19;
av2[1]=t18;
av2[2]=C_make_character(35);
av2[3]=C_SCHEME_FALSE;
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t19+1)))(5,av2);}}
else{
/* srfi-4.scm:658: old-hook */
t18=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t18;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t4;
((C_proc)C_fast_retrieve_proc(t18))(5,av2);}}}

/* k3934 in ##sys#user-print-hook in k3857 in k3853 in k3849 in k3845 in k3841 in k3837 in k3833 in k3829 in k3825 in k3821 in k3817 in k3813 in k3809 in k3805 in k3801 in k3797 in k3793 in k3789 in k3785 in k3781 in ... */
static void C_ccall f_3936(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3936,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3939,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm:656: ##sys#print */
t3=*((C_word*)lf[203]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_cadr(((C_word*)t0)[2]);
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3937 in k3934 in ##sys#user-print-hook in k3857 in k3853 in k3849 in k3845 in k3841 in k3837 in k3833 in k3829 in k3825 in k3821 in k3817 in k3813 in k3809 in k3805 in k3801 in k3797 in k3793 in k3789 in k3785 in ... */
static void C_ccall f_3939(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3939,c,av);}
a=C_alloc(4);
t2=C_i_caddr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3949,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:657: g977 */
t4=t2;{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k3947 in k3937 in k3934 in ##sys#user-print-hook in k3857 in k3853 in k3849 in k3845 in k3841 in k3837 in k3833 in k3829 in k3825 in k3821 in k3817 in k3813 in k3809 in k3805 in k3801 in k3797 in k3793 in k3789 in ... */
static void C_ccall f_3949(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3949,c,av);}
/* srfi-4.scm:657: ##sys#print */
t2=*((C_word*)lf[203]+1);{
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

/* srfi-4#subnvector in k3857 in k3853 in k3849 in k3845 in k3841 in k3837 in k3833 in k3829 in k3825 in k3821 in k3817 in k3813 in k3809 in k3805 in k3801 in k3797 in k3793 in k3789 in k3785 in k3781 in k3777 in ... */
static void C_fcall f_3998(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,0,3)))){
C_save_and_reclaim_args((void *)trf_3998,7,t1,t2,t3,t4,t5,t6,t7);}
a=C_alloc(16);
t8=C_i_check_structure_2(t2,t3,t7);
t9=C_slot(t2,C_fix(1));
t10=C_block_size(t9);
t11=C_u_fixnum_divide(t10,t4);
t12=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4032,a[2]=t6,a[3]=t5,a[4]=t4,a[5]=t3,a[6]=t9,a[7]=t1,a[8]=t11,a[9]=t7,tmp=(C_word)a,a+=10,tmp);
t13=C_fixnum_plus(t11,C_fix(1));
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4013,a[2]=t5,a[3]=t13,a[4]=t12,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm:102: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[37]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t14;
av2[2]=t5;
av2[3]=t7;
tp(4,av2);}}

/* k4011 in srfi-4#subnvector in k3857 in k3853 in k3849 in k3845 in k3841 in k3837 in k3833 in k3829 in k3825 in k3821 in k3817 in k3813 in k3809 in k3805 in k3801 in k3797 in k3793 in k3789 in k3785 in k3781 in ... */
static void C_ccall f_4013(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_4013,c,av);}
t2=C_fixnum_less_or_equal_p(C_fix(0),((C_word*)t0)[2]);
t3=(C_truep(t2)?C_fixnum_lessp(((C_word*)t0)[2],((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
f_4032(2,av2);}}
else{
t4=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:104: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[44]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[44]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=t4;
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[2];
av2[5]=C_fix(0);
av2[6]=((C_word*)t0)[3];
tp(7,av2);}}}

/* k4030 in srfi-4#subnvector in k3857 in k3853 in k3849 in k3845 in k3841 in k3837 in k3833 in k3829 in k3825 in k3821 in k3817 in k3813 in k3809 in k3805 in k3801 in k3797 in k3793 in k3789 in k3785 in k3781 in ... */
static void C_ccall f_4032(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_4032,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4056,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_fixnum_plus(((C_word*)t0)[8],C_fix(1));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4037,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t2,a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm:102: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[37]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[9];
tp(4,av2);}}

/* k4035 in k4030 in srfi-4#subnvector in k3857 in k3853 in k3849 in k3845 in k3841 in k3837 in k3833 in k3829 in k3825 in k3821 in k3817 in k3813 in k3809 in k3805 in k3801 in k3797 in k3793 in k3789 in k3785 in ... */
static void C_ccall f_4037(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_4037,c,av);}
t2=C_fixnum_less_or_equal_p(C_fix(0),((C_word*)t0)[2]);
t3=(C_truep(t2)?C_fixnum_lessp(((C_word*)t0)[2],((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
f_4056(2,av2);}}
else{
t4=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:104: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[44]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[44]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=t4;
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[2];
av2[5]=C_fix(0);
av2[6]=((C_word*)t0)[3];
tp(7,av2);}}}

/* k4054 in k4030 in srfi-4#subnvector in k3857 in k3853 in k3849 in k3845 in k3841 in k3837 in k3833 in k3829 in k3825 in k3821 in k3817 in k3813 in k3809 in k3805 in k3801 in k3797 in k3793 in k3789 in k3785 in ... */
static void C_ccall f_4056(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_4056,c,av);}
a=C_alloc(8);
t2=C_fixnum_difference(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_fixnum_times(((C_word*)t0)[4],t2);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4062,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=t3,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:671: ##sys#allocate-vector */
t5=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
av2[5]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}

/* k4060 in k4054 in k4030 in srfi-4#subnvector in k3857 in k3853 in k3849 in k3845 in k3841 in k3837 in k3833 in k3829 in k3825 in k3821 in k3817 in k3813 in k3809 in k3805 in k3801 in k3797 in k3793 in k3789 in ... */
static void C_ccall f_4062(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4062,c,av);}
a=C_alloc(3);
t2=C_string_to_bytevector(t1);
t3=C_a_i_record2(&a,2,((C_word*)t0)[2],t1);
t4=C_fixnum_times(((C_word*)t0)[3],((C_word*)t0)[4]);
t5=C_copy_subvector(t1,((C_word*)t0)[5],C_fix(0),t4,((C_word*)t0)[6]);
t6=((C_word*)t0)[7];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* srfi-4#subu8vector in k3857 in k3853 in k3849 in k3845 in k3841 in k3837 in k3833 in k3829 in k3825 in k3821 in k3817 in k3813 in k3809 in k3805 in k3801 in k3797 in k3793 in k3789 in k3785 in k3781 in k3777 in ... */
static void C_ccall f_4083(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4083,c,av);}
/* srfi-4.scm:677: subnvector */
f_3998(t1,t2,lf[43],C_fix(1),t3,t4,lf[206]);}

/* srfi-4#subu16vector in k3857 in k3853 in k3849 in k3845 in k3841 in k3837 in k3833 in k3829 in k3825 in k3821 in k3817 in k3813 in k3809 in k3805 in k3801 in k3797 in k3793 in k3789 in k3785 in k3781 in k3777 in ... */
static void C_ccall f_4089(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4089,c,av);}
/* srfi-4.scm:678: subnvector */
f_3998(t1,t2,lf[52],C_fix(2),t3,t4,lf[208]);}

/* srfi-4#subu32vector in k3857 in k3853 in k3849 in k3845 in k3841 in k3837 in k3833 in k3829 in k3825 in k3821 in k3817 in k3813 in k3809 in k3805 in k3801 in k3797 in k3793 in k3789 in k3785 in k3781 in k3777 in ... */
static void C_ccall f_4095(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4095,c,av);}
/* srfi-4.scm:679: subnvector */
f_3998(t1,t2,lf[59],C_fix(4),t3,t4,lf[210]);}

/* srfi-4#subu64vector in k3857 in k3853 in k3849 in k3845 in k3841 in k3837 in k3833 in k3829 in k3825 in k3821 in k3817 in k3813 in k3809 in k3805 in k3801 in k3797 in k3793 in k3789 in k3785 in k3781 in k3777 in ... */
static void C_ccall f_4101(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4101,c,av);}
/* srfi-4.scm:680: subnvector */
f_3998(t1,t2,lf[63],C_fix(8),t3,t4,lf[212]);}

/* srfi-4#subs8vector in k3857 in k3853 in k3849 in k3845 in k3841 in k3837 in k3833 in k3829 in k3825 in k3821 in k3817 in k3813 in k3809 in k3805 in k3801 in k3797 in k3793 in k3789 in k3785 in k3781 in k3777 in ... */
static void C_ccall f_4107(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4107,c,av);}
/* srfi-4.scm:681: subnvector */
f_3998(t1,t2,lf[49],C_fix(1),t3,t4,lf[214]);}

/* srfi-4#subs16vector in k3857 in k3853 in k3849 in k3845 in k3841 in k3837 in k3833 in k3829 in k3825 in k3821 in k3817 in k3813 in k3809 in k3805 in k3801 in k3797 in k3793 in k3789 in k3785 in k3781 in k3777 in ... */
static void C_ccall f_4113(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4113,c,av);}
/* srfi-4.scm:682: subnvector */
f_3998(t1,t2,lf[55],C_fix(2),t3,t4,lf[216]);}

/* srfi-4#subs32vector in k3857 in k3853 in k3849 in k3845 in k3841 in k3837 in k3833 in k3829 in k3825 in k3821 in k3817 in k3813 in k3809 in k3805 in k3801 in k3797 in k3793 in k3789 in k3785 in k3781 in k3777 in ... */
static void C_ccall f_4119(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4119,c,av);}
/* srfi-4.scm:683: subnvector */
f_3998(t1,t2,lf[67],C_fix(4),t3,t4,lf[218]);}

/* srfi-4#subs64vector in k3857 in k3853 in k3849 in k3845 in k3841 in k3837 in k3833 in k3829 in k3825 in k3821 in k3817 in k3813 in k3809 in k3805 in k3801 in k3797 in k3793 in k3789 in k3785 in k3781 in k3777 in ... */
static void C_ccall f_4125(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4125,c,av);}
/* srfi-4.scm:684: subnvector */
f_3998(t1,t2,lf[70],C_fix(8),t3,t4,lf[220]);}

/* srfi-4#subf32vector in k3857 in k3853 in k3849 in k3845 in k3841 in k3837 in k3833 in k3829 in k3825 in k3821 in k3817 in k3813 in k3809 in k3805 in k3801 in k3797 in k3793 in k3789 in k3785 in k3781 in k3777 in ... */
static void C_ccall f_4131(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4131,c,av);}
/* srfi-4.scm:685: subnvector */
f_3998(t1,t2,lf[73],C_fix(4),t3,t4,lf[222]);}

/* srfi-4#subf64vector in k3857 in k3853 in k3849 in k3845 in k3841 in k3837 in k3833 in k3829 in k3825 in k3821 in k3817 in k3813 in k3809 in k3805 in k3801 in k3797 in k3793 in k3789 in k3785 in k3781 in k3777 in ... */
static void C_ccall f_4137(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4137,c,av);}
/* srfi-4.scm:686: subnvector */
f_3998(t1,t2,lf[76],C_fix(8),t3,t4,lf[224]);}

/* srfi-4#write-u8vector in k3857 in k3853 in k3849 in k3845 in k3841 in k3837 in k3833 in k3829 in k3825 in k3821 in k3817 in k3813 in k3809 in k3805 in k3801 in k3797 in k3793 in k3789 in k3785 in k3781 in k3777 in ... */
static void C_ccall f_4143(C_word c,C_word *av){
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
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_4143,c,av);}
a=C_alloc(13);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?*((C_word*)lf[226]+1):C_get_rest_arg(c,3,av,3,t0));
t5=C_rest_nullp(c,3);
t6=C_rest_nullp(c,4);
t7=(C_truep(t6)?C_fix(0):C_get_rest_arg(c,4,av,3,t0));
t8=C_rest_nullp(c,4);
t9=C_rest_nullp(c,5);
t10=(C_truep(t9)?C_SCHEME_FALSE:C_get_rest_arg(c,5,av,3,t0));
t11=C_rest_nullp(c,5);
t12=C_i_check_structure_2(t2,lf[43],lf[227]);
t13=C_i_check_port_2(t4,C_fix(2),C_SCHEME_TRUE,lf[227]);
t14=C_u_i_8vector_length(t2);
t15=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4192,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t10,a[6]=t7,a[7]=t14,tmp=(C_word)a,a+=8,tmp);
t16=(C_truep(t10)?C_fixnum_plus(t10,C_fix(1)):C_fixnum_plus(t14,C_fix(1)));
t17=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4173,a[2]=t7,a[3]=t16,a[4]=t15,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:102: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[37]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t17;
av2[2]=t7;
av2[3]=lf[227];
tp(4,av2);}}

/* k4171 in srfi-4#write-u8vector in k3857 in k3853 in k3849 in k3845 in k3841 in k3837 in k3833 in k3829 in k3825 in k3821 in k3817 in k3813 in k3809 in k3805 in k3801 in k3797 in k3793 in k3789 in k3785 in k3781 in ... */
static void C_ccall f_4173(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_4173,c,av);}
t2=C_fixnum_less_or_equal_p(C_fix(0),((C_word*)t0)[2]);
t3=(C_truep(t2)?C_fixnum_lessp(((C_word*)t0)[2],((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
f_4192(2,av2);}}
else{
t4=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:104: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[44]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[44]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=t4;
av2[3]=lf[227];
av2[4]=((C_word*)t0)[2];
av2[5]=C_fix(0);
av2[6]=((C_word*)t0)[3];
tp(7,av2);}}}

/* k4190 in srfi-4#write-u8vector in k3857 in k3853 in k3849 in k3845 in k3841 in k3837 in k3833 in k3829 in k3825 in k3821 in k3817 in k3813 in k3809 in k3805 in k3801 in k3797 in k3793 in k3789 in k3785 in k3781 in ... */
static void C_ccall f_4192(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_4192,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4195,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[5])){
t3=C_fixnum_plus(((C_word*)t0)[7],C_fix(1));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4243,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm:102: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[37]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
av2[3]=lf[227];
tp(4,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_4195(2,av2);}}}

/* k4193 in k4190 in srfi-4#write-u8vector in k3857 in k3853 in k3849 in k3845 in k3841 in k3837 in k3833 in k3829 in k3825 in k3821 in k3817 in k3813 in k3809 in k3805 in k3801 in k3797 in k3793 in k3789 in k3785 in ... */
static void C_ccall f_4195(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_4195,c,av);}
a=C_alloc(9);
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=C_slot(t2,C_fix(3));
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4208,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t5=C_eqp(((C_word*)t0)[6],C_fix(0));
if(C_truep(t5)){
t6=C_i_not(((C_word*)t0)[5]);
t7=t4;
f_4208(t7,(C_truep(t6)?t6:C_eqp(((C_word*)t0)[5],((C_word*)t0)[7])));}
else{
t6=t4;
f_4208(t6,C_SCHEME_FALSE);}}

/* k4206 in k4193 in k4190 in srfi-4#write-u8vector in k3857 in k3853 in k3849 in k3845 in k3841 in k3837 in k3833 in k3829 in k3825 in k3821 in k3817 in k3813 in k3809 in k3805 in k3801 in k3797 in k3793 in k3789 in ... */
static void C_fcall f_4208(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_4208,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
/* srfi-4.scm:691: g1098 */
t2=((C_word*)t0)[2];{
C_word av2[4];
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)C_fast_retrieve_proc(t2))(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4218,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:700: subu8vector */
t3=*((C_word*)lf[205]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[7];
av2[4]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
/* srfi-4.scm:700: subu8vector */
t3=*((C_word*)lf[205]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[7];
av2[4]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}}

/* k4216 in k4206 in k4193 in k4190 in srfi-4#write-u8vector in k3857 in k3853 in k3849 in k3845 in k3841 in k3837 in k3833 in k3829 in k3825 in k3821 in k3817 in k3813 in k3809 in k3805 in k3801 in k3797 in k3793 in ... */
static void C_ccall f_4218(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4218,c,av);}
/* srfi-4.scm:691: g1098 */
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
av2[3]=C_slot(t1,C_fix(1));
((C_proc)C_fast_retrieve_proc(t2))(4,av2);}}

/* k4241 in k4190 in srfi-4#write-u8vector in k3857 in k3853 in k3849 in k3845 in k3841 in k3837 in k3833 in k3829 in k3825 in k3821 in k3817 in k3813 in k3809 in k3805 in k3801 in k3797 in k3793 in k3789 in k3785 in ... */
static void C_ccall f_4243(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_4243,c,av);}
t2=C_fixnum_less_or_equal_p(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(C_truep(t2)?C_fixnum_lessp(((C_word*)t0)[3],((C_word*)t0)[4]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
f_4195(2,av2);}}
else{
t4=C_fix((C_word)C_OUT_OF_RANGE_ERROR);
/* srfi-4.scm:104: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[44]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[44]+1);
av2[1]=((C_word*)t0)[5];
av2[2]=t4;
av2[3]=lf[227];
av2[4]=((C_word*)t0)[3];
av2[5]=((C_word*)t0)[2];
av2[6]=((C_word*)t0)[4];
tp(7,av2);}}}

/* srfi-4#read-u8vector! in k3857 in k3853 in k3849 in k3845 in k3841 in k3837 in k3833 in k3829 in k3825 in k3821 in k3817 in k3813 in k3809 in k3805 in k3801 in k3797 in k3793 in k3789 in k3785 in k3781 in k3777 in ... */
static void C_ccall f_4312(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_4312,c,av);}
a=C_alloc(9);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t5=C_rest_nullp(c,4);
t6=(C_truep(t5)?*((C_word*)lf[229]+1):C_get_rest_arg(c,4,av,4,t0));
t7=C_rest_nullp(c,4);
t8=C_rest_nullp(c,5);
t9=(C_truep(t8)?C_fix(0):C_get_rest_arg(c,5,av,4,t0));
t10=C_rest_nullp(c,5);
t11=C_i_check_port_2(t6,C_fix(1),C_SCHEME_TRUE,lf[230]);
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4331,a[2]=t3,a[3]=t4,a[4]=t9,a[5]=t1,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
/* srfi-4.scm:704: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[37]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t12;
av2[2]=t9;
av2[3]=lf[230];
tp(4,av2);}}

/* k4329 in srfi-4#read-u8vector! in k3857 in k3853 in k3849 in k3845 in k3841 in k3837 in k3833 in k3829 in k3825 in k3821 in k3817 in k3813 in k3809 in k3805 in k3801 in k3797 in k3793 in k3789 in k3785 in k3781 in ... */
static void C_ccall f_4331(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_4331,c,av);}
a=C_alloc(7);
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[43],lf[230]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4337,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
/* srfi-4.scm:706: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[37]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=lf[230];
tp(4,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_4337(2,av2);}}}

/* k4335 in k4329 in srfi-4#read-u8vector! in k3857 in k3853 in k3849 in k3845 in k3841 in k3837 in k3833 in k3829 in k3825 in k3821 in k3817 in k3813 in k3809 in k3805 in k3801 in k3797 in k3793 in k3789 in k3785 in ... */
static void C_ccall f_4337(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_4337,c,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_block_size(t2);
t4=(C_truep(((C_word*)((C_word*)t0)[3])[1])?C_fixnum_less_or_equal_p(C_fixnum_plus(((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1]),t3):C_SCHEME_FALSE);
if(C_truep(t4)){
/* srfi-4.scm:711: chicken.io#read-string!/port */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[231]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[231]+1);
av2[1]=((C_word*)t0)[5];
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=t2;
av2[4]=((C_word*)t0)[6];
av2[5]=((C_word*)t0)[4];
tp(6,av2);}}
else{
t5=C_fixnum_difference(t3,((C_word*)t0)[4]);
t6=C_set_block_item(((C_word*)t0)[3],0,t5);
/* srfi-4.scm:711: chicken.io#read-string!/port */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[231]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[231]+1);
av2[1]=((C_word*)t0)[5];
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=t2;
av2[4]=((C_word*)t0)[6];
av2[5]=((C_word*)t0)[4];
tp(6,av2);}}}

/* srfi-4#read-u8vector in k3857 in k3853 in k3849 in k3845 in k3841 in k3837 in k3833 in k3829 in k3825 in k3821 in k3817 in k3813 in k3809 in k3805 in k3801 in k3797 in k3793 in k3789 in k3785 in k3781 in k3777 in ... */
static void C_ccall f_4392(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4392,c,av);}
a=C_alloc(5);
t2=C_rest_nullp(c,2);
t3=(C_truep(t2)?C_SCHEME_FALSE:C_get_rest_arg(c,2,av,2,t0));
t4=C_rest_nullp(c,2);
t5=C_rest_nullp(c,3);
t6=(C_truep(t5)?*((C_word*)lf[229]+1):C_get_rest_arg(c,3,av,2,t0));
t7=C_rest_nullp(c,3);
t8=C_i_check_port_2(t6,C_fix(1),C_SCHEME_TRUE,lf[233]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4411,a[2]=t1,a[3]=t3,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
/* srfi-4.scm:715: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[37]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t9;
av2[2]=t3;
av2[3]=lf[233];
tp(4,av2);}}
else{
t10=t9;{
C_word *av2=av;
av2[0]=t10;
av2[1]=C_SCHEME_UNDEFINED;
f_4411(2,av2);}}}

/* k4409 in srfi-4#read-u8vector in k3857 in k3853 in k3849 in k3845 in k3841 in k3837 in k3833 in k3829 in k3825 in k3821 in k3817 in k3813 in k3809 in k3805 in k3801 in k3797 in k3793 in k3789 in k3785 in k3781 in ... */
static void C_ccall f_4411(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4411,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4414,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:716: chicken.io#read-string/port */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[234]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[234]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}

/* k4412 in k4409 in srfi-4#read-u8vector in k3857 in k3853 in k3849 in k3845 in k3841 in k3837 in k3833 in k3829 in k3825 in k3821 in k3817 in k3813 in k3809 in k3805 in k3801 in k3797 in k3793 in k3789 in k3785 in ... */
static void C_ccall f_4414(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4414,c,av);}
a=C_alloc(3);
if(C_truep(C_eofp(t1))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_string_to_bytevector(t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_record2(&a,2,lf[43],t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4451 in k3857 in k3853 in k3849 in k3845 in k3841 in k3837 in k3833 in k3829 in k3825 in k3821 in k3817 in k3813 in k3809 in k3805 in k3801 in k3797 in k3793 in k3789 in k3785 in k3781 in k3777 in ... */
static void C_ccall f_4453(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4453,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a4454 in k1613 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_4455(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,1)))){
C_save_and_reclaim((void *)f_4455,c,av);}
a=C_alloc(4);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_f64vector_ref(&a,2,t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a4457 in k1609 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_4458(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,1)))){
C_save_and_reclaim((void *)f_4458,c,av);}
a=C_alloc(4);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_f32vector_ref(&a,2,t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a4460 in k1605 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_4461(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,1)))){
C_save_and_reclaim((void *)f_4461,c,av);}
a=C_alloc(7);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_s64vector_ref(&a,2,t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a4463 in k1601 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_4464(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,1)))){
C_save_and_reclaim((void *)f_4464,c,av);}
a=C_alloc(7);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_u64vector_ref(&a,2,t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a4466 in k1597 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_4467(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_4467,c,av);}
a=C_alloc(5);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_s32vector_ref(&a,2,t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a4469 in k1593 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_4470(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_4470,c,av);}
a=C_alloc(5);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_u32vector_ref(&a,2,t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a4472 in k1589 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_4473(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4473,c,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_s16vector_ref(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a4475 in k1585 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_4476(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4476,c,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_u16vector_ref(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a4478 in k1581 in k1517 in k1514 in k1511 */
static void C_ccall f_4479(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4479,c,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_s8vector_ref(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a4481 in k1517 in k1514 in k1511 */
static void C_ccall f_4482(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4482,c,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_u8vector_ref(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_srfi_2d4_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("srfi-4"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_srfi_2d4_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(1782))){
C_save(t1);
C_rereclaim2(1782*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,277);
lf[0]=C_h_intern(&lf[0],6, C_text("srfi-4"));
lf[1]=C_h_intern(&lf[1],7, C_text("srfi-4#"));
lf[2]=C_h_intern(&lf[2],22, C_text("srfi-4#u8vector-length"));
lf[3]=C_h_intern(&lf[3],22, C_text("srfi-4#s8vector-length"));
lf[4]=C_h_intern(&lf[4],23, C_text("srfi-4#u16vector-length"));
lf[5]=C_h_intern(&lf[5],23, C_text("srfi-4#s16vector-length"));
lf[6]=C_h_intern(&lf[6],23, C_text("srfi-4#u32vector-length"));
lf[7]=C_h_intern(&lf[7],23, C_text("srfi-4#s32vector-length"));
lf[8]=C_h_intern(&lf[8],23, C_text("srfi-4#u64vector-length"));
lf[9]=C_h_intern(&lf[9],23, C_text("srfi-4#s64vector-length"));
lf[10]=C_h_intern(&lf[10],23, C_text("srfi-4#f32vector-length"));
lf[11]=C_h_intern(&lf[11],23, C_text("srfi-4#f64vector-length"));
lf[12]=C_h_intern(&lf[12],20, C_text("srfi-4#u8vector-set!"));
lf[13]=C_h_intern(&lf[13],20, C_text("srfi-4#s8vector-set!"));
lf[14]=C_h_intern(&lf[14],21, C_text("srfi-4#u16vector-set!"));
lf[15]=C_h_intern(&lf[15],21, C_text("srfi-4#s16vector-set!"));
lf[16]=C_h_intern(&lf[16],21, C_text("srfi-4#u32vector-set!"));
lf[17]=C_h_intern(&lf[17],21, C_text("srfi-4#s32vector-set!"));
lf[18]=C_h_intern(&lf[18],21, C_text("srfi-4#u64vector-set!"));
lf[19]=C_h_intern(&lf[19],21, C_text("srfi-4#s64vector-set!"));
lf[20]=C_h_intern(&lf[20],21, C_text("srfi-4#f32vector-set!"));
lf[21]=C_h_intern(&lf[21],21, C_text("srfi-4#f64vector-set!"));
lf[22]=C_h_intern(&lf[22],19, C_text("srfi-4#u8vector-ref"));
lf[23]=C_h_intern(&lf[23],19, C_text("srfi-4#s8vector-ref"));
lf[24]=C_h_intern(&lf[24],20, C_text("srfi-4#u16vector-ref"));
lf[25]=C_h_intern(&lf[25],20, C_text("srfi-4#s16vector-ref"));
lf[26]=C_h_intern(&lf[26],20, C_text("srfi-4#u32vector-ref"));
lf[27]=C_h_intern(&lf[27],20, C_text("srfi-4#s32vector-ref"));
lf[28]=C_h_intern(&lf[28],20, C_text("srfi-4#u64vector-ref"));
lf[29]=C_h_intern(&lf[29],20, C_text("srfi-4#s64vector-ref"));
lf[30]=C_h_intern(&lf[30],20, C_text("srfi-4#f32vector-ref"));
lf[31]=C_h_intern(&lf[31],20, C_text("srfi-4#f64vector-ref"));
lf[32]=C_h_intern(&lf[32],11, C_text("##sys#error"));
lf[33]=C_decode_literal(C_heaptop,C_text("\376B\000\000:not enough memory - cannot allocate external number vector"));
lf[34]=C_h_intern(&lf[34],21, C_text("##sys#allocate-vector"));
lf[35]=C_decode_literal(C_heaptop,C_text("\376B\000\000:overflow - cannot allocate the required number of elements"));
lf[36]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020size is negative"));
lf[37]=C_h_intern(&lf[37],18, C_text("##sys#check-fixnum"));
lf[38]=C_h_intern(&lf[38],28, C_text("srfi-4#release-number-vector"));
lf[39]=C_h_intern(&lf[39],21, C_text("release-number-vector"));
lf[40]=C_decode_literal(C_heaptop,C_text("\376B\000\000\047bad argument type - not a number vector"));
lf[41]=C_h_intern(&lf[41],21, C_text("srfi-4#number-vector\077"));
lf[42]=C_h_intern(&lf[42],20, C_text("srfi-4#make-u8vector"));
lf[43]=C_h_intern(&lf[43],8, C_text("u8vector"));
lf[44]=C_h_intern(&lf[44],16, C_text("##sys#error-hook"));
lf[45]=C_h_intern(&lf[45],13, C_text("make-u8vector"));
lf[46]=C_h_intern(&lf[46],26, C_text("##sys#check-exact-uinteger"));
lf[47]=C_h_intern(&lf[47],25, C_text("chicken.gc#set-finalizer!"));
lf[48]=C_h_intern(&lf[48],20, C_text("srfi-4#make-s8vector"));
lf[49]=C_h_intern(&lf[49],8, C_text("s8vector"));
lf[50]=C_h_intern(&lf[50],13, C_text("make-s8vector"));
lf[51]=C_h_intern(&lf[51],21, C_text("srfi-4#make-u16vector"));
lf[52]=C_h_intern(&lf[52],9, C_text("u16vector"));
lf[53]=C_h_intern(&lf[53],14, C_text("make-u16vector"));
lf[54]=C_h_intern(&lf[54],21, C_text("srfi-4#make-s16vector"));
lf[55]=C_h_intern(&lf[55],9, C_text("s16vector"));
lf[56]=C_h_intern(&lf[56],14, C_text("make-s16vector"));
lf[57]=C_h_intern(&lf[57],25, C_text("##sys#check-exact-integer"));
lf[58]=C_h_intern(&lf[58],21, C_text("srfi-4#make-u32vector"));
lf[59]=C_h_intern(&lf[59],9, C_text("u32vector"));
lf[60]=C_h_intern(&lf[60],14, C_text("make-u32vector"));
lf[61]=C_decode_literal(C_heaptop,C_text("\376\302\000\000\011100000000"));
lf[62]=C_h_intern(&lf[62],21, C_text("srfi-4#make-u64vector"));
lf[63]=C_h_intern(&lf[63],9, C_text("u64vector"));
lf[64]=C_h_intern(&lf[64],14, C_text("make-u64vector"));
lf[65]=C_decode_literal(C_heaptop,C_text("\376\302\000\000\02110000000000000000"));
lf[66]=C_h_intern(&lf[66],21, C_text("srfi-4#make-s32vector"));
lf[67]=C_h_intern(&lf[67],9, C_text("s32vector"));
lf[68]=C_h_intern(&lf[68],14, C_text("make-s32vector"));
lf[69]=C_h_intern(&lf[69],21, C_text("srfi-4#make-s64vector"));
lf[70]=C_h_intern(&lf[70],9, C_text("s64vector"));
lf[71]=C_h_intern(&lf[71],14, C_text("make-s64vector"));
lf[72]=C_h_intern(&lf[72],21, C_text("srfi-4#make-f32vector"));
lf[73]=C_h_intern(&lf[73],9, C_text("f32vector"));
lf[74]=C_h_intern(&lf[74],14, C_text("make-f32vector"));
lf[75]=C_h_intern(&lf[75],21, C_text("srfi-4#make-f64vector"));
lf[76]=C_h_intern(&lf[76],9, C_text("f64vector"));
lf[77]=C_h_intern(&lf[77],14, C_text("make-f64vector"));
lf[78]=C_h_intern(&lf[78],21, C_text("srfi-4#list->u8vector"));
lf[79]=C_h_intern(&lf[79],29, C_text("##sys#error-not-a-proper-list"));
lf[80]=C_h_intern(&lf[80],21, C_text("srfi-4#list->s8vector"));
lf[81]=C_h_intern(&lf[81],22, C_text("srfi-4#list->u16vector"));
lf[82]=C_h_intern(&lf[82],22, C_text("srfi-4#list->s16vector"));
lf[83]=C_h_intern(&lf[83],22, C_text("srfi-4#list->u32vector"));
lf[84]=C_h_intern(&lf[84],22, C_text("srfi-4#list->s32vector"));
lf[85]=C_h_intern(&lf[85],22, C_text("srfi-4#list->u64vector"));
lf[86]=C_h_intern(&lf[86],22, C_text("srfi-4#list->s64vector"));
lf[87]=C_h_intern(&lf[87],22, C_text("srfi-4#list->f32vector"));
lf[88]=C_h_intern(&lf[88],22, C_text("srfi-4#list->f64vector"));
lf[89]=C_h_intern(&lf[89],15, C_text("srfi-4#u8vector"));
lf[90]=C_h_intern(&lf[90],15, C_text("srfi-4#s8vector"));
lf[91]=C_h_intern(&lf[91],16, C_text("srfi-4#u16vector"));
lf[92]=C_h_intern(&lf[92],16, C_text("srfi-4#s16vector"));
lf[93]=C_h_intern(&lf[93],16, C_text("srfi-4#u32vector"));
lf[94]=C_h_intern(&lf[94],16, C_text("srfi-4#s32vector"));
lf[95]=C_h_intern(&lf[95],16, C_text("srfi-4#u64vector"));
lf[96]=C_h_intern(&lf[96],16, C_text("srfi-4#s64vector"));
lf[97]=C_h_intern(&lf[97],16, C_text("srfi-4#f32vector"));
lf[98]=C_h_intern(&lf[98],16, C_text("srfi-4#f64vector"));
lf[99]=C_h_intern(&lf[99],21, C_text("srfi-4#u8vector->list"));
lf[100]=C_h_intern(&lf[100],14, C_text("u8vector->list"));
lf[101]=C_h_intern(&lf[101],21, C_text("srfi-4#s8vector->list"));
lf[102]=C_h_intern(&lf[102],14, C_text("s8vector->list"));
lf[103]=C_h_intern(&lf[103],22, C_text("srfi-4#u16vector->list"));
lf[104]=C_h_intern(&lf[104],15, C_text("u16vector->list"));
lf[105]=C_h_intern(&lf[105],22, C_text("srfi-4#s16vector->list"));
lf[106]=C_h_intern(&lf[106],15, C_text("s16vector->list"));
lf[107]=C_h_intern(&lf[107],22, C_text("srfi-4#u32vector->list"));
lf[108]=C_h_intern(&lf[108],15, C_text("u32vector->list"));
lf[109]=C_h_intern(&lf[109],22, C_text("srfi-4#s32vector->list"));
lf[110]=C_h_intern(&lf[110],15, C_text("s32vector->list"));
lf[111]=C_h_intern(&lf[111],22, C_text("srfi-4#u64vector->list"));
lf[112]=C_h_intern(&lf[112],15, C_text("u64vector->list"));
lf[113]=C_h_intern(&lf[113],22, C_text("srfi-4#s64vector->list"));
lf[114]=C_h_intern(&lf[114],15, C_text("s64vector->list"));
lf[115]=C_h_intern(&lf[115],22, C_text("srfi-4#f32vector->list"));
lf[116]=C_h_intern(&lf[116],15, C_text("f32vector->list"));
lf[117]=C_h_intern(&lf[117],22, C_text("srfi-4#f64vector->list"));
lf[118]=C_h_intern(&lf[118],15, C_text("f64vector->list"));
lf[119]=C_h_intern(&lf[119],16, C_text("srfi-4#u8vector\077"));
lf[120]=C_h_intern(&lf[120],16, C_text("srfi-4#s8vector\077"));
lf[121]=C_h_intern(&lf[121],17, C_text("srfi-4#u16vector\077"));
lf[122]=C_h_intern(&lf[122],17, C_text("srfi-4#s16vector\077"));
lf[123]=C_h_intern(&lf[123],17, C_text("srfi-4#u32vector\077"));
lf[124]=C_h_intern(&lf[124],17, C_text("srfi-4#s32vector\077"));
lf[125]=C_h_intern(&lf[125],17, C_text("srfi-4#u64vector\077"));
lf[126]=C_h_intern(&lf[126],17, C_text("srfi-4#s64vector\077"));
lf[127]=C_h_intern(&lf[127],17, C_text("srfi-4#f32vector\077"));
lf[128]=C_h_intern(&lf[128],17, C_text("srfi-4#f64vector\077"));
lf[129]=C_h_intern(&lf[129],20, C_text("##sys#srfi-4-vector\077"));
lf[131]=C_h_intern(&lf[131],15, C_text("##sys#make-blob"));
lf[133]=C_decode_literal(C_heaptop,C_text("\376B\000\000+blob does not have correct size for packing"));
lf[135]=C_decode_literal(C_heaptop,C_text("\376B\000\000+blob does not have correct size for packing"));
lf[136]=C_h_intern(&lf[136],21, C_text("u8vector->blob/shared"));
lf[137]=C_h_intern(&lf[137],28, C_text("srfi-4#u8vector->blob/shared"));
lf[138]=C_h_intern(&lf[138],21, C_text("s8vector->blob/shared"));
lf[139]=C_h_intern(&lf[139],28, C_text("srfi-4#s8vector->blob/shared"));
lf[140]=C_h_intern(&lf[140],22, C_text("u16vector->blob/shared"));
lf[141]=C_h_intern(&lf[141],29, C_text("srfi-4#u16vector->blob/shared"));
lf[142]=C_h_intern(&lf[142],22, C_text("s16vector->blob/shared"));
lf[143]=C_h_intern(&lf[143],29, C_text("srfi-4#s16vector->blob/shared"));
lf[144]=C_h_intern(&lf[144],22, C_text("u32vector->blob/shared"));
lf[145]=C_h_intern(&lf[145],29, C_text("srfi-4#u32vector->blob/shared"));
lf[146]=C_h_intern(&lf[146],22, C_text("s32vector->blob/shared"));
lf[147]=C_h_intern(&lf[147],29, C_text("srfi-4#s32vector->blob/shared"));
lf[148]=C_h_intern(&lf[148],22, C_text("u64vector->blob/shared"));
lf[149]=C_h_intern(&lf[149],29, C_text("srfi-4#u64vector->blob/shared"));
lf[150]=C_h_intern(&lf[150],22, C_text("s64vector->blob/shared"));
lf[151]=C_h_intern(&lf[151],29, C_text("srfi-4#s64vector->blob/shared"));
lf[152]=C_h_intern(&lf[152],22, C_text("f32vector->blob/shared"));
lf[153]=C_h_intern(&lf[153],29, C_text("srfi-4#f32vector->blob/shared"));
lf[154]=C_h_intern(&lf[154],22, C_text("f64vector->blob/shared"));
lf[155]=C_h_intern(&lf[155],29, C_text("srfi-4#f64vector->blob/shared"));
lf[156]=C_h_intern(&lf[156],21, C_text("srfi-4#u8vector->blob"));
lf[157]=C_h_intern(&lf[157],21, C_text("srfi-4#s8vector->blob"));
lf[158]=C_h_intern(&lf[158],22, C_text("srfi-4#u16vector->blob"));
lf[159]=C_h_intern(&lf[159],22, C_text("srfi-4#s16vector->blob"));
lf[160]=C_h_intern(&lf[160],22, C_text("srfi-4#u32vector->blob"));
lf[161]=C_h_intern(&lf[161],22, C_text("srfi-4#s32vector->blob"));
lf[162]=C_h_intern(&lf[162],22, C_text("srfi-4#u64vector->blob"));
lf[163]=C_h_intern(&lf[163],22, C_text("srfi-4#s64vector->blob"));
lf[164]=C_h_intern(&lf[164],22, C_text("srfi-4#f32vector->blob"));
lf[165]=C_h_intern(&lf[165],22, C_text("srfi-4#f64vector->blob"));
lf[166]=C_h_intern(&lf[166],28, C_text("srfi-4#blob->u8vector/shared"));
lf[167]=C_h_intern(&lf[167],28, C_text("srfi-4#blob->s8vector/shared"));
lf[168]=C_h_intern(&lf[168],29, C_text("srfi-4#blob->u16vector/shared"));
lf[169]=C_h_intern(&lf[169],29, C_text("srfi-4#blob->s16vector/shared"));
lf[170]=C_h_intern(&lf[170],29, C_text("srfi-4#blob->u32vector/shared"));
lf[171]=C_h_intern(&lf[171],29, C_text("srfi-4#blob->s32vector/shared"));
lf[172]=C_h_intern(&lf[172],29, C_text("srfi-4#blob->u64vector/shared"));
lf[173]=C_h_intern(&lf[173],29, C_text("srfi-4#blob->s64vector/shared"));
lf[174]=C_h_intern(&lf[174],29, C_text("srfi-4#blob->f32vector/shared"));
lf[175]=C_h_intern(&lf[175],29, C_text("srfi-4#blob->f64vector/shared"));
lf[176]=C_h_intern(&lf[176],21, C_text("srfi-4#blob->u8vector"));
lf[177]=C_h_intern(&lf[177],21, C_text("srfi-4#blob->s8vector"));
lf[178]=C_h_intern(&lf[178],22, C_text("srfi-4#blob->u16vector"));
lf[179]=C_h_intern(&lf[179],22, C_text("srfi-4#blob->s16vector"));
lf[180]=C_h_intern(&lf[180],22, C_text("srfi-4#blob->u32vector"));
lf[181]=C_h_intern(&lf[181],22, C_text("srfi-4#blob->s32vector"));
lf[182]=C_h_intern(&lf[182],22, C_text("srfi-4#blob->u64vector"));
lf[183]=C_h_intern(&lf[183],22, C_text("srfi-4#blob->s64vector"));
lf[184]=C_h_intern(&lf[184],22, C_text("srfi-4#blob->f32vector"));
lf[185]=C_h_intern(&lf[185],22, C_text("srfi-4#blob->f64vector"));
lf[186]=C_h_intern(&lf[186],20, C_text("##sys#user-read-hook"));
lf[187]=C_h_intern(&lf[187],2, C_text("u8"));
lf[188]=C_h_intern(&lf[188],2, C_text("s8"));
lf[189]=C_h_intern(&lf[189],3, C_text("u16"));
lf[190]=C_h_intern(&lf[190],3, C_text("s16"));
lf[191]=C_h_intern(&lf[191],3, C_text("u32"));
lf[192]=C_h_intern(&lf[192],3, C_text("s32"));
lf[193]=C_h_intern(&lf[193],3, C_text("u64"));
lf[194]=C_h_intern(&lf[194],3, C_text("s64"));
lf[195]=C_h_intern(&lf[195],3, C_text("f32"));
lf[196]=C_h_intern(&lf[196],3, C_text("f64"));
lf[197]=C_h_intern(&lf[197],1, C_text("f"));
lf[198]=C_h_intern(&lf[198],1, C_text("F"));
lf[199]=C_h_intern(&lf[199],11, C_text("scheme#read"));
lf[200]=C_h_intern(&lf[200],16, C_text("##sys#read-error"));
lf[201]=C_decode_literal(C_heaptop,C_text("\376B\000\000\031illegal bytevector syntax"));
lf[202]=C_h_intern(&lf[202],21, C_text("##sys#user-print-hook"));
lf[203]=C_h_intern(&lf[203],11, C_text("##sys#print"));
lf[205]=C_h_intern(&lf[205],18, C_text("srfi-4#subu8vector"));
lf[206]=C_h_intern(&lf[206],11, C_text("subu8vector"));
lf[207]=C_h_intern(&lf[207],19, C_text("srfi-4#subu16vector"));
lf[208]=C_h_intern(&lf[208],12, C_text("subu16vector"));
lf[209]=C_h_intern(&lf[209],19, C_text("srfi-4#subu32vector"));
lf[210]=C_h_intern(&lf[210],12, C_text("subu32vector"));
lf[211]=C_h_intern(&lf[211],19, C_text("srfi-4#subu64vector"));
lf[212]=C_h_intern(&lf[212],12, C_text("subu64vector"));
lf[213]=C_h_intern(&lf[213],18, C_text("srfi-4#subs8vector"));
lf[214]=C_h_intern(&lf[214],11, C_text("subs8vector"));
lf[215]=C_h_intern(&lf[215],19, C_text("srfi-4#subs16vector"));
lf[216]=C_h_intern(&lf[216],12, C_text("subs16vector"));
lf[217]=C_h_intern(&lf[217],19, C_text("srfi-4#subs32vector"));
lf[218]=C_h_intern(&lf[218],12, C_text("subs32vector"));
lf[219]=C_h_intern(&lf[219],19, C_text("srfi-4#subs64vector"));
lf[220]=C_h_intern(&lf[220],12, C_text("subs64vector"));
lf[221]=C_h_intern(&lf[221],19, C_text("srfi-4#subf32vector"));
lf[222]=C_h_intern(&lf[222],12, C_text("subf32vector"));
lf[223]=C_h_intern(&lf[223],19, C_text("srfi-4#subf64vector"));
lf[224]=C_h_intern(&lf[224],12, C_text("subf64vector"));
lf[225]=C_h_intern(&lf[225],21, C_text("srfi-4#write-u8vector"));
lf[226]=C_h_intern(&lf[226],21, C_text("##sys#standard-output"));
lf[227]=C_h_intern(&lf[227],14, C_text("write-u8vector"));
lf[228]=C_h_intern(&lf[228],21, C_text("srfi-4#read-u8vector!"));
lf[229]=C_h_intern(&lf[229],20, C_text("##sys#standard-input"));
lf[230]=C_h_intern(&lf[230],14, C_text("read-u8vector!"));
lf[231]=C_h_intern(&lf[231],28, C_text("chicken.io#read-string!/port"));
lf[232]=C_h_intern(&lf[232],20, C_text("srfi-4#read-u8vector"));
lf[233]=C_h_intern(&lf[233],13, C_text("read-u8vector"));
lf[234]=C_h_intern(&lf[234],27, C_text("chicken.io#read-string/port"));
lf[235]=C_h_intern(&lf[235],34, C_text("chicken.platform#register-feature!"));
lf[236]=C_h_intern(&lf[236],15, C_text("blob->f64vector"));
lf[237]=C_h_intern(&lf[237],15, C_text("blob->f32vector"));
lf[238]=C_h_intern(&lf[238],15, C_text("blob->s64vector"));
lf[239]=C_h_intern(&lf[239],15, C_text("blob->u64vector"));
lf[240]=C_h_intern(&lf[240],15, C_text("blob->s32vector"));
lf[241]=C_h_intern(&lf[241],15, C_text("blob->u32vector"));
lf[242]=C_h_intern(&lf[242],15, C_text("blob->s16vector"));
lf[243]=C_h_intern(&lf[243],15, C_text("blob->u16vector"));
lf[244]=C_h_intern(&lf[244],14, C_text("blob->s8vector"));
lf[245]=C_h_intern(&lf[245],14, C_text("blob->u8vector"));
lf[246]=C_h_intern(&lf[246],22, C_text("blob->f64vector/shared"));
lf[247]=C_h_intern(&lf[247],22, C_text("blob->f32vector/shared"));
lf[248]=C_h_intern(&lf[248],22, C_text("blob->s64vector/shared"));
lf[249]=C_h_intern(&lf[249],22, C_text("blob->u64vector/shared"));
lf[250]=C_h_intern(&lf[250],22, C_text("blob->s32vector/shared"));
lf[251]=C_h_intern(&lf[251],22, C_text("blob->u32vector/shared"));
lf[252]=C_h_intern(&lf[252],22, C_text("blob->s16vector/shared"));
lf[253]=C_h_intern(&lf[253],22, C_text("blob->u16vector/shared"));
lf[254]=C_h_intern(&lf[254],21, C_text("blob->s8vector/shared"));
lf[255]=C_h_intern(&lf[255],21, C_text("blob->u8vector/shared"));
lf[256]=C_h_intern(&lf[256],15, C_text("f64vector->blob"));
lf[257]=C_h_intern(&lf[257],15, C_text("f32vector->blob"));
lf[258]=C_h_intern(&lf[258],15, C_text("s64vector->blob"));
lf[259]=C_h_intern(&lf[259],15, C_text("u64vector->blob"));
lf[260]=C_h_intern(&lf[260],15, C_text("s32vector->blob"));
lf[261]=C_h_intern(&lf[261],15, C_text("u32vector->blob"));
lf[262]=C_h_intern(&lf[262],15, C_text("s16vector->blob"));
lf[263]=C_h_intern(&lf[263],15, C_text("u16vector->blob"));
lf[264]=C_h_intern(&lf[264],14, C_text("s8vector->blob"));
lf[265]=C_h_intern(&lf[265],14, C_text("u8vector->blob"));
lf[266]=C_h_intern(&lf[266],31, C_text("chicken.base#getter-with-setter"));
lf[267]=C_decode_literal(C_heaptop,C_text("\376B\000\000\042(chicken.srfi-4#f64vector-ref v i)"));
lf[268]=C_decode_literal(C_heaptop,C_text("\376B\000\000\042(chicken.srfi-4#f32vector-ref v i)"));
lf[269]=C_decode_literal(C_heaptop,C_text("\376B\000\000\042(chicken.srfi-4#s64vector-ref v i)"));
lf[270]=C_decode_literal(C_heaptop,C_text("\376B\000\000\042(chicken.srfi-4#u64vector-ref v i)"));
lf[271]=C_decode_literal(C_heaptop,C_text("\376B\000\000\042(chicken.srfi-4#s32vector-ref v i)"));
lf[272]=C_decode_literal(C_heaptop,C_text("\376B\000\000\042(chicken.srfi-4#u32vector-ref v i)"));
lf[273]=C_decode_literal(C_heaptop,C_text("\376B\000\000\042(chicken.srfi-4#s16vector-ref v i)"));
lf[274]=C_decode_literal(C_heaptop,C_text("\376B\000\000\042(chicken.srfi-4#u16vector-ref v i)"));
lf[275]=C_decode_literal(C_heaptop,C_text("\376B\000\000!(chicken.srfi-4#s8vector-ref v i)"));
lf[276]=C_decode_literal(C_heaptop,C_text("\376B\000\000!(chicken.srfi-4#u8vector-ref v i)"));
C_register_lf2(lf,277,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1513,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_expand_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[289] = {
{C_text("f5225:srfi_2d4_2escm"),(void*)f5225},
{C_text("f5232:srfi_2d4_2escm"),(void*)f5232},
{C_text("f5239:srfi_2d4_2escm"),(void*)f5239},
{C_text("f5246:srfi_2d4_2escm"),(void*)f5246},
{C_text("f5253:srfi_2d4_2escm"),(void*)f5253},
{C_text("f5260:srfi_2d4_2escm"),(void*)f5260},
{C_text("f5267:srfi_2d4_2escm"),(void*)f5267},
{C_text("f5274:srfi_2d4_2escm"),(void*)f5274},
{C_text("f5281:srfi_2d4_2escm"),(void*)f5281},
{C_text("f5288:srfi_2d4_2escm"),(void*)f5288},
{C_text("f_1513:srfi_2d4_2escm"),(void*)f_1513},
{C_text("f_1516:srfi_2d4_2escm"),(void*)f_1516},
{C_text("f_1519:srfi_2d4_2escm"),(void*)f_1519},
{C_text("f_1521:srfi_2d4_2escm"),(void*)f_1521},
{C_text("f_1524:srfi_2d4_2escm"),(void*)f_1524},
{C_text("f_1527:srfi_2d4_2escm"),(void*)f_1527},
{C_text("f_1530:srfi_2d4_2escm"),(void*)f_1530},
{C_text("f_1533:srfi_2d4_2escm"),(void*)f_1533},
{C_text("f_1536:srfi_2d4_2escm"),(void*)f_1536},
{C_text("f_1539:srfi_2d4_2escm"),(void*)f_1539},
{C_text("f_1542:srfi_2d4_2escm"),(void*)f_1542},
{C_text("f_1545:srfi_2d4_2escm"),(void*)f_1545},
{C_text("f_1548:srfi_2d4_2escm"),(void*)f_1548},
{C_text("f_1551:srfi_2d4_2escm"),(void*)f_1551},
{C_text("f_1554:srfi_2d4_2escm"),(void*)f_1554},
{C_text("f_1557:srfi_2d4_2escm"),(void*)f_1557},
{C_text("f_1560:srfi_2d4_2escm"),(void*)f_1560},
{C_text("f_1563:srfi_2d4_2escm"),(void*)f_1563},
{C_text("f_1566:srfi_2d4_2escm"),(void*)f_1566},
{C_text("f_1569:srfi_2d4_2escm"),(void*)f_1569},
{C_text("f_1572:srfi_2d4_2escm"),(void*)f_1572},
{C_text("f_1575:srfi_2d4_2escm"),(void*)f_1575},
{C_text("f_1578:srfi_2d4_2escm"),(void*)f_1578},
{C_text("f_1583:srfi_2d4_2escm"),(void*)f_1583},
{C_text("f_1587:srfi_2d4_2escm"),(void*)f_1587},
{C_text("f_1591:srfi_2d4_2escm"),(void*)f_1591},
{C_text("f_1595:srfi_2d4_2escm"),(void*)f_1595},
{C_text("f_1599:srfi_2d4_2escm"),(void*)f_1599},
{C_text("f_1603:srfi_2d4_2escm"),(void*)f_1603},
{C_text("f_1607:srfi_2d4_2escm"),(void*)f_1607},
{C_text("f_1611:srfi_2d4_2escm"),(void*)f_1611},
{C_text("f_1615:srfi_2d4_2escm"),(void*)f_1615},
{C_text("f_1619:srfi_2d4_2escm"),(void*)f_1619},
{C_text("f_1627:srfi_2d4_2escm"),(void*)f_1627},
{C_text("f_1629:srfi_2d4_2escm"),(void*)f_1629},
{C_text("f_1633:srfi_2d4_2escm"),(void*)f_1633},
{C_text("f_1636:srfi_2d4_2escm"),(void*)f_1636},
{C_text("f_1642:srfi_2d4_2escm"),(void*)f_1642},
{C_text("f_1657:srfi_2d4_2escm"),(void*)f_1657},
{C_text("f_1668:srfi_2d4_2escm"),(void*)f_1668},
{C_text("f_1675:srfi_2d4_2escm"),(void*)f_1675},
{C_text("f_1683:srfi_2d4_2escm"),(void*)f_1683},
{C_text("f_1708:srfi_2d4_2escm"),(void*)f_1708},
{C_text("f_1719:srfi_2d4_2escm"),(void*)f_1719},
{C_text("f_1738:srfi_2d4_2escm"),(void*)f_1738},
{C_text("f_1743:srfi_2d4_2escm"),(void*)f_1743},
{C_text("f_1761:srfi_2d4_2escm"),(void*)f_1761},
{C_text("f_1799:srfi_2d4_2escm"),(void*)f_1799},
{C_text("f_1824:srfi_2d4_2escm"),(void*)f_1824},
{C_text("f_1835:srfi_2d4_2escm"),(void*)f_1835},
{C_text("f_1854:srfi_2d4_2escm"),(void*)f_1854},
{C_text("f_1859:srfi_2d4_2escm"),(void*)f_1859},
{C_text("f_1877:srfi_2d4_2escm"),(void*)f_1877},
{C_text("f_1915:srfi_2d4_2escm"),(void*)f_1915},
{C_text("f_1940:srfi_2d4_2escm"),(void*)f_1940},
{C_text("f_1951:srfi_2d4_2escm"),(void*)f_1951},
{C_text("f_1970:srfi_2d4_2escm"),(void*)f_1970},
{C_text("f_1975:srfi_2d4_2escm"),(void*)f_1975},
{C_text("f_1993:srfi_2d4_2escm"),(void*)f_1993},
{C_text("f_2031:srfi_2d4_2escm"),(void*)f_2031},
{C_text("f_2056:srfi_2d4_2escm"),(void*)f_2056},
{C_text("f_2067:srfi_2d4_2escm"),(void*)f_2067},
{C_text("f_2096:srfi_2d4_2escm"),(void*)f_2096},
{C_text("f_2101:srfi_2d4_2escm"),(void*)f_2101},
{C_text("f_2119:srfi_2d4_2escm"),(void*)f_2119},
{C_text("f_2157:srfi_2d4_2escm"),(void*)f_2157},
{C_text("f_2182:srfi_2d4_2escm"),(void*)f_2182},
{C_text("f_2193:srfi_2d4_2escm"),(void*)f_2193},
{C_text("f_2212:srfi_2d4_2escm"),(void*)f_2212},
{C_text("f_2217:srfi_2d4_2escm"),(void*)f_2217},
{C_text("f_2235:srfi_2d4_2escm"),(void*)f_2235},
{C_text("f_2273:srfi_2d4_2escm"),(void*)f_2273},
{C_text("f_2298:srfi_2d4_2escm"),(void*)f_2298},
{C_text("f_2309:srfi_2d4_2escm"),(void*)f_2309},
{C_text("f_2328:srfi_2d4_2escm"),(void*)f_2328},
{C_text("f_2333:srfi_2d4_2escm"),(void*)f_2333},
{C_text("f_2351:srfi_2d4_2escm"),(void*)f_2351},
{C_text("f_2389:srfi_2d4_2escm"),(void*)f_2389},
{C_text("f_2414:srfi_2d4_2escm"),(void*)f_2414},
{C_text("f_2425:srfi_2d4_2escm"),(void*)f_2425},
{C_text("f_2454:srfi_2d4_2escm"),(void*)f_2454},
{C_text("f_2459:srfi_2d4_2escm"),(void*)f_2459},
{C_text("f_2477:srfi_2d4_2escm"),(void*)f_2477},
{C_text("f_2515:srfi_2d4_2escm"),(void*)f_2515},
{C_text("f_2540:srfi_2d4_2escm"),(void*)f_2540},
{C_text("f_2551:srfi_2d4_2escm"),(void*)f_2551},
{C_text("f_2580:srfi_2d4_2escm"),(void*)f_2580},
{C_text("f_2585:srfi_2d4_2escm"),(void*)f_2585},
{C_text("f_2603:srfi_2d4_2escm"),(void*)f_2603},
{C_text("f_2641:srfi_2d4_2escm"),(void*)f_2641},
{C_text("f_2666:srfi_2d4_2escm"),(void*)f_2666},
{C_text("f_2687:srfi_2d4_2escm"),(void*)f_2687},
{C_text("f_2690:srfi_2d4_2escm"),(void*)f_2690},
{C_text("f_2695:srfi_2d4_2escm"),(void*)f_2695},
{C_text("f_2714:srfi_2d4_2escm"),(void*)f_2714},
{C_text("f_2752:srfi_2d4_2escm"),(void*)f_2752},
{C_text("f_2777:srfi_2d4_2escm"),(void*)f_2777},
{C_text("f_2798:srfi_2d4_2escm"),(void*)f_2798},
{C_text("f_2801:srfi_2d4_2escm"),(void*)f_2801},
{C_text("f_2806:srfi_2d4_2escm"),(void*)f_2806},
{C_text("f_2825:srfi_2d4_2escm"),(void*)f_2825},
{C_text("f_2863:srfi_2d4_2escm"),(void*)f_2863},
{C_text("f_2870:srfi_2d4_2escm"),(void*)f_2870},
{C_text("f_2875:srfi_2d4_2escm"),(void*)f_2875},
{C_text("f_2882:srfi_2d4_2escm"),(void*)f_2882},
{C_text("f_2899:srfi_2d4_2escm"),(void*)f_2899},
{C_text("f_2906:srfi_2d4_2escm"),(void*)f_2906},
{C_text("f_2911:srfi_2d4_2escm"),(void*)f_2911},
{C_text("f_2918:srfi_2d4_2escm"),(void*)f_2918},
{C_text("f_2935:srfi_2d4_2escm"),(void*)f_2935},
{C_text("f_2942:srfi_2d4_2escm"),(void*)f_2942},
{C_text("f_2947:srfi_2d4_2escm"),(void*)f_2947},
{C_text("f_2954:srfi_2d4_2escm"),(void*)f_2954},
{C_text("f_2971:srfi_2d4_2escm"),(void*)f_2971},
{C_text("f_2978:srfi_2d4_2escm"),(void*)f_2978},
{C_text("f_2983:srfi_2d4_2escm"),(void*)f_2983},
{C_text("f_2990:srfi_2d4_2escm"),(void*)f_2990},
{C_text("f_3007:srfi_2d4_2escm"),(void*)f_3007},
{C_text("f_3014:srfi_2d4_2escm"),(void*)f_3014},
{C_text("f_3019:srfi_2d4_2escm"),(void*)f_3019},
{C_text("f_3026:srfi_2d4_2escm"),(void*)f_3026},
{C_text("f_3043:srfi_2d4_2escm"),(void*)f_3043},
{C_text("f_3050:srfi_2d4_2escm"),(void*)f_3050},
{C_text("f_3055:srfi_2d4_2escm"),(void*)f_3055},
{C_text("f_3062:srfi_2d4_2escm"),(void*)f_3062},
{C_text("f_3079:srfi_2d4_2escm"),(void*)f_3079},
{C_text("f_3086:srfi_2d4_2escm"),(void*)f_3086},
{C_text("f_3091:srfi_2d4_2escm"),(void*)f_3091},
{C_text("f_3098:srfi_2d4_2escm"),(void*)f_3098},
{C_text("f_3115:srfi_2d4_2escm"),(void*)f_3115},
{C_text("f_3122:srfi_2d4_2escm"),(void*)f_3122},
{C_text("f_3127:srfi_2d4_2escm"),(void*)f_3127},
{C_text("f_3134:srfi_2d4_2escm"),(void*)f_3134},
{C_text("f_3151:srfi_2d4_2escm"),(void*)f_3151},
{C_text("f_3158:srfi_2d4_2escm"),(void*)f_3158},
{C_text("f_3163:srfi_2d4_2escm"),(void*)f_3163},
{C_text("f_3170:srfi_2d4_2escm"),(void*)f_3170},
{C_text("f_3187:srfi_2d4_2escm"),(void*)f_3187},
{C_text("f_3194:srfi_2d4_2escm"),(void*)f_3194},
{C_text("f_3199:srfi_2d4_2escm"),(void*)f_3199},
{C_text("f_3206:srfi_2d4_2escm"),(void*)f_3206},
{C_text("f_3223:srfi_2d4_2escm"),(void*)f_3223},
{C_text("f_3229:srfi_2d4_2escm"),(void*)f_3229},
{C_text("f_3235:srfi_2d4_2escm"),(void*)f_3235},
{C_text("f_3241:srfi_2d4_2escm"),(void*)f_3241},
{C_text("f_3247:srfi_2d4_2escm"),(void*)f_3247},
{C_text("f_3253:srfi_2d4_2escm"),(void*)f_3253},
{C_text("f_3259:srfi_2d4_2escm"),(void*)f_3259},
{C_text("f_3265:srfi_2d4_2escm"),(void*)f_3265},
{C_text("f_3271:srfi_2d4_2escm"),(void*)f_3271},
{C_text("f_3277:srfi_2d4_2escm"),(void*)f_3277},
{C_text("f_3283:srfi_2d4_2escm"),(void*)f_3283},
{C_text("f_3292:srfi_2d4_2escm"),(void*)f_3292},
{C_text("f_3307:srfi_2d4_2escm"),(void*)f_3307},
{C_text("f_3313:srfi_2d4_2escm"),(void*)f_3313},
{C_text("f_3322:srfi_2d4_2escm"),(void*)f_3322},
{C_text("f_3337:srfi_2d4_2escm"),(void*)f_3337},
{C_text("f_3343:srfi_2d4_2escm"),(void*)f_3343},
{C_text("f_3352:srfi_2d4_2escm"),(void*)f_3352},
{C_text("f_3367:srfi_2d4_2escm"),(void*)f_3367},
{C_text("f_3373:srfi_2d4_2escm"),(void*)f_3373},
{C_text("f_3382:srfi_2d4_2escm"),(void*)f_3382},
{C_text("f_3397:srfi_2d4_2escm"),(void*)f_3397},
{C_text("f_3403:srfi_2d4_2escm"),(void*)f_3403},
{C_text("f_3412:srfi_2d4_2escm"),(void*)f_3412},
{C_text("f_3426:srfi_2d4_2escm"),(void*)f_3426},
{C_text("f_3432:srfi_2d4_2escm"),(void*)f_3432},
{C_text("f_3441:srfi_2d4_2escm"),(void*)f_3441},
{C_text("f_3455:srfi_2d4_2escm"),(void*)f_3455},
{C_text("f_3461:srfi_2d4_2escm"),(void*)f_3461},
{C_text("f_3470:srfi_2d4_2escm"),(void*)f_3470},
{C_text("f_3484:srfi_2d4_2escm"),(void*)f_3484},
{C_text("f_3490:srfi_2d4_2escm"),(void*)f_3490},
{C_text("f_3499:srfi_2d4_2escm"),(void*)f_3499},
{C_text("f_3513:srfi_2d4_2escm"),(void*)f_3513},
{C_text("f_3519:srfi_2d4_2escm"),(void*)f_3519},
{C_text("f_3528:srfi_2d4_2escm"),(void*)f_3528},
{C_text("f_3542:srfi_2d4_2escm"),(void*)f_3542},
{C_text("f_3548:srfi_2d4_2escm"),(void*)f_3548},
{C_text("f_3557:srfi_2d4_2escm"),(void*)f_3557},
{C_text("f_3571:srfi_2d4_2escm"),(void*)f_3571},
{C_text("f_3577:srfi_2d4_2escm"),(void*)f_3577},
{C_text("f_3580:srfi_2d4_2escm"),(void*)f_3580},
{C_text("f_3583:srfi_2d4_2escm"),(void*)f_3583},
{C_text("f_3586:srfi_2d4_2escm"),(void*)f_3586},
{C_text("f_3589:srfi_2d4_2escm"),(void*)f_3589},
{C_text("f_3592:srfi_2d4_2escm"),(void*)f_3592},
{C_text("f_3595:srfi_2d4_2escm"),(void*)f_3595},
{C_text("f_3598:srfi_2d4_2escm"),(void*)f_3598},
{C_text("f_3601:srfi_2d4_2escm"),(void*)f_3601},
{C_text("f_3604:srfi_2d4_2escm"),(void*)f_3604},
{C_text("f_3619:srfi_2d4_2escm"),(void*)f_3619},
{C_text("f_3621:srfi_2d4_2escm"),(void*)f_3621},
{C_text("f_3631:srfi_2d4_2escm"),(void*)f_3631},
{C_text("f_3637:srfi_2d4_2escm"),(void*)f_3637},
{C_text("f_3639:srfi_2d4_2escm"),(void*)f_3639},
{C_text("f_3667:srfi_2d4_2escm"),(void*)f_3667},
{C_text("f_3669:srfi_2d4_2escm"),(void*)f_3669},
{C_text("f_3679:srfi_2d4_2escm"),(void*)f_3679},
{C_text("f_3743:srfi_2d4_2escm"),(void*)f_3743},
{C_text("f_3747:srfi_2d4_2escm"),(void*)f_3747},
{C_text("f_3751:srfi_2d4_2escm"),(void*)f_3751},
{C_text("f_3755:srfi_2d4_2escm"),(void*)f_3755},
{C_text("f_3759:srfi_2d4_2escm"),(void*)f_3759},
{C_text("f_3763:srfi_2d4_2escm"),(void*)f_3763},
{C_text("f_3767:srfi_2d4_2escm"),(void*)f_3767},
{C_text("f_3771:srfi_2d4_2escm"),(void*)f_3771},
{C_text("f_3775:srfi_2d4_2escm"),(void*)f_3775},
{C_text("f_3779:srfi_2d4_2escm"),(void*)f_3779},
{C_text("f_3783:srfi_2d4_2escm"),(void*)f_3783},
{C_text("f_3787:srfi_2d4_2escm"),(void*)f_3787},
{C_text("f_3791:srfi_2d4_2escm"),(void*)f_3791},
{C_text("f_3795:srfi_2d4_2escm"),(void*)f_3795},
{C_text("f_3799:srfi_2d4_2escm"),(void*)f_3799},
{C_text("f_3803:srfi_2d4_2escm"),(void*)f_3803},
{C_text("f_3807:srfi_2d4_2escm"),(void*)f_3807},
{C_text("f_3811:srfi_2d4_2escm"),(void*)f_3811},
{C_text("f_3815:srfi_2d4_2escm"),(void*)f_3815},
{C_text("f_3819:srfi_2d4_2escm"),(void*)f_3819},
{C_text("f_3823:srfi_2d4_2escm"),(void*)f_3823},
{C_text("f_3827:srfi_2d4_2escm"),(void*)f_3827},
{C_text("f_3831:srfi_2d4_2escm"),(void*)f_3831},
{C_text("f_3835:srfi_2d4_2escm"),(void*)f_3835},
{C_text("f_3839:srfi_2d4_2escm"),(void*)f_3839},
{C_text("f_3843:srfi_2d4_2escm"),(void*)f_3843},
{C_text("f_3847:srfi_2d4_2escm"),(void*)f_3847},
{C_text("f_3851:srfi_2d4_2escm"),(void*)f_3851},
{C_text("f_3855:srfi_2d4_2escm"),(void*)f_3855},
{C_text("f_3859:srfi_2d4_2escm"),(void*)f_3859},
{C_text("f_3864:srfi_2d4_2escm"),(void*)f_3864},
{C_text("f_3873:srfi_2d4_2escm"),(void*)f_3873},
{C_text("f_3892:srfi_2d4_2escm"),(void*)f_3892},
{C_text("f_3903:srfi_2d4_2escm"),(void*)f_3903},
{C_text("f_3924:srfi_2d4_2escm"),(void*)f_3924},
{C_text("f_3936:srfi_2d4_2escm"),(void*)f_3936},
{C_text("f_3939:srfi_2d4_2escm"),(void*)f_3939},
{C_text("f_3949:srfi_2d4_2escm"),(void*)f_3949},
{C_text("f_3998:srfi_2d4_2escm"),(void*)f_3998},
{C_text("f_4013:srfi_2d4_2escm"),(void*)f_4013},
{C_text("f_4032:srfi_2d4_2escm"),(void*)f_4032},
{C_text("f_4037:srfi_2d4_2escm"),(void*)f_4037},
{C_text("f_4056:srfi_2d4_2escm"),(void*)f_4056},
{C_text("f_4062:srfi_2d4_2escm"),(void*)f_4062},
{C_text("f_4083:srfi_2d4_2escm"),(void*)f_4083},
{C_text("f_4089:srfi_2d4_2escm"),(void*)f_4089},
{C_text("f_4095:srfi_2d4_2escm"),(void*)f_4095},
{C_text("f_4101:srfi_2d4_2escm"),(void*)f_4101},
{C_text("f_4107:srfi_2d4_2escm"),(void*)f_4107},
{C_text("f_4113:srfi_2d4_2escm"),(void*)f_4113},
{C_text("f_4119:srfi_2d4_2escm"),(void*)f_4119},
{C_text("f_4125:srfi_2d4_2escm"),(void*)f_4125},
{C_text("f_4131:srfi_2d4_2escm"),(void*)f_4131},
{C_text("f_4137:srfi_2d4_2escm"),(void*)f_4137},
{C_text("f_4143:srfi_2d4_2escm"),(void*)f_4143},
{C_text("f_4173:srfi_2d4_2escm"),(void*)f_4173},
{C_text("f_4192:srfi_2d4_2escm"),(void*)f_4192},
{C_text("f_4195:srfi_2d4_2escm"),(void*)f_4195},
{C_text("f_4208:srfi_2d4_2escm"),(void*)f_4208},
{C_text("f_4218:srfi_2d4_2escm"),(void*)f_4218},
{C_text("f_4243:srfi_2d4_2escm"),(void*)f_4243},
{C_text("f_4312:srfi_2d4_2escm"),(void*)f_4312},
{C_text("f_4331:srfi_2d4_2escm"),(void*)f_4331},
{C_text("f_4337:srfi_2d4_2escm"),(void*)f_4337},
{C_text("f_4392:srfi_2d4_2escm"),(void*)f_4392},
{C_text("f_4411:srfi_2d4_2escm"),(void*)f_4411},
{C_text("f_4414:srfi_2d4_2escm"),(void*)f_4414},
{C_text("f_4453:srfi_2d4_2escm"),(void*)f_4453},
{C_text("f_4455:srfi_2d4_2escm"),(void*)f_4455},
{C_text("f_4458:srfi_2d4_2escm"),(void*)f_4458},
{C_text("f_4461:srfi_2d4_2escm"),(void*)f_4461},
{C_text("f_4464:srfi_2d4_2escm"),(void*)f_4464},
{C_text("f_4467:srfi_2d4_2escm"),(void*)f_4467},
{C_text("f_4470:srfi_2d4_2escm"),(void*)f_4470},
{C_text("f_4473:srfi_2d4_2escm"),(void*)f_4473},
{C_text("f_4476:srfi_2d4_2escm"),(void*)f_4476},
{C_text("f_4479:srfi_2d4_2escm"),(void*)f_4479},
{C_text("f_4482:srfi_2d4_2escm"),(void*)f_4482},
{C_text("toplevel:srfi_2d4_2escm"),(void*)C_srfi_2d4_toplevel},
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
o|hiding unexported module binding: srfi-4#d 
o|hiding unexported module binding: srfi-4#define-alias 
o|hiding unexported module binding: srfi-4#list->NNNvector 
o|hiding unexported module binding: srfi-4#NNNvector->list 
o|hiding unexported module binding: srfi-4#pack 
o|hiding unexported module binding: srfi-4#pack-copy 
o|hiding unexported module binding: srfi-4#unpack 
o|hiding unexported module binding: srfi-4#unpack-copy 
o|hiding unexported module binding: srfi-4#subnvector 
o|eliminated procedure checks: 32 
o|specializations:
o|  2 (##sys#check-input-port * * *)
o|  1 (##sys#check-output-port * * *)
o|  1 (scheme#assq * (list-of pair))
o|  1 (scheme#memq * list)
o|  3 (chicken.base#sub1 *)
o|  3 (scheme#- *)
o|  8 (chicken.bitwise#integer-length *)
(o e)|safe calls: 416 
(o e)|assignments to immediate values: 1 
o|dropping redundant toplevel assignment: srfi-4#release-number-vector 
o|dropping redundant toplevel assignment: srfi-4#make-u8vector 
o|dropping redundant toplevel assignment: srfi-4#make-s8vector 
o|dropping redundant toplevel assignment: srfi-4#make-u16vector 
o|dropping redundant toplevel assignment: srfi-4#make-s16vector 
o|dropping redundant toplevel assignment: srfi-4#make-u32vector 
o|dropping redundant toplevel assignment: srfi-4#make-u64vector 
o|dropping redundant toplevel assignment: srfi-4#make-s32vector 
o|dropping redundant toplevel assignment: srfi-4#make-s64vector 
o|dropping redundant toplevel assignment: srfi-4#make-f32vector 
o|dropping redundant toplevel assignment: srfi-4#make-f64vector 
o|safe globals: (srfi-4#f64vector-set! srfi-4#f32vector-set! srfi-4#s64vector-set! srfi-4#u64vector-set! srfi-4#s32vector-set! srfi-4#u32vector-set! srfi-4#s16vector-set! srfi-4#u16vector-set! srfi-4#s8vector-set! srfi-4#u8vector-set! srfi-4#f64vector-length srfi-4#f32vector-length srfi-4#s64vector-length srfi-4#u64vector-length srfi-4#s32vector-length srfi-4#u32vector-length srfi-4#s16vector-length srfi-4#u16vector-length srfi-4#s8vector-length srfi-4#u8vector-length) 
o|inlining procedure: k1643 
o|contracted procedure: "(srfi-4.scm:278) ext-alloc220" 
o|inlining procedure: k1643 
o|inlining procedure: k1670 
o|inlining procedure: "(srfi-4.scm:288) ext-free226" 
o|inlining procedure: k1670 
o|inlining procedure: k1709 
o|inlining procedure: k1709 
o|inlining procedure: k1745 
o|inlining procedure: k1745 
o|contracted procedure: "(srfi-4.scm:298) g267268" 
o|inlining procedure: k1720 
o|inlining procedure: k1720 
o|inlining procedure: k1825 
o|inlining procedure: k1825 
o|inlining procedure: k1861 
o|inlining procedure: k1861 
o|contracted procedure: "(srfi-4.scm:310) g301302" 
o|inlining procedure: k1836 
o|inlining procedure: k1836 
o|inlining procedure: k1941 
o|inlining procedure: k1941 
o|inlining procedure: k1977 
o|inlining procedure: k1977 
o|contracted procedure: "(srfi-4.scm:322) g335336" 
o|inlining procedure: k1952 
o|inlining procedure: k1952 
o|inlining procedure: k2057 
o|inlining procedure: k2057 
o|inlining procedure: k2103 
o|inlining procedure: k2103 
o|contracted procedure: "(srfi-4.scm:334) g369370" 
o|inlining procedure: k2068 
o|inlining procedure: k2068 
o|inlining procedure: k2183 
o|inlining procedure: k2183 
o|inlining procedure: k2219 
o|inlining procedure: k2219 
o|contracted procedure: "(srfi-4.scm:346) g403404" 
o|inlining procedure: k2194 
o|inlining procedure: k2194 
o|inlining procedure: k2299 
o|inlining procedure: k2299 
o|inlining procedure: k2335 
o|inlining procedure: k2335 
o|contracted procedure: "(srfi-4.scm:358) g437438" 
o|inlining procedure: k2310 
o|inlining procedure: k2310 
o|inlining procedure: k2415 
o|inlining procedure: k2415 
o|inlining procedure: k2461 
o|inlining procedure: k2461 
o|contracted procedure: "(srfi-4.scm:370) g471472" 
o|inlining procedure: k2426 
o|inlining procedure: k2426 
o|inlining procedure: k2541 
o|inlining procedure: k2541 
o|inlining procedure: k2587 
o|inlining procedure: k2587 
o|contracted procedure: "(srfi-4.scm:382) g505506" 
o|inlining procedure: k2552 
o|inlining procedure: k2552 
o|inlining procedure: k2667 
o|inlining procedure: k2667 
o|inlining procedure: k2697 
o|inlining procedure: k2697 
o|contracted procedure: "(srfi-4.scm:394) g539540" 
o|inlining procedure: k2675 
o|inlining procedure: k2675 
o|inlining procedure: k2778 
o|inlining procedure: k2778 
o|inlining procedure: k2808 
o|inlining procedure: k2808 
o|contracted procedure: "(srfi-4.scm:408) g575576" 
o|inlining procedure: k2786 
o|inlining procedure: k2786 
o|inlining procedure: k2877 
o|inlining procedure: k2877 
o|inlining procedure: k2913 
o|inlining procedure: k2913 
o|inlining procedure: k2949 
o|inlining procedure: k2949 
o|inlining procedure: k2985 
o|inlining procedure: k2985 
o|inlining procedure: k3021 
o|inlining procedure: k3021 
o|inlining procedure: k3057 
o|inlining procedure: k3057 
o|inlining procedure: k3093 
o|inlining procedure: k3093 
o|inlining procedure: k3129 
o|inlining procedure: k3129 
o|inlining procedure: k3165 
o|inlining procedure: k3165 
o|inlining procedure: k3201 
o|inlining procedure: k3201 
o|inlining procedure: k3294 
o|inlining procedure: k3294 
o|inlining procedure: k3324 
o|inlining procedure: k3324 
o|inlining procedure: k3354 
o|inlining procedure: k3354 
o|inlining procedure: k3384 
o|inlining procedure: k3384 
o|inlining procedure: k3414 
o|inlining procedure: k3414 
o|inlining procedure: k3443 
o|inlining procedure: k3443 
o|inlining procedure: k3472 
o|inlining procedure: k3472 
o|inlining procedure: k3501 
o|inlining procedure: k3501 
o|inlining procedure: k3530 
o|inlining procedure: k3530 
o|inlining procedure: k3559 
o|inlining procedure: k3559 
o|inlining procedure: k3647 
o|inlining procedure: k3647 
o|inlining procedure: k3680 
o|inlining procedure: k3680 
o|substituted constant variable: a3870 
o|inlining procedure: k3866 
o|inlining procedure: k3889 
o|inlining procedure: k3889 
o|inlining procedure: k3866 
o|inlining procedure: k3931 
o|inlining procedure: k3931 
o|contracted procedure: "(srfi-4.scm:669) g10001001" 
o|inlining procedure: k4038 
o|inlining procedure: k4038 
o|contracted procedure: "(srfi-4.scm:668) g991992" 
o|inlining procedure: k4014 
o|inlining procedure: k4014 
o|substituted constant variable: a4167 
o|substituted constant variable: a4168 
o|inlining procedure: k4203 
o|inlining procedure: k4203 
o|inlining procedure: k4220 
o|inlining procedure: k4220 
o|inlining procedure: k4229 
o|inlining procedure: k4229 
o|contracted procedure: "(srfi-4.scm:693) g10891090" 
o|inlining procedure: k4244 
o|inlining procedure: k4244 
o|contracted procedure: "(srfi-4.scm:692) g10771078" 
o|inlining procedure: k4174 
o|inlining procedure: k4174 
o|inlining procedure: k4272 
o|inlining procedure: k4272 
o|substituted constant variable: a4327 
o|substituted constant variable: a4328 
o|substituted constant variable: a4407 
o|substituted constant variable: a4408 
o|inlining procedure: k4415 
o|inlining procedure: k4415 
o|simplifications: ((if . 1)) 
o|replaced variables: 675 
o|removed binding forms: 305 
o|substituted constant variable: loc271 
o|substituted constant variable: len270 
o|folded constant expression: (scheme#expt (quote 2) (quote 8)) 
o|substituted constant variable: len270 
o|substituted constant variable: loc271 
o|substituted constant variable: loc305 
o|substituted constant variable: len304 
o|folded constant expression: (scheme#expt (quote 2) (quote 8)) 
o|substituted constant variable: len304 
o|substituted constant variable: loc305 
o|substituted constant variable: loc339 
o|substituted constant variable: len338 
o|folded constant expression: (scheme#expt (quote 2) (quote 16)) 
o|substituted constant variable: len338 
o|substituted constant variable: loc339 
o|substituted constant variable: loc373 
o|substituted constant variable: len372 
o|folded constant expression: (scheme#expt (quote 2) (quote 16)) 
o|substituted constant variable: len372 
o|folded constant expression: (scheme#expt (quote 2) (quote 16)) 
o|substituted constant variable: len372 
o|substituted constant variable: loc373 
o|substituted constant variable: loc407 
o|substituted constant variable: len406 
o|folded constant expression: (scheme#expt (quote 2) (quote 32)) 
o|substituted constant variable: len406 
o|substituted constant variable: loc407 
o|substituted constant variable: loc441 
o|substituted constant variable: len440 
o|folded constant expression: (scheme#expt (quote 2) (quote 64)) 
o|substituted constant variable: len440 
o|substituted constant variable: loc441 
o|substituted constant variable: loc475 
o|substituted constant variable: len474 
o|folded constant expression: (scheme#expt (quote 2) (quote 32)) 
o|substituted constant variable: len474 
o|folded constant expression: (scheme#expt (quote 2) (quote 32)) 
o|substituted constant variable: len474 
o|substituted constant variable: loc475 
o|substituted constant variable: loc509 
o|substituted constant variable: len508 
o|folded constant expression: (scheme#expt (quote 2) (quote 64)) 
o|substituted constant variable: len508 
o|folded constant expression: (scheme#expt (quote 2) (quote 64)) 
o|substituted constant variable: len508 
o|substituted constant variable: loc509 
o|substituted constant variable: loc542 
o|substituted constant variable: loc578 
o|substituted constant variable: r32954570 
o|substituted constant variable: r33254572 
o|substituted constant variable: r33554574 
o|substituted constant variable: r33854576 
o|substituted constant variable: r34154578 
o|substituted constant variable: r34444580 
o|substituted constant variable: r34734582 
o|substituted constant variable: r35024584 
o|substituted constant variable: r35314586 
o|substituted constant variable: r35604588 
o|substituted constant variable: from1003 
o|substituted constant variable: from1003 
o|substituted constant variable: from994 
o|substituted constant variable: from994 
o|substituted constant variable: loc1094 
o|substituted constant variable: loc1094 
o|substituted constant variable: loc1082 
o|substituted constant variable: from1080 
o|substituted constant variable: from1080 
o|substituted constant variable: loc1082 
o|replaced variables: 133 
o|removed binding forms: 511 
o|inlining procedure: k1646 
o|contracted procedure: k1731 
o|inlining procedure: k1752 
o|inlining procedure: k1752 
o|contracted procedure: k1847 
o|inlining procedure: k1868 
o|inlining procedure: k1868 
o|contracted procedure: k1963 
o|inlining procedure: k1984 
o|inlining procedure: k1984 
o|contracted procedure: k2080 
o|contracted procedure: k2085 
o|inlining procedure: k2110 
o|inlining procedure: k2110 
o|contracted procedure: k2205 
o|inlining procedure: k2226 
o|inlining procedure: k2226 
o|contracted procedure: k2321 
o|inlining procedure: k2342 
o|inlining procedure: k2342 
o|contracted procedure: k2438 
o|contracted procedure: k2443 
o|inlining procedure: k2468 
o|inlining procedure: k2468 
o|contracted procedure: k2564 
o|contracted procedure: k2569 
o|inlining procedure: k2594 
o|inlining procedure: k2594 
o|inlining procedure: k2705 
o|inlining procedure: k2705 
o|inlining procedure: k2816 
o|inlining procedure: k2816 
o|inlining procedure: k4344 
o|inlining procedure: k4344 
o|removed binding forms: 123 
o|substituted constant variable: r1732 
o|substituted constant variable: r17534769 
o|substituted constant variable: r1848 
o|substituted constant variable: r18694773 
o|substituted constant variable: r1964 
o|substituted constant variable: r19854777 
o|substituted constant variable: r2081 
o|substituted constant variable: r2086 
o|substituted constant variable: r21114781 
o|substituted constant variable: r2206 
o|substituted constant variable: r22274785 
o|substituted constant variable: r2322 
o|substituted constant variable: r23434789 
o|substituted constant variable: r2439 
o|substituted constant variable: r2444 
o|substituted constant variable: r24694793 
o|substituted constant variable: r2565 
o|substituted constant variable: r2570 
o|substituted constant variable: r25954797 
o|substituted constant variable: r27064801 
o|substituted constant variable: r28174805 
o|replaced variables: 10 
o|removed binding forms: 14 
o|removed conditional forms: 10 
o|removed binding forms: 31 
o|simplifications: ((if . 96) (let . 47) (##core#call . 313)) 
o|  call simplifications:
o|    scheme#list
o|    scheme#eof-object?
o|    chicken.fixnum#fx=	2
o|    chicken.fixnum#fx<=	5
o|    chicken.fixnum#fx*	2
o|    ##sys#list	11
o|    scheme#cadr
o|    scheme#caddr
o|    scheme#symbol?
o|    scheme#memq
o|    ##sys#check-byte-vector	2
o|    scheme#eq?	6
o|    ##sys#size	5
o|    ##sys#slot	10
o|    ##sys#check-structure	15
o|    chicken.fixnum#fx>=	10
o|    chicken.fixnum#fx+	16
o|    scheme#cons	10
o|    srfi-4#f64vector-set!
o|    srfi-4#f32vector-set!
o|    srfi-4#s64vector-set!
o|    srfi-4#u64vector-set!
o|    srfi-4#s32vector-set!
o|    srfi-4#u32vector-set!
o|    srfi-4#s16vector-set!
o|    srfi-4#u16vector-set!
o|    srfi-4#s8vector-set!
o|    ##sys#check-list	10
o|    srfi-4#u8vector-set!
o|    chicken.fixnum#fx-	5
o|    scheme#car	37
o|    scheme#null?	74
o|    scheme#cdr	37
o|    ##sys#make-structure	14
o|    scheme#not	11
o|    chicken.fixnum#fx>	8
o|    chicken.fixnum#fx<	5
o|    chicken.fixnum#fx*?
o|    ##sys#foreign-unsigned-ranged-integer-argument
o|contracted procedure: k1637 
o|contracted procedure: k1623 
o|contracted procedure: k1661 
o|contracted procedure: k1792 
o|contracted procedure: k1685 
o|contracted procedure: k1786 
o|contracted procedure: k1688 
o|contracted procedure: k1780 
o|contracted procedure: k1691 
o|contracted procedure: k1774 
o|contracted procedure: k1694 
o|contracted procedure: k1768 
o|contracted procedure: k1697 
o|contracted procedure: k1762 
o|contracted procedure: k1700 
o|contracted procedure: k1703 
o|contracted procedure: k1712 
o|contracted procedure: k1723 
o|contracted procedure: k1908 
o|contracted procedure: k1801 
o|contracted procedure: k1902 
o|contracted procedure: k1804 
o|contracted procedure: k1896 
o|contracted procedure: k1807 
o|contracted procedure: k1890 
o|contracted procedure: k1810 
o|contracted procedure: k1884 
o|contracted procedure: k1813 
o|contracted procedure: k1878 
o|contracted procedure: k1816 
o|contracted procedure: k1819 
o|contracted procedure: k1828 
o|contracted procedure: k1839 
o|contracted procedure: k2024 
o|contracted procedure: k1917 
o|contracted procedure: k2018 
o|contracted procedure: k1920 
o|contracted procedure: k2012 
o|contracted procedure: k1923 
o|contracted procedure: k2006 
o|contracted procedure: k1926 
o|contracted procedure: k2000 
o|contracted procedure: k1929 
o|contracted procedure: k1994 
o|contracted procedure: k1932 
o|contracted procedure: k1935 
o|contracted procedure: k1944 
o|contracted procedure: k1955 
o|contracted procedure: k2150 
o|contracted procedure: k2033 
o|contracted procedure: k2144 
o|contracted procedure: k2036 
o|contracted procedure: k2138 
o|contracted procedure: k2039 
o|contracted procedure: k2132 
o|contracted procedure: k2042 
o|contracted procedure: k2126 
o|contracted procedure: k2045 
o|contracted procedure: k2120 
o|contracted procedure: k2048 
o|contracted procedure: k2051 
o|contracted procedure: k2060 
o|contracted procedure: k2091 
o|contracted procedure: k2071 
o|contracted procedure: k2266 
o|contracted procedure: k2159 
o|contracted procedure: k2260 
o|contracted procedure: k2162 
o|contracted procedure: k2254 
o|contracted procedure: k2165 
o|contracted procedure: k2248 
o|contracted procedure: k2168 
o|contracted procedure: k2242 
o|contracted procedure: k2171 
o|contracted procedure: k2236 
o|contracted procedure: k2174 
o|contracted procedure: k2177 
o|contracted procedure: k2186 
o|contracted procedure: k2197 
o|contracted procedure: k2382 
o|contracted procedure: k2275 
o|contracted procedure: k2376 
o|contracted procedure: k2278 
o|contracted procedure: k2370 
o|contracted procedure: k2281 
o|contracted procedure: k2364 
o|contracted procedure: k2284 
o|contracted procedure: k2358 
o|contracted procedure: k2287 
o|contracted procedure: k2352 
o|contracted procedure: k2290 
o|contracted procedure: k2293 
o|contracted procedure: k2302 
o|contracted procedure: k2313 
o|contracted procedure: k2508 
o|contracted procedure: k2391 
o|contracted procedure: k2502 
o|contracted procedure: k2394 
o|contracted procedure: k2496 
o|contracted procedure: k2397 
o|contracted procedure: k2490 
o|contracted procedure: k2400 
o|contracted procedure: k2484 
o|contracted procedure: k2403 
o|contracted procedure: k2478 
o|contracted procedure: k2406 
o|contracted procedure: k2409 
o|contracted procedure: k2418 
o|contracted procedure: k2449 
o|contracted procedure: k2429 
o|contracted procedure: k2634 
o|contracted procedure: k2517 
o|contracted procedure: k2628 
o|contracted procedure: k2520 
o|contracted procedure: k2622 
o|contracted procedure: k2523 
o|contracted procedure: k2616 
o|contracted procedure: k2526 
o|contracted procedure: k2610 
o|contracted procedure: k2529 
o|contracted procedure: k2604 
o|contracted procedure: k2532 
o|contracted procedure: k2535 
o|contracted procedure: k2544 
o|contracted procedure: k2575 
o|contracted procedure: k2555 
o|contracted procedure: k2745 
o|contracted procedure: k2643 
o|contracted procedure: k2739 
o|contracted procedure: k2646 
o|contracted procedure: k2733 
o|contracted procedure: k2649 
o|contracted procedure: k2727 
o|contracted procedure: k2652 
o|contracted procedure: k2721 
o|contracted procedure: k2655 
o|contracted procedure: k2715 
o|contracted procedure: k2658 
o|contracted procedure: k2661 
o|contracted procedure: k2670 
o|contracted procedure: k2678 
o|contracted procedure: k2856 
o|contracted procedure: k2754 
o|contracted procedure: k2850 
o|contracted procedure: k2757 
o|contracted procedure: k2844 
o|contracted procedure: k2760 
o|contracted procedure: k2838 
o|contracted procedure: k2763 
o|contracted procedure: k2832 
o|contracted procedure: k2766 
o|contracted procedure: k2826 
o|contracted procedure: k2769 
o|contracted procedure: k2772 
o|contracted procedure: k2781 
o|contracted procedure: k2789 
o|contracted procedure: k2865 
o|contracted procedure: k2888 
o|inlining procedure: k2880 
o|contracted procedure: k2901 
o|contracted procedure: k2924 
o|inlining procedure: k2916 
o|contracted procedure: k2937 
o|contracted procedure: k2960 
o|inlining procedure: k2952 
o|contracted procedure: k2973 
o|contracted procedure: k2996 
o|inlining procedure: k2988 
o|contracted procedure: k3009 
o|contracted procedure: k3032 
o|inlining procedure: k3024 
o|contracted procedure: k3045 
o|contracted procedure: k3068 
o|inlining procedure: k3060 
o|contracted procedure: k3081 
o|contracted procedure: k3104 
o|inlining procedure: k3096 
o|contracted procedure: k3117 
o|contracted procedure: k3140 
o|inlining procedure: k3132 
o|contracted procedure: k3153 
o|contracted procedure: k3176 
o|inlining procedure: k3168 
o|contracted procedure: k3189 
o|contracted procedure: k3212 
o|inlining procedure: k3204 
o|contracted procedure: k3285 
o|contracted procedure: k3297 
o|contracted procedure: k3309 
o|contracted procedure: k3315 
o|contracted procedure: k3327 
o|contracted procedure: k3339 
o|contracted procedure: k3345 
o|contracted procedure: k3357 
o|contracted procedure: k3369 
o|contracted procedure: k3375 
o|contracted procedure: k3387 
o|contracted procedure: k3399 
o|contracted procedure: k3405 
o|contracted procedure: k3417 
o|contracted procedure: k3428 
o|contracted procedure: k3434 
o|contracted procedure: k3446 
o|contracted procedure: k3457 
o|contracted procedure: k3463 
o|contracted procedure: k3475 
o|contracted procedure: k3486 
o|contracted procedure: k3492 
o|contracted procedure: k3504 
o|contracted procedure: k3515 
o|contracted procedure: k3521 
o|contracted procedure: k3533 
o|contracted procedure: k3544 
o|contracted procedure: k3550 
o|contracted procedure: k3562 
o|contracted procedure: k3573 
o|contracted procedure: k3612 
o|contracted procedure: k3623 
o|contracted procedure: k3626 
o|contracted procedure: k3633 
o|contracted procedure: k3641 
o|contracted procedure: k3644 
o|contracted procedure: k3650 
o|contracted procedure: k3653 
o|contracted procedure: k3671 
o|contracted procedure: k3674 
o|contracted procedure: k3683 
o|contracted procedure: k3686 
o|contracted procedure: k3861 
o|contracted procedure: k3917 
o|contracted procedure: k3874 
o|contracted procedure: k3880 
o|contracted procedure: k3883 
o|contracted procedure: k3886 
o|contracted procedure: k3905 
o|contracted procedure: k3894 
o|contracted procedure: k3958 
o|contracted procedure: k3962 
o|contracted procedure: k3966 
o|contracted procedure: k3970 
o|contracted procedure: k3974 
o|contracted procedure: k3978 
o|contracted procedure: k3982 
o|contracted procedure: k3986 
o|contracted procedure: k3990 
o|contracted procedure: k3994 
o|contracted procedure: k3928 
o|contracted procedure: k3944 
o|contracted procedure: k3951 
o|contracted procedure: k4000 
o|contracted procedure: k4003 
o|contracted procedure: k4006 
o|contracted procedure: k4071 
o|contracted procedure: k4057 
o|contracted procedure: k4063 
o|contracted procedure: k4067 
o|contracted procedure: k4075 
o|contracted procedure: k4048 
o|contracted procedure: k4041 
o|contracted procedure: k4079 
o|contracted procedure: k4024 
o|contracted procedure: k4017 
o|contracted procedure: k4305 
o|contracted procedure: k4145 
o|contracted procedure: k4299 
o|contracted procedure: k4148 
o|contracted procedure: k4293 
o|contracted procedure: k4151 
o|contracted procedure: k4287 
o|contracted procedure: k4154 
o|contracted procedure: k4281 
o|contracted procedure: k4157 
o|contracted procedure: k4275 
o|contracted procedure: k4160 
o|contracted procedure: k4163 
o|contracted procedure: k4236 
o|contracted procedure: k4196 
o|inlining procedure: k4203 
o|inlining procedure: k4203 
o|contracted procedure: k4223 
o|contracted procedure: k4226 
o|contracted procedure: k4264 
o|contracted procedure: k4254 
o|contracted procedure: k4247 
o|contracted procedure: k4268 
o|contracted procedure: k4184 
o|contracted procedure: k4177 
o|contracted procedure: k4385 
o|contracted procedure: k4314 
o|contracted procedure: k4379 
o|contracted procedure: k4317 
o|contracted procedure: k4373 
o|contracted procedure: k4320 
o|contracted procedure: k4367 
o|contracted procedure: k4323 
o|contracted procedure: k4332 
o|contracted procedure: k4338 
o|contracted procedure: k4341 
o|contracted procedure: k4354 
o|contracted procedure: k4361 
o|contracted procedure: k4445 
o|contracted procedure: k4394 
o|contracted procedure: k4439 
o|contracted procedure: k4397 
o|contracted procedure: k4433 
o|contracted procedure: k4400 
o|contracted procedure: k4427 
o|contracted procedure: k4403 
o|contracted procedure: k4418 
o|simplifications: ((if . 1) (let . 43)) 
o|removed binding forms: 297 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest250252 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest250252 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest250252 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest250252 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest284286 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest284286 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest284286 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest284286 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest318320 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest318320 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest318320 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest318320 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest352354 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest352354 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest352354 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest352354 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest386388 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest386388 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest386388 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest386388 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest420422 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest420422 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest420422 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest420422 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest454456 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest454456 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest454456 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest454456 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest488490 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest488490 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest488490 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest488490 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest522524 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest522524 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest522524 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest522524 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest558560 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest558560 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest558560 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest558560 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest10611063 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest10611063 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest10611063 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest10611063 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest11151118 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest11151118 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest11151118 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest11151118 0 
o|contracted procedure: k4350 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest11411142 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest11411142 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest11411142 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest11411142 0 
o|inlining procedure: "(srfi-4.scm:577) srfi-4#pack" 
o|inlining procedure: "(srfi-4.scm:576) srfi-4#pack" 
o|inlining procedure: "(srfi-4.scm:575) srfi-4#pack" 
o|inlining procedure: "(srfi-4.scm:574) srfi-4#pack" 
o|inlining procedure: "(srfi-4.scm:573) srfi-4#pack" 
o|inlining procedure: "(srfi-4.scm:572) srfi-4#pack" 
o|inlining procedure: "(srfi-4.scm:571) srfi-4#pack" 
o|inlining procedure: "(srfi-4.scm:570) srfi-4#pack" 
o|inlining procedure: "(srfi-4.scm:569) srfi-4#pack" 
o|inlining procedure: "(srfi-4.scm:568) srfi-4#pack" 
o|simplifications: ((let . 2)) 
o|removed binding forms: 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1689 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r1689 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1689 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r1689 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1805 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r1805 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1805 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r1805 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1921 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r1921 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1921 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r1921 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2037 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r2037 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2037 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r2037 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2163 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r2163 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2163 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r2163 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2279 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r2279 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2279 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r2279 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2395 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r2395 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2395 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r2395 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2521 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r2521 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2521 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r2521 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2647 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r2647 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2647 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r2647 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2758 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r2758 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2758 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r2758 1 
o|removed side-effect free assignment to unused variable: srfi-4#pack 
(o x)|known list op on rest arg sublist: ##core#rest-null? r4149 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r4149 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r4149 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r4149 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r4318 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r4318 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r4318 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r4318 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r4398 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r4398 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r4398 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r4398 1 
o|substituted constant variable: tag8725221 
o|substituted constant variable: loc8735222 
o|substituted constant variable: tag8725228 
o|substituted constant variable: loc8735229 
o|substituted constant variable: tag8725235 
o|substituted constant variable: loc8735236 
o|substituted constant variable: tag8725242 
o|substituted constant variable: loc8735243 
o|substituted constant variable: tag8725249 
o|substituted constant variable: loc8735250 
o|substituted constant variable: tag8725256 
o|substituted constant variable: loc8735257 
o|substituted constant variable: tag8725263 
o|substituted constant variable: loc8735264 
o|substituted constant variable: tag8725270 
o|substituted constant variable: loc8735271 
o|substituted constant variable: tag8725277 
o|substituted constant variable: loc8735278 
o|substituted constant variable: tag8725284 
o|substituted constant variable: loc8735285 
o|replaced variables: 10 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1695 2 
(o x)|known list op on rest arg sublist: ##core#rest-car r1695 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1695 2 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r1695 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1811 2 
(o x)|known list op on rest arg sublist: ##core#rest-car r1811 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1811 2 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r1811 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1927 2 
(o x)|known list op on rest arg sublist: ##core#rest-car r1927 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1927 2 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r1927 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2043 2 
(o x)|known list op on rest arg sublist: ##core#rest-car r2043 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2043 2 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r2043 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2169 2 
(o x)|known list op on rest arg sublist: ##core#rest-car r2169 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2169 2 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r2169 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2285 2 
(o x)|known list op on rest arg sublist: ##core#rest-car r2285 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2285 2 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r2285 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2401 2 
(o x)|known list op on rest arg sublist: ##core#rest-car r2401 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2401 2 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r2401 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2527 2 
(o x)|known list op on rest arg sublist: ##core#rest-car r2527 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2527 2 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r2527 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2653 2 
(o x)|known list op on rest arg sublist: ##core#rest-car r2653 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2653 2 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r2653 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2764 2 
(o x)|known list op on rest arg sublist: ##core#rest-car r2764 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2764 2 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r2764 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r4155 2 
(o x)|known list op on rest arg sublist: ##core#rest-car r4155 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r4155 2 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r4155 2 
o|removed binding forms: 46 
o|contracted procedure: k3701 
o|contracted procedure: k3705 
o|contracted procedure: k3709 
o|contracted procedure: k3713 
o|contracted procedure: k3717 
o|contracted procedure: k3721 
o|contracted procedure: k3725 
o|contracted procedure: k3729 
o|contracted procedure: k3733 
o|contracted procedure: k3737 
o|removed binding forms: 32 
o|direct leaf routine/allocation: doloop274275 0 
o|direct leaf routine/allocation: doloop308309 0 
o|direct leaf routine/allocation: doloop342343 0 
o|direct leaf routine/allocation: doloop376377 0 
o|direct leaf routine/allocation: doloop410411 0 
o|direct leaf routine/allocation: doloop444445 0 
o|direct leaf routine/allocation: doloop478479 0 
o|direct leaf routine/allocation: doloop512513 0 
o|direct leaf routine/allocation: doloop547548 0 
o|direct leaf routine/allocation: doloop583584 0 
o|converted assignments to bindings: (doloop274275) 
o|converted assignments to bindings: (doloop308309) 
o|converted assignments to bindings: (doloop342343) 
o|converted assignments to bindings: (doloop376377) 
o|converted assignments to bindings: (doloop410411) 
o|converted assignments to bindings: (doloop444445) 
o|converted assignments to bindings: (doloop478479) 
o|converted assignments to bindings: (doloop512513) 
o|converted assignments to bindings: (doloop547548) 
o|converted assignments to bindings: (doloop583584) 
o|simplifications: ((let . 10)) 
o|customizable procedures: (srfi-4#pack-copy srfi-4#unpack srfi-4#unpack-copy k4206 srfi-4#subnvector g961962 loop846 loop839 loop832 loop825 loop818 loop811 loop804 loop797 loop790 loop783 doloop735736 doloop722723 doloop709710 doloop696697 doloop683684 doloop670671 doloop657658 doloop644645 doloop631632 doloop618619 k2799 k2688 alloc231) 
o|calls to known targets: 146 
o|identified direct recursive calls: f_1743 1 
o|unused rest argument: rest250252 f_1683 
o|identified direct recursive calls: f_1859 1 
o|unused rest argument: rest284286 f_1799 
o|identified direct recursive calls: f_1975 1 
o|unused rest argument: rest318320 f_1915 
o|identified direct recursive calls: f_2101 1 
o|unused rest argument: rest352354 f_2031 
o|identified direct recursive calls: f_2217 1 
o|unused rest argument: rest386388 f_2157 
o|identified direct recursive calls: f_2333 1 
o|unused rest argument: rest420422 f_2273 
o|identified direct recursive calls: f_2459 1 
o|unused rest argument: rest454456 f_2389 
o|identified direct recursive calls: f_2585 1 
o|unused rest argument: rest488490 f_2515 
o|identified direct recursive calls: f_2695 1 
o|unused rest argument: rest522524 f_2641 
o|identified direct recursive calls: f_2806 1 
o|unused rest argument: rest558560 f_2752 
o|identified direct recursive calls: f_2875 1 
o|identified direct recursive calls: f_2911 1 
o|identified direct recursive calls: f_2947 1 
o|identified direct recursive calls: f_2983 1 
o|identified direct recursive calls: f_3019 1 
o|identified direct recursive calls: f_3055 1 
o|identified direct recursive calls: f_3091 1 
o|identified direct recursive calls: f_3127 1 
o|identified direct recursive calls: f_3163 1 
o|identified direct recursive calls: f_3199 1 
o|identified direct recursive calls: f_3292 1 
o|identified direct recursive calls: f_3322 1 
o|identified direct recursive calls: f_3352 1 
o|identified direct recursive calls: f_3382 1 
o|identified direct recursive calls: f_3412 1 
o|identified direct recursive calls: f_3441 1 
o|identified direct recursive calls: f_3470 1 
o|identified direct recursive calls: f_3499 1 
o|identified direct recursive calls: f_3528 1 
o|identified direct recursive calls: f_3557 1 
o|unused rest argument: rest10611063 f_4143 
o|unused rest argument: rest11151118 f_4312 
o|unused rest argument: rest11411142 f_4392 
o|fast box initializations: 20 
o|fast global references: 40 
o|fast global assignments: 4 
o|dropping unused closure argument: f_1629 
o|dropping unused closure argument: f_3619 
o|dropping unused closure argument: f_3637 
o|dropping unused closure argument: f_3667 
o|dropping unused closure argument: f_3998 
*/
/* end of file */
