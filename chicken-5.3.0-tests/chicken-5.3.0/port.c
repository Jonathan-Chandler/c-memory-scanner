/* Generated from port.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.3.0rc4 ((HEAD detached at 5.3.0rc4)) (rev b6cbb1ba)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: port.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file port.c -emit-import-library chicken.port
   unit: port
   uses: extras library
*/
#include "chicken.h"



#if !defined(_WIN32)
# include <sys/ioctl.h>
# include <termios.h>
#endif

#if !defined(__ANDROID__) && defined(TIOCGWINSZ)
static int get_tty_size(int fd, int *rows, int *cols)
{
  struct winsize tty_size;
  int r;

  memset(&tty_size, 0, sizeof tty_size);

  r = ioctl(fd, TIOCGWINSZ, &tty_size);
  if (r == 0) {
     *rows = tty_size.ws_row;
     *cols = tty_size.ws_col;
  }
  return r;
}
#else
static int get_tty_size(int fd, int *rows, int *cols)
{
  *rows = *cols = 0;
  errno = ENOSYS;
  return -1;
}
#endif

#if defined(_WIN32) && !defined(__CYGWIN__)
char *ttyname(int fd) {
  errno = ENOSYS;
  return NULL;
}
#endif



static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[90];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,31),40,99,104,105,99,107,101,110,46,112,111,114,116,35,112,111,114,116,45,110,97,109,101,32,46,32,114,101,115,116,41,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,39),40,99,104,105,99,107,101,110,46,112,111,114,116,35,115,101,116,45,112,111,114,116,45,110,97,109,101,33,32,112,111,114,116,32,110,97,109,101,41,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,35),40,99,104,105,99,107,101,110,46,112,111,114,116,35,112,111,114,116,45,112,111,115,105,116,105,111,110,32,46,32,114,101,115,116,41,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,51),40,99,104,105,99,107,101,110,46,112,111,114,116,35,115,101,116,45,98,117,102,102,101,114,105,110,103,45,109,111,100,101,33,32,112,111,114,116,32,109,111,100,101,32,46,32,115,105,122,101,41,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,112,111,114,116,35,112,111,114,116,45,102,111,114,45,101,97,99,104,32,102,110,32,116,104,117,110,107,41,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,9),40,108,111,111,112,32,120,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,32),40,99,104,105,99,107,101,110,46,112,111,114,116,35,112,111,114,116,45,109,97,112,32,102,110,32,116,104,117,110,107,41};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,97,99,99,41,0,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,112,111,114,116,35,112,111,114,116,45,102,111,108,100,32,102,110,32,97,99,99,32,116,104,117,110,107,41,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,14),40,102,95,49,49,50,55,32,98,117,102,32,110,41,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,13),40,100,111,108,111,111,112,49,57,49,32,105,41,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,14),40,102,95,49,49,51,50,32,98,117,102,32,110,41,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,110,41};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,7),40,97,49,49,52,57,41,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,9),40,97,49,49,53,53,32,120,41,0,0,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,112,111,114,116,35,99,111,112,121,45,112,111,114,116,32,115,114,99,32,100,101,115,116,32,46,32,114,101,115,116,41};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,11),40,103,50,53,51,32,103,50,54,53,41,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,23),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,53,50,32,103,50,53,57,41,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,9),40,97,49,49,57,49,32,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,23),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,55,55,32,103,50,56,52,41,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,7),40,97,49,50,50,53,41,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,112,111,114,116,35,109,97,107,101,45,98,114,111,97,100,99,97,115,116,45,112,111,114,116,32,46,32,112,111,114,116,115,41,0,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,7),40,97,49,50,54,51,41,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,7),40,97,49,50,57,56,41,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,7),40,97,49,51,49,56,41,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,110,32,99,41,0,0,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,22),40,97,49,51,53,51,32,112,32,110,32,100,101,115,116,32,115,116,97,114,116,41,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,48),40,99,104,105,99,107,101,110,46,112,111,114,116,35,109,97,107,101,45,99,111,110,99,97,116,101,110,97,116,101,100,45,112,111,114,116,32,112,49,32,46,32,112,111,114,116,115,41};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,7),40,97,49,52,49,53,41,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,7),40,97,49,52,50,48,41,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,7),40,97,49,52,50,54,41,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,46),40,99,104,105,99,107,101,110,46,112,111,114,116,35,119,105,116,104,45,105,110,112,117,116,45,102,114,111,109,45,112,111,114,116,32,112,111,114,116,32,116,104,117,110,107,41,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,7),40,97,49,52,52,48,41,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,7),40,97,49,52,52,53,41,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,7),40,97,49,52,53,49,41,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,112,111,114,116,35,119,105,116,104,45,111,117,116,112,117,116,45,116,111,45,112,111,114,116,32,112,111,114,116,32,116,104,117,110,107,41,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,7),40,97,49,52,54,53,41,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,7),40,97,49,52,55,48,41,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,7),40,97,49,52,55,54,41,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,51),40,99,104,105,99,107,101,110,46,112,111,114,116,35,119,105,116,104,45,101,114,114,111,114,45,111,117,116,112,117,116,45,116,111,45,112,111,114,116,32,112,111,114,116,32,116,104,117,110,107,41,0,0,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,46),40,99,104,105,99,107,101,110,46,112,111,114,116,35,99,97,108,108,45,119,105,116,104,45,105,110,112,117,116,45,115,116,114,105,110,103,32,115,116,114,32,112,114,111,99,41,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,112,111,114,116,35,99,97,108,108,45,119,105,116,104,45,111,117,116,112,117,116,45,115,116,114,105,110,103,32,112,114,111,99,41,0,0,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,7),40,97,49,53,49,49,41,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,7),40,97,49,53,49,54,41,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,7),40,97,49,53,50,50,41,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,47),40,99,104,105,99,107,101,110,46,112,111,114,116,35,119,105,116,104,45,105,110,112,117,116,45,102,114,111,109,45,115,116,114,105,110,103,32,115,116,114,32,116,104,117,110,107,41,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,7),40,97,49,53,51,54,41,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,7),40,97,49,53,52,49,41,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,7),40,97,49,53,53,48,41,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,112,111,114,116,35,119,105,116,104,45,111,117,116,112,117,116,45,116,111,45,115,116,114,105,110,103,32,116,104,117,110,107,41,0,0,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,7),40,97,49,53,54,52,41,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,7),40,97,49,53,54,57,41,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,7),40,97,49,53,55,56,41,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,48),40,99,104,105,99,107,101,110,46,112,111,114,116,35,119,105,116,104,45,101,114,114,111,114,45,111,117,116,112,117,116,45,116,111,45,115,116,114,105,110,103,32,116,104,117,110,107,41};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,9),40,97,49,54,50,50,32,112,41,0,0,0,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,9),40,97,49,54,52,51,32,112,41,0,0,0,0,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,11),40,97,49,54,54,52,32,112,32,100,41,0,0,0,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,9),40,97,49,54,55,48,32,112,41,0,0,0,0,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,55),40,99,104,105,99,107,101,110,46,112,111,114,116,35,109,97,107,101,45,105,110,112,117,116,45,112,111,114,116,32,114,101,97,100,32,114,101,97,100,121,63,32,99,108,111,115,101,32,46,32,114,101,115,116,41,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,11),40,97,49,55,52,50,32,112,32,99,41,0,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,11),40,97,49,55,53,50,32,112,32,115,41,0,0,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,11),40,97,49,55,53,56,32,112,32,100,41,0,0,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,9),40,97,49,55,54,52,32,112,41,0,0,0,0,0,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,50),40,99,104,105,99,107,101,110,46,112,111,114,116,35,109,97,107,101,45,111,117,116,112,117,116,45,112,111,114,116,32,119,114,105,116,101,32,99,108,111,115,101,32,46,32,114,101,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,9),40,97,49,55,57,53,32,95,41,0,0,0,0,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,9),40,97,49,56,48,49,32,95,41,0,0,0,0,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,11),40,97,49,56,48,55,32,95,32,99,41,0,0,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,11),40,97,49,56,49,51,32,95,32,115,41,0,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,11),40,97,49,56,49,57,32,95,32,100,41,0,0,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,9),40,97,49,56,52,52,32,95,41,0,0,0,0,0,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,9),40,97,49,56,53,48,32,95,41,0,0,0,0,0,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,15),40,97,49,56,53,54,32,95,32,110,32,100,32,115,41,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,11),40,97,49,56,54,50,32,95,32,108,41,0,0,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,7),40,97,49,56,54,56,41,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,112,111,114,116,35,109,97,107,101,45,98,105,100,105,114,101,99,116,105,111,110,97,108,45,112,111,114,116,32,105,32,111,41,0,0,0,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,112,111,114,116,35,112,111,115,105,120,45,101,114,114,111,114,32,116,121,112,101,32,108,111,99,32,109,115,103,32,97,114,103,115,41,0,0,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,34),40,99,104,105,99,107,101,110,46,112,111,114,116,35,116,101,114,109,105,110,97,108,45,112,111,114,116,63,32,112,111,114,116,41,0,0,0,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,112,111,114,116,35,99,104,101,99,107,45,116,101,114,109,105,110,97,108,33,32,99,97,108,108,101,114,32,112,111,114,116,41,0,0,0,0,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,33),40,99,104,105,99,107,101,110,46,112,111,114,116,35,116,101,114,109,105,110,97,108,45,110,97,109,101,32,112,111,114,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,33),40,99,104,105,99,107,101,110,46,112,111,114,116,35,116,101,114,109,105,110,97,108,45,115,105,122,101,32,112,111,114,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from k1978 */
C_regparm static C_word C_fcall stub551(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int *t1=(int *)C_c_pointer_nn(C_a1);
int *t2=(int *)C_c_pointer_nn(C_a2);
C_r=C_fix((C_word)get_tty_size(t0,t1,t2));
return C_r;}

/* from k1948 */
C_regparm static C_word C_fcall stub537(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)ttyname(t0));
return C_r;}

/* from k1882 */
C_regparm static C_word C_fcall stub515(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)strerror(t0));
return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub144(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word p=(C_word )(C_a0);
int m=(int )C_unfix(C_a1);
int s=(int )C_unfix(C_a2);
C_return(setvbuf(C_port_file(p), NULL, m, s));
C_ret:
#undef return

return C_r;}

