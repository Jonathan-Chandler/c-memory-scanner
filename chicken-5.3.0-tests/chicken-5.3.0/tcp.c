/* Generated from tcp.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.3.0rc4 ((HEAD detached at 5.3.0rc4)) (rev b6cbb1ba)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: tcp.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file tcp.c -emit-import-library chicken.tcp
   unit: tcp
   uses: scheduler port library
*/
#include "chicken.h"

#ifdef _WIN32
# include <winsock2.h>
# include <ws2tcpip.h>
/* Beware: winsock2.h must come BEFORE windows.h */
# define socklen_t	 int
static WSADATA wsa;
# ifndef SHUT_RD
#  define SHUT_RD	  SD_RECEIVE
# endif
# ifndef SHUT_WR
#  define SHUT_WR	  SD_SEND
# endif

# define typecorrect_getsockopt(socket, level, optname, optval, optlen)	\
    getsockopt(socket, level, optname, (char *)optval, optlen)

static C_word make_socket_nonblocking (C_word sock) {
  int fd = C_unfix(sock);
  C_return(C_mk_bool(ioctlsocket(fd, FIONBIO, (void *)&fd) != SOCKET_ERROR)) ;
}

/* This is a bit of a hack, but it keeps things simple */
static C_TLS char *last_wsa_errorstring = NULL;

static char *errormsg_from_code(int code) {
  int bufsize;
  if (last_wsa_errorstring != NULL) {
    LocalFree(last_wsa_errorstring);
    last_wsa_errorstring = NULL;
  }
  bufsize = FormatMessage(
	FORMAT_MESSAGE_ALLOCATE_BUFFER |
	FORMAT_MESSAGE_FROM_SYSTEM |
	FORMAT_MESSAGE_IGNORE_INSERTS,
	NULL, code, MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
	(LPTSTR) &last_wsa_errorstring, 0, NULL);
  if (bufsize == 0) return "ERROR WHILE FETCHING ERROR";
  return last_wsa_errorstring;
}

# define get_last_socket_error()  WSAGetLastError()
# define should_retry_call()      (WSAGetLastError() == WSAEWOULDBLOCK)
/* Not EINPROGRESS in winsock.  Nonblocking connect returns EWOULDBLOCK... */
# define call_in_progress()       (WSAGetLastError() == WSAEWOULDBLOCK)
# define call_was_interrupted()   (WSAGetLastError() == WSAEINTR) /* ? */

#else
# include <errno.h>
# include <fcntl.h>
# include <sys/socket.h>
# include <sys/time.h>
# include <netinet/in.h>
# include <netdb.h>
# include <signal.h>
# define closesocket     close
# define INVALID_SOCKET  -1
# define SOCKET_ERROR    -1
# define typecorrect_getsockopt getsockopt

static C_word make_socket_nonblocking (C_word sock) {
  int fd = C_unfix(sock);
  int val = fcntl(fd, F_GETFL, 0);
  if(val == -1) C_return(C_SCHEME_FALSE);
  C_return(C_mk_bool(fcntl(fd, F_SETFL, val | O_NONBLOCK) != -1));
}

# define get_last_socket_error()  errno
# define errormsg_from_code(e)    strerror(e)

# define should_retry_call()      (errno == EAGAIN || errno == EWOULDBLOCK)
# define call_was_interrupted()   (errno == EINTR)
# define call_in_progress()       (errno == EINPROGRESS)
#endif

#ifdef ECOS
#include <sys/sockio.h>
#endif

#ifndef h_addr
# define h_addr  h_addr_list[ 0 ]
#endif

static char addr_buffer[ 20 ];

static int C_set_socket_options(int socket)
{
  int yes = 1; 
  int r;

  r = setsockopt(socket, SOL_SOCKET, SO_REUSEADDR, (const char *)&yes, sizeof(int));
  
  if(r != 0) return r;

#ifdef SO_NOSIGPIPE
  /*
   * Avoid SIGPIPE (iOS uses *only* SIGPIPE otherwise, not returning EPIPE).
   * For consistency we do this everywhere the option is supported.
   */
  r = setsockopt(socket, SOL_SOCKET, SO_NOSIGPIPE, (const char *)&yes, sizeof(int));
#endif

  return r;
}


static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_scheduler_toplevel)
C_externimport void C_ccall C_scheduler_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_port_toplevel)
C_externimport void C_ccall C_port_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[109];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,50),40,99,104,105,99,107,101,110,46,116,99,112,35,103,101,116,104,111,115,116,97,100,100,114,32,115,97,100,100,114,50,54,52,32,104,111,115,116,50,54,53,32,112,111,114,116,50,54,54,41,0,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,116,99,112,35,116,99,112,45,108,105,115,116,101,110,32,112,111,114,116,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,29),40,99,104,105,99,107,101,110,46,116,99,112,35,116,99,112,45,108,105,115,116,101,110,101,114,63,32,120,41,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,28),40,99,104,105,99,107,101,110,46,116,99,112,35,116,99,112,45,99,108,111,115,101,32,116,99,112,108,41,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,10),40,102,95,49,54,51,49,32,120,41,0,0,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,11),40,99,104,101,99,107,32,108,111,99,41,0,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,12),40,114,101,97,100,45,105,110,112,117,116,41,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,7),40,97,49,56,52,53,41,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,21),40,108,111,111,112,32,108,101,110,32,111,102,102,115,101,116,32,100,108,119,41,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,10),40,111,117,116,112,117,116,32,115,41,0,0,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,10),40,102,95,50,48,50,56,32,115,41,0,0,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,10),40,102,95,50,48,52,56,32,115,41,0,0,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,7),40,97,49,57,52,49,41,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,8),40,102,95,50,48,49,50,41};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,7),40,97,50,48,54,51,41,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,7),40,97,50,48,56,53,41,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,7),40,97,50,49,50,55,41,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,7),40,97,50,49,55,55,41,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,110,32,109,32,115,116,97,114,116,41};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,22),40,97,50,49,57,53,32,112,32,110,32,100,101,115,116,32,115,116,97,114,116,41,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,11),40,97,50,50,56,56,32,112,111,115,41,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,7),40,97,50,50,55,56,41,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,28),40,97,50,51,51,52,32,110,101,120,116,32,108,105,110,101,32,102,117,108,108,45,108,105,110,101,63,41,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,15),40,97,50,50,54,48,32,112,32,108,105,109,105,116,41,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,9),40,97,50,51,55,57,32,112,41,0,0,0,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,29),40,99,104,105,99,107,101,110,46,116,99,112,35,105,111,45,112,111,114,116,115,32,108,111,99,32,102,100,41,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,29),40,99,104,105,99,107,101,110,46,116,99,112,35,116,99,112,45,97,99,99,101,112,116,32,116,99,112,108,41,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,116,99,112,35,116,99,112,45,97,99,99,101,112,116,45,114,101,97,100,121,63,32,116,99,112,108,41,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,105,41};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,7),40,97,50,56,50,53,41,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,23),40,97,50,56,51,49,32,104,111,115,116,55,48,52,32,112,111,114,116,55,48,53,41,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,116,99,112,35,116,99,112,45,99,111,110,110,101,99,116,32,104,111,115,116,32,46,32,109,111,114,101,41,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,116,99,112,35,116,99,112,45,112,111,114,116,45,62,102,105,108,101,110,111,32,112,32,108,111,99,41,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,29),40,99,104,105,99,107,101,110,46,116,99,112,35,116,99,112,45,97,100,100,114,101,115,115,101,115,32,112,41,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,32),40,99,104,105,99,107,101,110,46,116,99,112,35,116,99,112,45,112,111,114,116,45,110,117,109,98,101,114,115,32,112,41};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,116,99,112,35,116,99,112,45,108,105,115,116,101,110,101,114,45,112,111,114,116,32,116,99,112,108,41,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,32),40,99,104,105,99,107,101,110,46,116,99,112,35,116,99,112,45,97,98,97,110,100,111,110,45,112,111,114,116,32,112,41};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,35),40,99,104,105,99,107,101,110,46,116,99,112,35,116,99,112,45,108,105,115,116,101,110,101,114,45,102,105,108,101,110,111,32,108,41,0,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub689(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int socket=(int )C_unfix(C_a0);
int err, optlen;
optlen = sizeof(err);
if (typecorrect_getsockopt(socket, SOL_SOCKET, SO_ERROR, &err, (socklen_t *)&optlen) == SOCKET_ERROR)
  C_return(SOCKET_ERROR);
C_return(err);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub398(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * saddr=(void * )C_data_pointer_or_null(C_a0);
unsigned short port=(unsigned short )(unsigned short)C_unfix(C_a1);
struct sockaddr_in *addr = (struct sockaddr_in *)saddr;
memset(addr, 0, sizeof(struct sockaddr_in));
addr->sin_family = AF_INET;
addr->sin_port = htons(port);
addr->sin_addr.s_addr = htonl(INADDR_ANY);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub267(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * saddr=(void * )C_data_pointer_or_null(C_a0);
char * host=(char * )C_string_or_null(C_a1);
unsigned short port=(unsigned short )(unsigned short)C_unfix(C_a2);
struct hostent *he = gethostbyname(host);
struct sockaddr_in *addr = (struct sockaddr_in *)saddr;
if(he == NULL) C_return(0);
memset(addr, 0, sizeof(struct sockaddr_in));
addr->sin_family = AF_INET;
addr->sin_port = htons((short)port);
addr->sin_addr = *((struct in_addr *)he->h_addr);
C_return(1);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub255(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * serv=(char * )C_string_or_null(C_a0);
char * proto=(char * )C_string_or_null(C_a1);
struct servent *se;
     if((se = getservbyname(serv, proto)) == NULL) C_return(0);
     else C_return(ntohs(se->s_port));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub250(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
#ifdef _WIN32
     C_return(WSAStartup(MAKEWORD(1, 1), &wsa) == 0);
#else
     signal(SIGPIPE, SIG_IGN);
     C_return(1);
#endif
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub245(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int s=(int )C_unfix(C_a0);
struct sockaddr_in sa;
unsigned char *ptr;
unsigned int len = sizeof(struct sockaddr_in);
if(getpeername(s, (struct sockaddr *)&sa, ((socklen_t *)&len)) != 0) C_return(NULL);
ptr = (unsigned char *)&sa.sin_addr;
C_snprintf(addr_buffer, sizeof(addr_buffer), "%d.%d.%d.%d", ptr[ 0 ], ptr[ 1 ], ptr[ 2 ], ptr[ 3 ]);
C_return(addr_buffer);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub240(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int s=(int )C_unfix(C_a0);
struct sockaddr_in sa;
int len = sizeof(struct sockaddr_in);
if(getpeername(s, (struct sockaddr *)&sa, (socklen_t *)(&len)) != 0) C_return(-1);
else C_return(ntohs(sa.sin_port));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub235(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int s=(int )C_unfix(C_a0);
struct sockaddr_in sa;
int len = sizeof(struct sockaddr_in);
if(getsockname(s, (struct sockaddr *)&sa, (socklen_t *)(&len)) != 0) C_return(-1);
else C_return(ntohs(sa.sin_port));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub229(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int s=(int )C_unfix(C_a0);
struct sockaddr_in sa;
unsigned char *ptr;
int len = sizeof(struct sockaddr_in);
if(getsockname(s, (struct sockaddr *)&sa, (socklen_t *)&len) != 0) C_return(NULL);
ptr = (unsigned char *)&sa.sin_addr;
C_snprintf(addr_buffer, sizeof(addr_buffer), "%d.%d.%d.%d", ptr[ 0 ], ptr[ 1 ], ptr[ 2 ], ptr[ 3 ]);
C_return(addr_buffer);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub218(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int s=(int )C_unfix(C_a0);
void * msg=(void * )C_data_pointer_or_null(C_a1);
int offset=(int )C_unfix(C_a2);
int len=(int )C_unfix(C_a3);
int flags=(int )C_unfix(C_a4);
C_return(send(s, (char *)msg+offset, len, flags));
C_ret:
#undef return

return C_r;}

/* from k1158 */
C_regparm static C_word C_fcall stub209(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_set_socket_options(t0));
return C_r;}

/* from k1151 */
C_regparm static C_word C_fcall stub204(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_check_fd_ready(t0));
return C_r;}

/* from k1141 */
C_regparm static C_word C_fcall stub195(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_r=C_fix((C_word)connect(t0,t1,t2));
return C_r;}

/* from k1126 */
C_regparm static C_word C_fcall stub187(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
C_r=C_fix((C_word)shutdown(t0,t1));
return C_r;}

/* from k1112 */
C_regparm static C_word C_fcall stub176(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
C_r=C_fix((C_word)recv(t0,t1,t2,t3));
return C_r;}

/* from k1093 */
C_regparm static C_word C_fcall stub168(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)closesocket(t0));
return C_r;}

/* from k1080 */
C_regparm static C_word C_fcall stub157(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_c_pointer_or_null(C_a1);
void * t2=(void * )C_c_pointer_or_null(C_a2);
C_r=C_fix((C_word)accept(t0,t1,t2));
return C_r;}

/* from k1065 */
C_regparm static C_word C_fcall stub149(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
C_r=C_fix((C_word)listen(t0,t1));
return C_r;}

/* from k1051 */
C_regparm static C_word C_fcall stub139(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_r=C_fix((C_word)bind(t0,t1,t2));
return C_r;}

/* from k1036 */
C_regparm static C_word C_fcall stub130(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
int t2=(int )C_unfix(C_a2);
C_r=C_fix((C_word)socket(t0,t1,t2));
return C_r;}

/* from chicken.tcp#interrupted? */
C_regparm static C_word C_fcall stub124(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_mk_bool(call_was_interrupted());
return C_r;}

/* from chicken.tcp#in-progress? */
C_regparm static C_word C_fcall stub121(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_mk_bool(call_in_progress());
return C_r;}

/* from chicken.tcp#retry? */
C_regparm static C_word C_fcall stub118(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_mk_bool(should_retry_call());
return C_r;}

/* from k1012 */
C_regparm static C_word C_fcall stub113(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)errormsg_from_code(t0));
return C_r;}

/* from chicken.tcp#last-error-code */
C_regparm static C_word C_fcall stub109(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)get_last_socket_error());
return C_r;}

C_noret_decl(f3439)
static void C_ccall f3439(C_word c,C_word *av) C_noret;
C_noret_decl(f_1000)
static void C_ccall f_1000(C_word c,C_word *av) C_noret;
C_noret_decl(f_1228)
static void C_ccall f_1228(C_word c,C_word *av) C_noret;
C_noret_decl(f_1235)
static void C_ccall f_1235(C_word c,C_word *av) C_noret;
C_noret_decl(f_1239)
static void C_ccall f_1239(C_word c,C_word *av) C_noret;
C_noret_decl(f_1255)
static void C_fcall f_1255(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1264)
static void C_ccall f_1264(C_word c,C_word *av) C_noret;
C_noret_decl(f_1290)
static void C_fcall f_1290(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1313)
static void C_ccall f_1313(C_word c,C_word *av) C_noret;
C_noret_decl(f_1317)
static void C_ccall f_1317(C_word c,C_word *av) C_noret;
C_noret_decl(f_1320)
static void C_fcall f_1320(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1323)
static void C_ccall f_1323(C_word c,C_word *av) C_noret;
C_noret_decl(f_1333)
static void C_ccall f_1333(C_word c,C_word *av) C_noret;
C_noret_decl(f_1337)
static void C_ccall f_1337(C_word c,C_word *av) C_noret;
C_noret_decl(f_1341)
static void C_ccall f_1341(C_word c,C_word *av) C_noret;
C_noret_decl(f_1379)
static void C_ccall f_1379(C_word c,C_word *av) C_noret;
C_noret_decl(f_1382)
static void C_ccall f_1382(C_word c,C_word *av) C_noret;
C_noret_decl(f_1388)
static void C_ccall f_1388(C_word c,C_word *av) C_noret;
C_noret_decl(f_1391)
static void C_ccall f_1391(C_word c,C_word *av) C_noret;
C_noret_decl(f_1394)
static void C_ccall f_1394(C_word c,C_word *av) C_noret;
C_noret_decl(f_1410)
static void C_ccall f_1410(C_word c,C_word *av) C_noret;
C_noret_decl(f_1414)
static void C_ccall f_1414(C_word c,C_word *av) C_noret;
C_noret_decl(f_1418)
static void C_ccall f_1418(C_word c,C_word *av) C_noret;
C_noret_decl(f_1434)
static void C_ccall f_1434(C_word c,C_word *av) C_noret;
C_noret_decl(f_1438)
static void C_ccall f_1438(C_word c,C_word *av) C_noret;
C_noret_decl(f_1442)
static void C_ccall f_1442(C_word c,C_word *av) C_noret;
C_noret_decl(f_1464)
static void C_ccall f_1464(C_word c,C_word *av) C_noret;
C_noret_decl(f_1473)
static void C_ccall f_1473(C_word c,C_word *av) C_noret;
C_noret_decl(f_1489)
static void C_ccall f_1489(C_word c,C_word *av) C_noret;
C_noret_decl(f_1492)
static void C_ccall f_1492(C_word c,C_word *av) C_noret;
C_noret_decl(f_1495)
static void C_ccall f_1495(C_word c,C_word *av) C_noret;
C_noret_decl(f_1498)
static void C_fcall f_1498(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1501)
static void C_ccall f_1501(C_word c,C_word *av) C_noret;
C_noret_decl(f_1520)
static void C_ccall f_1520(C_word c,C_word *av) C_noret;
C_noret_decl(f_1524)
static void C_ccall f_1524(C_word c,C_word *av) C_noret;
C_noret_decl(f_1528)
static void C_ccall f_1528(C_word c,C_word *av) C_noret;
C_noret_decl(f_1572)
static void C_ccall f_1572(C_word c,C_word *av) C_noret;
C_noret_decl(f_1581)
static void C_ccall f_1581(C_word c,C_word *av) C_noret;
C_noret_decl(f_1601)
static void C_ccall f_1601(C_word c,C_word *av) C_noret;
C_noret_decl(f_1605)
static void C_ccall f_1605(C_word c,C_word *av) C_noret;
C_noret_decl(f_1609)
static void C_ccall f_1609(C_word c,C_word *av) C_noret;
C_noret_decl(f_1623)
static void C_ccall f_1623(C_word c,C_word *av) C_noret;
C_noret_decl(f_1629)
static void C_fcall f_1629(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1631)
static void C_ccall f_1631(C_word c,C_word *av) C_noret;
C_noret_decl(f_1635)
static void C_ccall f_1635(C_word c,C_word *av) C_noret;
C_noret_decl(f_1646)
static void C_ccall f_1646(C_word c,C_word *av) C_noret;
C_noret_decl(f_1650)
static void C_ccall f_1650(C_word c,C_word *av) C_noret;
C_noret_decl(f_1654)
static void C_ccall f_1654(C_word c,C_word *av) C_noret;
C_noret_decl(f_1658)
static void C_ccall f_1658(C_word c,C_word *av) C_noret;
C_noret_decl(f_1660)
static void C_fcall f_1660(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1664)
static void C_ccall f_1664(C_word c,C_word *av) C_noret;
C_noret_decl(f_1667)
static void C_ccall f_1667(C_word c,C_word *av) C_noret;
C_noret_decl(f_1673)
static void C_ccall f_1673(C_word c,C_word *av) C_noret;
C_noret_decl(f_1676)
static void C_fcall f_1676(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1677)
static void C_fcall f_1677(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1681)
static void C_ccall f_1681(C_word c,C_word *av) C_noret;
C_noret_decl(f_1684)
static void C_fcall f_1684(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1689)
static void C_ccall f_1689(C_word c,C_word *av) C_noret;
C_noret_decl(f_1708)
static void C_ccall f_1708(C_word c,C_word *av) C_noret;
C_noret_decl(f_1711)
static void C_ccall f_1711(C_word c,C_word *av) C_noret;
C_noret_decl(f_1714)
static void C_ccall f_1714(C_word c,C_word *av) C_noret;
C_noret_decl(f_1717)
static void C_ccall f_1717(C_word c,C_word *av) C_noret;
C_noret_decl(f_1745)
static void C_ccall f_1745(C_word c,C_word *av) C_noret;
C_noret_decl(f_1749)
static void C_ccall f_1749(C_word c,C_word *av) C_noret;
C_noret_decl(f_1753)
static void C_ccall f_1753(C_word c,C_word *av) C_noret;
C_noret_decl(f_1771)
static void C_ccall f_1771(C_word c,C_word *av) C_noret;
C_noret_decl(f_1774)
static void C_ccall f_1774(C_word c,C_word *av) C_noret;
C_noret_decl(f_1775)
static void C_fcall f_1775(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1779)
static void C_ccall f_1779(C_word c,C_word *av) C_noret;
C_noret_decl(f_1790)
static void C_fcall f_1790(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1792)
static void C_fcall f_1792(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1814)
static void C_ccall f_1814(C_word c,C_word *av) C_noret;
C_noret_decl(f_1817)
static void C_ccall f_1817(C_word c,C_word *av) C_noret;
C_noret_decl(f_1820)
static void C_ccall f_1820(C_word c,C_word *av) C_noret;
C_noret_decl(f_1823)
static void C_ccall f_1823(C_word c,C_word *av) C_noret;
C_noret_decl(f_1846)
static void C_ccall f_1846(C_word c,C_word *av) C_noret;
C_noret_decl(f_1857)
static void C_ccall f_1857(C_word c,C_word *av) C_noret;
C_noret_decl(f_1861)
static void C_ccall f_1861(C_word c,C_word *av) C_noret;
C_noret_decl(f_1865)
static void C_ccall f_1865(C_word c,C_word *av) C_noret;
C_noret_decl(f_1905)
static void C_ccall f_1905(C_word c,C_word *av) C_noret;
C_noret_decl(f_1912)
static void C_ccall f_1912(C_word c,C_word *av) C_noret;
C_noret_decl(f_1915)
static void C_ccall f_1915(C_word c,C_word *av) C_noret;
C_noret_decl(f_1930)
static void C_ccall f_1930(C_word c,C_word *av) C_noret;
C_noret_decl(f_1933)
static void C_ccall f_1933(C_word c,C_word *av) C_noret;
C_noret_decl(f_1942)
static void C_ccall f_1942(C_word c,C_word *av) C_noret;
C_noret_decl(f_1950)
static void C_fcall f_1950(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1953)
static void C_fcall f_1953(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1959)
static void C_fcall f_1959(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1966)
static void C_ccall f_1966(C_word c,C_word *av) C_noret;
C_noret_decl(f_1970)
static void C_ccall f_1970(C_word c,C_word *av) C_noret;
C_noret_decl(f_1974)
static void C_ccall f_1974(C_word c,C_word *av) C_noret;
C_noret_decl(f_1999)
static void C_ccall f_1999(C_word c,C_word *av) C_noret;
C_noret_decl(f_2012)
static void C_ccall f_2012(C_word c,C_word *av) C_noret;
C_noret_decl(f_2022)
static void C_ccall f_2022(C_word c,C_word *av) C_noret;
C_noret_decl(f_2028)
static void C_ccall f_2028(C_word c,C_word *av) C_noret;
C_noret_decl(f_2033)
static void C_ccall f_2033(C_word c,C_word *av) C_noret;
C_noret_decl(f_2042)
static void C_ccall f_2042(C_word c,C_word *av) C_noret;
C_noret_decl(f_2048)
static void C_ccall f_2048(C_word c,C_word *av) C_noret;
C_noret_decl(f_2064)
static void C_ccall f_2064(C_word c,C_word *av) C_noret;
C_noret_decl(f_2068)
static void C_ccall f_2068(C_word c,C_word *av) C_noret;
C_noret_decl(f_2086)
static void C_ccall f_2086(C_word c,C_word *av) C_noret;
C_noret_decl(f_2099)
static void C_ccall f_2099(C_word c,C_word *av) C_noret;
C_noret_decl(f_2112)
static void C_ccall f_2112(C_word c,C_word *av) C_noret;
C_noret_decl(f_2116)
static void C_ccall f_2116(C_word c,C_word *av) C_noret;
C_noret_decl(f_2120)
static void C_ccall f_2120(C_word c,C_word *av) C_noret;
C_noret_decl(f_2128)
static void C_ccall f_2128(C_word c,C_word *av) C_noret;
C_noret_decl(f_2136)
static void C_fcall f_2136(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2142)
static void C_fcall f_2142(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2149)
static void C_ccall f_2149(C_word c,C_word *av) C_noret;
C_noret_decl(f_2153)
static void C_ccall f_2153(C_word c,C_word *av) C_noret;
C_noret_decl(f_2157)
static void C_ccall f_2157(C_word c,C_word *av) C_noret;
C_noret_decl(f_2178)
static void C_ccall f_2178(C_word c,C_word *av) C_noret;
C_noret_decl(f_2182)
static void C_ccall f_2182(C_word c,C_word *av) C_noret;
C_noret_decl(f_2196)
static void C_ccall f_2196(C_word c,C_word *av) C_noret;
C_noret_decl(f_2202)
static void C_fcall f_2202(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2250)
static void C_ccall f_2250(C_word c,C_word *av) C_noret;
C_noret_decl(f_2261)
static void C_ccall f_2261(C_word c,C_word *av) C_noret;
C_noret_decl(f_2265)
static void C_ccall f_2265(C_word c,C_word *av) C_noret;
C_noret_decl(f_2279)
static void C_ccall f_2279(C_word c,C_word *av) C_noret;
C_noret_decl(f_2289)
static void C_ccall f_2289(C_word c,C_word *av) C_noret;
C_noret_decl(f_2305)
static void C_ccall f_2305(C_word c,C_word *av) C_noret;
C_noret_decl(f_2335)
static void C_ccall f_2335(C_word c,C_word *av) C_noret;
C_noret_decl(f_2380)
static void C_ccall f_2380(C_word c,C_word *av) C_noret;
C_noret_decl(f_2390)
static void C_ccall f_2390(C_word c,C_word *av) C_noret;
C_noret_decl(f_2411)
static void C_ccall f_2411(C_word c,C_word *av) C_noret;
C_noret_decl(f_2415)
static void C_ccall f_2415(C_word c,C_word *av) C_noret;
C_noret_decl(f_2419)
static void C_ccall f_2419(C_word c,C_word *av) C_noret;
C_noret_decl(f_2423)
static void C_ccall f_2423(C_word c,C_word *av) C_noret;
C_noret_decl(f_2433)
static void C_ccall f_2433(C_word c,C_word *av) C_noret;
C_noret_decl(f_2436)
static void C_fcall f_2436(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2441)
static void C_ccall f_2441(C_word c,C_word *av) C_noret;
C_noret_decl(f_2445)
static void C_ccall f_2445(C_word c,C_word *av) C_noret;
C_noret_decl(f_2448)
static void C_ccall f_2448(C_word c,C_word *av) C_noret;
C_noret_decl(f_2451)
static void C_ccall f_2451(C_word c,C_word *av) C_noret;
C_noret_decl(f_2454)
static void C_ccall f_2454(C_word c,C_word *av) C_noret;
C_noret_decl(f_2482)
static void C_ccall f_2482(C_word c,C_word *av) C_noret;
C_noret_decl(f_2486)
static void C_ccall f_2486(C_word c,C_word *av) C_noret;
C_noret_decl(f_2490)
static void C_ccall f_2490(C_word c,C_word *av) C_noret;
C_noret_decl(f_2516)
static void C_ccall f_2516(C_word c,C_word *av) C_noret;
C_noret_decl(f_2518)
static void C_ccall f_2518(C_word c,C_word *av) C_noret;
C_noret_decl(f_2528)
static void C_ccall f_2528(C_word c,C_word *av) C_noret;
C_noret_decl(f_2541)
static void C_ccall f_2541(C_word c,C_word *av) C_noret;
C_noret_decl(f_2545)
static void C_ccall f_2545(C_word c,C_word *av) C_noret;
C_noret_decl(f_2549)
static void C_ccall f_2549(C_word c,C_word *av) C_noret;
C_noret_decl(f_2568)
static void C_ccall f_2568(C_word c,C_word *av) C_noret;
C_noret_decl(f_2575)
static void C_ccall f_2575(C_word c,C_word *av) C_noret;
C_noret_decl(f_2578)
static void C_fcall f_2578(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2581)
static void C_ccall f_2581(C_word c,C_word *av) C_noret;
C_noret_decl(f_2587)
static void C_ccall f_2587(C_word c,C_word *av) C_noret;
C_noret_decl(f_2590)
static void C_ccall f_2590(C_word c,C_word *av) C_noret;
C_noret_decl(f_2593)
static void C_ccall f_2593(C_word c,C_word *av) C_noret;
C_noret_decl(f_2599)
static void C_ccall f_2599(C_word c,C_word *av) C_noret;
C_noret_decl(f_2602)
static void C_ccall f_2602(C_word c,C_word *av) C_noret;
C_noret_decl(f_2605)
static void C_ccall f_2605(C_word c,C_word *av) C_noret;
C_noret_decl(f_2608)
static void C_ccall f_2608(C_word c,C_word *av) C_noret;
C_noret_decl(f_2614)
static void C_ccall f_2614(C_word c,C_word *av) C_noret;
C_noret_decl(f_2633)
static void C_ccall f_2633(C_word c,C_word *av) C_noret;
C_noret_decl(f_2637)
static void C_ccall f_2637(C_word c,C_word *av) C_noret;
C_noret_decl(f_2641)
static void C_ccall f_2641(C_word c,C_word *av) C_noret;
C_noret_decl(f_2659)
static void C_ccall f_2659(C_word c,C_word *av) C_noret;
C_noret_decl(f_2663)
static void C_ccall f_2663(C_word c,C_word *av) C_noret;
C_noret_decl(f_2667)
static void C_ccall f_2667(C_word c,C_word *av) C_noret;
C_noret_decl(f_2671)
static void C_ccall f_2671(C_word c,C_word *av) C_noret;
C_noret_decl(f_2687)
static void C_ccall f_2687(C_word c,C_word *av) C_noret;
C_noret_decl(f_2690)
static void C_ccall f_2690(C_word c,C_word *av) C_noret;
C_noret_decl(f_2718)
static void C_ccall f_2718(C_word c,C_word *av) C_noret;
C_noret_decl(f_2722)
static void C_ccall f_2722(C_word c,C_word *av) C_noret;
C_noret_decl(f_2726)
static void C_ccall f_2726(C_word c,C_word *av) C_noret;
C_noret_decl(f_2745)
static void C_ccall f_2745(C_word c,C_word *av) C_noret;
C_noret_decl(f_2749)
static void C_ccall f_2749(C_word c,C_word *av) C_noret;
C_noret_decl(f_2753)
static void C_ccall f_2753(C_word c,C_word *av) C_noret;
C_noret_decl(f_2771)
static void C_ccall f_2771(C_word c,C_word *av) C_noret;
C_noret_decl(f_2775)
static void C_ccall f_2775(C_word c,C_word *av) C_noret;
C_noret_decl(f_2779)
static void C_ccall f_2779(C_word c,C_word *av) C_noret;
C_noret_decl(f_2795)
static void C_ccall f_2795(C_word c,C_word *av) C_noret;
C_noret_decl(f_2799)
static void C_ccall f_2799(C_word c,C_word *av) C_noret;
C_noret_decl(f_2803)
static void C_ccall f_2803(C_word c,C_word *av) C_noret;
C_noret_decl(f_2812)
static void C_ccall f_2812(C_word c,C_word *av) C_noret;
C_noret_decl(f_2818)
static void C_ccall f_2818(C_word c,C_word *av) C_noret;
C_noret_decl(f_2826)
static void C_ccall f_2826(C_word c,C_word *av) C_noret;
C_noret_decl(f_2832)
static void C_ccall f_2832(C_word c,C_word *av) C_noret;
C_noret_decl(f_2843)
static void C_ccall f_2843(C_word c,C_word *av) C_noret;
C_noret_decl(f_2851)
static void C_fcall f_2851(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2855)
static void C_ccall f_2855(C_word c,C_word *av) C_noret;
C_noret_decl(f_2869)
static void C_ccall f_2869(C_word c,C_word *av) C_noret;
C_noret_decl(f_2875)
static void C_ccall f_2875(C_word c,C_word *av) C_noret;
C_noret_decl(f_2882)
static void C_ccall f_2882(C_word c,C_word *av) C_noret;
C_noret_decl(f_2885)
static void C_ccall f_2885(C_word c,C_word *av) C_noret;
C_noret_decl(f_2889)
static void C_ccall f_2889(C_word c,C_word *av) C_noret;
C_noret_decl(f_2892)
static void C_ccall f_2892(C_word c,C_word *av) C_noret;
C_noret_decl(f_2899)
static void C_ccall f_2899(C_word c,C_word *av) C_noret;
C_noret_decl(f_2903)
static void C_ccall f_2903(C_word c,C_word *av) C_noret;
C_noret_decl(f_2907)
static void C_ccall f_2907(C_word c,C_word *av) C_noret;
C_noret_decl(f_2920)
static void C_ccall f_2920(C_word c,C_word *av) C_noret;
C_noret_decl(f_2924)
static void C_ccall f_2924(C_word c,C_word *av) C_noret;
C_noret_decl(f_2928)
static void C_ccall f_2928(C_word c,C_word *av) C_noret;
C_noret_decl(f_2936)
static void C_ccall f_2936(C_word c,C_word *av) C_noret;
C_noret_decl(f_2942)
static void C_ccall f_2942(C_word c,C_word *av) C_noret;
C_noret_decl(f_2951)
static void C_ccall f_2951(C_word c,C_word *av) C_noret;
C_noret_decl(f_2954)
static void C_ccall f_2954(C_word c,C_word *av) C_noret;
C_noret_decl(f_2967)
static void C_ccall f_2967(C_word c,C_word *av) C_noret;
C_noret_decl(f_2971)
static void C_ccall f_2971(C_word c,C_word *av) C_noret;
C_noret_decl(f_2975)
static void C_ccall f_2975(C_word c,C_word *av) C_noret;
C_noret_decl(f_2991)
static void C_ccall f_2991(C_word c,C_word *av) C_noret;
C_noret_decl(f_2995)
static void C_ccall f_2995(C_word c,C_word *av) C_noret;
C_noret_decl(f_2999)
static void C_ccall f_2999(C_word c,C_word *av) C_noret;
C_noret_decl(f_3007)
static void C_ccall f_3007(C_word c,C_word *av) C_noret;
C_noret_decl(f_3020)
static void C_ccall f_3020(C_word c,C_word *av) C_noret;
C_noret_decl(f_3030)
static void C_ccall f_3030(C_word c,C_word *av) C_noret;
C_noret_decl(f_3034)
static void C_ccall f_3034(C_word c,C_word *av) C_noret;
C_noret_decl(f_3038)
static void C_ccall f_3038(C_word c,C_word *av) C_noret;
C_noret_decl(f_3046)
static void C_ccall f_3046(C_word c,C_word *av) C_noret;
C_noret_decl(f_3056)
static void C_ccall f_3056(C_word c,C_word *av) C_noret;
C_noret_decl(f_3062)
static void C_ccall f_3062(C_word c,C_word *av) C_noret;
C_noret_decl(f_3073)
static void C_ccall f_3073(C_word c,C_word *av) C_noret;
C_noret_decl(f_3077)
static void C_ccall f_3077(C_word c,C_word *av) C_noret;
C_noret_decl(f_3081)
static void C_ccall f_3081(C_word c,C_word *av) C_noret;
C_noret_decl(f_3085)
static void C_ccall f_3085(C_word c,C_word *av) C_noret;
C_noret_decl(f_994)
static void C_ccall f_994(C_word c,C_word *av) C_noret;
C_noret_decl(f_997)
static void C_ccall f_997(C_word c,C_word *av) C_noret;
C_noret_decl(C_tcp_toplevel)
C_externexport void C_ccall C_tcp_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1255)
static void C_ccall trf_1255(C_word c,C_word *av) C_noret;
static void C_ccall trf_1255(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1255(t0,t1,t2,t3);}

