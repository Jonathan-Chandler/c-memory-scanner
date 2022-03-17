/* Generated from lolevel.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.3.0rc4 ((HEAD detached at 5.3.0rc4)) (rev b6cbb1ba)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: lolevel.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file lolevel.c -emit-import-library chicken.locative -emit-import-library chicken.memory -emit-import-library chicken.memory.representation
   unit: lolevel
   uses: library
*/
#include "chicken.h"

#ifndef C_NONUNIX
# include <sys/mman.h>
#endif

#define C_memmove_o(to, from, n, toff, foff) C_memmove((char *)(to) + (toff), (char *)(from) + (foff), (n))

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[156];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,27),40,35,35,115,121,115,35,99,104,101,99,107,45,98,108,111,99,107,32,120,32,46,32,108,111,99,41,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,108,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,32),40,35,35,115,121,115,35,99,104,101,99,107,45,98,101,99,111,109,101,45,97,108,105,115,116,32,120,32,108,111,99,41};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,39),40,35,35,115,121,115,35,99,104,101,99,107,45,103,101,110,101,114,105,99,45,115,116,114,117,99,116,117,114,101,32,120,32,46,32,108,111,99,41,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,36),40,35,35,115,121,115,35,99,104,101,99,107,45,103,101,110,101,114,105,99,45,118,101,99,116,111,114,32,120,32,46,32,108,111,99,41,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,29),40,35,35,115,121,115,35,99,104,101,99,107,45,112,111,105,110,116,101,114,32,120,32,46,32,108,111,99,41,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,10),40,110,111,115,105,122,101,114,114,41,0,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,13),40,115,105,122,101,114,114,32,97,114,103,115,41,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,20),40,99,104,101,99,107,110,49,32,110,32,110,109,97,120,32,111,102,102,41,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,32),40,99,104,101,99,107,110,50,32,110,32,110,109,97,120,32,110,109,97,120,50,32,111,102,102,49,32,111,102,102,50,41};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,14),40,109,111,118,101,32,102,114,111,109,32,116,111,41,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,109,111,118,101,45,109,101,109,111,114,121,33,32,102,114,111,109,32,116,111,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,32),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,97,108,108,111,99,97,116,101,32,105,110,116,51,49,57,41};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,34),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,102,114,101,101,32,99,45,112,111,105,110,116,101,114,51,50,53,41,0,0,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,27),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,63,32,120,41,0,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,32),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,108,105,107,101,63,32,120,41};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,97,100,100,114,101,115,115,45,62,112,111,105,110,116,101,114,32,97,100,100,114,41,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,62,97,100,100,114,101,115,115,32,112,116,114,41,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,34),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,111,98,106,101,99,116,45,62,112,111,105,110,116,101,114,32,120,41,0,0,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,62,111,98,106,101,99,116,32,112,116,114,41,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,32),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,61,63,32,112,49,32,112,50,41};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,39),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,43,32,112,116,114,51,54,55,32,111,102,102,51,54,56,41,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,32),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,97,108,105,103,110,45,116,111,45,119,111,114,100,32,120,41};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,116,97,103,45,112,111,105,110,116,101,114,32,112,116,114,32,116,97,103,41,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,116,97,103,103,101,100,45,112,111,105,110,116,101,114,63,32,120,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,30),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,116,97,103,32,120,41,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,117,56,45,115,101,116,33,32,112,32,110,41,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,115,56,45,115,101,116,33,32,112,32,110,41,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,117,49,54,45,115,101,116,33,32,112,32,110,41,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,115,49,54,45,115,101,116,33,32,112,32,110,41,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,117,51,50,45,115,101,116,33,32,112,32,110,41,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,115,51,50,45,115,101,116,33,32,112,32,110,41,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,117,54,52,45,115,101,116,33,32,112,32,110,41,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,115,54,52,45,115,101,116,33,32,112,32,110,41,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,102,51,50,45,115,101,116,33,32,112,32,110,41,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,102,54,52,45,115,101,116,33,32,112,32,110,41,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,52,57,57,41,0,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,109,97,107,101,45,112,111,105,110,116,101,114,45,118,101,99,116,111,114,32,110,32,46,32,114,101,115,116,41,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,34),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,118,101,99,116,111,114,63,32,120,41,0,0,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,18),40,100,111,108,111,111,112,53,49,52,32,112,116,114,115,32,105,41,0,0,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,118,101,99,116,111,114,32,46,32,112,116,114,115,41,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,53,50,55,41,0,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,118,101,99,116,111,114,45,102,105,108,108,33,32,112,118,32,112,116,114,41,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,118,101,99,116,111,114,45,115,101,116,33,32,112,118,32,105,32,112,116,114,41,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,118,101,99,116,111,114,45,108,101,110,103,116,104,32,112,118,41,0,0,0,0,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,13),40,100,111,108,111,111,112,54,51,54,32,105,41,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,8),40,99,111,112,121,32,120,41};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,46,114,101,112,114,101,115,101,110,116,97,116,105,111,110,35,111,98,106,101,99,116,45,99,111,112,121,32,120,41,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,9),40,97,50,49,52,52,32,120,41,0,0,0,0,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,11),40,97,50,49,54,48,32,120,32,105,41,0,0,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,58),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,46,114,101,112,114,101,115,101,110,116,97,116,105,111,110,35,101,120,116,101,110,100,45,112,114,111,99,101,100,117,114,101,32,112,114,111,99,32,100,97,116,97,41,0,0,0,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,9),40,97,50,49,56,55,32,120,41,0,0,0,0,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,53),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,46,114,101,112,114,101,115,101,110,116,97,116,105,111,110,35,101,120,116,101,110,100,101,100,45,112,114,111,99,101,100,117,114,101,63,32,120,41,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,9),40,97,50,50,50,48,32,120,41,0,0,0,0,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,48),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,46,114,101,112,114,101,115,101,110,116,97,116,105,111,110,35,112,114,111,99,101,100,117,114,101,45,100,97,116,97,32,120,41};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,58),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,46,114,101,112,114,101,115,101,110,116,97,116,105,111,110,35,115,101,116,45,112,114,111,99,101,100,117,114,101,45,100,97,116,97,33,32,112,114,111,99,32,120,41,0,0,0,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,46),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,46,114,101,112,114,101,115,101,110,116,97,116,105,111,110,35,118,101,99,116,111,114,45,108,105,107,101,63,32,120,41,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,46,114,101,112,114,101,115,101,110,116,97,116,105,111,110,35,110,117,109,98,101,114,45,111,102,45,115,108,111,116,115,32,120,41,0,0,0,0,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,46,114,101,112,114,101,115,101,110,116,97,116,105,111,110,35,110,117,109,98,101,114,45,111,102,45,98,121,116,101,115,32,120,41,0,0,0,0,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,64),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,46,114,101,112,114,101,115,101,110,116,97,116,105,111,110,35,109,97,107,101,45,114,101,99,111,114,100,45,105,110,115,116,97,110,99,101,32,116,121,112,101,32,46,32,97,114,103,115,41};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,57),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,46,114,101,112,114,101,115,101,110,116,97,116,105,111,110,35,114,101,99,111,114,100,45,105,110,115,116,97,110,99,101,63,32,120,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,54),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,46,114,101,112,114,101,115,101,110,116,97,116,105,111,110,35,114,101,99,111,114,100,45,105,110,115,116,97,110,99,101,45,116,121,112,101,32,120,41,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,56),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,46,114,101,112,114,101,115,101,110,116,97,116,105,111,110,35,114,101,99,111,114,100,45,105,110,115,116,97,110,99,101,45,108,101,110,103,116,104,32,120,41};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,63),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,46,114,101,112,114,101,115,101,110,116,97,116,105,111,110,35,114,101,99,111,114,100,45,105,110,115,116,97,110,99,101,45,115,108,111,116,45,115,101,116,33,32,120,32,105,32,121,41,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,55,52,50,41,0,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,48),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,46,114,101,112,114,101,115,101,110,116,97,116,105,111,110,35,114,101,99,111,114,100,45,62,118,101,99,116,111,114,32,120,41};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,51),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,46,114,101,112,114,101,115,101,110,116,97,116,105,111,110,35,111,98,106,101,99,116,45,98,101,99,111,109,101,33,32,97,108,115,116,41,0,0,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,58),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,46,114,101,112,114,101,115,101,110,116,97,116,105,111,110,35,109,117,116,97,116,101,45,112,114,111,99,101,100,117,114,101,33,32,111,108,100,32,112,114,111,99,41,0,0,0,0,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,108,111,99,97,116,105,118,101,35,109,97,107,101,45,108,111,99,97,116,105,118,101,32,111,98,106,32,46,32,105,110,100,101,120,41,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,108,111,99,97,116,105,118,101,35,109,97,107,101,45,119,101,97,107,45,108,111,99,97,116,105,118,101,32,111,98,106,32,46,32,105,110,100,101,120,41,0,0,0,0,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,108,111,99,97,116,105,118,101,35,108,111,99,97,116,105,118,101,45,115,101,116,33,32,120,32,121,41,0,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,108,111,99,97,116,105,118,101,35,108,111,99,97,116,105,118,101,45,62,111,98,106,101,99,116,32,120,41,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,30),40,99,104,105,99,107,101,110,46,108,111,99,97,116,105,118,101,35,108,111,99,97,116,105,118,101,63,32,120,41,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,11),40,97,50,53,51,55,32,108,111,99,41,0,0,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,11),40,97,50,53,52,48,32,120,32,105,41,0,0,0,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,12),40,97,50,53,54,52,32,112,118,32,105,41,0,0,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,9),40,97,50,53,56,52,32,112,41,0,0,0,0,0,0,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,9),40,97,50,53,56,55,32,112,41,0,0,0,0,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,9),40,97,50,53,57,48,32,112,41,0,0,0,0,0,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,9),40,97,50,53,57,51,32,112,41,0,0,0,0,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,9),40,97,50,53,57,54,32,112,41,0,0,0,0,0,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,9),40,97,50,53,57,57,32,112,41,0,0,0,0,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,9),40,97,50,54,48,50,32,112,41,0,0,0,0,0,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,9),40,97,50,54,48,53,32,112,41,0,0,0,0,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,9),40,97,50,54,48,56,32,112,41,0,0,0,0,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,9),40,97,50,54,49,49,32,112,41,0,0,0,0,0,0,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub546(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word buf=(C_word )(C_a0);
unsigned int i=(unsigned int )C_unfix(C_a1);
void * ptr=(void * )C_c_pointer_or_null(C_a2);
*((void **)C_data_pointer(buf) + i) = ptr;
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mpointer_or_false(&C_a,(void*)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub537(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word buf=(C_word )(C_a0);
unsigned int i=(unsigned int )C_unfix(C_a1);
C_return(*((void **)C_data_pointer(buf) + i));
C_ret:
#undef return

return C_r;}

/* from k1857 */
C_regparm static C_word C_fcall stub494(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_wordstobytes(t0));
return C_r;}

/* from k1658 */
C_regparm static C_word C_fcall stub380(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_num_to_int(C_a0);
C_r=C_int_to_num(&C_a,C_align(t0));
return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub369(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * ptr=(void * )C_c_pointer_or_null(C_a0);
int off=(int )C_num_to_int(C_a1);
C_return((unsigned char *)ptr + off);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub354(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word x=(C_word )(C_a0);
C_return((void *)x);
C_ret:
#undef return

return C_r;}

/* from k1570 */
C_regparm static C_word C_fcall stub326(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
C_free(t0);
return C_r;}

/* from k1563 */
C_regparm static C_word C_fcall stub320(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer_or_false(&C_a,(void*)C_malloc(t0));
return C_r;}

/* from k1202 */
C_regparm static C_word C_fcall stub199(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_data_pointer_or_null(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
int t4=(int )C_unfix(C_a4);
C_memmove_o(t0,t1,t2,t3,t4);
return C_r;}

/* from k1174 */
C_regparm static C_word C_fcall stub183(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_data_pointer_or_null(C_a0);
void * t1=(void * )C_c_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
int t4=(int )C_unfix(C_a4);
C_memmove_o(t0,t1,t2,t3,t4);
return C_r;}

/* from k1146 */
C_regparm static C_word C_fcall stub167(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
int t4=(int )C_unfix(C_a4);
C_memmove_o(t0,t1,t2,t3,t4);
return C_r;}

/* from k1118 */
C_regparm static C_word C_fcall stub151(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
void * t1=(void * )C_c_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
int t4=(int )C_unfix(C_a4);
C_memmove_o(t0,t1,t2,t3,t4);
return C_r;}

C_noret_decl(f_1002)
static void C_ccall f_1002(C_word c,C_word *av) C_noret;
C_noret_decl(f_1005)
static void C_ccall f_1005(C_word c,C_word *av) C_noret;
C_noret_decl(f_1019)
static void C_ccall f_1019(C_word c,C_word *av) C_noret;
C_noret_decl(f_1044)
static void C_ccall f_1044(C_word c,C_word *av) C_noret;
C_noret_decl(f_1063)
static void C_fcall f_1063(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1076)
static void C_ccall f_1076(C_word c,C_word *av) C_noret;
C_noret_decl(f_1217)
static void C_ccall f_1217(C_word c,C_word *av) C_noret;
C_noret_decl(f_1238)
static void C_fcall f_1238(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1244)
static void C_fcall f_1244(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1250)
static void C_fcall f_1250(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1266)
static void C_fcall f_1266(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_1293)
static void C_ccall f_1293(C_word c,C_word *av) C_noret;
C_noret_decl(f_1296)
static void C_ccall f_1296(C_word c,C_word *av) C_noret;
C_noret_decl(f_1299)
static void C_ccall f_1299(C_word c,C_word *av) C_noret;
C_noret_decl(f_1302)
static void C_ccall f_1302(C_word c,C_word *av) C_noret;
C_noret_decl(f_1307)
static void C_fcall f_1307(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1399)
static void C_ccall f_1399(C_word c,C_word *av) C_noret;
C_noret_decl(f_1408)
static void C_ccall f_1408(C_word c,C_word *av) C_noret;
C_noret_decl(f_1418)
static void C_ccall f_1418(C_word c,C_word *av) C_noret;
C_noret_decl(f_1422)
static void C_ccall f_1422(C_word c,C_word *av) C_noret;
C_noret_decl(f_1441)
static void C_ccall f_1441(C_word c,C_word *av) C_noret;
C_noret_decl(f_1470)
static void C_ccall f_1470(C_word c,C_word *av) C_noret;
C_noret_decl(f_1480)
static void C_ccall f_1480(C_word c,C_word *av) C_noret;
C_noret_decl(f_1490)
static void C_ccall f_1490(C_word c,C_word *av) C_noret;
C_noret_decl(f_1560)
static void C_ccall f_1560(C_word c,C_word *av) C_noret;
C_noret_decl(f_1567)
static void C_ccall f_1567(C_word c,C_word *av) C_noret;
C_noret_decl(f_1577)
static void C_ccall f_1577(C_word c,C_word *av) C_noret;
C_noret_decl(f_1585)
static void C_ccall f_1585(C_word c,C_word *av) C_noret;
C_noret_decl(f_1596)
static void C_ccall f_1596(C_word c,C_word *av) C_noret;
C_noret_decl(f_1600)
static void C_ccall f_1600(C_word c,C_word *av) C_noret;
C_noret_decl(f_1605)
static void C_ccall f_1605(C_word c,C_word *av) C_noret;
C_noret_decl(f_1609)
static void C_ccall f_1609(C_word c,C_word *av) C_noret;
C_noret_decl(f_1614)
static void C_ccall f_1614(C_word c,C_word *av) C_noret;
C_noret_decl(f_1625)
static void C_ccall f_1625(C_word c,C_word *av) C_noret;
C_noret_decl(f_1629)
static void C_ccall f_1629(C_word c,C_word *av) C_noret;
C_noret_decl(f_1631)
static void C_ccall f_1631(C_word c,C_word *av) C_noret;
C_noret_decl(f_1635)
static void C_ccall f_1635(C_word c,C_word *av) C_noret;
C_noret_decl(f_1638)
static void C_ccall f_1638(C_word c,C_word *av) C_noret;
C_noret_decl(f_1640)
static void C_ccall f_1640(C_word c,C_word *av) C_noret;
C_noret_decl(f_1662)
static void C_ccall f_1662(C_word c,C_word *av) C_noret;
C_noret_decl(f_1692)
static void C_ccall f_1692(C_word c,C_word *av) C_noret;
C_noret_decl(f_1697)
static void C_ccall f_1697(C_word c,C_word *av) C_noret;
C_noret_decl(f_1701)
static void C_ccall f_1701(C_word c,C_word *av) C_noret;
C_noret_decl(f_1704)
static void C_ccall f_1704(C_word c,C_word *av) C_noret;
C_noret_decl(f_1718)
static void C_ccall f_1718(C_word c,C_word *av) C_noret;
C_noret_decl(f_1749)
static void C_ccall f_1749(C_word c,C_word *av) C_noret;
C_noret_decl(f_1773)
static void C_ccall f_1773(C_word c,C_word *av) C_noret;
C_noret_decl(f_1776)
static void C_ccall f_1776(C_word c,C_word *av) C_noret;
C_noret_decl(f_1779)
static void C_ccall f_1779(C_word c,C_word *av) C_noret;
C_noret_decl(f_1782)
static void C_ccall f_1782(C_word c,C_word *av) C_noret;
C_noret_decl(f_1785)
static void C_ccall f_1785(C_word c,C_word *av) C_noret;
C_noret_decl(f_1788)
static void C_ccall f_1788(C_word c,C_word *av) C_noret;
C_noret_decl(f_1791)
static void C_ccall f_1791(C_word c,C_word *av) C_noret;
C_noret_decl(f_1794)
static void C_ccall f_1794(C_word c,C_word *av) C_noret;
C_noret_decl(f_1797)
static void C_ccall f_1797(C_word c,C_word *av) C_noret;
C_noret_decl(f_1800)
static void C_ccall f_1800(C_word c,C_word *av) C_noret;
C_noret_decl(f_1805)
static void C_ccall f_1805(C_word c,C_word *av) C_noret;
C_noret_decl(f_1809)
static void C_ccall f_1809(C_word c,C_word *av) C_noret;
C_noret_decl(f_1813)
static void C_ccall f_1813(C_word c,C_word *av) C_noret;
C_noret_decl(f_1817)
static void C_ccall f_1817(C_word c,C_word *av) C_noret;
C_noret_decl(f_1821)
static void C_ccall f_1821(C_word c,C_word *av) C_noret;
C_noret_decl(f_1825)
static void C_ccall f_1825(C_word c,C_word *av) C_noret;
C_noret_decl(f_1829)
static void C_ccall f_1829(C_word c,C_word *av) C_noret;
C_noret_decl(f_1833)
static void C_ccall f_1833(C_word c,C_word *av) C_noret;
C_noret_decl(f_1837)
static void C_ccall f_1837(C_word c,C_word *av) C_noret;
C_noret_decl(f_1841)
static void C_ccall f_1841(C_word c,C_word *av) C_noret;
C_noret_decl(f_1846)
static void C_ccall f_1846(C_word c,C_word *av) C_noret;
C_noret_decl(f_1853)
static void C_ccall f_1853(C_word c,C_word *av) C_noret;
C_noret_decl(f_1865)
static void C_ccall f_1865(C_word c,C_word *av) C_noret;
C_noret_decl(f_1877)
static void C_ccall f_1877(C_word c,C_word *av) C_noret;
C_noret_decl(f_1882)
static C_word C_fcall f_1882(C_word t0,C_word t1);
C_noret_decl(f_1910)
static void C_ccall f_1910(C_word c,C_word *av) C_noret;
C_noret_decl(f_1916)
static void C_ccall f_1916(C_word c,C_word *av) C_noret;
C_noret_decl(f_1921)
static void C_ccall f_1921(C_word c,C_word *av) C_noret;
C_noret_decl(f_1929)
static void C_fcall f_1929(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1942)
static void C_ccall f_1942(C_word c,C_word *av) C_noret;
C_noret_decl(f_1956)
static void C_ccall f_1956(C_word c,C_word *av) C_noret;
C_noret_decl(f_1963)
static void C_ccall f_1963(C_word c,C_word *av) C_noret;
C_noret_decl(f_1974)
static C_word C_fcall f_1974(C_word t0,C_word t1);
C_noret_decl(f_2017)
static void C_ccall f_2017(C_word c,C_word *av) C_noret;
C_noret_decl(f_2024)
static void C_ccall f_2024(C_word c,C_word *av) C_noret;
C_noret_decl(f_2027)
static void C_ccall f_2027(C_word c,C_word *av) C_noret;
C_noret_decl(f_2045)
static void C_ccall f_2045(C_word c,C_word *av) C_noret;
C_noret_decl(f_2047)
static void C_ccall f_2047(C_word c,C_word *av) C_noret;
C_noret_decl(f_2056)
static void C_ccall f_2056(C_word c,C_word *av) C_noret;
C_noret_decl(f_2062)
static void C_fcall f_2062(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2092)
static void C_ccall f_2092(C_word c,C_word *av) C_noret;
C_noret_decl(f_2095)
static void C_ccall f_2095(C_word c,C_word *av) C_noret;
C_noret_decl(f_2104)
static void C_fcall f_2104(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2125)
static void C_ccall f_2125(C_word c,C_word *av) C_noret;
C_noret_decl(f_2136)
static void C_ccall f_2136(C_word c,C_word *av) C_noret;
C_noret_decl(f_2140)
static void C_ccall f_2140(C_word c,C_word *av) C_noret;
C_noret_decl(f_2145)
static void C_ccall f_2145(C_word c,C_word *av) C_noret;
C_noret_decl(f_2161)
static void C_ccall f_2161(C_word c,C_word *av) C_noret;
C_noret_decl(f_2171)
static void C_ccall f_2171(C_word c,C_word *av) C_noret;
C_noret_decl(f_2188)
static void C_ccall f_2188(C_word c,C_word *av) C_noret;
C_noret_decl(f_2205)
static void C_ccall f_2205(C_word c,C_word *av) C_noret;
C_noret_decl(f_2207)
static void C_ccall f_2207(C_word c,C_word *av) C_noret;
C_noret_decl(f_2221)
static void C_ccall f_2221(C_word c,C_word *av) C_noret;
C_noret_decl(f_2238)
static void C_ccall f_2238(C_word c,C_word *av) C_noret;
C_noret_decl(f_2246)
static void C_ccall f_2246(C_word c,C_word *av) C_noret;
C_noret_decl(f_2260)
static void C_ccall f_2260(C_word c,C_word *av) C_noret;
C_noret_decl(f_2262)
static void C_ccall f_2262(C_word c,C_word *av) C_noret;
C_noret_decl(f_2283)
static void C_ccall f_2283(C_word c,C_word *av) C_noret;
C_noret_decl(f_2285)
static void C_ccall f_2285(C_word c,C_word *av) C_noret;
C_noret_decl(f_2289)
static void C_ccall f_2289(C_word c,C_word *av) C_noret;
C_noret_decl(f_2294)
static void C_ccall f_2294(C_word c,C_word *av) C_noret;
C_noret_decl(f_2317)
static void C_ccall f_2317(C_word c,C_word *av) C_noret;
C_noret_decl(f_2326)
static void C_ccall f_2326(C_word c,C_word *av) C_noret;
C_noret_decl(f_2362)
static void C_ccall f_2362(C_word c,C_word *av) C_noret;
C_noret_decl(f_2366)
static void C_ccall f_2366(C_word c,C_word *av) C_noret;
C_noret_decl(f_2371)
static void C_ccall f_2371(C_word c,C_word *av) C_noret;
C_noret_decl(f_2375)
static void C_ccall f_2375(C_word c,C_word *av) C_noret;
C_noret_decl(f_2384)
static void C_ccall f_2384(C_word c,C_word *av) C_noret;
C_noret_decl(f_2388)
static void C_ccall f_2388(C_word c,C_word *av) C_noret;
C_noret_decl(f_2391)
static void C_ccall f_2391(C_word c,C_word *av) C_noret;
C_noret_decl(f_2410)
static void C_ccall f_2410(C_word c,C_word *av) C_noret;
C_noret_decl(f_2412)
static void C_ccall f_2412(C_word c,C_word *av) C_noret;
C_noret_decl(f_2416)
static void C_ccall f_2416(C_word c,C_word *av) C_noret;
C_noret_decl(f_2422)
static void C_ccall f_2422(C_word c,C_word *av) C_noret;
C_noret_decl(f_2427)
static C_word C_fcall f_2427(C_word t0,C_word t1);
C_noret_decl(f_2450)
static void C_ccall f_2450(C_word c,C_word *av) C_noret;
C_noret_decl(f_2454)
static void C_ccall f_2454(C_word c,C_word *av) C_noret;
C_noret_decl(f_2459)
static void C_ccall f_2459(C_word c,C_word *av) C_noret;
C_noret_decl(f_2463)
static void C_ccall f_2463(C_word c,C_word *av) C_noret;
C_noret_decl(f_2466)
static void C_ccall f_2466(C_word c,C_word *av) C_noret;
C_noret_decl(f_2473)
static void C_ccall f_2473(C_word c,C_word *av) C_noret;
C_noret_decl(f_2476)
static void C_ccall f_2476(C_word c,C_word *av) C_noret;
C_noret_decl(f_2488)
static void C_ccall f_2488(C_word c,C_word *av) C_noret;
C_noret_decl(f_2490)
static void C_ccall f_2490(C_word c,C_word *av) C_noret;
C_noret_decl(f_2506)
static void C_ccall f_2506(C_word c,C_word *av) C_noret;
C_noret_decl(f_2522)
static void C_ccall f_2522(C_word c,C_word *av) C_noret;
C_noret_decl(f_2527)
static void C_ccall f_2527(C_word c,C_word *av) C_noret;
C_noret_decl(f_2529)
static void C_ccall f_2529(C_word c,C_word *av) C_noret;
C_noret_decl(f_2532)
static void C_ccall f_2532(C_word c,C_word *av) C_noret;
C_noret_decl(f_2538)
static void C_ccall f_2538(C_word c,C_word *av) C_noret;
C_noret_decl(f_2541)
static void C_ccall f_2541(C_word c,C_word *av) C_noret;
C_noret_decl(f_2545)
static void C_ccall f_2545(C_word c,C_word *av) C_noret;
C_noret_decl(f_2548)
static void C_ccall f_2548(C_word c,C_word *av) C_noret;
C_noret_decl(f_2565)
static void C_ccall f_2565(C_word c,C_word *av) C_noret;
C_noret_decl(f_2572)
static void C_ccall f_2572(C_word c,C_word *av) C_noret;
C_noret_decl(f_2585)
static void C_ccall f_2585(C_word c,C_word *av) C_noret;
C_noret_decl(f_2588)
static void C_ccall f_2588(C_word c,C_word *av) C_noret;
C_noret_decl(f_2591)
static void C_ccall f_2591(C_word c,C_word *av) C_noret;
C_noret_decl(f_2594)
static void C_ccall f_2594(C_word c,C_word *av) C_noret;
C_noret_decl(f_2597)
static void C_ccall f_2597(C_word c,C_word *av) C_noret;
C_noret_decl(f_2600)
static void C_ccall f_2600(C_word c,C_word *av) C_noret;
C_noret_decl(f_2603)
static void C_ccall f_2603(C_word c,C_word *av) C_noret;
C_noret_decl(f_2606)
static void C_ccall f_2606(C_word c,C_word *av) C_noret;
C_noret_decl(f_2609)
static void C_ccall f_2609(C_word c,C_word *av) C_noret;
C_noret_decl(f_2612)
static void C_ccall f_2612(C_word c,C_word *av) C_noret;
C_noret_decl(f_953)
static void C_ccall f_953(C_word c,C_word *av) C_noret;
C_noret_decl(f_955)
static void C_ccall f_955(C_word c,C_word *av) C_noret;
C_noret_decl(f_973)
static void C_ccall f_973(C_word c,C_word *av) C_noret;
C_noret_decl(f_982)
static void C_fcall f_982(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(C_lolevel_toplevel)
C_externexport void C_ccall C_lolevel_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1063)
static void C_ccall trf_1063(C_word c,C_word *av) C_noret;
static void C_ccall trf_1063(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1063(t0,t1);}

C_noret_decl(trf_1238)
static void C_ccall trf_1238(C_word c,C_word *av) C_noret;
static void C_ccall trf_1238(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1238(t0,t1);}

C_noret_decl(trf_1244)
static void C_ccall trf_1244(C_word c,C_word *av) C_noret;
static void C_ccall trf_1244(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1244(t0,t1,t2);}

C_noret_decl(trf_1250)
static void C_ccall trf_1250(C_word c,C_word *av) C_noret;
static void C_ccall trf_1250(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1250(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1266)
static void C_ccall trf_1266(C_word c,C_word *av) C_noret;
static void C_ccall trf_1266(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_1266(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_1307)
static void C_ccall trf_1307(C_word c,C_word *av) C_noret;
static void C_ccall trf_1307(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1307(t0,t1,t2,t3);}

C_noret_decl(trf_1929)
static void C_ccall trf_1929(C_word c,C_word *av) C_noret;
static void C_ccall trf_1929(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1929(t0,t1,t2,t3);}

C_noret_decl(trf_2062)
static void C_ccall trf_2062(C_word c,C_word *av) C_noret;
static void C_ccall trf_2062(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2062(t0,t1,t2);}

C_noret_decl(trf_2104)
static void C_ccall trf_2104(C_word c,C_word *av) C_noret;
static void C_ccall trf_2104(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2104(t0,t1,t2);}

C_noret_decl(trf_982)
static void C_ccall trf_982(C_word c,C_word *av) C_noret;
static void C_ccall trf_982(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_982(t0,t1,t2);}

/* k1000 in loop in ##sys#check-become-alist in k951 */
static void C_ccall f_1002(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_1002,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1005,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:96: ##sys#check-block */
t3=*((C_word*)lf[2]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_u_i_cdr(((C_word*)t0)[5]);
av2[3]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k1003 in k1000 in loop in ##sys#check-become-alist in k951 */
static void C_ccall f_1005(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1005,c,av);}
/* lolevel.scm:97: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_982(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]));}

/* ##sys#check-generic-structure in k951 */
static void C_ccall f_1019(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +0,c,5)))){
C_save_and_reclaim((void*)f_1019,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+0);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=(C_truep(C_blockp(t2))?C_structurep(t2):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_SCHEME_UNDEFINED;
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
if(C_truep(C_i_pairp(t3))){
/* lolevel.scm:105: ##sys#signal-hook */
t5=*((C_word*)lf[5]+1);{
C_word av2[6];
av2[0]=t5;
av2[1]=t1;
av2[2]=lf[6];
av2[3]=C_get_rest_arg(c,3,av,3,t0);
av2[4]=lf[9];
av2[5]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}
else{
/* lolevel.scm:105: ##sys#signal-hook */
t5=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=lf[6];
av2[3]=C_SCHEME_FALSE;
av2[4]=lf[9];
av2[5]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}}}

/* ##sys#check-generic-vector in k951 */
static void C_ccall f_1044(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_1044,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1063,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_blockp(t2))){
t5=C_specialp(t2);
t6=t4;
f_1063(t6,(C_truep(t5)?C_i_not(t5):C_i_not(C_byteblockp(t2))));}
else{
t5=t4;
f_1063(t5,C_SCHEME_FALSE);}}

/* k1061 in ##sys#check-generic-vector in k951 */
static void C_fcall f_1063(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,5)))){
C_save_and_reclaim_args((void *)trf_1063,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
/* lolevel.scm:113: ##sys#signal-hook */
t2=*((C_word*)lf[5]+1);{
C_word av2[6];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[6];
av2[3]=C_u_i_car(((C_word*)t0)[3]);
av2[4]=lf[11];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}
else{
/* lolevel.scm:113: ##sys#signal-hook */
t2=*((C_word*)lf[5]+1);{
C_word av2[6];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[6];
av2[3]=C_SCHEME_FALSE;
av2[4]=lf[11];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}}

/* ##sys#check-pointer in k951 */
static void C_ccall f_1076(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +0,c,5)))){
C_save_and_reclaim((void*)f_1076,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+0);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
if(C_truep(C_i_safe_pointerp(t2))){
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_POINTER_ERROR);
if(C_truep(C_i_pairp(t3))){
/* lolevel.scm:119: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[3]+1));
C_word av2[6];
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t1;
av2[2]=t4;
av2[3]=C_get_rest_arg(c,3,av,3,t0);
av2[4]=lf[13];
av2[5]=t2;
tp(6,av2);}}
else{
/* lolevel.scm:119: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[3]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t1;
av2[2]=t4;
av2[3]=C_SCHEME_FALSE;
av2[4]=lf[13];
av2[5]=t2;
tp(6,av2);}}}}

/* chicken.memory#move-memory! in k951 */
static void C_ccall f_1217(C_word c,C_word *av){
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
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(38,c,7)))){
C_save_and_reclaim((void *)f_1217,c,av);}
a=C_alloc(38);
t4=C_rest_nullp(c,4);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,4,t0));
t6=C_rest_nullp(c,4);
t7=C_rest_nullp(c,5);
t8=(C_truep(t7)?C_fix(0):C_get_rest_arg(c,5,av,4,t0));
t9=C_rest_nullp(c,5);
t10=C_rest_nullp(c,6);
t11=(C_truep(t10)?C_fix(0):C_get_rest_arg(c,6,av,4,t0));
t12=C_rest_nullp(c,6);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_SCHEME_UNDEFINED;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1238,a[2]=t2,a[3]=t3,a[4]=((C_word)li6),tmp=(C_word)a,a+=5,tmp));
t22=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1244,a[2]=t2,a[3]=t3,a[4]=((C_word)li7),tmp=(C_word)a,a+=5,tmp));
t23=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1250,a[2]=t16,a[3]=((C_word)li8),tmp=(C_word)a,a+=4,tmp));
t24=C_set_block_item(t20,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1266,a[2]=t16,a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp));
t25=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1293,a[2]=((C_word*)t0)[2],a[3]=t11,a[4]=t8,a[5]=t5,a[6]=t14,a[7]=t18,a[8]=t20,a[9]=t1,a[10]=t2,a[11]=t3,tmp=(C_word)a,a+=12,tmp);
/* lolevel.scm:158: ##sys#check-block */
t26=*((C_word*)lf[2]+1);{
C_word *av2=av;
av2[0]=t26;
av2[1]=t25;
av2[2]=t2;
av2[3]=lf[17];
((C_proc)(void*)(*((C_word*)t26+1)))(4,av2);}}

