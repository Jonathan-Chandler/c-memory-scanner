/* Generated from scheduler.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.3.0rc4 ((HEAD detached at 5.3.0rc4)) (rev b6cbb1ba)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: scheduler.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file scheduler.c
   unit: scheduler
   uses: extras library
*/
#include "chicken.h"

#ifdef HAVE_ERRNO_H
# include <errno.h>
# define C_signal_interrupted_p     C_mk_bool(errno == EINTR)
#else
# define C_signal_interrupted_p     C_SCHEME_FALSE
#endif

#ifdef _WIN32
/* TODO: Winsock select() only works for sockets */
# include <winsock2.h>
/* Beware: winsock2.h must come BEFORE windows.h */
# define C_msleep(n)   (Sleep((DWORD)C_num_to_uint64(n)), C_SCHEME_TRUE)
#else
# include <sys/time.h>
static C_word C_msleep(C_word ms);
C_word C_msleep(C_word ms) {
#ifdef __CYGWIN__
  if(usleep((useconds_t)C_num_to_uint64(ms) * 1000) == -1) return C_SCHEME_FALSE;
#else
  struct timespec ts;
  C_word ab[C_SIZEOF_FIX_BIGNUM], *a = ab,
         sec = C_s_a_u_i_integer_quotient(&a, 2, ms, C_fix(1000)),
         msec = C_s_a_u_i_integer_remainder(&a, 2, ms, C_fix(1000));
  ts.tv_sec = (time_t)C_num_to_uint64(sec);
  ts.tv_nsec = (long)C_unfix(msec) * 1000000;
  
  if(nanosleep(&ts, NULL) == -1) return C_SCHEME_FALSE;
#endif
  return C_SCHEME_TRUE;
}
#endif

#ifdef NO_POSIX_POLL

/* Shouldn't we include <sys/select.h> here? */
static fd_set C_fdset_input, C_fdset_output;

#define C_fd_input_ready(fd,pos)  C_mk_bool(FD_ISSET(C_unfix(fd), &C_fdset_input))
#define C_fd_output_ready(fd,pos)  C_mk_bool(FD_ISSET(C_unfix(fd), &C_fdset_output))

inline static int C_ready_fds_timeout(int to, unsigned int tm) {
  struct timeval timeout;
  timeout.tv_sec = tm / 1000;
  timeout.tv_usec = fmod(tm, 1000) * 1000;
  /* we use FD_SETSIZE, but really should use max fd */
  return select(FD_SETSIZE, &C_fdset_input, &C_fdset_output, NULL, to ? &timeout : NULL);
}

inline static void C_prepare_fdset(int length) {
  FD_ZERO(&C_fdset_input);
  FD_ZERO(&C_fdset_output);
}

inline static void C_fdset_add(int fd, int input, int output) {
  if (input) FD_SET(fd, &C_fdset_input);
  if (output) FD_SET(fd, &C_fdset_output);
}

#else
#  include <poll.h>
#  include <assert.h>

static int C_fdset_nfds;
static struct pollfd *C_fdset_set = NULL;

inline static int C_fd_ready(int fd, int pos, int what) {
  assert(fd == C_fdset_set[pos].fd); /* Must match position in ##sys#fd-list! */
  return(C_fdset_set[pos].revents & what);
}

#define C_fd_input_ready(fd,pos)  C_mk_bool(C_fd_ready(C_unfix(fd), C_unfix(pos),POLLIN|POLLERR|POLLHUP|POLLNVAL))
#define C_fd_output_ready(fd,pos)  C_mk_bool(C_fd_ready(C_unfix(fd), C_unfix(pos),POLLOUT|POLLERR|POLLHUP|POLLNVAL))

inline static int C_ready_fds_timeout(int to, unsigned int tm) {
  return poll(C_fdset_set, C_fdset_nfds, to ? tm : -1);
}

inline static void C_prepare_fdset(int length) {
  /* TODO: Only realloc when needed? */
  C_fdset_set = realloc(C_fdset_set, sizeof(struct pollfd) * length);
  if (C_fdset_set == NULL)
    C_halt(C_SCHEME_FALSE); /* Ugly: no message */
  C_fdset_nfds = 0;
}

/* This *must* be called in order, so position will match ##sys#fd-list */
inline static void C_fdset_add(int fd, int input, int output) {
  C_fdset_set[C_fdset_nfds].events = ((input ? POLLIN : 0) | (output ? POLLOUT : 0));
  C_fdset_set[C_fdset_nfds++].fd = fd;
}
#endif

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[72];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,108,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,12),40,100,101,108,113,32,120,32,108,115,116,41,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,7),40,108,111,111,112,50,41,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,50,32,116,104,114,101,97,100,115,32,107,101,101,112,41,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,110,32,112,111,115,32,108,115,116,41};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,8),40,103,51,57,56,32,116,41};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,23),40,102,111,114,45,101,97,99,104,45,108,111,111,112,51,57,55,32,103,52,48,52,41,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,108,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,108,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,7),40,108,111,111,112,49,41,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,16),40,35,35,115,121,115,35,115,99,104,101,100,117,108,101,41};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,24),40,35,35,115,121,115,35,102,111,114,99,101,45,112,114,105,109,111,114,100,105,97,108,41};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,19),40,35,35,115,121,115,35,114,101,97,100,121,45,113,117,101,117,101,41,0,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,33),40,35,35,115,121,115,35,97,100,100,45,116,111,45,114,101,97,100,121,45,113,117,101,117,101,32,116,104,114,101,97,100,41,0,0,0,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,34),40,35,35,115,121,115,35,117,112,100,97,116,101,45,116,104,114,101,97,100,45,115,116,97,116,101,45,98,117,102,102,101,114,41,0,0,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,7),40,97,49,51,48,57,41,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,35),40,35,35,115,121,115,35,105,110,116,101,114,114,117,112,116,45,104,111,111,107,32,114,101,97,115,111,110,32,115,116,97,116,101,41,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,112,114,101,118,41,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,34),40,35,35,115,121,115,35,114,101,109,111,118,101,45,102,114,111,109,45,116,105,109,101,111,117,116,45,108,105,115,116,32,116,41,0,0,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,116,108,32,112,114,101,118,41,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,38),40,35,35,115,121,115,35,116,104,114,101,97,100,45,98,108,111,99,107,45,102,111,114,45,116,105,109,101,111,117,116,33,32,116,32,116,109,41,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,42),40,35,35,115,121,115,35,116,104,114,101,97,100,45,98,108,111,99,107,45,102,111,114,45,116,101,114,109,105,110,97,116,105,111,110,33,32,116,32,116,50,41,0,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,9),40,103,51,52,48,32,116,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,23),40,102,111,114,45,101,97,99,104,45,108,111,111,112,51,51,57,32,103,51,52,54,41,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,23),40,102,111,114,45,101,97,99,104,45,108,111,111,112,51,48,53,32,103,51,49,50,41,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,23),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,57,49,32,103,50,57,56,41,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,24),40,35,35,115,121,115,35,116,104,114,101,97,100,45,107,105,108,108,33,32,116,32,115,41};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,31),40,35,35,115,121,115,35,116,104,114,101,97,100,45,98,97,115,105,99,45,117,110,98,108,111,99,107,33,32,116,41,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,7),40,97,49,55,48,54,41,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,37),40,35,35,115,121,115,35,100,101,102,97,117,108,116,45,101,120,99,101,112,116,105,111,110,45,104,97,110,100,108,101,114,32,97,114,103,41,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,108,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,38),40,35,35,115,121,115,35,116,104,114,101,97,100,45,98,108,111,99,107,45,102,111,114,45,105,47,111,33,32,116,32,102,100,32,105,47,111,41,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,108,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,37),40,35,35,115,121,115,35,99,108,101,97,114,45,105,47,111,45,115,116,97,116,101,45,102,111,114,45,116,104,114,101,97,100,33,32,116,41,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,27),40,102,95,50,52,56,49,32,113,117,101,117,101,32,97,114,103,32,118,97,108,32,105,110,105,116,41,0,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,108,41};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,108,32,105,41,0,0,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,108,32,105,41,0,0,0,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,108,32,105,41,0,0,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,26),40,35,35,115,121,115,35,97,108,108,45,116,104,114,101,97,100,115,32,46,32,114,101,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,31),40,35,35,115,121,115,35,102,101,116,99,104,45,97,110,100,45,99,108,101,97,114,45,116,104,114,101,97,100,115,41,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,27),40,35,35,115,121,115,35,114,101,115,116,111,114,101,45,116,104,114,101,97,100,115,32,118,101,99,41,0,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,25),40,35,35,115,121,115,35,116,104,114,101,97,100,45,117,110,98,108,111,99,107,33,32,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,7),40,97,50,53,54,56,41,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,14),40,97,50,53,53,54,32,114,101,116,117,114,110,41,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,24),40,35,35,115,121,115,35,116,104,114,101,97,100,45,115,108,101,101,112,33,32,116,109,41};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,27),40,99,104,105,99,107,101,110,46,98,97,115,101,35,115,108,101,101,112,45,104,111,111,107,32,110,41,0,0,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,9),40,115,117,115,112,101,110,100,41,0,0,0,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,6),40,103,54,53,49,41,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,18),40,102,111,114,45,101,97,99,104,45,108,111,111,112,54,53,48,41,0,0,0,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,18),40,102,111,114,45,101,97,99,104,45,108,111,111,112,54,56,51,41,0,0,0,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,6),40,103,54,54,49,41,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,18),40,102,111,114,45,101,97,99,104,45,108,111,111,112,54,54,48,41,0,0,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,32),40,35,35,115,121,115,35,107,105,108,108,45,111,116,104,101,114,45,116,104,114,101,97,100,115,32,116,104,117,110,107,41};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from g510 */
C_regparm static C_word C_fcall stub514(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_truep(C_a0);
unsigned int t1=(unsigned int )C_num_to_unsigned_int(C_a1);
C_r=C_fix((C_word)C_ready_fds_timeout(t0,t1));
return C_r;}

/* from g441 */
C_regparm static C_word C_fcall stub446(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_truep(C_a1);
int t2=(int )C_truep(C_a2);
C_fdset_add(t0,t1,t2);
return C_r;}

/* from g384 */
C_regparm static C_word C_fcall stub387(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_prepare_fdset(t0);
return C_r;}