C_noret_decl(trf_1290)
static void C_ccall trf_1290(C_word c,C_word *av) C_noret;
static void C_ccall trf_1290(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1290(t0,t1,t2);}

C_noret_decl(trf_1320)
static void C_ccall trf_1320(C_word c,C_word *av) C_noret;
static void C_ccall trf_1320(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1320(t0,t1);}

C_noret_decl(trf_1498)
static void C_ccall trf_1498(C_word c,C_word *av) C_noret;
static void C_ccall trf_1498(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1498(t0,t1);}

C_noret_decl(trf_1629)
static void C_ccall trf_1629(C_word c,C_word *av) C_noret;
static void C_ccall trf_1629(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1629(t0,t1);}

C_noret_decl(trf_1660)
static void C_ccall trf_1660(C_word c,C_word *av) C_noret;
static void C_ccall trf_1660(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1660(t0,t1,t2,t3);}

C_noret_decl(trf_1676)
static void C_ccall trf_1676(C_word c,C_word *av) C_noret;
static void C_ccall trf_1676(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1676(t0,t1);}

C_noret_decl(trf_1677)
static void C_ccall trf_1677(C_word c,C_word *av) C_noret;
static void C_ccall trf_1677(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1677(t0,t1);}

C_noret_decl(trf_1684)
static void C_ccall trf_1684(C_word c,C_word *av) C_noret;
static void C_ccall trf_1684(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1684(t0,t1);}

C_noret_decl(trf_1775)
static void C_ccall trf_1775(C_word c,C_word *av) C_noret;
static void C_ccall trf_1775(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1775(t0,t1,t2);}

C_noret_decl(trf_1790)
static void C_ccall trf_1790(C_word c,C_word *av) C_noret;
static void C_ccall trf_1790(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1790(t0,t1);}

C_noret_decl(trf_1792)
static void C_ccall trf_1792(C_word c,C_word *av) C_noret;
static void C_ccall trf_1792(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1792(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1950)
static void C_ccall trf_1950(C_word c,C_word *av) C_noret;
static void C_ccall trf_1950(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1950(t0,t1);}

C_noret_decl(trf_1953)
static void C_ccall trf_1953(C_word c,C_word *av) C_noret;
static void C_ccall trf_1953(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1953(t0,t1);}

C_noret_decl(trf_1959)
static void C_ccall trf_1959(C_word c,C_word *av) C_noret;
static void C_ccall trf_1959(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1959(t0,t1);}

C_noret_decl(trf_2136)
static void C_ccall trf_2136(C_word c,C_word *av) C_noret;
static void C_ccall trf_2136(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2136(t0,t1);}

C_noret_decl(trf_2142)
static void C_ccall trf_2142(C_word c,C_word *av) C_noret;
static void C_ccall trf_2142(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2142(t0,t1);}

C_noret_decl(trf_2202)
static void C_ccall trf_2202(C_word c,C_word *av) C_noret;
static void C_ccall trf_2202(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_2202(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2436)
static void C_ccall trf_2436(C_word c,C_word *av) C_noret;
static void C_ccall trf_2436(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2436(t0,t1);}

C_noret_decl(trf_2578)
static void C_ccall trf_2578(C_word c,C_word *av) C_noret;
static void C_ccall trf_2578(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2578(t0,t1);}

C_noret_decl(trf_2851)
static void C_ccall trf_2851(C_word c,C_word *av) C_noret;
static void C_ccall trf_2851(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2851(t0,t1,t2);}

/* f3439 in loop in k2603 in k2600 in k2597 in k2591 in k2588 in k2585 in k2579 in k2576 in k2573 in chicken.tcp#tcp-connect in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f3439(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f3439,c,av);}
/* tcp.scm:610: ##sys#thread-yield! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[36]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[36]+1);
av2[1]=((C_word*)t0)[2];
tp(2,av2);}}

/* k998 in k995 in k992 */
static void C_ccall f_1000(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_1000,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1228,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(stub250(C_SCHEME_UNDEFINED))){
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_1228(2,av2);}}
else{
/* tcp.scm:237: ##sys#signal-hook */
t3=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[7];
av2[3]=lf[108];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k1226 in k998 in k995 in k992 */
static void C_ccall f_1228(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,5)))){
C_save_and_reclaim((void *)f_1228,c,av);}
a=C_alloc(15);
t2=C_mutate(&lf[2] /* (set! chicken.tcp#gethostaddr ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1255,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[4]+1 /* (set! chicken.tcp#tcp-listen ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1473,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[23]+1 /* (set! chicken.tcp#tcp-listener? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1572,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[24]+1 /* (set! chicken.tcp#tcp-close ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1581,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1623,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:345: chicken.base#make-parameter */
t7=*((C_word*)lf[103]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k1233 in k1315 in k1311 in loop in a2825 in k2579 in k2576 in k2573 in chicken.tcp#tcp-connect in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_1235(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1235,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1239,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
/* tcp.scm:240: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[3]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t2;
av2[2]=C_i_foreign_string_argumentp(((C_word*)t0)[3]);
tp(3,av2);}}
else{
t3=((C_word*)t0)[2];
f_1320(t3,stub255(C_SCHEME_UNDEFINED,t1,C_SCHEME_FALSE));}}

/* k1237 in k1233 in k1315 in k1311 in loop in a2825 in k2579 in k2576 in k2573 in chicken.tcp#tcp-connect in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_1239(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1239,c,av);}
t2=((C_word*)t0)[2];
f_1320(t2,stub255(C_SCHEME_UNDEFINED,((C_word*)t0)[3],t1));}

/* chicken.tcp#gethostaddr in k1226 in k998 in k995 in k992 */
static void C_fcall f_1255(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1255,4,t1,t2,t3,t4);}
a=C_alloc(5);
t5=(C_truep(t2)?C_i_foreign_block_argumentp(t2):C_SCHEME_FALSE);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1264,a[2]=t1,a[3]=t5,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
/* tcp.scm:246: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[3]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t6;
av2[2]=C_i_foreign_string_argumentp(t3);
tp(3,av2);}}
else{
t7=C_fix((C_word)sizeof(unsigned short) * CHAR_BIT);
t8=t1;{
C_word av2[2];
av2[0]=t8;
av2[1]=stub267(C_SCHEME_UNDEFINED,t5,C_SCHEME_FALSE,C_i_foreign_unsigned_ranged_integer_argumentp(t4,t7));
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k1262 in chicken.tcp#gethostaddr in k1226 in k998 in k995 in k992 */
static void C_ccall f_1264(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1264,c,av);}
t2=C_fix((C_word)sizeof(unsigned short) * CHAR_BIT);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=stub267(C_SCHEME_UNDEFINED,((C_word*)t0)[3],t1,C_i_foreign_unsigned_ranged_integer_argumentp(((C_word*)t0)[4],t2));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* loop in a2825 in k2579 in k2576 in k2573 in chicken.tcp#tcp-connect in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_fcall f_1290(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_1290,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
/* tcp.scm:282: scheme#values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_FALSE;
C_values(4,av2);}}
else{
t3=C_subchar(((C_word*)t0)[3],t2);
if(C_truep(C_i_char_equalp(t3,C_make_character(58)))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1313,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:286: substring */
t5=*((C_word*)lf[83]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
av2[3]=C_fixnum_plus(t2,C_fix(1));
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
/* tcp.scm:292: loop */
t6=t1;
t7=C_fixnum_plus(t2,C_fix(1));
t1=t6;
t2=t7;
goto loop;}}}