/* nosizerr in chicken.memory#move-memory! in k951 */
static void C_fcall f_1238(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,5)))){
C_save_and_reclaim_args((void *)trf_1238,2,t0,t1);}
/* lolevel.scm:143: ##sys#error */
t2=*((C_word*)lf[16]+1);{
C_word av2[6];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[17];
av2[3]=lf[18];
av2[4]=((C_word*)t0)[2];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* sizerr in chicken.memory#move-memory! in k951 */
static void C_fcall f_1244(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,7)))){
C_save_and_reclaim_args((void *)trf_1244,3,t0,t1,t2);}{
C_word av2[8];
av2[0]=0;
av2[1]=t1;
av2[2]=*((C_word*)lf[16]+1);
av2[3]=lf[17];
av2[4]=lf[19];
av2[5]=((C_word*)t0)[2];
av2[6]=((C_word*)t0)[3];
av2[7]=t2;
C_apply(8,av2);}}

/* checkn1 in chicken.memory#move-memory! in k951 */
static void C_fcall f_1250(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_1250,5,t0,t1,t2,t3,t4);}
a=C_alloc(6);
t5=C_fixnum_difference(t3,t4);
if(C_truep(C_fixnum_less_or_equal_p(t2,t5))){
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
/* lolevel.scm:151: sizerr */
t6=((C_word*)((C_word*)t0)[2])[1];
f_1244(t6,t1,C_a_i_list(&a,2,t2,t3));}}