C_noret_decl(f_1001)
static void C_ccall f_1001(C_word c,C_word *av) C_noret;
C_noret_decl(f_1006)
static void C_fcall f_1006(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1010)
static void C_fcall f_1010(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1070)
static void C_fcall f_1070(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1104)
static void C_ccall f_1104(C_word c,C_word *av) C_noret;
C_noret_decl(f_1107)
static void C_ccall f_1107(C_word c,C_word *av) C_noret;
C_noret_decl(f_1119)
static void C_fcall f_1119(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1125)
static void C_ccall f_1125(C_word c,C_word *av) C_noret;
C_noret_decl(f_1137)
static void C_ccall f_1137(C_word c,C_word *av) C_noret;
C_noret_decl(f_1145)
static void C_ccall f_1145(C_word c,C_word *av) C_noret;
C_noret_decl(f_1179)
static void C_ccall f_1179(C_word c,C_word *av) C_noret;
C_noret_decl(f_1190)
static void C_ccall f_1190(C_word c,C_word *av) C_noret;
C_noret_decl(f_1193)
static void C_ccall f_1193(C_word c,C_word *av) C_noret;
C_noret_decl(f_1238)
static C_word C_fcall f_1238(C_word t0);
C_noret_decl(f_1292)
static void C_ccall f_1292(C_word c,C_word *av) C_noret;
C_noret_decl(f_1296)
static void C_ccall f_1296(C_word c,C_word *av) C_noret;
C_noret_decl(f_1310)
static void C_ccall f_1310(C_word c,C_word *av) C_noret;
C_noret_decl(f_1317)
static void C_ccall f_1317(C_word c,C_word *av) C_noret;
C_noret_decl(f_1323)
static C_word C_fcall f_1323(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_1358)
static void C_ccall f_1358(C_word c,C_word *av) C_noret;
C_noret_decl(f_1368)
static void C_ccall f_1368(C_word c,C_word *av) C_noret;
C_noret_decl(f_1379)
static void C_fcall f_1379(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1427)
static void C_ccall f_1427(C_word c,C_word *av) C_noret;
C_noret_decl(f_1492)
static void C_ccall f_1492(C_word c,C_word *av) C_noret;
C_noret_decl(f_1508)
static void C_fcall f_1508(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1518)
static void C_ccall f_1518(C_word c,C_word *av) C_noret;
C_noret_decl(f_1534)
static void C_fcall f_1534(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1557)
static void C_ccall f_1557(C_word c,C_word *av) C_noret;
C_noret_decl(f_1561)
static void C_ccall f_1561(C_word c,C_word *av) C_noret;
C_noret_decl(f_1567)
static void C_fcall f_1567(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1570)
static void C_ccall f_1570(C_word c,C_word *av) C_noret;
C_noret_decl(f_1573)
static void C_ccall f_1573(C_word c,C_word *av) C_noret;
C_noret_decl(f_1591)
static void C_ccall f_1591(C_word c,C_word *av) C_noret;
C_noret_decl(f_1598)
static void C_fcall f_1598(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1617)
static void C_fcall f_1617(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1627)
static void C_ccall f_1627(C_word c,C_word *av) C_noret;
C_noret_decl(f_1648)
static void C_ccall f_1648(C_word c,C_word *av) C_noret;
C_noret_decl(f_1665)
static void C_ccall f_1665(C_word c,C_word *av) C_noret;
C_noret_decl(f_1671)
static void C_ccall f_1671(C_word c,C_word *av) C_noret;
C_noret_decl(f_1683)
static void C_ccall f_1683(C_word c,C_word *av) C_noret;
C_noret_decl(f_1687)
static void C_ccall f_1687(C_word c,C_word *av) C_noret;
C_noret_decl(f_1693)
static void C_ccall f_1693(C_word c,C_word *av) C_noret;
C_noret_decl(f_1707)
static void C_ccall f_1707(C_word c,C_word *av) C_noret;
C_noret_decl(f_1711)
static void C_ccall f_1711(C_word c,C_word *av) C_noret;
C_noret_decl(f_1731)
static void C_fcall f_1731(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1742)
static void C_fcall f_1742(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1785)
static void C_ccall f_1785(C_word c,C_word *av) C_noret;
C_noret_decl(f_1791)
static void C_ccall f_1791(C_word c,C_word *av) C_noret;
C_noret_decl(f_1794)
static void C_ccall f_1794(C_word c,C_word *av) C_noret;
C_noret_decl(f_1797)
static void C_ccall f_1797(C_word c,C_word *av) C_noret;
C_noret_decl(f_1800)
static void C_ccall f_1800(C_word c,C_word *av) C_noret;
C_noret_decl(f_1803)
static void C_ccall f_1803(C_word c,C_word *av) C_noret;
C_noret_decl(f_1806)
static void C_ccall f_1806(C_word c,C_word *av) C_noret;
C_noret_decl(f_1827)
static void C_ccall f_1827(C_word c,C_word *av) C_noret;
C_noret_decl(f_1839)
static void C_fcall f_1839(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1849)
static void C_ccall f_1849(C_word c,C_word *av) C_noret;
C_noret_decl(f_1864)
static void C_ccall f_1864(C_word c,C_word *av) C_noret;
C_noret_decl(f_1898)
static void C_ccall f_1898(C_word c,C_word *av) C_noret;
C_noret_decl(f_1904)
static void C_ccall f_1904(C_word c,C_word *av) C_noret;
C_noret_decl(f_1907)
static void C_ccall f_1907(C_word c,C_word *av) C_noret;
C_noret_decl(f_1910)
static void C_ccall f_1910(C_word c,C_word *av) C_noret;
C_noret_decl(f_1913)
static void C_ccall f_1913(C_word c,C_word *av) C_noret;
C_noret_decl(f_1916)
static void C_ccall f_1916(C_word c,C_word *av) C_noret;
C_noret_decl(f_1919)
static void C_ccall f_1919(C_word c,C_word *av) C_noret;
C_noret_decl(f_1922)
static void C_ccall f_1922(C_word c,C_word *av) C_noret;
C_noret_decl(f_1925)
static void C_ccall f_1925(C_word c,C_word *av) C_noret;
C_noret_decl(f_1943)
static void C_ccall f_1943(C_word c,C_word *av) C_noret;
C_noret_decl(f_1947)
static void C_ccall f_1947(C_word c,C_word *av) C_noret;
C_noret_decl(f_1962)
static void C_fcall f_1962(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2010)
static void C_ccall f_2010(C_word c,C_word *av) C_noret;
C_noret_decl(f_2019)
static void C_ccall f_2019(C_word c,C_word *av) C_noret;
C_noret_decl(f_2043)
static void C_ccall f_2043(C_word c,C_word *av) C_noret;
C_noret_decl(f_2045)
static void C_fcall f_2045(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2072)
static void C_fcall f_2072(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2107)
static void C_ccall f_2107(C_word c,C_word *av) C_noret;
C_noret_decl(f_2141)
static void C_ccall f_2141(C_word c,C_word *av) C_noret;
C_noret_decl(f_2144)
static void C_ccall f_2144(C_word c,C_word *av) C_noret;
C_noret_decl(f_2165)
static void C_ccall f_2165(C_word c,C_word *av) C_noret;
C_noret_decl(f_2171)
static void C_ccall f_2171(C_word c,C_word *av) C_noret;
C_noret_decl(f_2174)
static void C_ccall f_2174(C_word c,C_word *av) C_noret;
C_noret_decl(f_2177)
static void C_ccall f_2177(C_word c,C_word *av) C_noret;
C_noret_decl(f_2180)
static void C_ccall f_2180(C_word c,C_word *av) C_noret;
C_noret_decl(f_2183)
static void C_ccall f_2183(C_word c,C_word *av) C_noret;
C_noret_decl(f_2186)
static void C_ccall f_2186(C_word c,C_word *av) C_noret;
C_noret_decl(f_2194)
static void C_fcall f_2194(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2197)
static void C_ccall f_2197(C_word c,C_word *av) C_noret;
C_noret_decl(f_2200)
static void C_ccall f_2200(C_word c,C_word *av) C_noret;
C_noret_decl(f_2241)
static void C_ccall f_2241(C_word c,C_word *av) C_noret;
C_noret_decl(f_2261)
static void C_ccall f_2261(C_word c,C_word *av) C_noret;
C_noret_decl(f_2272)
static void C_ccall f_2272(C_word c,C_word *av) C_noret;
C_noret_decl(f_2277)
static void C_fcall f_2277(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2291)
static void C_ccall f_2291(C_word c,C_word *av) C_noret;
C_noret_decl(f_2293)
static void C_fcall f_2293(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2315)
static void C_ccall f_2315(C_word c,C_word *av) C_noret;
C_noret_decl(f_2334)
static void C_ccall f_2334(C_word c,C_word *av) C_noret;
C_noret_decl(f_2346)
static void C_ccall f_2346(C_word c,C_word *av) C_noret;
C_noret_decl(f_2364)
static void C_fcall f_2364(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2380)
static void C_ccall f_2380(C_word c,C_word *av) C_noret;
C_noret_decl(f_2387)
static void C_fcall f_2387(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2406)
static void C_ccall f_2406(C_word c,C_word *av) C_noret;
C_noret_decl(f_2411)
static void C_fcall f_2411(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2429)
static void C_ccall f_2429(C_word c,C_word *av) C_noret;
C_noret_decl(f_2436)
static void C_fcall f_2436(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2452)
static void C_ccall f_2452(C_word c,C_word *av) C_noret;
C_noret_decl(f_2481)
static void C_ccall f_2481(C_word c,C_word *av) C_noret;
C_noret_decl(f_2490)
static void C_ccall f_2490(C_word c,C_word *av) C_noret;
C_noret_decl(f_2500)
static void C_ccall f_2500(C_word c,C_word *av) C_noret;
C_noret_decl(f_2519)
static void C_ccall f_2519(C_word c,C_word *av) C_noret;
C_noret_decl(f_2532)
static void C_ccall f_2532(C_word c,C_word *av) C_noret;
C_noret_decl(f_2535)
static void C_ccall f_2535(C_word c,C_word *av) C_noret;
C_noret_decl(f_2551)
static void C_ccall f_2551(C_word c,C_word *av) C_noret;
C_noret_decl(f_2557)
static void C_ccall f_2557(C_word c,C_word *av) C_noret;
C_noret_decl(f_2564)
static void C_ccall f_2564(C_word c,C_word *av) C_noret;
C_noret_decl(f_2569)
static void C_ccall f_2569(C_word c,C_word *av) C_noret;
C_noret_decl(f_2575)
static void C_ccall f_2575(C_word c,C_word *av) C_noret;
C_noret_decl(f_2589)
static void C_ccall f_2589(C_word c,C_word *av) C_noret;
C_noret_decl(f_2592)
static C_word C_fcall f_2592(C_word t0,C_word t1);
C_noret_decl(f_2618)
static C_word C_fcall f_2618(C_word t0,C_word t1);
C_noret_decl(f_2630)
static C_word C_fcall f_2630(C_word t0,C_word t1);
C_noret_decl(f_2639)
static C_word C_fcall f_2639(C_word t0,C_word t1);
C_noret_decl(f_2668)
static void C_ccall f_2668(C_word c,C_word *av) C_noret;
C_noret_decl(f_2673)
static C_word C_fcall f_2673(C_word t0,C_word t1);
C_noret_decl(f_2696)
static C_word C_fcall f_2696(C_word t0,C_word t1);
C_noret_decl(f_910)
static void C_ccall f_910(C_word c,C_word *av) C_noret;
C_noret_decl(f_913)
static void C_ccall f_913(C_word c,C_word *av) C_noret;
C_noret_decl(f_915)
static void C_fcall f_915(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_921)
static void C_fcall f_921(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_948)
static void C_ccall f_948(C_word c,C_word *av) C_noret;
C_noret_decl(f_958)
static void C_ccall f_958(C_word c,C_word *av) C_noret;
C_noret_decl(f_989)
static void C_ccall f_989(C_word c,C_word *av) C_noret;
C_noret_decl(f_994)
static void C_fcall f_994(C_word t0,C_word t1) C_noret;
C_noret_decl(f_998)
static void C_ccall f_998(C_word c,C_word *av) C_noret;
C_noret_decl(C_scheduler_toplevel)
C_externexport void C_ccall C_scheduler_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1006)
static void C_ccall trf_1006(C_word c,C_word *av) C_noret;
static void C_ccall trf_1006(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1006(t0,t1);}

C_noret_decl(trf_1010)
static void C_ccall trf_1010(C_word c,C_word *av) C_noret;
static void C_ccall trf_1010(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1010(t0,t1);}

C_noret_decl(trf_1070)
static void C_ccall trf_1070(C_word c,C_word *av) C_noret;
static void C_ccall trf_1070(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1070(t0,t1,t2);}

C_noret_decl(trf_1119)
static void C_ccall trf_1119(C_word c,C_word *av) C_noret;
static void C_ccall trf_1119(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1119(t0,t1);}

C_noret_decl(trf_1379)
static void C_ccall trf_1379(C_word c,C_word *av) C_noret;
static void C_ccall trf_1379(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1379(t0,t1,t2,t3);}

C_noret_decl(trf_1508)
static void C_ccall trf_1508(C_word c,C_word *av) C_noret;
static void C_ccall trf_1508(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1508(t0,t1,t2);}

C_noret_decl(trf_1534)
static void C_ccall trf_1534(C_word c,C_word *av) C_noret;
static void C_ccall trf_1534(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1534(t0,t1,t2);}

C_noret_decl(trf_1567)
static void C_ccall trf_1567(C_word c,C_word *av) C_noret;
static void C_ccall trf_1567(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1567(t0,t1);}

C_noret_decl(trf_1598)
static void C_ccall trf_1598(C_word c,C_word *av) C_noret;
static void C_ccall trf_1598(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1598(t0,t1,t2);}

C_noret_decl(trf_1617)
static void C_ccall trf_1617(C_word c,C_word *av) C_noret;
static void C_ccall trf_1617(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1617(t0,t1,t2);}

C_noret_decl(trf_1731)
static void C_ccall trf_1731(C_word c,C_word *av) C_noret;
static void C_ccall trf_1731(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1731(t0,t1,t2);}

C_noret_decl(trf_1742)
static void C_ccall trf_1742(C_word c,C_word *av) C_noret;
static void C_ccall trf_1742(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1742(t0,t1,t2);}

C_noret_decl(trf_1839)
static void C_ccall trf_1839(C_word c,C_word *av) C_noret;
static void C_ccall trf_1839(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1839(t0,t1,t2);}

C_noret_decl(trf_1962)
static void C_ccall trf_1962(C_word c,C_word *av) C_noret;
static void C_ccall trf_1962(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1962(t0,t1,t2);}

C_noret_decl(trf_2045)
static void C_ccall trf_2045(C_word c,C_word *av) C_noret;
static void C_ccall trf_2045(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_2045(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2072)
static void C_ccall trf_2072(C_word c,C_word *av) C_noret;
static void C_ccall trf_2072(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2072(t0,t1,t2,t3);}

C_noret_decl(trf_2194)
static void C_ccall trf_2194(C_word c,C_word *av) C_noret;
static void C_ccall trf_2194(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2194(t0,t1);}

C_noret_decl(trf_2277)
static void C_ccall trf_2277(C_word c,C_word *av) C_noret;
static void C_ccall trf_2277(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2277(t0,t1);}

C_noret_decl(trf_2293)
static void C_ccall trf_2293(C_word c,C_word *av) C_noret;
static void C_ccall trf_2293(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2293(t0,t1,t2);}

C_noret_decl(trf_2364)
static void C_ccall trf_2364(C_word c,C_word *av) C_noret;
static void C_ccall trf_2364(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2364(t0,t1,t2,t3);}

C_noret_decl(trf_2387)
static void C_ccall trf_2387(C_word c,C_word *av) C_noret;
static void C_ccall trf_2387(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2387(t0,t1,t2,t3);}

C_noret_decl(trf_2411)
static void C_ccall trf_2411(C_word c,C_word *av) C_noret;
static void C_ccall trf_2411(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2411(t0,t1,t2);}

C_noret_decl(trf_2436)
static void C_ccall trf_2436(C_word c,C_word *av) C_noret;
static void C_ccall trf_2436(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2436(t0,t1,t2,t3);}

C_noret_decl(trf_915)
static void C_ccall trf_915(C_word c,C_word *av) C_noret;
static void C_ccall trf_915(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_915(t0,t1,t2);}

C_noret_decl(trf_921)
static void C_ccall trf_921(C_word c,C_word *av) C_noret;
static void C_ccall trf_921(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_921(t0,t1,t2);}

C_noret_decl(trf_994)
static void C_ccall trf_994(C_word c,C_word *av) C_noret;
static void C_ccall trf_994(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_994(t0,t1);}

/* k999 in k996 in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_ccall f_1001(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_1001,c,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1006,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li2),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_1006(t5,((C_word*)t0)[3]);}

/* loop2 in k999 in k996 in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_fcall f_1006(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1006,2,t0,t1);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1010,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=lf[17];
t4=C_i_nullp(lf[17]);
if(C_truep(C_i_not(t4))){
t5=C_u_i_cdr(lf[17]);
t6=C_mutate(&lf[17] /* (set! ready-queue-head ...) */,t5);
t7=C_eqp(C_SCHEME_END_OF_LIST,t5);
if(C_truep(t7)){
t8=lf[18] /* ready-queue-tail */ =C_SCHEME_END_OF_LIST;;
t9=t2;
f_1010(t9,C_u_i_car(t3));}
else{
t8=t2;
f_1010(t8,C_u_i_car(t3));}}
else{
t5=t2;
f_1010(t5,C_SCHEME_FALSE);}}

/* k1008 in loop2 in k999 in k996 in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_fcall f_1010(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_1010,2,t0,t1);}
if(C_truep(C_i_not(t1))){
if(C_truep(C_i_nullp(lf[5]))){
if(C_truep(C_i_nullp(*((C_word*)lf[6]+1)))){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_halt(lf[7]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* scheduler.scm:233: loop1 */
t2=((C_word*)((C_word*)t0)[3])[1];
f_994(t2,((C_word*)t0)[2]);}}
else{
/* scheduler.scm:233: loop1 */
t2=((C_word*)((C_word*)t0)[3])[1];
f_994(t2,((C_word*)t0)[2]);}}
else{
t2=C_slot(t1,C_fix(3));
t3=C_eqp(t2,lf[8]);
if(C_truep(t3)){
t4=C_mutate((C_word*)lf[3]+1 /* (set! ##sys#current-thread ...) */,t1);
t5=C_i_setslot(t1,C_fix(3),lf[9]);
t6=C_slot(t1,C_fix(5));
t7=C_slot(t6,C_fix(0));
t8=C_mutate((C_word*)lf[10]+1 /* (set! ##sys#dynamic-winds ...) */,t7);
t9=C_slot(t6,C_fix(1));
t10=C_mutate((C_word*)lf[11]+1 /* (set! ##sys#standard-input ...) */,t9);
t11=C_slot(t6,C_fix(2));
t12=C_mutate((C_word*)lf[12]+1 /* (set! ##sys#standard-output ...) */,t11);
t13=C_slot(t6,C_fix(3));
t14=C_mutate((C_word*)lf[13]+1 /* (set! ##sys#standard-error ...) */,t13);
t15=C_slot(t6,C_fix(4));
t16=C_mutate((C_word*)lf[14]+1 /* (set! ##sys#current-exception-handler ...) */,t15);
t17=C_slot(t6,C_fix(5));
t18=C_mutate((C_word*)lf[15]+1 /* (set! ##sys#current-parameter-vector ...) */,t17);
t19=C_slot(t1,C_fix(9));
t20=C_set_initial_timer_interrupt_period(t19);
/* scheduler.scm:175: ##sys#call-with-cthulhu */
t21=*((C_word*)lf[16]+1);{
C_word av2[3];
av2[0]=t21;
av2[1]=((C_word*)t0)[2];
av2[2]=C_slot(t1,C_fix(1));
((C_proc)(void*)(*((C_word*)t21+1)))(3,av2);}}
else{
/* scheduler.scm:235: loop2 */
t4=((C_word*)((C_word*)t0)[4])[1];
f_1006(t4,((C_word*)t0)[2]);}}}