C_noret_decl(f2125)
static void C_ccall f2125(C_word c,C_word *av) C_noret;
C_noret_decl(f_1002)
static void C_ccall f_1002(C_word c,C_word *av) C_noret;
C_noret_decl(f_1025)
static void C_fcall f_1025(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1029)
static void C_ccall f_1029(C_word c,C_word *av) C_noret;
C_noret_decl(f_1038)
static void C_ccall f_1038(C_word c,C_word *av) C_noret;
C_noret_decl(f_1047)
static void C_ccall f_1047(C_word c,C_word *av) C_noret;
C_noret_decl(f_1052)
static void C_fcall f_1052(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1056)
static void C_fcall f_1056(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1059)
static void C_ccall f_1059(C_word c,C_word *av) C_noret;
C_noret_decl(f_1094)
static void C_ccall f_1094(C_word c,C_word *av) C_noret;
C_noret_decl(f_1097)
static void C_ccall f_1097(C_word c,C_word *av) C_noret;
C_noret_decl(f_1127)
static void C_ccall f_1127(C_word c,C_word *av) C_noret;
C_noret_decl(f_1132)
static void C_ccall f_1132(C_word c,C_word *av) C_noret;
C_noret_decl(f_1150)
static void C_fcall f_1150(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1156)
static void C_fcall f_1156(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1186)
static void C_ccall f_1186(C_word c,C_word *av) C_noret;
C_noret_decl(f_1192)
static void C_ccall f_1192(C_word c,C_word *av) C_noret;
C_noret_decl(f_1194)
static void C_fcall f_1194(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1203)
static void C_fcall f_1203(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1213)
static void C_ccall f_1213(C_word c,C_word *av) C_noret;
C_noret_decl(f_1226)
static void C_ccall f_1226(C_word c,C_word *av) C_noret;
C_noret_decl(f_1232)
static void C_fcall f_1232(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1242)
static void C_ccall f_1242(C_word c,C_word *av) C_noret;
C_noret_decl(f_1255)
static void C_ccall f_1255(C_word c,C_word *av) C_noret;
C_noret_decl(f_1264)
static void C_ccall f_1264(C_word c,C_word *av) C_noret;
C_noret_decl(f_1270)
static void C_fcall f_1270(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1280)
static void C_ccall f_1280(C_word c,C_word *av) C_noret;
C_noret_decl(f_1299)
static void C_ccall f_1299(C_word c,C_word *av) C_noret;
C_noret_decl(f_1319)
static void C_ccall f_1319(C_word c,C_word *av) C_noret;
C_noret_decl(f_1325)
static void C_fcall f_1325(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1335)
static void C_ccall f_1335(C_word c,C_word *av) C_noret;
C_noret_decl(f_1354)
static void C_ccall f_1354(C_word c,C_word *av) C_noret;
C_noret_decl(f_1360)
static void C_fcall f_1360(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1376)
static void C_ccall f_1376(C_word c,C_word *av) C_noret;
C_noret_decl(f_1407)
static void C_ccall f_1407(C_word c,C_word *av) C_noret;
C_noret_decl(f_1416)
static void C_ccall f_1416(C_word c,C_word *av) C_noret;
C_noret_decl(f_1421)
static void C_ccall f_1421(C_word c,C_word *av) C_noret;
C_noret_decl(f_1427)
static void C_ccall f_1427(C_word c,C_word *av) C_noret;
C_noret_decl(f_1432)
static void C_ccall f_1432(C_word c,C_word *av) C_noret;
C_noret_decl(f_1441)
static void C_ccall f_1441(C_word c,C_word *av) C_noret;
C_noret_decl(f_1446)
static void C_ccall f_1446(C_word c,C_word *av) C_noret;
C_noret_decl(f_1452)
static void C_ccall f_1452(C_word c,C_word *av) C_noret;
C_noret_decl(f_1457)
static void C_ccall f_1457(C_word c,C_word *av) C_noret;
C_noret_decl(f_1466)
static void C_ccall f_1466(C_word c,C_word *av) C_noret;
C_noret_decl(f_1471)
static void C_ccall f_1471(C_word c,C_word *av) C_noret;
C_noret_decl(f_1477)
static void C_ccall f_1477(C_word c,C_word *av) C_noret;
C_noret_decl(f_1482)
static void C_ccall f_1482(C_word c,C_word *av) C_noret;
C_noret_decl(f_1486)
static void C_ccall f_1486(C_word c,C_word *av) C_noret;
C_noret_decl(f_1491)
static void C_ccall f_1491(C_word c,C_word *av) C_noret;
C_noret_decl(f_1495)
static void C_ccall f_1495(C_word c,C_word *av) C_noret;
C_noret_decl(f_1498)
static void C_ccall f_1498(C_word c,C_word *av) C_noret;
C_noret_decl(f_1503)
static void C_ccall f_1503(C_word c,C_word *av) C_noret;
C_noret_decl(f_1507)
static void C_ccall f_1507(C_word c,C_word *av) C_noret;
C_noret_decl(f_1512)
static void C_ccall f_1512(C_word c,C_word *av) C_noret;
C_noret_decl(f_1517)
static void C_ccall f_1517(C_word c,C_word *av) C_noret;
C_noret_decl(f_1523)
static void C_ccall f_1523(C_word c,C_word *av) C_noret;
C_noret_decl(f_1528)
static void C_ccall f_1528(C_word c,C_word *av) C_noret;
C_noret_decl(f_1532)
static void C_ccall f_1532(C_word c,C_word *av) C_noret;
C_noret_decl(f_1537)
static void C_ccall f_1537(C_word c,C_word *av) C_noret;
C_noret_decl(f_1542)
static void C_ccall f_1542(C_word c,C_word *av) C_noret;
C_noret_decl(f_1546)
static void C_ccall f_1546(C_word c,C_word *av) C_noret;
C_noret_decl(f_1551)
static void C_ccall f_1551(C_word c,C_word *av) C_noret;
C_noret_decl(f_1556)
static void C_ccall f_1556(C_word c,C_word *av) C_noret;
C_noret_decl(f_1560)
static void C_ccall f_1560(C_word c,C_word *av) C_noret;
C_noret_decl(f_1565)
static void C_ccall f_1565(C_word c,C_word *av) C_noret;
C_noret_decl(f_1570)
static void C_ccall f_1570(C_word c,C_word *av) C_noret;
C_noret_decl(f_1574)
static void C_ccall f_1574(C_word c,C_word *av) C_noret;
C_noret_decl(f_1579)
static void C_ccall f_1579(C_word c,C_word *av) C_noret;
C_noret_decl(f_1584)
static void C_ccall f_1584(C_word c,C_word *av) C_noret;
C_noret_decl(f_1618)
static void C_ccall f_1618(C_word c,C_word *av) C_noret;
C_noret_decl(f_1621)
static void C_ccall f_1621(C_word c,C_word *av) C_noret;
C_noret_decl(f_1623)
static void C_ccall f_1623(C_word c,C_word *av) C_noret;
C_noret_decl(f_1644)
static void C_ccall f_1644(C_word c,C_word *av) C_noret;
C_noret_decl(f_1660)
static void C_ccall f_1660(C_word c,C_word *av) C_noret;
C_noret_decl(f_1665)
static void C_ccall f_1665(C_word c,C_word *av) C_noret;
C_noret_decl(f_1671)
static void C_ccall f_1671(C_word c,C_word *av) C_noret;
C_noret_decl(f_1725)
static void C_ccall f_1725(C_word c,C_word *av) C_noret;
C_noret_decl(f_1738)
static void C_ccall f_1738(C_word c,C_word *av) C_noret;
C_noret_decl(f_1741)
static void C_ccall f_1741(C_word c,C_word *av) C_noret;
C_noret_decl(f_1743)
static void C_ccall f_1743(C_word c,C_word *av) C_noret;
C_noret_decl(f_1753)
static void C_ccall f_1753(C_word c,C_word *av) C_noret;
C_noret_decl(f_1759)
static void C_ccall f_1759(C_word c,C_word *av) C_noret;
C_noret_decl(f_1765)
static void C_ccall f_1765(C_word c,C_word *av) C_noret;
C_noret_decl(f_1780)
static void C_ccall f_1780(C_word c,C_word *av) C_noret;
C_noret_decl(f_1787)
static void C_ccall f_1787(C_word c,C_word *av) C_noret;
C_noret_decl(f_1790)
static void C_ccall f_1790(C_word c,C_word *av) C_noret;
C_noret_decl(f_1796)
static void C_ccall f_1796(C_word c,C_word *av) C_noret;
C_noret_decl(f_1802)
static void C_ccall f_1802(C_word c,C_word *av) C_noret;
C_noret_decl(f_1808)
static void C_ccall f_1808(C_word c,C_word *av) C_noret;
C_noret_decl(f_1814)
static void C_ccall f_1814(C_word c,C_word *av) C_noret;
C_noret_decl(f_1820)
static void C_ccall f_1820(C_word c,C_word *av) C_noret;
C_noret_decl(f_1845)
static void C_ccall f_1845(C_word c,C_word *av) C_noret;
C_noret_decl(f_1851)
static void C_ccall f_1851(C_word c,C_word *av) C_noret;
C_noret_decl(f_1857)
static void C_ccall f_1857(C_word c,C_word *av) C_noret;
C_noret_decl(f_1863)
static void C_ccall f_1863(C_word c,C_word *av) C_noret;
C_noret_decl(f_1869)
static void C_ccall f_1869(C_word c,C_word *av) C_noret;
C_noret_decl(f_1885)
static void C_fcall f_1885(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1889)
static void C_ccall f_1889(C_word c,C_word *av) C_noret;
C_noret_decl(f_1896)
static void C_ccall f_1896(C_word c,C_word *av) C_noret;
C_noret_decl(f_1900)
static void C_ccall f_1900(C_word c,C_word *av) C_noret;
C_noret_decl(f_1902)
static void C_ccall f_1902(C_word c,C_word *av) C_noret;
C_noret_decl(f_1908)
static void C_ccall f_1908(C_word c,C_word *av) C_noret;
C_noret_decl(f_1920)
static void C_fcall f_1920(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1951)
static void C_ccall f_1951(C_word c,C_word *av) C_noret;
C_noret_decl(f_1955)
static void C_ccall f_1955(C_word c,C_word *av) C_noret;
C_noret_decl(f_1958)
static void C_ccall f_1958(C_word c,C_word *av) C_noret;
C_noret_decl(f_1981)
static void C_ccall f_1981(C_word c,C_word *av) C_noret;
C_noret_decl(f_1985)
static void C_ccall f_1985(C_word c,C_word *av) C_noret;
C_noret_decl(f_2006)
static void C_ccall f_2006(C_word c,C_word *av) C_noret;
C_noret_decl(f_2010)
static void C_ccall f_2010(C_word c,C_word *av) C_noret;
C_noret_decl(f_733)
static void C_ccall f_733(C_word c,C_word *av) C_noret;
C_noret_decl(f_736)
static void C_ccall f_736(C_word c,C_word *av) C_noret;
C_noret_decl(f_738)
static void C_ccall f_738(C_word c,C_word *av) C_noret;
C_noret_decl(f_745)
static void C_ccall f_745(C_word c,C_word *av) C_noret;
C_noret_decl(f_756)
static void C_ccall f_756(C_word c,C_word *av) C_noret;
C_noret_decl(f_760)
static void C_ccall f_760(C_word c,C_word *av) C_noret;
C_noret_decl(f_768)
static void C_ccall f_768(C_word c,C_word *av) C_noret;
C_noret_decl(f_775)
static void C_ccall f_775(C_word c,C_word *av) C_noret;
C_noret_decl(f_800)
static void C_ccall f_800(C_word c,C_word *av) C_noret;
C_noret_decl(f_804)
static void C_ccall f_804(C_word c,C_word *av) C_noret;
C_noret_decl(f_810)
static void C_ccall f_810(C_word c,C_word *av) C_noret;
C_noret_decl(f_813)
static void C_ccall f_813(C_word c,C_word *av) C_noret;
C_noret_decl(f_819)
static void C_fcall f_819(C_word t0,C_word t1) C_noret;
C_noret_decl(f_876)
static void C_ccall f_876(C_word c,C_word *av) C_noret;
C_noret_decl(f_882)
static void C_fcall f_882(C_word t0,C_word t1) C_noret;
C_noret_decl(f_886)
static void C_ccall f_886(C_word c,C_word *av) C_noret;
C_noret_decl(f_895)
static void C_ccall f_895(C_word c,C_word *av) C_noret;
C_noret_decl(f_900)
static void C_ccall f_900(C_word c,C_word *av) C_noret;
C_noret_decl(f_906)
static void C_fcall f_906(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_910)
static void C_ccall f_910(C_word c,C_word *av) C_noret;
C_noret_decl(f_930)
static void C_ccall f_930(C_word c,C_word *av) C_noret;
C_noret_decl(f_932)
static void C_ccall f_932(C_word c,C_word *av) C_noret;
C_noret_decl(f_938)
static void C_fcall f_938(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_942)
static void C_ccall f_942(C_word c,C_word *av) C_noret;
C_noret_decl(f_955)
static void C_ccall f_955(C_word c,C_word *av) C_noret;
C_noret_decl(f_962)
static void C_ccall f_962(C_word c,C_word *av) C_noret;
C_noret_decl(f_967)
static void C_fcall f_967(C_word t0,C_word t1) C_noret;
C_noret_decl(f_971)
static void C_ccall f_971(C_word c,C_word *av) C_noret;
C_noret_decl(f_980)
static void C_ccall f_980(C_word c,C_word *av) C_noret;
C_noret_decl(f_992)
static void C_fcall f_992(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(C_port_toplevel)
C_externexport void C_ccall C_port_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1025)
static void C_ccall trf_1025(C_word c,C_word *av) C_noret;
static void C_ccall trf_1025(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1025(t0,t1);}

C_noret_decl(trf_1052)
static void C_ccall trf_1052(C_word c,C_word *av) C_noret;
static void C_ccall trf_1052(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1052(t0,t1,t2);}

C_noret_decl(trf_1056)
static void C_ccall trf_1056(C_word c,C_word *av) C_noret;
static void C_ccall trf_1056(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1056(t0,t1);}

C_noret_decl(trf_1150)
static void C_ccall trf_1150(C_word c,C_word *av) C_noret;
static void C_ccall trf_1150(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1150(t0,t1);}

C_noret_decl(trf_1156)
static void C_ccall trf_1156(C_word c,C_word *av) C_noret;
static void C_ccall trf_1156(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1156(t0,t1,t2);}

C_noret_decl(trf_1194)
static void C_ccall trf_1194(C_word c,C_word *av) C_noret;
static void C_ccall trf_1194(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1194(t0,t1,t2);}

C_noret_decl(trf_1203)
static void C_ccall trf_1203(C_word c,C_word *av) C_noret;
static void C_ccall trf_1203(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1203(t0,t1,t2);}

C_noret_decl(trf_1232)
static void C_ccall trf_1232(C_word c,C_word *av) C_noret;
static void C_ccall trf_1232(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1232(t0,t1,t2);}

C_noret_decl(trf_1270)
static void C_ccall trf_1270(C_word c,C_word *av) C_noret;
static void C_ccall trf_1270(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1270(t0,t1);}

C_noret_decl(trf_1325)
static void C_ccall trf_1325(C_word c,C_word *av) C_noret;
static void C_ccall trf_1325(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1325(t0,t1);}

C_noret_decl(trf_1360)
static void C_ccall trf_1360(C_word c,C_word *av) C_noret;
static void C_ccall trf_1360(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1360(t0,t1,t2,t3);}