/* checkn2 in chicken.memory#move-memory! in k951 */
static void C_fcall f_1266(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_1266,7,t0,t1,t2,t3,t4,t5,t6);}
a=C_alloc(9);
t7=C_fixnum_difference(t3,t5);
t8=C_fixnum_less_or_equal_p(t2,t7);
t9=(C_truep(t8)?C_fixnum_less_or_equal_p(t2,C_fixnum_difference(t4,t6)):C_SCHEME_FALSE);
if(C_truep(t9)){
t10=t1;{
C_word av2[2];
av2[0]=t10;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
/* lolevel.scm:156: sizerr */
t10=((C_word*)((C_word*)t0)[2])[1];
f_1244(t10,t1,C_a_i_list(&a,3,t2,t3,t4));}}

/* k1291 in chicken.memory#move-memory! in k951 */
static void C_ccall f_1293(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_1293,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1296,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* lolevel.scm:159: ##sys#check-block */
t3=*((C_word*)lf[2]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[11];
av2[3]=lf[17];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k1294 in k1291 in chicken.memory#move-memory! in k951 */
static void C_ccall f_1296(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_1296,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1299,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(C_fixnum_lessp(((C_word*)t0)[4],C_fix(0)))){
/* lolevel.scm:161: ##sys#error */
t3=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[17];
av2[3]=lf[22];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_1299(2,av2);}}}

/* k1297 in k1294 in k1291 in chicken.memory#move-memory! in k951 */
static void C_ccall f_1299(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_1299,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1302,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(C_fixnum_lessp(((C_word*)t0)[3],C_fix(0)))){
/* lolevel.scm:163: ##sys#error */
t3=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[17];
av2[3]=lf[21];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_1302(2,av2);}}}

/* k1300 in k1297 in k1294 in k1291 in chicken.memory#move-memory! in k951 */
static void C_ccall f_1302(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_1302,c,av);}
a=C_alloc(13);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1307,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word)li10),tmp=(C_word)a,a+=11,tmp));
t5=((C_word*)t3)[1];
f_1307(t5,((C_word*)t0)[9],((C_word*)t0)[10],((C_word*)t0)[11]);}

/* move in k1300 in k1297 in k1294 in k1291 in chicken.memory#move-memory! in k951 */
static void C_fcall f_1307(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_1307,4,t0,t1,t2,t3);}
a=C_alloc(10);
if(C_truep(C_structurep(t2))){
t4=C_slot(t2,C_fix(0));
if(C_truep(C_i_memq(t4,((C_word*)t0)[2]))){
/* lolevel.scm:167: move */
t10=t1;
t11=C_slot(t2,C_fix(1));
t12=t3;
t1=t10;
t2=t11;
t3=t12;
goto loop;}
else{
t5=C_fix((C_word)C_BAD_ARGUMENT_TYPE_ERROR);
/* lolevel.scm:133: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[3]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t1;
av2[2]=t5;
av2[3]=lf[17];
av2[4]=t2;
tp(5,av2);}}}
else{
if(C_truep(C_structurep(t3))){
t4=C_slot(t3,C_fix(0));
if(C_truep(C_i_memq(t4,((C_word*)t0)[2]))){
/* lolevel.scm:171: move */
t10=t1;
t11=t2;
t12=C_slot(t3,C_fix(1));
t1=t10;
t2=t11;
t3=t12;
goto loop;}
else{
t5=C_fix((C_word)C_BAD_ARGUMENT_TYPE_ERROR);
/* lolevel.scm:133: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[3]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t1;
av2[2]=t5;
av2[3]=lf[17];
av2[4]=t3;
tp(5,av2);}}}
else{
t4=C_i_safe_pointerp(t2);
t5=(C_truep(t4)?t4:C_locativep(t2));
if(C_truep(t5)){
t6=C_i_safe_pointerp(t3);
t7=(C_truep(t6)?t6:C_locativep(t3));
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1399,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[6])){
t9=t8;{
C_word av2[2];
av2[0]=t9;
av2[1]=((C_word*)t0)[6];
f_1399(2,av2);}}
else{
/* lolevel.scm:175: nosizerr */
t9=((C_word*)((C_word*)t0)[7])[1];
f_1238(t9,t8);}}
else{
t8=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1408,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
/* lolevel.scm:176: ##sys#bytevector? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[20]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[20]+1);
av2[1]=t8;
av2[2]=t3;
tp(3,av2);}}}
else{
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1441,a[2]=t2,a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* lolevel.scm:180: ##sys#bytevector? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[20]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[20]+1);
av2[1]=t6;
av2[2]=t2;
tp(3,av2);}}}}}

/* k1397 in move in k1300 in k1297 in k1294 in k1291 in chicken.memory#move-memory! in k951 */
static void C_ccall f_1399(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1399,c,av);}
t2=(C_truep(((C_word*)t0)[2])?C_i_foreign_pointer_argumentp(((C_word*)t0)[2]):C_SCHEME_FALSE);
t3=(C_truep(((C_word*)t0)[3])?C_i_foreign_pointer_argumentp(((C_word*)t0)[3]):C_SCHEME_FALSE);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=stub151(C_SCHEME_UNDEFINED,t2,t3,C_i_foreign_fixnum_argumentp(t1),C_i_foreign_fixnum_argumentp(((C_word*)t0)[5]),C_i_foreign_fixnum_argumentp(((C_word*)t0)[6]));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k1406 in move in k1300 in k1297 in k1294 in k1291 in chicken.memory#move-memory! in k951 */
static void C_ccall f_1408(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_1408,c,av);}
a=C_alloc(13);
t2=(C_truep(t1)?t1:C_i_stringp(((C_word*)t0)[2]));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1418,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1422,a[2]=((C_word*)t0)[7],a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[8])){
/* lolevel.scm:177: checkn1 */
t5=((C_word*)((C_word*)t0)[7])[1];
f_1250(t5,t3,((C_word*)t0)[8],C_block_size(((C_word*)t0)[2]),((C_word*)t0)[5]);}
else{
/* lolevel.scm:177: nosizerr */
t5=((C_word*)((C_word*)t0)[9])[1];
f_1238(t5,t4);}}
else{
t3=C_fix((C_word)C_BAD_ARGUMENT_TYPE_ERROR);
/* lolevel.scm:133: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[3]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[3]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=t3;
av2[3]=lf[17];
av2[4]=((C_word*)t0)[2];
tp(5,av2);}}}

/* k1416 in k1406 in move in k1300 in k1297 in k1294 in k1291 in chicken.memory#move-memory! in k951 */
static void C_ccall f_1418(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1418,c,av);}
t2=(C_truep(((C_word*)t0)[2])?C_i_foreign_block_argumentp(((C_word*)t0)[2]):C_SCHEME_FALSE);
t3=(C_truep(((C_word*)t0)[3])?C_i_foreign_pointer_argumentp(((C_word*)t0)[3]):C_SCHEME_FALSE);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=stub183(C_SCHEME_UNDEFINED,t2,t3,C_i_foreign_fixnum_argumentp(t1),C_i_foreign_fixnum_argumentp(((C_word*)t0)[5]),C_i_foreign_fixnum_argumentp(((C_word*)t0)[6]));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k1420 in k1406 in move in k1300 in k1297 in k1294 in k1291 in chicken.memory#move-memory! in k951 */
static void C_ccall f_1422(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1422,c,av);}
/* lolevel.scm:177: checkn1 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1250(t2,((C_word*)t0)[3],t1,C_block_size(((C_word*)t0)[4]),((C_word*)t0)[5]);}

/* k1439 in move in k1300 in k1297 in k1294 in k1291 in chicken.memory#move-memory! in k951 */
static void C_ccall f_1441(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1441,c,av);}
a=C_alloc(10);
t2=(C_truep(t1)?t1:C_i_stringp(((C_word*)t0)[2]));
if(C_truep(t2)){
t3=C_block_size(((C_word*)t0)[2]);
t4=C_i_safe_pointerp(((C_word*)t0)[3]);
t5=(C_truep(t4)?t4:C_locativep(((C_word*)t0)[3]));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1470,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[7])){
/* lolevel.scm:183: checkn1 */
t7=((C_word*)((C_word*)t0)[8])[1];
f_1250(t7,t6,((C_word*)t0)[7],t3,((C_word*)t0)[6]);}
else{
/* lolevel.scm:183: checkn1 */
t7=((C_word*)((C_word*)t0)[8])[1];
f_1250(t7,t6,t3,t3,((C_word*)t0)[6]);}}
else{
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1480,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t3,a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* lolevel.scm:184: ##sys#bytevector? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[20]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[20]+1);
av2[1]=t6;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}}
else{
t3=C_fix((C_word)C_BAD_ARGUMENT_TYPE_ERROR);
/* lolevel.scm:133: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[3]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[3]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=t3;
av2[3]=lf[17];
av2[4]=((C_word*)t0)[2];
tp(5,av2);}}}

/* k1468 in k1439 in move in k1300 in k1297 in k1294 in k1291 in chicken.memory#move-memory! in k951 */
static void C_ccall f_1470(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1470,c,av);}
t2=(C_truep(((C_word*)t0)[2])?C_i_foreign_pointer_argumentp(((C_word*)t0)[2]):C_SCHEME_FALSE);
t3=(C_truep(((C_word*)t0)[3])?C_i_foreign_block_argumentp(((C_word*)t0)[3]):C_SCHEME_FALSE);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=stub167(C_SCHEME_UNDEFINED,t2,t3,C_i_foreign_fixnum_argumentp(t1),C_i_foreign_fixnum_argumentp(((C_word*)t0)[5]),C_i_foreign_fixnum_argumentp(((C_word*)t0)[6]));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k1478 in k1439 in move in k1300 in k1297 in k1294 in k1291 in chicken.memory#move-memory! in k951 */
static void C_ccall f_1480(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,6)))){
C_save_and_reclaim((void *)f_1480,c,av);}
a=C_alloc(7);
t2=(C_truep(t1)?t1:C_i_stringp(((C_word*)t0)[2]));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1490,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t4=(C_truep(((C_word*)t0)[7])?((C_word*)t0)[7]:((C_word*)t0)[8]);
/* lolevel.scm:185: checkn2 */
t5=((C_word*)((C_word*)t0)[9])[1];
f_1266(t5,t3,t4,((C_word*)t0)[8],C_block_size(((C_word*)t0)[2]),((C_word*)t0)[6],((C_word*)t0)[5]);}
else{
t3=C_fix((C_word)C_BAD_ARGUMENT_TYPE_ERROR);
/* lolevel.scm:133: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[3]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[3]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=t3;
av2[3]=lf[17];
av2[4]=((C_word*)t0)[2];
tp(5,av2);}}}

/* k1488 in k1478 in k1439 in move in k1300 in k1297 in k1294 in k1291 in chicken.memory#move-memory! in k951 */
static void C_ccall f_1490(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1490,c,av);}
t2=(C_truep(((C_word*)t0)[2])?C_i_foreign_block_argumentp(((C_word*)t0)[2]):C_SCHEME_FALSE);
t3=(C_truep(((C_word*)t0)[3])?C_i_foreign_block_argumentp(((C_word*)t0)[3]):C_SCHEME_FALSE);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=stub199(C_SCHEME_UNDEFINED,t2,t3,C_i_foreign_fixnum_argumentp(t1),C_i_foreign_fixnum_argumentp(((C_word*)t0)[5]),C_i_foreign_fixnum_argumentp(((C_word*)t0)[6]));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.memory#allocate in k951 */
static void C_ccall f_1560(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_1560,c,av);}
a=C_alloc(5);
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=stub320(t3,C_i_foreign_fixnum_argumentp(t2));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.memory#free in k951 */
static void C_ccall f_1567(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1567,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(t2)?stub326(C_SCHEME_UNDEFINED,C_i_foreign_pointer_argumentp(t2)):stub326(C_SCHEME_UNDEFINED,C_SCHEME_FALSE));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.memory#pointer? in k951 */
static void C_ccall f_1577(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1577,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_safe_pointerp(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.memory#pointer-like? in k951 */
static void C_ccall f_1585(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1585,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(C_blockp(t2))?C_specialp(t2):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.memory#address->pointer in k951 */
static void C_ccall f_1596(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1596,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1600,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:203: ##sys#check-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[29]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[30];
tp(4,av2);}}

/* k1598 in chicken.memory#address->pointer in k951 */
static void C_ccall f_1600(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1600,c,av);}
/* lolevel.scm:204: ##sys#address->pointer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[28]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* chicken.memory#pointer->address in k951 */
static void C_ccall f_1605(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1605,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1609,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:207: ##sys#check-special */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[33]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[34];
tp(4,av2);}}