/* loop in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_fcall f_1070(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_1070,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t3=lf[5] /* ##sys#timeout-list */ =C_SCHEME_END_OF_LIST;;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_u_i_caar(t2);
t4=C_u_i_car(t2);
t5=C_u_i_cdr(t4);
t6=C_slot(t5,C_fix(4));
if(C_truep(C_i_equalp(t3,t6))){
if(C_truep(C_i_greater_or_equalp(((C_word*)t0)[2],t3))){
t7=C_i_set_i_slot(t5,C_fix(13),C_SCHEME_TRUE);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1104,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* scheduler.scm:200: ##sys#clear-i/o-state-for-thread! */
f_2277(t8,t5);}
else{
t7=C_mutate(&lf[5] /* (set! ##sys#timeout-list ...) */,t2);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1119,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(lf[17]))){
t9=C_i_nullp(*((C_word*)lf[6]+1));
t10=t8;
f_1119(t10,(C_truep(t9)?C_i_pairp(lf[5]):C_SCHEME_FALSE));}
else{
t9=t8;
f_1119(t9,C_SCHEME_FALSE);}}}
else{
/* scheduler.scm:219: loop */
t11=t1;
t12=C_u_i_cdr(t2);
t1=t11;
t2=t12;
goto loop;}}}

/* k1102 in loop in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_ccall f_1104(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1104,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1107,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm:201: ##sys#thread-basic-unblock! */
t3=*((C_word*)lf[20]+1);{
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

/* k1105 in k1102 in loop in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_ccall f_1107(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1107,c,av);}
/* scheduler.scm:202: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1070(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]));}

/* k1117 in loop in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_fcall f_1119(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_1119,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=C_u_i_caar(lf[5]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1125,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1145,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* scheduler.scm:212: scheme#round */
t5=*((C_word*)lf[37]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k1123 in k1117 in loop in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_ccall f_1125(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,3)))){
C_save_and_reclaim((void *)f_1125,c,av);}
a=C_alloc(33);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1137,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_s_a_i_minus(&a,2,t1,((C_word*)t0)[4]);
/* scheduler.scm:216: scheme#max */
t4=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=C_fix(0);
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k1135 in k1123 in k1117 in loop in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_ccall f_1137(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1137,c,av);}
if(C_truep(C_i_not(C_msleep(t1)))){
t2=C_mk_bool(C_signal_interrupted_p);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k1143 in k1117 in loop in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_ccall f_1145(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1145,c,av);}
/* scheduler.scm:212: scheme#inexact->exact */
t2=*((C_word*)lf[36]+1);{
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

/* ##sys#force-primordial in k911 in k908 */
static void C_ccall f_1179(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1179,c,av);}
t2=C_i_set_i_slot(*((C_word*)lf[43]+1),C_fix(13),C_SCHEME_FALSE);
/* scheduler.scm:240: ##sys#thread-unblock! */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=*((C_word*)lf[43]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* ##sys#ready-queue in k911 in k908 */
static void C_ccall f_1190(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1190,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[17];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* ##sys#add-to-ready-queue in k911 in k908 */
static void C_ccall f_1193(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_1193,c,av);}
a=C_alloc(3);
t3=C_i_setslot(t2,C_fix(3),lf[8]);
t4=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t5=C_eqp(C_SCHEME_END_OF_LIST,lf[17]);
if(C_truep(t5)){
t6=C_mutate(&lf[17] /* (set! ready-queue-head ...) */,t4);
t7=C_mutate(&lf[18] /* (set! ready-queue-tail ...) */,t4);
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t6=C_i_setslot(lf[18],C_fix(1),t4);
t7=C_mutate(&lf[18] /* (set! ready-queue-tail ...) */,t4);
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* ##sys#update-thread-state-buffer in k911 in k908 */
static C_word C_fcall f_1238(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;{}
t2=C_slot(t1,C_fix(5));
t3=C_i_setslot(t2,C_fix(0),*((C_word*)lf[10]+1));
t4=C_i_setslot(t2,C_fix(1),*((C_word*)lf[11]+1));
t5=C_i_setslot(t2,C_fix(2),*((C_word*)lf[12]+1));
t6=C_i_setslot(t2,C_fix(3),*((C_word*)lf[13]+1));
t7=C_i_setslot(t2,C_fix(4),*((C_word*)lf[14]+1));
return(C_i_setslot(t2,C_fix(5),*((C_word*)lf[15]+1)));}

/* ##sys#interrupt-hook in k911 in k908 */
static void C_ccall f_1292(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_1292,c,av);}
a=C_alloc(12);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1296,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=C_eqp(t2,C_fix(255));
if(C_truep(t5)){
t6=*((C_word*)lf[3]+1);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1310,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word)li15),tmp=(C_word)a,a+=6,tmp);
t8=C_i_setslot(*((C_word*)lf[3]+1),C_fix(1),t7);
/* scheduler.scm:287: ##sys#schedule */
t9=*((C_word*)lf[2]+1);{
C_word *av2=av;
av2[0]=t9;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
/* scheduler.scm:288: oldhook */
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* k1294 in ##sys#interrupt-hook in k911 in k908 */
static void C_ccall f_1296(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1296,c,av);}
/* scheduler.scm:288: oldhook */
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
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* a1309 in ##sys#interrupt-hook in k911 in k908 */
static void C_ccall f_1310(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1310,c,av);}
/* scheduler.scm:286: oldhook */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* ##sys#remove-from-timeout-list in k911 in k908 */
static void C_ccall f_1317(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1317,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1323,a[2]=t2,a[3]=((C_word)li17),tmp=(C_word)a,a+=4,tmp);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=(
  f_1323(t3,lf[5],C_SCHEME_FALSE)
);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* loop in ##sys#remove-from-timeout-list in k911 in k908 */
static C_word C_fcall f_1323(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
loop:{}
if(C_truep(C_i_nullp(t1))){
return(t1);}
else{
t3=C_slot(t1,C_fix(0));
t4=C_slot(t1,C_fix(1));
t5=C_slot(t3,C_fix(1));
t6=C_eqp(t5,((C_word*)t0)[2]);
if(C_truep(t6)){
if(C_truep(t2)){
return(C_i_setslot(t2,C_fix(1),t4));}
else{
t7=C_mutate(&lf[5] /* (set! ##sys#timeout-list ...) */,t4);
return(t7);}}
else{
t9=t4;
t10=t1;
t1=t9;
t2=t10;
goto loop;}}}

/* ##sys#thread-block-for-timeout! in k911 in k908 */
static void C_ccall f_1358(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_1358,c,av);}
a=C_alloc(13);
if(C_truep(C_i_greaterp(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1368,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1379,a[2]=t3,a[3]=t2,a[4]=t6,a[5]=((C_word)li19),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_1379(t8,t4,lf[5],C_SCHEME_FALSE);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k1366 in ##sys#thread-block-for-timeout! in k911 in k908 */
static void C_ccall f_1368(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1368,c,av);}
t2=C_i_setslot(((C_word*)t0)[2],C_fix(3),lf[48]);
t3=C_i_set_i_slot(((C_word*)t0)[2],C_fix(13),C_SCHEME_FALSE);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_setslot(((C_word*)t0)[2],C_fix(4),((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* loop in ##sys#thread-block-for-timeout! in k911 in k908 */
static void C_fcall f_1379(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_1379,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=C_i_nullp(t2);
t5=(C_truep(t4)?t4:C_i_lessp(((C_word*)t0)[2],C_u_i_caar(t2)));
if(C_truep(t5)){
if(C_truep(t3)){
t6=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t7=C_a_i_cons(&a,2,t6,t2);
t8=t1;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_i_setslot(t3,C_fix(1),t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t6=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t7=C_a_i_cons(&a,2,t6,t2);
t8=C_mutate(&lf[5] /* (set! ##sys#timeout-list ...) */,t7);
t9=t1;{
C_word av2[2];
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}
else{
/* scheduler.scm:313: loop */
t10=t1;
t11=C_u_i_cdr(t2);
t12=t2;
t1=t10;
t2=t11;
t3=t12;
goto loop;}}

/* ##sys#thread-block-for-termination! in k911 in k908 */
static void C_ccall f_1427(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_1427,c,av);}
a=C_alloc(3);
t4=C_slot(t3,C_fix(3));
t5=C_eqp(t4,lf[50]);
t6=(C_truep(t5)?t5:C_eqp(t4,lf[51]));
if(C_truep(t6)){
t7=C_SCHEME_UNDEFINED;
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t7=C_slot(t3,C_fix(12));
t8=C_a_i_cons(&a,2,t2,t7);
t9=C_i_setslot(t3,C_fix(12),t8);
t10=C_i_setslot(t2,C_fix(3),lf[48]);
t11=C_i_set_i_slot(t2,C_fix(13),C_SCHEME_FALSE);
t12=t1;{
C_word *av2=av;
av2[0]=t12;
av2[1]=C_i_setslot(t2,C_fix(11),t3);
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}}

/* k1490 in for-each-loop291 in ##sys#thread-kill! in k911 in k908 */
static void C_ccall f_1492(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1492,c,av);}
t2=C_i_set_i_slot(((C_word*)t0)[2],C_fix(3),C_SCHEME_END_OF_LIST);
t3=((C_word*)((C_word*)t0)[3])[1];
f_1534(t3,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* for-each-loop305 in for-each-loop291 in ##sys#thread-kill! in k911 in k908 */
static void C_fcall f_1508(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1508,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1518,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm:340: ##sys#thread-unblock! */
t4=*((C_word*)lf[44]+1);{
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

/* k1516 in for-each-loop305 in for-each-loop291 in ##sys#thread-kill! in k911 in k908 */
static void C_ccall f_1518(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1518,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_1508(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* for-each-loop291 in ##sys#thread-kill! in k911 in k908 */
static void C_fcall f_1534(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_1534,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_set_i_slot(t3,C_fix(2),C_SCHEME_FALSE);
t5=C_i_set_i_slot(t3,C_fix(4),C_SCHEME_TRUE);
t6=C_i_set_i_slot(t3,C_fix(5),C_SCHEME_FALSE);
t7=C_slot(t3,C_fix(3));
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1492,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_nullp(t7))){
t9=C_i_set_i_slot(t3,C_fix(3),C_SCHEME_END_OF_LIST);
t13=t1;
t14=C_slot(t2,C_fix(1));
t1=t13;
t2=t14;
goto loop;}
else{
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1508,a[2]=t10,a[3]=((C_word)li24),tmp=(C_word)a,a+=4,tmp));
t12=((C_word*)t10)[1];
f_1508(t12,t8,t7);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* ##sys#thread-kill! in k911 in k908 */
static void C_ccall f_1557(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_1557,c,av);}
a=C_alloc(11);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1561,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=C_slot(t2,C_fix(8));
if(C_truep(C_i_nullp(t5))){
t6=C_SCHEME_UNDEFINED;
t7=t4;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
f_1561(2,av2);}}
else{
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1534,a[2]=t7,a[3]=((C_word)li25),tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_1534(t9,t4,t5);}}

/* k1559 in ##sys#thread-kill! in k911 in k908 */
static void C_ccall f_1561(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_1561,c,av);}
a=C_alloc(9);
t2=C_slot(((C_word*)t0)[2],C_fix(11));
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1567,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_structurep(t2,lf[53]))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1648,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm:351: delq */
f_915(t4,((C_word*)t0)[2],C_slot(t2,C_fix(2)));}
else{
if(C_truep(C_i_structurep(t2,lf[54]))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1665,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm:353: delq */
f_915(t4,((C_word*)t0)[2],C_slot(t2,C_fix(12)));}
else{
t4=C_SCHEME_UNDEFINED;
t5=t3;
f_1567(t5,t4);}}}

/* k1565 in k1559 in ##sys#thread-kill! in k911 in k908 */
static void C_fcall f_1567(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1567,2,t0,t1);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1570,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm:354: ##sys#remove-from-timeout-list */
t3=*((C_word*)lf[21]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k1568 in k1565 in k1559 in ##sys#thread-kill! in k911 in k908 */
static void C_ccall f_1570(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1570,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1573,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm:355: ##sys#clear-i/o-state-for-thread! */
f_2277(t2,((C_word*)t0)[2]);}

/* k1571 in k1568 in k1565 in k1559 in ##sys#thread-kill! in k911 in k908 */
static void C_ccall f_1573(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_1573,c,av);}
a=C_alloc(15);
t2=C_i_setslot(((C_word*)t0)[2],C_fix(3),((C_word*)t0)[3]);
t3=C_i_set_i_slot(((C_word*)t0)[2],C_fix(4),C_SCHEME_FALSE);
t4=C_i_set_i_slot(((C_word*)t0)[2],C_fix(11),C_SCHEME_FALSE);
t5=C_i_set_i_slot(((C_word*)t0)[2],C_fix(8),C_SCHEME_END_OF_LIST);
t6=C_slot(((C_word*)t0)[2],C_fix(12));
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1591,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t6))){
t8=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_i_set_i_slot(((C_word*)t0)[2],C_fix(12),C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1598,a[2]=((C_word*)t0)[2],a[3]=((C_word)li22),tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1617,a[2]=t10,a[3]=t8,a[4]=((C_word)li23),tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_1617(t12,t7,t6);}}