C_noret_decl(trf_1885)
static void C_ccall trf_1885(C_word c,C_word *av) C_noret;
static void C_ccall trf_1885(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1885(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1920)
static void C_ccall trf_1920(C_word c,C_word *av) C_noret;
static void C_ccall trf_1920(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1920(t0,t1,t2);}

C_noret_decl(trf_819)
static void C_ccall trf_819(C_word c,C_word *av) C_noret;
static void C_ccall trf_819(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_819(t0,t1);}

C_noret_decl(trf_882)
static void C_ccall trf_882(C_word c,C_word *av) C_noret;
static void C_ccall trf_882(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_882(t0,t1);}

C_noret_decl(trf_906)
static void C_ccall trf_906(C_word c,C_word *av) C_noret;
static void C_ccall trf_906(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_906(t0,t1,t2);}

C_noret_decl(trf_938)
static void C_ccall trf_938(C_word c,C_word *av) C_noret;
static void C_ccall trf_938(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_938(t0,t1,t2);}

C_noret_decl(trf_967)
static void C_ccall trf_967(C_word c,C_word *av) C_noret;
static void C_ccall trf_967(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_967(t0,t1);}

C_noret_decl(trf_992)
static void C_ccall trf_992(C_word c,C_word *av) C_noret;
static void C_ccall trf_992(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_992(t0,t1,t2);}

/* f2125 in chicken.port#port-name in k734 in k731 */
static void C_ccall f2125(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f2125,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_slot(((C_word*)t0)[3],C_fix(3));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1000 in doloop191 */
static void C_ccall f_1002(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1002,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_992(t2,((C_word*)t0)[3],C_fixnum_plus(((C_word*)t0)[4],C_fix(1)));}

/* loop in chicken.port#copy-port in k734 in k731 */
static void C_fcall f_1025(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1025,2,t0,t1);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1029,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* port.scm:193: reader */
t3=((C_word*)t0)[4];
f_1150(t3,t2);}

/* k1027 in loop in chicken.port#copy-port in k734 in k731 */
static void C_ccall f_1029(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1029,c,av);}
a=C_alloc(4);
if(C_truep(C_eofp(t1))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1038,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* port.scm:195: writer */
t3=((C_word*)t0)[4];
f_1156(t3,t2,t1);}}

/* k1036 in k1027 in loop in chicken.port#copy-port in k734 in k731 */
static void C_ccall f_1038(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1038,c,av);}
/* port.scm:196: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1025(t2,((C_word*)t0)[3]);}

/* k1045 in chicken.port#copy-port in k734 in k731 */
static void C_ccall f_1047(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1047,c,av);}
a=C_alloc(10);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1052,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word)li14),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_1052(t5,((C_word*)t0)[5],C_fix(0));}

/* loop in k1045 in chicken.port#copy-port in k734 in k731 */
static void C_fcall f_1052(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,4)))){
C_save_and_reclaim_args((void *)trf_1052,3,t0,t1,t2);}
a=C_alloc(15);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1056,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)t3)[1],C_fix(1024)))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1094,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* port.scm:201: chicken.io#write-string */
t6=*((C_word*)lf[28]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(1024);
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t5=t4;
f_1056(t5,C_SCHEME_UNDEFINED);}}

/* k1054 in loop in k1045 in chicken.port#copy-port in k734 in k731 */
static void C_fcall f_1056(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_1056,2,t0,t1);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1059,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* port.scm:203: reader */
t3=((C_word*)t0)[7];{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[8];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k1057 in k1054 in loop in k1045 in chicken.port#copy-port in k734 in k731 */
static void C_ccall f_1059(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1059,c,av);}
if(C_truep(C_eofp(t1))){
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],C_fix(0)))){
/* port.scm:206: chicken.io#write-string */
t2=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)((C_word*)t0)[2])[1];
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}
else{
t2=C_fix(C_character_code(t1));
t3=C_setbyte(((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1],t2);
/* port.scm:209: loop */
t4=((C_word*)((C_word*)t0)[6])[1];
f_1052(t4,((C_word*)t0)[3],C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],C_fix(1)));}}

/* k1092 in loop in k1045 in chicken.port#copy-port in k734 in k731 */
static void C_ccall f_1094(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1094,c,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_fix(0));
t3=((C_word*)t0)[3];
f_1056(t3,t2);}

/* chicken.port#copy-port in k734 in k731 */
static void C_ccall f_1097(C_word c,C_word *av){
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
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_1097,c,av);}
a=C_alloc(18);
t4=C_rest_nullp(c,4);
t5=(C_truep(t4)?((C_word*)t0)[2]:C_get_rest_arg(c,4,av,4,t0));
t6=C_rest_nullp(c,4);
t7=C_rest_nullp(c,5);
t8=(C_truep(t7)?((C_word*)t0)[3]:C_get_rest_arg(c,5,av,4,t0));
t9=C_rest_nullp(c,5);
t10=C_eqp(t5,((C_word*)t0)[2]);
if(C_truep(t10)){
t11=C_eqp(t8,((C_word*)t0)[3]);
t12=(C_truep(t11)?(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1127,a[2]=t3,a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp):(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1132,a[2]=t8,a[3]=t3,a[4]=((C_word)li12),tmp=(C_word)a,a+=5,tmp));
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_962,a[2]=t12,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[30]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t13;
av2[2]=C_fix(1024);
av2[3]=C_make_character(32);
tp(4,av2);}}
else{
t11=C_eqp(t8,((C_word*)t0)[3]);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1047,a[2]=t3,a[3]=t5,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[30]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t12;
av2[2]=C_fix(1024);
av2[3]=C_make_character(32);
tp(4,av2);}}
else{
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1150,a[2]=t5,a[3]=t2,a[4]=((C_word)li15),tmp=(C_word)a,a+=5,tmp);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1156,a[2]=t8,a[3]=t3,a[4]=((C_word)li16),tmp=(C_word)a,a+=5,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1025,a[2]=t15,a[3]=t13,a[4]=t12,a[5]=((C_word)li17),tmp=(C_word)a,a+=6,tmp));
t17=((C_word*)t15)[1];
f_1025(t17,t1);}}}

/* f_1127 in chicken.port#copy-port in k734 in k731 */
static void C_ccall f_1127(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1127,c,av);}
/* port.scm:216: chicken.io#write-string */
t4=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* f_1132 in chicken.port#copy-port in k734 in k731 */
static void C_ccall f_1132(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_1132,c,av);}
a=C_alloc(10);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_992,a[2]=t3,a[3]=t5,a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word)li11),tmp=(C_word)a,a+=8,tmp));
t7=((C_word*)t5)[1];
f_992(t7,t1,C_fix(0));}

/* a1149 in chicken.port#copy-port in k734 in k731 */
static void C_fcall f_1150(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_1150,2,t0,t1);}
/* port.scm:222: read */
t2=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* a1155 in chicken.port#copy-port in k734 in k731 */
static void C_fcall f_1156(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_1156,3,t0,t1,t2);}
/* port.scm:223: write */
t3=((C_word*)t0)[2];{
C_word av2[4];
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}

/* chicken.port#make-broadcast-port in k734 in k731 */
static void C_ccall f_1186(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +8,c,4)))){
C_save_and_reclaim((void*)f_1186,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+8);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1192,a[2]=t2,a[3]=((C_word)li21),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1226,a[2]=t2,a[3]=((C_word)li23),tmp=(C_word)a,a+=4,tmp);
/* port.scm:229: make-output-port */
t5=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t3;
av2[3]=*((C_word*)lf[34]+1);
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* a1191 in chicken.port#make-broadcast-port in k734 in k731 */
static void C_ccall f_1192(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_1192,c,av);}
a=C_alloc(11);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1194,a[2]=t2,a[3]=((C_word)li19),tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1203,a[2]=t5,a[3]=t3,a[4]=((C_word)li20),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_1203(t7,t1,((C_word*)t0)[2]);}

/* g253 in a1191 in chicken.port#make-broadcast-port in k734 in k731 */
static void C_fcall f_1194(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_1194,3,t0,t1,t2);}
t3=*((C_word*)lf[28]+1);
/* port.scm:230: g268 */
t4=*((C_word*)lf[28]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=C_SCHEME_FALSE;
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* for-each-loop252 in a1191 in chicken.port#make-broadcast-port in k734 in k731 */
static void C_fcall f_1203(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1203,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1213,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* port.scm:230: g253 */
t4=((C_word*)t0)[3];
f_1194(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k1211 in for-each-loop252 in a1191 in chicken.port#make-broadcast-port in k734 in k731 */
static void C_ccall f_1213(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1213,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_1203(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* a1225 in chicken.port#make-broadcast-port in k734 in k731 */
static void C_ccall f_1226(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1226,c,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1232,a[2]=t3,a[3]=((C_word)li22),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_1232(t5,t1,((C_word*)t0)[2]);}

/* for-each-loop277 in a1225 in chicken.port#make-broadcast-port in k734 in k731 */
static void C_fcall f_1232(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1232,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1242,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* port.scm:232: g278 */
t4=*((C_word*)lf[32]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k1240 in for-each-loop277 in a1225 in chicken.port#make-broadcast-port in k734 in k731 */
static void C_ccall f_1242(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1242,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_1232(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* chicken.port#make-concatenated-port in k734 in k731 */
static void C_ccall f_1255(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +21,c,6)))){
C_save_and_reclaim((void*)f_1255,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+21);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
t4=C_a_i_cons(&a,2,t2,t3);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1264,a[2]=t6,a[3]=((C_word)li26),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1299,a[2]=t6,a[3]=((C_word)li27),tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1319,a[2]=t6,a[3]=((C_word)li29),tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1354,a[2]=t6,a[3]=((C_word)li31),tmp=(C_word)a,a+=4,tmp);
/* port.scm:237: make-input-port */
t11=*((C_word*)lf[39]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t11;
av2[1]=t1;
av2[2]=t7;
av2[3]=t8;
av2[4]=*((C_word*)lf[34]+1);
av2[5]=t9;
av2[6]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(7,av2);}}

/* a1263 in chicken.port#make-concatenated-port in k734 in k731 */
static void C_ccall f_1264(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_1264,c,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1270,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li25),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_1270(t5,t1);}

/* loop in a1263 in chicken.port#make-concatenated-port in k734 in k731 */
static void C_fcall f_1270(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1270,2,t0,t1);}
a=C_alloc(5);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
t2=t1;{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_FILE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1280,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* ##sys#read-char/port */
t3=*((C_word*)lf[36]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k1278 in loop in a1263 in chicken.port#make-concatenated-port in k734 in k731 */
static void C_ccall f_1280(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1280,c,av);}
if(C_truep(C_eofp(t1))){
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
/* port.scm:245: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1270(t4,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* a1298 in chicken.port#make-concatenated-port in k734 in k731 */
static void C_ccall f_1299(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1299,c,av);}
t2=C_i_nullp(((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(C_i_not(t2))){
/* port.scm:249: scheme#char-ready? */
t3=*((C_word*)lf[37]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a1318 in chicken.port#make-concatenated-port in k734 in k731 */
static void C_ccall f_1319(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_1319,c,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1325,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li28),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_1325(t5,t1);}

/* loop in a1318 in chicken.port#make-concatenated-port in k734 in k731 */
static void C_fcall f_1325(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1325,2,t0,t1);}
a=C_alloc(5);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
t2=t1;{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_FILE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1335,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* port.scm:255: scheme#peek-char */
t3=*((C_word*)lf[38]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k1333 in loop in a1318 in chicken.port#make-concatenated-port in k734 in k731 */
static void C_ccall f_1335(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1335,c,av);}
if(C_truep(C_eofp(t1))){
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
/* port.scm:258: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1325(t4,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* a1353 in chicken.port#make-concatenated-port in k734 in k731 */
static void C_ccall f_1354(C_word c,C_word *av){
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
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_1354,c,av);}
a=C_alloc(9);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1360,a[2]=((C_word*)t0)[2],a[3]=t7,a[4]=t4,a[5]=t5,a[6]=((C_word)li30),tmp=(C_word)a,a+=7,tmp));
t9=((C_word*)t7)[1];
f_1360(t9,t1,t3,C_fix(0));}

/* loop in a1353 in chicken.port#make-concatenated-port in k734 in k731 */
static void C_fcall f_1360(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,5)))){
C_save_and_reclaim_args((void *)trf_1360,4,t0,t1,t2,t3);}
a=C_alloc(7);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_fixnum_less_or_equal_p(t2,C_fix(0)))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1376,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* port.scm:265: chicken.io#read-string! */
t5=*((C_word*)lf[29]+1);{
C_word av2[6];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=((C_word*)t0)[4];
av2[4]=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
av2[5]=C_fixnum_plus(((C_word*)t0)[5],t3);
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}}}