/* k1607 in chicken.memory#pointer->address in k951 */
static void C_ccall f_1609(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1609,c,av);}
/* lolevel.scm:208: ##sys#pointer->address */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[32]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[32]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* chicken.memory#object->pointer in k951 */
static void C_ccall f_1614(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_1614,c,av);}
a=C_alloc(5);
if(C_truep(C_blockp(t2))){
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=stub354(t3,t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* chicken.memory#pointer->object in k951 */
static void C_ccall f_1625(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1625,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1629,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:215: ##sys#check-pointer */
t4=*((C_word*)lf[12]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[37];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k1627 in chicken.memory#pointer->object in k951 */
static void C_ccall f_1629(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1629,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_pointer_to_object(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.memory#pointer=? in k951 */
static void C_ccall f_1631(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_1631,c,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1635,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:219: ##sys#check-special */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[33]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[33]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[39];
tp(4,av2);}}

/* k1633 in chicken.memory#pointer=? in k951 */
static void C_ccall f_1635(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_1635,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1638,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:220: ##sys#check-special */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[33]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[39];
tp(4,av2);}}

/* k1636 in k1633 in chicken.memory#pointer=? in k951 */
static void C_ccall f_1638(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1638,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_pointer_eqp(((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.memory#pointer+ in k951 */
static void C_ccall f_1640(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_1640,c,av);}
a=C_alloc(5);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=(C_truep(t2)?C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t6=C_fix((C_word)sizeof(int) * CHAR_BIT);
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=stub369(t4,t5,C_i_foreign_ranged_integer_argumentp(t3,t6));
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* chicken.memory#align-to-word in k951 */
static void C_ccall f_1662(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_1662,c,av);}
a=C_alloc(8);
if(C_truep(C_i_integerp(t2))){
t3=C_a_i_bytevector(&a,1,C_fix(6));
t4=C_fix((C_word)sizeof(int) * CHAR_BIT);
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=stub380(t3,C_i_foreign_ranged_integer_argumentp(t2,t4));
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t3=(C_truep(C_blockp(t2))?C_specialp(t2):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1692,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:233: ##sys#pointer->address */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[32]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[32]+1);
av2[1]=t4;
av2[2]=t2;
tp(3,av2);}}
else{
/* lolevel.scm:235: ##sys#signal-hook */
t4=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=lf[6];
av2[3]=lf[42];
av2[4]=lf[43];
av2[5]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}}}

/* k1690 in chicken.memory#align-to-word in k951 */
static void C_ccall f_1692(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_1692,c,av);}
a=C_alloc(8);
t2=C_a_i_bytevector(&a,1,C_fix(6));
t3=C_fix((C_word)sizeof(int) * CHAR_BIT);
/* lolevel.scm:233: ##sys#address->pointer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[28]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=stub380(t2,C_i_foreign_ranged_integer_argumentp(t1,t3));
tp(3,av2);}}

/* chicken.memory#tag-pointer in k951 */
static void C_ccall f_1697(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1697,c,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1701,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:243: ##sys#make-tagged-pointer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[46]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t4;
av2[2]=t3;
tp(3,av2);}}

/* k1699 in chicken.memory#tag-pointer in k951 */
static void C_ccall f_1701(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_1701,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1704,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(C_truep(C_blockp(((C_word*)t0)[3]))?C_specialp(((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=C_copy_pointer(((C_word*)t0)[3],t1);
t5=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_POINTER_ERROR);
/* lolevel.scm:246: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[3]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t2;
av2[2]=t4;
av2[3]=lf[45];
av2[4]=((C_word*)t0)[3];
tp(5,av2);}}}

/* k1702 in k1699 in chicken.memory#tag-pointer in k951 */
static void C_ccall f_1704(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1704,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.memory#tagged-pointer? in k951 */
static void C_ccall f_1718(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1718,c,av);}
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
if(C_truep(C_blockp(t2))){
if(C_truep(C_taggedpointerp(t2))){
t5=C_i_not(t4);
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=(C_truep(t5)?t5:C_i_equalp(t4,C_slot(t2,C_fix(1))));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* chicken.memory#pointer-tag in k951 */
static void C_ccall f_1749(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1749,c,av);}
t3=(C_truep(C_blockp(t2))?C_specialp(t2):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=(C_truep(C_taggedpointerp(t2))?C_slot(t2,C_fix(1)):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_POINTER_ERROR);
/* lolevel.scm:258: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[3]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t1;
av2[2]=t4;
av2[3]=lf[49];
av2[4]=t2;
tp(5,av2);}}}

/* chicken.memory#pointer-u8-set! in k951 */
static void C_ccall f_1773(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1773,c,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_u_i_pointer_u8_set(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.memory#pointer-s8-set! in k951 */
static void C_ccall f_1776(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1776,c,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_u_i_pointer_s8_set(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.memory#pointer-u16-set! in k951 */
static void C_ccall f_1779(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1779,c,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_u_i_pointer_u16_set(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.memory#pointer-s16-set! in k951 */
static void C_ccall f_1782(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1782,c,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_u_i_pointer_s16_set(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.memory#pointer-u32-set! in k951 */
static void C_ccall f_1785(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1785,c,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_u_i_pointer_u32_set(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.memory#pointer-s32-set! in k951 */
static void C_ccall f_1788(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1788,c,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_u_i_pointer_s32_set(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.memory#pointer-u64-set! in k951 */
static void C_ccall f_1791(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1791,c,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_u_i_pointer_u64_set(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.memory#pointer-s64-set! in k951 */
static void C_ccall f_1794(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1794,c,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_u_i_pointer_s64_set(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.memory#pointer-f32-set! in k951 */
static void C_ccall f_1797(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1797,c,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_u_i_pointer_f32_set(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.memory#pointer-f64-set! in k951 */
static void C_ccall f_1800(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1800,c,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_u_i_pointer_f64_set(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k1803 in k951 */
static void C_ccall f_1805(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1805,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[60]+1 /* (set! chicken.memory#pointer-u8-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1809,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2609,a[2]=((C_word)li84),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:283: chicken.base#getter-with-setter */
t5=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[51]+1);
av2[4]=lf[154];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1807 in k1803 in k951 */
static void C_ccall f_1809(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1809,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[61]+1 /* (set! chicken.memory#pointer-s8-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1813,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2606,a[2]=((C_word)li83),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:289: chicken.base#getter-with-setter */
t5=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[52]+1);
av2[4]=lf[153];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1811 in k1807 in k1803 in k951 */
static void C_ccall f_1813(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1813,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[62]+1 /* (set! chicken.memory#pointer-u16-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1817,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2603,a[2]=((C_word)li82),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:295: chicken.base#getter-with-setter */
t5=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[53]+1);
av2[4]=lf[152];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_1817(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1817,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[63]+1 /* (set! chicken.memory#pointer-s16-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1821,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2600,a[2]=((C_word)li81),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:301: chicken.base#getter-with-setter */
t5=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[54]+1);
av2[4]=lf[151];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_1821(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1821,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[64]+1 /* (set! chicken.memory#pointer-u32-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1825,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2597,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:307: chicken.base#getter-with-setter */
t5=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[55]+1);
av2[4]=lf[150];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_1825(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1825,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[65]+1 /* (set! chicken.memory#pointer-s32-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1829,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2594,a[2]=((C_word)li79),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:313: chicken.base#getter-with-setter */
t5=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[56]+1);
av2[4]=lf[149];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_1829(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1829,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[66]+1 /* (set! chicken.memory#pointer-u64-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1833,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2591,a[2]=((C_word)li78),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:319: chicken.base#getter-with-setter */
t5=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[57]+1);
av2[4]=lf[148];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_1833(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1833,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[67]+1 /* (set! chicken.memory#pointer-s64-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1837,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2588,a[2]=((C_word)li77),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:325: chicken.base#getter-with-setter */
t5=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[58]+1);
av2[4]=lf[147];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_1837(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1837,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[68]+1 /* (set! chicken.memory#pointer-f32-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1841,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2585,a[2]=((C_word)li76),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:331: chicken.base#getter-with-setter */
t5=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[59]+1);
av2[4]=lf[146];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_1841(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(25,c,5)))){
C_save_and_reclaim((void *)f_1841,c,av);}
a=C_alloc(25);
t2=C_mutate((C_word*)lf[69]+1 /* (set! chicken.memory#pointer-f64-ref ...) */,t1);
t3=C_a_i_list1(&a,1,lf[70]);
t4=C_mutate((C_word*)lf[71]+1 /* (set! chicken.memory#make-pointer-vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1846,a[2]=t3,a[3]=((C_word)li37),tmp=(C_word)a,a+=4,tmp));
t5=C_mutate((C_word*)lf[76]+1 /* (set! chicken.memory#pointer-vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1910,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[77]+1 /* (set! chicken.memory#pointer-vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1916,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[78]+1 /* (set! chicken.memory#pointer-vector-fill! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1956,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[80]+1 /* (set! chicken.memory#pointer-vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2017,a[2]=((C_word)li43),tmp=(C_word)a,a+=3,tmp));
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2045,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2565,a[2]=((C_word)li75),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:392: chicken.base#getter-with-setter */
t11=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t11;
av2[1]=t9;
av2[2]=t10;
av2[3]=*((C_word*)lf[80]+1);
av2[4]=lf[145];
((C_proc)(void*)(*((C_word*)t11+1)))(5,av2);}}

/* chicken.memory#make-pointer-vector in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_1846(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1846,c,av);}
a=C_alloc(6);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?((C_word*)t0)[2]:C_get_rest_arg(c,3,av,3,t0));
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1853,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm:342: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[75]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[75]+1);
av2[1]=t5;
av2[2]=t2;
av2[3]=lf[73];
tp(4,av2);}}

/* k1851 in chicken.memory#make-pointer-vector in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_1853(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_1853,c,av);}
a=C_alloc(6);
t2=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t3=stub494(C_SCHEME_UNDEFINED,t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1865,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm:345: ##sys#make-blob */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[74]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[74]+1);
av2[1]=t4;
av2[2]=t3;
tp(3,av2);}}

/* k1863 in k1851 in chicken.memory#make-pointer-vector in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_1865(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1865,c,av);}
a=C_alloc(6);
t2=C_eqp(((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(t2)){
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_record3(&a,3,lf[72],((C_word*)t0)[5],t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1877,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[2])){
/* lolevel.scm:348: ##sys#check-pointer */
t4=*((C_word*)lf[12]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[73];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_1877(2,av2);}}}}

/* k1875 in k1863 in k1851 in chicken.memory#make-pointer-vector in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_1877(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_1877,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1882,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li36),tmp=(C_word)a,a+=6,tmp);
t3=(
  f_1882(t2,C_fix(0))
);
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_record3(&a,3,lf[72],((C_word*)t0)[2],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* doloop499 in k1875 in k1863 in k1851 in chicken.memory#make-pointer-vector in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static C_word C_fcall f_1882(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
t2=C_SCHEME_UNDEFINED;
return(t2);}
else{
t2=C_i_foreign_fixnum_argumentp(t1);
t3=(C_truep(((C_word*)t0)[3])?stub546(C_SCHEME_UNDEFINED,((C_word*)t0)[4],t2,C_i_foreign_pointer_argumentp(((C_word*)t0)[3])):stub546(C_SCHEME_UNDEFINED,((C_word*)t0)[4],t2,C_SCHEME_FALSE));
t5=C_fixnum_plus(t1,C_fix(1));
t1=t5;
goto loop;}}

/* chicken.memory#pointer-vector? in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_1910(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1910,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_structurep(t2,lf[72]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.memory#pointer-vector in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_1916(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_1916,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
t3=C_u_i_length(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1921,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:359: make-pointer-vector */
t5=*((C_word*)lf[71]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k1919 in chicken.memory#pointer-vector in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_1921(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1921,c,av);}
a=C_alloc(8);
t2=C_slot(t1,C_fix(2));
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1929,a[2]=t1,a[3]=t2,a[4]=t4,a[5]=((C_word)li39),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_1929(t6,((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0));}

/* doloop514 in k1919 in chicken.memory#pointer-vector in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_fcall f_1929(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_1929,4,t0,t1,t2,t3);}
a=C_alloc(8);
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1942,a[2]=t3,a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* lolevel.scm:365: ##sys#check-pointer */
t6=*((C_word*)lf[12]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
av2[3]=lf[72];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* k1940 in doloop514 in k1919 in chicken.memory#pointer-vector in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_1942(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1942,c,av);}
t2=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t3=(C_truep(((C_word*)t0)[3])?stub546(C_SCHEME_UNDEFINED,((C_word*)t0)[4],t2,C_i_foreign_pointer_argumentp(((C_word*)t0)[3])):stub546(C_SCHEME_UNDEFINED,((C_word*)t0)[4],t2,C_SCHEME_FALSE));
t4=((C_word*)((C_word*)t0)[5])[1];
f_1929(t4,((C_word*)t0)[6],C_u_i_cdr(((C_word*)t0)[7]),C_fixnum_plus(((C_word*)t0)[2],C_fix(1)));}

/* chicken.memory#pointer-vector-fill! in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_1956(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1956,c,av);}
a=C_alloc(5);
t4=C_i_check_structure_2(t2,lf[72],lf[79]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1963,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
/* lolevel.scm:370: ##sys#check-pointer */
t6=*((C_word*)lf[12]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
av2[3]=lf[79];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t6=t5;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_1963(2,av2);}}}

/* k1961 in chicken.memory#pointer-vector-fill! in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_1963(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_1963,c,av);}
a=C_alloc(6);
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=C_slot(((C_word*)t0)[2],C_fix(1));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1974,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word)li41),tmp=(C_word)a,a+=6,tmp);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=(
  f_1974(t4,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* doloop527 in k1961 in chicken.memory#pointer-vector-fill! in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static C_word C_fcall f_1974(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
t2=C_SCHEME_UNDEFINED;
return(t2);}
else{
t2=C_i_foreign_fixnum_argumentp(t1);
t3=(C_truep(((C_word*)t0)[3])?stub546(C_SCHEME_UNDEFINED,((C_word*)t0)[4],t2,C_i_foreign_pointer_argumentp(((C_word*)t0)[3])):stub546(C_SCHEME_UNDEFINED,((C_word*)t0)[4],t2,C_SCHEME_FALSE));
t5=C_fixnum_plus(t1,C_fix(1));
t1=t5;
goto loop;}}

/* chicken.memory#pointer-vector-set! in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2017(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2017,c,av);}
a=C_alloc(6);
t5=C_i_check_structure_2(t2,lf[72],lf[81]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2024,a[2]=t2,a[3]=t3,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm:387: ##sys#check-range */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[83]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[83]+1);
av2[1]=t6;
av2[2]=t3;
av2[3]=C_fix(0);
av2[4]=C_slot(t2,C_fix(1));
tp(5,av2);}}

/* k2022 in chicken.memory#pointer-vector-set! in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2024(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2024,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2027,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
/* lolevel.scm:388: ##sys#check-pointer */
t3=*((C_word*)lf[12]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=lf[82];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_2027(2,av2);}}}

/* k2025 in k2022 in chicken.memory#pointer-vector-set! in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2027(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2027,c,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=(C_truep(((C_word*)t0)[5])?stub546(C_SCHEME_UNDEFINED,t2,t3,C_i_foreign_pointer_argumentp(((C_word*)t0)[5])):stub546(C_SCHEME_UNDEFINED,t2,t3,C_SCHEME_FALSE));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2045(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(34,c,4)))){
C_save_and_reclaim((void *)f_2045,c,av);}
a=C_alloc(34);
t2=C_mutate((C_word*)lf[84]+1 /* (set! chicken.memory#pointer-vector-ref ...) */,t1);
t3=C_mutate((C_word*)lf[85]+1 /* (set! chicken.memory#pointer-vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2047,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp));
t4=C_a_i_provide(&a,1,lf[87]);
t5=C_mutate((C_word*)lf[88]+1 /* (set! chicken.memory.representation#object-copy ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2056,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp));
t6=C_a_i_vector1(&a,1,lf[90]);
t7=C_mutate(&lf[91] /* (set! chicken.memory.representation#xproc-tag ...) */,t6);
t8=C_mutate((C_word*)lf[92]+1 /* (set! chicken.memory.representation#extend-procedure ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2136,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[96]+1 /* (set! chicken.memory.representation#extended-procedure? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2171,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[98]+1 /* (set! chicken.memory.representation#procedure-data ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2207,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[99]+1 /* (set! chicken.memory.representation#set-procedure-data! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2246,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[102]+1 /* (set! chicken.memory.representation#vector-like? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2262,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[103]+1 /* (set! chicken.memory.representation#block-set! ...) */,*((C_word*)lf[104]+1));
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2283,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:472: chicken.base#getter-with-setter */
t15=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t15;
av2[1]=t14;
av2[2]=*((C_word*)lf[143]+1);
av2[3]=*((C_word*)lf[104]+1);
av2[4]=lf[144];
((C_proc)(void*)(*((C_word*)t15+1)))(5,av2);}}

/* chicken.memory#pointer-vector-length in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2047(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2047,c,av);}
t3=C_i_check_structure_2(t2,lf[72],lf[86]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.memory.representation#object-copy in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2056(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2056,c,av);}
a=C_alloc(6);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2062,a[2]=t4,a[3]=((C_word)li46),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_2062(t6,t1,t2);}

/* copy in chicken.memory.representation#object-copy in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_fcall f_2062(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_2062,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_not(C_blockp(t2)))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_symbolp(t2))){
/* lolevel.scm:423: ##sys#intern-symbol */{
C_word av2[3];
av2[0]=0;
av2[1]=t1;
av2[2]=C_slot(t2,C_fix(1));
C_string_to_symbol(3,av2);}}
else{
t3=C_block_size(t2);
t4=(C_truep(C_byteblockp(t2))?C_words(t3):t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2092,a[2]=t2,a[3]=t1,a[4]=t3,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm:427: ##sys#make-vector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[89]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[89]+1);
av2[1]=t5;
av2[2]=t4;
tp(3,av2);}}}}

/* k2090 in copy in chicken.memory.representation#object-copy in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2092(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_2092,c,av);}
a=C_alloc(13);
t2=C_copy_block(((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2095,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_byteblockp(((C_word*)t0)[2]))){
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(C_truep(C_specialp(((C_word*)t0)[2]))?C_fix(1):C_fix(0));
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2104,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t6,a[5]=((C_word*)t0)[5],a[6]=((C_word)li45),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_2104(t8,t3,t4);}}

/* k2093 in k2090 in copy in chicken.memory.representation#object-copy in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2095(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2095,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* doloop636 in k2090 in copy in chicken.memory.representation#object-copy in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_fcall f_2104(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_2104,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2125,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm:431: copy */
t4=((C_word*)((C_word*)t0)[5])[1];
f_2062(t4,t3,C_slot(((C_word*)t0)[3],t2));}}

/* k2123 in doloop636 in k2090 in copy in chicken.memory.representation#object-copy in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2125(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2125,c,av);}
t2=C_i_setslot(((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=((C_word*)((C_word*)t0)[4])[1];
f_2104(t3,((C_word*)t0)[5],C_fixnum_plus(((C_word*)t0)[3],C_fix(1)));}

/* chicken.memory.representation#extend-procedure in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2136(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_2136,c,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2140,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:441: ##sys#check-closure */
t5=*((C_word*)lf[94]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[95];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k2138 in chicken.memory.representation#extend-procedure in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2140(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_2140,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2145,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2161,a[2]=((C_word*)t0)[2],a[3]=((C_word)li49),tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:442: ##sys#decorate-lambda */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[93]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[93]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
av2[4]=t3;
tp(5,av2);}}

/* a2144 in k2138 in chicken.memory.representation#extend-procedure in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2145(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2145,c,av);}
t3=C_i_pairp(t2);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=(C_truep(t3)?C_eqp(lf[91],C_slot(t2,C_fix(0))):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a2160 in k2138 in chicken.memory.representation#extend-procedure in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2161(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2161,c,av);}
a=C_alloc(3);
t4=C_a_i_cons(&a,2,lf[91],((C_word*)t0)[2]);
t5=C_i_setslot(t2,t3,t4);
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* chicken.memory.representation#extended-procedure? in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2171(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2171,c,av);}
a=C_alloc(6);
if(C_truep(C_blockp(t2))){
if(C_truep(C_closurep(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2205,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2188,a[2]=((C_word)li51),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:448: ##sys#lambda-decoration */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[97]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[97]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=t4;
tp(4,av2);}}
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

/* a2187 in chicken.memory.representation#extended-procedure? in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2188(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2188,c,av);}
t3=C_i_pairp(t2);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=(C_truep(t3)?C_eqp(lf[91],C_slot(t2,C_fix(0))):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k2203 in chicken.memory.representation#extended-procedure? in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2205(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2205,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?C_SCHEME_TRUE:C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.memory.representation#procedure-data in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2207(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2207,c,av);}
a=C_alloc(6);
if(C_truep(C_blockp(t2))){
if(C_truep(C_closurep(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2238,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2221,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:448: ##sys#lambda-decoration */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[97]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[97]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=t4;
tp(4,av2);}}
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

/* a2220 in chicken.memory.representation#procedure-data in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2221(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2221,c,av);}
t3=C_i_pairp(t2);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=(C_truep(t3)?C_eqp(lf[91],C_slot(t2,C_fix(0))):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k2236 in chicken.memory.representation#procedure-data in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2238(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2238,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?C_slot(t1,C_fix(1)):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.memory.representation#set-procedure-data! in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2246(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2246,c,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2260,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:461: extend-procedure */
t5=*((C_word*)lf[92]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k2258 in chicken.memory.representation#set-procedure-data! in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2260(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2260,c,av);}
t2=C_eqp(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* lolevel.scm:462: ##sys#signal-hook */
t3=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[6];
av2[3]=lf[100];
av2[4]=lf[101];
av2[5]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}}

/* chicken.memory.representation#vector-like? in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2262(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2262,c,av);}
if(C_truep(C_blockp(t2))){
t3=C_specialp(t2);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=(C_truep(t3)?C_i_not(t3):C_i_not(C_byteblockp(t2)));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k2281 in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2283(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(27,c,5)))){
C_save_and_reclaim((void *)f_2283,c,av);}
a=C_alloc(27);
t2=C_mutate((C_word*)lf[105]+1 /* (set! chicken.memory.representation#block-ref ...) */,t1);
t3=C_mutate((C_word*)lf[106]+1 /* (set! chicken.memory.representation#number-of-slots ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2285,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[108]+1 /* (set! chicken.memory.representation#number-of-bytes ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2294,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[111]+1 /* (set! chicken.memory.representation#make-record-instance ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2317,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[114]+1 /* (set! chicken.memory.representation#record-instance? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2326,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[115]+1 /* (set! chicken.memory.representation#record-instance-type ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2362,a[2]=((C_word)li61),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[117]+1 /* (set! chicken.memory.representation#record-instance-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2371,a[2]=((C_word)li62),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[119]+1 /* (set! chicken.memory.representation#record-instance-slot-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2384,a[2]=((C_word)li63),tmp=(C_word)a,a+=3,tmp));
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2410,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2541,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:520: chicken.base#getter-with-setter */
t12=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t12;
av2[1]=t10;
av2[2]=t11;
av2[3]=*((C_word*)lf[119]+1);
av2[4]=lf[142];
((C_proc)(void*)(*((C_word*)t12+1)))(5,av2);}}