/* k1589 in k1571 in k1568 in k1565 in k1559 in ##sys#thread-kill! in k911 in k908 */
static void C_ccall f_1591(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1591,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_set_i_slot(((C_word*)t0)[3],C_fix(12),C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* g340 in k1571 in k1568 in k1565 in k1559 in ##sys#thread-kill! in k911 in k908 */
static void C_fcall f_1598(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_1598,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(11));
t4=C_eqp(t3,((C_word*)t0)[2]);
if(C_truep(t4)){
/* scheduler.scm:366: ##sys#thread-basic-unblock! */
t5=*((C_word*)lf[20]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* for-each-loop339 in k1571 in k1568 in k1565 in k1559 in ##sys#thread-kill! in k911 in k908 */
static void C_fcall f_1617(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1617,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1627,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm:362: g340 */
t4=((C_word*)t0)[3];
f_1598(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k1625 in for-each-loop339 in k1571 in k1568 in k1565 in k1559 in ##sys#thread-kill! in k911 in k908 */
static void C_ccall f_1627(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1627,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_1617(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k1646 in k1559 in ##sys#thread-kill! in k911 in k908 */
static void C_ccall f_1648(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1648,c,av);}
t2=((C_word*)t0)[2];
f_1567(t2,C_i_setslot(((C_word*)t0)[3],C_fix(2),t1));}

/* k1663 in k1559 in ##sys#thread-kill! in k911 in k908 */
static void C_ccall f_1665(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1665,c,av);}
t2=((C_word*)t0)[2];
f_1567(t2,C_i_setslot(((C_word*)t0)[3],C_fix(12),t1));}

/* ##sys#thread-basic-unblock! in k911 in k908 */
static void C_ccall f_1671(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1671,c,av);}
t3=C_i_set_i_slot(t2,C_fix(11),C_SCHEME_FALSE);
t4=C_i_set_i_slot(t2,C_fix(4),C_SCHEME_FALSE);
/* scheduler.scm:374: ##sys#add-to-ready-queue */
t5=*((C_word*)lf[42]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* ##sys#default-exception-handler in k911 in k908 */
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_1683,c,av);}
a=C_alloc(10);
t3=*((C_word*)lf[3]+1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1687,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_mk_bool(C_abort_on_thread_exceptions))){
t5=*((C_word*)lf[43]+1);
t6=C_slot(*((C_word*)lf[43]+1),C_fix(1));
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1707,a[2]=t6,a[3]=t2,a[4]=((C_word)li28),tmp=(C_word)a,a+=5,tmp);
t8=C_i_setslot(*((C_word*)lf[43]+1),C_fix(1),t7);
/* scheduler.scm:388: ##sys#thread-unblock! */
t9=*((C_word*)lf[44]+1);{
C_word *av2=av;
av2[0]=t9;
av2[1]=t4;
av2[2]=*((C_word*)lf[43]+1);
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
/* scheduler.scm:390: ##sys#show-exception-warning */
t5=*((C_word*)lf[57]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[58];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}}

/* k1685 in ##sys#default-exception-handler in k911 in k908 */
static void C_ccall f_1687(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_1687,c,av);}
a=C_alloc(3);
t2=C_i_setslot(((C_word*)t0)[2],C_fix(7),((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1693,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* scheduler.scm:392: ##sys#thread-kill! */
t4=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[51];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k1691 in k1685 in ##sys#default-exception-handler in k911 in k908 */
static void C_ccall f_1693(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1693,c,av);}
/* scheduler.scm:393: ##sys#schedule */
t2=*((C_word*)lf[2]+1);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a1706 in ##sys#default-exception-handler in k911 in k908 */
static void C_ccall f_1707(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1707,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1711,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm:386: chicken.condition#signal */
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

/* k1709 in a1706 in ##sys#default-exception-handler in k911 in k908 */
static void C_ccall f_1711(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1711,c,av);}
/* scheduler.scm:387: ptx */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in k1862 in k996 in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_fcall f_1731(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(25,0,3)))){
C_save_and_reclaim_args((void *)trf_1731,3,t0,t1,t2);}
a=C_alloc(25);
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_u_i_caar(t2);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1742,a[2]=t5,a[3]=t7,a[4]=t3,a[5]=((C_word)li5),tmp=(C_word)a,a+=6,tmp);
t9=C_u_i_car(t2);
t10=C_u_i_cdr(t9);
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1827,a[2]=t5,a[3]=t7,a[4]=t3,a[5]=((C_word*)t0)[2],a[6]=t1,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1839,a[2]=t13,a[3]=t8,a[4]=((C_word)li6),tmp=(C_word)a,a+=5,tmp));
t15=((C_word*)t13)[1];
f_1839(t15,t11,t10);}}

/* g398 in loop in k1862 in k996 in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_fcall f_1742(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1742,3,t0,t1,t2);}
a=C_alloc(5);
t3=C_slot(t2,C_fix(11));
if(C_truep(C_i_pairp(t3))){
t4=C_u_i_cdr(t3);
t5=C_eqp(t4,C_SCHEME_TRUE);
t6=(C_truep(t5)?t5:C_eqp(t4,lf[29]));
if(C_truep(t6)){
t7=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t8=t1;{
C_word av2[2];
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t7=C_eqp(t4,C_SCHEME_FALSE);
t8=(C_truep(t7)?t7:C_eqp(t4,lf[30]));
if(C_truep(t8)){
t9=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_TRUE);
t10=t1;{
C_word av2[2];
av2[0]=t10;
av2[1]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t9=C_eqp(t4,lf[31]);
if(C_truep(t9)){
t10=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t11=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_TRUE);
t12=t1;{
C_word av2[2];
av2[0]=t12;
av2[1]=t11;
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}
else{
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1785,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm:424: chicken.base#open-output-string */
t11=*((C_word*)lf[28]+1);{
C_word av2[2];
av2[0]=t11;
av2[1]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}}}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k1783 in g398 in loop in k1862 in k996 in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_ccall f_1785(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1785,c,av);}
a=C_alloc(6);
t2=C_i_check_port_2(t1,C_fix(2),C_SCHEME_TRUE,lf[22]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1791,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* scheduler.scm:424: ##sys#print */
t4=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[39];
av2[3]=C_SCHEME_FALSE;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k1789 in k1783 in g398 in loop in k1862 in k996 in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_ccall f_1791(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_1791,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1794,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm:424: ##sys#print */
t3=*((C_word*)lf[25]+1);{
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
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k1792 in k1789 in k1783 in g398 in loop in k1862 in k996 in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_ccall f_1794(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_1794,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1797,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm:424: ##sys#print */
t3=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[38];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k1795 in k1792 in k1789 in k1783 in g398 in loop in k1862 in k996 in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_ccall f_1797(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_1797,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1800,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm:424: ##sys#print */
t3=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k1798 in k1795 in k1792 in k1789 in k1783 in g398 in loop in k1862 in k996 in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_ccall f_1800(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1800,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1803,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm:424: ##sys#write-char-0 */
t3=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(41);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k1801 in k1798 in k1795 in k1792 in k1789 in k1783 in g398 in loop in k1862 in k996 in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_ccall f_1803(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1803,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1806,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* scheduler.scm:424: chicken.base#get-output-string */
t3=*((C_word*)lf[23]+1);{
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

/* k1804 in k1801 in k1798 in k1795 in k1792 in k1789 in k1783 in g398 in loop in k1862 in k996 in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_ccall f_1806(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1806,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_halt(t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1825 in loop in k1862 in k996 in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_ccall f_1827(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1827,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
t3=((C_word*)((C_word*)t0)[3])[1];
t4=stub446(C_SCHEME_UNDEFINED,((C_word*)t0)[4],t2,t3);
/* scheduler.scm:429: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_1731(t5,((C_word*)t0)[6],C_u_i_cdr(((C_word*)t0)[7]));}

/* for-each-loop397 in loop in k1862 in k996 in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_fcall f_1839(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1839,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1849,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm:407: g398 */
t4=((C_word*)t0)[3];
f_1742(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k1847 in for-each-loop397 in loop in k1862 in k996 in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_ccall f_1849(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1849,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_1839(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k1862 in k996 in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_ccall f_1864(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1864,c,av);}
a=C_alloc(6);
t2=stub387(C_SCHEME_UNDEFINED,t1);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1731,a[2]=t4,a[3]=((C_word)li7),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_1731(t6,((C_word*)t0)[2],*((C_word*)lf[6]+1));}

/* k1896 in loop2 in loop in k2017 in k2008 in k996 in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_ccall f_1898(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_1898,c,av);}
a=C_alloc(7);
t2=C_i_check_port_2(t1,C_fix(2),C_SCHEME_TRUE,lf[22]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1904,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* scheduler.scm:437: ##sys#print */
t4=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[34];
av2[3]=C_SCHEME_FALSE;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k1902 in k1896 in loop2 in loop in k2017 in k2008 in k996 in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_ccall f_1904(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1904,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1907,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* scheduler.scm:437: ##sys#print */
t3=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k1905 in k1902 in k1896 in loop2 in loop in k2017 in k2008 in k996 in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_ccall f_1907(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1907,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1910,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* scheduler.scm:437: ##sys#print */
t3=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[33];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k1908 in k1905 in k1902 in k1896 in loop2 in loop in k2017 in k2008 in k996 in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_ccall f_1910(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_1910,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1913,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm:437: ##sys#print */
t3=*((C_word*)lf[25]+1);{
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
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k1911 in k1908 in k1905 in k1902 in k1896 in loop2 in loop in k2017 in k2008 in k996 in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_ccall f_1913(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_1913,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1916,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm:437: ##sys#print */
t3=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[32];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k1914 in k1911 in k1908 in k1905 in k1902 in k1896 in loop2 in loop in k2017 in k2008 in k996 in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_ccall f_1916(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_1916,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1919,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm:437: ##sys#print */
t3=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k1917 in k1914 in k1911 in k1908 in k1905 in k1902 in k1896 in loop2 in loop in k2017 in k2008 in k996 in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_ccall f_1919(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1919,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1922,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm:437: ##sys#write-char-0 */
t3=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(41);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k1920 in k1917 in k1914 in k1911 in k1908 in k1905 in k1902 in k1896 in loop2 in loop in k2017 in k2008 in k996 in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_ccall f_1922(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1922,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1925,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* scheduler.scm:437: chicken.base#get-output-string */
t3=*((C_word*)lf[23]+1);{
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

/* k1923 in k1920 in k1917 in k1914 in k1911 in k1908 in k1905 in k1902 in k1896 in loop2 in loop in k2017 in k2008 in k996 in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_ccall f_1925(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1925,c,av);}
t2=((C_word*)t0)[2];
f_2194(t2,C_halt(t1));}

/* ##sys#thread-block-for-i/o! in k911 in k908 */
static void C_ccall f_1943(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_1943,c,av);}
a=C_alloc(14);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1947,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1962,a[2]=t3,a[3]=t2,a[4]=t7,a[5]=((C_word)li30),tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_1962(t9,t5,*((C_word*)lf[6]+1));}

/* k1945 in ##sys#thread-block-for-i/o! in k911 in k908 */
static void C_ccall f_1947(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_1947,c,av);}
a=C_alloc(3);
t2=C_i_setslot(((C_word*)t0)[2],C_fix(3),lf[48]);
t3=C_i_set_i_slot(((C_word*)t0)[2],C_fix(13),C_SCHEME_FALSE);
t4=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_i_setslot(((C_word*)t0)[2],C_fix(11),t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* loop in ##sys#thread-block-for-i/o! in k911 in k908 */
static void C_fcall f_1962(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_1962,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
t3=C_a_i_list2(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,t3,*((C_word*)lf[6]+1));
t5=C_mutate((C_word*)lf[6]+1 /* (set! ##sys#fd-list ...) */,t4);
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t3=C_u_i_car(t2);
t4=C_u_i_car(t3);
t5=C_eqp(((C_word*)t0)[2],t4);
if(C_truep(t5)){
t6=C_u_i_cdr(t3);
t7=C_a_i_cons(&a,2,((C_word*)t0)[3],t6);
t8=t1;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_i_setslot(t3,C_fix(1),t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
/* scheduler.scm:450: loop */
t9=t1;
t10=C_u_i_cdr(t2);
t1=t9;
t2=t10;
goto loop;}}}

/* k2008 in k996 in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_ccall f_2010(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_2010,c,av);}
a=C_alloc(11);
t2=C_i_pairp(lf[5]);
t3=C_i_pairp(lf[17]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2019,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t5=(C_truep(t2)?C_i_not(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_u_i_caar(lf[5]);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2261,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2272,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* scheduler.scm:462: scheme#round */
t9=*((C_word*)lf[37]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
t6=t4;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_fix(0);
f_2019(2,av2);}}}

/* k2017 in k2008 in k996 in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_ccall f_2019(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_2019,c,av);}
a=C_alloc(9);
t2=(C_truep(((C_word*)t0)[2])?stub514(C_SCHEME_UNDEFINED,((C_word*)t0)[2],t1):stub514(C_SCHEME_UNDEFINED,((C_word*)t0)[3],t1));
t3=C_eqp(C_fix(-1),t2);
if(C_truep(t3)){
/* scheduler.scm:472: ##sys#force-primordial */
t4=*((C_word*)lf[19]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_fixnum_greaterp(t2,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2043,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2045,a[2]=t6,a[3]=((C_word)li4),tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_2045(t8,t4,t2,C_fix(0),*((C_word*)lf[6]+1));}
else{
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_1001(2,av2);}}}}

/* k2041 in k2017 in k2008 in k996 in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_ccall f_2043(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2043,c,av);}
t2=C_mutate((C_word*)lf[6]+1 /* (set! ##sys#fd-list ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_1001(2,av2);}}

/* loop in k2017 in k2008 in k996 in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_fcall f_2045(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(33,0,4)))){
C_save_and_reclaim_args((void *)trf_2045,5,t0,t1,t2,t3,t4);}
a=C_alloc(33);
t5=C_i_zerop(t2);
t6=(C_truep(t5)?t5:C_i_nullp(t4));
if(C_truep(t6)){
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t7=C_u_i_car(t4);
t8=C_u_i_car(t7);
t9=C_fd_input_ready(t8,t3);
t10=C_fd_output_ready(t8,t3);
t11=(C_truep(t9)?t9:t10);
if(C_truep(t11)){
t12=C_u_i_cdr(t7);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2072,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=t8,a[7]=t14,a[8]=t9,a[9]=t10,a[10]=((C_word)li3),tmp=(C_word)a,a+=11,tmp));
t16=((C_word*)t14)[1];
f_2072(t16,t1,t12,C_SCHEME_END_OF_LIST);}
else{
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2241,a[2]=t1,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t13=C_s_a_i_plus(&a,2,t3,C_fix(1));
/* scheduler.scm:513: loop */
t17=t12;
t18=t2;
t19=t13;
t20=C_u_i_cdr(t4);
t1=t17;
t2=t18;
t3=t19;
t4=t20;
goto loop;}}}

/* loop2 in loop in k2017 in k2008 in k996 in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_fcall f_2072(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(65,0,4)))){
C_save_and_reclaim_args((void *)trf_2072,4,t0,t1,t2,t3);}
a=C_alloc(65);
if(C_truep(C_i_nullp(t2))){
if(C_truep(C_i_nullp(t3))){
t4=C_s_a_i_minus(&a,2,((C_word*)t0)[2],C_fix(1));
t5=C_s_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
/* scheduler.scm:489: loop */
t6=((C_word*)((C_word*)t0)[4])[1];
f_2045(t6,t1,t4,t5,C_u_i_cdr(((C_word*)t0)[5]));}
else{
t4=C_a_i_cons(&a,2,((C_word*)t0)[6],t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2107,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_s_a_i_minus(&a,2,((C_word*)t0)[2],C_fix(1));
t7=C_s_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
/* scheduler.scm:491: loop */
t8=((C_word*)((C_word*)t0)[4])[1];
f_2045(t8,t5,t6,t7,C_u_i_cdr(((C_word*)t0)[5]));}}
else{
t4=C_u_i_car(t2);
t5=C_slot(t4,C_fix(11));
if(C_truep(C_slot(t4,C_fix(13)))){
/* scheduler.scm:497: loop2 */
t18=t1;
t19=C_u_i_cdr(t2);
t20=t3;
t1=t18;
t2=t19;
t3=t20;
goto loop;}
else{
t6=C_i_pairp(t5);
if(C_truep(C_i_not(t6))){
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2141,a[2]=((C_word*)t0)[7],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_slot(t4,C_fix(4)))){
/* scheduler.scm:502: ##sys#remove-from-timeout-list */
t8=*((C_word*)lf[21]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t8=t7;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_SCHEME_UNDEFINED;
f_2141(2,av2);}}}
else{
t7=C_u_i_car(t5);
t8=C_eqp(((C_word*)t0)[6],t7);
if(C_truep(C_i_not(t8))){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2165,a[2]=t1,a[3]=((C_word*)t0)[6],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm:506: chicken.base#open-output-string */
t10=*((C_word*)lf[28]+1);{
C_word av2[2];
av2[0]=t10;
av2[1]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2194,a[2]=((C_word*)t0)[7],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t10=C_u_i_cdr(t5);
t11=C_eqp(t10,C_SCHEME_TRUE);
t12=(C_truep(t11)?t11:C_eqp(t10,lf[29]));
if(C_truep(t12)){
t13=t9;
f_2194(t13,((C_word*)t0)[8]);}
else{
t13=C_eqp(t10,C_SCHEME_FALSE);
t14=(C_truep(t13)?t13:C_eqp(t10,lf[30]));
if(C_truep(t14)){
t15=t9;
f_2194(t15,((C_word*)t0)[9]);}
else{
t15=C_eqp(t10,lf[31]);
if(C_truep(t15)){
t16=t9;
f_2194(t16,(C_truep(((C_word*)t0)[8])?((C_word*)t0)[8]:((C_word*)t0)[9]));}
else{
t16=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1898,a[2]=t9,a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[8],a[5]=t10,tmp=(C_word)a,a+=6,tmp);
/* scheduler.scm:437: chicken.base#open-output-string */
t17=*((C_word*)lf[28]+1);{
C_word av2[2];
av2[0]=t17;
av2[1]=t16;
((C_proc)(void*)(*((C_word*)t17+1)))(2,av2);}}}}}}}}}

/* k2105 in loop2 in loop in k2017 in k2008 in k996 in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_ccall f_2107(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2107,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2139 in loop2 in loop in k2017 in k2008 in k996 in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_ccall f_2141(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2141,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2144,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* scheduler.scm:503: ##sys#thread-basic-unblock! */
t3=*((C_word*)lf[20]+1);{
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

/* k2142 in k2139 in loop2 in loop in k2017 in k2008 in k996 in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_ccall f_2144(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2144,c,av);}
/* scheduler.scm:504: loop2 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2072(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]),((C_word*)t0)[5]);}

/* k2163 in loop2 in loop in k2017 in k2008 in k996 in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_ccall f_2165(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2165,c,av);}
a=C_alloc(6);
t2=C_i_check_port_2(t1,C_fix(2),C_SCHEME_TRUE,lf[22]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2171,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* scheduler.scm:506: ##sys#print */
t4=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[27];
av2[3]=C_SCHEME_FALSE;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k2169 in k2163 in loop2 in loop in k2017 in k2008 in k996 in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_ccall f_2171(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_2171,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2174,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm:506: ##sys#print */
t3=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_u_i_car(((C_word*)t0)[5]);
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k2172 in k2169 in k2163 in loop2 in loop in k2017 in k2008 in k996 in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_ccall f_2174(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_2174,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2177,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm:506: ##sys#print */
t3=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[26];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k2175 in k2172 in k2169 in k2163 in loop2 in loop in k2017 in k2008 in k996 in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_ccall f_2177(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_2177,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2180,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm:506: ##sys#print */
t3=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k2178 in k2175 in k2172 in k2169 in k2163 in loop2 in loop in k2017 in k2008 in k996 in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_ccall f_2180(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2180,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2183,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm:506: ##sys#write-char-0 */
t3=*((C_word*)lf[24]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(41);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2181 in k2178 in k2175 in k2172 in k2169 in k2163 in loop2 in loop in k2017 in k2008 in k996 in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_ccall f_2183(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2183,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2186,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* scheduler.scm:506: chicken.base#get-output-string */
t3=*((C_word*)lf[23]+1);{
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

/* k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2163 in loop2 in loop in k2017 in k2008 in k996 in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_ccall f_2186(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2186,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_halt(t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2192 in loop2 in loop in k2017 in k2008 in k996 in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_fcall f_2194(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_2194,2,t0,t1);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2197,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_slot(((C_word*)t0)[6],C_fix(4)))){
/* scheduler.scm:509: ##sys#remove-from-timeout-list */
t3=*((C_word*)lf[21]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=t2;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_2197(2,av2);}}}
else{
t2=C_u_i_cdr(((C_word*)t0)[4]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)t0)[5]);
/* scheduler.scm:512: loop2 */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2072(t4,((C_word*)t0)[3],t2,t3);}}

/* k2195 in k2192 in loop2 in loop in k2017 in k2008 in k996 in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_ccall f_2197(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2197,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2200,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* scheduler.scm:510: ##sys#thread-basic-unblock! */
t3=*((C_word*)lf[20]+1);{
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

/* k2198 in k2195 in k2192 in loop2 in loop in k2017 in k2008 in k996 in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_ccall f_2200(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2200,c,av);}
/* scheduler.scm:511: loop2 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2072(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]),((C_word*)t0)[5]);}

/* k2239 in loop in k2017 in k2008 in k996 in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_ccall f_2241(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2241,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2259 in k2008 in k996 in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_ccall f_2261(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,c,3)))){
C_save_and_reclaim((void *)f_2261,c,av);}
a=C_alloc(36);
t2=C_a_i_current_process_milliseconds(&a,1,C_SCHEME_FALSE);
t3=C_s_a_i_minus(&a,2,t1,t2);
/* scheduler.scm:464: scheme#max */
t4=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(0);
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2270 in k2008 in k996 in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_ccall f_2272(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2272,c,av);}
/* scheduler.scm:462: scheme#inexact->exact */
t2=*((C_word*)lf[36]+1);{
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

/* ##sys#clear-i/o-state-for-thread! in k911 in k908 */
static void C_fcall f_2277(C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_2277,2,t1,t2);}
a=C_alloc(11);
t3=C_slot(t2,C_fix(11));
if(C_truep(C_i_pairp(t3))){
t4=C_slot(t2,C_fix(11));
t5=C_u_i_car(t4);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2291,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2293,a[2]=t5,a[3]=t2,a[4]=t8,a[5]=((C_word)li32),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_2293(t10,t6,*((C_word*)lf[6]+1));}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k2289 in ##sys#clear-i/o-state-for-thread! in k911 in k908 */
static void C_ccall f_2291(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2291,c,av);}
t2=C_mutate((C_word*)lf[6]+1 /* (set! ##sys#fd-list ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* loop in ##sys#clear-i/o-state-for-thread! in k911 in k908 */
static void C_fcall f_2293(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_2293,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_u_i_car(t2);
t4=C_u_i_car(t3);
t5=C_eqp(((C_word*)t0)[2],t4);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2315,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm:528: delq */
f_915(t6,((C_word*)t0)[3],C_u_i_cdr(t3));}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2334,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm:533: loop */
t8=t6;
t9=C_u_i_cdr(t2);
t1=t8;
t2=t9;
goto loop;}}}

/* k2313 in loop in ##sys#clear-i/o-state-for-thread! in k911 in k908 */
static void C_ccall f_2315(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2315,c,av);}
if(C_truep(C_i_nullp(t1))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_u_i_cdr(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_i_setslot(((C_word*)t0)[4],C_fix(1),t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k2332 in loop in ##sys#clear-i/o-state-for-thread! in k911 in k908 */
static void C_ccall f_2334(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2334,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* ##sys#all-threads in k911 in k908 */
static void C_ccall f_2346(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,6)))){
C_save_and_reclaim((void *)f_2346,c,av);}
a=C_alloc(10);
t2=C_rest_nullp(c,2);
t3=(C_truep(t2)?(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2481,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp):C_get_rest_arg(c,2,av,2,t0));
t4=C_rest_nullp(c,2);
t5=C_rest_nullp(c,3);
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:C_get_rest_arg(c,3,av,2,t0));
t7=C_rest_nullp(c,3);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2364,a[2]=t9,a[3]=t3,a[4]=((C_word)li38),tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_2364(t11,t1,lf[17],t6);}

/* loop in ##sys#all-threads in k911 in k908 */
static void C_fcall f_2364(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,5)))){
C_save_and_reclaim_args((void *)trf_2364,4,t0,t1,t2,t3);}
a=C_alloc(7);
if(C_truep(C_i_pairp(t2))){
t4=C_u_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2380,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm:546: cns */
t6=((C_word*)t0)[3];{
C_word av2[6];
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[8];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_u_i_car(t2);
av2[5]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(6,av2);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2387,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=((C_word)li37),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_2387(t7,t1,*((C_word*)lf[6]+1),t3);}}