/* k1374 in loop in a1353 in chicken.port#make-concatenated-port in k734 in k731 */
static void C_ccall f_1376(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1376,c,av);}
if(C_truep(C_fixnum_lessp(t1,((C_word*)t0)[2]))){
t2=C_i_cdr(((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
/* port.scm:268: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_1360(t4,((C_word*)t0)[5],C_fixnum_difference(((C_word*)t0)[2],t1),C_fixnum_plus(((C_word*)t0)[6],t1));}
else{
/* port.scm:268: loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1360(t2,((C_word*)t0)[5],C_fixnum_difference(((C_word*)t0)[2],t1),C_fixnum_plus(((C_word*)t0)[6],t1));}}

/* chicken.port#with-input-from-port in k734 in k731 */
static void C_ccall f_1407(C_word c,C_word *av){
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
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_1407,c,av);}
a=C_alloc(18);
t4=C_i_check_port_2(t2,C_fix(1),C_SCHEME_TRUE,lf[41]);
t5=t2;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1416,a[2]=t8,a[3]=t6,a[4]=((C_word)li33),tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1421,a[2]=t3,a[3]=((C_word)li34),tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1427,a[2]=t6,a[3]=t8,a[4]=((C_word)li35),tmp=(C_word)a,a+=5,tmp);
/* port.scm:275: ##sys#dynamic-wind */
t12=*((C_word*)lf[42]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t12;
av2[1]=t1;
av2[2]=t9;
av2[3]=t10;
av2[4]=t11;
((C_proc)(void*)(*((C_word*)t12+1)))(5,av2);}}

/* a1415 in chicken.port#with-input-from-port in k734 in k731 */
static void C_ccall f_1416(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1416,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[3]+1));
t3=C_mutate((C_word*)lf[3]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a1420 in chicken.port#with-input-from-port in k734 in k731 */
static void C_ccall f_1421(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1421,c,av);}
/* port.scm:276: thunk */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a1426 in chicken.port#with-input-from-port in k734 in k731 */
static void C_ccall f_1427(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1427,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[3]+1));
t3=C_mutate((C_word*)lf[3]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.port#with-output-to-port in k734 in k731 */
static void C_ccall f_1432(C_word c,C_word *av){
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
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_1432,c,av);}
a=C_alloc(18);
t4=C_i_check_port_2(t2,C_fix(2),C_SCHEME_TRUE,lf[44]);
t5=t2;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1441,a[2]=t8,a[3]=t6,a[4]=((C_word)li37),tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1446,a[2]=t3,a[3]=((C_word)li38),tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1452,a[2]=t6,a[3]=t8,a[4]=((C_word)li39),tmp=(C_word)a,a+=5,tmp);
/* port.scm:280: ##sys#dynamic-wind */
t12=*((C_word*)lf[42]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t12;
av2[1]=t1;
av2[2]=t9;
av2[3]=t10;
av2[4]=t11;
((C_proc)(void*)(*((C_word*)t12+1)))(5,av2);}}

/* a1440 in chicken.port#with-output-to-port in k734 in k731 */
static void C_ccall f_1441(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1441,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[45]+1));
t3=C_mutate((C_word*)lf[45]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a1445 in chicken.port#with-output-to-port in k734 in k731 */
static void C_ccall f_1446(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1446,c,av);}
/* port.scm:281: thunk */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a1451 in chicken.port#with-output-to-port in k734 in k731 */
static void C_ccall f_1452(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1452,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[45]+1));
t3=C_mutate((C_word*)lf[45]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.port#with-error-output-to-port in k734 in k731 */
static void C_ccall f_1457(C_word c,C_word *av){
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
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_1457,c,av);}
a=C_alloc(18);
t4=C_i_check_port_2(t2,C_fix(2),C_SCHEME_TRUE,lf[47]);
t5=t2;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1466,a[2]=t8,a[3]=t6,a[4]=((C_word)li41),tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1471,a[2]=t3,a[3]=((C_word)li42),tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1477,a[2]=t6,a[3]=t8,a[4]=((C_word)li43),tmp=(C_word)a,a+=5,tmp);
/* port.scm:285: ##sys#dynamic-wind */
t12=*((C_word*)lf[42]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t12;
av2[1]=t1;
av2[2]=t9;
av2[3]=t10;
av2[4]=t11;
((C_proc)(void*)(*((C_word*)t12+1)))(5,av2);}}

/* a1465 in chicken.port#with-error-output-to-port in k734 in k731 */
static void C_ccall f_1466(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1466,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[48]+1));
t3=C_mutate((C_word*)lf[48]+1 /* (set! ##sys#standard-error ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a1470 in chicken.port#with-error-output-to-port in k734 in k731 */
static void C_ccall f_1471(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1471,c,av);}
/* port.scm:286: thunk */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a1476 in chicken.port#with-error-output-to-port in k734 in k731 */
static void C_ccall f_1477(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1477,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[48]+1));
t3=C_mutate((C_word*)lf[48]+1 /* (set! ##sys#standard-error ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.port#call-with-input-string in k734 in k731 */
static void C_ccall f_1482(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1482,c,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1486,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* port.scm:292: chicken.base#open-input-string */
t5=*((C_word*)lf[50]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k1484 in chicken.port#call-with-input-string in k734 in k731 */
static void C_ccall f_1486(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1486,c,av);}
/* port.scm:293: proc */
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

/* chicken.port#call-with-output-string in k734 in k731 */
static void C_ccall f_1491(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1491,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1495,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* port.scm:297: chicken.base#open-output-string */
t4=*((C_word*)lf[53]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k1493 in chicken.port#call-with-output-string in k734 in k731 */
static void C_ccall f_1495(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1495,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1498,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* port.scm:298: proc */
t3=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k1496 in k1493 in chicken.port#call-with-output-string in k734 in k731 */
static void C_ccall f_1498(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1498,c,av);}
/* port.scm:299: chicken.base#get-output-string */
t2=*((C_word*)lf[52]+1);{
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

/* chicken.port#with-input-from-string in k734 in k731 */
static void C_ccall f_1503(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1503,c,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1507,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* port.scm:303: chicken.base#open-input-string */
t5=*((C_word*)lf[50]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k1505 in chicken.port#with-input-from-string in k734 in k731 */
static void C_ccall f_1507(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_1507,c,av);}
a=C_alloc(18);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1512,a[2]=t5,a[3]=t3,a[4]=((C_word)li47),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1517,a[2]=((C_word*)t0)[2],a[3]=((C_word)li48),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1523,a[2]=t3,a[3]=t5,a[4]=((C_word)li49),tmp=(C_word)a,a+=5,tmp);
/* port.scm:303: ##sys#dynamic-wind */
t9=*((C_word*)lf[42]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=((C_word*)t0)[3];
av2[2]=t6;
av2[3]=t7;
av2[4]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}

/* a1511 in k1505 in chicken.port#with-input-from-string in k734 in k731 */
static void C_ccall f_1512(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1512,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[3]+1));
t3=C_mutate((C_word*)lf[3]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a1516 in k1505 in chicken.port#with-input-from-string in k734 in k731 */
static void C_ccall f_1517(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1517,c,av);}
/* port.scm:304: thunk */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a1522 in k1505 in chicken.port#with-input-from-string in k734 in k731 */
static void C_ccall f_1523(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1523,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[3]+1));
t3=C_mutate((C_word*)lf[3]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.port#with-output-to-string in k734 in k731 */
static void C_ccall f_1528(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1528,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1532,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* port.scm:308: chicken.base#open-output-string */
t4=*((C_word*)lf[53]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k1530 in chicken.port#with-output-to-string in k734 in k731 */
static void C_ccall f_1532(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_1532,c,av);}
a=C_alloc(18);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1537,a[2]=t5,a[3]=t3,a[4]=((C_word)li51),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1542,a[2]=((C_word*)t0)[2],a[3]=((C_word)li52),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1551,a[2]=t3,a[3]=t5,a[4]=((C_word)li53),tmp=(C_word)a,a+=5,tmp);
/* port.scm:308: ##sys#dynamic-wind */
t9=*((C_word*)lf[42]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=((C_word*)t0)[3];
av2[2]=t6;
av2[3]=t7;
av2[4]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}

/* a1536 in k1530 in chicken.port#with-output-to-string in k734 in k731 */
static void C_ccall f_1537(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1537,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[45]+1));
t3=C_mutate((C_word*)lf[45]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a1541 in k1530 in chicken.port#with-output-to-string in k734 in k731 */
static void C_ccall f_1542(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1542,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1546,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* port.scm:309: thunk */
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k1544 in a1541 in k1530 in chicken.port#with-output-to-string in k734 in k731 */
static void C_ccall f_1546(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1546,c,av);}
/* port.scm:310: chicken.base#get-output-string */
t2=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[45]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a1550 in k1530 in chicken.port#with-output-to-string in k734 in k731 */
static void C_ccall f_1551(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1551,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[45]+1));
t3=C_mutate((C_word*)lf[45]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.port#with-error-output-to-string in k734 in k731 */
static void C_ccall f_1556(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1556,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1560,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* port.scm:314: chicken.base#open-output-string */
t4=*((C_word*)lf[53]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k1558 in chicken.port#with-error-output-to-string in k734 in k731 */
static void C_ccall f_1560(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_1560,c,av);}
a=C_alloc(18);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1565,a[2]=t5,a[3]=t3,a[4]=((C_word)li55),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1570,a[2]=((C_word*)t0)[2],a[3]=((C_word)li56),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1579,a[2]=t3,a[3]=t5,a[4]=((C_word)li57),tmp=(C_word)a,a+=5,tmp);
/* port.scm:314: ##sys#dynamic-wind */
t9=*((C_word*)lf[42]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=((C_word*)t0)[3];
av2[2]=t6;
av2[3]=t7;
av2[4]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}

/* a1564 in k1558 in chicken.port#with-error-output-to-string in k734 in k731 */
static void C_ccall f_1565(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1565,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[48]+1));
t3=C_mutate((C_word*)lf[48]+1 /* (set! ##sys#standard-error ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a1569 in k1558 in chicken.port#with-error-output-to-string in k734 in k731 */
static void C_ccall f_1570(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1570,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1574,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* port.scm:315: thunk */
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k1572 in a1569 in k1558 in chicken.port#with-error-output-to-string in k734 in k731 */
static void C_ccall f_1574(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1574,c,av);}
/* port.scm:316: chicken.base#get-output-string */
t2=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[48]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a1578 in k1558 in chicken.port#with-error-output-to-string in k734 in k731 */
static void C_ccall f_1579(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1579,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[48]+1));
t3=C_mutate((C_word*)lf[48]+1 /* (set! ##sys#standard-error ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.port#make-input-port in k734 in k731 */
static void C_ccall f_1584(C_word c,C_word *av){
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
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word *a;
if(c<5) C_bad_min_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(35,c,5)))){
C_save_and_reclaim((void *)f_1584,c,av);}
a=C_alloc(35);
t5=C_rest_nullp(c,5);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_get_rest_arg(c,5,av,5,t0));
t7=C_rest_nullp(c,5);
t8=C_rest_nullp(c,6);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_get_rest_arg(c,6,av,5,t0));
t10=C_rest_nullp(c,6);
t11=C_rest_nullp(c,7);
t12=(C_truep(t11)?C_SCHEME_FALSE:C_get_rest_arg(c,7,av,5,t0));
t13=C_rest_nullp(c,7);
t14=C_rest_nullp(c,8);
t15=(C_truep(t14)?C_SCHEME_FALSE:C_get_rest_arg(c,8,av,5,t0));
t16=C_rest_nullp(c,8);
t17=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1623,a[2]=t6,a[3]=t2,a[4]=((C_word)li59),tmp=(C_word)a,a+=5,tmp);
t18=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1644,a[2]=t6,a[3]=t2,a[4]=((C_word)li60),tmp=(C_word)a,a+=5,tmp);
t19=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1665,a[2]=t4,a[3]=((C_word)li61),tmp=(C_word)a,a+=4,tmp);
t20=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1671,a[2]=t3,a[3]=((C_word)li62),tmp=(C_word)a,a+=4,tmp);
t21=C_a_i_vector(&a,10,t17,t18,C_SCHEME_FALSE,C_SCHEME_FALSE,t19,C_SCHEME_FALSE,t20,t9,t12,t15);
t22=C_a_i_vector1(&a,1,C_SCHEME_FALSE);
t23=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1618,a[2]=t1,a[3]=t22,tmp=(C_word)a,a+=4,tmp);
/* port.scm:354: ##sys#make-port */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[58]+1));
C_word av2[6];
av2[0]=*((C_word*)lf[58]+1);
av2[1]=t23;
av2[2]=C_fix(1);
av2[3]=t21;
av2[4]=lf[59];
av2[5]=lf[60];
tp(6,av2);}}

/* k1616 in chicken.port#make-input-port in k734 in k731 */
static void C_ccall f_1618(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1618,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1621,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* port.scm:355: ##sys#set-port-data! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[57]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[57]+1);
av2[1]=t2;
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k1619 in k1616 in chicken.port#make-input-port in k734 in k731 */
static void C_ccall f_1621(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1621,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a1622 in chicken.port#make-input-port in k734 in k731 */
static void C_ccall f_1623(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1623,c,av);}
t3=C_slot(t2,C_fix(10));
if(C_truep(((C_word*)t0)[2])){
/* port.scm:330: read */
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}
else{
if(C_truep(t3)){
t4=C_i_set_i_slot(t2,C_fix(10),C_SCHEME_FALSE);
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
/* port.scm:334: read */
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}}}

/* a1643 in chicken.port#make-input-port in k734 in k731 */
static void C_ccall f_1644(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1644,c,av);}
a=C_alloc(4);
t3=C_slot(t2,C_fix(10));
if(C_truep(((C_word*)t0)[2])){
/* port.scm:337: peek */
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}
else{
if(C_truep(t3)){
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1660,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* port.scm:340: read */
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)C_fast_retrieve_proc(t5))(2,av2);}}}}