/* k1311 in loop in a2825 in k2579 in k2576 in k2573 in chicken.tcp#tcp-connect in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_1313(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_1313,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1317,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:287: substring */
t3=*((C_word*)lf[83]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(0);
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k1315 in k1311 in loop in a2825 in k2579 in k2576 in k2573 in chicken.tcp#tcp-connect in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_1317(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_1317,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1320,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1235,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
/* tcp.scm:240: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[3]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t3;
av2[2]=C_i_foreign_string_argumentp(t1);
tp(3,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_1235(2,av2);}}}

/* k1318 in k1315 in k1311 in loop in a2825 in k2579 in k2576 in k2573 in chicken.tcp#tcp-connect in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_fcall f_1320(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_1320,2,t0,t1);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1323,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=C_eqp(C_fix(0),t1);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1333,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1337,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t5;
av2[2]=lf[82];
av2[3]=lf[13];
tp(4,av2);}}
else{
/* tcp.scm:285: scheme#values */{
C_word av2[4];
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
C_values(4,av2);}}}

/* k1321 in k1318 in k1315 in k1311 in loop in a2825 in k2579 in k2576 in k2573 in chicken.tcp#tcp-connect in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_1323(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1323,c,av);}
/* tcp.scm:285: scheme#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
C_values(4,av2);}}

/* k1331 in k1318 in k1315 in k1311 in loop in a2825 in k2579 in k2576 in k2573 in chicken.tcp#tcp-connect in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_1333(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1333,c,av);}
/* tcp.scm:290: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[72];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k1335 in k1318 in k1315 in k1311 in loop in a2825 in k2579 in k2576 in k2573 in chicken.tcp#tcp-connect in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_1337(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1337,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1341,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=stub109(C_SCHEME_UNDEFINED);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t3);
/* tcp.scm:171: ##sys#peek-c-string */
t6=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t2;
av2[2]=stub113(t4,t5);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k1339 in k1335 in k1318 in k1315 in k1311 in loop in a2825 in k2579 in k2576 in k2573 in chicken.tcp#tcp-connect in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_1341(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1341,c,av);}
/* tcp.scm:290: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
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

/* k1377 in k1493 in k1490 in k1487 in chicken.tcp#tcp-listen in k1226 in k998 in k995 in k992 */
static void C_ccall f_1379(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_1379,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1382,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[4])){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1464,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:305: gethostaddr */
f_1255(t3,t1,((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
t3=(C_truep(t1)?C_i_foreign_block_argumentp(t1):C_SCHEME_FALSE);
t4=C_fix((C_word)sizeof(unsigned short) * CHAR_BIT);
t5=t2;{
C_word *av2=av;
av2[0]=t5;
av2[1]=stub398(C_SCHEME_UNDEFINED,t3,C_i_foreign_unsigned_ranged_integer_argumentp(((C_word*)t0)[5],t4));
f_1382(2,av2);}}}

/* k1380 in k1377 in k1493 in k1490 in k1487 in chicken.tcp#tcp-listen in k1226 in k998 in k995 in k992 */
static void C_ccall f_1382(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1382,c,av);}
a=C_alloc(7);
t2=C_fix((C_word)AF_INET);
t3=stub130(C_SCHEME_UNDEFINED,C_i_foreign_fixnum_argumentp(t2),C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]),C_fix(0));
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1388,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t5=C_eqp(C_fix((C_word)INVALID_SOCKET),t3);
if(C_truep(t5)){
/* tcp.scm:312: ##sys#error */
t6=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=lf[17];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t6=t4;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_1388(2,av2);}}}

/* k1386 in k1380 in k1377 in k1493 in k1490 in k1487 in chicken.tcp#tcp-listen in k1226 in k998 in k995 in k992 */
static void C_ccall f_1388(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1388,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1391,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t4=C_eqp(C_fix((C_word)SOCKET_ERROR),stub209(C_SCHEME_UNDEFINED,t3));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1434,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1438,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t6;
av2[2]=lf[15];
av2[3]=lf[13];
tp(4,av2);}}
else{
t5=t2;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_1391(2,av2);}}}

/* k1389 in k1386 in k1380 in k1377 in k1493 in k1490 in k1487 in chicken.tcp#tcp-listen in k1226 in k998 in k995 in k992 */
static void C_ccall f_1391(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_1391,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1394,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_fix((C_word)sizeof(struct sockaddr_in));
t4=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t5=(C_truep(((C_word*)t0)[4])?C_i_foreign_block_argumentp(((C_word*)t0)[4]):C_SCHEME_FALSE);
t6=C_i_foreign_fixnum_argumentp(t3);
t7=C_eqp(C_fix((C_word)SOCKET_ERROR),stub139(C_SCHEME_UNDEFINED,t4,t5,t6));
if(C_truep(t7)){
t8=stub109(C_SCHEME_UNDEFINED);
t9=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t10=stub168(C_SCHEME_UNDEFINED,t9);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1410,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1414,a[2]=t11,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t12;
av2[2]=lf[14];
av2[3]=lf[13];
tp(4,av2);}}
else{
t8=((C_word*)t0)[2];
f_1498(t8,((C_word*)t0)[3]);}}

/* k1392 in k1389 in k1386 in k1380 in k1377 in k1493 in k1490 in k1487 in chicken.tcp#tcp-listen in k1226 in k998 in k995 in k992 */
static void C_ccall f_1394(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1394,c,av);}
t2=((C_word*)t0)[2];
f_1498(t2,((C_word*)t0)[3]);}

/* k1408 in k1389 in k1386 in k1380 in k1377 in k1493 in k1490 in k1487 in chicken.tcp#tcp-listen in k1226 in k998 in k995 in k992 */
static void C_ccall f_1410(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_1410,c,av);}
/* tcp.scm:317: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[8];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
av2[7]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(8,av2);}}

/* k1412 in k1389 in k1386 in k1380 in k1377 in k1493 in k1490 in k1487 in chicken.tcp#tcp-listen in k1226 in k998 in k995 in k992 */
static void C_ccall f_1414(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_1414,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1418,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
/* tcp.scm:171: ##sys#peek-c-string */
t5=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=stub113(t3,t4);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k1416 in k1412 in k1389 in k1386 in k1380 in k1377 in k1493 in k1490 in k1487 in chicken.tcp#tcp-listen in k1226 in k998 in k995 in k992 */
static void C_ccall f_1418(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1418,c,av);}
/* tcp.scm:317: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
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

/* k1432 in k1386 in k1380 in k1377 in k1493 in k1490 in k1487 in chicken.tcp#tcp-listen in k1226 in k998 in k995 in k992 */
static void C_ccall f_1434(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1434,c,av);}
/* tcp.scm:315: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[8];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k1436 in k1386 in k1380 in k1377 in k1493 in k1490 in k1487 in chicken.tcp#tcp-listen in k1226 in k998 in k995 in k992 */
static void C_ccall f_1438(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1438,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1442,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=stub109(C_SCHEME_UNDEFINED);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t3);
/* tcp.scm:171: ##sys#peek-c-string */
t6=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t2;
av2[2]=stub113(t4,t5);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k1440 in k1436 in k1386 in k1380 in k1377 in k1493 in k1490 in k1487 in chicken.tcp#tcp-listen in k1226 in k998 in k995 in k992 */
static void C_ccall f_1442(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1442,c,av);}
/* tcp.scm:315: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
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

/* k1462 in k1377 in k1493 in k1490 in k1487 in chicken.tcp#tcp-listen in k1226 in k998 in k995 in k992 */
static void C_ccall f_1464(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_1464,c,av);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_1382(2,av2);}}
else{
/* tcp.scm:306: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[8];
av2[4]=lf[18];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}}

/* chicken.tcp#tcp-listen in k1226 in k998 in k995 in k992 */
static void C_ccall f_1473(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_1473,c,av);}
a=C_alloc(6);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_fix(100):C_get_rest_arg(c,3,av,3,t0));
t5=C_rest_nullp(c,3);
t6=C_rest_nullp(c,4);
t7=(C_truep(t6)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,3,t0));
t8=C_rest_nullp(c,4);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1489,a[2]=t1,a[3]=t4,a[4]=t2,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:323: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[20]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[20]+1);
av2[1]=t9;
av2[2]=t2;
tp(3,av2);}}

/* k1487 in chicken.tcp#tcp-listen in k1226 in k998 in k995 in k992 */
static void C_ccall f_1489(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_1489,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1492,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_fixnum_lessp(((C_word*)t0)[4],C_fix(0));
if(C_truep(t3)){
if(C_truep(t3)){
/* tcp.scm:325: ##sys#signal-hook */
t4=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[21];
av2[3]=lf[8];
av2[4]=lf[22];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}
else{
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_1492(2,av2);}}}
else{
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[4],C_fix(65535)))){
/* tcp.scm:325: ##sys#signal-hook */
t4=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[21];
av2[3]=lf[8];
av2[4]=lf[22];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}
else{
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_1492(2,av2);}}}}

/* k1490 in k1487 in chicken.tcp#tcp-listen in k1226 in k998 in k995 in k992 */
static void C_ccall f_1492(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_1492,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1495,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:326: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[20]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[20]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* k1493 in k1490 in k1487 in chicken.tcp#tcp-listen in k1226 in k998 in k995 in k992 */
static void C_ccall f_1495(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1495,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1498,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_fix((C_word)SOCK_STREAM);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1379,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t5=C_fix((C_word)sizeof(struct sockaddr_in));
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[19]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[19]+1);
av2[1]=t4;
av2[2]=t5;
av2[3]=C_make_character(32);
tp(4,av2);}}

/* k1496 in k1493 in k1490 in k1487 in chicken.tcp#tcp-listen in k1226 in k998 in k995 in k992 */
static void C_fcall f_1498(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,0,3)))){
C_save_and_reclaim_args((void *)trf_1498,2,t0,t1);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1501,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_i_foreign_fixnum_argumentp(t1);
t4=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t5=C_eqp(C_fix((C_word)SOCKET_ERROR),stub149(C_SCHEME_UNDEFINED,t3,t4));
if(C_truep(t5)){
t6=stub109(C_SCHEME_UNDEFINED);
t7=C_i_foreign_fixnum_argumentp(t1);
t8=stub168(C_SCHEME_UNDEFINED,t7);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1520,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1524,a[2]=t9,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t10;
av2[2]=lf[12];
av2[3]=lf[13];
tp(4,av2);}}
else{
t6=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t6;
av2[1]=C_a_i_record2(&a,2,lf[5],t1);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k1499 in k1496 in k1493 in k1490 in k1487 in chicken.tcp#tcp-listen in k1226 in k998 in k995 in k992 */
static void C_ccall f_1501(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_1501,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_record2(&a,2,lf[5],((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1518 in k1496 in k1493 in k1490 in k1487 in chicken.tcp#tcp-listen in k1226 in k998 in k995 in k992 */
static void C_ccall f_1520(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_1520,c,av);}
/* tcp.scm:329: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[8];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}

/* k1522 in k1496 in k1493 in k1490 in k1487 in chicken.tcp#tcp-listen in k1226 in k998 in k995 in k992 */
static void C_ccall f_1524(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_1524,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1528,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
/* tcp.scm:171: ##sys#peek-c-string */
t5=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=stub113(t3,t4);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k1526 in k1522 in k1496 in k1493 in k1490 in k1487 in chicken.tcp#tcp-listen in k1226 in k998 in k995 in k992 */
static void C_ccall f_1528(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1528,c,av);}
/* tcp.scm:329: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
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

/* chicken.tcp#tcp-listener? in k1226 in k998 in k995 in k992 */
static void C_ccall f_1572(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1572,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(C_blockp(t2))?C_i_structurep(t2,lf[5]):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.tcp#tcp-close in k1226 in k998 in k995 in k992 */
static void C_ccall f_1581(C_word c,C_word *av){
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
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_1581,c,av);}
a=C_alloc(7);
t3=C_i_check_structure(t2,lf[5]);
t4=C_slot(t2,C_fix(1));
t5=C_i_foreign_fixnum_argumentp(t4);
t6=C_eqp(C_fix((C_word)SOCKET_ERROR),stub168(C_SCHEME_UNDEFINED,t5));
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1601,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1605,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t8;
av2[2]=lf[26];
av2[3]=lf[13];
tp(4,av2);}}
else{
t7=C_SCHEME_UNDEFINED;
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k1599 in chicken.tcp#tcp-close in k1226 in k998 in k995 in k992 */
static void C_ccall f_1601(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1601,c,av);}
/* tcp.scm:340: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[25];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k1603 in chicken.tcp#tcp-close in k1226 in k998 in k995 in k992 */
static void C_ccall f_1605(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1605,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1609,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=stub109(C_SCHEME_UNDEFINED);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t3);
/* tcp.scm:171: ##sys#peek-c-string */
t6=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t2;
av2[2]=stub113(t4,t5);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k1607 in k1603 in chicken.tcp#tcp-close in k1226 in k998 in k995 in k992 */
static void C_ccall f_1609(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1609,c,av);}
/* tcp.scm:340: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
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

/* k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_1623(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_1623,c,av);}
a=C_alloc(16);
t2=C_mutate((C_word*)lf[27]+1 /* (set! chicken.tcp#tcp-buffer-size ...) */,t1);
t3=C_set_block_item(lf[28] /* chicken.tcp#tcp-read-timeout */,0,C_SCHEME_UNDEFINED);
t4=C_set_block_item(lf[29] /* chicken.tcp#tcp-write-timeout */,0,C_SCHEME_UNDEFINED);
t5=C_set_block_item(lf[30] /* chicken.tcp#tcp-connect-timeout */,0,C_SCHEME_UNDEFINED);
t6=C_set_block_item(lf[31] /* chicken.tcp#tcp-accept-timeout */,0,C_SCHEME_UNDEFINED);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1629,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t12=C_fixnum_times(C_fix(60),C_fix(1000));
t13=C_set_block_item(t10,0,t12);
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1646,a[2]=((C_word*)t0)[2],a[3]=t8,a[4]=t10,tmp=(C_word)a,a+=5,tmp);
t15=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3085,a[2]=t14,a[3]=t10,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:356: check */
f_1629(t15,lf[107]);}

/* check in k1621 in k1226 in k998 in k995 in k992 */
static void C_fcall f_1629(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_1629,2,t1,t2);}
a=C_alloc(4);
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1631,a[2]=t2,a[3]=((C_word)li4),tmp=(C_word)a,a+=4,tmp);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_1631 in check in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_1631(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1631,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1635,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
/* tcp.scm:353: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[20]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[20]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=((C_word*)t0)[2];
tp(4,av2);}}
else{
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k1633 */
static void C_ccall f_1635(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1635,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_1646(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_1646,c,av);}
a=C_alloc(8);
t2=C_mutate((C_word*)lf[28]+1 /* (set! chicken.tcp#tcp-read-timeout ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1650,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3081,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:357: check */
f_1629(t4,lf[106]);}

/* k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_1650(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_1650,c,av);}
a=C_alloc(7);
t2=C_mutate((C_word*)lf[29]+1 /* (set! chicken.tcp#tcp-write-timeout ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1654,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3077,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:358: check */
f_1629(t4,lf[105]);}

/* k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_1654(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_1654,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[30]+1 /* (set! chicken.tcp#tcp-connect-timeout ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1658,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3073,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:359: check */
f_1629(t4,lf[104]);}

/* k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_1658(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(31,c,4)))){
C_save_and_reclaim((void *)f_1658,c,av);}
a=C_alloc(31);
t2=C_mutate((C_word*)lf[31]+1 /* (set! chicken.tcp#tcp-accept-timeout ...) */,t1);
t3=*((C_word*)lf[27]+1);
t4=C_mutate(&lf[32] /* (set! chicken.tcp#io-ports ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1660,a[2]=t3,a[3]=((C_word)li26),tmp=(C_word)a,a+=4,tmp));
t5=C_mutate((C_word*)lf[64]+1 /* (set! chicken.tcp#tcp-accept ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2423,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[68]+1 /* (set! chicken.tcp#tcp-accept-ready? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2518,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[71]+1 /* (set! chicken.tcp#tcp-connect ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2568,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate(&lf[84] /* (set! chicken.tcp#tcp-port->fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2851,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[88]+1 /* (set! chicken.tcp#tcp-addresses ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2869,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[92]+1 /* (set! chicken.tcp#tcp-port-numbers ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2936,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[96]+1 /* (set! chicken.tcp#tcp-listener-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3007,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[99]+1 /* (set! chicken.tcp#tcp-abandon-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3046,a[2]=((C_word)li39),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[101]+1 /* (set! chicken.tcp#tcp-listener-fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3062,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp));
t14=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t14;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}

/* chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_fcall f_1660(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,3)))){
C_save_and_reclaim_args((void *)trf_1660,4,t0,t1,t2,t3);}
a=C_alloc(14);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1664,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(make_socket_nonblocking(t3))){
t5=t4;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_1664(2,av2);}}
else{
t5=stub109(C_SCHEME_UNDEFINED);
t6=C_i_foreign_fixnum_argumentp(t3);
t7=stub168(C_SCHEME_UNDEFINED,t6);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2411,a[2]=t4,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2415,a[2]=t8,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t9;
av2[2]=lf[63];
av2[3]=lf[13];
tp(4,av2);}}}

/* k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_1664(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_1664,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1667,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[19]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[19]+1);
av2[1]=t2;
av2[2]=C_fix(1024);
av2[3]=C_make_character(32);
tp(4,av2);}}

/* k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_1667(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,2)))){
C_save_and_reclaim((void *)f_1667,c,av);}
a=C_alloc(24);
t2=C_a_i_vector5(&a,5,((C_word*)t0)[2],C_SCHEME_FALSE,C_SCHEME_FALSE,t1,C_fix(0));
t3=C_fix(0);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_fix(0);
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1673,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,a[5]=t2,a[6]=t6,a[7]=((C_word*)t0)[3],a[8]=t10,a[9]=t8,tmp=(C_word)a,a+=10,tmp);
/* tcp.scm:372: tbs */
t12=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t12;
av2[1]=t11;
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}

/* k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_1673(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_1673,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1676,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
if(C_truep(t1)){
t3=C_fixnum_greaterp(t1,C_fix(0));
t4=t2;
f_1676(t4,(C_truep(t3)?lf[62]:C_SCHEME_FALSE));}
else{
t3=t2;
f_1676(t3,C_SCHEME_FALSE);}}

/* k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_fcall f_1676(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(66,0,8)))){
C_save_and_reclaim_args((void *)trf_1676,2,t0,t1);}
a=C_alloc(66);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1677,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li7),tmp=(C_word)a,a+=8,tmp);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1774,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[5],a[5]=t3,a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2064,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=((C_word)li15),tmp=(C_word)a,a+=7,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2086,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word)li16),tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2128,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[5],a[6]=((C_word)li17),tmp=(C_word)a,a+=7,tmp);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2178,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=((C_word)li18),tmp=(C_word)a,a+=7,tmp);
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2196,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=((C_word)li20),tmp=(C_word)a,a+=7,tmp);
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2261,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=((C_word)li24),tmp=(C_word)a,a+=7,tmp);
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2380,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word)li25),tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:401: chicken.port#make-input-port */
t13=*((C_word*)lf[61]+1);{
C_word av2[9];
av2[0]=t13;
av2[1]=t5;
av2[2]=t6;
av2[3]=t7;
av2[4]=t8;
av2[5]=t9;
av2[6]=t10;
av2[7]=t11;
av2[8]=t12;
((C_proc)(void*)(*((C_word*)t13+1)))(9,av2);}}

/* read-input in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_fcall f_1677(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_1677,2,t0,t1);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1681,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* tcp.scm:376: tcp-read-timeout */
t3=*((C_word*)lf[28]+1);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k1679 in read-input in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_1681(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_1681,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1684,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1771,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:377: chicken.time#current-process-milliseconds */
t4=*((C_word*)lf[42]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t2;
f_1684(t3,C_SCHEME_FALSE);}}