/* k2378 in loop in ##sys#all-threads in k911 in k908 */
static void C_ccall f_2380(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2380,c,av);}
/* scheduler.scm:546: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2364(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* loop in loop in ##sys#all-threads in k911 in k908 */
static void C_fcall f_2387(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,0,4)))){
C_save_and_reclaim_args((void *)trf_2387,4,t0,t1,t2,t3);}
a=C_alloc(14);
if(C_truep(C_i_pairp(t2))){
t4=C_u_i_cdr(t2);
t5=C_u_i_caar(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2406,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t7=C_u_i_car(t2);
t8=C_u_i_cdr(t7);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2411,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=t10,a[6]=((C_word)li35),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_2411(t12,t6,t8);}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2436,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=((C_word)li36),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_2436(t7,t1,lf[5],t3);}}

/* k2404 in loop in loop in ##sys#all-threads in k911 in k908 */
static void C_ccall f_2406(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2406,c,av);}
/* scheduler.scm:549: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2387(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* loop in loop in loop in ##sys#all-threads in k911 in k908 */
static void C_fcall f_2411(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_2411,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2429,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* scheduler.scm:553: loop */
t6=t4;
t7=C_u_i_cdr(t2);
t1=t6;
t2=t7;
goto loop;}}

/* k2427 in loop in loop in loop in ##sys#all-threads in k911 in k908 */
static void C_ccall f_2429(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2429,c,av);}
/* scheduler.scm:553: cns */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[61];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
av2[5]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* loop in loop in loop in ##sys#all-threads in k911 in k908 */
static void C_fcall f_2436(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,5)))){
C_save_and_reclaim_args((void *)trf_2436,4,t0,t1,t2,t3);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t4=C_u_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2452,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=C_u_i_caar(t2);
t7=C_u_i_car(t2);
/* scheduler.scm:556: cns */
t8=((C_word*)t0)[3];{
C_word av2[6];
av2[0]=t8;
av2[1]=t5;
av2[2]=lf[62];
av2[3]=t6;
av2[4]=C_u_i_cdr(t7);
av2[5]=t3;
((C_proc)(void*)(*((C_word*)t8+1)))(6,av2);}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2450 in loop in loop in loop in ##sys#all-threads in k911 in k908 */
static void C_ccall f_2452(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2452,c,av);}
/* scheduler.scm:556: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2436(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* f_2481 in ##sys#all-threads in k911 in k908 */
static void C_ccall f_2481(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2481,c,av);}
a=C_alloc(3);
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_cons(&a,2,t4,t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* ##sys#fetch-and-clear-threads in k911 in k908 */
static void C_ccall f_2490(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_2490,c,av);}
a=C_alloc(5);
t2=C_a_i_vector4(&a,4,lf[17],lf[18],*((C_word*)lf[6]+1),lf[5]);
t3=lf[17] /* ready-queue-head */ =C_SCHEME_END_OF_LIST;;
t4=lf[18] /* ready-queue-tail */ =C_SCHEME_END_OF_LIST;;
t5=C_set_block_item(lf[6] /* ##sys#fd-list */,0,C_SCHEME_END_OF_LIST);
t6=lf[5] /* ##sys#timeout-list */ =C_SCHEME_END_OF_LIST;;
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* ##sys#restore-threads in k911 in k908 */
static void C_ccall f_2500(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2500,c,av);}
t3=C_slot(t2,C_fix(0));
t4=C_mutate(&lf[17] /* (set! ready-queue-head ...) */,t3);
t5=C_slot(t2,C_fix(1));
t6=C_mutate(&lf[18] /* (set! ready-queue-tail ...) */,t5);
t7=C_slot(t2,C_fix(2));
t8=C_mutate((C_word*)lf[6]+1 /* (set! ##sys#fd-list ...) */,t7);
t9=C_slot(t2,C_fix(3));
t10=C_mutate(&lf[5] /* (set! ##sys#timeout-list ...) */,t9);
t11=t1;{
C_word *av2=av;
av2[0]=t11;
av2[1]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}

/* ##sys#thread-unblock! in k911 in k908 */
static void C_ccall f_2519(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2519,c,av);}
a=C_alloc(4);
t3=C_slot(t2,C_fix(3));
t4=C_eqp(lf[48],t3);
t5=(C_truep(t4)?t4:C_eqp(lf[65],C_slot(t2,C_fix(3))));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2532,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm:585: ##sys#remove-from-timeout-list */
t7=*((C_word*)lf[21]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k2530 in ##sys#thread-unblock! in k911 in k908 */
static void C_ccall f_2532(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2532,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2535,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm:586: ##sys#clear-i/o-state-for-thread! */
f_2277(t2,((C_word*)t0)[3]);}

/* k2533 in k2530 in ##sys#thread-unblock! in k911 in k908 */
static void C_ccall f_2535(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2535,c,av);}
/* scheduler.scm:587: ##sys#thread-basic-unblock! */
t2=*((C_word*)lf[20]+1);{
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

/* ##sys#thread-sleep! in k911 in k908 */
static void C_ccall f_2551(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2551,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2557,a[2]=t2,a[3]=((C_word)li44),tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm:593: ##sys#call-with-current-continuation */{
C_word *av2=av;
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
C_call_cc(3,av2);}}