/* chicken.memory.representation#number-of-slots in k2281 in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2285(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2285,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2289,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:476: ##sys#check-generic-vector */
t4=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[107];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2287 in chicken.memory.representation#number-of-slots in k2281 in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2289(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2289,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_block_size(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.memory.representation#number-of-bytes in k2281 in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2294(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2294,c,av);}
if(C_truep(C_i_not(C_blockp(t2)))){
/* lolevel.scm:481: ##sys#signal-hook */
t3=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=lf[6];
av2[3]=lf[109];
av2[4]=lf[110];
av2[5]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(C_byteblockp(t2))?C_block_size(t2):C_bytes(C_block_size(t2)));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* chicken.memory.representation#make-record-instance in k2281 in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2317(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +0,c,4)))){
C_save_and_reclaim((void*)f_2317,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+0);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=C_i_check_symbol_2(t2,lf[112]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t1;
av2[2]=*((C_word*)lf[113]+1);
av2[3]=t2;
av2[4]=t3;
C_apply(5,av2);}}

/* chicken.memory.representation#record-instance? in k2281 in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2326(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2326,c,av);}
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=(C_truep(C_blockp(t2))?C_structurep(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_i_not(t4);
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=(C_truep(t6)?t6:C_eqp(t4,C_slot(t2,C_fix(0))));
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* chicken.memory.representation#record-instance-type in k2281 in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2362(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2362,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2366,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:507: ##sys#check-generic-structure */
t4=*((C_word*)lf[8]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[116];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2364 in chicken.memory.representation#record-instance-type in k2281 in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2366(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2366,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_slot(((C_word*)t0)[3],C_fix(0));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.memory.representation#record-instance-length in k2281 in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2371(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2371,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2375,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:511: ##sys#check-generic-structure */
t4=*((C_word*)lf[8]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[118];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2373 in chicken.memory.representation#record-instance-length in k2281 in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2375(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2375,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fixnum_difference(C_block_size(((C_word*)t0)[3]),C_fix(1));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.memory.representation#record-instance-slot-set! in k2281 in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2384(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2384,c,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2388,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm:515: ##sys#check-generic-structure */
t6=*((C_word*)lf[8]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
av2[3]=lf[120];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k2386 in chicken.memory.representation#record-instance-slot-set! in k2281 in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2388(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_2388,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2391,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_block_size(((C_word*)t0)[3]);
/* lolevel.scm:516: ##sys#check-range */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[83]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[83]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(0);
av2[4]=C_fixnum_difference(t3,C_fix(1));
av2[5]=lf[120];
tp(6,av2);}}

/* k2389 in k2386 in chicken.memory.representation#record-instance-slot-set! in k2281 in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2391(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2391,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_setslot(((C_word*)t0)[3],C_fixnum_plus(((C_word*)t0)[4],C_fix(1)),((C_word*)t0)[5]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2408 in k2281 in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2410(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(32,c,4)))){
C_save_and_reclaim((void *)f_2410,c,av);}
a=C_alloc(32);
t2=C_mutate((C_word*)lf[121]+1 /* (set! chicken.memory.representation#record-instance-slot ...) */,t1);
t3=C_mutate((C_word*)lf[122]+1 /* (set! chicken.memory.representation#record->vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2412,a[2]=((C_word)li65),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[124]+1 /* (set! chicken.memory.representation#object-become! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2450,a[2]=((C_word)li66),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[127]+1 /* (set! chicken.memory.representation#mutate-procedure! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2459,a[2]=((C_word)li67),tmp=(C_word)a,a+=3,tmp));
t6=C_a_i_provide(&a,1,lf[129]);
t7=C_mutate((C_word*)lf[130]+1 /* (set! chicken.locative#make-locative ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2490,a[2]=((C_word)li68),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[133]+1 /* (set! chicken.locative#make-weak-locative ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2506,a[2]=((C_word)li69),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[135]+1 /* (set! chicken.locative#locative-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2522,a[2]=((C_word)li70),tmp=(C_word)a,a+=3,tmp));
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2527,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2538,a[2]=((C_word)li73),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:591: chicken.base#getter-with-setter */
t12=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t12;
av2[1]=t10;
av2[2]=t11;
av2[3]=*((C_word*)lf[135]+1);
av2[4]=lf[140];
((C_proc)(void*)(*((C_word*)t12+1)))(5,av2);}}

/* chicken.memory.representation#record->vector in k2408 in k2281 in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2412(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2412,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2416,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:529: ##sys#check-generic-structure */
t4=*((C_word*)lf[8]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[123];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2414 in chicken.memory.representation#record->vector in k2408 in k2281 in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2416(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_2416,c,av);}
a=C_alloc(5);
t2=C_block_size(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2422,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:531: ##sys#make-vector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[89]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[89]+1);
av2[1]=t3;
av2[2]=t2;
tp(3,av2);}}

/* k2420 in k2414 in chicken.memory.representation#record->vector in k2408 in k2281 in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2422(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2422,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2427,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word)li64),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(
  f_2427(t2,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* doloop742 in k2420 in k2414 in chicken.memory.representation#record->vector in k2408 in k2281 in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static C_word C_fcall f_2427(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_slot(((C_word*)t0)[4],t1);
t3=C_i_setslot(((C_word*)t0)[3],t1,t2);
t5=C_fixnum_plus(t1,C_fix(1));
t1=t5;
goto loop;}}

/* chicken.memory.representation#object-become! in k2408 in k2281 in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2450(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2450,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2454,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:540: ##sys#check-become-alist */
t4=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[126];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2452 in chicken.memory.representation#object-become! in k2408 in k2281 in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2454(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2454,c,av);}
/* lolevel.scm:541: ##sys#become! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[125]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[125]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* chicken.memory.representation#mutate-procedure! in k2408 in k2281 in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2459(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_2459,c,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2463,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:544: ##sys#check-closure */
t5=*((C_word*)lf[94]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[128];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k2461 in chicken.memory.representation#mutate-procedure! in k2408 in k2281 in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2463(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_2463,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2466,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:545: ##sys#check-closure */
t3=*((C_word*)lf[94]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[128];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2464 in k2461 in chicken.memory.representation#mutate-procedure! in k2408 in k2281 in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2466(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2466,c,av);}
a=C_alloc(5);
t2=C_block_size(((C_word*)t0)[2]);
t3=C_words(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2473,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:548: ##sys#make-vector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[89]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[89]+1);
av2[1]=t4;
av2[2]=t3;
tp(3,av2);}}

/* k2471 in k2464 in k2461 in chicken.memory.representation#mutate-procedure! in k2408 in k2281 in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2473(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_2473,c,av);}
a=C_alloc(8);
t2=C_copy_block(((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2476,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2488,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:549: proc */
t5=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k2474 in k2471 in k2464 in k2461 in chicken.memory.representation#mutate-procedure! in k2408 in k2281 in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2476(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2476,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2486 in k2471 in k2464 in k2461 in chicken.memory.representation#mutate-procedure! in k2408 in k2281 in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2488(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2488,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list1(&a,1,t2);
/* lolevel.scm:549: ##sys#become! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[125]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[125]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t3;
tp(3,av2);}}

/* chicken.locative#make-locative in k2408 in k2281 in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2490(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2490,c,av);}
if(C_truep(C_rest_nullp(c,3))){
/* lolevel.scm:583: ##sys#make-locative */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[131]+1));
C_word av2[6];
av2[0]=*((C_word*)lf[131]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(0);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[132];
tp(6,av2);}}
else{
/* lolevel.scm:583: ##sys#make-locative */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[131]+1));
C_word av2[6];
av2[0]=*((C_word*)lf[131]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=C_get_rest_arg(c,3,av,3,t0);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[132];
tp(6,av2);}}}

/* chicken.locative#make-weak-locative in k2408 in k2281 in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2506(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2506,c,av);}
if(C_truep(C_rest_nullp(c,3))){
/* lolevel.scm:586: ##sys#make-locative */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[131]+1));
C_word av2[6];
av2[0]=*((C_word*)lf[131]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(0);
av2[4]=C_SCHEME_TRUE;
av2[5]=lf[134];
tp(6,av2);}}
else{
/* lolevel.scm:586: ##sys#make-locative */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[131]+1));
C_word av2[6];
av2[0]=*((C_word*)lf[131]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=C_get_rest_arg(c,3,av,3,t0);
av2[4]=C_SCHEME_TRUE;
av2[5]=lf[134];
tp(6,av2);}}}

/* chicken.locative#locative-set! in k2408 in k2281 in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2522(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2522,c,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_locative_set(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k2525 in k2408 in k2281 in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2527(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2527,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[136]+1 /* (set! chicken.locative#locative-ref ...) */,t1);
t3=C_mutate((C_word*)lf[137]+1 /* (set! chicken.locative#locative->object ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2529,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[138]+1 /* (set! chicken.locative#locative? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2532,a[2]=((C_word)li72),tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* chicken.locative#locative->object in k2525 in k2408 in k2281 in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2529(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2529,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_locative_to_object(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.locative#locative? in k2525 in k2408 in k2281 in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2532(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2532,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(C_blockp(t2))?C_locativep(t2):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a2537 in k2408 in k2281 in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2538(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_2538,c,av);}
a=C_alloc(6);
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_locative_ref(&a,1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a2540 in k2281 in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2541(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_2541,c,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2545,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:522: ##sys#check-generic-structure */
t5=*((C_word*)lf[8]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[141];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k2543 in a2540 in k2281 in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2545(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_2545,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2548,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_block_size(((C_word*)t0)[3]);
/* lolevel.scm:523: ##sys#check-range */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[83]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[83]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(0);
av2[4]=C_fixnum_difference(t3,C_fix(1));
av2[5]=lf[141];
tp(6,av2);}}

/* k2546 in k2543 in a2540 in k2281 in k2043 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2548(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2548,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_slot(((C_word*)t0)[3],C_fixnum_plus(((C_word*)t0)[4],C_fix(1)));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a2564 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2565(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_2565,c,av);}
a=C_alloc(5);
t4=C_i_check_structure_2(t2,lf[72],lf[81]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2572,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:395: ##sys#check-range */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[83]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[83]+1);
av2[1]=t5;
av2[2]=t3;
av2[3]=C_fix(0);
av2[4]=C_slot(t2,C_fix(1));
tp(5,av2);}}