/* k1682 in k1679 in read-input in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_fcall f_1684(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,2)))){
C_save_and_reclaim_args((void *)trf_1684,2,t0,t1);}
a=C_alloc(13);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1689,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word)li6),tmp=(C_word)a,a+=11,tmp));
t5=((C_word*)t3)[1];{
C_word av2[2];
av2[0]=t5;
av2[1]=((C_word*)t0)[8];
f_1689(2,av2);}}

/* loop in k1682 in k1679 in read-input in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_1689(C_word c,C_word *av){
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
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_1689,c,av);}
a=C_alloc(7);
t2=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t3=(C_truep(((C_word*)t0)[3])?C_i_foreign_block_argumentp(((C_word*)t0)[3]):C_SCHEME_FALSE);
t4=C_fix(1024);
t5=C_fix(0);
t6=stub176(C_SCHEME_UNDEFINED,t2,t3,t4,t5);
t7=C_eqp(C_fix((C_word)SOCKET_ERROR),t6);
if(C_truep(t7)){
if(C_truep(stub118(C_SCHEME_UNDEFINED))){
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1708,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[6])){
/* tcp.scm:383: ##sys#thread-block-for-timeout! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[39]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[39]+1);
av2[1]=t8;
av2[2]=*((C_word*)lf[33]+1);
av2[3]=((C_word*)t0)[6];
tp(4,av2);}}
else{
t9=t8;{
C_word *av2=av;
av2[0]=t9;
av2[1]=C_SCHEME_UNDEFINED;
f_1708(2,av2);}}}
else{
if(C_truep(stub124(C_SCHEME_UNDEFINED))){
/* tcp.scm:393: ##sys#dispatch-interrupt */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[40]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t1;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
tp(3,av2);}}
else{
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1745,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1749,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t9;
av2[2]=lf[41];
av2[3]=lf[13];
tp(4,av2);}}}}
else{
t8=C_set_block_item(((C_word*)t0)[7],0,t6);
t9=C_i_set_i_slot(((C_word*)t0)[8],C_fix(4),t6);
t10=C_set_block_item(((C_word*)t0)[9],0,C_fix(0));
t11=t1;{
C_word *av2=av;
av2[0]=t11;
av2[1]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}}

/* k1706 in loop in k1682 in k1679 in read-input in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_1708(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1708,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1711,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:385: ##sys#thread-block-for-i/o! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[37]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t2;
av2[2]=*((C_word*)lf[33]+1);
av2[3]=((C_word*)t0)[5];
av2[4]=lf[38];
tp(5,av2);}}

/* k1709 in k1706 in loop in k1682 in k1679 in read-input in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_1711(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_1711,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1714,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:386: ##sys#thread-yield! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[36]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t2;
tp(2,av2);}}

/* k1712 in k1709 in k1706 in loop in k1682 in k1679 in read-input in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_1714(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_1714,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1717,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_slot(*((C_word*)lf[33]+1),C_fix(13)))){
/* tcp.scm:388: ##sys#signal-hook */
t3=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[34];
av2[3]=lf[35];
av2[4]=((C_word*)t0)[4];
av2[5]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}
else{
/* tcp.scm:391: loop */
t3=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
f_1689(2,av2);}}}

/* k1715 in k1712 in k1709 in k1706 in loop in k1682 in k1679 in read-input in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 in ... */
static void C_ccall f_1717(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1717,c,av);}
/* tcp.scm:391: loop */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
f_1689(2,av2);}}

/* k1743 in loop in k1682 in k1679 in read-input in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_1745(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1745,c,av);}
/* tcp.scm:395: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=C_SCHEME_FALSE;
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k1747 in loop in k1682 in k1679 in read-input in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_1749(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1749,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1753,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=stub109(C_SCHEME_UNDEFINED);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t3);
/* tcp.scm:171: ##sys#peek-c-string */
t6=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t2;
av2[2]=stub113(t4,t5);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k1751 in k1747 in loop in k1682 in k1679 in read-input in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_1753(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1753,c,av);}
/* tcp.scm:395: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
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

/* k1769 in k1679 in read-input in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_1771(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,1)))){
C_save_and_reclaim((void *)f_1771,c,av);}
a=C_alloc(29);
t2=((C_word*)t0)[2];
f_1684(t2,C_s_a_i_plus(&a,2,t1,((C_word*)t0)[3]));}

/* k1772 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_1774(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(29,c,4)))){
C_save_and_reclaim((void *)f_1774,c,av);}
a=C_alloc(29);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1775,a[2]=((C_word*)t0)[2],a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1915,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=(C_truep(((C_word*)((C_word*)t0)[5])[1])?(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2028,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t2,a[5]=((C_word)li11),tmp=(C_word)a,a+=6,tmp):(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2048,a[2]=t2,a[3]=((C_word)li12),tmp=(C_word)a,a+=4,tmp));
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1942,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t2,a[8]=((C_word)li13),tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)((C_word*)t0)[5])[1])){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2012,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word)li14),tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:514: chicken.port#make-output-port */
t7=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=t4;
av2[3]=t5;
av2[4]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
/* tcp.scm:514: chicken.port#make-output-port */
t6=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=t5;
av2[4]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}}

/* output in k1772 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_fcall f_1775(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1775,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1779,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:484: tcp-write-timeout */
t4=*((C_word*)lf[29]+1);{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k1777 in output in k1772 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_1779(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_1779,c,av);}
a=C_alloc(11);
t2=C_block_size(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1790,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t1)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1912,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:487: chicken.time#current-process-milliseconds */
t5=*((C_word*)lf[42]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=t3;
f_1790(t4,C_SCHEME_FALSE);}}

/* k1788 in k1777 in output in k1772 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_fcall f_1790(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,5)))){
C_save_and_reclaim_args((void *)trf_1790,2,t0,t1);}
a=C_alloc(9);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1792,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word)li9),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_1792(t5,((C_word*)t0)[5],((C_word*)t0)[6],C_fix(0),t1);}

/* loop in k1788 in k1777 in output in k1772 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_fcall f_1792(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_1792,5,t0,t1,t2,t3,t4);}
a=C_alloc(9);
t5=C_i_fixnum_min(C_fix(8192),t2);
t6=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t7=(C_truep(((C_word*)t0)[3])?C_i_foreign_block_argumentp(((C_word*)t0)[3]):C_SCHEME_FALSE);
t8=C_i_foreign_fixnum_argumentp(t3);
t9=C_i_foreign_fixnum_argumentp(t5);
t10=C_fix(0);
t11=stub218(C_SCHEME_UNDEFINED,t6,t7,t8,t9,t10);
t12=C_eqp(C_fix((C_word)SOCKET_ERROR),t11);
if(C_truep(t12)){
if(C_truep(stub118(C_SCHEME_UNDEFINED))){
t13=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1814,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=t4,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t4)){
/* tcp.scm:493: ##sys#thread-block-for-timeout! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[39]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[39]+1);
av2[1]=t13;
av2[2]=*((C_word*)lf[33]+1);
av2[3]=t4;
tp(4,av2);}}
else{
t14=t13;{
C_word av2[2];
av2[0]=t14;
av2[1]=C_SCHEME_UNDEFINED;
f_1814(2,av2);}}}
else{
if(C_truep(stub124(C_SCHEME_UNDEFINED))){
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1846,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t3,a[5]=t4,a[6]=((C_word)li8),tmp=(C_word)a,a+=7,tmp);
/* tcp.scm:503: ##sys#dispatch-interrupt */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[40]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t1;
av2[2]=t13;
tp(3,av2);}}
else{
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1857,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1861,a[2]=t13,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t14;
av2[2]=lf[45];
av2[3]=lf[13];
tp(4,av2);}}}}
else{
if(C_truep(C_fixnum_lessp(t11,t2))){
t13=C_fixnum_difference(t2,t11);
t14=C_fixnum_plus(t3,t11);
t15=C_eqp(t11,C_fix(0));
if(C_truep(t15)){
/* tcp.scm:508: loop */
t18=t1;
t19=t13;
t20=t14;
t21=((C_word*)t0)[5];
t1=t18;
t2=t19;
t3=t20;
t4=t21;
goto loop;}
else{
if(C_truep(((C_word*)t0)[5])){
t16=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1905,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t13,a[6]=t14,tmp=(C_word)a,a+=7,tmp);
/* tcp.scm:512: chicken.time#current-process-milliseconds */
t17=*((C_word*)lf[42]+1);{
C_word av2[2];
av2[0]=t17;
av2[1]=t16;
((C_proc)(void*)(*((C_word*)t17+1)))(2,av2);}}
else{
/* tcp.scm:508: loop */
t18=t1;
t19=t13;
t20=t14;
t21=C_SCHEME_FALSE;
t1=t18;
t2=t19;
t3=t20;
t4=t21;
goto loop;}}}
else{
t13=t1;{
C_word av2[2];
av2[0]=t13;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}}}

/* k1812 in loop in k1788 in k1777 in output in k1772 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_1814(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_1814,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1817,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* tcp.scm:495: ##sys#thread-block-for-i/o! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[37]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t2;
av2[2]=*((C_word*)lf[33]+1);
av2[3]=((C_word*)t0)[8];
av2[4]=lf[44];
tp(5,av2);}}

/* k1815 in k1812 in loop in k1788 in k1777 in output in k1772 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_1817(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_1817,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1820,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* tcp.scm:496: ##sys#thread-yield! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[36]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t2;
tp(2,av2);}}

/* k1818 in k1815 in k1812 in loop in k1788 in k1777 in output in k1772 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 in ... */
static void C_ccall f_1820(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_1820,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1823,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_slot(*((C_word*)lf[33]+1),C_fix(13)))){
/* tcp.scm:498: ##sys#signal-hook */
t3=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[34];
av2[3]=lf[43];
av2[4]=((C_word*)t0)[7];
av2[5]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}
else{
/* tcp.scm:501: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1792(t3,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);}}

/* k1821 in k1818 in k1815 in k1812 in loop in k1788 in k1777 in output in k1772 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in ... */
static void C_ccall f_1823(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1823,c,av);}
/* tcp.scm:501: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1792(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);}

/* a1845 in loop in k1788 in k1777 in output in k1772 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_1846(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1846,c,av);}
/* tcp.scm:504: g623 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1792(t2,t1,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k1855 in loop in k1788 in k1777 in output in k1772 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_1857(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1857,c,av);}
/* tcp.scm:506: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=C_SCHEME_FALSE;
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k1859 in loop in k1788 in k1777 in output in k1772 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_1861(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1861,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1865,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=stub109(C_SCHEME_UNDEFINED);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t3);
/* tcp.scm:171: ##sys#peek-c-string */
t6=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t2;
av2[2]=stub113(t4,t5);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k1863 in k1859 in loop in k1788 in k1777 in output in k1772 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_1865(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1865,c,av);}
/* tcp.scm:506: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
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

/* k1903 in loop in k1788 in k1777 in output in k1772 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_1905(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,4)))){
C_save_and_reclaim((void *)f_1905,c,av);}
a=C_alloc(29);
t2=C_s_a_i_plus(&a,2,t1,((C_word*)t0)[2]);
/* tcp.scm:508: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1792(t3,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t2);}

/* k1910 in k1777 in output in k1772 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_1912(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,1)))){
C_save_and_reclaim((void *)f_1912,c,av);}
a=C_alloc(29);
t2=((C_word*)t0)[2];
f_1790(t2,C_s_a_i_plus(&a,2,t1,((C_word*)t0)[3]));}

/* k1913 in k1772 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_1915(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1915,c,av);}
a=C_alloc(6);
t2=C_i_setslot(((C_word*)t0)[2],C_fix(3),lf[46]);
t3=C_i_setslot(t1,C_fix(3),lf[47]);
t4=C_i_setslot(((C_word*)t0)[2],C_fix(7),lf[48]);
t5=C_i_setslot(t1,C_fix(7),lf[48]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1930,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:542: ##sys#set-port-data! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[49]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t6;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}

/* k1928 in k1913 in k1772 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_1930(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_1930,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1933,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:543: ##sys#set-port-data! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[49]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
tp(4,av2);}}

/* k1931 in k1928 in k1913 in k1772 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_1933(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1933,c,av);}
/* tcp.scm:544: scheme#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
C_values(4,av2);}}

/* a1941 in k1772 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_1942(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_1942,c,av);}
a=C_alloc(10);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=C_SCHEME_UNDEFINED;
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1950,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(C_truep(((C_word*)((C_word*)t0)[6])[1])?C_fixnum_greaterp(C_block_size(((C_word*)((C_word*)t0)[6])[1]),C_fix(0)):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1999,a[2]=((C_word*)t0)[6],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:528: output */
t6=((C_word*)t0)[7];
f_1775(t6,t5,((C_word*)((C_word*)t0)[6])[1]);}
else{
t5=t3;
f_1950(t5,C_SCHEME_UNDEFINED);}}}

/* k1948 in a1941 in k1772 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_fcall f_1950(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1950,2,t0,t1);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1953,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_slot(((C_word*)t0)[5],C_fix(2)))){
t3=t2;
f_1953(t3,C_SCHEME_UNDEFINED);}
else{
t3=C_fix((C_word)SHUT_WR);
t4=t2;
f_1953(t4,stub187(C_SCHEME_UNDEFINED,C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]),C_i_foreign_fixnum_argumentp(t3)));}}

/* k1951 in k1948 in a1941 in k1772 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_fcall f_1953(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_1953,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1959,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t3=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t4=t2;
f_1959(t4,C_eqp(C_fix((C_word)SOCKET_ERROR),stub168(C_SCHEME_UNDEFINED,t3)));}
else{
t3=t2;
f_1959(t3,C_SCHEME_FALSE);}}

/* k1957 in k1951 in k1948 in a1941 in k1772 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_fcall f_1959(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_1959,2,t0,t1);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1966,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1970,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t3;
av2[2]=lf[51];
av2[3]=lf[13];
tp(4,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k1964 in k1957 in k1951 in k1948 in a1941 in k1772 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_1966(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1966,c,av);}
/* tcp.scm:532: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=C_SCHEME_FALSE;
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k1968 in k1957 in k1951 in k1948 in a1941 in k1772 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_1970(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1970,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1974,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=stub109(C_SCHEME_UNDEFINED);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t3);
/* tcp.scm:171: ##sys#peek-c-string */
t6=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t2;
av2[2]=stub113(t4,t5);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k1972 in k1968 in k1957 in k1951 in k1948 in a1941 in k1772 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_1974(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1974,c,av);}
/* tcp.scm:532: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
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

/* k1997 in a1941 in k1772 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_1999(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1999,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,lf[52]);
t3=((C_word*)t0)[3];
f_1950(t3,t2);}

/* f_2012 in k1772 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2012(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2012,c,av);}
a=C_alloc(4);
t2=C_block_size(((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(C_fixnum_greaterp(t2,C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2022,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:536: output */
t4=((C_word*)t0)[3];
f_1775(t4,t3,((C_word*)((C_word*)t0)[2])[1]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2020 */
static void C_ccall f_2022(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2022,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,lf[53]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_2028 in k1772 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2028(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2028,c,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2033,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:517: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=t2;
tp(4,av2);}}

/* k2031 */
static void C_ccall f_2033(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2033,c,av);}
a=C_alloc(4);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_block_size(((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[3]))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2042,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:519: output */
t5=((C_word*)t0)[5];
f_1775(t5,t4,((C_word*)((C_word*)t0)[2])[1]);}
else{
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k2040 in k2031 */
static void C_ccall f_2042(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2042,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,lf[50]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_2048 in k1772 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2048(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2048,c,av);}
t3=C_block_size(t2);
if(C_truep(C_fixnum_greaterp(t3,C_fix(0)))){
/* tcp.scm:523: output */
t4=((C_word*)t0)[2];
f_1775(t4,t1,t2);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* a2063 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2064(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2064,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2068,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
/* tcp.scm:404: read-input */
t3=((C_word*)t0)[5];
f_1677(t3,t2);}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_2068(2,av2);}}}

/* k2066 in a2063 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2068(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2068,c,av);}
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_FILE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_subchar(((C_word*)t0)[5],((C_word*)((C_word*)t0)[2])[1]);
t3=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t4=C_set_block_item(((C_word*)t0)[2],0,t3);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* a2085 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2086(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_2086,c,av);}
a=C_alloc(11);
t2=C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t2)){
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_foreign_fixnum_argumentp(((C_word*)t0)[4]);
t4=stub204(C_SCHEME_UNDEFINED,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2099,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_eqp(C_fix((C_word)SOCKET_ERROR),t4);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2112,a[2]=t5,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2116,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t8;
av2[2]=lf[55];
av2[3]=lf[13];
tp(4,av2);}}
else{
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_eqp(t4,C_fix(1));
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}}

/* k2097 in a2085 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2099(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2099,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(((C_word*)t0)[3],C_fix(1));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2110 in a2085 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2112(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2112,c,av);}
/* tcp.scm:416: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=C_SCHEME_FALSE;
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k2114 in a2085 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2116(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2116,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2120,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=stub109(C_SCHEME_UNDEFINED);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t3);
/* tcp.scm:171: ##sys#peek-c-string */
t6=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t2;
av2[2]=stub113(t4,t5);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k2118 in k2114 in a2085 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2120(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2120,c,av);}
/* tcp.scm:416: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
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

/* a2127 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2128(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_2128,c,av);}
a=C_alloc(5);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=C_SCHEME_UNDEFINED;
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2136,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_slot(((C_word*)t0)[5],C_fix(1)))){
t4=t3;
f_2136(t4,C_SCHEME_UNDEFINED);}
else{
t4=C_fix((C_word)SHUT_RD);
t5=t3;
f_2136(t5,stub187(C_SCHEME_UNDEFINED,C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]),C_i_foreign_fixnum_argumentp(t4)));}}}

/* k2134 in a2127 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_fcall f_2136(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_2136,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2142,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t3=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t4=t2;
f_2142(t4,C_eqp(C_fix((C_word)SOCKET_ERROR),stub168(C_SCHEME_UNDEFINED,t3)));}
else{
t3=t2;
f_2142(t3,C_SCHEME_FALSE);}}

/* k2140 in k2134 in a2127 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_fcall f_2142(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_2142,2,t0,t1);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2149,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2153,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t3;
av2[2]=lf[56];
av2[3]=lf[13];
tp(4,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k2147 in k2140 in k2134 in a2127 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2149(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2149,c,av);}
/* tcp.scm:423: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=C_SCHEME_FALSE;
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k2151 in k2140 in k2134 in a2127 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2153(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2153,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2157,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=stub109(C_SCHEME_UNDEFINED);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t3);
/* tcp.scm:171: ##sys#peek-c-string */
t6=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t2;
av2[2]=stub113(t4,t5);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k2155 in k2151 in k2140 in k2134 in a2127 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2157(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2157,c,av);}
/* tcp.scm:423: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
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

/* a2177 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2178(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2178,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2182,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
/* tcp.scm:426: read-input */
t3=((C_word*)t0)[5];
f_1677(t3,t2);}
else{
t3=C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=(C_truep(t3)?C_subchar(((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]):C_SCHEME_END_OF_FILE);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2180 in a2177 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2182(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2182,c,av);}
t2=C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(t2)?C_subchar(((C_word*)t0)[5],((C_word*)((C_word*)t0)[2])[1]):C_SCHEME_END_OF_FILE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a2195 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2196(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_2196,c,av);}
a=C_alloc(11);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2202,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=t7,a[7]=((C_word*)t0)[5],a[8]=((C_word)li19),tmp=(C_word)a,a+=9,tmp));
t9=((C_word*)t7)[1];
f_2202(t9,t1,t3,C_fix(0),t5);}

/* loop in a2195 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_fcall f_2202(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_2202,5,t0,t1,t2,t3,t4);}
a=C_alloc(8);
t5=C_eqp(t2,C_fix(0));
if(C_truep(t5)){
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
if(C_truep(C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
t6=C_fixnum_difference(((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[2])[1]);
t7=C_fixnum_lessp(t2,t6);
t8=(C_truep(t7)?t2:t6);
t9=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],t8);
t10=C_substring_copy(((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)((C_word*)t0)[2])[1],t9,t4);
t11=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],t8);
t12=C_set_block_item(((C_word*)t0)[2],0,t11);
/* tcp.scm:438: loop */
t14=t1;
t15=C_fixnum_difference(t2,t8);
t16=C_fixnum_plus(t3,t8);
t17=C_fixnum_plus(t4,t8);
t1=t14;
t2=t15;
t3=t16;
t4=t17;
goto loop;}
else{
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2250,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=t4,tmp=(C_word)a,a+=8,tmp);
/* tcp.scm:440: read-input */
t7=((C_word*)t0)[7];
f_1677(t7,t6);}}}

/* k2248 in loop in a2195 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2250(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2250,c,av);}
t2=C_eqp(((C_word*)((C_word*)t0)[2])[1],C_fix(0));
if(C_truep(t2)){
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* tcp.scm:443: loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_2202(t3,((C_word*)t0)[3],((C_word*)t0)[6],((C_word*)t0)[4],((C_word*)t0)[7]);}}

/* a2260 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2261(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_2261,c,av);}
a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2265,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
/* tcp.scm:446: read-input */
t5=((C_word*)t0)[5];
f_1677(t5,t4);}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_2265(2,av2);}}}