/* k1658 in a1643 in chicken.port#make-input-port in k734 in k731 */
static void C_ccall f_1660(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1660,c,av);}
t2=C_i_setslot(((C_word*)t0)[2],C_fix(10),t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a1664 in chicken.port#make-input-port in k734 in k731 */
static void C_ccall f_1665(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1665,c,av);}
/* port.scm:346: close */
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* a1670 in chicken.port#make-input-port in k734 in k731 */
static void C_ccall f_1671(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1671,c,av);}
/* port.scm:349: ready? */
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* chicken.port#make-output-port in k734 in k731 */
static void C_ccall f_1725(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(32,c,5)))){
C_save_and_reclaim((void *)f_1725,c,av);}
a=C_alloc(32);
t4=C_rest_nullp(c,4);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,4,t0));
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1743,a[2]=t2,a[3]=((C_word)li64),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1753,a[2]=t2,a[3]=((C_word)li65),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1759,a[2]=t3,a[3]=((C_word)li66),tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1765,a[2]=t5,a[3]=((C_word)li67),tmp=(C_word)a,a+=4,tmp);
t10=C_a_i_vector(&a,9,C_SCHEME_FALSE,C_SCHEME_FALSE,t6,t7,t8,t9,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE);
t11=C_a_i_vector1(&a,1,C_SCHEME_FALSE);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1738,a[2]=t1,a[3]=t11,tmp=(C_word)a,a+=4,tmp);
/* port.scm:376: ##sys#make-port */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[58]+1));
C_word av2[6];
av2[0]=*((C_word*)lf[58]+1);
av2[1]=t12;
av2[2]=C_fix(2);
av2[3]=t10;
av2[4]=lf[61];
av2[5]=lf[60];
tp(6,av2);}}

/* k1736 in chicken.port#make-output-port in k734 in k731 */
static void C_ccall f_1738(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1738,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1741,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* port.scm:377: ##sys#set-port-data! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[57]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[57]+1);
av2[1]=t2;
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k1739 in k1736 in chicken.port#make-output-port in k734 in k731 */
static void C_ccall f_1741(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1741,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a1742 in chicken.port#make-output-port in k734 in k731 */
static void C_ccall f_1743(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(2,c,2)))){
C_save_and_reclaim((void *)f_1743,c,av);}
a=C_alloc(2);
t4=C_a_i_string(&a,1,t3);
/* port.scm:365: write */
t5=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=t4;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* a1752 in chicken.port#make-output-port in k734 in k731 */
static void C_ccall f_1753(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1753,c,av);}
/* port.scm:367: write */
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a1758 in chicken.port#make-output-port in k734 in k731 */
static void C_ccall f_1759(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1759,c,av);}
/* port.scm:369: close */
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* a1764 in chicken.port#make-output-port in k734 in k731 */
static void C_ccall f_1765(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1765,c,av);}
if(C_truep(((C_word*)t0)[2])){
/* port.scm:371: flush */
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* chicken.port#make-bidirectional-port in k734 in k731 */
static void C_ccall f_1780(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(55,c,6)))){
C_save_and_reclaim((void *)f_1780,c,av);}
a=C_alloc(55);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1796,a[2]=t2,a[3]=((C_word)li69),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1802,a[2]=t2,a[3]=((C_word)li70),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1808,a[2]=t3,a[3]=((C_word)li71),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1814,a[2]=t3,a[3]=((C_word)li72),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1820,a[2]=t2,a[3]=t3,a[4]=((C_word)li73),tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1845,a[2]=t3,a[3]=((C_word)li74),tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1851,a[2]=t2,a[3]=((C_word)li75),tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1857,a[2]=t2,a[3]=((C_word)li76),tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1863,a[2]=t2,a[3]=((C_word)li77),tmp=(C_word)a,a+=4,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1869,a[2]=t2,a[3]=((C_word)li78),tmp=(C_word)a,a+=4,tmp);
t14=C_a_i_vector(&a,10,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13);
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1787,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* port.scm:404: ##sys#make-port */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[58]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[58]+1);
av2[1]=t15;
av2[2]=C_fix(3);
av2[3]=t14;
av2[4]=lf[68];
av2[5]=lf[69];
tp(6,av2);}}

/* k1785 in chicken.port#make-bidirectional-port in k734 in k731 */
static void C_ccall f_1787(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1787,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1790,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_vector1(&a,1,C_SCHEME_FALSE);
/* port.scm:405: ##sys#set-port-data! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[57]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[57]+1);
av2[1]=t2;
av2[2]=t1;
av2[3]=t3;
tp(4,av2);}}

/* k1788 in k1785 in chicken.port#make-bidirectional-port in k734 in k731 */
static void C_ccall f_1790(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1790,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a1795 in chicken.port#make-bidirectional-port in k734 in k731 */
static void C_ccall f_1796(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1796,c,av);}
/* ##sys#read-char/port */
t3=*((C_word*)lf[36]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* a1801 in chicken.port#make-bidirectional-port in k734 in k731 */
static void C_ccall f_1802(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1802,c,av);}
/* port.scm:385: scheme#peek-char */
t3=*((C_word*)lf[38]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* a1807 in chicken.port#make-bidirectional-port in k734 in k731 */
static void C_ccall f_1808(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1808,c,av);}
/* ##sys#write-char/port */
t4=*((C_word*)lf[63]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* a1813 in chicken.port#make-bidirectional-port in k734 in k731 */
static void C_ccall f_1814(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1814,c,av);}
/* port.scm:389: chicken.io#write-string */
t4=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* a1819 in chicken.port#make-bidirectional-port in k734 in k731 */
static void C_ccall f_1820(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1820,c,av);}
switch(t3){
case C_fix(1):
/* port.scm:392: scheme#close-input-port */
t4=*((C_word*)lf[64]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}
case C_fix(2):
/* port.scm:393: scheme#close-output-port */
t4=*((C_word*)lf[65]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}
default:
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* a1844 in chicken.port#make-bidirectional-port in k734 in k731 */
static void C_ccall f_1845(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1845,c,av);}
/* port.scm:395: chicken.base#flush-output */
t3=*((C_word*)lf[32]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* a1850 in chicken.port#make-bidirectional-port in k734 in k731 */
static void C_ccall f_1851(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1851,c,av);}
/* port.scm:397: scheme#char-ready? */
t3=*((C_word*)lf[37]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* a1856 in chicken.port#make-bidirectional-port in k734 in k731 */
static void C_ccall f_1857(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1857,c,av);}
/* port.scm:399: chicken.io#read-string! */
t6=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
av2[4]=((C_word*)t0)[2];
av2[5]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(6,av2);}}

/* a1862 in chicken.port#make-bidirectional-port in k734 in k731 */
static void C_ccall f_1863(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1863,c,av);}
/* port.scm:401: chicken.io#read-line */
t4=*((C_word*)lf[66]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* a1868 in chicken.port#make-bidirectional-port in k734 in k731 */
static void C_ccall f_1869(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1869,c,av);}
/* port.scm:403: chicken.io#read-buffered */
t2=*((C_word*)lf[67]+1);{
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

/* chicken.port#posix-error in k734 in k731 */
static void C_fcall f_1885(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_1885,5,t1,t2,t3,t4,t5);}
a=C_alloc(7);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1889,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t5,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* port.scm:413: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[75]+1));
C_word av2[2];
av2[0]=*((C_word*)lf[75]+1);
av2[1]=t6;
tp(2,av2);}}

/* k1887 in chicken.port#posix-error in k734 in k731 */
static void C_ccall f_1889(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_1889,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1896,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1900,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t1);
/* port.scm:410: ##sys#peek-c-string */
t6=*((C_word*)lf[74]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=stub515(t4,t5);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k1894 in k1887 in chicken.port#posix-error in k734 in k731 */
static void C_ccall f_1896(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_1896,c,av);}{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[71]+1);
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
av2[5]=t1;
av2[6]=((C_word*)t0)[5];
C_apply(7,av2);}}

/* k1898 in k1887 in chicken.port#posix-error in k734 in k731 */
static void C_ccall f_1900(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1900,c,av);}
/* port.scm:414: string-append */
t2=*((C_word*)lf[72]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[73];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* chicken.port#terminal-port? in k734 in k731 */
static void C_ccall f_1902(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1902,c,av);}
a=C_alloc(4);
t3=C_i_check_port_2(t2,C_fix(0),C_SCHEME_TRUE,lf[77]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1908,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* port.scm:419: ##sys#peek-unsigned-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[78]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[78]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=C_fix(0);
tp(4,av2);}}

/* k1906 in chicken.port#terminal-port? in k734 in k731 */
static void C_ccall f_1908(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1908,c,av);}
t2=C_eqp(C_fix(0),t1);
t3=C_i_not(t2);
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=(C_truep(t3)?C_tty_portp(((C_word*)t0)[3]):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.port#check-terminal! in k734 in k731 */
static void C_fcall f_1920(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_1920,3,t1,t2,t3);}
t4=C_i_check_port_2(t3,C_fix(0),C_SCHEME_TRUE,t2);
t5=C_slot(t3,C_fix(7));
t6=C_eqp(lf[15],t5);
t7=(C_truep(t6)?C_tty_portp(t3):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=C_SCHEME_UNDEFINED;
t9=t1;{
C_word av2[2];
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
/* port.scm:426: ##sys#error */
t8=*((C_word*)lf[9]+1);{
C_word av2[5];
av2[0]=t8;
av2[1]=t1;
av2[2]=t2;
av2[3]=lf[80];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}}

/* chicken.port#terminal-name in k734 in k731 */
static void C_ccall f_1951(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1951,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1955,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* port.scm:431: check-terminal! */
f_1920(t3,lf[83],t2);}

/* k1953 in chicken.port#terminal-name in k734 in k731 */
static void C_ccall f_1955(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_1955,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1958,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_port_fileno(((C_word*)t0)[3]);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t3);
/* port.scm:429: ##sys#peek-c-string */
t6=*((C_word*)lf[74]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t2;
av2[2]=stub537(t4,t5);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k1956 in k1953 in chicken.port#terminal-name in k734 in k731 */
static void C_ccall f_1958(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_1958,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* port.scm:433: posix-error */
f_1885(((C_word*)t0)[2],lf[82],lf[83],lf[84],C_a_i_list(&a,1,((C_word*)t0)[3]));}}

/* chicken.port#terminal-size in k734 in k731 */
static void C_ccall f_1981(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1981,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1985,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* port.scm:441: check-terminal! */
f_1920(t3,lf[86],t2);}

/* k1983 in chicken.port#terminal-size in k734 in k731 */
static void C_ccall f_1985(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,5)))){
C_save_and_reclaim((void *)f_1985,c,av);}
a=C_alloc(13);
t2=C_a_i_bytevector(&a,1,C_fix(1));
t3=C_a_i_bytevector(&a,1,C_fix(1));
t4=C_port_fileno(((C_word*)t0)[2]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2006,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* port.scm:445: ##sys#make-locative */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[88]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[88]+1);
av2[1]=t5;
av2[2]=t2;
av2[3]=C_fix(0);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[89];
tp(6,av2);}}

/* k2004 in k1983 in chicken.port#terminal-size in k734 in k731 */
static void C_ccall f_2006(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_2006,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2010,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* port.scm:446: ##sys#make-locative */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[88]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[88]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(0);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[89];
tp(6,av2);}}

/* k2008 in k2004 in k1983 in chicken.port#terminal-size in k734 in k731 */
static void C_ccall f_2010(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_2010,c,av);}
a=C_alloc(3);
t2=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t3=C_i_foreign_pointer_argumentp(((C_word*)t0)[3]);
t4=C_i_foreign_pointer_argumentp(t1);
t5=C_eqp(C_fix(0),stub551(C_SCHEME_UNDEFINED,t2,t3,t4));
if(C_truep(t5)){
/* port.scm:447: scheme#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[5])));
av2[3]=C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[6])));
C_values(4,av2);}}
else{
/* port.scm:448: posix-error */
f_1885(((C_word*)t0)[4],lf[82],lf[86],lf[87],C_a_i_list(&a,1,((C_word*)t0)[7]));}}

/* k731 */
static void C_ccall f_733(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_733,c,av);}
a=C_alloc(19);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_736,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t4;
C_library_toplevel(2,av2);}}