/* k2570 in a2564 in k1839 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2572(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_2572,c,av);}
a=C_alloc(5);
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=stub537(t3,t2,C_i_foreign_fixnum_argumentp(((C_word*)t0)[4]));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a2584 in k1835 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2585(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,1)))){
C_save_and_reclaim((void *)f_2585,c,av);}
a=C_alloc(4);
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_u_i_pointer_f64_ref(&a,1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a2587 in k1831 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2588(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,1)))){
C_save_and_reclaim((void *)f_2588,c,av);}
a=C_alloc(4);
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_u_i_pointer_f32_ref(&a,1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a2590 in k1827 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2591(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,1)))){
C_save_and_reclaim((void *)f_2591,c,av);}
a=C_alloc(7);
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_u_i_pointer_s64_ref(&a,1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a2593 in k1823 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2594(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,1)))){
C_save_and_reclaim((void *)f_2594,c,av);}
a=C_alloc(7);
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_u_i_pointer_u64_ref(&a,1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a2596 in k1819 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2597(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_2597,c,av);}
a=C_alloc(6);
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_u_i_pointer_s32_ref(&a,1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a2599 in k1815 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2600(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_2600,c,av);}
a=C_alloc(6);
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_u_i_pointer_u32_ref(&a,1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a2602 in k1811 in k1807 in k1803 in k951 */
static void C_ccall f_2603(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2603,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_u_i_pointer_s16_ref(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a2605 in k1807 in k1803 in k951 */
static void C_ccall f_2606(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2606,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_u_i_pointer_u16_ref(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a2608 in k1803 in k951 */
static void C_ccall f_2609(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2609,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_u_i_pointer_s8_ref(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a2611 in k951 */
static void C_ccall f_2612(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2612,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_u_i_pointer_u8_ref(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k951 */
static void C_ccall f_953(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(97,c,4)))){
C_save_and_reclaim((void *)f_953,c,av);}
a=C_alloc(97);
t2=C_mutate((C_word*)lf[2]+1 /* (set! ##sys#check-block ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_955,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[4]+1 /* (set! ##sys#check-become-alist ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_973,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[8]+1 /* (set! ##sys#check-generic-structure ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1019,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[10]+1 /* (set! ##sys#check-generic-vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1044,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[12]+1 /* (set! ##sys#check-pointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1076,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t7=lf[14];
t8=C_mutate((C_word*)lf[15]+1 /* (set! chicken.memory#move-memory! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1217,a[2]=t7,a[3]=((C_word)li11),tmp=(C_word)a,a+=4,tmp));
t9=C_mutate((C_word*)lf[23]+1 /* (set! chicken.memory#allocate ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1560,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[24]+1 /* (set! chicken.memory#free ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1567,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[25]+1 /* (set! chicken.memory#pointer? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1577,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[26]+1 /* (set! chicken.memory#pointer-like? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1585,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[27]+1 /* (set! chicken.memory#address->pointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1596,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[31]+1 /* (set! chicken.memory#pointer->address ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1605,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[35]+1 /* (set! chicken.memory#object->pointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1614,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[36]+1 /* (set! chicken.memory#pointer->object ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1625,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[38]+1 /* (set! chicken.memory#pointer=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1631,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[40]+1 /* (set! chicken.memory#pointer+ ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1640,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[41]+1 /* (set! chicken.memory#align-to-word ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1662,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[44]+1 /* (set! chicken.memory#tag-pointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1697,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[47]+1 /* (set! chicken.memory#tagged-pointer? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1718,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[48]+1 /* (set! chicken.memory#pointer-tag ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1749,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate((C_word*)lf[50]+1 /* (set! chicken.memory#pointer-u8-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1773,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate((C_word*)lf[51]+1 /* (set! chicken.memory#pointer-s8-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1776,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate((C_word*)lf[52]+1 /* (set! chicken.memory#pointer-u16-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1779,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t26=C_mutate((C_word*)lf[53]+1 /* (set! chicken.memory#pointer-s16-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1782,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t27=C_mutate((C_word*)lf[54]+1 /* (set! chicken.memory#pointer-u32-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1785,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp));
t28=C_mutate((C_word*)lf[55]+1 /* (set! chicken.memory#pointer-s32-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1788,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t29=C_mutate((C_word*)lf[56]+1 /* (set! chicken.memory#pointer-u64-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1791,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp));
t30=C_mutate((C_word*)lf[57]+1 /* (set! chicken.memory#pointer-s64-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1794,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp));
t31=C_mutate((C_word*)lf[58]+1 /* (set! chicken.memory#pointer-f32-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1797,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t32=C_mutate((C_word*)lf[59]+1 /* (set! chicken.memory#pointer-f64-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1800,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp));
t33=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1805,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t34=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2612,a[2]=((C_word)li85),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:277: chicken.base#getter-with-setter */
t35=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t35;
av2[1]=t33;
av2[2]=t34;
av2[3]=*((C_word*)lf[50]+1);
av2[4]=lf[155];
((C_proc)(void*)(*((C_word*)t35+1)))(5,av2);}}

/* ##sys#check-block in k951 */
static void C_ccall f_955(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +0,c,4)))){
C_save_and_reclaim((void*)f_955,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+0);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
if(C_truep(C_blockp(t2))){
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_BLOCK_ERROR);
if(C_truep(C_i_pairp(t3))){
/* lolevel.scm:84: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[3]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t1;
av2[2]=t4;
av2[3]=C_get_rest_arg(c,3,av,3,t0);
av2[4]=t2;
tp(5,av2);}}
else{
/* lolevel.scm:84: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[3]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t1;
av2[2]=t4;
av2[3]=C_SCHEME_FALSE;
av2[4]=t2;
tp(5,av2);}}}}

/* ##sys#check-become-alist in k951 */
static void C_ccall f_973(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_973,c,av);}
a=C_alloc(8);
t4=C_i_check_list_2(t2,t3);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_982,a[2]=t3,a[3]=t6,a[4]=t2,a[5]=((C_word)li1),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_982(t8,t1,t2);}

/* loop in ##sys#check-become-alist in k951 */
static void C_fcall f_982(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,5)))){
C_save_and_reclaim_args((void *)trf_982,3,t0,t1,t2);}
a=C_alloc(7);
t3=C_i_nullp(t2);
if(C_truep(t3)){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_i_pairp(t2))){
t4=C_u_i_car(t2);
t5=C_i_check_pair_2(t4,((C_word*)t0)[2]);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1002,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=t4,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm:95: ##sys#check-block */
t7=*((C_word*)lf[2]+1);{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=C_u_i_car(t4);
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
/* lolevel.scm:99: ##sys#signal-hook */
t4=*((C_word*)lf[5]+1);{
C_word av2[6];
av2[0]=t4;
av2[1]=t1;
av2[2]=lf[6];
av2[3]=((C_word*)t0)[2];
av2[4]=lf[7];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_lolevel_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("lolevel"));
C_check_nursery_minimum(C_calculate_demand(19,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void*)C_lolevel_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(1013))){
C_save(t1);
C_rereclaim2(1013*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(19);
C_initialize_lf(lf,156);
lf[0]=C_h_intern(&lf[0],7, C_text("lolevel"));
lf[1]=C_h_intern(&lf[1],15, C_text("chicken.memory#"));
lf[2]=C_h_intern(&lf[2],17, C_text("##sys#check-block"));
lf[3]=C_h_intern(&lf[3],16, C_text("##sys#error-hook"));
lf[4]=C_h_intern(&lf[4],24, C_text("##sys#check-become-alist"));
lf[5]=C_h_intern(&lf[5],17, C_text("##sys#signal-hook"));
lf[6]=C_h_intern_kw(&lf[6],10, C_text("type-error"));
lf[7]=C_decode_literal(C_heaptop,C_text("\376B\000\0002bad argument type - not an a-list of block objects"));
lf[8]=C_h_intern(&lf[8],29, C_text("##sys#check-generic-structure"));
lf[9]=C_decode_literal(C_heaptop,C_text("\376B\000\000#bad argument type - not a structure"));
lf[10]=C_h_intern(&lf[10],26, C_text("##sys#check-generic-vector"));
lf[11]=C_decode_literal(C_heaptop,C_text("\376B\000\000,bad argument type - not a vector-like object"));
lf[12]=C_h_intern(&lf[12],19, C_text("##sys#check-pointer"));
lf[13]=C_decode_literal(C_heaptop,C_text("\376B\000\000!bad argument type - not a pointer"));
lf[14]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\004\001mmap\376\003\000\000\002\376\001\000\000\010\001u8vector\376\003\000\000\002\376\001\000\000\011\001u16vector\376\003\000\000\002\376\001\000\000\011\001u32vector\376\003\000\000\002\376"
"\001\000\000\011\001u64vector\376\003\000\000\002\376\001\000\000\010\001s8vector\376\003\000\000\002\376\001\000\000\011\001s16vector\376\003\000\000\002\376\001\000\000\011\001s32vector\376\003\000\000\002\376\001"
"\000\000\011\001s64vector\376\003\000\000\002\376\001\000\000\011\001f32vector\376\003\000\000\002\376\001\000\000\011\001f64vector\376\377\016"));
lf[15]=C_h_intern(&lf[15],27, C_text("chicken.memory#move-memory!"));
lf[16]=C_h_intern(&lf[16],11, C_text("##sys#error"));
lf[17]=C_h_intern(&lf[17],12, C_text("move-memory!"));
lf[18]=C_decode_literal(C_heaptop,C_text("\376B\000\000\034need number of bytes to move"));
lf[19]=C_decode_literal(C_heaptop,C_text("\376B\000\000!number of bytes to move too large"));
lf[20]=C_h_intern(&lf[20],17, C_text("##sys#bytevector\077"));
lf[21]=C_decode_literal(C_heaptop,C_text("\376B\000\000\033negative destination offset"));
lf[22]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026negative source offset"));
lf[23]=C_h_intern(&lf[23],23, C_text("chicken.memory#allocate"));
lf[24]=C_h_intern(&lf[24],19, C_text("chicken.memory#free"));
lf[25]=C_h_intern(&lf[25],23, C_text("chicken.memory#pointer\077"));
lf[26]=C_h_intern(&lf[26],28, C_text("chicken.memory#pointer-like\077"));
lf[27]=C_h_intern(&lf[27],31, C_text("chicken.memory#address->pointer"));
lf[28]=C_h_intern(&lf[28],22, C_text("##sys#address->pointer"));
lf[29]=C_h_intern(&lf[29],19, C_text("##sys#check-integer"));
lf[30]=C_h_intern(&lf[30],16, C_text("address->pointer"));
lf[31]=C_h_intern(&lf[31],31, C_text("chicken.memory#pointer->address"));
lf[32]=C_h_intern(&lf[32],22, C_text("##sys#pointer->address"));
lf[33]=C_h_intern(&lf[33],19, C_text("##sys#check-special"));
lf[34]=C_h_intern(&lf[34],16, C_text("pointer->address"));
lf[35]=C_h_intern(&lf[35],30, C_text("chicken.memory#object->pointer"));
lf[36]=C_h_intern(&lf[36],30, C_text("chicken.memory#pointer->object"));
lf[37]=C_h_intern(&lf[37],15, C_text("pointer->object"));
lf[38]=C_h_intern(&lf[38],24, C_text("chicken.memory#pointer=\077"));
lf[39]=C_h_intern(&lf[39],9, C_text("pointer=\077"));
lf[40]=C_h_intern(&lf[40],23, C_text("chicken.memory#pointer+"));
lf[41]=C_h_intern(&lf[41],28, C_text("chicken.memory#align-to-word"));
lf[42]=C_h_intern(&lf[42],13, C_text("align-to-word"));
lf[43]=C_decode_literal(C_heaptop,C_text("\376B\000\000,bad argument type - not a pointer or integer"));
lf[44]=C_h_intern(&lf[44],26, C_text("chicken.memory#tag-pointer"));
lf[45]=C_h_intern(&lf[45],11, C_text("tag-pointer"));
lf[46]=C_h_intern(&lf[46],25, C_text("##sys#make-tagged-pointer"));
lf[47]=C_h_intern(&lf[47],30, C_text("chicken.memory#tagged-pointer\077"));
lf[48]=C_h_intern(&lf[48],26, C_text("chicken.memory#pointer-tag"));
lf[49]=C_h_intern(&lf[49],11, C_text("pointer-tag"));
lf[50]=C_h_intern(&lf[50],30, C_text("chicken.memory#pointer-u8-set!"));
lf[51]=C_h_intern(&lf[51],30, C_text("chicken.memory#pointer-s8-set!"));
lf[52]=C_h_intern(&lf[52],31, C_text("chicken.memory#pointer-u16-set!"));
lf[53]=C_h_intern(&lf[53],31, C_text("chicken.memory#pointer-s16-set!"));
lf[54]=C_h_intern(&lf[54],31, C_text("chicken.memory#pointer-u32-set!"));
lf[55]=C_h_intern(&lf[55],31, C_text("chicken.memory#pointer-s32-set!"));
lf[56]=C_h_intern(&lf[56],31, C_text("chicken.memory#pointer-u64-set!"));
lf[57]=C_h_intern(&lf[57],31, C_text("chicken.memory#pointer-s64-set!"));
lf[58]=C_h_intern(&lf[58],31, C_text("chicken.memory#pointer-f32-set!"));
lf[59]=C_h_intern(&lf[59],31, C_text("chicken.memory#pointer-f64-set!"));
lf[60]=C_h_intern(&lf[60],29, C_text("chicken.memory#pointer-u8-ref"));
lf[61]=C_h_intern(&lf[61],29, C_text("chicken.memory#pointer-s8-ref"));
lf[62]=C_h_intern(&lf[62],30, C_text("chicken.memory#pointer-u16-ref"));
lf[63]=C_h_intern(&lf[63],30, C_text("chicken.memory#pointer-s16-ref"));
lf[64]=C_h_intern(&lf[64],30, C_text("chicken.memory#pointer-u32-ref"));
lf[65]=C_h_intern(&lf[65],30, C_text("chicken.memory#pointer-s32-ref"));
lf[66]=C_h_intern(&lf[66],30, C_text("chicken.memory#pointer-u64-ref"));
lf[67]=C_h_intern(&lf[67],30, C_text("chicken.memory#pointer-s64-ref"));
lf[68]=C_h_intern(&lf[68],30, C_text("chicken.memory#pointer-f32-ref"));
lf[69]=C_h_intern(&lf[69],30, C_text("chicken.memory#pointer-f64-ref"));
lf[70]=C_h_intern(&lf[70],5, C_text("unset"));
lf[71]=C_h_intern(&lf[71],34, C_text("chicken.memory#make-pointer-vector"));
lf[72]=C_h_intern(&lf[72],14, C_text("pointer-vector"));
lf[73]=C_h_intern(&lf[73],19, C_text("make-pointer-vector"));
lf[74]=C_h_intern(&lf[74],15, C_text("##sys#make-blob"));
lf[75]=C_h_intern(&lf[75],18, C_text("##sys#check-fixnum"));
lf[76]=C_h_intern(&lf[76],30, C_text("chicken.memory#pointer-vector\077"));
lf[77]=C_h_intern(&lf[77],29, C_text("chicken.memory#pointer-vector"));
lf[78]=C_h_intern(&lf[78],35, C_text("chicken.memory#pointer-vector-fill!"));
lf[79]=C_h_intern(&lf[79],20, C_text("pointer-vector-fill!"));
lf[80]=C_h_intern(&lf[80],34, C_text("chicken.memory#pointer-vector-set!"));
lf[81]=C_h_intern(&lf[81],18, C_text("pointer-vector-ref"));
lf[82]=C_h_intern(&lf[82],19, C_text("pointer-vector-set!"));
lf[83]=C_h_intern(&lf[83],17, C_text("##sys#check-range"));
lf[84]=C_h_intern(&lf[84],33, C_text("chicken.memory#pointer-vector-ref"));
lf[85]=C_h_intern(&lf[85],36, C_text("chicken.memory#pointer-vector-length"));
lf[86]=C_h_intern(&lf[86],21, C_text("pointer-vector-length"));
lf[87]=C_h_intern(&lf[87],30, C_text("chicken.memory.representation#"));
lf[88]=C_h_intern(&lf[88],41, C_text("chicken.memory.representation#object-copy"));
lf[89]=C_h_intern(&lf[89],17, C_text("##sys#make-vector"));
lf[90]=C_h_intern(&lf[90],8, C_text("extended"));
lf[92]=C_h_intern(&lf[92],46, C_text("chicken.memory.representation#extend-procedure"));
lf[93]=C_h_intern(&lf[93],21, C_text("##sys#decorate-lambda"));
lf[94]=C_h_intern(&lf[94],19, C_text("##sys#check-closure"));
lf[95]=C_h_intern(&lf[95],16, C_text("extend-procedure"));
lf[96]=C_h_intern(&lf[96],49, C_text("chicken.memory.representation#extended-procedure\077"));
lf[97]=C_h_intern(&lf[97],23, C_text("##sys#lambda-decoration"));
lf[98]=C_h_intern(&lf[98],44, C_text("chicken.memory.representation#procedure-data"));
lf[99]=C_h_intern(&lf[99],49, C_text("chicken.memory.representation#set-procedure-data!"));
lf[100]=C_h_intern(&lf[100],19, C_text("set-procedure-data!"));
lf[101]=C_decode_literal(C_heaptop,C_text("\376B\000\000-bad argument type - not an extended procedure"));
lf[102]=C_h_intern(&lf[102],42, C_text("chicken.memory.representation#vector-like\077"));
lf[103]=C_h_intern(&lf[103],40, C_text("chicken.memory.representation#block-set!"));
lf[104]=C_h_intern(&lf[104],16, C_text("##sys#block-set!"));
lf[105]=C_h_intern(&lf[105],39, C_text("chicken.memory.representation#block-ref"));
lf[106]=C_h_intern(&lf[106],45, C_text("chicken.memory.representation#number-of-slots"));
lf[107]=C_h_intern(&lf[107],15, C_text("number-of-slots"));
lf[108]=C_h_intern(&lf[108],45, C_text("chicken.memory.representation#number-of-bytes"));
lf[109]=C_h_intern(&lf[109],15, C_text("number-of-bytes"));
lf[110]=C_decode_literal(C_heaptop,C_text("\376B\000\0002cannot compute number of bytes of immediate object"));
lf[111]=C_h_intern(&lf[111],50, C_text("chicken.memory.representation#make-record-instance"));
lf[112]=C_h_intern(&lf[112],20, C_text("make-record-instance"));
lf[113]=C_h_intern(&lf[113],20, C_text("##sys#make-structure"));
lf[114]=C_h_intern(&lf[114],46, C_text("chicken.memory.representation#record-instance\077"));
lf[115]=C_h_intern(&lf[115],50, C_text("chicken.memory.representation#record-instance-type"));
lf[116]=C_h_intern(&lf[116],20, C_text("record-instance-type"));
lf[117]=C_h_intern(&lf[117],52, C_text("chicken.memory.representation#record-instance-length"));
lf[118]=C_h_intern(&lf[118],22, C_text("record-instance-length"));
lf[119]=C_h_intern(&lf[119],55, C_text("chicken.memory.representation#record-instance-slot-set!"));
lf[120]=C_h_intern(&lf[120],25, C_text("record-instance-slot-set!"));
lf[121]=C_h_intern(&lf[121],50, C_text("chicken.memory.representation#record-instance-slot"));
lf[122]=C_h_intern(&lf[122],44, C_text("chicken.memory.representation#record->vector"));
lf[123]=C_h_intern(&lf[123],14, C_text("record->vector"));
lf[124]=C_h_intern(&lf[124],44, C_text("chicken.memory.representation#object-become!"));
lf[125]=C_h_intern(&lf[125],13, C_text("##sys#become!"));
lf[126]=C_h_intern(&lf[126],14, C_text("object-become!"));
lf[127]=C_h_intern(&lf[127],47, C_text("chicken.memory.representation#mutate-procedure!"));
lf[128]=C_h_intern(&lf[128],17, C_text("mutate-procedure!"));
lf[129]=C_h_intern(&lf[129],17, C_text("chicken.locative#"));
lf[130]=C_h_intern(&lf[130],30, C_text("chicken.locative#make-locative"));
lf[131]=C_h_intern(&lf[131],19, C_text("##sys#make-locative"));
lf[132]=C_h_intern(&lf[132],13, C_text("make-locative"));
lf[133]=C_h_intern(&lf[133],35, C_text("chicken.locative#make-weak-locative"));
lf[134]=C_h_intern(&lf[134],18, C_text("make-weak-locative"));
lf[135]=C_h_intern(&lf[135],30, C_text("chicken.locative#locative-set!"));
lf[136]=C_h_intern(&lf[136],29, C_text("chicken.locative#locative-ref"));
lf[137]=C_h_intern(&lf[137],33, C_text("chicken.locative#locative->object"));
lf[138]=C_h_intern(&lf[138],26, C_text("chicken.locative#locative\077"));
lf[139]=C_h_intern(&lf[139],31, C_text("chicken.base#getter-with-setter"));
lf[140]=C_decode_literal(C_heaptop,C_text("\376B\000\000#(chicken.locative#locative-ref loc)"));
lf[141]=C_h_intern(&lf[141],20, C_text("record-instance-slot"));
lf[142]=C_decode_literal(C_heaptop,C_text("\376B\000\0008(chicken.memory.representation#record-instance-slot x i)"));
lf[143]=C_h_intern(&lf[143],15, C_text("##sys#block-ref"));
lf[144]=C_decode_literal(C_heaptop,C_text("\376B\000\000-(chicken.memory.representation#block-ref x i)"));
lf[145]=C_decode_literal(C_heaptop,C_text("\376B\000\000((chicken.memory#pointer-vector-ref pv i)"));
lf[146]=C_decode_literal(C_heaptop,C_text("\376B\000\000\042(chicken.memory#pointer-f64-ref p)"));
lf[147]=C_decode_literal(C_heaptop,C_text("\376B\000\000\042(chicken.memory#pointer-f32-ref p)"));
lf[148]=C_decode_literal(C_heaptop,C_text("\376B\000\000\042(chicken.memory#pointer-s64-ref p)"));
lf[149]=C_decode_literal(C_heaptop,C_text("\376B\000\000\042(chicken.memory#pointer-u64-ref p)"));
lf[150]=C_decode_literal(C_heaptop,C_text("\376B\000\000\042(chicken.memory#pointer-s32-ref p)"));
lf[151]=C_decode_literal(C_heaptop,C_text("\376B\000\000\042(chicken.memory#pointer-u32-ref p)"));
lf[152]=C_decode_literal(C_heaptop,C_text("\376B\000\000\042(chicken.memory#pointer-s16-ref p)"));
lf[153]=C_decode_literal(C_heaptop,C_text("\376B\000\000\042(chicken.memory#pointer-u16-ref p)"));
lf[154]=C_decode_literal(C_heaptop,C_text("\376B\000\000!(chicken.memory#pointer-s8-ref p)"));
lf[155]=C_decode_literal(C_heaptop,C_text("\376B\000\000!(chicken.memory#pointer-u8-ref p)"));
C_register_lf2(lf,156,create_ptable());{}
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_953,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t4;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[157] = {
{C_text("f_1002:lolevel_2escm"),(void*)f_1002},
{C_text("f_1005:lolevel_2escm"),(void*)f_1005},
{C_text("f_1019:lolevel_2escm"),(void*)f_1019},
{C_text("f_1044:lolevel_2escm"),(void*)f_1044},
{C_text("f_1063:lolevel_2escm"),(void*)f_1063},
{C_text("f_1076:lolevel_2escm"),(void*)f_1076},
{C_text("f_1217:lolevel_2escm"),(void*)f_1217},
{C_text("f_1238:lolevel_2escm"),(void*)f_1238},
{C_text("f_1244:lolevel_2escm"),(void*)f_1244},
{C_text("f_1250:lolevel_2escm"),(void*)f_1250},
{C_text("f_1266:lolevel_2escm"),(void*)f_1266},
{C_text("f_1293:lolevel_2escm"),(void*)f_1293},
{C_text("f_1296:lolevel_2escm"),(void*)f_1296},
{C_text("f_1299:lolevel_2escm"),(void*)f_1299},
{C_text("f_1302:lolevel_2escm"),(void*)f_1302},
{C_text("f_1307:lolevel_2escm"),(void*)f_1307},
{C_text("f_1399:lolevel_2escm"),(void*)f_1399},
{C_text("f_1408:lolevel_2escm"),(void*)f_1408},
{C_text("f_1418:lolevel_2escm"),(void*)f_1418},
{C_text("f_1422:lolevel_2escm"),(void*)f_1422},
{C_text("f_1441:lolevel_2escm"),(void*)f_1441},
{C_text("f_1470:lolevel_2escm"),(void*)f_1470},
{C_text("f_1480:lolevel_2escm"),(void*)f_1480},
{C_text("f_1490:lolevel_2escm"),(void*)f_1490},
{C_text("f_1560:lolevel_2escm"),(void*)f_1560},
{C_text("f_1567:lolevel_2escm"),(void*)f_1567},
{C_text("f_1577:lolevel_2escm"),(void*)f_1577},
{C_text("f_1585:lolevel_2escm"),(void*)f_1585},
{C_text("f_1596:lolevel_2escm"),(void*)f_1596},
{C_text("f_1600:lolevel_2escm"),(void*)f_1600},
{C_text("f_1605:lolevel_2escm"),(void*)f_1605},
{C_text("f_1609:lolevel_2escm"),(void*)f_1609},
{C_text("f_1614:lolevel_2escm"),(void*)f_1614},
{C_text("f_1625:lolevel_2escm"),(void*)f_1625},
{C_text("f_1629:lolevel_2escm"),(void*)f_1629},
{C_text("f_1631:lolevel_2escm"),(void*)f_1631},
{C_text("f_1635:lolevel_2escm"),(void*)f_1635},
{C_text("f_1638:lolevel_2escm"),(void*)f_1638},
{C_text("f_1640:lolevel_2escm"),(void*)f_1640},
{C_text("f_1662:lolevel_2escm"),(void*)f_1662},
{C_text("f_1692:lolevel_2escm"),(void*)f_1692},
{C_text("f_1697:lolevel_2escm"),(void*)f_1697},
{C_text("f_1701:lolevel_2escm"),(void*)f_1701},
{C_text("f_1704:lolevel_2escm"),(void*)f_1704},
{C_text("f_1718:lolevel_2escm"),(void*)f_1718},
{C_text("f_1749:lolevel_2escm"),(void*)f_1749},
{C_text("f_1773:lolevel_2escm"),(void*)f_1773},
{C_text("f_1776:lolevel_2escm"),(void*)f_1776},
{C_text("f_1779:lolevel_2escm"),(void*)f_1779},
{C_text("f_1782:lolevel_2escm"),(void*)f_1782},
{C_text("f_1785:lolevel_2escm"),(void*)f_1785},
{C_text("f_1788:lolevel_2escm"),(void*)f_1788},
{C_text("f_1791:lolevel_2escm"),(void*)f_1791},
{C_text("f_1794:lolevel_2escm"),(void*)f_1794},
{C_text("f_1797:lolevel_2escm"),(void*)f_1797},
{C_text("f_1800:lolevel_2escm"),(void*)f_1800},
{C_text("f_1805:lolevel_2escm"),(void*)f_1805},
{C_text("f_1809:lolevel_2escm"),(void*)f_1809},
{C_text("f_1813:lolevel_2escm"),(void*)f_1813},
{C_text("f_1817:lolevel_2escm"),(void*)f_1817},
{C_text("f_1821:lolevel_2escm"),(void*)f_1821},
{C_text("f_1825:lolevel_2escm"),(void*)f_1825},
{C_text("f_1829:lolevel_2escm"),(void*)f_1829},
{C_text("f_1833:lolevel_2escm"),(void*)f_1833},
{C_text("f_1837:lolevel_2escm"),(void*)f_1837},
{C_text("f_1841:lolevel_2escm"),(void*)f_1841},
{C_text("f_1846:lolevel_2escm"),(void*)f_1846},
{C_text("f_1853:lolevel_2escm"),(void*)f_1853},
{C_text("f_1865:lolevel_2escm"),(void*)f_1865},
{C_text("f_1877:lolevel_2escm"),(void*)f_1877},
{C_text("f_1882:lolevel_2escm"),(void*)f_1882},
{C_text("f_1910:lolevel_2escm"),(void*)f_1910},
{C_text("f_1916:lolevel_2escm"),(void*)f_1916},
{C_text("f_1921:lolevel_2escm"),(void*)f_1921},
{C_text("f_1929:lolevel_2escm"),(void*)f_1929},
{C_text("f_1942:lolevel_2escm"),(void*)f_1942},
{C_text("f_1956:lolevel_2escm"),(void*)f_1956},
{C_text("f_1963:lolevel_2escm"),(void*)f_1963},
{C_text("f_1974:lolevel_2escm"),(void*)f_1974},
{C_text("f_2017:lolevel_2escm"),(void*)f_2017},
{C_text("f_2024:lolevel_2escm"),(void*)f_2024},
{C_text("f_2027:lolevel_2escm"),(void*)f_2027},
{C_text("f_2045:lolevel_2escm"),(void*)f_2045},
{C_text("f_2047:lolevel_2escm"),(void*)f_2047},
{C_text("f_2056:lolevel_2escm"),(void*)f_2056},
{C_text("f_2062:lolevel_2escm"),(void*)f_2062},
{C_text("f_2092:lolevel_2escm"),(void*)f_2092},
{C_text("f_2095:lolevel_2escm"),(void*)f_2095},
{C_text("f_2104:lolevel_2escm"),(void*)f_2104},
{C_text("f_2125:lolevel_2escm"),(void*)f_2125},
{C_text("f_2136:lolevel_2escm"),(void*)f_2136},
{C_text("f_2140:lolevel_2escm"),(void*)f_2140},
{C_text("f_2145:lolevel_2escm"),(void*)f_2145},
{C_text("f_2161:lolevel_2escm"),(void*)f_2161},
{C_text("f_2171:lolevel_2escm"),(void*)f_2171},
{C_text("f_2188:lolevel_2escm"),(void*)f_2188},
{C_text("f_2205:lolevel_2escm"),(void*)f_2205},
{C_text("f_2207:lolevel_2escm"),(void*)f_2207},
{C_text("f_2221:lolevel_2escm"),(void*)f_2221},
{C_text("f_2238:lolevel_2escm"),(void*)f_2238},
{C_text("f_2246:lolevel_2escm"),(void*)f_2246},
{C_text("f_2260:lolevel_2escm"),(void*)f_2260},
{C_text("f_2262:lolevel_2escm"),(void*)f_2262},
{C_text("f_2283:lolevel_2escm"),(void*)f_2283},
{C_text("f_2285:lolevel_2escm"),(void*)f_2285},
{C_text("f_2289:lolevel_2escm"),(void*)f_2289},
{C_text("f_2294:lolevel_2escm"),(void*)f_2294},
{C_text("f_2317:lolevel_2escm"),(void*)f_2317},
{C_text("f_2326:lolevel_2escm"),(void*)f_2326},
{C_text("f_2362:lolevel_2escm"),(void*)f_2362},
{C_text("f_2366:lolevel_2escm"),(void*)f_2366},
{C_text("f_2371:lolevel_2escm"),(void*)f_2371},
{C_text("f_2375:lolevel_2escm"),(void*)f_2375},
{C_text("f_2384:lolevel_2escm"),(void*)f_2384},
{C_text("f_2388:lolevel_2escm"),(void*)f_2388},
{C_text("f_2391:lolevel_2escm"),(void*)f_2391},
{C_text("f_2410:lolevel_2escm"),(void*)f_2410},
{C_text("f_2412:lolevel_2escm"),(void*)f_2412},
{C_text("f_2416:lolevel_2escm"),(void*)f_2416},
{C_text("f_2422:lolevel_2escm"),(void*)f_2422},
{C_text("f_2427:lolevel_2escm"),(void*)f_2427},
{C_text("f_2450:lolevel_2escm"),(void*)f_2450},
{C_text("f_2454:lolevel_2escm"),(void*)f_2454},
{C_text("f_2459:lolevel_2escm"),(void*)f_2459},
{C_text("f_2463:lolevel_2escm"),(void*)f_2463},
{C_text("f_2466:lolevel_2escm"),(void*)f_2466},
{C_text("f_2473:lolevel_2escm"),(void*)f_2473},
{C_text("f_2476:lolevel_2escm"),(void*)f_2476},
{C_text("f_2488:lolevel_2escm"),(void*)f_2488},
{C_text("f_2490:lolevel_2escm"),(void*)f_2490},
{C_text("f_2506:lolevel_2escm"),(void*)f_2506},
{C_text("f_2522:lolevel_2escm"),(void*)f_2522},
{C_text("f_2527:lolevel_2escm"),(void*)f_2527},
{C_text("f_2529:lolevel_2escm"),(void*)f_2529},
{C_text("f_2532:lolevel_2escm"),(void*)f_2532},
{C_text("f_2538:lolevel_2escm"),(void*)f_2538},
{C_text("f_2541:lolevel_2escm"),(void*)f_2541},
{C_text("f_2545:lolevel_2escm"),(void*)f_2545},
{C_text("f_2548:lolevel_2escm"),(void*)f_2548},
{C_text("f_2565:lolevel_2escm"),(void*)f_2565},
{C_text("f_2572:lolevel_2escm"),(void*)f_2572},
{C_text("f_2585:lolevel_2escm"),(void*)f_2585},
{C_text("f_2588:lolevel_2escm"),(void*)f_2588},
{C_text("f_2591:lolevel_2escm"),(void*)f_2591},
{C_text("f_2594:lolevel_2escm"),(void*)f_2594},
{C_text("f_2597:lolevel_2escm"),(void*)f_2597},
{C_text("f_2600:lolevel_2escm"),(void*)f_2600},
{C_text("f_2603:lolevel_2escm"),(void*)f_2603},
{C_text("f_2606:lolevel_2escm"),(void*)f_2606},
{C_text("f_2609:lolevel_2escm"),(void*)f_2609},
{C_text("f_2612:lolevel_2escm"),(void*)f_2612},
{C_text("f_953:lolevel_2escm"),(void*)f_953},
{C_text("f_955:lolevel_2escm"),(void*)f_955},
{C_text("f_973:lolevel_2escm"),(void*)f_973},
{C_text("f_982:lolevel_2escm"),(void*)f_982},
{C_text("toplevel:lolevel_2escm"),(void*)C_lolevel_toplevel},
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
o|hiding unexported module binding: chicken.memory#pv-buf-ref 
o|hiding unexported module binding: chicken.memory#pv-buf-set! 
o|hiding unexported module binding: chicken.memory.representation#xproc-tag 
o|eliminated procedure checks: 75 
o|specializations:
o|  1 (scheme#length list)
o|  1 (scheme#integer? *)
o|  3 (scheme#cdr pair)
o|  6 (scheme#car pair)
(o e)|safe calls: 209 
o|safe globals: (chicken.memory#pointer-f64-set! chicken.memory#pointer-f32-set! chicken.memory#pointer-s64-set! chicken.memory#pointer-u64-set! chicken.memory#pointer-s32-set! chicken.memory#pointer-u32-set! chicken.memory#pointer-s16-set! chicken.memory#pointer-u16-set! chicken.memory#pointer-s8-set! chicken.memory#pointer-u8-set! chicken.memory#pointer-tag chicken.memory#tagged-pointer? chicken.memory#tag-pointer chicken.memory#align-to-word chicken.memory#pointer+ chicken.memory#pointer=? chicken.memory#pointer->object chicken.memory#object->pointer chicken.memory#pointer->address chicken.memory#address->pointer chicken.memory#pointer-like? chicken.memory#pointer? chicken.memory#free chicken.memory#allocate chicken.memory#move-memory! ##sys#check-pointer ##sys#check-generic-vector ##sys#check-generic-structure ##sys#check-become-alist ##sys#check-block) 
o|inlining procedure: k957 
o|inlining procedure: k957 
o|inlining procedure: k965 
o|inlining procedure: k965 
o|inlining procedure: k987 
o|inlining procedure: k987 
o|inlining procedure: k1021 
o|inlining procedure: k1021 
o|inlining procedure: k1036 
o|inlining procedure: k1036 
o|contracted procedure: "(lolevel.scm:104) g115116" 
o|inlining procedure: k1026 
o|inlining procedure: k1026 
o|inlining procedure: k1046 
o|inlining procedure: k1046 
o|inlining procedure: k1068 
o|inlining procedure: k1068 
o|contracted procedure: "(lolevel.scm:112) g123124" 
o|inlining procedure: k1051 
o|inlining procedure: k1058 
o|inlining procedure: k1058 
o|inlining procedure: k1051 
o|inlining procedure: k1078 
o|inlining procedure: k1078 
o|inlining procedure: k1091 
o|inlining procedure: k1091 
o|contracted procedure: "(lolevel.scm:118) g134135" 
o|merged explicitly consed rest parameter: args235 
o|inlining procedure: k1252 
o|inlining procedure: k1252 
o|consed rest parameter at call site: "(lolevel.scm:151) sizerr232" 1 
o|inlining procedure: k1268 
o|inlining procedure: k1268 
o|consed rest parameter at call site: "(lolevel.scm:156) sizerr232" 1 
o|inlining procedure: k1309 
o|inlining procedure: "(lolevel.scm:168) typerr144" 
o|inlining procedure: k1309 
o|inlining procedure: k1341 
o|inlining procedure: k1341 
o|inlining procedure: "(lolevel.scm:172) typerr144" 
o|inlining procedure: k1361 
o|contracted procedure: "(lolevel.scm:175) memmove1140" 
o|inlining procedure: k1403 
o|contracted procedure: "(lolevel.scm:177) memmove3142" 
o|inlining procedure: k1403 
o|inlining procedure: "(lolevel.scm:179) typerr144" 
o|contracted procedure: "(lolevel.scm:174) g265266" 
o|inlining procedure: k1387 
o|inlining procedure: k1387 
o|contracted procedure: "(lolevel.scm:63) g271272" 
o|inlining procedure: k1361 
o|inlining procedure: k1448 
o|contracted procedure: "(lolevel.scm:183) memmove2141" 
o|inlining procedure: k1472 
o|inlining procedure: k1472 
o|inlining procedure: k1448 
o|contracted procedure: "(lolevel.scm:185) memmove4143" 
o|inlining procedure: "(lolevel.scm:188) typerr144" 
o|contracted procedure: "(lolevel.scm:182) g291292" 
o|inlining procedure: k1458 
o|inlining procedure: k1458 
o|contracted procedure: "(lolevel.scm:63) g297298" 
o|inlining procedure: "(lolevel.scm:190) typerr144" 
o|contracted procedure: "(lolevel.scm:173) g252253" 
o|inlining procedure: k1371 
o|inlining procedure: k1371 
o|contracted procedure: "(lolevel.scm:63) g258259" 
o|inlining procedure: k1570 
o|inlining procedure: k1570 
o|contracted procedure: "(lolevel.scm:198) g333334" 
o|contracted procedure: "(lolevel.scm:200) g338339" 
o|inlining procedure: k1589 
o|inlining procedure: k1589 
o|inlining procedure: k1616 
o|contracted procedure: "(lolevel.scm:211) g351352" 
o|inlining procedure: k1616 
o|inlining procedure: k1664 
o|inlining procedure: k1664 
o|contracted procedure: "(lolevel.scm:232) g390391" 
o|inlining procedure: k1676 
o|inlining procedure: k1676 
o|inlining procedure: k1702 
o|inlining procedure: k1702 
o|contracted procedure: "(lolevel.scm:244) g398399" 
o|inlining procedure: k1707 
o|inlining procedure: k1707 
o|inlining procedure: k1723 
o|inlining procedure: k1732 
o|inlining procedure: k1732 
o|inlining procedure: k1723 
o|inlining procedure: k1751 
o|inlining procedure: k1751 
o|contracted procedure: "(lolevel.scm:255) g423424" 
o|inlining procedure: k1756 
o|inlining procedure: k1756 
o|inlining procedure: k1884 
o|inlining procedure: k1884 
o|contracted procedure: "(lolevel.scm:344) words->bytes492" 
o|inlining procedure: k1931 
o|inlining procedure: k1931 
o|inlining procedure: k1976 
o|inlining procedure: k1976 
o|inlining procedure: k2010 
o|inlining procedure: k2010 
o|inlining procedure: k2064 
o|inlining procedure: k2064 
o|inlining procedure: k2093 
o|inlining procedure: k2093 
o|inlining procedure: k2106 
o|inlining procedure: k2106 
o|inlining procedure: k2147 
o|inlining procedure: k2147 
o|inlining procedure: k2173 
o|inlining procedure: k2179 
o|inlining procedure: k2179 
o|contracted procedure: "(lolevel.scm:452) g658659" 
o|inlining procedure: k2190 
o|inlining procedure: k2190 
o|inlining procedure: k2173 
o|inlining procedure: k2209 
o|inlining procedure: k2239 
o|inlining procedure: k2239 
o|contracted procedure: "(lolevel.scm:457) g668669" 
o|inlining procedure: k2223 
o|inlining procedure: k2223 
o|inlining procedure: k2209 
o|inlining procedure: k2248 
o|inlining procedure: k2248 
o|contracted procedure: "(lolevel.scm:467) g679680" 
o|inlining procedure: k2266 
o|inlining procedure: k2273 
o|inlining procedure: k2273 
o|inlining procedure: k2266 
o|inlining procedure: k2296 
o|inlining procedure: k2296 
o|inlining procedure: k2331 
o|inlining procedure: k2331 
o|contracted procedure: "(lolevel.scm:502) g714715" 
o|inlining procedure: k2336 
o|inlining procedure: k2336 
o|inlining procedure: k2429 
o|inlining procedure: k2429 
o|inlining procedure: k2496 
o|inlining procedure: k2496 
o|inlining procedure: k2512 
o|inlining procedure: k2512 
o|inlining procedure: k2534 
o|inlining procedure: k2534 
o|contracted procedure: "(lolevel.scm:396) chicken.memory#pv-buf-ref" 
o|replaced variables: 404 
o|removed binding forms: 170 
o|substituted constant variable: r9662618 
o|substituted constant variable: r9662618 
o|substituted constant variable: r10372626 
o|substituted constant variable: r10372626 
o|substituted constant variable: r10272629 
o|substituted constant variable: r10692634 
o|substituted constant variable: r10692634 
o|substituted constant variable: r10522641 
o|substituted constant variable: r10922646 
o|substituted constant variable: r10922646 
o|substituted constant variable: r15712704 
o|substituted constant variable: r15712704 
o|substituted constant variable: r15902707 
o|substituted constant variable: r16172709 
o|substituted constant variable: r16772713 
o|substituted constant variable: r17082719 
o|substituted constant variable: r17242723 
o|substituted constant variable: r17572727 
o|inlining procedure: k1866 
o|substituted constant variable: r20112736 
o|substituted constant variable: r20112736 
o|substituted constant variable: r21482747 
o|substituted constant variable: r21802749 
o|substituted constant variable: r21802750 
o|substituted constant variable: r21912752 
o|substituted constant variable: r21742753 
o|substituted constant variable: r22402756 
o|substituted constant variable: r22242758 
o|substituted constant variable: r22102759 
o|substituted constant variable: r22672767 
o|substituted constant variable: r23322771 
o|substituted constant variable: r23372773 
o|substituted constant variable: r24972776 
o|substituted constant variable: r24972776 
o|substituted constant variable: r25132780 
o|substituted constant variable: r25132780 
o|substituted constant variable: r25352785 
o|replaced variables: 140 
o|removed binding forms: 325 
o|inlining procedure: k1384 
o|inlining procedure: k1455 
o|inlining procedure: k1368 
o|removed binding forms: 145 
o|contracted procedure: k1083 
o|contracted procedure: k1860 
o|simplifications: ((let . 1)) 
o|removed binding forms: 8 
o|simplifications: ((if . 39) (##core#call . 165) (let . 21)) 
o|  call simplifications:
o|    scheme#vector
o|    scheme#list	2
o|    ##sys#check-symbol
o|    scheme#cons	2
o|    scheme#symbol?
o|    ##sys#setslot	4
o|    ##sys#intern-symbol
o|    ##sys#check-structure	4
o|    ##sys#structure?
o|    scheme#eq?	6
o|    chicken.fixnum#fx>=	4
o|    chicken.fixnum#fx+	7
o|    ##sys#make-structure	2
o|    scheme#equal?
o|    ##sys#foreign-ranged-integer-argument	2
o|    scheme#car	9
o|    scheme#cdr	3
o|    chicken.fixnum#fx<	2
o|    ##sys#generic-structure?	2
o|    scheme#string?	3
o|    ##sys#size	12
o|    ##sys#foreign-block-argument	4
o|    ##sys#foreign-pointer-argument	7
o|    ##sys#foreign-fixnum-argument	16
o|    scheme#memq	2
o|    ##sys#slot	24
o|    chicken.fixnum#fx-	6
o|    chicken.fixnum#fx<=	3
o|    scheme#apply	2
o|    scheme#not	8
o|    ##sys#check-list
o|    scheme#null?	13
o|    ##sys#check-pair
o|    scheme#pair?	8
o|contracted procedure: k968 
o|contracted procedure: k975 
o|contracted procedure: k984 
o|contracted procedure: k993 
o|contracted procedure: k997 
o|contracted procedure: k1029 
o|contracted procedure: k1039 
o|contracted procedure: k1071 
o|contracted procedure: k1094 
o|contracted procedure: k1553 
o|contracted procedure: k1219 
o|contracted procedure: k1547 
o|contracted procedure: k1222 
o|contracted procedure: k1541 
o|contracted procedure: k1225 
o|contracted procedure: k1535 
o|contracted procedure: k1228 
o|contracted procedure: k1529 
o|contracted procedure: k1231 
o|contracted procedure: k1523 
o|contracted procedure: k1234 
o|contracted procedure: k1262 
o|contracted procedure: k1255 
o|contracted procedure: k1288 
o|contracted procedure: k1277 
o|contracted procedure: k1284 
o|contracted procedure: k1312 
o|contracted procedure: k1332 
o|contracted procedure: k1318 
o|contracted procedure: k1325 
o|contracted procedure: k1338 
o|contracted procedure: k1358 
o|contracted procedure: k1344 
o|contracted procedure: k1351 
o|contracted procedure: k1374 
o|contracted procedure: k1390 
o|contracted procedure: k1102 
o|contracted procedure: k1106 
o|contracted procedure: k1110 
o|contracted procedure: k1114 
o|contracted procedure: k1118 
o|contracted procedure: k1409 
o|contracted procedure: k1158 
o|contracted procedure: k1162 
o|contracted procedure: k1166 
o|contracted procedure: k1170 
o|contracted procedure: k1174 
o|contracted procedure: k1424 
o|contracted procedure: k1442 
o|contracted procedure: k1445 
o|contracted procedure: k1461 
o|contracted procedure: k1130 
o|contracted procedure: k1134 
o|contracted procedure: k1138 
o|contracted procedure: k1142 
o|contracted procedure: k1146 
o|contracted procedure: k1481 
o|contracted procedure: k1186 
o|contracted procedure: k1190 
o|contracted procedure: k1194 
o|contracted procedure: k1198 
o|contracted procedure: k1202 
o|contracted procedure: k1492 
o|contracted procedure: k1496 
o|contracted procedure: k1511 
o|contracted procedure: k1517 
o|contracted procedure: k1563 
o|contracted procedure: k1570 
o|contracted procedure: k1643 
o|contracted procedure: k1647 
o|contracted procedure: k1658 
o|contracted procedure: k1679 
o|contracted procedure: k1710 
o|contracted procedure: k1742 
o|contracted procedure: k1720 
o|contracted procedure: k1729 
o|contracted procedure: k1739 
o|contracted procedure: k1759 
o|contracted procedure: k1843 
o|contracted procedure: k1903 
o|contracted procedure: k1848 
o|contracted procedure: k1857 
o|contracted procedure: k1872 
o|contracted procedure: k1887 
o|contracted procedure: k1897 
o|contracted procedure: k1922 
o|contracted procedure: k1934 
o|contracted procedure: k1937 
o|contracted procedure: k1952 
o|contracted procedure: k1958 
o|contracted procedure: k1964 
o|contracted procedure: k1967 
o|contracted procedure: k1979 
o|contracted procedure: k1989 
o|contracted procedure: k2006 
o|contracted procedure: k2010 
o|contracted procedure: k2019 
o|contracted procedure: k2032 
o|contracted procedure: k2039 
o|contracted procedure: k2049 
o|contracted procedure: k2067 
o|contracted procedure: k2073 
o|contracted procedure: k2080 
o|contracted procedure: k2083 
o|contracted procedure: k2086 
o|contracted procedure: k2100 
o|contracted procedure: k2109 
o|contracted procedure: k2112 
o|contracted procedure: k2119 
o|contracted procedure: k2127 
o|contracted procedure: k2132 
o|contracted procedure: k2150 
o|contracted procedure: k2157 
o|contracted procedure: k2167 
o|contracted procedure: k2163 
o|contracted procedure: k2193 
o|contracted procedure: k2200 
o|contracted procedure: k2226 
o|contracted procedure: k2233 
o|contracted procedure: k2251 
o|contracted procedure: k2299 
o|contracted procedure: k2312 
o|contracted procedure: k2319 
o|contracted procedure: k2355 
o|contracted procedure: k2328 
o|contracted procedure: k2339 
o|contracted procedure: k2342 
o|contracted procedure: k2352 
o|contracted procedure: k2380 
o|contracted procedure: k2396 
o|contracted procedure: k2404 
o|contracted procedure: k2400 
o|contracted procedure: k2417 
o|contracted procedure: k2432 
o|contracted procedure: k2446 
o|contracted procedure: k2435 
o|contracted procedure: k2442 
o|contracted procedure: k2467 
o|contracted procedure: k2482 
o|contracted procedure: k2478 
o|contracted procedure: k2499 
o|contracted procedure: k2496 
o|contracted procedure: k2515 
o|contracted procedure: k2512 
o|contracted procedure: k2553 
o|contracted procedure: k2561 
o|contracted procedure: k2557 
o|contracted procedure: k2567 
o|contracted procedure: k2577 
o|contracted procedure: k1999 
o|contracted procedure: k2581 
o|simplifications: ((if . 9) (let . 69)) 
o|removed binding forms: 151 
(o x)|known list op on rest arg sublist: ##core#rest-car loc91 0 
(o x)|known list op on rest arg sublist: ##core#rest-car loc114 0 
(o x)|known list op on rest arg sublist: ##core#rest-car loc133 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest215218 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest215218 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest215218 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest215218 0 
o|contracted procedure: k1271 
o|inlining procedure: k1420 
o|inlining procedure: "(lolevel.scm:231) align378" 
o|inlining procedure: "(lolevel.scm:233) align378" 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest408410 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest408410 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest484486 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest484486 0 
o|inlining procedure: "(lolevel.scm:351) chicken.memory#pv-buf-set!" 
o|inlining procedure: "(lolevel.scm:366) chicken.memory#pv-buf-set!" 
o|inlining procedure: "(lolevel.scm:375) chicken.memory#pv-buf-set!" 
o|inlining procedure: "(lolevel.scm:389) chicken.memory#pv-buf-set!" 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest705707 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest705707 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? index788 0 
(o x)|known list op on rest arg sublist: ##core#rest-car index788 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? index795 0 
(o x)|known list op on rest arg sublist: ##core#rest-car index795 0 
o|removed binding forms: 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1223 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r1223 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1223 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r1223 1 
o|removed side-effect free assignment to unused variable: chicken.memory#pv-buf-set! 
o|replaced variables: 27 
o|removed binding forms: 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1229 2 
(o x)|known list op on rest arg sublist: ##core#rest-car r1229 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1229 2 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r1229 2 
o|inlining procedure: k1686 
o|inlining procedure: k1890 
o|inlining procedure: k1943 
o|inlining procedure: k1982 
o|removed binding forms: 22 
o|simplifications: ((let . 1)) 
o|removed binding forms: 6 
o|direct leaf routine/allocation: doloop499500 0 
o|direct leaf routine/allocation: doloop527528 0 
o|direct leaf routine/allocation: doloop742743 0 
o|contracted procedure: k1866 
o|converted assignments to bindings: (doloop499500) 
o|converted assignments to bindings: (doloop527528) 
o|converted assignments to bindings: (doloop742743) 
o|simplifications: ((let . 3)) 
o|removed binding forms: 1 
o|customizable procedures: (copy627 doloop636637 doloop514515 checkn2234 checkn1233 nosizerr231 move245 sizerr232 k1061 loop97) 
o|calls to known targets: 28 
o|identified direct recursive calls: f_1307 2 
o|unused rest argument: rest215218 f_1217 
o|unused rest argument: rest408410 f_1718 
o|identified direct recursive calls: f_1882 1 
o|unused rest argument: rest484486 f_1846 
o|identified direct recursive calls: f_1974 1 
o|unused rest argument: rest705707 f_2326 
o|identified direct recursive calls: f_2427 1 
o|unused rest argument: index788 f_2490 
o|unused rest argument: index795 f_2506 
o|fast box initializations: 9 
o|fast global references: 4 
o|fast global assignments: 1 
*/
/* end of file */