/* k2263 in a2260 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2265(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,5)))){
C_save_and_reclaim((void *)f_2265,c,av);}
a=C_alloc(15);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_FILE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(C_truep(((C_word*)t0)[5])?((C_word*)t0)[5]:C_fixnum_difference(*((C_word*)lf[57]+1),((C_word*)((C_word*)t0)[2])[1]));
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2279,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word)li22),tmp=(C_word)a,a+=8,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2335,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[2],a[4]=((C_word)li23),tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:450: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=t5;
av2[3]=t6;
C_call_with_values(4,av2);}}}

/* a2278 in k2263 in a2260 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2279(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_2279,c,av);}
a=C_alloc(8);
t2=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]);
t3=C_i_fixnum_min(((C_word*)((C_word*)t0)[4])[1],t2);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2289,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li21),tmp=(C_word)a,a+=8,tmp);
/* tcp.scm:451: ##sys#scan-buffer-line */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[58]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[58]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[5];
av2[3]=t3;
av2[4]=((C_word*)((C_word*)t0)[2])[1];
av2[5]=t4;
tp(6,av2);}}

/* a2288 in a2278 in k2263 in a2260 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2289(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_2289,c,av);}
a=C_alloc(8);
t3=C_fixnum_difference(t2,((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(C_fixnum_greater_or_equal_p(t3,((C_word*)((C_word*)t0)[3])[1]))){
/* tcp.scm:458: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t1;
av2[2]=C_SCHEME_FALSE;
av2[3]=t2;
av2[4]=C_SCHEME_FALSE;
C_values(5,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2305,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* tcp.scm:459: read-input */
t5=((C_word*)t0)[6];
f_1677(t5,t4);}}

/* k2303 in a2288 in a2278 in k2263 in a2260 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2305(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2305,c,av);}
t2=C_fixnum_difference(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]);
t3=C_set_block_item(((C_word*)t0)[2],0,t2);
if(C_truep(C_fixnum_lessp(((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[5])[1]))){
t4=C_fixnum_plus(((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[2])[1]);
/* tcp.scm:462: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[6];
av2[2]=((C_word*)t0)[7];
av2[3]=((C_word*)((C_word*)t0)[4])[1];
av2[4]=C_i_fixnum_min(((C_word*)((C_word*)t0)[5])[1],t4);
C_values(5,av2);}}
else{
/* tcp.scm:465: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[6];
av2[2]=C_SCHEME_FALSE;
av2[3]=((C_word*)((C_word*)t0)[4])[1];
av2[4]=C_SCHEME_FALSE;
C_values(5,av2);}}}

/* a2334 in k2263 in a2260 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2335(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2335,c,av);}
if(C_truep(t4)){
t5=C_slot(((C_word*)t0)[2],C_fix(4));
t6=C_fixnum_plus(t5,C_fix(1));
t7=C_i_set_i_slot(((C_word*)t0)[2],C_fix(4),t6);
t8=C_i_set_i_slot(((C_word*)t0)[2],C_fix(5),C_fix(0));
t9=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t10=t1;{
C_word *av2=av;
av2[0]=t10;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t5=C_slot(((C_word*)t0)[2],C_fix(5));
t6=C_block_size(t3);
t7=C_fixnum_plus(t5,t6);
t8=C_i_set_i_slot(((C_word*)t0)[2],C_fix(5),t7);
t9=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t10=t1;{
C_word *av2=av;
av2[0]=t10;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}}

/* a2379 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2380(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_2380,c,av);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=lf[59];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2390,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:478: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[60]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[60]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)((C_word*)t0)[2])[1];
av2[4]=((C_word*)((C_word*)t0)[3])[1];
tp(5,av2);}}}

/* k2388 in a2379 in k1674 in k1671 in k1665 in k1662 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2390(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2390,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2409 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2411(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2411,c,av);}
/* tcp.scm:365: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k2413 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2415(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2415,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2419,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
/* tcp.scm:171: ##sys#peek-c-string */
t5=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=stub113(t3,t4);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k2417 in k2413 in chicken.tcp#io-ports in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2419(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2419,c,av);}
/* tcp.scm:365: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
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

/* chicken.tcp#tcp-accept in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2423(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_2423,c,av);}
a=C_alloc(5);
t3=C_i_check_structure(t2,lf[5]);
t4=C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2433,a[2]=t4,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:549: tcp-accept-timeout */
t6=*((C_word*)lf[31]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k2431 in chicken.tcp#tcp-accept in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2433(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_2433,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2436,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2516,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:550: chicken.time#current-process-milliseconds */
t4=*((C_word*)lf[42]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t2;
f_2436(t3,C_SCHEME_FALSE);}}

/* k2434 in k2431 in chicken.tcp#tcp-accept in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_fcall f_2436(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_2436,2,t0,t1);}
a=C_alloc(10);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2441,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=((C_word)li27),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];{
C_word av2[2];
av2[0]=t5;
av2[1]=((C_word*)t0)[5];
f_2441(2,av2);}}

/* loop in k2434 in k2431 in chicken.tcp#tcp-accept in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2441(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_2441,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2445,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[6])){
/* tcp.scm:553: ##sys#thread-block-for-timeout! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[39]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[39]+1);
av2[1]=t2;
av2[2]=*((C_word*)lf[33]+1);
av2[3]=((C_word*)t0)[6];
tp(4,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_2445(2,av2);}}}

/* k2443 in loop in k2434 in k2431 in chicken.tcp#tcp-accept in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2445(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_2445,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2448,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* tcp.scm:554: ##sys#thread-block-for-i/o! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[37]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t2;
av2[2]=*((C_word*)lf[33]+1);
av2[3]=((C_word*)t0)[2];
av2[4]=lf[38];
tp(5,av2);}}

/* k2446 in k2443 in loop in k2434 in k2431 in chicken.tcp#tcp-accept in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2448(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_2448,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2451,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* tcp.scm:555: ##sys#thread-yield! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[36]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t2;
tp(2,av2);}}

/* k2449 in k2446 in k2443 in loop in k2434 in k2431 in chicken.tcp#tcp-accept in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2451(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_2451,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2454,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_slot(*((C_word*)lf[33]+1),C_fix(13)))){
/* tcp.scm:557: ##sys#signal-hook */
t3=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[34];
av2[3]=lf[65];
av2[4]=lf[67];
av2[5]=((C_word*)t0)[6];
av2[6]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_2454(2,av2);}}}

/* k2452 in k2449 in k2446 in k2443 in loop in k2434 in k2431 in chicken.tcp#tcp-accept in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2454(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_2454,c,av);}
a=C_alloc(7);
t2=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t3=stub157(C_SCHEME_UNDEFINED,t2,C_SCHEME_FALSE,C_SCHEME_FALSE);
t4=C_eqp(C_fix((C_word)INVALID_SOCKET),t3);
if(C_truep(C_i_not(t4))){
/* tcp.scm:563: io-ports */
t5=lf[32];
f_1660(t5,((C_word*)t0)[3],lf[65],t3);}
else{
if(C_truep(stub124(C_SCHEME_UNDEFINED))){
/* tcp.scm:565: ##sys#dispatch-interrupt */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[40]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[40]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)((C_word*)t0)[4])[1];
tp(3,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2482,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2486,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t6;
av2[2]=lf[66];
av2[3]=lf[13];
tp(4,av2);}}}}

/* k2480 in k2452 in k2449 in k2446 in k2443 in loop in k2434 in k2431 in chicken.tcp#tcp-accept in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2482(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2482,c,av);}
/* tcp.scm:567: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[65];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k2484 in k2452 in k2449 in k2446 in k2443 in loop in k2434 in k2431 in chicken.tcp#tcp-accept in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2486(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2486,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2490,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=stub109(C_SCHEME_UNDEFINED);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t3);
/* tcp.scm:171: ##sys#peek-c-string */
t6=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t2;
av2[2]=stub113(t4,t5);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k2488 in k2484 in k2452 in k2449 in k2446 in k2443 in loop in k2434 in k2431 in chicken.tcp#tcp-accept in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2490(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2490,c,av);}
/* tcp.scm:567: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
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

/* k2514 in k2431 in chicken.tcp#tcp-accept in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2516(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,1)))){
C_save_and_reclaim((void *)f_2516,c,av);}
a=C_alloc(29);
t2=((C_word*)t0)[2];
f_2436(t2,C_s_a_i_plus(&a,2,((C_word*)t0)[3],t1));}

/* chicken.tcp#tcp-accept-ready? in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2518(C_word c,C_word *av){
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
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_2518,c,av);}
a=C_alloc(11);
t3=C_i_check_structure_2(t2,lf[5],lf[69]);
t4=C_slot(t2,C_fix(1));
t5=C_i_foreign_fixnum_argumentp(t4);
t6=stub204(C_SCHEME_UNDEFINED,t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2528,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=C_eqp(C_fix((C_word)SOCKET_ERROR),t6);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2541,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2545,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t10;
av2[2]=lf[70];
av2[3]=lf[13];
tp(4,av2);}}
else{
t9=t1;{
C_word *av2=av;
av2[0]=t9;
av2[1]=C_eqp(C_fix(1),t6);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}

/* k2526 in chicken.tcp#tcp-accept-ready? in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2528(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2528,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(C_fix(1),((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2539 in chicken.tcp#tcp-accept-ready? in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2541(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2541,c,av);}
/* tcp.scm:574: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[69];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k2543 in chicken.tcp#tcp-accept-ready? in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2545(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2545,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2549,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=stub109(C_SCHEME_UNDEFINED);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t3);
/* tcp.scm:171: ##sys#peek-c-string */
t6=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t2;
av2[2]=stub113(t4,t5);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k2547 in k2543 in chicken.tcp#tcp-accept-ready? in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2549(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2549,c,av);}
/* tcp.scm:574: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
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

/* chicken.tcp#tcp-connect in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2568(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_2568,c,av);}
a=C_alloc(9);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_rest_nullp(c,3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2575,a[2]=t3,a[3]=t1,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:587: tcp-connect-timeout */
t9=*((C_word*)lf[30]+1);{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}

/* k2573 in chicken.tcp#tcp-connect in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2575(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_2575,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2578,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2843,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:588: chicken.time#current-process-milliseconds */
t4=*((C_word*)lf[42]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t2;
f_2578(t3,C_SCHEME_FALSE);}}

/* k2576 in k2573 in chicken.tcp#tcp-connect in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_fcall f_2578(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_2578,2,t0,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2581,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=C_fix((C_word)sizeof(struct sockaddr_in));
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[19]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[19]+1);
av2[1]=t2;
av2[2]=t3;
av2[3]=C_make_character(32);
tp(4,av2);}}

/* k2579 in k2576 in k2573 in chicken.tcp#tcp-connect in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2581(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,4)))){
C_save_and_reclaim((void *)f_2581,c,av);}
a=C_alloc(21);
t2=C_i_check_string(((C_word*)((C_word*)t0)[2])[1]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2587,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)((C_word*)t0)[5])[1])){
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2587(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2818,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2826,a[2]=((C_word*)t0)[2],a[3]=((C_word)li32),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2832,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word)li33),tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:592: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t4;
av2[2]=t5;
av2[3]=t6;
C_call_with_values(4,av2);}}}

/* k2585 in k2579 in k2576 in k2573 in chicken.tcp#tcp-connect in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2587(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_2587,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2590,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* tcp.scm:594: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[20]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[20]+1);
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[6])[1];
tp(3,av2);}}

/* k2588 in k2585 in k2579 in k2576 in k2573 in chicken.tcp#tcp-connect in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2590(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_2590,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2593,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2812,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:595: gethostaddr */
f_1255(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[6])[1]);}

/* k2591 in k2588 in k2585 in k2579 in k2576 in k2573 in chicken.tcp#tcp-connect in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2593(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_2593,c,av);}
a=C_alloc(16);
t2=C_fix((C_word)AF_INET);
t3=C_fix((C_word)SOCK_STREAM);
t4=stub130(C_SCHEME_UNDEFINED,C_i_foreign_fixnum_argumentp(t2),C_i_foreign_fixnum_argumentp(t3),C_fix(0));
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2599,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t6=C_eqp(C_fix((C_word)INVALID_SOCKET),t4);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2795,a[2]=t5,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2799,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t8;
av2[2]=lf[78];
av2[3]=lf[13];
tp(4,av2);}}
else{
t7=t5;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_UNDEFINED;
f_2599(2,av2);}}}

/* k2597 in k2591 in k2588 in k2585 in k2579 in k2576 in k2573 in chicken.tcp#tcp-connect in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2599(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_2599,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2602,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t4=C_eqp(C_fix((C_word)SOCKET_ERROR),stub209(C_SCHEME_UNDEFINED,t3));
if(C_truep(t4)){
t5=stub109(C_SCHEME_UNDEFINED);
t6=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t7=stub168(C_SCHEME_UNDEFINED,t6);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2771,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2775,a[2]=t8,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t9;
av2[2]=lf[77];
av2[3]=lf[13];
tp(4,av2);}}
else{
t5=t2;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_2602(2,av2);}}}

/* k2600 in k2597 in k2591 in k2588 in k2585 in k2579 in k2576 in k2573 in chicken.tcp#tcp-connect in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2602(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2602,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2605,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(make_socket_nonblocking(((C_word*)t0)[2]))){
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_2605(2,av2);}}
else{
t3=stub109(C_SCHEME_UNDEFINED);
t4=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t5=stub168(C_SCHEME_UNDEFINED,t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2745,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2749,a[2]=t6,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t7;
av2[2]=lf[76];
av2[3]=lf[13];
tp(4,av2);}}}

/* k2603 in k2600 in k2597 in k2591 in k2588 in k2585 in k2579 in k2576 in k2573 in chicken.tcp#tcp-connect in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2605(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_2605,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2608,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2671,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t4,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li30),tmp=(C_word)a,a+=9,tmp));
t6=((C_word*)t4)[1];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t2;
f_2671(2,av2);}}

/* k2606 in k2603 in k2600 in k2597 in k2591 in k2588 in k2585 in k2579 in k2576 in k2573 in chicken.tcp#tcp-connect in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2608(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_2608,c,av);}
a=C_alloc(12);
t2=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t3=stub689(C_SCHEME_UNDEFINED,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2614,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=C_eqp(C_fix((C_word)SOCKET_ERROR),t3);
if(C_truep(t5)){
t6=stub109(C_SCHEME_UNDEFINED);
t7=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t8=stub168(C_SCHEME_UNDEFINED,t7);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2633,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2637,a[2]=t9,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t10;
av2[2]=lf[73];
av2[3]=lf[13];
tp(4,av2);}}
else{
if(C_truep(C_fixnum_greaterp(t3,C_fix(0)))){
t6=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t7=stub168(C_SCHEME_UNDEFINED,t6);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2659,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2663,a[2]=t8,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t9;
av2[2]=lf[74];
av2[3]=lf[13];
tp(4,av2);}}
else{
/* tcp.scm:622: io-ports */
t6=lf[32];
f_1660(t6,((C_word*)t0)[3],lf[72],((C_word*)t0)[2]);}}}

/* k2612 in k2606 in k2603 in k2600 in k2597 in k2591 in k2588 in k2585 in k2579 in k2576 in k2573 in chicken.tcp#tcp-connect in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2614(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2614,c,av);}
/* tcp.scm:622: io-ports */
t2=lf[32];
f_1660(t2,((C_word*)t0)[2],lf[72],((C_word*)t0)[3]);}

/* k2631 in k2606 in k2603 in k2600 in k2597 in k2591 in k2588 in k2585 in k2579 in k2576 in k2573 in chicken.tcp#tcp-connect in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2633(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2633,c,av);}
/* tcp.scm:618: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[72];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k2635 in k2606 in k2603 in k2600 in k2597 in k2591 in k2588 in k2585 in k2579 in k2576 in k2573 in chicken.tcp#tcp-connect in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2637(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2637,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2641,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
/* tcp.scm:171: ##sys#peek-c-string */
t5=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=stub113(t3,t4);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k2639 in k2635 in k2606 in k2603 in k2600 in k2597 in k2591 in k2588 in k2585 in k2579 in k2576 in k2573 in chicken.tcp#tcp-connect in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 in ... */
static void C_ccall f_2641(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2641,c,av);}
/* tcp.scm:618: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
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

/* k2657 in k2606 in k2603 in k2600 in k2597 in k2591 in k2588 in k2585 in k2579 in k2576 in k2573 in chicken.tcp#tcp-connect in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2659(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2659,c,av);}
/* tcp.scm:621: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[72];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k2661 in k2606 in k2603 in k2600 in k2597 in k2591 in k2588 in k2585 in k2579 in k2576 in k2573 in chicken.tcp#tcp-connect in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2663(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2663,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2667,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
/* tcp.scm:171: ##sys#peek-c-string */
t5=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=stub113(t3,t4);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k2665 in k2661 in k2606 in k2603 in k2600 in k2597 in k2591 in k2588 in k2585 in k2579 in k2576 in k2573 in chicken.tcp#tcp-connect in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 in ... */
static void C_ccall f_2667(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2667,c,av);}
/* tcp.scm:621: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
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

/* loop in k2603 in k2600 in k2597 in k2591 in k2588 in k2585 in k2579 in k2576 in k2573 in chicken.tcp#tcp-connect in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2671(C_word c,C_word *av){
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
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_2671,c,av);}
a=C_alloc(10);
t2=C_fix((C_word)sizeof(struct sockaddr_in));
t3=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t4=(C_truep(((C_word*)t0)[3])?C_i_foreign_block_argumentp(((C_word*)t0)[3]):C_SCHEME_FALSE);
t5=C_i_foreign_fixnum_argumentp(t2);
t6=C_eqp(C_fix((C_word)SOCKET_ERROR),stub195(C_SCHEME_UNDEFINED,t3,t4,t5));
if(C_truep(t6)){
if(C_truep(stub121(C_SCHEME_UNDEFINED))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2687,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[4])){
/* tcp.scm:608: ##sys#thread-block-for-timeout! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[39]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[39]+1);
av2[1]=t7;
av2[2]=*((C_word*)lf[33]+1);
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}
else{
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f3439,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:609: ##sys#thread-block-for-i/o! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[37]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t8;
av2[2]=*((C_word*)lf[33]+1);
av2[3]=((C_word*)t0)[2];
av2[4]=lf[44];
tp(5,av2);}}}
else{
if(C_truep(stub124(C_SCHEME_UNDEFINED))){
/* tcp.scm:612: ##sys#dispatch-interrupt */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[40]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t1;
av2[2]=((C_word*)((C_word*)t0)[5])[1];
tp(3,av2);}}
else{
t7=stub109(C_SCHEME_UNDEFINED);
t8=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t9=stub168(C_SCHEME_UNDEFINED,t8);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2718,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2722,a[2]=t10,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t11;
av2[2]=lf[75];
av2[3]=lf[13];
tp(4,av2);}}}}
else{
t7=C_SCHEME_UNDEFINED;
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k2685 in loop in k2603 in k2600 in k2597 in k2591 in k2588 in k2585 in k2579 in k2576 in k2573 in chicken.tcp#tcp-connect in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2687(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2687,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2690,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:609: ##sys#thread-block-for-i/o! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[37]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t2;
av2[2]=*((C_word*)lf[33]+1);
av2[3]=((C_word*)t0)[3];
av2[4]=lf[44];
tp(5,av2);}}