/* k734 in k731 */
static void C_ccall f_736(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(80,c,6)))){
C_save_and_reclaim((void *)f_736,c,av);}
a=C_alloc(80);
t2=C_mutate((C_word*)lf[2]+1 /* (set! chicken.port#port-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_738,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[6]+1 /* (set! chicken.port#set-port-name! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_756,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[8]+1 /* (set! chicken.port#port-position ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_768,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[12]+1 /* (set! chicken.port#set-buffering-mode! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_800,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[21]+1 /* (set! chicken.port#port-for-each ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_876,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[22]+1 /* (set! chicken.port#port-map ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_900,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[24]+1 /* (set! chicken.port#port-fold ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_932,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t9=*((C_word*)lf[25]+1);
t10=*((C_word*)lf[26]+1);
t11=C_mutate((C_word*)lf[27]+1 /* (set! chicken.port#copy-port ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1097,a[2]=t9,a[3]=t10,a[4]=((C_word)li18),tmp=(C_word)a,a+=5,tmp));
t12=C_mutate((C_word*)lf[31]+1 /* (set! chicken.port#make-broadcast-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1186,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[35]+1 /* (set! chicken.port#make-concatenated-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1255,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[40]+1 /* (set! chicken.port#with-input-from-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1407,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[43]+1 /* (set! chicken.port#with-output-to-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1432,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[46]+1 /* (set! chicken.port#with-error-output-to-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1457,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[49]+1 /* (set! chicken.port#call-with-input-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1482,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[51]+1 /* (set! chicken.port#call-with-output-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1491,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[54]+1 /* (set! chicken.port#with-input-from-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1503,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[55]+1 /* (set! chicken.port#with-output-to-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1528,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[56]+1 /* (set! chicken.port#with-error-output-to-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1556,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[39]+1 /* (set! chicken.port#make-input-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1584,a[2]=((C_word)li63),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate((C_word*)lf[33]+1 /* (set! chicken.port#make-output-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1725,a[2]=((C_word)li68),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate((C_word*)lf[62]+1 /* (set! chicken.port#make-bidirectional-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1780,a[2]=((C_word)li79),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate(&lf[70] /* (set! chicken.port#posix-error ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1885,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp));
t26=C_mutate((C_word*)lf[76]+1 /* (set! chicken.port#terminal-port? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1902,a[2]=((C_word)li81),tmp=(C_word)a,a+=3,tmp));
t27=C_mutate(&lf[79] /* (set! chicken.port#check-terminal! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1920,a[2]=((C_word)li82),tmp=(C_word)a,a+=3,tmp));
t28=C_mutate((C_word*)lf[81]+1 /* (set! chicken.port#terminal-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1951,a[2]=((C_word)li83),tmp=(C_word)a,a+=3,tmp));
t29=C_mutate((C_word*)lf[85]+1 /* (set! chicken.port#terminal-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1981,a[2]=((C_word)li84),tmp=(C_word)a,a+=3,tmp));
t30=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t30;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t30+1)))(2,av2);}}

/* chicken.port#port-name in k734 in k731 */
static void C_ccall f_738(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_738,c,av);}
a=C_alloc(4);
if(C_truep(C_rest_nullp(c,2))){
t2=*((C_word*)lf[3]+1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f2125,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* port.scm:120: ##sys#check-port */
t4=*((C_word*)lf[4]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=*((C_word*)lf[3]+1);
av2[3]=lf[5];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t2=C_get_rest_arg(c,2,av,2,t0);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_745,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* port.scm:120: ##sys#check-port */
t4=*((C_word*)lf[4]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[5];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k743 in chicken.port#port-name in k734 in k731 */
static void C_ccall f_745(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_745,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_slot(((C_word*)t0)[3],C_fix(3));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.port#set-port-name! in k734 in k731 */
static void C_ccall f_756(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_756,c,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_760,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* port.scm:124: ##sys#check-port */
t5=*((C_word*)lf[4]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[7];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k758 in chicken.port#set-port-name! in k734 in k731 */
static void C_ccall f_760(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_760,c,av);}
t2=C_i_check_string_2(((C_word*)t0)[2],lf[7]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_setslot(((C_word*)t0)[4],C_fix(3),((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.port#port-position in k734 in k731 */
static void C_ccall f_768(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_768,c,av);}
a=C_alloc(4);
t2=C_rest_nullp(c,2);
t3=(C_truep(t2)?*((C_word*)lf[3]+1):C_get_rest_arg(c,2,av,2,t0));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_775,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* port.scm:129: ##sys#check-port */
t5=*((C_word*)lf[4]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=lf[10];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k773 in chicken.port#port-position in k734 in k731 */
static void C_ccall f_775(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_775,c,av);}
if(C_truep(C_input_portp(((C_word*)t0)[2]))){
/* port.scm:131: ##sys#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=C_slot(((C_word*)t0)[2],C_fix(4));
av2[3]=C_slot(((C_word*)t0)[2],C_fix(5));
C_values(4,av2);}}
else{
/* port.scm:132: ##sys#error */
t2=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[10];
av2[3]=lf[11];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* chicken.port#set-buffering-mode! in k734 in k731 */
static void C_ccall f_800(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +6,c,3)))){
C_save_and_reclaim((void*)f_800,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+6);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_804,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* port.scm:135: ##sys#check-port */
t6=*((C_word*)lf[4]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
av2[3]=lf[13];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k802 in chicken.port#set-buffering-mode! in k734 in k731 */
static void C_ccall f_804(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_804,c,av);}
a=C_alloc(5);
t2=C_i_pairp(((C_word*)t0)[2]);
t3=(C_truep(t2)?C_u_i_car(((C_word*)t0)[2]):C_fix((C_word)BUFSIZ));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_810,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=C_eqp(((C_word*)t0)[5],lf[17]);
if(C_truep(t5)){
t6=t4;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_fix((C_word)_IOFBF);
f_810(2,av2);}}
else{
t6=C_eqp(((C_word*)t0)[5],lf[18]);
if(C_truep(t6)){
t7=C_fix((C_word)_IOLBF);
t8=t4;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
f_810(2,av2);}}
else{
t7=C_eqp(((C_word*)t0)[5],lf[19]);
if(C_truep(t7)){
t8=t4;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_fix((C_word)_IONBF);
f_810(2,av2);}}
else{
/* port.scm:141: ##sys#error */
t8=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t8;
av2[1]=t4;
av2[2]=lf[13];
av2[3]=lf[20];
av2[4]=((C_word*)t0)[5];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t8+1)))(6,av2);}}}}}

/* k808 in k802 in chicken.port#set-buffering-mode! in k734 in k731 */
static void C_ccall f_810(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_810,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_813,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* port.scm:142: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[16]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[13];
tp(4,av2);}}

/* k811 in k808 in k802 in chicken.port#set-buffering-mode! in k734 in k731 */
static void C_ccall f_813(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_813,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_819,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_slot(((C_word*)t0)[3],C_fix(7));
t4=C_eqp(lf[15],t3);
if(C_truep(t4)){
t5=C_i_foreign_fixnum_argumentp(((C_word*)t0)[4]);
t6=C_i_foreign_fixnum_argumentp(((C_word*)t0)[5]);
t7=t2;
f_819(t7,C_fixnum_lessp(stub144(C_SCHEME_UNDEFINED,((C_word*)t0)[3],t5,t6),C_fix(0)));}
else{
t5=t2;
f_819(t5,C_fixnum_lessp(C_fix(-1),C_fix(0)));}}

/* k817 in k811 in k808 in k802 in chicken.port#set-buffering-mode! in k734 in k731 */
static void C_fcall f_819(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,6)))){
C_save_and_reclaim_args((void *)trf_819,2,t0,t1);}
if(C_truep(t1)){
/* port.scm:149: ##sys#error */
t2=*((C_word*)lf[9]+1);{
C_word av2[7];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[13];
av2[3]=lf[14];
av2[4]=((C_word*)t0)[3];
av2[5]=((C_word*)t0)[4];
av2[6]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* chicken.port#port-for-each in k734 in k731 */
static void C_ccall f_876(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_876,c,av);}
a=C_alloc(8);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_882,a[2]=t5,a[3]=t2,a[4]=t3,a[5]=((C_word)li4),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_882(t7,t1);}

/* loop in chicken.port#port-for-each in k734 in k731 */
static void C_fcall f_882(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_882,2,t0,t1);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_886,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* port.scm:155: thunk */
t3=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k884 in loop in chicken.port#port-for-each in k734 in k731 */
static void C_ccall f_886(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_886,c,av);}
a=C_alloc(4);
if(C_truep(C_eofp(t1))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_895,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* port.scm:157: fn */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}}

/* k893 in k884 in loop in chicken.port#port-for-each in k734 in k731 */
static void C_ccall f_895(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_895,c,av);}
/* port.scm:158: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_882(t2,((C_word*)t0)[3]);}

/* chicken.port#port-map in k734 in k731 */
static void C_ccall f_900(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_900,c,av);}
a=C_alloc(8);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_906,a[2]=t5,a[3]=t2,a[4]=t3,a[5]=((C_word)li6),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_906(t7,t1,C_SCHEME_END_OF_LIST);}

/* loop in chicken.port#port-map in k734 in k731 */
static void C_fcall f_906(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_906,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_910,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* port.scm:163: thunk */
t4=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k908 in loop in chicken.port#port-map in k734 in k731 */
static void C_ccall f_910(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_910,c,av);}
a=C_alloc(5);
if(C_truep(C_eofp(t1))){
/* port.scm:165: ##sys#fast-reverse */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[23]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[23]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_930,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* port.scm:166: fn */
t3=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}}

/* k928 in k908 in loop in chicken.port#port-map in k734 in k731 */
static void C_ccall f_930(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_930,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* port.scm:166: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_906(t3,((C_word*)t0)[4],t2);}

/* chicken.port#port-fold in k734 in k731 */
static void C_ccall f_932(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_932,c,av);}
a=C_alloc(8);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_938,a[2]=t6,a[3]=t2,a[4]=t4,a[5]=((C_word)li8),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_938(t8,t1,t3);}

/* loop in chicken.port#port-fold in k734 in k731 */
static void C_fcall f_938(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_938,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_942,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* port.scm:170: thunk */
t4=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k940 in loop in chicken.port#port-fold in k734 in k731 */
static void C_ccall f_942(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_942,c,av);}
a=C_alloc(4);
if(C_truep(C_eofp(t1))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_955,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* port.scm:173: fn */
t3=((C_word*)t0)[5];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}}

/* k953 in k940 in loop in chicken.port#port-fold in k734 in k731 */
static void C_ccall f_955(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_955,c,av);}
/* port.scm:173: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_938(t2,((C_word*)t0)[3],t1);}

/* k960 in chicken.port#copy-port in k734 in k731 */
static void C_ccall f_962(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_962,c,av);}
a=C_alloc(9);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_967,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word)li13),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_967(t5,((C_word*)t0)[4]);}

/* loop in k960 in chicken.port#copy-port in k734 in k731 */
static void C_fcall f_967(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_967,2,t0,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_971,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* port.scm:183: chicken.io#read-string! */
t3=*((C_word*)lf[29]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t2;
av2[2]=C_fix(1024);
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k969 in loop in k960 in chicken.port#copy-port in k734 in k731 */
static void C_ccall f_971(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_971,c,av);}
a=C_alloc(4);
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_980,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* port.scm:185: writer */
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
av2[3]=t1;
((C_proc)C_fast_retrieve_proc(t4))(4,av2);}}}