/* a2556 in ##sys#thread-sleep! in k911 in k908 */
static void C_ccall f_2557(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_2557,c,av);}
a=C_alloc(7);
t3=*((C_word*)lf[3]+1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2569,a[2]=t2,a[3]=((C_word)li43),tmp=(C_word)a,a+=4,tmp);
t5=C_i_setslot(*((C_word*)lf[3]+1),C_fix(1),t4);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2564,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* scheduler.scm:597: ##sys#thread-block-for-timeout! */
t7=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=*((C_word*)lf[3]+1);
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k2562 in a2556 in ##sys#thread-sleep! in k911 in k908 */
static void C_ccall f_2564(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2564,c,av);}
/* scheduler.scm:598: ##sys#schedule */
t2=*((C_word*)lf[2]+1);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a2568 in a2556 in ##sys#thread-sleep! in k911 in k908 */
static void C_ccall f_2569(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2569,c,av);}
/* scheduler.scm:596: return */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* chicken.base#sleep-hook in k911 in k908 */
static void C_ccall f_2575(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(69,c,2)))){
C_save_and_reclaim((void *)f_2575,c,av);}
a=C_alloc(69);
t3=C_s_a_i_times(&a,2,lf[68],t2);
t4=C_s_a_i_plus(&a,2,C_a_i_current_process_milliseconds(&a,1,C_SCHEME_FALSE),t3);
/* scheduler.scm:605: ##sys#thread-sleep! */
t5=*((C_word*)lf[66]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* ##sys#kill-other-threads in k911 in k908 */
static void C_ccall f_2589(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(31,c,2)))){
C_save_and_reclaim((void *)f_2589,c,av);}
a=C_alloc(31);
t3=*((C_word*)lf[3]+1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2592,a[2]=t3,a[3]=((C_word)li47),tmp=(C_word)a,a+=4,tmp);
t5=C_mutate((C_word*)lf[43]+1 /* (set! ##sys#primordial-thread ...) */,*((C_word*)lf[3]+1));
t6=C_a_i_list1(&a,1,*((C_word*)lf[3]+1));
t7=C_mutate(&lf[17] /* (set! ready-queue-head ...) */,t6);
t8=C_mutate(&lf[18] /* (set! ready-queue-tail ...) */,lf[17]);
t9=(
/* scheduler.scm:625: suspend */
  f_2592(t4,*((C_word*)lf[3]+1))
);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2618,a[2]=t4,a[3]=((C_word)li48),tmp=(C_word)a,a+=4,tmp);
t11=lf[5];
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2696,a[2]=t10,a[3]=((C_word)li49),tmp=(C_word)a,a+=4,tmp);
t13=(
  f_2696(t12,lf[5])
);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2639,a[2]=t4,a[3]=((C_word)li50),tmp=(C_word)a,a+=4,tmp);
t15=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2630,a[2]=t14,a[3]=((C_word)li51),tmp=(C_word)a,a+=4,tmp);
t16=*((C_word*)lf[6]+1);
t17=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2673,a[2]=t15,a[3]=((C_word)li52),tmp=(C_word)a,a+=4,tmp);
t18=(
  f_2673(t17,*((C_word*)lf[6]+1))
);
t19=lf[5] /* ##sys#timeout-list */ =C_SCHEME_END_OF_LIST;;
t20=C_set_block_item(lf[6] /* ##sys#fd-list */,0,C_SCHEME_END_OF_LIST);
t21=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2668,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm:630: thunk */
t22=t2;{
C_word *av2=av;
av2[0]=t22;
av2[1]=t21;
((C_proc)(void*)(*((C_word*)t22+1)))(2,av2);}}

/* suspend in ##sys#kill-other-threads in k911 in k908 */
static C_word C_fcall f_2592(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;{}
t2=C_eqp(t1,((C_word*)t0)[2]);
t3=(C_truep(t2)?C_SCHEME_UNDEFINED:C_i_setslot(t1,C_fix(3),lf[71]));
t4=C_i_set_i_slot(t1,C_fix(11),C_SCHEME_FALSE);
return(C_i_set_i_slot(t1,C_fix(12),C_SCHEME_END_OF_LIST));}

/* g651 in ##sys#kill-other-threads in k911 in k908 */
static C_word C_fcall f_2618(C_word t0,C_word t1){
C_word tmp;
C_word t2;{}
return((
/* scheduler.scm:626: suspend */
  f_2592(((C_word*)t0)[2],C_u_i_cdr(t1))
));}

/* g661 in ##sys#kill-other-threads in k911 in k908 */
static C_word C_fcall f_2630(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;{}
t2=C_u_i_cdr(t1);
return((
  f_2639(((C_word*)t0)[2],t2)
));}

/* for-each-loop683 in ##sys#kill-other-threads in k911 in k908 */
static C_word C_fcall f_2639(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
loop:{}
if(C_truep(C_i_pairp(t1))){
t2=(
/* scheduler.scm:627: g684 */
  f_2592(((C_word*)t0)[2],C_slot(t1,C_fix(0)))
);
t4=C_slot(t1,C_fix(1));
t1=t4;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* k2666 in ##sys#kill-other-threads in k911 in k908 */
static void C_ccall f_2668(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2668,c,av);}
/* scheduler.scm:631: exit */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* for-each-loop660 in ##sys#kill-other-threads in k911 in k908 */
static C_word C_fcall f_2673(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
loop:{}
if(C_truep(C_i_pairp(t1))){
t2=(
/* scheduler.scm:627: g661 */
  f_2630(((C_word*)t0)[2],C_slot(t1,C_fix(0)))
);
t4=C_slot(t1,C_fix(1));
t1=t4;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* for-each-loop650 in ##sys#kill-other-threads in k911 in k908 */
static C_word C_fcall f_2696(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
loop:{}
if(C_truep(C_i_pairp(t1))){
t2=(
/* scheduler.scm:626: g651 */
  f_2618(((C_word*)t0)[2],C_slot(t1,C_fix(0)))
);
t4=C_slot(t1,C_fix(1));
t1=t4;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* k908 */
static void C_ccall f_910(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_910,c,av);}
a=C_alloc(11);
t2=C_a_i_provide(&a,1,lf[0]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_913,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t3;
C_library_toplevel(2,av2);}}

/* k911 in k908 */
static void C_ccall f_913(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(68,c,5)))){
C_save_and_reclaim((void *)f_913,c,av);}
a=C_alloc(68);
t2=C_mutate(&lf[1] /* (set! delq ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_915,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[2]+1 /* (set! ##sys#schedule ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_958,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[19]+1 /* (set! ##sys#force-primordial ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1179,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t5=lf[17] /* ready-queue-head */ =C_SCHEME_END_OF_LIST;;
t6=lf[18] /* ready-queue-tail */ =C_SCHEME_END_OF_LIST;;
t7=C_mutate((C_word*)lf[45]+1 /* (set! ##sys#ready-queue ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1190,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[42]+1 /* (set! ##sys#add-to-ready-queue ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1193,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate(&lf[4] /* (set! ##sys#update-thread-state-buffer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1238,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t10=*((C_word*)lf[46]+1);
t11=C_mutate((C_word*)lf[46]+1 /* (set! ##sys#interrupt-hook ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1292,a[2]=t10,a[3]=((C_word)li16),tmp=(C_word)a,a+=4,tmp));
t12=lf[5] /* ##sys#timeout-list */ =C_SCHEME_END_OF_LIST;;
t13=C_mutate((C_word*)lf[21]+1 /* (set! ##sys#remove-from-timeout-list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1317,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[47]+1 /* (set! ##sys#thread-block-for-timeout! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1358,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[49]+1 /* (set! ##sys#thread-block-for-termination! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1427,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[52]+1 /* (set! ##sys#thread-kill! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1557,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[20]+1 /* (set! ##sys#thread-basic-unblock! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1671,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[55]+1 /* (set! ##sys#default-exception-handler ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1683,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t19=C_set_block_item(lf[6] /* ##sys#fd-list */,0,C_SCHEME_END_OF_LIST);
t20=C_mutate((C_word*)lf[59]+1 /* (set! ##sys#thread-block-for-i/o! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1943,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate(&lf[41] /* (set! ##sys#clear-i/o-state-for-thread! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2277,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[60]+1 /* (set! ##sys#all-threads ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2346,a[2]=((C_word)li39),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate((C_word*)lf[63]+1 /* (set! ##sys#fetch-and-clear-threads ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2490,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate((C_word*)lf[64]+1 /* (set! ##sys#restore-threads ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2500,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate((C_word*)lf[44]+1 /* (set! ##sys#thread-unblock! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2519,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp));
t26=C_mutate((C_word*)lf[66]+1 /* (set! ##sys#thread-sleep! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2551,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp));
t27=C_mutate((C_word*)lf[67]+1 /* (set! chicken.base#sleep-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2575,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp));
t28=*((C_word*)lf[69]+1);
t29=C_mutate((C_word*)lf[70]+1 /* (set! ##sys#kill-other-threads ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2589,a[2]=t28,a[3]=((C_word)li53),tmp=(C_word)a,a+=4,tmp));
t30=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t30;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t30+1)))(2,av2);}}

/* delq in k911 in k908 */
static void C_fcall f_915(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_915,3,t1,t2,t3);}
a=C_alloc(7);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_921,a[2]=t2,a[3]=t5,a[4]=((C_word)li0),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_921(t7,t1,t3);}

/* loop in delq in k911 in k908 */
static void C_fcall f_921(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_921,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_slot(t2,C_fix(0));
t4=C_eqp(((C_word*)t0)[2],t3);
if(C_truep(t4)){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_slot(t2,C_fix(0));
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_948,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm:162: loop */
t8=t6;
t9=C_slot(t2,C_fix(1));
t1=t8;
t2=t9;
goto loop;}}}

/* k946 in loop in delq in k911 in k908 */
static void C_ccall f_948(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_948,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* ##sys#schedule in k911 in k908 */
static void C_ccall f_958(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_958,c,av);}
a=C_alloc(7);
t2=*((C_word*)lf[3]+1);
t3=C_SCHEME_FALSE;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_slot(*((C_word*)lf[3]+1),C_fix(3));
t6=(
/* scheduler.scm:180: ##sys#update-thread-state-buffer */
  f_1238(*((C_word*)lf[3]+1))
);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_989,a[2]=t4,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t8=C_eqp(t5,lf[9]);
t9=(C_truep(t8)?t8:C_eqp(t5,lf[8]));
if(C_truep(t9)){
t10=C_i_set_i_slot(*((C_word*)lf[3]+1),C_fix(13),C_SCHEME_FALSE);
/* scheduler.scm:184: ##sys#add-to-ready-queue */
t11=*((C_word*)lf[42]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t11;
av2[1]=t7;
av2[2]=*((C_word*)lf[3]+1);
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}
else{
t10=t7;{
C_word *av2=av;
av2[0]=t10;
av2[1]=C_SCHEME_UNDEFINED;
f_989(2,av2);}}}

/* k987 in ##sys#schedule in k911 in k908 */
static void C_ccall f_989(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_989,c,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_994,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li9),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_994(t5,((C_word*)t0)[4]);}

/* loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_fcall f_994(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,0,3)))){
C_save_and_reclaim_args((void *)trf_994,2,t0,t1);}
a=C_alloc(21);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_998,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_nullp(lf[5]))){
t3=t2;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_998(2,av2);}}
else{
t3=C_a_i_current_process_milliseconds(&a,1,C_SCHEME_FALSE);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1070,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=((C_word)li8),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_1070(t7,t2,lf[5]);}}

/* k996 in loop1 in k987 in ##sys#schedule in k911 in k908 */
static void C_ccall f_998(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_998,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1001,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t3=(
/* scheduler.scm:223: ##sys#update-thread-state-buffer */
  f_1238(((C_word*)t0)[5])
);
/* scheduler.scm:224: ##sys#force-primordial */
t4=*((C_word*)lf[19]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_i_nullp(*((C_word*)lf[6]+1)))){
t3=C_SCHEME_UNDEFINED;
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
f_1001(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2010,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1864,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* scheduler.scm:401: ##sys#length */
t5=*((C_word*)lf[40]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=*((C_word*)lf[6]+1);
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_scheduler_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("scheduler"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_scheduler_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(396))){
C_save(t1);
C_rereclaim2(396*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,72);
lf[0]=C_h_intern(&lf[0],9, C_text("scheduler"));
lf[2]=C_h_intern(&lf[2],14, C_text("##sys#schedule"));
lf[3]=C_h_intern(&lf[3],20, C_text("##sys#current-thread"));
lf[6]=C_h_intern(&lf[6],13, C_text("##sys#fd-list"));
lf[7]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010deadlock"));
lf[8]=C_h_intern(&lf[8],5, C_text("ready"));
lf[9]=C_h_intern(&lf[9],7, C_text("running"));
lf[10]=C_h_intern(&lf[10],19, C_text("##sys#dynamic-winds"));
lf[11]=C_h_intern(&lf[11],20, C_text("##sys#standard-input"));
lf[12]=C_h_intern(&lf[12],21, C_text("##sys#standard-output"));
lf[13]=C_h_intern(&lf[13],20, C_text("##sys#standard-error"));
lf[14]=C_h_intern(&lf[14],31, C_text("##sys#current-exception-handler"));
lf[15]=C_h_intern(&lf[15],30, C_text("##sys#current-parameter-vector"));
lf[16]=C_h_intern(&lf[16],23, C_text("##sys#call-with-cthulhu"));
lf[19]=C_h_intern(&lf[19],22, C_text("##sys#force-primordial"));
lf[20]=C_h_intern(&lf[20],27, C_text("##sys#thread-basic-unblock!"));
lf[21]=C_h_intern(&lf[21],30, C_text("##sys#remove-from-timeout-list"));
lf[22]=C_h_intern(&lf[22],6, C_text("format"));
lf[23]=C_h_intern(&lf[23],30, C_text("chicken.base#get-output-string"));
lf[24]=C_h_intern(&lf[24],18, C_text("##sys#write-char-0"));
lf[25]=C_h_intern(&lf[25],11, C_text("##sys#print"));
lf[26]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013 (expected "));
lf[27]=C_decode_literal(C_heaptop,C_text("\376B\000\0009thread is registered for I/O on unknown file-descriptor: "));
lf[28]=C_h_intern(&lf[28],31, C_text("chicken.base#open-output-string"));
lf[29]=C_h_intern_kw(&lf[29],5, C_text("input"));
lf[30]=C_h_intern_kw(&lf[30],6, C_text("output"));
lf[31]=C_h_intern_kw(&lf[31],3, C_text("all"));
lf[32]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006, o = "));
lf[33]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006 (i = "));
lf[34]=C_decode_literal(C_heaptop,C_text("\376B\000\000#fdset-test: invalid i/o direction: "));
lf[35]=C_h_intern(&lf[35],10, C_text("scheme#max"));
lf[36]=C_h_intern(&lf[36],21, C_text("scheme#inexact->exact"));
lf[37]=C_h_intern(&lf[37],12, C_text("scheme#round"));
lf[38]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007 (fd = "));
lf[39]=C_decode_literal(C_heaptop,C_text("\376B\000\000%create-fdset: invalid i/o direction: "));
lf[40]=C_h_intern(&lf[40],12, C_text("##sys#length"));
lf[42]=C_h_intern(&lf[42],24, C_text("##sys#add-to-ready-queue"));
lf[43]=C_h_intern(&lf[43],23, C_text("##sys#primordial-thread"));
lf[44]=C_h_intern(&lf[44],21, C_text("##sys#thread-unblock!"));
lf[45]=C_h_intern(&lf[45],17, C_text("##sys#ready-queue"));
lf[46]=C_h_intern(&lf[46],20, C_text("##sys#interrupt-hook"));
lf[47]=C_h_intern(&lf[47],31, C_text("##sys#thread-block-for-timeout!"));
lf[48]=C_h_intern(&lf[48],7, C_text("blocked"));
lf[49]=C_h_intern(&lf[49],35, C_text("##sys#thread-block-for-termination!"));
lf[50]=C_h_intern(&lf[50],4, C_text("dead"));
lf[51]=C_h_intern(&lf[51],10, C_text("terminated"));
lf[52]=C_h_intern(&lf[52],18, C_text("##sys#thread-kill!"));
lf[53]=C_h_intern(&lf[53],18, C_text("condition-variable"));
lf[54]=C_h_intern(&lf[54],6, C_text("thread"));
lf[55]=C_h_intern(&lf[55],31, C_text("##sys#default-exception-handler"));
lf[56]=C_h_intern(&lf[56],24, C_text("chicken.condition#signal"));
lf[57]=C_h_intern(&lf[57],28, C_text("##sys#show-exception-warning"));
lf[58]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011in thread"));
lf[59]=C_h_intern(&lf[59],27, C_text("##sys#thread-block-for-i/o!"));
lf[60]=C_h_intern(&lf[60],17, C_text("##sys#all-threads"));
lf[61]=C_h_intern(&lf[61],3, C_text("i/o"));
lf[62]=C_h_intern(&lf[62],7, C_text("timeout"));
lf[63]=C_h_intern(&lf[63],29, C_text("##sys#fetch-and-clear-threads"));
lf[64]=C_h_intern(&lf[64],21, C_text("##sys#restore-threads"));
lf[65]=C_h_intern(&lf[65],8, C_text("sleeping"));
lf[66]=C_h_intern(&lf[66],19, C_text("##sys#thread-sleep!"));
lf[67]=C_h_intern(&lf[67],23, C_text("chicken.base#sleep-hook"));
lf[68]=C_decode_literal(C_heaptop,C_text("\376U1000.0\000"));
lf[69]=C_h_intern(&lf[69],17, C_text("chicken.base#exit"));
lf[70]=C_h_intern(&lf[70],24, C_text("##sys#kill-other-threads"));
lf[71]=C_h_intern(&lf[71],9, C_text("suspended"));
C_register_lf2(lf,72,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_910,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[134] = {
{C_text("f_1001:scheduler_2escm"),(void*)f_1001},
{C_text("f_1006:scheduler_2escm"),(void*)f_1006},
{C_text("f_1010:scheduler_2escm"),(void*)f_1010},
{C_text("f_1070:scheduler_2escm"),(void*)f_1070},
{C_text("f_1104:scheduler_2escm"),(void*)f_1104},
{C_text("f_1107:scheduler_2escm"),(void*)f_1107},
{C_text("f_1119:scheduler_2escm"),(void*)f_1119},
{C_text("f_1125:scheduler_2escm"),(void*)f_1125},
{C_text("f_1137:scheduler_2escm"),(void*)f_1137},
{C_text("f_1145:scheduler_2escm"),(void*)f_1145},
{C_text("f_1179:scheduler_2escm"),(void*)f_1179},
{C_text("f_1190:scheduler_2escm"),(void*)f_1190},
{C_text("f_1193:scheduler_2escm"),(void*)f_1193},
{C_text("f_1238:scheduler_2escm"),(void*)f_1238},
{C_text("f_1292:scheduler_2escm"),(void*)f_1292},
{C_text("f_1296:scheduler_2escm"),(void*)f_1296},
{C_text("f_1310:scheduler_2escm"),(void*)f_1310},
{C_text("f_1317:scheduler_2escm"),(void*)f_1317},
{C_text("f_1323:scheduler_2escm"),(void*)f_1323},
{C_text("f_1358:scheduler_2escm"),(void*)f_1358},
{C_text("f_1368:scheduler_2escm"),(void*)f_1368},
{C_text("f_1379:scheduler_2escm"),(void*)f_1379},
{C_text("f_1427:scheduler_2escm"),(void*)f_1427},
{C_text("f_1492:scheduler_2escm"),(void*)f_1492},
{C_text("f_1508:scheduler_2escm"),(void*)f_1508},
{C_text("f_1518:scheduler_2escm"),(void*)f_1518},
{C_text("f_1534:scheduler_2escm"),(void*)f_1534},
{C_text("f_1557:scheduler_2escm"),(void*)f_1557},
{C_text("f_1561:scheduler_2escm"),(void*)f_1561},
{C_text("f_1567:scheduler_2escm"),(void*)f_1567},
{C_text("f_1570:scheduler_2escm"),(void*)f_1570},
{C_text("f_1573:scheduler_2escm"),(void*)f_1573},
{C_text("f_1591:scheduler_2escm"),(void*)f_1591},
{C_text("f_1598:scheduler_2escm"),(void*)f_1598},
{C_text("f_1617:scheduler_2escm"),(void*)f_1617},
{C_text("f_1627:scheduler_2escm"),(void*)f_1627},
{C_text("f_1648:scheduler_2escm"),(void*)f_1648},
{C_text("f_1665:scheduler_2escm"),(void*)f_1665},
{C_text("f_1671:scheduler_2escm"),(void*)f_1671},
{C_text("f_1683:scheduler_2escm"),(void*)f_1683},
{C_text("f_1687:scheduler_2escm"),(void*)f_1687},
{C_text("f_1693:scheduler_2escm"),(void*)f_1693},
{C_text("f_1707:scheduler_2escm"),(void*)f_1707},
{C_text("f_1711:scheduler_2escm"),(void*)f_1711},
{C_text("f_1731:scheduler_2escm"),(void*)f_1731},
{C_text("f_1742:scheduler_2escm"),(void*)f_1742},
{C_text("f_1785:scheduler_2escm"),(void*)f_1785},
{C_text("f_1791:scheduler_2escm"),(void*)f_1791},
{C_text("f_1794:scheduler_2escm"),(void*)f_1794},
{C_text("f_1797:scheduler_2escm"),(void*)f_1797},
{C_text("f_1800:scheduler_2escm"),(void*)f_1800},
{C_text("f_1803:scheduler_2escm"),(void*)f_1803},
{C_text("f_1806:scheduler_2escm"),(void*)f_1806},
{C_text("f_1827:scheduler_2escm"),(void*)f_1827},
{C_text("f_1839:scheduler_2escm"),(void*)f_1839},
{C_text("f_1849:scheduler_2escm"),(void*)f_1849},
{C_text("f_1864:scheduler_2escm"),(void*)f_1864},
{C_text("f_1898:scheduler_2escm"),(void*)f_1898},
{C_text("f_1904:scheduler_2escm"),(void*)f_1904},
{C_text("f_1907:scheduler_2escm"),(void*)f_1907},
{C_text("f_1910:scheduler_2escm"),(void*)f_1910},
{C_text("f_1913:scheduler_2escm"),(void*)f_1913},
{C_text("f_1916:scheduler_2escm"),(void*)f_1916},
{C_text("f_1919:scheduler_2escm"),(void*)f_1919},
{C_text("f_1922:scheduler_2escm"),(void*)f_1922},
{C_text("f_1925:scheduler_2escm"),(void*)f_1925},
{C_text("f_1943:scheduler_2escm"),(void*)f_1943},
{C_text("f_1947:scheduler_2escm"),(void*)f_1947},
{C_text("f_1962:scheduler_2escm"),(void*)f_1962},
{C_text("f_2010:scheduler_2escm"),(void*)f_2010},
{C_text("f_2019:scheduler_2escm"),(void*)f_2019},
{C_text("f_2043:scheduler_2escm"),(void*)f_2043},
{C_text("f_2045:scheduler_2escm"),(void*)f_2045},
{C_text("f_2072:scheduler_2escm"),(void*)f_2072},
{C_text("f_2107:scheduler_2escm"),(void*)f_2107},
{C_text("f_2141:scheduler_2escm"),(void*)f_2141},
{C_text("f_2144:scheduler_2escm"),(void*)f_2144},
{C_text("f_2165:scheduler_2escm"),(void*)f_2165},
{C_text("f_2171:scheduler_2escm"),(void*)f_2171},
{C_text("f_2174:scheduler_2escm"),(void*)f_2174},
{C_text("f_2177:scheduler_2escm"),(void*)f_2177},
{C_text("f_2180:scheduler_2escm"),(void*)f_2180},
{C_text("f_2183:scheduler_2escm"),(void*)f_2183},
{C_text("f_2186:scheduler_2escm"),(void*)f_2186},
{C_text("f_2194:scheduler_2escm"),(void*)f_2194},
{C_text("f_2197:scheduler_2escm"),(void*)f_2197},
{C_text("f_2200:scheduler_2escm"),(void*)f_2200},
{C_text("f_2241:scheduler_2escm"),(void*)f_2241},
{C_text("f_2261:scheduler_2escm"),(void*)f_2261},
{C_text("f_2272:scheduler_2escm"),(void*)f_2272},
{C_text("f_2277:scheduler_2escm"),(void*)f_2277},
{C_text("f_2291:scheduler_2escm"),(void*)f_2291},
{C_text("f_2293:scheduler_2escm"),(void*)f_2293},
{C_text("f_2315:scheduler_2escm"),(void*)f_2315},
{C_text("f_2334:scheduler_2escm"),(void*)f_2334},
{C_text("f_2346:scheduler_2escm"),(void*)f_2346},
{C_text("f_2364:scheduler_2escm"),(void*)f_2364},
{C_text("f_2380:scheduler_2escm"),(void*)f_2380},
{C_text("f_2387:scheduler_2escm"),(void*)f_2387},
{C_text("f_2406:scheduler_2escm"),(void*)f_2406},
{C_text("f_2411:scheduler_2escm"),(void*)f_2411},
{C_text("f_2429:scheduler_2escm"),(void*)f_2429},
{C_text("f_2436:scheduler_2escm"),(void*)f_2436},
{C_text("f_2452:scheduler_2escm"),(void*)f_2452},
{C_text("f_2481:scheduler_2escm"),(void*)f_2481},
{C_text("f_2490:scheduler_2escm"),(void*)f_2490},
{C_text("f_2500:scheduler_2escm"),(void*)f_2500},
{C_text("f_2519:scheduler_2escm"),(void*)f_2519},
{C_text("f_2532:scheduler_2escm"),(void*)f_2532},
{C_text("f_2535:scheduler_2escm"),(void*)f_2535},
{C_text("f_2551:scheduler_2escm"),(void*)f_2551},
{C_text("f_2557:scheduler_2escm"),(void*)f_2557},
{C_text("f_2564:scheduler_2escm"),(void*)f_2564},
{C_text("f_2569:scheduler_2escm"),(void*)f_2569},
{C_text("f_2575:scheduler_2escm"),(void*)f_2575},
{C_text("f_2589:scheduler_2escm"),(void*)f_2589},
{C_text("f_2592:scheduler_2escm"),(void*)f_2592},
{C_text("f_2618:scheduler_2escm"),(void*)f_2618},
{C_text("f_2630:scheduler_2escm"),(void*)f_2630},
{C_text("f_2639:scheduler_2escm"),(void*)f_2639},
{C_text("f_2668:scheduler_2escm"),(void*)f_2668},
{C_text("f_2673:scheduler_2escm"),(void*)f_2673},
{C_text("f_2696:scheduler_2escm"),(void*)f_2696},
{C_text("f_910:scheduler_2escm"),(void*)f_910},
{C_text("f_913:scheduler_2escm"),(void*)f_913},
{C_text("f_915:scheduler_2escm"),(void*)f_915},
{C_text("f_921:scheduler_2escm"),(void*)f_921},
{C_text("f_948:scheduler_2escm"),(void*)f_948},
{C_text("f_958:scheduler_2escm"),(void*)f_958},
{C_text("f_989:scheduler_2escm"),(void*)f_989},
{C_text("f_994:scheduler_2escm"),(void*)f_994},
{C_text("f_998:scheduler_2escm"),(void*)f_998},
{C_text("toplevel:scheduler_2escm"),(void*)C_scheduler_toplevel},
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
S|  chicken.format#sprintf		3
S|  scheme#for-each		6
S|  ##sys#for-each		1
o|eliminated procedure checks: 137 
o|specializations:
o|  3 (chicken.base#add1 *)
o|  2 (chicken.base#sub1 *)
o|  1 (scheme#zero? *)
o|  3 (##sys#check-output-port * * *)
o|  10 (scheme#eqv? * (or eof null fixnum char boolean symbol keyword))
o|  3 (scheme#car pair)
o|  20 (scheme#cdr pair)
o|  4 (scheme#cdar (pair pair *))
(o e)|safe calls: 249 
(o e)|assignments to immediate values: 12 
o|inlining procedure: k923 
o|inlining procedure: k923 
o|inlining procedure: k1011 
o|inlining procedure: k1011 
o|contracted procedure: "(scheduler.scm:234) switch166" 
o|contracted procedure: "(scheduler.scm:170) ##sys#restore-thread-state-buffer" 
o|contracted procedure: "(scheduler.scm:229) remove-from-ready-queue" 
o|inlining procedure: k1215 
o|inlining procedure: k1215 
o|propagated global variable: first-pair227 ready-queue-head 
o|inlining procedure: k1054 
o|inlining procedure: k1054 
o|contracted procedure: "(scheduler.scm:226) ##sys#unblock-threads-for-i/o" 
o|inlining procedure: k2025 
o|inlining procedure: k2025 
o|inlining procedure: k2047 
o|inlining procedure: k2047 
o|inlining procedure: k2074 
o|inlining procedure: k2074 
o|inlining procedure: k2133 
o|inlining procedure: k2133 
o|substituted constant variable: a2167 
o|substituted constant variable: a2168 
o|inlining procedure: k2189 
o|inlining procedure: k2189 
o|contracted procedure: "(scheduler.scm:507) fdset-test" 
o|inlining procedure: k1868 
o|inlining procedure: k1868 
o|inlining procedure: k1886 
o|substituted constant variable: a1900 
o|substituted constant variable: a1901 
o|inlining procedure: k1886 
o|substituted constant variable: a1927 
o|substituted constant variable: a1932 
o|substituted constant variable: a1934 
o|substituted constant variable: a1939 
o|substituted constant variable: a1941 
o|contracted procedure: "(scheduler.scm:467) g510511" 
o|contracted procedure: "(scheduler.scm:457) create-fdset" 
o|inlining procedure: k1733 
o|inlining procedure: k1747 
o|inlining procedure: k1764 
o|inlining procedure: k1764 
o|substituted constant variable: a1787 
o|substituted constant variable: a1788 
o|substituted constant variable: a1808 
o|substituted constant variable: a1813 
o|substituted constant variable: a1815 
o|substituted constant variable: a1820 
o|substituted constant variable: a1822 
o|inlining procedure: k1747 
o|inlining procedure: k1733 
o|contracted procedure: "(scheduler.scm:404) g441442" 
o|inlining procedure: k1841 
o|inlining procedure: k1841 
o|contracted procedure: "(scheduler.scm:400) g384385" 
o|inlining procedure: k1072 
o|inlining procedure: k1072 
o|inlining procedure: k1093 
o|inlining procedure: k1093 
o|inlining procedure: k1127 
o|inlining procedure: k1127 
o|inlining procedure: k1149 
o|inlining procedure: k1149 
o|propagated global variable: ct172 ##sys#current-thread 
o|inlining procedure: k1201 
o|inlining procedure: k1201 
o|inlining procedure: k1294 
o|propagated global variable: ct251 ##sys#current-thread 
o|inlining procedure: k1294 
o|inlining procedure: k1325 
o|inlining procedure: k1325 
o|inlining procedure: k1343 
o|inlining procedure: k1343 
o|inlining procedure: k1360 
o|inlining procedure: k1381 
o|inlining procedure: k1381 
o|inlining procedure: k1360 
o|inlining procedure: k1432 
o|inlining procedure: k1432 
o|inlining procedure: k1589 
o|inlining procedure: k1600 
o|inlining procedure: k1600 
o|inlining procedure: k1589 
o|inlining procedure: k1619 
o|inlining procedure: k1619 
o|inlining procedure: k1653 
o|inlining procedure: k1653 
o|contracted procedure: "(scheduler.scm:347) ##sys#abandon-mutexes" 
o|inlining procedure: k1470 
o|inlining procedure: k1470 
o|inlining procedure: k1536 
o|contracted procedure: "(scheduler.scm:330) g292299" 
o|inlining procedure: k1490 
o|inlining procedure: k1490 
o|inlining procedure: k1510 
o|contracted procedure: "(scheduler.scm:337) g306313" 
o|inlining procedure: k1510 
o|inlining procedure: k1536 
o|propagated global variable: pt375 ##sys#primordial-thread 
o|inlining procedure: k1964 
o|inlining procedure: k1964 
o|inlining procedure: k2279 
o|inlining procedure: k2295 
o|inlining procedure: k2295 
o|inlining procedure: k2316 
o|inlining procedure: k2316 
o|inlining procedure: k2279 
o|inlining procedure: k2366 
o|inlining procedure: k2366 
o|inlining procedure: k2389 
o|inlining procedure: k2413 
o|inlining procedure: k2413 
o|inlining procedure: k2389 
o|inlining procedure: k2438 
o|inlining procedure: k2438 
o|inlining procedure: k2521 
o|inlining procedure: k2521 
o|propagated global variable: ct640 ##sys#current-thread 
o|propagated global variable: primordial646 ##sys#current-thread 
o|inlining procedure: k2641 
o|inlining procedure: k2641 
o|inlining procedure: k2675 
o|inlining procedure: k2675 
o|propagated global variable: g667679 ##sys#fd-list 
o|inlining procedure: k2698 
o|inlining procedure: k2698 
o|propagated global variable: g657672 ##sys#timeout-list 
o|propagated global variable: primordial646 ##sys#current-thread 
o|replaced variables: 442 
o|removed binding forms: 184 
o|inlining procedure: k1225 
o|inlining procedure: k1225 
o|substituted constant variable: r12162723 
o|inlining procedure: k2250 
o|inlining procedure: k2250 
o|substituted constant variable: r11282754 
o|substituted constant variable: r11502757 
o|substituted constant variable: r22962819 
o|converted assignments to bindings: (suspend647) 
o|simplifications: ((let . 1)) 
o|replaced variables: 69 
o|removed binding forms: 371 
o|inlining procedure: k1020 
o|inlining procedure: k1830 
o|replaced variables: 8 
o|removed binding forms: 52 
o|substituted constant variable: r10212937 
o|contracted procedure: k967 
o|contracted procedure: k1724 
o|removed binding forms: 11 
o|removed conditional forms: 1 
o|removed binding forms: 2 
o|simplifications: ((if . 17) (let . 19) (##core#call . 242)) 
o|  call simplifications:
o|    scheme#*
o|    scheme#+
o|    ##sys#call-with-current-continuation
o|    scheme#vector
o|    scheme#list	2
o|    ##sys#structure?	2
o|    scheme#>
o|    scheme#<
o|    chicken.fixnum#fx=	2
o|    scheme#set-cdr!	3
o|    scheme#equal?
o|    scheme#>=
o|    ##sys#setislot	18
o|    scheme#caar	7
o|    scheme#-	2
o|    chicken.fixnum#fx>
o|    scheme#pair?	16
o|    scheme#car	12
o|    scheme#cdr	8
o|    scheme#not	6
o|    ##sys#setslot	30
o|    scheme#null?	26
o|    scheme#eq?	26
o|    scheme#cons	16
o|    ##sys#slot	57
o|contracted procedure: k926 
o|contracted procedure: k954 
o|contracted procedure: k932 
o|contracted procedure: k942 
o|contracted procedure: k950 
o|contracted procedure: k981 
o|contracted procedure: k1014 
o|contracted procedure: k1026 
o|contracted procedure: k1020 
o|contracted procedure: k1045 
o|contracted procedure: k1035 
o|contracted procedure: k964 
o|contracted procedure: k1264 
o|contracted procedure: k1268 
o|contracted procedure: k1272 
o|contracted procedure: k1276 
o|contracted procedure: k1280 
o|contracted procedure: k1284 
o|contracted procedure: k1288 
o|contracted procedure: k971 
o|contracted procedure: k978 
o|contracted procedure: k1234 
o|contracted procedure: k1218 
o|contracted procedure: k1221 
o|propagated global variable: first-pair227 ready-queue-head 
o|contracted procedure: k1229 
o|contracted procedure: k1057 
o|contracted procedure: k2011 
o|contracted procedure: k2014 
o|contracted procedure: k2022 
o|contracted procedure: k2028 
o|contracted procedure: k2037 
o|contracted procedure: k2051 
o|contracted procedure: k2054 
o|contracted procedure: k2057 
o|contracted procedure: k2063 
o|contracted procedure: k2077 
o|contracted procedure: k2083 
o|contracted procedure: k2094 
o|contracted procedure: k2101 
o|contracted procedure: k2113 
o|contracted procedure: k2116 
o|contracted procedure: k2119 
o|contracted procedure: k2125 
o|contracted procedure: k2232 
o|contracted procedure: k2136 
o|contracted procedure: k2150 
o|contracted procedure: k2228 
o|contracted procedure: k2224 
o|contracted procedure: k2159 
o|contracted procedure: k2206 
o|contracted procedure: k2218 
o|contracted procedure: k1871 
o|contracted procedure: k1874 
o|contracted procedure: k1880 
o|contracted procedure: k1883 
o|contracted procedure: k1889 
o|contracted procedure: k2253 
o|contracted procedure: k2256 
o|contracted procedure: k2266 
o|contracted procedure: k1736 
o|contracted procedure: k1739 
o|contracted procedure: k1744 
o|contracted procedure: k1750 
o|contracted procedure: k1757 
o|contracted procedure: k1760 
o|contracted procedure: k1767 
o|contracted procedure: k1770 
o|contracted procedure: k1777 
o|contracted procedure: k1844 
o|contracted procedure: k1854 
o|contracted procedure: k1858 
o|contracted procedure: k1063 
o|contracted procedure: k1075 
o|contracted procedure: k1079 
o|contracted procedure: k1084 
o|contracted procedure: k1090 
o|contracted procedure: k1096 
o|contracted procedure: k1099 
o|contracted procedure: k1120 
o|contracted procedure: k1130 
o|contracted procedure: k1139 
o|contracted procedure: k1146 
o|contracted procedure: k1152 
o|contracted procedure: k1163 
o|contracted procedure: k1166 
o|contracted procedure: k1169 
o|propagated global variable: ct172 ##sys#current-thread 
o|contracted procedure: k1181 
o|contracted procedure: k1195 
o|contracted procedure: k1198 
o|contracted procedure: k1205 
o|contracted procedure: k1201 
o|contracted procedure: k1240 
o|contracted procedure: k1243 
o|contracted procedure: k1246 
o|contracted procedure: k1249 
o|contracted procedure: k1252 
o|contracted procedure: k1255 
o|contracted procedure: k1300 
o|contracted procedure: k1303 
o|contracted procedure: k1328 
o|contracted procedure: k1331 
o|contracted procedure: k1334 
o|contracted procedure: k1354 
o|contracted procedure: k1340 
o|contracted procedure: k1363 
o|contracted procedure: k1369 
o|contracted procedure: k1372 
o|contracted procedure: k1384 
o|contracted procedure: k1401 
o|contracted procedure: k1397 
o|contracted procedure: k1409 
o|contracted procedure: k1405 
o|contracted procedure: k1416 
o|contracted procedure: k1423 
o|contracted procedure: k1429 
o|contracted procedure: k1435 
o|contracted procedure: k1438 
o|contracted procedure: k1458 
o|contracted procedure: k1454 
o|contracted procedure: k1441 
o|contracted procedure: k1444 
o|contracted procedure: k1447 
o|contracted procedure: k1562 
o|contracted procedure: k1574 
o|contracted procedure: k1577 
o|contracted procedure: k1580 
o|contracted procedure: k1583 
o|contracted procedure: k1586 
o|contracted procedure: k1595 
o|contracted procedure: k1610 
o|contracted procedure: k1603 
o|contracted procedure: k1622 
o|contracted procedure: k1632 
o|contracted procedure: k1636 
o|contracted procedure: k1639 
o|contracted procedure: k1650 
o|contracted procedure: k1656 
o|contracted procedure: k1667 
o|contracted procedure: k1467 
o|contracted procedure: k1473 
o|contracted procedure: k1539 
o|contracted procedure: k1549 
o|contracted procedure: k1553 
o|contracted procedure: k1478 
o|contracted procedure: k1481 
o|contracted procedure: k1484 
o|contracted procedure: k1487 
o|contracted procedure: k1496 
o|contracted procedure: k1513 
o|contracted procedure: k1523 
o|contracted procedure: k1527 
o|contracted procedure: k1673 
o|contracted procedure: k1676 
o|contracted procedure: k1688 
o|contracted procedure: k1697 
o|contracted procedure: k1700 
o|propagated global variable: pt375 ##sys#primordial-thread 
o|propagated global variable: pt375 ##sys#primordial-thread 
o|contracted procedure: k1948 
o|contracted procedure: k1951 
o|contracted procedure: k1958 
o|contracted procedure: k1967 
o|contracted procedure: k1975 
o|contracted procedure: k1971 
o|contracted procedure: k1978 
o|contracted procedure: k2002 
o|contracted procedure: k1984 
o|contracted procedure: k1991 
o|contracted procedure: k2342 
o|contracted procedure: k2282 
o|contracted procedure: k2338 
o|contracted procedure: k2285 
o|contracted procedure: k2298 
o|contracted procedure: k2301 
o|contracted procedure: k2304 
o|contracted procedure: k2310 
o|contracted procedure: k2319 
o|contracted procedure: k2323 
o|contracted procedure: k2478 
o|contracted procedure: k2348 
o|contracted procedure: k2472 
o|contracted procedure: k2351 
o|contracted procedure: k2466 
o|contracted procedure: k2354 
o|contracted procedure: k2460 
o|contracted procedure: k2357 
o|contracted procedure: k2369 
o|contracted procedure: k2392 
o|contracted procedure: k2401 
o|contracted procedure: k2416 
o|contracted procedure: k2423 
o|contracted procedure: k2441 
o|contracted procedure: k2454 
o|contracted procedure: k2492 
o|contracted procedure: k2503 
o|contracted procedure: k2507 
o|contracted procedure: k2511 
o|contracted procedure: k2515 
o|contracted procedure: k2547 
o|contracted procedure: k2524 
o|contracted procedure: k2543 
o|contracted procedure: k2559 
o|propagated global variable: ct640 ##sys#current-thread 
o|contracted procedure: k2585 
o|contracted procedure: k2581 
o|contracted procedure: k2603 
o|contracted procedure: k2594 
o|contracted procedure: k2597 
o|contracted procedure: k2611 
o|contracted procedure: k2624 
o|contracted procedure: k2632 
o|contracted procedure: k2644 
o|contracted procedure: k2654 
o|contracted procedure: k2658 
o|contracted procedure: k2678 
o|contracted procedure: k2688 
o|contracted procedure: k2692 
o|contracted procedure: k2701 
o|contracted procedure: k2711 
o|contracted procedure: k2715 
o|propagated global variable: primordial646 ##sys#current-thread 
o|simplifications: ((if . 2) (let . 67)) 
o|removed binding forms: 217 
o|contracted procedure: k1387 
o|inlining procedure: k1542 
o|inlining procedure: k1542 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest587588 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest587588 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest587588 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest587588 0 
o|contracted procedure: k2527 
o|removed binding forms: 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2352 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r2352 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2352 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r2352 1 
o|removed binding forms: 1 
o|removed binding forms: 2 
o|direct leaf routine/allocation: ##sys#update-thread-state-buffer 0 
o|direct leaf routine/allocation: loop257 0 
o|direct leaf routine/allocation: suspend647 0 
o|direct leaf routine/allocation: g651671 0 
o|contracted procedure: "(scheduler.scm:180) k984" 
o|contracted procedure: "(scheduler.scm:223) k1048" 
o|propagated global variable: ct172 ##sys#current-thread 
o|propagated global variable: ct172 ##sys#current-thread 
o|converted assignments to bindings: (loop257) 
o|contracted procedure: "(scheduler.scm:625) k2615" 
o|contracted procedure: "(scheduler.scm:627) k2647" 
o|contracted procedure: "(scheduler.scm:626) k2704" 
o|simplifications: ((let . 1)) 
o|removed binding forms: 5 
o|direct leaf routine/allocation: for-each-loop683693 0 
o|direct leaf routine/allocation: for-each-loop650674 0 
o|contracted procedure: k2627 
o|converted assignments to bindings: (for-each-loop683693) 
o|converted assignments to bindings: (for-each-loop650674) 
o|simplifications: ((let . 2)) 
o|removed binding forms: 1 
o|direct leaf routine with hoistable closures/allocation: g661678 (for-each-loop683693) 0 
o|contracted procedure: "(scheduler.scm:627) k2681" 
o|removed binding forms: 2 
o|direct leaf routine/allocation: for-each-loop660697 0 
o|contracted procedure: k2661 
o|converted assignments to bindings: (for-each-loop660697) 
o|simplifications: ((let . 1)) 
o|removed binding forms: 1 
o|customizable procedures: (loop613 loop610 loop606 loop603 loop572 loop494 for-each-loop305316 for-each-loop291324 delq k1565 g340347 for-each-loop339350 loop266 k1117 ##sys#clear-i/o-state-for-thread! loop181 g398405 for-each-loop397437 loop390 k2192 loop2539 loop525 k1008 loop2198 loop1179 loop158) 
o|calls to known targets: 73 
o|identified direct recursive calls: f_921 1 
o|identified direct recursive calls: f_2072 1 
o|identified direct recursive calls: f_2045 1 
o|identified direct recursive calls: f_1070 1 
o|identified direct recursive calls: f_1323 1 
o|identified direct recursive calls: f_1379 1 
o|identified direct recursive calls: f_1534 1 
o|identified direct recursive calls: f_1962 1 
o|identified direct recursive calls: f_2293 1 
o|identified direct recursive calls: f_2411 1 
o|unused rest argument: rest587588 f_2346 
o|identified direct recursive calls: f_2696 1 
o|identified direct recursive calls: f_2639 1 
o|identified direct recursive calls: f_2673 1 
o|fast box initializations: 18 
o|fast global references: 33 
o|fast global assignments: 24 
o|dropping unused closure argument: f_1238 
o|dropping unused closure argument: f_2277 
o|dropping unused closure argument: f_915 
*/
/* end of file */