/* k2688 in k2685 in loop in k2603 in k2600 in k2597 in k2591 in k2588 in k2585 in k2579 in k2576 in k2573 in chicken.tcp#tcp-connect in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 in ... */
static void C_ccall f_2690(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2690,c,av);}
/* tcp.scm:610: ##sys#thread-yield! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[36]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[36]+1);
av2[1]=((C_word*)t0)[2];
tp(2,av2);}}

/* k2716 in loop in k2603 in k2600 in k2597 in k2591 in k2588 in k2585 in k2579 in k2576 in k2573 in chicken.tcp#tcp-connect in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2718(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_2718,c,av);}
/* tcp.scm:614: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[72];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)((C_word*)t0)[4])[1];
av2[7]=((C_word*)((C_word*)t0)[5])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(8,av2);}}

/* k2720 in loop in k2603 in k2600 in k2597 in k2591 in k2588 in k2585 in k2579 in k2576 in k2573 in chicken.tcp#tcp-connect in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2722(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2722,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2726,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
/* tcp.scm:171: ##sys#peek-c-string */
t5=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=stub113(t3,t4);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k2724 in k2720 in loop in k2603 in k2600 in k2597 in k2591 in k2588 in k2585 in k2579 in k2576 in k2573 in chicken.tcp#tcp-connect in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 in ... */
static void C_ccall f_2726(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2726,c,av);}
/* tcp.scm:614: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
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

/* k2743 in k2600 in k2597 in k2591 in k2588 in k2585 in k2579 in k2576 in k2573 in chicken.tcp#tcp-connect in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2745(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2745,c,av);}
/* tcp.scm:603: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[72];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k2747 in k2600 in k2597 in k2591 in k2588 in k2585 in k2579 in k2576 in k2573 in chicken.tcp#tcp-connect in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2749(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2749,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2753,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
/* tcp.scm:171: ##sys#peek-c-string */
t5=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=stub113(t3,t4);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k2751 in k2747 in k2600 in k2597 in k2591 in k2588 in k2585 in k2579 in k2576 in k2573 in chicken.tcp#tcp-connect in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2753(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2753,c,av);}
/* tcp.scm:603: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
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

/* k2769 in k2597 in k2591 in k2588 in k2585 in k2579 in k2576 in k2573 in chicken.tcp#tcp-connect in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2771(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2771,c,av);}
/* tcp.scm:601: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[72];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k2773 in k2597 in k2591 in k2588 in k2585 in k2579 in k2576 in k2573 in chicken.tcp#tcp-connect in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2775(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2775,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2779,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
/* tcp.scm:171: ##sys#peek-c-string */
t5=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=stub113(t3,t4);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k2777 in k2773 in k2597 in k2591 in k2588 in k2585 in k2579 in k2576 in k2573 in chicken.tcp#tcp-connect in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2779(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2779,c,av);}
/* tcp.scm:601: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
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

/* k2793 in k2591 in k2588 in k2585 in k2579 in k2576 in k2573 in chicken.tcp#tcp-connect in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_2795,c,av);}
/* tcp.scm:599: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[72];
av2[4]=t1;
av2[5]=((C_word*)((C_word*)t0)[3])[1];
av2[6]=((C_word*)((C_word*)t0)[4])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}

/* k2797 in k2591 in k2588 in k2585 in k2579 in k2576 in k2573 in chicken.tcp#tcp-connect in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2799(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2799,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2803,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=stub109(C_SCHEME_UNDEFINED);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t3);
/* tcp.scm:171: ##sys#peek-c-string */
t6=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t2;
av2[2]=stub113(t4,t5);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k2801 in k2797 in k2591 in k2588 in k2585 in k2579 in k2576 in k2573 in chicken.tcp#tcp-connect in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2803(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2803,c,av);}
/* tcp.scm:599: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
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

/* k2810 in k2588 in k2585 in k2579 in k2576 in k2573 in chicken.tcp#tcp-connect in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2812(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2812,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_2593(2,av2);}}
else{
/* tcp.scm:596: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[72];
av2[4]=lf[79];
av2[5]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}

/* k2816 in k2579 in k2576 in k2573 in chicken.tcp#tcp-connect in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2818(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2818,c,av);}
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_2587(2,av2);}}
else{
/* tcp.scm:593: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[21];
av2[3]=lf[72];
av2[4]=lf[80];
av2[5]=((C_word*)((C_word*)t0)[4])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}

/* a2825 in k2579 in k2576 in k2573 in chicken.tcp#tcp-connect in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2826(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2826,c,av);}
a=C_alloc(9);
t2=((C_word*)((C_word*)t0)[2])[1];
t3=lf[81];
t4=C_block_size(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1290,a[2]=t4,a[3]=t2,a[4]=t3,a[5]=t6,a[6]=((C_word)li31),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_1290(t8,t1,C_fix(0));}

/* a2831 in k2579 in k2576 in k2573 in chicken.tcp#tcp-connect in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2832(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2832,c,av);}
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k2841 in k2573 in chicken.tcp#tcp-connect in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2843(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,1)))){
C_save_and_reclaim((void *)f_2843,c,av);}
a=C_alloc(29);
t2=((C_word*)t0)[2];
f_2578(t2,C_s_a_i_plus(&a,2,t1,((C_word*)t0)[3]));}

/* chicken.tcp#tcp-port->fileno in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_fcall f_2851(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2851,3,t1,t2,t3);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2855,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:625: ##sys#port-data */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[87]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[87]+1);
av2[1]=t4;
av2[2]=t2;
tp(3,av2);}}

/* k2853 in chicken.tcp#tcp-port->fileno in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2855(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2855,c,av);}
if(C_truep(C_i_vectorp(t1))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_slot(t1,C_fix(0));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* tcp.scm:628: chicken.base#error */
t2=*((C_word*)lf[85]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[86];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* chicken.tcp#tcp-addresses in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2869(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2869,c,av);}
a=C_alloc(4);
t3=C_i_check_port_2(t2,C_fix(0),C_SCHEME_TRUE,lf[89]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2875,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:632: tcp-port->fileno */
f_2851(t4,t2,lf[89]);}

/* k2873 in chicken.tcp#tcp-addresses in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2875(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_2875,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2882,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=C_i_foreign_fixnum_argumentp(t1);
/* tcp.scm:192: ##sys#peek-c-string */
t5=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=stub229(t3,t4);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k2880 in k2873 in chicken.tcp#tcp-addresses in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2882(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_2882,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2885,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
f_2885(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2920,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2924,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t4;
av2[2]=lf[91];
av2[3]=lf[13];
tp(4,av2);}}}

/* k2883 in k2880 in k2873 in chicken.tcp#tcp-addresses in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2885(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_2885,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2889,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=C_i_foreign_fixnum_argumentp(((C_word*)t0)[4]);
/* tcp.scm:216: ##sys#peek-c-string */
t5=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=stub245(t3,t4);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k2887 in k2883 in k2880 in k2873 in chicken.tcp#tcp-addresses in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2889(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_2889,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2892,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
/* tcp.scm:633: scheme#values */{
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
C_values(4,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2899,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2903,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t4;
av2[2]=lf[90];
av2[3]=lf[13];
tp(4,av2);}}}

/* k2890 in k2887 in k2883 in k2880 in k2873 in chicken.tcp#tcp-addresses in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2892(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2892,c,av);}
/* tcp.scm:633: scheme#values */{
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
C_values(4,av2);}}

/* k2897 in k2887 in k2883 in k2880 in k2873 in chicken.tcp#tcp-addresses in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2899(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2899,c,av);}
/* tcp.scm:637: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[89];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k2901 in k2887 in k2883 in k2880 in k2873 in chicken.tcp#tcp-addresses in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2903(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2903,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2907,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=stub109(C_SCHEME_UNDEFINED);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t3);
/* tcp.scm:171: ##sys#peek-c-string */
t6=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t2;
av2[2]=stub113(t4,t5);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k2905 in k2901 in k2887 in k2883 in k2880 in k2873 in chicken.tcp#tcp-addresses in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2907(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2907,c,av);}
/* tcp.scm:637: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
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

/* k2918 in k2880 in k2873 in chicken.tcp#tcp-addresses in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2920(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2920,c,av);}
/* tcp.scm:635: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[89];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k2922 in k2880 in k2873 in chicken.tcp#tcp-addresses in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2924(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2924,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2928,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=stub109(C_SCHEME_UNDEFINED);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t3);
/* tcp.scm:171: ##sys#peek-c-string */
t6=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t2;
av2[2]=stub113(t4,t5);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k2926 in k2922 in k2880 in k2873 in chicken.tcp#tcp-addresses in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2928(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2928,c,av);}
/* tcp.scm:635: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
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

/* chicken.tcp#tcp-port-numbers in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2936(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2936,c,av);}
a=C_alloc(4);
t3=C_i_check_port_2(t2,C_fix(0),C_SCHEME_TRUE,lf[93]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2942,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:641: tcp-port->fileno */
f_2851(t4,t2,lf[93]);}

/* k2940 in chicken.tcp#tcp-port-numbers in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2942(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_2942,c,av);}
a=C_alloc(13);
t2=C_i_foreign_fixnum_argumentp(t1);
t3=stub235(C_SCHEME_UNDEFINED,t2);
t4=C_i_foreign_fixnum_argumentp(t1);
t5=stub240(C_SCHEME_UNDEFINED,t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2951,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t5,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t7=C_eqp(C_fix(-1),t3);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2991,a[2]=t6,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2995,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t9;
av2[2]=lf[95];
av2[3]=lf[13];
tp(4,av2);}}
else{
t8=t6;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_UNDEFINED;
f_2951(2,av2);}}}

/* k2949 in k2940 in chicken.tcp#tcp-port-numbers in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2951(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2951,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2954,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_eqp(C_fix(-1),((C_word*)t0)[4]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2967,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2971,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t5;
av2[2]=lf[94];
av2[3]=lf[13];
tp(4,av2);}}
else{
/* tcp.scm:648: scheme#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
C_values(4,av2);}}}

/* k2952 in k2949 in k2940 in chicken.tcp#tcp-port-numbers in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2954(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2954,c,av);}
/* tcp.scm:648: scheme#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
C_values(4,av2);}}

/* k2965 in k2949 in k2940 in chicken.tcp#tcp-port-numbers in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2967(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2967,c,av);}
/* tcp.scm:647: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[93];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k2969 in k2949 in k2940 in chicken.tcp#tcp-port-numbers in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2971(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2971,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2975,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=stub109(C_SCHEME_UNDEFINED);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t3);
/* tcp.scm:171: ##sys#peek-c-string */
t6=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t2;
av2[2]=stub113(t4,t5);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k2973 in k2969 in k2949 in k2940 in chicken.tcp#tcp-port-numbers in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2975(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2975,c,av);}
/* tcp.scm:647: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
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

/* k2989 in k2940 in chicken.tcp#tcp-port-numbers in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2991(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2991,c,av);}
/* tcp.scm:645: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[93];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k2993 in k2940 in chicken.tcp#tcp-port-numbers in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2995(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2995,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2999,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=stub109(C_SCHEME_UNDEFINED);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t3);
/* tcp.scm:171: ##sys#peek-c-string */
t6=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t2;
av2[2]=stub113(t4,t5);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k2997 in k2993 in k2940 in chicken.tcp#tcp-port-numbers in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_2999(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2999,c,av);}
/* tcp.scm:645: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
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

/* chicken.tcp#tcp-listener-port in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_3007(C_word c,C_word *av){
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
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_3007,c,av);}
a=C_alloc(12);
t3=C_i_check_structure_2(t2,lf[5],lf[97]);
t4=C_slot(t2,C_fix(1));
t5=C_i_foreign_fixnum_argumentp(t4);
t6=stub235(C_SCHEME_UNDEFINED,t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3020,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=C_eqp(C_fix(-1),t6);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3030,a[2]=t7,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3034,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t10;
av2[2]=lf[98];
av2[3]=lf[13];
tp(4,av2);}}
else{
t9=t1;{
C_word *av2=av;
av2[0]=t9;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}

/* k3018 in chicken.tcp#tcp-listener-port in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_3020(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3020,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3028 in chicken.tcp#tcp-listener-port in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_3030(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_3030,c,av);}
/* tcp.scm:655: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[97];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}

/* k3032 in chicken.tcp#tcp-listener-port in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_3034(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3034,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3038,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=stub109(C_SCHEME_UNDEFINED);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t3);
/* tcp.scm:171: ##sys#peek-c-string */
t6=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t2;
av2[2]=stub113(t4,t5);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k3036 in k3032 in chicken.tcp#tcp-listener-port in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_3038(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3038,c,av);}
/* tcp.scm:655: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
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

/* chicken.tcp#tcp-abandon-port in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_3046(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3046,c,av);}
a=C_alloc(4);
t3=C_i_check_port_2(t2,C_fix(0),C_SCHEME_TRUE,lf[100]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3056,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:660: ##sys#port-data */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[87]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[87]+1);
av2[1]=t4;
av2[2]=t2;
tp(3,av2);}}

/* k3054 in chicken.tcp#tcp-abandon-port in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_3056(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3056,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_set_i_slot(t1,C_slot(((C_word*)t0)[3],C_fix(1)),C_SCHEME_TRUE);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.tcp#tcp-listener-fileno in k1656 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_3062(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3062,c,av);}
t3=C_i_check_structure_2(t2,lf[5],lf[102]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3071 in k1652 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_3073(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3073,c,av);}
/* tcp.scm:359: chicken.base#make-parameter */
t2=*((C_word*)lf[103]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3075 in k1648 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_3077(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3077,c,av);}
/* tcp.scm:358: chicken.base#make-parameter */
t2=*((C_word*)lf[103]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3079 in k1644 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_3081(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3081,c,av);}
/* tcp.scm:357: chicken.base#make-parameter */
t2=*((C_word*)lf[103]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3083 in k1621 in k1226 in k998 in k995 in k992 */
static void C_ccall f_3085(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3085,c,av);}
/* tcp.scm:356: chicken.base#make-parameter */
t2=*((C_word*)lf[103]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k992 */
static void C_ccall f_994(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_994,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_997,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_scheduler_toplevel(2,av2);}}

