/* Generated from eval.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.3.0rc4 ((HEAD detached at 5.3.0rc4)) (rev b6cbb1ba)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: eval.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file eval.c -emit-import-library chicken.eval -emit-import-library chicken.load
   unit: eval
   uses: modules eval expand internal library
*/
#include "chicken.h"


#ifndef C_INSTALL_EGG_HOME
# define C_INSTALL_EGG_HOME    "."
#endif

#ifndef C_INSTALL_SHARE_HOME
# define C_INSTALL_SHARE_HOME NULL
#endif

#ifndef C_BINARY_VERSION
# define C_BINARY_VERSION      0
#endif


#define C_store_result(x, ptr)   (*((C_word *)C_block_item(ptr, 0)) = (x), C_SCHEME_TRUE)


#define C_copy_result_string(str, buf, n)  (C_memcpy((char *)C_block_item(buf, 0), C_c_string(str), C_unfix(n)), ((char *)C_block_item(buf, 0))[ C_unfix(n) ] = '\0', C_SCHEME_TRUE)


C_externexport  void  CHICKEN_get_error_message(char *t0,int t1);

C_externexport  int  CHICKEN_load(char * t0);

C_externexport  int  CHICKEN_read(char * t0,C_word *t1);

C_externexport  int  CHICKEN_apply_to_string(C_word t0,C_word t1,char *t2,int t3);

C_externexport  int  CHICKEN_apply(C_word t0,C_word t1,C_word *t2);

C_externexport  int  CHICKEN_eval_string_to_string(char * t0,char *t1,int t2);

C_externexport  int  CHICKEN_eval_to_string(C_word t0,char *t1,int t2);

C_externexport  int  CHICKEN_eval_string(char * t0,C_word *t1);

C_externexport  int  CHICKEN_eval(C_word t0,C_word *t1);

C_externexport  int  CHICKEN_yield();

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_modules_toplevel)
C_externimport void C_ccall C_modules_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_expand_toplevel)
C_externimport void C_ccall C_expand_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_internal_toplevel)
C_externimport void C_ccall C_internal_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[367];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,15),40,102,105,110,100,45,105,100,32,105,100,32,115,101,41,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,7),40,97,51,54,50,48,41,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,13),40,97,51,54,50,54,32,46,32,116,109,112,41,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,12),40,114,101,110,97,109,101,32,118,97,114,41,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,105,41};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,8),40,103,50,52,52,32,112,41};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,101,110,118,115,32,101,105,41,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,15),40,108,111,111,107,117,112,32,118,97,114,48,32,101,41,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,31),40,101,109,105,116,45,116,114,97,99,101,45,105,110,102,111,32,105,110,102,111,32,99,110,116,114,32,101,32,118,41,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,9),40,97,51,53,48,56,32,120,41,0,0,0,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,11),40,97,51,53,50,49,32,112,32,105,41,0,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,15),40,100,101,99,111,114,97,116,101,32,112,32,108,108,41,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,12),40,102,95,51,55,55,48,32,46,32,118,41,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,7),40,97,51,55,56,49,41,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,10),40,102,95,51,56,48,56,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,12),40,102,95,51,56,49,57,32,46,32,118,41,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,12),40,102,95,51,56,50,52,32,46,32,118,41,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,10),40,102,95,51,56,56,50,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,10),40,102,95,51,56,57,55,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,10),40,102,95,51,57,49,54,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,10),40,102,95,51,57,51,57,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,10),40,102,95,51,57,54,48,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,11),40,97,51,55,56,55,32,105,32,106,41,0,0,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,12),40,102,95,51,57,56,54,32,46,32,118,41,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,12),40,102,95,51,57,57,52,32,46,32,118,41,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,12),40,102,95,52,48,48,50,32,46,32,118,41,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,12),40,102,95,52,48,49,48,32,46,32,118,41,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,12),40,102,95,52,48,49,50,32,46,32,118,41,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,12),40,102,95,52,48,51,49,32,46,32,118,41,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,12),40,102,95,52,48,51,51,32,46,32,118,41,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,12),40,102,95,52,48,52,52,32,46,32,118,41,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,12),40,102,95,52,48,57,55,32,46,32,118,41,0,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,12),40,102,95,52,49,48,53,32,46,32,118,41,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,12),40,102,95,52,49,49,51,32,46,32,118,41,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,12),40,102,95,52,49,50,49,32,46,32,118,41,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,12),40,102,95,52,49,50,57,32,46,32,118,41,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,12),40,102,95,52,49,51,55,32,46,32,118,41,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,12),40,102,95,52,49,52,53,32,46,32,118,41,0,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,12),40,102,95,52,49,52,55,32,46,32,118,41,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,12),40,102,95,52,49,55,54,32,46,32,118,41,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,10),40,102,95,52,50,49,48,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,10),40,102,95,52,50,50,55,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,10),40,102,95,52,51,49,50,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,10),40,102,95,52,51,51,55,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,7),40,97,52,52,48,53,41,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,10),40,102,95,52,52,50,57,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,10),40,102,95,52,52,51,55,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,10),40,102,95,52,52,55,50,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,10),40,102,95,52,52,56,53,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,11),40,97,52,52,49,49,32,105,32,106,41,0,0,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,10),40,102,95,52,53,52,57,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,10),40,102,95,52,53,56,54,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,10),40,102,95,52,54,52,49,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,10),40,102,95,52,55,49,49,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,8),40,103,53,50,53,32,120,41};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,19),40,100,111,108,111,111,112,53,52,54,32,105,32,118,108,105,115,116,41,0,0,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,10),40,102,95,52,55,56,57,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,53,49,57,32,103,53,51,49,41,0,0,0,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,7),40,97,52,56,55,54,41,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,7),40,97,52,56,57,51,41,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,7),40,97,52,57,49,49,41,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,52,53,50,32,103,52,54,52,41,0,0,0,0,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,52,50,52,32,103,52,51,54,41,0,0,0,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,53,56,55,32,103,53,57,57,41,0,0,0,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,53,54,48,32,103,53,55,50,41,0,0,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,23),40,109,97,112,45,108,111,111,112,55,51,54,32,103,55,52,56,32,103,55,52,57,41,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,23),40,109,97,112,45,108,111,111,112,55,48,51,32,103,55,49,53,32,103,55,49,54,41,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,54,55,54,32,103,54,56,56,41,0,0,0,0,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,54,52,54,32,103,54,53,56,41,0,0,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,54,49,57,32,103,54,51,49,41,0,0,0,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,11),40,97,53,53,48,50,32,46,32,114,41,0,0,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,10),40,102,95,53,52,57,55,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,7),40,97,53,53,50,49,41,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,10),40,102,95,53,53,49,54,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,14),40,97,53,53,52,53,32,97,49,32,46,32,114,41,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,10),40,102,95,53,53,52,48,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,10),40,97,53,53,54,52,32,97,49,41,0,0,0,0,0,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,10),40,102,95,53,53,53,57,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,17),40,97,53,53,57,50,32,97,49,32,97,50,32,46,32,114,41,0,0,0,0,0,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,10),40,102,95,53,53,56,55,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,13),40,97,53,54,49,49,32,97,49,32,97,50,41,0,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,10),40,102,95,53,54,48,54,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,20),40,97,53,54,51,57,32,97,49,32,97,50,32,97,51,32,46,32,114,41,0,0,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,10),40,102,95,53,54,51,52,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,16),40,97,53,54,53,56,32,97,49,32,97,50,32,97,51,41};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,10),40,102,95,53,54,53,51,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,23),40,97,53,54,56,54,32,97,49,32,97,50,32,97,51,32,97,52,32,46,32,114,41,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,10),40,102,95,53,54,56,49,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,19),40,97,53,55,48,53,32,97,49,32,97,50,32,97,51,32,97,52,41,0,0,0,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,10),40,102,95,53,55,48,48,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,26),40,100,111,108,111,111,112,49,50,52,48,32,110,32,99,32,97,114,103,115,32,108,97,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,12),40,97,53,55,50,55,32,46,32,97,115,41,0,0,0,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,10),40,102,95,53,55,50,50,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,12),40,97,53,55,53,48,32,46,32,97,115,41,0,0,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,10),40,102,95,53,55,52,53,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,7),40,97,53,55,56,56,41,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,7),40,97,53,56,48,53,41,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,7),40,97,53,56,49,57,41,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,55,56,55,32,103,55,57,57,41,0,0,0,0,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,22),40,97,53,52,54,55,32,118,97,114,115,32,97,114,103,99,32,114,101,115,116,41,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,7),40,97,53,56,55,51,41,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,24),40,97,53,56,56,51,32,108,108,105,115,116,55,55,54,32,98,111,100,121,55,55,55,41};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,7),40,97,53,57,48,56,41,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,7),40,97,53,57,50,53,41,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,7),40,97,53,57,52,51,41,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,56,57,48,32,103,57,48,50,41,0,0,0,0,0,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,6),40,103,57,53,52,41,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,18),40,102,111,114,45,101,97,99,104,45,108,111,111,112,57,53,51,41,0,0,0,0,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,7),40,97,54,49,48,49,41,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,7),40,97,54,49,49,56,41,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,7),40,97,54,49,51,54,41,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,57,50,53,32,103,57,51,55,41,0,0,0,0,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,13),40,97,54,51,49,48,32,102,111,114,109,115,41,0,0,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,7),40,97,54,51,55,53,41,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,19),40,109,97,112,45,108,111,111,112,57,57,56,32,103,49,48,49,48,41,0,0,0,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,7),40,97,54,52,53,51,41,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,50,32,120,115,41,0,0,0,0,0,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,10),40,102,95,54,53,52,51,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,98,111,100,121,32,120,115,41,0,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,7),40,97,54,53,49,53,41,0};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,7),40,97,54,53,48,57,41,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,7),40,97,54,54,48,53,41,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,11),40,103,49,48,52,49,32,101,120,112,41,0,0,0,0,0};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,48,51,53,32,103,49,48,52,55,41,0,0,0,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,7),40,97,54,56,49,50,41,0};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,25),40,97,54,56,49,56,32,114,101,113,102,111,114,109,49,49,54,49,32,95,49,49,54,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,10),40,103,49,50,50,50,32,99,108,41,0,0,0,0,0,0};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,7),40,97,54,57,57,54,41,0};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,7),40,97,55,48,48,49,41,0};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,7),40,97,55,48,49,49,41,0};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,27),40,99,111,109,112,105,108,101,32,120,32,101,32,104,32,116,102,32,99,110,116,114,32,116,108,63,41,0,0,0,0,0};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,110,41};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,10),40,102,95,55,51,53,56,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,10),40,102,95,55,51,55,56,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li135[] C_aligned={C_lihdr(0,0,10),40,102,95,55,52,48,57,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li136[] C_aligned={C_lihdr(0,0,10),40,102,95,55,52,52,56,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li137[] C_aligned={C_lihdr(0,0,10),40,102,95,55,52,57,53,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li138[] C_aligned={C_lihdr(0,0,9),40,103,49,51,49,51,32,97,41,0,0,0,0,0,0,0};
static C_char C_TLS li139[] C_aligned={C_lihdr(0,0,9),40,103,49,51,52,49,32,97,41,0,0,0,0,0,0,0};
static C_char C_TLS li140[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,51,51,53,32,103,49,51,52,55,41,0,0,0,0};
static C_char C_TLS li141[] C_aligned={C_lihdr(0,0,10),40,102,95,55,53,52,51,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li142[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,51,48,55,32,103,49,51,49,57,41,0,0,0,0};
static C_char C_TLS li143[] C_aligned={C_lihdr(0,0,12),40,102,95,55,54,53,51,32,46,32,95,41,0,0,0,0};
static C_char C_TLS li144[] C_aligned={C_lihdr(0,0,26),40,99,111,109,112,105,108,101,45,99,97,108,108,32,120,32,101,32,116,102,32,99,110,116,114,41,0,0,0,0,0,0};
static C_char C_TLS li145[] C_aligned={C_lihdr(0,0,46),40,99,104,105,99,107,101,110,46,101,118,97,108,35,99,111,109,112,105,108,101,45,116,111,45,99,108,111,115,117,114,101,32,101,120,112,32,101,110,118,32,114,101,115,116,41,0,0};
static C_char C_TLS li146[] C_aligned={C_lihdr(0,0,7),40,97,55,55,51,51,41,0};
static C_char C_TLS li147[] C_aligned={C_lihdr(0,0,7),40,97,55,55,56,50,41,0};
static C_char C_TLS li148[] C_aligned={C_lihdr(0,0,7),40,97,55,55,57,49,41,0};
static C_char C_TLS li149[] C_aligned={C_lihdr(0,0,7),40,97,55,55,55,54,41,0};
static C_char C_TLS li150[] C_aligned={C_lihdr(0,0,7),40,97,55,56,48,56,41,0};
static C_char C_TLS li151[] C_aligned={C_lihdr(0,0,22),40,35,35,115,121,115,35,101,118,97,108,47,109,101,116,97,32,102,111,114,109,41,0,0};
static C_char C_TLS li152[] C_aligned={C_lihdr(0,0,21),40,115,99,104,101,109,101,35,101,118,97,108,32,120,32,46,32,101,110,118,41,0,0,0};
static C_char C_TLS li153[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,101,118,97,108,35,109,111,100,117,108,101,45,101,110,118,105,114,111,110,109,101,110,116,32,110,97,109,101,41,0,0};
static C_char C_TLS li154[] C_aligned={C_lihdr(0,0,5),40,101,114,114,41,0,0,0};
static C_char C_TLS li155[] C_aligned={C_lihdr(0,0,22),40,108,111,111,112,32,108,108,105,115,116,32,118,97,114,115,32,97,114,103,99,41,0,0};
static C_char C_TLS li156[] C_aligned={C_lihdr(0,0,38),40,35,35,115,121,115,35,100,101,99,111,109,112,111,115,101,45,108,97,109,98,100,97,45,108,105,115,116,32,108,108,105,115,116,48,32,107,41,0,0};
static C_char C_TLS li157[] C_aligned={C_lihdr(0,0,32),40,115,99,104,101,109,101,35,105,110,116,101,114,97,99,116,105,111,110,45,101,110,118,105,114,111,110,109,101,110,116,41};
static C_char C_TLS li158[] C_aligned={C_lihdr(0,0,17),40,102,111,108,100,114,49,53,51,52,32,103,49,53,51,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li159[] C_aligned={C_lihdr(0,0,10),40,115,116,114,105,112,32,115,101,41,0,0,0,0,0,0};
static C_char C_TLS li160[] C_aligned={C_lihdr(0,0,36),40,115,99,104,101,109,101,35,115,99,104,101,109,101,45,114,101,112,111,114,116,45,101,110,118,105,114,111,110,109,101,110,116,32,110,41,0,0,0,0};
static C_char C_TLS li161[] C_aligned={C_lihdr(0,0,27),40,115,99,104,101,109,101,35,110,117,108,108,45,101,110,118,105,114,111,110,109,101,110,116,32,110,41,0,0,0,0,0};
static C_char C_TLS li162[] C_aligned={C_lihdr(0,0,28),40,99,104,105,99,107,101,110,46,108,111,97,100,35,99,111,114,101,45,117,110,105,116,63,32,105,100,41,0,0,0,0};
static C_char C_TLS li163[] C_aligned={C_lihdr(0,0,18),40,35,35,115,121,115,35,112,114,111,118,105,100,101,32,105,100,41,0,0,0,0,0,0};
static C_char C_TLS li164[] C_aligned={C_lihdr(0,0,20),40,35,35,115,121,115,35,112,114,111,118,105,100,101,100,63,32,105,100,41,0,0,0,0};
static C_char C_TLS li165[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li166[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,108,111,97,100,35,112,97,116,104,45,115,101,112,97,114,97,116,111,114,45,105,110,100,101,120,47,114,105,103,104,116,32,115,41,0,0,0,0,0};
static C_char C_TLS li167[] C_aligned={C_lihdr(0,0,47),40,99,104,105,99,107,101,110,46,108,111,97,100,35,109,97,107,101,45,114,101,108,97,116,105,118,101,45,112,97,116,104,110,97,109,101,32,102,114,111,109,32,102,105,108,101,41,0};
static C_char C_TLS li168[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,109,111,100,101,41,0,0,0,0,0};
static C_char C_TLS li169[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,108,111,97,100,35,115,101,116,45,100,121,110,97,109,105,99,45,108,111,97,100,45,109,111,100,101,33,32,109,111,100,101,41,0,0,0,0,0,0};
static C_char C_TLS li170[] C_aligned={C_lihdr(0,0,34),40,99,104,105,99,107,101,110,46,108,111,97,100,35,99,45,116,111,112,108,101,118,101,108,32,110,97,109,101,32,108,111,99,41,0,0,0,0,0,0};
static C_char C_TLS li171[] C_aligned={C_lihdr(0,0,13),40,102,95,57,54,51,48,32,112,97,116,104,41,0,0,0};
static C_char C_TLS li172[] C_aligned={C_lihdr(0,0,7),40,97,57,54,56,56,41,0};
static C_char C_TLS li173[] C_aligned={C_lihdr(0,0,7),40,97,57,55,48,54,41,0};
static C_char C_TLS li174[] C_aligned={C_lihdr(0,0,7),40,97,57,55,53,56,41,0};
static C_char C_TLS li175[] C_aligned={C_lihdr(0,0,11),40,97,57,55,54,52,32,46,32,116,41,0,0,0,0,0};
static C_char C_TLS li176[] C_aligned={C_lihdr(0,0,7),40,97,57,55,52,54,41,0};
static C_char C_TLS li177[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,51,51,48,32,103,50,51,51,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li178[] C_aligned={C_lihdr(0,0,17),40,97,57,55,56,48,32,46,32,114,101,115,117,108,116,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li179[] C_aligned={C_lihdr(0,0,14),40,100,111,108,111,111,112,50,51,50,48,32,120,41,0,0};
static C_char C_TLS li180[] C_aligned={C_lihdr(0,0,7),40,97,57,55,48,57,41,0};
static C_char C_TLS li181[] C_aligned={C_lihdr(0,0,7),40,97,57,56,52,48,41,0};
static C_char C_TLS li182[] C_aligned={C_lihdr(0,0,7),40,97,57,54,57,55,41,0};
static C_char C_TLS li183[] C_aligned={C_lihdr(0,0,7),40,97,57,56,52,57,41,0};
static C_char C_TLS li184[] C_aligned={C_lihdr(0,0,7),40,97,57,54,56,50,41,0};
static C_char C_TLS li185[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,108,111,97,100,35,108,111,97,100,47,105,110,116,101,114,110,97,108,32,105,110,112,117,116,32,101,118,97,108,117,97,116,111,114,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li186[] C_aligned={C_lihdr(0,0,29),40,115,99,104,101,109,101,35,108,111,97,100,32,102,105,108,101,110,97,109,101,32,46,32,114,101,115,116,41,0,0,0};
static C_char C_TLS li187[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,108,111,97,100,35,108,111,97,100,45,114,101,108,97,116,105,118,101,32,102,105,108,101,110,97,109,101,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char C_TLS li188[] C_aligned={C_lihdr(0,0,8),40,97,49,48,48,51,54,41};
static C_char C_TLS li189[] C_aligned={C_lihdr(0,0,8),40,97,49,48,48,51,57,41};
static C_char C_TLS li190[] C_aligned={C_lihdr(0,0,8),40,97,49,48,48,52,50,41};
static C_char C_TLS li191[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,108,111,97,100,35,108,111,97,100,45,110,111,105,115,105,108,121,32,102,105,108,101,110,97,109,101,32,46,32,114,101,115,116,41,0,0,0,0,0};
static C_char C_TLS li192[] C_aligned={C_lihdr(0,0,16),40,99,111,109,112,108,101,116,101,32,103,50,52,48,52,41};
static C_char C_TLS li193[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,108,105,98,115,41,0,0,0,0,0};
static C_char C_TLS li194[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,108,111,97,100,35,108,111,97,100,45,117,110,105,116,32,117,110,105,116,45,110,97,109,101,32,108,105,98,32,108,111,99,41,0,0,0,0,0,0};
static C_char C_TLS li195[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,108,111,97,100,35,108,111,97,100,45,108,105,98,114,97,114,121,32,117,110,105,116,45,110,97,109,101,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char C_TLS li196[] C_aligned={C_lihdr(0,0,8),40,97,49,48,49,57,55,41};
static C_char C_TLS li197[] C_aligned={C_lihdr(0,0,17),40,100,111,108,111,111,112,50,52,56,55,32,120,32,120,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li198[] C_aligned={C_lihdr(0,0,8),40,97,49,48,50,48,50,41};
static C_char C_TLS li199[] C_aligned={C_lihdr(0,0,8),40,97,49,48,50,51,57,41};
static C_char C_TLS li200[] C_aligned={C_lihdr(0,0,8),40,97,49,48,49,57,49,41};
static C_char C_TLS li201[] C_aligned={C_lihdr(0,0,49),40,35,35,115,121,115,35,105,110,99,108,117,100,101,45,102,111,114,109,115,45,102,114,111,109,45,102,105,108,101,32,102,105,108,101,110,97,109,101,32,115,111,117,114,99,101,32,107,41,0,0,0,0,0,0,0};
static C_char C_TLS li202[] C_aligned={C_lihdr(0,0,32),40,99,104,105,99,107,101,110,46,108,111,97,100,35,102,105,108,101,45,101,120,105,115,116,115,63,32,110,97,109,101,41};
static C_char C_TLS li203[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,108,111,97,100,35,102,105,110,100,45,102,105,108,101,32,110,97,109,101,32,115,101,97,114,99,104,45,112,97,116,104,41,0,0,0,0,0,0,0};
static C_char C_TLS li204[] C_aligned={C_lihdr(0,0,12),40,99,104,101,99,107,32,112,97,116,104,41,0,0,0,0};
static C_char C_TLS li205[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,112,97,116,104,115,41,0,0,0,0};
static C_char C_TLS li206[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,108,111,97,100,35,102,105,110,100,45,100,121,110,97,109,105,99,45,101,120,116,101,110,115,105,111,110,32,105,100,32,105,110,99,63,41,0,0,0};
static C_char C_TLS li207[] C_aligned={C_lihdr(0,0,11),40,103,50,53,53,56,32,101,120,116,41,0,0,0,0,0};
static C_char C_TLS li208[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,108,111,97,100,35,108,111,97,100,45,101,120,116,101,110,115,105,111,110,32,108,105,98,32,109,111,100,32,108,111,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li209[] C_aligned={C_lihdr(0,0,19),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,53,54,55,41,0,0,0,0,0};
static C_char C_TLS li210[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,53,55,55,32,103,50,53,56,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li211[] C_aligned={C_lihdr(0,0,28),40,99,104,105,99,107,101,110,46,108,111,97,100,35,114,101,113,117,105,114,101,32,46,32,105,100,115,41,0,0,0,0};
static C_char C_TLS li212[] C_aligned={C_lihdr(0,0,19),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,54,50,48,41,0,0,0,0,0};
static C_char C_TLS li213[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,54,51,48,32,103,50,54,51,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li214[] C_aligned={C_lihdr(0,0,28),40,99,104,105,99,107,101,110,46,108,111,97,100,35,112,114,111,118,105,100,101,32,46,32,105,100,115,41,0,0,0,0};
static C_char C_TLS li215[] C_aligned={C_lihdr(0,0,19),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,54,55,51,41,0,0,0,0,0};
static C_char C_TLS li216[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,108,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li217[] C_aligned={C_lihdr(0,0,30),40,99,104,105,99,107,101,110,46,108,111,97,100,35,112,114,111,118,105,100,101,100,63,32,46,32,105,100,115,41,0,0};
static C_char C_TLS li218[] C_aligned={C_lihdr(0,0,44),40,35,35,115,121,115,35,112,114,111,99,101,115,115,45,114,101,113,117,105,114,101,32,108,105,98,32,109,111,100,32,99,111,109,112,105,108,101,45,109,111,100,101,41,0,0,0,0};
static C_char C_TLS li219[] C_aligned={C_lihdr(0,0,27),40,116,101,115,116,45,101,120,116,101,110,115,105,111,110,115,32,102,110,97,109,101,32,108,115,116,41,0,0,0,0,0};
static C_char C_TLS li220[] C_aligned={C_lihdr(0,0,12),40,116,101,115,116,32,102,110,97,109,101,41,0,0,0,0};
static C_char C_TLS li221[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,112,97,116,104,115,41,0,0,0,0};
static C_char C_TLS li222[] C_aligned={C_lihdr(0,0,55),40,35,35,115,121,115,35,114,101,115,111,108,118,101,45,105,110,99,108,117,100,101,45,102,105,108,101,110,97,109,101,32,102,110,97,109,101,32,101,120,116,115,32,114,101,112,111,32,115,111,117,114,99,101,41,0};
static C_char C_TLS li223[] C_aligned={C_lihdr(0,0,8),40,97,49,48,57,49,52,41};
static C_char C_TLS li224[] C_aligned={C_lihdr(0,0,11),40,97,49,48,57,48,56,32,101,120,41,0,0,0,0,0};
static C_char C_TLS li225[] C_aligned={C_lihdr(0,0,8),40,97,49,48,57,51,51,41};
static C_char C_TLS li226[] C_aligned={C_lihdr(0,0,8),40,97,49,48,57,52,53,41};
static C_char C_TLS li227[] C_aligned={C_lihdr(0,0,15),40,97,49,48,57,51,57,32,46,32,97,114,103,115,41,0};
static C_char C_TLS li228[] C_aligned={C_lihdr(0,0,8),40,97,49,48,57,50,55,41};
static C_char C_TLS li229[] C_aligned={C_lihdr(0,0,10),40,97,49,48,57,48,50,32,107,41,0,0,0,0,0,0};
static C_char C_TLS li230[] C_aligned={C_lihdr(0,0,16),40,114,117,110,45,115,97,102,101,32,116,104,117,110,107,41};
static C_char C_TLS li231[] C_aligned={C_lihdr(0,0,23),40,115,116,111,114,101,45,114,101,115,117,108,116,32,120,32,114,101,115,117,108,116,41,0};
static C_char C_TLS li232[] C_aligned={C_lihdr(0,0,8),40,97,49,48,57,54,54,41};
static C_char C_TLS li233[] C_aligned={C_lihdr(0,0,15),40,67,72,73,67,75,69,78,95,121,105,101,108,100,41,0};
static C_char C_TLS li234[] C_aligned={C_lihdr(0,0,8),40,97,49,48,57,55,56,41};
static C_char C_TLS li235[] C_aligned={C_lihdr(0,0,25),40,67,72,73,67,75,69,78,95,101,118,97,108,32,101,120,112,32,114,101,115,117,108,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li236[] C_aligned={C_lihdr(0,0,8),40,97,49,48,57,57,55,41};
static C_char C_TLS li237[] C_aligned={C_lihdr(0,0,32),40,67,72,73,67,75,69,78,95,101,118,97,108,95,115,116,114,105,110,103,32,115,116,114,32,114,101,115,117,108,116,41};
static C_char C_TLS li238[] C_aligned={C_lihdr(0,0,26),40,115,116,111,114,101,45,115,116,114,105,110,103,32,98,117,102,115,105,122,101,32,98,117,102,41,0,0,0,0,0,0};
static C_char C_TLS li239[] C_aligned={C_lihdr(0,0,8),40,97,49,49,48,51,51,41};
static C_char C_TLS li240[] C_aligned={C_lihdr(0,0,40),40,67,72,73,67,75,69,78,95,101,118,97,108,95,116,111,95,115,116,114,105,110,103,32,101,120,112,32,98,117,102,32,98,117,102,115,105,122,101,41};
static C_char C_TLS li241[] C_aligned={C_lihdr(0,0,8),40,97,49,49,48,54,50,41};
static C_char C_TLS li242[] C_aligned={C_lihdr(0,0,47),40,67,72,73,67,75,69,78,95,101,118,97,108,95,115,116,114,105,110,103,95,116,111,95,115,116,114,105,110,103,32,115,116,114,32,98,117,102,32,98,117,102,115,105,122,101,41,0};
static C_char C_TLS li243[] C_aligned={C_lihdr(0,0,8),40,97,49,49,48,57,54,41};
static C_char C_TLS li244[] C_aligned={C_lihdr(0,0,32),40,67,72,73,67,75,69,78,95,97,112,112,108,121,32,102,117,110,99,32,97,114,103,115,32,114,101,115,117,108,116,41};
static C_char C_TLS li245[] C_aligned={C_lihdr(0,0,8),40,97,49,49,49,49,50,41};
static C_char C_TLS li246[] C_aligned={C_lihdr(0,0,47),40,67,72,73,67,75,69,78,95,97,112,112,108,121,95,116,111,95,115,116,114,105,110,103,32,102,117,110,99,32,97,114,103,115,32,98,117,102,32,98,117,102,115,105,122,101,41,0};
static C_char C_TLS li247[] C_aligned={C_lihdr(0,0,8),40,97,49,49,49,52,49,41};
static C_char C_TLS li248[] C_aligned={C_lihdr(0,0,25),40,67,72,73,67,75,69,78,95,114,101,97,100,32,115,116,114,32,114,101,115,117,108,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li249[] C_aligned={C_lihdr(0,0,8),40,97,49,49,49,54,51,41};
static C_char C_TLS li250[] C_aligned={C_lihdr(0,0,18),40,67,72,73,67,75,69,78,95,108,111,97,100,32,115,116,114,41,0,0,0,0,0,0};
static C_char C_TLS li251[] C_aligned={C_lihdr(0,0,39),40,67,72,73,67,75,69,78,95,103,101,116,95,101,114,114,111,114,95,109,101,115,115,97,103,101,32,98,117,102,32,98,117,102,115,105,122,101,41,0};
static C_char C_TLS li252[] C_aligned={C_lihdr(0,0,10),40,97,49,49,49,57,48,32,120,41,0,0,0,0,0,0};
static C_char C_TLS li253[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,52,49,49,32,103,50,52,50,51,41,0,0,0,0};
static C_char C_TLS li254[] C_aligned={C_lihdr(0,0,12),40,97,49,49,51,50,52,32,101,32,112,41,0,0,0,0};
static C_char C_TLS li255[] C_aligned={C_lihdr(0,0,21),40,97,49,49,51,52,54,32,115,121,109,32,112,114,111,112,32,118,97,108,41,0,0,0};
static C_char C_TLS li256[] C_aligned={C_lihdr(0,0,8),40,97,49,49,51,55,51,41};
static C_char C_TLS li257[] C_aligned={C_lihdr(0,0,12),40,100,111,108,111,111,112,49,52,57,52,41,0,0,0,0};
static C_char C_TLS li258[] C_aligned={C_lihdr(0,0,8),40,97,49,49,51,55,56,41};
static C_char C_TLS li259[] C_aligned={C_lihdr(0,0,14),40,97,49,49,51,54,55,32,116,104,117,110,107,41,0,0};
static C_char C_TLS li260[] C_aligned={C_lihdr(0,0,8),40,97,49,49,51,52,48,41};
static C_char C_TLS li261[] C_aligned={C_lihdr(0,0,63),40,97,49,49,52,48,56,32,35,35,115,121,115,35,112,117,116,47,114,101,115,116,111,114,101,33,49,52,56,49,32,35,35,115,121,115,35,119,105,116,104,45,112,114,111,112,101,114,116,121,45,114,101,115,116,111,114,101,49,52,56,50,41,0};
static C_char C_TLS li262[] C_aligned={C_lihdr(0,0,8),40,97,49,49,52,52,51,41};
static C_char C_TLS li263[] C_aligned={C_lihdr(0,0,8),40,97,49,49,52,55,51,41};
static C_char C_TLS li264[] C_aligned={C_lihdr(0,0,8),40,97,49,49,52,56,51,41};
static C_char C_TLS li265[] C_aligned={C_lihdr(0,0,17),40,97,49,49,52,49,51,32,120,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li266[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_10004)
static void C_ccall f_10004(C_word c,C_word *av) C_noret;
C_noret_decl(f_10011)
static void C_ccall f_10011(C_word c,C_word *av) C_noret;
C_noret_decl(f_10022)
static void C_ccall f_10022(C_word c,C_word *av) C_noret;
C_noret_decl(f_10026)
static void C_ccall f_10026(C_word c,C_word *av) C_noret;
C_noret_decl(f_10029)
static void C_ccall f_10029(C_word c,C_word *av) C_noret;
C_noret_decl(f_10032)
static void C_ccall f_10032(C_word c,C_word *av) C_noret;
C_noret_decl(f_10037)
static void C_ccall f_10037(C_word c,C_word *av) C_noret;
C_noret_decl(f_10040)
static void C_ccall f_10040(C_word c,C_word *av) C_noret;
C_noret_decl(f_10043)
static void C_ccall f_10043(C_word c,C_word *av) C_noret;
C_noret_decl(f_10048)
static void C_ccall f_10048(C_word c,C_word *av) C_noret;
C_noret_decl(f_10050)
static void C_fcall f_10050(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10057)
static void C_ccall f_10057(C_word c,C_word *av) C_noret;
C_noret_decl(f_10059)
static void C_ccall f_10059(C_word c,C_word *av) C_noret;
C_noret_decl(f_10066)
static void C_ccall f_10066(C_word c,C_word *av) C_noret;
C_noret_decl(f_10069)
static void C_fcall f_10069(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10072)
static void C_ccall f_10072(C_word c,C_word *av) C_noret;
C_noret_decl(f_10075)
static void C_ccall f_10075(C_word c,C_word *av) C_noret;
C_noret_decl(f_10080)
static void C_fcall f_10080(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10094)
static void C_ccall f_10094(C_word c,C_word *av) C_noret;
C_noret_decl(f_10103)
static void C_ccall f_10103(C_word c,C_word *av) C_noret;
C_noret_decl(f_10114)
static void C_ccall f_10114(C_word c,C_word *av) C_noret;
C_noret_decl(f_10121)
static void C_ccall f_10121(C_word c,C_word *av) C_noret;
C_noret_decl(f_10124)
static void C_ccall f_10124(C_word c,C_word *av) C_noret;
C_noret_decl(f_10127)
static void C_ccall f_10127(C_word c,C_word *av) C_noret;
C_noret_decl(f_10140)
static void C_ccall f_10140(C_word c,C_word *av) C_noret;
C_noret_decl(f_10144)
static void C_ccall f_10144(C_word c,C_word *av) C_noret;
C_noret_decl(f_10150)
static void C_ccall f_10150(C_word c,C_word *av) C_noret;
C_noret_decl(f_10177)
static void C_ccall f_10177(C_word c,C_word *av) C_noret;
C_noret_decl(f_10181)
static void C_ccall f_10181(C_word c,C_word *av) C_noret;
C_noret_decl(f_10184)
static void C_ccall f_10184(C_word c,C_word *av) C_noret;
C_noret_decl(f_10187)
static void C_ccall f_10187(C_word c,C_word *av) C_noret;
C_noret_decl(f_10192)
static void C_ccall f_10192(C_word c,C_word *av) C_noret;
C_noret_decl(f_10198)
static void C_ccall f_10198(C_word c,C_word *av) C_noret;
C_noret_decl(f_10203)
static void C_ccall f_10203(C_word c,C_word *av) C_noret;
C_noret_decl(f_10211)
static void C_ccall f_10211(C_word c,C_word *av) C_noret;
C_noret_decl(f_10213)
static void C_fcall f_10213(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10227)
static void C_ccall f_10227(C_word c,C_word *av) C_noret;
C_noret_decl(f_10234)
static void C_ccall f_10234(C_word c,C_word *av) C_noret;
C_noret_decl(f_10240)
static void C_ccall f_10240(C_word c,C_word *av) C_noret;
C_noret_decl(f_10246)
static void C_ccall f_10246(C_word c,C_word *av) C_noret;
C_noret_decl(f_10258)
static void C_fcall f_10258(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10265)
static void C_ccall f_10265(C_word c,C_word *av) C_noret;
C_noret_decl(f_10267)
static void C_ccall f_10267(C_word c,C_word *av) C_noret;
C_noret_decl(f_10296)
static void C_ccall f_10296(C_word c,C_word *av) C_noret;
C_noret_decl(f_10308)
static void C_ccall f_10308(C_word c,C_word *av) C_noret;
C_noret_decl(f_10314)
static void C_ccall f_10314(C_word c,C_word *av) C_noret;
C_noret_decl(f_10318)
static void C_ccall f_10318(C_word c,C_word *av) C_noret;
C_noret_decl(f_10321)
static void C_ccall f_10321(C_word c,C_word *av) C_noret;
C_noret_decl(f_10323)
static void C_fcall f_10323(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10327)
static void C_ccall f_10327(C_word c,C_word *av) C_noret;
C_noret_decl(f_10330)
static void C_ccall f_10330(C_word c,C_word *av) C_noret;
C_noret_decl(f_10340)
static void C_ccall f_10340(C_word c,C_word *av) C_noret;
C_noret_decl(f_10352)
static void C_ccall f_10352(C_word c,C_word *av) C_noret;
C_noret_decl(f_10359)
static void C_ccall f_10359(C_word c,C_word *av) C_noret;
C_noret_decl(f_10366)
static void C_ccall f_10366(C_word c,C_word *av) C_noret;
C_noret_decl(f_10368)
static void C_fcall f_10368(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10381)
static void C_ccall f_10381(C_word c,C_word *av) C_noret;
C_noret_decl(f_10415)
static void C_ccall f_10415(C_word c,C_word *av) C_noret;
C_noret_decl(f_10424)
static void C_ccall f_10424(C_word c,C_word *av) C_noret;
C_noret_decl(f_10440)
static void C_ccall f_10440(C_word c,C_word *av) C_noret;
C_noret_decl(f_10453)
static void C_ccall f_10453(C_word c,C_word *av) C_noret;
C_noret_decl(f_10456)
static void C_ccall f_10456(C_word c,C_word *av) C_noret;
C_noret_decl(f_10468)
static void C_ccall f_10468(C_word c,C_word *av) C_noret;
C_noret_decl(f_10472)
static void C_fcall f_10472(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10476)
static void C_ccall f_10476(C_word c,C_word *av) C_noret;
C_noret_decl(f_10479)
static void C_ccall f_10479(C_word c,C_word *av) C_noret;
C_noret_decl(f_10487)
static void C_ccall f_10487(C_word c,C_word *av) C_noret;
C_noret_decl(f_10506)
static void C_fcall f_10506(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10516)
static void C_ccall f_10516(C_word c,C_word *av) C_noret;
C_noret_decl(f_10529)
static C_word C_fcall f_10529(C_word t0);
C_noret_decl(f_10552)
static void C_ccall f_10552(C_word c,C_word *av) C_noret;
C_noret_decl(f_10571)
static void C_fcall f_10571(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10581)
static void C_ccall f_10581(C_word c,C_word *av) C_noret;
C_noret_decl(f_10594)
static C_word C_fcall f_10594(C_word t0);
C_noret_decl(f_10617)
static void C_ccall f_10617(C_word c,C_word *av) C_noret;
C_noret_decl(f_10631)
static C_word C_fcall f_10631(C_word t0);
C_noret_decl(f_10658)
static void C_ccall f_10658(C_word c,C_word *av) C_noret;
C_noret_decl(f_10761)
static void C_ccall f_10761(C_word c,C_word *av) C_noret;
C_noret_decl(f_10764)
static void C_fcall f_10764(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10777)
static void C_ccall f_10777(C_word c,C_word *av) C_noret;
C_noret_decl(f_10780)
static void C_ccall f_10780(C_word c,C_word *av) C_noret;
C_noret_decl(f_10783)
static void C_ccall f_10783(C_word c,C_word *av) C_noret;
C_noret_decl(f_10797)
static void C_fcall f_10797(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10833)
static void C_ccall f_10833(C_word c,C_word *av) C_noret;
C_noret_decl(f_10836)
static void C_ccall f_10836(C_word c,C_word *av) C_noret;
C_noret_decl(f_10846)
static void C_ccall f_10846(C_word c,C_word *av) C_noret;
C_noret_decl(f_10848)
static void C_fcall f_10848(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10858)
static void C_ccall f_10858(C_word c,C_word *av) C_noret;
C_noret_decl(f_10872)
static void C_ccall f_10872(C_word c,C_word *av) C_noret;
C_noret_decl(f_10883)
static void C_ccall f_10883(C_word c,C_word *av) C_noret;
C_noret_decl(f_10890)
static void C_ccall f_10890(C_word c,C_word *av) C_noret;
C_noret_decl(f_10893)
static void C_fcall f_10893(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10898)
static void C_ccall f_10898(C_word c,C_word *av) C_noret;
C_noret_decl(f_10903)
static void C_ccall f_10903(C_word c,C_word *av) C_noret;
C_noret_decl(f_10909)
static void C_ccall f_10909(C_word c,C_word *av) C_noret;
C_noret_decl(f_10915)
static void C_ccall f_10915(C_word c,C_word *av) C_noret;
C_noret_decl(f_10919)
static void C_ccall f_10919(C_word c,C_word *av) C_noret;
C_noret_decl(f_10922)
static void C_ccall f_10922(C_word c,C_word *av) C_noret;
C_noret_decl(f_10926)
static void C_ccall f_10926(C_word c,C_word *av) C_noret;
C_noret_decl(f_10928)
static void C_ccall f_10928(C_word c,C_word *av) C_noret;
C_noret_decl(f_10934)
static void C_ccall f_10934(C_word c,C_word *av) C_noret;
C_noret_decl(f_10940)
static void C_ccall f_10940(C_word c,C_word *av) C_noret;
C_noret_decl(f_10946)
static void C_ccall f_10946(C_word c,C_word *av) C_noret;
C_noret_decl(f_10952)
static void C_fcall f_10952(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10956)
static void C_ccall f_10956(C_word c,C_word *av) C_noret;
C_noret_decl(f_10961)
static void C_ccall f_10961(C_word c,C_word *av) C_noret;
C_noret_decl(f_10967)
static void C_ccall f_10967(C_word c,C_word *av) C_noret;
C_noret_decl(f_10971)
static void C_ccall f_10971(C_word c,C_word *av) C_noret;
C_noret_decl(f_10973)
static void C_ccall f_10973(C_word c,C_word *av) C_noret;
C_noret_decl(f_10979)
static void C_ccall f_10979(C_word c,C_word *av) C_noret;
C_noret_decl(f_10987)
static void C_ccall f_10987(C_word c,C_word *av) C_noret;
C_noret_decl(f_10989)
static void C_ccall f_10989(C_word c,C_word *av) C_noret;
C_noret_decl(f_10993)
static void C_ccall f_10993(C_word c,C_word *av) C_noret;
C_noret_decl(f_10998)
static void C_ccall f_10998(C_word c,C_word *av) C_noret;
C_noret_decl(f_11002)
static void C_ccall f_11002(C_word c,C_word *av) C_noret;
C_noret_decl(f_11009)
static void C_ccall f_11009(C_word c,C_word *av) C_noret;
C_noret_decl(f_11013)
static void C_ccall f_11013(C_word c,C_word *av) C_noret;
C_noret_decl(f_11015)
static C_word C_fcall f_11015(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_11028)
static void C_ccall f_11028(C_word c,C_word *av) C_noret;
C_noret_decl(f_11034)
static void C_ccall f_11034(C_word c,C_word *av) C_noret;
C_noret_decl(f_11038)
static void C_ccall f_11038(C_word c,C_word *av) C_noret;
C_noret_decl(f_11041)
static void C_ccall f_11041(C_word c,C_word *av) C_noret;
C_noret_decl(f_11048)
static void C_ccall f_11048(C_word c,C_word *av) C_noret;
C_noret_decl(f_11052)
static void C_ccall f_11052(C_word c,C_word *av) C_noret;
C_noret_decl(f_11054)
static void C_ccall f_11054(C_word c,C_word *av) C_noret;
C_noret_decl(f_11058)
static void C_ccall f_11058(C_word c,C_word *av) C_noret;
C_noret_decl(f_11063)
static void C_ccall f_11063(C_word c,C_word *av) C_noret;
C_noret_decl(f_11067)
static void C_ccall f_11067(C_word c,C_word *av) C_noret;
C_noret_decl(f_11070)
static void C_ccall f_11070(C_word c,C_word *av) C_noret;
C_noret_decl(f_11077)
static void C_ccall f_11077(C_word c,C_word *av) C_noret;
C_noret_decl(f_11081)
static void C_ccall f_11081(C_word c,C_word *av) C_noret;
C_noret_decl(f_11085)
static void C_ccall f_11085(C_word c,C_word *av) C_noret;
C_noret_decl(f_11089)
static void C_ccall f_11089(C_word c,C_word *av) C_noret;
C_noret_decl(f_11091)
static void C_ccall f_11091(C_word c,C_word *av) C_noret;
C_noret_decl(f_11097)
static void C_ccall f_11097(C_word c,C_word *av) C_noret;
C_noret_decl(f_11105)
static void C_ccall f_11105(C_word c,C_word *av) C_noret;
C_noret_decl(f_11107)
static void C_ccall f_11107(C_word c,C_word *av) C_noret;
C_noret_decl(f_11113)
static void C_ccall f_11113(C_word c,C_word *av) C_noret;
C_noret_decl(f_11117)
static void C_ccall f_11117(C_word c,C_word *av) C_noret;
C_noret_decl(f_11120)
static void C_ccall f_11120(C_word c,C_word *av) C_noret;
C_noret_decl(f_11127)
static void C_ccall f_11127(C_word c,C_word *av) C_noret;
C_noret_decl(f_11131)
static void C_ccall f_11131(C_word c,C_word *av) C_noret;
C_noret_decl(f_11133)
static void C_ccall f_11133(C_word c,C_word *av) C_noret;
C_noret_decl(f_11137)
static void C_ccall f_11137(C_word c,C_word *av) C_noret;
C_noret_decl(f_11142)
static void C_ccall f_11142(C_word c,C_word *av) C_noret;
C_noret_decl(f_11146)
static void C_ccall f_11146(C_word c,C_word *av) C_noret;
C_noret_decl(f_11153)
static void C_ccall f_11153(C_word c,C_word *av) C_noret;
C_noret_decl(f_11155)
static void C_ccall f_11155(C_word c,C_word *av) C_noret;
C_noret_decl(f_11159)
static void C_ccall f_11159(C_word c,C_word *av) C_noret;
C_noret_decl(f_11164)
static void C_ccall f_11164(C_word c,C_word *av) C_noret;
C_noret_decl(f_11168)
static void C_ccall f_11168(C_word c,C_word *av) C_noret;
C_noret_decl(f_11170)
static void C_ccall f_11170(C_word c,C_word *av) C_noret;
C_noret_decl(f_11182)
static void C_ccall f_11182(C_word c,C_word *av) C_noret;
C_noret_decl(f_11189)
static void C_ccall f_11189(C_word c,C_word *av) C_noret;
C_noret_decl(f_11191)
static void C_ccall f_11191(C_word c,C_word *av) C_noret;
C_noret_decl(f_11197)
static void C_fcall f_11197(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11222)
static void C_ccall f_11222(C_word c,C_word *av) C_noret;
C_noret_decl(f_11236)
static void C_ccall f_11236(C_word c,C_word *av) C_noret;
C_noret_decl(f_11248)
static void C_ccall f_11248(C_word c,C_word *av) C_noret;
C_noret_decl(f_11252)
static void C_ccall f_11252(C_word c,C_word *av) C_noret;
C_noret_decl(f_11279)
static void C_ccall f_11279(C_word c,C_word *av) C_noret;
C_noret_decl(f_11283)
static void C_ccall f_11283(C_word c,C_word *av) C_noret;
C_noret_decl(f_11287)
static void C_ccall f_11287(C_word c,C_word *av) C_noret;
C_noret_decl(f_11291)
static void C_ccall f_11291(C_word c,C_word *av) C_noret;
C_noret_decl(f_11295)
static void C_ccall f_11295(C_word c,C_word *av) C_noret;
C_noret_decl(f_11303)
static void C_ccall f_11303(C_word c,C_word *av) C_noret;
C_noret_decl(f_11311)
static void C_ccall f_11311(C_word c,C_word *av) C_noret;
C_noret_decl(f_11319)
static void C_ccall f_11319(C_word c,C_word *av) C_noret;
C_noret_decl(f_11325)
static void C_ccall f_11325(C_word c,C_word *av) C_noret;
C_noret_decl(f_11329)
static void C_ccall f_11329(C_word c,C_word *av) C_noret;
C_noret_decl(f_11332)
static void C_ccall f_11332(C_word c,C_word *av) C_noret;
C_noret_decl(f_11341)
static void C_ccall f_11341(C_word c,C_word *av) C_noret;
C_noret_decl(f_11347)
static void C_ccall f_11347(C_word c,C_word *av) C_noret;
C_noret_decl(f_11351)
static void C_fcall f_11351(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11354)
static void C_ccall f_11354(C_word c,C_word *av) C_noret;
C_noret_decl(f_11366)
static void C_ccall f_11366(C_word c,C_word *av) C_noret;
C_noret_decl(f_11368)
static void C_ccall f_11368(C_word c,C_word *av) C_noret;
C_noret_decl(f_11374)
static void C_ccall f_11374(C_word c,C_word *av) C_noret;
C_noret_decl(f_11379)
static void C_ccall f_11379(C_word c,C_word *av) C_noret;
C_noret_decl(f_11383)
static void C_ccall f_11383(C_word c,C_word *av) C_noret;
C_noret_decl(f_11386)
static void C_fcall f_11386(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11396)
static void C_ccall f_11396(C_word c,C_word *av) C_noret;
C_noret_decl(f_11409)
static void C_ccall f_11409(C_word c,C_word *av) C_noret;
C_noret_decl(f_11414)
static void C_ccall f_11414(C_word c,C_word *av) C_noret;
C_noret_decl(f_11421)
static void C_ccall f_11421(C_word c,C_word *av) C_noret;
C_noret_decl(f_11424)
static void C_ccall f_11424(C_word c,C_word *av) C_noret;
C_noret_decl(f_11436)
static void C_ccall f_11436(C_word c,C_word *av) C_noret;
C_noret_decl(f_11444)
static void C_ccall f_11444(C_word c,C_word *av) C_noret;
C_noret_decl(f_11448)
static void C_ccall f_11448(C_word c,C_word *av) C_noret;
C_noret_decl(f_11451)
static void C_ccall f_11451(C_word c,C_word *av) C_noret;
C_noret_decl(f_11455)
static void C_ccall f_11455(C_word c,C_word *av) C_noret;
C_noret_decl(f_11459)
static void C_ccall f_11459(C_word c,C_word *av) C_noret;
C_noret_decl(f_11462)
static void C_ccall f_11462(C_word c,C_word *av) C_noret;
C_noret_decl(f_11465)
static void C_ccall f_11465(C_word c,C_word *av) C_noret;
C_noret_decl(f_11474)
static void C_ccall f_11474(C_word c,C_word *av) C_noret;
C_noret_decl(f_11484)
static void C_ccall f_11484(C_word c,C_word *av) C_noret;
C_noret_decl(f_11488)
static void C_ccall f_11488(C_word c,C_word *av) C_noret;
C_noret_decl(f_11491)
static void C_ccall f_11491(C_word c,C_word *av) C_noret;
C_noret_decl(f_11494)
static void C_ccall f_11494(C_word c,C_word *av) C_noret;
C_noret_decl(f_11497)
static void C_ccall f_11497(C_word c,C_word *av) C_noret;
C_noret_decl(f_11505)
static void C_ccall f_11505(C_word c,C_word *av) C_noret;
C_noret_decl(f_11514)
static void C_ccall f_11514(C_word c,C_word *av) C_noret;
C_noret_decl(f_3492)
static void C_ccall f_3492(C_word c,C_word *av) C_noret;
C_noret_decl(f_3495)
static void C_ccall f_3495(C_word c,C_word *av) C_noret;
C_noret_decl(f_3498)
static void C_ccall f_3498(C_word c,C_word *av) C_noret;
C_noret_decl(f_3501)
static void C_ccall f_3501(C_word c,C_word *av) C_noret;
C_noret_decl(f_3509)
static void C_ccall f_3509(C_word c,C_word *av) C_noret;
C_noret_decl(f_3522)
static void C_ccall f_3522(C_word c,C_word *av) C_noret;
C_noret_decl(f_3530)
static void C_ccall f_3530(C_word c,C_word *av) C_noret;
C_noret_decl(f_3534)
static void C_ccall f_3534(C_word c,C_word *av) C_noret;
C_noret_decl(f_3537)
static void C_ccall f_3537(C_word c,C_word *av) C_noret;
C_noret_decl(f_3540)
static void C_ccall f_3540(C_word c,C_word *av) C_noret;
C_noret_decl(f_3545)
static void C_ccall f_3545(C_word c,C_word *av) C_noret;
C_noret_decl(f_3547)
static void C_fcall f_3547(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3574)
static void C_fcall f_3574(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3587)
static void C_fcall f_3587(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3609)
static void C_fcall f_3609(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3613)
static void C_ccall f_3613(C_word c,C_word *av) C_noret;
C_noret_decl(f_3621)
static void C_ccall f_3621(C_word c,C_word *av) C_noret;
C_noret_decl(f_3627)
static void C_ccall f_3627(C_word c,C_word *av) C_noret;
C_noret_decl(f_3634)
static void C_ccall f_3634(C_word c,C_word *av) C_noret;
C_noret_decl(f_3641)
static void C_ccall f_3641(C_word c,C_word *av) C_noret;
C_noret_decl(f_3643)
static void C_fcall f_3643(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3647)
static void C_ccall f_3647(C_word c,C_word *av) C_noret;
C_noret_decl(f_3655)
static void C_fcall f_3655(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3672)
static void C_fcall f_3672(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3702)
static C_word C_fcall f_3702(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_3732)
static C_word C_fcall f_3732(C_word *a,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4);
C_noret_decl(f_3756)
static void C_fcall f_3756(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3762)
static void C_fcall f_3762(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_3769)
static void C_ccall f_3769(C_word c,C_word *av) C_noret;
C_noret_decl(f_3770)
static void C_ccall f_3770(C_word c,C_word *av) C_noret;
C_noret_decl(f_3782)
static void C_ccall f_3782(C_word c,C_word *av) C_noret;
C_noret_decl(f_3788)
static void C_ccall f_3788(C_word c,C_word *av) C_noret;
C_noret_decl(f_3798)
static void C_ccall f_3798(C_word c,C_word *av) C_noret;
C_noret_decl(f_3801)
static void C_fcall f_3801(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3808)
static void C_ccall f_3808(C_word c,C_word *av) C_noret;
C_noret_decl(f_3818)
static void C_ccall f_3818(C_word c,C_word *av) C_noret;
C_noret_decl(f_3819)
static void C_ccall f_3819(C_word c,C_word *av) C_noret;
C_noret_decl(f_3824)
static void C_ccall f_3824(C_word c,C_word *av) C_noret;
C_noret_decl(f_3828)
static void C_fcall f_3828(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3849)
static void C_ccall f_3849(C_word c,C_word *av) C_noret;
C_noret_decl(f_3871)
static void C_ccall f_3871(C_word c,C_word *av) C_noret;
C_noret_decl(f_3882)
static void C_ccall f_3882(C_word c,C_word *av) C_noret;
C_noret_decl(f_3897)
static void C_ccall f_3897(C_word c,C_word *av) C_noret;
C_noret_decl(f_3916)
static void C_ccall f_3916(C_word c,C_word *av) C_noret;
C_noret_decl(f_3939)
static void C_ccall f_3939(C_word c,C_word *av) C_noret;
C_noret_decl(f_3960)
static void C_ccall f_3960(C_word c,C_word *av) C_noret;
C_noret_decl(f_3979)
static void C_ccall f_3979(C_word c,C_word *av) C_noret;
C_noret_decl(f_3986)
static void C_ccall f_3986(C_word c,C_word *av) C_noret;
C_noret_decl(f_3994)
static void C_ccall f_3994(C_word c,C_word *av) C_noret;
C_noret_decl(f_4002)
static void C_ccall f_4002(C_word c,C_word *av) C_noret;
C_noret_decl(f_4010)
static void C_ccall f_4010(C_word c,C_word *av) C_noret;
C_noret_decl(f_4012)
static void C_ccall f_4012(C_word c,C_word *av) C_noret;
C_noret_decl(f_4031)
static void C_ccall f_4031(C_word c,C_word *av) C_noret;
C_noret_decl(f_4033)
static void C_ccall f_4033(C_word c,C_word *av) C_noret;
C_noret_decl(f_4043)
static void C_ccall f_4043(C_word c,C_word *av) C_noret;
C_noret_decl(f_4044)
static void C_ccall f_4044(C_word c,C_word *av) C_noret;
C_noret_decl(f_4063)
static void C_fcall f_4063(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4066)
static void C_ccall f_4066(C_word c,C_word *av) C_noret;
C_noret_decl(f_4081)
static void C_ccall f_4081(C_word c,C_word *av) C_noret;
C_noret_decl(f_4090)
static void C_ccall f_4090(C_word c,C_word *av) C_noret;
C_noret_decl(f_4097)
static void C_ccall f_4097(C_word c,C_word *av) C_noret;
C_noret_decl(f_4105)
static void C_ccall f_4105(C_word c,C_word *av) C_noret;
C_noret_decl(f_4113)
static void C_ccall f_4113(C_word c,C_word *av) C_noret;
C_noret_decl(f_4121)
static void C_ccall f_4121(C_word c,C_word *av) C_noret;
C_noret_decl(f_4129)
static void C_ccall f_4129(C_word c,C_word *av) C_noret;
C_noret_decl(f_4137)
static void C_ccall f_4137(C_word c,C_word *av) C_noret;
C_noret_decl(f_4145)
static void C_ccall f_4145(C_word c,C_word *av) C_noret;
C_noret_decl(f_4147)
static void C_ccall f_4147(C_word c,C_word *av) C_noret;
C_noret_decl(f_4176)
static void C_ccall f_4176(C_word c,C_word *av) C_noret;
C_noret_decl(f_4210)
static void C_ccall f_4210(C_word c,C_word *av) C_noret;
C_noret_decl(f_4220)
static void C_ccall f_4220(C_word c,C_word *av) C_noret;
C_noret_decl(f_4223)
static void C_ccall f_4223(C_word c,C_word *av) C_noret;
C_noret_decl(f_4226)
static void C_ccall f_4226(C_word c,C_word *av) C_noret;
C_noret_decl(f_4227)
static void C_ccall f_4227(C_word c,C_word *av) C_noret;
C_noret_decl(f_4234)
static void C_ccall f_4234(C_word c,C_word *av) C_noret;
C_noret_decl(f_4308)
static void C_ccall f_4308(C_word c,C_word *av) C_noret;
C_noret_decl(f_4311)
static void C_ccall f_4311(C_word c,C_word *av) C_noret;
C_noret_decl(f_4312)
static void C_ccall f_4312(C_word c,C_word *av) C_noret;
C_noret_decl(f_4316)
static void C_ccall f_4316(C_word c,C_word *av) C_noret;
C_noret_decl(f_4330)
static void C_ccall f_4330(C_word c,C_word *av) C_noret;
C_noret_decl(f_4333)
static void C_ccall f_4333(C_word c,C_word *av) C_noret;
C_noret_decl(f_4336)
static void C_ccall f_4336(C_word c,C_word *av) C_noret;
C_noret_decl(f_4337)
static void C_ccall f_4337(C_word c,C_word *av) C_noret;
C_noret_decl(f_4341)
static void C_ccall f_4341(C_word c,C_word *av) C_noret;
C_noret_decl(f_4344)
static void C_ccall f_4344(C_word c,C_word *av) C_noret;
C_noret_decl(f_4382)
static void C_ccall f_4382(C_word c,C_word *av) C_noret;
C_noret_decl(f_4406)
static void C_ccall f_4406(C_word c,C_word *av) C_noret;
C_noret_decl(f_4412)
static void C_ccall f_4412(C_word c,C_word *av) C_noret;
C_noret_decl(f_4416)
static void C_ccall f_4416(C_word c,C_word *av) C_noret;
C_noret_decl(f_4425)
static void C_ccall f_4425(C_word c,C_word *av) C_noret;
C_noret_decl(f_4429)
static void C_ccall f_4429(C_word c,C_word *av) C_noret;
C_noret_decl(f_4436)
static void C_ccall f_4436(C_word c,C_word *av) C_noret;
C_noret_decl(f_4437)
static void C_ccall f_4437(C_word c,C_word *av) C_noret;
C_noret_decl(f_4441)
static void C_ccall f_4441(C_word c,C_word *av) C_noret;
C_noret_decl(f_4467)
static void C_ccall f_4467(C_word c,C_word *av) C_noret;
C_noret_decl(f_4472)
static void C_ccall f_4472(C_word c,C_word *av) C_noret;
C_noret_decl(f_4484)
static void C_ccall f_4484(C_word c,C_word *av) C_noret;
C_noret_decl(f_4485)
static void C_ccall f_4485(C_word c,C_word *av) C_noret;
C_noret_decl(f_4494)
static void C_ccall f_4494(C_word c,C_word *av) C_noret;
C_noret_decl(f_4521)
static void C_ccall f_4521(C_word c,C_word *av) C_noret;
C_noret_decl(f_4530)
static void C_ccall f_4530(C_word c,C_word *av) C_noret;
C_noret_decl(f_4536)
static void C_ccall f_4536(C_word c,C_word *av) C_noret;
C_noret_decl(f_4539)
static void C_ccall f_4539(C_word c,C_word *av) C_noret;
C_noret_decl(f_4548)
static void C_ccall f_4548(C_word c,C_word *av) C_noret;
C_noret_decl(f_4549)
static void C_ccall f_4549(C_word c,C_word *av) C_noret;
C_noret_decl(f_4565)
static void C_ccall f_4565(C_word c,C_word *av) C_noret;
C_noret_decl(f_4569)
static void C_ccall f_4569(C_word c,C_word *av) C_noret;
C_noret_decl(f_4582)
static void C_ccall f_4582(C_word c,C_word *av) C_noret;
C_noret_decl(f_4585)
static void C_ccall f_4585(C_word c,C_word *av) C_noret;
C_noret_decl(f_4586)
static void C_ccall f_4586(C_word c,C_word *av) C_noret;
C_noret_decl(f_4602)
static void C_ccall f_4602(C_word c,C_word *av) C_noret;
C_noret_decl(f_4606)
static void C_ccall f_4606(C_word c,C_word *av) C_noret;
C_noret_decl(f_4610)
static void C_ccall f_4610(C_word c,C_word *av) C_noret;
C_noret_decl(f_4618)
static void C_ccall f_4618(C_word c,C_word *av) C_noret;
C_noret_decl(f_4631)
static void C_ccall f_4631(C_word c,C_word *av) C_noret;
C_noret_decl(f_4634)
static void C_ccall f_4634(C_word c,C_word *av) C_noret;
C_noret_decl(f_4640)
static void C_ccall f_4640(C_word c,C_word *av) C_noret;
C_noret_decl(f_4641)
static void C_ccall f_4641(C_word c,C_word *av) C_noret;
C_noret_decl(f_4657)
static void C_ccall f_4657(C_word c,C_word *av) C_noret;
C_noret_decl(f_4661)
static void C_ccall f_4661(C_word c,C_word *av) C_noret;
C_noret_decl(f_4665)
static void C_ccall f_4665(C_word c,C_word *av) C_noret;
C_noret_decl(f_4669)
static void C_ccall f_4669(C_word c,C_word *av) C_noret;
C_noret_decl(f_4677)
static void C_ccall f_4677(C_word c,C_word *av) C_noret;
C_noret_decl(f_4685)
static void C_ccall f_4685(C_word c,C_word *av) C_noret;
C_noret_decl(f_4698)
static void C_ccall f_4698(C_word c,C_word *av) C_noret;
C_noret_decl(f_4701)
static void C_ccall f_4701(C_word c,C_word *av) C_noret;
C_noret_decl(f_4707)
static void C_ccall f_4707(C_word c,C_word *av) C_noret;
C_noret_decl(f_4710)
static void C_ccall f_4710(C_word c,C_word *av) C_noret;
C_noret_decl(f_4711)
static void C_ccall f_4711(C_word c,C_word *av) C_noret;
C_noret_decl(f_4727)
static void C_ccall f_4727(C_word c,C_word *av) C_noret;
C_noret_decl(f_4731)
static void C_ccall f_4731(C_word c,C_word *av) C_noret;
C_noret_decl(f_4735)
static void C_ccall f_4735(C_word c,C_word *av) C_noret;
C_noret_decl(f_4739)
static void C_ccall f_4739(C_word c,C_word *av) C_noret;
C_noret_decl(f_4743)
static void C_ccall f_4743(C_word c,C_word *av) C_noret;
C_noret_decl(f_4751)
static void C_ccall f_4751(C_word c,C_word *av) C_noret;
C_noret_decl(f_4759)
static void C_ccall f_4759(C_word c,C_word *av) C_noret;
C_noret_decl(f_4767)
static void C_ccall f_4767(C_word c,C_word *av) C_noret;
C_noret_decl(f_4775)
static void C_fcall f_4775(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4788)
static void C_ccall f_4788(C_word c,C_word *av) C_noret;
C_noret_decl(f_4789)
static void C_ccall f_4789(C_word c,C_word *av) C_noret;
C_noret_decl(f_4793)
static void C_ccall f_4793(C_word c,C_word *av) C_noret;
C_noret_decl(f_4796)
static void C_ccall f_4796(C_word c,C_word *av) C_noret;
C_noret_decl(f_4805)
static void C_fcall f_4805(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4830)
static void C_ccall f_4830(C_word c,C_word *av) C_noret;
C_noret_decl(f_4835)
static void C_fcall f_4835(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4860)
static void C_ccall f_4860(C_word c,C_word *av) C_noret;
C_noret_decl(f_4877)
static void C_ccall f_4877(C_word c,C_word *av) C_noret;
C_noret_decl(f_4881)
static void C_ccall f_4881(C_word c,C_word *av) C_noret;
C_noret_decl(f_4885)
static void C_ccall f_4885(C_word c,C_word *av) C_noret;
C_noret_decl(f_4888)
static void C_ccall f_4888(C_word c,C_word *av) C_noret;
C_noret_decl(f_4894)
static void C_ccall f_4894(C_word c,C_word *av) C_noret;
C_noret_decl(f_4902)
static void C_ccall f_4902(C_word c,C_word *av) C_noret;
C_noret_decl(f_4910)
static void C_ccall f_4910(C_word c,C_word *av) C_noret;
C_noret_decl(f_4912)
static void C_ccall f_4912(C_word c,C_word *av) C_noret;
C_noret_decl(f_4916)
static void C_ccall f_4916(C_word c,C_word *av) C_noret;
C_noret_decl(f_4919)
static void C_ccall f_4919(C_word c,C_word *av) C_noret;
C_noret_decl(f_4924)
static void C_ccall f_4924(C_word c,C_word *av) C_noret;
C_noret_decl(f_4926)
static void C_fcall f_4926(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4951)
static void C_ccall f_4951(C_word c,C_word *av) C_noret;
C_noret_decl(f_4960)
static void C_fcall f_4960(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5033)
static void C_ccall f_5033(C_word c,C_word *av) C_noret;
C_noret_decl(f_5037)
static void C_ccall f_5037(C_word c,C_word *av) C_noret;
C_noret_decl(f_5057)
static void C_ccall f_5057(C_word c,C_word *av) C_noret;
C_noret_decl(f_5071)
static void C_fcall f_5071(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5105)
static void C_fcall f_5105(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5155)
static void C_ccall f_5155(C_word c,C_word *av) C_noret;
C_noret_decl(f_5164)
static void C_ccall f_5164(C_word c,C_word *av) C_noret;
C_noret_decl(f_5190)
static void C_ccall f_5190(C_word c,C_word *av) C_noret;
C_noret_decl(f_5217)
static void C_ccall f_5217(C_word c,C_word *av) C_noret;
C_noret_decl(f_5221)
static void C_ccall f_5221(C_word c,C_word *av) C_noret;
C_noret_decl(f_5233)
static void C_ccall f_5233(C_word c,C_word *av) C_noret;
C_noret_decl(f_5247)
static void C_fcall f_5247(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5295)
static void C_fcall f_5295(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5343)
static void C_fcall f_5343(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5377)
static void C_fcall f_5377(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5402)
static void C_ccall f_5402(C_word c,C_word *av) C_noret;
C_noret_decl(f_5411)
static void C_fcall f_5411(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5452)
static void C_ccall f_5452(C_word c,C_word *av) C_noret;
C_noret_decl(f_5463)
static void C_ccall f_5463(C_word c,C_word *av) C_noret;
C_noret_decl(f_5468)
static void C_ccall f_5468(C_word c,C_word *av) C_noret;
C_noret_decl(f_5478)
static void C_ccall f_5478(C_word c,C_word *av) C_noret;
C_noret_decl(f_5481)
static void C_ccall f_5481(C_word c,C_word *av) C_noret;
C_noret_decl(f_5487)
static void C_ccall f_5487(C_word c,C_word *av) C_noret;
C_noret_decl(f_5497)
static void C_ccall f_5497(C_word c,C_word *av) C_noret;
C_noret_decl(f_5503)
static void C_ccall f_5503(C_word c,C_word *av) C_noret;
C_noret_decl(f_5516)
static void C_ccall f_5516(C_word c,C_word *av) C_noret;
C_noret_decl(f_5522)
static void C_ccall f_5522(C_word c,C_word *av) C_noret;
C_noret_decl(f_5540)
static void C_ccall f_5540(C_word c,C_word *av) C_noret;
C_noret_decl(f_5546)
static void C_ccall f_5546(C_word c,C_word *av) C_noret;
C_noret_decl(f_5559)
static void C_ccall f_5559(C_word c,C_word *av) C_noret;
C_noret_decl(f_5565)
static void C_ccall f_5565(C_word c,C_word *av) C_noret;
C_noret_decl(f_5587)
static void C_ccall f_5587(C_word c,C_word *av) C_noret;
C_noret_decl(f_5593)
static void C_ccall f_5593(C_word c,C_word *av) C_noret;
C_noret_decl(f_5606)
static void C_ccall f_5606(C_word c,C_word *av) C_noret;
C_noret_decl(f_5612)
static void C_ccall f_5612(C_word c,C_word *av) C_noret;
C_noret_decl(f_5634)
static void C_ccall f_5634(C_word c,C_word *av) C_noret;
C_noret_decl(f_5640)
static void C_ccall f_5640(C_word c,C_word *av) C_noret;
C_noret_decl(f_5653)
static void C_ccall f_5653(C_word c,C_word *av) C_noret;
C_noret_decl(f_5659)
static void C_ccall f_5659(C_word c,C_word *av) C_noret;
C_noret_decl(f_5681)
static void C_ccall f_5681(C_word c,C_word *av) C_noret;
C_noret_decl(f_5687)
static void C_ccall f_5687(C_word c,C_word *av) C_noret;
C_noret_decl(f_5700)
static void C_ccall f_5700(C_word c,C_word *av) C_noret;
C_noret_decl(f_5706)
static void C_ccall f_5706(C_word c,C_word *av) C_noret;
C_noret_decl(f_5718)
static void C_ccall f_5718(C_word c,C_word *av) C_noret;
C_noret_decl(f_5722)
static void C_ccall f_5722(C_word c,C_word *av) C_noret;
C_noret_decl(f_5728)
static void C_ccall f_5728(C_word c,C_word *av) C_noret;
C_noret_decl(f_5740)
static void C_ccall f_5740(C_word c,C_word *av) C_noret;
C_noret_decl(f_5744)
static void C_ccall f_5744(C_word c,C_word *av) C_noret;
C_noret_decl(f_5745)
static void C_ccall f_5745(C_word c,C_word *av) C_noret;
C_noret_decl(f_5751)
static void C_ccall f_5751(C_word c,C_word *av) C_noret;
C_noret_decl(f_5773)
static void C_ccall f_5773(C_word c,C_word *av) C_noret;
C_noret_decl(f_5789)
static void C_ccall f_5789(C_word c,C_word *av) C_noret;
C_noret_decl(f_5793)
static void C_ccall f_5793(C_word c,C_word *av) C_noret;
C_noret_decl(f_5797)
static void C_ccall f_5797(C_word c,C_word *av) C_noret;
C_noret_decl(f_5800)
static void C_ccall f_5800(C_word c,C_word *av) C_noret;
C_noret_decl(f_5806)
static void C_ccall f_5806(C_word c,C_word *av) C_noret;
C_noret_decl(f_5814)
static void C_ccall f_5814(C_word c,C_word *av) C_noret;
C_noret_decl(f_5820)
static void C_ccall f_5820(C_word c,C_word *av) C_noret;
C_noret_decl(f_5824)
static void C_ccall f_5824(C_word c,C_word *av) C_noret;
C_noret_decl(f_5827)
static void C_ccall f_5827(C_word c,C_word *av) C_noret;
C_noret_decl(f_5832)
static void C_ccall f_5832(C_word c,C_word *av) C_noret;
C_noret_decl(f_5834)
static void C_fcall f_5834(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5859)
static void C_ccall f_5859(C_word c,C_word *av) C_noret;
C_noret_decl(f_5869)
static void C_ccall f_5869(C_word c,C_word *av) C_noret;
C_noret_decl(f_5874)
static void C_ccall f_5874(C_word c,C_word *av) C_noret;
C_noret_decl(f_5882)
static void C_ccall f_5882(C_word c,C_word *av) C_noret;
C_noret_decl(f_5884)
static void C_ccall f_5884(C_word c,C_word *av) C_noret;
C_noret_decl(f_5895)
static void C_ccall f_5895(C_word c,C_word *av) C_noret;
C_noret_decl(f_5904)
static void C_ccall f_5904(C_word c,C_word *av) C_noret;
C_noret_decl(f_5909)
static void C_ccall f_5909(C_word c,C_word *av) C_noret;
C_noret_decl(f_5913)
static void C_ccall f_5913(C_word c,C_word *av) C_noret;
C_noret_decl(f_5917)
static void C_ccall f_5917(C_word c,C_word *av) C_noret;
C_noret_decl(f_5920)
static void C_ccall f_5920(C_word c,C_word *av) C_noret;
C_noret_decl(f_5926)
static void C_ccall f_5926(C_word c,C_word *av) C_noret;
C_noret_decl(f_5934)
static void C_ccall f_5934(C_word c,C_word *av) C_noret;
C_noret_decl(f_5942)
static void C_ccall f_5942(C_word c,C_word *av) C_noret;
C_noret_decl(f_5944)
static void C_ccall f_5944(C_word c,C_word *av) C_noret;
C_noret_decl(f_5948)
static void C_ccall f_5948(C_word c,C_word *av) C_noret;
C_noret_decl(f_5951)
static void C_ccall f_5951(C_word c,C_word *av) C_noret;
C_noret_decl(f_5969)
static void C_ccall f_5969(C_word c,C_word *av) C_noret;
C_noret_decl(f_5973)
static void C_ccall f_5973(C_word c,C_word *av) C_noret;
C_noret_decl(f_5977)
static void C_ccall f_5977(C_word c,C_word *av) C_noret;
C_noret_decl(f_5981)
static void C_ccall f_5981(C_word c,C_word *av) C_noret;
C_noret_decl(f_5996)
static void C_ccall f_5996(C_word c,C_word *av) C_noret;
C_noret_decl(f_6000)
static void C_ccall f_6000(C_word c,C_word *av) C_noret;
C_noret_decl(f_6002)
static void C_fcall f_6002(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6056)
static void C_ccall f_6056(C_word c,C_word *av) C_noret;
C_noret_decl(f_6060)
static void C_ccall f_6060(C_word c,C_word *av) C_noret;
C_noret_decl(f_6064)
static void C_ccall f_6064(C_word c,C_word *av) C_noret;
C_noret_decl(f_6079)
static void C_ccall f_6079(C_word c,C_word *av) C_noret;
C_noret_decl(f_6082)
static void C_ccall f_6082(C_word c,C_word *av) C_noret;
C_noret_decl(f_6083)
static C_word C_fcall f_6083(C_word t0,C_word t1);
C_noret_decl(f_6102)
static void C_ccall f_6102(C_word c,C_word *av) C_noret;
C_noret_decl(f_6106)
static void C_ccall f_6106(C_word c,C_word *av) C_noret;
C_noret_decl(f_6110)
static void C_ccall f_6110(C_word c,C_word *av) C_noret;
C_noret_decl(f_6113)
static void C_ccall f_6113(C_word c,C_word *av) C_noret;
C_noret_decl(f_6119)
static void C_ccall f_6119(C_word c,C_word *av) C_noret;
C_noret_decl(f_6127)
static void C_ccall f_6127(C_word c,C_word *av) C_noret;
C_noret_decl(f_6135)
static void C_ccall f_6135(C_word c,C_word *av) C_noret;
C_noret_decl(f_6137)
static void C_ccall f_6137(C_word c,C_word *av) C_noret;
C_noret_decl(f_6141)
static void C_ccall f_6141(C_word c,C_word *av) C_noret;
C_noret_decl(f_6144)
static void C_ccall f_6144(C_word c,C_word *av) C_noret;
C_noret_decl(f_6147)
static C_word C_fcall f_6147(C_word t0,C_word t1);
C_noret_decl(f_6172)
static void C_ccall f_6172(C_word c,C_word *av) C_noret;
C_noret_decl(f_6174)
static void C_fcall f_6174(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6221)
static void C_ccall f_6221(C_word c,C_word *av) C_noret;
C_noret_decl(f_6224)
static void C_ccall f_6224(C_word c,C_word *av) C_noret;
C_noret_decl(f_6227)
static void C_ccall f_6227(C_word c,C_word *av) C_noret;
C_noret_decl(f_6230)
static void C_ccall f_6230(C_word c,C_word *av) C_noret;
C_noret_decl(f_6237)
static void C_ccall f_6237(C_word c,C_word *av) C_noret;
C_noret_decl(f_6241)
static void C_ccall f_6241(C_word c,C_word *av) C_noret;
C_noret_decl(f_6245)
static void C_ccall f_6245(C_word c,C_word *av) C_noret;
C_noret_decl(f_6262)
static void C_ccall f_6262(C_word c,C_word *av) C_noret;
C_noret_decl(f_6284)
static void C_ccall f_6284(C_word c,C_word *av) C_noret;
C_noret_decl(f_6292)
static void C_ccall f_6292(C_word c,C_word *av) C_noret;
C_noret_decl(f_6311)
static void C_ccall f_6311(C_word c,C_word *av) C_noret;
C_noret_decl(f_6319)
static void C_ccall f_6319(C_word c,C_word *av) C_noret;
C_noret_decl(f_6329)
static void C_ccall f_6329(C_word c,C_word *av) C_noret;
C_noret_decl(f_6333)
static void C_ccall f_6333(C_word c,C_word *av) C_noret;
C_noret_decl(f_6362)
static void C_ccall f_6362(C_word c,C_word *av) C_noret;
C_noret_decl(f_6374)
static void C_ccall f_6374(C_word c,C_word *av) C_noret;
C_noret_decl(f_6376)
static void C_ccall f_6376(C_word c,C_word *av) C_noret;
C_noret_decl(f_6390)
static void C_fcall f_6390(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6415)
static void C_ccall f_6415(C_word c,C_word *av) C_noret;
C_noret_decl(f_6431)
static void C_ccall f_6431(C_word c,C_word *av) C_noret;
C_noret_decl(f_6440)
static void C_ccall f_6440(C_word c,C_word *av) C_noret;
C_noret_decl(f_6443)
static void C_ccall f_6443(C_word c,C_word *av) C_noret;
C_noret_decl(f_6446)
static void C_ccall f_6446(C_word c,C_word *av) C_noret;
C_noret_decl(f_6449)
static void C_ccall f_6449(C_word c,C_word *av) C_noret;
C_noret_decl(f_6454)
static void C_ccall f_6454(C_word c,C_word *av) C_noret;
C_noret_decl(f_6458)
static void C_ccall f_6458(C_word c,C_word *av) C_noret;
C_noret_decl(f_6461)
static void C_ccall f_6461(C_word c,C_word *av) C_noret;
C_noret_decl(f_6464)
static void C_ccall f_6464(C_word c,C_word *av) C_noret;
C_noret_decl(f_6467)
static void C_ccall f_6467(C_word c,C_word *av) C_noret;
C_noret_decl(f_6471)
static void C_ccall f_6471(C_word c,C_word *av) C_noret;
C_noret_decl(f_6475)
static void C_ccall f_6475(C_word c,C_word *av) C_noret;
C_noret_decl(f_6479)
static void C_ccall f_6479(C_word c,C_word *av) C_noret;
C_noret_decl(f_6483)
static void C_ccall f_6483(C_word c,C_word *av) C_noret;
C_noret_decl(f_6486)
static void C_ccall f_6486(C_word c,C_word *av) C_noret;
C_noret_decl(f_6489)
static void C_ccall f_6489(C_word c,C_word *av) C_noret;
C_noret_decl(f_6492)
static void C_ccall f_6492(C_word c,C_word *av) C_noret;
C_noret_decl(f_6495)
static void C_ccall f_6495(C_word c,C_word *av) C_noret;
C_noret_decl(f_6510)
static void C_ccall f_6510(C_word c,C_word *av) C_noret;
C_noret_decl(f_6516)
static void C_ccall f_6516(C_word c,C_word *av) C_noret;
C_noret_decl(f_6526)
static void C_fcall f_6526(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6536)
static void C_ccall f_6536(C_word c,C_word *av) C_noret;
C_noret_decl(f_6539)
static void C_ccall f_6539(C_word c,C_word *av) C_noret;
C_noret_decl(f_6542)
static void C_ccall f_6542(C_word c,C_word *av) C_noret;
C_noret_decl(f_6543)
static void C_ccall f_6543(C_word c,C_word *av) C_noret;
C_noret_decl(f_6549)
static void C_fcall f_6549(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6572)
static void C_ccall f_6572(C_word c,C_word *av) C_noret;
C_noret_decl(f_6583)
static void C_ccall f_6583(C_word c,C_word *av) C_noret;
C_noret_decl(f_6587)
static void C_ccall f_6587(C_word c,C_word *av) C_noret;
C_noret_decl(f_6602)
static void C_ccall f_6602(C_word c,C_word *av) C_noret;
C_noret_decl(f_6606)
static void C_ccall f_6606(C_word c,C_word *av) C_noret;
C_noret_decl(f_6610)
static void C_ccall f_6610(C_word c,C_word *av) C_noret;
C_noret_decl(f_6613)
static void C_ccall f_6613(C_word c,C_word *av) C_noret;
C_noret_decl(f_6616)
static void C_ccall f_6616(C_word c,C_word *av) C_noret;
C_noret_decl(f_6619)
static void C_ccall f_6619(C_word c,C_word *av) C_noret;
C_noret_decl(f_6622)
static void C_ccall f_6622(C_word c,C_word *av) C_noret;
C_noret_decl(f_6625)
static void C_ccall f_6625(C_word c,C_word *av) C_noret;
C_noret_decl(f_6628)
static void C_ccall f_6628(C_word c,C_word *av) C_noret;
C_noret_decl(f_6631)
static void C_ccall f_6631(C_word c,C_word *av) C_noret;
C_noret_decl(f_6638)
static void C_ccall f_6638(C_word c,C_word *av) C_noret;
C_noret_decl(f_6645)
static void C_fcall f_6645(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6658)
static void C_fcall f_6658(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6669)
static C_word C_fcall f_6669(C_word t0);
C_noret_decl(f_6702)
static void C_fcall f_6702(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6727)
static void C_ccall f_6727(C_word c,C_word *av) C_noret;
C_noret_decl(f_6755)
static void C_ccall f_6755(C_word c,C_word *av) C_noret;
C_noret_decl(f_6789)
static void C_ccall f_6789(C_word c,C_word *av) C_noret;
C_noret_decl(f_6813)
static void C_ccall f_6813(C_word c,C_word *av) C_noret;
C_noret_decl(f_6819)
static void C_ccall f_6819(C_word c,C_word *av) C_noret;
C_noret_decl(f_6844)
static void C_ccall f_6844(C_word c,C_word *av) C_noret;
C_noret_decl(f_6873)
static void C_fcall f_6873(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6885)
static void C_ccall f_6885(C_word c,C_word *av) C_noret;
C_noret_decl(f_6908)
static void C_ccall f_6908(C_word c,C_word *av) C_noret;
C_noret_decl(f_6921)
static void C_fcall f_6921(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6941)
static void C_ccall f_6941(C_word c,C_word *av) C_noret;
C_noret_decl(f_6967)
static void C_fcall f_6967(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6985)
static void C_ccall f_6985(C_word c,C_word *av) C_noret;
C_noret_decl(f_6997)
static void C_ccall f_6997(C_word c,C_word *av) C_noret;
C_noret_decl(f_7002)
static void C_ccall f_7002(C_word c,C_word *av) C_noret;
C_noret_decl(f_7010)
static void C_ccall f_7010(C_word c,C_word *av) C_noret;
C_noret_decl(f_7012)
static void C_ccall f_7012(C_word c,C_word *av) C_noret;
C_noret_decl(f_7195)
static void C_ccall f_7195(C_word c,C_word *av) C_noret;
C_noret_decl(f_7198)
static void C_fcall f_7198(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7205)
static void C_ccall f_7205(C_word c,C_word *av) C_noret;
C_noret_decl(f_7228)
static void C_ccall f_7228(C_word c,C_word *av) C_noret;
C_noret_decl(f_7257)
static void C_fcall f_7257(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_7286)
static void C_ccall f_7286(C_word c,C_word *av) C_noret;
C_noret_decl(f_7303)
static C_word C_fcall f_7303(C_word t0,C_word t1);
C_noret_decl(f_7329)
static void C_fcall f_7329(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_7336)
static void C_ccall f_7336(C_word c,C_word *av) C_noret;
C_noret_decl(f_7358)
static void C_ccall f_7358(C_word c,C_word *av) C_noret;
C_noret_decl(f_7365)
static void C_ccall f_7365(C_word c,C_word *av) C_noret;
C_noret_decl(f_7377)
static void C_ccall f_7377(C_word c,C_word *av) C_noret;
C_noret_decl(f_7378)
static void C_ccall f_7378(C_word c,C_word *av) C_noret;
C_noret_decl(f_7385)
static void C_ccall f_7385(C_word c,C_word *av) C_noret;
C_noret_decl(f_7392)
static void C_ccall f_7392(C_word c,C_word *av) C_noret;
C_noret_decl(f_7405)
static void C_ccall f_7405(C_word c,C_word *av) C_noret;
C_noret_decl(f_7408)
static void C_ccall f_7408(C_word c,C_word *av) C_noret;
C_noret_decl(f_7409)
static void C_ccall f_7409(C_word c,C_word *av) C_noret;
C_noret_decl(f_7416)
static void C_ccall f_7416(C_word c,C_word *av) C_noret;
C_noret_decl(f_7423)
static void C_ccall f_7423(C_word c,C_word *av) C_noret;
C_noret_decl(f_7427)
static void C_ccall f_7427(C_word c,C_word *av) C_noret;
C_noret_decl(f_7441)
static void C_ccall f_7441(C_word c,C_word *av) C_noret;
C_noret_decl(f_7444)
static void C_ccall f_7444(C_word c,C_word *av) C_noret;
C_noret_decl(f_7447)
static void C_ccall f_7447(C_word c,C_word *av) C_noret;
C_noret_decl(f_7448)
static void C_ccall f_7448(C_word c,C_word *av) C_noret;
C_noret_decl(f_7455)
static void C_ccall f_7455(C_word c,C_word *av) C_noret;
C_noret_decl(f_7462)
static void C_ccall f_7462(C_word c,C_word *av) C_noret;
C_noret_decl(f_7466)
static void C_ccall f_7466(C_word c,C_word *av) C_noret;
C_noret_decl(f_7470)
static void C_ccall f_7470(C_word c,C_word *av) C_noret;
C_noret_decl(f_7485)
static void C_ccall f_7485(C_word c,C_word *av) C_noret;
C_noret_decl(f_7488)
static void C_ccall f_7488(C_word c,C_word *av) C_noret;
C_noret_decl(f_7491)
static void C_ccall f_7491(C_word c,C_word *av) C_noret;
C_noret_decl(f_7494)
static void C_ccall f_7494(C_word c,C_word *av) C_noret;
C_noret_decl(f_7495)
static void C_ccall f_7495(C_word c,C_word *av) C_noret;
C_noret_decl(f_7502)
static void C_ccall f_7502(C_word c,C_word *av) C_noret;
C_noret_decl(f_7509)
static void C_ccall f_7509(C_word c,C_word *av) C_noret;
C_noret_decl(f_7513)
static void C_ccall f_7513(C_word c,C_word *av) C_noret;
C_noret_decl(f_7517)
static void C_ccall f_7517(C_word c,C_word *av) C_noret;
C_noret_decl(f_7521)
static void C_ccall f_7521(C_word c,C_word *av) C_noret;
C_noret_decl(f_7532)
static void C_fcall f_7532(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7542)
static void C_ccall f_7542(C_word c,C_word *av) C_noret;
C_noret_decl(f_7543)
static void C_ccall f_7543(C_word c,C_word *av) C_noret;
C_noret_decl(f_7554)
static void C_ccall f_7554(C_word c,C_word *av) C_noret;
C_noret_decl(f_7559)
static void C_fcall f_7559(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7569)
static void C_ccall f_7569(C_word c,C_word *av) C_noret;
C_noret_decl(f_7571)
static void C_fcall f_7571(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7596)
static void C_ccall f_7596(C_word c,C_word *av) C_noret;
C_noret_decl(f_7605)
static void C_fcall f_7605(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7630)
static void C_ccall f_7630(C_word c,C_word *av) C_noret;
C_noret_decl(f_7653)
static void C_ccall f_7653(C_word c,C_word *av) C_noret;
C_noret_decl(f_7672)
static void C_ccall f_7672(C_word c,C_word *av) C_noret;
C_noret_decl(f_7722)
static void C_ccall f_7722(C_word c,C_word *av) C_noret;
C_noret_decl(f_7726)
static void C_ccall f_7726(C_word c,C_word *av) C_noret;
C_noret_decl(f_7729)
static void C_ccall f_7729(C_word c,C_word *av) C_noret;
C_noret_decl(f_7734)
static void C_ccall f_7734(C_word c,C_word *av) C_noret;
C_noret_decl(f_7738)
static void C_ccall f_7738(C_word c,C_word *av) C_noret;
C_noret_decl(f_7741)
static void C_ccall f_7741(C_word c,C_word *av) C_noret;
C_noret_decl(f_7744)
static void C_ccall f_7744(C_word c,C_word *av) C_noret;
C_noret_decl(f_7748)
static void C_ccall f_7748(C_word c,C_word *av) C_noret;
C_noret_decl(f_7752)
static void C_ccall f_7752(C_word c,C_word *av) C_noret;
C_noret_decl(f_7756)
static void C_ccall f_7756(C_word c,C_word *av) C_noret;
C_noret_decl(f_7759)
static void C_ccall f_7759(C_word c,C_word *av) C_noret;
C_noret_decl(f_7762)
static void C_ccall f_7762(C_word c,C_word *av) C_noret;
C_noret_decl(f_7765)
static void C_ccall f_7765(C_word c,C_word *av) C_noret;
C_noret_decl(f_7777)
static void C_ccall f_7777(C_word c,C_word *av) C_noret;
C_noret_decl(f_7783)
static void C_ccall f_7783(C_word c,C_word *av) C_noret;
C_noret_decl(f_7787)
static void C_ccall f_7787(C_word c,C_word *av) C_noret;
C_noret_decl(f_7792)
static void C_ccall f_7792(C_word c,C_word *av) C_noret;
C_noret_decl(f_7796)
static void C_ccall f_7796(C_word c,C_word *av) C_noret;
C_noret_decl(f_7803)
static void C_ccall f_7803(C_word c,C_word *av) C_noret;
C_noret_decl(f_7807)
static void C_ccall f_7807(C_word c,C_word *av) C_noret;
C_noret_decl(f_7809)
static void C_ccall f_7809(C_word c,C_word *av) C_noret;
C_noret_decl(f_7813)
static void C_ccall f_7813(C_word c,C_word *av) C_noret;
C_noret_decl(f_7816)
static void C_ccall f_7816(C_word c,C_word *av) C_noret;
C_noret_decl(f_7819)
static void C_ccall f_7819(C_word c,C_word *av) C_noret;
C_noret_decl(f_7822)
static void C_ccall f_7822(C_word c,C_word *av) C_noret;
C_noret_decl(f_7825)
static void C_ccall f_7825(C_word c,C_word *av) C_noret;
C_noret_decl(f_7828)
static void C_ccall f_7828(C_word c,C_word *av) C_noret;
C_noret_decl(f_7835)
static void C_ccall f_7835(C_word c,C_word *av) C_noret;
C_noret_decl(f_7837)
static void C_ccall f_7837(C_word c,C_word *av) C_noret;
C_noret_decl(f_7845)
static void C_ccall f_7845(C_word c,C_word *av) C_noret;
C_noret_decl(f_7847)
static void C_ccall f_7847(C_word c,C_word *av) C_noret;
C_noret_decl(f_7854)
static void C_ccall f_7854(C_word c,C_word *av) C_noret;
C_noret_decl(f_7856)
static void C_ccall f_7856(C_word c,C_word *av) C_noret;
C_noret_decl(f_7859)
static void C_fcall f_7859(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7869)
static void C_fcall f_7869(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7883)
static void C_ccall f_7883(C_word c,C_word *av) C_noret;
C_noret_decl(f_7902)
static void C_ccall f_7902(C_word c,C_word *av) C_noret;
C_noret_decl(f_7941)
static void C_ccall f_7941(C_word c,C_word *av) C_noret;
C_noret_decl(f_7945)
static void C_ccall f_7945(C_word c,C_word *av) C_noret;
C_noret_decl(f_7948)
static void C_ccall f_7948(C_word c,C_word *av) C_noret;
C_noret_decl(f_7951)
static void C_ccall f_7951(C_word c,C_word *av) C_noret;
C_noret_decl(f_7954)
static void C_ccall f_7954(C_word c,C_word *av) C_noret;
C_noret_decl(f_7957)
static void C_ccall f_7957(C_word c,C_word *av) C_noret;
C_noret_decl(f_7959)
static void C_fcall f_7959(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7968)
static void C_fcall f_7968(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7999)
static void C_ccall f_7999(C_word c,C_word *av) C_noret;
C_noret_decl(f_8017)
static void C_ccall f_8017(C_word c,C_word *av) C_noret;
C_noret_decl(f_8021)
static void C_ccall f_8021(C_word c,C_word *av) C_noret;
C_noret_decl(f_8042)
static void C_ccall f_8042(C_word c,C_word *av) C_noret;
C_noret_decl(f_8046)
static void C_ccall f_8046(C_word c,C_word *av) C_noret;
C_noret_decl(f_8068)
static void C_ccall f_8068(C_word c,C_word *av) C_noret;
C_noret_decl(f_8445)
static void C_fcall f_8445(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8467)
static void C_ccall f_8467(C_word c,C_word *av) C_noret;
C_noret_decl(f_9358)
static void C_fcall f_9358(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9361)
static void C_ccall f_9361(C_word c,C_word *av) C_noret;
C_noret_decl(f_9376)
static void C_ccall f_9376(C_word c,C_word *av) C_noret;
C_noret_decl(f_9379)
static void C_fcall f_9379(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9381)
static void C_ccall f_9381(C_word c,C_word *av) C_noret;
C_noret_decl(f_9384)
static void C_ccall f_9384(C_word c,C_word *av) C_noret;
C_noret_decl(f_9391)
static void C_fcall f_9391(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9401)
static C_word C_fcall f_9401(C_word t0,C_word t1);
C_noret_decl(f_9426)
static void C_fcall f_9426(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9430)
static void C_ccall f_9430(C_word c,C_word *av) C_noret;
C_noret_decl(f_9443)
static void C_ccall f_9443(C_word c,C_word *av) C_noret;
C_noret_decl(f_9469)
static void C_ccall f_9469(C_word c,C_word *av) C_noret;
C_noret_decl(f_9473)
static void C_ccall f_9473(C_word c,C_word *av) C_noret;
C_noret_decl(f_9480)
static void C_ccall f_9480(C_word c,C_word *av) C_noret;
C_noret_decl(f_9485)
static void C_fcall f_9485(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9498)
static void C_ccall f_9498(C_word c,C_word *av) C_noret;
C_noret_decl(f_9567)
static void C_ccall f_9567(C_word c,C_word *av) C_noret;
C_noret_decl(f_9573)
static void C_fcall f_9573(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9581)
static void C_ccall f_9581(C_word c,C_word *av) C_noret;
C_noret_decl(f_9585)
static void C_ccall f_9585(C_word c,C_word *av) C_noret;
C_noret_decl(f_9587)
static void C_fcall f_9587(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9625)
static void C_ccall f_9625(C_word c,C_word *av) C_noret;
C_noret_decl(f_9630)
static void C_fcall f_9630(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9634)
static void C_ccall f_9634(C_word c,C_word *av) C_noret;
C_noret_decl(f_9637)
static void C_ccall f_9637(C_word c,C_word *av) C_noret;
C_noret_decl(f_9653)
static void C_ccall f_9653(C_word c,C_word *av) C_noret;
C_noret_decl(f_9657)
static void C_ccall f_9657(C_word c,C_word *av) C_noret;
C_noret_decl(f_9661)
static void C_ccall f_9661(C_word c,C_word *av) C_noret;
C_noret_decl(f_9665)
static void C_ccall f_9665(C_word c,C_word *av) C_noret;
C_noret_decl(f_9669)
static void C_ccall f_9669(C_word c,C_word *av) C_noret;
C_noret_decl(f_9672)
static void C_ccall f_9672(C_word c,C_word *av) C_noret;
C_noret_decl(f_9675)
static void C_ccall f_9675(C_word c,C_word *av) C_noret;
C_noret_decl(f_9678)
static void C_ccall f_9678(C_word c,C_word *av) C_noret;
C_noret_decl(f_9683)
static void C_fcall f_9683(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9689)
static void C_ccall f_9689(C_word c,C_word *av) C_noret;
C_noret_decl(f_9698)
static void C_ccall f_9698(C_word c,C_word *av) C_noret;
C_noret_decl(f_9702)
static void C_ccall f_9702(C_word c,C_word *av) C_noret;
C_noret_decl(f_9707)
static void C_ccall f_9707(C_word c,C_word *av) C_noret;
C_noret_decl(f_9710)
static void C_ccall f_9710(C_word c,C_word *av) C_noret;
C_noret_decl(f_9714)
static void C_ccall f_9714(C_word c,C_word *av) C_noret;
C_noret_decl(f_9717)
static void C_ccall f_9717(C_word c,C_word *av) C_noret;
C_noret_decl(f_9720)
static void C_ccall f_9720(C_word c,C_word *av) C_noret;
C_noret_decl(f_9725)
static void C_fcall f_9725(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9735)
static void C_ccall f_9735(C_word c,C_word *av) C_noret;
C_noret_decl(f_9738)
static void C_ccall f_9738(C_word c,C_word *av) C_noret;
C_noret_decl(f_9745)
static void C_ccall f_9745(C_word c,C_word *av) C_noret;
C_noret_decl(f_9747)
static void C_ccall f_9747(C_word c,C_word *av) C_noret;
C_noret_decl(f_9754)
static void C_ccall f_9754(C_word c,C_word *av) C_noret;
C_noret_decl(f_9759)
static void C_ccall f_9759(C_word c,C_word *av) C_noret;
C_noret_decl(f_9765)
static void C_ccall f_9765(C_word c,C_word *av) C_noret;
C_noret_decl(f_9769)
static void C_ccall f_9769(C_word c,C_word *av) C_noret;
C_noret_decl(f_9776)
static void C_ccall f_9776(C_word c,C_word *av) C_noret;
C_noret_decl(f_9781)
static void C_ccall f_9781(C_word c,C_word *av) C_noret;
C_noret_decl(f_9790)
static void C_ccall f_9790(C_word c,C_word *av) C_noret;
C_noret_decl(f_9798)
static void C_fcall f_9798(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9808)
static void C_ccall f_9808(C_word c,C_word *av) C_noret;
C_noret_decl(f_9832)
static void C_ccall f_9832(C_word c,C_word *av) C_noret;
C_noret_decl(f_9836)
static void C_ccall f_9836(C_word c,C_word *av) C_noret;
C_noret_decl(f_9841)
static void C_ccall f_9841(C_word c,C_word *av) C_noret;
C_noret_decl(f_9850)
static void C_ccall f_9850(C_word c,C_word *av) C_noret;
C_noret_decl(f_9869)
static void C_ccall f_9869(C_word c,C_word *av) C_noret;
C_noret_decl(f_9872)
static void C_ccall f_9872(C_word c,C_word *av) C_noret;
C_noret_decl(f_9875)
static void C_ccall f_9875(C_word c,C_word *av) C_noret;
C_noret_decl(f_9881)
static void C_ccall f_9881(C_word c,C_word *av) C_noret;
C_noret_decl(f_9884)
static void C_ccall f_9884(C_word c,C_word *av) C_noret;
C_noret_decl(f_9899)
static void C_ccall f_9899(C_word c,C_word *av) C_noret;
C_noret_decl(f_9902)
static void C_ccall f_9902(C_word c,C_word *av) C_noret;
C_noret_decl(f_9905)
static void C_fcall f_9905(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9911)
static void C_ccall f_9911(C_word c,C_word *av) C_noret;
C_noret_decl(f_9923)
static void C_ccall f_9923(C_word c,C_word *av) C_noret;
C_noret_decl(f_9929)
static void C_ccall f_9929(C_word c,C_word *av) C_noret;
C_noret_decl(f_9989)
static void C_ccall f_9989(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_toplevel)
C_externexport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;

/* from CHICKEN_get_error_message */
 void  CHICKEN_get_error_message(char *t0,int t1){
C_word x,s=0+3,*a=C_alloc(s);
C_callback_adjust_stack(a,s);
x=C_fix((C_word)t1);
C_save(x);
x=C_mpointer_or_false(&a,(void*)t0);
C_save(x);C_callback_wrapper((void *)f_11170,2);}

/* from CHICKEN_load */
 int  CHICKEN_load(char * t0){
C_word x,s=0+2+(t0==NULL?1:C_bytestowords(C_strlen(t0))),*a=C_alloc(s);
C_callback_adjust_stack(a,s);
x=C_mpointer(&a,(void*)t0);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_11155,1));}

/* from CHICKEN_read */
 int  CHICKEN_read(char * t0,C_word *t1){
C_word x,s=0+2+(t0==NULL?1:C_bytestowords(C_strlen(t0)))+3,*a=C_alloc(s);
C_callback_adjust_stack(a,s);
x=C_mpointer_or_false(&a,(void*)t1);
C_save(x);
x=C_mpointer(&a,(void*)t0);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_11133,2));}

/* from CHICKEN_apply_to_string */
 int  CHICKEN_apply_to_string(C_word t0,C_word t1,char *t2,int t3){
C_word x,s=0+3,*a=C_alloc(s);
C_callback_adjust_stack(a,s);
x=C_fix((C_word)t3);
C_save(x);
x=C_mpointer_or_false(&a,(void*)t2);
C_save(x);
x=((C_word)t1);
C_save(x);
x=((C_word)t0);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_11107,4));}

/* from CHICKEN_apply */
 int  CHICKEN_apply(C_word t0,C_word t1,C_word *t2){
C_word x,s=0+3,*a=C_alloc(s);
C_callback_adjust_stack(a,s);
x=C_mpointer_or_false(&a,(void*)t2);
C_save(x);
x=((C_word)t1);
C_save(x);
x=((C_word)t0);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_11091,3));}

/* from CHICKEN_eval_string_to_string */
 int  CHICKEN_eval_string_to_string(char * t0,char *t1,int t2){
C_word x,s=0+2+(t0==NULL?1:C_bytestowords(C_strlen(t0)))+3,*a=C_alloc(s);
C_callback_adjust_stack(a,s);
x=C_fix((C_word)t2);
C_save(x);
x=C_mpointer_or_false(&a,(void*)t1);
C_save(x);
x=C_mpointer(&a,(void*)t0);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_11054,3));}

/* from CHICKEN_eval_to_string */
 int  CHICKEN_eval_to_string(C_word t0,char *t1,int t2){
C_word x,s=0+3,*a=C_alloc(s);
C_callback_adjust_stack(a,s);
x=C_fix((C_word)t2);
C_save(x);
x=C_mpointer_or_false(&a,(void*)t1);
C_save(x);
x=((C_word)t0);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_11028,3));}

/* from CHICKEN_eval_string */
 int  CHICKEN_eval_string(char * t0,C_word *t1){
C_word x,s=0+2+(t0==NULL?1:C_bytestowords(C_strlen(t0)))+3,*a=C_alloc(s);
C_callback_adjust_stack(a,s);
x=C_mpointer_or_false(&a,(void*)t1);
C_save(x);
x=C_mpointer(&a,(void*)t0);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_10989,2));}

/* from CHICKEN_eval */
 int  CHICKEN_eval(C_word t0,C_word *t1){
C_word x,s=0+3,*a=C_alloc(s);
C_callback_adjust_stack(a,s);
x=C_mpointer_or_false(&a,(void*)t1);
C_save(x);
x=((C_word)t0);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_10973,2));}

/* from CHICKEN_yield */
 int  CHICKEN_yield(){
C_word x,s=0,*a=C_stack_pointer;
C_callback_adjust_stack(a,s);
return C_truep(C_callback_wrapper((void *)f_10961,0));}

C_noret_decl(trf_10050)
static void C_ccall trf_10050(C_word c,C_word *av) C_noret;
static void C_ccall trf_10050(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10050(t0,t1,t2);}

C_noret_decl(trf_10069)
static void C_ccall trf_10069(C_word c,C_word *av) C_noret;
static void C_ccall trf_10069(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10069(t0,t1);}

C_noret_decl(trf_10080)
static void C_ccall trf_10080(C_word c,C_word *av) C_noret;
static void C_ccall trf_10080(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10080(t0,t1,t2);}

C_noret_decl(trf_10213)
static void C_ccall trf_10213(C_word c,C_word *av) C_noret;
static void C_ccall trf_10213(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10213(t0,t1,t2,t3);}

C_noret_decl(trf_10258)
static void C_ccall trf_10258(C_word c,C_word *av) C_noret;
static void C_ccall trf_10258(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10258(t0,t1);}

C_noret_decl(trf_10323)
static void C_ccall trf_10323(C_word c,C_word *av) C_noret;
static void C_ccall trf_10323(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10323(t0,t1,t2);}

C_noret_decl(trf_10368)
static void C_ccall trf_10368(C_word c,C_word *av) C_noret;
static void C_ccall trf_10368(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10368(t0,t1,t2);}

C_noret_decl(trf_10472)
static void C_ccall trf_10472(C_word c,C_word *av) C_noret;
static void C_ccall trf_10472(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10472(t0,t1,t2);}

C_noret_decl(trf_10506)
static void C_ccall trf_10506(C_word c,C_word *av) C_noret;
static void C_ccall trf_10506(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10506(t0,t1,t2);}

C_noret_decl(trf_10571)
static void C_ccall trf_10571(C_word c,C_word *av) C_noret;
static void C_ccall trf_10571(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10571(t0,t1,t2);}

C_noret_decl(trf_10764)
static void C_ccall trf_10764(C_word c,C_word *av) C_noret;
static void C_ccall trf_10764(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10764(t0,t1,t2,t3);}

C_noret_decl(trf_10797)
static void C_ccall trf_10797(C_word c,C_word *av) C_noret;
static void C_ccall trf_10797(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10797(t0,t1,t2);}

C_noret_decl(trf_10848)
static void C_ccall trf_10848(C_word c,C_word *av) C_noret;
static void C_ccall trf_10848(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10848(t0,t1,t2);}

C_noret_decl(trf_10893)
static void C_ccall trf_10893(C_word c,C_word *av) C_noret;
static void C_ccall trf_10893(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10893(t0,t1);}

C_noret_decl(trf_10952)
static void C_ccall trf_10952(C_word c,C_word *av) C_noret;
static void C_ccall trf_10952(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10952(t0,t1,t2);}

C_noret_decl(trf_11197)
static void C_ccall trf_11197(C_word c,C_word *av) C_noret;
static void C_ccall trf_11197(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11197(t0,t1,t2);}

C_noret_decl(trf_11351)
static void C_ccall trf_11351(C_word c,C_word *av) C_noret;
static void C_ccall trf_11351(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11351(t0,t1);}

C_noret_decl(trf_11386)
static void C_ccall trf_11386(C_word c,C_word *av) C_noret;
static void C_ccall trf_11386(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11386(t0,t1);}

C_noret_decl(trf_3547)
static void C_ccall trf_3547(C_word c,C_word *av) C_noret;
static void C_ccall trf_3547(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3547(t0,t1,t2,t3);}

C_noret_decl(trf_3574)
static void C_ccall trf_3574(C_word c,C_word *av) C_noret;
static void C_ccall trf_3574(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3574(t0,t1,t2,t3);}

C_noret_decl(trf_3587)
static void C_ccall trf_3587(C_word c,C_word *av) C_noret;
static void C_ccall trf_3587(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3587(t0,t1);}

C_noret_decl(trf_3609)
static void C_ccall trf_3609(C_word c,C_word *av) C_noret;
static void C_ccall trf_3609(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3609(t0,t1,t2);}

C_noret_decl(trf_3643)
static void C_ccall trf_3643(C_word c,C_word *av) C_noret;
static void C_ccall trf_3643(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3643(t0,t1,t2,t3);}

C_noret_decl(trf_3655)
static void C_ccall trf_3655(C_word c,C_word *av) C_noret;
static void C_ccall trf_3655(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3655(t0,t1,t2,t3);}

C_noret_decl(trf_3672)
static void C_ccall trf_3672(C_word c,C_word *av) C_noret;
static void C_ccall trf_3672(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3672(t0,t1,t2);}

C_noret_decl(trf_3756)
static void C_ccall trf_3756(C_word c,C_word *av) C_noret;
static void C_ccall trf_3756(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3756(t0,t1,t2);}

C_noret_decl(trf_3762)
static void C_ccall trf_3762(C_word c,C_word *av) C_noret;
static void C_ccall trf_3762(C_word c,C_word *av){
C_word t0=av[7];
C_word t1=av[6];
C_word t2=av[5];
C_word t3=av[4];
C_word t4=av[3];
C_word t5=av[2];
C_word t6=av[1];
C_word t7=av[0];
f_3762(t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(trf_3801)
static void C_ccall trf_3801(C_word c,C_word *av) C_noret;
static void C_ccall trf_3801(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3801(t0,t1);}

C_noret_decl(trf_3828)
static void C_ccall trf_3828(C_word c,C_word *av) C_noret;
static void C_ccall trf_3828(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3828(t0,t1);}

C_noret_decl(trf_4063)
static void C_ccall trf_4063(C_word c,C_word *av) C_noret;
static void C_ccall trf_4063(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4063(t0,t1);}

C_noret_decl(trf_4775)
static void C_ccall trf_4775(C_word c,C_word *av) C_noret;
static void C_ccall trf_4775(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4775(t0,t1,t2);}

C_noret_decl(trf_4805)
static void C_ccall trf_4805(C_word c,C_word *av) C_noret;
static void C_ccall trf_4805(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4805(t0,t1,t2,t3);}

C_noret_decl(trf_4835)
static void C_ccall trf_4835(C_word c,C_word *av) C_noret;
static void C_ccall trf_4835(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4835(t0,t1,t2);}

C_noret_decl(trf_4926)
static void C_ccall trf_4926(C_word c,C_word *av) C_noret;
static void C_ccall trf_4926(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4926(t0,t1,t2);}

C_noret_decl(trf_4960)
static void C_ccall trf_4960(C_word c,C_word *av) C_noret;
static void C_ccall trf_4960(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4960(t0,t1,t2);}

C_noret_decl(trf_5071)
static void C_ccall trf_5071(C_word c,C_word *av) C_noret;
static void C_ccall trf_5071(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5071(t0,t1,t2);}

C_noret_decl(trf_5105)
static void C_ccall trf_5105(C_word c,C_word *av) C_noret;
static void C_ccall trf_5105(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5105(t0,t1,t2);}

C_noret_decl(trf_5247)
static void C_ccall trf_5247(C_word c,C_word *av) C_noret;
static void C_ccall trf_5247(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5247(t0,t1,t2,t3);}

C_noret_decl(trf_5295)
static void C_ccall trf_5295(C_word c,C_word *av) C_noret;
static void C_ccall trf_5295(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5295(t0,t1,t2,t3);}

C_noret_decl(trf_5343)
static void C_ccall trf_5343(C_word c,C_word *av) C_noret;
static void C_ccall trf_5343(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5343(t0,t1,t2);}

C_noret_decl(trf_5377)
static void C_ccall trf_5377(C_word c,C_word *av) C_noret;
static void C_ccall trf_5377(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5377(t0,t1,t2);}

C_noret_decl(trf_5411)
static void C_ccall trf_5411(C_word c,C_word *av) C_noret;
static void C_ccall trf_5411(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5411(t0,t1,t2);}

C_noret_decl(trf_5834)
static void C_ccall trf_5834(C_word c,C_word *av) C_noret;
static void C_ccall trf_5834(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5834(t0,t1,t2);}

C_noret_decl(trf_6002)
static void C_ccall trf_6002(C_word c,C_word *av) C_noret;
static void C_ccall trf_6002(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6002(t0,t1,t2);}

C_noret_decl(trf_6174)
static void C_ccall trf_6174(C_word c,C_word *av) C_noret;
static void C_ccall trf_6174(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6174(t0,t1,t2);}

C_noret_decl(trf_6390)
static void C_ccall trf_6390(C_word c,C_word *av) C_noret;
static void C_ccall trf_6390(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6390(t0,t1,t2);}

C_noret_decl(trf_6526)
static void C_ccall trf_6526(C_word c,C_word *av) C_noret;
static void C_ccall trf_6526(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6526(t0,t1,t2,t3);}

C_noret_decl(trf_6549)
static void C_ccall trf_6549(C_word c,C_word *av) C_noret;
static void C_ccall trf_6549(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6549(t0,t1,t2);}

C_noret_decl(trf_6645)
static void C_ccall trf_6645(C_word c,C_word *av) C_noret;
static void C_ccall trf_6645(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6645(t0,t1,t2);}

C_noret_decl(trf_6658)
static void C_ccall trf_6658(C_word c,C_word *av) C_noret;
static void C_ccall trf_6658(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6658(t0,t1);}

C_noret_decl(trf_6702)
static void C_ccall trf_6702(C_word c,C_word *av) C_noret;
static void C_ccall trf_6702(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6702(t0,t1,t2);}

C_noret_decl(trf_6873)
static void C_ccall trf_6873(C_word c,C_word *av) C_noret;
static void C_ccall trf_6873(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6873(t0,t1);}

C_noret_decl(trf_6921)
static void C_ccall trf_6921(C_word c,C_word *av) C_noret;
static void C_ccall trf_6921(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6921(t0,t1);}

C_noret_decl(trf_6967)
static void C_ccall trf_6967(C_word c,C_word *av) C_noret;
static void C_ccall trf_6967(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6967(t0,t1,t2);}

C_noret_decl(trf_7198)
static void C_ccall trf_7198(C_word c,C_word *av) C_noret;
static void C_ccall trf_7198(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7198(t0,t1);}

C_noret_decl(trf_7257)
static void C_ccall trf_7257(C_word c,C_word *av) C_noret;
static void C_ccall trf_7257(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_7257(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_7329)
static void C_ccall trf_7329(C_word c,C_word *av) C_noret;
static void C_ccall trf_7329(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_7329(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_7532)
static void C_ccall trf_7532(C_word c,C_word *av) C_noret;
static void C_ccall trf_7532(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7532(t0,t1,t2);}

C_noret_decl(trf_7559)
static void C_ccall trf_7559(C_word c,C_word *av) C_noret;
static void C_ccall trf_7559(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7559(t0,t1,t2);}

C_noret_decl(trf_7571)
static void C_ccall trf_7571(C_word c,C_word *av) C_noret;
static void C_ccall trf_7571(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7571(t0,t1,t2);}

C_noret_decl(trf_7605)
static void C_ccall trf_7605(C_word c,C_word *av) C_noret;
static void C_ccall trf_7605(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7605(t0,t1,t2);}

C_noret_decl(trf_7859)
static void C_ccall trf_7859(C_word c,C_word *av) C_noret;
static void C_ccall trf_7859(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7859(t0,t1);}

C_noret_decl(trf_7869)
static void C_ccall trf_7869(C_word c,C_word *av) C_noret;
static void C_ccall trf_7869(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_7869(t0,t1,t2,t3,t4);}

C_noret_decl(trf_7959)
static void C_ccall trf_7959(C_word c,C_word *av) C_noret;
static void C_ccall trf_7959(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7959(t0,t1);}

C_noret_decl(trf_7968)
static void C_ccall trf_7968(C_word c,C_word *av) C_noret;
static void C_ccall trf_7968(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7968(t0,t1,t2);}

C_noret_decl(trf_8445)
static void C_ccall trf_8445(C_word c,C_word *av) C_noret;
static void C_ccall trf_8445(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8445(t0,t1,t2);}

C_noret_decl(trf_9358)
static void C_ccall trf_9358(C_word c,C_word *av) C_noret;
static void C_ccall trf_9358(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9358(t0,t1);}

C_noret_decl(trf_9379)
static void C_ccall trf_9379(C_word c,C_word *av) C_noret;
static void C_ccall trf_9379(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9379(t0,t1);}

C_noret_decl(trf_9391)
static void C_ccall trf_9391(C_word c,C_word *av) C_noret;
static void C_ccall trf_9391(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9391(t0,t1);}

C_noret_decl(trf_9426)
static void C_ccall trf_9426(C_word c,C_word *av) C_noret;
static void C_ccall trf_9426(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9426(t0,t1,t2);}

C_noret_decl(trf_9485)
static void C_ccall trf_9485(C_word c,C_word *av) C_noret;
static void C_ccall trf_9485(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9485(t0,t1,t2);}

C_noret_decl(trf_9573)
static void C_ccall trf_9573(C_word c,C_word *av) C_noret;
static void C_ccall trf_9573(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9573(t0,t1,t2);}

C_noret_decl(trf_9587)
static void C_ccall trf_9587(C_word c,C_word *av) C_noret;
static void C_ccall trf_9587(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_9587(t0,t1,t2,t3,t4);}

C_noret_decl(trf_9630)
static void C_ccall trf_9630(C_word c,C_word *av) C_noret;
static void C_ccall trf_9630(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9630(t0,t1,t2);}

C_noret_decl(trf_9683)
static void C_ccall trf_9683(C_word c,C_word *av) C_noret;
static void C_ccall trf_9683(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9683(t0,t1);}

C_noret_decl(trf_9725)
static void C_ccall trf_9725(C_word c,C_word *av) C_noret;
static void C_ccall trf_9725(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9725(t0,t1,t2);}

C_noret_decl(trf_9798)
static void C_ccall trf_9798(C_word c,C_word *av) C_noret;
static void C_ccall trf_9798(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9798(t0,t1,t2);}

C_noret_decl(trf_9905)
static void C_ccall trf_9905(C_word c,C_word *av) C_noret;
static void C_ccall trf_9905(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9905(t0,t1);}

/* chicken.load#load-relative in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 in ... */
static void C_ccall f_10004(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_10004,c,av);}
a=C_alloc(4);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10011,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1107: make-relative-pathname */
f_9426(t5,*((C_word*)lf[205]+1),t2);}

/* k10009 in chicken.load#load-relative in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in ... */
static void C_ccall f_10011(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10011,c,av);}
/* eval.scm:1108: load/internal */
t2=lf[223];
f_9587(t2,((C_word*)t0)[2],t1,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);}

/* chicken.load#load-noisily in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 in ... */
static void C_ccall f_10022(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +8,c,4)))){
C_save_and_reclaim((void*)f_10022,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+8);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10026,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10043,a[2]=((C_word)li190),tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1110: ##sys#get-keyword */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[255]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[255]+1);
av2[1]=t4;
av2[2]=lf[258];
av2[3]=t3;
av2[4]=t5;
tp(5,av2);}}

/* k10024 in chicken.load#load-noisily in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in ... */
static void C_ccall f_10026(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_10026,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10029,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10040,a[2]=((C_word)li189),tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1110: ##sys#get-keyword */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[255]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[255]+1);
av2[1]=t2;
av2[2]=lf[257];
av2[3]=((C_word*)t0)[4];
av2[4]=t3;
tp(5,av2);}}

/* k10027 in k10024 in chicken.load#load-noisily in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in ... */
static void C_ccall f_10029(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_10029,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10032,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10037,a[2]=((C_word)li188),tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1110: ##sys#get-keyword */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[255]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[255]+1);
av2[1]=t2;
av2[2]=lf[256];
av2[3]=((C_word*)t0)[5];
av2[4]=t3;
tp(5,av2);}}

/* k10030 in k10027 in k10024 in chicken.load#load-noisily in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in ... */
static void C_ccall f_10032(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_10032,c,av);}
a=C_alloc(9);
/* eval.scm:1111: load/internal */
t2=lf[223];
f_9587(t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],C_a_i_list(&a,3,C_SCHEME_TRUE,((C_word*)t0)[5],t1));}

/* a10036 in k10027 in k10024 in chicken.load#load-noisily in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in ... */
static void C_ccall f_10037(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10037,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a10039 in k10024 in chicken.load#load-noisily in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in ... */
static void C_ccall f_10040(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10040,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a10042 in chicken.load#load-noisily in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in ... */
static void C_ccall f_10043(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10043,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 in ... */
static void C_ccall f_10048(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_10048,c,av);}
a=C_alloc(24);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10050,a[2]=t1,a[3]=((C_word)li192),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10057,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=lf[193];
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11189,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11197,a[2]=t6,a[3]=t11,a[4]=t2,a[5]=t7,a[6]=((C_word)li253),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_11197(t13,t9,lf[193]);}

/* complete in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in ... */
static void C_fcall f_10050(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_10050,3,t0,t1,t2);}
t3=*((C_word*)lf[218]+1);
/* eval.scm:1122: g2407 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[218]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[218]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=((C_word*)t0)[2];
tp(4,av2);}}

/* k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in ... */
static void C_ccall f_10057(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(37,c,5)))){
C_save_and_reclaim((void *)f_10057,c,av);}
a=C_alloc(37);
t2=C_mutate((C_word*)lf[259]+1 /* (set! chicken.load#dynamic-load-libraries ...) */,t1);
t3=C_mutate((C_word*)lf[260]+1 /* (set! chicken.load#load-unit ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10059,a[2]=((C_word)li194),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[266]+1 /* (set! chicken.load#load-library ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10150,a[2]=((C_word)li195),tmp=(C_word)a,a+=3,tmp));
t5=*((C_word*)lf[267]+1);
t6=C_mutate((C_word*)lf[83]+1 /* (set! ##sys#include-forms-from-file ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10177,a[2]=t5,a[3]=((C_word)li201),tmp=(C_word)a,a+=4,tmp));
t7=C_set_block_item(lf[274] /* ##sys#setup-mode */,0,C_SCHEME_FALSE);
t8=C_mutate(&lf[275] /* (set! chicken.load#file-exists? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10258,a[2]=((C_word)li202),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[276]+1 /* (set! chicken.load#find-file ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10267,a[2]=((C_word)li203),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[278]+1 /* (set! chicken.load#find-dynamic-extension ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10314,a[2]=((C_word)li206),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[106]+1 /* (set! chicken.load#load-extension ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10415,a[2]=((C_word)li208),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[286]+1 /* (set! chicken.load#require ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10487,a[2]=((C_word)li211),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[288]+1 /* (set! chicken.load#provide ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10552,a[2]=((C_word)li214),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[290]+1 /* (set! chicken.load#provided? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10617,a[2]=((C_word)li217),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[260]+1 /* (set! chicken.load#load-unit ...) */,*((C_word*)lf[260]+1));
t16=C_mutate((C_word*)lf[106]+1 /* (set! chicken.load#load-extension ...) */,*((C_word*)lf[106]+1));
t17=C_mutate((C_word*)lf[276]+1 /* (set! chicken.load#find-file ...) */,*((C_word*)lf[276]+1));
t18=C_mutate((C_word*)lf[278]+1 /* (set! chicken.load#find-dynamic-extension ...) */,*((C_word*)lf[278]+1));
t19=C_mutate((C_word*)lf[108]+1 /* (set! ##sys#process-require ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10658,a[2]=((C_word)li218),tmp=(C_word)a,a+=3,tmp));
t20=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11182,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1277: chicken.platform#chicken-home */
t21=*((C_word*)lf[334]+1);{
C_word *av2=av;
av2[0]=t21;
av2[1]=t20;
((C_proc)(void*)(*((C_word*)t21+1)))(2,av2);}}

/* chicken.load#load-unit in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in ... */
static void C_ccall f_10059(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_10059,c,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10066,a[2]=t1,a[3]=t4,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1130: ##sys#provided? */
t6=*((C_word*)lf[194]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k10064 in chicken.load#load-unit in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in ... */
static void C_ccall f_10066(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_10066,c,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10069,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[5])){
t3=t2;
f_10069(t3,C_a_i_list(&a,1,((C_word*)t0)[5]));}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10140,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1134: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[218]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[218]+1);
av2[1]=t3;
av2[2]=C_slot(((C_word*)t0)[4],C_fix(1));
av2[3]=lf[190];
tp(4,av2);}}}}

/* k10067 in k10064 in chicken.load#load-unit in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in ... */
static void C_fcall f_10069(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_10069,2,t0,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10072,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1137: c-toplevel */
f_9573(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k10070 in k10067 in k10064 in chicken.load#load-unit in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in ... */
static void C_ccall f_10072(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_10072,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10075,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10121,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1138: load-verbose */
t4=*((C_word*)lf[204]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k10073 in k10070 in k10067 in k10064 in chicken.load#load-unit in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in ... */
static void C_ccall f_10075(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_10075,c,av);}
a=C_alloc(9);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10080,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word)li193),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_10080(t5,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* loop in k10073 in k10070 in k10067 in k10064 in chicken.load#load-unit in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in ... */
static void C_fcall f_10080(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_10080,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10094,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[236]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_dlerror);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10103,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10114,a[2]=t3,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1145: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[217]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[217]+1);
av2[1]=t4;
av2[2]=C_slot(t2,C_fix(0));
av2[3]=lf[263];
tp(4,av2);}}}

/* k10092 in loop in k10073 in k10070 in k10067 in k10064 in chicken.load#load-unit in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in ... */
static void C_ccall f_10094(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_10094,c,av);}
if(C_truep(t1)){
/* eval.scm:1144: ##sys#error */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[261];
av2[4]=((C_word*)t0)[4];
av2[5]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}
else{
/* eval.scm:1144: ##sys#error */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[261];
av2[4]=((C_word*)t0)[4];
av2[5]=lf[262];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}

/* k10101 in loop in k10073 in k10070 in k10067 in k10064 in chicken.load#load-unit in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in ... */
static void C_ccall f_10103(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10103,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* eval.scm:1148: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_10080(t2,((C_word*)t0)[2],C_slot(((C_word*)t0)[4],C_fix(1)));}}

/* k10112 in loop in k10073 in k10070 in k10067 in k10064 in chicken.load#load-unit in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in ... */
static void C_ccall f_10114(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10114,c,av);}
/* eval.scm:1145: ##sys#dload */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[224]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[224]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k10119 in k10070 in k10067 in k10064 in chicken.load#load-unit in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in ... */
static void C_ccall f_10121(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_10121,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10124,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1139: scheme#display */
t3=*((C_word*)lf[241]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[265];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_10075(2,av2);}}}

/* k10122 in k10119 in k10070 in k10067 in k10064 in chicken.load#load-unit in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in ... */
static void C_ccall f_10124(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10124,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10127,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1140: scheme#display */
t3=*((C_word*)lf[241]+1);{
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

/* k10125 in k10122 in k10119 in k10070 in k10067 in k10064 in chicken.load#load-unit in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in ... */
static void C_ccall f_10127(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10127,c,av);}
/* eval.scm:1141: scheme#display */
t2=*((C_word*)lf[241]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[264];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k10138 in k10064 in chicken.load#load-unit in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in ... */
static void C_ccall f_10140(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_10140,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10144,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1135: dynamic-load-libraries */
t3=*((C_word*)lf[259]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k10142 in k10138 in k10064 in chicken.load#load-unit in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in ... */
static void C_ccall f_10144(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_10144,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
f_10069(t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* chicken.load#load-library in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in ... */
static void C_ccall f_10150(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10150,c,av);}
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=C_i_check_symbol_2(t2,lf[263]);
if(C_truep(C_i_not(t4))){
/* eval.scm:1153: load-unit */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[260]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[260]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=t4;
av2[4]=lf[263];
tp(5,av2);}}
else{
t6=C_i_check_string_2(t4,lf[263]);
/* eval.scm:1153: load-unit */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[260]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[260]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=t4;
av2[4]=lf[263];
tp(5,av2);}}}

/* ##sys#include-forms-from-file in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in ... */
static void C_ccall f_10177(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_10177,c,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10181,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1160: ##sys#resolve-include-filename */
t6=*((C_word*)lf[273]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
av2[5]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(6,av2);}}

/* k10179 in ##sys#include-forms-from-file in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in ... */
static void C_ccall f_10181(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_10181,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10184,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_not(t1))){
/* eval.scm:1162: ##sys#signal-hook */
t3=*((C_word*)lf[213]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[246];
av2[3]=lf[271];
av2[4]=lf[272];
av2[5]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_10184(2,av2);}}}

/* k10182 in k10179 in ##sys#include-forms-from-file in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in ... */
static void C_ccall f_10184(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_10184,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10187,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10246,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1163: load-verbose */
t4=*((C_word*)lf[204]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k10185 in k10182 in k10179 in ##sys#include-forms-from-file in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in ... */
static void C_ccall f_10187(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_10187,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10192,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li200),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1165: with-input-from-file */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[5];
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* a10191 in k10185 in k10182 in k10179 in ##sys#include-forms-from-file in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in ... */
static void C_ccall f_10192(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_10192,c,av);}
a=C_alloc(18);
t2=((C_word*)t0)[2];
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10198,a[2]=t5,a[3]=t3,a[4]=((C_word)li196),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10203,a[2]=((C_word*)t0)[3],a[3]=((C_word)li198),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10240,a[2]=t3,a[3]=t5,a[4]=((C_word)li199),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1167: ##sys#dynamic-wind */
t9=*((C_word*)lf[47]+1);{
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

/* a10197 in a10191 in k10185 in k10182 in k10179 in ##sys#include-forms-from-file in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in ... */
static void C_ccall f_10198(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10198,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[228]+1));
t3=C_mutate((C_word*)lf[228]+1 /* (set! ##sys#current-source-filename ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a10202 in a10191 in k10185 in k10182 in k10179 in ##sys#include-forms-from-file in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in ... */
static void C_ccall f_10203(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_10203,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10211,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1168: read */
t3=*((C_word*)lf[229]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k10209 in a10202 in a10191 in k10185 in k10182 in k10179 in ##sys#include-forms-from-file in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in ... */
static void C_ccall f_10211(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10211,c,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10213,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li197),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_10213(t5,((C_word*)t0)[3],t1,C_SCHEME_END_OF_LIST);}

/* doloop2487 in k10209 in a10202 in a10191 in k10185 in k10182 in k10179 in ##sys#include-forms-from-file in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in ... */
static void C_fcall f_10213(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10213,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_eofp(t2))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10227,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1171: reverse */
t5=*((C_word*)lf[96]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10234,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1168: read */
t5=*((C_word*)lf[229]+1);{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k10225 in doloop2487 in k10209 in a10202 in a10191 in k10185 in k10182 in k10179 in ##sys#include-forms-from-file in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in ... */
static void C_ccall f_10227(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10227,c,av);}
/* eval.scm:1171: k */
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

/* k10232 in doloop2487 in k10209 in a10202 in a10191 in k10185 in k10182 in k10179 in ##sys#include-forms-from-file in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in ... */
static void C_ccall f_10234(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_10234,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=((C_word*)((C_word*)t0)[4])[1];
f_10213(t3,((C_word*)t0)[5],t1,t2);}

/* a10239 in a10191 in k10185 in k10182 in k10179 in ##sys#include-forms-from-file in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in ... */
static void C_ccall f_10240(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10240,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[228]+1));
t3=C_mutate((C_word*)lf[228]+1 /* (set! ##sys#current-source-filename ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k10244 in k10182 in k10179 in ##sys#include-forms-from-file in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in ... */
static void C_ccall f_10246(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10246,c,av);}
if(C_truep(t1)){
/* eval.scm:1164: chicken.base#print */
t2=*((C_word*)lf[268]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[269];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[270];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_10187(2,av2);}}}

/* chicken.load#file-exists? in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in ... */
static void C_fcall f_10258(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,5)))){
C_save_and_reclaim_args((void *)trf_10258,2,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10265,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1179: ##sys#file-exists? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[248]+1));
C_word av2[6];
av2[0]=*((C_word*)lf[248]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
av2[5]=C_SCHEME_FALSE;
tp(6,av2);}}

/* k10263 in chicken.load#file-exists? in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in ... */
static void C_ccall f_10265(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10265,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?((C_word*)t0)[3]:C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.load#find-file in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in ... */
static void C_ccall f_10267(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_10267,c,av);}
a=C_alloc(8);
if(C_truep(C_i_not(t3))){
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_i_nullp(t3))){
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_i_stringp(t3))){
t4=C_a_i_list1(&a,1,t3);
/* eval.scm:1184: find-file */
t5=*((C_word*)lf[276]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10296,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10308,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1185: scheme#string-append */
t6=*((C_word*)lf[201]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_i_car(t3);
av2[3]=lf[277];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}}}}

/* k10294 in chicken.load#find-file in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in ... */
static void C_ccall f_10296(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10296,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* eval.scm:1186: find-file */
t2=*((C_word*)lf[276]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_u_i_cdr(((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k10306 in chicken.load#find-file in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in ... */
static void C_ccall f_10308(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10308,c,av);}
/* eval.scm:1185: file-exists? */
f_10258(((C_word*)t0)[2],t1);}

/* chicken.load#find-dynamic-extension in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in ... */
static void C_ccall f_10314(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_10314,c,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10318,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1191: chicken.platform#repository-path */
t5=*((C_word*)lf[284]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k10316 in chicken.load#find-dynamic-extension in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in ... */
static void C_ccall f_10318(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_10318,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10321,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[4]))){
/* eval.scm:1192: scheme#symbol->string */
t3=*((C_word*)lf[283]+1);{
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
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
f_10321(2,av2);}}}

/* k10319 in k10316 in chicken.load#find-dynamic-extension in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in ... */
static void C_ccall f_10321(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_10321,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10323,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word)li204),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10366,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(C_truep(*((C_word*)lf[274]+1))?lf[280]:C_SCHEME_END_OF_LIST);
t5=(C_truep(((C_word*)t0)[2])?((C_word*)t0)[2]:C_SCHEME_END_OF_LIST);
t6=(C_truep(((C_word*)t0)[4])?*((C_word*)lf[281]+1):C_SCHEME_END_OF_LIST);
if(C_truep(*((C_word*)lf[274]+1))){
/* eval.scm:1200: ##sys#append */
t7=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=t4;
av2[3]=t5;
av2[4]=t6;
av2[5]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t7+1)))(6,av2);}}
else{
/* eval.scm:1200: ##sys#append */
t7=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=t4;
av2[3]=t5;
av2[4]=t6;
av2[5]=lf[282];
((C_proc)(void*)(*((C_word*)t7+1)))(6,av2);}}}

/* check in k10319 in k10316 in chicken.load#find-dynamic-extension in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in ... */
static void C_fcall f_10323(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,4)))){
C_save_and_reclaim_args((void *)trf_10323,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10327,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1194: string-append */
t4=*((C_word*)lf[201]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[279];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k10325 in check in k10319 in k10316 in chicken.load#find-dynamic-extension in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in ... */
static void C_ccall f_10327(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_10327,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10330,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
if(C_truep(C_i_not(*((C_word*)lf[206]+1)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10352,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1197: chicken.platform#feature? */
t4=*((C_word*)lf[250]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[251];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_10330(2,av2);}}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_10330(2,av2);}}}

/* k10328 in k10325 in check in k10319 in k10316 in chicken.load#find-dynamic-extension in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in ... */
static void C_ccall f_10330(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_10330,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10340,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1199: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[218]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[218]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[188];
tp(4,av2);}}}

/* k10338 in k10328 in k10325 in check in k10319 in k10316 in chicken.load#find-dynamic-extension in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in ... */
static void C_ccall f_10340(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10340,c,av);}
/* eval.scm:1199: file-exists? */
f_10258(((C_word*)t0)[2],t1);}

/* k10350 in k10325 in check in k10319 in k10316 in chicken.load#find-dynamic-extension in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in ... */
static void C_ccall f_10352(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_10352,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10359,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1198: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[218]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[218]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=*((C_word*)lf[191]+1);
tp(4,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_10330(2,av2);}}}

/* k10357 in k10350 in k10325 in check in k10319 in k10316 in chicken.load#find-dynamic-extension in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in ... */
static void C_ccall f_10359(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10359,c,av);}
/* eval.scm:1198: file-exists? */
f_10258(((C_word*)t0)[2],t1);}

/* k10364 in k10319 in k10316 in chicken.load#find-dynamic-extension in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in ... */
static void C_ccall f_10366(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10366,c,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10368,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li205),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_10368(t5,((C_word*)t0)[3],t1);}

/* loop in k10364 in k10319 in k10316 in chicken.load#find-dynamic-extension in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in ... */
static void C_fcall f_10368(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_10368,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10381,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1207: check */
t5=((C_word*)t0)[3];
f_10323(t5,t4,t3);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10379 in loop in k10364 in k10319 in k10316 in chicken.load#find-dynamic-extension in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in ... */
static void C_ccall f_10381(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10381,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* eval.scm:1208: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_10368(t2,((C_word*)t0)[2],C_slot(((C_word*)t0)[4],C_fix(1)));}}

/* chicken.load#load-extension in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in ... */
static void C_ccall f_10415(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_10415,c,av);}
a=C_alloc(10);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10456,a[2]=t1,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10424,a[2]=t5,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1211: ##sys#provided? */
t7=*((C_word*)lf[194]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k10422 in chicken.load#load-extension in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in ... */
static void C_ccall f_10424(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10424,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
f_10456(2,av2);}}
else{
t2=C_eqp(((C_word*)t0)[3],C_SCHEME_TRUE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10440,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1213: chicken.internal#module-requirement */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[94]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[94]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[3]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10453,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1215: chicken.internal#module-requirement */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[94]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[94]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_10456(2,av2);}}}}}

/* k10438 in k10422 in chicken.load#load-extension in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in ... */
static void C_ccall f_10440(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10440,c,av);}
/* eval.scm:1213: ##sys#provided? */
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

/* k10451 in k10422 in chicken.load#load-extension in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in ... */
static void C_ccall f_10453(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10453,c,av);}
/* eval.scm:1215: ##sys#provided? */
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

/* k10454 in chicken.load#load-extension in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in ... */
static void C_ccall f_10456(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_10456,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_memq(((C_word*)t0)[3],lf[184]))){
/* eval.scm:1221: load-unit */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[260]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[260]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
tp(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10468,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1222: find-dynamic-extension */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[278]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[278]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_FALSE;
tp(4,av2);}}}}

/* k10466 in k10454 in chicken.load#load-extension in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in ... */
static void C_ccall f_10468(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_10468,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10472,a[2]=((C_word*)t0)[2],a[3]=((C_word)li207),tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1220: g2558 */
t3=t2;
f_10472(t3,((C_word*)t0)[3],t1);}
else{
/* eval.scm:1228: ##sys#error */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[285];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* g2558 in k10466 in k10454 in chicken.load#load-extension in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in ... */
static void C_fcall f_10472(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(16,0,4)))){
C_save_and_reclaim_args((void *)trf_10472,3,t0,t1,t2);}
a=C_alloc(16);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10476,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1224: load/internal */
t4=lf[223];
f_9587(t4,t3,t2,C_SCHEME_FALSE,C_a_i_list(&a,4,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[2]));}

/* k10474 in g2558 in k10466 in k10454 in chicken.load#load-extension in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in ... */
static void C_ccall f_10476(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10476,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10479,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1225: ##sys#provide */
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

/* k10477 in k10474 in g2558 in k10466 in k10454 in chicken.load#load-extension in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in ... */
static void C_ccall f_10479(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10479,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.load#require in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in ... */
static void C_ccall f_10487(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +9,c,3)))){
C_save_and_reclaim((void*)f_10487,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+9);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10529,a[2]=((C_word)li209),tmp=(C_word)a,a+=3,tmp);
t4=(
  f_10529(t2)
);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10506,a[2]=t6,a[3]=((C_word)li210),tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_10506(t8,t1,t2);}

/* for-each-loop2577 in chicken.load#require in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in ... */
static void C_fcall f_10506(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_10506,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10516,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[106]+1);
/* eval.scm:1232: g2608 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[106]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[106]+1);
av2[1]=t3;
av2[2]=t4;
av2[3]=C_SCHEME_FALSE;
av2[4]=lf[287];
tp(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k10514 in for-each-loop2577 in chicken.load#require in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in ... */
static void C_ccall f_10516(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10516,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_10506(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* for-each-loop2567 in chicken.load#require in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in ... */
static C_word C_fcall f_10529(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_pairp(t1))){
t2=C_slot(t1,C_fix(0));
t3=C_i_check_symbol_2(t2,lf[287]);
t5=C_slot(t1,C_fix(1));
t1=t5;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* chicken.load#provide in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in ... */
static void C_ccall f_10552(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +9,c,3)))){
C_save_and_reclaim((void*)f_10552,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+9);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10594,a[2]=((C_word)li212),tmp=(C_word)a,a+=3,tmp);
t4=(
  f_10594(t2)
);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10571,a[2]=t6,a[3]=((C_word)li213),tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_10571(t8,t1,t2);}

/* for-each-loop2630 in chicken.load#provide in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in ... */
static void C_fcall f_10571(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_10571,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10581,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[93]+1);
/* eval.scm:1236: g2661 */
t6=*((C_word*)lf[93]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k10579 in for-each-loop2630 in chicken.load#provide in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in ... */
static void C_ccall f_10581(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10581,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_10571(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* for-each-loop2620 in chicken.load#provide in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in ... */
static C_word C_fcall f_10594(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_pairp(t1))){
t2=C_slot(t1,C_fix(0));
t3=C_i_check_symbol_2(t2,lf[289]);
t5=C_slot(t1,C_fix(1));
t1=t5;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* chicken.load#provided? in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in ... */
static void C_ccall f_10617(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +10,c,3)))){
C_save_and_reclaim((void*)f_10617,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+10);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10631,a[2]=((C_word)li215),tmp=(C_word)a,a+=3,tmp);
t4=(
  f_10631(t2)
);
t5=*((C_word*)lf[194]+1);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8445,a[2]=t7,a[3]=t5,a[4]=((C_word)li216),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_8445(t9,t1,t2);}

/* for-each-loop2673 in chicken.load#provided? in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in ... */
static C_word C_fcall f_10631(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_pairp(t1))){
t2=C_slot(t1,C_fix(0));
t3=C_i_check_symbol_2(t2,lf[291]);
t5=C_slot(t1,C_fix(1));
t1=t5;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* ##sys#process-require in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in ... */
static void C_ccall f_10658(C_word c,C_word *av){
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
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(30,c,3)))){
C_save_and_reclaim((void *)f_10658,c,av);}
a=C_alloc(30);
t5=C_eqp(t2,t3);
t6=(C_truep(t5)?t5:t3);
t7=C_i_assq(t2,lf[182]);
if(C_truep(t7)){
/* eval.scm:1255: scheme#values */{
C_word *av2=av;
av2[0]=0;
av2[1]=t1;
av2[2]=C_i_cdr(t7);
av2[3]=C_SCHEME_TRUE;
C_values(4,av2);}}
else{
if(C_truep((C_truep(C_eqp(t2,lf[292]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[293]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[294]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[295]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[296]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[297]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[298]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[299]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[300]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[301]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[302]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[303]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[304]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[305]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[306]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[307]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[308]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))))))))))))))))){
/* eval.scm:1257: scheme#values */{
C_word *av2=av;
av2[0]=0;
av2[1]=t1;
av2[2]=lf[309];
av2[3]=C_SCHEME_TRUE;
C_values(4,av2);}}
else{
if(C_truep(C_i_memq(t2,lf[184]))){
if(C_truep(t4)){
t8=C_a_i_list(&a,2,lf[140],t2);
/* eval.scm:1259: scheme#values */{
C_word *av2=av;
av2[0]=0;
av2[1]=t1;
av2[2]=t8;
av2[3]=C_SCHEME_TRUE;
C_values(4,av2);}}
else{
t8=C_a_i_list(&a,2,lf[23],t2);
t9=C_a_i_list(&a,2,lf[23],C_SCHEME_FALSE);
t10=C_a_i_list(&a,2,lf[23],C_SCHEME_FALSE);
t11=C_a_i_list(&a,4,lf[260],t8,t9,t10);
/* eval.scm:1259: scheme#values */{
C_word *av2=av;
av2[0]=0;
av2[1]=t1;
av2[2]=t11;
av2[3]=C_SCHEME_TRUE;
C_values(4,av2);}}}
else{
t8=C_eqp(t4,lf[310]);
if(C_truep(t8)){
t9=C_a_i_list(&a,2,lf[140],t2);
/* eval.scm:1267: scheme#values */{
C_word *av2=av;
av2[0]=0;
av2[1]=t1;
av2[2]=t9;
av2[3]=C_SCHEME_FALSE;
C_values(4,av2);}}
else{
t9=C_a_i_list(&a,2,lf[23],t2);
t10=C_a_i_list(&a,2,lf[23],t6);
t11=C_a_i_list(&a,2,lf[23],C_SCHEME_FALSE);
t12=C_a_i_list(&a,4,lf[106],t9,t10,t11);
/* eval.scm:1269: scheme#values */{
C_word *av2=av;
av2[0]=0;
av2[1]=t1;
av2[2]=t12;
av2[3]=C_SCHEME_FALSE;
C_values(4,av2);}}}}}}

/* ##sys#resolve-include-filename in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in ... */
static void C_ccall f_10761(C_word c,C_word *av){
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
C_word t13;
C_word t14;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(23,c,4)))){
C_save_and_reclaim((void *)f_10761,c,av);}
a=C_alloc(23);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10764,a[2]=t7,a[3]=((C_word)li219),tmp=(C_word)a,a+=4,tmp));
t11=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10797,a[2]=t3,a[3]=t7,a[4]=((C_word)li220),tmp=(C_word)a,a+=5,tmp));
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10836,a[2]=t1,a[3]=t9,a[4]=t2,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10890,a[2]=t9,a[3]=t12,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1298: make-relative-pathname */
f_9426(t13,t5,t2);}

/* test-extensions in ##sys#resolve-include-filename in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in ... */
static void C_fcall f_10764(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_10764,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t3))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10777,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1284: file-exists? */
f_10258(t4,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10780,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1285: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[218]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[218]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=C_i_car(t3);
tp(4,av2);}}}

/* k10775 in test-extensions in ##sys#resolve-include-filename in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in ... */
static void C_ccall f_10777(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10777,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?((C_word*)t0)[3]:C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k10778 in test-extensions in ##sys#resolve-include-filename in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in ... */
static void C_ccall f_10780(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_10780,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10783,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1286: file-exists? */
f_10258(t2,t1);}

/* k10781 in k10778 in test-extensions in ##sys#resolve-include-filename in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in ... */
static void C_ccall f_10783(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10783,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* eval.scm:1287: test-extensions */
t2=((C_word*)((C_word*)t0)[3])[1];
f_10764(t2,((C_word*)t0)[2],((C_word*)t0)[4],C_u_i_cdr(((C_word*)t0)[5]));}}

/* test in ##sys#resolve-include-filename in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in ... */
static void C_fcall f_10797(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_10797,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
/* eval.scm:1289: test-extensions */
t3=((C_word*)((C_word*)t0)[3])[1];
f_10764(t3,t1,t2,((C_word*)t0)[2]);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10833,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1292: chicken.platform#feature? */
t4=*((C_word*)lf[250]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[251];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k10831 in test in ##sys#resolve-include-filename in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in ... */
static void C_ccall f_10833(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_10833,c,av);}
a=C_alloc(6);
if(C_truep(C_i_not(t1))){
t2=C_a_i_list1(&a,1,lf[188]);
/* eval.scm:1289: test-extensions */
t3=((C_word*)((C_word*)t0)[2])[1];
f_10764(t3,((C_word*)t0)[3],((C_word*)t0)[4],t2);}
else{
t2=C_i_not(((C_word*)t0)[5]);
t3=(C_truep(t2)?C_a_i_list2(&a,2,*((C_word*)lf[191]+1),lf[188]):C_a_i_list2(&a,2,lf[188],*((C_word*)lf[191]+1)));
/* eval.scm:1289: test-extensions */
t4=((C_word*)((C_word*)t0)[2])[1];
f_10764(t4,((C_word*)t0)[3],((C_word*)t0)[4],t3);}}

/* k10834 in ##sys#resolve-include-filename in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in ... */
static void C_ccall f_10836(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_10836,c,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10846,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[5])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10883,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1302: chicken.platform#repository-path */
t4=*((C_word*)lf[284]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=*((C_word*)lf[281]+1);
f_10846(2,av2);}}}}

/* k10844 in k10834 in ##sys#resolve-include-filename in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in ... */
static void C_ccall f_10846(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_10846,c,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10848,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li221),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_10848(t5,((C_word*)t0)[4],t1);}

/* loop in k10844 in k10834 in ##sys#resolve-include-filename in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in ... */
static void C_fcall f_10848(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_10848,3,t0,t1,t2);}
a=C_alloc(9);
t3=C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t3)){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10858,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10872,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1305: string-append */
t6=*((C_word*)lf[201]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t5;
av2[2]=C_slot(t2,C_fix(0));
av2[3]=lf[311];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}}

/* k10856 in loop in k10844 in k10834 in ##sys#resolve-include-filename in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in ... */
static void C_ccall f_10858(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10858,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* eval.scm:1308: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_10848(t2,((C_word*)t0)[2],C_slot(((C_word*)t0)[4],C_fix(1)));}}

/* k10870 in loop in k10844 in k10834 in ##sys#resolve-include-filename in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in ... */
static void C_ccall f_10872(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10872,c,av);}
/* eval.scm:1305: test */
t2=((C_word*)((C_word*)t0)[2])[1];
f_10797(t2,((C_word*)t0)[3],t1);}

/* k10881 in k10834 in ##sys#resolve-include-filename in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in ... */
static void C_ccall f_10883(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10883,c,av);}
if(C_truep(t1)){
/* eval.scm:1300: ##sys#append */
t2=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[281]+1);
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
/* eval.scm:1300: ##sys#append */
t2=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[281]+1);
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k10888 in ##sys#resolve-include-filename in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in ... */
static void C_ccall f_10890(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10890,c,av);}
/* eval.scm:1298: test */
t2=((C_word*)((C_word*)t0)[2])[1];
f_10797(t2,((C_word*)t0)[3],t1);}

/* run-safe in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in ... */
static void C_fcall f_10893(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_10893,2,t1,t2);}
a=C_alloc(7);
t3=lf[312] /* last-error */ =C_SCHEME_FALSE;;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10898,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10903,a[2]=t2,a[3]=((C_word)li229),tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1328: scheme#call-with-current-continuation */
t6=*((C_word*)lf[316]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k10896 in run-safe in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in ... */
static void C_ccall f_10898(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10898,c,av);}
/* eval.scm:1326: g2842 */
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a10902 in run-safe in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in ... */
static void C_ccall f_10903(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_10903,c,av);}
a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10909,a[2]=t2,a[3]=((C_word)li224),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10928,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li228),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1328: chicken.condition#with-exception-handler */
t5=*((C_word*)lf[315]+1);{
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

/* a10908 in a10902 in run-safe in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in ... */
static void C_ccall f_10909(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10909,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10915,a[2]=t2,a[3]=((C_word)li223),tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1328: k2839 */
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a10914 in a10908 in a10902 in run-safe in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in ... */
static void C_ccall f_10915(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_10915,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10919,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1329: chicken.base#open-output-string */
t3=*((C_word*)lf[15]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k10917 in a10914 in a10908 in a10902 in run-safe in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in ... */
static void C_ccall f_10919(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_10919,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10922,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1330: chicken.condition#print-error-message */
t3=*((C_word*)lf[314]+1);{
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

/* k10920 in k10917 in a10914 in a10908 in a10902 in run-safe in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in ... */
static void C_ccall f_10922(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10922,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10926,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1331: chicken.base#get-output-string */
t3=*((C_word*)lf[13]+1);{
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

/* k10924 in k10920 in k10917 in a10914 in a10908 in a10902 in run-safe in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in ... */
static void C_ccall f_10926(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10926,c,av);}
t2=C_mutate(&lf[312] /* (set! last-error ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a10927 in a10902 in run-safe in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in ... */
static void C_ccall f_10928(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_10928,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10934,a[2]=((C_word*)t0)[2],a[3]=((C_word)li225),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10940,a[2]=((C_word*)t0)[3],a[3]=((C_word)li227),tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1328: ##sys#call-with-values */{
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

/* a10933 in a10927 in a10902 in run-safe in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in ... */
static void C_ccall f_10934(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10934,c,av);}
/* eval.scm:1333: thunk */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a10939 in a10927 in a10902 in run-safe in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in ... */
static void C_ccall f_10940(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_10940,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10946,a[2]=t2,a[3]=((C_word)li226),tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1328: k2839 */
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

/* a10945 in a10939 in a10927 in a10902 in run-safe in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in ... */
static void C_ccall f_10946(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10946,c,av);}{
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

/* store-result in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in ... */
static void C_fcall f_10952(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_10952,3,t1,t2,t3);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10956,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1340: ##sys#gc */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[318]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[318]+1);
av2[1]=t4;
av2[2]=C_SCHEME_FALSE;
tp(3,av2);}}

/* k10954 in store-result in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in ... */
static void C_ccall f_10956(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10956,c,av);}
if(C_truep(((C_word*)t0)[2])){
t2=C_store_result(((C_word*)t0)[3],((C_word*)t0)[2]);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* CHICKEN_yield in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in ... */
static void C_ccall f_10961(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10961,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10967,a[2]=((C_word)li232),tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1346: run-safe */
f_10893(t1,t2);}

/* a10966 in CHICKEN_yield in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in ... */
static void C_ccall f_10967(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10967,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10971,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1346: ##sys#thread-yield! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[320]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[320]+1);
av2[1]=t2;
tp(2,av2);}}

/* k10969 in a10966 in CHICKEN_yield in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in ... */
static void C_ccall f_10971(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10971,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* CHICKEN_eval in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in ... */
static void C_ccall f_10973(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_10973,c,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10979,a[2]=t3,a[3]=t2,a[4]=((C_word)li234),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1349: run-safe */
f_10893(t1,t4);}

/* a10978 in CHICKEN_eval in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in ... */
static void C_ccall f_10979(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_10979,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10987,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1351: scheme#eval */
t3=*((C_word*)lf[153]+1);{
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

/* k10985 in a10978 in CHICKEN_eval in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in ... */
static void C_ccall f_10987(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10987,c,av);}
/* eval.scm:1351: store-result */
f_10952(((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* CHICKEN_eval_string in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in ... */
static void C_ccall f_10989(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10989,c,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10993,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1353: ##sys#peek-c-string */
t5=*((C_word*)lf[236]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k10991 in CHICKEN_eval_string in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in ... */
static void C_ccall f_10993(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_10993,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10998,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word)li236),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1354: run-safe */
f_10893(((C_word*)t0)[3],t2);}

/* a10997 in k10991 in CHICKEN_eval_string in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in ... */
static void C_ccall f_10998(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_10998,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11002,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1356: chicken.base#open-input-string */
t3=*((C_word*)lf[323]+1);{
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

/* k11000 in a10997 in k10991 in CHICKEN_eval_string in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in ... */
static void C_ccall f_11002(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_11002,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11009,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11013,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1357: scheme#read */
t4=*((C_word*)lf[229]+1);{
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

/* k11007 in k11000 in a10997 in k10991 in CHICKEN_eval_string in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in ... */
static void C_ccall f_11009(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11009,c,av);}
/* eval.scm:1357: store-result */
f_10952(((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k11011 in k11000 in a10997 in k10991 in CHICKEN_eval_string in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in ... */
static void C_ccall f_11013(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11013,c,av);}
/* eval.scm:1357: scheme#eval */
t2=*((C_word*)lf[153]+1);{
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

/* store-string in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in ... */
static C_word C_fcall f_11015(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;{}
t4=C_block_size(t1);
if(C_truep(C_fixnum_greater_or_equal_p(t4,t2))){
t5=C_mutate(&lf[312] /* (set! last-error ...) */,lf[325]);
return(C_SCHEME_FALSE);}
else{
return(C_copy_result_string(t1,t3,t4));}}

/* CHICKEN_eval_to_string in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in ... */
static void C_ccall f_11028(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_11028,c,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11034,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=((C_word)li239),tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1373: run-safe */
f_10893(t1,t5);}

/* a11033 in CHICKEN_eval_to_string in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in ... */
static void C_ccall f_11034(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_11034,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11038,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1375: chicken.base#open-output-string */
t3=*((C_word*)lf[15]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k11036 in a11033 in CHICKEN_eval_to_string in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in ... */
static void C_ccall f_11038(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_11038,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11041,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11052,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1376: scheme#eval */
t4=*((C_word*)lf[153]+1);{
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

/* k11039 in k11036 in a11033 in CHICKEN_eval_to_string in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in ... */
static void C_ccall f_11041(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11041,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11048,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1377: chicken.base#get-output-string */
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
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k11046 in k11039 in k11036 in a11033 in CHICKEN_eval_to_string in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in ... */
static void C_ccall f_11048(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11048,c,av);}
/* eval.scm:1377: store-string */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(
/* eval.scm:1377: store-string */
  f_11015(t1,((C_word*)t0)[3],((C_word*)t0)[4])
);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k11050 in k11036 in a11033 in CHICKEN_eval_to_string in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in ... */
static void C_ccall f_11052(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11052,c,av);}
/* eval.scm:1376: scheme#write */
t2=*((C_word*)lf[14]+1);{
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

/* CHICKEN_eval_string_to_string in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in ... */
static void C_ccall f_11054(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_11054,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11058,a[2]=t4,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1379: ##sys#peek-c-string */
t6=*((C_word*)lf[236]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k11056 in CHICKEN_eval_string_to_string in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in ... */
static void C_ccall f_11058(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_11058,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11063,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word)li241),tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1382: run-safe */
f_10893(((C_word*)t0)[4],t2);}

/* a11062 in k11056 in CHICKEN_eval_string_to_string in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in ... */
static void C_ccall f_11063(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_11063,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11067,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1384: chicken.base#open-output-string */
t3=*((C_word*)lf[15]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k11065 in a11062 in k11056 in CHICKEN_eval_string_to_string in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in ... */
static void C_ccall f_11067(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11067,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11070,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11081,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11085,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11089,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1385: chicken.base#open-input-string */
t6=*((C_word*)lf[323]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k11068 in k11065 in a11062 in k11056 in CHICKEN_eval_string_to_string in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in ... */
static void C_ccall f_11070(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11070,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11077,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1386: chicken.base#get-output-string */
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
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k11075 in k11068 in k11065 in a11062 in k11056 in CHICKEN_eval_string_to_string in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in ... */
static void C_ccall f_11077(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11077,c,av);}
/* eval.scm:1386: store-string */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(
/* eval.scm:1386: store-string */
  f_11015(t1,((C_word*)t0)[3],((C_word*)t0)[4])
);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k11079 in k11065 in a11062 in k11056 in CHICKEN_eval_string_to_string in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in ... */
static void C_ccall f_11081(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11081,c,av);}
/* eval.scm:1385: scheme#write */
t2=*((C_word*)lf[14]+1);{
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

/* k11083 in k11065 in a11062 in k11056 in CHICKEN_eval_string_to_string in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in ... */
static void C_ccall f_11085(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11085,c,av);}
/* eval.scm:1385: scheme#eval */
t2=*((C_word*)lf[153]+1);{
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

/* k11087 in k11065 in a11062 in k11056 in CHICKEN_eval_string_to_string in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in ... */
static void C_ccall f_11089(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11089,c,av);}
/* eval.scm:1385: scheme#read */
t2=*((C_word*)lf[229]+1);{
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

/* CHICKEN_apply in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in ... */
static void C_ccall f_11091(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_11091,c,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11097,a[2]=t4,a[3]=t2,a[4]=t3,a[5]=((C_word)li243),tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1391: run-safe */
f_10893(t1,t5);}

/* a11096 in CHICKEN_apply in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in ... */
static void C_ccall f_11097(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_11097,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11105,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
C_apply(4,av2);}}

/* k11103 in a11096 in CHICKEN_apply in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in ... */
static void C_ccall f_11105(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11105,c,av);}
/* eval.scm:1391: store-result */
f_10952(((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* CHICKEN_apply_to_string in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in ... */
static void C_ccall f_11107(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_11107,c,av);}
a=C_alloc(7);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11113,a[2]=t5,a[3]=t4,a[4]=t2,a[5]=t3,a[6]=((C_word)li245),tmp=(C_word)a,a+=7,tmp);
/* eval.scm:1396: run-safe */
f_10893(t1,t6);}

/* a11112 in CHICKEN_apply_to_string in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in ... */
static void C_ccall f_11113(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_11113,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11117,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* eval.scm:1398: chicken.base#open-output-string */
t3=*((C_word*)lf[15]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k11115 in a11112 in CHICKEN_apply_to_string in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in ... */
static void C_ccall f_11117(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_11117,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11120,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11131,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[6];
C_apply(4,av2);}}

/* k11118 in k11115 in a11112 in CHICKEN_apply_to_string in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in ... */
static void C_ccall f_11120(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11120,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11127,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1400: chicken.base#get-output-string */
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
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k11125 in k11118 in k11115 in a11112 in CHICKEN_apply_to_string in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in ... */
static void C_ccall f_11127(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11127,c,av);}
/* eval.scm:1400: store-string */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(
/* eval.scm:1400: store-string */
  f_11015(t1,((C_word*)t0)[3],((C_word*)t0)[4])
);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k11129 in k11115 in a11112 in CHICKEN_apply_to_string in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in ... */
static void C_ccall f_11131(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11131,c,av);}
/* eval.scm:1399: scheme#write */
t2=*((C_word*)lf[14]+1);{
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

/* CHICKEN_read in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in ... */
static void C_ccall f_11133(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11133,c,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11137,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1402: ##sys#peek-c-string */
t5=*((C_word*)lf[236]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k11135 in CHICKEN_read in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in ... */
static void C_ccall f_11137(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11137,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11142,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word)li247),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1403: run-safe */
f_10893(((C_word*)t0)[3],t2);}

/* a11141 in k11135 in CHICKEN_read in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in ... */
static void C_ccall f_11142(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_11142,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11146,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1405: chicken.base#open-input-string */
t3=*((C_word*)lf[323]+1);{
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

/* k11144 in a11141 in k11135 in CHICKEN_read in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in ... */
static void C_ccall f_11146(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_11146,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11153,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1406: scheme#read */
t3=*((C_word*)lf[229]+1);{
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

/* k11151 in k11144 in a11141 in k11135 in CHICKEN_read in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in ... */
static void C_ccall f_11153(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11153,c,av);}
/* eval.scm:1406: store-result */
f_10952(((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* CHICKEN_load in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in ... */
static void C_ccall f_11155(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11155,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11159,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1408: ##sys#peek-c-string */
t4=*((C_word*)lf[236]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k11157 in CHICKEN_load in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in ... */
static void C_ccall f_11159(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_11159,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11164,a[2]=t1,a[3]=((C_word)li249),tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1409: run-safe */
f_10893(((C_word*)t0)[2],t2);}

/* a11163 in k11157 in CHICKEN_load in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in ... */
static void C_ccall f_11164(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11164,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11168,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1409: scheme#load */
t3=*((C_word*)lf[252]+1);{
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

/* k11166 in a11163 in k11157 in CHICKEN_load in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in ... */
static void C_ccall f_11168(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11168,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* CHICKEN_get_error_message in k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in ... */
static void C_ccall f_11170(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11170,c,av);}
t4=lf[312];
if(C_truep(lf[312])){
t5=lf[312];
t6=lf[312];
/* eval.scm:1412: store-string */
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=(
/* eval.scm:1412: store-string */
  f_11015(lf[312],t3,t2)
);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
/* eval.scm:1412: store-string */
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=(
/* eval.scm:1412: store-string */
  f_11015(lf[333],t3,t2)
);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k11180 in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in ... */
static void C_ccall f_11182(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(45,c,6)))){
C_save_and_reclaim((void *)f_11182,c,av);}
a=C_alloc(45);
t2=C_a_i_list1(&a,1,t1);
t3=C_mutate((C_word*)lf[281]+1 /* (set! ##sys#include-pathnames ...) */,t2);
t4=C_mutate((C_word*)lf[273]+1 /* (set! ##sys#resolve-include-filename ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10761,a[2]=((C_word)li222),tmp=(C_word)a,a+=3,tmp));
t5=lf[312] /* last-error */ =C_SCHEME_FALSE;;
t6=C_mutate(&lf[313] /* (set! run-safe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10893,a[2]=((C_word)li230),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate(&lf[317] /* (set! store-result ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10952,a[2]=((C_word)li231),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate(&lf[319] /* (set! CHICKEN_yield ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10961,a[2]=((C_word)li233),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate(&lf[321] /* (set! CHICKEN_eval ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10973,a[2]=((C_word)li235),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate(&lf[322] /* (set! CHICKEN_eval_string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10989,a[2]=((C_word)li237),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate(&lf[324] /* (set! store-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11015,a[2]=((C_word)li238),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate(&lf[326] /* (set! CHICKEN_eval_to_string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11028,a[2]=((C_word)li240),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate(&lf[327] /* (set! CHICKEN_eval_string_to_string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11054,a[2]=((C_word)li242),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate(&lf[328] /* (set! CHICKEN_apply ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11091,a[2]=((C_word)li244),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate(&lf[329] /* (set! CHICKEN_apply_to_string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11107,a[2]=((C_word)li246),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate(&lf[330] /* (set! CHICKEN_read ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11133,a[2]=((C_word)li248),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate(&lf[331] /* (set! CHICKEN_load ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11155,a[2]=((C_word)li250),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate(&lf[332] /* (set! CHICKEN_get_error_message ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11170,a[2]=((C_word)li251),tmp=(C_word)a,a+=3,tmp));
t19=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t19;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t19+1)))(2,av2);}}

/* k11187 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in ... */
static void C_ccall f_11189(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_11189,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11191,a[2]=((C_word)li252),tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1123: chicken.base#make-parameter */
t3=*((C_word*)lf[335]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* a11190 in k11187 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in ... */
static void C_ccall f_11191(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11191,c,av);}
t3=C_i_check_list(t2);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* map-loop2411 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in ... */
static void C_fcall f_11197(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_11197,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11222,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1124: g2417 */
t4=((C_word*)t0)[4];
f_10050(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k11220 in map-loop2411 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in ... */
static void C_ccall f_11222(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11222,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_11197(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k11234 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 in ... */
static void C_ccall f_11236(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11236,c,av);}
/* eval.scm:1116: scheme#string-append */
t2=*((C_word*)lf[201]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[190];
av2[3]=lf[336];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k11246 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_11248(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_11248,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
f_9379(t2,C_a_i_list(&a,1,t1));}

/* k11250 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_11252(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11252,c,av);}
/* eval.scm:951: scheme#string-append */
t2=*((C_word*)lf[201]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[340];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k11277 in k11281 in k11285 in k11289 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_11279(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11279,c,av);}
t2=C_eqp(t1,lf[347]);
t3=((C_word*)t0)[2];
f_9358(t3,(C_truep(t2)?lf[348]:lf[186]));}

/* k11281 in k11285 in k11289 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_11283(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11283,c,av);}
a=C_alloc(3);
t2=C_eqp(t1,lf[346]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11279,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:932: chicken.platform#machine-type */
t4=*((C_word*)lf[349]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=((C_word*)t0)[2];
f_9358(t3,lf[186]);}}

/* k11285 in k11289 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_11287(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11287,c,av);}
a=C_alloc(3);
t2=C_eqp(t1,lf[344]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
f_9358(t3,lf[345]);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11283,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:931: chicken.platform#software-version */
t4=*((C_word*)lf[341]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k11289 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_11291(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11291,c,av);}
a=C_alloc(3);
t2=C_eqp(t1,lf[342]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
f_9358(t3,lf[343]);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11287,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:930: chicken.platform#software-version */
t4=*((C_word*)lf[341]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_11295,c,av);}
a=C_alloc(21);
t2=C_i_setslot(((C_word*)t0)[2],C_fix(2),t1);
t3=C_mutate((C_word*)lf[174]+1 /* (set! scheme#scheme-report-environment ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8017,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word)li160),tmp=(C_word)a,a+=5,tmp));
t4=C_mutate((C_word*)lf[178]+1 /* (set! scheme#null-environment ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8042,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word)li161),tmp=(C_word)a,a+=5,tmp));
t5=C_a_i_provide(&a,1,lf[181]);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8068,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t6;
C_eval_toplevel(2,av2);}}

/* k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_11303(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_11303,c,av);}
a=C_alloc(7);
t2=C_i_setslot(((C_word*)t0)[2],C_fix(2),t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11295,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* eval.scm:858: strip */
f_7959(t3,C_slot(((C_word*)t0)[3],C_fix(2)));}

/* k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_11311(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_11311,c,av);}
a=C_alloc(8);
t2=C_i_setslot(((C_word*)t0)[2],C_fix(2),t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11303,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:857: strip */
f_7959(t3,C_slot(((C_word*)t0)[3],C_fix(2)));}

/* k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_11319(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_11319,c,av);}
a=C_alloc(8);
t2=C_i_setslot(((C_word*)t0)[2],C_fix(2),t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11311,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:856: strip */
f_7959(t3,C_slot(((C_word*)t0)[3],C_fix(2)));}

/* a11324 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_11325(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_11325,c,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11329,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:824: ##sys#print */
t5=*((C_word*)lf[360]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[361];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k11327 in a11324 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_11329(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_11329,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11332,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:825: ##sys#print */
t3=*((C_word*)lf[360]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_slot(((C_word*)t0)[4],C_fix(1));
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k11330 in k11327 in a11324 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_11332(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11332,c,av);}
/* eval.scm:826: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[359]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[359]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(62);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* a11340 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_11341(C_word c,C_word *av){
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
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,5)))){
C_save_and_reclaim((void *)f_11341,c,av);}
a=C_alloc(14);
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11347,a[2]=t5,a[3]=t3,a[4]=((C_word)li255),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11368,a[2]=t5,a[3]=t3,a[4]=((C_word)li259),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:778: scheme#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t6;
av2[3]=t7;
C_values(4,av2);}}

/* a11346 in a11340 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_11347(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_11347,c,av);}
a=C_alloc(12);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11351,a[2]=t1,a[3]=t4,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11366,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:781: ##sys#get */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t6;
av2[2]=t2;
av2[3]=t3;
tp(4,av2);}}
else{
t6=t5;
f_11351(t6,C_SCHEME_UNDEFINED);}}

/* k11349 in a11346 in a11340 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_fcall f_11351(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,4)))){
C_save_and_reclaim_args((void *)trf_11351,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11354,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:782: ##sys#put! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[363]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[363]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[3];
tp(5,av2);}}

/* k11352 in k11349 in a11346 in a11340 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_11354(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11354,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k11364 in a11346 in a11340 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_11366(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_11366,c,av);}
a=C_alloc(12);
t2=C_a_i_list3(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[4])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[4])+1,t3);
t5=((C_word*)t0)[5];
f_11351(t5,t4);}

/* a11367 in a11340 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_11368(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_11368,c,av);}
a=C_alloc(15);
t3=C_SCHEME_FALSE;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)((C_word*)t0)[2])[1];
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11374,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word)li256),tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11379,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=((C_word)li258),tmp=(C_word)a,a+=7,tmp);
/* eval.scm:787: scheme#dynamic-wind */
t8=*((C_word*)lf[150]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t8;
av2[1]=t1;
av2[2]=t6;
av2[3]=t2;
av2[4]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}

/* a11373 in a11367 in a11340 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_11374(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11374,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_set_block_item(((C_word*)t0)[4],0,C_SCHEME_TRUE);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a11378 in a11367 in a11340 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_11379(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_11379,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11383,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11386,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t4,a[5]=((C_word)li257),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_11386(t6,t2);}

/* k11381 in a11378 in a11367 in a11340 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_11383(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11383,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* doloop1494 in a11378 in a11367 in a11340 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_fcall f_11386(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_11386,2,t0,t1);}
a=C_alloc(5);
t2=C_eqp(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11396,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);{
C_word av2[4];
av2[0]=0;
av2[1]=t3;
av2[2]=*((C_word*)lf[363]+1);
av2[3]=C_i_car(((C_word*)((C_word*)t0)[3])[1]);
C_apply(4,av2);}}}

/* k11394 in doloop1494 in a11378 in a11367 in a11340 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_11396(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11396,c,av);}
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)((C_word*)t0)[3])[1];
f_11386(t4,((C_word*)t0)[4]);}

/* a11408 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_11409(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11409,c,av);}
t4=C_mutate((C_word*)lf[364]+1 /* (set! ##sys#put/restore! ...) */,t2);
t5=C_mutate((C_word*)lf[97]+1 /* (set! ##sys#with-property-restore ...) */,t3);
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* a11413 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_11414(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11414,c,av);}
a=C_alloc(5);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11421,a[2]=t4,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:741: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t5;
tp(2,av2);}}

/* k11419 in a11413 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_11421(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(35,c,4)))){
C_save_and_reclaim((void *)f_11421,c,av);}
a=C_alloc(35);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11424,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t1))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11514,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,lf[167],*((C_word*)lf[365]+1));
t5=C_a_i_cons(&a,2,lf[166],*((C_word*)lf[366]+1));
t6=C_a_i_list(&a,3,lf[31],t4,t5);
/* eval.scm:747: compile-to-closure */
f_3547(t3,t6,C_SCHEME_END_OF_LIST,C_a_i_list(&a,4,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_TRUE));}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_11424(2,av2);}}}

/* k11422 in k11419 in a11413 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_11424(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,4)))){
C_save_and_reclaim((void *)f_11424,c,av);}
a=C_alloc(29);
if(C_truep(((C_word*)t0)[2])){
t2=C_i_check_structure_2(((C_word*)t0)[2],lf[158],lf[0]);
t3=C_slot(((C_word*)t0)[2],C_fix(2));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11436,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t3)){
t5=*((C_word*)lf[89]+1);
t6=*((C_word*)lf[9]+1);
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=t3;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_TRUE;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11444,a[2]=t8,a[3]=t10,a[4]=t12,a[5]=t6,a[6]=t5,a[7]=((C_word)li262),tmp=(C_word)a,a+=8,tmp);
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11474,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word)li263),tmp=(C_word)a,a+=5,tmp);
t15=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11484,a[2]=t8,a[3]=t10,a[4]=t6,a[5]=t5,a[6]=((C_word)li264),tmp=(C_word)a,a+=7,tmp);
/* eval.scm:755: ##sys#dynamic-wind */
t16=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t16;
av2[1]=t4;
av2[2]=t13;
av2[3]=t14;
av2[4]=t15;
((C_proc)(void*)(*((C_word*)t16+1)))(5,av2);}}
else{
/* eval.scm:758: compile-to-closure */
f_3547(t4,((C_word*)t0)[4],C_SCHEME_END_OF_LIST,C_a_i_list(&a,4,C_SCHEME_FALSE,((C_word*)t0)[2],C_SCHEME_FALSE,C_SCHEME_TRUE));}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11505,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:761: compile-to-closure */
f_3547(t2,((C_word*)t0)[4],C_SCHEME_END_OF_LIST,C_a_i_list(&a,4,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_TRUE));}}

/* k11434 in k11422 in k11419 in a11413 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_11436(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11436,c,av);}
/* eval.scm:753: g1442 */
t2=t1;{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_END_OF_LIST;
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* a11443 in k11422 in k11419 in a11413 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_11444(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_11444,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11448,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
/* eval.scm:755: ##sys#macro-environment1445 */
t3=((C_word*)t0)[6];{
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
f_11448(2,av2);}}}

/* k11446 in a11443 in k11422 in k11419 in a11413 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_11448(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_11448,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11451,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
/* eval.scm:755: ##sys#current-environment1446 */
t3=((C_word*)t0)[6];{
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
f_11451(2,av2);}}}

/* k11449 in k11446 in a11443 in k11422 in k11419 in a11413 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_11451(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_11451,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11455,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* eval.scm:755: ##sys#macro-environment1445 */
t3=((C_word*)t0)[7];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k11453 in k11449 in k11446 in a11443 in k11422 in k11419 in a11413 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_11455(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_11455,c,av);}
a=C_alloc(9);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11459,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
/* eval.scm:755: ##sys#current-environment1446 */
t4=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k11457 in k11453 in k11449 in k11446 in a11443 in k11422 in k11419 in a11413 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_11459(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_11459,c,av);}
a=C_alloc(6);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11462,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:755: ##sys#macro-environment1445 */
t4=((C_word*)t0)[7];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[8];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}

/* k11460 in k11457 in k11453 in k11449 in k11446 in a11443 in k11422 in k11419 in a11413 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_11462(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_11462,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11465,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:755: ##sys#current-environment1446 */
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

/* k11463 in k11460 in k11457 in k11453 in k11449 in k11446 in a11443 in k11422 in k11419 in a11413 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_11465(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11465,c,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a11473 in k11422 in k11419 in a11413 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_11474(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_11474,c,av);}
a=C_alloc(12);
t2=C_slot(((C_word*)t0)[2],C_fix(3));
/* eval.scm:757: compile-to-closure */
f_3547(t1,((C_word*)t0)[3],C_SCHEME_END_OF_LIST,C_a_i_list(&a,4,C_SCHEME_FALSE,((C_word*)t0)[2],t2,C_SCHEME_TRUE));}

/* a11483 in k11422 in k11419 in a11413 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_11484(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_11484,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11488,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* eval.scm:755: ##sys#macro-environment1445 */
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k11486 in a11483 in k11422 in k11419 in a11413 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_11488(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_11488,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11491,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:755: ##sys#current-environment1446 */
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k11489 in k11486 in a11483 in k11422 in k11419 in a11413 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_11491(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_11491,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11494,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:755: ##sys#macro-environment1445 */
t3=((C_word*)t0)[7];{
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

/* k11492 in k11489 in k11486 in a11483 in k11422 in k11419 in a11413 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_11494(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_11494,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11497,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* eval.scm:755: ##sys#current-environment1446 */
t3=((C_word*)t0)[7];{
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

/* k11495 in k11492 in k11489 in k11486 in a11483 in k11422 in k11419 in a11413 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_11497(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11497,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,((C_word*)t0)[5]);
t4=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11503 in k11422 in k11419 in a11413 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_11505(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11505,c,av);}
/* eval.scm:751: g1474 */
t2=t1;{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_END_OF_LIST;
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* k11512 in k11419 in a11413 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_11514(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11514,c,av);}
/* eval.scm:746: g1436 */
t2=t1;{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_END_OF_LIST;
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* k3490 */
static void C_ccall f_3492(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3492,c,av);}
a=C_alloc(19);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3495,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t4;
C_library_toplevel(2,av2);}}

/* k3493 in k3490 */
static void C_ccall f_3495(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3495,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3498,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_internal_toplevel(2,av2);}}

/* k3496 in k3493 in k3490 */
static void C_ccall f_3498(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3498,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3501,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_expand_toplevel(2,av2);}}

/* k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_3501(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3501,c,av);}
a=C_alloc(3);
t2=C_set_block_item(lf[2] /* ##sys#unbound-in-eval */,0,C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3545,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:79: chicken.base#make-parameter */
t4=*((C_word*)lf[335]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* a3508 in decorate in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_3509(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3509,c,av);}
t3=C_immp(t2);
t4=C_i_not(t3);
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=(C_truep(t4)?C_lambdainfop(t2):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* a3521 in decorate in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_3522(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_3522,c,av);}
a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3530,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3534,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:73: chicken.base#open-output-string */
t6=*((C_word*)lf[15]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k3528 in a3521 in decorate in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_3530(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3530,c,av);}
t2=C_i_setslot(((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3532 in a3521 in decorate in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_3534(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3534,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3537,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:74: scheme#write */
t3=*((C_word*)lf[14]+1);{
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

/* k3535 in k3532 in a3521 in decorate in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_3537(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3537,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3540,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:75: chicken.base#get-output-string */
t3=*((C_word*)lf[13]+1);{
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

/* k3538 in k3535 in k3532 in a3521 in decorate in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_3540(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3540,c,av);}
/* eval.scm:72: ##sys#make-lambda-info */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[12]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[12]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_3545(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,5)))){
C_save_and_reclaim((void *)f_3545,c,av);}
a=C_alloc(12);
t2=C_mutate((C_word*)lf[3]+1 /* (set! ##sys#eval-debug-level ...) */,t1);
t3=C_mutate(&lf[4] /* (set! chicken.eval#compile-to-closure ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3547,a[2]=((C_word)li145),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[70]+1 /* (set! ##sys#eval/meta ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7722,a[2]=((C_word)li151),tmp=(C_word)a,a+=3,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7835,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11414,a[2]=((C_word)li265),tmp=(C_word)a,a+=3,tmp);
/* eval.scm:739: chicken.base#make-parameter */
t7=*((C_word*)lf[335]+1);{
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

/* chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_fcall f_3547(C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(55,0,8)))){
C_save_and_reclaim_args((void *)trf_3547,4,t1,t2,t3,t4);}
a=C_alloc(55);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_SCHEME_FALSE:C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=C_i_nullp(t12);
t14=(C_truep(t13)?C_SCHEME_FALSE:C_i_car(t12));
t15=C_i_nullp(t12);
t16=(C_truep(t15)?C_SCHEME_END_OF_LIST:C_i_cdr(t12));
t17=C_i_nullp(t16);
t18=(C_truep(t17)?C_SCHEME_FALSE:C_i_car(t16));
t19=C_i_nullp(t16);
t20=(C_truep(t19)?C_SCHEME_END_OF_LIST:C_i_cdr(t16));
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
t35=C_set_block_item(t22,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3574,a[2]=t22,a[3]=((C_word)li0),tmp=(C_word)a,a+=4,tmp));
t36=C_set_block_item(t24,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3609,a[2]=t22,a[3]=((C_word)li3),tmp=(C_word)a,a+=4,tmp));
t37=C_set_block_item(t26,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3643,a[2]=t24,a[3]=((C_word)li7),tmp=(C_word)a,a+=4,tmp));
t38=C_set_block_item(t28,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3732,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t39=C_set_block_item(t30,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3756,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t40=C_set_block_item(t32,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3762,a[2]=t26,a[3]=t14,a[4]=t32,a[5]=t10,a[6]=t30,a[7]=t24,a[8]=t34,a[9]=((C_word)li131),tmp=(C_word)a,a+=10,tmp));
t41=C_set_block_item(t34,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7329,a[2]=t28,a[3]=t32,a[4]=((C_word)li144),tmp=(C_word)a,a+=5,tmp));
t42=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7672,a[2]=t32,a[3]=t1,a[4]=t2,a[5]=t3,a[6]=t6,a[7]=t18,tmp=(C_word)a,a+=8,tmp);
/* eval.scm:712: ##sys#eval-debug-level */
t43=*((C_word*)lf[3]+1);{
C_word av2[2];
av2[0]=t43;
av2[1]=t42;
((C_proc)(void*)(*((C_word*)t43+1)))(2,av2);}}

/* find-id in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_fcall f_3574(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3574,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t3))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3587,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=C_i_caar(t3);
t6=C_eqp(t2,t5);
if(C_truep(t6)){
t7=C_u_i_car(t3);
t8=t4;
f_3587(t8,C_i_symbolp(C_u_i_cdr(t7)));}
else{
t7=t4;
f_3587(t7,C_SCHEME_FALSE);}}}

/* k3585 in find-id in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_fcall f_3587(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_3587,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_u_i_cdr(C_u_i_car(((C_word*)t0)[3]));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* eval.scm:91: find-id */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3574(t2,((C_word*)t0)[2],((C_word*)t0)[5],C_u_i_cdr(((C_word*)t0)[3]));}}

/* rename in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_fcall f_3609(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_3609,3,t0,t1,t2);}
a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3613,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3641,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:94: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word av2[2];
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t4;
tp(2,av2);}}

/* k3611 in rename in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_3613(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_3613,c,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3621,a[2]=((C_word*)t0)[3],a[3]=((C_word)li1),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3627,a[2]=((C_word*)t0)[3],a[3]=((C_word)li2),tmp=(C_word)a,a+=4,tmp);
/* eval.scm:94: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}}

/* a3620 in k3611 in rename in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_3621(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3621,c,av);}
/* eval.scm:95: ##sys#get */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[6];
tp(4,av2);}}

/* a3626 in k3611 in rename in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_3627(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +5,c,3)))){
C_save_and_reclaim((void*)f_3627,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+5);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3634,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t3;
av2[2]=*((C_word*)lf[8]+1);
av2[3]=t2;
C_apply(4,av2);}}

/* k3632 in a3626 in k3611 in rename in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_3634(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3634,c,av);}
if(C_truep(t1)){{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[7]+1);
av2[3]=((C_word*)t0)[3];
C_apply(4,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k3639 in rename in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_3641(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3641,c,av);}
/* eval.scm:94: find-id */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3574(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* lookup in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_fcall f_3643(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3643,4,t0,t1,t2,t3);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3647,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:99: rename */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3609(t5,t4,t2);}

/* k3645 in lookup in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_3647(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3647,c,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3655,a[2]=t1,a[3]=t3,a[4]=((C_word)li6),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_3655(t5,((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0));}

/* loop in k3645 in lookup in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_fcall f_3655(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_3655,4,t0,t1,t2,t3);}
a=C_alloc(8);
if(C_truep(C_i_nullp(t2))){
/* eval.scm:102: scheme#values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=C_SCHEME_FALSE;
av2[3]=((C_word*)t0)[2];
C_values(4,av2);}}
else{
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3702,a[2]=((C_word*)t0)[2],a[3]=((C_word)li4),tmp=(C_word)a,a+=4,tmp);
t6=(
  f_3702(t5,t4,C_fix(0))
);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3672,a[2]=t3,a[3]=((C_word)li5),tmp=(C_word)a,a+=4,tmp);
/* eval.scm:102: g244 */
t8=t7;
f_3672(t8,t1,t6);}
else{
/* eval.scm:104: loop */
t9=t1;
t10=C_slot(t2,C_fix(1));
t11=C_fixnum_plus(t3,C_fix(1));
t1=t9;
t2=t10;
t3=t11;
goto loop;}}}

/* g244 in loop in k3645 in lookup in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_fcall f_3672(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_3672,3,t0,t1,t2);}
/* eval.scm:103: scheme#values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
C_values(4,av2);}}

/* loop in loop in k3645 in lookup in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static C_word C_fcall f_3702(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_nullp(t1))){
return(C_SCHEME_FALSE);}
else{
t3=C_slot(t1,C_fix(0));
t4=C_eqp(((C_word*)t0)[2],t3);
if(C_truep(t4)){
return(t2);}
else{
t6=C_slot(t1,C_fix(1));
t7=C_fixnum_plus(t2,C_fix(1));
t1=t6;
t2=t7;
goto loop;}}}

/* emit-trace-info in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static C_word C_fcall f_3732(C_word *a,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_stack_overflow_check;{}
if(C_truep(t1)){
t6=C_a_i_record4(&a,4,lf[10],t3,t4,t5);
return(C_emit_eval_trace_info(t2,t6,C_slot(*((C_word*)lf[11]+1),C_fix(14))));}
else{
t6=C_SCHEME_UNDEFINED;
return(t6);}}

/* decorate in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_fcall f_3756(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,4)))){
C_save_and_reclaim_args((void *)trf_3756,3,t1,t2,t3);}
a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3509,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3522,a[2]=t3,a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp);
/* eval.scm:66: ##sys#decorate-lambda */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[16]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=t4;
av2[4]=t5;
tp(5,av2);}}

/* compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_fcall f_3762(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(16,0,2)))){
C_save_and_reclaim_args((void *)trf_3762,8,t0,t1,t2,t3,t4,t5,t6,t7);}
a=C_alloc(16);
t8=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_3769,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t3,a[6]=t6,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=t4,a[10]=t5,a[11]=t7,a[12]=((C_word*)t0)[5],a[13]=((C_word*)t0)[6],a[14]=((C_word*)t0)[7],a[15]=((C_word*)t0)[8],tmp=(C_word)a,a+=16,tmp);
/* eval.scm:132: chicken.keyword#keyword? */
t9=*((C_word*)lf[146]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_3769(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,4)))){
C_save_and_reclaim((void *)f_3769,c,av);}
a=C_alloc(16);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3770,a[2]=((C_word*)t0)[2],a[3]=((C_word)li12),tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3782,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word)li13),tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3788,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word)li22),tmp=(C_word)a,a+=6,tmp);
/* eval.scm:134: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_3979,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[4],a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],tmp=(C_word)a,a+=16,tmp);
/* eval.scm:172: ##sys#number? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[145]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[145]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}}}

/* f_3770 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_3770(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3770,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a3781 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_3782(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3782,c,av);}
/* eval.scm:134: lookup */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3643(t2,t1,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* a3787 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_3788(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_3788,c,av);}
a=C_alloc(12);
if(C_truep(C_i_not(t2))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3798,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=C_i_symbolp(t3);
if(C_truep(C_i_not(t5))){
t6=t4;{
C_word *av2=av;
av2[0]=t6;
av2[1]=((C_word*)t0)[2];
f_3798(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3871,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* eval.scm:137: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t6;
tp(2,av2);}}}
else{
switch(t2){
case C_fix(0):
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3882,a[2]=t3,a[3]=((C_word)li17),tmp=(C_word)a,a+=4,tmp);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}
case C_fix(1):
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3897,a[2]=t3,a[3]=((C_word)li18),tmp=(C_word)a,a+=4,tmp);
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}
case C_fix(2):
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3916,a[2]=t3,a[3]=((C_word)li19),tmp=(C_word)a,a+=4,tmp);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}
case C_fix(3):
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3939,a[2]=t3,a[3]=((C_word)li20),tmp=(C_word)a,a+=4,tmp);
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}
default:
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3960,a[2]=t2,a[3]=t3,a[4]=((C_word)li21),tmp=(C_word)a,a+=5,tmp);
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}}

/* k3796 in a3787 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_3798(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_3798,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3801,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3828,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(*((C_word*)lf[2]+1))){
t4=C_i_not(t1);
if(C_truep(t4)){
t5=t3;
f_3828(t5,t4);}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3849,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:143: ##sys#symbol-has-toplevel-binding? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[19]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[19]+1);
av2[1]=t5;
av2[2]=t1;
tp(3,av2);}}}
else{
t4=t3;
f_3828(t4,C_SCHEME_FALSE);}}

/* k3799 in k3796 in a3787 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_fcall f_3801(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_3801,2,t0,t1);}
a=C_alloc(4);
if(C_truep(C_i_not(((C_word*)t0)[2]))){
t2=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3808,a[2]=((C_word*)t0)[4],a[3]=((C_word)li14),tmp=(C_word)a,a+=4,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3818,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:149: ##sys#symbol-has-toplevel-binding? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[19]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[19]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}}

/* f_3808 in k3799 in k3796 in a3787 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_3808(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3808,c,av);}
/* eval.scm:148: ##sys#error */
t3=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=lf[18];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3816 in k3799 in k3796 in a3787 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_3818(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3818,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3819,a[2]=((C_word*)t0)[2],a[3]=((C_word)li15),tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3824,a[2]=((C_word*)t0)[2],a[3]=((C_word)li16),tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* f_3819 in k3816 in k3799 in k3796 in a3787 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_3819(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3819,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_slot(((C_word*)t0)[2],C_fix(0));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_3824 in k3816 in k3799 in k3796 in a3787 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_3824(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3824,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fast_retrieve(((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3826 in k3796 in a3787 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_fcall f_3828(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,1)))){
C_save_and_reclaim_args((void *)trf_3828,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,t2,*((C_word*)lf[2]+1));
t4=C_mutate((C_word*)lf[2]+1 /* (set! ##sys#unbound-in-eval ...) */,t3);
t5=((C_word*)t0)[4];
f_3801(t5,t4);}
else{
t2=((C_word*)t0)[4];
f_3801(t2,C_SCHEME_UNDEFINED);}}

/* k3847 in k3796 in a3787 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_3849(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3849,c,av);}
t2=((C_word*)t0)[2];
f_3828(t2,C_i_not(t1));}

/* k3869 in a3787 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_3871(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3871,c,av);}
if(C_truep(C_i_assq(((C_word*)t0)[2],t1))){
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
f_3798(2,av2);}}
else{
if(C_truep(C_i_not(((C_word*)t0)[5]))){
/* eval.scm:139: ##sys#alias-global-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[20]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[20]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[6];
tp(5,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_3798(2,av2);}}}}

/* f_3882 in a3787 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_3882(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3882,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_slot(C_slot(t2,C_fix(0)),((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_3897 in a3787 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_3897(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3897,c,av);}
t3=C_slot(t2,C_fix(1));
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_slot(C_slot(t3,C_fix(0)),((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* f_3916 in a3787 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_3916(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3916,c,av);}
t3=C_slot(t2,C_fix(1));
t4=C_slot(t3,C_fix(1));
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_slot(C_slot(t4,C_fix(0)),((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* f_3939 in a3787 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_3939(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3939,c,av);}
t3=C_slot(t2,C_fix(1));
t4=C_slot(t3,C_fix(1));
t5=C_slot(t4,C_fix(1));
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_slot(C_slot(t5,C_fix(0)),((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* f_3960 in a3787 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_3960(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3960,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_slot(C_u_i_list_ref(t2,((C_word*)t0)[2]),((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_3979(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,2)))){
C_save_and_reclaim((void *)f_3979,c,av);}
a=C_alloc(20);
if(C_truep(t1)){
switch(((C_word*)t0)[2]){
case C_fix(-1):
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3986,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}
case C_fix(0):
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3994,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}
case C_fix(1):
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4002,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}
case C_fix(2):
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4010,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}
default:
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4012,a[2]=((C_word*)t0)[2],a[3]=((C_word)li27),tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}
else{
if(C_truep(C_booleanp(((C_word*)t0)[2]))){
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4031,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4033,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}
else{
t2=C_charp(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_4043,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],tmp=(C_word)a,a+=16,tmp);
if(C_truep(t2)){
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
f_4043(2,av2);}}
else{
t4=C_eofp(((C_word*)t0)[2]);
if(C_truep(t4)){
t5=t3;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
f_4043(2,av2);}}
else{
t5=C_i_stringp(((C_word*)t0)[2]);
if(C_truep(t5)){
t6=t3;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
f_4043(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7228,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:186: chicken.blob#blob? */
t7=*((C_word*)lf[144]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}}}}}

/* f_3986 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_3986(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3986,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(-1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_3994 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_3994(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3994,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4002 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4002(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4002,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4010 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4010(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4010,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(2);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4012 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4012(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4012,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4031 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4031(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4031,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4033 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4033(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4033,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4043(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_4043,c,av);}
a=C_alloc(16);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4044,a[2]=((C_word*)t0)[2],a[3]=((C_word)li30),tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_i_pairp(((C_word*)t0)[2]);
if(C_truep(C_i_not(t2))){
/* eval.scm:191: ##sys#syntax-error/context */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[21]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[21]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[22];
av2[3]=((C_word*)t0)[2];
tp(4,av2);}}
else{
t3=C_slot(((C_word*)t0)[2],C_fix(0));
if(C_truep(C_i_symbolp(t3))){
t4=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_4063,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],tmp=(C_word)a,a+=16,tmp);
if(C_truep(((C_word*)t0)[7])){
t5=t4;
f_4063(t5,C_emit_syntax_trace_info(((C_word*)t0)[2],((C_word*)t0)[8],C_slot(*((C_word*)lf[11]+1),C_fix(14))));}
else{
t5=C_SCHEME_UNDEFINED;
t6=t4;
f_4063(t6,t5);}}
else{
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7198,a[2]=((C_word*)t0)[15],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[7])){
t5=t4;
f_7198(t5,C_emit_syntax_trace_info(((C_word*)t0)[2],((C_word*)t0)[8],C_slot(*((C_word*)lf[11]+1),C_fix(14))));}
else{
t5=C_SCHEME_UNDEFINED;
t6=t4;
f_7198(t6,t5);}}}}}

/* f_4044 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4044(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4044,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_fcall f_4063(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(20,0,2)))){
C_save_and_reclaim_args((void *)trf_4063,2,t0,t1);}
a=C_alloc(20);
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_4066,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],tmp=(C_word)a,a+=16,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7195,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:194: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word av2[2];
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t3;
tp(2,av2);}}

/* k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4066(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,7)))){
C_save_and_reclaim((void *)f_4066,c,av);}
a=C_alloc(16);
t2=C_eqp(t1,((C_word*)t0)[2]);
if(C_truep(C_i_not(t2))){
/* eval.scm:197: compile */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3762(t3,((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9]);}
else{
t3=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_4081,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],tmp=(C_word)a,a+=16,tmp);
/* eval.scm:198: rename */
t4=((C_word*)((C_word*)t0)[14])[1];
f_3609(t4,t3,C_slot(((C_word*)t0)[2],C_fix(0)));}}

/* k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4081(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(25,c,7)))){
C_save_and_reclaim((void *)f_4081,c,av);}
a=C_alloc(25);
t2=C_eqp(t1,lf[23]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4090,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:204: chicken.syntax#strip-syntax */
t4=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_cadr(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=C_eqp(t1,lf[25]);
if(C_truep(t3)){
t4=C_i_cadr(((C_word*)t0)[3]);
t5=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4176,a[2]=t4,a[3]=((C_word)li39),tmp=(C_word)a,a+=4,tmp);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_eqp(t1,lf[26]);
if(C_truep(t4)){
/* eval.scm:220: compile */
t5=((C_word*)((C_word*)t0)[4])[1];
f_3762(t5,((C_word*)t0)[2],C_i_cadr(((C_word*)t0)[3]),((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],C_SCHEME_FALSE);}
else{
t5=C_eqp(t1,lf[27]);
if(C_truep(t5)){
/* eval.scm:223: compile */
t6=((C_word*)((C_word*)t0)[4])[1];
f_3762(t6,((C_word*)t0)[2],C_i_cadr(((C_word*)t0)[3]),((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[7],((C_word*)t0)[8],C_SCHEME_FALSE);}
else{
t6=C_eqp(t1,lf[28]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4210,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp);
t8=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t7=C_eqp(t1,lf[29]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4220,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:228: compile */
t9=((C_word*)((C_word*)t0)[4])[1];
f_3762(t9,t8,C_i_cadr(((C_word*)t0)[3]),((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[7],((C_word*)t0)[8],C_SCHEME_FALSE);}
else{
t8=C_eqp(t1,lf[31]);
if(C_truep(t8)){
t9=C_slot(((C_word*)t0)[3],C_fix(1));
t10=C_i_length(t9);
switch(t10){
case C_fix(0):
/* eval.scm:239: compile */
t11=((C_word*)((C_word*)t0)[4])[1];
f_3762(t11,((C_word*)t0)[2],lf[32],((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9]);
case C_fix(1):
/* eval.scm:240: compile */
t11=((C_word*)((C_word*)t0)[4])[1];
f_3762(t11,((C_word*)t0)[2],C_slot(t9,C_fix(0)),((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9]);
case C_fix(2):
t11=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4308,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t9,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
/* eval.scm:241: compile */
t12=((C_word*)((C_word*)t0)[4])[1];
f_3762(t12,t11,C_slot(t9,C_fix(0)),((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9]);
default:
t11=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4330,a[2]=((C_word*)t0)[2],a[3]=t9,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
/* eval.scm:245: compile */
t12=((C_word*)((C_word*)t0)[4])[1];
f_3762(t12,t11,C_slot(t9,C_fix(0)),((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9]);}}
else{
t9=C_eqp(t1,lf[33]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4382,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[9])){
/* eval.scm:253: compile */
t11=((C_word*)((C_word*)t0)[4])[1];
f_3762(t11,((C_word*)t0)[2],lf[34],((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[7],((C_word*)t0)[8],C_SCHEME_FALSE);}
else{
/* eval.scm:252: ##sys#error */
t11=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t11;
av2[1]=t10;
av2[2]=lf[35];
av2[3]=C_i_cadr(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t11+1)))(4,av2);}}}
else{
t10=C_eqp(t1,lf[36]);
if(C_truep(t10)){
t11=C_i_cadr(((C_word*)t0)[3]);
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4406,a[2]=((C_word*)t0)[10],a[3]=t11,a[4]=((C_word*)t0)[5],a[5]=((C_word)li44),tmp=(C_word)a,a+=6,tmp);
t13=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4412,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[12],a[4]=t11,a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[7],a[10]=((C_word)li49),tmp=(C_word)a,a+=11,tmp);
/* eval.scm:258: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=t12;
av2[3]=t13;
C_call_with_values(4,av2);}}
else{
t11=C_eqp(t1,lf[41]);
if(C_truep(t11)){
t12=C_i_cadr(((C_word*)t0)[3]);
t13=C_i_length(t12);
t14=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t15=t14;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=((C_word*)t16)[1];
t18=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4521,a[2]=((C_word*)t0)[5],a[3]=t13,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t12,a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[3],tmp=(C_word)a,a+=12,tmp);
t19=C_SCHEME_UNDEFINED;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_set_block_item(t20,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4960,a[2]=t16,a[3]=t20,a[4]=t17,a[5]=((C_word)li62),tmp=(C_word)a,a+=6,tmp));
t22=((C_word*)t20)[1];
f_4960(t22,t18,t12);}
else{
t12=C_eqp(t1,lf[50]);
if(C_truep(t12)){
t13=C_i_cadr(((C_word*)t0)[3]);
t14=C_u_i_cdr(((C_word*)t0)[3]);
t15=C_u_i_cdr(t14);
t16=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t17=t16;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=((C_word*)t18)[1];
t20=C_i_check_list_2(t13,lf[42]);
t21=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5033,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t15,a[9]=t13,tmp=(C_word)a,a+=10,tmp);
t22=C_SCHEME_UNDEFINED;
t23=(*a=C_VECTOR_TYPE|1,a[1]=t22,tmp=(C_word)a,a+=2,tmp);
t24=C_set_block_item(t23,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5105,a[2]=t18,a[3]=t23,a[4]=t19,a[5]=((C_word)li64),tmp=(C_word)a,a+=6,tmp));
t25=((C_word*)t23)[1];
f_5105(t25,t21,t13);}
else{
t13=C_eqp(t1,lf[53]);
if(C_truep(t13)){
t14=C_i_cadr(((C_word*)t0)[3]);
t15=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t16=t15;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=((C_word*)t17)[1];
t19=C_i_check_list_2(t14,lf[42]);
t20=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5155,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t14,tmp=(C_word)a,a+=10,tmp);
t21=C_SCHEME_UNDEFINED;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=C_set_block_item(t22,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5411,a[2]=t17,a[3]=t22,a[4]=t18,a[5]=((C_word)li69),tmp=(C_word)a,a+=6,tmp));
t24=((C_word*)t22)[1];
f_5411(t24,t20,t14);}
else{
t14=C_eqp(t1,lf[55]);
if(C_truep(t14)){
t15=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5452,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[13],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[2],tmp=(C_word)a,a+=10,tmp);
t16=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5895,a[2]=t15,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:361: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t16;
tp(2,av2);}}
else{
t15=C_eqp(t1,lf[67]);
if(C_truep(t15)){
t16=*((C_word*)lf[9]+1);
t17=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5904,a[2]=t16,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
t18=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t19=t18;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=((C_word*)t20)[1];
t22=C_i_cadr(((C_word*)t0)[3]);
t23=C_i_check_list_2(t22,lf[42]);
t24=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5996,a[2]=t17,tmp=(C_word)a,a+=3,tmp);
t25=C_SCHEME_UNDEFINED;
t26=(*a=C_VECTOR_TYPE|1,a[1]=t25,tmp=(C_word)a,a+=2,tmp);
t27=C_set_block_item(t26,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6002,a[2]=t20,a[3]=t26,a[4]=t21,a[5]=((C_word)li105),tmp=(C_word)a,a+=6,tmp));
t28=((C_word*)t26)[1];
f_6002(t28,t24,t22);}
else{
t16=C_eqp(t1,lf[71]);
if(C_truep(t16)){
t17=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t18=t17;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=((C_word*)t19)[1];
t21=C_i_cadr(((C_word*)t0)[3]);
t22=C_i_check_list_2(t21,lf[42]);
t23=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6079,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
t24=C_SCHEME_UNDEFINED;
t25=(*a=C_VECTOR_TYPE|1,a[1]=t24,tmp=(C_word)a,a+=2,tmp);
t26=C_set_block_item(t25,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6174,a[2]=t19,a[3]=t25,a[4]=t20,a[5]=((C_word)li111),tmp=(C_word)a,a+=6,tmp));
t27=((C_word*)t25)[1];
f_6174(t27,t23,t21);}
else{
t17=C_eqp(t1,lf[73]);
if(C_truep(t17)){
t18=C_i_cadr(((C_word*)t0)[3]);
t19=C_i_caddr(((C_word*)t0)[3]);
t20=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6221,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=t19,a[8]=((C_word*)t0)[11],a[9]=t18,a[10]=((C_word*)t0)[12],tmp=(C_word)a,a+=11,tmp);
/* eval.scm:493: rename */
t21=((C_word*)((C_word*)t0)[14])[1];
f_3609(t21,t20,t18);}
else{
t18=C_eqp(t1,lf[79]);
if(C_truep(t18)){
/* eval.scm:506: compile */
t19=((C_word*)((C_word*)t0)[4])[1];
f_3762(t19,((C_word*)t0)[2],lf[80],((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[7],((C_word*)t0)[8],C_SCHEME_FALSE);}
else{
t19=C_eqp(t1,lf[81]);
if(C_truep(t19)){
t20=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6284,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t21=C_i_cddr(((C_word*)t0)[3]);
t22=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6292,a[2]=t20,a[3]=t21,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:510: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t22;
tp(2,av2);}}
else{
t20=C_eqp(t1,lf[82]);
if(C_truep(t20)){
t21=C_i_cadr(((C_word*)t0)[3]);
t22=C_i_caddr(((C_word*)t0)[3]);
t23=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6311,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[3],a[8]=((C_word)li112),tmp=(C_word)a,a+=9,tmp);
/* eval.scm:514: ##sys#include-forms-from-file */
t24=*((C_word*)lf[83]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t24;
av2[1]=((C_word*)t0)[2];
av2[2]=t21;
av2[3]=t22;
av2[4]=t23;
((C_proc)(void*)(*((C_word*)t24+1)))(5,av2);}}
else{
t21=C_eqp(t1,lf[84]);
if(C_truep(t21)){
t22=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t23=t22;
t24=(*a=C_VECTOR_TYPE|1,a[1]=t23,tmp=(C_word)a,a+=2,tmp);
t25=((C_word*)t24)[1];
t26=C_i_cadr(((C_word*)t0)[3]);
t27=C_i_check_list_2(t26,lf[42]);
t28=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6374,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
t29=C_SCHEME_UNDEFINED;
t30=(*a=C_VECTOR_TYPE|1,a[1]=t29,tmp=(C_word)a,a+=2,tmp);
t31=C_set_block_item(t30,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6390,a[2]=t24,a[3]=t30,a[4]=t25,a[5]=((C_word)li114),tmp=(C_word)a,a+=6,tmp));
t32=((C_word*)t30)[1];
f_6390(t32,t28,t26);}
else{
t22=C_eqp(t1,lf[88]);
if(C_truep(t22)){
t23=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6431,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:536: chicken.syntax#strip-syntax */
t24=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t24;
av2[1]=t23;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t24+1)))(3,av2);}}
else{
t23=C_eqp(t1,lf[102]);
if(C_truep(t23)){
t24=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6755,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:588: rename */
t25=((C_word*)((C_word*)t0)[14])[1];
f_3609(t25,t24,lf[65]);}
else{
t24=C_eqp(t1,lf[103]);
if(C_truep(t24)){
t25=C_i_cadr(((C_word*)t0)[3]);
t26=C_a_i_list(&a,2,lf[23],t25);
t27=C_a_i_list(&a,2,lf[93],t26);
/* eval.scm:591: compile */
t28=((C_word*)((C_word*)t0)[4])[1];
f_3762(t28,((C_word*)t0)[2],t27,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[7],((C_word*)t0)[8],C_SCHEME_FALSE);}
else{
t25=C_eqp(t1,lf[104]);
if(C_truep(t25)){
t26=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6789,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* eval.scm:594: chicken.load#load-extension */
t27=*((C_word*)lf[106]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t27;
av2[1]=t26;
av2[2]=C_i_cadr(((C_word*)t0)[3]);
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t27+1)))(5,av2);}}
else{
t26=C_eqp(t1,lf[107]);
if(C_truep(t26)){
t27=C_i_cadr(((C_word*)t0)[3]);
t28=C_u_i_cdr(((C_word*)t0)[3]);
t29=C_i_pairp(C_u_i_cdr(t28));
t30=(C_truep(t29)?C_i_caddr(((C_word*)t0)[3]):C_SCHEME_FALSE);
t31=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6813,a[2]=t27,a[3]=t30,a[4]=((C_word)li125),tmp=(C_word)a,a+=5,tmp);
t32=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6819,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word)li126),tmp=(C_word)a,a+=7,tmp);
/* eval.scm:600: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=t31;
av2[3]=t32;
C_call_with_values(4,av2);}}
else{
t27=C_eqp(t1,lf[109]);
t28=(C_truep(t27)?t27:C_eqp(t1,lf[110]));
if(C_truep(t28)){
t29=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6844,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:604: ##sys#eval/meta */
t30=*((C_word*)lf[70]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t30;
av2[1]=t29;
av2[2]=C_i_cadr(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t30+1)))(3,av2);}}
else{
t29=C_eqp(t1,lf[112]);
if(C_truep(t29)){
/* eval.scm:608: compile */
t30=((C_word*)((C_word*)t0)[4])[1];
f_3762(t30,((C_word*)t0)[2],C_i_cadr(((C_word*)t0)[3]),((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9]);}
else{
t30=C_eqp(t1,lf[113]);
t31=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6873,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=t1,a[9]=((C_word*)t0)[3],a[10]=((C_word*)t0)[14],a[11]=((C_word*)t0)[15],a[12]=((C_word*)t0)[6],tmp=(C_word)a,a+=13,tmp);
if(C_truep(t30)){
t32=t31;
f_6873(t32,t30);}
else{
t32=C_eqp(t1,lf[140]);
t33=t31;
f_6873(t33,(C_truep(t32)?t32:C_eqp(t1,lf[141])));}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

/* k4088 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4090(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4090,c,av);}
a=C_alloc(4);
switch(t1){
case C_fix(-1):
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4097,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}
case C_fix(0):
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4105,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}
case C_fix(1):
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4113,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}
case C_fix(2):
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4121,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}
case C_SCHEME_TRUE:
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4129,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}
case C_SCHEME_FALSE:
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4137,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}
default:
t2=C_eqp(t1,C_SCHEME_END_OF_LIST);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(t2)?(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4145,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp):(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4147,a[2]=t1,a[3]=((C_word)li38),tmp=(C_word)a,a+=4,tmp));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* f_4097 in k4088 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4097(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4097,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(-1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4105 in k4088 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4105(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4105,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4113 in k4088 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4113(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4113,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4121 in k4088 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4121(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4121,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(2);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4129 in k4088 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4129(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4129,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4137 in k4088 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4137(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4137,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4145 in k4088 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4145(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4145,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4147 in k4088 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4147(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4147,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4176 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4176(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4176,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4210 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4210(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4210,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4218 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4220(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,7)))){
C_save_and_reclaim((void *)f_4220,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4223,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* eval.scm:229: compile */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3762(t3,t2,C_i_caddr(((C_word*)t0)[3]),((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k4221 in k4218 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4223(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,7)))){
C_save_and_reclaim((void *)f_4223,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4226,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=C_i_cdddr(((C_word*)t0)[4]);
if(C_truep(C_i_pairp(t3))){
/* eval.scm:231: compile */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3762(t4,t2,C_i_cadddr(((C_word*)t0)[4]),((C_word*)t0)[6],C_SCHEME_FALSE,((C_word*)t0)[7],((C_word*)t0)[8],C_SCHEME_FALSE);}
else{
/* eval.scm:232: compile */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3762(t4,t2,lf[30],((C_word*)t0)[6],C_SCHEME_FALSE,((C_word*)t0)[7],((C_word*)t0)[8],C_SCHEME_FALSE);}}

/* k4224 in k4221 in k4218 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4226(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4226,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4227,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word)li41),tmp=(C_word)a,a+=6,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4227 in k4224 in k4221 in k4218 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4227(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4227,c,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4234,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4232 */
static void C_ccall f_4234(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4234,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
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
t2=((C_word*)t0)[5];{
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

/* k4306 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4308(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,7)))){
C_save_and_reclaim((void *)f_4308,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4311,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:242: compile */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3762(t3,t2,C_i_cadr(((C_word*)t0)[4]),((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8]);}

/* k4309 in k4306 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4311(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4311,c,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4312,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word)li42),tmp=(C_word)a,a+=5,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4312 in k4309 in k4306 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4312(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4312,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4316,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4314 */
static void C_ccall f_4316(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4316,c,av);}
t2=((C_word*)t0)[2];{
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

/* k4328 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4330(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,7)))){
C_save_and_reclaim((void *)f_4330,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4333,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* eval.scm:246: compile */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3762(t3,t2,C_i_cadr(((C_word*)t0)[3]),((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8]);}

/* k4331 in k4328 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4333(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,7)))){
C_save_and_reclaim((void *)f_4333,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4336,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=C_slot(t3,C_fix(1));
t5=C_a_i_cons(&a,2,lf[31],t4);
/* eval.scm:247: compile */
t6=((C_word*)((C_word*)t0)[5])[1];
f_3762(t6,t2,t5,((C_word*)t0)[6],C_SCHEME_FALSE,((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9]);}

/* k4334 in k4331 in k4328 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4336(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4336,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4337,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li43),tmp=(C_word)a,a+=6,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4337 in k4334 in k4331 in k4328 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4337(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4337,c,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4341,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4339 */
static void C_ccall f_4341(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4341,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4344,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[5];{
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

/* k4342 in k4339 */
static void C_ccall f_4344(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4344,c,av);}
t2=((C_word*)t0)[2];{
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

/* k4380 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4382(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4382,c,av);}
/* eval.scm:253: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3762(t2,((C_word*)t0)[3],lf[34],((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE);}

/* a4405 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4406(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4406,c,av);}
/* eval.scm:258: lookup */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3643(t2,t1,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* a4411 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4412(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,7)))){
C_save_and_reclaim((void *)f_4412,c,av);}
a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4416,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t3,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
/* eval.scm:259: compile */
t5=((C_word*)((C_word*)t0)[6])[1];
f_3762(t5,t4,C_i_caddr(((C_word*)t0)[7]),((C_word*)t0)[8],((C_word*)t0)[4],((C_word*)t0)[9],((C_word*)t0)[5],C_SCHEME_FALSE);}

/* k4414 in a4411 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4416(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_4416,c,av);}
a=C_alloc(13);
if(C_truep(C_i_not(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4425,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(*((C_word*)lf[38]+1))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4467,a[2]=((C_word*)t0)[6],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:262: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t3;
tp(2,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_4425(2,av2);}}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(C_i_zerop(((C_word*)t0)[2]))?(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4472,a[2]=((C_word*)t0)[7],a[3]=t1,a[4]=((C_word)li47),tmp=(C_word)a,a+=5,tmp):(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4485,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[7],a[4]=t1,a[5]=((C_word)li48),tmp=(C_word)a,a+=6,tmp));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k4423 in k4414 in a4411 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4425(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_4425,c,av);}
a=C_alloc(5);
if(C_truep(((C_word*)t0)[2])){
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4429,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word)li45),tmp=(C_word)a,a+=5,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4436,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:268: ##sys#alias-global-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[20]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[20]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[8];
tp(5,av2);}}}

/* f_4429 in k4423 in k4414 in a4411 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4429(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_4429,c,av);}
/* eval.scm:267: ##sys#error */
t3=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=lf[0];
av2[3]=lf[37];
av2[4]=((C_word*)t0)[2];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4434 in k4423 in k4414 in a4411 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4436(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4436,c,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4437,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word)li46),tmp=(C_word)a,a+=5,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4437 in k4434 in k4423 in k4414 in a4411 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4437(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4437,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4441,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4439 */
static void C_ccall f_4441(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4441,c,av);}
t2=C_i_persist_symbol(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_setslot(((C_word*)t0)[2],C_fix(0),t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4465 in k4414 in a4411 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4467(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4467,c,av);}
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=C_i_cdr(t2);
if(C_truep(C_i_symbolp(t3))){
/* eval.scm:264: ##sys#notice */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[39]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[39]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[40];
av2[3]=((C_word*)t0)[2];
tp(4,av2);}}
else{
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_4425(2,av2);}}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_4425(2,av2);}}}

/* f_4472 in k4414 in a4411 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4472(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4472,c,av);}
a=C_alloc(5);
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4484,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k4482 */
static void C_ccall f_4484(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4484,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_setslot(((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4485 in k4414 in a4411 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4485(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4485,c,av);}
a=C_alloc(5);
t3=C_u_i_list_ref(t2,((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4494,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k4492 */
static void C_ccall f_4494(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4494,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_setslot(((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4519 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4521(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(26,c,3)))){
C_save_and_reclaim((void *)f_4521,c,av);}
a=C_alloc(26);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(t1,lf[42]);
t7=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4530,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4926,a[2]=t4,a[3]=t9,a[4]=t5,a[5]=((C_word)li61),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_4926(t11,t7,t1);}

/* k4528 in k4519 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4530(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(22,c,2)))){
C_save_and_reclaim((void *)f_4530,c,av);}
a=C_alloc(22);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4536,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t2,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4924,a[2]=t3,a[3]=((C_word*)t0)[6],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:285: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t4;
tp(2,av2);}}

/* k4534 in k4528 in k4519 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4536(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(33,c,4)))){
C_save_and_reclaim((void *)f_4536,c,av);}
a=C_alloc(33);
t2=*((C_word*)lf[9]+1);
t3=t1;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_TRUE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4539,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4877,a[2]=t4,a[3]=t6,a[4]=t2,a[5]=((C_word)li58),tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4894,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[13],a[7]=((C_word)li59),tmp=(C_word)a,a+=8,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4912,a[2]=t4,a[3]=t2,a[4]=((C_word)li60),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:286: ##sys#dynamic-wind */
t11=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t11;
av2[1]=t7;
av2[2]=t8;
av2[3]=t9;
av2[4]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(5,av2);}}

/* k4537 in k4534 in k4528 in k4519 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4539(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(26,c,3)))){
C_save_and_reclaim((void *)f_4539,c,av);}
a=C_alloc(26);
switch(((C_word*)t0)[2]){
case C_fix(1):
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4548,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4569,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:291: scheme#cadar */
t4=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}
case C_fix(2):
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4582,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4618,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:294: scheme#cadar */
t4=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}
case C_fix(3):
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4631,a[2]=((C_word*)t0)[9],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4685,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:298: scheme#cadar */
t4=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}
case C_fix(4):
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4698,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4767,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:306: scheme#cadar */
t4=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}
default:
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4775,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word)li54),tmp=(C_word)a,a+=7,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4788,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4835,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=t5,a[6]=((C_word)li57),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_4835(t11,t7,((C_word*)t0)[9]);}}

/* k4546 in k4537 in k4534 in k4528 in k4519 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4548(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4548,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4549,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word)li50),tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_4549 in k4546 in k4537 in k4534 in k4528 in k4519 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4549(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4549,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4565,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4563 */
static void C_ccall f_4565(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4565,c,av);}
a=C_alloc(5);
t2=C_a_i_vector1(&a,1,t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[2]);
t4=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[4];
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4567 in k4537 in k4534 in k4528 in k4519 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4569(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4569,c,av);}
/* eval.scm:291: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3762(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],C_i_car(((C_word*)t0)[5]),((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k4580 in k4537 in k4534 in k4528 in k4519 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4582(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_4582,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4585,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4610,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:295: scheme#cadadr */
t4=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4583 in k4580 in k4537 in k4534 in k4528 in k4519 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4585(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4585,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4586,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word)li51),tmp=(C_word)a,a+=6,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4586 in k4583 in k4580 in k4537 in k4534 in k4528 in k4519 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4586(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4586,c,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4602,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4600 */
static void C_ccall f_4602(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_4602,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4606,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[5];{
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

/* k4604 in k4600 */
static void C_ccall f_4606(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_4606,c,av);}
a=C_alloc(6);
t2=C_a_i_vector2(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[5];
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4608 in k4580 in k4537 in k4534 in k4528 in k4519 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4610(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4610,c,av);}
/* eval.scm:295: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3762(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],C_i_cadr(((C_word*)t0)[5]),((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k4616 in k4537 in k4534 in k4528 in k4519 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4618(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4618,c,av);}
/* eval.scm:294: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3762(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],C_i_car(((C_word*)t0)[5]),((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k4629 in k4537 in k4534 in k4528 in k4519 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4631(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_4631,c,av);}
a=C_alloc(19);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4634,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4677,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:299: scheme#cadadr */
t4=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4632 in k4629 in k4537 in k4534 in k4528 in k4519 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4634(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_4634,c,av);}
a=C_alloc(14);
t2=C_i_cddr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4640,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4669,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:301: scheme#cadar */
t5=*((C_word*)lf[43]+1);{
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

/* k4638 in k4632 in k4629 in k4537 in k4534 in k4528 in k4519 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4640(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_4640,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4641,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word)li52),tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_4641 in k4638 in k4632 in k4629 in k4537 in k4534 in k4528 in k4519 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4641(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4641,c,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4657,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4655 */
static void C_ccall f_4657(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4657,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4661,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[6];{
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

/* k4659 in k4655 */
static void C_ccall f_4661(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4661,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4665,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[6];{
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

/* k4663 in k4659 in k4655 */
static void C_ccall f_4665(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4665,c,av);}
a=C_alloc(7);
t2=C_a_i_vector3(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[4]);
t4=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[6];
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4667 in k4632 in k4629 in k4537 in k4534 in k4528 in k4519 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4669(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4669,c,av);}
/* eval.scm:301: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3762(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],C_i_caddr(((C_word*)t0)[5]),((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k4675 in k4629 in k4537 in k4534 in k4528 in k4519 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4677(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4677,c,av);}
/* eval.scm:299: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3762(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],C_i_cadr(((C_word*)t0)[5]),((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k4683 in k4537 in k4534 in k4528 in k4519 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4685(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4685,c,av);}
/* eval.scm:298: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3762(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],C_i_car(((C_word*)t0)[5]),((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k4696 in k4537 in k4534 in k4528 in k4519 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4698(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_4698,c,av);}
a=C_alloc(19);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4701,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4759,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:307: scheme#cadadr */
t4=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4699 in k4696 in k4537 in k4534 in k4528 in k4519 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4701(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(20,c,2)))){
C_save_and_reclaim((void *)f_4701,c,av);}
a=C_alloc(20);
t2=C_i_cddr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4707,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t2,tmp=(C_word)a,a+=12,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4751,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:309: scheme#cadar */
t5=*((C_word*)lf[43]+1);{
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

/* k4705 in k4699 in k4696 in k4537 in k4534 in k4528 in k4519 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4707(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_4707,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4710,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4743,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:310: scheme#cadadr */
t4=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[11];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4708 in k4705 in k4699 in k4696 in k4537 in k4534 in k4528 in k4519 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4710(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4710,c,av);}
a=C_alloc(8);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4711,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li53),tmp=(C_word)a,a+=8,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4711 in k4708 in k4705 in k4699 in k4696 in k4537 in k4534 in k4528 in k4519 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 in ... */
static void C_ccall f_4711(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_4711,c,av);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4727,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t4=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4725 */
static void C_ccall f_4727(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_4727,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4731,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[7];{
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

/* k4729 in k4725 */
static void C_ccall f_4731(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_4731,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4735,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[7];{
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

/* k4733 in k4729 in k4725 */
static void C_ccall f_4735(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_4735,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4739,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[7];{
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

/* k4737 in k4733 in k4729 in k4725 */
static void C_ccall f_4739(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_4739,c,av);}
a=C_alloc(8);
t2=C_a_i_vector4(&a,4,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[5]);
t4=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[7];
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4741 in k4705 in k4699 in k4696 in k4537 in k4534 in k4528 in k4519 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4743(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4743,c,av);}
/* eval.scm:310: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3762(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],C_i_cadddr(((C_word*)t0)[5]),((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k4749 in k4699 in k4696 in k4537 in k4534 in k4528 in k4519 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4751(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4751,c,av);}
/* eval.scm:309: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3762(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],C_i_caddr(((C_word*)t0)[5]),((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k4757 in k4696 in k4537 in k4534 in k4528 in k4519 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4759(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4759,c,av);}
/* eval.scm:307: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3762(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],C_i_cadr(((C_word*)t0)[5]),((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k4765 in k4537 in k4534 in k4528 in k4519 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4767(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4767,c,av);}
/* eval.scm:306: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3762(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],C_i_car(((C_word*)t0)[5]),((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* g525 in k4537 in k4534 in k4528 in k4519 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_fcall f_4775(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,7)))){
C_save_and_reclaim_args((void *)trf_4775,3,t0,t1,t2);}
/* eval.scm:320: compile */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3762(t3,t1,C_i_cadr(t2),((C_word*)t0)[3],C_u_i_car(t2),((C_word*)t0)[4],((C_word*)t0)[5],C_SCHEME_FALSE);}

/* k4786 in k4537 in k4534 in k4528 in k4519 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4788(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4788,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4789,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word)li56),tmp=(C_word)a,a+=6,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4789 in k4786 in k4537 in k4534 in k4528 in k4519 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4789(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4789,c,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4793,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* eval.scm:322: ##sys#make-vector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[45]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[45]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* k4791 */
static void C_ccall f_4793(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_4793,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4796,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4805,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=((C_word)li55),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_4805(t6,t2,C_fix(0),((C_word*)t0)[6]);}

/* k4794 in k4791 */
static void C_ccall f_4796(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4796,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[5];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* doloop546 in k4791 */
static void C_fcall f_4805(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_4805,4,t0,t1,t2,t3);}
a=C_alloc(7);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4830,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t5=C_slot(t3,C_fix(0));{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k4828 in doloop546 in k4791 */
static void C_ccall f_4830(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4830,c,av);}
t2=C_i_setslot(((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=((C_word*)((C_word*)t0)[4])[1];
f_4805(t3,((C_word*)t0)[5],C_fixnum_plus(((C_word*)t0)[3],C_fix(1)),C_slot(((C_word*)t0)[6],C_fix(1)));}

/* map-loop519 in k4537 in k4534 in k4528 in k4519 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_fcall f_4835(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4835,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4860,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:320: g525 */
t4=((C_word*)t0)[4];
f_4775(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4858 in map-loop519 in k4537 in k4534 in k4528 in k4519 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4860(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4860,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_4835(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* a4876 in k4534 in k4528 in k4519 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4877(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4877,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4881,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
/* eval.scm:286: ##sys#current-environment480 */
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
f_4881(2,av2);}}}

/* k4879 in a4876 in k4534 in k4528 in k4519 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4881(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4881,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4885,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* eval.scm:286: ##sys#current-environment480 */
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k4883 in k4879 in a4876 in k4534 in k4528 in k4519 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4885(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_4885,c,av);}
a=C_alloc(4);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4888,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:286: ##sys#current-environment480 */
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

/* k4886 in k4883 in k4879 in a4876 in k4534 in k4528 in k4519 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4888(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4888,c,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a4893 in k4534 in k4528 in k4519 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4894(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_4894,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4902,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=C_i_cddr(((C_word*)t0)[6]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4910,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:288: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t4;
tp(2,av2);}}

/* k4900 in a4893 in k4534 in k4528 in k4519 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4902(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_4902,c,av);}
a=C_alloc(12);
/* eval.scm:287: compile-to-closure */
f_3547(((C_word*)t0)[2],t1,((C_word*)t0)[3],C_a_i_list(&a,4,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE));}

/* k4908 in a4893 in k4534 in k4528 in k4519 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4910(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4910,c,av);}
/* eval.scm:288: ##sys#canonicalize-body */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[46]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}

/* a4911 in k4534 in k4528 in k4519 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4912(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4912,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4916,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:286: ##sys#current-environment480 */
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k4914 in a4911 in k4534 in k4528 in k4519 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4916(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_4916,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4919,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:286: ##sys#current-environment480 */
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

/* k4917 in k4914 in a4911 in k4534 in k4528 in k4519 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4919(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4919,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4922 in k4528 in k4519 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4924(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4924,c,av);}
/* eval.scm:285: ##sys#extend-se */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[48]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[48]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
tp(5,av2);}}

/* map-loop452 in k4519 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_fcall f_4926(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4926,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4951,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:283: g458 */
t4=*((C_word*)lf[49]+1);{
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

/* k4949 in map-loop452 in k4519 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_4951(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4951,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_4926(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop424 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_fcall f_4960(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_4960,3,t0,t1,t2);}
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

/* k5031 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5033(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(26,c,3)))){
C_save_and_reclaim((void *)f_5033,c,av);}
a=C_alloc(26);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5037,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5057,a[2]=((C_word*)t0)[8],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5071,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li63),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_5071(t11,t7,((C_word*)t0)[9]);}

/* k5035 in k5031 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5037(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,7)))){
C_save_and_reclaim((void *)f_5037,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[41],t2);
/* eval.scm:332: compile */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3762(t4,((C_word*)t0)[4],t3,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],C_SCHEME_FALSE);}

/* k5055 in k5031 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5057(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_5057,c,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[41],t2);
t4=C_a_i_list(&a,1,t3);
/* eval.scm:333: ##sys#append */
t5=*((C_word*)lf[51]+1);{
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
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* map-loop587 in k5031 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_fcall f_5071(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_5071,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_i_cadr(t3);
t6=C_a_i_list(&a,3,lf[36],t4,t5);
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

/* map-loop560 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_fcall f_5105(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_5105,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_list2(&a,2,t4,lf[52]);
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

/* k5153 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5155(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_5155,c,av);}
a=C_alloc(24);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(t1,lf[42]);
t7=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5164,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5377,a[2]=t4,a[3]=t9,a[4]=t5,a[5]=((C_word)li68),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_5377(t11,t7,t1);}

/* k5162 in k5153 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5164(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(25,c,3)))){
C_save_and_reclaim((void *)f_5164,c,av);}
a=C_alloc(25);
t2=C_i_cddr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5190,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5343,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li67),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_5343(t11,t7,((C_word*)t0)[10]);}

/* k5188 in k5162 in k5153 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5190(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(25,c,4)))){
C_save_and_reclaim((void *)f_5190,c,av);}
a=C_alloc(25);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[42]);
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5217,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[2],tmp=(C_word)a,a+=12,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5295,a[2]=t4,a[3]=t9,a[4]=t5,a[5]=((C_word)li66),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_5295(t11,t7,((C_word*)t0)[2],((C_word*)t0)[11]);}

/* k5215 in k5188 in k5162 in k5153 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5217(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(27,c,4)))){
C_save_and_reclaim((void *)f_5217,c,av);}
a=C_alloc(27);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5221,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5233,a[2]=((C_word*)t0)[9],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5247,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li65),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_5247(t11,t7,((C_word*)t0)[10],((C_word*)t0)[11]);}

/* k5219 in k5215 in k5188 in k5162 in k5153 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5221(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,7)))){
C_save_and_reclaim((void *)f_5221,c,av);}
a=C_alloc(15);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[41],t2);
t4=C_a_i_list(&a,3,lf[41],((C_word*)t0)[3],t3);
/* eval.scm:348: compile */
t5=((C_word*)((C_word*)t0)[4])[1];
f_3762(t5,((C_word*)t0)[5],t4,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9],C_SCHEME_FALSE);}

/* k5231 in k5215 in k5188 in k5162 in k5153 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5233(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_5233,c,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[41],t2);
t4=C_a_i_list(&a,1,t3);
/* eval.scm:349: ##sys#append */
t5=*((C_word*)lf[51]+1);{
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
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* map-loop736 in k5215 in k5188 in k5162 in k5153 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_fcall f_5247(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_5247,4,t0,t1,t2,t3);}
a=C_alloc(12);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,3,lf[36],t6,t7);
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

/* map-loop703 in k5188 in k5162 in k5153 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_fcall f_5295(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_5295,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_i_cadr(t7);
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

/* map-loop676 in k5162 in k5153 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_fcall f_5343(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_5343,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_list2(&a,2,t4,lf[54]);
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

/* map-loop646 in k5153 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_fcall f_5377(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_5377,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5402,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:346: g652 */
t4=*((C_word*)lf[49]+1);{
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

/* k5400 in map-loop646 in k5153 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5402(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5402,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_5377(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop619 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_fcall f_5411(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_5411,3,t0,t1,t2);}
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

/* k5450 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5452(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,2)))){
C_save_and_reclaim((void *)f_5452,c,av);}
a=C_alloc(24);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_u_i_cdr(((C_word*)t0)[2]);
t6=C_u_i_cdr(t5);
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(C_truep(((C_word*)t0)[3])?C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t4)[1]):C_a_i_cons(&a,2,lf[56],((C_word*)t4)[1]));
t9=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5463,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t8,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t7,a[10]=((C_word*)t0)[9],a[11]=t4,tmp=(C_word)a,a+=12,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5869,a[2]=t4,a[3]=t7,a[4]=t9,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:365: ##sys#extended-lambda-list? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[63]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[63]+1);
av2[1]=t10;
av2[2]=((C_word*)t4)[1];
tp(3,av2);}}

/* k5461 in k5450 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5463(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_5463,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5468,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word)li99),tmp=(C_word)a,a+=11,tmp);
/* eval.scm:370: ##sys#decompose-lambda-list */
t3=*((C_word*)lf[60]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[10];
av2[2]=((C_word*)((C_word*)t0)[11])[1];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* a5467 in k5461 in k5450 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5468(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,3)))){
C_save_and_reclaim((void *)f_5468,c,av);}
a=C_alloc(27);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=C_i_check_list_2(t2,lf[42]);
t10=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5478,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],a[12]=((C_word*)t0)[9],a[13]=t2,tmp=(C_word)a,a+=14,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5834,a[2]=t7,a[3]=t12,a[4]=t8,a[5]=((C_word)li98),tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_5834(t14,t10,t2);}

/* k5476 in a5467 in k5461 in k5450 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5478(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_5478,c,av);}
a=C_alloc(19);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5481,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5832,a[2]=t2,a[3]=((C_word*)t0)[13],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:374: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t3;
tp(2,av2);}}

/* k5479 in k5476 in a5467 in k5461 in k5450 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5481(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(35,c,4)))){
C_save_and_reclaim((void *)f_5481,c,av);}
a=C_alloc(35);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=*((C_word*)lf[9]+1);
t4=t1;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_TRUE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5487,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5789,a[2]=t5,a[3]=t7,a[4]=t3,a[5]=((C_word)li95),tmp=(C_word)a,a+=6,tmp);
t10=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5806,a[2]=((C_word*)t0)[9],a[3]=t2,a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[13],a[8]=t1,a[9]=((C_word)li96),tmp=(C_word)a,a+=10,tmp);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5820,a[2]=t5,a[3]=t3,a[4]=((C_word)li97),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:377: ##sys#dynamic-wind */
t12=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t12;
av2[1]=t8;
av2[2]=t9;
av2[3]=t10;
av2[4]=t11;
((C_proc)(void*)(*((C_word*)t12+1)))(5,av2);}}

/* k5485 in k5479 in k5476 in a5467 in k5461 in k5450 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5487(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5487,c,av);}
a=C_alloc(7);
switch(((C_word*)t0)[2]){
case C_fix(0):
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(((C_word*)t0)[4])?(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5497,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li71),tmp=(C_word)a,a+=6,tmp):(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5516,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li73),tmp=(C_word)a,a+=6,tmp));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}
case C_fix(1):
if(C_truep(((C_word*)t0)[4])){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5540,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li75),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5559,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li77),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
case C_fix(2):
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(((C_word*)t0)[4])?(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5587,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li79),tmp=(C_word)a,a+=6,tmp):(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5606,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li81),tmp=(C_word)a,a+=6,tmp));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}
case C_fix(3):
if(C_truep(((C_word*)t0)[4])){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5634,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li83),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5653,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li85),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
default:
t2=C_eqp(((C_word*)t0)[2],C_fix(4));
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(t2)?(C_truep(((C_word*)t0)[4])?(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5681,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li87),tmp=(C_word)a,a+=6,tmp):(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5700,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li89),tmp=(C_word)a,a+=6,tmp)):(C_truep(((C_word*)t0)[4])?(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5722,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word)li92),tmp=(C_word)a,a+=7,tmp):(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5745,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word)li94),tmp=(C_word)a,a+=7,tmp)));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* f_5497 in k5485 in k5479 in k5476 in a5467 in k5461 in k5450 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5497(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_5497,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5503,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li70),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:384: decorate */
f_3756(t1,t3,((C_word*)t0)[4]);}

/* a5502 */
static void C_ccall f_5503(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_5503,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+5);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
t3=C_a_i_vector1(&a,1,t2);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[2]);
t5=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* f_5516 in k5485 in k5479 in k5476 in a5467 in k5461 in k5450 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5516(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_5516,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5522,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li72),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:389: decorate */
f_3756(t1,t3,((C_word*)t0)[4]);}

/* a5521 */
static void C_ccall f_5522(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5522,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,C_SCHEME_FALSE,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
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

/* f_5540 in k5485 in k5479 in k5476 in a5467 in k5461 in k5450 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5540(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_5540,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5546,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li74),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:394: decorate */
f_3756(t1,t3,((C_word*)t0)[4]);}

/* a5545 */
static void C_ccall f_5546(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +6,c,2)))){
C_save_and_reclaim((void*)f_5546,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+6);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=C_a_i_vector2(&a,2,t2,t3);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[2]);
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t1;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* f_5559 in k5485 in k5479 in k5476 in a5467 in k5461 in k5450 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5559(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_5559,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5565,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li76),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:399: decorate */
f_3756(t1,t3,((C_word*)t0)[4]);}

/* a5564 */
static void C_ccall f_5565(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5565,c,av);}
a=C_alloc(5);
t3=C_a_i_vector1(&a,1,t2);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[2]);
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* f_5587 in k5485 in k5479 in k5476 in a5467 in k5461 in k5450 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5587(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_5587,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5593,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li78),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:405: decorate */
f_3756(t1,t3,((C_word*)t0)[4]);}

/* a5592 */
static void C_ccall f_5593(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +7,c,2)))){
C_save_and_reclaim((void*)f_5593,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+7);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
t5=C_a_i_vector3(&a,3,t2,t3,t4);
t6=C_a_i_cons(&a,2,t5,((C_word*)t0)[2]);
t7=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t7;
av2[1]=t1;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* f_5606 in k5485 in k5479 in k5476 in a5467 in k5461 in k5450 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5606(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_5606,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5612,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li80),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:410: decorate */
f_3756(t1,t3,((C_word*)t0)[4]);}

/* a5611 */
static void C_ccall f_5612(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5612,c,av);}
a=C_alloc(6);
t4=C_a_i_vector2(&a,2,t2,t3);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[2]);
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t1;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* f_5634 in k5485 in k5479 in k5476 in a5467 in k5461 in k5450 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5634(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_5634,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5640,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li82),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:416: decorate */
f_3756(t1,t3,((C_word*)t0)[4]);}

/* a5639 */
static void C_ccall f_5640(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c<5) C_bad_min_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-5)*C_SIZEOF_PAIR +8,c,2)))){
C_save_and_reclaim((void*)f_5640,c,av);}
a=C_alloc((c-5)*C_SIZEOF_PAIR+8);
t5=C_build_rest(&a,c,5,av);
C_word t6;
C_word t7;
C_word t8;
t6=C_a_i_vector4(&a,4,t2,t3,t4,t5);
t7=C_a_i_cons(&a,2,t6,((C_word*)t0)[2]);
t8=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t8;
av2[1]=t1;
av2[2]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}

/* f_5653 in k5485 in k5479 in k5476 in a5467 in k5461 in k5450 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5653(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_5653,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5659,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li84),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:421: decorate */
f_3756(t1,t3,((C_word*)t0)[4]);}

/* a5658 */
static void C_ccall f_5659(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_5659,c,av);}
a=C_alloc(7);
t5=C_a_i_vector3(&a,3,t2,t3,t4);
t6=C_a_i_cons(&a,2,t5,((C_word*)t0)[2]);
t7=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t7;
av2[1]=t1;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* f_5681 in k5485 in k5479 in k5476 in a5467 in k5461 in k5450 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5681(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_5681,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5687,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li86),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:427: decorate */
f_3756(t1,t3,((C_word*)t0)[4]);}

/* a5686 */
static void C_ccall f_5687(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word *a;
if(c<6) C_bad_min_argc_2(c,6,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-6)*C_SIZEOF_PAIR +9,c,2)))){
C_save_and_reclaim((void*)f_5687,c,av);}
a=C_alloc((c-6)*C_SIZEOF_PAIR+9);
t6=C_build_rest(&a,c,6,av);
C_word t7;
C_word t8;
C_word t9;
t7=C_a_i_vector5(&a,5,t2,t3,t4,t5,t6);
t8=C_a_i_cons(&a,2,t7,((C_word*)t0)[2]);
t9=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t9;
av2[1]=t1;
av2[2]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* f_5700 in k5485 in k5479 in k5476 in a5467 in k5461 in k5450 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5700(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_5700,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5706,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li88),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:432: decorate */
f_3756(t1,t3,((C_word*)t0)[4]);}

/* a5705 */
static void C_ccall f_5706(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_5706,c,av);}
a=C_alloc(5);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5718,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:434: ##sys#vector */
t7=*((C_word*)lf[57]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=t2;
av2[3]=t3;
av2[4]=t4;
av2[5]=t5;
((C_proc)(void*)(*((C_word*)t7+1)))(6,av2);}}

/* k5716 in a5705 */
static void C_ccall f_5718(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5718,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* f_5722 in k5485 in k5479 in k5476 in a5467 in k5461 in k5450 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5722(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5722,c,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5728,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li91),tmp=(C_word)a,a+=6,tmp);
/* eval.scm:439: decorate */
f_3756(t1,t3,((C_word*)t0)[5]);}

/* a5727 */
static void C_ccall f_5728(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +15,c,6)))){
C_save_and_reclaim((void*)f_5728,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+15);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5740,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5744,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
t5=C_a_i_list1(&a,1,t2);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t3;
av2[2]=*((C_word*)lf[57]+1);
av2[3]=t5;
C_apply(4,av2);}}
else{
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7257,a[2]=t2,a[3]=t6,a[4]=((C_word)li90),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_7257(t8,t4,((C_word*)t0)[4],C_fix(0),t2,C_SCHEME_FALSE);}}

/* k5738 in a5727 */
static void C_ccall f_5740(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5740,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5742 in a5727 */
static void C_ccall f_5744(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5744,c,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[57]+1);
av2[3]=t1;
C_apply(4,av2);}}

/* f_5745 in k5485 in k5479 in k5476 in a5467 in k5461 in k5450 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5745(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5745,c,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5751,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word)li93),tmp=(C_word)a,a+=6,tmp);
/* eval.scm:446: decorate */
f_3756(t1,t3,((C_word*)t0)[5]);}

/* a5750 */
static void C_ccall f_5751(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +5,c,4)))){
C_save_and_reclaim((void*)f_5751,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+5);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
t3=C_fix(c - 2);
t4=C_eqp(t3,((C_word*)t0)[2]);
if(C_truep(C_i_not(t4))){
/* eval.scm:450: ##sys#error */
t5=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=lf[59];
av2[3]=((C_word*)t0)[2];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5773,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[57]+1);
av2[3]=t2;
C_apply(4,av2);}}}

/* k5771 in a5750 */
static void C_ccall f_5773(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5773,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* a5788 in k5479 in k5476 in a5467 in k5461 in k5450 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5789(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5789,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5793,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
/* eval.scm:377: ##sys#current-environment815 */
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
f_5793(2,av2);}}}

/* k5791 in a5788 in k5479 in k5476 in a5467 in k5461 in k5450 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5793(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_5793,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5797,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* eval.scm:377: ##sys#current-environment815 */
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k5795 in k5791 in a5788 in k5479 in k5476 in a5467 in k5461 in k5450 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5797(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_5797,c,av);}
a=C_alloc(4);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5800,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:377: ##sys#current-environment815 */
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

/* k5798 in k5795 in k5791 in a5788 in k5479 in k5476 in a5467 in k5461 in k5450 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 in ... */
static void C_ccall f_5800(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5800,c,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a5805 in k5479 in k5476 in a5467 in k5461 in k5450 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5806(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_5806,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5814,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:379: ##sys#canonicalize-body */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[46]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[7])[1];
av2[3]=((C_word*)t0)[8];
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}

/* k5812 in a5805 in k5479 in k5476 in a5467 in k5461 in k5450 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5814(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_5814,c,av);}
a=C_alloc(12);
if(C_truep(((C_word*)t0)[2])){
/* eval.scm:378: compile-to-closure */
f_3547(((C_word*)t0)[3],t1,((C_word*)t0)[4],C_a_i_list(&a,4,((C_word*)t0)[2],((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE));}
else{
/* eval.scm:378: compile-to-closure */
f_3547(((C_word*)t0)[3],t1,((C_word*)t0)[4],C_a_i_list(&a,4,((C_word*)t0)[7],((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE));}}

/* a5819 in k5479 in k5476 in a5467 in k5461 in k5450 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5820(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5820,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5824,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:377: ##sys#current-environment815 */
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k5822 in a5819 in k5479 in k5476 in a5467 in k5461 in k5450 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5824(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_5824,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5827,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:377: ##sys#current-environment815 */
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

/* k5825 in k5822 in a5819 in k5479 in k5476 in a5467 in k5461 in k5450 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5827(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5827,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5830 in k5476 in a5467 in k5461 in k5450 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5832(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5832,c,av);}
/* eval.scm:374: ##sys#extend-se */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[48]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[48]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
tp(5,av2);}}

/* map-loop787 in a5467 in k5461 in k5450 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_fcall f_5834(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_5834,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5859,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:373: g793 */
t4=*((C_word*)lf[49]+1);{
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

/* k5857 in map-loop787 in a5467 in k5461 in k5450 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5859(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5859,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_5834(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k5867 in k5450 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5869(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_5869,c,av);}
a=C_alloc(10);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5874,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li100),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5884,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li101),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:366: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_5463(2,av2);}}}

/* a5873 in k5867 in k5450 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5874(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5874,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5882,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:369: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t2;
tp(2,av2);}}

/* k5880 in a5873 in k5867 in k5450 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5882(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_5882,c,av);}
/* eval.scm:368: ##sys#expand-extended-lambda-list */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[61]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[61]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=((C_word*)((C_word*)t0)[4])[1];
av2[4]=*((C_word*)lf[62]+1);
av2[5]=t1;
tp(6,av2);}}

/* a5883 in k5867 in k5450 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5884(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5884,c,av);}
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k5893 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5895(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_5895,c,av);}
/* eval.scm:361: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[64]+1));
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[64]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[65];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[66];
av2[5]=C_SCHEME_FALSE;
av2[6]=t1;
tp(7,av2);}}

/* k5902 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5904(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(23,c,4)))){
C_save_and_reclaim((void *)f_5904,c,av);}
a=C_alloc(23);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_TRUE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5909,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[2],a[5]=((C_word)li102),tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5926,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word)li103),tmp=(C_word)a,a+=8,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5944,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li104),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:455: ##sys#dynamic-wind */
t9=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=((C_word*)t0)[8];
av2[2]=t6;
av2[3]=t7;
av2[4]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}

/* a5908 in k5902 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5909(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5909,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5913,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
/* eval.scm:455: ##sys#current-environment881 */
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
f_5913(2,av2);}}}

/* k5911 in a5908 in k5902 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5913(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_5913,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5917,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* eval.scm:455: ##sys#current-environment881 */
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k5915 in k5911 in a5908 in k5902 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5917(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_5917,c,av);}
a=C_alloc(4);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5920,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:455: ##sys#current-environment881 */
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

/* k5918 in k5915 in k5911 in a5908 in k5902 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5920(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5920,c,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a5925 in k5902 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5926(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_5926,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5934,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=C_i_cddr(((C_word*)t0)[6]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5942,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:468: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t4;
tp(2,av2);}}

/* k5932 in a5925 in k5902 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5934(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_5934,c,av);}
/* eval.scm:467: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3762(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE);}

/* k5940 in a5925 in k5902 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5942(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5942,c,av);}
/* eval.scm:468: ##sys#canonicalize-body */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[46]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}

/* a5943 in k5902 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5944(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5944,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5948,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:455: ##sys#current-environment881 */
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k5946 in a5943 in k5902 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5948(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_5948,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5951,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:455: ##sys#current-environment881 */
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

/* k5949 in k5946 in a5943 in k5902 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5951(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5951,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5967 in map-loop890 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5969(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_5969,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5973,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5977,a[2]=t2,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:463: ##sys#eval/meta */
t4=*((C_word*)lf[70]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_cadr(((C_word*)t0)[7]);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k5971 in k5967 in map-loop890 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5973(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_5973,c,av);}
a=C_alloc(12);
t2=C_a_i_list3(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t3);
t5=C_mutate(((C_word *)((C_word*)t0)[4])+1,t3);
t6=((C_word*)((C_word*)t0)[5])[1];
f_6002(t6,((C_word*)t0)[6],C_slot(((C_word*)t0)[7],C_fix(1)));}

/* k5975 in k5967 in map-loop890 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5977(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5977,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5981,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:464: chicken.syntax#strip-syntax */
t3=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_u_i_car(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5979 in k5975 in k5967 in map-loop890 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5981(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5981,c,av);}
/* eval.scm:462: ##sys#ensure-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[69]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[69]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* k5994 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_5996(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5996,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6000,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:466: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t2;
tp(2,av2);}}

/* k5998 in k5994 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6000(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6000,c,av);}
/* eval.scm:457: scheme#append */
t2=*((C_word*)lf[68]+1);{
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

/* map-loop890 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_fcall f_6002(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_6002,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5969,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t2,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
/* eval.scm:461: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word av2[2];
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t5;
tp(2,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6054 in map-loop925 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6056(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_6056,c,av);}
a=C_alloc(12);
t2=C_a_i_list3(&a,3,((C_word*)t0)[2],C_SCHEME_FALSE,t1);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=C_i_setslot(((C_word*)((C_word*)t0)[3])[1],C_fix(1),t3);
t5=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t6=((C_word*)((C_word*)t0)[4])[1];
f_6174(t6,((C_word*)t0)[5],C_slot(((C_word*)t0)[6],C_fix(1)));}

/* k6058 in map-loop925 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6060(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6060,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6064,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:478: chicken.syntax#strip-syntax */
t3=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_u_i_car(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6062 in k6058 in map-loop925 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6064(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6064,c,av);}
/* eval.scm:476: ##sys#ensure-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[69]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[69]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* k6077 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6079(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_6079,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6082,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6172,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:480: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t3;
tp(2,av2);}}

/* k6080 in k6077 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6082(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(31,c,4)))){
C_save_and_reclaim((void *)f_6082,c,av);}
a=C_alloc(31);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6083,a[2]=t1,a[3]=((C_word)li106),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[2],lf[72]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6147,a[2]=t2,a[3]=((C_word)li107),tmp=(C_word)a,a+=4,tmp);
t5=(
  f_6147(t4,((C_word*)t0)[2])
);
t6=*((C_word*)lf[9]+1);
t7=t1;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_TRUE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6102,a[2]=t8,a[3]=t10,a[4]=t6,a[5]=((C_word)li108),tmp=(C_word)a,a+=6,tmp);
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6119,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word)li109),tmp=(C_word)a,a+=8,tmp);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6137,a[2]=t8,a[3]=t6,a[4]=((C_word)li110),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:485: ##sys#dynamic-wind */
t14=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t14;
av2[1]=((C_word*)t0)[8];
av2[2]=t11;
av2[3]=t12;
av2[4]=t13;
((C_proc)(void*)(*((C_word*)t14+1)))(5,av2);}}

/* g954 in k6080 in k6077 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static C_word C_fcall f_6083(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_i_set_car(C_i_cdr(t1),((C_word*)t0)[2]));}

/* a6101 in k6080 in k6077 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6102(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6102,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6106,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
/* eval.scm:485: ##sys#current-environment962 */
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
f_6106(2,av2);}}}

/* k6104 in a6101 in k6080 in k6077 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6106(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6106,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6110,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* eval.scm:485: ##sys#current-environment962 */
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k6108 in k6104 in a6101 in k6080 in k6077 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6110(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_6110,c,av);}
a=C_alloc(4);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6113,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:485: ##sys#current-environment962 */
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

/* k6111 in k6108 in k6104 in a6101 in k6080 in k6077 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6113(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6113,c,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a6118 in k6080 in k6077 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6119(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_6119,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6127,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=C_i_cddr(((C_word*)t0)[6]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6135,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:487: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t4;
tp(2,av2);}}

/* k6125 in a6118 in k6080 in k6077 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6127(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_6127,c,av);}
/* eval.scm:486: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3762(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE);}

/* k6133 in a6118 in k6080 in k6077 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6135(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6135,c,av);}
/* eval.scm:487: ##sys#canonicalize-body */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[46]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}

/* a6136 in k6080 in k6077 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6137(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6137,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6141,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:485: ##sys#current-environment962 */
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k6139 in a6136 in k6080 in k6077 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6141(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_6141,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6144,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:485: ##sys#current-environment962 */
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

/* k6142 in k6139 in a6136 in k6080 in k6077 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6144(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6144,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* for-each-loop953 in k6080 in k6077 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static C_word C_fcall f_6147(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_pairp(t1))){
t2=(
/* eval.scm:481: g954 */
  f_6083(((C_word*)t0)[2],C_slot(t1,C_fix(0)))
);
t4=C_slot(t1,C_fix(1));
t1=t4;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* k6170 in k6077 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6172(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6172,c,av);}
/* eval.scm:480: scheme#append */
t2=*((C_word*)lf[68]+1);{
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

/* map-loop925 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_fcall f_6174(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,2)))){
C_save_and_reclaim_args((void *)trf_6174,3,t0,t1,t2);}
a=C_alloc(11);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6056,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6060,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:477: ##sys#eval/meta */
t7=*((C_word*)lf[70]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=C_i_cadr(t3);
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6219 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6221(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_6221,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6224,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[8])){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6262,a[2]=((C_word*)t0)[9],a[3]=t2,a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:494: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t3;
tp(2,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6224(2,av2);}}}

/* k6222 in k6219 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6224(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_6224,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6227,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6245,a[2]=t2,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:497: ##sys#current-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[77]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[77]+1);
av2[1]=t3;
tp(2,av2);}}

/* k6225 in k6222 in k6219 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6227(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_6227,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6230,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6237,a[2]=t2,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:501: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t3;
tp(2,av2);}}

/* k6228 in k6225 in k6222 in k6219 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6230(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_6230,c,av);}
/* eval.scm:503: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3762(t2,((C_word*)t0)[3],lf[74],((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE);}

/* k6235 in k6225 in k6222 in k6219 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6237(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6237,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6241,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:502: ##sys#eval/meta */
t3=*((C_word*)lf[70]+1);{
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

/* k6239 in k6235 in k6225 in k6222 in k6219 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6241(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6241,c,av);}
/* eval.scm:499: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[75]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[75]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=t1;
tp(5,av2);}}

/* k6243 in k6222 in k6219 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6245(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6245,c,av);}
/* eval.scm:496: ##sys#register-syntax-export */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[76]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[76]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=((C_word*)t0)[4];
tp(5,av2);}}

/* k6260 in k6219 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6262(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6262,c,av);}
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(C_i_not(t2))){
/* eval.scm:495: ##sys#error */
t3=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[0];
av2[3]=lf[78];
av2[4]=((C_word*)t0)[4];
av2[5]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6224(2,av2);}}}

/* k6282 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6284(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_6284,c,av);}
/* eval.scm:509: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3762(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE);}

/* k6290 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6292(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6292,c,av);}
/* eval.scm:510: ##sys#canonicalize-body */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[46]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}

/* a6310 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6311(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,7)))){
C_save_and_reclaim((void *)f_6311,c,av);}
a=C_alloc(11);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6319,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=C_i_cdddr(((C_word*)t0)[7]);
if(C_truep(C_i_pairp(t4))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6329,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:521: scheme#append */
t6=*((C_word*)lf[68]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
av2[3]=C_i_cadddr(((C_word*)t0)[7]);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t5=C_a_i_cons(&a,2,lf[31],t2);
/* eval.scm:518: compile */
t6=((C_word*)((C_word*)t0)[2])[1];
f_3762(t6,t1,t5,((C_word*)t0)[3],C_SCHEME_FALSE,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);}}

/* k6317 in a6310 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6319(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_6319,c,av);}
/* eval.scm:518: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3762(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}

/* k6327 in a6310 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6329(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6329,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6333,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:522: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t2;
tp(2,av2);}}

/* k6331 in k6327 in a6310 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6333(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6333,c,av);}
/* eval.scm:520: ##sys#canonicalize-body */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[46]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* k6360 in map-loop998 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6362(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6362,c,av);}
/* eval.scm:530: chicken.syntax#strip-syntax */
t2=*((C_word*)lf[24]+1);{
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

/* k6372 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6374(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_6374,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6376,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li113),tmp=(C_word)a,a+=9,tmp);
/* eval.scm:527: ##sys#with-module-aliases */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[85]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[85]+1);
av2[1]=((C_word*)t0)[8];
av2[2]=t1;
av2[3]=t2;
tp(4,av2);}}

/* a6375 in k6372 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6376(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_6376,c,av);}
a=C_alloc(3);
t2=C_i_cddr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[31],t2);
/* eval.scm:533: compile */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3762(t4,t1,t3,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}

/* map-loop998 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_fcall f_6390(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_6390,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6415,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6362,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:529: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[64]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[64]+1);
av2[1]=t5;
av2[2]=lf[86];
av2[3]=t4;
av2[4]=lf[87];
tp(5,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6413 in map-loop998 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6415(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6415,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_6390(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k6429 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6431(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(26,c,3)))){
C_save_and_reclaim((void *)f_6431,c,av);}
a=C_alloc(26);
t2=C_i_cadr(t1);
t3=C_i_caddr(t1);
t4=C_eqp(C_SCHEME_TRUE,t3);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6440,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t4)){
t6=t5;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t4;
f_6440(2,av2);}}
else{
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6645,a[2]=t2,a[3]=((C_word)li123),tmp=(C_word)a,a+=4,tmp);
t11=C_u_i_cdr(t1);
t12=C_u_i_cdr(t11);
t13=C_u_i_car(t12);
t14=C_i_check_list_2(t13,lf[42]);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6702,a[2]=t8,a[3]=t16,a[4]=t10,a[5]=t9,a[6]=((C_word)li124),tmp=(C_word)a,a+=7,tmp));
t18=((C_word*)t16)[1];
f_6702(t18,t5,t13);}}

/* k6438 in k6429 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6440(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_6440,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6443,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6638,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:553: ##sys#current-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[77]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[77]+1);
av2[1]=t3;
tp(2,av2);}}

/* k6441 in k6438 in k6429 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6443(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_6443,c,av);}
a=C_alloc(12);
t2=*((C_word*)lf[77]+1);
t3=*((C_word*)lf[9]+1);
t4=*((C_word*)lf[89]+1);
t5=*((C_word*)lf[90]+1);
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6446,a[2]=t5,a[3]=t4,a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
/* eval.scm:556: ##sys#register-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[98]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[98]+1);
av2[1]=t6;
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[8];
tp(5,av2);}}

/* k6444 in k6441 in k6438 in k6429 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6446(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_6446,c,av);}
a=C_alloc(14);
t2=*((C_word*)lf[91]+1);
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6449,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],tmp=(C_word)a,a+=14,tmp);
/* eval.scm:561: ##sys#module-alias-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[90]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[90]+1);
av2[1]=t3;
tp(2,av2);}}

/* k6447 in k6444 in k6441 in k6438 in k6429 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6449(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(41,c,4)))){
C_save_and_reclaim((void *)f_6449,c,av);}
a=C_alloc(41);
t2=((C_word*)t0)[2];
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t0)[3];
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=t1;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_TRUE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6454,a[2]=t3,a[3]=t5,a[4]=t7,a[5]=t9,a[6]=t11,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=((C_word)li115),tmp=(C_word)a,a+=12,tmp);
t13=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6510,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[12],a[7]=((C_word)li120),tmp=(C_word)a,a+=8,tmp);
t14=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6606,a[2]=t3,a[3]=t5,a[4]=t7,a[5]=t9,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word)li121),tmp=(C_word)a,a+=11,tmp);
/* eval.scm:555: ##sys#dynamic-wind */
t15=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t15;
av2[1]=((C_word*)t0)[13];
av2[2]=t12;
av2[3]=t13;
av2[4]=t14;
((C_proc)(void*)(*((C_word*)t15+1)))(5,av2);}}

/* a6453 in k6447 in k6444 in k6441 in k6438 in k6429 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6454(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_6454,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6458,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
/* eval.scm:555: ##sys#current-module1073 */
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
f_6458(2,av2);}}}

/* k6456 in a6453 in k6447 in k6444 in k6441 in k6438 in k6429 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6458(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_6458,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6461,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t1,tmp=(C_word)a,a+=13,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
/* eval.scm:555: ##sys#current-environment1074 */
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
f_6461(2,av2);}}}

/* k6459 in k6456 in a6453 in k6447 in k6444 in k6441 in k6438 in k6429 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6461(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_6461,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6464,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
/* eval.scm:555: ##sys#macro-environment1075 */
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
f_6464(2,av2);}}}

/* k6462 in k6459 in k6456 in a6453 in k6447 in k6444 in k6441 in k6438 in k6429 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 in ... */
static void C_ccall f_6464(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_6464,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_6467,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
/* eval.scm:555: ##sys#module-alias-environment1076 */
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
f_6467(2,av2);}}}

/* k6465 in k6462 in k6459 in k6456 in a6453 in k6447 in k6444 in k6441 in k6438 in k6429 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in ... */
static void C_ccall f_6467(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_6467,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_6471,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],tmp=(C_word)a,a+=16,tmp);
/* eval.scm:555: ##sys#current-module1073 */
t3=((C_word*)t0)[13];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k6469 in k6465 in k6462 in k6459 in k6456 in a6453 in k6447 in k6444 in k6441 in k6438 in k6429 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in ... */
static void C_ccall f_6471(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_6471,c,av);}
a=C_alloc(15);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_6475,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],tmp=(C_word)a,a+=15,tmp);
/* eval.scm:555: ##sys#current-environment1074 */
t4=((C_word*)t0)[12];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k6473 in k6469 in k6465 in k6462 in k6459 in k6456 in a6453 in k6447 in k6444 in k6441 in k6438 in k6429 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in ... */
static void C_ccall f_6475(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_6475,c,av);}
a=C_alloc(14);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6479,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],tmp=(C_word)a,a+=14,tmp);
/* eval.scm:555: ##sys#macro-environment1075 */
t4=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k6477 in k6473 in k6469 in k6465 in k6462 in k6459 in k6456 in a6453 in k6447 in k6444 in k6441 in k6438 in k6429 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in ... */
static void C_ccall f_6479(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_6479,c,av);}
a=C_alloc(13);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6483,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],tmp=(C_word)a,a+=13,tmp);
/* eval.scm:555: ##sys#module-alias-environment1076 */
t4=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k6481 in k6477 in k6473 in k6469 in k6465 in k6462 in k6459 in k6456 in a6453 in k6447 in k6444 in k6441 in k6438 in k6429 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in ... */
static void C_ccall f_6483(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_6483,c,av);}
a=C_alloc(10);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6486,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
/* eval.scm:555: ##sys#current-module1073 */
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

/* k6484 in k6481 in k6477 in k6473 in k6469 in k6465 in k6462 in k6459 in k6456 in a6453 in k6447 in k6444 in k6441 in k6438 in k6429 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in ... */
static void C_ccall f_6486(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_6486,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6489,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:555: ##sys#current-environment1074 */
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

/* k6487 in k6484 in k6481 in k6477 in k6473 in k6469 in k6465 in k6462 in k6459 in k6456 in a6453 in k6447 in k6444 in k6441 in k6438 in k6429 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in ... */
static void C_ccall f_6489(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6489,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6492,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:555: ##sys#macro-environment1075 */
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

/* k6490 in k6487 in k6484 in k6481 in k6477 in k6473 in k6469 in k6465 in k6462 in k6459 in k6456 in a6453 in k6447 in k6444 in k6441 in k6438 in k6429 in k4079 in k4064 in k4061 in k4041 in k3977 in ... */
static void C_ccall f_6492(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_6492,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6495,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:555: ##sys#module-alias-environment1076 */
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

/* k6493 in k6490 in k6487 in k6484 in k6481 in k6477 in k6473 in k6469 in k6465 in k6462 in k6459 in k6456 in a6453 in k6447 in k6444 in k6441 in k6438 in k6429 in k4079 in k4064 in k4061 in k4041 in ... */
static void C_ccall f_6495(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6495,c,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a6509 in k6447 in k6444 in k6441 in k6438 in k6429 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6510(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6510,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6516,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li119),tmp=(C_word)a,a+=8,tmp);
/* eval.scm:562: ##sys#with-property-restore */
t3=*((C_word*)lf[97]+1);{
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

/* a6515 in a6509 in k6447 in k6444 in k6441 in k6438 in k6429 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6516(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_6516,c,av);}
a=C_alloc(10);
t2=C_i_cdddr(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6526,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li118),tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_6526(t6,t1,t2,C_SCHEME_END_OF_LIST);}

/* loop in a6515 in a6509 in k6447 in k6444 in k6441 in k6438 in k6429 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_fcall f_6526(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,7)))){
C_save_and_reclaim_args((void *)trf_6526,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6536,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:566: reverse */
t5=*((C_word*)lf[96]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t4=C_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6602,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:581: compile */
t6=((C_word*)((C_word*)t0)[4])[1];
f_3762(t6,t5,C_u_i_car(t2),C_SCHEME_END_OF_LIST,C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_TRUE);}}

/* k6534 in loop in a6515 in a6509 in k6447 in k6444 in k6441 in k6438 in k6429 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 in ... */
static void C_ccall f_6536(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6536,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6539,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6587,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:567: ##sys#current-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[77]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[77]+1);
av2[1]=t3;
tp(2,av2);}}

/* k6537 in k6534 in loop in a6515 in a6509 in k6447 in k6444 in k6441 in k6438 in k6429 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in ... */
static void C_ccall f_6539(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6539,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6542,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6583,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:568: chicken.internal#module-requirement */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[94]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[94]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* k6540 in k6537 in k6534 in loop in a6515 in a6509 in k6447 in k6444 in k6441 in k6438 in k6429 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in ... */
static void C_ccall f_6542(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_6542,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6543,a[2]=((C_word*)t0)[2],a[3]=((C_word)li117),tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_6543 in k6540 in k6537 in k6534 in loop in a6515 in a6509 in k6447 in k6444 in k6441 in k6438 in k6429 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in ... */
static void C_ccall f_6543(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_6543,c,av);}
a=C_alloc(7);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6549,a[2]=t4,a[3]=t2,a[4]=((C_word)li116),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_6549(t6,t1,((C_word*)t0)[2]);}

/* loop2 */
static void C_fcall f_6549(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6549,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=*((C_word*)lf[92]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_cdr(t2);
if(C_truep(C_i_pairp(t3))){
t4=C_u_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6572,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:574: g1130 */
t6=t4;{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}
else{
/* eval.scm:574: g1133 */
t4=C_u_i_car(t2);{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}}}

/* k6570 in loop2 */
static void C_ccall f_6572(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6572,c,av);}
/* eval.scm:576: loop2 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6549(t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k6581 in k6537 in k6534 in loop in a6515 in a6509 in k6447 in k6444 in k6441 in k6438 in k6429 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in ... */
static void C_ccall f_6583(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6583,c,av);}
/* eval.scm:568: ##sys#provide */
t2=*((C_word*)lf[93]+1);{
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

/* k6585 in k6534 in loop in a6515 in a6509 in k6447 in k6444 in k6441 in k6438 in k6429 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in ... */
static void C_ccall f_6587(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6587,c,av);}
/* eval.scm:567: ##sys#finalize-module */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[95]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[95]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k6600 in loop in a6515 in a6509 in k6447 in k6444 in k6441 in k6438 in k6429 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 in ... */
static void C_ccall f_6602(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_6602,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* eval.scm:579: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_6526(t3,((C_word*)t0)[4],((C_word*)t0)[5],t2);}

/* a6605 in k6447 in k6444 in k6441 in k6438 in k6429 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6606(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_6606,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6610,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* eval.scm:555: ##sys#current-module1073 */
t3=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k6608 in a6605 in k6447 in k6444 in k6441 in k6438 in k6429 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6610(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_6610,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6613,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* eval.scm:555: ##sys#current-environment1074 */
t3=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k6611 in k6608 in a6605 in k6447 in k6444 in k6441 in k6438 in k6429 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6613(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_6613,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6616,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* eval.scm:555: ##sys#macro-environment1075 */
t3=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k6614 in k6611 in k6608 in a6605 in k6447 in k6444 in k6441 in k6438 in k6429 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 in ... */
static void C_ccall f_6616(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_6616,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6619,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* eval.scm:555: ##sys#module-alias-environment1076 */
t3=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k6617 in k6614 in k6611 in k6608 in a6605 in k6447 in k6444 in k6441 in k6438 in k6429 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in ... */
static void C_ccall f_6619(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_6619,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6622,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* eval.scm:555: ##sys#current-module1073 */
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

/* k6620 in k6617 in k6614 in k6611 in k6608 in a6605 in k6447 in k6444 in k6441 in k6438 in k6429 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in ... */
static void C_ccall f_6622(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_6622,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6625,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
/* eval.scm:555: ##sys#current-environment1074 */
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

/* k6623 in k6620 in k6617 in k6614 in k6611 in k6608 in a6605 in k6447 in k6444 in k6441 in k6438 in k6429 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in ... */
static void C_ccall f_6625(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_6625,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6628,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* eval.scm:555: ##sys#macro-environment1075 */
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

/* k6626 in k6623 in k6620 in k6617 in k6614 in k6611 in k6608 in a6605 in k6447 in k6444 in k6441 in k6438 in k6429 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in ... */
static void C_ccall f_6628(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_6628,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6631,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* eval.scm:555: ##sys#module-alias-environment1076 */
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

/* k6629 in k6626 in k6623 in k6620 in k6617 in k6614 in k6611 in k6608 in a6605 in k6447 in k6444 in k6441 in k6438 in k6429 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in ... */
static void C_ccall f_6631(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6631,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,((C_word*)t0)[5]);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,((C_word*)t0)[7]);
t5=C_mutate(((C_word *)((C_word*)t0)[8])+1,((C_word*)t0)[9]);
t6=((C_word*)t0)[10];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k6636 in k6438 in k6429 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6638(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6638,c,av);}
if(C_truep(t1)){
/* eval.scm:554: ##sys#syntax-error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[62]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[62]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[99];
av2[3]=lf[100];
av2[4]=((C_word*)t0)[3];
tp(5,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_6443(2,av2);}}}

/* g1041 in k6429 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_fcall f_6645(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_6645,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_symbolp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6658,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6669,a[2]=((C_word)li122),tmp=(C_word)a,a+=3,tmp);
t5=t3;
f_6658(t5,(
  f_6669(t2)
));}
else{
t4=t3;
f_6658(t4,C_SCHEME_FALSE);}}}

/* k6656 in g1041 in k6429 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_fcall f_6658(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,5)))){
C_save_and_reclaim_args((void *)trf_6658,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* eval.scm:549: ##sys#syntax-error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[62]+1));
C_word av2[6];
av2[0]=*((C_word*)lf[62]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[99];
av2[3]=lf[101];
av2[4]=((C_word*)t0)[3];
av2[5]=((C_word*)t0)[4];
tp(6,av2);}}}

/* loop in g1041 in k6429 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static C_word C_fcall f_6669(C_word t1){
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
if(C_truep(C_i_symbolp(t3))){
t5=C_u_i_cdr(t1);
t1=t5;
goto loop;}
else{
return(C_SCHEME_FALSE);}}}

/* map-loop1035 in k6429 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_fcall f_6702(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6702,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6727,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:540: g1041 */
t4=((C_word*)t0)[4];
f_6645(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6725 in map-loop1035 in k6429 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6727(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6727,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_6702(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k6753 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6755(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_6755,c,av);}
a=C_alloc(3);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,t2);
/* eval.scm:588: compile */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3762(t4,((C_word*)t0)[4],t3,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k6787 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6789(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_6789,c,av);}
/* eval.scm:595: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3762(t2,((C_word*)t0)[3],lf[105],((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE);}

/* a6812 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6813(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6813,c,av);}
/* eval.scm:600: ##sys#process-require */
t2=*((C_word*)lf[108]+1);{
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
av2[4]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a6818 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6819(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_6819,c,av);}
/* eval.scm:601: compile */
t4=((C_word*)((C_word*)t0)[2])[1];
f_3762(t4,t1,t2,((C_word*)t0)[3],C_SCHEME_FALSE,((C_word*)t0)[4],((C_word*)t0)[5],C_SCHEME_FALSE);}

/* k6842 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6844(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_6844,c,av);}
/* eval.scm:605: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3762(t2,((C_word*)t0)[3],lf[111],((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}

/* k6871 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_fcall f_6873(C_word t0,C_word t1){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,7)))){
C_save_and_reclaim_args((void *)trf_6873,2,t0,t1);}
a=C_alloc(12);
if(C_truep(t1)){
/* eval.scm:611: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3762(t2,((C_word*)t0)[3],lf[114],((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}
else{
t2=C_eqp(((C_word*)t0)[8],lf[115]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6885,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* eval.scm:614: ##sys#notice */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[39]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[39]+1);
av2[1]=t3;
av2[2]=lf[117];
av2[3]=((C_word*)t0)[9];
tp(4,av2);}}
else{
t3=C_eqp(((C_word*)t0)[8],lf[118]);
t4=(C_truep(t3)?t3:C_eqp(((C_word*)t0)[8],lf[119]));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6908,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* eval.scm:618: rename */
t6=((C_word*)((C_word*)t0)[10])[1];
f_3609(t6,t5,lf[120]);}
else{
t5=C_eqp(((C_word*)t0)[8],lf[121]);
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6921,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[2],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t5)){
t7=t6;
f_6921(t7,t5);}
else{
t7=C_eqp(((C_word*)t0)[8],lf[130]);
if(C_truep(t7)){
t8=t6;
f_6921(t8,t7);}
else{
t8=C_eqp(((C_word*)t0)[8],lf[131]);
if(C_truep(t8)){
t9=t6;
f_6921(t9,t8);}
else{
t9=C_eqp(((C_word*)t0)[8],lf[132]);
if(C_truep(t9)){
t10=t6;
f_6921(t10,t9);}
else{
t10=C_eqp(((C_word*)t0)[8],lf[133]);
if(C_truep(t10)){
t11=t6;
f_6921(t11,t10);}
else{
t11=C_eqp(((C_word*)t0)[8],lf[134]);
if(C_truep(t11)){
t12=t6;
f_6921(t12,t11);}
else{
t12=C_eqp(((C_word*)t0)[8],lf[135]);
if(C_truep(t12)){
t13=t6;
f_6921(t13,t12);}
else{
t13=C_eqp(((C_word*)t0)[8],lf[136]);
if(C_truep(t13)){
t14=t6;
f_6921(t14,t13);}
else{
t14=C_eqp(((C_word*)t0)[8],lf[137]);
if(C_truep(t14)){
t15=t6;
f_6921(t15,t14);}
else{
t15=C_eqp(((C_word*)t0)[8],lf[138]);
t16=t6;
f_6921(t16,(C_truep(t15)?t15:C_eqp(((C_word*)t0)[8],lf[139])));}}}}}}}}}}}}}

/* k6883 in k6871 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6885(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_6885,c,av);}
/* eval.scm:615: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3762(t2,((C_word*)t0)[3],lf[116],((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE);}

/* k6906 in k6871 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6908(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_6908,c,av);}
a=C_alloc(3);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,t2);
/* eval.scm:618: compile */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3762(t4,((C_word*)t0)[4],t3,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8]);}

/* k6919 in k6871 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_fcall f_6921(C_word t0,C_word t1){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(25,0,7)))){
C_save_and_reclaim_args((void *)trf_6921,2,t0,t1);}
a=C_alloc(25);
if(C_truep(t1)){
/* eval.scm:625: ##sys#syntax-error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[62]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[62]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[122];
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}
else{
t2=C_eqp(((C_word*)t0)[4],lf[123]);
if(C_truep(t2)){
t3=C_i_cdr(((C_word*)t0)[3]);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6941,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:628: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word av2[2];
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t4;
tp(2,av2);}}
else{
t3=C_eqp(((C_word*)t0)[4],lf[124]);
if(C_truep(t3)){
/* eval.scm:631: compile */
t4=((C_word*)((C_word*)t0)[9])[1];
f_3762(t4,((C_word*)t0)[2],C_i_cadddr(((C_word*)t0)[3]),((C_word*)t0)[6],((C_word*)t0)[10],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[11]);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[125]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6985,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[2],a[9]=((C_word*)t0)[3],tmp=(C_word)a,a+=10,tmp);
/* eval.scm:635: chicken.syntax#strip-syntax */
t6=*((C_word*)lf[24]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=C_i_cdddr(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=C_a_i_cons(&a,2,((C_word*)t0)[4],*((C_word*)lf[129]+1));
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6997,a[2]=t9,a[3]=t7,a[4]=((C_word)li128),tmp=(C_word)a,a+=5,tmp);
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7002,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word)li129),tmp=(C_word)a,a+=8,tmp);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7012,a[2]=t7,a[3]=t9,a[4]=((C_word)li130),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:645: ##sys#dynamic-wind */
t13=*((C_word*)lf[47]+1);{
C_word av2[5];
av2[0]=t13;
av2[1]=((C_word*)t0)[2];
av2[2]=t10;
av2[3]=t11;
av2[4]=t12;
((C_proc)(void*)(*((C_word*)t13+1)))(5,av2);}}}}}}

/* k6939 in k6919 in k6871 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6941(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6941,c,av);}
/* eval.scm:628: compile-call */
t2=((C_word*)((C_word*)t0)[2])[1];
f_7329(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}

/* g1222 in k6983 in k6919 in k6871 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_fcall f_6967(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,7)))){
C_save_and_reclaim_args((void *)trf_6967,3,t0,t1,t2);}
/* eval.scm:637: compile */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3762(t3,t1,C_i_cadr(t2),((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}

/* k6983 in k6919 in k6871 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6985(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_6985,c,av);}
a=C_alloc(9);
t2=C_i_assq(lf[126],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6967,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li127),tmp=(C_word)a,a+=9,tmp);
/* eval.scm:635: g1222 */
t4=t3;
f_6967(t4,((C_word*)t0)[8],t2);}
else{
/* eval.scm:639: ##sys#syntax-error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[62]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[62]+1);
av2[1]=((C_word*)t0)[8];
av2[2]=lf[127];
av2[3]=lf[128];
av2[4]=((C_word*)t0)[9];
tp(5,av2);}}}

/* a6996 in k6919 in k6871 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_6997(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6997,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[129]+1));
t3=C_mutate((C_word*)lf[129]+1 /* (set! ##sys#syntax-context ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a7001 in k6919 in k6871 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7002(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7002,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7010,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:646: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t2;
tp(2,av2);}}

/* k7008 in a7001 in k6919 in k6871 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7010(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_7010,c,av);}
/* eval.scm:646: compile-call */
t2=((C_word*)((C_word*)t0)[2])[1];
f_7329(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}

/* a7011 in k6919 in k6871 in k4079 in k4064 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7012(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7012,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[129]+1));
t3=C_mutate((C_word*)lf[129]+1 /* (set! ##sys#syntax-context ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k7193 in k4061 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7195(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7195,c,av);}
/* eval.scm:194: chicken.syntax#expand */
t2=*((C_word*)lf[142]+1);{
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

/* k7196 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_fcall f_7198(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_7198,2,t0,t1);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7205,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:650: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word av2[2];
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t2;
tp(2,av2);}}

/* k7203 in k7196 in k4041 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7205(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_7205,c,av);}
/* eval.scm:650: compile-call */
t2=((C_word*)((C_word*)t0)[2])[1];
f_7329(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}

/* k7226 in k3977 in k3767 in compile in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7228(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7228,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
f_4043(2,av2);}}
else{
t2=C_i_vectorp(((C_word*)t0)[3]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_4043(2,av2);}}
else{
/* eval.scm:188: ##sys#srfi-4-vector? */
t3=*((C_word*)lf[143]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}}

/* doloop1240 in a5727 */
static void C_fcall f_7257(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,5)))){
C_save_and_reclaim_args((void *)trf_7257,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(7);
t6=C_eqp(t2,C_fix(0));
if(C_truep(t6)){
t7=C_a_i_list1(&a,1,t4);
t8=C_i_setslot(t5,C_fix(1),t7);
t9=t1;{
C_word av2[2];
av2[0]=t9;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t7=C_fixnum_difference(t2,C_fix(1));
t8=C_fixnum_plus(t3,C_fix(1));
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7286,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t7,a[5]=t8,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t10=C_eqp(C_SCHEME_END_OF_LIST,t4);
if(C_truep(t10)){
/* eval.scm:659: ##sys#error */
t11=*((C_word*)lf[17]+1);{
C_word av2[5];
av2[0]=t11;
av2[1]=t9;
av2[2]=lf[58];
av2[3]=t2;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t11+1)))(5,av2);}}
else{
t12=t1;
t13=t7;
t14=t8;
t15=C_slot(t4,C_fix(1));
t16=t4;
t1=t12;
t2=t13;
t3=t14;
t4=t15;
t5=t16;
goto loop;}}}

/* k7284 in doloop1240 in a5727 */
static void C_ccall f_7286(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_7286,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_7257(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1,((C_word*)t0)[6]);}

/* loop in k7334 in compile-call in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static C_word C_fcall f_7303(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_nullp(t1))){
return(t2);}
else{
if(C_truep(C_i_pairp(t1))){
t4=C_slot(t1,C_fix(1));
t5=C_fixnum_plus(t2,C_fix(1));
t1=t4;
t2=t5;
goto loop;}
else{
return(C_SCHEME_FALSE);}}}

/* compile-call in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_fcall f_7329(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,7)))){
C_save_and_reclaim_args((void *)trf_7329,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(13);
t6=C_slot(t2,C_fix(0));
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7336,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=t5,a[7]=t3,a[8]=((C_word*)t0)[3],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_closurep(t6))){
t8=t7;{
C_word av2[2];
av2[0]=t8;
av2[1]=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7653,a[2]=t6,a[3]=((C_word)li143),tmp=(C_word)a,a+=4,tmp);
f_7336(2,av2);}}
else{
/* eval.scm:676: compile */
t8=((C_word*)((C_word*)t0)[3])[1];
f_3762(t8,t7,C_slot(t2,C_fix(0)),t3,C_SCHEME_FALSE,t4,t5,C_SCHEME_FALSE);}}

/* k7334 in compile-call in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7336(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,7)))){
C_save_and_reclaim((void *)f_7336,c,av);}
a=C_alloc(33);
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7303,a[2]=((C_word)li132),tmp=(C_word)a,a+=3,tmp);
t4=(
  f_7303(t2,C_fix(0))
);
switch(t4){
case C_SCHEME_FALSE:
/* eval.scm:681: ##sys#syntax-error/context */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[21]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[21]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[147];
av2[3]=((C_word*)t0)[2];
tp(4,av2);}
case C_fix(0):
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7358,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,a[8]=((C_word)li133),tmp=(C_word)a,a+=9,tmp);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}
case C_fix(1):
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7377,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,a[8]=((C_word*)t0)[3],tmp=(C_word)a,a+=9,tmp);
/* eval.scm:685: compile */
t6=((C_word*)((C_word*)t0)[8])[1];
f_3762(t6,t5,C_slot(t2,C_fix(0)),((C_word*)t0)[7],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE);
case C_fix(2):
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7405,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=t2,tmp=(C_word)a,a+=11,tmp);
/* eval.scm:689: compile */
t6=((C_word*)((C_word*)t0)[8])[1];
f_3762(t6,t5,C_slot(t2,C_fix(0)),((C_word*)t0)[7],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE);
case C_fix(3):
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7441,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[8],a[10]=t2,tmp=(C_word)a,a+=11,tmp);
/* eval.scm:694: compile */
t6=((C_word*)((C_word*)t0)[8])[1];
f_3762(t6,t5,C_slot(t2,C_fix(0)),((C_word*)t0)[7],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE);
case C_fix(4):
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7485,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=t2,tmp=(C_word)a,a+=11,tmp);
/* eval.scm:700: compile */
t6=((C_word*)((C_word*)t0)[8])[1];
f_3762(t6,t5,C_slot(t2,C_fix(0)),((C_word*)t0)[7],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE);
default:
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7532,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word)li138),tmp=(C_word)a,a+=7,tmp);
t10=C_i_check_list_2(t2,lf[42]);
t11=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7542,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7605,a[2]=t7,a[3]=t13,a[4]=t9,a[5]=t8,a[6]=((C_word)li142),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_7605(t15,t11,t2);}}

/* f_7358 in k7334 in compile-call in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7358(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7358,c,av);}
a=C_alloc(8);
t3=(
/* eval.scm:683: emit-trace-info */
  f_3732(C_a_i(&a,5),((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t2)
);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7365,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=((C_word*)t0)[7];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k7363 */
static void C_ccall f_7365(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7365,c,av);}
/* eval.scm:682: g1275 */
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* k7375 in k7334 in compile-call in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7377(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_7377,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7378,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word)li134),tmp=(C_word)a,a+=10,tmp);
t3=((C_word*)t0)[8];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_7378 in k7375 in k7334 in compile-call in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7378(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_7378,c,av);}
a=C_alloc(10);
t3=(
/* eval.scm:687: emit-trace-info */
  f_3732(C_a_i(&a,5),((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t2)
);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7385,a[2]=t1,a[3]=((C_word*)t0)[7],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=((C_word*)t0)[8];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k7383 */
static void C_ccall f_7385(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7385,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7392,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];{
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

/* k7390 in k7383 */
static void C_ccall f_7392(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7392,c,av);}
/* eval.scm:686: g1280 */
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

/* k7403 in k7334 in compile-call in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7405(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,7)))){
C_save_and_reclaim((void *)f_7405,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7408,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* eval.scm:690: compile */
t3=((C_word*)((C_word*)t0)[9])[1];
f_3762(t3,t2,C_u_i_list_ref(((C_word*)t0)[10],C_fix(1)),((C_word*)t0)[7],C_SCHEME_FALSE,((C_word*)t0)[4],((C_word*)t0)[6],C_SCHEME_FALSE);}

/* k7406 in k7403 in k7334 in compile-call in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7408(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_7408,c,av);}
a=C_alloc(11);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7409,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word)li135),tmp=(C_word)a,a+=11,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_7409 in k7406 in k7403 in k7334 in compile-call in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7409(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_7409,c,av);}
a=C_alloc(11);
t3=(
/* eval.scm:692: emit-trace-info */
  f_3732(C_a_i(&a,5),((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t2)
);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7416,a[2]=t1,a[3]=((C_word*)t0)[7],a[4]=t2,a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
t5=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k7414 */
static void C_ccall f_7416(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_7416,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7423,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[5];{
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

/* k7421 in k7414 */
static void C_ccall f_7423(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_7423,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7427,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[4];{
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

/* k7425 in k7421 in k7414 */
static void C_ccall f_7427(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7427,c,av);}
/* eval.scm:691: g1286 */
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

/* k7439 in k7334 in compile-call in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7441(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,7)))){
C_save_and_reclaim((void *)f_7441,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7444,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* eval.scm:695: compile */
t3=((C_word*)((C_word*)t0)[9])[1];
f_3762(t3,t2,C_u_i_list_ref(((C_word*)t0)[10],C_fix(1)),((C_word*)t0)[6],C_SCHEME_FALSE,((C_word*)t0)[3],((C_word*)t0)[5],C_SCHEME_FALSE);}

/* k7442 in k7439 in k7334 in compile-call in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7444(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,7)))){
C_save_and_reclaim((void *)f_7444,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7447,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* eval.scm:696: compile */
t3=((C_word*)((C_word*)t0)[10])[1];
f_3762(t3,t2,C_u_i_list_ref(((C_word*)t0)[11],C_fix(2)),((C_word*)t0)[6],C_SCHEME_FALSE,((C_word*)t0)[3],((C_word*)t0)[5],C_SCHEME_FALSE);}

/* k7445 in k7442 in k7439 in k7334 in compile-call in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7447(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_7447,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7448,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word)li136),tmp=(C_word)a,a+=12,tmp);
t3=((C_word*)t0)[10];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_7448 in k7445 in k7442 in k7439 in k7334 in compile-call in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7448(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_7448,c,av);}
a=C_alloc(12);
t3=(
/* eval.scm:698: emit-trace-info */
  f_3732(C_a_i(&a,5),((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t2)
);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7455,a[2]=t1,a[3]=((C_word*)t0)[7],a[4]=t2,a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],tmp=(C_word)a,a+=7,tmp);
t5=((C_word*)t0)[10];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k7453 */
static void C_ccall f_7455(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_7455,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7462,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[6];{
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

/* k7460 in k7453 */
static void C_ccall f_7462(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_7462,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7466,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[6];{
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

/* k7464 in k7460 in k7453 */
static void C_ccall f_7466(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_7466,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7470,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[5];{
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

/* k7468 in k7464 in k7460 in k7453 */
static void C_ccall f_7470(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7470,c,av);}
/* eval.scm:697: g1293 */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
av2[4]=t1;
((C_proc)C_fast_retrieve_proc(t2))(5,av2);}}

/* k7483 in k7334 in compile-call in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7485(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,7)))){
C_save_and_reclaim((void *)f_7485,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7488,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* eval.scm:701: compile */
t3=((C_word*)((C_word*)t0)[9])[1];
f_3762(t3,t2,C_u_i_list_ref(((C_word*)t0)[10],C_fix(1)),((C_word*)t0)[7],C_SCHEME_FALSE,((C_word*)t0)[4],((C_word*)t0)[6],C_SCHEME_FALSE);}

/* k7486 in k7483 in k7334 in compile-call in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7488(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,7)))){
C_save_and_reclaim((void *)f_7488,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7491,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* eval.scm:702: compile */
t3=((C_word*)((C_word*)t0)[10])[1];
f_3762(t3,t2,C_u_i_list_ref(((C_word*)t0)[11],C_fix(2)),((C_word*)t0)[7],C_SCHEME_FALSE,((C_word*)t0)[4],((C_word*)t0)[6],C_SCHEME_FALSE);}

/* k7489 in k7486 in k7483 in k7334 in compile-call in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7491(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,7)))){
C_save_and_reclaim((void *)f_7491,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7494,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* eval.scm:703: compile */
t3=((C_word*)((C_word*)t0)[11])[1];
f_3762(t3,t2,C_u_i_list_ref(((C_word*)t0)[12],C_fix(3)),((C_word*)t0)[7],C_SCHEME_FALSE,((C_word*)t0)[4],((C_word*)t0)[6],C_SCHEME_FALSE);}

/* k7492 in k7489 in k7486 in k7483 in k7334 in compile-call in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7494(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_7494,c,av);}
a=C_alloc(13);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7495,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word)li137),tmp=(C_word)a,a+=13,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_7495 in k7492 in k7489 in k7486 in k7483 in k7334 in compile-call in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7495(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_7495,c,av);}
a=C_alloc(13);
t3=(
/* eval.scm:705: emit-trace-info */
  f_3732(C_a_i(&a,5),((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t2)
);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7502,a[2]=t1,a[3]=((C_word*)t0)[7],a[4]=t2,a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],tmp=(C_word)a,a+=8,tmp);
t5=((C_word*)t0)[11];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k7500 */
static void C_ccall f_7502(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7502,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7509,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[7];{
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

/* k7507 in k7500 */
static void C_ccall f_7509(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7509,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7513,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[7];{
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

/* k7511 in k7507 in k7500 */
static void C_ccall f_7513(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7513,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7517,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[7];{
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

/* k7515 in k7511 in k7507 in k7500 */
static void C_ccall f_7517(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_7517,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7521,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[6];{
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

/* k7519 in k7515 in k7511 in k7507 in k7500 */
static void C_ccall f_7521(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_7521,c,av);}
/* eval.scm:704: g1301 */
t2=((C_word*)t0)[2];{
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

/* g1313 in k7334 in compile-call in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_fcall f_7532(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,7)))){
C_save_and_reclaim_args((void *)trf_7532,3,t0,t1,t2);}
/* eval.scm:707: compile */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3762(t3,t1,t2,((C_word*)t0)[3],C_SCHEME_FALSE,((C_word*)t0)[4],((C_word*)t0)[5],C_SCHEME_FALSE);}

/* k7540 in k7334 in compile-call in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7542(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_7542,c,av);}
a=C_alloc(10);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7543,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,a[8]=((C_word*)t0)[8],a[9]=((C_word)li141),tmp=(C_word)a,a+=10,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_7543 in k7540 in k7334 in compile-call in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7543(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_7543,c,av);}
a=C_alloc(10);
t3=(
/* eval.scm:709: emit-trace-info */
  f_3732(C_a_i(&a,5),((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t2)
);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7554,a[2]=t2,a[3]=((C_word*)t0)[7],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=((C_word*)t0)[8];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k7552 */
static void C_ccall f_7554(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_7554,c,av);}
a=C_alloc(22);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7559,a[2]=((C_word*)t0)[2],a[3]=((C_word)li139),tmp=(C_word)a,a+=4,tmp);
t7=C_i_check_list_2(((C_word*)t0)[3],lf[42]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7569,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7571,a[2]=t4,a[3]=t10,a[4]=t6,a[5]=t5,a[6]=((C_word)li140),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_7571(t12,t8,((C_word*)t0)[3]);}

/* g1341 in k7552 */
static void C_fcall f_7559(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_7559,3,t0,t1,t2);}
t3=t2;{
C_word av2[3];
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7567 in k7552 */
static void C_ccall f_7569(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7569,c,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
C_apply(4,av2);}}

/* map-loop1335 in k7552 */
static void C_fcall f_7571(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7571,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7596,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:710: g1341 */
t4=((C_word*)t0)[4];
f_7559(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7594 in map-loop1335 in k7552 */
static void C_ccall f_7596(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7596,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7571(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop1307 in k7334 in compile-call in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_fcall f_7605(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7605,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7630,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:707: g1313 */
t4=((C_word*)t0)[4];
f_7532(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7628 in map-loop1307 in k7334 in compile-call in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7630(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7630,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7605(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* f_7653 in compile-call in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7653(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7653,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7670 in chicken.eval#compile-to-closure in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7672(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_7672,c,av);}
/* eval.scm:712: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3762(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],C_SCHEME_FALSE,C_fixnum_greaterp(t1,C_fix(0)),((C_word*)t0)[6],((C_word*)t0)[7]);}

/* ##sys#eval/meta in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7722(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_7722,c,av);}
a=C_alloc(7);
t3=*((C_word*)lf[77]+1);
t4=*((C_word*)lf[89]+1);
t5=*((C_word*)lf[9]+1);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7726,a[2]=t5,a[3]=t4,a[4]=t3,a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* eval.scm:718: ##sys#meta-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[148]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[148]+1);
av2[1]=t6;
tp(2,av2);}}

/* k7724 in ##sys#eval/meta in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7726(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7726,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7729,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:719: ##sys#current-meta-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[149]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[149]+1);
av2[1]=t2;
tp(2,av2);}}

/* k7727 in k7724 in ##sys#eval/meta in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7729(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(31,c,4)))){
C_save_and_reclaim((void *)f_7729,c,av);}
a=C_alloc(31);
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=((C_word*)t0)[2];
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=t1;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_TRUE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7734,a[2]=t3,a[3]=t5,a[4]=t7,a[5]=t9,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word)li146),tmp=(C_word)a,a+=10,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7777,a[2]=((C_word*)t0)[6],a[3]=((C_word)li149),tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7809,a[2]=t3,a[3]=t5,a[4]=t7,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word)li150),tmp=(C_word)a,a+=9,tmp);
/* eval.scm:717: ##sys#dynamic-wind */
t13=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t13;
av2[1]=((C_word*)t0)[7];
av2[2]=t10;
av2[3]=t11;
av2[4]=t12;
((C_proc)(void*)(*((C_word*)t13+1)))(5,av2);}}

/* a7733 in k7727 in k7724 in ##sys#eval/meta in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7734(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_7734,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7738,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)((C_word*)t0)[5])[1])){
/* eval.scm:717: ##sys#current-module1375 */
t3=((C_word*)t0)[8];{
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
f_7738(2,av2);}}}

/* k7736 in a7733 in k7727 in k7724 in ##sys#eval/meta in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7738(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_7738,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7741,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,tmp=(C_word)a,a+=11,tmp);
if(C_truep(((C_word*)((C_word*)t0)[5])[1])){
/* eval.scm:717: ##sys#macro-environment1376 */
t3=((C_word*)t0)[8];{
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
f_7741(2,av2);}}}

/* k7739 in k7736 in a7733 in k7727 in k7724 in ##sys#eval/meta in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7741(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_7741,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7744,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
if(C_truep(((C_word*)((C_word*)t0)[5])[1])){
/* eval.scm:717: ##sys#current-environment1377 */
t3=((C_word*)t0)[7];{
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
f_7744(2,av2);}}}

/* k7742 in k7739 in k7736 in a7733 in k7727 in k7724 in ##sys#eval/meta in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7744(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_7744,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7748,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* eval.scm:717: ##sys#current-module1375 */
t3=((C_word*)t0)[10];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k7746 in k7742 in k7739 in k7736 in a7733 in k7727 in k7724 in ##sys#eval/meta in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7748(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_7748,c,av);}
a=C_alloc(12);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7752,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],tmp=(C_word)a,a+=12,tmp);
/* eval.scm:717: ##sys#macro-environment1376 */
t4=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k7750 in k7746 in k7742 in k7739 in k7736 in a7733 in k7727 in k7724 in ##sys#eval/meta in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7752(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_7752,c,av);}
a=C_alloc(11);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7756,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
/* eval.scm:717: ##sys#current-environment1377 */
t4=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k7754 in k7750 in k7746 in k7742 in k7739 in k7736 in a7733 in k7727 in k7724 in ##sys#eval/meta in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7756(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_7756,c,av);}
a=C_alloc(8);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7759,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:717: ##sys#current-module1375 */
t4=((C_word*)t0)[9];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[10];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}

/* k7757 in k7754 in k7750 in k7746 in k7742 in k7739 in k7736 in a7733 in k7727 in k7724 in ##sys#eval/meta in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7759(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_7759,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7762,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:717: ##sys#macro-environment1376 */
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

/* k7760 in k7757 in k7754 in k7750 in k7746 in k7742 in k7739 in k7736 in a7733 in k7727 in k7724 in ##sys#eval/meta in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7762(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_7762,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7765,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:717: ##sys#current-environment1377 */
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

/* k7763 in k7760 in k7757 in k7754 in k7750 in k7746 in k7742 in k7739 in k7736 in a7733 in k7727 in k7724 in ##sys#eval/meta in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7765(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7765,c,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a7776 in k7727 in k7724 in ##sys#eval/meta in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7777(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_7777,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7783,a[2]=((C_word*)t0)[2],a[3]=((C_word)li147),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7792,a[2]=((C_word)li148),tmp=(C_word)a,a+=3,tmp);
/* eval.scm:720: scheme#dynamic-wind */
t4=*((C_word*)lf[150]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=*((C_word*)lf[151]+1);
av2[3]=t2;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* a7782 in a7776 in k7727 in k7724 in ##sys#eval/meta in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7783(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_7783,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7787,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:723: compile-to-closure */
f_3547(t2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST,C_a_i_list(&a,4,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_TRUE));}

/* k7785 in a7782 in a7776 in k7727 in k7724 in ##sys#eval/meta in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7787(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7787,c,av);}
/* eval.scm:722: g1409 */
t2=t1;{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_END_OF_LIST;
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* a7791 in a7776 in k7727 in k7724 in ##sys#eval/meta in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7792(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_7792,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7796,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7807,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:735: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[9]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t3;
tp(2,av2);}}

/* k7794 in a7791 in a7776 in k7727 in k7724 in ##sys#eval/meta in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7796(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7796,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7803,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:736: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[89]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[89]+1);
av2[1]=t2;
tp(2,av2);}}

/* k7801 in k7794 in a7791 in a7776 in k7727 in k7724 in ##sys#eval/meta in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7803(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7803,c,av);}
/* eval.scm:736: ##sys#meta-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[148]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[148]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k7805 in a7791 in a7776 in k7727 in k7724 in ##sys#eval/meta in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7807(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7807,c,av);}
/* eval.scm:735: ##sys#current-meta-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[149]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[149]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* a7808 in k7727 in k7724 in ##sys#eval/meta in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7809(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_7809,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7813,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* eval.scm:717: ##sys#current-module1375 */
t3=((C_word*)t0)[7];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k7811 in a7808 in k7727 in k7724 in ##sys#eval/meta in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7813(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_7813,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7816,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* eval.scm:717: ##sys#macro-environment1376 */
t3=((C_word*)t0)[7];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k7814 in k7811 in a7808 in k7727 in k7724 in ##sys#eval/meta in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7816(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_7816,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7819,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* eval.scm:717: ##sys#current-environment1377 */
t3=((C_word*)t0)[7];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k7817 in k7814 in k7811 in a7808 in k7727 in k7724 in ##sys#eval/meta in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7819(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_7819,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7822,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* eval.scm:717: ##sys#current-module1375 */
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
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k7820 in k7817 in k7814 in k7811 in a7808 in k7727 in k7724 in ##sys#eval/meta in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7822(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_7822,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7825,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* eval.scm:717: ##sys#macro-environment1376 */
t3=((C_word*)t0)[10];{
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

/* k7823 in k7820 in k7817 in k7814 in k7811 in a7808 in k7727 in k7724 in ##sys#eval/meta in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7825(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_7825,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7828,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* eval.scm:717: ##sys#current-environment1377 */
t3=((C_word*)t0)[9];{
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

/* k7826 in k7823 in k7820 in k7817 in k7814 in k7811 in a7808 in k7727 in k7724 in ##sys#eval/meta in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7828(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7828,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,((C_word*)t0)[5]);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,((C_word*)t0)[7]);
t5=((C_word*)t0)[8];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7835(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_7835,c,av);}
a=C_alloc(15);
t2=C_mutate((C_word*)lf[152]+1 /* (set! chicken.eval#eval-handler ...) */,t1);
t3=C_mutate((C_word*)lf[153]+1 /* (set! scheme#eval ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7837,a[2]=((C_word)li152),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[154]+1 /* (set! chicken.eval#module-environment ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7847,a[2]=((C_word)li153),tmp=(C_word)a,a+=3,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7854,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11341,a[2]=((C_word)li260),tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11409,a[2]=((C_word)li261),tmp=(C_word)a,a+=3,tmp);
/* eval.scm:775: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t5;
av2[2]=t6;
av2[3]=t7;
C_call_with_values(4,av2);}}

/* scheme#eval in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7837(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_7837,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7845,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:765: eval-handler */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[152]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[152]+1);
av2[1]=t4;
tp(2,av2);}}

/* k7843 in scheme#eval in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7845(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7845,c,av);}{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
C_apply(5,av2);}}

/* chicken.eval#module-environment in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7847(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7847,c,av);}
/* eval.scm:770: chicken.module#module-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[155]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[155]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7854(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_7854,c,av);}
a=C_alloc(18);
t2=C_mutate((C_word*)lf[60]+1 /* (set! ##sys#decompose-lambda-list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7856,a[2]=((C_word)li156),tmp=(C_word)a,a+=3,tmp));
t3=C_a_i_record4(&a,4,lf[158],lf[159],C_SCHEME_FALSE,C_SCHEME_FALSE);
t4=C_mutate((C_word*)lf[160]+1 /* (set! scheme#interaction-environment ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7941,a[2]=t3,a[3]=((C_word)li157),tmp=(C_word)a,a+=4,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7945,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11325,a[2]=((C_word)li254),tmp=(C_word)a,a+=3,tmp);
/* eval.scm:822: chicken.base#set-record-printer! */
t7=*((C_word*)lf[362]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=lf[158];
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* ##sys#decompose-lambda-list in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7856(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,5)))){
C_save_and_reclaim((void *)f_7856,c,av);}
a=C_alloc(12);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7859,a[2]=t2,a[3]=((C_word)li154),tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7869,a[2]=t3,a[3]=t4,a[4]=t6,a[5]=((C_word)li155),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_7869(t8,t1,t2,C_SCHEME_END_OF_LIST,C_fix(0));}

/* err in ##sys#decompose-lambda-list in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_fcall f_7859(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_7859,2,t0,t1);}
t2=C_set_block_item(lf[156] /* ##sys#syntax-error-culprit */,0,C_SCHEME_FALSE);
/* eval.scm:807: ##sys#syntax-error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[62]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[62]+1);
av2[1]=t1;
av2[2]=lf[157];
av2[3]=((C_word*)t0)[2];
tp(4,av2);}}

/* loop in ##sys#decompose-lambda-list in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_fcall f_7869(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_7869,5,t0,t1,t2,t3,t4);}
a=C_alloc(9);
t5=C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7883,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:810: reverse */
t7=*((C_word*)lf[96]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
if(C_truep(C_i_not(C_blockp(t2)))){
/* eval.scm:811: err */
t6=((C_word*)t0)[3];
f_7859(t6,t1);}
else{
if(C_truep(C_symbolp(t2))){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7902,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t7=C_a_i_cons(&a,2,t2,t3);
/* eval.scm:812: reverse */
t8=*((C_word*)lf[96]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t6;
av2[2]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
if(C_truep(C_i_not(C_pairp(t2)))){
/* eval.scm:813: err */
t6=((C_word*)t0)[3];
f_7859(t6,t1);}
else{
t6=C_slot(t2,C_fix(1));
t7=C_slot(t2,C_fix(0));
t8=C_a_i_cons(&a,2,t7,t3);
/* eval.scm:814: loop */
t10=t1;
t11=t6;
t12=t8;
t13=C_fixnum_plus(t4,C_fix(1));
t1=t10;
t2=t11;
t3=t12;
t4=t13;
goto loop;}}}}}

/* k7881 in loop in ##sys#decompose-lambda-list in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7883(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7883,c,av);}
/* eval.scm:810: k */
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
av2[3]=((C_word*)t0)[4];
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t2))(5,av2);}}

/* k7900 in loop in ##sys#decompose-lambda-list in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7902(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7902,c,av);}
/* eval.scm:812: k */
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
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t2))(5,av2);}}

/* scheme#interaction-environment in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7941(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7941,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7945(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_7945,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7948,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:828: chicken.module#module-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[155]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[155]+1);
av2[1]=t2;
av2[2]=lf[357];
av2[3]=lf[358];
tp(4,av2);}}

/* k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7948(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_7948,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7951,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:829: chicken.module#module-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[155]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[155]+1);
av2[1]=t2;
av2[2]=lf[355];
av2[3]=lf[356];
tp(4,av2);}}

/* k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7951(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_7951,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7954,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:830: chicken.module#module-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[155]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[155]+1);
av2[1]=t2;
av2[2]=lf[353];
av2[3]=lf[354];
tp(4,av2);}}

/* k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7954(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_7954,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7957,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:831: chicken.module#module-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[155]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[155]+1);
av2[1]=t2;
av2[2]=lf[351];
av2[3]=lf[352];
tp(4,av2);}}

/* k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7957(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_7957,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7959,a[2]=((C_word)li159),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11319,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* eval.scm:855: strip */
f_7959(t3,C_slot(((C_word*)t0)[2],C_fix(2)));}

/* strip in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_fcall f_7959(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_7959,2,t1,t2);}
a=C_alloc(6);
t3=C_i_check_list_2(t2,lf[161]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7968,a[2]=t5,a[3]=((C_word)li158),tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_7968(t7,t1,t2);}

/* foldr1534 in strip in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_fcall f_7968(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_7968,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7999,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=t4;
t7=C_slot(t2,C_fix(1));
t1=t6;
t2=t7;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7997 in foldr1534 in strip in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_7999(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7999,c,av);}
a=C_alloc(3);
t2=C_i_car(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep((C_truep(C_eqp(t2,lf[162]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[163]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[164]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[165]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[86]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[166]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[167]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[168]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[169]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[170]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[99]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[171]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[172]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[173]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))))))))))))))?t1:C_a_i_cons(&a,2,((C_word*)t0)[2],t1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* scheme#scheme-report-environment in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_8017(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_8017,c,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8021,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:861: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[177]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[177]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[175];
tp(4,av2);}}

/* k8019 in scheme#scheme-report-environment in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_8021(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8021,c,av);}
switch(((C_word*)t0)[2]){
case C_fix(4):
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}
case C_fix(5):
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}
default:
/* eval.scm:866: ##sys#error */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[175];
av2[3]=lf[176];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* scheme#null-environment in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_8042(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_8042,c,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8046,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:871: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[177]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[177]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[179];
tp(4,av2);}}

/* k8044 in scheme#null-environment in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_8046(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8046,c,av);}
switch(((C_word*)t0)[2]){
case C_fix(4):
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}
case C_fix(5):
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}
default:
/* eval.scm:876: ##sys#error */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[179];
av2[3]=lf[180];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_8068(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_8068,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[182] /* (set! chicken.load#constant2102 ...) */,lf[183]);
t3=C_mutate(&lf[184] /* (set! chicken.load#constant2105 ...) */,lf[185]);
t4=C_mutate(&lf[186] /* (set! chicken.load#constant2135 ...) */,lf[187]);
t5=C_mutate(&lf[188] /* (set! chicken.load#constant2144 ...) */,lf[189]);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9358,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11291,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:929: chicken.platform#software-type */
t8=*((C_word*)lf[350]+1);{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* loop in chicken.load#provided? in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in ... */
static void C_fcall f_8445(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_8445,3,t0,t1,t2);}
a=C_alloc(5);
t3=C_i_nullp(t2);
if(C_truep(t3)){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8467,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* mini-srfi-1.scm:82: pred */
t5=((C_word*)t0)[3];{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=C_i_car(t2);
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}}

/* k8465 in loop in chicken.load#provided? in k10055 in k10046 in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in ... */
static void C_ccall f_8467(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8467,c,av);}
if(C_truep(C_i_not(t1))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* mini-srfi-1.scm:83: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_8445(t2,((C_word*)t0)[2],C_u_i_cdr(((C_word*)t0)[4]));}}

/* k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_fcall f_9358(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_9358,2,t0,t1);}
a=C_alloc(6);
t2=C_mutate(&lf[190] /* (set! chicken.load#load-library-extension ...) */,t1);
t3=C_mutate((C_word*)lf[191]+1 /* (set! ##sys#load-dynamic-extension ...) */,lf[186]);
t4=C_mutate((C_word*)lf[192]+1 /* (set! chicken.load#core-unit? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9361,a[2]=((C_word)li162),tmp=(C_word)a,a+=3,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9376,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:949: chicken.platform#software-version */
t6=*((C_word*)lf[341]+1);{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* chicken.load#core-unit? in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_9361(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9361,c,av);}
t3=C_i_memq(t2,lf[184]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=(C_truep(t3)?t3:C_i_assq(t2,lf[182]));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_9376(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_9376,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9379,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_eqp(t1,lf[338]);
if(C_truep(t3)){
t4=t2;
f_9379(t4,lf[339]);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11248,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11252,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t6=*((C_word*)lf[236]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_LIB_NAME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_fcall f_9379(C_word t0,C_word t1){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,4)))){
C_save_and_reclaim_args((void *)trf_9379,2,t0,t1);}
a=C_alloc(15);
t2=C_mutate(&lf[193] /* (set! chicken.load#default-dynamic-load-libraries ...) */,t1);
t3=C_mutate((C_word*)lf[93]+1 /* (set! ##sys#provide ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9381,a[2]=((C_word)li163),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[194]+1 /* (set! ##sys#provided? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9384,a[2]=((C_word)li164),tmp=(C_word)a,a+=3,tmp));
t5=(C_truep(*((C_word*)lf[195]+1))?lf[196]:lf[197]);
t6=C_mutate(&lf[198] /* (set! chicken.load#path-separators ...) */,t5);
t7=C_mutate(&lf[199] /* (set! chicken.load#path-separator-index/right ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9391,a[2]=((C_word)li166),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate(&lf[200] /* (set! chicken.load#make-relative-pathname ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9426,a[2]=((C_word)li167),tmp=(C_word)a,a+=3,tmp));
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9469,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:984: chicken.base#make-parameter */
t10=*((C_word*)lf[335]+1);{
C_word av2[3];
av2[0]=t10;
av2[1]=t9;
av2[2]=C_i_debug_modep();
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}

/* ##sys#provide in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_9381(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,1)))){
C_save_and_reclaim((void *)f_9381,c,av);}
a=C_alloc(8);
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_provide(&a,1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* ##sys#provided? in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_9384(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9384,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_providedp(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.load#path-separator-index/right in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_fcall f_9391(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_9391,2,t1,t2);}
a=C_alloc(4);
t3=C_block_size(t2);
t4=C_fixnum_difference(t3,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9401,a[2]=t2,a[3]=((C_word)li165),tmp=(C_word)a,a+=4,tmp);
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=(
  f_9401(t5,t4)
);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* loop in chicken.load#path-separator-index/right in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 in ... */
static C_word C_fcall f_9401(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
t2=C_subchar(((C_word*)t0)[2],t1);
t3=lf[198];
if(C_truep(C_u_i_memq(t2,lf[198]))){
return(t1);}
else{
if(C_truep(C_fixnum_lessp(C_fix(0),t1))){
t5=C_fixnum_difference(t1,C_fix(1));
t1=t5;
goto loop;}
else{
return(C_SCHEME_FALSE);}}}

/* chicken.load#make-relative-pathname in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_fcall f_9426(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_9426,3,t1,t2,t3);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9430,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_stringp(t2))){
t5=C_block_size(t3);
if(C_truep(C_i_fixnum_positivep(t5))){
t6=C_subchar(t3,C_fix(0));
t7=lf[198];
if(C_truep(C_i_not(C_u_i_memq(t6,lf[198])))){
/* eval.scm:978: path-separator-index/right */
f_9391(t4,t2);}
else{
t8=t4;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
f_9430(2,av2);}}}
else{
t6=t4;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
f_9430(2,av2);}}}
else{
t5=t4;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
f_9430(2,av2);}}}

/* k9428 in chicken.load#make-relative-pathname in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 in ... */
static void C_ccall f_9430(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_9430,c,av);}
a=C_alloc(4);
if(C_truep(C_i_not(t1))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9443,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:979: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[203]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[203]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(0);
av2[4]=t1;
tp(5,av2);}}}

/* k9441 in k9428 in chicken.load#make-relative-pathname in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in ... */
static void C_ccall f_9443(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9443,c,av);}
/* eval.scm:979: scheme#string-append */
t2=*((C_word*)lf[201]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[202];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 */
static void C_ccall f_9469(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(25,c,5)))){
C_save_and_reclaim((void *)f_9469,c,av);}
a=C_alloc(25);
t2=C_mutate((C_word*)lf[204]+1 /* (set! chicken.load#load-verbose ...) */,t1);
t3=C_set_block_item(lf[205] /* ##sys#current-load-filename */,0,C_SCHEME_FALSE);
t4=C_set_block_item(lf[206] /* ##sys#dload-disabled */,0,C_SCHEME_FALSE);
t5=C_mutate((C_word*)lf[207]+1 /* (set! chicken.load#set-dynamic-load-mode! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9473,a[2]=((C_word)li169),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate(&lf[216] /* (set! chicken.load#c-toplevel ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9573,a[2]=((C_word)li170),tmp=(C_word)a,a+=3,tmp));
t7=*((C_word*)lf[153]+1);
t8=C_mutate(&lf[223] /* (set! chicken.load#load/internal ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9587,a[2]=t7,a[3]=((C_word)li185),tmp=(C_word)a,a+=4,tmp));
t9=C_mutate((C_word*)lf[252]+1 /* (set! scheme#load ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9989,a[2]=((C_word)li186),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[253]+1 /* (set! chicken.load#load-relative ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10004,a[2]=((C_word)li187),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[254]+1 /* (set! chicken.load#load-noisily ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10022,a[2]=((C_word)li191),tmp=(C_word)a,a+=3,tmp));
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10048,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_mk_bool(C_USES_SONAME))){
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11236,a[2]=t12,tmp=(C_word)a,a+=3,tmp);
t14=C_fix((C_word)C_BINARY_VERSION);
/* ##sys#fixnum->string */
t15=*((C_word*)lf[337]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t15;
av2[1]=t13;
av2[2]=t14;
av2[3]=C_fix(10);
((C_proc)(void*)(*((C_word*)t15+1)))(4,av2);}}
else{
t13=t12;{
C_word *av2=av;
av2[0]=t13;
av2[1]=lf[190];
f_10048(2,av2);}}}

/* chicken.load#set-dynamic-load-mode! in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 in ... */
static void C_ccall f_9473(C_word c,C_word *av){
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
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(20,c,3)))){
C_save_and_reclaim((void *)f_9473,c,av);}
a=C_alloc(20);
t3=C_i_pairp(t2);
t4=(C_truep(t3)?t2:C_a_i_list1(&a,1,t2));
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_TRUE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9480,a[2]=t1,a[3]=t6,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9485,a[2]=t11,a[3]=t8,a[4]=t6,a[5]=((C_word)li168),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_9485(t13,t9,t4);}

/* k9478 in chicken.load#set-dynamic-load-mode! in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in ... */
static void C_ccall f_9480(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9480,c,av);}
/* eval.scm:1004: ##sys#set-dlopen-flags! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[208]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[208]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=((C_word*)((C_word*)t0)[4])[1];
tp(4,av2);}}

/* loop in chicken.load#set-dynamic-load-mode! in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in ... */
static void C_fcall f_9485(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_9485,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9498,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=C_eqp(t3,lf[209]);
if(C_truep(t5)){
t6=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_TRUE);
/* eval.scm:1003: loop */
t11=t1;
t12=C_slot(t2,C_fix(1));
t1=t11;
t2=t12;
goto loop;}
else{
t6=C_eqp(t3,lf[210]);
if(C_truep(t6)){
t7=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_FALSE);
/* eval.scm:1003: loop */
t11=t1;
t12=C_slot(t2,C_fix(1));
t1=t11;
t2=t12;
goto loop;}
else{
t7=C_eqp(t3,lf[211]);
if(C_truep(t7)){
t8=C_set_block_item(((C_word*)t0)[4],0,C_SCHEME_FALSE);
/* eval.scm:1003: loop */
t11=t1;
t12=C_slot(t2,C_fix(1));
t1=t11;
t2=t12;
goto loop;}
else{
t8=C_eqp(t3,lf[212]);
if(C_truep(t8)){
t9=C_set_block_item(((C_word*)t0)[4],0,C_SCHEME_TRUE);
/* eval.scm:1003: loop */
t11=t1;
t12=C_slot(t2,C_fix(1));
t1=t11;
t2=t12;
goto loop;}
else{
/* eval.scm:1002: ##sys#signal-hook */
t9=*((C_word*)lf[213]+1);{
C_word av2[5];
av2[0]=t9;
av2[1]=t4;
av2[2]=lf[214];
av2[3]=lf[215];
av2[4]=C_slot(t2,C_fix(0));
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}}}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k9496 in loop in chicken.load#set-dynamic-load-mode! in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in ... */
static void C_ccall f_9498(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9498,c,av);}
/* eval.scm:1003: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_9485(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k9565 in chicken.load#c-toplevel in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in ... */
static void C_ccall f_9567(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9567,c,av);}
/* eval.scm:1009: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[218]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[218]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[221];
tp(4,av2);}}

/* chicken.load#c-toplevel in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 in ... */
static void C_fcall f_9573(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,3)))){
C_save_and_reclaim_args((void *)trf_9573,3,t1,t2,t3);}
a=C_alloc(10);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9581,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9585,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_not(t2))){
/* eval.scm:1014: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[218]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[218]+1);
av2[1]=t4;
av2[2]=lf[219];
av2[3]=lf[220];
tp(4,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9567,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1010: chicken.internal#string->c-identifier */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[222]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[222]+1);
av2[1]=t6;
av2[2]=C_slot(t2,C_fix(1));
tp(3,av2);}}}

/* k9579 in chicken.load#c-toplevel in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in ... */
static void C_ccall f_9581(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9581,c,av);}
/* eval.scm:1014: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[217]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[217]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k9583 in chicken.load#c-toplevel in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in ... */
static void C_ccall f_9585(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9585,c,av);}
/* eval.scm:1014: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[218]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[218]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[219];
av2[3]=t1;
tp(4,av2);}}

/* chicken.load#load/internal in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 in ... */
static void C_fcall f_9587(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(23,0,3)))){
C_save_and_reclaim_args((void *)trf_9587,5,t0,t1,t2,t3,t4);}
a=C_alloc(23);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_SCHEME_FALSE:C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=C_i_nullp(t12);
t14=(C_truep(t13)?C_SCHEME_FALSE:C_i_car(t12));
t15=C_i_nullp(t12);
t16=(C_truep(t15)?C_SCHEME_END_OF_LIST:C_i_cdr(t12));
t17=C_i_nullp(t16);
t18=(C_truep(t17)?C_SCHEME_FALSE:C_i_car(t16));
t19=C_i_nullp(t16);
t20=(C_truep(t19)?C_SCHEME_END_OF_LIST:C_i_cdr(t16));
t21=C_SCHEME_UNDEFINED;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=C_SCHEME_UNDEFINED;
t24=(*a=C_VECTOR_TYPE|1,a[1]=t23,tmp=(C_word)a,a+=2,tmp);
t25=C_SCHEME_UNDEFINED;
t26=(*a=C_VECTOR_TYPE|1,a[1]=t25,tmp=(C_word)a,a+=2,tmp);
t27=C_SCHEME_UNDEFINED;
t28=(*a=C_VECTOR_TYPE|1,a[1]=t27,tmp=(C_word)a,a+=2,tmp);
t29=(C_truep(t3)?t3:((C_word*)t0)[2]);
t30=C_set_block_item(t22,0,t29);
t31=C_set_block_item(t24,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9630,a[2]=t18,a[3]=((C_word)li171),tmp=(C_word)a,a+=4,tmp));
t32=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9665,a[2]=t26,a[3]=t28,a[4]=t1,a[5]=t10,a[6]=t22,a[7]=t6,a[8]=t14,a[9]=t2,a[10]=t24,tmp=(C_word)a,a+=11,tmp);
if(C_truep(C_i_not(*((C_word*)lf[206]+1)))){
/* eval.scm:1044: chicken.platform#feature? */
t33=*((C_word*)lf[250]+1);{
C_word av2[3];
av2[0]=t33;
av2[1]=t32;
av2[2]=lf[251];
((C_proc)(void*)(*((C_word*)t33+1)))(3,av2);}}
else{
t33=t32;{
C_word av2[2];
av2[0]=t33;
av2[1]=C_SCHEME_FALSE;
f_9665(2,av2);}}}

/* k9623 */
static void C_ccall f_9625(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9625,c,av);}
if(C_truep(t1)){
/* eval.scm:1037: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[217]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[217]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[225];
tp(4,av2);}}
else{
/* eval.scm:1034: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[218]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[218]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=lf[226];
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}}

/* f_9630 in chicken.load#load/internal in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in ... */
static void C_fcall f_9630(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_9630,3,t0,t1,t2);}
a=C_alloc(12);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9634,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9661,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9625,a[2]=t3,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1032: path-separator-index/right */
f_9391(t5,t2);}

/* k9632 */
static void C_ccall f_9634(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_9634,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9637,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9657,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1038: c-toplevel */
f_9573(t3,((C_word*)t0)[3],lf[225]);}

/* k9635 in k9632 */
static void C_ccall f_9637(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_9637,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[3]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9653,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1040: c-toplevel */
f_9573(t2,C_SCHEME_FALSE,lf[225]);}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}}

/* k9651 in k9635 in k9632 */
static void C_ccall f_9653(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9653,c,av);}
/* eval.scm:1040: ##sys#dload */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[224]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[224]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* k9655 in k9632 */
static void C_ccall f_9657(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9657,c,av);}
/* eval.scm:1038: ##sys#dload */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[224]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[224]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* k9659 */
static void C_ccall f_9661(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9661,c,av);}
/* eval.scm:1037: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[217]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[217]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[225];
tp(4,av2);}}

/* k9663 in chicken.load#load/internal in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in ... */
static void C_ccall f_9665(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_9665,c,av);}
a=C_alloc(16);
t2=C_set_block_item(((C_word*)t0)[2],0,t1);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9669,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[2],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9884,a[2]=t3,a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1047: chicken.base#port? */
t5=*((C_word*)lf[249]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k9667 in k9663 in chicken.load#load/internal in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in ... */
static void C_ccall f_9669(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_9669,c,av);}
a=C_alloc(15);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9672,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9881,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1058: load-verbose */
t5=*((C_word*)lf[204]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k9670 in k9667 in k9663 in chicken.load#load/internal in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in ... */
static void C_ccall f_9672(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_9672,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9675,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
if(C_truep(((C_word*)((C_word*)t0)[9])[1])){
/* eval.scm:1064: dload */
t3=((C_word*)((C_word*)t0)[10])[1];
f_9630(t3,t2,((C_word*)((C_word*)t0)[3])[1]);}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_9675(2,av2);}}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_9675(2,av2);}}}

/* k9673 in k9670 in k9667 in k9663 in chicken.load#load/internal in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in ... */
static void C_ccall f_9675(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_9675,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9678,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9683,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word)li184),tmp=(C_word)a,a+=9,tmp);
t4=t3;
f_9683(t4,t2);}}

/* k9676 in k9673 in k9670 in k9667 in k9663 in chicken.load#load/internal in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in ... */
static void C_ccall f_9678(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9678,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a9682 in k9673 in k9670 in k9667 in k9663 in chicken.load#load/internal in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in ... */
static void C_fcall f_9683(C_word t0,C_word t1){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(39,0,4)))){
C_save_and_reclaim_args((void *)trf_9683,2,t0,t1);}
a=C_alloc(39);
t2=C_SCHEME_TRUE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=((C_word*)((C_word*)t0)[2])[1];
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)((C_word*)t0)[2])[1];
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_FALSE;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9689,a[2]=t9,a[3]=t11,a[4]=t13,a[5]=t3,a[6]=t5,a[7]=t7,a[8]=((C_word)li172),tmp=(C_word)a,a+=9,tmp);
t15=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9698,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[7],a[8]=((C_word)li182),tmp=(C_word)a,a+=9,tmp);
t16=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9850,a[2]=t3,a[3]=t5,a[4]=t7,a[5]=t9,a[6]=t11,a[7]=t13,a[8]=((C_word)li183),tmp=(C_word)a,a+=9,tmp);
/* eval.scm:1067: ##sys#dynamic-wind */
t17=*((C_word*)lf[47]+1);{
C_word av2[5];
av2[0]=t17;
av2[1]=t1;
av2[2]=t14;
av2[3]=t15;
av2[4]=t16;
((C_proc)(void*)(*((C_word*)t17+1)))(5,av2);}}

/* a9688 in a9682 in k9673 in k9670 in k9667 in k9663 in chicken.load#load/internal in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in ... */
static void C_ccall f_9689(C_word c,C_word *av){
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
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9689,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[227]+1));
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[205]+1));
t4=C_mutate(((C_word *)((C_word*)t0)[4])+1,*((C_word*)lf[228]+1));
t5=C_mutate((C_word*)lf[227]+1 /* (set! ##sys#read-error-with-line-number ...) */,((C_word*)((C_word*)t0)[5])[1]);
t6=C_mutate((C_word*)lf[205]+1 /* (set! ##sys#current-load-filename ...) */,((C_word*)((C_word*)t0)[6])[1]);
t7=C_mutate((C_word*)lf[228]+1 /* (set! ##sys#current-source-filename ...) */,((C_word*)((C_word*)t0)[7])[1]);
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* a9697 in a9682 in k9673 in k9670 in k9667 in k9663 in chicken.load#load/internal in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in ... */
static void C_ccall f_9698(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_9698,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9702,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
/* eval.scm:1070: open-input-file */
t3=*((C_word*)lf[239]+1);{
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
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[7];
f_9702(2,av2);}}}

/* k9700 in a9697 in a9682 in k9673 in k9670 in k9667 in k9663 in chicken.load#load/internal in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in ... */
static void C_ccall f_9702(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,4)))){
C_save_and_reclaim((void *)f_9702,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9707,a[2]=((C_word)li173),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9710,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word)li180),tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9841,a[2]=t1,a[3]=((C_word)li181),tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1071: ##sys#dynamic-wind */
t5=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[7];
av2[2]=t2;
av2[3]=t3;
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* a9706 in k9700 in a9697 in a9682 in k9673 in k9670 in k9667 in k9663 in chicken.load#load/internal in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in ... */
static void C_ccall f_9707(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9707,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a9709 in k9700 in a9697 in a9682 in k9673 in k9670 in k9667 in k9663 in chicken.load#load/internal in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in ... */
static void C_ccall f_9710(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_9710,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9714,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* eval.scm:1074: scheme#peek-char */
t3=*((C_word*)lf[237]+1);{
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

/* k9712 in a9709 in k9700 in a9697 in a9682 in k9673 in k9670 in k9667 in k9663 in chicken.load#load/internal in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in ... */
static void C_ccall f_9714(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_9714,c,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9717,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_eqp(t1,C_make_character(127));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9832,a[2]=t2,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9836,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t6=*((C_word*)lf[236]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_mpointer(&a,(void*)C_dlerror);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_9717(2,av2);}}}

/* k9715 in k9712 in a9709 in k9700 in a9697 in a9682 in k9673 in k9670 in k9667 in k9663 in chicken.load#load/internal in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in ... */
static void C_ccall f_9717(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_9717,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9720,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:1082: read */
t3=*((C_word*)lf[229]+1);{
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

/* k9718 in k9715 in k9712 in a9709 in k9700 in a9697 in a9682 in k9673 in k9670 in k9667 in k9663 in chicken.load#load/internal in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in ... */
static void C_ccall f_9720(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_9720,c,av);}
a=C_alloc(11);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9725,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word)li179),tmp=(C_word)a,a+=9,tmp));
t5=((C_word*)t3)[1];
f_9725(t5,((C_word*)t0)[7],t1);}

/* doloop2320 in k9718 in k9715 in k9712 in a9709 in k9700 in a9697 in a9682 in k9673 in k9670 in k9667 in k9663 in chicken.load#load/internal in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in ... */
static void C_fcall f_9725(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_9725,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_eofp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9735,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t2,a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[7])){
/* eval.scm:1085: printer */
t4=((C_word*)t0)[7];{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}
else{
t4=t3;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_9735(2,av2);}}}}

/* k9733 in doloop2320 in k9718 in k9715 in k9712 in a9709 in k9700 in a9697 in a9682 in k9673 in k9670 in k9667 in k9663 in chicken.load#load/internal in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in ... */
static void C_ccall f_9735(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_9735,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9738,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9747,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word)li176),tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9781,a[2]=((C_word*)t0)[8],a[3]=((C_word)li178),tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1086: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t2;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* k9736 in k9733 in doloop2320 in k9718 in k9715 in k9712 in a9709 in k9700 in a9697 in a9682 in k9673 in k9670 in k9667 in k9663 in chicken.load#load/internal in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in ... */
static void C_ccall f_9738(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_9738,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9745,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1083: read */
t3=*((C_word*)lf[229]+1);{
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

/* k9743 in k9736 in k9733 in doloop2320 in k9718 in k9715 in k9712 in a9709 in k9700 in a9697 in a9682 in k9673 in k9670 in k9667 in k9663 in chicken.load#load/internal in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in ... */
static void C_ccall f_9745(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9745,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_9725(t2,((C_word*)t0)[3],t1);}

/* a9746 in k9733 in doloop2320 in k9718 in k9715 in k9712 in a9709 in k9700 in a9697 in a9682 in k9673 in k9670 in k9667 in k9663 in chicken.load#load/internal in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in ... */
static void C_ccall f_9747(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_9747,c,av);}
a=C_alloc(5);
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9754,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1089: ##sys#start-timer */
t3=*((C_word*)lf[232]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* eval.scm:1090: evalproc */
t2=((C_word*)((C_word*)t0)[3])[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[4];
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}}

/* k9752 in a9746 in k9733 in doloop2320 in k9718 in k9715 in k9712 in a9709 in k9700 in a9697 in a9682 in k9673 in k9670 in k9667 in k9663 in chicken.load#load/internal in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in ... */
static void C_ccall f_9754(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_9754,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9759,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li174),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9765,a[2]=((C_word)li175),tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1089: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* a9758 in k9752 in a9746 in k9733 in doloop2320 in k9718 in k9715 in k9712 in a9709 in k9700 in a9697 in a9682 in k9673 in k9670 in k9667 in k9663 in chicken.load#load/internal in k9467 in k9377 in k9374 in k9356 in k8066 in ... */
static void C_ccall f_9759(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9759,c,av);}
/* eval.scm:1089: evalproc */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* a9764 in k9752 in a9746 in k9733 in doloop2320 in k9718 in k9715 in k9712 in a9709 in k9700 in a9697 in a9682 in k9673 in k9670 in k9667 in k9663 in chicken.load#load/internal in k9467 in k9377 in k9374 in k9356 in k8066 in ... */
static void C_ccall f_9765(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +7,c,2)))){
C_save_and_reclaim((void*)f_9765,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+7);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9769,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9776,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1089: ##sys#stop-timer */
t5=*((C_word*)lf[231]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k9767 in a9764 in k9752 in a9746 in k9733 in doloop2320 in k9718 in k9715 in k9712 in a9709 in k9700 in a9697 in a9682 in k9673 in k9670 in k9667 in k9663 in chicken.load#load/internal in k9467 in k9377 in k9374 in k9356 in ... */
static void C_ccall f_9769(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9769,c,av);}{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
C_apply_values(3,av2);}}

/* k9774 in a9764 in k9752 in a9746 in k9733 in doloop2320 in k9718 in k9715 in k9712 in a9709 in k9700 in a9697 in a9682 in k9673 in k9670 in k9667 in k9663 in chicken.load#load/internal in k9467 in k9377 in k9374 in k9356 in ... */
static void C_ccall f_9776(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9776,c,av);}
/* eval.scm:1089: ##sys#display-times */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[230]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[230]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* a9780 in k9733 in doloop2320 in k9718 in k9715 in k9712 in a9709 in k9700 in a9697 in a9682 in k9673 in k9670 in k9667 in k9663 in chicken.load#load/internal in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in ... */
static void C_ccall f_9781(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +6,c,3)))){
C_save_and_reclaim((void*)f_9781,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+6);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
if(C_truep(((C_word*)t0)[2])){
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9798,a[2]=t4,a[3]=((C_word)li177),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_9798(t6,t1,t2);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k9788 in for-each-loop2330 in a9780 in k9733 in doloop2320 in k9718 in k9715 in k9712 in a9709 in k9700 in a9697 in a9682 in k9673 in k9670 in k9667 in k9663 in chicken.load#load/internal in k9467 in k9377 in k9374 in k9356 in k8066 in ... */
static void C_ccall f_9790(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9790,c,av);}
/* eval.scm:1096: newline */
t2=*((C_word*)lf[233]+1);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* for-each-loop2330 in a9780 in k9733 in doloop2320 in k9718 in k9715 in k9712 in a9709 in k9700 in a9697 in a9682 in k9673 in k9670 in k9667 in k9663 in chicken.load#load/internal in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in ... */
static void C_fcall f_9798(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_9798,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9808,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9790,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1095: write */
t6=*((C_word*)lf[14]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k9806 in for-each-loop2330 in a9780 in k9733 in doloop2320 in k9718 in k9715 in k9712 in a9709 in k9700 in a9697 in a9682 in k9673 in k9670 in k9667 in k9663 in chicken.load#load/internal in k9467 in k9377 in k9374 in k9356 in k8066 in ... */
static void C_ccall f_9808(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9808,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_9798(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k9830 in k9712 in a9709 in k9700 in a9697 in a9682 in k9673 in k9670 in k9667 in k9663 in chicken.load#load/internal in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in ... */
static void C_ccall f_9832(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9832,c,av);}
/* eval.scm:1076: ##sys#error */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[225];
av2[3]=t1;
av2[4]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k9834 in k9712 in a9709 in k9700 in a9697 in a9682 in k9673 in k9670 in k9667 in k9663 in chicken.load#load/internal in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in ... */
static void C_ccall f_9836(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9836,c,av);}
if(C_truep(t1)){
/* eval.scm:1078: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[218]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[218]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[234];
av2[3]=t1;
tp(4,av2);}}
else{
/* eval.scm:1078: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[218]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[218]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[234];
av2[3]=lf[235];
tp(4,av2);}}}

/* a9840 in k9700 in a9697 in a9682 in k9673 in k9670 in k9667 in k9663 in chicken.load#load/internal in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in ... */
static void C_ccall f_9841(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9841,c,av);}
/* eval.scm:1099: close-input-port */
t2=*((C_word*)lf[238]+1);{
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

/* a9849 in a9682 in k9673 in k9670 in k9667 in k9663 in chicken.load#load/internal in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in ... */
static void C_ccall f_9850(C_word c,C_word *av){
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
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9850,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[227]+1));
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[205]+1));
t4=C_mutate(((C_word *)((C_word*)t0)[4])+1,*((C_word*)lf[228]+1));
t5=C_mutate((C_word*)lf[227]+1 /* (set! ##sys#read-error-with-line-number ...) */,((C_word*)((C_word*)t0)[5])[1]);
t6=C_mutate((C_word*)lf[205]+1 /* (set! ##sys#current-load-filename ...) */,((C_word*)((C_word*)t0)[6])[1]);
t7=C_mutate((C_word*)lf[228]+1 /* (set! ##sys#current-source-filename ...) */,((C_word*)((C_word*)t0)[7])[1]);
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* k9867 in k9879 in k9667 in k9663 in chicken.load#load/internal in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in ... */
static void C_ccall f_9869(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_9869,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9872,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1060: display */
t3=*((C_word*)lf[241]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k9870 in k9867 in k9879 in k9667 in k9663 in chicken.load#load/internal in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in ... */
static void C_ccall f_9872(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_9872,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9875,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1061: display */
t3=*((C_word*)lf[241]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[242];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k9873 in k9870 in k9867 in k9879 in k9667 in k9663 in chicken.load#load/internal in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in ... */
static void C_ccall f_9875(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9875,c,av);}
/* eval.scm:1062: chicken.base#flush-output */
t2=*((C_word*)lf[240]+1);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k9879 in k9667 in k9663 in chicken.load#load/internal in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in ... */
static void C_ccall f_9881(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_9881,c,av);}
a=C_alloc(4);
t2=(C_truep(t1)?((C_word*)((C_word*)t0)[2])[1]:C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9869,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1059: display */
t4=*((C_word*)lf[241]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[243];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_9672(2,av2);}}}

/* k9882 in k9663 in chicken.load#load/internal in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in ... */
static void C_ccall f_9884(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_9884,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_9669(2,av2);}}
else{
t2=C_i_stringp(((C_word*)t0)[3]);
if(C_truep(C_i_not(t2))){
/* eval.scm:1049: ##sys#signal-hook */
t3=*((C_word*)lf[213]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[244];
av2[3]=lf[225];
av2[4]=lf[245];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9899,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1050: ##sys#file-exists? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[248]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[248]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[225];
tp(6,av2);}}}}

/* k9897 in k9882 in k9663 in chicken.load#load/internal in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in ... */
static void C_ccall f_9899(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_9899,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
f_9669(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9902,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1051: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[218]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[218]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=*((C_word*)lf[191]+1);
tp(4,av2);}}}

/* k9900 in k9897 in k9882 in k9663 in chicken.load#load/internal in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in ... */
static void C_ccall f_9902(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_9902,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9905,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9929,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1052: ##sys#file-exists? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[248]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[248]+1);
av2[1]=t3;
av2[2]=t1;
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[225];
tp(6,av2);}}
else{
t3=t2;
f_9905(t3,C_SCHEME_FALSE);}}

/* k9903 in k9900 in k9897 in k9882 in k9663 in chicken.load#load/internal in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in ... */
static void C_fcall f_9905(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_9905,2,t0,t1);}
a=C_alloc(4);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=t1;
f_9669(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9911,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1053: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[218]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[218]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[188];
tp(4,av2);}}}

/* k9909 in k9903 in k9900 in k9897 in k9882 in k9663 in chicken.load#load/internal in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in ... */
static void C_ccall f_9911(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_9911,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9923,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1054: ##sys#file-exists? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[248]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[248]+1);
av2[1]=t2;
av2[2]=t1;
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[225];
tp(6,av2);}}

/* k9921 in k9909 in k9903 in k9900 in k9897 in k9882 in k9663 in chicken.load#load/internal in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in ... */
static void C_ccall f_9923(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_9923,c,av);}
if(C_truep(t1)){
if(C_truep(((C_word*)t0)[2])){
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
f_9669(2,av2);}}
else{
/* eval.scm:1056: ##sys#signal-hook */
t2=*((C_word*)lf[213]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[246];
av2[3]=lf[225];
av2[4]=lf[247];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}
else{
/* eval.scm:1056: ##sys#signal-hook */
t2=*((C_word*)lf[213]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[246];
av2[3]=lf[225];
av2[4]=lf[247];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}

/* k9927 in k9900 in k9897 in k9882 in k9663 in chicken.load#load/internal in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in ... */
static void C_ccall f_9929(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9929,c,av);}
t2=((C_word*)t0)[2];
f_9905(t2,(C_truep(t1)?((C_word*)t0)[3]:C_SCHEME_FALSE));}

/* scheme#load in k9467 in k9377 in k9374 in k9356 in k8066 in k11293 in k11301 in k11309 in k11317 in k7955 in k7952 in k7949 in k7946 in k7943 in k7852 in k7833 in k3543 in k3499 in k3496 in k3493 in k3490 in ... */
static void C_ccall f_9989(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9989,c,av);}
if(C_truep(C_rest_nullp(c,3))){
/* eval.scm:1104: load/internal */
t3=lf[223];
f_9587(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_END_OF_LIST);}
else{
/* eval.scm:1104: load/internal */
t3=lf[223];
f_9587(t3,t1,t2,C_get_rest_arg(c,3,av,3,t0),C_SCHEME_END_OF_LIST);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_eval_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("eval"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_eval_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(2403))){
C_save(t1);
C_rereclaim2(2403*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,367);
lf[0]=C_h_intern(&lf[0],4, C_text("eval"));
lf[1]=C_h_intern(&lf[1],13, C_text("chicken.eval#"));
lf[2]=C_h_intern(&lf[2],21, C_text("##sys#unbound-in-eval"));
lf[3]=C_h_intern(&lf[3],22, C_text("##sys#eval-debug-level"));
lf[5]=C_h_intern(&lf[5],9, C_text("##sys#get"));
lf[6]=C_h_intern(&lf[6],18, C_text("##core#macro-alias"));
lf[7]=C_h_intern(&lf[7],13, C_text("scheme#values"));
lf[8]=C_h_intern(&lf[8],14, C_text("scheme#symbol\077"));
lf[9]=C_h_intern(&lf[9],25, C_text("##sys#current-environment"));
lf[10]=C_h_intern(&lf[10],9, C_text("frameinfo"));
lf[11]=C_h_intern(&lf[11],20, C_text("##sys#current-thread"));
lf[12]=C_h_intern(&lf[12],22, C_text("##sys#make-lambda-info"));
lf[13]=C_h_intern(&lf[13],30, C_text("chicken.base#get-output-string"));
lf[14]=C_h_intern(&lf[14],12, C_text("scheme#write"));
lf[15]=C_h_intern(&lf[15],31, C_text("chicken.base#open-output-string"));
lf[16]=C_h_intern(&lf[16],21, C_text("##sys#decorate-lambda"));
lf[17]=C_h_intern(&lf[17],11, C_text("##sys#error"));
lf[18]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020unbound variable"));
lf[19]=C_h_intern(&lf[19],34, C_text("##sys#symbol-has-toplevel-binding\077"));
lf[20]=C_h_intern(&lf[20],23, C_text("##sys#alias-global-hook"));
lf[21]=C_h_intern(&lf[21],26, C_text("##sys#syntax-error/context"));
lf[22]=C_decode_literal(C_heaptop,C_text("\376B\000\000\031illegal non-atomic object"));
lf[23]=C_h_intern(&lf[23],12, C_text("##core#quote"));
lf[24]=C_h_intern(&lf[24],27, C_text("chicken.syntax#strip-syntax"));
lf[25]=C_h_intern(&lf[25],13, C_text("##core#syntax"));
lf[26]=C_h_intern(&lf[26],12, C_text("##core#check"));
lf[27]=C_h_intern(&lf[27],16, C_text("##core#immutable"));
lf[28]=C_h_intern(&lf[28],16, C_text("##core#undefined"));
lf[29]=C_h_intern(&lf[29],9, C_text("##core#if"));
lf[30]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001##core#undefined\376\377\016"));
lf[31]=C_h_intern(&lf[31],12, C_text("##core#begin"));
lf[32]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001##core#undefined\376\377\016"));
lf[33]=C_h_intern(&lf[33],33, C_text("##core#ensure-toplevel-definition"));
lf[34]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001##core#undefined\376\377\016"));
lf[35]=C_decode_literal(C_heaptop,C_text("\376B\000\0008toplevel definition in non-toplevel context for variable"));
lf[36]=C_h_intern(&lf[36],11, C_text("##core#set!"));
lf[37]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032environment is not mutable"));
lf[38]=C_h_intern(&lf[38],21, C_text("##sys#notices-enabled"));
lf[39]=C_h_intern(&lf[39],12, C_text("##sys#notice"));
lf[40]=C_decode_literal(C_heaptop,C_text("\376B\000\000$assignment to imported value binding"));
lf[41]=C_h_intern(&lf[41],10, C_text("##core#let"));
lf[42]=C_h_intern(&lf[42],3, C_text("map"));
lf[43]=C_h_intern(&lf[43],12, C_text("scheme#cadar"));
lf[44]=C_h_intern(&lf[44],13, C_text("scheme#cadadr"));
lf[45]=C_h_intern(&lf[45],17, C_text("##sys#make-vector"));
lf[46]=C_h_intern(&lf[46],23, C_text("##sys#canonicalize-body"));
lf[47]=C_h_intern(&lf[47],18, C_text("##sys#dynamic-wind"));
lf[48]=C_h_intern(&lf[48],15, C_text("##sys#extend-se"));
lf[49]=C_h_intern(&lf[49],19, C_text("chicken.base#gensym"));
lf[50]=C_h_intern(&lf[50],14, C_text("##core#letrec\052"));
lf[51]=C_h_intern(&lf[51],12, C_text("##sys#append"));
lf[52]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001##core#undefined\376\377\016"));
lf[53]=C_h_intern(&lf[53],13, C_text("##core#letrec"));
lf[54]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001##core#undefined\376\377\016"));
lf[55]=C_h_intern(&lf[55],13, C_text("##core#lambda"));
lf[56]=C_h_intern(&lf[56],1, C_text("\077"));
lf[57]=C_h_intern(&lf[57],12, C_text("##sys#vector"));
lf[58]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022bad argument count"));
lf[59]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022bad argument count"));
lf[60]=C_h_intern(&lf[60],27, C_text("##sys#decompose-lambda-list"));
lf[61]=C_h_intern(&lf[61],33, C_text("##sys#expand-extended-lambda-list"));
lf[62]=C_h_intern(&lf[62],23, C_text("##sys#syntax-error-hook"));
lf[63]=C_h_intern(&lf[63],27, C_text("##sys#extended-lambda-list\077"));
lf[64]=C_h_intern(&lf[64],18, C_text("##sys#check-syntax"));
lf[65]=C_h_intern(&lf[65],6, C_text("lambda"));
lf[66]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\013\001lambda-list\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\001"));
lf[67]=C_h_intern(&lf[67],17, C_text("##core#let-syntax"));
lf[68]=C_h_intern(&lf[68],13, C_text("scheme#append"));
lf[69]=C_h_intern(&lf[69],24, C_text("##sys#ensure-transformer"));
lf[70]=C_h_intern(&lf[70],15, C_text("##sys#eval/meta"));
lf[71]=C_h_intern(&lf[71],20, C_text("##core#letrec-syntax"));
lf[72]=C_h_intern(&lf[72],8, C_text("for-each"));
lf[73]=C_h_intern(&lf[73],20, C_text("##core#define-syntax"));
lf[74]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001##core#undefined\376\377\016"));
lf[75]=C_h_intern(&lf[75],30, C_text("##sys#extend-macro-environment"));
lf[76]=C_h_intern(&lf[76],28, C_text("##sys#register-syntax-export"));
lf[77]=C_h_intern(&lf[77],20, C_text("##sys#current-module"));
lf[78]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032environment is not mutable"));
lf[79]=C_h_intern(&lf[79],29, C_text("##core#define-compiler-syntax"));
lf[80]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001##core#undefined\376\377\016"));
lf[81]=C_h_intern(&lf[81],26, C_text("##core#let-compiler-syntax"));
lf[82]=C_h_intern(&lf[82],14, C_text("##core#include"));
lf[83]=C_h_intern(&lf[83],29, C_text("##sys#include-forms-from-file"));
lf[84]=C_h_intern(&lf[84],23, C_text("##core#let-module-alias"));
lf[85]=C_h_intern(&lf[85],25, C_text("##sys#with-module-aliases"));
lf[86]=C_h_intern(&lf[86],7, C_text("functor"));
lf[87]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\006\001symbol\376\003\000\000\002\376\001\000\000\006\001symbol\376\377\016"));
lf[88]=C_h_intern(&lf[88],13, C_text("##core#module"));
lf[89]=C_h_intern(&lf[89],23, C_text("##sys#macro-environment"));
lf[90]=C_h_intern(&lf[90],30, C_text("##sys#module-alias-environment"));
lf[91]=C_h_intern(&lf[91],31, C_text("##sys#initial-macro-environment"));
lf[92]=C_h_intern(&lf[92],21, C_text("##sys#undefined-value"));
lf[93]=C_h_intern(&lf[93],13, C_text("##sys#provide"));
lf[94]=C_h_intern(&lf[94],35, C_text("chicken.internal#module-requirement"));
lf[95]=C_h_intern(&lf[95],21, C_text("##sys#finalize-module"));
lf[96]=C_h_intern(&lf[96],14, C_text("scheme#reverse"));
lf[97]=C_h_intern(&lf[97],27, C_text("##sys#with-property-restore"));
lf[98]=C_h_intern(&lf[98],21, C_text("##sys#register-module"));
lf[99]=C_h_intern(&lf[99],6, C_text("module"));
lf[100]=C_decode_literal(C_heaptop,C_text("\376B\000\000\031modules may not be nested"));
lf[101]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025invalid export syntax"));
lf[102]=C_h_intern(&lf[102],18, C_text("##core#loop-lambda"));
lf[103]=C_h_intern(&lf[103],14, C_text("##core#provide"));
lf[104]=C_h_intern(&lf[104],25, C_text("##core#require-for-syntax"));
lf[105]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001##core#undefined\376\377\016"));
lf[106]=C_h_intern(&lf[106],27, C_text("chicken.load#load-extension"));
lf[107]=C_h_intern(&lf[107],14, C_text("##core#require"));
lf[108]=C_h_intern(&lf[108],21, C_text("##sys#process-require"));
lf[109]=C_h_intern(&lf[109],26, C_text("##core#elaborationtimeonly"));
lf[110]=C_h_intern(&lf[110],25, C_text("##core#elaborationtimetoo"));
lf[111]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001##core#undefined\376\377\016"));
lf[112]=C_h_intern(&lf[112],21, C_text("##core#compiletimetoo"));
lf[113]=C_h_intern(&lf[113],22, C_text("##core#compiletimeonly"));
lf[114]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001##core#undefined\376\377\016"));
lf[115]=C_h_intern(&lf[115],14, C_text("##core#declare"));
lf[116]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001##core#undefined\376\377\016"));
lf[117]=C_decode_literal(C_heaptop,C_text("\376B\000\000,declarations are ignored in interpreted code"));
lf[118]=C_h_intern(&lf[118],20, C_text("##core#define-inline"));
lf[119]=C_h_intern(&lf[119],22, C_text("##core#define-constant"));
lf[120]=C_h_intern(&lf[120],6, C_text("define"));
lf[121]=C_h_intern(&lf[121],16, C_text("##core#primitive"));
lf[122]=C_decode_literal(C_heaptop,C_text("\376B\000\000%cannot evaluate compiler-special-form"));
lf[123]=C_h_intern(&lf[123],10, C_text("##core#app"));
lf[124]=C_h_intern(&lf[124],10, C_text("##core#the"));
lf[125]=C_h_intern(&lf[125],15, C_text("##core#typecase"));
lf[126]=C_h_intern(&lf[126],4, C_text("else"));
lf[127]=C_h_intern(&lf[127],17, C_text("compiler-typecase"));
lf[128]=C_decode_literal(C_heaptop,C_text("\376B\000\0007no `else-clause\047 in unresolved `compiler-typecase\047 form"));
lf[129]=C_h_intern(&lf[129],20, C_text("##sys#syntax-context"));
lf[130]=C_h_intern(&lf[130],13, C_text("##core#inline"));
lf[131]=C_h_intern(&lf[131],22, C_text("##core#inline_allocate"));
lf[132]=C_h_intern(&lf[132],21, C_text("##core#foreign-lambda"));
lf[133]=C_h_intern(&lf[133],30, C_text("##core#define-foreign-variable"));
lf[134]=C_h_intern(&lf[134],31, C_text("##core#define-external-variable"));
lf[135]=C_h_intern(&lf[135],19, C_text("##core#let-location"));
lf[136]=C_h_intern(&lf[136],24, C_text("##core#foreign-primitive"));
lf[137]=C_h_intern(&lf[137],15, C_text("##core#location"));
lf[138]=C_h_intern(&lf[138],22, C_text("##core#foreign-lambda\052"));
lf[139]=C_h_intern(&lf[139],26, C_text("##core#define-foreign-type"));
lf[140]=C_h_intern(&lf[140],15, C_text("##core#callunit"));
lf[141]=C_h_intern(&lf[141],27, C_text("##core#local-specialization"));
lf[142]=C_h_intern(&lf[142],21, C_text("chicken.syntax#expand"));
lf[143]=C_h_intern(&lf[143],20, C_text("##sys#srfi-4-vector\077"));
lf[144]=C_h_intern(&lf[144],18, C_text("chicken.blob#blob\077"));
lf[145]=C_h_intern(&lf[145],13, C_text("##sys#number\077"));
lf[146]=C_h_intern(&lf[146],24, C_text("chicken.keyword#keyword\077"));
lf[147]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024malformed expression"));
lf[148]=C_h_intern(&lf[148],28, C_text("##sys#meta-macro-environment"));
lf[149]=C_h_intern(&lf[149],30, C_text("##sys#current-meta-environment"));
lf[150]=C_h_intern(&lf[150],19, C_text("scheme#dynamic-wind"));
lf[151]=C_h_intern(&lf[151],17, C_text("chicken.base#void"));
lf[152]=C_h_intern(&lf[152],25, C_text("chicken.eval#eval-handler"));
lf[153]=C_h_intern(&lf[153],11, C_text("scheme#eval"));
lf[154]=C_h_intern(&lf[154],31, C_text("chicken.eval#module-environment"));
lf[155]=C_h_intern(&lf[155],33, C_text("chicken.module#module-environment"));
lf[156]=C_h_intern(&lf[156],26, C_text("##sys#syntax-error-culprit"));
lf[157]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032illegal lambda-list syntax"));
lf[158]=C_h_intern(&lf[158],11, C_text("environment"));
lf[159]=C_h_intern(&lf[159],23, C_text("interaction-environment"));
lf[160]=C_h_intern(&lf[160],30, C_text("scheme#interaction-environment"));
lf[161]=C_h_intern(&lf[161],5, C_text("foldr"));
lf[162]=C_h_intern(&lf[162],11, C_text("cond-expand"));
lf[163]=C_h_intern(&lf[163],16, C_text("define-interface"));
lf[164]=C_h_intern(&lf[164],11, C_text("delay-force"));
lf[165]=C_h_intern(&lf[165],6, C_text("export"));
lf[166]=C_h_intern(&lf[166],6, C_text("import"));
lf[167]=C_h_intern(&lf[167],17, C_text("import-for-syntax"));
lf[168]=C_h_intern(&lf[168],13, C_text("import-syntax"));
lf[169]=C_h_intern(&lf[169],24, C_text("import-syntax-for-syntax"));
lf[170]=C_h_intern(&lf[170],7, C_text("letrec\052"));
lf[171]=C_h_intern(&lf[171],8, C_text("reexport"));
lf[172]=C_h_intern(&lf[172],15, C_text("require-library"));
lf[173]=C_h_intern(&lf[173],6, C_text("syntax"));
lf[174]=C_h_intern(&lf[174],32, C_text("scheme#scheme-report-environment"));
lf[175]=C_h_intern(&lf[175],25, C_text("scheme-report-environment"));
lf[176]=C_decode_literal(C_heaptop,C_text("\376B\000\000-unsupported scheme report environment version"));
lf[177]=C_h_intern(&lf[177],18, C_text("##sys#check-fixnum"));
lf[178]=C_h_intern(&lf[178],23, C_text("scheme#null-environment"));
lf[179]=C_h_intern(&lf[179],16, C_text("null-environment"));
lf[180]=C_decode_literal(C_heaptop,C_text("\376B\000\000$unsupported null environment version"));
lf[181]=C_h_intern(&lf[181],13, C_text("chicken.load#"));
lf[183]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001chicken.foreign\376\003\000\000\002\376\001\000\000\031\001##core#require-for-syntax\376\003\000\000\002\376\001\000\000\022\001ch"
"icken-ffi-syntax\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001chicken.condition\376\003\000\000\002\376\001\000\000\014\001##core#begin\376\003\000\000\002"
"\376\003\000\000\002\376\001\000\000\031\001##core#require-for-syntax\376\003\000\000\002\376\001\000\000\016\001chicken-syntax\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001"
"##core#require\376\003\000\000\002\376\001\000\000\007\001library\376\377\016\376\377\016\376\377\016"));
lf[185]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\016\001chicken-syntax\376\003\000\000\002\376\001\000\000\022\001chicken-ffi-syntax\376\003\000\000\002\376\001\000\000\014\001continuation\376\003\000"
"\000\002\376\001\000\000\017\001data-structures\376\003\000\000\002\376\001\000\000\017\001debugger-client\376\003\000\000\002\376\001\000\000\004\001eval\376\003\000\000\002\376\001\000\000\014\001eval-"
"modules\376\003\000\000\002\376\001\000\000\006\001expand\376\003\000\000\002\376\001\000\000\006\001extras\376\003\000\000\002\376\001\000\000\004\001file\376\003\000\000\002\376\001\000\000\010\001internal\376\003\000\000\002"
"\376\001\000\000\007\001irregex\376\003\000\000\002\376\001\000\000\007\001library\376\003\000\000\002\376\001\000\000\007\001lolevel\376\003\000\000\002\376\001\000\000\010\001pathname\376\003\000\000\002\376\001\000\000\004\001p"
"ort\376\003\000\000\002\376\001\000\000\005\001posix\376\003\000\000\002\376\001\000\000\010\001profiler\376\003\000\000\002\376\001\000\000\013\001read-syntax\376\003\000\000\002\376\001\000\000\004\001repl\376\003\000\000\002"
"\376\001\000\000\011\001scheduler\376\003\000\000\002\376\001\000\000\006\001srfi-4\376\003\000\000\002\376\001\000\000\003\001tcp\376\377\016"));
lf[187]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003.so"));
lf[189]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004.scm"));
lf[191]=C_h_intern(&lf[191],28, C_text("##sys#load-dynamic-extension"));
lf[192]=C_h_intern(&lf[192],23, C_text("chicken.load#core-unit\077"));
lf[194]=C_h_intern(&lf[194],15, C_text("##sys#provided\077"));
lf[195]=C_h_intern(&lf[195],22, C_text("##sys#windows-platform"));
lf[196]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\012\000\000\134\376\003\000\000\002\376\377\012\000\000/\376\377\016"));
lf[197]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\012\000\000/\376\377\016"));
lf[201]=C_h_intern(&lf[201],20, C_text("scheme#string-append"));
lf[202]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001/"));
lf[203]=C_h_intern(&lf[203],15, C_text("##sys#substring"));
lf[204]=C_h_intern(&lf[204],25, C_text("chicken.load#load-verbose"));
lf[205]=C_h_intern(&lf[205],27, C_text("##sys#current-load-filename"));
lf[206]=C_h_intern(&lf[206],20, C_text("##sys#dload-disabled"));
lf[207]=C_h_intern(&lf[207],35, C_text("chicken.load#set-dynamic-load-mode!"));
lf[208]=C_h_intern(&lf[208],23, C_text("##sys#set-dlopen-flags!"));
lf[209]=C_h_intern(&lf[209],6, C_text("global"));
lf[210]=C_h_intern(&lf[210],5, C_text("local"));
lf[211]=C_h_intern(&lf[211],4, C_text("lazy"));
lf[212]=C_h_intern(&lf[212],3, C_text("now"));
lf[213]=C_h_intern(&lf[213],17, C_text("##sys#signal-hook"));
lf[214]=C_h_intern(&lf[214],22, C_text("set-dynamic-load-mode!"));
lf[215]=C_decode_literal(C_heaptop,C_text("\376B\000\000\031invalid dynamic-load mode"));
lf[217]=C_h_intern(&lf[217],19, C_text("##sys#make-c-string"));
lf[218]=C_h_intern(&lf[218],19, C_text("##sys#string-append"));
lf[219]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002C_"));
lf[220]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010toplevel"));
lf[221]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011_toplevel"));
lf[222]=C_h_intern(&lf[222],37, C_text("chicken.internal#string->c-identifier"));
lf[224]=C_h_intern(&lf[224],11, C_text("##sys#dload"));
lf[225]=C_h_intern(&lf[225],4, C_text("load"));
lf[226]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002./"));
lf[227]=C_h_intern(&lf[227],33, C_text("##sys#read-error-with-line-number"));
lf[228]=C_h_intern(&lf[228],29, C_text("##sys#current-source-filename"));
lf[229]=C_h_intern(&lf[229],11, C_text("scheme#read"));
lf[230]=C_h_intern(&lf[230],19, C_text("##sys#display-times"));
lf[231]=C_h_intern(&lf[231],16, C_text("##sys#stop-timer"));
lf[232]=C_h_intern(&lf[232],17, C_text("##sys#start-timer"));
lf[233]=C_h_intern(&lf[233],14, C_text("scheme#newline"));
lf[234]=C_decode_literal(C_heaptop,C_text("\376B\000\000!unable to load compiled module - "));
lf[235]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016unknown reason"));
lf[236]=C_h_intern(&lf[236],19, C_text("##sys#peek-c-string"));
lf[237]=C_h_intern(&lf[237],16, C_text("scheme#peek-char"));
lf[238]=C_h_intern(&lf[238],23, C_text("scheme#close-input-port"));
lf[239]=C_h_intern(&lf[239],22, C_text("scheme#open-input-file"));
lf[240]=C_h_intern(&lf[240],25, C_text("chicken.base#flush-output"));
lf[241]=C_h_intern(&lf[241],14, C_text("scheme#display"));
lf[242]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005 ...\012"));
lf[243]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012; loading "));
lf[244]=C_h_intern_kw(&lf[244],10, C_text("type-error"));
lf[245]=C_decode_literal(C_heaptop,C_text("\376B\000\000(bad argument type - not a port or string"));
lf[246]=C_h_intern_kw(&lf[246],10, C_text("file-error"));
lf[247]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020cannot open file"));
lf[248]=C_h_intern(&lf[248],18, C_text("##sys#file-exists\077"));
lf[249]=C_h_intern(&lf[249],18, C_text("chicken.base#port\077"));
lf[250]=C_h_intern(&lf[250],25, C_text("chicken.platform#feature\077"));
lf[251]=C_h_intern_kw(&lf[251],5, C_text("dload"));
lf[252]=C_h_intern(&lf[252],11, C_text("scheme#load"));
lf[253]=C_h_intern(&lf[253],26, C_text("chicken.load#load-relative"));
lf[254]=C_h_intern(&lf[254],25, C_text("chicken.load#load-noisily"));
lf[255]=C_h_intern(&lf[255],17, C_text("##sys#get-keyword"));
lf[256]=C_h_intern_kw(&lf[256],7, C_text("printer"));
lf[257]=C_h_intern_kw(&lf[257],4, C_text("time"));
lf[258]=C_h_intern_kw(&lf[258],9, C_text("evaluator"));
lf[259]=C_h_intern(&lf[259],35, C_text("chicken.load#dynamic-load-libraries"));
lf[260]=C_h_intern(&lf[260],22, C_text("chicken.load#load-unit"));
lf[261]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026unable to load library"));
lf[262]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021library not found"));
lf[263]=C_h_intern(&lf[263],12, C_text("load-library"));
lf[264]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005 ...\012"));
lf[265]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022; loading library "));
lf[266]=C_h_intern(&lf[266],25, C_text("chicken.load#load-library"));
lf[267]=C_h_intern(&lf[267],27, C_text("scheme#with-input-from-file"));
lf[268]=C_h_intern(&lf[268],18, C_text("chicken.base#print"));
lf[269]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014; including "));
lf[270]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004 ..."));
lf[271]=C_h_intern(&lf[271],7, C_text("include"));
lf[272]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020cannot open file"));
lf[273]=C_h_intern(&lf[273],30, C_text("##sys#resolve-include-filename"));
lf[274]=C_h_intern(&lf[274],16, C_text("##sys#setup-mode"));
lf[276]=C_h_intern(&lf[276],22, C_text("chicken.load#find-file"));
lf[277]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001/"));
lf[278]=C_h_intern(&lf[278],35, C_text("chicken.load#find-dynamic-extension"));
lf[279]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001/"));
lf[280]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\001.\376\377\016"));
lf[281]=C_h_intern(&lf[281],23, C_text("##sys#include-pathnames"));
lf[282]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\001.\376\377\016"));
lf[283]=C_h_intern(&lf[283],21, C_text("scheme#symbol->string"));
lf[284]=C_h_intern(&lf[284],32, C_text("chicken.platform#repository-path"));
lf[285]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025cannot load extension"));
lf[286]=C_h_intern(&lf[286],20, C_text("chicken.load#require"));
lf[287]=C_h_intern(&lf[287],7, C_text("require"));
lf[288]=C_h_intern(&lf[288],20, C_text("chicken.load#provide"));
lf[289]=C_h_intern(&lf[289],7, C_text("provide"));
lf[290]=C_h_intern(&lf[290],22, C_text("chicken.load#provided\077"));
lf[291]=C_h_intern(&lf[291],9, C_text("provided\077"));
lf[292]=C_h_intern(&lf[292],7, C_text("srfi-30"));
lf[293]=C_h_intern(&lf[293],7, C_text("srfi-46"));
lf[294]=C_h_intern(&lf[294],7, C_text("srfi-61"));
lf[295]=C_h_intern(&lf[295],7, C_text("srfi-62"));
lf[296]=C_h_intern(&lf[296],6, C_text("srfi-0"));
lf[297]=C_h_intern(&lf[297],6, C_text("srfi-2"));
lf[298]=C_h_intern(&lf[298],6, C_text("srfi-8"));
lf[299]=C_h_intern(&lf[299],6, C_text("srfi-9"));
lf[300]=C_h_intern(&lf[300],7, C_text("srfi-11"));
lf[301]=C_h_intern(&lf[301],7, C_text("srfi-15"));
lf[302]=C_h_intern(&lf[302],7, C_text("srfi-16"));
lf[303]=C_h_intern(&lf[303],7, C_text("srfi-17"));
lf[304]=C_h_intern(&lf[304],7, C_text("srfi-26"));
lf[305]=C_h_intern(&lf[305],7, C_text("srfi-31"));
lf[306]=C_h_intern(&lf[306],7, C_text("srfi-55"));
lf[307]=C_h_intern(&lf[307],7, C_text("srfi-87"));
lf[308]=C_h_intern(&lf[308],7, C_text("srfi-88"));
lf[309]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001##core#undefined\376\377\016"));
lf[310]=C_h_intern(&lf[310],6, C_text("static"));
lf[311]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001/"));
lf[314]=C_h_intern(&lf[314],37, C_text("chicken.condition#print-error-message"));
lf[315]=C_h_intern(&lf[315],40, C_text("chicken.condition#with-exception-handler"));
lf[316]=C_h_intern(&lf[316],37, C_text("scheme#call-with-current-continuation"));
lf[318]=C_h_intern(&lf[318],8, C_text("##sys#gc"));
lf[320]=C_h_intern(&lf[320],19, C_text("##sys#thread-yield!"));
lf[323]=C_h_intern(&lf[323],30, C_text("chicken.base#open-input-string"));
lf[325]=C_decode_literal(C_heaptop,C_text("\376B\000\000(Error: not enough room for result string"));
lf[333]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010No error"));
lf[334]=C_h_intern(&lf[334],29, C_text("chicken.platform#chicken-home"));
lf[335]=C_h_intern(&lf[335],27, C_text("chicken.base#make-parameter"));
lf[336]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001."));
lf[337]=C_h_intern(&lf[337],20, C_text("##sys#fixnum->string"));
lf[338]=C_h_intern(&lf[338],6, C_text("cygwin"));
lf[339]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\014cygchicken-0\376\377\016"));
lf[340]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003lib"));
lf[341]=C_h_intern(&lf[341],33, C_text("chicken.platform#software-version"));
lf[342]=C_h_intern(&lf[342],7, C_text("windows"));
lf[343]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004.dll"));
lf[344]=C_h_intern(&lf[344],6, C_text("macosx"));
lf[345]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006.dylib"));
lf[346]=C_h_intern(&lf[346],4, C_text("hpux"));
lf[347]=C_h_intern(&lf[347],4, C_text("hppa"));
lf[348]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003.sl"));
lf[349]=C_h_intern(&lf[349],29, C_text("chicken.platform#machine-type"));
lf[350]=C_h_intern(&lf[350],30, C_text("chicken.platform#software-type"));
lf[351]=C_h_intern(&lf[351],9, C_text("r5rs-null"));
lf[352]=C_h_intern(&lf[352],18, C_text("null-environment/5"));
lf[353]=C_h_intern(&lf[353],9, C_text("r4rs-null"));
lf[354]=C_h_intern(&lf[354],18, C_text("null-environment/4"));
lf[355]=C_h_intern(&lf[355],6, C_text("scheme"));
lf[356]=C_h_intern(&lf[356],27, C_text("scheme-report-environment/5"));
lf[357]=C_h_intern(&lf[357],4, C_text("r4rs"));
lf[358]=C_h_intern(&lf[358],27, C_text("scheme-report-environment/4"));
lf[359]=C_h_intern(&lf[359],18, C_text("##sys#write-char-0"));
lf[360]=C_h_intern(&lf[360],11, C_text("##sys#print"));
lf[361]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016#<environment "));
lf[362]=C_h_intern(&lf[362],32, C_text("chicken.base#set-record-printer!"));
lf[363]=C_h_intern(&lf[363],10, C_text("##sys#put!"));
lf[364]=C_h_intern(&lf[364],18, C_text("##sys#put/restore!"));
lf[365]=C_h_intern(&lf[365],39, C_text("chicken.internal#default-syntax-imports"));
lf[366]=C_h_intern(&lf[366],32, C_text("chicken.internal#default-imports"));
C_register_lf2(lf,367,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3492,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_modules_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[725] = {
{C_text("f_10004:eval_2escm"),(void*)f_10004},
{C_text("f_10011:eval_2escm"),(void*)f_10011},
{C_text("f_10022:eval_2escm"),(void*)f_10022},
{C_text("f_10026:eval_2escm"),(void*)f_10026},
{C_text("f_10029:eval_2escm"),(void*)f_10029},
{C_text("f_10032:eval_2escm"),(void*)f_10032},
{C_text("f_10037:eval_2escm"),(void*)f_10037},
{C_text("f_10040:eval_2escm"),(void*)f_10040},
{C_text("f_10043:eval_2escm"),(void*)f_10043},
{C_text("f_10048:eval_2escm"),(void*)f_10048},
{C_text("f_10050:eval_2escm"),(void*)f_10050},
{C_text("f_10057:eval_2escm"),(void*)f_10057},
{C_text("f_10059:eval_2escm"),(void*)f_10059},
{C_text("f_10066:eval_2escm"),(void*)f_10066},
{C_text("f_10069:eval_2escm"),(void*)f_10069},
{C_text("f_10072:eval_2escm"),(void*)f_10072},
{C_text("f_10075:eval_2escm"),(void*)f_10075},
{C_text("f_10080:eval_2escm"),(void*)f_10080},
{C_text("f_10094:eval_2escm"),(void*)f_10094},
{C_text("f_10103:eval_2escm"),(void*)f_10103},
{C_text("f_10114:eval_2escm"),(void*)f_10114},
{C_text("f_10121:eval_2escm"),(void*)f_10121},
{C_text("f_10124:eval_2escm"),(void*)f_10124},
{C_text("f_10127:eval_2escm"),(void*)f_10127},
{C_text("f_10140:eval_2escm"),(void*)f_10140},
{C_text("f_10144:eval_2escm"),(void*)f_10144},
{C_text("f_10150:eval_2escm"),(void*)f_10150},
{C_text("f_10177:eval_2escm"),(void*)f_10177},
{C_text("f_10181:eval_2escm"),(void*)f_10181},
{C_text("f_10184:eval_2escm"),(void*)f_10184},
{C_text("f_10187:eval_2escm"),(void*)f_10187},
{C_text("f_10192:eval_2escm"),(void*)f_10192},
{C_text("f_10198:eval_2escm"),(void*)f_10198},
{C_text("f_10203:eval_2escm"),(void*)f_10203},
{C_text("f_10211:eval_2escm"),(void*)f_10211},
{C_text("f_10213:eval_2escm"),(void*)f_10213},
{C_text("f_10227:eval_2escm"),(void*)f_10227},
{C_text("f_10234:eval_2escm"),(void*)f_10234},
{C_text("f_10240:eval_2escm"),(void*)f_10240},
{C_text("f_10246:eval_2escm"),(void*)f_10246},
{C_text("f_10258:eval_2escm"),(void*)f_10258},
{C_text("f_10265:eval_2escm"),(void*)f_10265},
{C_text("f_10267:eval_2escm"),(void*)f_10267},
{C_text("f_10296:eval_2escm"),(void*)f_10296},
{C_text("f_10308:eval_2escm"),(void*)f_10308},
{C_text("f_10314:eval_2escm"),(void*)f_10314},
{C_text("f_10318:eval_2escm"),(void*)f_10318},
{C_text("f_10321:eval_2escm"),(void*)f_10321},
{C_text("f_10323:eval_2escm"),(void*)f_10323},
{C_text("f_10327:eval_2escm"),(void*)f_10327},
{C_text("f_10330:eval_2escm"),(void*)f_10330},
{C_text("f_10340:eval_2escm"),(void*)f_10340},
{C_text("f_10352:eval_2escm"),(void*)f_10352},
{C_text("f_10359:eval_2escm"),(void*)f_10359},
{C_text("f_10366:eval_2escm"),(void*)f_10366},
{C_text("f_10368:eval_2escm"),(void*)f_10368},
{C_text("f_10381:eval_2escm"),(void*)f_10381},
{C_text("f_10415:eval_2escm"),(void*)f_10415},
{C_text("f_10424:eval_2escm"),(void*)f_10424},
{C_text("f_10440:eval_2escm"),(void*)f_10440},
{C_text("f_10453:eval_2escm"),(void*)f_10453},
{C_text("f_10456:eval_2escm"),(void*)f_10456},
{C_text("f_10468:eval_2escm"),(void*)f_10468},
{C_text("f_10472:eval_2escm"),(void*)f_10472},
{C_text("f_10476:eval_2escm"),(void*)f_10476},
{C_text("f_10479:eval_2escm"),(void*)f_10479},
{C_text("f_10487:eval_2escm"),(void*)f_10487},
{C_text("f_10506:eval_2escm"),(void*)f_10506},
{C_text("f_10516:eval_2escm"),(void*)f_10516},
{C_text("f_10529:eval_2escm"),(void*)f_10529},
{C_text("f_10552:eval_2escm"),(void*)f_10552},
{C_text("f_10571:eval_2escm"),(void*)f_10571},
{C_text("f_10581:eval_2escm"),(void*)f_10581},
{C_text("f_10594:eval_2escm"),(void*)f_10594},
{C_text("f_10617:eval_2escm"),(void*)f_10617},
{C_text("f_10631:eval_2escm"),(void*)f_10631},
{C_text("f_10658:eval_2escm"),(void*)f_10658},
{C_text("f_10761:eval_2escm"),(void*)f_10761},
{C_text("f_10764:eval_2escm"),(void*)f_10764},
{C_text("f_10777:eval_2escm"),(void*)f_10777},
{C_text("f_10780:eval_2escm"),(void*)f_10780},
{C_text("f_10783:eval_2escm"),(void*)f_10783},
{C_text("f_10797:eval_2escm"),(void*)f_10797},
{C_text("f_10833:eval_2escm"),(void*)f_10833},
{C_text("f_10836:eval_2escm"),(void*)f_10836},
{C_text("f_10846:eval_2escm"),(void*)f_10846},
{C_text("f_10848:eval_2escm"),(void*)f_10848},
{C_text("f_10858:eval_2escm"),(void*)f_10858},
{C_text("f_10872:eval_2escm"),(void*)f_10872},
{C_text("f_10883:eval_2escm"),(void*)f_10883},
{C_text("f_10890:eval_2escm"),(void*)f_10890},
{C_text("f_10893:eval_2escm"),(void*)f_10893},
{C_text("f_10898:eval_2escm"),(void*)f_10898},
{C_text("f_10903:eval_2escm"),(void*)f_10903},
{C_text("f_10909:eval_2escm"),(void*)f_10909},
{C_text("f_10915:eval_2escm"),(void*)f_10915},
{C_text("f_10919:eval_2escm"),(void*)f_10919},
{C_text("f_10922:eval_2escm"),(void*)f_10922},
{C_text("f_10926:eval_2escm"),(void*)f_10926},
{C_text("f_10928:eval_2escm"),(void*)f_10928},
{C_text("f_10934:eval_2escm"),(void*)f_10934},
{C_text("f_10940:eval_2escm"),(void*)f_10940},
{C_text("f_10946:eval_2escm"),(void*)f_10946},
{C_text("f_10952:eval_2escm"),(void*)f_10952},
{C_text("f_10956:eval_2escm"),(void*)f_10956},
{C_text("f_10961:eval_2escm"),(void*)f_10961},
{C_text("f_10967:eval_2escm"),(void*)f_10967},
{C_text("f_10971:eval_2escm"),(void*)f_10971},
{C_text("f_10973:eval_2escm"),(void*)f_10973},
{C_text("f_10979:eval_2escm"),(void*)f_10979},
{C_text("f_10987:eval_2escm"),(void*)f_10987},
{C_text("f_10989:eval_2escm"),(void*)f_10989},
{C_text("f_10993:eval_2escm"),(void*)f_10993},
{C_text("f_10998:eval_2escm"),(void*)f_10998},
{C_text("f_11002:eval_2escm"),(void*)f_11002},
{C_text("f_11009:eval_2escm"),(void*)f_11009},
{C_text("f_11013:eval_2escm"),(void*)f_11013},
{C_text("f_11015:eval_2escm"),(void*)f_11015},
{C_text("f_11028:eval_2escm"),(void*)f_11028},
{C_text("f_11034:eval_2escm"),(void*)f_11034},
{C_text("f_11038:eval_2escm"),(void*)f_11038},
{C_text("f_11041:eval_2escm"),(void*)f_11041},
{C_text("f_11048:eval_2escm"),(void*)f_11048},
{C_text("f_11052:eval_2escm"),(void*)f_11052},
{C_text("f_11054:eval_2escm"),(void*)f_11054},
{C_text("f_11058:eval_2escm"),(void*)f_11058},
{C_text("f_11063:eval_2escm"),(void*)f_11063},
{C_text("f_11067:eval_2escm"),(void*)f_11067},
{C_text("f_11070:eval_2escm"),(void*)f_11070},
{C_text("f_11077:eval_2escm"),(void*)f_11077},
{C_text("f_11081:eval_2escm"),(void*)f_11081},
{C_text("f_11085:eval_2escm"),(void*)f_11085},
{C_text("f_11089:eval_2escm"),(void*)f_11089},
{C_text("f_11091:eval_2escm"),(void*)f_11091},
{C_text("f_11097:eval_2escm"),(void*)f_11097},
{C_text("f_11105:eval_2escm"),(void*)f_11105},
{C_text("f_11107:eval_2escm"),(void*)f_11107},
{C_text("f_11113:eval_2escm"),(void*)f_11113},
{C_text("f_11117:eval_2escm"),(void*)f_11117},
{C_text("f_11120:eval_2escm"),(void*)f_11120},
{C_text("f_11127:eval_2escm"),(void*)f_11127},
{C_text("f_11131:eval_2escm"),(void*)f_11131},
{C_text("f_11133:eval_2escm"),(void*)f_11133},
{C_text("f_11137:eval_2escm"),(void*)f_11137},
{C_text("f_11142:eval_2escm"),(void*)f_11142},
{C_text("f_11146:eval_2escm"),(void*)f_11146},
{C_text("f_11153:eval_2escm"),(void*)f_11153},
{C_text("f_11155:eval_2escm"),(void*)f_11155},
{C_text("f_11159:eval_2escm"),(void*)f_11159},
{C_text("f_11164:eval_2escm"),(void*)f_11164},
{C_text("f_11168:eval_2escm"),(void*)f_11168},
{C_text("f_11170:eval_2escm"),(void*)f_11170},
{C_text("f_11182:eval_2escm"),(void*)f_11182},
{C_text("f_11189:eval_2escm"),(void*)f_11189},
{C_text("f_11191:eval_2escm"),(void*)f_11191},
{C_text("f_11197:eval_2escm"),(void*)f_11197},
{C_text("f_11222:eval_2escm"),(void*)f_11222},
{C_text("f_11236:eval_2escm"),(void*)f_11236},
{C_text("f_11248:eval_2escm"),(void*)f_11248},
{C_text("f_11252:eval_2escm"),(void*)f_11252},
{C_text("f_11279:eval_2escm"),(void*)f_11279},
{C_text("f_11283:eval_2escm"),(void*)f_11283},
{C_text("f_11287:eval_2escm"),(void*)f_11287},
{C_text("f_11291:eval_2escm"),(void*)f_11291},
{C_text("f_11295:eval_2escm"),(void*)f_11295},
{C_text("f_11303:eval_2escm"),(void*)f_11303},
{C_text("f_11311:eval_2escm"),(void*)f_11311},
{C_text("f_11319:eval_2escm"),(void*)f_11319},
{C_text("f_11325:eval_2escm"),(void*)f_11325},
{C_text("f_11329:eval_2escm"),(void*)f_11329},
{C_text("f_11332:eval_2escm"),(void*)f_11332},
{C_text("f_11341:eval_2escm"),(void*)f_11341},
{C_text("f_11347:eval_2escm"),(void*)f_11347},
{C_text("f_11351:eval_2escm"),(void*)f_11351},
{C_text("f_11354:eval_2escm"),(void*)f_11354},
{C_text("f_11366:eval_2escm"),(void*)f_11366},
{C_text("f_11368:eval_2escm"),(void*)f_11368},
{C_text("f_11374:eval_2escm"),(void*)f_11374},
{C_text("f_11379:eval_2escm"),(void*)f_11379},
{C_text("f_11383:eval_2escm"),(void*)f_11383},
{C_text("f_11386:eval_2escm"),(void*)f_11386},
{C_text("f_11396:eval_2escm"),(void*)f_11396},
{C_text("f_11409:eval_2escm"),(void*)f_11409},
{C_text("f_11414:eval_2escm"),(void*)f_11414},
{C_text("f_11421:eval_2escm"),(void*)f_11421},
{C_text("f_11424:eval_2escm"),(void*)f_11424},
{C_text("f_11436:eval_2escm"),(void*)f_11436},
{C_text("f_11444:eval_2escm"),(void*)f_11444},
{C_text("f_11448:eval_2escm"),(void*)f_11448},
{C_text("f_11451:eval_2escm"),(void*)f_11451},
{C_text("f_11455:eval_2escm"),(void*)f_11455},
{C_text("f_11459:eval_2escm"),(void*)f_11459},
{C_text("f_11462:eval_2escm"),(void*)f_11462},
{C_text("f_11465:eval_2escm"),(void*)f_11465},
{C_text("f_11474:eval_2escm"),(void*)f_11474},
{C_text("f_11484:eval_2escm"),(void*)f_11484},
{C_text("f_11488:eval_2escm"),(void*)f_11488},
{C_text("f_11491:eval_2escm"),(void*)f_11491},
{C_text("f_11494:eval_2escm"),(void*)f_11494},
{C_text("f_11497:eval_2escm"),(void*)f_11497},
{C_text("f_11505:eval_2escm"),(void*)f_11505},
{C_text("f_11514:eval_2escm"),(void*)f_11514},
{C_text("f_3492:eval_2escm"),(void*)f_3492},
{C_text("f_3495:eval_2escm"),(void*)f_3495},
{C_text("f_3498:eval_2escm"),(void*)f_3498},
{C_text("f_3501:eval_2escm"),(void*)f_3501},
{C_text("f_3509:eval_2escm"),(void*)f_3509},
{C_text("f_3522:eval_2escm"),(void*)f_3522},
{C_text("f_3530:eval_2escm"),(void*)f_3530},
{C_text("f_3534:eval_2escm"),(void*)f_3534},
{C_text("f_3537:eval_2escm"),(void*)f_3537},
{C_text("f_3540:eval_2escm"),(void*)f_3540},
{C_text("f_3545:eval_2escm"),(void*)f_3545},
{C_text("f_3547:eval_2escm"),(void*)f_3547},
{C_text("f_3574:eval_2escm"),(void*)f_3574},
{C_text("f_3587:eval_2escm"),(void*)f_3587},
{C_text("f_3609:eval_2escm"),(void*)f_3609},
{C_text("f_3613:eval_2escm"),(void*)f_3613},
{C_text("f_3621:eval_2escm"),(void*)f_3621},
{C_text("f_3627:eval_2escm"),(void*)f_3627},
{C_text("f_3634:eval_2escm"),(void*)f_3634},
{C_text("f_3641:eval_2escm"),(void*)f_3641},
{C_text("f_3643:eval_2escm"),(void*)f_3643},
{C_text("f_3647:eval_2escm"),(void*)f_3647},
{C_text("f_3655:eval_2escm"),(void*)f_3655},
{C_text("f_3672:eval_2escm"),(void*)f_3672},
{C_text("f_3702:eval_2escm"),(void*)f_3702},
{C_text("f_3732:eval_2escm"),(void*)f_3732},
{C_text("f_3756:eval_2escm"),(void*)f_3756},
{C_text("f_3762:eval_2escm"),(void*)f_3762},
{C_text("f_3769:eval_2escm"),(void*)f_3769},
{C_text("f_3770:eval_2escm"),(void*)f_3770},
{C_text("f_3782:eval_2escm"),(void*)f_3782},
{C_text("f_3788:eval_2escm"),(void*)f_3788},
{C_text("f_3798:eval_2escm"),(void*)f_3798},
{C_text("f_3801:eval_2escm"),(void*)f_3801},
{C_text("f_3808:eval_2escm"),(void*)f_3808},
{C_text("f_3818:eval_2escm"),(void*)f_3818},
{C_text("f_3819:eval_2escm"),(void*)f_3819},
{C_text("f_3824:eval_2escm"),(void*)f_3824},
{C_text("f_3828:eval_2escm"),(void*)f_3828},
{C_text("f_3849:eval_2escm"),(void*)f_3849},
{C_text("f_3871:eval_2escm"),(void*)f_3871},
{C_text("f_3882:eval_2escm"),(void*)f_3882},
{C_text("f_3897:eval_2escm"),(void*)f_3897},
{C_text("f_3916:eval_2escm"),(void*)f_3916},
{C_text("f_3939:eval_2escm"),(void*)f_3939},
{C_text("f_3960:eval_2escm"),(void*)f_3960},
{C_text("f_3979:eval_2escm"),(void*)f_3979},
{C_text("f_3986:eval_2escm"),(void*)f_3986},
{C_text("f_3994:eval_2escm"),(void*)f_3994},
{C_text("f_4002:eval_2escm"),(void*)f_4002},
{C_text("f_4010:eval_2escm"),(void*)f_4010},
{C_text("f_4012:eval_2escm"),(void*)f_4012},
{C_text("f_4031:eval_2escm"),(void*)f_4031},
{C_text("f_4033:eval_2escm"),(void*)f_4033},
{C_text("f_4043:eval_2escm"),(void*)f_4043},
{C_text("f_4044:eval_2escm"),(void*)f_4044},
{C_text("f_4063:eval_2escm"),(void*)f_4063},
{C_text("f_4066:eval_2escm"),(void*)f_4066},
{C_text("f_4081:eval_2escm"),(void*)f_4081},
{C_text("f_4090:eval_2escm"),(void*)f_4090},
{C_text("f_4097:eval_2escm"),(void*)f_4097},
{C_text("f_4105:eval_2escm"),(void*)f_4105},
{C_text("f_4113:eval_2escm"),(void*)f_4113},
{C_text("f_4121:eval_2escm"),(void*)f_4121},
{C_text("f_4129:eval_2escm"),(void*)f_4129},
{C_text("f_4137:eval_2escm"),(void*)f_4137},
{C_text("f_4145:eval_2escm"),(void*)f_4145},
{C_text("f_4147:eval_2escm"),(void*)f_4147},
{C_text("f_4176:eval_2escm"),(void*)f_4176},
{C_text("f_4210:eval_2escm"),(void*)f_4210},
{C_text("f_4220:eval_2escm"),(void*)f_4220},
{C_text("f_4223:eval_2escm"),(void*)f_4223},
{C_text("f_4226:eval_2escm"),(void*)f_4226},
{C_text("f_4227:eval_2escm"),(void*)f_4227},
{C_text("f_4234:eval_2escm"),(void*)f_4234},
{C_text("f_4308:eval_2escm"),(void*)f_4308},
{C_text("f_4311:eval_2escm"),(void*)f_4311},
{C_text("f_4312:eval_2escm"),(void*)f_4312},
{C_text("f_4316:eval_2escm"),(void*)f_4316},
{C_text("f_4330:eval_2escm"),(void*)f_4330},
{C_text("f_4333:eval_2escm"),(void*)f_4333},
{C_text("f_4336:eval_2escm"),(void*)f_4336},
{C_text("f_4337:eval_2escm"),(void*)f_4337},
{C_text("f_4341:eval_2escm"),(void*)f_4341},
{C_text("f_4344:eval_2escm"),(void*)f_4344},
{C_text("f_4382:eval_2escm"),(void*)f_4382},
{C_text("f_4406:eval_2escm"),(void*)f_4406},
{C_text("f_4412:eval_2escm"),(void*)f_4412},
{C_text("f_4416:eval_2escm"),(void*)f_4416},
{C_text("f_4425:eval_2escm"),(void*)f_4425},
{C_text("f_4429:eval_2escm"),(void*)f_4429},
{C_text("f_4436:eval_2escm"),(void*)f_4436},
{C_text("f_4437:eval_2escm"),(void*)f_4437},
{C_text("f_4441:eval_2escm"),(void*)f_4441},
{C_text("f_4467:eval_2escm"),(void*)f_4467},
{C_text("f_4472:eval_2escm"),(void*)f_4472},
{C_text("f_4484:eval_2escm"),(void*)f_4484},
{C_text("f_4485:eval_2escm"),(void*)f_4485},
{C_text("f_4494:eval_2escm"),(void*)f_4494},
{C_text("f_4521:eval_2escm"),(void*)f_4521},
{C_text("f_4530:eval_2escm"),(void*)f_4530},
{C_text("f_4536:eval_2escm"),(void*)f_4536},
{C_text("f_4539:eval_2escm"),(void*)f_4539},
{C_text("f_4548:eval_2escm"),(void*)f_4548},
{C_text("f_4549:eval_2escm"),(void*)f_4549},
{C_text("f_4565:eval_2escm"),(void*)f_4565},
{C_text("f_4569:eval_2escm"),(void*)f_4569},
{C_text("f_4582:eval_2escm"),(void*)f_4582},
{C_text("f_4585:eval_2escm"),(void*)f_4585},
{C_text("f_4586:eval_2escm"),(void*)f_4586},
{C_text("f_4602:eval_2escm"),(void*)f_4602},
{C_text("f_4606:eval_2escm"),(void*)f_4606},
{C_text("f_4610:eval_2escm"),(void*)f_4610},
{C_text("f_4618:eval_2escm"),(void*)f_4618},
{C_text("f_4631:eval_2escm"),(void*)f_4631},
{C_text("f_4634:eval_2escm"),(void*)f_4634},
{C_text("f_4640:eval_2escm"),(void*)f_4640},
{C_text("f_4641:eval_2escm"),(void*)f_4641},
{C_text("f_4657:eval_2escm"),(void*)f_4657},
{C_text("f_4661:eval_2escm"),(void*)f_4661},
{C_text("f_4665:eval_2escm"),(void*)f_4665},
{C_text("f_4669:eval_2escm"),(void*)f_4669},
{C_text("f_4677:eval_2escm"),(void*)f_4677},
{C_text("f_4685:eval_2escm"),(void*)f_4685},
{C_text("f_4698:eval_2escm"),(void*)f_4698},
{C_text("f_4701:eval_2escm"),(void*)f_4701},
{C_text("f_4707:eval_2escm"),(void*)f_4707},
{C_text("f_4710:eval_2escm"),(void*)f_4710},
{C_text("f_4711:eval_2escm"),(void*)f_4711},
{C_text("f_4727:eval_2escm"),(void*)f_4727},
{C_text("f_4731:eval_2escm"),(void*)f_4731},
{C_text("f_4735:eval_2escm"),(void*)f_4735},
{C_text("f_4739:eval_2escm"),(void*)f_4739},
{C_text("f_4743:eval_2escm"),(void*)f_4743},
{C_text("f_4751:eval_2escm"),(void*)f_4751},
{C_text("f_4759:eval_2escm"),(void*)f_4759},
{C_text("f_4767:eval_2escm"),(void*)f_4767},
{C_text("f_4775:eval_2escm"),(void*)f_4775},
{C_text("f_4788:eval_2escm"),(void*)f_4788},
{C_text("f_4789:eval_2escm"),(void*)f_4789},
{C_text("f_4793:eval_2escm"),(void*)f_4793},
{C_text("f_4796:eval_2escm"),(void*)f_4796},
{C_text("f_4805:eval_2escm"),(void*)f_4805},
{C_text("f_4830:eval_2escm"),(void*)f_4830},
{C_text("f_4835:eval_2escm"),(void*)f_4835},
{C_text("f_4860:eval_2escm"),(void*)f_4860},
{C_text("f_4877:eval_2escm"),(void*)f_4877},
{C_text("f_4881:eval_2escm"),(void*)f_4881},
{C_text("f_4885:eval_2escm"),(void*)f_4885},
{C_text("f_4888:eval_2escm"),(void*)f_4888},
{C_text("f_4894:eval_2escm"),(void*)f_4894},
{C_text("f_4902:eval_2escm"),(void*)f_4902},
{C_text("f_4910:eval_2escm"),(void*)f_4910},
{C_text("f_4912:eval_2escm"),(void*)f_4912},
{C_text("f_4916:eval_2escm"),(void*)f_4916},
{C_text("f_4919:eval_2escm"),(void*)f_4919},
{C_text("f_4924:eval_2escm"),(void*)f_4924},
{C_text("f_4926:eval_2escm"),(void*)f_4926},
{C_text("f_4951:eval_2escm"),(void*)f_4951},
{C_text("f_4960:eval_2escm"),(void*)f_4960},
{C_text("f_5033:eval_2escm"),(void*)f_5033},
{C_text("f_5037:eval_2escm"),(void*)f_5037},
{C_text("f_5057:eval_2escm"),(void*)f_5057},
{C_text("f_5071:eval_2escm"),(void*)f_5071},
{C_text("f_5105:eval_2escm"),(void*)f_5105},
{C_text("f_5155:eval_2escm"),(void*)f_5155},
{C_text("f_5164:eval_2escm"),(void*)f_5164},
{C_text("f_5190:eval_2escm"),(void*)f_5190},
{C_text("f_5217:eval_2escm"),(void*)f_5217},
{C_text("f_5221:eval_2escm"),(void*)f_5221},
{C_text("f_5233:eval_2escm"),(void*)f_5233},
{C_text("f_5247:eval_2escm"),(void*)f_5247},
{C_text("f_5295:eval_2escm"),(void*)f_5295},
{C_text("f_5343:eval_2escm"),(void*)f_5343},
{C_text("f_5377:eval_2escm"),(void*)f_5377},
{C_text("f_5402:eval_2escm"),(void*)f_5402},
{C_text("f_5411:eval_2escm"),(void*)f_5411},
{C_text("f_5452:eval_2escm"),(void*)f_5452},
{C_text("f_5463:eval_2escm"),(void*)f_5463},
{C_text("f_5468:eval_2escm"),(void*)f_5468},
{C_text("f_5478:eval_2escm"),(void*)f_5478},
{C_text("f_5481:eval_2escm"),(void*)f_5481},
{C_text("f_5487:eval_2escm"),(void*)f_5487},
{C_text("f_5497:eval_2escm"),(void*)f_5497},
{C_text("f_5503:eval_2escm"),(void*)f_5503},
{C_text("f_5516:eval_2escm"),(void*)f_5516},
{C_text("f_5522:eval_2escm"),(void*)f_5522},
{C_text("f_5540:eval_2escm"),(void*)f_5540},
{C_text("f_5546:eval_2escm"),(void*)f_5546},
{C_text("f_5559:eval_2escm"),(void*)f_5559},
{C_text("f_5565:eval_2escm"),(void*)f_5565},
{C_text("f_5587:eval_2escm"),(void*)f_5587},
{C_text("f_5593:eval_2escm"),(void*)f_5593},
{C_text("f_5606:eval_2escm"),(void*)f_5606},
{C_text("f_5612:eval_2escm"),(void*)f_5612},
{C_text("f_5634:eval_2escm"),(void*)f_5634},
{C_text("f_5640:eval_2escm"),(void*)f_5640},
{C_text("f_5653:eval_2escm"),(void*)f_5653},
{C_text("f_5659:eval_2escm"),(void*)f_5659},
{C_text("f_5681:eval_2escm"),(void*)f_5681},
{C_text("f_5687:eval_2escm"),(void*)f_5687},
{C_text("f_5700:eval_2escm"),(void*)f_5700},
{C_text("f_5706:eval_2escm"),(void*)f_5706},
{C_text("f_5718:eval_2escm"),(void*)f_5718},
{C_text("f_5722:eval_2escm"),(void*)f_5722},
{C_text("f_5728:eval_2escm"),(void*)f_5728},
{C_text("f_5740:eval_2escm"),(void*)f_5740},
{C_text("f_5744:eval_2escm"),(void*)f_5744},
{C_text("f_5745:eval_2escm"),(void*)f_5745},
{C_text("f_5751:eval_2escm"),(void*)f_5751},
{C_text("f_5773:eval_2escm"),(void*)f_5773},
{C_text("f_5789:eval_2escm"),(void*)f_5789},
{C_text("f_5793:eval_2escm"),(void*)f_5793},
{C_text("f_5797:eval_2escm"),(void*)f_5797},
{C_text("f_5800:eval_2escm"),(void*)f_5800},
{C_text("f_5806:eval_2escm"),(void*)f_5806},
{C_text("f_5814:eval_2escm"),(void*)f_5814},
{C_text("f_5820:eval_2escm"),(void*)f_5820},
{C_text("f_5824:eval_2escm"),(void*)f_5824},
{C_text("f_5827:eval_2escm"),(void*)f_5827},
{C_text("f_5832:eval_2escm"),(void*)f_5832},
{C_text("f_5834:eval_2escm"),(void*)f_5834},
{C_text("f_5859:eval_2escm"),(void*)f_5859},
{C_text("f_5869:eval_2escm"),(void*)f_5869},
{C_text("f_5874:eval_2escm"),(void*)f_5874},
{C_text("f_5882:eval_2escm"),(void*)f_5882},
{C_text("f_5884:eval_2escm"),(void*)f_5884},
{C_text("f_5895:eval_2escm"),(void*)f_5895},
{C_text("f_5904:eval_2escm"),(void*)f_5904},
{C_text("f_5909:eval_2escm"),(void*)f_5909},
{C_text("f_5913:eval_2escm"),(void*)f_5913},
{C_text("f_5917:eval_2escm"),(void*)f_5917},
{C_text("f_5920:eval_2escm"),(void*)f_5920},
{C_text("f_5926:eval_2escm"),(void*)f_5926},
{C_text("f_5934:eval_2escm"),(void*)f_5934},
{C_text("f_5942:eval_2escm"),(void*)f_5942},
{C_text("f_5944:eval_2escm"),(void*)f_5944},
{C_text("f_5948:eval_2escm"),(void*)f_5948},
{C_text("f_5951:eval_2escm"),(void*)f_5951},
{C_text("f_5969:eval_2escm"),(void*)f_5969},
{C_text("f_5973:eval_2escm"),(void*)f_5973},
{C_text("f_5977:eval_2escm"),(void*)f_5977},
{C_text("f_5981:eval_2escm"),(void*)f_5981},
{C_text("f_5996:eval_2escm"),(void*)f_5996},
{C_text("f_6000:eval_2escm"),(void*)f_6000},
{C_text("f_6002:eval_2escm"),(void*)f_6002},
{C_text("f_6056:eval_2escm"),(void*)f_6056},
{C_text("f_6060:eval_2escm"),(void*)f_6060},
{C_text("f_6064:eval_2escm"),(void*)f_6064},
{C_text("f_6079:eval_2escm"),(void*)f_6079},
{C_text("f_6082:eval_2escm"),(void*)f_6082},
{C_text("f_6083:eval_2escm"),(void*)f_6083},
{C_text("f_6102:eval_2escm"),(void*)f_6102},
{C_text("f_6106:eval_2escm"),(void*)f_6106},
{C_text("f_6110:eval_2escm"),(void*)f_6110},
{C_text("f_6113:eval_2escm"),(void*)f_6113},
{C_text("f_6119:eval_2escm"),(void*)f_6119},
{C_text("f_6127:eval_2escm"),(void*)f_6127},
{C_text("f_6135:eval_2escm"),(void*)f_6135},
{C_text("f_6137:eval_2escm"),(void*)f_6137},
{C_text("f_6141:eval_2escm"),(void*)f_6141},
{C_text("f_6144:eval_2escm"),(void*)f_6144},
{C_text("f_6147:eval_2escm"),(void*)f_6147},
{C_text("f_6172:eval_2escm"),(void*)f_6172},
{C_text("f_6174:eval_2escm"),(void*)f_6174},
{C_text("f_6221:eval_2escm"),(void*)f_6221},
{C_text("f_6224:eval_2escm"),(void*)f_6224},
{C_text("f_6227:eval_2escm"),(void*)f_6227},
{C_text("f_6230:eval_2escm"),(void*)f_6230},
{C_text("f_6237:eval_2escm"),(void*)f_6237},
{C_text("f_6241:eval_2escm"),(void*)f_6241},
{C_text("f_6245:eval_2escm"),(void*)f_6245},
{C_text("f_6262:eval_2escm"),(void*)f_6262},
{C_text("f_6284:eval_2escm"),(void*)f_6284},
{C_text("f_6292:eval_2escm"),(void*)f_6292},
{C_text("f_6311:eval_2escm"),(void*)f_6311},
{C_text("f_6319:eval_2escm"),(void*)f_6319},
{C_text("f_6329:eval_2escm"),(void*)f_6329},
{C_text("f_6333:eval_2escm"),(void*)f_6333},
{C_text("f_6362:eval_2escm"),(void*)f_6362},
{C_text("f_6374:eval_2escm"),(void*)f_6374},
{C_text("f_6376:eval_2escm"),(void*)f_6376},
{C_text("f_6390:eval_2escm"),(void*)f_6390},
{C_text("f_6415:eval_2escm"),(void*)f_6415},
{C_text("f_6431:eval_2escm"),(void*)f_6431},
{C_text("f_6440:eval_2escm"),(void*)f_6440},
{C_text("f_6443:eval_2escm"),(void*)f_6443},
{C_text("f_6446:eval_2escm"),(void*)f_6446},
{C_text("f_6449:eval_2escm"),(void*)f_6449},
{C_text("f_6454:eval_2escm"),(void*)f_6454},
{C_text("f_6458:eval_2escm"),(void*)f_6458},
{C_text("f_6461:eval_2escm"),(void*)f_6461},
{C_text("f_6464:eval_2escm"),(void*)f_6464},
{C_text("f_6467:eval_2escm"),(void*)f_6467},
{C_text("f_6471:eval_2escm"),(void*)f_6471},
{C_text("f_6475:eval_2escm"),(void*)f_6475},
{C_text("f_6479:eval_2escm"),(void*)f_6479},
{C_text("f_6483:eval_2escm"),(void*)f_6483},
{C_text("f_6486:eval_2escm"),(void*)f_6486},
{C_text("f_6489:eval_2escm"),(void*)f_6489},
{C_text("f_6492:eval_2escm"),(void*)f_6492},
{C_text("f_6495:eval_2escm"),(void*)f_6495},
{C_text("f_6510:eval_2escm"),(void*)f_6510},
{C_text("f_6516:eval_2escm"),(void*)f_6516},
{C_text("f_6526:eval_2escm"),(void*)f_6526},
{C_text("f_6536:eval_2escm"),(void*)f_6536},
{C_text("f_6539:eval_2escm"),(void*)f_6539},
{C_text("f_6542:eval_2escm"),(void*)f_6542},
{C_text("f_6543:eval_2escm"),(void*)f_6543},
{C_text("f_6549:eval_2escm"),(void*)f_6549},
{C_text("f_6572:eval_2escm"),(void*)f_6572},
{C_text("f_6583:eval_2escm"),(void*)f_6583},
{C_text("f_6587:eval_2escm"),(void*)f_6587},
{C_text("f_6602:eval_2escm"),(void*)f_6602},
{C_text("f_6606:eval_2escm"),(void*)f_6606},
{C_text("f_6610:eval_2escm"),(void*)f_6610},
{C_text("f_6613:eval_2escm"),(void*)f_6613},
{C_text("f_6616:eval_2escm"),(void*)f_6616},
{C_text("f_6619:eval_2escm"),(void*)f_6619},
{C_text("f_6622:eval_2escm"),(void*)f_6622},
{C_text("f_6625:eval_2escm"),(void*)f_6625},
{C_text("f_6628:eval_2escm"),(void*)f_6628},
{C_text("f_6631:eval_2escm"),(void*)f_6631},
{C_text("f_6638:eval_2escm"),(void*)f_6638},
{C_text("f_6645:eval_2escm"),(void*)f_6645},
{C_text("f_6658:eval_2escm"),(void*)f_6658},
{C_text("f_6669:eval_2escm"),(void*)f_6669},
{C_text("f_6702:eval_2escm"),(void*)f_6702},
{C_text("f_6727:eval_2escm"),(void*)f_6727},
{C_text("f_6755:eval_2escm"),(void*)f_6755},
{C_text("f_6789:eval_2escm"),(void*)f_6789},
{C_text("f_6813:eval_2escm"),(void*)f_6813},
{C_text("f_6819:eval_2escm"),(void*)f_6819},
{C_text("f_6844:eval_2escm"),(void*)f_6844},
{C_text("f_6873:eval_2escm"),(void*)f_6873},
{C_text("f_6885:eval_2escm"),(void*)f_6885},
{C_text("f_6908:eval_2escm"),(void*)f_6908},
{C_text("f_6921:eval_2escm"),(void*)f_6921},
{C_text("f_6941:eval_2escm"),(void*)f_6941},
{C_text("f_6967:eval_2escm"),(void*)f_6967},
{C_text("f_6985:eval_2escm"),(void*)f_6985},
{C_text("f_6997:eval_2escm"),(void*)f_6997},
{C_text("f_7002:eval_2escm"),(void*)f_7002},
{C_text("f_7010:eval_2escm"),(void*)f_7010},
{C_text("f_7012:eval_2escm"),(void*)f_7012},
{C_text("f_7195:eval_2escm"),(void*)f_7195},
{C_text("f_7198:eval_2escm"),(void*)f_7198},
{C_text("f_7205:eval_2escm"),(void*)f_7205},
{C_text("f_7228:eval_2escm"),(void*)f_7228},
{C_text("f_7257:eval_2escm"),(void*)f_7257},
{C_text("f_7286:eval_2escm"),(void*)f_7286},
{C_text("f_7303:eval_2escm"),(void*)f_7303},
{C_text("f_7329:eval_2escm"),(void*)f_7329},
{C_text("f_7336:eval_2escm"),(void*)f_7336},
{C_text("f_7358:eval_2escm"),(void*)f_7358},
{C_text("f_7365:eval_2escm"),(void*)f_7365},
{C_text("f_7377:eval_2escm"),(void*)f_7377},
{C_text("f_7378:eval_2escm"),(void*)f_7378},
{C_text("f_7385:eval_2escm"),(void*)f_7385},
{C_text("f_7392:eval_2escm"),(void*)f_7392},
{C_text("f_7405:eval_2escm"),(void*)f_7405},
{C_text("f_7408:eval_2escm"),(void*)f_7408},
{C_text("f_7409:eval_2escm"),(void*)f_7409},
{C_text("f_7416:eval_2escm"),(void*)f_7416},
{C_text("f_7423:eval_2escm"),(void*)f_7423},
{C_text("f_7427:eval_2escm"),(void*)f_7427},
{C_text("f_7441:eval_2escm"),(void*)f_7441},
{C_text("f_7444:eval_2escm"),(void*)f_7444},
{C_text("f_7447:eval_2escm"),(void*)f_7447},
{C_text("f_7448:eval_2escm"),(void*)f_7448},
{C_text("f_7455:eval_2escm"),(void*)f_7455},
{C_text("f_7462:eval_2escm"),(void*)f_7462},
{C_text("f_7466:eval_2escm"),(void*)f_7466},
{C_text("f_7470:eval_2escm"),(void*)f_7470},
{C_text("f_7485:eval_2escm"),(void*)f_7485},
{C_text("f_7488:eval_2escm"),(void*)f_7488},
{C_text("f_7491:eval_2escm"),(void*)f_7491},
{C_text("f_7494:eval_2escm"),(void*)f_7494},
{C_text("f_7495:eval_2escm"),(void*)f_7495},
{C_text("f_7502:eval_2escm"),(void*)f_7502},
{C_text("f_7509:eval_2escm"),(void*)f_7509},
{C_text("f_7513:eval_2escm"),(void*)f_7513},
{C_text("f_7517:eval_2escm"),(void*)f_7517},
{C_text("f_7521:eval_2escm"),(void*)f_7521},
{C_text("f_7532:eval_2escm"),(void*)f_7532},
{C_text("f_7542:eval_2escm"),(void*)f_7542},
{C_text("f_7543:eval_2escm"),(void*)f_7543},
{C_text("f_7554:eval_2escm"),(void*)f_7554},
{C_text("f_7559:eval_2escm"),(void*)f_7559},
{C_text("f_7569:eval_2escm"),(void*)f_7569},
{C_text("f_7571:eval_2escm"),(void*)f_7571},
{C_text("f_7596:eval_2escm"),(void*)f_7596},
{C_text("f_7605:eval_2escm"),(void*)f_7605},
{C_text("f_7630:eval_2escm"),(void*)f_7630},
{C_text("f_7653:eval_2escm"),(void*)f_7653},
{C_text("f_7672:eval_2escm"),(void*)f_7672},
{C_text("f_7722:eval_2escm"),(void*)f_7722},
{C_text("f_7726:eval_2escm"),(void*)f_7726},
{C_text("f_7729:eval_2escm"),(void*)f_7729},
{C_text("f_7734:eval_2escm"),(void*)f_7734},
{C_text("f_7738:eval_2escm"),(void*)f_7738},
{C_text("f_7741:eval_2escm"),(void*)f_7741},
{C_text("f_7744:eval_2escm"),(void*)f_7744},
{C_text("f_7748:eval_2escm"),(void*)f_7748},
{C_text("f_7752:eval_2escm"),(void*)f_7752},
{C_text("f_7756:eval_2escm"),(void*)f_7756},
{C_text("f_7759:eval_2escm"),(void*)f_7759},
{C_text("f_7762:eval_2escm"),(void*)f_7762},
{C_text("f_7765:eval_2escm"),(void*)f_7765},
{C_text("f_7777:eval_2escm"),(void*)f_7777},
{C_text("f_7783:eval_2escm"),(void*)f_7783},
{C_text("f_7787:eval_2escm"),(void*)f_7787},
{C_text("f_7792:eval_2escm"),(void*)f_7792},
{C_text("f_7796:eval_2escm"),(void*)f_7796},
{C_text("f_7803:eval_2escm"),(void*)f_7803},
{C_text("f_7807:eval_2escm"),(void*)f_7807},
{C_text("f_7809:eval_2escm"),(void*)f_7809},
{C_text("f_7813:eval_2escm"),(void*)f_7813},
{C_text("f_7816:eval_2escm"),(void*)f_7816},
{C_text("f_7819:eval_2escm"),(void*)f_7819},
{C_text("f_7822:eval_2escm"),(void*)f_7822},
{C_text("f_7825:eval_2escm"),(void*)f_7825},
{C_text("f_7828:eval_2escm"),(void*)f_7828},
{C_text("f_7835:eval_2escm"),(void*)f_7835},
{C_text("f_7837:eval_2escm"),(void*)f_7837},
{C_text("f_7845:eval_2escm"),(void*)f_7845},
{C_text("f_7847:eval_2escm"),(void*)f_7847},
{C_text("f_7854:eval_2escm"),(void*)f_7854},
{C_text("f_7856:eval_2escm"),(void*)f_7856},
{C_text("f_7859:eval_2escm"),(void*)f_7859},
{C_text("f_7869:eval_2escm"),(void*)f_7869},
{C_text("f_7883:eval_2escm"),(void*)f_7883},
{C_text("f_7902:eval_2escm"),(void*)f_7902},
{C_text("f_7941:eval_2escm"),(void*)f_7941},
{C_text("f_7945:eval_2escm"),(void*)f_7945},
{C_text("f_7948:eval_2escm"),(void*)f_7948},
{C_text("f_7951:eval_2escm"),(void*)f_7951},
{C_text("f_7954:eval_2escm"),(void*)f_7954},
{C_text("f_7957:eval_2escm"),(void*)f_7957},
{C_text("f_7959:eval_2escm"),(void*)f_7959},
{C_text("f_7968:eval_2escm"),(void*)f_7968},
{C_text("f_7999:eval_2escm"),(void*)f_7999},
{C_text("f_8017:eval_2escm"),(void*)f_8017},
{C_text("f_8021:eval_2escm"),(void*)f_8021},
{C_text("f_8042:eval_2escm"),(void*)f_8042},
{C_text("f_8046:eval_2escm"),(void*)f_8046},
{C_text("f_8068:eval_2escm"),(void*)f_8068},
{C_text("f_8445:eval_2escm"),(void*)f_8445},
{C_text("f_8467:eval_2escm"),(void*)f_8467},
{C_text("f_9358:eval_2escm"),(void*)f_9358},
{C_text("f_9361:eval_2escm"),(void*)f_9361},
{C_text("f_9376:eval_2escm"),(void*)f_9376},
{C_text("f_9379:eval_2escm"),(void*)f_9379},
{C_text("f_9381:eval_2escm"),(void*)f_9381},
{C_text("f_9384:eval_2escm"),(void*)f_9384},
{C_text("f_9391:eval_2escm"),(void*)f_9391},
{C_text("f_9401:eval_2escm"),(void*)f_9401},
{C_text("f_9426:eval_2escm"),(void*)f_9426},
{C_text("f_9430:eval_2escm"),(void*)f_9430},
{C_text("f_9443:eval_2escm"),(void*)f_9443},
{C_text("f_9469:eval_2escm"),(void*)f_9469},
{C_text("f_9473:eval_2escm"),(void*)f_9473},
{C_text("f_9480:eval_2escm"),(void*)f_9480},
{C_text("f_9485:eval_2escm"),(void*)f_9485},
{C_text("f_9498:eval_2escm"),(void*)f_9498},
{C_text("f_9567:eval_2escm"),(void*)f_9567},
{C_text("f_9573:eval_2escm"),(void*)f_9573},
{C_text("f_9581:eval_2escm"),(void*)f_9581},
{C_text("f_9585:eval_2escm"),(void*)f_9585},
{C_text("f_9587:eval_2escm"),(void*)f_9587},
{C_text("f_9625:eval_2escm"),(void*)f_9625},
{C_text("f_9630:eval_2escm"),(void*)f_9630},
{C_text("f_9634:eval_2escm"),(void*)f_9634},
{C_text("f_9637:eval_2escm"),(void*)f_9637},
{C_text("f_9653:eval_2escm"),(void*)f_9653},
{C_text("f_9657:eval_2escm"),(void*)f_9657},
{C_text("f_9661:eval_2escm"),(void*)f_9661},
{C_text("f_9665:eval_2escm"),(void*)f_9665},
{C_text("f_9669:eval_2escm"),(void*)f_9669},
{C_text("f_9672:eval_2escm"),(void*)f_9672},
{C_text("f_9675:eval_2escm"),(void*)f_9675},
{C_text("f_9678:eval_2escm"),(void*)f_9678},
{C_text("f_9683:eval_2escm"),(void*)f_9683},
{C_text("f_9689:eval_2escm"),(void*)f_9689},
{C_text("f_9698:eval_2escm"),(void*)f_9698},
{C_text("f_9702:eval_2escm"),(void*)f_9702},
{C_text("f_9707:eval_2escm"),(void*)f_9707},
{C_text("f_9710:eval_2escm"),(void*)f_9710},
{C_text("f_9714:eval_2escm"),(void*)f_9714},
{C_text("f_9717:eval_2escm"),(void*)f_9717},
{C_text("f_9720:eval_2escm"),(void*)f_9720},
{C_text("f_9725:eval_2escm"),(void*)f_9725},
{C_text("f_9735:eval_2escm"),(void*)f_9735},
{C_text("f_9738:eval_2escm"),(void*)f_9738},
{C_text("f_9745:eval_2escm"),(void*)f_9745},
{C_text("f_9747:eval_2escm"),(void*)f_9747},
{C_text("f_9754:eval_2escm"),(void*)f_9754},
{C_text("f_9759:eval_2escm"),(void*)f_9759},
{C_text("f_9765:eval_2escm"),(void*)f_9765},
{C_text("f_9769:eval_2escm"),(void*)f_9769},
{C_text("f_9776:eval_2escm"),(void*)f_9776},
{C_text("f_9781:eval_2escm"),(void*)f_9781},
{C_text("f_9790:eval_2escm"),(void*)f_9790},
{C_text("f_9798:eval_2escm"),(void*)f_9798},
{C_text("f_9808:eval_2escm"),(void*)f_9808},
{C_text("f_9832:eval_2escm"),(void*)f_9832},
{C_text("f_9836:eval_2escm"),(void*)f_9836},
{C_text("f_9841:eval_2escm"),(void*)f_9841},
{C_text("f_9850:eval_2escm"),(void*)f_9850},
{C_text("f_9869:eval_2escm"),(void*)f_9869},
{C_text("f_9872:eval_2escm"),(void*)f_9872},
{C_text("f_9875:eval_2escm"),(void*)f_9875},
{C_text("f_9881:eval_2escm"),(void*)f_9881},
{C_text("f_9884:eval_2escm"),(void*)f_9884},
{C_text("f_9899:eval_2escm"),(void*)f_9899},
{C_text("f_9902:eval_2escm"),(void*)f_9902},
{C_text("f_9905:eval_2escm"),(void*)f_9905},
{C_text("f_9911:eval_2escm"),(void*)f_9911},
{C_text("f_9923:eval_2escm"),(void*)f_9923},
{C_text("f_9929:eval_2escm"),(void*)f_9929},
{C_text("f_9989:eval_2escm"),(void*)f_9989},
{C_text("toplevel:eval_2escm"),(void*)C_eval_toplevel},
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
o|hiding unexported module binding: chicken.eval#d 
o|hiding unexported module binding: chicken.eval#define-alias 
o|hiding unexported module binding: chicken.eval#d 
o|hiding unexported module binding: chicken.eval#eval-decorator 
o|hiding unexported module binding: chicken.eval#compile-to-closure 
o|hiding unexported module binding: chicken.load#partition 
o|hiding unexported module binding: chicken.load#span 
o|hiding unexported module binding: chicken.load#take 
o|hiding unexported module binding: chicken.load#drop 
o|hiding unexported module binding: chicken.load#split-at 
o|hiding unexported module binding: chicken.load#append-map 
o|hiding unexported module binding: chicken.load#every 
o|hiding unexported module binding: chicken.load#any 
o|hiding unexported module binding: chicken.load#cons* 
o|hiding unexported module binding: chicken.load#concatenate 
o|hiding unexported module binding: chicken.load#delete 
o|hiding unexported module binding: chicken.load#first 
o|hiding unexported module binding: chicken.load#second 
o|hiding unexported module binding: chicken.load#third 
o|hiding unexported module binding: chicken.load#fourth 
o|hiding unexported module binding: chicken.load#fifth 
o|hiding unexported module binding: chicken.load#delete-duplicates 
o|hiding unexported module binding: chicken.load#alist-cons 
o|hiding unexported module binding: chicken.load#filter 
o|hiding unexported module binding: chicken.load#filter-map 
o|hiding unexported module binding: chicken.load#remove 
o|hiding unexported module binding: chicken.load#unzip1 
o|hiding unexported module binding: chicken.load#last 
o|hiding unexported module binding: chicken.load#list-index 
o|hiding unexported module binding: chicken.load#lset-adjoin/eq? 
o|hiding unexported module binding: chicken.load#lset-difference/eq? 
o|hiding unexported module binding: chicken.load#lset-union/eq? 
o|hiding unexported module binding: chicken.load#lset-intersection/eq? 
o|hiding unexported module binding: chicken.load#list-tabulate 
o|hiding unexported module binding: chicken.load#lset<=/eq? 
o|hiding unexported module binding: chicken.load#lset=/eq? 
o|hiding unexported module binding: chicken.load#length+ 
o|hiding unexported module binding: chicken.load#find 
o|hiding unexported module binding: chicken.load#find-tail 
o|hiding unexported module binding: chicken.load#iota 
o|hiding unexported module binding: chicken.load#make-list 
o|hiding unexported module binding: chicken.load#posq 
o|hiding unexported module binding: chicken.load#posv 
o|hiding unexported module binding: chicken.load#constant2102 
o|hiding unexported module binding: chicken.load#constant2105 
o|hiding unexported module binding: chicken.load#constant2109 
o|hiding unexported module binding: chicken.load#constant2114 
o|hiding unexported module binding: chicken.load#constant2120 
o|hiding unexported module binding: chicken.load#constant2127 
o|hiding unexported module binding: chicken.load#constant2135 
o|hiding unexported module binding: chicken.load#constant2144 
o|hiding unexported module binding: chicken.load#load-library-extension 
o|hiding unexported module binding: chicken.load#constant2166 
o|hiding unexported module binding: chicken.load#default-dynamic-load-libraries 
o|hiding unexported module binding: chicken.load#path-separators 
o|hiding unexported module binding: chicken.load#path-separator-index/right 
o|hiding unexported module binding: chicken.load#make-relative-pathname 
o|hiding unexported module binding: chicken.load#toplevel 
o|hiding unexported module binding: chicken.load#c-toplevel 
o|hiding unexported module binding: chicken.load#load/internal 
o|hiding unexported module binding: chicken.load#load-unit 
o|hiding unexported module binding: chicken.load#file-exists? 
o|hiding unexported module binding: chicken.load#find-file 
o|hiding unexported module binding: chicken.load#find-dynamic-extension 
o|hiding unexported module binding: chicken.load#load-extension 
S|applied compiler syntax:
S|  chicken.base#foldl		3
S|  chicken.base#foldr		4
S|  scheme#for-each		7
S|  ##sys#map		4
S|  scheme#map		17
o|eliminated procedure checks: 312 
o|folded constant expression: (scheme#integer->char (quote 127)) 
o|specializations:
o|  1 (scheme#number->string fixnum)
o|  1 (##sys#debug-mode?)
o|  1 (scheme#positive? fixnum)
o|  1 (scheme#eqv? * *)
o|  3 (scheme#memq * list)
o|  1 (scheme#caddr (pair * (pair * pair)))
o|  1 (scheme#length list)
o|  3 (scheme#cddr (pair * pair))
o|  13 (scheme#car pair)
o|  17 (##sys#check-list (or pair list) *)
o|  1 (scheme#zero? *)
o|  8 (scheme#eqv? (or eof null fixnum char boolean symbol keyword) *)
o|  82 (scheme#eqv? * (or eof null fixnum char boolean symbol keyword))
o|  26 (scheme#cdr pair)
o|  2 (scheme#cdar (pair pair *))
(o e)|safe calls: 1080 
(o e)|assignments to immediate values: 1 
o|safe globals: (##sys#unbound-in-eval chicken.eval#eval-decorator) 
o|merged explicitly consed rest parameter: rest157160 
o|inlining procedure: k3576 
o|inlining procedure: k3576 
o|inlining procedure: k3614 
o|inlining procedure: k3614 
o|inlining procedure: k3629 
o|inlining procedure: k3629 
o|inlining procedure: k3657 
o|inlining procedure: k3657 
o|contracted procedure: "(eval.scm:103) posq206" 
o|inlining procedure: k3704 
o|inlining procedure: k3704 
o|inlining procedure: k3734 
o|inlining procedure: k3734 
o|inlining procedure: k3748 
o|inlining procedure: k3748 
o|contracted procedure: "(eval.scm:129) chicken.eval#eval-decorator" 
o|inlining procedure: k3511 
o|inlining procedure: k3511 
o|inlining procedure: k3764 
o|inlining procedure: k3764 
o|inlining procedure: k3790 
o|inlining procedure: k3813 
o|inlining procedure: k3813 
o|inlining procedure: k3840 
o|inlining procedure: k3840 
o|inlining procedure: k3853 
o|inlining procedure: k3853 
o|inlining procedure: k3790 
o|inlining procedure: k3891 
o|inlining procedure: k3891 
o|inlining procedure: k3933 
o|inlining procedure: k3933 
o|substituted constant variable: a3967 
o|substituted constant variable: a3969 
o|substituted constant variable: a3971 
o|substituted constant variable: a3973 
o|inlining procedure: k3974 
o|inlining procedure: k3988 
o|inlining procedure: k3988 
o|inlining procedure: k4004 
o|inlining procedure: k4004 
o|substituted constant variable: a4015 
o|substituted constant variable: a4017 
o|substituted constant variable: a4019 
o|substituted constant variable: a4021 
o|inlining procedure: k3974 
o|inlining procedure: k4028 
o|inlining procedure: k4028 
o|inlining procedure: k4035 
o|inlining procedure: k4035 
o|inlining procedure: k4055 
o|inlining procedure: k4082 
o|inlining procedure: k4099 
o|inlining procedure: k4099 
o|inlining procedure: k4115 
o|inlining procedure: k4115 
o|inlining procedure: k4131 
o|inlining procedure: k4131 
o|substituted constant variable: a4150 
o|substituted constant variable: a4152 
o|substituted constant variable: a4154 
o|substituted constant variable: a4156 
o|substituted constant variable: a4158 
o|substituted constant variable: a4160 
o|substituted constant variable: a4162 
o|inlining procedure: k4082 
o|inlining procedure: k4178 
o|inlining procedure: k4178 
o|inlining procedure: k4204 
o|inlining procedure: k4204 
o|inlining procedure: k4229 
o|inlining procedure: k4229 
o|inlining procedure: k4266 
o|inlining procedure: k4287 
o|inlining procedure: k4287 
o|substituted constant variable: a4369 
o|substituted constant variable: a4371 
o|substituted constant variable: a4373 
o|inlining procedure: k4266 
o|inlining procedure: k4393 
o|inlining procedure: k4417 
o|inlining procedure: k4448 
o|inlining procedure: k4448 
o|inlining procedure: k4417 
o|inlining procedure: k4393 
o|inlining procedure: k4540 
o|inlining procedure: k4540 
o|inlining procedure: k4623 
o|inlining procedure: k4623 
o|inlining procedure: k4807 
o|inlining procedure: k4807 
o|inlining procedure: k4837 
o|inlining procedure: k4837 
o|substituted constant variable: a4869 
o|substituted constant variable: a4871 
o|substituted constant variable: a4873 
o|substituted constant variable: a4875 
o|consed rest parameter at call site: "(eval.scm:287) chicken.eval#compile-to-closure" 3 
o|inlining procedure: k4928 
o|inlining procedure: k4928 
o|inlining procedure: k4962 
o|contracted procedure: "(eval.scm:282) g430439" 
o|inlining procedure: k4962 
o|inlining procedure: k4993 
o|inlining procedure: k5073 
o|contracted procedure: "(eval.scm:337) g593602" 
o|inlining procedure: k5073 
o|inlining procedure: k5107 
o|contracted procedure: "(eval.scm:334) g566575" 
o|inlining procedure: k5107 
o|inlining procedure: k4993 
o|inlining procedure: k5249 
o|contracted procedure: "(eval.scm:354) g742752" 
o|inlining procedure: k5249 
o|inlining procedure: k5297 
o|contracted procedure: "(eval.scm:353) g709719" 
o|inlining procedure: k5297 
o|inlining procedure: k5345 
o|contracted procedure: "(eval.scm:350) g682691" 
o|inlining procedure: k5345 
o|inlining procedure: k5379 
o|inlining procedure: k5379 
o|inlining procedure: k5413 
o|inlining procedure: k5413 
o|inlining procedure: k5444 
o|inlining procedure: k5488 
o|inlining procedure: k5488 
o|inlining procedure: k5537 
o|inlining procedure: k5537 
o|inlining procedure: k5578 
o|inlining procedure: k5578 
o|inlining procedure: k5631 
o|inlining procedure: k5631 
o|inlining procedure: k5672 
o|inlining procedure: k5672 
o|contracted procedure: "(eval.scm:443) fudge-argument-list211" 
o|inlining procedure: k7244 
o|inlining procedure: k7244 
o|inlining procedure: k7259 
o|inlining procedure: k7259 
o|inlining procedure: k7284 
o|inlining procedure: k7284 
o|inlining procedure: k5754 
o|inlining procedure: k5754 
o|substituted constant variable: a5779 
o|substituted constant variable: a5781 
o|substituted constant variable: a5783 
o|substituted constant variable: a5785 
o|substituted constant variable: a5787 
o|consed rest parameter at call site: "(eval.scm:378) chicken.eval#compile-to-closure" 3 
o|inlining procedure: k5816 
o|consed rest parameter at call site: "(eval.scm:378) chicken.eval#compile-to-closure" 3 
o|inlining procedure: k5816 
o|consed rest parameter at call site: "(eval.scm:378) chicken.eval#compile-to-closure" 3 
o|inlining procedure: k5836 
o|inlining procedure: k5836 
o|inlining procedure: k5889 
o|inlining procedure: k5889 
o|inlining procedure: k5444 
o|inlining procedure: k6004 
o|contracted procedure: "(eval.scm:458) g896905" 
o|inlining procedure: k6004 
o|inlining procedure: k6035 
o|inlining procedure: k6149 
o|inlining procedure: k6149 
o|inlining procedure: k6176 
o|contracted procedure: "(eval.scm:472) g931940" 
o|inlining procedure: k6176 
o|inlining procedure: k6035 
o|inlining procedure: k6263 
o|inlining procedure: k6263 
o|inlining procedure: k6293 
o|inlining procedure: k6317 
o|inlining procedure: k6317 
o|inlining procedure: k6293 
o|inlining procedure: k6392 
o|contracted procedure: "(eval.scm:528) g10041013" 
o|inlining procedure: k6392 
o|substituted constant variable: saved107910801098 
o|inlining procedure: k6423 
o|inlining procedure: k6528 
o|inlining procedure: k6551 
o|inlining procedure: k6551 
o|inlining procedure: k6528 
o|inlining procedure: k6647 
o|inlining procedure: k6647 
o|inlining procedure: k6674 
o|inlining procedure: k6674 
o|inlining procedure: k6704 
o|inlining procedure: k6704 
o|inlining procedure: k6423 
o|inlining procedure: k6760 
o|inlining procedure: k6760 
o|inlining procedure: k6797 
o|inlining procedure: k6797 
o|inlining procedure: k6852 
o|inlining procedure: k6852 
o|inlining procedure: k6877 
o|inlining procedure: k6877 
o|inlining procedure: k6913 
o|inlining procedure: k6913 
o|removed unused parameter to known procedure: se1261 "(eval.scm:628) compile-call213" 
o|inlining procedure: k6942 
o|inlining procedure: k6942 
o|inlining procedure: k6964 
o|inlining procedure: k6964 
o|removed unused parameter to known procedure: se1261 "(eval.scm:646) compile-call213" 
o|substituted constant variable: a7017 
o|substituted constant variable: a7019 
o|substituted constant variable: a7021 
o|inlining procedure: k7025 
o|inlining procedure: k7025 
o|inlining procedure: k7037 
o|inlining procedure: k7037 
o|inlining procedure: k7049 
o|inlining procedure: k7049 
o|inlining procedure: k7061 
o|inlining procedure: k7061 
o|inlining procedure: k7073 
o|inlining procedure: k7073 
o|substituted constant variable: a7080 
o|substituted constant variable: a7082 
o|substituted constant variable: a7084 
o|substituted constant variable: a7086 
o|substituted constant variable: a7088 
o|substituted constant variable: a7090 
o|substituted constant variable: a7092 
o|substituted constant variable: a7094 
o|substituted constant variable: a7096 
o|substituted constant variable: a7098 
o|substituted constant variable: a7100 
o|substituted constant variable: a7105 
o|substituted constant variable: a7107 
o|substituted constant variable: a7109 
o|inlining procedure: k7113 
o|inlining procedure: k7113 
o|substituted constant variable: a7120 
o|substituted constant variable: a7122 
o|substituted constant variable: a7124 
o|substituted constant variable: a7126 
o|substituted constant variable: a7131 
o|substituted constant variable: a7133 
o|substituted constant variable: a7135 
o|substituted constant variable: a7137 
o|substituted constant variable: a7139 
o|substituted constant variable: a7141 
o|substituted constant variable: a7143 
o|substituted constant variable: a7145 
o|substituted constant variable: a7147 
o|substituted constant variable: a7149 
o|substituted constant variable: a7151 
o|substituted constant variable: a7153 
o|substituted constant variable: a7155 
o|substituted constant variable: a7157 
o|substituted constant variable: a7159 
o|substituted constant variable: a7161 
o|substituted constant variable: a7163 
o|substituted constant variable: a7165 
o|substituted constant variable: a7167 
o|substituted constant variable: a7169 
o|substituted constant variable: a7171 
o|substituted constant variable: a7173 
o|substituted constant variable: a7175 
o|substituted constant variable: a7177 
o|substituted constant variable: a7179 
o|substituted constant variable: a7181 
o|substituted constant variable: a7183 
o|inlining procedure: k4055 
o|removed unused parameter to known procedure: se1261 "(eval.scm:650) compile-call213" 
o|inlining procedure: k7217 
o|inlining procedure: k7217 
o|inlining procedure: k7229 
o|inlining procedure: k7229 
o|removed unused formal parameters: (se1261) 
o|inlining procedure: k7343 
o|inlining procedure: k7343 
o|inlining procedure: k7369 
o|inlining procedure: k7369 
o|inlining procedure: k7433 
o|inlining procedure: k7433 
o|inlining procedure: k7573 
o|inlining procedure: k7573 
o|inlining procedure: k7607 
o|inlining procedure: k7607 
o|substituted constant variable: a7639 
o|substituted constant variable: a7641 
o|substituted constant variable: a7643 
o|substituted constant variable: a7645 
o|substituted constant variable: a7647 
o|substituted constant variable: a7649 
o|contracted procedure: "(eval.scm:678) checked-length212" 
o|inlining procedure: k7305 
o|inlining procedure: k7305 
o|substituted constant variable: saved137813791393 
o|consed rest parameter at call site: "(eval.scm:723) chicken.eval#compile-to-closure" 3 
o|inlining procedure: k7871 
o|inlining procedure: k7871 
o|inlining procedure: k7893 
o|inlining procedure: k7893 
o|inlining procedure: k7970 
o|contracted procedure: "(eval.scm:833) g15391540" 
o|substituted constant variable: a7985 
o|inlining procedure: k7978 
o|inlining procedure: k7978 
o|inlining procedure: k7970 
o|inlining procedure: k8022 
o|inlining procedure: k8022 
o|substituted constant variable: a8038 
o|substituted constant variable: a8040 
o|inlining procedure: k8047 
o|inlining procedure: k8047 
o|substituted constant variable: a8063 
o|substituted constant variable: a8065 
o|removed side-effect free assignment to unused variable: chicken.load#partition 
o|removed side-effect free assignment to unused variable: chicken.load#span 
o|removed side-effect free assignment to unused variable: chicken.load#drop 
o|removed side-effect free assignment to unused variable: chicken.load#split-at 
o|removed side-effect free assignment to unused variable: chicken.load#append-map 
o|inlining procedure: k8450 
o|inlining procedure: k8450 
o|inlining procedure: k8481 
o|inlining procedure: k8481 
o|removed side-effect free assignment to unused variable: chicken.load#cons* 
o|removed side-effect free assignment to unused variable: chicken.load#concatenate 
o|removed side-effect free assignment to unused variable: chicken.load#first 
o|removed side-effect free assignment to unused variable: chicken.load#second 
o|removed side-effect free assignment to unused variable: chicken.load#third 
o|removed side-effect free assignment to unused variable: chicken.load#fourth 
o|removed side-effect free assignment to unused variable: chicken.load#fifth 
o|removed side-effect free assignment to unused variable: chicken.load#delete-duplicates 
o|removed side-effect free assignment to unused variable: chicken.load#alist-cons 
o|inlining procedure: k8698 
o|inlining procedure: k8698 
o|inlining procedure: k8690 
o|inlining procedure: k8690 
o|removed side-effect free assignment to unused variable: chicken.load#filter-map 
o|removed side-effect free assignment to unused variable: chicken.load#remove 
o|removed side-effect free assignment to unused variable: chicken.load#unzip1 
o|removed side-effect free assignment to unused variable: chicken.load#last 
o|removed side-effect free assignment to unused variable: chicken.load#list-index 
o|removed side-effect free assignment to unused variable: chicken.load#lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: chicken.load#lset-difference/eq? 
o|removed side-effect free assignment to unused variable: chicken.load#lset-union/eq? 
o|removed side-effect free assignment to unused variable: chicken.load#lset-intersection/eq? 
o|inlining procedure: k9089 
o|inlining procedure: k9089 
o|removed side-effect free assignment to unused variable: chicken.load#lset<=/eq? 
o|removed side-effect free assignment to unused variable: chicken.load#lset=/eq? 
o|removed side-effect free assignment to unused variable: chicken.load#length+ 
o|removed side-effect free assignment to unused variable: chicken.load#find 
o|removed side-effect free assignment to unused variable: chicken.load#find-tail 
o|removed side-effect free assignment to unused variable: chicken.load#iota 
o|removed side-effect free assignment to unused variable: chicken.load#make-list 
o|removed side-effect free assignment to unused variable: chicken.load#posq 
o|removed side-effect free assignment to unused variable: chicken.load#posv 
o|inlining procedure: k9366 
o|inlining procedure: k9366 
o|inlining procedure: k9403 
o|inlining procedure: k9403 
o|inlining procedure: k9431 
o|inlining procedure: k9431 
o|inlining procedure: k9447 
o|inlining procedure: k9447 
o|inlining procedure: k9487 
o|inlining procedure: k9510 
o|inlining procedure: k9510 
o|inlining procedure: k9524 
o|inlining procedure: k9524 
o|substituted constant variable: a9539 
o|substituted constant variable: a9541 
o|substituted constant variable: a9543 
o|substituted constant variable: a9545 
o|inlining procedure: k9487 
o|contracted procedure: "(eval.scm:1014) chicken.load#toplevel" 
o|inlining procedure: k9555 
o|inlining procedure: k9555 
o|merged explicitly consed rest parameter: rest22312234 
o|inlining procedure: k9620 
o|inlining procedure: k9620 
o|inlining procedure: k9638 
o|inlining procedure: k9638 
o|inlining procedure: k9676 
o|inlining procedure: k9676 
o|inlining procedure: k9727 
o|inlining procedure: k9727 
o|inlining procedure: k9749 
o|inlining procedure: k9749 
o|inlining procedure: k9783 
o|inlining procedure: k9800 
o|inlining procedure: k9800 
o|inlining procedure: k9783 
o|inlining procedure: k9837 
o|inlining procedure: k9837 
o|inlining procedure: k9858 
o|inlining procedure: k9858 
o|inlining procedure: k9885 
o|inlining procedure: k9885 
o|inlining procedure: k9906 
o|inlining procedure: k9906 
o|inlining procedure: k9924 
o|inlining procedure: k9924 
o|consed rest parameter at call site: "(eval.scm:1104) chicken.load#load/internal" 3 
o|inlining procedure: k9991 
o|consed rest parameter at call site: "(eval.scm:1104) chicken.load#load/internal" 3 
o|inlining procedure: k9991 
o|consed rest parameter at call site: "(eval.scm:1104) chicken.load#load/internal" 3 
o|consed rest parameter at call site: "(eval.scm:1108) chicken.load#load/internal" 3 
o|consed rest parameter at call site: "(eval.scm:1111) chicken.load#load/internal" 3 
o|propagated global variable: g24072408 ##sys#string-append 
o|inlining procedure: k10061 
o|inlining procedure: k10061 
o|inlining procedure: k10082 
o|inlining procedure: k10095 
o|inlining procedure: k10095 
o|inlining procedure: k10082 
o|inlining procedure: k10215 
o|inlining procedure: k10215 
o|inlining procedure: k10260 
o|inlining procedure: k10260 
o|inlining procedure: k10269 
o|inlining procedure: k10269 
o|inlining procedure: k10281 
o|inlining procedure: k10281 
o|inlining procedure: k10331 
o|inlining procedure: k10331 
o|inlining procedure: k10341 
o|inlining procedure: k10341 
o|inlining procedure: k10370 
o|inlining procedure: k10370 
o|inlining procedure: k10405 
o|inlining procedure: k10405 
o|inlining procedure: k10417 
o|inlining procedure: k10417 
o|consed rest parameter at call site: "(eval.scm:1224) chicken.load#load/internal" 3 
o|inlining procedure: k10469 
o|inlining procedure: k10469 
o|contracted procedure: "(eval.scm:1219) g25412542" 
o|inlining procedure: k10425 
o|inlining procedure: k10425 
o|inlining procedure: k10441 
o|inlining procedure: k10441 
o|inlining procedure: k10508 
o|contracted procedure: "(eval.scm:1232) g25782600" 
o|propagated global variable: g26082609 chicken.load#load-extension 
o|inlining procedure: k10508 
o|inlining procedure: k10531 
o|contracted procedure: "(eval.scm:1231) g25682585" 
o|inlining procedure: k10531 
o|inlining procedure: k10573 
o|contracted procedure: "(eval.scm:1236) g26312653" 
o|propagated global variable: g26612662 ##sys#provide 
o|inlining procedure: k10573 
o|inlining procedure: k10596 
o|contracted procedure: "(eval.scm:1235) g26212638" 
o|inlining procedure: k10596 
o|inlining procedure: k10633 
o|contracted procedure: "(eval.scm:1239) g26742681" 
o|inlining procedure: k10633 
o|inlining procedure: k10669 
o|contracted procedure: "(eval.scm:1253) g27152716" 
o|inlining procedure: k10669 
o|inlining procedure: k10693 
o|inlining procedure: k10703 
o|inlining procedure: k10703 
o|inlining procedure: k10693 
o|substituted constant variable: chicken.load#constant2166 
o|inlining procedure: k10766 
o|inlining procedure: k10766 
o|inlining procedure: k10803 
o|inlining procedure: k10803 
o|inlining procedure: k10818 
o|inlining procedure: k10818 
o|inlining procedure: k10837 
o|inlining procedure: k10837 
o|inlining procedure: k10850 
o|inlining procedure: k10850 
o|inlining procedure: k10884 
o|inlining procedure: k10884 
o|inlining procedure: k10957 
o|inlining procedure: k10957 
o|inlining procedure: k11020 
o|inlining procedure: k11020 
o|propagated global variable: tmp29502952 last-error 
o|inlining procedure: k11176 
o|propagated global variable: tmp29502952 last-error 
o|inlining procedure: k11176 
o|inlining procedure: k11199 
o|inlining procedure: k11199 
o|substituted constant variable: chicken.load#constant2109 
o|substituted constant variable: a11254 
o|substituted constant variable: chicken.load#constant2120 
o|inlining procedure: k11258 
o|substituted constant variable: chicken.load#constant2114 
o|propagated global variable: r1125911891 chicken.load#constant2114 
o|inlining procedure: k11258 
o|substituted constant variable: chicken.load#constant2127 
o|inlining procedure: k11267 
o|substituted constant variable: chicken.load#constant2127 
o|inlining procedure: k11267 
o|substituted constant variable: chicken.load#constant2127 
o|inlining procedure: k11388 
o|inlining procedure: k11388 
o|inlining procedure: k11425 
o|substituted constant variable: saved144714481457 
o|consed rest parameter at call site: "(eval.scm:757) chicken.eval#compile-to-closure" 3 
o|consed rest parameter at call site: "(eval.scm:758) chicken.eval#compile-to-closure" 3 
o|inlining procedure: k11425 
o|consed rest parameter at call site: "(eval.scm:761) chicken.eval#compile-to-closure" 3 
o|consed rest parameter at call site: "(eval.scm:747) chicken.eval#compile-to-closure" 3 
o|simplifications: ((if . 1)) 
o|replaced variables: 1935 
o|removed binding forms: 471 
o|substituted constant variable: r357711536 
o|substituted constant variable: r370511544 
o|removed call to pure procedure with unused result: "(eval.scm:100) chicken.base#void" 
o|substituted constant variable: r351211551 
o|substituted constant variable: r444911598 
o|substituted constant variable: r589011658 
o|substituted constant variable: r589011658 
o|removed call to pure procedure with unused result: "(eval.scm:195) chicken.base#void" 
o|converted assignments to bindings: (err1507) 
o|substituted constant variable: r797111742 
o|removed side-effect free assignment to unused variable: chicken.load#any 
o|removed side-effect free assignment to unused variable: chicken.load#filter 
o|removed side-effect free assignment to unused variable: chicken.load#list-tabulate 
o|removed side-effect free assignment to unused variable: chicken.load#constant2109 
o|removed side-effect free assignment to unused variable: chicken.load#constant2120 
o|removed side-effect free assignment to unused variable: chicken.load#constant2127 
o|removed side-effect free assignment to unused variable: chicken.load#constant2166 
o|substituted constant variable: r944811764 
o|substituted constant variable: r955611771 
o|contracted procedure: "(eval.scm:1093) g23312338" 
o|substituted constant variable: r983811791 
o|substituted constant variable: r983811791 
o|substituted constant variable: r985911794 
o|substituted constant variable: r992511800 
o|substituted constant variable: r999211801 
o|substituted constant variable: r999211801 
o|substituted constant variable: r1009611816 
o|substituted constant variable: r1009611816 
o|inlining procedure: k10158 
o|substituted constant variable: r1026111822 
o|substituted constant variable: r1027011823 
o|substituted constant variable: r1034211830 
o|substituted constant variable: r1037111832 
o|substituted constant variable: r1040611833 
o|substituted constant variable: r1040611833 
o|substituted constant variable: r1040611835 
o|substituted constant variable: r1040611835 
o|converted assignments to bindings: (check2516) 
o|substituted constant variable: r1044211844 
o|contracted procedure: "(eval.scm:1240) chicken.load#every" 
o|substituted constant variable: r1085111873 
o|substituted constant variable: r1088511877 
o|substituted constant variable: r1088511877 
o|substituted constant variable: r1102111883 
o|propagated global variable: r1117711885 last-error 
o|substituted constant variable: r1117711887 
o|substituted constant variable: r1117711887 
o|converted assignments to bindings: (complete2400) 
o|substituted constant variable: chicken.load#constant2114 
o|substituted constant variable: r1126811894 
o|converted assignments to bindings: (strip1528) 
o|simplifications: ((let . 4)) 
o|replaced variables: 135 
o|removed binding forms: 1641 
o|removed conditional forms: 1 
o|contracted procedure: k3648 
o|removed unused formal parameters: (h269 cntr270) 
o|contracted procedure: k4067 
o|inlining procedure: k4380 
o|removed unused parameter to known procedure: h269 "(eval.scm:384) decorate209" 
o|removed unused parameter to known procedure: cntr270 "(eval.scm:384) decorate209" 
o|removed unused parameter to known procedure: h269 "(eval.scm:389) decorate209" 
o|removed unused parameter to known procedure: cntr270 "(eval.scm:389) decorate209" 
o|removed unused parameter to known procedure: h269 "(eval.scm:394) decorate209" 
o|removed unused parameter to known procedure: cntr270 "(eval.scm:394) decorate209" 
o|removed unused parameter to known procedure: h269 "(eval.scm:399) decorate209" 
o|removed unused parameter to known procedure: cntr270 "(eval.scm:399) decorate209" 
o|removed unused parameter to known procedure: h269 "(eval.scm:405) decorate209" 
o|removed unused parameter to known procedure: cntr270 "(eval.scm:405) decorate209" 
o|removed unused parameter to known procedure: h269 "(eval.scm:410) decorate209" 
o|removed unused parameter to known procedure: cntr270 "(eval.scm:410) decorate209" 
o|removed unused parameter to known procedure: h269 "(eval.scm:416) decorate209" 
o|removed unused parameter to known procedure: cntr270 "(eval.scm:416) decorate209" 
o|removed unused parameter to known procedure: h269 "(eval.scm:421) decorate209" 
o|removed unused parameter to known procedure: cntr270 "(eval.scm:421) decorate209" 
o|removed unused parameter to known procedure: h269 "(eval.scm:427) decorate209" 
o|removed unused parameter to known procedure: cntr270 "(eval.scm:427) decorate209" 
o|removed unused parameter to known procedure: h269 "(eval.scm:432) decorate209" 
o|removed unused parameter to known procedure: cntr270 "(eval.scm:432) decorate209" 
o|removed unused parameter to known procedure: h269 "(eval.scm:439) decorate209" 
o|removed unused parameter to known procedure: cntr270 "(eval.scm:439) decorate209" 
o|removed unused parameter to known procedure: h269 "(eval.scm:446) decorate209" 
o|removed unused parameter to known procedure: cntr270 "(eval.scm:446) decorate209" 
o|inlining procedure: k6246 
o|removed side-effect free assignment to unused variable: chicken.load#constant2114 
o|inlining procedure: k9496 
o|inlining procedure: k9496 
o|inlining procedure: k9496 
o|inlining procedure: k9496 
o|inlining procedure: k9583 
o|inlining procedure: k9912 
o|inlining procedure: k9912 
o|propagated global variable: r1117711885 last-error 
o|replaced variables: 4 
o|removed binding forms: 147 
o|substituted constant variable: r624712088 
o|substituted constant variable: r958412133 
o|substituted constant variable: r991312139 
o|substituted constant variable: r991312139 
o|replaced variables: 2 
o|removed binding forms: 13 
o|removed conditional forms: 2 
o|removed binding forms: 4 
o|simplifications: ((if . 50) (##core#call . 710) (let . 28)) 
o|  call simplifications:
o|    ##sys#check-structure
o|    ##sys#check-symbol	4
o|    ##sys#check-string
o|    scheme#call-with-current-continuation
o|    ##sys#size	3
o|    chicken.fixnum#fx<
o|    scheme#memq	4
o|    chicken.fixnum#fx>
o|    scheme#procedure?
o|    scheme#boolean?
o|    scheme#char?
o|    scheme#eof-object?	3
o|    scheme#string?	4
o|    scheme#vector?
o|    ##sys#void
o|    scheme#set-car!
o|    chicken.fixnum#fx=	2
o|    chicken.fixnum#fx-	3
o|    scheme#apply	7
o|    scheme#list	14
o|    ##sys#list	20
o|    ##sys#check-list	15
o|    chicken.fixnum#fx>=	2
o|    scheme#cddr	8
o|    scheme#car	29
o|    scheme#vector	12
o|    scheme#cdr	17
o|    scheme#length	2
o|    ##sys#cons	18
o|    scheme#caddr	8
o|    scheme#cdddr	4
o|    scheme#pair?	39
o|    scheme#cadddr	4
o|    scheme#cadr	33
o|    scheme#assq	6
o|    scheme#cons	64
o|    ##sys#setslot	28
o|    ##sys#immediate?
o|    scheme#not	26
o|    ##sys#make-structure	2
o|    ##sys#slot	140
o|    chicken.fixnum#fx+	6
o|    scheme#values	8
o|    ##sys#call-with-values	9
o|    ##sys#apply	4
o|    scheme#null?	33
o|    scheme#caar
o|    scheme#eq?	106
o|    scheme#symbol?	10
o|contracted procedure: k7715 
o|contracted procedure: k3549 
o|contracted procedure: k7709 
o|contracted procedure: k3552 
o|contracted procedure: k7703 
o|contracted procedure: k3555 
o|contracted procedure: k7697 
o|contracted procedure: k3558 
o|contracted procedure: k7691 
o|contracted procedure: k3561 
o|contracted procedure: k7685 
o|contracted procedure: k3564 
o|contracted procedure: k7679 
o|contracted procedure: k3567 
o|contracted procedure: k7673 
o|contracted procedure: k3570 
o|contracted procedure: k3579 
o|contracted procedure: k3605 
o|contracted procedure: k3595 
o|contracted procedure: k3660 
o|contracted procedure: k3684 
o|contracted procedure: k3688 
o|contracted procedure: k3692 
o|contracted procedure: k3707 
o|contracted procedure: k3728 
o|contracted procedure: k3713 
o|contracted procedure: k3720 
o|contracted procedure: k3724 
o|contracted procedure: k3738 
o|contracted procedure: k3742 
o|contracted procedure: k3752 
o|contracted procedure: k3518 
o|contracted procedure: k3514 
o|contracted procedure: k3524 
o|contracted procedure: k3775 
o|contracted procedure: k3793 
o|contracted procedure: k3805 
o|contracted procedure: k3834 
o|contracted procedure: k3830 
o|contracted procedure: k3837 
o|contracted procedure: k3873 
o|contracted procedure: k3850 
o|contracted procedure: k3856 
o|contracted procedure: k3862 
o|contracted procedure: k3879 
o|contracted procedure: k3888 
o|contracted procedure: k3894 
o|contracted procedure: k3907 
o|contracted procedure: k3903 
o|contracted procedure: k3913 
o|contracted procedure: k3930 
o|contracted procedure: k3926 
o|contracted procedure: k3922 
o|contracted procedure: k3936 
o|contracted procedure: k3957 
o|contracted procedure: k3953 
o|contracted procedure: k3949 
o|contracted procedure: k3945 
o|contracted procedure: k3983 
o|contracted procedure: k3991 
o|contracted procedure: k3999 
o|contracted procedure: k4007 
o|contracted procedure: k4025 
o|contracted procedure: k4038 
o|contracted procedure: k7211 
o|contracted procedure: k4049 
o|contracted procedure: k7207 
o|contracted procedure: k4058 
o|contracted procedure: k7189 
o|contracted procedure: k4073 
o|contracted procedure: k4085 
o|contracted procedure: k4094 
o|contracted procedure: k4102 
o|contracted procedure: k4110 
o|contracted procedure: k4118 
o|contracted procedure: k4126 
o|contracted procedure: k4134 
o|contracted procedure: k4142 
o|contracted procedure: k4164 
o|contracted procedure: k4170 
o|contracted procedure: k4173 
o|contracted procedure: k4181 
o|contracted procedure: k4188 
o|contracted procedure: k4194 
o|contracted procedure: k4201 
o|contracted procedure: k4207 
o|contracted procedure: k4215 
o|contracted procedure: k4255 
o|contracted procedure: k4241 
o|contracted procedure: k4248 
o|contracted procedure: k4259 
o|contracted procedure: k4263 
o|contracted procedure: k4269 
o|contracted procedure: k4272 
o|contracted procedure: k4275 
o|contracted procedure: k4281 
o|contracted procedure: k4290 
o|contracted procedure: k4297 
o|contracted procedure: k4303 
o|contracted procedure: k4321 
o|contracted procedure: k4325 
o|contracted procedure: k4357 
o|contracted procedure: k4353 
o|contracted procedure: k4349 
o|contracted procedure: k4361 
o|contracted procedure: k4365 
o|contracted procedure: k4377 
o|contracted procedure: k4390 
o|contracted procedure: k4396 
o|contracted procedure: k4399 
o|contracted procedure: k4420 
o|contracted procedure: k4445 
o|contracted procedure: k4461 
o|contracted procedure: k4451 
o|contracted procedure: k4478 
o|contracted procedure: k4496 
o|contracted procedure: k4502 
o|contracted procedure: k4505 
o|contracted procedure: k4508 
o|contracted procedure: k4511 
o|contracted procedure: k4522 
o|contracted procedure: k4525 
o|contracted procedure: k4531 
o|contracted procedure: k4543 
o|contracted procedure: k4559 
o|contracted procedure: k4555 
o|contracted procedure: k4571 
o|contracted procedure: k4577 
o|contracted procedure: k4596 
o|contracted procedure: k4592 
o|contracted procedure: k4612 
o|contracted procedure: k4620 
o|contracted procedure: k4626 
o|contracted procedure: k4635 
o|contracted procedure: k4651 
o|contracted procedure: k4647 
o|contracted procedure: k4671 
o|contracted procedure: k4679 
o|contracted procedure: k4687 
o|contracted procedure: k4693 
o|contracted procedure: k4702 
o|contracted procedure: k4721 
o|contracted procedure: k4717 
o|contracted procedure: k4745 
o|contracted procedure: k4753 
o|contracted procedure: k4761 
o|contracted procedure: k4769 
o|contracted procedure: k4772 
o|contracted procedure: k4781 
o|contracted procedure: k4801 
o|contracted procedure: k4810 
o|contracted procedure: k4813 
o|contracted procedure: k4820 
o|contracted procedure: k4824 
o|contracted procedure: k4831 
o|contracted procedure: k4840 
o|contracted procedure: k4843 
o|contracted procedure: k4846 
o|contracted procedure: k4854 
o|contracted procedure: k4862 
o|contracted procedure: k4904 
o|contracted procedure: k4931 
o|contracted procedure: k4934 
o|contracted procedure: k4937 
o|contracted procedure: k4945 
o|contracted procedure: k4953 
o|contracted procedure: k4965 
o|contracted procedure: k4987 
o|contracted procedure: k4983 
o|contracted procedure: k4968 
o|contracted procedure: k4971 
o|contracted procedure: k4979 
o|contracted procedure: k4996 
o|contracted procedure: k4999 
o|contracted procedure: k5016 
o|contracted procedure: k5028 
o|contracted procedure: k5012 
o|contracted procedure: k5008 
o|contracted procedure: k5039 
o|contracted procedure: k5067 
o|contracted procedure: k5063 
o|contracted procedure: k5059 
o|contracted procedure: k5076 
o|contracted procedure: k5098 
o|contracted procedure: k5048 
o|contracted procedure: k5052 
o|contracted procedure: k5094 
o|contracted procedure: k5079 
o|contracted procedure: k5082 
o|contracted procedure: k5090 
o|contracted procedure: k5110 
o|contracted procedure: k5132 
o|contracted procedure: k5025 
o|contracted procedure: k5128 
o|contracted procedure: k5113 
o|contracted procedure: k5116 
o|contracted procedure: k5124 
o|contracted procedure: k5141 
o|contracted procedure: k5144 
o|contracted procedure: k5147 
o|contracted procedure: k5150 
o|contracted procedure: k5156 
o|contracted procedure: k5159 
o|contracted procedure: k5165 
o|contracted procedure: k5176 
o|contracted procedure: k5200 
o|contracted procedure: k5212 
o|contracted procedure: k5196 
o|contracted procedure: k5192 
o|contracted procedure: k5172 
o|contracted procedure: k5223 
o|contracted procedure: k5243 
o|contracted procedure: k5239 
o|contracted procedure: k5235 
o|contracted procedure: k5288 
o|contracted procedure: k5252 
o|contracted procedure: k5278 
o|contracted procedure: k5282 
o|contracted procedure: k5274 
o|contracted procedure: k5255 
o|contracted procedure: k5258 
o|contracted procedure: k5266 
o|contracted procedure: k5270 
o|contracted procedure: k5336 
o|contracted procedure: k5300 
o|contracted procedure: k5326 
o|contracted procedure: k5330 
o|contracted procedure: k5209 
o|contracted procedure: k5322 
o|contracted procedure: k5303 
o|contracted procedure: k5306 
o|contracted procedure: k5314 
o|contracted procedure: k5318 
o|contracted procedure: k5348 
o|contracted procedure: k5370 
o|contracted procedure: k5185 
o|contracted procedure: k5366 
o|contracted procedure: k5351 
o|contracted procedure: k5354 
o|contracted procedure: k5362 
o|contracted procedure: k5382 
o|contracted procedure: k5385 
o|contracted procedure: k5388 
o|contracted procedure: k5396 
o|contracted procedure: k5404 
o|contracted procedure: k5416 
o|contracted procedure: k5438 
o|contracted procedure: k5434 
o|contracted procedure: k5419 
o|contracted procedure: k5422 
o|contracted procedure: k5430 
o|contracted procedure: k5447 
o|contracted procedure: k5453 
o|contracted procedure: k5458 
o|contracted procedure: k5470 
o|contracted procedure: k5473 
o|contracted procedure: k5482 
o|contracted procedure: k5491 
o|contracted procedure: k5513 
o|contracted procedure: k5509 
o|contracted procedure: k5528 
o|contracted procedure: k5534 
o|contracted procedure: k5556 
o|contracted procedure: k5552 
o|contracted procedure: k5575 
o|contracted procedure: k5571 
o|contracted procedure: k5581 
o|contracted procedure: k5603 
o|contracted procedure: k5599 
o|contracted procedure: k5622 
o|contracted procedure: k5618 
o|contracted procedure: k5628 
o|contracted procedure: k5650 
o|contracted procedure: k5646 
o|contracted procedure: k5669 
o|contracted procedure: k5665 
o|contracted procedure: k5675 
o|contracted procedure: k5697 
o|contracted procedure: k5693 
o|contracted procedure: k5712 
o|contracted procedure: k5734 
o|contracted procedure: k7247 
o|inlining procedure: k5742 
o|contracted procedure: k7262 
o|contracted procedure: k7269 
o|contracted procedure: k7265 
o|contracted procedure: k7276 
o|contracted procedure: k7280 
o|contracted procedure: k7287 
o|inlining procedure: k7284 
o|contracted procedure: k5775 
o|contracted procedure: k5757 
o|contracted procedure: k5767 
o|contracted procedure: k5839 
o|contracted procedure: k5842 
o|contracted procedure: k5845 
o|contracted procedure: k5853 
o|contracted procedure: k5861 
o|contracted procedure: k5899 
o|contracted procedure: k5936 
o|contracted procedure: k5954 
o|contracted procedure: k5988 
o|contracted procedure: k5991 
o|contracted procedure: k6007 
o|contracted procedure: k6029 
o|contracted procedure: k5963 
o|contracted procedure: k6025 
o|contracted procedure: k6010 
o|contracted procedure: k6013 
o|contracted procedure: k6021 
o|contracted procedure: k5985 
o|contracted procedure: k6038 
o|contracted procedure: k6041 
o|contracted procedure: k6071 
o|contracted procedure: k6074 
o|contracted procedure: k6089 
o|contracted procedure: k6092 
o|contracted procedure: k6129 
o|contracted procedure: k6152 
o|contracted procedure: k6162 
o|contracted procedure: k6166 
o|contracted procedure: k6179 
o|contracted procedure: k6201 
o|contracted procedure: k6050 
o|contracted procedure: k6197 
o|contracted procedure: k6182 
o|contracted procedure: k6185 
o|contracted procedure: k6193 
o|contracted procedure: k6068 
o|contracted procedure: k6210 
o|contracted procedure: k6213 
o|contracted procedure: k6216 
o|contracted procedure: k6256 
o|contracted procedure: k6246 
o|contracted procedure: k6266 
o|contracted procedure: k6275 
o|contracted procedure: k6286 
o|contracted procedure: k6296 
o|contracted procedure: k6303 
o|contracted procedure: k6307 
o|contracted procedure: k6342 
o|contracted procedure: k6320 
o|contracted procedure: k6335 
o|inlining procedure: k6317 
o|contracted procedure: k6348 
o|contracted procedure: k6355 
o|contracted procedure: k6366 
o|contracted procedure: k6369 
o|contracted procedure: k6386 
o|contracted procedure: k6382 
o|contracted procedure: k6395 
o|contracted procedure: k6398 
o|contracted procedure: k6401 
o|contracted procedure: k6409 
o|contracted procedure: k6417 
o|contracted procedure: k6426 
o|contracted procedure: k6432 
o|contracted procedure: k6736 
o|contracted procedure: k6435 
o|contracted procedure: k6522 
o|contracted procedure: k6531 
o|contracted procedure: k6554 
o|contracted procedure: k6560 
o|contracted procedure: k6566 
o|contracted procedure: k6592 
o|contracted procedure: k6596 
o|contracted procedure: k6642 
o|contracted procedure: k6650 
o|contracted procedure: k6662 
o|contracted procedure: k6671 
o|contracted procedure: k6689 
o|contracted procedure: k6680 
o|contracted procedure: k6695 
o|contracted procedure: k6707 
o|contracted procedure: k6710 
o|contracted procedure: k6713 
o|contracted procedure: k6721 
o|contracted procedure: k6729 
o|contracted procedure: k6742 
o|contracted procedure: k6757 
o|contracted procedure: k6749 
o|contracted procedure: k6763 
o|contracted procedure: k6778 
o|contracted procedure: k6774 
o|contracted procedure: k6770 
o|contracted procedure: k6784 
o|contracted procedure: k6794 
o|contracted procedure: k6800 
o|contracted procedure: k6803 
o|contracted procedure: k6824 
o|contracted procedure: k6806 
o|contracted procedure: k6836 
o|contracted procedure: k6839 
o|contracted procedure: k6849 
o|contracted procedure: k6855 
o|contracted procedure: k6862 
o|contracted procedure: k6868 
o|contracted procedure: k6880 
o|contracted procedure: k6892 
o|contracted procedure: k6895 
o|contracted procedure: k6910 
o|contracted procedure: k6902 
o|contracted procedure: k6916 
o|contracted procedure: k6928 
o|contracted procedure: k6935 
o|contracted procedure: k6945 
o|contracted procedure: k6952 
o|contracted procedure: k6958 
o|contracted procedure: k6961 
o|contracted procedure: k6973 
o|contracted procedure: k6987 
o|contracted procedure: k6990 
o|contracted procedure: k7022 
o|contracted procedure: k7028 
o|contracted procedure: k7034 
o|contracted procedure: k7040 
o|contracted procedure: k7046 
o|contracted procedure: k7052 
o|contracted procedure: k7058 
o|contracted procedure: k7064 
o|contracted procedure: k7070 
o|contracted procedure: k7110 
o|contracted procedure: k7185 
o|contracted procedure: k7214 
o|contracted procedure: k7220 
o|contracted procedure: k7232 
o|contracted procedure: k7331 
o|contracted procedure: k7337 
o|contracted procedure: k7346 
o|contracted procedure: k7355 
o|contracted procedure: k7372 
o|contracted procedure: k7394 
o|contracted procedure: k7400 
o|contracted procedure: k7430 
o|contracted procedure: k7436 
o|contracted procedure: k7474 
o|contracted procedure: k7480 
o|contracted procedure: k7526 
o|contracted procedure: k7529 
o|contracted procedure: k7537 
o|contracted procedure: k7556 
o|contracted procedure: k7564 
o|contracted procedure: k7576 
o|contracted procedure: k7579 
o|contracted procedure: k7582 
o|contracted procedure: k7590 
o|contracted procedure: k7598 
o|contracted procedure: k7610 
o|contracted procedure: k7613 
o|contracted procedure: k7616 
o|contracted procedure: k7624 
o|contracted procedure: k7632 
o|contracted procedure: k7308 
o|contracted procedure: k7314 
o|contracted procedure: k7321 
o|contracted procedure: k7325 
o|contracted procedure: k7650 
o|contracted procedure: k7659 
o|contracted procedure: k7666 
o|contracted procedure: k7874 
o|contracted procedure: k7887 
o|contracted procedure: k7904 
o|contracted procedure: k7910 
o|contracted procedure: k7920 
o|contracted procedure: k7932 
o|contracted procedure: k7924 
o|contracted procedure: k7928 
o|contracted procedure: k7938 
o|contracted procedure: k7961 
o|contracted procedure: k7973 
o|contracted procedure: k7993 
o|contracted procedure: k7982 
o|contracted procedure: k8001 
o|contracted procedure: k8004 
o|contracted procedure: k8007 
o|contracted procedure: k8010 
o|contracted procedure: k8013 
o|contracted procedure: k8025 
o|contracted procedure: k8031 
o|contracted procedure: k8050 
o|contracted procedure: k8056 
o|contracted procedure: k9363 
o|contracted procedure: k9387 
o|contracted procedure: k9422 
o|contracted procedure: k9397 
o|contracted procedure: k9411 
o|contracted procedure: k9418 
o|contracted procedure: k9434 
o|contracted procedure: k9444 
o|contracted procedure: k9451 
o|contracted procedure: k9457 
o|contracted procedure: k9546 
o|contracted procedure: k9475 
o|contracted procedure: k9490 
o|contracted procedure: k9493 
o|contracted procedure: k9503 
o|contracted procedure: k9506 
o|contracted procedure: k950312118 
o|contracted procedure: k9513 
o|contracted procedure: k950312122 
o|contracted procedure: k9520 
o|contracted procedure: k950312126 
o|contracted procedure: k9527 
o|contracted procedure: k950312130 
o|contracted procedure: k9535 
o|contracted procedure: k9558 
o|contracted procedure: k9569 
o|contracted procedure: k9982 
o|contracted procedure: k9589 
o|contracted procedure: k9976 
o|contracted procedure: k9592 
o|contracted procedure: k9970 
o|contracted procedure: k9595 
o|contracted procedure: k9964 
o|contracted procedure: k9598 
o|contracted procedure: k9958 
o|contracted procedure: k9601 
o|contracted procedure: k9952 
o|contracted procedure: k9604 
o|contracted procedure: k9946 
o|contracted procedure: k9607 
o|contracted procedure: k9940 
o|contracted procedure: k9610 
o|contracted procedure: k9614 
o|contracted procedure: k9644 
o|removed unused formal parameters: (abrt2289) 
o|contracted procedure: k9730 
o|contracted procedure: k9803 
o|contracted procedure: k9813 
o|contracted procedure: k9817 
o|contracted procedure: k9823 
o|removed unused parameter to known procedure: abrt2289 a9682 
o|contracted procedure: k9864 
o|contracted procedure: k9931 
o|contracted procedure: k9888 
o|contracted procedure: k9934 
o|contracted procedure: k9997 
o|contracted procedure: k9991 
o|contracted procedure: k10015 
o|contracted procedure: k10006 
o|contracted procedure: k10085 
o|contracted procedure: k10108 
o|contracted procedure: k10116 
o|contracted procedure: k10146 
o|contracted procedure: k10170 
o|contracted procedure: k10152 
o|contracted procedure: k10155 
o|contracted procedure: k10164 
o|contracted procedure: k10158 
o|contracted procedure: k10218 
o|contracted procedure: k10236 
o|contracted procedure: k10250 
o|contracted procedure: k10272 
o|contracted procedure: k10278 
o|contracted procedure: k10284 
o|contracted procedure: k10291 
o|contracted procedure: k10310 
o|contracted procedure: k10344 
o|contracted procedure: k10373 
o|contracted procedure: k10376 
o|contracted procedure: k10389 
o|contracted procedure: k10393 
o|contracted procedure: k10397 
o|contracted procedure: k10401 
o|contracted procedure: k10408 
o|contracted procedure: k10460 
o|contracted procedure: k10431 
o|contracted procedure: k10444 
o|contracted procedure: k10511 
o|contracted procedure: k10521 
o|contracted procedure: k10525 
o|contracted procedure: k10534 
o|contracted procedure: k10548 
o|contracted procedure: k10537 
o|contracted procedure: k10544 
o|contracted procedure: k10576 
o|contracted procedure: k10586 
o|contracted procedure: k10590 
o|contracted procedure: k10599 
o|contracted procedure: k10613 
o|contracted procedure: k10602 
o|contracted procedure: k10609 
o|contracted procedure: k8447 
o|contracted procedure: k8456 
o|contracted procedure: k8469 
o|contracted procedure: k10636 
o|contracted procedure: k10650 
o|contracted procedure: k10639 
o|contracted procedure: k10646 
o|contracted procedure: k10660 
o|contracted procedure: k10663 
o|contracted procedure: k10666 
o|contracted procedure: k10678 
o|contracted procedure: k10687 
o|contracted procedure: k10696 
o|inlining procedure: k10703 
o|contracted procedure: k10713 
o|contracted procedure: k10717 
o|contracted procedure: k10721 
o|inlining procedure: k10703 
o|contracted procedure: k10727 
o|contracted procedure: k10734 
o|contracted procedure: k10745 
o|contracted procedure: k10749 
o|contracted procedure: k10753 
o|contracted procedure: k10741 
o|contracted procedure: k10757 
o|contracted procedure: k10769 
o|contracted procedure: k10793 
o|contracted procedure: k10806 
o|contracted procedure: k10812 
o|inlining procedure: k10803 
o|contracted procedure: k10821 
o|inlining procedure: k10803 
o|contracted procedure: k10853 
o|contracted procedure: k10866 
o|contracted procedure: k10874 
o|contracted procedure: k11017 
o|contracted procedure: k11023 
o|contracted procedure: k11184 
o|contracted procedure: k11193 
o|contracted procedure: k11202 
o|contracted procedure: k11205 
o|contracted procedure: k11208 
o|contracted procedure: k11216 
o|contracted procedure: k11224 
o|contracted procedure: k11239 
o|contracted procedure: k11255 
o|contracted procedure: k11261 
o|contracted procedure: k11270 
o|contracted procedure: k11267 
o|contracted procedure: k11297 
o|contracted procedure: k11305 
o|contracted procedure: k11313 
o|contracted procedure: k11321 
o|contracted procedure: k11337 
o|contracted procedure: k11360 
o|contracted procedure: k11356 
o|contracted procedure: k11391 
o|contracted procedure: k11398 
o|contracted procedure: k11405 
o|contracted procedure: k11530 
o|contracted procedure: k11416 
o|contracted procedure: k11428 
o|contracted procedure: k11431 
o|contracted procedure: k11480 
o|contracted procedure: k11509 
o|contracted procedure: k11523 
o|contracted procedure: k11527 
o|contracted procedure: k11519 
o|simplifications: ((if . 1) (let . 232)) 
o|removed binding forms: 641 
(o x)|known list op on rest arg sublist: ##core#rest-length as876 0 
o|inlining procedure: "(eval.scm:193) emit-syntax-trace-info208" 
o|inlining procedure: "(eval.scm:649) emit-syntax-trace-info208" 
o|contracted procedure: "(eval.scm:1037) dload-path2250" 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest23672369 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest23672369 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest23792381 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest23792381 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest24612463 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest24612463 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest14241426 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest14241426 0 
o|simplifications: ((let . 1)) 
o|replaced variables: 17 
o|removed binding forms: 3 
o|removed side-effect free assignment to unused variable: emit-syntax-trace-info208 
o|replaced variables: 15 
o|removed binding forms: 2 
o|inlining procedure: k9659 
o|removed binding forms: 12 
o|replaced variables: 1 
o|removed binding forms: 1 
o|direct leaf routine/allocation: loop251 0 
o|direct leaf routine/allocation: emit-trace-info207 5 
o|direct leaf routine/allocation: g954967 0 
o|direct leaf routine/allocation: loop1058 0 
o|direct leaf routine/allocation: loop1249 0 
o|direct leaf routine/allocation: loop2185 0 
o|direct leaf routine/allocation: for-each-loop25672595 0 
o|direct leaf routine/allocation: for-each-loop26202648 0 
o|direct leaf routine/allocation: for-each-loop26732691 0 
o|direct leaf routine/allocation: store-string 0 
o|contracted procedure: k3666 
o|converted assignments to bindings: (loop251) 
o|contracted procedure: "(eval.scm:481) k6155" 
o|converted assignments to bindings: (loop1058) 
o|contracted procedure: k7340 
o|contracted procedure: "(eval.scm:683) k7360" 
o|contracted procedure: "(eval.scm:687) k7380" 
o|contracted procedure: "(eval.scm:692) k7411" 
o|contracted procedure: "(eval.scm:698) k7450" 
o|contracted procedure: "(eval.scm:705) k7497" 
o|contracted procedure: "(eval.scm:709) k7545" 
o|converted assignments to bindings: (loop1249) 
o|converted assignments to bindings: (loop2185) 
o|contracted procedure: k10494 
o|converted assignments to bindings: (for-each-loop25672595) 
o|contracted procedure: k10559 
o|converted assignments to bindings: (for-each-loop26202648) 
o|contracted procedure: k10624 
o|converted assignments to bindings: (for-each-loop26732691) 
o|simplifications: ((let . 7)) 
o|removed binding forms: 12 
o|direct leaf routine/allocation: for-each-loop953970 0 
o|contracted procedure: k6095 
o|converted assignments to bindings: (for-each-loop953970) 
o|simplifications: ((let . 1)) 
o|removed binding forms: 1 
o|customizable procedures: (doloop14941495 k11349 strip1528 k9356 k9377 complete2400 map-loop24112428 store-result run-safe test2740 loop2754 test-extensions2739 loop1738 for-each-loop26302663 for-each-loop25772610 g25582559 check2516 loop2525 chicken.load#file-exists? doloop24872488 k10067 loop2446 chicken.load#make-relative-pathname chicken.load#load/internal k9903 dload2251 a9682 for-each-loop23302342 doloop23202321 chicken.load#c-toplevel loop2204 chicken.load#path-separator-index/right foldr15341537 loop1509 err1507 g13131322 map-loop13071325 g13411350 map-loop13351353 k7196 k4061 k6871 k6919 g12221223 compile-call213 g10411050 map-loop10351065 k6656 loop1118 loop21123 map-loop9981017 map-loop925943 map-loop890908 map-loop787804 doloop12401241 decorate209 map-loop619636 map-loop646663 map-loop676694 map-loop703724 map-loop736760 map-loop560578 map-loop587608 map-loop424442 map-loop452469 chicken.eval#compile-to-closure g525534 map-loop519537 doloop546547 compile210 k3826 k3799 lookup205 rename204 loop235 g244245 k3585 find-id203) 
o|calls to known targets: 318 
o|identified direct recursive calls: f_3702 1 
o|identified direct recursive calls: f_3655 1 
o|unused rest argument: v281 f_3770 
o|unused rest argument: v302 f_3819 
o|unused rest argument: v303 f_3824 
o|unused rest argument: v322 f_3986 
o|unused rest argument: v323 f_3994 
o|unused rest argument: v324 f_4002 
o|unused rest argument: v325 f_4010 
o|unused rest argument: v326 f_4012 
o|unused rest argument: v327 f_4031 
o|unused rest argument: v328 f_4033 
o|unused rest argument: v344 f_4044 
o|unused rest argument: v361 f_4097 
o|unused rest argument: v362 f_4105 
o|unused rest argument: v363 f_4113 
o|unused rest argument: v364 f_4121 
o|unused rest argument: v365 f_4129 
o|unused rest argument: v366 f_4137 
o|unused rest argument: v367 f_4145 
o|unused rest argument: v368 f_4147 
o|unused rest argument: v370 f_4176 
o|identified direct recursive calls: f_4960 1 
o|identified direct recursive calls: f_5071 1 
o|identified direct recursive calls: f_5105 1 
o|identified direct recursive calls: f_5247 1 
o|identified direct recursive calls: f_5295 1 
o|identified direct recursive calls: f_5343 1 
o|identified direct recursive calls: f_5411 1 
o|identified direct recursive calls: f_7257 1 
o|identified direct recursive calls: f_6147 1 
o|identified direct recursive calls: f_6669 1 
o|identified direct recursive calls: f_7303 1 
o|unused rest argument: _1264 f_7653 
o|identified direct recursive calls: f_7869 1 
o|identified direct recursive calls: f_7968 1 
o|identified direct recursive calls: f_9401 1 
o|identified direct recursive calls: f_9485 4 
o|unused rest argument: rest23672369 f_9989 
o|unused rest argument: rest23792381 f_10004 
o|unused rest argument: rest24612463 f_10150 
o|identified direct recursive calls: f_10529 1 
o|identified direct recursive calls: f_10594 1 
o|identified direct recursive calls: f_10631 1 
o|unused rest argument: rest14241426 f_11414 
o|fast box initializations: 47 
o|fast global references: 70 
o|fast global assignments: 30 
o|dropping unused closure argument: f_10258 
o|dropping unused closure argument: f_10529 
o|dropping unused closure argument: f_10594 
o|dropping unused closure argument: f_10631 
o|dropping unused closure argument: f_10893 
o|dropping unused closure argument: f_10952 
o|dropping unused closure argument: f_11015 
o|dropping unused closure argument: f_3547 
o|dropping unused closure argument: f_3732 
o|dropping unused closure argument: f_3756 
o|dropping unused closure argument: f_6669 
o|dropping unused closure argument: f_7303 
o|dropping unused closure argument: f_7959 
o|dropping unused closure argument: f_9391 
o|dropping unused closure argument: f_9426 
o|dropping unused closure argument: f_9573 
*/
/* end of file */