/* k978 in k969 in loop in k960 in chicken.port#copy-port in k734 in k731 */
static void C_ccall f_980(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_980,c,av);}
/* port.scm:186: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_967(t2,((C_word*)t0)[3]);}

/* doloop191 */
static void C_fcall f_992(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_992,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1002,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_subbyte(((C_word*)t0)[4],t2);
/* port.scm:190: writer */
t5=((C_word*)t0)[5];{
C_word av2[4];
av2[0]=t5;
av2[1]=t3;
av2[2]=C_make_character(C_unfix(t4));
av2[3]=((C_word*)t0)[6];
((C_proc)C_fast_retrieve_proc(t5))(4,av2);}}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_port_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("port"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_port_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(546))){
C_save(t1);
C_rereclaim2(546*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,90);
lf[0]=C_h_intern(&lf[0],4, C_text("port"));
lf[1]=C_h_intern(&lf[1],13, C_text("chicken.port#"));
lf[2]=C_h_intern(&lf[2],22, C_text("chicken.port#port-name"));
lf[3]=C_h_intern(&lf[3],20, C_text("##sys#standard-input"));
lf[4]=C_h_intern(&lf[4],16, C_text("##sys#check-port"));
lf[5]=C_h_intern(&lf[5],9, C_text("port-name"));
lf[6]=C_h_intern(&lf[6],27, C_text("chicken.port#set-port-name!"));
lf[7]=C_h_intern(&lf[7],14, C_text("set-port-name!"));
lf[8]=C_h_intern(&lf[8],26, C_text("chicken.port#port-position"));
lf[9]=C_h_intern(&lf[9],11, C_text("##sys#error"));
lf[10]=C_h_intern(&lf[10],13, C_text("port-position"));
lf[11]=C_decode_literal(C_heaptop,C_text("\376B\000\000\037cannot compute position of port"));
lf[12]=C_h_intern(&lf[12],32, C_text("chicken.port#set-buffering-mode!"));
lf[13]=C_h_intern(&lf[13],19, C_text("set-buffering-mode!"));
lf[14]=C_decode_literal(C_heaptop,C_text("\376B\000\000\031cannot set buffering mode"));
lf[15]=C_h_intern(&lf[15],6, C_text("stream"));
lf[16]=C_h_intern(&lf[16],18, C_text("##sys#check-fixnum"));
lf[17]=C_h_intern_kw(&lf[17],4, C_text("full"));
lf[18]=C_h_intern_kw(&lf[18],4, C_text("line"));
lf[19]=C_h_intern_kw(&lf[19],4, C_text("none"));
lf[20]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026invalid buffering-mode"));
lf[21]=C_h_intern(&lf[21],26, C_text("chicken.port#port-for-each"));
lf[22]=C_h_intern(&lf[22],21, C_text("chicken.port#port-map"));
lf[23]=C_h_intern(&lf[23],18, C_text("##sys#fast-reverse"));
lf[24]=C_h_intern(&lf[24],22, C_text("chicken.port#port-fold"));
lf[25]=C_h_intern(&lf[25],16, C_text("scheme#read-char"));
lf[26]=C_h_intern(&lf[26],17, C_text("scheme#write-char"));
lf[27]=C_h_intern(&lf[27],22, C_text("chicken.port#copy-port"));
lf[28]=C_h_intern(&lf[28],23, C_text("chicken.io#write-string"));
lf[29]=C_h_intern(&lf[29],23, C_text("chicken.io#read-string!"));
lf[30]=C_h_intern(&lf[30],17, C_text("##sys#make-string"));
lf[31]=C_h_intern(&lf[31],32, C_text("chicken.port#make-broadcast-port"));
lf[32]=C_h_intern(&lf[32],25, C_text("chicken.base#flush-output"));
lf[33]=C_h_intern(&lf[33],29, C_text("chicken.port#make-output-port"));
lf[34]=C_h_intern(&lf[34],17, C_text("chicken.base#void"));
lf[35]=C_h_intern(&lf[35],35, C_text("chicken.port#make-concatenated-port"));
lf[36]=C_h_intern(&lf[36],20, C_text("##sys#read-char/port"));
lf[37]=C_h_intern(&lf[37],18, C_text("scheme#char-ready\077"));
lf[38]=C_h_intern(&lf[38],16, C_text("scheme#peek-char"));
lf[39]=C_h_intern(&lf[39],28, C_text("chicken.port#make-input-port"));
lf[40]=C_h_intern(&lf[40],33, C_text("chicken.port#with-input-from-port"));
lf[41]=C_h_intern(&lf[41],20, C_text("with-input-from-port"));
lf[42]=C_h_intern(&lf[42],18, C_text("##sys#dynamic-wind"));
lf[43]=C_h_intern(&lf[43],32, C_text("chicken.port#with-output-to-port"));
lf[44]=C_h_intern(&lf[44],19, C_text("with-output-to-port"));
lf[45]=C_h_intern(&lf[45],21, C_text("##sys#standard-output"));
lf[46]=C_h_intern(&lf[46],38, C_text("chicken.port#with-error-output-to-port"));
lf[47]=C_h_intern(&lf[47],25, C_text("with-error-output-to-port"));
lf[48]=C_h_intern(&lf[48],20, C_text("##sys#standard-error"));
lf[49]=C_h_intern(&lf[49],35, C_text("chicken.port#call-with-input-string"));
lf[50]=C_h_intern(&lf[50],30, C_text("chicken.base#open-input-string"));
lf[51]=C_h_intern(&lf[51],36, C_text("chicken.port#call-with-output-string"));
lf[52]=C_h_intern(&lf[52],30, C_text("chicken.base#get-output-string"));
lf[53]=C_h_intern(&lf[53],31, C_text("chicken.base#open-output-string"));
lf[54]=C_h_intern(&lf[54],35, C_text("chicken.port#with-input-from-string"));
lf[55]=C_h_intern(&lf[55],34, C_text("chicken.port#with-output-to-string"));
lf[56]=C_h_intern(&lf[56],40, C_text("chicken.port#with-error-output-to-string"));
lf[57]=C_h_intern(&lf[57],20, C_text("##sys#set-port-data!"));
lf[58]=C_h_intern(&lf[58],15, C_text("##sys#make-port"));
lf[59]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010(custom)"));
lf[60]=C_h_intern(&lf[60],6, C_text("custom"));
lf[61]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010(custom)"));
lf[62]=C_h_intern(&lf[62],36, C_text("chicken.port#make-bidirectional-port"));
lf[63]=C_h_intern(&lf[63],21, C_text("##sys#write-char/port"));
lf[64]=C_h_intern(&lf[64],23, C_text("scheme#close-input-port"));
lf[65]=C_h_intern(&lf[65],24, C_text("scheme#close-output-port"));
lf[66]=C_h_intern(&lf[66],20, C_text("chicken.io#read-line"));
lf[67]=C_h_intern(&lf[67],24, C_text("chicken.io#read-buffered"));
lf[68]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017(bidirectional)"));
lf[69]=C_h_intern(&lf[69],13, C_text("bidirectional"));
lf[71]=C_h_intern(&lf[71],17, C_text("##sys#signal-hook"));
lf[72]=C_h_intern(&lf[72],20, C_text("scheme#string-append"));
lf[73]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003 - "));
lf[74]=C_h_intern(&lf[74],19, C_text("##sys#peek-c-string"));
lf[75]=C_h_intern(&lf[75],18, C_text("##sys#update-errno"));
lf[76]=C_h_intern(&lf[76],27, C_text("chicken.port#terminal-port\077"));
lf[77]=C_h_intern(&lf[77],14, C_text("terminal-port\077"));
lf[78]=C_h_intern(&lf[78],27, C_text("##sys#peek-unsigned-integer"));
lf[80]=C_decode_literal(C_heaptop,C_text("\376B\000\000#port is not connected to a terminal"));
lf[81]=C_h_intern(&lf[81],26, C_text("chicken.port#terminal-name"));
lf[82]=C_h_intern_kw(&lf[82],5, C_text("error"));
lf[83]=C_h_intern(&lf[83],13, C_text("terminal-name"));
lf[84]=C_decode_literal(C_heaptop,C_text("\376B\000\000\036cannot determine terminal name"));
lf[85]=C_h_intern(&lf[85],26, C_text("chicken.port#terminal-size"));
lf[86]=C_h_intern(&lf[86],13, C_text("terminal-size"));
lf[87]=C_decode_literal(C_heaptop,C_text("\376B\000\000\036cannot determine terminal size"));
lf[88]=C_h_intern(&lf[88],19, C_text("##sys#make-locative"));
lf[89]=C_h_intern(&lf[89],8, C_text("location"));
C_register_lf2(lf,90,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_733,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[142] = {
{C_text("f2125:port_2escm"),(void*)f2125},
{C_text("f_1002:port_2escm"),(void*)f_1002},
{C_text("f_1025:port_2escm"),(void*)f_1025},
{C_text("f_1029:port_2escm"),(void*)f_1029},
{C_text("f_1038:port_2escm"),(void*)f_1038},
{C_text("f_1047:port_2escm"),(void*)f_1047},
{C_text("f_1052:port_2escm"),(void*)f_1052},
{C_text("f_1056:port_2escm"),(void*)f_1056},
{C_text("f_1059:port_2escm"),(void*)f_1059},
{C_text("f_1094:port_2escm"),(void*)f_1094},
{C_text("f_1097:port_2escm"),(void*)f_1097},
{C_text("f_1127:port_2escm"),(void*)f_1127},
{C_text("f_1132:port_2escm"),(void*)f_1132},
{C_text("f_1150:port_2escm"),(void*)f_1150},
{C_text("f_1156:port_2escm"),(void*)f_1156},
{C_text("f_1186:port_2escm"),(void*)f_1186},
{C_text("f_1192:port_2escm"),(void*)f_1192},
{C_text("f_1194:port_2escm"),(void*)f_1194},
{C_text("f_1203:port_2escm"),(void*)f_1203},
{C_text("f_1213:port_2escm"),(void*)f_1213},
{C_text("f_1226:port_2escm"),(void*)f_1226},
{C_text("f_1232:port_2escm"),(void*)f_1232},
{C_text("f_1242:port_2escm"),(void*)f_1242},
{C_text("f_1255:port_2escm"),(void*)f_1255},
{C_text("f_1264:port_2escm"),(void*)f_1264},
{C_text("f_1270:port_2escm"),(void*)f_1270},
{C_text("f_1280:port_2escm"),(void*)f_1280},
{C_text("f_1299:port_2escm"),(void*)f_1299},
{C_text("f_1319:port_2escm"),(void*)f_1319},
{C_text("f_1325:port_2escm"),(void*)f_1325},
{C_text("f_1335:port_2escm"),(void*)f_1335},
{C_text("f_1354:port_2escm"),(void*)f_1354},
{C_text("f_1360:port_2escm"),(void*)f_1360},
{C_text("f_1376:port_2escm"),(void*)f_1376},
{C_text("f_1407:port_2escm"),(void*)f_1407},
{C_text("f_1416:port_2escm"),(void*)f_1416},
{C_text("f_1421:port_2escm"),(void*)f_1421},
{C_text("f_1427:port_2escm"),(void*)f_1427},
{C_text("f_1432:port_2escm"),(void*)f_1432},
{C_text("f_1441:port_2escm"),(void*)f_1441},
{C_text("f_1446:port_2escm"),(void*)f_1446},
{C_text("f_1452:port_2escm"),(void*)f_1452},
{C_text("f_1457:port_2escm"),(void*)f_1457},
{C_text("f_1466:port_2escm"),(void*)f_1466},
{C_text("f_1471:port_2escm"),(void*)f_1471},
{C_text("f_1477:port_2escm"),(void*)f_1477},
{C_text("f_1482:port_2escm"),(void*)f_1482},
{C_text("f_1486:port_2escm"),(void*)f_1486},
{C_text("f_1491:port_2escm"),(void*)f_1491},
{C_text("f_1495:port_2escm"),(void*)f_1495},
{C_text("f_1498:port_2escm"),(void*)f_1498},
{C_text("f_1503:port_2escm"),(void*)f_1503},
{C_text("f_1507:port_2escm"),(void*)f_1507},
{C_text("f_1512:port_2escm"),(void*)f_1512},
{C_text("f_1517:port_2escm"),(void*)f_1517},
{C_text("f_1523:port_2escm"),(void*)f_1523},
{C_text("f_1528:port_2escm"),(void*)f_1528},
{C_text("f_1532:port_2escm"),(void*)f_1532},
{C_text("f_1537:port_2escm"),(void*)f_1537},
{C_text("f_1542:port_2escm"),(void*)f_1542},
{C_text("f_1546:port_2escm"),(void*)f_1546},
{C_text("f_1551:port_2escm"),(void*)f_1551},
{C_text("f_1556:port_2escm"),(void*)f_1556},
{C_text("f_1560:port_2escm"),(void*)f_1560},
{C_text("f_1565:port_2escm"),(void*)f_1565},
{C_text("f_1570:port_2escm"),(void*)f_1570},
{C_text("f_1574:port_2escm"),(void*)f_1574},
{C_text("f_1579:port_2escm"),(void*)f_1579},
{C_text("f_1584:port_2escm"),(void*)f_1584},
{C_text("f_1618:port_2escm"),(void*)f_1618},
{C_text("f_1621:port_2escm"),(void*)f_1621},
{C_text("f_1623:port_2escm"),(void*)f_1623},
{C_text("f_1644:port_2escm"),(void*)f_1644},
{C_text("f_1660:port_2escm"),(void*)f_1660},
{C_text("f_1665:port_2escm"),(void*)f_1665},
{C_text("f_1671:port_2escm"),(void*)f_1671},
{C_text("f_1725:port_2escm"),(void*)f_1725},
{C_text("f_1738:port_2escm"),(void*)f_1738},
{C_text("f_1741:port_2escm"),(void*)f_1741},
{C_text("f_1743:port_2escm"),(void*)f_1743},
{C_text("f_1753:port_2escm"),(void*)f_1753},
{C_text("f_1759:port_2escm"),(void*)f_1759},
{C_text("f_1765:port_2escm"),(void*)f_1765},
{C_text("f_1780:port_2escm"),(void*)f_1780},
{C_text("f_1787:port_2escm"),(void*)f_1787},
{C_text("f_1790:port_2escm"),(void*)f_1790},
{C_text("f_1796:port_2escm"),(void*)f_1796},
{C_text("f_1802:port_2escm"),(void*)f_1802},
{C_text("f_1808:port_2escm"),(void*)f_1808},
{C_text("f_1814:port_2escm"),(void*)f_1814},
{C_text("f_1820:port_2escm"),(void*)f_1820},
{C_text("f_1845:port_2escm"),(void*)f_1845},
{C_text("f_1851:port_2escm"),(void*)f_1851},
{C_text("f_1857:port_2escm"),(void*)f_1857},
{C_text("f_1863:port_2escm"),(void*)f_1863},
{C_text("f_1869:port_2escm"),(void*)f_1869},
{C_text("f_1885:port_2escm"),(void*)f_1885},
{C_text("f_1889:port_2escm"),(void*)f_1889},
{C_text("f_1896:port_2escm"),(void*)f_1896},
{C_text("f_1900:port_2escm"),(void*)f_1900},
{C_text("f_1902:port_2escm"),(void*)f_1902},
{C_text("f_1908:port_2escm"),(void*)f_1908},
{C_text("f_1920:port_2escm"),(void*)f_1920},
{C_text("f_1951:port_2escm"),(void*)f_1951},
{C_text("f_1955:port_2escm"),(void*)f_1955},
{C_text("f_1958:port_2escm"),(void*)f_1958},
{C_text("f_1981:port_2escm"),(void*)f_1981},
{C_text("f_1985:port_2escm"),(void*)f_1985},
{C_text("f_2006:port_2escm"),(void*)f_2006},
{C_text("f_2010:port_2escm"),(void*)f_2010},
{C_text("f_733:port_2escm"),(void*)f_733},
{C_text("f_736:port_2escm"),(void*)f_736},
{C_text("f_738:port_2escm"),(void*)f_738},
{C_text("f_745:port_2escm"),(void*)f_745},
{C_text("f_756:port_2escm"),(void*)f_756},
{C_text("f_760:port_2escm"),(void*)f_760},
{C_text("f_768:port_2escm"),(void*)f_768},
{C_text("f_775:port_2escm"),(void*)f_775},
{C_text("f_800:port_2escm"),(void*)f_800},
{C_text("f_804:port_2escm"),(void*)f_804},
{C_text("f_810:port_2escm"),(void*)f_810},
{C_text("f_813:port_2escm"),(void*)f_813},
{C_text("f_819:port_2escm"),(void*)f_819},
{C_text("f_876:port_2escm"),(void*)f_876},
{C_text("f_882:port_2escm"),(void*)f_882},
{C_text("f_886:port_2escm"),(void*)f_886},
{C_text("f_895:port_2escm"),(void*)f_895},
{C_text("f_900:port_2escm"),(void*)f_900},
{C_text("f_906:port_2escm"),(void*)f_906},
{C_text("f_910:port_2escm"),(void*)f_910},
{C_text("f_930:port_2escm"),(void*)f_930},
{C_text("f_932:port_2escm"),(void*)f_932},
{C_text("f_938:port_2escm"),(void*)f_938},
{C_text("f_942:port_2escm"),(void*)f_942},
{C_text("f_955:port_2escm"),(void*)f_955},
{C_text("f_962:port_2escm"),(void*)f_962},
{C_text("f_967:port_2escm"),(void*)f_967},
{C_text("f_971:port_2escm"),(void*)f_971},
{C_text("f_980:port_2escm"),(void*)f_980},
{C_text("f_992:port_2escm"),(void*)f_992},
{C_text("toplevel:port_2escm"),(void*)C_port_toplevel},
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
o|hiding unexported module binding: chicken.port#d 
o|hiding unexported module binding: chicken.port#define-alias 
o|hiding unexported module binding: chicken.port#posix-error 
o|hiding unexported module binding: chicken.port#check-terminal! 
S|applied compiler syntax:
S|  scheme#for-each		2
o|eliminated procedure checks: 32 
o|specializations:
o|  2 (##sys#check-open-port * *)
o|  2 (##sys#check-output-port * * *)
o|  1 (##sys#check-input-port * * *)
o|  2 (##sys#check-list (or pair list) *)
o|  2 (scheme#make-string fixnum)
o|  5 (scheme#eqv? * (or eof null fixnum char boolean symbol keyword))
o|  1 (scheme#car pair)
(o e)|safe calls: 161 
(o e)|assignments to immediate values: 1 
o|safe globals: (chicken.port#terminal-size chicken.port#terminal-name chicken.port#check-terminal! chicken.port#terminal-port? chicken.port#posix-error chicken.port#make-bidirectional-port chicken.port#make-output-port chicken.port#make-input-port chicken.port#with-error-output-to-string chicken.port#with-output-to-string chicken.port#with-input-from-string chicken.port#call-with-output-string chicken.port#call-with-input-string chicken.port#with-error-output-to-port chicken.port#with-output-to-port chicken.port#with-input-from-port chicken.port#make-concatenated-port chicken.port#make-broadcast-port chicken.port#copy-port chicken.port#port-fold chicken.port#port-map chicken.port#port-for-each chicken.port#set-buffering-mode! chicken.port#port-position chicken.port#set-port-name! chicken.port#port-name) 
o|inlining procedure: k776 
o|inlining procedure: k776 
o|inlining procedure: k814 
o|inlining procedure: k814 
o|inlining procedure: k824 
o|contracted procedure: "(port.scm:143) g139140" 
o|inlining procedure: k824 
o|inlining procedure: k850 
o|inlining procedure: k850 
o|substituted constant variable: a866 
o|substituted constant variable: a868 
o|substituted constant variable: a870 
o|inlining procedure: k887 
o|inlining procedure: k887 
o|inlining procedure: k911 
o|inlining procedure: k911 
o|inlining procedure: k943 
o|inlining procedure: k943 
o|inlining procedure: k1111 
o|contracted procedure: "(port.scm:213) read-buf176" 
o|inlining procedure: k972 
o|inlining procedure: k972 
o|substituted constant variable: a984 
o|contracted procedure: "(port.scm:217) write-buf177" 
o|inlining procedure: k994 
o|inlining procedure: k994 
o|inlining procedure: k1111 
o|contracted procedure: "(port.scm:219) read-and-write-buf179" 
o|inlining procedure: k1060 
o|inlining procedure: k1060 
o|substituted constant variable: a1096 
o|contracted procedure: "(port.scm:221) read-and-write178" 
o|inlining procedure: k1030 
o|inlining procedure: k1030 
o|propagated global variable: g268269 chicken.io#write-string 
o|inlining procedure: k1205 
o|inlining procedure: k1205 
o|inlining procedure: k1234 
o|inlining procedure: k1234 
o|inlining procedure: k1272 
o|inlining procedure: k1272 
o|inlining procedure: k1301 
o|inlining procedure: k1301 
o|inlining procedure: k1327 
o|inlining procedure: k1327 
o|inlining procedure: k1362 
o|inlining procedure: k1362 
o|substituted constant variable: a1410 
o|substituted constant variable: a1411 
o|substituted constant variable: a1435 
o|substituted constant variable: a1436 
o|substituted constant variable: a1460 
o|substituted constant variable: a1461 
o|inlining procedure: k1628 
o|inlining procedure: k1628 
o|inlining procedure: k1649 
o|inlining procedure: k1649 
o|inlining procedure: k1767 
o|inlining procedure: k1767 
o|inlining procedure: k1822 
o|inlining procedure: k1822 
o|substituted constant variable: a1841 
o|substituted constant variable: a1843 
o|merged explicitly consed rest parameter: args522 
o|contracted procedure: "(port.scm:414) strerror512" 
o|substituted constant variable: a1905 
o|inlining procedure: k1909 
o|inlining procedure: k1909 
o|inlining procedure: k1924 
o|inlining procedure: k1924 
o|inlining procedure: k1959 
o|inlining procedure: k1959 
o|consed rest parameter at call site: "(port.scm:433) chicken.port#posix-error" 4 
o|contracted procedure: "(port.scm:432) ttyname535" 
o|inlining procedure: k1986 
o|inlining procedure: k1986 
o|consed rest parameter at call site: "(port.scm:448) chicken.port#posix-error" 4 
o|contracted procedure: "(port.scm:444) ttysize547" 
o|replaced variables: 283 
o|removed binding forms: 113 
o|substituted constant variable: r8252017 
o|substituted constant variable: r8252017 
o|substituted constant variable: r12732041 
o|substituted constant variable: r13022044 
o|substituted constant variable: r13282045 
o|substituted constant variable: r19102058 
o|replaced variables: 31 
o|removed binding forms: 258 
o|inlining procedure: k740 
o|propagated global variable: r7412123 ##sys#standard-input 
o|inlining procedure: k824 
o|inlining procedure: k1999 
o|removed binding forms: 36 
o|removed binding forms: 2 
o|simplifications: ((let . 5) (if . 18) (##core#call . 120)) 
o|  call simplifications:
o|    ##sys#foreign-pointer-argument	2
o|    chicken.fixnum#fx=
o|    scheme#values
o|    scheme#apply
o|    scheme#write-char
o|    scheme#string
o|    ##sys#setislot
o|    scheme#vector	6
o|    chicken.fixnum#fx<=
o|    chicken.fixnum#fx-
o|    scheme#not	2
o|    scheme#read-char	2
o|    scheme#cdr	9
o|    scheme#char->integer
o|    ##sys#setbyte
o|    chicken.fixnum#fx>=	3
o|    ##sys#byte
o|    scheme#integer->char
o|    chicken.fixnum#fx+	4
o|    scheme#cons	2
o|    scheme#eof-object?	7
o|    scheme#pair?	3
o|    scheme#eq?	12
o|    ##sys#foreign-fixnum-argument	5
o|    chicken.fixnum#fx<	3
o|    ##sys#values
o|    ##sys#check-string
o|    ##sys#setslot	2
o|    scheme#null?	19
o|    scheme#car	13
o|    ##sys#slot	12
o|contracted procedure: k749 
o|contracted procedure: k740 
o|contracted procedure: k761 
o|contracted procedure: k793 
o|contracted procedure: k770 
o|contracted procedure: k783 
o|contracted procedure: k787 
o|contracted procedure: k871 
o|contracted procedure: k805 
o|contracted procedure: k844 
o|contracted procedure: k827 
o|contracted procedure: k833 
o|contracted procedure: k837 
o|contracted procedure: k847 
o|contracted procedure: k853 
o|contracted procedure: k859 
o|contracted procedure: k890 
o|contracted procedure: k914 
o|contracted procedure: k924 
o|contracted procedure: k946 
o|contracted procedure: k1179 
o|contracted procedure: k1099 
o|contracted procedure: k1173 
o|contracted procedure: k1102 
o|contracted procedure: k1167 
o|contracted procedure: k1105 
o|contracted procedure: k1161 
o|contracted procedure: k1108 
o|contracted procedure: k1114 
o|contracted procedure: k1124 
o|contracted procedure: k1121 
o|contracted procedure: k997 
o|contracted procedure: k1007 
o|contracted procedure: k1015 
o|contracted procedure: k1011 
o|contracted procedure: k975 
o|contracted procedure: k1140 
o|contracted procedure: k1063 
o|contracted procedure: k1069 
o|contracted procedure: k1086 
o|contracted procedure: k1075 
o|contracted procedure: k1082 
o|contracted procedure: k1089 
o|contracted procedure: k1033 
o|contracted procedure: k1208 
o|contracted procedure: k1218 
o|contracted procedure: k1222 
o|contracted procedure: k1237 
o|contracted procedure: k1247 
o|contracted procedure: k1251 
o|contracted procedure: k1257 
o|contracted procedure: k1275 
o|contracted procedure: k1284 
o|contracted procedure: k1288 
o|contracted procedure: k1295 
o|contracted procedure: k1315 
o|contracted procedure: k1304 
o|contracted procedure: k1311 
o|contracted procedure: k1330 
o|contracted procedure: k1339 
o|contracted procedure: k1343 
o|contracted procedure: k1350 
o|contracted procedure: k1365 
o|contracted procedure: k1371 
o|contracted procedure: k1384 
o|contracted procedure: k1388 
o|contracted procedure: k1391 
o|contracted procedure: k1395 
o|contracted procedure: k1399 
o|contracted procedure: k1403 
o|contracted procedure: k1718 
o|contracted procedure: k1586 
o|contracted procedure: k1712 
o|contracted procedure: k1589 
o|contracted procedure: k1706 
o|contracted procedure: k1592 
o|contracted procedure: k1700 
o|contracted procedure: k1595 
o|contracted procedure: k1694 
o|contracted procedure: k1598 
o|contracted procedure: k1688 
o|contracted procedure: k1601 
o|contracted procedure: k1682 
o|contracted procedure: k1604 
o|contracted procedure: k1676 
o|contracted procedure: k1607 
o|contracted procedure: k1625 
o|contracted procedure: k1637 
o|contracted procedure: k1646 
o|contracted procedure: k1661 
o|contracted procedure: k1610 
o|contracted procedure: k1613 
o|contracted procedure: k1773 
o|contracted procedure: k1727 
o|contracted procedure: k1749 
o|contracted procedure: k1730 
o|contracted procedure: k1733 
o|contracted procedure: k1825 
o|contracted procedure: k1834 
o|contracted procedure: k1782 
o|contracted procedure: k1792 
o|contracted procedure: k1882 
o|contracted procedure: k1916 
o|contracted procedure: k1912 
o|contracted procedure: k1937 
o|contracted procedure: k1933 
o|contracted procedure: k1927 
o|contracted procedure: k1948 
o|contracted procedure: k1970 
o|contracted procedure: k1974 
o|contracted procedure: k1978 
o|contracted procedure: k1989 
o|simplifications: ((let . 36)) 
o|removed binding forms: 112 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest102103 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest102103 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest119120 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest119120 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest220223 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest220223 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest220223 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest220223 0 
o|inlining procedure: k1377 
o|inlining procedure: k1377 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest420424 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest420424 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest420424 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest420424 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest463466 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest463466 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1103 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r1103 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1103 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r1103 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1590 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r1590 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1590 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r1590 1 
o|removed binding forms: 3 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1596 2 
(o x)|known list op on rest arg sublist: ##core#rest-car r1596 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1596 2 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r1596 2 
o|removed binding forms: 3 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1602 3 
(o x)|known list op on rest arg sublist: ##core#rest-car r1602 3 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1602 3 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r1602 3 
o|removed binding forms: 1 
o|removed binding forms: 2 
o|customizable procedures: (chicken.port#check-terminal! chicken.port#posix-error loop317 loop305 loop296 for-each-loop277287 g253260 for-each-loop252270 a1149 a1155 loop198 k1054 loop206 loop183 doloop191192 loop169 loop161 loop154 k817) 
o|calls to known targets: 39 
o|unused rest argument: rest102103 f_738 
o|unused rest argument: rest119120 f_768 
o|unused rest argument: rest220223 f_1097 
o|unused rest argument: rest420424 f_1584 
o|unused rest argument: rest463466 f_1725 
o|fast box initializations: 12 
o|fast global references: 4 
o|fast global assignments: 2 
o|dropping unused closure argument: f_1885 
o|dropping unused closure argument: f_1920 
*/
/* end of file */