/* k995 in k992 */
static void C_ccall f_997(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_997,c,av);}
a=C_alloc(19);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1000,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t4;
C_library_toplevel(2,av2);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_tcp_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("tcp"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_tcp_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(441))){
C_save(t1);
C_rereclaim2(441*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,109);
lf[0]=C_h_intern(&lf[0],3, C_text("tcp"));
lf[1]=C_h_intern(&lf[1],12, C_text("chicken.tcp#"));
lf[3]=C_h_intern(&lf[3],19, C_text("##sys#make-c-string"));
lf[4]=C_h_intern(&lf[4],22, C_text("chicken.tcp#tcp-listen"));
lf[5]=C_h_intern(&lf[5],12, C_text("tcp-listener"));
lf[6]=C_h_intern(&lf[6],17, C_text("##sys#signal-hook"));
lf[7]=C_h_intern_kw(&lf[7],13, C_text("network-error"));
lf[8]=C_h_intern(&lf[8],10, C_text("tcp-listen"));
lf[9]=C_h_intern(&lf[9],20, C_text("scheme#string-append"));
lf[10]=C_h_intern(&lf[10],19, C_text("##sys#peek-c-string"));
lf[11]=C_h_intern(&lf[11],19, C_text("##sys#string-append"));
lf[12]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027cannot listen on socket"));
lf[13]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003 - "));
lf[14]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025cannot bind to socket"));
lf[15]=C_decode_literal(C_heaptop,C_text("\376B\000\000\035error while setting up socket"));
lf[16]=C_h_intern(&lf[16],11, C_text("##sys#error"));
lf[17]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024cannot create socket"));
lf[18]=C_decode_literal(C_heaptop,C_text("\376B\000\000\037getting listener host IP failed"));
lf[19]=C_h_intern(&lf[19],17, C_text("##sys#make-string"));
lf[20]=C_h_intern(&lf[20],18, C_text("##sys#check-fixnum"));
lf[21]=C_h_intern_kw(&lf[21],12, C_text("domain-error"));
lf[22]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023invalid port number"));
lf[23]=C_h_intern(&lf[23],25, C_text("chicken.tcp#tcp-listener\077"));
lf[24]=C_h_intern(&lf[24],21, C_text("chicken.tcp#tcp-close"));
lf[25]=C_h_intern(&lf[25],9, C_text("tcp-close"));
lf[26]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027cannot close TCP socket"));
lf[27]=C_h_intern(&lf[27],27, C_text("chicken.tcp#tcp-buffer-size"));
lf[28]=C_h_intern(&lf[28],28, C_text("chicken.tcp#tcp-read-timeout"));
lf[29]=C_h_intern(&lf[29],29, C_text("chicken.tcp#tcp-write-timeout"));
lf[30]=C_h_intern(&lf[30],31, C_text("chicken.tcp#tcp-connect-timeout"));
lf[31]=C_h_intern(&lf[31],30, C_text("chicken.tcp#tcp-accept-timeout"));
lf[33]=C_h_intern(&lf[33],20, C_text("##sys#current-thread"));
lf[34]=C_h_intern_kw(&lf[34],21, C_text("network-timeout-error"));
lf[35]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030read operation timed out"));
lf[36]=C_h_intern(&lf[36],19, C_text("##sys#thread-yield!"));
lf[37]=C_h_intern(&lf[37],27, C_text("##sys#thread-block-for-i/o!"));
lf[38]=C_h_intern_kw(&lf[38],5, C_text("input"));
lf[39]=C_h_intern(&lf[39],31, C_text("##sys#thread-block-for-timeout!"));
lf[40]=C_h_intern(&lf[40],24, C_text("##sys#dispatch-interrupt"));
lf[41]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027cannot read from socket"));
lf[42]=C_h_intern(&lf[42],41, C_text("chicken.time#current-process-milliseconds"));
lf[43]=C_decode_literal(C_heaptop,C_text("\376B\000\000\031write operation timed out"));
lf[44]=C_h_intern_kw(&lf[44],6, C_text("output"));
lf[45]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026cannot write to socket"));
lf[46]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005(tcp)"));
lf[47]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005(tcp)"));
lf[48]=C_h_intern(&lf[48],6, C_text("socket"));
lf[49]=C_h_intern(&lf[49],20, C_text("##sys#set-port-data!"));
lf[50]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[51]=C_decode_literal(C_heaptop,C_text("\376B\000\000\037cannot close socket output port"));
lf[52]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[53]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[54]=C_h_intern(&lf[54],29, C_text("chicken.port#make-output-port"));
lf[55]=C_decode_literal(C_heaptop,C_text("\376B\000\000\035cannot check socket for input"));
lf[56]=C_decode_literal(C_heaptop,C_text("\376B\000\000\036cannot close socket input port"));
lf[57]=C_h_intern(&lf[57],35, C_text("chicken.fixnum#most-positive-fixnum"));
lf[58]=C_h_intern(&lf[58],22, C_text("##sys#scan-buffer-line"));
lf[59]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[60]=C_h_intern(&lf[60],15, C_text("##sys#substring"));
lf[61]=C_h_intern(&lf[61],28, C_text("chicken.port#make-input-port"));
lf[62]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[63]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027cannot create TCP ports"));
lf[64]=C_h_intern(&lf[64],22, C_text("chicken.tcp#tcp-accept"));
lf[65]=C_h_intern(&lf[65],10, C_text("tcp-accept"));
lf[66]=C_decode_literal(C_heaptop,C_text("\376B\000\000\036could not accept from listener"));
lf[67]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032accept operation timed out"));
lf[68]=C_h_intern(&lf[68],29, C_text("chicken.tcp#tcp-accept-ready\077"));
lf[69]=C_h_intern(&lf[69],17, C_text("tcp-accept-ready\077"));
lf[70]=C_decode_literal(C_heaptop,C_text("\376B\000\000\035cannot check socket for input"));
lf[71]=C_h_intern(&lf[71],23, C_text("chicken.tcp#tcp-connect"));
lf[72]=C_h_intern(&lf[72],11, C_text("tcp-connect"));
lf[73]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023getsockopt() failed"));
lf[74]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024cannot create socket"));
lf[75]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030cannot connect to socket"));
lf[76]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016fcntl() failed"));
lf[77]=C_decode_literal(C_heaptop,C_text("\376B\000\000\035error while setting up socket"));
lf[78]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024cannot create socket"));
lf[79]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030cannot find host address"));
lf[80]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021no port specified"));
lf[81]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003tcp"));
lf[82]=C_decode_literal(C_heaptop,C_text("\376B\000\000 cannot compute port from service"));
lf[83]=C_h_intern(&lf[83],16, C_text("scheme#substring"));
lf[85]=C_h_intern(&lf[85],18, C_text("chicken.base#error"));
lf[86]=C_decode_literal(C_heaptop,C_text("\376B\000\000)argument does not appear to be a TCP port"));
lf[87]=C_h_intern(&lf[87],15, C_text("##sys#port-data"));
lf[88]=C_h_intern(&lf[88],25, C_text("chicken.tcp#tcp-addresses"));
lf[89]=C_h_intern(&lf[89],13, C_text("tcp-addresses"));
lf[90]=C_decode_literal(C_heaptop,C_text("\376B\000\000\035cannot compute remote address"));
lf[91]=C_decode_literal(C_heaptop,C_text("\376B\000\000\034cannot compute local address"));
lf[92]=C_h_intern(&lf[92],28, C_text("chicken.tcp#tcp-port-numbers"));
lf[93]=C_h_intern(&lf[93],16, C_text("tcp-port-numbers"));
lf[94]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032cannot compute remote port"));
lf[95]=C_decode_literal(C_heaptop,C_text("\376B\000\000\031cannot compute local port"));
lf[96]=C_h_intern(&lf[96],29, C_text("chicken.tcp#tcp-listener-port"));
lf[97]=C_h_intern(&lf[97],17, C_text("tcp-listener-port"));
lf[98]=C_decode_literal(C_heaptop,C_text("\376B\000\000\033cannot obtain listener port"));
lf[99]=C_h_intern(&lf[99],28, C_text("chicken.tcp#tcp-abandon-port"));
lf[100]=C_h_intern(&lf[100],16, C_text("tcp-abandon-port"));
lf[101]=C_h_intern(&lf[101],31, C_text("chicken.tcp#tcp-listener-fileno"));
lf[102]=C_h_intern(&lf[102],19, C_text("tcp-listener-fileno"));
lf[103]=C_h_intern(&lf[103],27, C_text("chicken.base#make-parameter"));
lf[104]=C_h_intern(&lf[104],18, C_text("tcp-accept-timeout"));
lf[105]=C_h_intern(&lf[105],19, C_text("tcp-connect-timeout"));
lf[106]=C_h_intern(&lf[106],17, C_text("tcp-write-timeout"));
lf[107]=C_h_intern(&lf[107],16, C_text("tcp-read-timeout"));
lf[108]=C_decode_literal(C_heaptop,C_text("\376B\000\000\031cannot initialize Winsock"));
C_register_lf2(lf,109,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_994,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_port_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[222] = {
{C_text("f3439:tcp_2escm"),(void*)f3439},
{C_text("f_1000:tcp_2escm"),(void*)f_1000},
{C_text("f_1228:tcp_2escm"),(void*)f_1228},
{C_text("f_1235:tcp_2escm"),(void*)f_1235},
{C_text("f_1239:tcp_2escm"),(void*)f_1239},
{C_text("f_1255:tcp_2escm"),(void*)f_1255},
{C_text("f_1264:tcp_2escm"),(void*)f_1264},
{C_text("f_1290:tcp_2escm"),(void*)f_1290},
{C_text("f_1313:tcp_2escm"),(void*)f_1313},
{C_text("f_1317:tcp_2escm"),(void*)f_1317},
{C_text("f_1320:tcp_2escm"),(void*)f_1320},
{C_text("f_1323:tcp_2escm"),(void*)f_1323},
{C_text("f_1333:tcp_2escm"),(void*)f_1333},
{C_text("f_1337:tcp_2escm"),(void*)f_1337},
{C_text("f_1341:tcp_2escm"),(void*)f_1341},
{C_text("f_1379:tcp_2escm"),(void*)f_1379},
{C_text("f_1382:tcp_2escm"),(void*)f_1382},
{C_text("f_1388:tcp_2escm"),(void*)f_1388},
{C_text("f_1391:tcp_2escm"),(void*)f_1391},
{C_text("f_1394:tcp_2escm"),(void*)f_1394},
{C_text("f_1410:tcp_2escm"),(void*)f_1410},
{C_text("f_1414:tcp_2escm"),(void*)f_1414},
{C_text("f_1418:tcp_2escm"),(void*)f_1418},
{C_text("f_1434:tcp_2escm"),(void*)f_1434},
{C_text("f_1438:tcp_2escm"),(void*)f_1438},
{C_text("f_1442:tcp_2escm"),(void*)f_1442},
{C_text("f_1464:tcp_2escm"),(void*)f_1464},
{C_text("f_1473:tcp_2escm"),(void*)f_1473},
{C_text("f_1489:tcp_2escm"),(void*)f_1489},
{C_text("f_1492:tcp_2escm"),(void*)f_1492},
{C_text("f_1495:tcp_2escm"),(void*)f_1495},
{C_text("f_1498:tcp_2escm"),(void*)f_1498},
{C_text("f_1501:tcp_2escm"),(void*)f_1501},
{C_text("f_1520:tcp_2escm"),(void*)f_1520},
{C_text("f_1524:tcp_2escm"),(void*)f_1524},
{C_text("f_1528:tcp_2escm"),(void*)f_1528},
{C_text("f_1572:tcp_2escm"),(void*)f_1572},
{C_text("f_1581:tcp_2escm"),(void*)f_1581},
{C_text("f_1601:tcp_2escm"),(void*)f_1601},
{C_text("f_1605:tcp_2escm"),(void*)f_1605},
{C_text("f_1609:tcp_2escm"),(void*)f_1609},
{C_text("f_1623:tcp_2escm"),(void*)f_1623},
{C_text("f_1629:tcp_2escm"),(void*)f_1629},
{C_text("f_1631:tcp_2escm"),(void*)f_1631},
{C_text("f_1635:tcp_2escm"),(void*)f_1635},
{C_text("f_1646:tcp_2escm"),(void*)f_1646},
{C_text("f_1650:tcp_2escm"),(void*)f_1650},
{C_text("f_1654:tcp_2escm"),(void*)f_1654},
{C_text("f_1658:tcp_2escm"),(void*)f_1658},
{C_text("f_1660:tcp_2escm"),(void*)f_1660},
{C_text("f_1664:tcp_2escm"),(void*)f_1664},
{C_text("f_1667:tcp_2escm"),(void*)f_1667},
{C_text("f_1673:tcp_2escm"),(void*)f_1673},
{C_text("f_1676:tcp_2escm"),(void*)f_1676},
{C_text("f_1677:tcp_2escm"),(void*)f_1677},
{C_text("f_1681:tcp_2escm"),(void*)f_1681},
{C_text("f_1684:tcp_2escm"),(void*)f_1684},
{C_text("f_1689:tcp_2escm"),(void*)f_1689},
{C_text("f_1708:tcp_2escm"),(void*)f_1708},
{C_text("f_1711:tcp_2escm"),(void*)f_1711},
{C_text("f_1714:tcp_2escm"),(void*)f_1714},
{C_text("f_1717:tcp_2escm"),(void*)f_1717},
{C_text("f_1745:tcp_2escm"),(void*)f_1745},
{C_text("f_1749:tcp_2escm"),(void*)f_1749},
{C_text("f_1753:tcp_2escm"),(void*)f_1753},
{C_text("f_1771:tcp_2escm"),(void*)f_1771},
{C_text("f_1774:tcp_2escm"),(void*)f_1774},
{C_text("f_1775:tcp_2escm"),(void*)f_1775},
{C_text("f_1779:tcp_2escm"),(void*)f_1779},
{C_text("f_1790:tcp_2escm"),(void*)f_1790},
{C_text("f_1792:tcp_2escm"),(void*)f_1792},
{C_text("f_1814:tcp_2escm"),(void*)f_1814},
{C_text("f_1817:tcp_2escm"),(void*)f_1817},
{C_text("f_1820:tcp_2escm"),(void*)f_1820},
{C_text("f_1823:tcp_2escm"),(void*)f_1823},
{C_text("f_1846:tcp_2escm"),(void*)f_1846},
{C_text("f_1857:tcp_2escm"),(void*)f_1857},
{C_text("f_1861:tcp_2escm"),(void*)f_1861},
{C_text("f_1865:tcp_2escm"),(void*)f_1865},
{C_text("f_1905:tcp_2escm"),(void*)f_1905},
{C_text("f_1912:tcp_2escm"),(void*)f_1912},
{C_text("f_1915:tcp_2escm"),(void*)f_1915},
{C_text("f_1930:tcp_2escm"),(void*)f_1930},
{C_text("f_1933:tcp_2escm"),(void*)f_1933},
{C_text("f_1942:tcp_2escm"),(void*)f_1942},
{C_text("f_1950:tcp_2escm"),(void*)f_1950},
{C_text("f_1953:tcp_2escm"),(void*)f_1953},
{C_text("f_1959:tcp_2escm"),(void*)f_1959},
{C_text("f_1966:tcp_2escm"),(void*)f_1966},
{C_text("f_1970:tcp_2escm"),(void*)f_1970},
{C_text("f_1974:tcp_2escm"),(void*)f_1974},
{C_text("f_1999:tcp_2escm"),(void*)f_1999},
{C_text("f_2012:tcp_2escm"),(void*)f_2012},
{C_text("f_2022:tcp_2escm"),(void*)f_2022},
{C_text("f_2028:tcp_2escm"),(void*)f_2028},
{C_text("f_2033:tcp_2escm"),(void*)f_2033},
{C_text("f_2042:tcp_2escm"),(void*)f_2042},
{C_text("f_2048:tcp_2escm"),(void*)f_2048},
{C_text("f_2064:tcp_2escm"),(void*)f_2064},
{C_text("f_2068:tcp_2escm"),(void*)f_2068},
{C_text("f_2086:tcp_2escm"),(void*)f_2086},
{C_text("f_2099:tcp_2escm"),(void*)f_2099},
{C_text("f_2112:tcp_2escm"),(void*)f_2112},
{C_text("f_2116:tcp_2escm"),(void*)f_2116},
{C_text("f_2120:tcp_2escm"),(void*)f_2120},
{C_text("f_2128:tcp_2escm"),(void*)f_2128},
{C_text("f_2136:tcp_2escm"),(void*)f_2136},
{C_text("f_2142:tcp_2escm"),(void*)f_2142},
{C_text("f_2149:tcp_2escm"),(void*)f_2149},
{C_text("f_2153:tcp_2escm"),(void*)f_2153},
{C_text("f_2157:tcp_2escm"),(void*)f_2157},
{C_text("f_2178:tcp_2escm"),(void*)f_2178},
{C_text("f_2182:tcp_2escm"),(void*)f_2182},
{C_text("f_2196:tcp_2escm"),(void*)f_2196},
{C_text("f_2202:tcp_2escm"),(void*)f_2202},
{C_text("f_2250:tcp_2escm"),(void*)f_2250},
{C_text("f_2261:tcp_2escm"),(void*)f_2261},
{C_text("f_2265:tcp_2escm"),(void*)f_2265},
{C_text("f_2279:tcp_2escm"),(void*)f_2279},
{C_text("f_2289:tcp_2escm"),(void*)f_2289},
{C_text("f_2305:tcp_2escm"),(void*)f_2305},
{C_text("f_2335:tcp_2escm"),(void*)f_2335},
{C_text("f_2380:tcp_2escm"),(void*)f_2380},
{C_text("f_2390:tcp_2escm"),(void*)f_2390},
{C_text("f_2411:tcp_2escm"),(void*)f_2411},
{C_text("f_2415:tcp_2escm"),(void*)f_2415},
{C_text("f_2419:tcp_2escm"),(void*)f_2419},
{C_text("f_2423:tcp_2escm"),(void*)f_2423},
{C_text("f_2433:tcp_2escm"),(void*)f_2433},
{C_text("f_2436:tcp_2escm"),(void*)f_2436},
{C_text("f_2441:tcp_2escm"),(void*)f_2441},
{C_text("f_2445:tcp_2escm"),(void*)f_2445},
{C_text("f_2448:tcp_2escm"),(void*)f_2448},
{C_text("f_2451:tcp_2escm"),(void*)f_2451},
{C_text("f_2454:tcp_2escm"),(void*)f_2454},
{C_text("f_2482:tcp_2escm"),(void*)f_2482},
{C_text("f_2486:tcp_2escm"),(void*)f_2486},
{C_text("f_2490:tcp_2escm"),(void*)f_2490},
{C_text("f_2516:tcp_2escm"),(void*)f_2516},
{C_text("f_2518:tcp_2escm"),(void*)f_2518},
{C_text("f_2528:tcp_2escm"),(void*)f_2528},
{C_text("f_2541:tcp_2escm"),(void*)f_2541},
{C_text("f_2545:tcp_2escm"),(void*)f_2545},
{C_text("f_2549:tcp_2escm"),(void*)f_2549},
{C_text("f_2568:tcp_2escm"),(void*)f_2568},
{C_text("f_2575:tcp_2escm"),(void*)f_2575},
{C_text("f_2578:tcp_2escm"),(void*)f_2578},
{C_text("f_2581:tcp_2escm"),(void*)f_2581},
{C_text("f_2587:tcp_2escm"),(void*)f_2587},
{C_text("f_2590:tcp_2escm"),(void*)f_2590},
{C_text("f_2593:tcp_2escm"),(void*)f_2593},
{C_text("f_2599:tcp_2escm"),(void*)f_2599},
{C_text("f_2602:tcp_2escm"),(void*)f_2602},
{C_text("f_2605:tcp_2escm"),(void*)f_2605},
{C_text("f_2608:tcp_2escm"),(void*)f_2608},
{C_text("f_2614:tcp_2escm"),(void*)f_2614},
{C_text("f_2633:tcp_2escm"),(void*)f_2633},
{C_text("f_2637:tcp_2escm"),(void*)f_2637},
{C_text("f_2641:tcp_2escm"),(void*)f_2641},
{C_text("f_2659:tcp_2escm"),(void*)f_2659},
{C_text("f_2663:tcp_2escm"),(void*)f_2663},
{C_text("f_2667:tcp_2escm"),(void*)f_2667},
{C_text("f_2671:tcp_2escm"),(void*)f_2671},
{C_text("f_2687:tcp_2escm"),(void*)f_2687},
{C_text("f_2690:tcp_2escm"),(void*)f_2690},
{C_text("f_2718:tcp_2escm"),(void*)f_2718},
{C_text("f_2722:tcp_2escm"),(void*)f_2722},
{C_text("f_2726:tcp_2escm"),(void*)f_2726},
{C_text("f_2745:tcp_2escm"),(void*)f_2745},
{C_text("f_2749:tcp_2escm"),(void*)f_2749},
{C_text("f_2753:tcp_2escm"),(void*)f_2753},
{C_text("f_2771:tcp_2escm"),(void*)f_2771},
{C_text("f_2775:tcp_2escm"),(void*)f_2775},
{C_text("f_2779:tcp_2escm"),(void*)f_2779},
{C_text("f_2795:tcp_2escm"),(void*)f_2795},
{C_text("f_2799:tcp_2escm"),(void*)f_2799},
{C_text("f_2803:tcp_2escm"),(void*)f_2803},
{C_text("f_2812:tcp_2escm"),(void*)f_2812},
{C_text("f_2818:tcp_2escm"),(void*)f_2818},
{C_text("f_2826:tcp_2escm"),(void*)f_2826},
{C_text("f_2832:tcp_2escm"),(void*)f_2832},
{C_text("f_2843:tcp_2escm"),(void*)f_2843},
{C_text("f_2851:tcp_2escm"),(void*)f_2851},
{C_text("f_2855:tcp_2escm"),(void*)f_2855},
{C_text("f_2869:tcp_2escm"),(void*)f_2869},
{C_text("f_2875:tcp_2escm"),(void*)f_2875},
{C_text("f_2882:tcp_2escm"),(void*)f_2882},
{C_text("f_2885:tcp_2escm"),(void*)f_2885},
{C_text("f_2889:tcp_2escm"),(void*)f_2889},
{C_text("f_2892:tcp_2escm"),(void*)f_2892},
{C_text("f_2899:tcp_2escm"),(void*)f_2899},
{C_text("f_2903:tcp_2escm"),(void*)f_2903},
{C_text("f_2907:tcp_2escm"),(void*)f_2907},
{C_text("f_2920:tcp_2escm"),(void*)f_2920},
{C_text("f_2924:tcp_2escm"),(void*)f_2924},
{C_text("f_2928:tcp_2escm"),(void*)f_2928},
{C_text("f_2936:tcp_2escm"),(void*)f_2936},
{C_text("f_2942:tcp_2escm"),(void*)f_2942},
{C_text("f_2951:tcp_2escm"),(void*)f_2951},
{C_text("f_2954:tcp_2escm"),(void*)f_2954},
{C_text("f_2967:tcp_2escm"),(void*)f_2967},
{C_text("f_2971:tcp_2escm"),(void*)f_2971},
{C_text("f_2975:tcp_2escm"),(void*)f_2975},
{C_text("f_2991:tcp_2escm"),(void*)f_2991},
{C_text("f_2995:tcp_2escm"),(void*)f_2995},
{C_text("f_2999:tcp_2escm"),(void*)f_2999},
{C_text("f_3007:tcp_2escm"),(void*)f_3007},
{C_text("f_3020:tcp_2escm"),(void*)f_3020},
{C_text("f_3030:tcp_2escm"),(void*)f_3030},
{C_text("f_3034:tcp_2escm"),(void*)f_3034},
{C_text("f_3038:tcp_2escm"),(void*)f_3038},
{C_text("f_3046:tcp_2escm"),(void*)f_3046},
{C_text("f_3056:tcp_2escm"),(void*)f_3056},
{C_text("f_3062:tcp_2escm"),(void*)f_3062},
{C_text("f_3073:tcp_2escm"),(void*)f_3073},
{C_text("f_3077:tcp_2escm"),(void*)f_3077},
{C_text("f_3081:tcp_2escm"),(void*)f_3081},
{C_text("f_3085:tcp_2escm"),(void*)f_3085},
{C_text("f_994:tcp_2escm"),(void*)f_994},
{C_text("f_997:tcp_2escm"),(void*)f_997},
{C_text("toplevel:tcp_2escm"),(void*)C_tcp_toplevel},
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
o|hiding unexported module binding: chicken.tcp#d 
o|hiding unexported module binding: chicken.tcp#define-alias 
o|hiding unexported module binding: chicken.tcp#last-error-code 
o|hiding unexported module binding: chicken.tcp#error-code->message 
o|hiding unexported module binding: chicken.tcp#retry? 
o|hiding unexported module binding: chicken.tcp#in-progress? 
o|hiding unexported module binding: chicken.tcp#interrupted? 
o|hiding unexported module binding: chicken.tcp#socket 
o|hiding unexported module binding: chicken.tcp#bind 
o|hiding unexported module binding: chicken.tcp#listen 
o|hiding unexported module binding: chicken.tcp#accept 
o|hiding unexported module binding: chicken.tcp#close 
o|hiding unexported module binding: chicken.tcp#recv 
o|hiding unexported module binding: chicken.tcp#shutdown 
o|hiding unexported module binding: chicken.tcp#connect 
o|hiding unexported module binding: chicken.tcp#check-fd-ready 
o|hiding unexported module binding: chicken.tcp#set-socket-options 
o|hiding unexported module binding: chicken.tcp#send 
o|hiding unexported module binding: chicken.tcp#getsockname 
o|hiding unexported module binding: chicken.tcp#getsockport 
o|hiding unexported module binding: chicken.tcp#getpeerport 
o|hiding unexported module binding: chicken.tcp#getpeername 
o|hiding unexported module binding: chicken.tcp#startup 
o|hiding unexported module binding: chicken.tcp#getservbyname 
o|hiding unexported module binding: chicken.tcp#gethostaddr 
o|hiding unexported module binding: chicken.tcp#network-error 
o|hiding unexported module binding: chicken.tcp#network-error/close 
o|hiding unexported module binding: chicken.tcp#network-error/code 
o|hiding unexported module binding: chicken.tcp#parse-host 
o|hiding unexported module binding: chicken.tcp#fresh-addr 
o|hiding unexported module binding: chicken.tcp#bind-socket 
o|hiding unexported module binding: chicken.tcp#io-ports 
o|hiding unexported module binding: chicken.tcp#get-socket-error 
o|hiding unexported module binding: chicken.tcp#tcp-port->fileno 
o|eliminated procedure checks: 64 
o|specializations:
o|  3 (##sys#check-open-port * *)
o|  3 (scheme#make-string fixnum)
o|  24 (scheme#string-append string string)
(o e)|safe calls: 343 
(o e)|assignments to immediate values: 6 
o|safe globals: (chicken.tcp#startup chicken.tcp#getpeername chicken.tcp#getpeerport chicken.tcp#getsockport chicken.tcp#getsockname chicken.tcp#send chicken.tcp#set-socket-options chicken.tcp#check-fd-ready chicken.tcp#connect chicken.tcp#shutdown chicken.tcp#recv chicken.tcp#close chicken.tcp#accept chicken.tcp#listen chicken.tcp#bind chicken.tcp#socket chicken.tcp#interrupted? chicken.tcp#in-progress? chicken.tcp#retry? chicken.tcp#error-code->message chicken.tcp#last-error-code) 
o|inlining procedure: k1292 
o|inlining procedure: k1292 
o|inlining procedure: k1321 
o|inlining procedure: "(tcp.scm:290) chicken.tcp#last-error-code" 
o|substituted constant variable: a1346 
o|substituted constant variable: a1347 
o|inlining procedure: k1321 
o|contracted procedure: "(tcp.scm:288) chicken.tcp#getservbyname" 
o|inlining procedure: k1237 
o|inlining procedure: k1237 
o|inlining procedure: k1499 
o|substituted constant variable: a1529 
o|substituted constant variable: a1530 
o|inlining procedure: "(tcp.scm:329) chicken.tcp#close" 
o|inlining procedure: "(tcp.scm:329) chicken.tcp#last-error-code" 
o|inlining procedure: k1499 
o|contracted procedure: "(tcp.scm:328) chicken.tcp#listen" 
o|contracted procedure: "(tcp.scm:327) chicken.tcp#bind-socket" 
o|inlining procedure: k1392 
o|substituted constant variable: a1419 
o|substituted constant variable: a1420 
o|inlining procedure: "(tcp.scm:317) chicken.tcp#close" 
o|inlining procedure: "(tcp.scm:317) chicken.tcp#last-error-code" 
o|inlining procedure: k1392 
o|contracted procedure: "(tcp.scm:316) chicken.tcp#bind" 
o|inlining procedure: "(tcp.scm:315) chicken.tcp#last-error-code" 
o|substituted constant variable: a1447 
o|substituted constant variable: a1448 
o|inlining procedure: "(tcp.scm:314) chicken.tcp#set-socket-options" 
o|inlining procedure: k1459 
o|inlining procedure: k1459 
o|contracted procedure: "(tcp.scm:309) chicken.tcp#fresh-addr" 
o|inlining procedure: k1574 
o|inlining procedure: k1574 
o|inlining procedure: k1589 
o|inlining procedure: "(tcp.scm:340) chicken.tcp#last-error-code" 
o|substituted constant variable: a1614 
o|substituted constant variable: a1615 
o|inlining procedure: k1589 
o|inlining procedure: "(tcp.scm:339) chicken.tcp#close" 
o|inlining procedure: k1633 
o|inlining procedure: k1633 
o|inlining procedure: k1694 
o|inlining procedure: k1715 
o|inlining procedure: k1715 
o|inlining procedure: k1730 
o|inlining procedure: k1730 
o|inlining procedure: "(tcp.scm:395) chicken.tcp#last-error-code" 
o|substituted constant variable: a1758 
o|substituted constant variable: a1759 
o|inlining procedure: "(tcp.scm:392) chicken.tcp#interrupted?" 
o|inlining procedure: "(tcp.scm:381) chicken.tcp#retry?" 
o|inlining procedure: k1694 
o|contracted procedure: "(tcp.scm:379) chicken.tcp#recv" 
o|inlining procedure: k1800 
o|inlining procedure: k1836 
o|inlining procedure: k1836 
o|inlining procedure: "(tcp.scm:506) chicken.tcp#last-error-code" 
o|substituted constant variable: a1870 
o|substituted constant variable: a1871 
o|inlining procedure: "(tcp.scm:502) chicken.tcp#interrupted?" 
o|inlining procedure: "(tcp.scm:491) chicken.tcp#retry?" 
o|inlining procedure: k1800 
o|inlining procedure: k1890 
o|inlining procedure: k1890 
o|contracted procedure: "(tcp.scm:489) chicken.tcp#send" 
o|inlining procedure: k1944 
o|inlining procedure: k1944 
o|inlining procedure: "(tcp.scm:532) chicken.tcp#last-error-code" 
o|substituted constant variable: a1979 
o|substituted constant variable: a1980 
o|inlining procedure: "(tcp.scm:531) chicken.tcp#close" 
o|inlining procedure: k2009 
o|inlining procedure: k2014 
o|inlining procedure: k2014 
o|inlining procedure: k2009 
o|inlining procedure: k2034 
o|inlining procedure: k2034 
o|inlining procedure: k2050 
o|inlining procedure: k2050 
o|inlining procedure: k2069 
o|inlining procedure: k2069 
o|inlining procedure: k2091 
o|inlining procedure: k2091 
o|inlining procedure: "(tcp.scm:416) chicken.tcp#last-error-code" 
o|substituted constant variable: a2125 
o|substituted constant variable: a2126 
o|inlining procedure: "(tcp.scm:414) chicken.tcp#check-fd-ready" 
o|inlining procedure: k2130 
o|inlining procedure: k2130 
o|inlining procedure: "(tcp.scm:423) chicken.tcp#last-error-code" 
o|substituted constant variable: a2162 
o|substituted constant variable: a2163 
o|inlining procedure: "(tcp.scm:422) chicken.tcp#close" 
o|inlining procedure: k2183 
o|inlining procedure: k2183 
o|inlining procedure: k2204 
o|inlining procedure: k2204 
o|inlining procedure: k2251 
o|inlining procedure: k2251 
o|inlining procedure: k2266 
o|inlining procedure: k2266 
o|inlining procedure: k2294 
o|inlining procedure: k2294 
o|inlining procedure: k2337 
o|inlining procedure: k2337 
o|inlining procedure: k2382 
o|inlining procedure: k2382 
o|inlining procedure: k2392 
o|inlining procedure: k2392 
o|substituted constant variable: a2398 
o|substituted constant variable: a2420 
o|substituted constant variable: a2421 
o|inlining procedure: "(tcp.scm:365) chicken.tcp#close" 
o|inlining procedure: "(tcp.scm:365) chicken.tcp#last-error-code" 
o|inlining procedure: k2458 
o|inlining procedure: k2458 
o|inlining procedure: "(tcp.scm:567) chicken.tcp#last-error-code" 
o|substituted constant variable: a2495 
o|substituted constant variable: a2496 
o|inlining procedure: "(tcp.scm:564) chicken.tcp#interrupted?" 
o|contracted procedure: "(tcp.scm:561) chicken.tcp#accept" 
o|inlining procedure: k1080 
o|inlining procedure: k1080 
o|inlining procedure: k2526 
o|inlining procedure: "(tcp.scm:574) chicken.tcp#last-error-code" 
o|substituted constant variable: a2554 
o|substituted constant variable: a2555 
o|inlining procedure: k2526 
o|inlining procedure: "(tcp.scm:572) chicken.tcp#check-fd-ready" 
o|inlining procedure: k2612 
o|substituted constant variable: a2642 
o|substituted constant variable: a2643 
o|inlining procedure: "(tcp.scm:618) chicken.tcp#close" 
o|inlining procedure: "(tcp.scm:618) chicken.tcp#last-error-code" 
o|inlining procedure: k2612 
o|substituted constant variable: a2668 
o|substituted constant variable: a2669 
o|inlining procedure: "(tcp.scm:620) chicken.tcp#close" 
o|contracted procedure: "(tcp.scm:616) chicken.tcp#get-socket-error" 
o|inlining procedure: k2673 
o|inlining procedure: k2697 
o|inlining procedure: k2697 
o|substituted constant variable: a2727 
o|substituted constant variable: a2728 
o|inlining procedure: "(tcp.scm:614) chicken.tcp#close" 
o|inlining procedure: "(tcp.scm:614) chicken.tcp#last-error-code" 
o|inlining procedure: "(tcp.scm:611) chicken.tcp#interrupted?" 
o|contracted procedure: "(tcp.scm:606) chicken.tcp#in-progress?" 
o|inlining procedure: k2673 
o|contracted procedure: "(tcp.scm:605) chicken.tcp#connect" 
o|substituted constant variable: a2754 
o|substituted constant variable: a2755 
o|inlining procedure: "(tcp.scm:603) chicken.tcp#close" 
o|inlining procedure: "(tcp.scm:603) chicken.tcp#last-error-code" 
o|substituted constant variable: a2780 
o|substituted constant variable: a2781 
o|inlining procedure: "(tcp.scm:601) chicken.tcp#close" 
o|inlining procedure: "(tcp.scm:601) chicken.tcp#last-error-code" 
o|inlining procedure: "(tcp.scm:600) chicken.tcp#set-socket-options" 
o|inlining procedure: "(tcp.scm:599) chicken.tcp#last-error-code" 
o|substituted constant variable: a2808 
o|substituted constant variable: a2809 
o|inlining procedure: k2819 
o|inlining procedure: k2819 
o|inlining procedure: k2856 
o|inlining procedure: k2856 
o|substituted constant variable: a2872 
o|inlining procedure: k2890 
o|inlining procedure: k2890 
o|inlining procedure: "(tcp.scm:637) chicken.tcp#last-error-code" 
o|substituted constant variable: a2912 
o|substituted constant variable: a2913 
o|contracted procedure: "(tcp.scm:636) chicken.tcp#getpeername" 
o|inlining procedure: "(tcp.scm:635) chicken.tcp#last-error-code" 
o|substituted constant variable: a2933 
o|substituted constant variable: a2934 
o|contracted procedure: "(tcp.scm:634) chicken.tcp#getsockname" 
o|substituted constant variable: a2939 
o|inlining procedure: k2952 
o|inlining procedure: "(tcp.scm:647) chicken.tcp#last-error-code" 
o|substituted constant variable: a2980 
o|substituted constant variable: a2981 
o|inlining procedure: k2952 
o|inlining procedure: "(tcp.scm:645) chicken.tcp#last-error-code" 
o|substituted constant variable: a3004 
o|substituted constant variable: a3005 
o|contracted procedure: "(tcp.scm:643) chicken.tcp#getpeerport" 
o|inlining procedure: "(tcp.scm:642) chicken.tcp#getsockport" 
o|inlining procedure: k3018 
o|inlining procedure: "(tcp.scm:655) chicken.tcp#last-error-code" 
o|substituted constant variable: a3043 
o|substituted constant variable: a3044 
o|inlining procedure: k3018 
o|inlining procedure: "(tcp.scm:653) chicken.tcp#getsockport" 
o|substituted constant variable: a3049 
o|contracted procedure: "(tcp.scm:236) chicken.tcp#startup" 
o|replaced variables: 553 
o|removed binding forms: 149 
o|removed side-effect free assignment to unused variable: chicken.tcp#last-error-code 
o|removed side-effect free assignment to unused variable: chicken.tcp#retry? 
o|removed side-effect free assignment to unused variable: chicken.tcp#interrupted? 
o|removed side-effect free assignment to unused variable: chicken.tcp#close 
o|removed side-effect free assignment to unused variable: chicken.tcp#check-fd-ready 
o|removed side-effect free assignment to unused variable: chicken.tcp#set-socket-options 
o|removed side-effect free assignment to unused variable: chicken.tcp#getsockport 
o|substituted constant variable: r15753143 
o|substituted constant variable: int175182 
o|substituted constant variable: int174181 
o|inlining procedure: k1890 
o|substituted constant variable: flags217225 
o|substituted constant variable: r20103198 
o|substituted constant variable: r20103198 
o|substituted constant variable: r20703204 
o|inlining procedure: k2097 
o|substituted constant variable: r21843225 
o|substituted constant variable: r22673230 
o|substituted constant variable: r23833242 
o|substituted constant variable: r23933244 
o|substituted constant variable: r23933245 
o|substituted constant variable: c-pointer156163 
o|substituted constant variable: c-pointer156163 
o|substituted constant variable: r10813259 
o|substituted constant variable: r10813259 
o|substituted constant variable: c-pointer155162 
o|substituted constant variable: c-pointer155162 
o|inlining procedure: k2612 
o|contracted procedure: "(tcp.scm:592) chicken.tcp#parse-host" 
o|substituted constant variable: r12383103 
o|substituted constant variable: r12383103 
o|replaced variables: 152 
o|removed binding forms: 480 
o|removed conditional forms: 2 
o|inlining procedure: k1532 
o|inlining procedure: k1422 
o|inlining procedure: k1444 
o|inlining procedure: k1450 
o|inlining procedure: k1538 
o|inlining procedure: k1611 
o|inlining procedure: k1617 
o|inlining procedure: k1755 
o|inlining procedure: k1821 
o|inlining procedure: k1867 
o|substituted constant variable: r18913379 
o|inlining procedure: k1976 
o|inlining procedure: k1985 
o|inlining procedure: k2122 
o|inlining procedure: k2159 
o|inlining procedure: k2168 
o|inlining procedure: k2492 
o|contracted procedure: k1076 
o|inlining procedure: k2551 
o|inlining procedure: k2685 
o|inlining procedure: k2730 
o|inlining procedure: k2783 
o|inlining procedure: k2805 
o|inlining procedure: k1343 
o|inlining procedure: k2909 
o|inlining procedure: k2930 
o|inlining procedure: k2977 
o|inlining procedure: k3001 
o|inlining procedure: k3040 
o|inlining procedure: k3086 
o|replaced variables: 1 
o|removed binding forms: 177 
o|contracted procedure: k1508 
o|contracted procedure: k1511 
o|contracted procedure: k1398 
o|contracted procedure: k1401 
o|contracted procedure: k1691 
o|contracted procedure: k1703 
o|contracted procedure: k1733 
o|contracted procedure: k1797 
o|contracted procedure: k1809 
o|contracted procedure: k1839 
o|contracted procedure: k2094 
o|contracted procedure: k2399 
o|contracted procedure: k2402 
o|contracted procedure: k2455 
o|substituted constant variable: r1077 
o|contracted procedure: k2470 
o|contracted procedure: k2523 
o|contracted procedure: k2609 
o|contracted procedure: k2621 
o|contracted procedure: k2624 
o|contracted procedure: k2650 
o|contracted procedure: k2682 
o|contracted procedure: k2700 
o|contracted procedure: k2706 
o|contracted procedure: k2709 
o|contracted procedure: k2733 
o|contracted procedure: k2736 
o|contracted procedure: k2759 
o|contracted procedure: k2762 
o|contracted procedure: k2943 
o|contracted procedure: k2946 
o|contracted procedure: k3015 
o|simplifications: ((let . 8)) 
o|replaced variables: 1 
o|removed binding forms: 60 
o|removed binding forms: 2 
o|simplifications: ((if . 17) (##core#call . 194) (let . 28)) 
o|  call simplifications:
o|    chicken.fixnum#fx*
o|    scheme#vector?
o|    ##sys#check-string
o|    scheme#char=?
o|    scheme#not
o|    scheme#vector
o|    ##sys#call-with-values	2
o|    chicken.fixnum#fx>=	9
o|    ##sys#setslot	4
o|    scheme#values	11
o|    ##sys#size	7
o|    chicken.fixnum#fxmin	3
o|    chicken.fixnum#fx-	6
o|    chicken.fixnum#fx+	12
o|    chicken.fixnum#fx=
o|    scheme#+	5
o|    ##sys#setislot	5
o|    ##sys#check-structure	5
o|    ##sys#slot	14
o|    ##sys#structure?
o|    scheme#car	3
o|    scheme#null?	5
o|    scheme#cdr	2
o|    chicken.fixnum#fx<	7
o|    chicken.fixnum#fx>	6
o|    scheme#eq?	26
o|    ##sys#make-structure	2
o|    ##sys#foreign-block-argument	6
o|    ##sys#foreign-string-argument	3
o|    ##sys#foreign-unsigned-ranged-integer-argument	2
o|    ##sys#foreign-fixnum-argument	41
o|contracted procedure: k1012 
o|contracted procedure: k1028 
o|contracted procedure: k1032 
o|contracted procedure: k1036 
o|contracted procedure: k1122 
o|contracted procedure: k1126 
o|contracted procedure: k1258 
o|contracted procedure: k1266 
o|contracted procedure: k1274 
o|contracted procedure: k1565 
o|contracted procedure: k1475 
o|contracted procedure: k1559 
o|contracted procedure: k1478 
o|contracted procedure: k1553 
o|contracted procedure: k1481 
o|contracted procedure: k1547 
o|contracted procedure: k1484 
o|contracted procedure: k1061 
o|contracted procedure: k1065 
o|contracted procedure: k1505 
o|contracted procedure: k10933115 
o|contracted procedure: k1043 
o|contracted procedure: k1047 
o|contracted procedure: k1051 
o|contracted procedure: k1395 
o|contracted procedure: k10933129 
o|contracted procedure: k11583139 
o|contracted procedure: k1425 
o|contracted procedure: k1453 
o|contracted procedure: k1363 
o|contracted procedure: k1367 
o|contracted procedure: k1535 
o|contracted procedure: k1538 
o|contracted procedure: k1583 
o|contracted procedure: k1586 
o|contracted procedure: k10933152 
o|contracted procedure: k1592 
o|contracted procedure: k1640 
o|contracted procedure: k1668 
o|contracted procedure: k1100 
o|contracted procedure: k1104 
o|contracted procedure: k1108 
o|contracted procedure: k1112 
o|contracted procedure: k1697 
o|contracted procedure: k1721 
o|contracted procedure: k1761 
o|contracted procedure: k1784 
o|contracted procedure: k1794 
o|contracted procedure: k1165 
o|contracted procedure: k1169 
o|contracted procedure: k1173 
o|contracted procedure: k1177 
o|contracted procedure: k1181 
o|contracted procedure: k1803 
o|contracted procedure: k1827 
o|contracted procedure: k1875 
o|contracted procedure: k1882 
o|contracted procedure: k1886 
o|contracted procedure: k1893 
o|contracted procedure: k1890 
o|contracted procedure: k1916 
o|contracted procedure: k1919 
o|contracted procedure: k1922 
o|contracted procedure: k1925 
o|contracted procedure: k1938 
o|contracted procedure: k2045 
o|contracted procedure: k2037 
o|contracted procedure: k2060 
o|contracted procedure: k2053 
o|contracted procedure: k10933193 
o|contracted procedure: k1988 
o|contracted procedure: k2005 
o|contracted procedure: k2025 
o|contracted procedure: k2017 
o|contracted procedure: k2072 
o|contracted procedure: k2076 
o|contracted procedure: k2079 
o|contracted procedure: k2088 
o|contracted procedure: k11513214 
o|contracted procedure: k2103 
o|contracted procedure: k10933223 
o|contracted procedure: k2171 
o|contracted procedure: k2186 
o|contracted procedure: k2189 
o|contracted procedure: k2207 
o|contracted procedure: k2213 
o|contracted procedure: k2216 
o|contracted procedure: k2245 
o|contracted procedure: k2219 
o|contracted procedure: k2223 
o|contracted procedure: k2227 
o|contracted procedure: k2234 
o|contracted procedure: k2238 
o|contracted procedure: k2242 
o|contracted procedure: k2254 
o|contracted procedure: k2269 
o|contracted procedure: k2272 
o|contracted procedure: k2331 
o|contracted procedure: k2285 
o|contracted procedure: k2291 
o|contracted procedure: k2297 
o|contracted procedure: k2307 
o|contracted procedure: k2313 
o|contracted procedure: k2324 
o|contracted procedure: k2320 
o|contracted procedure: k2352 
o|contracted procedure: k2348 
o|contracted procedure: k2341 
o|inlining procedure: k2337 
o|contracted procedure: k2363 
o|contracted procedure: k2367 
o|contracted procedure: k2359 
o|inlining procedure: k2337 
o|contracted procedure: k2373 
o|contracted procedure: k2385 
o|contracted procedure: k2395 
o|contracted procedure: k10933251 
o|contracted procedure: k2425 
o|contracted procedure: k2428 
o|contracted procedure: k1072 
o|contracted procedure: k2498 
o|contracted procedure: k2461 
o|contracted procedure: k2501 
o|contracted procedure: k2520 
o|contracted procedure: k2557 
o|contracted procedure: k11513277 
o|contracted procedure: k2532 
o|contracted procedure: k2844 
o|contracted procedure: k2570 
o|contracted procedure: k2582 
o|contracted procedure: k2564 
o|contracted procedure: k2618 
o|contracted procedure: k10933288 
o|contracted procedure: k2647 
o|contracted procedure: k10933300 
o|contracted procedure: k1133 
o|contracted procedure: k1137 
o|contracted procedure: k1141 
o|contracted procedure: k2676 
o|contracted procedure: k10933309 
o|contracted procedure: k10933318 
o|contracted procedure: k11583332 
o|contracted procedure: k2756 
o|contracted procedure: k10933325 
o|contracted procedure: k2786 
o|contracted procedure: k1283 
o|contracted procedure: k1295 
o|contracted procedure: k1304 
o|contracted procedure: k1324 
o|contracted procedure: k1244 
o|contracted procedure: k1251 
o|contracted procedure: k1349 
o|contracted procedure: k1356 
o|contracted procedure: k2859 
o|contracted procedure: k1220 
o|contracted procedure: k1195 
o|contracted procedure: k12023361 
o|contracted procedure: k1209 
o|contracted procedure: k2958 
o|contracted procedure: k2982 
o|contracted procedure: k3009 
o|contracted procedure: k3012 
o|contracted procedure: k12023372 
o|contracted procedure: k3021 
o|contracted procedure: k3058 
o|contracted procedure: k3064 
o|simplifications: ((if . 1) (let . 42)) 
o|removed binding forms: 164 
o|inlining procedure: k1262 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest432434 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest432434 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest432434 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest432434 0 
o|inlining procedure: "(tcp.scm:329) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:317) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:315) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:310) chicken.tcp#socket" 
o|inlining procedure: "(tcp.scm:340) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:395) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:506) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:532) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:530) chicken.tcp#shutdown" 
o|contracted procedure: k1994 
o|inlining procedure: "(tcp.scm:416) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:423) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:421) chicken.tcp#shutdown" 
o|inlining procedure: k2180 
o|inlining procedure: "(tcp.scm:365) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:567) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:574) chicken.tcp#error-code->message" 
(o x)|known list op on rest arg sublist: ##core#rest-null? more694 0 
(o x)|known list op on rest arg sublist: ##core#rest-car more694 0 
o|inlining procedure: "(tcp.scm:618) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:621) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:614) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:603) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:601) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:599) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:597) chicken.tcp#socket" 
o|inlining procedure: "(tcp.scm:290) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:637) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:635) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:647) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:645) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:655) chicken.tcp#error-code->message" 
o|removed binding forms: 2 
o|removed side-effect free assignment to unused variable: chicken.tcp#error-code->message 
o|removed side-effect free assignment to unused variable: chicken.tcp#socket 
o|removed side-effect free assignment to unused variable: chicken.tcp#shutdown 
o|substituted constant variable: r12633519 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1479 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r1479 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1479 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r1479 1 
o|substituted constant variable: int1291343536 
o|substituted constant variable: int1291343618 
o|replaced variables: 39 
o|removed binding forms: 1 
o|removed binding forms: 47 
o|contracted procedure: k1383 
o|contracted procedure: k2594 
o|removed binding forms: 2 
o|customizable procedures: (check478 chicken.tcp#tcp-port->fileno k2576 loop384 k1318 k2434 chicken.tcp#io-ports k1674 loop561 k2134 k2140 read-input511 k1948 k1951 k1957 output599 k1788 loop602 k1682 chicken.tcp#gethostaddr k1496) 
o|calls to known targets: 84 
o|unused rest argument: rest432434 f_1473 
o|identified direct recursive calls: f_1792 2 
o|identified direct recursive calls: f_2202 1 
o|identified direct recursive calls: f_1290 1 
o|unused rest argument: more694 f_2568 
o|fast box initializations: 7 
o|fast global references: 7 
o|fast global assignments: 3 
o|dropping unused closure argument: f_1255 
o|dropping unused closure argument: f_1629 
o|dropping unused closure argument: f_2851 
*/
/* end of file */
