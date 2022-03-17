/* Generated from posix.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.3.0rc4 ((HEAD detached at 5.3.0rc4)) (rev b6cbb1ba)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: posix.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file posixunix.c -feature platform-unix -emit-import-library chicken.errno -emit-import-library chicken.file.posix -emit-import-library chicken.time.posix -emit-import-library chicken.process -emit-import-library chicken.process.signal -emit-import-library chicken.process-context.posix -no-module-registration
   unit: posix
   uses: extras scheduler port pathname lolevel library
*/
#include "chicken.h"


#include <signal.h>

static int C_not_implemented(void);
int C_not_implemented() { return -1; }

static C_TLS struct stat C_statbuf;

#define C_stat_type         (C_statbuf.st_mode & S_IFMT)
#define C_stat_perm         (C_statbuf.st_mode & ~S_IFMT)

#define C_u_i_stat(fn)      C_fix(C_stat(C_c_string(fn), &C_statbuf))
#define C_u_i_fstat(fd)     C_fix(fstat(C_unfix(fd), &C_statbuf))

#ifndef S_IFSOCK
# define S_IFSOCK           0140000
#endif

#ifndef S_IRUSR
# define S_IRUSR  S_IREAD
#endif
#ifndef S_IWUSR
# define S_IWUSR  S_IWRITE
#endif
#ifndef S_IXUSR
# define S_IXUSR  S_IEXEC
#endif

#ifndef S_IRGRP
# define S_IRGRP  S_IREAD
#endif
#ifndef S_IWGRP
# define S_IWGRP  S_IWRITE
#endif
#ifndef S_IXGRP
# define S_IXGRP  S_IEXEC
#endif

#ifndef S_IROTH
# define S_IROTH  S_IREAD
#endif
#ifndef S_IWOTH
# define S_IWOTH  S_IWRITE
#endif
#ifndef S_IXOTH
# define S_IXOTH  S_IEXEC
#endif

#define cpy_tmvec_to_tmstc08(ptm, v) \
    ((ptm)->tm_sec = C_unfix(C_block_item((v), 0)), \
    (ptm)->tm_min = C_unfix(C_block_item((v), 1)), \
    (ptm)->tm_hour = C_unfix(C_block_item((v), 2)), \
    (ptm)->tm_mday = C_unfix(C_block_item((v), 3)), \
    (ptm)->tm_mon = C_unfix(C_block_item((v), 4)), \
    (ptm)->tm_year = C_unfix(C_block_item((v), 5)), \
    (ptm)->tm_wday = C_unfix(C_block_item((v), 6)), \
    (ptm)->tm_yday = C_unfix(C_block_item((v), 7)), \
    (ptm)->tm_isdst = (C_block_item((v), 8) != C_SCHEME_FALSE))

#define cpy_tmvec_to_tmstc9(ptm, v) \
    (((struct tm *)ptm)->tm_gmtoff = -C_unfix(C_block_item((v), 9)))

#define C_tm_set_08(v, tm)  cpy_tmvec_to_tmstc08( (tm), (v) )
#define C_tm_set_9(v, tm)   cpy_tmvec_to_tmstc9( (tm), (v) )

static struct tm *
C_tm_set( C_word v, void *tm )
{
  C_tm_set_08( v, (struct tm *)tm );
#if defined(C_GNU_ENV) && !defined(__CYGWIN__) && !defined(__uClinux__)
  C_tm_set_9( v, (struct tm *)tm );
#endif
  return tm;
}

#define TIME_STRING_MAXLENGTH 255
static char C_time_string [TIME_STRING_MAXLENGTH + 1];
#undef TIME_STRING_MAXLENGTH

#define C_strftime(v, f, tm) \
        (strftime(C_time_string, sizeof(C_time_string), C_c_string(f), C_tm_set((v), (tm))) ? C_time_string : NULL)
#define C_a_mktime(ptr, c, v, tm)  C_int64_to_num(ptr, mktime(C_tm_set((v), C_data_pointer(tm))))
#define C_asctime(v, tm)    (asctime(C_tm_set((v), (tm))))

#define C_fdopen(a, n, fd, m) C_mpointer(a, fdopen(C_unfix(fd), C_c_string(m)))
#define C_dup(x)            C_fix(dup(C_unfix(x)))
#define C_dup2(x, y)        C_fix(dup2(C_unfix(x), C_unfix(y)))

#define C_set_file_ptr(port, ptr)  (C_set_block_item(port, 0, (C_block_item(ptr, 0))), C_SCHEME_UNDEFINED)

/* It is assumed that 'int' is-a 'long' */
#define C_ftell(a, n, p)    C_int64_to_num(a, ftell(C_port_file(p)))
#define C_fseek(p, n, w)    C_mk_nbool(fseek(C_port_file(p), C_num_to_int64(n), C_unfix(w)))
#define C_lseek(fd, o, w)     C_fix(lseek(C_unfix(fd), C_num_to_int64(o), C_unfix(w)))

#ifndef S_IFLNK
#define S_IFLNK S_IFREG
#endif

#ifndef S_IFREG
#define S_IFREG S_IFREG
#endif

#ifndef S_IFDIR
#define S_IFDIR S_IFREG
#endif

#ifndef S_IFCHR
#define S_IFCHR S_IFREG
#endif

#ifndef S_IFBLK
#define S_IFBLK S_IFREG
#endif

#ifndef S_IFSOCK
#define S_IFSOCK S_IFREG
#endif

#ifndef S_IFIFO
#define S_IFIFO S_IFREG
#endif



static C_TLS int C_wait_status;

#include <sys/time.h>
#include <sys/wait.h>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <dirent.h>
#include <pwd.h>
#include <utime.h>

#if defined(__sun) && defined(__SVR4)
# include <sys/tty.h>
# include <termios.h>
#endif

#include <sys/mman.h>
#include <poll.h>

#ifndef O_FSYNC
# define O_FSYNC O_SYNC
#endif

#ifndef PIPE_BUF
# ifdef __CYGWIN__
#  define PIPE_BUF       _POSIX_PIPE_BUF
# else
#  define PIPE_BUF 1024
# endif
#endif

#ifndef O_BINARY
# define O_BINARY        0
#endif
#ifndef O_TEXT
# define O_TEXT          0
#endif

#ifndef MAP_FILE
# define MAP_FILE    0
#endif

#ifndef MAP_ANON
# define MAP_ANON    0
#endif

#ifndef FILENAME_MAX
# define FILENAME_MAX          1024
#endif

static C_TLS struct flock C_flock;
static C_TLS DIR *temphandle;
static C_TLS struct passwd *C_user;

/* Android doesn't provide pw_gecos in the passwd struct */
#ifdef __ANDROID__
# define C_PW_GECOS ("")
#else
# define C_PW_GECOS (C_user->pw_gecos)
#endif

static C_TLS int C_pipefds[ 2 ];
static C_TLS time_t C_secs;
static C_TLS struct timeval C_timeval;
static C_TLS struct stat C_statbuf;

#define C_fchdir(fd)        C_fix(fchdir(C_unfix(fd)))

#define open_binary_input_pipe(a, n, name)   C_mpointer(a, popen(C_c_string(name), "r"))
#define open_text_input_pipe(a, n, name)     open_binary_input_pipe(a, n, name)
#define open_binary_output_pipe(a, n, name)  C_mpointer(a, popen(C_c_string(name), "w"))
#define open_text_output_pipe(a, n, name)    open_binary_output_pipe(a, n, name)
#define close_pipe(p)                        C_fix(pclose(C_port_file(p)))

#define C_fork              fork
#define C_waitpid(id, o)    C_fix(waitpid(C_unfix(id), &C_wait_status, C_unfix(o)))
#define C_getppid           getppid
#define C_kill(id, s)       C_fix(kill(C_unfix(id), C_unfix(s)))
#define C_getuid            getuid
#define C_getgid            getgid
#define C_geteuid           geteuid
#define C_getegid           getegid
#define C_chown(fn, u, g)   C_fix(chown(C_c_string(fn), C_unfix(u), C_unfix(g)))
#define C_fchown(fd, u, g)  C_fix(fchown(C_unfix(fd), C_unfix(u), C_unfix(g)))
#define C_chmod(fn, m)      C_fix(chmod(C_c_string(fn), C_unfix(m)))
#define C_fchmod(fd, m)     C_fix(fchmod(C_unfix(fd), C_unfix(m)))
#define C_setuid(id)        C_fix(setuid(C_unfix(id)))
#define C_setgid(id)        C_fix(setgid(C_unfix(id)))
#define C_seteuid(id)       C_fix(seteuid(C_unfix(id)))
#define C_setegid(id)       C_fix(setegid(C_unfix(id)))
#define C_setsid(dummy)     C_fix(setsid())
#define C_setpgid(x, y)     C_fix(setpgid(C_unfix(x), C_unfix(y)))
#define C_getpgid(x)        C_fix(getpgid(C_unfix(x)))
#define C_symlink(o, n)     C_fix(symlink(C_c_string(o), C_c_string(n)))
#define C_do_readlink(f, b) C_fix(readlink(C_c_string(f), C_c_string(b), FILENAME_MAX))
#define C_getpwnam(n)       C_mk_bool((C_user = getpwnam(C_c_string(n))) != NULL)
#define C_getpwuid(u)       C_mk_bool((C_user = getpwuid(C_unfix(u))) != NULL)
#define C_pipe(d)           C_fix(pipe(C_pipefds))
#define C_truncate(f, n)    C_fix(truncate(C_c_string(f), C_num_to_int(n)))
#define C_ftruncate(f, n)   C_fix(ftruncate(C_unfix(f), C_num_to_int(n)))
#define C_alarm             alarm
#define C_close(fd)         C_fix(close(C_unfix(fd)))
#define C_umask(m)          C_fix(umask(C_unfix(m)))

#define C_u_i_lstat(fn)     C_fix(lstat(C_c_string(fn), &C_statbuf))

#define C_u_i_execvp(f,a)   C_fix(execvp(C_c_string(f), (char *const *)C_c_pointer_vector_or_null(a)))
#define C_u_i_execve(f,a,e) C_fix(execve(C_c_string(f), (char *const *)C_c_pointer_vector_or_null(a), (char *const *)C_c_pointer_vector_or_null(e)))

static C_TLS int C_uw;
#define C_WIFEXITED(n)      (C_uw = C_unfix(n), C_mk_bool(WIFEXITED(C_uw)))
#define C_WIFSIGNALED(n)    (C_uw = C_unfix(n), C_mk_bool(WIFSIGNALED(C_uw)))
#define C_WIFSTOPPED(n)     (C_uw = C_unfix(n), C_mk_bool(WIFSTOPPED(C_uw)))
#define C_WEXITSTATUS(n)    (C_uw = C_unfix(n), C_fix(WEXITSTATUS(C_uw)))
#define C_WTERMSIG(n)       (C_uw = C_unfix(n), C_fix(WTERMSIG(C_uw)))
#define C_WSTOPSIG(n)       (C_uw = C_unfix(n), C_fix(WSTOPSIG(C_uw)))

#ifdef __CYGWIN__
# define C_mkfifo(fn, m)    C_fix(-1)
#else
# define C_mkfifo(fn, m)    C_fix(mkfifo(C_c_string(fn), C_unfix(m)))
#endif

#define C_flock_setup(t, s, n) (C_flock.l_type = C_unfix(t), C_flock.l_start = C_num_to_int(s), C_flock.l_whence = SEEK_SET, C_flock.l_len = C_num_to_int(n), C_SCHEME_UNDEFINED)
#define C_flock_test(p)     (fcntl(fileno(C_port_file(p)), F_GETLK, &C_flock) >= 0 ? (C_flock.l_type == F_UNLCK ? C_fix(0) : C_fix(C_flock.l_pid)) : C_SCHEME_FALSE)
#define C_flock_lock(p)     C_fix(fcntl(fileno(C_port_file(p)), F_SETLK, &C_flock))
#define C_flock_lockw(p)    C_fix(fcntl(fileno(C_port_file(p)), F_SETLKW, &C_flock))

static C_TLS sigset_t C_sigset;
#define C_sigemptyset(d)    (sigemptyset(&C_sigset), C_SCHEME_UNDEFINED)
#define C_sigaddset(s)      (sigaddset(&C_sigset, C_unfix(s)), C_SCHEME_UNDEFINED)
#define C_sigdelset(s)      (sigdelset(&C_sigset, C_unfix(s)), C_SCHEME_UNDEFINED)
#define C_sigismember(s)    C_mk_bool(sigismember(&C_sigset, C_unfix(s)))
#define C_sigprocmask_set(d)        C_fix(sigprocmask(SIG_SETMASK, &C_sigset, NULL))
#define C_sigprocmask_block(d)      C_fix(sigprocmask(SIG_BLOCK, &C_sigset, NULL))
#define C_sigprocmask_unblock(d)    C_fix(sigprocmask(SIG_UNBLOCK, &C_sigset, NULL))
#define C_sigprocmask_get(d)        C_fix(sigprocmask(SIG_SETMASK, NULL, &C_sigset))

#define C_open(fn, fl, m)   C_fix(open(C_c_string(fn), C_unfix(fl), C_unfix(m)))
#define C_read(fd, b, n)    C_fix(read(C_unfix(fd), C_data_pointer(b), C_unfix(n)))
#define C_write(fd, b, n)   C_fix(write(C_unfix(fd), C_data_pointer(b), C_unfix(n)))
#define C_mkstemp(t)        C_fix(mkstemp(C_c_string(t)))

#define C_ctime(n)          (C_secs = (n), ctime(&C_secs))

#if defined(__SVR4) || defined(C_MACOSX) || defined(__ANDROID__) || defined(_AIX)
/* Seen here: http://lists.samba.org/archive/samba-technical/2002-November/025571.html */

static time_t C_timegm(struct tm *t)
{
  time_t tl, tb;
  struct tm *tg;

  tl = mktime (t);
  if (tl == -1)
    {
      t->tm_hour--;
      tl = mktime (t);
      if (tl == -1)
        return -1; /* can't deal with output from strptime */
      tl += 3600;
    }
  tg = gmtime (&tl);
  tg->tm_isdst = 0;
  tb = mktime (tg);
  if (tb == -1)
    {
      tg->tm_hour--;
      tb = mktime (tg);
      if (tb == -1)
        return -1; /* can't deal with output from gmtime */
      tb += 3600;
    }
  return (tl - (tb - tl));
}
#else
#define C_timegm timegm
#endif

#define C_a_timegm(ptr, c, v, tm)  C_int64_to_num(ptr, C_timegm(C_tm_set((v), C_data_pointer(tm))))

#ifdef __linux__
extern char *strptime(const char *s, const char *format, struct tm *tm);
extern pid_t getpgid(pid_t pid);
#endif

/* tm_get could be in posix-common, but it's only used in here */
#define cpy_tmstc08_to_tmvec(v, ptm) \
    (C_set_block_item((v), 0, C_fix(((struct tm *)ptm)->tm_sec)), \
    C_set_block_item((v), 1, C_fix((ptm)->tm_min)), \
    C_set_block_item((v), 2, C_fix((ptm)->tm_hour)), \
    C_set_block_item((v), 3, C_fix((ptm)->tm_mday)), \
    C_set_block_item((v), 4, C_fix((ptm)->tm_mon)), \
    C_set_block_item((v), 5, C_fix((ptm)->tm_year)), \
    C_set_block_item((v), 6, C_fix((ptm)->tm_wday)), \
    C_set_block_item((v), 7, C_fix((ptm)->tm_yday)), \
    C_set_block_item((v), 8, ((ptm)->tm_isdst ? C_SCHEME_TRUE : C_SCHEME_FALSE)))

#define cpy_tmstc9_to_tmvec(v, ptm) \
    (C_set_block_item((v), 9, C_fix(-(ptm)->tm_gmtoff)))

#define C_tm_get_08(v, tm)  cpy_tmstc08_to_tmvec( (v), (tm) )
#define C_tm_get_9(v, tm)   cpy_tmstc9_to_tmvec( (v), (tm) )

static C_word
C_tm_get( C_word v, void *tm )
{
  C_tm_get_08( v, (struct tm *)tm );
#if defined(C_GNU_ENV) && !defined(__CYGWIN__) && !defined(__uClinux__)
  C_tm_get_9( v, (struct tm *)tm );
#endif
  return v;
}

#define C_strptime(s, f, v, stm) \
        (strptime(C_c_string(s), C_c_string(f), ((struct tm *)(stm))) ? C_tm_get((v), (stm)) : C_SCHEME_FALSE)

static int set_file_mtime(char *filename, C_word atime, C_word mtime)
{
  struct stat sb;
  struct utimbuf tb;

  /* Only lstat if needed */
  if (atime == C_SCHEME_FALSE || mtime == C_SCHEME_FALSE) {
    if (lstat(filename, &sb) == -1) return -1;
  }

  if (atime == C_SCHEME_FALSE) {
    tb.actime = sb.st_atime;
  } else {
    tb.actime = C_num_to_int64(atime);
  }
  if (mtime == C_SCHEME_FALSE) {
    tb.modtime = sb.st_mtime;
  } else {
    tb.modtime = C_num_to_int64(mtime);
  }
  return utime(filename, &tb);
}



static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_scheduler_toplevel)
C_externimport void C_ccall C_scheduler_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_port_toplevel)
C_externimport void C_ccall C_port_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_pathname_toplevel)
C_externimport void C_ccall C_pathname_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_lolevel_toplevel)
C_externimport void C_ccall C_lolevel_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[496];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,28),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,115,121,115,116,101,109,32,99,109,100,41,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,29),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,115,121,115,116,101,109,42,32,115,116,114,41,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,8),40,103,50,54,49,32,99,41};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,50,53,53,32,103,50,54,55,41,0,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,31),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,113,115,32,115,116,114,32,46,32,114,101,115,116,41,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,47),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,112,111,115,105,120,45,101,114,114,111,114,32,116,121,112,101,32,108,111,99,32,109,115,103,32,46,32,97,114,103,115,41,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,115,116,97,116,32,102,105,108,101,32,108,105,110,107,32,101,114,114,32,108,111,99,41,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,39),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,115,116,97,116,32,102,32,46,32,114,101,115,116,41,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,46),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,115,101,116,45,102,105,108,101,45,112,101,114,109,105,115,115,105,111,110,115,33,32,102,32,112,41,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,109,111,100,105,102,105,99,97,116,105,111,110,45,116,105,109,101,32,102,41,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,39),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,97,99,99,101,115,115,45,116,105,109,101,32,102,41,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,39),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,99,104,97,110,103,101,45,116,105,109,101,32,102,41,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,115,101,116,45,102,105,108,101,45,116,105,109,101,115,33,32,102,32,46,32,114,101,115,116,41,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,32),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,115,105,122,101,32,102,41};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,115,101,116,45,102,105,108,101,45,111,119,110,101,114,33,32,102,32,117,105,100,41,0,0,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,115,101,116,45,102,105,108,101,45,103,114,111,117,112,33,32,102,32,103,105,100,41,0,0,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,116,121,112,101,32,102,105,108,101,32,46,32,114,101,115,116,41,0,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,39),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,114,101,103,117,108,97,114,45,102,105,108,101,63,32,102,105,108,101,41,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,115,121,109,98,111,108,105,99,45,108,105,110,107,63,32,102,105,108,101,41};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,39),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,98,108,111,99,107,45,100,101,118,105,99,101,63,32,102,105,108,101,41,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,99,104,97,114,97,99,116,101,114,45,100,101,118,105,99,101,63,32,102,105,108,101,41,0,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,31),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,102,111,63,32,102,105,108,101,41,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,33),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,115,111,99,107,101,116,63,32,102,105,108,101,41,0,0,0,0,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,100,105,114,101,99,116,111,114,121,63,32,102,105,108,101,41,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,57),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,115,101,116,45,102,105,108,101,45,112,111,115,105,116,105,111,110,33,32,112,111,114,116,32,112,111,115,32,46,32,119,104,101,110,99,101,41,0,0,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,16),40,109,111,100,101,32,105,110,112,32,109,32,108,111,99,41};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,20),40,99,104,101,99,107,32,108,111,99,32,102,100,32,105,110,112,32,114,41,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,111,112,101,110,45,105,110,112,117,116,45,102,105,108,101,42,32,102,100,32,46,32,109,41,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,111,112,101,110,45,111,117,116,112,117,116,45,102,105,108,101,42,32,102,100,32,46,32,109,41,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,112,111,114,116,45,62,102,105,108,101,110,111,32,112,111,114,116,41,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,47),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,100,117,112,108,105,99,97,116,101,45,102,105,108,101,110,111,32,111,108,100,32,46,32,110,101,119,41,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,50),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,99,117,114,114,101,110,116,45,112,114,111,99,101,115,115,45,105,100,41,0,0,0,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,52),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,99,104,97,110,103,101,45,100,105,114,101,99,116,111,114,121,42,32,102,100,41,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,33),40,35,35,115,121,115,35,99,104,97,110,103,101,45,100,105,114,101,99,116,111,114,121,45,104,111,111,107,32,100,105,114,41,0,0,0,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,16),67,95,100,101,99,111,100,101,95,115,101,99,111,110,100,115};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,99,104,101,99,107,45,116,105,109,101,45,118,101,99,116,111,114,32,108,111,99,32,116,109,41};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,47),40,99,104,105,99,107,101,110,46,116,105,109,101,46,112,111,115,105,120,35,115,101,99,111,110,100,115,45,62,108,111,99,97,108,45,116,105,109,101,32,46,32,114,101,115,116,41,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,116,105,109,101,46,112,111,115,105,120,35,115,101,99,111,110,100,115,45,62,117,116,99,45,116,105,109,101,32,46,32,114,101,115,116,41,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,116,105,109,101,46,112,111,115,105,120,35,115,101,99,111,110,100,115,45,62,115,116,114,105,110,103,32,46,32,114,101,115,116,41,0,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,116,105,109,101,46,112,111,115,105,120,35,108,111,99,97,108,45,116,105,109,101,45,62,115,101,99,111,110,100,115,32,116,109,41,0,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,116,105,109,101,46,112,111,115,105,120,35,116,105,109,101,45,62,115,116,114,105,110,103,32,116,109,32,46,32,114,101,115,116,41,0,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,53),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,46,115,105,103,110,97,108,35,115,101,116,45,115,105,103,110,97,108,45,104,97,110,100,108,101,114,33,32,115,105,103,32,112,114,111,99,41,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,33),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,112,114,111,99,101,115,115,45,115,108,101,101,112,32,110,41,0,0,0,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,7),40,97,51,57,49,52,41,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,24),40,97,51,57,50,48,32,101,112,105,100,32,101,110,111,114,109,32,101,99,111,100,101,41};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,112,114,111,99,101,115,115,45,119,97,105,116,32,46,32,97,114,103,115,41,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,7),40,97,51,57,56,57,41,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,11),40,97,51,57,56,51,32,101,120,110,41,0,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,17),40,100,111,108,111,111,112,49,48,49,48,32,115,108,32,105,41,0,0,0,0,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,10),40,116,109,112,49,50,53,52,56,41,0,0,0,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,7),40,97,52,48,54,51,41,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,15),40,116,109,112,50,50,53,52,57,32,97,114,103,115,41,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,7),40,97,51,57,57,56,41,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,9),40,97,51,57,55,55,32,107,41,0,0,0,0,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,61),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,108,105,115,116,45,62,99,45,115,116,114,105,110,103,45,98,117,102,102,101,114,32,115,116,114,105,110,103,45,108,105,115,116,32,99,111,110,118,101,114,116,32,108,111,99,41,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,14),40,100,111,108,111,111,112,49,48,50,57,32,105,41,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,102,114,101,101,45,99,45,115,116,114,105,110,103,45,98,117,102,102,101,114,32,98,117,102,102,101,114,45,97,114,114,97,121,41,0,0,0,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,7),40,103,49,48,52,50,41,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,19),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,48,52,49,41,0,0,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,46),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,99,104,101,99,107,45,101,110,118,105,114,111,110,109,101,110,116,45,108,105,115,116,32,108,115,116,32,108,111,99,41,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,7),40,110,111,112,32,120,41,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,7),40,97,52,49,57,49,41,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,11),40,97,52,49,56,53,32,101,120,110,41,0,0,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,48,56,53,32,103,49,48,57,55,41,0,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,7),40,97,52,50,49,50,41,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,7),40,97,52,50,57,51,41,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,14),40,97,52,50,56,55,32,46,32,97,114,103,115,41,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,7),40,97,52,50,48,54,41,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,9),40,97,52,49,55,57,32,107,41,0,0,0,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,77),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,99,97,108,108,45,119,105,116,104,45,101,120,101,99,45,97,114,103,115,32,108,111,99,32,102,105,108,101,110,97,109,101,32,97,114,103,99,111,110,118,32,97,114,103,108,105,115,116,32,101,110,118,108,105,115,116,32,112,114,111,99,41,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,21),40,99,104,101,99,107,32,108,111,99,32,99,109,100,32,105,110,112,32,114,41,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,111,112,101,110,45,105,110,112,117,116,45,112,105,112,101,32,99,109,100,32,46,32,109,41,0,0,0,0,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,111,112,101,110,45,111,117,116,112,117,116,45,112,105,112,101,32,99,109,100,32,46,32,109,41,0,0,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,39),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,99,108,111,115,101,45,105,110,112,117,116,45,112,105,112,101,32,112,111,114,116,41,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,99,108,111,115,101,45,111,117,116,112,117,116,45,112,105,112,101,32,112,111,114,116,41};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,7),40,97,52,52,53,54,41,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,17),40,97,52,52,54,55,32,46,32,114,101,115,117,108,116,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,7),40,97,52,52,54,49,41,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,7),40,97,52,52,55,54,41,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,55),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,119,105,116,104,45,105,110,112,117,116,45,102,114,111,109,45,112,105,112,101,32,99,109,100,32,116,104,117,110,107,32,46,32,109,111,100,101,41,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,7),40,97,52,52,57,48,41,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,17),40,97,52,52,57,54,32,46,32,114,101,115,117,108,116,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,55),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,99,97,108,108,45,119,105,116,104,45,111,117,116,112,117,116,45,112,105,112,101,32,99,109,100,32,112,114,111,99,32,46,32,109,111,100,101,41,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,7),40,97,52,53,49,52,41,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,17),40,97,52,53,50,48,32,46,32,114,101,115,117,108,116,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,54),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,99,97,108,108,45,119,105,116,104,45,105,110,112,117,116,45,112,105,112,101,32,99,109,100,32,112,114,111,99,32,46,32,109,111,100,101,41,0,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,7),40,97,52,53,51,56,41,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,17),40,97,52,53,52,57,32,46,32,114,101,115,117,108,116,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,7),40,97,52,53,52,51,41,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,7),40,97,52,53,53,56,41,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,54),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,119,105,116,104,45,111,117,116,112,117,116,45,116,111,45,112,105,112,101,32,99,109,100,32,116,104,117,110,107,32,46,32,109,111,100,101,41,0,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,32),40,35,35,115,121,115,35,102,105,108,101,45,110,111,110,98,108,111,99,107,105,110,103,33,32,102,100,49,50,56,52,41};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,31),40,35,35,115,121,115,35,102,105,108,101,45,115,101,108,101,99,116,45,111,110,101,32,105,110,116,49,50,56,57,41,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,47),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,99,111,110,116,114,111,108,32,102,100,32,99,109,100,32,46,32,114,101,115,116,41,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,52),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,111,112,101,110,32,102,105,108,101,110,97,109,101,32,102,108,97,103,115,32,46,32,109,111,100,101,41,0,0,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,34),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,99,108,111,115,101,32,102,100,41,0,0,0,0,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,47),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,114,101,97,100,32,102,100,32,115,105,122,101,32,46,32,98,117,102,102,101,114,41,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,48),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,119,114,105,116,101,32,102,100,32,98,117,102,102,101,114,32,46,32,115,105,122,101,41};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,109,107,115,116,101,109,112,32,116,101,109,112,108,97,116,101,41,0,0,0,0,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,18),40,100,111,108,111,111,112,49,51,56,51,32,102,100,115,114,108,41,0,0,0,0,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,18),40,100,111,108,111,111,112,49,51,56,52,32,102,100,115,119,108,41,0,0,0,0,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,14),40,108,112,32,105,32,114,101,115,32,102,100,115,41,0,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,14),40,108,112,32,105,32,114,101,115,32,102,100,115,41,0,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,52),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,115,101,108,101,99,116,32,102,100,115,114,32,102,100,115,119,32,46,32,116,105,109,101,111,117,116,41,0,0,0,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,99,114,101,97,116,101,45,112,105,112,101,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,52,57,55,32,103,49,53,48,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,46),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,46,115,105,103,110,97,108,35,115,101,116,45,115,105,103,110,97,108,45,109,97,115,107,33,32,115,105,103,115,41,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,46,115,105,103,110,97,108,35,115,105,103,110,97,108,45,109,97,115,107,101,100,63,32,115,105,103,41,0,0,0,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,46,115,105,103,110,97,108,35,115,105,103,110,97,108,45,109,97,115,107,33,32,115,105,103,41,0,0,0,0,0,0,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,46,115,105,103,110,97,108,35,115,105,103,110,97,108,45,117,110,109,97,115,107,33,32,115,105,103,41,0,0,0,0,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,60),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,117,115,101,114,45,105,110,102,111,114,109,97,116,105,111,110,32,117,115,101,114,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,99,117,114,114,101,110,116,45,117,115,101,114,45,110,97,109,101,41,0,0,0,0,0,0,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,59),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,99,117,114,114,101,110,116,45,101,102,102,101,99,116,105,118,101,45,117,115,101,114,45,110,97,109,101,41,0,0,0,0,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,35),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,99,104,111,119,110,32,108,111,99,32,102,32,117,105,100,32,103,105,100,41,0,0,0,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,46),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,99,114,101,97,116,101,45,115,101,115,115,105,111,110,41,0,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,99,114,101,97,116,101,45,115,121,109,98,111,108,105,99,45,108,105,110,107,32,111,108,100,32,110,101,119,41,0,0,0,0,0,0,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,41),40,35,35,115,121,115,35,114,101,97,100,45,115,121,109,98,111,108,105,99,45,108,105,110,107,32,102,110,97,109,101,32,108,111,99,97,116,105,111,110,41,0,0,0,0,0,0,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,7),40,97,53,53,54,53,41,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,24),40,108,111,111,112,32,99,111,109,112,111,110,101,110,116,115,32,114,101,115,117,108,116,41};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,55),40,97,53,53,55,49,32,98,97,115,101,45,111,114,105,103,105,110,32,98,97,115,101,45,100,105,114,101,99,116,111,114,121,32,100,105,114,101,99,116,111,114,121,45,99,111,109,112,111,110,101,110,116,115,41,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,52),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,114,101,97,100,45,115,121,109,98,111,108,105,99,45,108,105,110,107,32,102,110,97,109,101,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,108,105,110,107,32,111,108,100,32,110,101,119,41,0,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,8),40,114,101,97,100,121,63,41};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,7),40,102,101,116,99,104,41,0};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,7),40,97,53,56,54,49,41,0};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,7),40,97,53,56,56,54,41,0};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,7),40,97,53,56,57,56,41,0};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,7),40,97,53,57,49,52,41,0};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,110,32,109,32,115,116,97,114,116,41};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,25),40,97,53,57,50,57,32,112,111,114,116,32,110,32,100,101,115,116,32,115,116,97,114,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,11),40,97,54,48,51,51,32,112,111,115,41,0,0,0,0,0};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,7),40,97,54,48,50,51,41,0};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,28),40,97,54,48,55,57,32,110,101,120,116,32,108,105,110,101,32,102,117,108,108,45,108,105,110,101,63,41,0,0,0,0};
static C_char C_TLS li135[] C_aligned={C_lihdr(0,0,15),40,97,54,48,48,53,32,112,32,108,105,109,105,116,41,0};
static C_char C_TLS li136[] C_aligned={C_lihdr(0,0,12),40,97,54,49,50,52,32,112,111,114,116,41,0,0,0,0};
static C_char C_TLS li137[] C_aligned={C_lihdr(0,0,43),40,35,35,115,121,115,35,99,117,115,116,111,109,45,105,110,112,117,116,45,112,111,114,116,32,108,111,99,32,110,97,109,32,102,100,32,46,32,114,101,115,116,41,0,0,0,0,0};
static C_char C_TLS li138[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li139[] C_aligned={C_lihdr(0,0,18),40,112,111,107,101,49,55,56,50,32,115,116,114,32,108,101,110,41,0,0,0,0,0,0};
static C_char C_TLS li140[] C_aligned={C_lihdr(0,0,11),40,97,54,51,48,48,32,115,116,114,41,0,0,0,0,0};
static C_char C_TLS li141[] C_aligned={C_lihdr(0,0,7),40,97,54,51,48,54,41,0};
static C_char C_TLS li142[] C_aligned={C_lihdr(0,0,7),40,97,54,51,50,50,41,0};
static C_char C_TLS li143[] C_aligned={C_lihdr(0,0,12),40,102,95,54,51,51,49,32,115,116,114,41,0,0,0,0};
static C_char C_TLS li144[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,32,114,101,109,32,115,116,97,114,116,32,108,101,110,41,0,0,0,0};
static C_char C_TLS li145[] C_aligned={C_lihdr(0,0,12),40,102,95,54,51,52,54,32,115,116,114,41,0,0,0,0};
static C_char C_TLS li146[] C_aligned={C_lihdr(0,0,44),40,35,35,115,121,115,35,99,117,115,116,111,109,45,111,117,116,112,117,116,45,112,111,114,116,32,108,111,99,32,110,97,109,32,102,100,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char C_TLS li147[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,116,114,117,110,99,97,116,101,32,102,110,97,109,101,32,111,102,102,41,0,0,0,0};
static C_char C_TLS li148[] C_aligned={C_lihdr(0,0,21),40,115,101,116,117,112,32,112,111,114,116,32,97,114,103,115,32,108,111,99,41,0,0,0};
static C_char C_TLS li149[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li150[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,108,111,99,107,32,112,111,114,116,32,46,32,97,114,103,115,41,0,0,0,0,0,0};
static C_char C_TLS li151[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li152[] C_aligned={C_lihdr(0,0,51),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,108,111,99,107,47,98,108,111,99,107,105,110,103,32,112,111,114,116,32,46,32,97,114,103,115,41,0,0,0,0,0};
static C_char C_TLS li153[] C_aligned={C_lihdr(0,0,47),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,116,101,115,116,45,108,111,99,107,32,112,111,114,116,32,46,32,97,114,103,115,41,0};
static C_char C_TLS li154[] C_aligned={C_lihdr(0,0,7),40,97,54,55,48,52,41,0};
static C_char C_TLS li155[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,117,110,108,111,99,107,32,108,111,99,107,41,0,0,0};
static C_char C_TLS li156[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,99,114,101,97,116,101,45,102,105,102,111,32,102,110,97,109,101,32,46,32,109,111,100,101,41,0,0,0};
static C_char C_TLS li157[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,116,105,109,101,46,112,111,115,105,120,35,115,116,114,105,110,103,45,62,116,105,109,101,32,116,105,109,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char C_TLS li158[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,116,105,109,101,46,112,111,115,105,120,35,117,116,99,45,116,105,109,101,45,62,115,101,99,111,110,100,115,32,116,109,41,0,0,0,0,0,0,0};
static C_char C_TLS li159[] C_aligned={C_lihdr(0,0,48),40,99,104,105,99,107,101,110,46,116,105,109,101,46,112,111,115,105,120,35,108,111,99,97,108,45,116,105,109,101,122,111,110,101,45,97,98,98,114,101,118,105,97,116,105,111,110,41};
static C_char C_TLS li160[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,46,115,105,103,110,97,108,35,115,101,116,45,97,108,97,114,109,33,32,105,110,116,49,57,52,53,41,0,0,0,0,0};
static C_char C_TLS li161[] C_aligned={C_lihdr(0,0,14),40,102,95,54,56,57,54,32,116,104,117,110,107,41,0,0};
static C_char C_TLS li162[] C_aligned={C_lihdr(0,0,7),40,97,54,56,56,55,41,0};
static C_char C_TLS li163[] C_aligned={C_lihdr(0,0,7),40,97,54,56,56,49,41,0};
static C_char C_TLS li164[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,112,114,111,99,101,115,115,45,102,111,114,107,32,46,32,114,101,115,116,41,0,0,0};
static C_char C_TLS li165[] C_aligned={C_lihdr(0,0,9),40,97,54,57,53,57,32,120,41,0,0,0,0,0,0,0};
static C_char C_TLS li166[] C_aligned={C_lihdr(0,0,25),40,97,54,57,54,50,32,112,114,103,32,97,114,103,98,117,102,32,101,110,118,98,117,102,41,0,0,0,0,0,0,0};
static C_char C_TLS li167[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,112,114,111,99,101,115,115,45,101,120,101,99,117,116,101,32,102,105,108,101,110,97,109,101,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li168[] C_aligned={C_lihdr(0,0,7),40,97,55,48,50,57,41,0};
static C_char C_TLS li169[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,112,114,111,99,101,115,115,45,119,97,105,116,45,105,109,112,108,32,112,105,100,32,110,111,104,97,110,103,41,0,0,0,0};
static C_char C_TLS li170[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,112,97,114,101,110,116,45,112,114,111,99,101,115,115,45,105,100,41,0,0,0,0,0,0,0};
static C_char C_TLS li171[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,112,114,111,99,101,115,115,45,115,105,103,110,97,108,32,105,100,32,46,32,115,105,103,41,0,0,0,0,0,0,0};
static C_char C_TLS li172[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,112,114,111,99,101,115,115,45,114,117,110,32,102,32,46,32,97,114,103,115,41,0,0};
static C_char C_TLS li173[] C_aligned={C_lihdr(0,0,7),40,97,55,49,54,53,41,0};
static C_char C_TLS li174[] C_aligned={C_lihdr(0,0,17),40,97,55,49,55,49,32,95,32,102,108,103,32,99,111,100,41,0,0,0,0,0,0,0};
static C_char C_TLS li175[] C_aligned={C_lihdr(0,0,8),40,102,95,55,49,53,49,41};
static C_char C_TLS li176[] C_aligned={C_lihdr(0,0,44),40,109,97,107,101,45,111,110,45,99,108,111,115,101,32,108,111,99,32,112,105,100,32,99,108,115,118,101,99,32,105,100,120,32,105,100,120,97,32,105,100,120,98,41,0,0,0,0};
static C_char C_TLS li177[] C_aligned={C_lihdr(0,0,7),40,97,55,49,57,52,41,0};
static C_char C_TLS li178[] C_aligned={C_lihdr(0,0,11),40,97,55,50,48,48,32,105,32,111,41,0,0,0,0,0};
static C_char C_TLS li179[] C_aligned={C_lihdr(0,0,18),40,110,101,101,100,101,100,45,112,105,112,101,32,112,111,114,116,41,0,0,0,0,0,0};
static C_char C_TLS li180[] C_aligned={C_lihdr(0,0,26),40,99,111,110,110,101,99,116,45,112,97,114,101,110,116,32,112,105,112,101,32,112,111,114,116,41,0,0,0,0,0,0};
static C_char C_TLS li181[] C_aligned={C_lihdr(0,0,31),40,99,111,110,110,101,99,116,45,99,104,105,108,100,32,112,105,112,101,32,112,111,114,116,32,115,116,100,102,100,41,0};
static C_char C_TLS li182[] C_aligned={C_lihdr(0,0,7),40,97,55,50,54,57,41,0};
static C_char C_TLS li183[] C_aligned={C_lihdr(0,0,43),40,115,112,97,119,110,32,99,109,100,32,97,114,103,115,32,101,110,118,32,115,116,100,111,117,116,102,32,115,116,100,105,110,102,32,115,116,100,101,114,114,102,41,0,0,0,0,0};
static C_char C_TLS li184[] C_aligned={C_lihdr(0,0,39),40,105,110,112,117,116,45,112,111,114,116,32,108,111,99,32,99,109,100,32,112,105,112,101,32,115,116,100,102,32,111,110,45,99,108,111,115,101,41,0};
static C_char C_TLS li185[] C_aligned={C_lihdr(0,0,40),40,111,117,116,112,117,116,45,112,111,114,116,32,108,111,99,32,99,109,100,32,112,105,112,101,32,115,116,100,102,32,111,110,45,99,108,111,115,101,41};
static C_char C_TLS li186[] C_aligned={C_lihdr(0,0,7),40,97,55,51,49,57,41,0};
static C_char C_TLS li187[] C_aligned={C_lihdr(0,0,34),40,97,55,51,50,53,32,105,110,112,105,112,101,32,111,117,116,112,105,112,101,32,101,114,114,112,105,112,101,32,112,105,100,41,0,0,0,0,0,0};
static C_char C_TLS li188[] C_aligned={C_lihdr(0,0,68),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,112,114,111,99,101,115,115,45,105,109,112,108,32,108,111,99,32,99,109,100,32,97,114,103,115,32,101,110,118,32,115,116,100,111,117,116,102,32,115,116,100,105,110,102,32,115,116,100,101,114,114,102,41,0,0,0,0};
static C_char C_TLS li189[] C_aligned={C_lihdr(0,0,7),40,103,50,49,52,49,41,0};
static C_char C_TLS li190[] C_aligned={C_lihdr(0,0,19),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,49,52,48,41,0,0,0,0,0};
static C_char C_TLS li191[] C_aligned={C_lihdr(0,0,15),40,99,104,107,115,116,114,108,115,116,32,108,115,116,41,0};
static C_char C_TLS li192[] C_aligned={C_lihdr(0,0,7),40,97,55,52,50,48,41,0};
static C_char C_TLS li193[] C_aligned={C_lihdr(0,0,34),40,37,112,114,111,99,101,115,115,32,108,111,99,32,101,114,114,63,32,99,109,100,32,97,114,103,115,32,101,110,118,32,107,41,0,0,0,0,0,0};
static C_char C_TLS li194[] C_aligned={C_lihdr(0,0,15),40,97,55,52,54,52,32,105,32,111,32,112,32,101,41,0};
static C_char C_TLS li195[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,112,114,111,99,101,115,115,32,99,109,100,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char C_TLS li196[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,112,114,111,99,101,115,115,42,32,99,109,100,32,46,32,114,101,115,116,41,0,0,0};
static C_char C_TLS li197[] C_aligned={C_lihdr(0,0,55),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,115,101,116,45,114,111,111,116,45,100,105,114,101,99,116,111,114,121,33,32,100,105,114,41,0};
static C_char C_TLS li198[] C_aligned={C_lihdr(0,0,35),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,112,114,111,99,101,115,115,45,115,112,97,119,110,32,46,32,95,41,0,0,0,0,0};
static C_char C_TLS li199[] C_aligned={C_lihdr(0,0,21),40,99,104,105,99,107,101,110,46,101,114,114,110,111,35,101,114,114,110,111,41,0,0,0};
static C_char C_TLS li200[] C_aligned={C_lihdr(0,0,11),40,97,55,54,53,48,32,112,105,100,41,0,0,0,0,0};
static C_char C_TLS li201[] C_aligned={C_lihdr(0,0,16),40,97,55,54,54,56,32,112,105,100,32,112,103,105,100,41};
static C_char C_TLS li202[] C_aligned={C_lihdr(0,0,7),40,97,55,54,57,48,41,0};
static C_char C_TLS li203[] C_aligned={C_lihdr(0,0,10),40,97,55,54,57,51,32,105,100,41,0,0,0,0,0,0};
static C_char C_TLS li204[] C_aligned={C_lihdr(0,0,7),40,97,55,55,49,50,41,0};
static C_char C_TLS li205[] C_aligned={C_lihdr(0,0,10),40,97,55,55,49,53,32,105,100,41,0,0,0,0,0,0};
static C_char C_TLS li206[] C_aligned={C_lihdr(0,0,7),40,97,55,55,51,52,41,0};
static C_char C_TLS li207[] C_aligned={C_lihdr(0,0,10),40,97,55,55,51,55,32,105,100,41,0,0,0,0,0,0};
static C_char C_TLS li208[] C_aligned={C_lihdr(0,0,7),40,97,55,55,53,54,41,0};
static C_char C_TLS li209[] C_aligned={C_lihdr(0,0,10),40,97,55,55,53,57,32,105,100,41,0,0,0,0,0,0};
static C_char C_TLS li210[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,115,105,103,115,32,109,97,115,107,41};
static C_char C_TLS li211[] C_aligned={C_lihdr(0,0,7),40,97,55,55,55,56,41,0};
static C_char C_TLS li212[] C_aligned={C_lihdr(0,0,8),40,118,97,56,55,49,54,41};
static C_char C_TLS li213[] C_aligned={C_lihdr(0,0,8),40,118,97,56,55,49,56,41};
static C_char C_TLS li214[] C_aligned={C_lihdr(0,0,8),40,118,97,56,55,50,48,41};
static C_char C_TLS li215[] C_aligned={C_lihdr(0,0,8),40,118,97,56,55,50,50,41};
static C_char C_TLS li216[] C_aligned={C_lihdr(0,0,11),40,97,55,56,48,56,32,115,105,103,41,0,0,0,0,0};
static C_char C_TLS li217[] C_aligned={C_lihdr(0,0,14),40,97,55,56,49,55,32,46,32,114,101,115,116,41,0,0};
static C_char C_TLS li218[] C_aligned={C_lihdr(0,0,10),40,97,55,56,52,50,32,117,109,41,0,0,0,0,0,0};
static C_char C_TLS li219[] C_aligned={C_lihdr(0,0,12),40,97,55,56,52,56,32,112,111,114,116,41,0,0,0,0};
static C_char C_TLS li220[] C_aligned={C_lihdr(0,0,9),40,97,55,56,56,53,32,102,41,0,0,0,0,0,0,0};
static C_char C_TLS li221[] C_aligned={C_lihdr(0,0,9),40,97,55,56,57,49,32,102,41,0,0,0,0,0,0,0};
static C_char C_TLS li222[] C_aligned={C_lihdr(0,0,9),40,97,55,56,57,55,32,102,41,0,0,0,0,0,0,0};
static C_char C_TLS li223[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from k7570 in chicken.process-context.posix#set-root-directory! in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
C_regparm static C_word C_fcall stub2211(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_c_string(C_a0);
C_r=C_fix((C_word)chroot(t0));
return C_r;}

/* from chicken.process-context.posix#parent-process-id in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
C_regparm static C_word C_fcall stub2016(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getppid());
return C_r;}

/* from k6854 */
C_regparm static C_word C_fcall stub1970(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
C_r=C_fix((C_word)C_fflush(t0));
return C_r;}

/* from fork */
C_regparm static C_word C_fcall stub1950(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_fork());
return C_r;}

/* from k6831 */
C_regparm static C_word C_fcall stub1946(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_alarm(t0));
return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub1942(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;

#if !defined(__CYGWIN__) && !defined(__SVR4) && !defined(__uClinux__) && !defined(__hpux__) && !defined(_AIX)

time_t clock = time(NULL);
struct tm *ltm = C_localtime(&clock);
char *z = ltm ? (char *)ltm->tm_zone : 0;

#else

char *z = (daylight ? tzname[1] : tzname[0]);

#endif

C_return(z);
C_ret:
#undef return

return C_r;}

/* from k6759 */
C_regparm static C_word C_fcall stub1915(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
C_word t1=(C_word )(C_a1);
C_word t2=(C_word )(C_a2);
void * t3=(void * )C_data_pointer_or_null(C_a3);
C_r=((C_word)C_strptime(t0,t1,t2,t3));
return C_r;}

/* from k5655 in k5651 in chicken.file.posix#file-link in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
C_regparm static C_word C_fcall stub1635(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_c_string(C_a0);
char * t1=(char * )C_c_string(C_a1);
C_r=C_fix((C_word)link(t0,t1));
return C_r;}

/* from a7690 in k5346 in k5342 in k5338 in k5296 */
C_regparm static C_word C_fcall stub1550(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getegid());
return C_r;}

/* from a7712 in k5342 in k5338 in k5296 */
C_regparm static C_word C_fcall stub1545(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getgid());
return C_r;}

/* from a7734 in k5338 in k5296 */
C_regparm static C_word C_fcall stub1540(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_geteuid());
return C_r;}

/* from a7756 in k5296 */
C_regparm static C_word C_fcall stub1535(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getuid());
return C_r;}

#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub1469(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int i=(int )C_unfix(C_a0);
void * p=(void * )C_data_pointer_or_null(C_a1);
struct pollfd *fds = p;
C_return(fds[i].revents & (POLLOUT|POLLERR|POLLHUP|POLLNVAL));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub1450(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int i=(int )C_unfix(C_a0);
void * p=(void * )C_data_pointer_or_null(C_a1);
struct pollfd *fds = p;
C_return(fds[i].revents & (POLLIN|POLLERR|POLLHUP|POLLNVAL));
C_ret:
#undef return

return C_r;}

/* from k4855 */
C_regparm static C_word C_fcall stub1425(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_data_pointer_or_null(C_a0);
int t1=(int )C_unfix(C_a1);
int t2=(int )C_unfix(C_a2);
C_r=C_fix((C_word)poll(t0,t1,t2));
return C_r;}

#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub1410(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int i=(int )C_unfix(C_a0);
int fd=(int )C_unfix(C_a1);
void * p=(void * )C_data_pointer_or_null(C_a2);
struct pollfd *fds = p;
fds[i].fd = fd; fds[i].events = POLLOUT;
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub1393(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int i=(int )C_unfix(C_a0);
int fd=(int )C_unfix(C_a1);
void * p=(void * )C_data_pointer_or_null(C_a2);
struct pollfd *fds = p;
fds[i].fd = fd; fds[i].events = POLLIN;
C_ret:
#undef return

return C_r;}

/* from k4607 */
C_regparm static C_word C_fcall stub1297(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
long t2=(long )C_num_to_long(C_a2);
C_r=C_fix((C_word)fcntl(t0,t1,t2));
return C_r;}

/* from k4574 */
C_regparm static C_word C_fcall stub1290(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_check_fd_ready(t0));
return C_r;}

#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub1285(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int fd=(int )C_unfix(C_a0);
int val = fcntl(fd, F_GETFL, 0);
if(val == -1) C_return(0);
C_return(fcntl(fd, F_SETFL, val | O_NONBLOCK) != -1);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mpointer_or_false(&C_a,(void*)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub993(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word o=(C_word )(C_a0);
char *ptr = C_malloc(C_header_size(o)); 

if (ptr != NULL) {

  C_memcpy(ptr, C_data_pointer(o), C_header_size(o)); 

}

C_return(ptr);
C_ret:
#undef return

return C_r;}

/* from k3800 */
C_regparm static C_word C_fcall stub936(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
C_word t1=(C_word )(C_a1);
void * t2=(void * )C_data_pointer_or_null(C_a2);
C_r=C_mpointer(&C_a,(void*)C_strftime(t0,t1,t2));
return C_r;}

/* from k3787 */
C_regparm static C_word C_fcall stub926(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
C_r=C_mpointer(&C_a,(void*)C_asctime(t0,t1));
return C_r;}

/* from k3719 */
C_regparm static C_word C_fcall stub899(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_num_to_int(C_a0);
C_r=C_mpointer(&C_a,(void*)C_ctime(t0));
return C_r;}

/* from chicken.process-context.posix#current-process-id in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
C_regparm static C_word C_fcall stub843(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getpid());
return C_r;}

/* from k3130 in k3124 in k3121 in k3109 in chicken.file.posix#set-file-times! in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
C_regparm static C_word C_fcall stub724(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
C_word t1=(C_word )(C_a1);
C_word t2=(C_word )(C_a2);
C_r=C_fix((C_word)set_file_mtime(t0,t1,t2));
return C_r;}

/* from k2960 */
C_regparm static C_word C_fcall stub650(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)strerror(t0));
return C_r;}

C_noret_decl(f8727)
static void C_ccall f8727(C_word c,C_word *av) C_noret;
C_noret_decl(f8731)
static void C_ccall f8731(C_word c,C_word *av) C_noret;
C_noret_decl(f8773)
static void C_ccall f8773(C_word c,C_word *av) C_noret;
C_noret_decl(f8779)
static void C_ccall f8779(C_word c,C_word *av) C_noret;
C_noret_decl(f_2641)
static void C_ccall f_2641(C_word c,C_word *av) C_noret;
C_noret_decl(f_2644)
static void C_ccall f_2644(C_word c,C_word *av) C_noret;
C_noret_decl(f_2647)
static void C_ccall f_2647(C_word c,C_word *av) C_noret;
C_noret_decl(f_2650)
static void C_ccall f_2650(C_word c,C_word *av) C_noret;
C_noret_decl(f_2653)
static void C_ccall f_2653(C_word c,C_word *av) C_noret;
C_noret_decl(f_2656)
static void C_ccall f_2656(C_word c,C_word *av) C_noret;
C_noret_decl(f_2742)
static void C_ccall f_2742(C_word c,C_word *av) C_noret;
C_noret_decl(f_2755)
static void C_ccall f_2755(C_word c,C_word *av) C_noret;
C_noret_decl(f_2760)
static void C_ccall f_2760(C_word c,C_word *av) C_noret;
C_noret_decl(f_2764)
static void C_ccall f_2764(C_word c,C_word *av) C_noret;
C_noret_decl(f_2776)
static void C_ccall f_2776(C_word c,C_word *av) C_noret;
C_noret_decl(f_2780)
static void C_ccall f_2780(C_word c,C_word *av) C_noret;
C_noret_decl(f_2790)
static void C_fcall f_2790(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2811)
static void C_ccall f_2811(C_word c,C_word *av) C_noret;
C_noret_decl(f_2814)
static void C_ccall f_2814(C_word c,C_word *av) C_noret;
C_noret_decl(f_2825)
static void C_ccall f_2825(C_word c,C_word *av) C_noret;
C_noret_decl(f_2831)
static void C_fcall f_2831(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2856)
static void C_ccall f_2856(C_word c,C_word *av) C_noret;
C_noret_decl(f_2963)
static void C_ccall f_2963(C_word c,C_word *av) C_noret;
C_noret_decl(f_2967)
static void C_ccall f_2967(C_word c,C_word *av) C_noret;
C_noret_decl(f_2974)
static void C_ccall f_2974(C_word c,C_word *av) C_noret;
C_noret_decl(f_2978)
static void C_ccall f_2978(C_word c,C_word *av) C_noret;
C_noret_decl(f_2981)
static void C_fcall f_2981(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2985)
static void C_ccall f_2985(C_word c,C_word *av) C_noret;
C_noret_decl(f_3006)
static void C_ccall f_3006(C_word c,C_word *av) C_noret;
C_noret_decl(f_3010)
static void C_ccall f_3010(C_word c,C_word *av) C_noret;
C_noret_decl(f_3019)
static void C_ccall f_3019(C_word c,C_word *av) C_noret;
C_noret_decl(f_3027)
static void C_ccall f_3027(C_word c,C_word *av) C_noret;
C_noret_decl(f_3034)
static void C_ccall f_3034(C_word c,C_word *av) C_noret;
C_noret_decl(f_3045)
static void C_ccall f_3045(C_word c,C_word *av) C_noret;
C_noret_decl(f_3049)
static void C_ccall f_3049(C_word c,C_word *av) C_noret;
C_noret_decl(f_3052)
static void C_ccall f_3052(C_word c,C_word *av) C_noret;
C_noret_decl(f_3070)
static void C_ccall f_3070(C_word c,C_word *av) C_noret;
C_noret_decl(f_3074)
static void C_ccall f_3074(C_word c,C_word *av) C_noret;
C_noret_decl(f_3084)
static void C_ccall f_3084(C_word c,C_word *av) C_noret;
C_noret_decl(f_3089)
static void C_ccall f_3089(C_word c,C_word *av) C_noret;
C_noret_decl(f_3093)
static void C_ccall f_3093(C_word c,C_word *av) C_noret;
C_noret_decl(f_3095)
static void C_ccall f_3095(C_word c,C_word *av) C_noret;
C_noret_decl(f_3099)
static void C_ccall f_3099(C_word c,C_word *av) C_noret;
C_noret_decl(f_3101)
static void C_ccall f_3101(C_word c,C_word *av) C_noret;
C_noret_decl(f_3105)
static void C_ccall f_3105(C_word c,C_word *av) C_noret;
C_noret_decl(f_3107)
static void C_ccall f_3107(C_word c,C_word *av) C_noret;
C_noret_decl(f_3111)
static void C_ccall f_3111(C_word c,C_word *av) C_noret;
C_noret_decl(f_3123)
static void C_ccall f_3123(C_word c,C_word *av) C_noret;
C_noret_decl(f_3126)
static void C_ccall f_3126(C_word c,C_word *av) C_noret;
C_noret_decl(f_3132)
static void C_ccall f_3132(C_word c,C_word *av) C_noret;
C_noret_decl(f_3142)
static void C_fcall f_3142(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3186)
static void C_ccall f_3186(C_word c,C_word *av) C_noret;
C_noret_decl(f_3190)
static void C_ccall f_3190(C_word c,C_word *av) C_noret;
C_noret_decl(f_3192)
static void C_ccall f_3192(C_word c,C_word *av) C_noret;
C_noret_decl(f_3198)
static void C_ccall f_3198(C_word c,C_word *av) C_noret;
C_noret_decl(f_3206)
static void C_ccall f_3206(C_word c,C_word *av) C_noret;
C_noret_decl(f_3210)
static void C_ccall f_3210(C_word c,C_word *av) C_noret;
C_noret_decl(f_3214)
static void C_ccall f_3214(C_word c,C_word *av) C_noret;
C_noret_decl(f_3216)
static void C_ccall f_3216(C_word c,C_word *av) C_noret;
C_noret_decl(f_3235)
static void C_ccall f_3235(C_word c,C_word *av) C_noret;
C_noret_decl(f_3303)
static void C_ccall f_3303(C_word c,C_word *av) C_noret;
C_noret_decl(f_3311)
static void C_ccall f_3311(C_word c,C_word *av) C_noret;
C_noret_decl(f_3313)
static void C_ccall f_3313(C_word c,C_word *av) C_noret;
C_noret_decl(f_3321)
static void C_ccall f_3321(C_word c,C_word *av) C_noret;
C_noret_decl(f_3323)
static void C_ccall f_3323(C_word c,C_word *av) C_noret;
C_noret_decl(f_3331)
static void C_ccall f_3331(C_word c,C_word *av) C_noret;
C_noret_decl(f_3333)
static void C_ccall f_3333(C_word c,C_word *av) C_noret;
C_noret_decl(f_3341)
static void C_ccall f_3341(C_word c,C_word *av) C_noret;
C_noret_decl(f_3343)
static void C_ccall f_3343(C_word c,C_word *av) C_noret;
C_noret_decl(f_3351)
static void C_ccall f_3351(C_word c,C_word *av) C_noret;
C_noret_decl(f_3353)
static void C_ccall f_3353(C_word c,C_word *av) C_noret;
C_noret_decl(f_3361)
static void C_ccall f_3361(C_word c,C_word *av) C_noret;
C_noret_decl(f_3363)
static void C_ccall f_3363(C_word c,C_word *av) C_noret;
C_noret_decl(f_3371)
static void C_ccall f_3371(C_word c,C_word *av) C_noret;
C_noret_decl(f_3376)
static void C_ccall f_3376(C_word c,C_word *av) C_noret;
C_noret_decl(f_3383)
static void C_ccall f_3383(C_word c,C_word *av) C_noret;
C_noret_decl(f_3386)
static void C_ccall f_3386(C_word c,C_word *av) C_noret;
C_noret_decl(f_3392)
static void C_ccall f_3392(C_word c,C_word *av) C_noret;
C_noret_decl(f_3398)
static void C_ccall f_3398(C_word c,C_word *av) C_noret;
C_noret_decl(f_3431)
static void C_ccall f_3431(C_word c,C_word *av) C_noret;
C_noret_decl(f_3459)
static void C_fcall f_3459(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3467)
static void C_ccall f_3467(C_word c,C_word *av) C_noret;
C_noret_decl(f_3496)
static void C_fcall f_3496(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3509)
static void C_ccall f_3509(C_word c,C_word *av) C_noret;
C_noret_decl(f_3515)
static void C_ccall f_3515(C_word c,C_word *av) C_noret;
C_noret_decl(f_3519)
static void C_ccall f_3519(C_word c,C_word *av) C_noret;
C_noret_decl(f_3527)
static void C_ccall f_3527(C_word c,C_word *av) C_noret;
C_noret_decl(f_3529)
static void C_ccall f_3529(C_word c,C_word *av) C_noret;
C_noret_decl(f_3533)
static void C_ccall f_3533(C_word c,C_word *av) C_noret;
C_noret_decl(f_3541)
static void C_ccall f_3541(C_word c,C_word *av) C_noret;
C_noret_decl(f_3543)
static void C_ccall f_3543(C_word c,C_word *av) C_noret;
C_noret_decl(f_3559)
static void C_ccall f_3559(C_word c,C_word *av) C_noret;
C_noret_decl(f_3568)
static void C_ccall f_3568(C_word c,C_word *av) C_noret;
C_noret_decl(f_3582)
static void C_ccall f_3582(C_word c,C_word *av) C_noret;
C_noret_decl(f_3588)
static void C_ccall f_3588(C_word c,C_word *av) C_noret;
C_noret_decl(f_3592)
static void C_ccall f_3592(C_word c,C_word *av) C_noret;
C_noret_decl(f_3595)
static void C_fcall f_3595(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3598)
static void C_ccall f_3598(C_word c,C_word *av) C_noret;
C_noret_decl(f_3613)
static void C_ccall f_3613(C_word c,C_word *av) C_noret;
C_noret_decl(f_3615)
static void C_ccall f_3615(C_word c,C_word *av) C_noret;
C_noret_decl(f_3618)
static void C_ccall f_3618(C_word c,C_word *av) C_noret;
C_noret_decl(f_3622)
static void C_ccall f_3622(C_word c,C_word *av) C_noret;
C_noret_decl(f_3625)
static void C_ccall f_3625(C_word c,C_word *av) C_noret;
C_noret_decl(f_3634)
static void C_ccall f_3634(C_word c,C_word *av) C_noret;
C_noret_decl(f_3648)
static void C_ccall f_3648(C_word c,C_word *av) C_noret;
C_noret_decl(f_3651)
static void C_fcall f_3651(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3670)
static void C_ccall f_3670(C_word c,C_word *av) C_noret;
C_noret_decl(f_3674)
static void C_ccall f_3674(C_word c,C_word *av) C_noret;
C_noret_decl(f_3677)
static void C_ccall f_3677(C_word c,C_word *av) C_noret;
C_noret_decl(f_3691)
static void C_ccall f_3691(C_word c,C_word *av) C_noret;
C_noret_decl(f_3695)
static void C_ccall f_3695(C_word c,C_word *av) C_noret;
C_noret_decl(f_3698)
static void C_ccall f_3698(C_word c,C_word *av) C_noret;
C_noret_decl(f_3723)
static void C_ccall f_3723(C_word c,C_word *av) C_noret;
C_noret_decl(f_3727)
static void C_ccall f_3727(C_word c,C_word *av) C_noret;
C_noret_decl(f_3730)
static void C_ccall f_3730(C_word c,C_word *av) C_noret;
C_noret_decl(f_3733)
static void C_ccall f_3733(C_word c,C_word *av) C_noret;
C_noret_decl(f_3761)
static void C_ccall f_3761(C_word c,C_word *av) C_noret;
C_noret_decl(f_3765)
static void C_ccall f_3765(C_word c,C_word *av) C_noret;
C_noret_decl(f_3769)
static void C_ccall f_3769(C_word c,C_word *av) C_noret;
C_noret_decl(f_3806)
static void C_ccall f_3806(C_word c,C_word *av) C_noret;
C_noret_decl(f_3813)
static void C_ccall f_3813(C_word c,C_word *av) C_noret;
C_noret_decl(f_3822)
static void C_ccall f_3822(C_word c,C_word *av) C_noret;
C_noret_decl(f_3832)
static void C_ccall f_3832(C_word c,C_word *av) C_noret;
C_noret_decl(f_3836)
static void C_ccall f_3836(C_word c,C_word *av) C_noret;
C_noret_decl(f_3839)
static void C_ccall f_3839(C_word c,C_word *av) C_noret;
C_noret_decl(f_3860)
static void C_ccall f_3860(C_word c,C_word *av) C_noret;
C_noret_decl(f_3868)
static void C_ccall f_3868(C_word c,C_word *av) C_noret;
C_noret_decl(f_3872)
static void C_ccall f_3872(C_word c,C_word *av) C_noret;
C_noret_decl(f_3883)
static void C_ccall f_3883(C_word c,C_word *av) C_noret;
C_noret_decl(f_3885)
static void C_ccall f_3885(C_word c,C_word *av) C_noret;
C_noret_decl(f_3889)
static void C_ccall f_3889(C_word c,C_word *av) C_noret;
C_noret_decl(f_3891)
static void C_ccall f_3891(C_word c,C_word *av) C_noret;
C_noret_decl(f_3910)
static void C_ccall f_3910(C_word c,C_word *av) C_noret;
C_noret_decl(f_3915)
static void C_ccall f_3915(C_word c,C_word *av) C_noret;
C_noret_decl(f_3921)
static void C_ccall f_3921(C_word c,C_word *av) C_noret;
C_noret_decl(f_3962)
static void C_fcall f_3962(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3970)
static void C_ccall f_3970(C_word c,C_word *av) C_noret;
C_noret_decl(f_3973)
static void C_ccall f_3973(C_word c,C_word *av) C_noret;
C_noret_decl(f_3978)
static void C_ccall f_3978(C_word c,C_word *av) C_noret;
C_noret_decl(f_3984)
static void C_ccall f_3984(C_word c,C_word *av) C_noret;
C_noret_decl(f_3990)
static void C_ccall f_3990(C_word c,C_word *av) C_noret;
C_noret_decl(f_3994)
static void C_ccall f_3994(C_word c,C_word *av) C_noret;
C_noret_decl(f_3999)
static void C_ccall f_3999(C_word c,C_word *av) C_noret;
C_noret_decl(f_4001)
static void C_fcall f_4001(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4005)
static void C_ccall f_4005(C_word c,C_word *av) C_noret;
C_noret_decl(f_4007)
static void C_fcall f_4007(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4023)
static void C_ccall f_4023(C_word c,C_word *av) C_noret;
C_noret_decl(f_4029)
static void C_ccall f_4029(C_word c,C_word *av) C_noret;
C_noret_decl(f_4032)
static void C_ccall f_4032(C_word c,C_word *av) C_noret;
C_noret_decl(f_4048)
static void C_ccall f_4048(C_word c,C_word *av) C_noret;
C_noret_decl(f_4058)
static void C_fcall f_4058(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4064)
static void C_ccall f_4064(C_word c,C_word *av) C_noret;
C_noret_decl(f_4075)
static void C_ccall f_4075(C_word c,C_word *av) C_noret;
C_noret_decl(f_4079)
static void C_fcall f_4079(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4083)
static void C_ccall f_4083(C_word c,C_word *av) C_noret;
C_noret_decl(f_4088)
static void C_fcall f_4088(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4098)
static void C_ccall f_4098(C_word c,C_word *av) C_noret;
C_noret_decl(f_4101)
static void C_ccall f_4101(C_word c,C_word *av) C_noret;
C_noret_decl(f_4113)
static void C_fcall f_4113(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4118)
static C_word C_fcall f_4118(C_word t0,C_word t1);
C_noret_decl(f_4137)
static C_word C_fcall f_4137(C_word t0,C_word t1);
C_noret_decl(f_4160)
static void C_ccall f_4160(C_word c,C_word *av) C_noret;
C_noret_decl(f_4162)
static void C_fcall f_4162(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_4166)
static void C_ccall f_4166(C_word c,C_word *av) C_noret;
C_noret_decl(f_4172)
static void C_ccall f_4172(C_word c,C_word *av) C_noret;
C_noret_decl(f_4175)
static void C_ccall f_4175(C_word c,C_word *av) C_noret;
C_noret_decl(f_4180)
static void C_ccall f_4180(C_word c,C_word *av) C_noret;
C_noret_decl(f_4186)
static void C_ccall f_4186(C_word c,C_word *av) C_noret;
C_noret_decl(f_4192)
static void C_ccall f_4192(C_word c,C_word *av) C_noret;
C_noret_decl(f_4196)
static void C_ccall f_4196(C_word c,C_word *av) C_noret;
C_noret_decl(f_4199)
static void C_ccall f_4199(C_word c,C_word *av) C_noret;
C_noret_decl(f_4207)
static void C_ccall f_4207(C_word c,C_word *av) C_noret;
C_noret_decl(f_4213)
static void C_ccall f_4213(C_word c,C_word *av) C_noret;
C_noret_decl(f_4217)
static void C_fcall f_4217(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4224)
static void C_ccall f_4224(C_word c,C_word *av) C_noret;
C_noret_decl(f_4227)
static void C_ccall f_4227(C_word c,C_word *av) C_noret;
C_noret_decl(f_4231)
static void C_ccall f_4231(C_word c,C_word *av) C_noret;
C_noret_decl(f_4252)
static void C_ccall f_4252(C_word c,C_word *av) C_noret;
C_noret_decl(f_4254)
static void C_fcall f_4254(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4279)
static void C_ccall f_4279(C_word c,C_word *av) C_noret;
C_noret_decl(f_4288)
static void C_ccall f_4288(C_word c,C_word *av) C_noret;
C_noret_decl(f_4294)
static void C_ccall f_4294(C_word c,C_word *av) C_noret;
C_noret_decl(f_4319)
static void C_fcall f_4319(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4332)
static void C_ccall f_4332(C_word c,C_word *av) C_noret;
C_noret_decl(f_4338)
static void C_ccall f_4338(C_word c,C_word *av) C_noret;
C_noret_decl(f_4352)
static void C_ccall f_4352(C_word c,C_word *av) C_noret;
C_noret_decl(f_4359)
static void C_ccall f_4359(C_word c,C_word *av) C_noret;
C_noret_decl(f_4369)
static void C_ccall f_4369(C_word c,C_word *av) C_noret;
C_noret_decl(f_4378)
static void C_ccall f_4378(C_word c,C_word *av) C_noret;
C_noret_decl(f_4392)
static void C_ccall f_4392(C_word c,C_word *av) C_noret;
C_noret_decl(f_4399)
static void C_ccall f_4399(C_word c,C_word *av) C_noret;
C_noret_decl(f_4409)
static void C_ccall f_4409(C_word c,C_word *av) C_noret;
C_noret_decl(f_4418)
static void C_ccall f_4418(C_word c,C_word *av) C_noret;
C_noret_decl(f_4425)
static void C_ccall f_4425(C_word c,C_word *av) C_noret;
C_noret_decl(f_4433)
static void C_ccall f_4433(C_word c,C_word *av) C_noret;
C_noret_decl(f_4440)
static void C_ccall f_4440(C_word c,C_word *av) C_noret;
C_noret_decl(f_4448)
static void C_ccall f_4448(C_word c,C_word *av) C_noret;
C_noret_decl(f_4452)
static void C_ccall f_4452(C_word c,C_word *av) C_noret;
C_noret_decl(f_4457)
static void C_ccall f_4457(C_word c,C_word *av) C_noret;
C_noret_decl(f_4462)
static void C_ccall f_4462(C_word c,C_word *av) C_noret;
C_noret_decl(f_4468)
static void C_ccall f_4468(C_word c,C_word *av) C_noret;
C_noret_decl(f_4472)
static void C_ccall f_4472(C_word c,C_word *av) C_noret;
C_noret_decl(f_4477)
static void C_ccall f_4477(C_word c,C_word *av) C_noret;
C_noret_decl(f_4482)
static void C_ccall f_4482(C_word c,C_word *av) C_noret;
C_noret_decl(f_4486)
static void C_ccall f_4486(C_word c,C_word *av) C_noret;
C_noret_decl(f_4491)
static void C_ccall f_4491(C_word c,C_word *av) C_noret;
C_noret_decl(f_4497)
static void C_ccall f_4497(C_word c,C_word *av) C_noret;
C_noret_decl(f_4501)
static void C_ccall f_4501(C_word c,C_word *av) C_noret;
C_noret_decl(f_4506)
static void C_ccall f_4506(C_word c,C_word *av) C_noret;
C_noret_decl(f_4510)
static void C_ccall f_4510(C_word c,C_word *av) C_noret;
C_noret_decl(f_4515)
static void C_ccall f_4515(C_word c,C_word *av) C_noret;
C_noret_decl(f_4521)
static void C_ccall f_4521(C_word c,C_word *av) C_noret;
C_noret_decl(f_4525)
static void C_ccall f_4525(C_word c,C_word *av) C_noret;
C_noret_decl(f_4530)
static void C_ccall f_4530(C_word c,C_word *av) C_noret;
C_noret_decl(f_4534)
static void C_ccall f_4534(C_word c,C_word *av) C_noret;
C_noret_decl(f_4539)
static void C_ccall f_4539(C_word c,C_word *av) C_noret;
C_noret_decl(f_4544)
static void C_ccall f_4544(C_word c,C_word *av) C_noret;
C_noret_decl(f_4550)
static void C_ccall f_4550(C_word c,C_word *av) C_noret;
C_noret_decl(f_4554)
static void C_ccall f_4554(C_word c,C_word *av) C_noret;
C_noret_decl(f_4559)
static void C_ccall f_4559(C_word c,C_word *av) C_noret;
C_noret_decl(f_4564)
static void C_ccall f_4564(C_word c,C_word *av) C_noret;
C_noret_decl(f_4571)
static void C_ccall f_4571(C_word c,C_word *av) C_noret;
C_noret_decl(f_4611)
static void C_ccall f_4611(C_word c,C_word *av) C_noret;
C_noret_decl(f_4618)
static void C_ccall f_4618(C_word c,C_word *av) C_noret;
C_noret_decl(f_4621)
static void C_ccall f_4621(C_word c,C_word *av) C_noret;
C_noret_decl(f_4644)
static void C_ccall f_4644(C_word c,C_word *av) C_noret;
C_noret_decl(f_4654)
static void C_ccall f_4654(C_word c,C_word *av) C_noret;
C_noret_decl(f_4657)
static void C_ccall f_4657(C_word c,C_word *av) C_noret;
C_noret_decl(f_4661)
static void C_ccall f_4661(C_word c,C_word *av) C_noret;
C_noret_decl(f_4664)
static void C_ccall f_4664(C_word c,C_word *av) C_noret;
C_noret_decl(f_4676)
static void C_ccall f_4676(C_word c,C_word *av) C_noret;
C_noret_decl(f_4680)
static void C_ccall f_4680(C_word c,C_word *av) C_noret;
C_noret_decl(f_4685)
static void C_ccall f_4685(C_word c,C_word *av) C_noret;
C_noret_decl(f_4707)
static void C_ccall f_4707(C_word c,C_word *av) C_noret;
C_noret_decl(f_4711)
static void C_ccall f_4711(C_word c,C_word *av) C_noret;
C_noret_decl(f_4714)
static void C_ccall f_4714(C_word c,C_word *av) C_noret;
C_noret_decl(f_4717)
static void C_ccall f_4717(C_word c,C_word *av) C_noret;
C_noret_decl(f_4720)
static void C_ccall f_4720(C_word c,C_word *av) C_noret;
C_noret_decl(f_4723)
static void C_ccall f_4723(C_word c,C_word *av) C_noret;
C_noret_decl(f_4747)
static void C_ccall f_4747(C_word c,C_word *av) C_noret;
C_noret_decl(f_4751)
static void C_ccall f_4751(C_word c,C_word *av) C_noret;
C_noret_decl(f_4754)
static void C_ccall f_4754(C_word c,C_word *av) C_noret;
C_noret_decl(f_4760)
static void C_ccall f_4760(C_word c,C_word *av) C_noret;
C_noret_decl(f_4763)
static void C_ccall f_4763(C_word c,C_word *av) C_noret;
C_noret_decl(f_4784)
static void C_ccall f_4784(C_word c,C_word *av) C_noret;
C_noret_decl(f_4791)
static void C_ccall f_4791(C_word c,C_word *av) C_noret;
C_noret_decl(f_4797)
static void C_ccall f_4797(C_word c,C_word *av) C_noret;
C_noret_decl(f_4804)
static void C_ccall f_4804(C_word c,C_word *av) C_noret;
C_noret_decl(f_4816)
static void C_ccall f_4816(C_word c,C_word *av) C_noret;
C_noret_decl(f_4823)
static void C_fcall f_4823(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4826)
static void C_fcall f_4826(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4834)
static void C_ccall f_4834(C_word c,C_word *av) C_noret;
C_noret_decl(f_4837)
static void C_ccall f_4837(C_word c,C_word *av) C_noret;
C_noret_decl(f_4898)
static void C_ccall f_4898(C_word c,C_word *av) C_noret;
C_noret_decl(f_4901)
static void C_ccall f_4901(C_word c,C_word *av) C_noret;
C_noret_decl(f_4908)
static void C_fcall f_4908(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4938)
static void C_fcall f_4938(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4997)
static void C_fcall f_4997(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5058)
static void C_fcall f_5058(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5065)
static void C_ccall f_5065(C_word c,C_word *av) C_noret;
C_noret_decl(f_5067)
static C_word C_fcall f_5067(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_5109)
static C_word C_fcall f_5109(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_5193)
static void C_ccall f_5193(C_word c,C_word *av) C_noret;
C_noret_decl(f_5200)
static void C_ccall f_5200(C_word c,C_word *av) C_noret;
C_noret_decl(f_5249)
static void C_ccall f_5249(C_word c,C_word *av) C_noret;
C_noret_decl(f_5258)
static void C_ccall f_5258(C_word c,C_word *av) C_noret;
C_noret_decl(f_5261)
static void C_ccall f_5261(C_word c,C_word *av) C_noret;
C_noret_decl(f_5273)
static void C_fcall f_5273(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5298)
static void C_ccall f_5298(C_word c,C_word *av) C_noret;
C_noret_decl(f_5300)
static void C_ccall f_5300(C_word c,C_word *av) C_noret;
C_noret_decl(f_5304)
static void C_ccall f_5304(C_word c,C_word *av) C_noret;
C_noret_decl(f_5306)
static void C_ccall f_5306(C_word c,C_word *av) C_noret;
C_noret_decl(f_5310)
static void C_ccall f_5310(C_word c,C_word *av) C_noret;
C_noret_decl(f_5322)
static void C_ccall f_5322(C_word c,C_word *av) C_noret;
C_noret_decl(f_5326)
static void C_ccall f_5326(C_word c,C_word *av) C_noret;
C_noret_decl(f_5340)
static void C_ccall f_5340(C_word c,C_word *av) C_noret;
C_noret_decl(f_5344)
static void C_ccall f_5344(C_word c,C_word *av) C_noret;
C_noret_decl(f_5348)
static void C_ccall f_5348(C_word c,C_word *av) C_noret;
C_noret_decl(f_5352)
static void C_ccall f_5352(C_word c,C_word *av) C_noret;
C_noret_decl(f_5354)
static void C_ccall f_5354(C_word c,C_word *av) C_noret;
C_noret_decl(f_5361)
static void C_fcall f_5361(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5374)
static void C_ccall f_5374(C_word c,C_word *av) C_noret;
C_noret_decl(f_5378)
static void C_ccall f_5378(C_word c,C_word *av) C_noret;
C_noret_decl(f_5382)
static void C_ccall f_5382(C_word c,C_word *av) C_noret;
C_noret_decl(f_5386)
static void C_ccall f_5386(C_word c,C_word *av) C_noret;
C_noret_decl(f_5390)
static void C_ccall f_5390(C_word c,C_word *av) C_noret;
C_noret_decl(f_5400)
static void C_ccall f_5400(C_word c,C_word *av) C_noret;
C_noret_decl(f_5408)
static void C_ccall f_5408(C_word c,C_word *av) C_noret;
C_noret_decl(f_5416)
static void C_ccall f_5416(C_word c,C_word *av) C_noret;
C_noret_decl(f_5420)
static void C_ccall f_5420(C_word c,C_word *av) C_noret;
C_noret_decl(f_5422)
static void C_ccall f_5422(C_word c,C_word *av) C_noret;
C_noret_decl(f_5430)
static void C_ccall f_5430(C_word c,C_word *av) C_noret;
C_noret_decl(f_5434)
static void C_ccall f_5434(C_word c,C_word *av) C_noret;
C_noret_decl(f_5436)
static void C_fcall f_5436(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5440)
static void C_ccall f_5440(C_word c,C_word *av) C_noret;
C_noret_decl(f_5443)
static void C_ccall f_5443(C_word c,C_word *av) C_noret;
C_noret_decl(f_5446)
static void C_ccall f_5446(C_word c,C_word *av) C_noret;
C_noret_decl(f_5458)
static void C_ccall f_5458(C_word c,C_word *av) C_noret;
C_noret_decl(f_5462)
static void C_ccall f_5462(C_word c,C_word *av) C_noret;
C_noret_decl(f_5478)
static void C_ccall f_5478(C_word c,C_word *av) C_noret;
C_noret_decl(f_5483)
static void C_ccall f_5483(C_word c,C_word *av) C_noret;
C_noret_decl(f_5487)
static void C_ccall f_5487(C_word c,C_word *av) C_noret;
C_noret_decl(f_5493)
static void C_ccall f_5493(C_word c,C_word *av) C_noret;
C_noret_decl(f_5500)
static void C_ccall f_5500(C_word c,C_word *av) C_noret;
C_noret_decl(f_5502)
static void C_ccall f_5502(C_word c,C_word *av) C_noret;
C_noret_decl(f_5523)
static void C_ccall f_5523(C_word c,C_word *av) C_noret;
C_noret_decl(f_5527)
static void C_ccall f_5527(C_word c,C_word *av) C_noret;
C_noret_decl(f_5531)
static void C_ccall f_5531(C_word c,C_word *av) C_noret;
C_noret_decl(f_5532)
static void C_ccall f_5532(C_word c,C_word *av) C_noret;
C_noret_decl(f_5537)
static void C_ccall f_5537(C_word c,C_word *av) C_noret;
C_noret_decl(f_5551)
static void C_ccall f_5551(C_word c,C_word *av) C_noret;
C_noret_decl(f_5566)
static void C_ccall f_5566(C_word c,C_word *av) C_noret;
C_noret_decl(f_5572)
static void C_ccall f_5572(C_word c,C_word *av) C_noret;
C_noret_decl(f_5580)
static void C_ccall f_5580(C_word c,C_word *av) C_noret;
C_noret_decl(f_5582)
static void C_fcall f_5582(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5592)
static void C_ccall f_5592(C_word c,C_word *av) C_noret;
C_noret_decl(f_5598)
static void C_ccall f_5598(C_word c,C_word *av) C_noret;
C_noret_decl(f_5607)
static void C_ccall f_5607(C_word c,C_word *av) C_noret;
C_noret_decl(f_5610)
static void C_ccall f_5610(C_word c,C_word *av) C_noret;
C_noret_decl(f_5613)
static void C_ccall f_5613(C_word c,C_word *av) C_noret;
C_noret_decl(f_5619)
static void C_ccall f_5619(C_word c,C_word *av) C_noret;
C_noret_decl(f_5653)
static void C_ccall f_5653(C_word c,C_word *av) C_noret;
C_noret_decl(f_5657)
static void C_ccall f_5657(C_word c,C_word *av) C_noret;
C_noret_decl(f_5666)
static void C_ccall f_5666(C_word c,C_word *av) C_noret;
C_noret_decl(f_5688)
static void C_ccall f_5688(C_word c,C_word *av) C_noret;
C_noret_decl(f_5716)
static void C_ccall f_5716(C_word c,C_word *av) C_noret;
C_noret_decl(f_5722)
static void C_ccall f_5722(C_word c,C_word *av) C_noret;
C_noret_decl(f_5723)
static void C_fcall f_5723(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5727)
static void C_ccall f_5727(C_word c,C_word *av) C_noret;
C_noret_decl(f_5752)
static C_word C_fcall f_5752(C_word t0);
C_noret_decl(f_5760)
static void C_fcall f_5760(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5766)
static void C_ccall f_5766(C_word c,C_word *av) C_noret;
C_noret_decl(f_5785)
static void C_ccall f_5785(C_word c,C_word *av) C_noret;
C_noret_decl(f_5788)
static void C_ccall f_5788(C_word c,C_word *av) C_noret;
C_noret_decl(f_5818)
static void C_ccall f_5818(C_word c,C_word *av) C_noret;
C_noret_decl(f_5821)
static void C_ccall f_5821(C_word c,C_word *av) C_noret;
C_noret_decl(f_5827)
static void C_ccall f_5827(C_word c,C_word *av) C_noret;
C_noret_decl(f_5856)
static void C_ccall f_5856(C_word c,C_word *av) C_noret;
C_noret_decl(f_5862)
static void C_ccall f_5862(C_word c,C_word *av) C_noret;
C_noret_decl(f_5866)
static void C_ccall f_5866(C_word c,C_word *av) C_noret;
C_noret_decl(f_5887)
static void C_ccall f_5887(C_word c,C_word *av) C_noret;
C_noret_decl(f_5899)
static void C_ccall f_5899(C_word c,C_word *av) C_noret;
C_noret_decl(f_5903)
static void C_ccall f_5903(C_word c,C_word *av) C_noret;
C_noret_decl(f_5915)
static void C_ccall f_5915(C_word c,C_word *av) C_noret;
C_noret_decl(f_5919)
static void C_ccall f_5919(C_word c,C_word *av) C_noret;
C_noret_decl(f_5930)
static void C_ccall f_5930(C_word c,C_word *av) C_noret;
C_noret_decl(f_5940)
static void C_fcall f_5940(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5988)
static void C_ccall f_5988(C_word c,C_word *av) C_noret;
C_noret_decl(f_6006)
static void C_ccall f_6006(C_word c,C_word *av) C_noret;
C_noret_decl(f_6010)
static void C_ccall f_6010(C_word c,C_word *av) C_noret;
C_noret_decl(f_6024)
static void C_ccall f_6024(C_word c,C_word *av) C_noret;
C_noret_decl(f_6034)
static void C_ccall f_6034(C_word c,C_word *av) C_noret;
C_noret_decl(f_6054)
static void C_ccall f_6054(C_word c,C_word *av) C_noret;
C_noret_decl(f_6080)
static void C_ccall f_6080(C_word c,C_word *av) C_noret;
C_noret_decl(f_6125)
static void C_ccall f_6125(C_word c,C_word *av) C_noret;
C_noret_decl(f_6135)
static void C_ccall f_6135(C_word c,C_word *av) C_noret;
C_noret_decl(f_6201)
static void C_ccall f_6201(C_word c,C_word *av) C_noret;
C_noret_decl(f_6223)
static void C_ccall f_6223(C_word c,C_word *av) C_noret;
C_noret_decl(f_6224)
static void C_ccall f_6224(C_word c,C_word *av) C_noret;
C_noret_decl(f_6230)
static void C_ccall f_6230(C_word c,C_word *av) C_noret;
C_noret_decl(f_6249)
static void C_ccall f_6249(C_word c,C_word *av) C_noret;
C_noret_decl(f_6280)
static void C_ccall f_6280(C_word c,C_word *av) C_noret;
C_noret_decl(f_6290)
static void C_fcall f_6290(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6295)
static void C_ccall f_6295(C_word c,C_word *av) C_noret;
C_noret_decl(f_6301)
static void C_ccall f_6301(C_word c,C_word *av) C_noret;
C_noret_decl(f_6307)
static void C_ccall f_6307(C_word c,C_word *av) C_noret;
C_noret_decl(f_6311)
static void C_ccall f_6311(C_word c,C_word *av) C_noret;
C_noret_decl(f_6323)
static void C_ccall f_6323(C_word c,C_word *av) C_noret;
C_noret_decl(f_6331)
static void C_ccall f_6331(C_word c,C_word *av) C_noret;
C_noret_decl(f_6345)
static void C_ccall f_6345(C_word c,C_word *av) C_noret;
C_noret_decl(f_6346)
static void C_ccall f_6346(C_word c,C_word *av) C_noret;
C_noret_decl(f_6363)
static void C_fcall f_6363(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6373)
static void C_ccall f_6373(C_word c,C_word *av) C_noret;
C_noret_decl(f_6456)
static void C_ccall f_6456(C_word c,C_word *av) C_noret;
C_noret_decl(f_6460)
static void C_ccall f_6460(C_word c,C_word *av) C_noret;
C_noret_decl(f_6466)
static void C_fcall f_6466(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6473)
static void C_ccall f_6473(C_word c,C_word *av) C_noret;
C_noret_decl(f_6480)
static void C_ccall f_6480(C_word c,C_word *av) C_noret;
C_noret_decl(f_6486)
static void C_ccall f_6486(C_word c,C_word *av) C_noret;
C_noret_decl(f_6490)
static void C_ccall f_6490(C_word c,C_word *av) C_noret;
C_noret_decl(f_6501)
static void C_fcall f_6501(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6519)
static void C_ccall f_6519(C_word c,C_word *av) C_noret;
C_noret_decl(f_6522)
static void C_ccall f_6522(C_word c,C_word *av) C_noret;
C_noret_decl(f_6587)
static void C_ccall f_6587(C_word c,C_word *av) C_noret;
C_noret_decl(f_6593)
static void C_ccall f_6593(C_word c,C_word *av) C_noret;
C_noret_decl(f_6597)
static void C_ccall f_6597(C_word c,C_word *av) C_noret;
C_noret_decl(f_6618)
static void C_ccall f_6618(C_word c,C_word *av) C_noret;
C_noret_decl(f_6624)
static void C_ccall f_6624(C_word c,C_word *av) C_noret;
C_noret_decl(f_6628)
static void C_ccall f_6628(C_word c,C_word *av) C_noret;
C_noret_decl(f_6649)
static void C_ccall f_6649(C_word c,C_word *av) C_noret;
C_noret_decl(f_6653)
static void C_ccall f_6653(C_word c,C_word *av) C_noret;
C_noret_decl(f_6676)
static void C_ccall f_6676(C_word c,C_word *av) C_noret;
C_noret_decl(f_6705)
static void C_ccall f_6705(C_word c,C_word *av) C_noret;
C_noret_decl(f_6719)
static void C_ccall f_6719(C_word c,C_word *av) C_noret;
C_noret_decl(f_6729)
static void C_ccall f_6729(C_word c,C_word *av) C_noret;
C_noret_decl(f_6743)
static void C_ccall f_6743(C_word c,C_word *av) C_noret;
C_noret_decl(f_6765)
static void C_ccall f_6765(C_word c,C_word *av) C_noret;
C_noret_decl(f_6782)
static void C_ccall f_6782(C_word c,C_word *av) C_noret;
C_noret_decl(f_6786)
static void C_ccall f_6786(C_word c,C_word *av) C_noret;
C_noret_decl(f_6794)
static void C_ccall f_6794(C_word c,C_word *av) C_noret;
C_noret_decl(f_6802)
static void C_ccall f_6802(C_word c,C_word *av) C_noret;
C_noret_decl(f_6806)
static void C_ccall f_6806(C_word c,C_word *av) C_noret;
C_noret_decl(f_6810)
static void C_ccall f_6810(C_word c,C_word *av) C_noret;
C_noret_decl(f_6821)
static void C_ccall f_6821(C_word c,C_word *av) C_noret;
C_noret_decl(f_6828)
static void C_ccall f_6828(C_word c,C_word *av) C_noret;
C_noret_decl(f_6837)
static void C_ccall f_6837(C_word c,C_word *av) C_noret;
C_noret_decl(f_6868)
static void C_ccall f_6868(C_word c,C_word *av) C_noret;
C_noret_decl(f_6882)
static void C_ccall f_6882(C_word c,C_word *av) C_noret;
C_noret_decl(f_6888)
static void C_ccall f_6888(C_word c,C_word *av) C_noret;
C_noret_decl(f_6892)
static void C_ccall f_6892(C_word c,C_word *av) C_noret;
C_noret_decl(f_6896)
static void C_ccall f_6896(C_word c,C_word *av) C_noret;
C_noret_decl(f_6936)
static void C_ccall f_6936(C_word c,C_word *av) C_noret;
C_noret_decl(f_6960)
static void C_ccall f_6960(C_word c,C_word *av) C_noret;
C_noret_decl(f_6963)
static void C_ccall f_6963(C_word c,C_word *av) C_noret;
C_noret_decl(f_7014)
static void C_fcall f_7014(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7030)
static void C_ccall f_7030(C_word c,C_word *av) C_noret;
C_noret_decl(f_7052)
static void C_ccall f_7052(C_word c,C_word *av) C_noret;
C_noret_decl(f_7055)
static void C_ccall f_7055(C_word c,C_word *av) C_noret;
C_noret_decl(f_7062)
static void C_ccall f_7062(C_word c,C_word *av) C_noret;
C_noret_decl(f_7065)
static void C_ccall f_7065(C_word c,C_word *av) C_noret;
C_noret_decl(f_7095)
static void C_ccall f_7095(C_word c,C_word *av) C_noret;
C_noret_decl(f_7102)
static void C_ccall f_7102(C_word c,C_word *av) C_noret;
C_noret_decl(f_7145)
static void C_ccall f_7145(C_word c,C_word *av) C_noret;
C_noret_decl(f_7149)
static void C_fcall f_7149(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_7151)
static void C_ccall f_7151(C_word c,C_word *av) C_noret;
C_noret_decl(f_7166)
static void C_ccall f_7166(C_word c,C_word *av) C_noret;
C_noret_decl(f_7172)
static void C_ccall f_7172(C_word c,C_word *av) C_noret;
C_noret_decl(f_7186)
static void C_fcall f_7186(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7195)
static void C_ccall f_7195(C_word c,C_word *av) C_noret;
C_noret_decl(f_7201)
static void C_ccall f_7201(C_word c,C_word *av) C_noret;
C_noret_decl(f_7206)
static void C_fcall f_7206(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7217)
static void C_ccall f_7217(C_word c,C_word *av) C_noret;
C_noret_decl(f_7218)
static void C_fcall f_7218(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7229)
static void C_ccall f_7229(C_word c,C_word *av) C_noret;
C_noret_decl(f_7247)
static void C_fcall f_7247(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_7251)
static void C_ccall f_7251(C_word c,C_word *av) C_noret;
C_noret_decl(f_7254)
static void C_ccall f_7254(C_word c,C_word *av) C_noret;
C_noret_decl(f_7257)
static void C_ccall f_7257(C_word c,C_word *av) C_noret;
C_noret_decl(f_7264)
static void C_fcall f_7264(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7268)
static void C_ccall f_7268(C_word c,C_word *av) C_noret;
C_noret_decl(f_7270)
static void C_ccall f_7270(C_word c,C_word *av) C_noret;
C_noret_decl(f_7274)
static void C_ccall f_7274(C_word c,C_word *av) C_noret;
C_noret_decl(f_7277)
static void C_ccall f_7277(C_word c,C_word *av) C_noret;
C_noret_decl(f_7280)
static void C_ccall f_7280(C_word c,C_word *av) C_noret;
C_noret_decl(f_7292)
static void C_fcall f_7292(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_7296)
static void C_ccall f_7296(C_word c,C_word *av) C_noret;
C_noret_decl(f_7303)
static void C_fcall f_7303(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_7307)
static void C_ccall f_7307(C_word c,C_word *av) C_noret;
C_noret_decl(f_7314)
static void C_fcall f_7314(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_7320)
static void C_ccall f_7320(C_word c,C_word *av) C_noret;
C_noret_decl(f_7326)
static void C_ccall f_7326(C_word c,C_word *av) C_noret;
C_noret_decl(f_7337)
static void C_ccall f_7337(C_word c,C_word *av) C_noret;
C_noret_decl(f_7341)
static void C_ccall f_7341(C_word c,C_word *av) C_noret;
C_noret_decl(f_7345)
static void C_ccall f_7345(C_word c,C_word *av) C_noret;
C_noret_decl(f_7349)
static void C_ccall f_7349(C_word c,C_word *av) C_noret;
C_noret_decl(f_7353)
static void C_ccall f_7353(C_word c,C_word *av) C_noret;
C_noret_decl(f_7357)
static void C_ccall f_7357(C_word c,C_word *av) C_noret;
C_noret_decl(f_7370)
static void C_fcall f_7370(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_7372)
static void C_fcall f_7372(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7377)
static C_word C_fcall f_7377(C_word t0,C_word t1);
C_noret_decl(f_7386)
static C_word C_fcall f_7386(C_word t0,C_word t1);
C_noret_decl(f_7413)
static void C_ccall f_7413(C_word c,C_word *av) C_noret;
C_noret_decl(f_7416)
static void C_ccall f_7416(C_word c,C_word *av) C_noret;
C_noret_decl(f_7421)
static void C_ccall f_7421(C_word c,C_word *av) C_noret;
C_noret_decl(f_7441)
static void C_ccall f_7441(C_word c,C_word *av) C_noret;
C_noret_decl(f_7465)
static void C_ccall f_7465(C_word c,C_word *av) C_noret;
C_noret_decl(f_7507)
static void C_ccall f_7507(C_word c,C_word *av) C_noret;
C_noret_decl(f_7572)
static void C_ccall f_7572(C_word c,C_word *av) C_noret;
C_noret_decl(f_7577)
static void C_ccall f_7577(C_word c,C_word *av) C_noret;
C_noret_decl(f_7596)
static void C_ccall f_7596(C_word c,C_word *av) C_noret;
C_noret_decl(f_7602)
static void C_ccall f_7602(C_word c,C_word *av) C_noret;
C_noret_decl(f_7651)
static void C_ccall f_7651(C_word c,C_word *av) C_noret;
C_noret_decl(f_7655)
static void C_ccall f_7655(C_word c,C_word *av) C_noret;
C_noret_decl(f_7658)
static void C_ccall f_7658(C_word c,C_word *av) C_noret;
C_noret_decl(f_7664)
static void C_ccall f_7664(C_word c,C_word *av) C_noret;
C_noret_decl(f_7669)
static void C_ccall f_7669(C_word c,C_word *av) C_noret;
C_noret_decl(f_7673)
static void C_ccall f_7673(C_word c,C_word *av) C_noret;
C_noret_decl(f_7676)
static void C_ccall f_7676(C_word c,C_word *av) C_noret;
C_noret_decl(f_7685)
static void C_ccall f_7685(C_word c,C_word *av) C_noret;
C_noret_decl(f_7691)
static void C_ccall f_7691(C_word c,C_word *av) C_noret;
C_noret_decl(f_7694)
static void C_ccall f_7694(C_word c,C_word *av) C_noret;
C_noret_decl(f_7698)
static void C_ccall f_7698(C_word c,C_word *av) C_noret;
C_noret_decl(f_7707)
static void C_ccall f_7707(C_word c,C_word *av) C_noret;
C_noret_decl(f_7713)
static void C_ccall f_7713(C_word c,C_word *av) C_noret;
C_noret_decl(f_7716)
static void C_ccall f_7716(C_word c,C_word *av) C_noret;
C_noret_decl(f_7720)
static void C_ccall f_7720(C_word c,C_word *av) C_noret;
C_noret_decl(f_7729)
static void C_ccall f_7729(C_word c,C_word *av) C_noret;
C_noret_decl(f_7735)
static void C_ccall f_7735(C_word c,C_word *av) C_noret;
C_noret_decl(f_7738)
static void C_ccall f_7738(C_word c,C_word *av) C_noret;
C_noret_decl(f_7742)
static void C_ccall f_7742(C_word c,C_word *av) C_noret;
C_noret_decl(f_7751)
static void C_ccall f_7751(C_word c,C_word *av) C_noret;
C_noret_decl(f_7757)
static void C_ccall f_7757(C_word c,C_word *av) C_noret;
C_noret_decl(f_7760)
static void C_ccall f_7760(C_word c,C_word *av) C_noret;
C_noret_decl(f_7764)
static void C_ccall f_7764(C_word c,C_word *av) C_noret;
C_noret_decl(f_7773)
static void C_ccall f_7773(C_word c,C_word *av) C_noret;
C_noret_decl(f_7779)
static void C_ccall f_7779(C_word c,C_word *av) C_noret;
C_noret_decl(f_7785)
static void C_fcall f_7785(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7809)
static void C_ccall f_7809(C_word c,C_word *av) C_noret;
C_noret_decl(f_7813)
static void C_ccall f_7813(C_word c,C_word *av) C_noret;
C_noret_decl(f_7818)
static void C_ccall f_7818(C_word c,C_word *av) C_noret;
C_noret_decl(f_7825)
static void C_ccall f_7825(C_word c,C_word *av) C_noret;
C_noret_decl(f_7843)
static void C_ccall f_7843(C_word c,C_word *av) C_noret;
C_noret_decl(f_7847)
static void C_ccall f_7847(C_word c,C_word *av) C_noret;
C_noret_decl(f_7849)
static void C_ccall f_7849(C_word c,C_word *av) C_noret;
C_noret_decl(f_7853)
static void C_ccall f_7853(C_word c,C_word *av) C_noret;
C_noret_decl(f_7856)
static void C_ccall f_7856(C_word c,C_word *av) C_noret;
C_noret_decl(f_7865)
static void C_ccall f_7865(C_word c,C_word *av) C_noret;
C_noret_decl(f_7886)
static void C_ccall f_7886(C_word c,C_word *av) C_noret;
C_noret_decl(f_7890)
static void C_ccall f_7890(C_word c,C_word *av) C_noret;
C_noret_decl(f_7892)
static void C_ccall f_7892(C_word c,C_word *av) C_noret;
C_noret_decl(f_7896)
static void C_ccall f_7896(C_word c,C_word *av) C_noret;
C_noret_decl(f_7898)
static void C_ccall f_7898(C_word c,C_word *av) C_noret;
C_noret_decl(f_7902)
static void C_ccall f_7902(C_word c,C_word *av) C_noret;
C_noret_decl(C_posix_toplevel)
C_externexport void C_ccall C_posix_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(va8716)
static void C_fcall va8716(C_word t0,C_word t1) C_noret;
C_noret_decl(va8718)
static void C_fcall va8718(C_word t0,C_word t1) C_noret;
C_noret_decl(va8720)
static void C_fcall va8720(C_word t0,C_word t1) C_noret;
C_noret_decl(va8722)
static void C_fcall va8722(C_word t0,C_word t1) C_noret;

C_noret_decl(trf_2790)
static void C_ccall trf_2790(C_word c,C_word *av) C_noret;
static void C_ccall trf_2790(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2790(t0,t1,t2);}

C_noret_decl(trf_2831)
static void C_ccall trf_2831(C_word c,C_word *av) C_noret;
static void C_ccall trf_2831(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2831(t0,t1,t2);}

C_noret_decl(trf_2981)
static void C_ccall trf_2981(C_word c,C_word *av) C_noret;
static void C_ccall trf_2981(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_2981(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3142)
static void C_ccall trf_3142(C_word c,C_word *av) C_noret;
static void C_ccall trf_3142(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3142(t0,t1);}

C_noret_decl(trf_3459)
static void C_ccall trf_3459(C_word c,C_word *av) C_noret;
static void C_ccall trf_3459(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3459(t0,t1,t2,t3);}

C_noret_decl(trf_3496)
static void C_ccall trf_3496(C_word c,C_word *av) C_noret;
static void C_ccall trf_3496(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_3496(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3595)
static void C_ccall trf_3595(C_word c,C_word *av) C_noret;
static void C_ccall trf_3595(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3595(t0,t1);}

C_noret_decl(trf_3651)
static void C_ccall trf_3651(C_word c,C_word *av) C_noret;
static void C_ccall trf_3651(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3651(t0,t1,t2);}

C_noret_decl(trf_3962)
static void C_ccall trf_3962(C_word c,C_word *av) C_noret;
static void C_ccall trf_3962(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3962(t0,t1,t2,t3);}

C_noret_decl(trf_4001)
static void C_ccall trf_4001(C_word c,C_word *av) C_noret;
static void C_ccall trf_4001(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4001(t0,t1);}

C_noret_decl(trf_4007)
static void C_ccall trf_4007(C_word c,C_word *av) C_noret;
static void C_ccall trf_4007(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4007(t0,t1,t2,t3);}

C_noret_decl(trf_4058)
static void C_ccall trf_4058(C_word c,C_word *av) C_noret;
static void C_ccall trf_4058(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4058(t0,t1,t2);}

C_noret_decl(trf_4079)
static void C_ccall trf_4079(C_word c,C_word *av) C_noret;
static void C_ccall trf_4079(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4079(t0,t1);}

C_noret_decl(trf_4088)
static void C_ccall trf_4088(C_word c,C_word *av) C_noret;
static void C_ccall trf_4088(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4088(t0,t1,t2);}

C_noret_decl(trf_4113)
static void C_ccall trf_4113(C_word c,C_word *av) C_noret;
static void C_ccall trf_4113(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4113(t0,t1,t2);}

C_noret_decl(trf_4162)
static void C_ccall trf_4162(C_word c,C_word *av) C_noret;
static void C_ccall trf_4162(C_word c,C_word *av){
C_word t0=av[7];
C_word t1=av[6];
C_word t2=av[5];
C_word t3=av[4];
C_word t4=av[3];
C_word t5=av[2];
C_word t6=av[1];
C_word t7=av[0];
f_4162(t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(trf_4217)
static void C_ccall trf_4217(C_word c,C_word *av) C_noret;
static void C_ccall trf_4217(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4217(t0,t1);}

C_noret_decl(trf_4254)
static void C_ccall trf_4254(C_word c,C_word *av) C_noret;
static void C_ccall trf_4254(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4254(t0,t1,t2);}

C_noret_decl(trf_4319)
static void C_ccall trf_4319(C_word c,C_word *av) C_noret;
static void C_ccall trf_4319(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_4319(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4823)
static void C_ccall trf_4823(C_word c,C_word *av) C_noret;
static void C_ccall trf_4823(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4823(t0,t1);}

C_noret_decl(trf_4826)
static void C_ccall trf_4826(C_word c,C_word *av) C_noret;
static void C_ccall trf_4826(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4826(t0,t1);}

C_noret_decl(trf_4908)
static void C_ccall trf_4908(C_word c,C_word *av) C_noret;
static void C_ccall trf_4908(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4908(t0,t1);}

C_noret_decl(trf_4938)
static void C_ccall trf_4938(C_word c,C_word *av) C_noret;
static void C_ccall trf_4938(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_4938(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4997)
static void C_ccall trf_4997(C_word c,C_word *av) C_noret;
static void C_ccall trf_4997(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_4997(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5058)
static void C_ccall trf_5058(C_word c,C_word *av) C_noret;
static void C_ccall trf_5058(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5058(t0,t1);}

C_noret_decl(trf_5273)
static void C_ccall trf_5273(C_word c,C_word *av) C_noret;
static void C_ccall trf_5273(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5273(t0,t1,t2);}

C_noret_decl(trf_5361)
static void C_ccall trf_5361(C_word c,C_word *av) C_noret;
static void C_ccall trf_5361(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5361(t0,t1);}

C_noret_decl(trf_5436)
static void C_ccall trf_5436(C_word c,C_word *av) C_noret;
static void C_ccall trf_5436(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_5436(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5582)
static void C_ccall trf_5582(C_word c,C_word *av) C_noret;
static void C_ccall trf_5582(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5582(t0,t1,t2,t3);}

C_noret_decl(trf_5723)
static void C_ccall trf_5723(C_word c,C_word *av) C_noret;
static void C_ccall trf_5723(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5723(t0,t1);}

C_noret_decl(trf_5760)
static void C_ccall trf_5760(C_word c,C_word *av) C_noret;
static void C_ccall trf_5760(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5760(t0,t1);}

C_noret_decl(trf_5940)
static void C_ccall trf_5940(C_word c,C_word *av) C_noret;
static void C_ccall trf_5940(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_5940(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6290)
static void C_ccall trf_6290(C_word c,C_word *av) C_noret;
static void C_ccall trf_6290(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6290(t0,t1);}

C_noret_decl(trf_6363)
static void C_ccall trf_6363(C_word c,C_word *av) C_noret;
static void C_ccall trf_6363(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_6363(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6466)
static void C_ccall trf_6466(C_word c,C_word *av) C_noret;
static void C_ccall trf_6466(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6466(t0,t1);}

C_noret_decl(trf_6501)
static void C_ccall trf_6501(C_word c,C_word *av) C_noret;
static void C_ccall trf_6501(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6501(t0,t1,t2,t3);}

C_noret_decl(trf_7014)
static void C_ccall trf_7014(C_word c,C_word *av) C_noret;
static void C_ccall trf_7014(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7014(t0,t1,t2);}

C_noret_decl(trf_7149)
static void C_ccall trf_7149(C_word c,C_word *av) C_noret;
static void C_ccall trf_7149(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_7149(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_7186)
static void C_ccall trf_7186(C_word c,C_word *av) C_noret;
static void C_ccall trf_7186(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7186(t0,t1);}

C_noret_decl(trf_7206)
static void C_ccall trf_7206(C_word c,C_word *av) C_noret;
static void C_ccall trf_7206(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7206(t0,t1,t2);}

C_noret_decl(trf_7218)
static void C_ccall trf_7218(C_word c,C_word *av) C_noret;
static void C_ccall trf_7218(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7218(t0,t1,t2,t3);}

C_noret_decl(trf_7247)
static void C_ccall trf_7247(C_word c,C_word *av) C_noret;
static void C_ccall trf_7247(C_word c,C_word *av){
C_word t0=av[7];
C_word t1=av[6];
C_word t2=av[5];
C_word t3=av[4];
C_word t4=av[3];
C_word t5=av[2];
C_word t6=av[1];
C_word t7=av[0];
f_7247(t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(trf_7264)
static void C_ccall trf_7264(C_word c,C_word *av) C_noret;
static void C_ccall trf_7264(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7264(t0,t1);}

C_noret_decl(trf_7292)
static void C_ccall trf_7292(C_word c,C_word *av) C_noret;
static void C_ccall trf_7292(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_7292(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_7303)
static void C_ccall trf_7303(C_word c,C_word *av) C_noret;
static void C_ccall trf_7303(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_7303(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_7314)
static void C_ccall trf_7314(C_word c,C_word *av) C_noret;
static void C_ccall trf_7314(C_word c,C_word *av){
C_word t0=av[8];
C_word t1=av[7];
C_word t2=av[6];
C_word t3=av[5];
C_word t4=av[4];
C_word t5=av[3];
C_word t6=av[2];
C_word t7=av[1];
C_word t8=av[0];
f_7314(t0,t1,t2,t3,t4,t5,t6,t7,t8);}

C_noret_decl(trf_7370)
static void C_ccall trf_7370(C_word c,C_word *av) C_noret;
static void C_ccall trf_7370(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_7370(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_7372)
static void C_ccall trf_7372(C_word c,C_word *av) C_noret;
static void C_ccall trf_7372(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7372(t0,t1,t2);}

C_noret_decl(trf_7785)
static void C_ccall trf_7785(C_word c,C_word *av) C_noret;
static void C_ccall trf_7785(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7785(t0,t1,t2,t3);}

C_noret_decl(trva8716)
static void C_ccall trva8716(C_word c,C_word *av) C_noret;
static void C_ccall trva8716(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
va8716(t0,t1);}

C_noret_decl(trva8718)
static void C_ccall trva8718(C_word c,C_word *av) C_noret;
static void C_ccall trva8718(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
va8718(t0,t1);}

C_noret_decl(trva8720)
static void C_ccall trva8720(C_word c,C_word *av) C_noret;
static void C_ccall trva8720(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
va8720(t0,t1);}

C_noret_decl(trva8722)
static void C_ccall trva8722(C_word c,C_word *av) C_noret;
static void C_ccall trva8722(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
va8722(t0,t1);}

/* f8727 in chicken.time.posix#seconds->local-time in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f8727(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f8727,c,av);}
/* posix-common.scm:584: decode-seconds */
{C_proc tp=(C_proc)C_fast_retrieve_proc(lf[254]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=lf[254];
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_FALSE;
tp(4,av2);}}

/* f8731 in chicken.time.posix#seconds->utc-time in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f8731(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f8731,c,av);}
/* posix-common.scm:589: decode-seconds */
{C_proc tp=(C_proc)C_fast_retrieve_proc(lf[254]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=lf[254];
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_TRUE;
tp(4,av2);}}

/* f8773 in k7100 in chicken.process#process-run in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f8773(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f8773,c,av);}
a=C_alloc(6);
t2=(C_truep(t1)?t1:lf[407]);
t3=C_a_i_list2(&a,2,lf[408],((C_word*)t0)[2]);
/* posixunix.scm:1149: chicken.process#process-execute */
t4=*((C_word*)lf[107]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* f8779 in %process in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f8779(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f8779,c,av);}
t2=(C_truep(t1)?t1:lf[407]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
f_7413(2,av2);}}

/* k2639 */
static void C_ccall f_2641(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2641,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2644,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_pathname_toplevel(2,av2);}}

/* k2642 in k2639 */
static void C_ccall f_2644(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2644,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2647,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k2645 in k2642 in k2639 */
static void C_ccall f_2647(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2647,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2650,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_port_toplevel(2,av2);}}

/* k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_2650(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2650,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2653,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_lolevel_toplevel(2,av2);}}

/* k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_2653(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_2653,c,av);}
a=C_alloc(19);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2656,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t4;
C_library_toplevel(2,av2);}}

/* k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_2656(C_word c,C_word *av){
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
C_word t103;
C_word t104;
C_word t105;
C_word t106;
C_word t107;
C_word t108;
C_word t109;
C_word t110;
C_word t111;
C_word t112;
C_word t113;
C_word t114;
C_word t115;
C_word t116;
C_word t117;
C_word t118;
C_word t119;
C_word t120;
C_word t121;
C_word t122;
C_word t123;
C_word t124;
C_word t125;
C_word t126;
C_word t127;
C_word t128;
C_word t129;
C_word t130;
C_word t131;
C_word t132;
C_word t133;
C_word t134;
C_word t135;
C_word t136;
C_word t137;
C_word t138;
C_word t139;
C_word t140;
C_word t141;
C_word t142;
C_word t143;
C_word t144;
C_word t145;
C_word t146;
C_word t147;
C_word t148;
C_word t149;
C_word t150;
C_word t151;
C_word t152;
C_word t153;
C_word t154;
C_word t155;
C_word t156;
C_word t157;
C_word t158;
C_word t159;
C_word t160;
C_word t161;
C_word t162;
C_word t163;
C_word t164;
C_word t165;
C_word t166;
C_word t167;
C_word t168;
C_word t169;
C_word t170;
C_word t171;
C_word t172;
C_word t173;
C_word t174;
C_word t175;
C_word t176;
C_word t177;
C_word t178;
C_word t179;
C_word t180;
C_word t181;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(88,c,6)))){
C_save_and_reclaim((void *)f_2656,c,av);}
a=C_alloc(88);
t2=C_set_block_item(lf[2] /* chicken.file.posix#create-fifo */,0,C_SCHEME_UNDEFINED);
t3=C_set_block_item(lf[3] /* chicken.file.posix#create-symbolic-link */,0,C_SCHEME_UNDEFINED);
t4=C_set_block_item(lf[4] /* chicken.file.posix#read-symbolic-link */,0,C_SCHEME_UNDEFINED);
t5=C_set_block_item(lf[5] /* chicken.file.posix#duplicate-fileno */,0,C_SCHEME_UNDEFINED);
t6=C_set_block_item(lf[6] /* chicken.file.posix#fcntl/dupfd */,0,C_SCHEME_UNDEFINED);
t7=C_set_block_item(lf[7] /* chicken.file.posix#fcntl/getfd */,0,C_SCHEME_UNDEFINED);
t8=C_set_block_item(lf[8] /* chicken.file.posix#fcntl/getfl */,0,C_SCHEME_UNDEFINED);
t9=C_set_block_item(lf[9] /* chicken.file.posix#fcntl/setfd */,0,C_SCHEME_UNDEFINED);
t10=C_set_block_item(lf[10] /* chicken.file.posix#fcntl/setfl */,0,C_SCHEME_UNDEFINED);
t11=C_set_block_item(lf[11] /* chicken.file.posix#file-close */,0,C_SCHEME_UNDEFINED);
t12=C_set_block_item(lf[12] /* chicken.file.posix#file-control */,0,C_SCHEME_UNDEFINED);
t13=C_set_block_item(lf[13] /* chicken.file.posix#file-creation-mode */,0,C_SCHEME_UNDEFINED);
t14=C_set_block_item(lf[14] /* chicken.file.posix#file-group */,0,C_SCHEME_UNDEFINED);
t15=C_set_block_item(lf[15] /* chicken.file.posix#file-link */,0,C_SCHEME_UNDEFINED);
t16=C_set_block_item(lf[16] /* chicken.file.posix#file-lock */,0,C_SCHEME_UNDEFINED);
t17=C_set_block_item(lf[17] /* chicken.file.posix#file-lock/blocking */,0,C_SCHEME_UNDEFINED);
t18=C_set_block_item(lf[18] /* chicken.file.posix#file-mkstemp */,0,C_SCHEME_UNDEFINED);
t19=C_set_block_item(lf[19] /* chicken.file.posix#file-open */,0,C_SCHEME_UNDEFINED);
t20=C_set_block_item(lf[20] /* chicken.file.posix#file-owner */,0,C_SCHEME_UNDEFINED);
t21=C_set_block_item(lf[21] /* chicken.file.posix#file-permissions */,0,C_SCHEME_UNDEFINED);
t22=C_set_block_item(lf[22] /* chicken.file.posix#file-position */,0,C_SCHEME_UNDEFINED);
t23=C_set_block_item(lf[23] /* chicken.file.posix#file-read */,0,C_SCHEME_UNDEFINED);
t24=C_set_block_item(lf[24] /* chicken.file.posix#file-select */,0,C_SCHEME_UNDEFINED);
t25=C_set_block_item(lf[25] /* chicken.file.posix#file-test-lock */,0,C_SCHEME_UNDEFINED);
t26=C_set_block_item(lf[26] /* chicken.file.posix#file-truncate */,0,C_SCHEME_UNDEFINED);
t27=C_set_block_item(lf[27] /* chicken.file.posix#file-unlock */,0,C_SCHEME_UNDEFINED);
t28=C_set_block_item(lf[28] /* chicken.file.posix#file-write */,0,C_SCHEME_UNDEFINED);
t29=C_set_block_item(lf[29] /* chicken.file.posix#file-type */,0,C_SCHEME_UNDEFINED);
t30=C_set_block_item(lf[30] /* chicken.file.posix#block-device? */,0,C_SCHEME_UNDEFINED);
t31=C_set_block_item(lf[31] /* chicken.file.posix#character-device? */,0,C_SCHEME_UNDEFINED);
t32=C_set_block_item(lf[32] /* chicken.file.posix#directory? */,0,C_SCHEME_UNDEFINED);
t33=C_set_block_item(lf[33] /* chicken.file.posix#fifo? */,0,C_SCHEME_UNDEFINED);
t34=C_set_block_item(lf[34] /* chicken.file.posix#regular-file? */,0,C_SCHEME_UNDEFINED);
t35=C_set_block_item(lf[35] /* chicken.file.posix#socket? */,0,C_SCHEME_UNDEFINED);
t36=C_set_block_item(lf[36] /* chicken.file.posix#symbolic-link? */,0,C_SCHEME_UNDEFINED);
t37=C_set_block_item(lf[37] /* chicken.file.posix#fileno/stderr */,0,C_SCHEME_UNDEFINED);
t38=C_set_block_item(lf[38] /* chicken.file.posix#fileno/stdin */,0,C_SCHEME_UNDEFINED);
t39=C_set_block_item(lf[39] /* chicken.file.posix#fileno/stdout */,0,C_SCHEME_UNDEFINED);
t40=C_set_block_item(lf[40] /* chicken.file.posix#open-input-file* */,0,C_SCHEME_UNDEFINED);
t41=C_set_block_item(lf[41] /* chicken.file.posix#open-output-file* */,0,C_SCHEME_UNDEFINED);
t42=C_set_block_item(lf[42] /* chicken.file.posix#open/append */,0,C_SCHEME_UNDEFINED);
t43=C_set_block_item(lf[43] /* chicken.file.posix#open/binary */,0,C_SCHEME_UNDEFINED);
t44=C_set_block_item(lf[44] /* chicken.file.posix#open/creat */,0,C_SCHEME_UNDEFINED);
t45=C_set_block_item(lf[45] /* chicken.file.posix#open/excl */,0,C_SCHEME_UNDEFINED);
t46=C_set_block_item(lf[46] /* chicken.file.posix#open/fsync */,0,C_SCHEME_UNDEFINED);
t47=C_set_block_item(lf[47] /* chicken.file.posix#open/noctty */,0,C_SCHEME_UNDEFINED);
t48=C_set_block_item(lf[48] /* chicken.file.posix#open/noinherit */,0,C_SCHEME_UNDEFINED);
t49=C_set_block_item(lf[49] /* chicken.file.posix#open/nonblock */,0,C_SCHEME_UNDEFINED);
t50=C_set_block_item(lf[50] /* chicken.file.posix#open/rdonly */,0,C_SCHEME_UNDEFINED);
t51=C_set_block_item(lf[51] /* chicken.file.posix#open/rdwr */,0,C_SCHEME_UNDEFINED);
t52=C_set_block_item(lf[52] /* chicken.file.posix#open/read */,0,C_SCHEME_UNDEFINED);
t53=C_set_block_item(lf[53] /* chicken.file.posix#open/sync */,0,C_SCHEME_UNDEFINED);
t54=C_set_block_item(lf[54] /* chicken.file.posix#open/text */,0,C_SCHEME_UNDEFINED);
t55=C_set_block_item(lf[55] /* chicken.file.posix#open/trunc */,0,C_SCHEME_UNDEFINED);
t56=C_set_block_item(lf[56] /* chicken.file.posix#open/write */,0,C_SCHEME_UNDEFINED);
t57=C_set_block_item(lf[57] /* chicken.file.posix#open/wronly */,0,C_SCHEME_UNDEFINED);
t58=C_set_block_item(lf[58] /* chicken.file.posix#perm/irgrp */,0,C_SCHEME_UNDEFINED);
t59=C_set_block_item(lf[59] /* chicken.file.posix#perm/iroth */,0,C_SCHEME_UNDEFINED);
t60=C_set_block_item(lf[60] /* chicken.file.posix#perm/irusr */,0,C_SCHEME_UNDEFINED);
t61=C_set_block_item(lf[61] /* chicken.file.posix#perm/irwxg */,0,C_SCHEME_UNDEFINED);
t62=C_set_block_item(lf[62] /* chicken.file.posix#perm/irwxo */,0,C_SCHEME_UNDEFINED);
t63=C_set_block_item(lf[63] /* chicken.file.posix#perm/irwxu */,0,C_SCHEME_UNDEFINED);
t64=C_set_block_item(lf[64] /* chicken.file.posix#perm/isgid */,0,C_SCHEME_UNDEFINED);
t65=C_set_block_item(lf[65] /* chicken.file.posix#perm/isuid */,0,C_SCHEME_UNDEFINED);
t66=C_set_block_item(lf[66] /* chicken.file.posix#perm/isvtx */,0,C_SCHEME_UNDEFINED);
t67=C_set_block_item(lf[67] /* chicken.file.posix#perm/iwgrp */,0,C_SCHEME_UNDEFINED);
t68=C_set_block_item(lf[68] /* chicken.file.posix#perm/iwoth */,0,C_SCHEME_UNDEFINED);
t69=C_set_block_item(lf[69] /* chicken.file.posix#perm/iwusr */,0,C_SCHEME_UNDEFINED);
t70=C_set_block_item(lf[70] /* chicken.file.posix#perm/ixgrp */,0,C_SCHEME_UNDEFINED);
t71=C_set_block_item(lf[71] /* chicken.file.posix#perm/ixoth */,0,C_SCHEME_UNDEFINED);
t72=C_set_block_item(lf[72] /* chicken.file.posix#perm/ixusr */,0,C_SCHEME_UNDEFINED);
t73=C_set_block_item(lf[73] /* chicken.file.posix#port->fileno */,0,C_SCHEME_UNDEFINED);
t74=C_set_block_item(lf[74] /* chicken.file.posix#seek/cur */,0,C_SCHEME_UNDEFINED);
t75=C_set_block_item(lf[75] /* chicken.file.posix#seek/end */,0,C_SCHEME_UNDEFINED);
t76=C_set_block_item(lf[76] /* chicken.file.posix#seek/set */,0,C_SCHEME_UNDEFINED);
t77=C_set_block_item(lf[77] /* chicken.file.posix#set-file-position! */,0,C_SCHEME_UNDEFINED);
t78=C_a_i_provide(&a,1,lf[78]);
t79=C_set_block_item(lf[79] /* chicken.time.posix#seconds->utc-time */,0,C_SCHEME_UNDEFINED);
t80=C_set_block_item(lf[80] /* chicken.time.posix#utc-time->seconds */,0,C_SCHEME_UNDEFINED);
t81=C_set_block_item(lf[81] /* chicken.time.posix#seconds->local-time */,0,C_SCHEME_UNDEFINED);
t82=C_set_block_item(lf[82] /* chicken.time.posix#seconds->string */,0,C_SCHEME_UNDEFINED);
t83=C_set_block_item(lf[83] /* chicken.time.posix#local-time->seconds */,0,C_SCHEME_UNDEFINED);
t84=C_set_block_item(lf[84] /* chicken.time.posix#string->time */,0,C_SCHEME_UNDEFINED);
t85=C_set_block_item(lf[85] /* chicken.time.posix#time->string */,0,C_SCHEME_UNDEFINED);
t86=C_set_block_item(lf[86] /* chicken.time.posix#local-timezone-abbreviation */,0,C_SCHEME_UNDEFINED);
t87=C_a_i_provide(&a,1,lf[87]);
t88=C_mutate((C_word*)lf[88]+1 /* (set! chicken.process#system ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2742,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t89=C_mutate((C_word*)lf[94]+1 /* (set! chicken.process#system* ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2760,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t90=C_mutate((C_word*)lf[97]+1 /* (set! chicken.process#qs ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2776,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t91=C_set_block_item(lf[107] /* chicken.process#process-execute */,0,C_SCHEME_UNDEFINED);
t92=C_set_block_item(lf[108] /* chicken.process#process-fork */,0,C_SCHEME_UNDEFINED);
t93=C_set_block_item(lf[109] /* chicken.process#process-run */,0,C_SCHEME_UNDEFINED);
t94=C_set_block_item(lf[110] /* chicken.process#process-signal */,0,C_SCHEME_UNDEFINED);
t95=C_set_block_item(lf[111] /* chicken.process#process-spawn */,0,C_SCHEME_UNDEFINED);
t96=C_set_block_item(lf[112] /* chicken.process#process-wait */,0,C_SCHEME_UNDEFINED);
t97=C_set_block_item(lf[113] /* chicken.process#call-with-input-pipe */,0,C_SCHEME_UNDEFINED);
t98=C_set_block_item(lf[114] /* chicken.process#call-with-output-pipe */,0,C_SCHEME_UNDEFINED);
t99=C_set_block_item(lf[115] /* chicken.process#close-input-pipe */,0,C_SCHEME_UNDEFINED);
t100=C_set_block_item(lf[116] /* chicken.process#close-output-pipe */,0,C_SCHEME_UNDEFINED);
t101=C_set_block_item(lf[117] /* chicken.process#create-pipe */,0,C_SCHEME_UNDEFINED);
t102=C_set_block_item(lf[118] /* chicken.process#open-input-pipe */,0,C_SCHEME_UNDEFINED);
t103=C_set_block_item(lf[119] /* chicken.process#open-output-pipe */,0,C_SCHEME_UNDEFINED);
t104=C_set_block_item(lf[120] /* chicken.process#with-input-from-pipe */,0,C_SCHEME_UNDEFINED);
t105=C_set_block_item(lf[121] /* chicken.process#with-output-to-pipe */,0,C_SCHEME_UNDEFINED);
t106=C_set_block_item(lf[122] /* chicken.process#process */,0,C_SCHEME_UNDEFINED);
t107=C_set_block_item(lf[123] /* chicken.process#process* */,0,C_SCHEME_UNDEFINED);
t108=C_set_block_item(lf[124] /* chicken.process#process-sleep */,0,C_SCHEME_UNDEFINED);
t109=C_set_block_item(lf[125] /* chicken.process#pipe/buf */,0,C_SCHEME_UNDEFINED);
t110=C_set_block_item(lf[126] /* chicken.process#spawn/overlay */,0,C_SCHEME_UNDEFINED);
t111=C_set_block_item(lf[127] /* chicken.process#spawn/wait */,0,C_SCHEME_UNDEFINED);
t112=C_set_block_item(lf[128] /* chicken.process#spawn/nowait */,0,C_SCHEME_UNDEFINED);
t113=C_set_block_item(lf[129] /* chicken.process#spawn/nowaito */,0,C_SCHEME_UNDEFINED);
t114=C_set_block_item(lf[130] /* chicken.process#spawn/detach */,0,C_SCHEME_UNDEFINED);
t115=C_a_i_provide(&a,1,lf[131]);
t116=C_set_block_item(lf[132] /* chicken.process.signal#set-alarm! */,0,C_SCHEME_UNDEFINED);
t117=C_set_block_item(lf[133] /* chicken.process.signal#set-signal-handler! */,0,C_SCHEME_UNDEFINED);
t118=C_set_block_item(lf[134] /* chicken.process.signal#set-signal-mask! */,0,C_SCHEME_UNDEFINED);
t119=C_set_block_item(lf[135] /* chicken.process.signal#signal-handler */,0,C_SCHEME_UNDEFINED);
t120=C_set_block_item(lf[136] /* chicken.process.signal#signal-mask */,0,C_SCHEME_UNDEFINED);
t121=C_set_block_item(lf[137] /* chicken.process.signal#signal-mask! */,0,C_SCHEME_UNDEFINED);
t122=C_set_block_item(lf[138] /* chicken.process.signal#signal-masked? */,0,C_SCHEME_UNDEFINED);
t123=C_set_block_item(lf[139] /* chicken.process.signal#signal-unmask! */,0,C_SCHEME_UNDEFINED);
t124=C_set_block_item(lf[140] /* chicken.process.signal#signal/abrt */,0,C_SCHEME_UNDEFINED);
t125=C_set_block_item(lf[141] /* chicken.process.signal#signal/alrm */,0,C_SCHEME_UNDEFINED);
t126=C_set_block_item(lf[142] /* chicken.process.signal#signal/break */,0,C_SCHEME_UNDEFINED);
t127=C_set_block_item(lf[143] /* chicken.process.signal#signal/bus */,0,C_SCHEME_UNDEFINED);
t128=C_set_block_item(lf[144] /* chicken.process.signal#signal/chld */,0,C_SCHEME_UNDEFINED);
t129=C_set_block_item(lf[145] /* chicken.process.signal#signal/cont */,0,C_SCHEME_UNDEFINED);
t130=C_set_block_item(lf[146] /* chicken.process.signal#signal/fpe */,0,C_SCHEME_UNDEFINED);
t131=C_set_block_item(lf[147] /* chicken.process.signal#signal/hup */,0,C_SCHEME_UNDEFINED);
t132=C_set_block_item(lf[148] /* chicken.process.signal#signal/ill */,0,C_SCHEME_UNDEFINED);
t133=C_set_block_item(lf[149] /* chicken.process.signal#signal/int */,0,C_SCHEME_UNDEFINED);
t134=C_set_block_item(lf[150] /* chicken.process.signal#signal/io */,0,C_SCHEME_UNDEFINED);
t135=C_set_block_item(lf[151] /* chicken.process.signal#signal/kill */,0,C_SCHEME_UNDEFINED);
t136=C_set_block_item(lf[152] /* chicken.process.signal#signal/pipe */,0,C_SCHEME_UNDEFINED);
t137=C_set_block_item(lf[153] /* chicken.process.signal#signal/prof */,0,C_SCHEME_UNDEFINED);
t138=C_set_block_item(lf[154] /* chicken.process.signal#signal/quit */,0,C_SCHEME_UNDEFINED);
t139=C_set_block_item(lf[155] /* chicken.process.signal#signal/segv */,0,C_SCHEME_UNDEFINED);
t140=C_set_block_item(lf[156] /* chicken.process.signal#signal/stop */,0,C_SCHEME_UNDEFINED);
t141=C_set_block_item(lf[157] /* chicken.process.signal#signal/term */,0,C_SCHEME_UNDEFINED);
t142=C_set_block_item(lf[158] /* chicken.process.signal#signal/trap */,0,C_SCHEME_UNDEFINED);
t143=C_set_block_item(lf[159] /* chicken.process.signal#signal/tstp */,0,C_SCHEME_UNDEFINED);
t144=C_set_block_item(lf[160] /* chicken.process.signal#signal/urg */,0,C_SCHEME_UNDEFINED);
t145=C_set_block_item(lf[161] /* chicken.process.signal#signal/usr1 */,0,C_SCHEME_UNDEFINED);
t146=C_set_block_item(lf[162] /* chicken.process.signal#signal/usr2 */,0,C_SCHEME_UNDEFINED);
t147=C_set_block_item(lf[163] /* chicken.process.signal#signal/vtalrm */,0,C_SCHEME_UNDEFINED);
t148=C_set_block_item(lf[164] /* chicken.process.signal#signal/winch */,0,C_SCHEME_UNDEFINED);
t149=C_set_block_item(lf[165] /* chicken.process.signal#signal/xcpu */,0,C_SCHEME_UNDEFINED);
t150=C_set_block_item(lf[166] /* chicken.process.signal#signal/xfsz */,0,C_SCHEME_UNDEFINED);
t151=C_set_block_item(lf[167] /* chicken.process.signal#signals-list */,0,C_SCHEME_UNDEFINED);
t152=C_a_i_provide(&a,1,lf[168]);
t153=C_set_block_item(lf[169] /* chicken.process-context.posix#change-directory* */,0,C_SCHEME_UNDEFINED);
t154=C_set_block_item(lf[170] /* chicken.process-context.posix#set-root-directory! */,0,C_SCHEME_UNDEFINED);
t155=C_set_block_item(lf[171] /* chicken.process-context.posix#current-effective-group-id */,0,C_SCHEME_UNDEFINED);
t156=C_set_block_item(lf[172] /* chicken.process-context.posix#current-effective-user-id */,0,C_SCHEME_UNDEFINED);
t157=C_set_block_item(lf[173] /* chicken.process-context.posix#current-group-id */,0,C_SCHEME_UNDEFINED);
t158=C_set_block_item(lf[174] /* chicken.process-context.posix#current-user-id */,0,C_SCHEME_UNDEFINED);
t159=C_set_block_item(lf[175] /* chicken.process-context.posix#current-process-id */,0,C_SCHEME_UNDEFINED);
t160=C_set_block_item(lf[176] /* chicken.process-context.posix#parent-process-id */,0,C_SCHEME_UNDEFINED);
t161=C_set_block_item(lf[177] /* chicken.process-context.posix#current-user-name */,0,C_SCHEME_UNDEFINED);
t162=C_set_block_item(lf[178] /* chicken.process-context.posix#current-effective-user-name */,0,C_SCHEME_UNDEFINED);
t163=C_set_block_item(lf[179] /* chicken.process-context.posix#create-session */,0,C_SCHEME_UNDEFINED);
t164=C_set_block_item(lf[180] /* chicken.process-context.posix#process-group-id */,0,C_SCHEME_UNDEFINED);
t165=C_set_block_item(lf[181] /* chicken.process-context.posix#user-information */,0,C_SCHEME_UNDEFINED);
t166=C_a_i_provide(&a,1,lf[182]);
t167=C_mutate(&lf[183] /* (set! chicken.posix#posix-error ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2963,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t168=C_mutate((C_word*)lf[186]+1 /* (set! ##sys#posix-error ...) */,lf[183]);
t169=C_mutate(&lf[187] /* (set! chicken.posix#stat ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2981,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t170=C_mutate((C_word*)lf[194]+1 /* (set! chicken.file.posix#file-stat ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3027,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t171=C_mutate((C_word*)lf[196]+1 /* (set! chicken.file.posix#set-file-permissions! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3045,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t172=C_mutate((C_word*)lf[202]+1 /* (set! chicken.file.posix#file-modification-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3089,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t173=C_mutate((C_word*)lf[204]+1 /* (set! chicken.file.posix#file-access-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3095,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t174=C_mutate((C_word*)lf[206]+1 /* (set! chicken.file.posix#file-change-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3101,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t175=C_mutate((C_word*)lf[208]+1 /* (set! chicken.file.posix#set-file-times! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3107,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t176=C_mutate((C_word*)lf[213]+1 /* (set! chicken.file.posix#file-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3186,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t177=C_mutate((C_word*)lf[215]+1 /* (set! chicken.file.posix#set-file-owner! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3192,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t178=C_mutate((C_word*)lf[218]+1 /* (set! chicken.file.posix#set-file-group! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3198,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t179=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3206,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t180=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7898,a[2]=((C_word)li222),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:312: chicken.base#getter-with-setter */
t181=*((C_word*)lf[464]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t181;
av2[1]=t179;
av2[2]=t180;
av2[3]=*((C_word*)lf[215]+1);
av2[4]=lf[495];
((C_proc)(void*)(*((C_word*)t181+1)))(5,av2);}}

/* chicken.process#system in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_2742(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2742,c,av);}
a=C_alloc(4);
t3=C_i_check_string_2(t2,lf[89]);
t4=C_execute_shell_command(t2);
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2755,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix.scm:202: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[93]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[93]+1);
av2[1]=t5;
tp(2,av2);}}
else{
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k2753 in chicken.process#system in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_2755(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2755,c,av);}
/* posix.scm:203: ##sys#signal-hook */
t2=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[91];
av2[3]=lf[89];
av2[4]=lf[92];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* chicken.process#system* in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_2760(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2760,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2764,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix.scm:209: system */
t4=*((C_word*)lf[88]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k2762 in chicken.process#system* in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_2764(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2764,c,av);}
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* posix.scm:211: ##sys#error */
t3=*((C_word*)lf[95]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[96];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* chicken.process#qs in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_2776(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2776,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2780,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_rest_nullp(c,3))){
/* posix.scm:216: chicken.platform#software-version */
t4=*((C_word*)lf[106]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=t3;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_get_rest_arg(c,3,av,3,t0);
f_2780(2,av2);}}}

/* k2778 in chicken.process#qs in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_2780(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2780,c,av);}
a=C_alloc(18);
t2=C_eqp(t1,lf[98]);
t3=(C_truep(t2)?C_make_character(34):C_make_character(39));
t4=C_eqp(t1,lf[98]);
t5=(C_truep(t4)?lf[99]:lf[100]);
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2790,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[2],a[5]=((C_word)li2),tmp=(C_word)a,a+=6,tmp);
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2811,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t8,a[5]=t10,a[6]=t9,tmp=(C_word)a,a+=7,tmp);
/* ##sys#string->list */
t12=*((C_word*)lf[105]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t12;
av2[1]=t11;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t12+1)))(3,av2);}}

/* g261 in k2778 in chicken.process#qs in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_fcall f_2790(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,0,4)))){
C_save_and_reclaim_args((void *)trf_2790,3,t0,t1,t2);}
a=C_alloc(2);
if(C_truep(C_i_char_equalp(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_u_i_char_equalp(t2,C_make_character(0)))){
/* posix.scm:224: chicken.base#error */
t3=*((C_word*)lf[101]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t1;
av2[2]=lf[102];
av2[3]=lf[103];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_a_i_string(&a,1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}}

/* k2809 in k2778 in chicken.process#qs in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_2811(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2811,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2814,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2831,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word)li3),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_2831(t6,t2,t1);}

/* k2812 in k2809 in k2778 in chicken.process#qs in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_2814(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_2814,c,av);}
a=C_alloc(7);
t2=C_a_i_string(&a,1,((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2825,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t3;
av2[2]=*((C_word*)lf[104]+1);
av2[3]=t1;
C_apply(4,av2);}}

/* k2823 in k2812 in k2809 in k2778 in chicken.process#qs in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_2825(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,4)))){
C_save_and_reclaim((void *)f_2825,c,av);}
a=C_alloc(2);
t2=C_a_i_string(&a,1,((C_word*)t0)[2]);
/* posix.scm:227: scheme#string-append */
t3=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t1;
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* map-loop255 in k2809 in k2778 in chicken.process#qs in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_fcall f_2831(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_2831,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2856,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* posix.scm:220: g261 */
t4=((C_word*)t0)[4];
f_2790(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k2854 in map-loop255 in k2809 in k2778 in chicken.process#qs in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_2856(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2856,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_2831(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* chicken.posix#posix-error in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_2963(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c<5) C_bad_min_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-5)*C_SIZEOF_PAIR +7,c,2)))){
C_save_and_reclaim((void*)f_2963,c,av);}
a=C_alloc((c-5)*C_SIZEOF_PAIR+7);
t5=C_build_rest(&a,c,5,av);
C_word t6;
C_word t7;
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2967,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t5,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* posix-common.scm:191: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[93]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[93]+1);
av2[1]=t6;
tp(2,av2);}}

/* k2965 in chicken.posix#posix-error in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_2967(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_2967,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2974,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2978,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t1);
/* posix-common.scm:188: ##sys#peek-c-string */
t6=*((C_word*)lf[185]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=stub650(t4,t5);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k2972 in k2965 in chicken.posix#posix-error in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_2974(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_2974,c,av);}{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[90]+1);
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
av2[5]=t1;
av2[6]=((C_word*)t0)[5];
C_apply(7,av2);}}

/* k2976 in k2965 in chicken.posix#posix-error in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_2978(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2978,c,av);}
/* posix-common.scm:192: string-append */
t2=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[184];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* chicken.posix#stat in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_fcall f_2981(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_2981,5,t1,t2,t3,t4,t5);}
a=C_alloc(12);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2985,a[2]=t4,a[3]=t1,a[4]=t5,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnump(t2))){
t7=t6;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_u_i_fstat(t2);
f_2985(2,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3006,a[2]=t6,a[3]=t2,a[4]=t3,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:235: chicken.base#port? */
t8=*((C_word*)lf[193]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}}

/* k2983 in chicken.posix#stat in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_2985(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2985,c,av);}
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
if(C_truep(((C_word*)t0)[2])){
/* posix-common.scm:246: posix-error */
t2=lf[183];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[188];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[189];
av2[5]=((C_word*)t0)[5];
f_2963(6,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k3004 in chicken.posix#stat in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3006(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_3006,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3010,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:235: chicken.file.posix#port->fileno */
t3=*((C_word*)lf[73]+1);{
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
else{
if(C_truep(C_i_stringp(((C_word*)t0)[3]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3019,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:237: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[5];
tp(4,av2);}}
else{
/* posix-common.scm:242: ##sys#signal-hook */
t2=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[191];
av2[3]=((C_word*)t0)[5];
av2[4]=lf[192];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}}

/* k3008 in k3004 in chicken.posix#stat in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3010(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3010,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_u_i_fstat(t1);
f_2985(2,av2);}}

/* k3017 in k3004 in chicken.posix#stat in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3019(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3019,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(((C_word*)t0)[3])?C_u_i_lstat(t1):C_u_i_stat(t1));
f_2985(2,av2);}}

/* chicken.file.posix#file-stat in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3027(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3027,c,av);}
a=C_alloc(3);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3034,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:252: stat */
f_2981(t5,t2,t4,C_SCHEME_TRUE,lf[195]);}

/* k3032 in chicken.file.posix#file-stat in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3034(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(42,c,1)))){
C_save_and_reclaim((void *)f_3034,c,av);}
a=C_alloc(42);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_vector(&a,13,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_ino),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_mode),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_nlink),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_uid),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_gid),C_int64_to_num(&a,C_statbuf.st_size),C_int64_to_num(&a,C_statbuf.st_atime),C_int64_to_num(&a,C_statbuf.st_ctime),C_int64_to_num(&a,C_statbuf.st_mtime),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_dev),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_rdev),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_blksize),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_blocks));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#set-file-permissions! in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3045(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3045,c,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3049,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:261: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t4;
av2[2]=t3;
av2[3]=lf[197];
tp(4,av2);}}

/* k3047 in chicken.file.posix#set-file-permissions! in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3049(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_3049,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3052,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_fixnump(((C_word*)t0)[3]))){
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_fchmod(((C_word*)t0)[3],((C_word*)t0)[4]);
f_3052(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3070,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:263: chicken.base#port? */
t4=*((C_word*)lf[193]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k3050 in k3047 in chicken.file.posix#set-file-permissions! in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3052(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_3052,c,av);}
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
/* posix-common.scm:272: posix-error */
t2=lf[183];{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[188];
av2[3]=lf[197];
av2[4]=lf[198];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
f_2963(7,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3068 in k3047 in chicken.file.posix#set-file-permissions! in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3070(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_3070,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3074,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:263: chicken.file.posix#port->fileno */
t3=*((C_word*)lf[73]+1);{
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
if(C_truep(C_i_stringp(((C_word*)t0)[4]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3084,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:266: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[197];
tp(4,av2);}}
else{
/* posix-common.scm:268: ##sys#signal-hook */
t2=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[191];
av2[3]=lf[199];
av2[4]=lf[200];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}}

/* k3072 in k3068 in k3047 in chicken.file.posix#set-file-permissions! in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3074(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3074,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fchmod(t1,((C_word*)t0)[3]);
f_3052(2,av2);}}

/* k3082 in k3068 in k3047 in chicken.file.posix#set-file-permissions! in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3084(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3084,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_chmod(t1,((C_word*)t0)[3]);
f_3052(2,av2);}}

/* chicken.file.posix#file-modification-time in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3089(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3089,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3093,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:276: stat */
f_2981(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[203]);}

/* k3091 in chicken.file.posix#file-modification-time in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3093(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,1)))){
C_save_and_reclaim((void *)f_3093,c,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_int64_to_num(&a,C_statbuf.st_mtime);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#file-access-time in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3095(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3095,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3099,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:280: stat */
f_2981(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[205]);}

/* k3097 in chicken.file.posix#file-access-time in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3099(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,1)))){
C_save_and_reclaim((void *)f_3099,c,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_int64_to_num(&a,C_statbuf.st_atime);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#file-change-time in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3101(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3101,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3105,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:284: stat */
f_2981(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[207]);}

/* k3103 in chicken.file.posix#file-change-time in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3105(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,1)))){
C_save_and_reclaim((void *)f_3105,c,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_int64_to_num(&a,C_statbuf.st_ctime);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#set-file-times! in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3107(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_3107,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3111,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t3))){
/* posix-common.scm:289: chicken.time#current-seconds */
t5=*((C_word*)lf[212]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_i_car(t3);
f_3111(2,av2);}}}

/* k3109 in chicken.file.posix#set-file-times! in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3111(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_3111,c,av);}
a=C_alloc(7);
t2=C_i_nullp(((C_word*)t0)[2]);
t3=(C_truep(t2)?C_SCHEME_END_OF_LIST:C_i_cdr(((C_word*)t0)[2]));
t4=C_i_nullp(t3);
t5=(C_truep(t4)?t1:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3123,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t1)){
/* posix-common.scm:290: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[211]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[211]+1);
av2[1]=t8;
av2[2]=t1;
av2[3]=lf[209];
tp(4,av2);}}
else{
t9=t8;{
C_word *av2=av;
av2[0]=t9;
av2[1]=C_SCHEME_UNDEFINED;
f_3123(2,av2);}}}

/* k3121 in k3109 in chicken.file.posix#set-file-times! in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3123(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_3123,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3126,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[6])){
/* posix-common.scm:291: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[211]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[211]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=lf[209];
tp(4,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_3126(2,av2);}}}

/* k3124 in k3121 in k3109 in chicken.file.posix#set-file-times! in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3126(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_3126,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3142,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3132,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[3])){
/* posix-common.scm:292: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t3;
av2[2]=C_i_foreign_string_argumentp(((C_word*)t0)[3]);
tp(3,av2);}}
else{
t4=t2;
f_3142(t4,stub724(C_SCHEME_UNDEFINED,C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6]));}}

/* k3130 in k3124 in k3121 in k3109 in chicken.file.posix#set-file-times! in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3132(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3132,c,av);}
t2=((C_word*)t0)[2];
f_3142(t2,stub724(C_SCHEME_UNDEFINED,t1,((C_word*)t0)[3],((C_word*)t0)[4]));}

/* k3140 in k3124 in k3121 in k3109 in chicken.file.posix#set-file-times! in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_fcall f_3142(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,7)))){
C_save_and_reclaim_args((void *)trf_3142,2,t0,t1);}
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){{
C_word av2[8];
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[183];
av2[3]=lf[188];
av2[4]=lf[209];
av2[5]=lf[210];
av2[6]=((C_word*)t0)[3];
av2[7]=((C_word*)t0)[4];
C_apply(8,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* chicken.file.posix#file-size in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3186(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3186,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3190,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:301: stat */
f_2981(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[214]);}

/* k3188 in chicken.file.posix#file-size in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3190(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,1)))){
C_save_and_reclaim((void *)f_3190,c,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_int64_to_num(&a,C_statbuf.st_size);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#set-file-owner! in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3192(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_3192,c,av);}
/* posix-common.scm:305: chown */
f_5436(t1,lf[217],t2,t3,C_fix(-1));}

/* chicken.file.posix#set-file-group! in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3198(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_3198,c,av);}
/* posix-common.scm:309: chown */
f_5436(t1,lf[219],t2,C_fix(-1),t3);}

/* k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3206(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3206,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[20]+1 /* (set! chicken.file.posix#file-owner ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3210,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7892,a[2]=((C_word)li221),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:318: chicken.base#getter-with-setter */
t5=*((C_word*)lf[464]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[218]+1);
av2[4]=lf[493];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3210(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3210,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[14]+1 /* (set! chicken.file.posix#file-group ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3214,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7886,a[2]=((C_word)li220),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:324: chicken.base#getter-with-setter */
t5=*((C_word*)lf[464]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[196]+1);
av2[4]=lf[491];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3214(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(33,c,4)))){
C_save_and_reclaim((void *)f_3214,c,av);}
a=C_alloc(33);
t2=C_mutate((C_word*)lf[21]+1 /* (set! chicken.file.posix#file-permissions ...) */,t1);
t3=C_mutate((C_word*)lf[29]+1 /* (set! chicken.file.posix#file-type ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3216,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[34]+1 /* (set! chicken.file.posix#regular-file? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3303,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[36]+1 /* (set! chicken.file.posix#symbolic-link? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3313,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[30]+1 /* (set! chicken.file.posix#block-device? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3323,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[31]+1 /* (set! chicken.file.posix#character-device? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3333,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[33]+1 /* (set! chicken.file.posix#fifo? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3343,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[35]+1 /* (set! chicken.file.posix#socket? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3353,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[32]+1 /* (set! chicken.file.posix#directory? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3363,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t11=C_set_block_item(lf[76] /* chicken.file.posix#seek/set */,0,C_fix((C_word)SEEK_SET));
t12=C_set_block_item(lf[75] /* chicken.file.posix#seek/end */,0,C_fix((C_word)SEEK_END));
t13=C_set_block_item(lf[74] /* chicken.file.posix#seek/cur */,0,C_fix((C_word)SEEK_CUR));
t14=C_mutate((C_word*)lf[77]+1 /* (set! chicken.file.posix#set-file-position! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3376,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp));
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3431,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7849,a[2]=((C_word)li219),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:401: chicken.base#getter-with-setter */
t17=*((C_word*)lf[464]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t17;
av2[1]=t15;
av2[2]=t16;
av2[3]=*((C_word*)lf[77]+1);
av2[4]=lf[490];
((C_proc)(void*)(*((C_word*)t17+1)))(5,av2);}}

/* chicken.file.posix#file-type in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3216(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3216,c,av);}
a=C_alloc(3);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=C_rest_nullp(c,3);
t6=C_rest_nullp(c,4);
t7=(C_truep(t6)?C_SCHEME_TRUE:C_get_rest_arg(c,4,av,3,t0));
t8=C_rest_nullp(c,4);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3235,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:333: stat */
f_2981(t9,t2,t4,t7,lf[227]);}

/* k3233 in chicken.file.posix#file-type in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3235(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3235,c,av);}
if(C_truep(t1)){
t2=C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_stat_type);
t3=C_eqp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFREG));
if(C_truep(t3)){
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=lf[220];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_eqp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFLNK));
if(C_truep(t4)){
t5=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=lf[221];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_eqp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFDIR));
if(C_truep(t5)){
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=lf[222];
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_eqp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFCHR));
if(C_truep(t6)){
t7=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t7;
av2[1]=lf[223];
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t7=C_eqp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFBLK));
if(C_truep(t7)){
t8=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t8;
av2[1]=lf[224];
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=C_eqp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFIFO));
if(C_truep(t8)){
t9=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t9;
av2[1]=lf[225];
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t9=C_eqp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFSOCK));
t10=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t10;
av2[1]=(C_truep(t9)?lf[226]:lf[220]);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}}}}}}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* chicken.file.posix#regular-file? in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3303(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3303,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3311,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:347: chicken.file.posix#file-type */
t4=*((C_word*)lf[29]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3309 in chicken.file.posix#regular-file? in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3311(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3311,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(lf[220],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#symbolic-link? in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3313(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3313,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3321,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:351: chicken.file.posix#file-type */
t4=*((C_word*)lf[29]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3319 in chicken.file.posix#symbolic-link? in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3321(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3321,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(lf[221],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#block-device? in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3323(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3323,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3331,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:355: chicken.file.posix#file-type */
t4=*((C_word*)lf[29]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3329 in chicken.file.posix#block-device? in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3331(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3331,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(lf[224],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#character-device? in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3333(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3333,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3341,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:359: chicken.file.posix#file-type */
t4=*((C_word*)lf[29]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3339 in chicken.file.posix#character-device? in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3341(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3341,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(lf[223],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#fifo? in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3343(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3343,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3351,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:363: chicken.file.posix#file-type */
t4=*((C_word*)lf[29]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3349 in chicken.file.posix#fifo? in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3351(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3351,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(lf[225],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#socket? in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3353(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3353,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3361,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:367: chicken.file.posix#file-type */
t4=*((C_word*)lf[29]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3359 in chicken.file.posix#socket? in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3361(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3361,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(lf[226],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#directory? in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3363(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3363,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3371,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:371: chicken.file.posix#file-type */
t4=*((C_word*)lf[29]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3369 in chicken.file.posix#directory? in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3371(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3371,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(lf[222],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#set-file-position! in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3376(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +6,c,3)))){
C_save_and_reclaim((void*)f_3376,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+6);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t5=C_i_pairp(t4);
t6=(C_truep(t5)?C_get_rest_arg(c,4,av,4,t0):C_fix((C_word)SEEK_SET));
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3383,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:387: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t7;
av2[2]=t3;
av2[3]=lf[228];
tp(4,av2);}}

/* k3381 in chicken.file.posix#set-file-position! in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3383(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3383,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3386,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:388: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=lf[228];
tp(4,av2);}}

/* k3384 in k3381 in chicken.file.posix#set-file-position! in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3386(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_3386,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3392,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3398,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:389: chicken.base#port? */
t4=*((C_word*)lf[193]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3390 in k3384 in k3381 in chicken.file.posix#set-file-position! in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3392(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_3392,c,av);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* posix-common.scm:398: posix-error */
t2=lf[183];{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[188];
av2[3]=lf[228];
av2[4]=lf[229];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
f_2963(7,av2);}}}

/* k3396 in k3384 in k3381 in chicken.file.posix#set-file-position! in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3398(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_3398,c,av);}
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(7));
t3=C_eqp(t2,lf[230]);
if(C_truep(t3)){
t4=C_fseek(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
if(C_truep(t4)){
t5=C_i_set_i_slot(((C_word*)t0)[2],C_fix(6),C_SCHEME_FALSE);
t6=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t4;
f_3392(2,av2);}}
else{
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
f_3392(2,av2);}}}
else{
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_3392(2,av2);}}}
else{
if(C_truep(C_fixnump(((C_word*)t0)[2]))){
t2=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_lseek(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
f_3392(2,av2);}}
else{
/* posix-common.scm:397: ##sys#signal-hook */
t2=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[5];
av2[2]=lf[191];
av2[3]=lf[228];
av2[4]=lf[231];
av2[5]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}}

/* k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3431(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(45,c,6)))){
C_save_and_reclaim((void *)f_3431,c,av);}
a=C_alloc(45);
t2=C_mutate((C_word*)lf[22]+1 /* (set! chicken.file.posix#file-position ...) */,t1);
t3=C_set_block_item(lf[38] /* chicken.file.posix#fileno/stdin */,0,C_fix((C_word)STDIN_FILENO));
t4=C_set_block_item(lf[39] /* chicken.file.posix#fileno/stdout */,0,C_fix((C_word)STDOUT_FILENO));
t5=C_set_block_item(lf[37] /* chicken.file.posix#fileno/stderr */,0,C_fix((C_word)STDERR_FILENO));
t6=C_set_block_item(lf[50] /* chicken.file.posix#open/rdonly */,0,C_fix((C_word)O_RDONLY));
t7=C_set_block_item(lf[57] /* chicken.file.posix#open/wronly */,0,C_fix((C_word)O_WRONLY));
t8=C_set_block_item(lf[51] /* chicken.file.posix#open/rdwr */,0,C_fix((C_word)O_RDWR));
t9=C_set_block_item(lf[52] /* chicken.file.posix#open/read */,0,C_fix((C_word)O_RDONLY));
t10=C_set_block_item(lf[56] /* chicken.file.posix#open/write */,0,C_fix((C_word)O_WRONLY));
t11=C_set_block_item(lf[44] /* chicken.file.posix#open/creat */,0,C_fix((C_word)O_CREAT));
t12=C_set_block_item(lf[42] /* chicken.file.posix#open/append */,0,C_fix((C_word)O_APPEND));
t13=C_set_block_item(lf[45] /* chicken.file.posix#open/excl */,0,C_fix((C_word)O_EXCL));
t14=C_set_block_item(lf[55] /* chicken.file.posix#open/trunc */,0,C_fix((C_word)O_TRUNC));
t15=C_set_block_item(lf[43] /* chicken.file.posix#open/binary */,0,C_fix((C_word)O_BINARY));
t16=C_set_block_item(lf[54] /* chicken.file.posix#open/text */,0,C_fix((C_word)O_TEXT));
t17=C_set_block_item(lf[60] /* chicken.file.posix#perm/irusr */,0,C_fix((C_word)S_IRUSR));
t18=C_set_block_item(lf[69] /* chicken.file.posix#perm/iwusr */,0,C_fix((C_word)S_IWUSR));
t19=C_set_block_item(lf[72] /* chicken.file.posix#perm/ixusr */,0,C_fix((C_word)S_IXUSR));
t20=C_set_block_item(lf[58] /* chicken.file.posix#perm/irgrp */,0,C_fix((C_word)S_IRGRP));
t21=C_set_block_item(lf[67] /* chicken.file.posix#perm/iwgrp */,0,C_fix((C_word)S_IWGRP));
t22=C_set_block_item(lf[70] /* chicken.file.posix#perm/ixgrp */,0,C_fix((C_word)S_IXGRP));
t23=C_set_block_item(lf[59] /* chicken.file.posix#perm/iroth */,0,C_fix((C_word)S_IROTH));
t24=C_set_block_item(lf[68] /* chicken.file.posix#perm/iwoth */,0,C_fix((C_word)S_IWOTH));
t25=C_set_block_item(lf[71] /* chicken.file.posix#perm/ixoth */,0,C_fix((C_word)S_IXOTH));
t26=C_set_block_item(lf[63] /* chicken.file.posix#perm/irwxu */,0,C_fix((C_word)S_IRUSR | S_IWUSR | S_IXUSR));
t27=C_set_block_item(lf[61] /* chicken.file.posix#perm/irwxg */,0,C_fix((C_word)S_IRGRP | S_IWGRP | S_IXGRP));
t28=C_set_block_item(lf[62] /* chicken.file.posix#perm/irwxo */,0,C_fix((C_word)S_IROTH | S_IWOTH | S_IXOTH));
t29=C_SCHEME_UNDEFINED;
t30=(*a=C_VECTOR_TYPE|1,a[1]=t29,tmp=(C_word)a,a+=2,tmp);
t31=C_SCHEME_UNDEFINED;
t32=(*a=C_VECTOR_TYPE|1,a[1]=t31,tmp=(C_word)a,a+=2,tmp);
t33=C_set_block_item(t30,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3459,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t34=C_set_block_item(t32,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3496,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t35=C_mutate((C_word*)lf[40]+1 /* (set! chicken.file.posix#open-input-file* ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3515,a[2]=t32,a[3]=t30,a[4]=((C_word)li27),tmp=(C_word)a,a+=5,tmp));
t36=C_mutate((C_word*)lf[41]+1 /* (set! chicken.file.posix#open-output-file* ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3529,a[2]=t32,a[3]=t30,a[4]=((C_word)li28),tmp=(C_word)a,a+=5,tmp));
t37=C_mutate((C_word*)lf[73]+1 /* (set! chicken.file.posix#port->fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3543,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t38=C_mutate((C_word*)lf[5]+1 /* (set! chicken.file.posix#duplicate-fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3588,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp));
t39=C_mutate((C_word*)lf[175]+1 /* (set! chicken.process-context.posix#current-process-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3615,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t40=C_mutate((C_word*)lf[169]+1 /* (set! chicken.process-context.posix#change-directory* ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3618,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp));
t41=*((C_word*)lf[253]+1);
t42=C_mutate((C_word*)lf[253]+1 /* (set! ##sys#change-directory-hook ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3634,a[2]=t41,a[3]=((C_word)li33),tmp=(C_word)a,a+=4,tmp));
t43=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3648,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t44=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7818,a[2]=((C_word)li217),tmp=(C_word)a,a+=3,tmp);
t45=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7843,a[2]=((C_word)li218),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:560: chicken.base#getter-with-setter */
t46=*((C_word*)lf[464]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t46;
av2[1]=t43;
av2[2]=t44;
av2[3]=t45;
av2[4]=lf[486];
((C_proc)(void*)(*((C_word*)t46+1)))(5,av2);}}

/* mode in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_fcall f_3459(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_3459,4,t1,t2,t3,t4);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3467,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t6=C_u_i_car(t3);
t7=C_eqp(t6,lf[232]);
if(C_truep(t7)){
if(C_truep(C_i_not(t2))){
/* posix-common.scm:482: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t1;
av2[2]=lf[233];
av2[3]=t4;
tp(4,av2);}}
else{
/* posix-common.scm:486: ##sys#error */
t8=*((C_word*)lf[95]+1);{
C_word av2[4];
av2[0]=t8;
av2[1]=t5;
av2[2]=lf[234];
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}}
else{
/* posix-common.scm:487: ##sys#error */
t8=*((C_word*)lf[95]+1);{
C_word av2[4];
av2[0]=t8;
av2[1]=t5;
av2[2]=lf[235];
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}}
else{
if(C_truep(t2)){
/* posix-common.scm:482: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t1;
av2[2]=lf[236];
av2[3]=t4;
tp(4,av2);}}
else{
/* posix-common.scm:482: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t1;
av2[2]=lf[237];
av2[3]=t4;
tp(4,av2);}}}}

/* k3465 in mode in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3467(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3467,c,av);}
/* posix-common.scm:482: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[190]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* check in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_fcall f_3496(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,5)))){
C_save_and_reclaim_args((void *)trf_3496,5,t1,t2,t3,t4,t5);}
a=C_alloc(4);
if(C_truep(C_null_pointerp(t5))){
/* posix-common.scm:493: posix-error */
t6=lf[183];{
C_word av2[6];
av2[0]=t6;
av2[1]=t1;
av2[2]=lf[188];
av2[3]=t2;
av2[4]=lf[238];
av2[5]=t3;
f_2963(6,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3509,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t4)){
/* posix-common.scm:494: ##sys#make-port */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[239]+1));
C_word av2[6];
av2[0]=*((C_word*)lf[239]+1);
av2[1]=t6;
av2[2]=C_fix(1);
av2[3]=*((C_word*)lf[240]+1);
av2[4]=lf[241];
av2[5]=lf[230];
tp(6,av2);}}
else{
/* posix-common.scm:494: ##sys#make-port */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[239]+1));
C_word av2[6];
av2[0]=*((C_word*)lf[239]+1);
av2[1]=t6;
av2[2]=C_fix(2);
av2[3]=*((C_word*)lf[240]+1);
av2[4]=lf[241];
av2[5]=lf[230];
tp(6,av2);}}}}

/* k3507 in check in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3509(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3509,c,av);}
t2=C_set_file_ptr(t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.file.posix#open-input-file* in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3515(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +7,c,3)))){
C_save_and_reclaim((void*)f_3515,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+7);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3519,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* posix-common.scm:499: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[242];
tp(4,av2);}}

/* k3517 in chicken.file.posix#open-input-file* in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3519(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_3519,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3527,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:500: mode */
f_3459(t2,C_SCHEME_TRUE,((C_word*)t0)[6],lf[242]);}

/* k3525 in k3517 in chicken.file.posix#open-input-file* in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3527(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,5)))){
C_save_and_reclaim((void *)f_3527,c,av);}
a=C_alloc(2);
t2=C_fdopen(&a,2,((C_word*)t0)[2],t1);
/* posix-common.scm:500: check */
f_3496(((C_word*)t0)[4],lf[242],((C_word*)t0)[2],C_SCHEME_TRUE,t2);}

/* chicken.file.posix#open-output-file* in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3529(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +7,c,3)))){
C_save_and_reclaim((void*)f_3529,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+7);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3533,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* posix-common.scm:503: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[243];
tp(4,av2);}}

/* k3531 in chicken.file.posix#open-output-file* in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3533(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_3533,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3541,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:504: mode */
f_3459(t2,C_SCHEME_FALSE,((C_word*)t0)[6],lf[243]);}

/* k3539 in k3531 in chicken.file.posix#open-output-file* in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3541(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,5)))){
C_save_and_reclaim((void *)f_3541,c,av);}
a=C_alloc(2);
t2=C_fdopen(&a,2,((C_word*)t0)[2],t1);
/* posix-common.scm:504: check */
f_3496(((C_word*)t0)[4],lf[243],((C_word*)t0)[2],C_SCHEME_FALSE,t2);}

/* chicken.file.posix#port->fileno in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3543(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3543,c,av);}
a=C_alloc(4);
t3=C_i_check_port_2(t2,C_fix(0),C_SCHEME_TRUE,lf[244]);
t4=C_slot(t2,C_fix(7));
t5=C_eqp(lf[226],t4);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3559,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:514: ##sys#port-data */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[245]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[245]+1);
av2[1]=t6;
av2[2]=t2;
tp(3,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3582,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:515: ##sys#peek-unsigned-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[248]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[248]+1);
av2[1]=t6;
av2[2]=t2;
av2[3]=C_fix(0);
tp(4,av2);}}}

/* k3557 in chicken.file.posix#port->fileno in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3559(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3559,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_slot(t1,C_fix(0));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3566 in k3580 in chicken.file.posix#port->fileno in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3568(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3568,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3580 in chicken.file.posix#port->fileno in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3582(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_3582,c,av);}
a=C_alloc(4);
if(C_truep(C_i_not(C_i_zerop(t1)))){
t2=C_port_fileno(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3568,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posix-common.scm:518: posix-error */
t4=lf[183];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[188];
av2[3]=lf[244];
av2[4]=lf[246];
av2[5]=((C_word*)t0)[2];
f_2963(6,av2);}}
else{
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
/* posix-common.scm:520: posix-error */
t2=lf[183];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[191];
av2[3]=lf[244];
av2[4]=lf[247];
av2[5]=((C_word*)t0)[2];
f_2963(6,av2);}}}

/* chicken.file.posix#duplicate-fileno in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3588(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,3)))){
C_save_and_reclaim((void*)f_3588,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3592,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:524: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[249];
tp(4,av2);}}

/* k3590 in chicken.file.posix#duplicate-fileno in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3592(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_3592,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3595,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(((C_word*)t0)[4]))){
t3=t2;
f_3595(t3,C_dup(((C_word*)t0)[3]));}
else{
t3=C_i_car(((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3613,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:528: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t4;
av2[2]=t3;
av2[3]=lf[249];
tp(4,av2);}}}

/* k3593 in k3590 in chicken.file.posix#duplicate-fileno in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_fcall f_3595(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,5)))){
C_save_and_reclaim_args((void *)trf_3595,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3598,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
/* posix-common.scm:531: posix-error */
t3=lf[183];{
C_word av2[6];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[188];
av2[3]=lf[249];
av2[4]=lf[250];
av2[5]=((C_word*)t0)[3];
f_2963(6,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3596 in k3593 in k3590 in chicken.file.posix#duplicate-fileno in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3598(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3598,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3611 in k3590 in chicken.file.posix#duplicate-fileno in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3613(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3613,c,av);}
t2=((C_word*)t0)[2];
f_3595(t2,C_dup2(((C_word*)t0)[3],((C_word*)t0)[4]));}

/* chicken.process-context.posix#current-process-id in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3615(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3615,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=stub843(C_SCHEME_UNDEFINED);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.process-context.posix#change-directory* in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3618(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3618,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3622,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:545: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[251];
tp(4,av2);}}

/* k3620 in chicken.process-context.posix#change-directory* in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3622(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_3622,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3625,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_eqp(C_fix(0),C_fchdir(((C_word*)t0)[3]));
if(C_truep(t3)){
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* posix-common.scm:547: posix-error */
t4=lf[183];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[188];
av2[3]=lf[251];
av2[4]=lf[252];
av2[5]=((C_word*)t0)[3];
f_2963(6,av2);}}}

/* k3623 in k3620 in chicken.process-context.posix#change-directory* in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3625(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3625,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* ##sys#change-directory-hook in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3634(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3634,c,av);}
if(C_truep(C_fixnump(t2))){
t3=*((C_word*)lf[169]+1);
t4=*((C_word*)lf[169]+1);
/* posix-common.scm:552: g850 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[169]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[169]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}
else{
/* posix-common.scm:552: g850 */
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}}

/* k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3648(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(32,c,4)))){
C_save_and_reclaim((void *)f_3648,c,av);}
a=C_alloc(32);
t2=C_mutate((C_word*)lf[13]+1 /* (set! chicken.file.posix#file-creation-mode ...) */,t1);
t3=C_mutate(&lf[254] /* (set! chicken.posix#decode-seconds ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)C_decode_seconds,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate(&lf[255] /* (set! chicken.posix#check-time-vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3651,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[81]+1 /* (set! chicken.time.posix#seconds->local-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3670,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[79]+1 /* (set! chicken.time.posix#seconds->utc-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3691,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[82]+1 /* (set! chicken.time.posix#seconds->string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3723,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp));
t8=C_fix((C_word)sizeof(struct tm));
t9=C_mutate((C_word*)lf[83]+1 /* (set! chicken.time.posix#local-time->seconds ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3761,a[2]=t8,a[3]=((C_word)li39),tmp=(C_word)a,a+=4,tmp));
t10=C_fix((C_word)sizeof(struct tm));
t11=C_mutate((C_word*)lf[85]+1 /* (set! chicken.time.posix#time->string ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3806,a[2]=t10,a[3]=((C_word)li40),tmp=(C_word)a,a+=4,tmp));
t12=C_mutate((C_word*)lf[133]+1 /* (set! chicken.process.signal#set-signal-handler! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3868,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp));
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3883,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7809,a[2]=((C_word)li216),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:635: chicken.base#getter-with-setter */
t15=*((C_word*)lf[464]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t15;
av2[1]=t13;
av2[2]=t14;
av2[3]=*((C_word*)lf[133]+1);
av2[4]=lf[484];
((C_proc)(void*)(*((C_word*)t15+1)))(5,av2);}}

/* chicken.posix#check-time-vector in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_fcall f_3651(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_3651,3,t1,t2,t3);}
t4=C_i_check_vector_2(t3,t2);
t5=C_block_size(t3);
if(C_truep(C_fixnum_lessp(t5,C_fix(10)))){
/* posix-common.scm:579: ##sys#error */
t6=*((C_word*)lf[95]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t1;
av2[2]=t2;
av2[3]=lf[256];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* chicken.time.posix#seconds->local-time in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3670(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_3670,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3674,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_rest_nullp(c,2))){
/* posix-common.scm:582: chicken.time#current-seconds */
t3=*((C_word*)lf[212]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_get_rest_arg(c,2,av,2,t0);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f8727,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:583: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[211]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[211]+1);
av2[1]=t4;
av2[2]=t3;
av2[3]=lf[257];
tp(4,av2);}}}

/* k3672 in chicken.time.posix#seconds->local-time in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3674(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3674,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3677,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:583: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[211]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[211]+1);
av2[1]=t2;
av2[2]=t1;
av2[3]=lf[257];
tp(4,av2);}}

/* k3675 in k3672 in chicken.time.posix#seconds->local-time in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3677(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3677,c,av);}
/* posix-common.scm:584: decode-seconds */
{C_proc tp=(C_proc)C_fast_retrieve_proc(lf[254]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=lf[254];
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_FALSE;
tp(4,av2);}}

/* chicken.time.posix#seconds->utc-time in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3691(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_3691,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3695,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_rest_nullp(c,2))){
/* posix-common.scm:587: chicken.time#current-seconds */
t3=*((C_word*)lf[212]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_get_rest_arg(c,2,av,2,t0);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f8731,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:588: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[211]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[211]+1);
av2[1]=t4;
av2[2]=t3;
av2[3]=lf[258];
tp(4,av2);}}}

/* k3693 in chicken.time.posix#seconds->utc-time in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3695(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3695,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3698,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:588: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[211]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[211]+1);
av2[1]=t2;
av2[2]=t1;
av2[3]=lf[258];
tp(4,av2);}}

/* k3696 in k3693 in chicken.time.posix#seconds->utc-time in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3698(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3698,c,av);}
/* posix-common.scm:589: decode-seconds */
{C_proc tp=(C_proc)C_fast_retrieve_proc(lf[254]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=lf[254];
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_TRUE;
tp(4,av2);}}

/* chicken.time.posix#seconds->string in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3723(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3723,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3727,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_rest_nullp(c,2))){
/* posix-common.scm:593: chicken.time#current-seconds */
t3=*((C_word*)lf[212]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=t2;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_get_rest_arg(c,2,av,2,t0);
f_3727(2,av2);}}}

/* k3725 in chicken.time.posix#seconds->string in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3727(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3727,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3730,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:594: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[211]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[211]+1);
av2[1]=t2;
av2[2]=t1;
av2[3]=lf[260];
tp(4,av2);}}

/* k3728 in k3725 in chicken.time.posix#seconds->string in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3730(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3730,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3733,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=C_fix((C_word)sizeof(int) * CHAR_BIT);
t5=C_i_foreign_ranged_integer_argumentp(((C_word*)t0)[3],t4);
/* posix-common.scm:592: ##sys#peek-c-string */
t6=*((C_word*)lf[185]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t2;
av2[2]=stub899(t3,t5);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k3731 in k3728 in k3725 in chicken.time.posix#seconds->string in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3733(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3733,c,av);}
if(C_truep(t1)){
t2=C_block_size(t1);
/* posix-common.scm:597: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[259]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[259]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fix(0);
av2[4]=C_fixnum_difference(t2,C_fix(1));
tp(5,av2);}}
else{
/* posix-common.scm:598: ##sys#error */
t2=*((C_word*)lf[95]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[260];
av2[3]=lf[261];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* chicken.time.posix#local-time->seconds in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3761(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3761,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3765,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:603: check-time-vector */
f_3651(t3,lf[262],t2);}

/* k3763 in chicken.time.posix#local-time->seconds in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3765(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3765,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3769,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:604: ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[264]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[264]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_make_character(0);
tp(4,av2);}}

/* k3767 in k3763 in chicken.time.posix#local-time->seconds in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3769(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_3769,c,av);}
a=C_alloc(7);
t2=C_a_mktime(&a,2,((C_word*)t0)[2],t1);
if(C_truep(C_i_nequalp(C_fix(-1),t2))){
/* posix-common.scm:606: ##sys#error */
t3=*((C_word*)lf[95]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[262];
av2[3]=lf[263];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* chicken.time.posix#time->string in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3806(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3806,c,av);}
a=C_alloc(6);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3813,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:614: check-time-vector */
f_3651(t5,lf[265],t2);}

/* k3811 in chicken.time.posix#time->string in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3813(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_3813,c,av);}
a=C_alloc(9);
if(C_truep(((C_word*)t0)[2])){
t2=C_i_check_string_2(((C_word*)t0)[2],lf[265]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3822,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3832,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:618: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[265];
tp(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3839,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3860,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:620: ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[264]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[264]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=C_make_character(0);
tp(4,av2);}}}

/* k3820 in k3811 in chicken.time.posix#time->string in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3822(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3822,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* posix-common.scm:619: ##sys#error */
t2=*((C_word*)lf[95]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[265];
av2[3]=lf[266];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* k3830 in k3811 in chicken.time.posix#time->string in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3832(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3832,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3836,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:618: ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[264]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[264]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_make_character(0);
tp(4,av2);}}

/* k3834 in k3830 in k3811 in chicken.time.posix#time->string in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3836(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3836,c,av);}
a=C_alloc(5);
t2=C_a_i_bytevector(&a,1,C_fix(3));
if(C_truep(t1)){
t3=C_i_foreign_block_argumentp(t1);
/* posix-common.scm:611: ##sys#peek-c-string */
t4=*((C_word*)lf[185]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=stub936(t2,((C_word*)t0)[3],((C_word*)t0)[4],t3);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
/* posix-common.scm:611: ##sys#peek-c-string */
t3=*((C_word*)lf[185]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=stub936(t2,((C_word*)t0)[3],((C_word*)t0)[4],C_SCHEME_FALSE);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k3837 in k3811 in chicken.time.posix#time->string in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3839(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3839,c,av);}
if(C_truep(t1)){
t2=C_block_size(t1);
/* posix-common.scm:622: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[259]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[259]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fix(0);
av2[4]=C_fixnum_difference(t2,C_fix(1));
tp(5,av2);}}
else{
/* posix-common.scm:623: ##sys#error */
t2=*((C_word*)lf[95]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[265];
av2[3]=lf[267];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* k3858 in k3811 in chicken.time.posix#time->string in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3860(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3860,c,av);}
a=C_alloc(5);
t2=C_a_i_bytevector(&a,1,C_fix(3));
if(C_truep(t1)){
t3=C_i_foreign_block_argumentp(t1);
/* posix-common.scm:610: ##sys#peek-c-string */
t4=*((C_word*)lf[185]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=stub926(t2,((C_word*)t0)[3],t3);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
/* posix-common.scm:610: ##sys#peek-c-string */
t3=*((C_word*)lf[185]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=stub926(t2,((C_word*)t0)[3],C_SCHEME_FALSE);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* chicken.process.signal#set-signal-handler! in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3868(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3868,c,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3872,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:630: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[269];
tp(4,av2);}}

/* k3870 in chicken.process.signal#set-signal-handler! in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3872(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3872,c,av);}
if(C_truep(((C_word*)t0)[2])){
t2=C_establish_signal_handler(((C_word*)t0)[3],((C_word*)t0)[3]);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_vector_set(*((C_word*)lf[268]+1),((C_word*)t0)[3],((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_establish_signal_handler(((C_word*)t0)[3],C_SCHEME_FALSE);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_vector_set(*((C_word*)lf[268]+1),((C_word*)t0)[3],((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3883(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(82,c,8)))){
C_save_and_reclaim((void *)f_3883,c,av);}
a=C_alloc(82);
t2=C_mutate((C_word*)lf[135]+1 /* (set! chicken.process.signal#signal-handler ...) */,t1);
t3=C_mutate((C_word*)lf[124]+1 /* (set! chicken.process#process-sleep ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3885,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[112]+1 /* (set! chicken.process#process-wait ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3891,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate(&lf[274] /* (set! chicken.posix#list->c-string-buffer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3962,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate(&lf[276] /* (set! chicken.posix#free-c-string-buffer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4079,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate(&lf[285] /* (set! chicken.posix#check-environment-list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4113,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp));
t8=*((C_word*)lf[286]+1);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4160,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp);
t10=C_mutate(&lf[287] /* (set! chicken.posix#call-with-exec-args ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4162,a[2]=t9,a[3]=t8,a[4]=((C_word)li69),tmp=(C_word)a,a+=5,tmp));
t11=C_set_block_item(lf[125] /* chicken.process#pipe/buf */,0,C_fix((C_word)PIPE_BUF));
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4319,a[2]=((C_word)li70),tmp=(C_word)a,a+=3,tmp);
t13=C_mutate((C_word*)lf[118]+1 /* (set! chicken.process#open-input-pipe ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4338,a[2]=t12,a[3]=((C_word)li71),tmp=(C_word)a,a+=4,tmp));
t14=C_mutate((C_word*)lf[119]+1 /* (set! chicken.process#open-output-pipe ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4378,a[2]=t12,a[3]=((C_word)li72),tmp=(C_word)a,a+=4,tmp));
t15=C_mutate((C_word*)lf[115]+1 /* (set! chicken.process#close-input-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4418,a[2]=((C_word)li73),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[116]+1 /* (set! chicken.process#close-output-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4433,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[120]+1 /* (set! chicken.process#with-input-from-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4448,a[2]=((C_word)li79),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[114]+1 /* (set! chicken.process#call-with-output-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4482,a[2]=((C_word)li82),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[113]+1 /* (set! chicken.process#call-with-input-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4506,a[2]=((C_word)li85),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[121]+1 /* (set! chicken.process#with-output-to-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4530,a[2]=((C_word)li90),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[305]+1 /* (set! ##sys#file-nonblocking! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4564,a[2]=((C_word)li91),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[306]+1 /* (set! ##sys#file-select-one ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4571,a[2]=((C_word)li92),tmp=(C_word)a,a+=3,tmp));
t23=C_set_block_item(lf[6] /* chicken.file.posix#fcntl/dupfd */,0,C_fix((C_word)F_DUPFD));
t24=C_set_block_item(lf[7] /* chicken.file.posix#fcntl/getfd */,0,C_fix((C_word)F_GETFD));
t25=C_set_block_item(lf[9] /* chicken.file.posix#fcntl/setfd */,0,C_fix((C_word)F_SETFD));
t26=C_set_block_item(lf[8] /* chicken.file.posix#fcntl/getfl */,0,C_fix((C_word)F_GETFL));
t27=C_set_block_item(lf[10] /* chicken.file.posix#fcntl/setfl */,0,C_fix((C_word)F_SETFL));
t28=C_set_block_item(lf[49] /* chicken.file.posix#open/nonblock */,0,C_fix((C_word)O_NONBLOCK));
t29=C_set_block_item(lf[47] /* chicken.file.posix#open/noctty */,0,C_fix((C_word)O_NOCTTY));
t30=C_set_block_item(lf[46] /* chicken.file.posix#open/fsync */,0,C_fix((C_word)O_FSYNC));
t31=C_set_block_item(lf[53] /* chicken.file.posix#open/sync */,0,C_fix((C_word)O_SYNC));
t32=C_set_block_item(lf[48] /* chicken.file.posix#open/noinherit */,0,C_fix(0));
t33=C_set_block_item(lf[126] /* chicken.process#spawn/overlay */,0,C_fix(0));
t34=C_set_block_item(lf[127] /* chicken.process#spawn/wait */,0,C_fix(0));
t35=C_set_block_item(lf[128] /* chicken.process#spawn/nowait */,0,C_fix(0));
t36=C_set_block_item(lf[129] /* chicken.process#spawn/nowaito */,0,C_fix(0));
t37=C_set_block_item(lf[130] /* chicken.process#spawn/detach */,0,C_fix(0));
t38=C_set_block_item(lf[66] /* chicken.file.posix#perm/isvtx */,0,C_fix((C_word)S_ISVTX));
t39=C_set_block_item(lf[65] /* chicken.file.posix#perm/isuid */,0,C_fix((C_word)S_ISUID));
t40=C_set_block_item(lf[64] /* chicken.file.posix#perm/isgid */,0,C_fix((C_word)S_ISGID));
t41=C_mutate((C_word*)lf[12]+1 /* (set! chicken.file.posix#file-control ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4611,a[2]=((C_word)li93),tmp=(C_word)a,a+=3,tmp));
t42=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)va8716,a[2]=((C_word*)t0)[2],a[3]=((C_word)li212),tmp=(C_word)a,a+=4,tmp);
t43=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)va8718,a[2]=t42,a[3]=((C_word)li213),tmp=(C_word)a,a+=4,tmp);
t44=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)va8720,a[2]=t43,a[3]=((C_word)li214),tmp=(C_word)a,a+=4,tmp);
t45=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)va8722,a[2]=t44,a[3]=((C_word)li215),tmp=(C_word)a,a+=4,tmp);
t46=t45;
va8722(t46,C_s_a_i_bitwise_ior(&a,2,C_fix((C_word)S_IRUSR),C_fix((C_word)S_IWUSR)));}

/* chicken.process#process-sleep in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3885(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3885,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3889,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:647: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[270];
tp(4,av2);}}

/* k3887 in chicken.process#process-sleep in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3889(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3889,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_process_sleep(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.process#process-wait in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3891(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3891,c,av);}
a=C_alloc(5);
t2=C_rest_nullp(c,2);
t3=(C_truep(t2)?C_SCHEME_FALSE:C_get_rest_arg(c,2,av,2,t0));
t4=C_rest_nullp(c,2);
t5=C_rest_nullp(c,3);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,2,t0));
t7=C_rest_nullp(c,3);
t8=(C_truep(t3)?t3:C_fix(-1));
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3910,a[2]=t8,a[3]=t6,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:654: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t9;
av2[2]=t8;
av2[3]=lf[272];
tp(4,av2);}}

/* k3908 in chicken.process#process-wait in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3910(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_3910,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3915,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li43),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3921,a[2]=((C_word*)t0)[2],a[3]=((C_word)li44),tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:655: ##sys#call-with-values */{
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

/* a3914 in k3908 in chicken.process#process-wait in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3915(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3915,c,av);}
/* posix-common.scm:655: process-wait-impl */
f_7014(t1,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* a3920 in k3908 in chicken.process#process-wait in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3921(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_3921,c,av);}
t5=C_eqp(t2,C_fix(-1));
if(C_truep(t5)){
/* posix-common.scm:657: posix-error */
t6=lf[183];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t6;
av2[1]=t1;
av2[2]=lf[91];
av2[3]=lf[272];
av2[4]=lf[273];
av2[5]=((C_word*)t0)[2];
f_2963(6,av2);}}
else{
/* posix-common.scm:658: scheme#values */{
C_word *av2=av;
av2[0]=0;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t4;
C_values(5,av2);}}}

/* chicken.posix#list->c-string-buffer in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_fcall f_3962(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_3962,4,t1,t2,t3,t4);}
a=C_alloc(12);
t5=C_i_check_list_2(t2,t4);
t6=C_u_i_length(t2);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3970,a[2]=t1,a[3]=t6,a[4]=t4,a[5]=t3,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t8=C_a_i_fixnum_plus(&a,2,t6,C_fix(1));
/* posix-common.scm:674: chicken.memory#make-pointer-vector */
t9=*((C_word*)lf[281]+1);{
C_word av2[4];
av2[0]=t9;
av2[1]=t7;
av2[2]=t8;
av2[3]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}

/* k3968 in chicken.posix#list->c-string-buffer in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3970(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_3970,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3973,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3978,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li53),tmp=(C_word)a,a+=8,tmp);
/* posix-common.scm:676: scheme#call-with-current-continuation */
t4=*((C_word*)lf[280]+1);{
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

/* k3971 in k3968 in chicken.posix#list->c-string-buffer in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3973(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3973,c,av);}
/* posix-common.scm:672: g1005 */
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a3977 in k3968 in chicken.posix#list->c-string-buffer in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3978(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_3978,c,av);}
a=C_alloc(14);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3984,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li47),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3999,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word)li52),tmp=(C_word)a,a+=9,tmp);
/* posix-common.scm:676: chicken.condition#with-exception-handler */
t5=*((C_word*)lf[279]+1);{
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

/* a3983 in a3977 in k3968 in chicken.posix#list->c-string-buffer in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3984(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3984,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3990,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li46),tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:676: k1002 */
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a3989 in a3983 in a3977 in k3968 in chicken.posix#list->c-string-buffer in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3990(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3990,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3994,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:678: free-c-string-buffer */
f_4079(t2,((C_word*)t0)[3]);}

/* k3992 in a3989 in a3983 in a3977 in k3968 in chicken.posix#list->c-string-buffer in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3994(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3994,c,av);}
/* posix-common.scm:678: chicken.condition#signal */
t2=*((C_word*)lf[275]+1);{
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

/* a3998 in a3977 in k3968 in chicken.posix#list->c-string-buffer in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_3999(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_3999,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4001,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li49),tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4058,a[2]=((C_word*)t0)[7],a[3]=((C_word)li51),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4075,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tmp12548 */
t5=t2;
f_4001(t5,t4);}

/* tmp12548 in a3998 in a3977 in k3968 in chicken.posix#list->c-string-buffer in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_fcall f_4001(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,4)))){
C_save_and_reclaim_args((void *)trf_4001,2,t0,t1);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4005,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4007,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],a[7]=((C_word)li48),tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_4007(t6,t2,((C_word*)t0)[6],C_fix(0));}

/* k4003 in tmp12548 in a3998 in a3977 in k3968 in chicken.posix#list->c-string-buffer in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4005(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4005,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* doloop1010 in tmp12548 in a3998 in a3977 in k3968 in chicken.posix#list->c-string-buffer in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_fcall f_4007(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_4007,4,t0,t1,t2,t3);}
a=C_alloc(12);
t4=C_i_nullp(t2);
t5=(C_truep(t4)?t4:C_eqp(t3,((C_word*)t0)[2]));
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t6=C_i_car(t2);
t7=C_i_check_string_2(t6,((C_word*)t0)[3]);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4023,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4048,a[2]=t8,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:687: convert */
t10=((C_word*)t0)[6];{
C_word av2[3];
av2[0]=t10;
av2[1]=t9;
av2[2]=C_u_i_car(t2);
((C_proc)C_fast_retrieve_proc(t10))(3,av2);}}}

/* k4021 in doloop1010 in tmp12548 in a3998 in a3977 in k3968 in chicken.posix#list->c-string-buffer in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4023(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_4023,c,av);}
a=C_alloc(13);
t2=C_a_i_bytevector(&a,1,C_fix(3));
t3=stub993(t2,t1);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4029,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t3,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t3)){
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_4029(2,av2);}}
else{
/* posix-common.scm:689: chicken.base#error */
t5=*((C_word*)lf[101]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[7];
av2[3]=lf[278];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k4027 in k4021 in doloop1010 in tmp12548 in a3998 in a3977 in k3968 in chicken.posix#list->c-string-buffer in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4029(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4029,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4032,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:690: chicken.memory#pointer-vector-set! */
t3=*((C_word*)lf[277]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4030 in k4027 in k4021 in doloop1010 in tmp12548 in a3998 in a3977 in k3968 in chicken.posix#list->c-string-buffer in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4032(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4032,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_4007(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]),C_fixnum_plus(((C_word*)t0)[5],C_fix(1)));}

/* k4046 in doloop1010 in tmp12548 in a3998 in a3977 in k3968 in chicken.posix#list->c-string-buffer in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4048(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4048,c,av);}
/* posix-common.scm:687: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[190]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* tmp22549 in a3998 in a3977 in k3968 in chicken.posix#list->c-string-buffer in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_fcall f_4058(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_4058,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4064,a[2]=t2,a[3]=((C_word)li50),tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:676: k1002 */
t4=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a4063 in tmp22549 in a3998 in a3977 in k3968 in chicken.posix#list->c-string-buffer in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4064(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4064,c,av);}{
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

/* k4073 in a3998 in a3977 in k3968 in chicken.posix#list->c-string-buffer in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4075(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4075,c,av);}
a=C_alloc(3);
/* tmp22549 */
t2=((C_word*)t0)[2];
f_4058(t2,((C_word*)t0)[3],C_a_i_list(&a,1,t1));}

/* chicken.posix#free-c-string-buffer in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_fcall f_4079(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_4079,2,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4083,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:695: chicken.memory#pointer-vector-length */
t4=*((C_word*)lf[284]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4081 in chicken.posix#free-c-string-buffer in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4083(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4083,c,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4088,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word)li55),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_4088(t5,((C_word*)t0)[3],C_fix(0));}

/* doloop1029 in k4081 in chicken.posix#free-c-string-buffer in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_fcall f_4088(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_4088,3,t0,t1,t2);}
a=C_alloc(5);
t3=C_eqp(t2,((C_word*)t0)[2]);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4098,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:698: chicken.memory#pointer-vector-ref */
t5=*((C_word*)lf[283]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k4096 in doloop1029 in k4081 in chicken.posix#free-c-string-buffer in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4098(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4098,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4101,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
/* posix-common.scm:699: chicken.memory#free */
t3=*((C_word*)lf[282]+1);{
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
else{
t3=((C_word*)((C_word*)t0)[2])[1];
f_4088(t3,((C_word*)t0)[3],C_fixnum_plus(((C_word*)t0)[4],C_fix(1)));}}

/* k4099 in k4096 in doloop1029 in k4081 in chicken.posix#free-c-string-buffer in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4101(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4101,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_4088(t2,((C_word*)t0)[3],C_fixnum_plus(((C_word*)t0)[4],C_fix(1)));}

/* chicken.posix#check-environment-list in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_fcall f_4113(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_4113,3,t1,t2,t3);}
a=C_alloc(8);
t4=C_i_check_list_2(t2,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4118,a[2]=t3,a[3]=((C_word)li57),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4137,a[2]=t5,a[3]=((C_word)li58),tmp=(C_word)a,a+=4,tmp);
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=(
  f_4137(t6,t2)
);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* g1042 in chicken.posix#check-environment-list in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static C_word C_fcall f_4118(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t2=C_i_check_pair_2(t1,((C_word*)t0)[2]);
t3=C_i_check_string_2(C_u_i_car(t1),((C_word*)t0)[2]);
return(C_i_check_string_2(C_u_i_cdr(t1),((C_word*)t0)[2]));}

/* for-each-loop1041 in chicken.posix#check-environment-list in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static C_word C_fcall f_4137(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_pairp(t1))){
t2=(
/* posix-common.scm:704: g1042 */
  f_4118(((C_word*)t0)[2],C_slot(t1,C_fix(0)))
);
t4=C_slot(t1,C_fix(1));
t1=t4;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* nop in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4160(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4160,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.posix#call-with-exec-args in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_fcall f_4162(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_4162,8,t0,t1,t2,t3,t4,t5,t6,t7);}
a=C_alloc(10);
t8=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4166,a[2]=t5,a[3]=t1,a[4]=t7,a[5]=t3,a[6]=t2,a[7]=t6,a[8]=((C_word*)t0)[2],a[9]=t4,tmp=(C_word)a,a+=10,tmp);
/* posix-common.scm:715: pathname-strip-directory */
t9=((C_word*)t0)[3];{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* k4164 in chicken.posix#call-with-exec-args in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4166(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_4166,c,av);}
a=C_alloc(11);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4172,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* posix-common.scm:717: list->c-string-buffer */
f_3962(t3,t2,((C_word*)t0)[9],((C_word*)t0)[6]);}

/* k4170 in k4164 in chicken.posix#call-with-exec-args in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4172(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_4172,c,av);}
a=C_alloc(15);
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4175,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4180,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word)li68),tmp=(C_word)a,a+=10,tmp);
/* posix-common.scm:720: scheme#call-with-current-continuation */
t6=*((C_word*)lf[280]+1);{
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

/* k4173 in k4170 in k4164 in chicken.posix#call-with-exec-args in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4175(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4175,c,av);}
/* posix-common.scm:715: g1077 */
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a4179 in k4170 in k4164 in chicken.posix#call-with-exec-args in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4180(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_4180,c,av);}
a=C_alloc(17);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4186,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word)li62),tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4207,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=((C_word)li67),tmp=(C_word)a,a+=11,tmp);
/* posix-common.scm:720: chicken.condition#with-exception-handler */
t5=*((C_word*)lf[279]+1);{
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

/* a4185 in a4179 in k4170 in k4164 in chicken.posix#call-with-exec-args in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4186(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_4186,c,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4192,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li61),tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:720: k1074 */
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a4191 in a4185 in a4179 in k4170 in k4164 in chicken.posix#call-with-exec-args in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4192(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4192,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4196,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:722: free-c-string-buffer */
f_4079(t2,((C_word*)t0)[4]);}

/* k4194 in a4191 in a4185 in a4179 in k4170 in k4164 in chicken.posix#call-with-exec-args in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4196(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4196,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4199,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
/* posix-common.scm:723: free-c-string-buffer */
f_4079(t2,((C_word*)((C_word*)t0)[4])[1]);}
else{
/* posix-common.scm:724: chicken.condition#signal */
t3=*((C_word*)lf[275]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k4197 in k4194 in a4191 in a4185 in a4179 in k4170 in k4164 in chicken.posix#call-with-exec-args in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4199(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4199,c,av);}
/* posix-common.scm:724: chicken.condition#signal */
t2=*((C_word*)lf[275]+1);{
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

/* a4206 in a4179 in k4170 in k4164 in chicken.posix#call-with-exec-args in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4207(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_4207,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4213,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word)li64),tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4288,a[2]=((C_word*)t0)[9],a[3]=((C_word)li66),tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:720: ##sys#call-with-values */{
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

/* a4212 in a4206 in a4179 in k4170 in k4164 in chicken.posix#call-with-exec-args in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4213(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_4213,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4217,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[7])){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4227,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* posix-common.scm:728: check-environment-list */
f_4113(t3,((C_word*)t0)[7],((C_word*)t0)[6]);}
else{
t3=t2;
f_4217(t3,C_SCHEME_UNDEFINED);}}

/* k4215 in a4212 in a4206 in a4179 in k4170 in k4164 in chicken.posix#call-with-exec-args in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_fcall f_4217(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_4217,2,t0,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4224,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:734: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[7];
tp(4,av2);}}

/* k4222 in k4215 in a4212 in a4206 in a4179 in k4170 in k4164 in chicken.posix#call-with-exec-args in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4224(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4224,c,av);}
/* posix-common.scm:734: proc */
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
av2[4]=((C_word*)((C_word*)t0)[5])[1];
((C_proc)C_fast_retrieve_proc(t2))(5,av2);}}

/* k4225 in a4212 in a4206 in a4179 in k4170 in k4164 in chicken.posix#call-with-exec-args in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4227(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_4227,c,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4231,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_check_list_2(((C_word*)t0)[4],lf[288]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4252,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4254,a[2]=t5,a[3]=t10,a[4]=t6,a[5]=((C_word)li63),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_4254(t12,t8,((C_word*)t0)[4]);}

/* k4229 in k4225 in a4212 in a4206 in a4179 in k4170 in k4164 in chicken.posix#call-with-exec-args in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4231(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4231,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_4217(t3,t2);}

/* k4250 in k4225 in a4212 in a4206 in a4179 in k4170 in k4164 in chicken.posix#call-with-exec-args in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4252(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4252,c,av);}
/* posix-common.scm:730: list->c-string-buffer */
f_3962(((C_word*)t0)[2],t1,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* map-loop1085 in k4225 in a4212 in a4206 in a4179 in k4170 in k4164 in chicken.posix#call-with-exec-args in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_fcall f_4254(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_4254,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4279,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* posix-common.scm:731: scheme#string-append */
t5=*((C_word*)lf[104]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t3;
av2[2]=C_i_car(t4);
av2[3]=lf[289];
av2[4]=C_u_i_cdr(t4);
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4277 in map-loop1085 in k4225 in a4212 in a4206 in a4179 in k4170 in k4164 in chicken.posix#call-with-exec-args in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4279(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4279,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_4254(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* a4287 in a4206 in a4179 in k4170 in k4164 in chicken.posix#call-with-exec-args in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4288(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_4288,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4294,a[2]=t2,a[3]=((C_word)li65),tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:720: k1074 */
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

/* a4293 in a4287 in a4206 in a4179 in k4170 in k4164 in chicken.posix#call-with-exec-args in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4294(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4294,c,av);}{
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

/* check in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_fcall f_4319(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,5)))){
C_save_and_reclaim_args((void *)trf_4319,5,t1,t2,t3,t4,t5);}
a=C_alloc(4);
if(C_truep(C_null_pointerp(t5))){
/* posix-common.scm:746: posix-error */
t6=lf[183];{
C_word av2[6];
av2[0]=t6;
av2[1]=t1;
av2[2]=lf[188];
av2[3]=t2;
av2[4]=lf[290];
av2[5]=t3;
f_2963(6,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4332,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t4)){
/* posix-common.scm:747: ##sys#make-port */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[239]+1));
C_word av2[6];
av2[0]=*((C_word*)lf[239]+1);
av2[1]=t6;
av2[2]=C_fix(1);
av2[3]=*((C_word*)lf[240]+1);
av2[4]=lf[291];
av2[5]=lf[230];
tp(6,av2);}}
else{
/* posix-common.scm:747: ##sys#make-port */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[239]+1));
C_word av2[6];
av2[0]=*((C_word*)lf[239]+1);
av2[1]=t6;
av2[2]=C_fix(2);
av2[3]=*((C_word*)lf[240]+1);
av2[4]=lf[291];
av2[5]=lf[230];
tp(6,av2);}}}}

/* k4330 in check in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4332(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4332,c,av);}
t2=C_set_file_ptr(t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.process#open-input-pipe in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4338(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +10,c,3)))){
C_save_and_reclaim((void*)f_4338,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+10);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
t4=C_i_check_string_2(t2,lf[292]);
t5=C_i_pairp(t3);
t6=(C_truep(t5)?C_slot(t3,C_fix(0)):lf[293]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4352,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=C_eqp(t6,lf[293]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4359,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:758: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t9;
av2[2]=t2;
av2[3]=lf[292];
tp(4,av2);}}
else{
t9=C_eqp(t6,lf[294]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4369,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:759: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t10;
av2[2]=t2;
av2[3]=lf[292];
tp(4,av2);}}
else{
/* posix-common.scm:743: ##sys#error */
t10=*((C_word*)lf[95]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t10;
av2[1]=t7;
av2[2]=lf[295];
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}}}

/* k4350 in chicken.process#open-input-pipe in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4352(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_4352,c,av);}
/* posix-common.scm:754: check */
f_4319(((C_word*)t0)[3],lf[292],((C_word*)t0)[4],C_SCHEME_TRUE,t1);}

/* k4357 in chicken.process#open-input-pipe in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4359(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,5)))){
C_save_and_reclaim((void *)f_4359,c,av);}
a=C_alloc(2);
t2=open_text_input_pipe(&a,1,t1);
/* posix-common.scm:754: check */
f_4319(((C_word*)t0)[3],lf[292],((C_word*)t0)[4],C_SCHEME_TRUE,t2);}

/* k4367 in chicken.process#open-input-pipe in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4369(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,5)))){
C_save_and_reclaim((void *)f_4369,c,av);}
a=C_alloc(2);
t2=open_binary_input_pipe(&a,1,t1);
/* posix-common.scm:754: check */
f_4319(((C_word*)t0)[3],lf[292],((C_word*)t0)[4],C_SCHEME_TRUE,t2);}

/* chicken.process#open-output-pipe in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4378(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +10,c,3)))){
C_save_and_reclaim((void*)f_4378,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+10);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
t4=C_i_check_string_2(t2,lf[296]);
t5=C_i_pairp(t3);
t6=(C_truep(t5)?C_slot(t3,C_fix(0)):lf[293]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4392,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=C_eqp(t6,lf[293]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4399,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:769: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t9;
av2[2]=t2;
av2[3]=lf[296];
tp(4,av2);}}
else{
t9=C_eqp(t6,lf[294]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4409,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:770: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t10;
av2[2]=t2;
av2[3]=lf[296];
tp(4,av2);}}
else{
/* posix-common.scm:743: ##sys#error */
t10=*((C_word*)lf[95]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t10;
av2[1]=t7;
av2[2]=lf[295];
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}}}

/* k4390 in chicken.process#open-output-pipe in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4392(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_4392,c,av);}
/* posix-common.scm:765: check */
f_4319(((C_word*)t0)[3],lf[296],((C_word*)t0)[4],C_SCHEME_FALSE,t1);}

/* k4397 in chicken.process#open-output-pipe in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4399(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,5)))){
C_save_and_reclaim((void *)f_4399,c,av);}
a=C_alloc(2);
t2=open_text_output_pipe(&a,1,t1);
/* posix-common.scm:765: check */
f_4319(((C_word*)t0)[3],lf[296],((C_word*)t0)[4],C_SCHEME_FALSE,t2);}

/* k4407 in chicken.process#open-output-pipe in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4409(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,5)))){
C_save_and_reclaim((void *)f_4409,c,av);}
a=C_alloc(2);
t2=open_binary_output_pipe(&a,1,t1);
/* posix-common.scm:765: check */
f_4319(((C_word*)t0)[3],lf[296],((C_word*)t0)[4],C_SCHEME_FALSE,t2);}

/* chicken.process#close-input-pipe in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4418(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_4418,c,av);}
a=C_alloc(4);
t3=C_i_check_port_2(t2,C_fix(1),C_SCHEME_TRUE,lf[297]);
t4=close_pipe(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4425,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_eqp(C_fix(-1),t4);
if(C_truep(t6)){
/* posix-common.scm:777: posix-error */
t7=lf[183];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=lf[188];
av2[3]=lf[297];
av2[4]=lf[298];
av2[5]=t2;
f_2963(6,av2);}}
else{
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k4423 in chicken.process#close-input-pipe in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4425(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4425,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.process#close-output-pipe in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4433(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_4433,c,av);}
a=C_alloc(4);
t3=C_i_check_port_2(t2,C_fix(2),C_SCHEME_TRUE,lf[299]);
t4=close_pipe(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4440,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_eqp(C_fix(-1),t4);
if(C_truep(t6)){
/* posix-common.scm:784: posix-error */
t7=lf[183];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=lf[188];
av2[3]=lf[299];
av2[4]=lf[300];
av2[5]=t2;
f_2963(6,av2);}}
else{
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k4438 in chicken.process#close-output-pipe in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4440(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4440,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.process#with-input-from-pipe in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4448(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +4,c,4)))){
C_save_and_reclaim((void*)f_4448,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+4);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4452,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[118]+1);
av2[3]=t2;
av2[4]=t4;
C_apply(5,av2);}}

/* k4450 in chicken.process#with-input-from-pipe in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4452(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4452,c,av);}
a=C_alloc(19);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4457,a[2]=t5,a[3]=t3,a[4]=((C_word)li75),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4462,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word)li77),tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4477,a[2]=t3,a[3]=t5,a[4]=((C_word)li78),tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:790: ##sys#dynamic-wind */
t9=*((C_word*)lf[303]+1);{
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

/* a4456 in k4450 in chicken.process#with-input-from-pipe in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4457(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4457,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[301]+1));
t3=C_mutate((C_word*)lf[301]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a4461 in k4450 in chicken.process#with-input-from-pipe in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4462(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_4462,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4468,a[2]=((C_word*)t0)[2],a[3]=((C_word)li76),tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:791: scheme#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
C_call_with_values(4,av2);}}

/* a4467 in a4461 in k4450 in chicken.process#with-input-from-pipe in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4468(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_4468,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4472,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:793: chicken.process#close-input-pipe */
t4=*((C_word*)lf[115]+1);{
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

/* k4470 in a4467 in a4461 in k4450 in chicken.process#with-input-from-pipe in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4472(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4472,c,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[302]+1);
av2[3]=((C_word*)t0)[3];
C_apply(4,av2);}}

/* a4476 in k4450 in chicken.process#with-input-from-pipe in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4477(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4477,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[301]+1));
t3=C_mutate((C_word*)lf[301]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.process#call-with-output-pipe in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4482(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +4,c,4)))){
C_save_and_reclaim((void*)f_4482,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+4);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4486,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[119]+1);
av2[3]=t2;
av2[4]=t4;
C_apply(5,av2);}}

/* k4484 in chicken.process#call-with-output-pipe in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4486(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_4486,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4491,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word)li80),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4497,a[2]=t1,a[3]=((C_word)li81),tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:799: scheme#call-with-values */{
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

/* a4490 in k4484 in chicken.process#call-with-output-pipe in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4491(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4491,c,av);}
/* posix-common.scm:800: proc */
t2=((C_word*)t0)[2];{
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

/* a4496 in k4484 in chicken.process#call-with-output-pipe in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4497(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_4497,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4501,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:802: chicken.process#close-output-pipe */
t4=*((C_word*)lf[116]+1);{
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

/* k4499 in a4496 in k4484 in chicken.process#call-with-output-pipe in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4501(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4501,c,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[302]+1);
av2[3]=((C_word*)t0)[3];
C_apply(4,av2);}}

/* chicken.process#call-with-input-pipe in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4506(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +4,c,4)))){
C_save_and_reclaim((void*)f_4506,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+4);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4510,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[118]+1);
av2[3]=t2;
av2[4]=t4;
C_apply(5,av2);}}

/* k4508 in chicken.process#call-with-input-pipe in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4510(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_4510,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4515,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word)li83),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4521,a[2]=t1,a[3]=((C_word)li84),tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:808: scheme#call-with-values */{
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

/* a4514 in k4508 in chicken.process#call-with-input-pipe in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4515(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4515,c,av);}
/* posix-common.scm:809: proc */
t2=((C_word*)t0)[2];{
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

/* a4520 in k4508 in chicken.process#call-with-input-pipe in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4521(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_4521,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4525,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:811: chicken.process#close-input-pipe */
t4=*((C_word*)lf[115]+1);{
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

/* k4523 in a4520 in k4508 in chicken.process#call-with-input-pipe in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4525(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4525,c,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[302]+1);
av2[3]=((C_word*)t0)[3];
C_apply(4,av2);}}

/* chicken.process#with-output-to-pipe in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4530(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +4,c,4)))){
C_save_and_reclaim((void*)f_4530,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+4);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4534,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[119]+1);
av2[3]=t2;
av2[4]=t4;
C_apply(5,av2);}}

/* k4532 in chicken.process#with-output-to-pipe in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4534(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4534,c,av);}
a=C_alloc(19);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4539,a[2]=t5,a[3]=t3,a[4]=((C_word)li86),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4544,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word)li88),tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4559,a[2]=t3,a[3]=t5,a[4]=((C_word)li89),tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:817: ##sys#dynamic-wind */
t9=*((C_word*)lf[303]+1);{
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

/* a4538 in k4532 in chicken.process#with-output-to-pipe in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4539(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4539,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[304]+1));
t3=C_mutate((C_word*)lf[304]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a4543 in k4532 in chicken.process#with-output-to-pipe in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4544(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_4544,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4550,a[2]=((C_word*)t0)[2],a[3]=((C_word)li87),tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:818: scheme#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
C_call_with_values(4,av2);}}

/* a4549 in a4543 in k4532 in chicken.process#with-output-to-pipe in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4550(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_4550,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4554,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:820: chicken.process#close-output-pipe */
t4=*((C_word*)lf[116]+1);{
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

/* k4552 in a4549 in a4543 in k4532 in chicken.process#with-output-to-pipe in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4554(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4554,c,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[302]+1);
av2[3]=((C_word*)t0)[3];
C_apply(4,av2);}}

/* a4558 in k4532 in chicken.process#with-output-to-pipe in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4559(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4559,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[304]+1));
t3=C_mutate((C_word*)lf[304]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* ##sys#file-nonblocking! in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4564(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4564,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=stub1285(C_SCHEME_UNDEFINED,C_i_foreign_fixnum_argumentp(t2));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* ##sys#file-select-one in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4571(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4571,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=stub1290(C_SCHEME_UNDEFINED,C_i_foreign_fixnum_argumentp(t2));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.file.posix#file-control in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4611(C_word c,C_word *av){
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
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4611,c,av);}
a=C_alloc(6);
t4=C_rest_nullp(c,4);
t5=(C_truep(t4)?C_fix(0):C_get_rest_arg(c,4,av,4,t0));
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4618,a[2]=t2,a[3]=t3,a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:330: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t6;
av2[2]=t2;
av2[3]=lf[307];
tp(4,av2);}}

/* k4616 in chicken.file.posix#file-control in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4618(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4618,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4621,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:331: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[307];
tp(4,av2);}}

/* k4619 in k4616 in chicken.file.posix#file-control in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_4621(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_4621,c,av);}
t2=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t3=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t4=C_fix((C_word)sizeof(long) * CHAR_BIT);
t5=C_i_foreign_ranged_integer_argumentp(((C_word*)t0)[4],t4);
t6=stub1297(C_SCHEME_UNDEFINED,t2,t3,t5);
t7=C_eqp(t6,C_fix(-1));
if(C_truep(t7)){
/* posixunix.scm:334: posix-error */
t8=lf[183];{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t8;
av2[1]=((C_word*)t0)[5];
av2[2]=lf[188];
av2[3]=lf[307];
av2[4]=lf[308];
av2[5]=((C_word*)t0)[2];
av2[6]=((C_word*)t0)[3];
f_2963(7,av2);}}
else{
t8=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t8;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* chicken.file.posix#file-open */
static void C_ccall f_4644(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +6,c,3)))){
C_save_and_reclaim((void*)f_4644,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+6);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
t5=C_i_pairp(t4);
t6=(C_truep(t5)?C_get_rest_arg(c,4,av,4,t0):((C_word*)t0)[2]);
t7=C_i_check_string_2(t2,lf[309]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4654,a[2]=t3,a[3]=t6,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:342: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t8;
av2[2]=t3;
av2[3]=lf[309];
tp(4,av2);}}

/* k4652 in chicken.file.posix#file-open */
static void C_ccall f_4654(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4654,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4657,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:343: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[309];
tp(4,av2);}}

/* k4655 in k4652 in chicken.file.posix#file-open */
static void C_ccall f_4657(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4657,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4661,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:344: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=lf[309];
tp(4,av2);}}

/* k4659 in k4655 in k4652 in chicken.file.posix#file-open */
static void C_ccall f_4661(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,7)))){
C_save_and_reclaim((void *)f_4661,c,av);}
a=C_alloc(4);
t2=C_open(t1,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4664,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
/* posixunix.scm:346: posix-error */
t5=lf[183];{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=lf[188];
av2[3]=lf[309];
av2[4]=lf[310];
av2[5]=((C_word*)t0)[5];
av2[6]=((C_word*)t0)[2];
av2[7]=((C_word*)t0)[3];
f_2963(8,av2);}}
else{
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k4662 in k4659 in k4655 in k4652 in chicken.file.posix#file-open */
static void C_ccall f_4664(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4664,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#file-close */
static void C_ccall f_4676(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_4676,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4680,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:351: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[312];
tp(4,av2);}}

/* k4678 in chicken.file.posix#file-close */
static void C_ccall f_4680(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4680,c,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4685,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li95),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];{
C_word *av2=av;
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
f_4685(2,av2);}}

/* loop in k4678 in chicken.file.posix#file-close */
static void C_ccall f_4685(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_4685,c,av);}
if(C_truep(C_fixnum_lessp(C_close(((C_word*)t0)[2]),C_fix(0)))){
t2=C_eqp(C_fix((C_word)errno),C_fix((C_word)EINTR));
if(C_truep(t2)){
/* posixunix.scm:355: ##sys#dispatch-interrupt */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[311]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[311]+1);
av2[1]=t1;
av2[2]=((C_word*)((C_word*)t0)[3])[1];
tp(3,av2);}}
else{
/* posixunix.scm:357: posix-error */
t3=lf[183];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=lf[188];
av2[3]=lf[312];
av2[4]=lf[313];
av2[5]=((C_word*)t0)[2];
f_2963(6,av2);}}}
else{
t2=C_SCHEME_UNDEFINED;
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* chicken.file.posix#file-read */
static void C_ccall f_4707(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +6,c,3)))){
C_save_and_reclaim((void*)f_4707,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+6);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4711,a[2]=t2,a[3]=t3,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:361: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t5;
av2[2]=t2;
av2[3]=lf[314];
tp(4,av2);}}

/* k4709 in chicken.file.posix#file-read */
static void C_ccall f_4711(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4711,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4714,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:362: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[314];
tp(4,av2);}}

/* k4712 in k4709 in chicken.file.posix#file-read */
static void C_ccall f_4714(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4714,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4717,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_u_i_car(((C_word*)t0)[5]);
f_4717(2,av2);}}
else{
/* posixunix.scm:363: scheme#make-string */
t3=*((C_word*)lf[317]+1);{
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

/* k4715 in k4712 in k4709 in chicken.file.posix#file-read */
static void C_ccall f_4717(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_4717,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4720,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_blockp(t1))){
if(C_truep(C_byteblockp(t1))){
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_4720(2,av2);}}
else{
/* posixunix.scm:365: ##sys#signal-hook */
t3=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[191];
av2[3]=lf[314];
av2[4]=lf[316];
av2[5]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}}
else{
/* posixunix.scm:365: ##sys#signal-hook */
t3=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[191];
av2[3]=lf[314];
av2[4]=lf[316];
av2[5]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}}

/* k4718 in k4715 in k4712 in k4709 in chicken.file.posix#file-read */
static void C_ccall f_4720(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,6)))){
C_save_and_reclaim((void *)f_4720,c,av);}
a=C_alloc(11);
t2=C_read(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4723,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
/* posixunix.scm:368: posix-error */
t5=lf[183];{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=lf[188];
av2[3]=lf[314];
av2[4]=lf[315];
av2[5]=((C_word*)t0)[2];
av2[6]=((C_word*)t0)[4];
f_2963(7,av2);}}
else{
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list2(&a,2,((C_word*)t0)[3],t2);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k4721 in k4718 in k4715 in k4712 in k4709 in chicken.file.posix#file-read */
static void C_ccall f_4723(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_4723,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list2(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#file-write */
static void C_ccall f_4747(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +6,c,3)))){
C_save_and_reclaim((void*)f_4747,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+6);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4751,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:373: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t5;
av2[2]=t2;
av2[3]=lf[318];
tp(4,av2);}}

/* k4749 in chicken.file.posix#file-write */
static void C_ccall f_4751(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_4751,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4754,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_blockp(((C_word*)t0)[3]))){
if(C_truep(C_byteblockp(((C_word*)t0)[3]))){
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_4754(2,av2);}}
else{
/* posixunix.scm:375: ##sys#signal-hook */
t3=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[191];
av2[3]=lf[318];
av2[4]=lf[320];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}}
else{
/* posixunix.scm:375: ##sys#signal-hook */
t3=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[191];
av2[3]=lf[318];
av2[4]=lf[320];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}}

/* k4752 in k4749 in chicken.file.posix#file-write */
static void C_ccall f_4754(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4754,c,av);}
a=C_alloc(6);
t2=C_i_pairp(((C_word*)t0)[2]);
t3=(C_truep(t2)?C_u_i_car(((C_word*)t0)[2]):C_block_size(((C_word*)t0)[3]));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4760,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:377: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t4;
av2[2]=t3;
av2[3]=lf[318];
tp(4,av2);}}

/* k4758 in k4752 in k4749 in chicken.file.posix#file-write */
static void C_ccall f_4760(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,6)))){
C_save_and_reclaim((void *)f_4760,c,av);}
a=C_alloc(4);
t2=C_write(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4763,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
/* posixunix.scm:380: posix-error */
t5=lf[183];{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=lf[188];
av2[3]=lf[318];
av2[4]=lf[319];
av2[5]=((C_word*)t0)[2];
av2[6]=((C_word*)t0)[4];
f_2963(7,av2);}}
else{
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k4761 in k4758 in k4752 in k4749 in chicken.file.posix#file-write */
static void C_ccall f_4763(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4763,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#file-mkstemp */
static void C_ccall f_4784(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4784,c,av);}
a=C_alloc(4);
t3=C_i_check_string_2(t2,lf[321]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4791,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:386: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[321];
tp(4,av2);}}

/* k4789 in chicken.file.posix#file-mkstemp */
static void C_ccall f_4791(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_4791,c,av);}
a=C_alloc(6);
t2=C_mkstemp(t1);
t3=C_block_size(t1);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4797,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=C_eqp(C_fix(-1),t2);
if(C_truep(t5)){
/* posixunix.scm:390: posix-error */
t6=lf[183];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=lf[188];
av2[3]=lf[321];
av2[4]=lf[322];
av2[5]=((C_word*)t0)[3];
f_2963(6,av2);}}
else{
t6=t4;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_4797(2,av2);}}}

/* k4795 in k4789 in chicken.file.posix#file-mkstemp */
static void C_ccall f_4797(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_4797,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4804,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:391: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[259]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[259]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(0);
av2[4]=C_fixnum_difference(((C_word*)t0)[5],C_fix(1));
tp(5,av2);}}

/* k4802 in k4795 in k4789 in chicken.file.posix#file-mkstemp */
static void C_ccall f_4804(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4804,c,av);}
/* posixunix.scm:391: scheme#values */{
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

/* chicken.file.posix#file-select */
static void C_ccall f_4816(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +9,c,2)))){
C_save_and_reclaim((void*)f_4816,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+9);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
t5=C_i_pairp(t4);
t6=(C_truep(t5)?C_get_rest_arg(c,4,av,4,t0):C_SCHEME_FALSE);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4823,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_not(t2))){
t8=t7;
f_4823(t8,C_SCHEME_END_OF_LIST);}
else{
if(C_truep(C_fixnump(t2))){
t8=t7;
f_4823(t8,C_a_i_list1(&a,1,t2));}
else{
t8=C_i_check_list_2(t2,lf[323]);
t9=t7;
f_4823(t9,t2);}}}

/* k4821 in chicken.file.posix#file-select */
static void C_fcall f_4823(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_4823,2,t0,t1);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4826,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_not(((C_word*)t0)[4]))){
t3=t2;
f_4826(t3,C_SCHEME_END_OF_LIST);}
else{
if(C_truep(C_fixnump(((C_word*)t0)[4]))){
t3=t2;
f_4826(t3,C_a_i_list1(&a,1,((C_word*)t0)[4]));}
else{
t3=C_i_check_list_2(((C_word*)t0)[4],lf[323]);
t4=t2;
f_4826(t4,((C_word*)t0)[4]);}}}

/* k4824 in k4821 in chicken.file.posix#file-select */
static void C_fcall f_4826(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_4826,2,t0,t1);}
a=C_alloc(10);
t2=C_u_i_length(((C_word*)t0)[2]);
t3=C_u_i_length(t1);
t4=C_fixnum_plus(t2,t3);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4834,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
t6=C_fix((C_word)sizeof(struct pollfd));
/* posixunix.scm:410: ##sys#make-blob */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[327]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[327]+1);
av2[1]=t5;
av2[2]=C_fixnum_times(t4,t6);
tp(3,av2);}}

/* k4832 in k4824 in k4821 in chicken.file.posix#file-select */
static void C_ccall f_4834(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_4834,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4837,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
if(C_truep(((C_word*)t0)[9])){
/* posixunix.scm:412: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[211]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[211]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[9];
tp(3,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_4837(2,av2);}}}

/* k4835 in k4832 in k4824 in k4821 in chicken.file.posix#file-select */
static void C_ccall f_4837(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4837,c,av);}
a=C_alloc(21);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5109,a[2]=((C_word*)t0)[2],a[3]=((C_word)li100),tmp=(C_word)a,a+=4,tmp);
t3=(
  f_5109(t2,C_fix(0),((C_word*)t0)[3])
);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5067,a[2]=((C_word*)t0)[2],a[3]=((C_word)li101),tmp=(C_word)a,a+=4,tmp);
t5=(
  f_5067(t4,((C_word*)t0)[4],((C_word*)t0)[5])
);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5058,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[3],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[10])){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5065,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:426: scheme#max */
t8=*((C_word*)lf[326]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=C_fix(0);
av2[3]=((C_word*)t0)[10];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
t7=t6;
f_5058(t7,C_fix(-1));}}

/* k4896 in k5056 in k4835 in k4832 in k4824 in k4821 in chicken.file.posix#file-select */
static void C_ccall f_4898(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,5)))){
C_save_and_reclaim((void *)f_4898,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4901,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4938,a[2]=((C_word*)t0)[5],a[3]=t4,a[4]=((C_word)li102),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_4938(t6,t2,((C_word*)t0)[6],C_SCHEME_END_OF_LIST,((C_word*)t0)[7]);}

/* k4899 in k4896 in k5056 in k4835 in k4832 in k4824 in k4821 in chicken.file.posix#file-select */
static void C_ccall f_4901(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4901,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4908,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[4])){
if(C_truep(C_fixnump(((C_word*)t0)[4]))){
t3=C_i_memq(((C_word*)t0)[4],((C_word*)t0)[5]);
t4=t2;
f_4908(t4,(C_truep(t3)?((C_word*)t0)[4]:C_SCHEME_FALSE));}
else{
t3=t2;
f_4908(t3,((C_word*)t0)[5]);}}
else{
t3=t2;
f_4908(t3,C_SCHEME_FALSE);}}

/* k4906 in k4899 in k4896 in k5056 in k4835 in k4832 in k4824 in k4821 in chicken.file.posix#file-select */
static void C_fcall f_4908(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_4908,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
if(C_truep(C_fixnump(((C_word*)t0)[2]))){
if(C_truep(C_i_memq(((C_word*)t0)[2],((C_word*)t0)[3]))){
/* posixunix.scm:447: scheme#values */{
C_word av2[4];
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=t1;
av2[3]=((C_word*)t0)[2];
C_values(4,av2);}}
else{
/* posixunix.scm:447: scheme#values */{
C_word av2[4];
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
C_values(4,av2);}}}
else{
/* posixunix.scm:447: scheme#values */{
C_word av2[4];
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
C_values(4,av2);}}}
else{
/* posixunix.scm:447: scheme#values */{
C_word av2[4];
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
C_values(4,av2);}}}

/* lp in k4896 in k5056 in k4835 in k4832 in k4824 in k4821 in chicken.file.posix#file-select */
static void C_fcall f_4938(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_4938,5,t0,t1,t2,t3,t4);}
a=C_alloc(3);
if(C_truep(C_i_nullp(t4))){
/* posixunix.scm:440: ##sys#fast-reverse */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[325]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[325]+1);
av2[1]=t1;
av2[2]=t3;
tp(3,av2);}}
else{
t5=C_i_foreign_fixnum_argumentp(t2);
t6=(C_truep(((C_word*)t0)[2])?stub1469(C_SCHEME_UNDEFINED,t5,C_i_foreign_block_argumentp(((C_word*)t0)[2])):stub1469(C_SCHEME_UNDEFINED,t5,C_SCHEME_FALSE));
if(C_truep(t6)){
t7=C_fixnum_plus(t2,C_fix(1));
t8=C_i_car(t4);
t9=C_a_i_cons(&a,2,t8,t3);
/* posixunix.scm:445: lp */
t11=t1;
t12=t7;
t13=t9;
t14=C_u_i_cdr(t4);
t1=t11;
t2=t12;
t3=t13;
t4=t14;
goto loop;}
else{
/* posixunix.scm:446: lp */
t11=t1;
t12=C_fixnum_plus(t2,C_fix(1));
t13=t3;
t14=C_i_cdr(t4);
t1=t11;
t2=t12;
t3=t13;
t4=t14;
goto loop;}}}

/* lp in k5056 in k4835 in k4832 in k4824 in k4821 in chicken.file.posix#file-select */
static void C_fcall f_4997(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_4997,5,t0,t1,t2,t3,t4);}
a=C_alloc(3);
if(C_truep(C_i_nullp(t4))){
/* posixunix.scm:432: ##sys#fast-reverse */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[325]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[325]+1);
av2[1]=t1;
av2[2]=t3;
tp(3,av2);}}
else{
t5=C_i_foreign_fixnum_argumentp(t2);
t6=(C_truep(((C_word*)t0)[2])?stub1450(C_SCHEME_UNDEFINED,t5,C_i_foreign_block_argumentp(((C_word*)t0)[2])):stub1450(C_SCHEME_UNDEFINED,t5,C_SCHEME_FALSE));
if(C_truep(t6)){
t7=C_fixnum_plus(t2,C_fix(1));
t8=C_i_car(t4);
t9=C_a_i_cons(&a,2,t8,t3);
/* posixunix.scm:437: lp */
t11=t1;
t12=t7;
t13=t9;
t14=C_u_i_cdr(t4);
t1=t11;
t2=t12;
t3=t13;
t4=t14;
goto loop;}
else{
/* posixunix.scm:438: lp */
t11=t1;
t12=C_fixnum_plus(t2,C_fix(1));
t13=t3;
t14=C_i_cdr(t4);
t1=t11;
t2=t12;
t3=t13;
t4=t14;
goto loop;}}}

/* k5056 in k4835 in k4832 in k4824 in k4821 in chicken.file.posix#file-select */
static void C_fcall f_5058(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,0,6)))){
C_save_and_reclaim_args((void *)trf_5058,2,t0,t1);}
a=C_alloc(15);
t2=(C_truep(((C_word*)t0)[2])?C_i_foreign_block_argumentp(((C_word*)t0)[2]):C_SCHEME_FALSE);
t3=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t4=C_i_foreign_fixnum_argumentp(t1);
t5=stub1425(C_SCHEME_UNDEFINED,t2,t3,t4);
if(C_truep(C_fixnum_lessp(t5,C_fix(0)))){
/* posixunix.scm:428: posix-error */
t6=lf[183];{
C_word av2[7];
av2[0]=t6;
av2[1]=((C_word*)t0)[4];
av2[2]=lf[188];
av2[3]=lf[323];
av2[4]=lf[324];
av2[5]=((C_word*)t0)[5];
av2[6]=((C_word*)t0)[6];
f_2963(7,av2);}}
else{
t6=C_eqp(t5,C_fix(0));
if(C_truep(t6)){
t7=C_i_pairp(((C_word*)t0)[5]);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_SCHEME_FALSE);
if(C_truep(C_i_pairp(((C_word*)t0)[6]))){
/* posixunix.scm:429: scheme#values */{
C_word av2[4];
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=t8;
av2[3]=C_SCHEME_END_OF_LIST;
C_values(4,av2);}}
else{
/* posixunix.scm:429: scheme#values */{
C_word av2[4];
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=t8;
av2[3]=C_SCHEME_FALSE;
C_values(4,av2);}}}
else{
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4898,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4997,a[2]=((C_word*)t0)[2],a[3]=t9,a[4]=((C_word)li103),tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_4997(t11,t7,C_fix(0),C_SCHEME_END_OF_LIST,((C_word*)t0)[9]);}}}

/* k5063 in k4835 in k4832 in k4824 in k4821 in chicken.file.posix#file-select */
static void C_ccall f_5065(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,1)))){
C_save_and_reclaim((void *)f_5065,c,av);}
a=C_alloc(33);
t2=((C_word*)t0)[2];
f_5058(t2,C_s_a_i_times(&a,2,t1,C_fix(1000)));}

/* doloop1384 in k4835 in k4832 in k4824 in k4821 in chicken.file.posix#file-select */
static C_word C_fcall f_5067(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
return(t3);}
else{
t3=C_i_car(t2);
t4=C_i_foreign_fixnum_argumentp(t1);
t5=C_i_foreign_fixnum_argumentp(t3);
t6=(C_truep(((C_word*)t0)[2])?stub1410(C_SCHEME_UNDEFINED,t4,t5,C_i_foreign_block_argumentp(((C_word*)t0)[2])):stub1410(C_SCHEME_UNDEFINED,t4,t5,C_SCHEME_FALSE));
t8=C_fixnum_plus(t1,C_fix(1));
t9=C_u_i_cdr(t2);
t1=t8;
t2=t9;
goto loop;}}

/* doloop1383 in k4835 in k4832 in k4824 in k4821 in chicken.file.posix#file-select */
static C_word C_fcall f_5109(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
return(t3);}
else{
t3=C_i_car(t2);
t4=C_i_foreign_fixnum_argumentp(t1);
t5=C_i_foreign_fixnum_argumentp(t3);
t6=(C_truep(((C_word*)t0)[2])?stub1393(C_SCHEME_UNDEFINED,t4,t5,C_i_foreign_block_argumentp(((C_word*)t0)[2])):stub1393(C_SCHEME_UNDEFINED,t4,t5,C_SCHEME_FALSE));
t8=C_fixnum_plus(t1,C_fix(1));
t9=C_u_i_cdr(t2);
t1=t8;
t2=t9;
goto loop;}}

/* chicken.process#create-pipe */
static void C_ccall f_5193(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_5193,c,av);}
a=C_alloc(3);
t2=C_rest_nullp(c,2);
t3=(C_truep(t2)?C_SCHEME_FALSE:C_get_rest_arg(c,2,av,2,t0));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5200,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fixnum_lessp(C_pipe(C_SCHEME_FALSE),C_fix(0)))){
/* posixunix.scm:460: posix-error */
t5=lf[183];{
C_word av2[5];
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[188];
av2[3]=lf[328];
av2[4]=lf[329];
f_2963(5,av2);}}
else{
/* posixunix.scm:461: scheme#values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=C_fix((C_word)C_pipefds[ 0 ]);
av2[3]=C_fix((C_word)C_pipefds[ 1 ]);
C_values(4,av2);}}}

/* k5198 in chicken.process#create-pipe */
static void C_ccall f_5200(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5200,c,av);}
/* posixunix.scm:461: scheme#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix((C_word)C_pipefds[ 0 ]);
av2[3]=C_fix((C_word)C_pipefds[ 1 ]);
C_values(4,av2);}}

/* chicken.process.signal#set-signal-mask! */
static void C_ccall f_5249(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_5249,c,av);}
a=C_alloc(9);
t3=C_i_check_list_2(t2,lf[330]);
t4=C_sigemptyset(C_fix(0));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5261,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5273,a[2]=t7,a[3]=((C_word)li106),tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_5273(t9,t5,t2);}

/* k5256 in for-each-loop1497 in chicken.process.signal#set-signal-mask! */
static void C_ccall f_5258(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5258,c,av);}
t2=C_sigaddset(((C_word*)t0)[2]);
t3=((C_word*)((C_word*)t0)[3])[1];
f_5273(t3,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k5259 in chicken.process.signal#set-signal-mask! */
static void C_ccall f_5261(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5261,c,av);}
if(C_truep(C_fixnum_lessp(C_sigprocmask_set(C_fix(0)),C_fix(0)))){
/* posixunix.scm:561: posix-error */
t2=lf[183];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[91];
av2[3]=lf[330];
av2[4]=lf[331];
f_2963(5,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* for-each-loop1497 in chicken.process.signal#set-signal-mask! */
static void C_fcall f_5273(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_5273,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5258,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:557: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t4;
av2[2]=t3;
av2[3]=lf[330];
tp(4,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5296 */
static void C_ccall f_5298(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_5298,c,av);}
a=C_alloc(18);
t2=C_mutate((C_word*)lf[136]+1 /* (set! chicken.process.signal#signal-mask ...) */,t1);
t3=C_mutate((C_word*)lf[138]+1 /* (set! chicken.process.signal#signal-masked? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5300,a[2]=((C_word)li108),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[137]+1 /* (set! chicken.process.signal#signal-mask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5306,a[2]=((C_word)li109),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[139]+1 /* (set! chicken.process.signal#signal-unmask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5322,a[2]=((C_word)li110),tmp=(C_word)a,a+=3,tmp));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5340,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7757,a[2]=((C_word)li208),tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7760,a[2]=((C_word)li209),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:602: chicken.base#getter-with-setter */
t9=*((C_word*)lf[464]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=t6;
av2[2]=t7;
av2[3]=t8;
av2[4]=lf[481];
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}

/* chicken.process.signal#signal-masked? in k5296 */
static void C_ccall f_5300(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_5300,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5304,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:578: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[332];
tp(4,av2);}}

/* k5302 in chicken.process.signal#signal-masked? in k5296 */
static void C_ccall f_5304(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5304,c,av);}
t2=C_sigprocmask_get(C_fix(0));
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_sigismember(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.process.signal#signal-mask! in k5296 */
static void C_ccall f_5306(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_5306,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5310,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:584: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[333];
tp(4,av2);}}

/* k5308 in chicken.process.signal#signal-mask! in k5296 */
static void C_ccall f_5310(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5310,c,av);}
t2=C_sigemptyset(C_fix(0));
t3=C_sigaddset(((C_word*)t0)[2]);
if(C_truep(C_fixnum_lessp(C_sigprocmask_block(C_fix(0)),C_fix(0)))){
/* posixunix.scm:588: posix-error */
t4=lf[183];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[91];
av2[3]=lf[333];
av2[4]=lf[334];
f_2963(5,av2);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* chicken.process.signal#signal-unmask! in k5296 */
static void C_ccall f_5322(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_5322,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5326,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:592: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[335];
tp(4,av2);}}

/* k5324 in chicken.process.signal#signal-unmask! in k5296 */
static void C_ccall f_5326(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5326,c,av);}
t2=C_sigemptyset(C_fix(0));
t3=C_sigaddset(((C_word*)t0)[2]);
if(C_truep(C_fixnum_lessp(C_sigprocmask_unblock(C_fix(0)),C_fix(0)))){
/* posixunix.scm:596: posix-error */
t4=lf[183];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[91];
av2[3]=lf[335];
av2[4]=lf[336];
f_2963(5,av2);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k5338 in k5296 */
static void C_ccall f_5340(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_5340,c,av);}
a=C_alloc(9);
t2=C_mutate((C_word*)lf[174]+1 /* (set! chicken.process-context.posix#current-user-id ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5344,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7735,a[2]=((C_word)li206),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7738,a[2]=((C_word)li207),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:612: chicken.base#getter-with-setter */
t6=*((C_word*)lf[464]+1);{
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
av2[4]=lf[477];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k5342 in k5338 in k5296 */
static void C_ccall f_5344(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_5344,c,av);}
a=C_alloc(9);
t2=C_mutate((C_word*)lf[172]+1 /* (set! chicken.process-context.posix#current-effective-user-id ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5348,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7713,a[2]=((C_word)li204),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7716,a[2]=((C_word)li205),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:623: chicken.base#getter-with-setter */
t6=*((C_word*)lf[464]+1);{
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
av2[4]=lf[473];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5348(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_5348,c,av);}
a=C_alloc(9);
t2=C_mutate((C_word*)lf[173]+1 /* (set! chicken.process-context.posix#current-group-id ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5352,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7691,a[2]=((C_word)li202),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7694,a[2]=((C_word)li203),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:633: chicken.base#getter-with-setter */
t6=*((C_word*)lf[464]+1);{
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
av2[4]=lf[469];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5352(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,6)))){
C_save_and_reclaim((void *)f_5352,c,av);}
a=C_alloc(24);
t2=C_mutate((C_word*)lf[171]+1 /* (set! chicken.process-context.posix#current-effective-group-id ...) */,t1);
t3=C_mutate((C_word*)lf[181]+1 /* (set! chicken.process-context.posix#user-information ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5354,a[2]=((C_word)li111),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[177]+1 /* (set! chicken.process-context.posix#current-user-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5408,a[2]=((C_word)li112),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[178]+1 /* (set! chicken.process-context.posix#current-effective-user-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5422,a[2]=((C_word)li113),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate(&lf[216] /* (set! chicken.posix#chown ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5436,a[2]=((C_word)li114),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[179]+1 /* (set! chicken.process-context.posix#create-session ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5483,a[2]=((C_word)li115),tmp=(C_word)a,a+=3,tmp));
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5500,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7651,a[2]=((C_word)li200),tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7669,a[2]=((C_word)li201),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:705: chicken.base#getter-with-setter */
t11=*((C_word*)lf[464]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t11;
av2[1]=t8;
av2[2]=t9;
av2[3]=t10;
av2[4]=lf[465];
((C_proc)(void*)(*((C_word*)t11+1)))(5,av2);}}

/* chicken.process-context.posix#user-information in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5354(C_word c,C_word *av){
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
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_5354,c,av);}
a=C_alloc(7);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5361,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnump(t2))){
t6=t5;
f_5361(t6,C_getpwuid(t2));}
else{
t6=C_i_check_string_2(t2,lf[340]);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5400,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:657: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t7;
av2[2]=t2;
av2[3]=lf[340];
tp(4,av2);}}}

/* k5359 in chicken.process-context.posix#user-information in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_fcall f_5361(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_5361,2,t0,t1);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(C_truep(((C_word*)t0)[2])?*((C_word*)lf[337]+1):*((C_word*)lf[338]+1));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5374,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-nonnull-c-string */
t4=*((C_word*)lf[339]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_user->pw_name);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k5372 in k5359 in chicken.process-context.posix#user-information in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5374(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_5374,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5378,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[339]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_user->pw_passwd);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5376 in k5372 in k5359 in chicken.process-context.posix#user-information in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5378(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_5378,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5382,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[339]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_PW_GECOS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5380 in k5376 in k5372 in k5359 in chicken.process-context.posix#user-information in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5382(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_5382,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5386,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[185]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_user->pw_dir);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5384 in k5380 in k5376 in k5372 in k5359 in chicken.process-context.posix#user-information in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5386(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_5386,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5390,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[185]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_user->pw_shell);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5388 in k5384 in k5380 in k5376 in k5372 in k5359 in chicken.process-context.posix#user-information in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5390(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_5390,c,av);}
/* posixunix.scm:658: g1569 */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
av2[4]=C_fix((C_word)C_user->pw_uid);
av2[5]=C_fix((C_word)C_user->pw_gid);
av2[6]=((C_word*)t0)[6];
av2[7]=((C_word*)t0)[7];
av2[8]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(9,av2);}}

/* k5398 in chicken.process-context.posix#user-information in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5400(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5400,c,av);}
t2=((C_word*)t0)[2];
f_5361(t2,C_getpwnam(t1));}

/* chicken.process-context.posix#current-user-name in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5408(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5408,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5416,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5420,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:671: chicken.process-context.posix#current-user-id */
t4=*((C_word*)lf[174]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5414 in chicken.process-context.posix#current-user-name in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5416(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5416,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_car(t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5418 in chicken.process-context.posix#current-user-name in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5420(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5420,c,av);}
/* posixunix.scm:670: chicken.process-context.posix#user-information */
t2=*((C_word*)lf[181]+1);{
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

/* chicken.process-context.posix#current-effective-user-name in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5422(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5422,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5430,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5434,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:676: chicken.process-context.posix#current-effective-user-id */
t4=*((C_word*)lf[172]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5428 in chicken.process-context.posix#current-effective-user-name in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5430(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5430,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_car(t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5432 in chicken.process-context.posix#current-effective-user-name in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5434(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5434,c,av);}
/* posixunix.scm:675: chicken.process-context.posix#user-information */
t2=*((C_word*)lf[181]+1);{
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

/* chicken.posix#chown in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_fcall f_5436(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_5436,5,t1,t2,t3,t4,t5);}
a=C_alloc(7);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5440,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm:680: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t6;
av2[2]=t4;
av2[3]=t2;
tp(4,av2);}}

/* k5438 in chicken.posix#chown in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5440(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_5440,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5443,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm:681: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k5441 in k5438 in chicken.posix#chown in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5443(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_5443,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5446,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5458,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm:683: chicken.base#port? */
t4=*((C_word*)lf[193]+1);{
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

/* k5444 in k5441 in k5438 in chicken.posix#chown in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5446(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_5446,c,av);}
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
/* posixunix.scm:694: posix-error */
t2=lf[183];{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[188];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[341];
av2[5]=((C_word*)t0)[4];
av2[6]=((C_word*)t0)[5];
av2[7]=((C_word*)t0)[6];
f_2963(8,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5456 in k5441 in k5438 in chicken.posix#chown in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5458(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_5458,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5462,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:684: chicken.file.posix#port->fileno */
t3=*((C_word*)lf[73]+1);{
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
else{
if(C_truep(C_fixnump(((C_word*)t0)[5]))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fchown(((C_word*)t0)[5],((C_word*)t0)[3],((C_word*)t0)[4]);
f_5446(2,av2);}}
else{
if(C_truep(C_i_stringp(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5478,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:689: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[6];
tp(4,av2);}}
else{
/* posixunix.scm:690: ##sys#signal-hook */
t2=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[191];
av2[3]=((C_word*)t0)[6];
av2[4]=lf[342];
av2[5]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}}}

/* k5460 in k5456 in k5441 in k5438 in chicken.posix#chown in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5462(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5462,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fchown(t1,((C_word*)t0)[3],((C_word*)t0)[4]);
f_5446(2,av2);}}

/* k5476 in k5456 in k5441 in k5438 in chicken.posix#chown in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5478(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5478,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_chown(t1,((C_word*)t0)[3],((C_word*)t0)[4]);
f_5446(2,av2);}}

/* chicken.process-context.posix#create-session in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5483(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_5483,c,av);}
a=C_alloc(7);
t2=C_setsid(C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5487,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5493,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:700: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[93]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[93]+1);
av2[1]=t4;
tp(2,av2);}}
else{
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5485 in chicken.process-context.posix#create-session in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5487(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5487,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5491 in chicken.process-context.posix#create-session in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5493(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5493,c,av);}
/* posixunix.scm:701: ##sys#error */
t2=*((C_word*)lf[95]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[343];
av2[3]=lf[344];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5500(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5500,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[180]+1 /* (set! chicken.process-context.posix#process-group-id ...) */,t1);
t3=C_mutate((C_word*)lf[3]+1 /* (set! chicken.file.posix#create-symbolic-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5502,a[2]=((C_word)li116),tmp=(C_word)a,a+=3,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5531,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[264]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[264]+1);
av2[1]=t4;
av2[2]=C_fixnum_plus(C_fix((C_word)FILENAME_MAX),C_fix(1));
av2[3]=C_make_character(32);
tp(4,av2);}}

/* chicken.file.posix#create-symbolic-link in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5502(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_5502,c,av);}
a=C_alloc(5);
t4=C_i_check_string_2(t2,lf[345]);
t5=C_i_check_string_2(t3,lf[345]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5523,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:730: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t6;
av2[2]=t2;
av2[3]=lf[345];
tp(4,av2);}}

/* k5521 in chicken.file.posix#create-symbolic-link in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5523(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5523,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5527,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:731: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[345];
tp(4,av2);}}

/* k5525 in k5521 in chicken.file.posix#create-symbolic-link in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5527(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_5527,c,av);}
if(C_truep(C_fixnum_lessp(C_symlink(((C_word*)t0)[2],t1),C_fix(0)))){
/* posixunix.scm:733: posix-error */
t2=lf[183];{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[188];
av2[3]=lf[346];
av2[4]=lf[347];
av2[5]=((C_word*)t0)[4];
av2[6]=((C_word*)t0)[5];
f_2963(7,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5531(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(132,c,9)))){
C_save_and_reclaim((void *)f_5531,c,av);}
a=C_alloc(132);
t2=C_mutate((C_word*)lf[348]+1 /* (set! ##sys#read-symbolic-link ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5532,a[2]=t1,a[3]=((C_word)li117),tmp=(C_word)a,a+=4,tmp));
t3=C_mutate((C_word*)lf[4]+1 /* (set! chicken.file.posix#read-symbolic-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5551,a[2]=((C_word)li121),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[15]+1 /* (set! chicken.file.posix#file-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5666,a[2]=((C_word)li122),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[362]+1 /* (set! ##sys#custom-input-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5688,a[2]=((C_word)li137),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[376]+1 /* (set! ##sys#custom-output-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6201,a[2]=((C_word)li146),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[26]+1 /* (set! chicken.file.posix#file-truncate ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6456,a[2]=((C_word)li147),tmp=(C_word)a,a+=3,tmp));
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6501,a[2]=((C_word)li148),tmp=(C_word)a,a+=3,tmp);
t9=C_mutate((C_word*)lf[16]+1 /* (set! chicken.file.posix#file-lock ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6587,a[2]=t8,a[3]=((C_word)li150),tmp=(C_word)a,a+=4,tmp));
t10=C_mutate((C_word*)lf[17]+1 /* (set! chicken.file.posix#file-lock/blocking ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6618,a[2]=t8,a[3]=((C_word)li152),tmp=(C_word)a,a+=4,tmp));
t11=C_mutate((C_word*)lf[25]+1 /* (set! chicken.file.posix#file-test-lock ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6649,a[2]=t8,a[3]=((C_word)li153),tmp=(C_word)a,a+=4,tmp));
t12=C_mutate((C_word*)lf[27]+1 /* (set! chicken.file.posix#file-unlock ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6676,a[2]=((C_word)li155),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[2]+1 /* (set! chicken.file.posix#create-fifo ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6719,a[2]=((C_word)li156),tmp=(C_word)a,a+=3,tmp));
t14=C_fix((C_word)sizeof(struct tm));
t15=C_mutate((C_word*)lf[84]+1 /* (set! chicken.time.posix#string->time ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6765,a[2]=t14,a[3]=((C_word)li157),tmp=(C_word)a,a+=4,tmp));
t16=C_fix((C_word)sizeof(struct tm));
t17=C_mutate((C_word*)lf[80]+1 /* (set! chicken.time.posix#utc-time->seconds ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6802,a[2]=t16,a[3]=((C_word)li158),tmp=(C_word)a,a+=4,tmp));
t18=C_mutate((C_word*)lf[86]+1 /* (set! chicken.time.posix#local-timezone-abbreviation ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6821,a[2]=((C_word)li159),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[132]+1 /* (set! chicken.process.signal#set-alarm! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6828,a[2]=((C_word)li160),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[108]+1 /* (set! chicken.process#process-fork ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6837,a[2]=((C_word)li164),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[107]+1 /* (set! chicken.process#process-execute ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6936,a[2]=((C_word)li167),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate(&lf[271] /* (set! chicken.posix#process-wait-impl ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7014,a[2]=((C_word)li169),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate((C_word*)lf[176]+1 /* (set! chicken.process-context.posix#parent-process-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7052,a[2]=((C_word)li170),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate((C_word*)lf[110]+1 /* (set! chicken.process#process-signal ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7055,a[2]=((C_word)li171),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate((C_word*)lf[109]+1 /* (set! chicken.process#process-run ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7095,a[2]=((C_word)li172),tmp=(C_word)a,a+=3,tmp));
t26=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7149,a[2]=((C_word)li176),tmp=(C_word)a,a+=3,tmp);
t27=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7186,a[2]=((C_word)li179),tmp=(C_word)a,a+=3,tmp);
t28=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7206,a[2]=((C_word)li180),tmp=(C_word)a,a+=3,tmp);
t29=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7218,a[2]=((C_word)li181),tmp=(C_word)a,a+=3,tmp);
t30=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7247,a[2]=t29,a[3]=t27,a[4]=((C_word)li183),tmp=(C_word)a,a+=5,tmp);
t31=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7292,a[2]=t28,a[3]=((C_word)li184),tmp=(C_word)a,a+=4,tmp);
t32=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7303,a[2]=t28,a[3]=((C_word)li185),tmp=(C_word)a,a+=4,tmp);
t33=C_mutate(&lf[412] /* (set! chicken.posix#process-impl ...) */,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7314,a[2]=t30,a[3]=t31,a[4]=t26,a[5]=t32,a[6]=((C_word)li188),tmp=(C_word)a,a+=7,tmp));
t34=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7370,a[2]=((C_word)li193),tmp=(C_word)a,a+=3,tmp);
t35=C_mutate((C_word*)lf[122]+1 /* (set! chicken.process#process ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7441,a[2]=t34,a[3]=((C_word)li195),tmp=(C_word)a,a+=4,tmp));
t36=C_mutate((C_word*)lf[123]+1 /* (set! chicken.process#process* ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7507,a[2]=t34,a[3]=((C_word)li196),tmp=(C_word)a,a+=4,tmp));
t37=C_mutate((C_word*)lf[170]+1 /* (set! chicken.process-context.posix#set-root-directory! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7577,a[2]=((C_word)li197),tmp=(C_word)a,a+=3,tmp));
t38=C_mutate((C_word*)lf[111]+1 /* (set! chicken.process#process-spawn ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7596,a[2]=((C_word)li198),tmp=(C_word)a,a+=3,tmp));
t39=C_a_i_provide(&a,1,lf[418]);
t40=C_mutate((C_word*)lf[419]+1 /* (set! chicken.errno#errno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7602,a[2]=((C_word)li199),tmp=(C_word)a,a+=3,tmp));
t41=C_set_block_item(lf[421] /* chicken.errno#errno/2big */,0,C_fix((C_word)E2BIG));
t42=C_set_block_item(lf[422] /* chicken.errno#errno/acces */,0,C_fix((C_word)EACCES));
t43=C_set_block_item(lf[423] /* chicken.errno#errno/again */,0,C_fix((C_word)EAGAIN));
t44=C_set_block_item(lf[424] /* chicken.errno#errno/badf */,0,C_fix((C_word)EBADF));
t45=C_set_block_item(lf[425] /* chicken.errno#errno/busy */,0,C_fix((C_word)EBUSY));
t46=C_set_block_item(lf[426] /* chicken.errno#errno/child */,0,C_fix((C_word)ECHILD));
t47=C_set_block_item(lf[427] /* chicken.errno#errno/deadlk */,0,C_fix((C_word)EDEADLK));
t48=C_set_block_item(lf[428] /* chicken.errno#errno/dom */,0,C_fix((C_word)EDOM));
t49=C_set_block_item(lf[429] /* chicken.errno#errno/exist */,0,C_fix((C_word)EEXIST));
t50=C_set_block_item(lf[430] /* chicken.errno#errno/fault */,0,C_fix((C_word)EFAULT));
t51=C_set_block_item(lf[431] /* chicken.errno#errno/fbig */,0,C_fix((C_word)EFBIG));
t52=C_set_block_item(lf[432] /* chicken.errno#errno/ilseq */,0,C_fix((C_word)EILSEQ));
t53=C_set_block_item(lf[433] /* chicken.errno#errno/intr */,0,C_fix((C_word)EINTR));
t54=C_set_block_item(lf[434] /* chicken.errno#errno/inval */,0,C_fix((C_word)EINVAL));
t55=C_set_block_item(lf[435] /* chicken.errno#errno/io */,0,C_fix((C_word)EIO));
t56=C_set_block_item(lf[436] /* chicken.errno#errno/isdir */,0,C_fix((C_word)EISDIR));
t57=C_set_block_item(lf[437] /* chicken.errno#errno/mfile */,0,C_fix((C_word)EMFILE));
t58=C_set_block_item(lf[438] /* chicken.errno#errno/mlink */,0,C_fix((C_word)EMLINK));
t59=C_set_block_item(lf[439] /* chicken.errno#errno/nametoolong */,0,C_fix((C_word)ENAMETOOLONG));
t60=C_set_block_item(lf[440] /* chicken.errno#errno/nfile */,0,C_fix((C_word)ENFILE));
t61=C_set_block_item(lf[441] /* chicken.errno#errno/nodev */,0,C_fix((C_word)ENODEV));
t62=C_set_block_item(lf[442] /* chicken.errno#errno/noent */,0,C_fix((C_word)ENOENT));
t63=C_set_block_item(lf[443] /* chicken.errno#errno/noexec */,0,C_fix((C_word)ENOEXEC));
t64=C_set_block_item(lf[444] /* chicken.errno#errno/nolck */,0,C_fix((C_word)ENOLCK));
t65=C_set_block_item(lf[445] /* chicken.errno#errno/nomem */,0,C_fix((C_word)ENOMEM));
t66=C_set_block_item(lf[446] /* chicken.errno#errno/nospc */,0,C_fix((C_word)ENOSPC));
t67=C_set_block_item(lf[447] /* chicken.errno#errno/nosys */,0,C_fix((C_word)ENOSYS));
t68=C_set_block_item(lf[448] /* chicken.errno#errno/notdir */,0,C_fix((C_word)ENOTDIR));
t69=C_set_block_item(lf[449] /* chicken.errno#errno/notempty */,0,C_fix((C_word)ENOTEMPTY));
t70=C_set_block_item(lf[450] /* chicken.errno#errno/notty */,0,C_fix((C_word)ENOTTY));
t71=C_set_block_item(lf[451] /* chicken.errno#errno/nxio */,0,C_fix((C_word)ENXIO));
t72=C_set_block_item(lf[452] /* chicken.errno#errno/perm */,0,C_fix((C_word)EPERM));
t73=C_set_block_item(lf[453] /* chicken.errno#errno/pipe */,0,C_fix((C_word)EPIPE));
t74=C_set_block_item(lf[454] /* chicken.errno#errno/range */,0,C_fix((C_word)ERANGE));
t75=C_set_block_item(lf[455] /* chicken.errno#errno/rofs */,0,C_fix((C_word)EROFS));
t76=C_set_block_item(lf[456] /* chicken.errno#errno/spipe */,0,C_fix((C_word)ESPIPE));
t77=C_set_block_item(lf[457] /* chicken.errno#errno/srch */,0,C_fix((C_word)ESRCH));
t78=C_set_block_item(lf[458] /* chicken.errno#errno/wouldblock */,0,C_fix((C_word)EWOULDBLOCK));
t79=C_set_block_item(lf[459] /* chicken.errno#errno/xdev */,0,C_fix((C_word)EXDEV));
t80=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t80;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t80+1)))(2,av2);}}

/* ##sys#read-symbolic-link in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5532(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5532,c,av);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5537,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:742: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=t3;
tp(4,av2);}}

/* k5535 in ##sys#read-symbolic-link in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5537(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_5537,c,av);}
t2=C_do_readlink(t1,((C_word*)t0)[2]);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm:744: posix-error */
t3=lf[183];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[188];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[349];
av2[5]=((C_word*)t0)[5];
f_2963(6,av2);}}
else{
/* posixunix.scm:745: scheme#substring */
t3=*((C_word*)lf[350]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(0);
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* chicken.file.posix#read-symbolic-link in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5551(C_word c,C_word *av){
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
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_5551,c,av);}
a=C_alloc(7);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=C_i_check_string_2(t2,lf[351]);
if(C_truep(t4)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5566,a[2]=t2,a[3]=((C_word)li118),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5572,a[2]=((C_word)li120),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:751: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=t6;
av2[3]=t7;
C_call_with_values(4,av2);}}
else{
/* posixunix.scm:766: ##sys#read-symbolic-link */
t6=*((C_word*)lf[348]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t1;
av2[2]=t2;
av2[3]=lf[351];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* a5565 in chicken.file.posix#read-symbolic-link in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5566(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5566,c,av);}
/* posixunix.scm:751: chicken.pathname#decompose-directory */
t2=*((C_word*)lf[352]+1);{
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

/* a5571 in chicken.file.posix#read-symbolic-link in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5572(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_5572,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5580,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(C_truep(t2)?t2:lf[357]);
if(C_truep(t3)){
/* posixunix.scm:753: scheme#string-append */
t7=*((C_word*)lf[104]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
/* posixunix.scm:753: scheme#string-append */
t7=*((C_word*)lf[104]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
av2[3]=lf[358];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}

/* k5578 in a5571 in chicken.file.posix#read-symbolic-link in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5580(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5580,c,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5582,a[2]=t3,a[3]=((C_word)li119),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_5582(t5,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* loop in k5578 in a5571 in chicken.file.posix#read-symbolic-link in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_fcall f_5582(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_5582,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5592,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:756: chicken.pathname#make-pathname */
t5=*((C_word*)lf[353]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=C_i_car(t2);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k5590 in loop in k5578 in a5571 in chicken.file.posix#read-symbolic-link in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5592(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_5592,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5598,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm:757: ##sys#file-exists? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[356]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[356]+1);
av2[1]=t2;
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[351];
tp(6,av2);}}

/* k5596 in k5590 in loop in k5578 in a5571 in chicken.file.posix#read-symbolic-link in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5598(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,5)))){
C_save_and_reclaim((void *)f_5598,c,av);}
a=C_alloc(13);
if(C_truep(t1)){
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5607,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5610,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm:759: chicken.file.posix#symbolic-link? */
t5=*((C_word*)lf[36]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
/* posixunix.scm:765: ##sys#signal-hook */
t2=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
av2[2]=lf[188];
av2[3]=lf[351];
av2[4]=lf[355];
av2[5]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}

/* k5605 in k5596 in k5590 in loop in k5578 in a5571 in chicken.file.posix#read-symbolic-link in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5607(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5607,c,av);}
/* posixunix.scm:758: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_5582(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k5608 in k5596 in k5590 in loop in k5578 in a5571 in chicken.file.posix#read-symbolic-link in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5610(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_5610,c,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5613,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm:760: ##sys#read-symbolic-link */
t3=*((C_word*)lf[348]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=lf[351];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
/* posixunix.scm:758: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_5582(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[7]);}}

/* k5611 in k5608 in k5596 in k5590 in loop in k5578 in a5571 in chicken.file.posix#read-symbolic-link in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5613(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_5613,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5619,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm:761: chicken.pathname#absolute-pathname? */
t3=*((C_word*)lf[354]+1);{
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

/* k5617 in k5611 in k5608 in k5596 in k5590 in loop in k5578 in a5571 in chicken.file.posix#read-symbolic-link in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5619(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5619,c,av);}
if(C_truep(t1)){
/* posixunix.scm:758: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_5582(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
/* posixunix.scm:763: chicken.pathname#make-pathname */
t2=*((C_word*)lf[353]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[6];
av2[2]=((C_word*)t0)[7];
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k5651 in chicken.file.posix#file-link in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5653(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5653,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5657,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:769: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t2;
av2[2]=C_i_foreign_string_argumentp(((C_word*)t0)[4]);
tp(3,av2);}}

/* k5655 in k5651 in chicken.file.posix#file-link in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5657(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_5657,c,av);}
if(C_truep(C_fixnum_lessp(stub1635(C_SCHEME_UNDEFINED,((C_word*)t0)[2],t1),C_fix(0)))){
/* posixunix.scm:774: posix-error */
t2=lf[183];{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[188];
av2[3]=lf[360];
av2[4]=lf[361];
av2[5]=((C_word*)t0)[4];
av2[6]=((C_word*)t0)[5];
f_2963(7,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* chicken.file.posix#file-link in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5666(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5666,c,av);}
a=C_alloc(5);
t4=C_i_check_string_2(t2,lf[359]);
t5=C_i_check_string_2(t3,lf[359]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5653,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:769: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t6;
av2[2]=C_i_foreign_string_argumentp(t2);
tp(3,av2);}}

/* ##sys#custom-input-port in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5688(C_word c,C_word *av){
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
C_word *a;
if(c<5) C_bad_min_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_5688,c,av);}
a=C_alloc(9);
t5=C_rest_nullp(c,5);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_get_rest_arg(c,5,av,5,t0));
t7=C_rest_nullp(c,5);
t8=C_rest_nullp(c,6);
t9=(C_truep(t8)?C_fix(1):C_get_rest_arg(c,6,av,5,t0));
t10=C_rest_nullp(c,6);
t11=C_rest_nullp(c,7);
t12=(C_truep(t11)?*((C_word*)lf[363]+1):C_get_rest_arg(c,7,av,5,t0));
t13=C_rest_nullp(c,7);
t14=C_rest_nullp(c,8);
t15=(C_truep(t14)?C_SCHEME_FALSE:C_get_rest_arg(c,8,av,5,t0));
t16=C_rest_nullp(c,8);
t17=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5716,a[2]=t9,a[3]=t2,a[4]=t4,a[5]=t3,a[6]=t15,a[7]=t1,a[8]=t12,tmp=(C_word)a,a+=9,tmp);
if(C_truep(t6)){
/* posixunix.scm:779: ##sys#file-nonblocking! */
t18=*((C_word*)lf[305]+1);{
C_word *av2=av;
av2[0]=t18;
av2[1]=t17;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t18+1)))(3,av2);}}
else{
t18=t17;{
C_word *av2=av;
av2[0]=t18;
av2[1]=C_SCHEME_UNDEFINED;
f_5716(2,av2);}}}

/* k5714 in ##sys#custom-input-port in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5716(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_5716,c,av);}
a=C_alloc(9);
t2=C_fixnump(((C_word*)t0)[2]);
t3=(C_truep(t2)?((C_word*)t0)[2]:C_block_size(((C_word*)t0)[2]));
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5722,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t3,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_fixnump(((C_word*)t0)[2]))){
/* posixunix.scm:781: ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[264]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[264]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=((C_word*)t0)[2];
f_5722(2,av2);}}}

/* k5720 in k5714 in ##sys#custom-input-port in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5722(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(80,c,8)))){
C_save_and_reclaim((void *)f_5722,c,av);}
a=C_alloc(80);
t2=C_fix(0);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_fix(0);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5723,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li123),tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5752,a[2]=t5,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5760,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[6],a[8]=t3,a[9]=t5,a[10]=((C_word)li125),tmp=(C_word)a,a+=11,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5856,a[2]=t10,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5862,a[2]=t7,a[3]=t5,a[4]=t3,a[5]=t8,a[6]=((C_word)li126),tmp=(C_word)a,a+=7,tmp);
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5887,a[2]=t5,a[3]=t3,a[4]=t6,a[5]=((C_word)li127),tmp=(C_word)a,a+=6,tmp);
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5899,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=((C_word)li128),tmp=(C_word)a,a+=7,tmp);
t15=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5915,a[2]=t7,a[3]=t5,a[4]=t3,a[5]=t8,a[6]=((C_word)li129),tmp=(C_word)a,a+=7,tmp);
t16=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5930,a[2]=t5,a[3]=t3,a[4]=t1,a[5]=t8,a[6]=((C_word)li131),tmp=(C_word)a,a+=7,tmp);
t17=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6006,a[2]=t5,a[3]=t3,a[4]=t1,a[5]=t8,a[6]=((C_word)li135),tmp=(C_word)a,a+=7,tmp);
t18=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6125,a[2]=t5,a[3]=t3,a[4]=t1,a[5]=((C_word)li136),tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:831: chicken.port#make-input-port */
t19=*((C_word*)lf[375]+1);{
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=t19;
av2[1]=t11;
av2[2]=t12;
av2[3]=t13;
av2[4]=t14;
av2[5]=t15;
av2[6]=t16;
av2[7]=t17;
av2[8]=t18;
((C_proc)(void*)(*((C_word*)t19+1)))(9,av2);}}

/* ready? in k5720 in k5714 in ##sys#custom-input-port in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_fcall f_5723(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_5723,2,t0,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5727,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:786: ##sys#file-select-one */
t3=*((C_word*)lf[306]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5725 in ready? in k5720 in k5714 in ##sys#custom-input-port in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5727(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_5727,c,av);}
t2=C_eqp(C_fix(-1),t1);
if(C_truep(t2)){
t3=C_eqp(C_fix((C_word)errno),C_fix((C_word)EWOULDBLOCK));
t4=(C_truep(t3)?t3:C_eqp(C_fix((C_word)errno),C_fix((C_word)EAGAIN)));
if(C_truep(t4)){
t5=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
/* posixunix.scm:791: posix-error */
t5=lf[183];{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[188];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[364];
av2[5]=((C_word*)t0)[4];
av2[6]=((C_word*)t0)[5];
f_2963(7,av2);}}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_eqp(C_fix(1),t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* peek in k5720 in k5714 in ##sys#custom-input-port in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static C_word C_fcall f_5752(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_stack_overflow_check;{}
t1=C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]);
return((C_truep(t1)?C_SCHEME_END_OF_FILE:C_subchar(((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1])));}

/* fetch in k5720 in k5714 in ##sys#custom-input-port in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_fcall f_5760(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,2)))){
C_save_and_reclaim_args((void *)trf_5760,2,t0,t1);}
a=C_alloc(14);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5766,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word)li124),tmp=(C_word)a,a+=12,tmp));
t5=((C_word*)t3)[1];{
C_word av2[2];
av2[0]=t5;
av2[1]=t1;
f_5766(2,av2);}}

/* loop in fetch in k5720 in k5714 in ##sys#custom-input-port in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5766(C_word c,C_word *av){
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
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(11,c,6)))){
C_save_and_reclaim((void *)f_5766,c,av);}
a=C_alloc(11);
t2=C_read(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=C_eqp(t2,C_fix(-1));
if(C_truep(t3)){
t4=C_eqp(C_fix((C_word)errno),C_fix((C_word)EWOULDBLOCK));
t5=(C_truep(t4)?t4:C_eqp(C_fix((C_word)errno),C_fix((C_word)EAGAIN)));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5785,a[2]=((C_word*)t0)[5],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:806: ##sys#thread-block-for-i/o! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[366]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[366]+1);
av2[1]=t6;
av2[2]=*((C_word*)lf[367]+1);
av2[3]=((C_word*)t0)[2];
av2[4]=lf[368];
tp(5,av2);}}
else{
t6=C_eqp(C_fix((C_word)errno),C_fix((C_word)EINTR));
if(C_truep(t6)){
/* posixunix.scm:810: ##sys#dispatch-interrupt */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[311]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[311]+1);
av2[1]=t1;
av2[2]=((C_word*)((C_word*)t0)[5])[1];
tp(3,av2);}}
else{
/* posixunix.scm:811: posix-error */
t7=lf[183];{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t7;
av2[1]=t1;
av2[2]=lf[188];
av2[3]=((C_word*)t0)[6];
av2[4]=lf[369];
av2[5]=((C_word*)t0)[2];
av2[6]=((C_word*)t0)[7];
f_2963(7,av2);}}}}
else{
t4=(C_truep(((C_word*)t0)[8])?C_eqp(t2,C_fix(0)):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5818,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
/* posixunix.scm:815: more? */
t6=((C_word*)t0)[8];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)C_fast_retrieve_proc(t6))(2,av2);}}
else{
t5=C_mutate(((C_word *)((C_word*)t0)[9])+1,t2);
t6=C_set_block_item(((C_word*)t0)[10],0,C_fix(0));
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}}

/* k5783 in loop in fetch in k5720 in k5714 in ##sys#custom-input-port in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5785(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5785,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5788,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:807: ##sys#thread-yield! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[365]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[365]+1);
av2[1]=t2;
tp(2,av2);}}

/* k5786 in k5783 in loop in fetch in k5720 in k5714 in ##sys#custom-input-port in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5788(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5788,c,av);}
/* posixunix.scm:808: loop */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
f_5766(2,av2);}}

/* k5816 in loop in fetch in k5720 in k5714 in ##sys#custom-input-port in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5818(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,6)))){
C_save_and_reclaim((void *)f_5818,c,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5821,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:817: ##sys#thread-yield! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[365]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[365]+1);
av2[1]=t2;
tp(2,av2);}}
else{
t2=C_read(((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5827,a[2]=((C_word*)t0)[7],a[3]=t3,a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t5=C_eqp(((C_word*)t3)[1],C_fix(-1));
if(C_truep(t5)){
t6=C_eqp(C_fix((C_word)errno),C_fix((C_word)EWOULDBLOCK));
t7=(C_truep(t6)?t6:C_eqp(C_fix((C_word)errno),C_fix((C_word)EAGAIN)));
if(C_truep(t7)){
t8=C_set_block_item(t3,0,C_fix(0));
t9=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t3)[1]);
t10=C_set_block_item(((C_word*)t0)[8],0,C_fix(0));
t11=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t11;
av2[1]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}
else{
/* posixunix.scm:824: posix-error */
t8=lf[183];{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t8;
av2[1]=t4;
av2[2]=lf[188];
av2[3]=((C_word*)t0)[9];
av2[4]=lf[370];
av2[5]=((C_word*)t0)[4];
av2[6]=((C_word*)t0)[10];
f_2963(7,av2);}}}
else{
t6=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t3)[1]);
t7=C_set_block_item(((C_word*)t0)[8],0,C_fix(0));
t8=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}}

/* k5819 in k5816 in loop in fetch in k5720 in k5714 in ##sys#custom-input-port in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5821(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5821,c,av);}
/* posixunix.scm:818: loop */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
f_5766(2,av2);}}

/* k5825 in k5816 in loop in fetch in k5720 in k5714 in ##sys#custom-input-port in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5827(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5827,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_set_block_item(((C_word*)t0)[4],0,C_fix(0));
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5854 in k5720 in k5714 in ##sys#custom-input-port in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5856(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5856,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(3),((C_word*)t0)[3]);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)((C_word*)t0)[2])[1];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a5861 in k5720 in k5714 in ##sys#custom-input-port in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5862(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5862,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5866,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[4])[1]))){
/* posixunix.scm:834: fetch */
t3=((C_word*)t0)[5];
f_5760(t3,t2);}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_5866(2,av2);}}}

/* k5864 in a5861 in k5720 in k5714 in ##sys#custom-input-port in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5866(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5866,c,av);}
t2=(
/* posixunix.scm:835: peek */
  f_5752(((C_word*)t0)[2])
);
if(C_truep(C_eofp(t2))){
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_fixnum_plus(((C_word*)((C_word*)t0)[4])[1],C_fix(1));
t4=C_set_block_item(((C_word*)t0)[4],0,t3);
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* a5886 in k5720 in k5714 in ##sys#custom-input-port in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5887(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5887,c,av);}
t2=C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t2)){
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* posixunix.scm:840: ready? */
t3=((C_word*)t0)[4];
f_5723(t3,t1);}}

/* a5898 in k5720 in k5714 in ##sys#custom-input-port in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5899(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,6)))){
C_save_and_reclaim((void *)f_5899,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5903,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(C_close(((C_word*)t0)[3]),C_fix(0)))){
/* posixunix.scm:843: posix-error */
t3=lf[183];{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[188];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[371];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[5];
f_2963(7,av2);}}
else{
/* posixunix.scm:844: on-close */
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}}

/* k5901 in a5898 in k5720 in k5714 in ##sys#custom-input-port in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5903(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5903,c,av);}
/* posixunix.scm:844: on-close */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a5914 in k5720 in k5714 in ##sys#custom-input-port in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5915(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5915,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5919,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[4])[1]))){
/* posixunix.scm:847: fetch */
t3=((C_word*)t0)[5];
f_5760(t3,t2);}
else{
/* posixunix.scm:848: peek */
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=(
/* posixunix.scm:848: peek */
  f_5752(((C_word*)t0)[2])
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5917 in a5914 in k5720 in k5714 in ##sys#custom-input-port in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5919(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5919,c,av);}
/* posixunix.scm:848: peek */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(
/* posixunix.scm:848: peek */
  f_5752(((C_word*)t0)[3])
);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a5929 in k5720 in k5714 in ##sys#custom-input-port in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5930(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_5930,c,av);}
a=C_alloc(11);
t6=(C_truep(t3)?t3:C_fixnum_difference(C_block_size(t4),t5));
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5940,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=t8,a[7]=((C_word*)t0)[5],a[8]=((C_word)li130),tmp=(C_word)a,a+=9,tmp));
t10=((C_word*)t8)[1];
f_5940(t10,t1,t6,C_fix(0),t5);}

/* loop in a5929 in k5720 in k5714 in ##sys#custom-input-port in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_fcall f_5940(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim_args((void *)trf_5940,5,t0,t1,t2,t3,t4);}
a=C_alloc(8);
t5=C_eqp(C_fix(0),t2);
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
/* posixunix.scm:857: loop */
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
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5988,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=t4,tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm:859: fetch */
t7=((C_word*)t0)[7];
f_5760(t7,t6);}}}

/* k5986 in loop in a5929 in k5720 in k5714 in ##sys#custom-input-port in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_5988(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5988,c,av);}
t2=C_eqp(C_fix(0),((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(t2)){
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* posixunix.scm:862: loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_5940(t3,((C_word*)t0)[3],((C_word*)t0)[6],((C_word*)t0)[4],((C_word*)t0)[7]);}}

/* a6005 in k5720 in k5714 in ##sys#custom-input-port in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6006(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6006,c,av);}
a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6010,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
/* posixunix.scm:865: fetch */
t5=((C_word*)t0)[5];
f_5760(t5,t4);}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_6010(2,av2);}}}

/* k6008 in a6005 in k5720 in k5714 in ##sys#custom-input-port in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6010(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6010,c,av);}
a=C_alloc(15);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_FILE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(C_truep(((C_word*)t0)[5])?((C_word*)t0)[5]:C_fixnum_difference(*((C_word*)lf[372]+1),((C_word*)((C_word*)t0)[2])[1]));
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6024,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word)li133),tmp=(C_word)a,a+=8,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6080,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[2],a[4]=((C_word)li134),tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:869: ##sys#call-with-values */{
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

/* a6023 in k6008 in a6005 in k5720 in k5714 in ##sys#custom-input-port in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6024(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6024,c,av);}
a=C_alloc(8);
t2=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]);
t3=C_i_fixnum_min(((C_word*)((C_word*)t0)[4])[1],t2);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6034,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li132),tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm:870: ##sys#scan-buffer-line */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[373]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[373]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[5];
av2[3]=t3;
av2[4]=((C_word*)((C_word*)t0)[2])[1];
av2[5]=t4;
tp(6,av2);}}

/* a6033 in a6023 in k6008 in a6005 in k5720 in k5714 in ##sys#custom-input-port in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6034(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_6034,c,av);}
a=C_alloc(7);
t3=C_fixnum_difference(t2,((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(C_fixnum_greater_or_equal_p(t3,((C_word*)((C_word*)t0)[3])[1]))){
/* posixunix.scm:877: scheme#values */{
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
t4=C_fixnum_difference(((C_word*)((C_word*)t0)[3])[1],t3);
t5=C_set_block_item(((C_word*)t0)[3],0,t4);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6054,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm:880: fetch */
t7=((C_word*)t0)[6];
f_5760(t7,t6);}}

/* k6052 in a6033 in a6023 in k6008 in a6005 in k5720 in k5714 in ##sys#custom-input-port in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6054(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6054,c,av);}
if(C_truep(C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
t2=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[4])[1]);
/* posixunix.scm:882: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[5];
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)((C_word*)t0)[2])[1];
av2[4]=C_i_fixnum_min(((C_word*)((C_word*)t0)[3])[1],t2);
C_values(5,av2);}}
else{
/* posixunix.scm:885: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[5];
av2[2]=C_SCHEME_FALSE;
av2[3]=((C_word*)((C_word*)t0)[2])[1];
av2[4]=C_SCHEME_FALSE;
C_values(5,av2);}}}

/* a6079 in k6008 in a6005 in k5720 in k5714 in ##sys#custom-input-port in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6080(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6080,c,av);}
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

/* a6124 in k5720 in k5714 in ##sys#custom-input-port in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6125(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_6125,c,av);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=lf[374];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6135,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:898: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[259]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[259]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)((C_word*)t0)[2])[1];
av2[4]=((C_word*)((C_word*)t0)[3])[1];
tp(5,av2);}}}

/* k6133 in a6124 in k5720 in k5714 in ##sys#custom-input-port in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6135(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6135,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* ##sys#custom-output-port in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6201(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6201,c,av);}
a=C_alloc(8);
t5=C_rest_nullp(c,5);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_get_rest_arg(c,5,av,5,t0));
t7=C_rest_nullp(c,5);
t8=C_rest_nullp(c,6);
t9=(C_truep(t8)?C_fix(0):C_get_rest_arg(c,6,av,5,t0));
t10=C_rest_nullp(c,6);
t11=C_rest_nullp(c,7);
t12=(C_truep(t11)?*((C_word*)lf[363]+1):C_get_rest_arg(c,7,av,5,t0));
t13=C_rest_nullp(c,7);
t14=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6223,a[2]=t4,a[3]=t2,a[4]=t3,a[5]=t9,a[6]=t1,a[7]=t12,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t6)){
/* posixunix.scm:907: ##sys#file-nonblocking! */
t15=*((C_word*)lf[305]+1);{
C_word *av2=av;
av2[0]=t15;
av2[1]=t14;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t15+1)))(3,av2);}}
else{
t15=t14;{
C_word *av2=av;
av2[0]=t15;
av2[1]=C_SCHEME_UNDEFINED;
f_6223(2,av2);}}}

/* k6221 in ##sys#custom-output-port in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6223(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6223,c,av);}
a=C_alloc(26);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6224,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word)li139),tmp=(C_word)a,a+=7,tmp);
t7=C_fixnump(((C_word*)t0)[5]);
t8=(C_truep(t7)?((C_word*)t0)[5]:C_block_size(((C_word*)t0)[5]));
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6290,a[2]=t3,a[3]=t6,a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[2],a[9]=((C_word*)t0)[3],tmp=(C_word)a,a+=10,tmp);
t10=C_eqp(C_fix(0),t8);
if(C_truep(t10)){
t11=t9;
f_6290(t11,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6331,a[2]=t3,a[3]=((C_word)li143),tmp=(C_word)a,a+=4,tmp));}
else{
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6345,a[2]=t9,a[3]=t8,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_fixnump(((C_word*)t0)[5]))){
/* posixunix.scm:930: ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[264]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[264]+1);
av2[1]=t11;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}
else{
t12=t11;{
C_word *av2=av;
av2[0]=t12;
av2[1]=((C_word*)t0)[5];
f_6345(2,av2);}}}}

/* poke1782 in k6221 in ##sys#custom-output-port in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6224(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_6224,c,av);}
a=C_alloc(12);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6230,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=t5,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word)li138),tmp=(C_word)a,a+=10,tmp));
t7=((C_word*)t5)[1];{
C_word *av2=av;
av2[0]=t7;
av2[1]=t1;
f_6230(2,av2);}}

/* loop in poke1782 in k6221 in ##sys#custom-output-port in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6230(C_word c,C_word *av){
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
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_6230,c,av);}
a=C_alloc(6);
t2=C_write(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=C_eqp(C_fix(-1),t2);
if(C_truep(t3)){
t4=C_eqp(C_fix((C_word)errno),C_fix((C_word)EWOULDBLOCK));
t5=(C_truep(t4)?t4:C_eqp(C_fix((C_word)errno),C_fix((C_word)EAGAIN)));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6249,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:916: ##sys#thread-yield! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[365]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[365]+1);
av2[1]=t6;
tp(2,av2);}}
else{
t6=C_eqp(C_fix((C_word)errno),C_fix((C_word)EINTR));
if(C_truep(t6)){
/* posixunix.scm:919: ##sys#dispatch-interrupt */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[311]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[311]+1);
av2[1]=t1;
av2[2]=((C_word*)((C_word*)t0)[6])[1];
tp(3,av2);}}
else{
/* posixunix.scm:921: posix-error */
t7=lf[183];{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t7;
av2[1]=t1;
av2[2]=((C_word*)t0)[7];
av2[3]=lf[188];
av2[4]=lf[377];
av2[5]=((C_word*)t0)[2];
av2[6]=((C_word*)t0)[8];
f_2963(7,av2);}}}}
else{
if(C_truep(C_fixnum_lessp(t2,((C_word*)t0)[4]))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6280,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:923: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[259]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[259]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
av2[4]=((C_word*)t0)[4];
tp(5,av2);}}
else{
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}

/* k6247 in loop in poke1782 in k6221 in ##sys#custom-output-port in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6249(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6249,c,av);}
/* posixunix.scm:917: poke */
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

/* k6278 in loop in poke1782 in k6221 in ##sys#custom-output-port in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6280(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6280,c,av);}
/* posixunix.scm:923: poke */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=C_fixnum_difference(((C_word*)t0)[4],((C_word*)t0)[5]);
((C_proc)C_fast_retrieve_proc(t2))(4,av2);}}

/* k6288 in k6221 in ##sys#custom-output-port in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_fcall f_6290(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,0,4)))){
C_save_and_reclaim_args((void *)trf_6290,2,t0,t1);}
a=C_alloc(22);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,t1);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6295,a[2]=t5,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6301,a[2]=((C_word*)t0)[4],a[3]=((C_word)li140),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6307,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[5],a[6]=((C_word)li141),tmp=(C_word)a,a+=7,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6323,a[2]=((C_word*)t0)[4],a[3]=((C_word)li142),tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:948: chicken.port#make-output-port */
t10=*((C_word*)lf[379]+1);{
C_word av2[5];
av2[0]=t10;
av2[1]=t6;
av2[2]=t7;
av2[3]=t8;
av2[4]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}

/* k6293 in k6288 in k6221 in ##sys#custom-output-port in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6295(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6295,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(3),((C_word*)t0)[3]);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)((C_word*)t0)[2])[1];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a6300 in k6288 in k6221 in ##sys#custom-output-port in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6301(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6301,c,av);}
/* posixunix.scm:950: store */
t3=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* a6306 in k6288 in k6221 in ##sys#custom-output-port in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6307(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,6)))){
C_save_and_reclaim((void *)f_6307,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6311,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(C_close(((C_word*)t0)[3]),C_fix(0)))){
/* posixunix.scm:953: posix-error */
t3=lf[183];{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[188];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[378];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[5];
f_2963(7,av2);}}
else{
/* posixunix.scm:954: on-close */
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}}

/* k6309 in a6306 in k6288 in k6221 in ##sys#custom-output-port in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6311(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6311,c,av);}
/* posixunix.scm:954: on-close */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a6322 in k6288 in k6221 in ##sys#custom-output-port in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6323(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6323,c,av);}
/* posixunix.scm:956: store */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* f_6331 in k6221 in ##sys#custom-output-port in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6331(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6331,c,av);}
if(C_truep(t2)){
/* posixunix.scm:929: poke */
t3=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_block_size(t2);
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6343 in k6221 in ##sys#custom-output-port in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6345(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_6345,c,av);}
a=C_alloc(9);
t2=C_fix(0);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=((C_word*)t0)[2];
f_6290(t4,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6346,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word)li145),tmp=(C_word)a,a+=7,tmp));}

/* f_6346 in k6343 in k6221 in ##sys#custom-output-port in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6346(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_6346,c,av);}
a=C_alloc(11);
if(C_truep(t2)){
t3=C_fixnum_difference(((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t4=C_block_size(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6363,a[2]=((C_word*)t0)[3],a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t2,a[8]=((C_word)li144),tmp=(C_word)a,a+=9,tmp));
t8=((C_word*)t6)[1];
f_6363(t8,t1,t3,C_fix(0),t4);}
else{
if(C_truep(C_fixnum_lessp(C_fix(0),((C_word*)((C_word*)t0)[3])[1]))){
/* posixunix.scm:946: poke */
t3=((C_word*)((C_word*)t0)[4])[1];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}}

/* loop */
static void C_fcall f_6363(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,0,4)))){
C_save_and_reclaim_args((void *)trf_6363,5,t0,t1,t2,t3,t4);}
a=C_alloc(7);
t5=C_eqp(C_fix(0),t2);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6373,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm:936: poke */
t7=((C_word*)((C_word*)t0)[5])[1];{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[4];
((C_proc)C_fast_retrieve_proc(t7))(4,av2);}}
else{
if(C_truep(C_fixnum_lessp(t2,t4))){
t6=C_substring_copy(((C_word*)t0)[7],((C_word*)t0)[6],t3,t2,((C_word*)((C_word*)t0)[2])[1]);
/* posixunix.scm:941: loop */
t10=t1;
t11=C_fix(0);
t12=t2;
t13=C_fixnum_difference(t4,t2);
t1=t10;
t2=t11;
t3=t12;
t4=t13;
goto loop;}
else{
t6=C_substring_copy(((C_word*)t0)[7],((C_word*)t0)[6],t3,t4,((C_word*)((C_word*)t0)[2])[1]);
t7=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],t4);
t8=C_set_block_item(((C_word*)t0)[2],0,t7);
t9=t1;{
C_word av2[2];
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}}

/* k6371 in loop */
static void C_ccall f_6373(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6373,c,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_fix(0));
/* posixunix.scm:938: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_6363(t3,((C_word*)t0)[4],((C_word*)t0)[5],C_fix(0),((C_word*)t0)[6]);}

/* chicken.file.posix#file-truncate in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6456(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6456,c,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6460,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:965: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[211]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[211]+1);
av2[1]=t4;
av2[2]=t3;
av2[3]=lf[380];
tp(4,av2);}}

/* k6458 in chicken.file.posix#file-truncate in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6460(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_6460,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6466,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6473,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_stringp(((C_word*)t0)[3]))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6480,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:966: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[380];
tp(4,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6486,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:967: chicken.base#port? */
t5=*((C_word*)lf[193]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k6464 in k6458 in chicken.file.posix#file-truncate in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_fcall f_6466(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,6)))){
C_save_and_reclaim_args((void *)trf_6466,2,t0,t1);}
if(C_truep(t1)){
/* posixunix.scm:971: posix-error */
t2=lf[183];{
C_word av2[7];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[188];
av2[3]=lf[380];
av2[4]=lf[381];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
f_2963(7,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6471 in k6458 in chicken.file.posix#file-truncate in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6473(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6473,c,av);}
t2=((C_word*)t0)[2];
f_6466(t2,C_fixnum_lessp(t1,C_fix(0)));}

/* k6478 in k6458 in chicken.file.posix#file-truncate in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6480(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6480,c,av);}
t2=((C_word*)t0)[2];
f_6466(t2,C_fixnum_lessp(C_truncate(t1,((C_word*)t0)[3]),C_fix(0)));}

/* k6484 in k6458 in chicken.file.posix#file-truncate in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6486(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_6486,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6490,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:967: chicken.file.posix#port->fileno */
t3=*((C_word*)lf[73]+1);{
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
if(C_truep(C_fixnump(((C_word*)t0)[4]))){
t2=((C_word*)t0)[2];
f_6466(t2,C_fixnum_lessp(C_ftruncate(((C_word*)t0)[4],((C_word*)t0)[3]),C_fix(0)));}
else{
/* posixunix.scm:969: ##sys#error */
t2=*((C_word*)lf[95]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[5];
av2[2]=lf[380];
av2[3]=lf[382];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}}

/* k6488 in k6484 in k6458 in chicken.file.posix#file-truncate in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6490(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6490,c,av);}
t2=((C_word*)t0)[2];
f_6466(t2,C_fixnum_lessp(C_ftruncate(t1,((C_word*)t0)[3]),C_fix(0)));}

/* setup in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_fcall f_6501(C_word t1,C_word t2,C_word t3,C_word t4){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_6501,4,t1,t2,t3,t4);}
a=C_alloc(9);
t5=C_i_nullp(t3);
t6=(C_truep(t5)?C_fix(0):C_i_car(t3));
t7=C_i_nullp(t3);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_SCHEME_TRUE:C_i_car(t8));
t11=t10;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_i_nullp(t8);
t14=(C_truep(t13)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t15=C_i_check_port_2(t2,C_fix(0),C_SCHEME_TRUE,t4);
t16=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6519,a[2]=t2,a[3]=t6,a[4]=t12,a[5]=t1,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm:985: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[211]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[211]+1);
av2[1]=t16;
av2[2]=t6;
av2[3]=t4;
tp(4,av2);}}

/* k6517 in setup in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6519(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_6519,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6522,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_eqp(C_SCHEME_TRUE,((C_word*)((C_word*)t0)[4])[1]);
if(C_truep(t3)){
t4=C_set_block_item(((C_word*)t0)[4],0,C_fix(0));
t5=t2;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
f_6522(2,av2);}}
else{
/* posixunix.scm:988: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[211]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[211]+1);
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
av2[3]=((C_word*)t0)[6];
tp(4,av2);}}}

/* k6520 in k6517 in setup in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6522(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_6522,c,av);}
a=C_alloc(5);
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_i_nequalp(t2,C_fix(1));
t4=(C_truep(t3)?C_fix((C_word)F_RDLCK):C_fix((C_word)F_WRLCK));
t5=C_flock_setup(t4,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);
t6=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_record4(&a,4,lf[383],((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* chicken.file.posix#file-lock in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6587(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +9,c,2)))){
C_save_and_reclaim((void*)f_6587,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+9);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6593,a[2]=t2,a[3]=t5,a[4]=((C_word*)t0)[2],a[5]=t3,a[6]=((C_word)li149),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];{
C_word *av2=av;
av2[0]=t7;
av2[1]=t1;
f_6593(2,av2);}}

/* loop in chicken.file.posix#file-lock in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6593(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_6593,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6597,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:996: setup */
f_6501(t2,((C_word*)t0)[2],((C_word*)t0)[5],lf[384]);}

/* k6595 in loop in chicken.file.posix#file-lock in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6597(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_6597,c,av);}
if(C_truep(C_fixnum_lessp(C_flock_lock(((C_word*)t0)[2]),C_fix(0)))){
t2=C_eqp(C_fix((C_word)errno),C_fix((C_word)EINTR));
if(C_truep(t2)){
/* posixunix.scm:999: ##sys#dispatch-interrupt */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[311]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[311]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)((C_word*)t0)[4])[1];
tp(3,av2);}}
else{
/* posixunix.scm:992: posix-error */
t3=lf[183];{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[188];
av2[3]=lf[384];
av2[4]=lf[385];
av2[5]=C_slot(t1,C_fix(1));
av2[6]=C_slot(t1,C_fix(2));
av2[7]=C_slot(t1,C_fix(3));
f_2963(8,av2);}}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* chicken.file.posix#file-lock/blocking in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6618(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +9,c,2)))){
C_save_and_reclaim((void*)f_6618,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+9);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6624,a[2]=t2,a[3]=t5,a[4]=((C_word*)t0)[2],a[5]=t3,a[6]=((C_word)li151),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];{
C_word *av2=av;
av2[0]=t7;
av2[1]=t1;
f_6624(2,av2);}}

/* loop in chicken.file.posix#file-lock/blocking in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6624(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_6624,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6628,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1005: setup */
f_6501(t2,((C_word*)t0)[2],((C_word*)t0)[5],lf[386]);}

/* k6626 in loop in chicken.file.posix#file-lock/blocking in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6628(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_6628,c,av);}
if(C_truep(C_fixnum_lessp(C_flock_lockw(((C_word*)t0)[2]),C_fix(0)))){
t2=C_eqp(C_fix((C_word)errno),C_fix((C_word)EINTR));
if(C_truep(t2)){
/* posixunix.scm:1008: ##sys#dispatch-interrupt */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[311]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[311]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)((C_word*)t0)[4])[1];
tp(3,av2);}}
else{
/* posixunix.scm:992: posix-error */
t3=lf[183];{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[188];
av2[3]=lf[386];
av2[4]=lf[387];
av2[5]=C_slot(t1,C_fix(1));
av2[6]=C_slot(t1,C_fix(2));
av2[7]=C_slot(t1,C_fix(3));
f_2963(8,av2);}}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* chicken.file.posix#file-test-lock in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6649(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +4,c,4)))){
C_save_and_reclaim((void*)f_6649,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+4);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6653,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1013: setup */
f_6501(t4,t2,t3,lf[388]);}

/* k6651 in chicken.file.posix#file-test-lock in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6653(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_6653,c,av);}
t2=C_flock_test(((C_word*)t0)[2]);
if(C_truep(t2)){
t3=C_eqp(t2,C_fix(0));
t4=C_i_not(t3);
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=(C_truep(t4)?t2:C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
/* posixunix.scm:992: posix-error */
t3=lf[183];{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[188];
av2[3]=lf[388];
av2[4]=lf[389];
av2[5]=C_slot(t1,C_fix(1));
av2[6]=C_slot(t1,C_fix(2));
av2[7]=C_slot(t1,C_fix(3));
f_2963(8,av2);}}}

/* chicken.file.posix#file-unlock in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6676(C_word c,C_word *av){
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
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_6676,c,av);}
a=C_alloc(4);
t3=C_i_check_structure_2(t2,lf[383],lf[390]);
t4=C_slot(t2,C_fix(2));
t5=C_slot(t2,C_fix(3));
t6=C_flock_setup(C_fix((C_word)F_UNLCK),t4,t5);
t7=C_slot(t2,C_fix(1));
if(C_truep(C_fixnum_lessp(C_flock_lock(t7),C_fix(0)))){
t8=C_eqp(C_fix((C_word)errno),C_fix((C_word)EINTR));
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6705,a[2]=t2,a[3]=((C_word)li154),tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1024: ##sys#dispatch-interrupt */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[311]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[311]+1);
av2[1]=t1;
av2[2]=t9;
tp(3,av2);}}
else{
/* posixunix.scm:1026: posix-error */
t9=lf[183];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t9;
av2[1]=t1;
av2[2]=lf[188];
av2[3]=lf[390];
av2[4]=lf[391];
av2[5]=t2;
f_2963(6,av2);}}}
else{
t8=C_SCHEME_UNDEFINED;
t9=t1;{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}

/* a6704 in chicken.file.posix#file-unlock in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6705(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6705,c,av);}
/* posixunix.scm:1025: chicken.file.posix#file-unlock */
t2=*((C_word*)lf[27]+1);{
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

/* chicken.file.posix#create-fifo in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6719(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,3)))){
C_save_and_reclaim((void*)f_6719,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t4=C_i_check_string_2(t2,lf[392]);
t5=C_i_pairp(t3);
t6=(C_truep(t5)?C_get_rest_arg(c,3,av,3,t0):C_fixnum_or(C_fix((C_word)S_IRUSR | S_IWUSR | S_IXUSR),C_fixnum_or(C_fix((C_word)S_IRGRP | S_IWGRP | S_IXGRP),C_fix((C_word)S_IROTH | S_IWOTH | S_IXOTH))));
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6729,a[2]=t6,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1035: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t7;
av2[2]=t6;
av2[3]=lf[392];
tp(4,av2);}}

/* k6727 in chicken.file.posix#create-fifo in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6729(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_6729,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6743,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1036: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[392];
tp(4,av2);}}

/* k6741 in k6727 in chicken.file.posix#create-fifo in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6743(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_6743,c,av);}
if(C_truep(C_fixnum_lessp(C_mkfifo(t1,((C_word*)t0)[2]),C_fix(0)))){
/* posixunix.scm:1037: posix-error */
t2=lf[183];{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[188];
av2[3]=lf[392];
av2[4]=lf[393];
av2[5]=((C_word*)t0)[4];
av2[6]=((C_word*)t0)[2];
f_2963(7,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* chicken.time.posix#string->time in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6765(C_word c,C_word *av){
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
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_6765,c,av);}
a=C_alloc(5);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?lf[394]:C_get_rest_arg(c,3,av,3,t0));
t5=C_i_check_string_2(t2,lf[395]);
t6=C_i_check_string_2(t4,lf[395]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6782,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1048: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t7;
av2[2]=t2;
av2[3]=lf[395];
tp(4,av2);}}

/* k6780 in chicken.time.posix#string->time in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6782(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6782,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6786,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1048: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* k6784 in k6780 in chicken.time.posix#string->time in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6786(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_6786,c,av);}
a=C_alloc(17);
t2=C_a_i_vector(&a,10,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6794,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1048: ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[264]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[264]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=C_make_character(0);
tp(4,av2);}}

/* k6792 in k6784 in k6780 in chicken.time.posix#string->time in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6794(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6794,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?stub1915(C_SCHEME_UNDEFINED,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],C_i_foreign_block_argumentp(t1)):stub1915(C_SCHEME_UNDEFINED,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],C_SCHEME_FALSE));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.time.posix#utc-time->seconds in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6802(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_6802,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6806,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1053: check-time-vector */
f_3651(t3,lf[396],t2);}

/* k6804 in chicken.time.posix#utc-time->seconds in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6806(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_6806,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6810,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1054: ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[264]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[264]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_make_character(0);
tp(4,av2);}}

/* k6808 in k6804 in chicken.time.posix#utc-time->seconds in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6810(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_6810,c,av);}
a=C_alloc(7);
t2=C_a_timegm(&a,2,((C_word*)t0)[2],t1);
if(C_truep(C_i_nequalp(C_fix(-1),t2))){
/* posixunix.scm:1056: ##sys#error */
t3=*((C_word*)lf[95]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[396];
av2[3]=lf[397];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* chicken.time.posix#local-timezone-abbreviation in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6821(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_6821,c,av);}
a=C_alloc(5);
t2=C_a_i_bytevector(&a,1,C_fix(3));
/* posixunix.scm:1060: ##sys#peek-c-string */
t3=*((C_word*)lf[185]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=stub1942(t2);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* chicken.process.signal#set-alarm! in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6828(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6828,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=stub1946(C_SCHEME_UNDEFINED,C_i_foreign_fixnum_argumentp(t2));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.process#process-fork in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6837(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6837,c,av);}
a=C_alloc(6);
t2=C_rest_nullp(c,2);
t3=(C_truep(t2)?C_SCHEME_FALSE:C_get_rest_arg(c,2,av,2,t0));
t4=C_rest_nullp(c,2);
t5=C_rest_nullp(c,3);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,2,t0));
t7=C_rest_nullp(c,3);
t8=stub1970(C_SCHEME_UNDEFINED,C_SCHEME_FALSE);
t9=stub1950(C_SCHEME_UNDEFINED);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6868,a[2]=t3,a[3]=t9,a[4]=t6,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t11=C_eqp(C_fix(-1),t9);
if(C_truep(t11)){
/* posixunix.scm:1086: posix-error */
t12=lf[183];{
C_word av2[5];
av2[0]=t12;
av2[1]=t10;
av2[2]=lf[91];
av2[3]=lf[401];
av2[4]=lf[402];
f_2963(5,av2);}}
else{
t12=t10;{
C_word *av2=av;
av2[0]=t12;
av2[1]=C_SCHEME_UNDEFINED;
f_6868(2,av2);}}}

/* k6866 in chicken.process#process-fork in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6868(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_6868,c,av);}
a=C_alloc(7);
t2=(C_truep(((C_word*)t0)[2])?C_eqp(((C_word*)t0)[3],C_fix(0)):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(C_truep(((C_word*)t0)[4])?*((C_word*)lf[398]+1):(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6896,a[2]=((C_word)li161),tmp=(C_word)a,a+=3,tmp));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6882,a[2]=((C_word*)t0)[2],a[3]=((C_word)li163),tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1087: g1977 */
t5=t3;{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[5];
av2[2]=t4;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}
else{
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a6881 in k6866 in chicken.process#process-fork in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6882(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6882,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6888,a[2]=((C_word*)t0)[2],a[3]=((C_word)li162),tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1092: ##sys#call-with-cthulhu */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[400]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[400]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a6887 in a6881 in k6866 in chicken.process#process-fork in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6888(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6888,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6892,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1094: thunk */
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k6890 in a6887 in a6881 in k6866 in chicken.process#process-fork in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6892(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6892,c,av);}
/* posixunix.scm:1095: chicken.base#exit */
t2=*((C_word*)lf[399]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* f_6896 in k6866 in chicken.process#process-fork in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6896(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6896,c,av);}
/* posixunix.scm:1090: thunk */
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* chicken.process#process-execute in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6936(C_word c,C_word *av){
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
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,7)))){
C_save_and_reclaim((void *)f_6936,c,av);}
a=C_alloc(7);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_END_OF_LIST:C_get_rest_arg(c,3,av,3,t0));
t5=C_rest_nullp(c,3);
t6=C_rest_nullp(c,4);
t7=(C_truep(t6)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,3,t0));
t8=C_rest_nullp(c,4);
t9=C_rest_nullp(c,5);
t10=(C_truep(t9)?C_SCHEME_FALSE:C_get_rest_arg(c,5,av,3,t0));
t11=C_rest_nullp(c,5);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6960,a[2]=((C_word)li165),tmp=(C_word)a,a+=3,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6963,a[2]=t2,a[3]=((C_word)li166),tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1100: call-with-exec-args */
t14=lf[287];
f_4162(t14,t1,lf[403],t2,t12,t4,t7,t13);}

/* a6959 in chicken.process#process-execute in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6960(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6960,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a6962 in chicken.process#process-execute in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_6963(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6963,c,av);}
t5=(C_truep(t4)?C_u_i_execve(t2,t3,t4):C_u_i_execvp(t2,t3));
t6=C_eqp(t5,C_fix(-1));
if(C_truep(t6)){
/* posixunix.scm:1107: posix-error */
t7=lf[183];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t7;
av2[1]=t1;
av2[2]=lf[91];
av2[3]=lf[403];
av2[4]=lf[404];
av2[5]=((C_word*)t0)[2];
f_2963(6,av2);}}
else{
t7=C_SCHEME_UNDEFINED;
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* chicken.posix#process-wait-impl in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_fcall f_7014(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_7014,3,t1,t2,t3);}
a=C_alloc(5);
t4=(C_truep(t3)?C_fix((C_word)WNOHANG):C_fix(0));
t5=C_waitpid(t2,t4);
t6=C_WIFEXITED(C_fix((C_word)C_wait_status));
t7=C_eqp(t5,C_fix(-1));
t8=(C_truep(t7)?C_eqp(C_fix((C_word)errno),C_fix((C_word)EINTR)):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7030,a[2]=t2,a[3]=t3,a[4]=((C_word)li168),tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1116: ##sys#dispatch-interrupt */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[311]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[311]+1);
av2[1]=t1;
av2[2]=t9;
tp(3,av2);}}
else{
if(C_truep(t6)){
/* posixunix.scm:1118: scheme#values */{
C_word av2[5];
av2[0]=0;
av2[1]=t1;
av2[2]=t5;
av2[3]=t6;
av2[4]=C_WEXITSTATUS(C_fix((C_word)C_wait_status));
C_values(5,av2);}}
else{
if(C_truep(C_WIFSIGNALED(C_fix((C_word)C_wait_status)))){
/* posixunix.scm:1118: scheme#values */{
C_word av2[5];
av2[0]=0;
av2[1]=t1;
av2[2]=t5;
av2[3]=t6;
av2[4]=C_WTERMSIG(C_fix((C_word)C_wait_status));
C_values(5,av2);}}
else{
/* posixunix.scm:1118: scheme#values */{
C_word av2[5];
av2[0]=0;
av2[1]=t1;
av2[2]=t5;
av2[3]=t6;
av2[4]=C_WSTOPSIG(C_fix((C_word)C_wait_status));
C_values(5,av2);}}}}}

/* a7029 in chicken.posix#process-wait-impl in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7030(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7030,c,av);}
/* posixunix.scm:1117: process-wait-impl */
f_7014(t1,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* chicken.process-context.posix#parent-process-id in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7052(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7052,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=stub2016(C_SCHEME_UNDEFINED);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.process#process-signal in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7055(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,3)))){
C_save_and_reclaim((void*)f_7055,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
t4=C_i_pairp(t3);
t5=(C_truep(t4)?C_get_rest_arg(c,3,av,3,t0):C_fix((C_word)SIGTERM));
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7062,a[2]=t2,a[3]=t5,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1131: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t6;
av2[2]=t2;
av2[3]=lf[405];
tp(4,av2);}}

/* k7060 in chicken.process#process-signal in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7062(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_7062,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7065,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1132: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[405];
tp(4,av2);}}

/* k7063 in k7060 in chicken.process#process-signal in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7065(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_7065,c,av);}
t2=C_kill(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_eqp(t2,C_fix(-1));
if(C_truep(t3)){
/* posixunix.scm:1134: posix-error */
t4=lf[183];{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[4];
av2[2]=lf[91];
av2[3]=lf[405];
av2[4]=lf[406];
av2[5]=((C_word*)t0)[2];
av2[6]=((C_word*)t0)[3];
f_2963(7,av2);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* chicken.process#process-run in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7095(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_7095,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
t4=C_i_pairp(t3);
t5=(C_truep(t4)?C_get_rest_arg(c,3,av,3,t0):C_SCHEME_FALSE);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7102,a[2]=t1,a[3]=t5,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1145: chicken.process#process-fork */
t7=*((C_word*)lf[108]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* k7100 in chicken.process#process-run in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7102(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_7102,c,av);}
a=C_alloc(4);
t2=C_eqp(C_fix(0),t1);
if(C_truep(C_i_not(t2))){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(((C_word*)t0)[3])){
/* posixunix.scm:1147: chicken.process#process-execute */
t3=*((C_word*)lf[107]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f8773,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1137: chicken.process-context#get-environment-variable */
t4=*((C_word*)lf[409]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[410];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}}

/* k7143 in k7227 in connect-child in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7145(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7145,c,av);}
/* posixunix.scm:1177: chicken.file.posix#file-close */
t2=*((C_word*)lf[11]+1);{
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

/* make-on-close in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_fcall f_7149(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_7149,7,t1,t2,t3,t4,t5,t6,t7);}
a=C_alloc(9);
t8=t1;{
C_word av2[2];
av2[0]=t8;
av2[1]=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7151,a[2]=t4,a[3]=t5,a[4]=t6,a[5]=t7,a[6]=t3,a[7]=t2,a[8]=((C_word)li175),tmp=(C_word)a,a+=9,tmp);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* f_7151 in make-on-close in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7151(C_word c,C_word *av){
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
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_7151,c,av);}
a=C_alloc(9);
t2=C_i_vector_set(((C_word*)t0)[2],((C_word*)t0)[3],C_SCHEME_TRUE);
t3=C_i_vector_ref(((C_word*)t0)[2],((C_word*)t0)[4]);
t4=(C_truep(t3)?C_i_vector_ref(((C_word*)t0)[2],((C_word*)t0)[5]):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7166,a[2]=((C_word*)t0)[6],a[3]=((C_word)li173),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7172,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[6],a[4]=((C_word)li174),tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1183: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t5;
av2[3]=t6;
C_call_with_values(4,av2);}}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* a7165 */
static void C_ccall f_7166(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7166,c,av);}
/* posixunix.scm:1183: process-wait-impl */
f_7014(t1,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* a7171 */
static void C_ccall f_7172(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_7172,c,av);}
if(C_truep(t3)){
t5=C_SCHEME_UNDEFINED;
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
/* posixunix.scm:1185: ##sys#signal-hook */
t5=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=lf[91];
av2[3]=((C_word*)t0)[2];
av2[4]=lf[411];
av2[5]=((C_word*)t0)[3];
av2[6]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(7,av2);}}}

/* needed-pipe in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_fcall f_7186(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_7186,2,t1,t2);}
a=C_alloc(6);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7195,a[2]=((C_word)li177),tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7201,a[2]=((C_word)li178),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1190: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a7194 in needed-pipe in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7195(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7195,c,av);}
/* posixunix.scm:1190: chicken.process#create-pipe */
t2=*((C_word*)lf[117]+1);{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a7200 in needed-pipe in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7201(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7201,c,av);}
a=C_alloc(3);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* connect-parent in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_fcall f_7206(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_7206,3,t1,t2,t3);}
a=C_alloc(4);
if(C_truep(t3)){
t4=C_i_car(t2);
t5=C_u_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7217,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1196: chicken.file.posix#file-close */
t7=*((C_word*)lf[11]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7215 in connect-parent in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7217(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7217,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* connect-child in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_fcall f_7218(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7218,4,t1,t2,t3,t4);}
a=C_alloc(5);
if(C_truep(t3)){
t5=C_i_car(t2);
t6=C_u_i_cdr(t2);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7229,a[2]=t4,a[3]=t5,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1202: chicken.file.posix#file-close */
t8=*((C_word*)lf[11]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k7227 in connect-child in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7229(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_7229,c,av);}
a=C_alloc(4);
t2=C_eqp(((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7145,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1176: chicken.file.posix#duplicate-fileno */
t4=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* spawn in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_fcall f_7247(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,2)))){
C_save_and_reclaim_args((void *)trf_7247,8,t0,t1,t2,t3,t4,t5,t6,t7);}
a=C_alloc(11);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7251,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,a[6]=((C_word*)t0)[2],a[7]=t7,a[8]=t5,a[9]=t6,a[10]=((C_word*)t0)[3],tmp=(C_word)a,a+=11,tmp);
/* posixunix.scm:1211: needed-pipe */
f_7186(t8,t6);}

/* k7249 in spawn in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7251(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_7251,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7254,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* posixunix.scm:1212: needed-pipe */
f_7186(t2,((C_word*)t0)[8]);}

/* k7252 in k7249 in spawn in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7254(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_7254,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7257,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* posixunix.scm:1213: needed-pipe */
f_7186(t2,((C_word*)t0)[8]);}

/* k7255 in k7252 in k7249 in spawn in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7257(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_7257,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7264,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
if(C_truep(((C_word*)t0)[10])){
t3=C_i_cdr(((C_word*)t0)[10]);
t4=C_u_i_car(((C_word*)t0)[10]);
t5=t2;
f_7264(t5,C_a_i_cons(&a,2,t3,t4));}
else{
t3=t2;
f_7264(t3,C_SCHEME_FALSE);}}

/* k7262 in k7255 in k7252 in k7249 in spawn in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_fcall f_7264(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,0,2)))){
C_save_and_reclaim_args((void *)trf_7264,2,t0,t1);}
a=C_alloc(19);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7268,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7270,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word)li182),tmp=(C_word)a,a+=13,tmp);
/* posixunix.scm:1216: chicken.process#process-fork */
t4=*((C_word*)lf[108]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k7266 in k7262 in k7255 in k7252 in k7249 in spawn in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7268(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_7268,c,av);}
/* posixunix.scm:1214: scheme#values */{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
av2[5]=t1;
C_values(6,av2);}}

/* a7269 in k7262 in k7255 in k7252 in k7249 in spawn in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7270(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_7270,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7274,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* posixunix.scm:1218: connect-child */
f_7218(t2,((C_word*)t0)[10],((C_word*)t0)[11],*((C_word*)lf[38]+1));}

/* k7272 in a7269 in k7262 in k7255 in k7252 in k7249 in spawn in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7274(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_7274,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7277,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[9])){
t3=C_i_cdr(((C_word*)t0)[9]);
t4=C_u_i_car(((C_word*)t0)[9]);
t5=C_a_i_cons(&a,2,t3,t4);
/* posixunix.scm:1219: connect-child */
f_7218(t2,t5,((C_word*)t0)[10],*((C_word*)lf[39]+1));}
else{
/* posixunix.scm:1219: connect-child */
f_7218(t2,C_SCHEME_FALSE,((C_word*)t0)[10],*((C_word*)lf[39]+1));}}

/* k7275 in k7272 in a7269 in k7262 in k7255 in k7252 in k7249 in spawn in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7277(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_7277,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7280,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[6])){
t3=C_i_cdr(((C_word*)t0)[6]);
t4=C_u_i_car(((C_word*)t0)[6]);
t5=C_a_i_cons(&a,2,t3,t4);
/* posixunix.scm:1220: connect-child */
f_7218(t2,t5,((C_word*)t0)[8],*((C_word*)lf[37]+1));}
else{
/* posixunix.scm:1220: connect-child */
f_7218(t2,C_SCHEME_FALSE,((C_word*)t0)[8],*((C_word*)lf[37]+1));}}

/* k7278 in k7275 in k7272 in a7269 in k7262 in k7255 in k7252 in k7249 in spawn in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7280(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7280,c,av);}
/* posixunix.scm:1221: chicken.process#process-execute */
t2=*((C_word*)lf[107]+1);{
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
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* input-port in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_fcall f_7292(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_7292,7,t0,t1,t2,t3,t4,t5,t6);}
a=C_alloc(6);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7296,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1224: connect-parent */
f_7206(t7,t4,t5);}

/* k7294 in input-port in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7296(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_7296,c,av);}
if(C_truep(t1)){
/* posixunix.scm:1225: ##sys#custom-input-port */
t2=*((C_word*)lf[362]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=t1;
av2[5]=C_SCHEME_TRUE;
av2[6]=C_fix(256);
av2[7]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(8,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* output-port in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_fcall f_7303(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_7303,7,t0,t1,t2,t3,t4,t5,t6);}
a=C_alloc(6);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7307,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1228: connect-parent */
f_7206(t7,t4,t5);}

/* k7305 in output-port in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7307(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_7307,c,av);}
if(C_truep(t1)){
/* posixunix.scm:1229: ##sys#custom-output-port */
t2=*((C_word*)lf[376]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=t1;
av2[5]=C_SCHEME_TRUE;
av2[6]=C_fix(0);
av2[7]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(8,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* chicken.posix#process-impl in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_fcall f_7314(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,0,6)))){
C_save_and_reclaim_args((void *)trf_7314,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
a=C_alloc(21);
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7320,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t4,a[5]=t5,a[6]=t6,a[7]=t7,a[8]=t8,a[9]=((C_word)li186),tmp=(C_word)a,a+=10,tmp);
t10=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7326,a[2]=t7,a[3]=t6,a[4]=t8,a[5]=((C_word*)t0)[3],a[6]=t2,a[7]=t3,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word)li187),tmp=(C_word)a,a+=11,tmp);
/* posixunix.scm:1231: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=t9;
av2[3]=t10;
C_call_with_values(4,av2);}}

/* a7319 in chicken.posix#process-impl in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7320(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_7320,c,av);}
/* posixunix.scm:1232: spawn */
t2=((C_word*)t0)[2];
f_7247(t2,t1,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8]);}

/* a7325 in chicken.posix#process-impl in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7326(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(26,c,7)))){
C_save_and_reclaim((void *)f_7326,c,av);}
a=C_alloc(26);
t6=C_i_not(((C_word*)t0)[2]);
t7=C_i_not(((C_word*)t0)[3]);
t8=C_i_not(((C_word*)t0)[4]);
t9=C_a_i_vector3(&a,3,t6,t7,t8);
t10=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_7337,a[2]=t1,a[3]=t5,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t4,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[8],a[10]=t9,a[11]=((C_word*)t0)[9],a[12]=t3,a[13]=((C_word*)t0)[3],tmp=(C_word)a,a+=14,tmp);
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7357,a[2]=((C_word*)t0)[5],a[3]=t10,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t2,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm:1240: make-on-close */
f_7149(t11,((C_word*)t0)[6],t5,t9,C_fix(0),C_fix(1),C_fix(2));}

/* k7335 in a7325 in chicken.posix#process-impl in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7337(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(20,c,7)))){
C_save_and_reclaim((void *)f_7337,c,av);}
a=C_alloc(20);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7341,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7353,a[2]=((C_word*)t0)[11],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[13],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm:1243: make-on-close */
f_7149(t3,((C_word*)t0)[5],((C_word*)t0)[3],((C_word*)t0)[10],C_fix(1),C_fix(0),C_fix(2));}

/* k7339 in k7335 in a7325 in chicken.posix#process-impl in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7341(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,7)))){
C_save_and_reclaim((void *)f_7341,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7345,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7349,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm:1247: make-on-close */
f_7149(t3,((C_word*)t0)[6],((C_word*)t0)[4],((C_word*)t0)[11],C_fix(2),C_fix(0),C_fix(1));}

/* k7343 in k7339 in k7335 in a7325 in chicken.posix#process-impl in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7345(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_7345,c,av);}
/* posixunix.scm:1237: scheme#values */{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
av2[5]=t1;
C_values(6,av2);}}

/* k7347 in k7339 in k7335 in a7325 in chicken.posix#process-impl in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7349(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_7349,c,av);}
/* posixunix.scm:1245: input-port */
t2=((C_word*)t0)[2];
f_7292(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t1);}

/* k7351 in k7335 in a7325 in chicken.posix#process-impl in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7353(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_7353,c,av);}
/* posixunix.scm:1241: output-port */
t2=((C_word*)t0)[2];
f_7303(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t1);}

/* k7355 in a7325 in chicken.posix#process-impl in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7357(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_7357,c,av);}
/* posixunix.scm:1238: input-port */
t2=((C_word*)t0)[2];
f_7292(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t1);}

/* %process in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_fcall f_7370(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(27,0,3)))){
C_save_and_reclaim_args((void *)trf_7370,7,t1,t2,t3,t4,t5,t6,t7);}
a=C_alloc(27);
t8=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7372,a[2]=t2,a[3]=((C_word)li191),tmp=(C_word)a,a+=4,tmp);
t11=C_i_check_string_2(((C_word*)t8)[1],t2);
t12=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7413,a[2]=t2,a[3]=t8,a[4]=t9,a[5]=t6,a[6]=t3,a[7]=t1,a[8]=t7,tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t9)[1])){
/* posixunix.scm:1260: chkstrlst */
t13=t10;
f_7372(t13,t12,((C_word*)t9)[1]);}
else{
t13=((C_word*)t8)[1];
t14=C_a_i_list2(&a,2,lf[408],t13);
t15=C_set_block_item(t9,0,t14);
t16=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f8779,a[2]=t8,a[3]=t12,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1137: chicken.process-context#get-environment-variable */
t17=*((C_word*)lf[409]+1);{
C_word av2[3];
av2[0]=t17;
av2[1]=t16;
av2[2]=lf[410];
((C_proc)(void*)(*((C_word*)t17+1)))(3,av2);}}}

/* chkstrlst in %process in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_fcall f_7372(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_7372,3,t0,t1,t2);}
a=C_alloc(8);
t3=C_i_check_list_2(t2,((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7377,a[2]=((C_word*)t0)[2],a[3]=((C_word)li189),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7386,a[2]=t4,a[3]=((C_word)li190),tmp=(C_word)a,a+=4,tmp);
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=(
  f_7386(t5,t2)
);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* g2141 in chkstrlst in %process in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static C_word C_fcall f_7377(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_i_check_string_2(t1,((C_word*)t0)[2]));}

/* for-each-loop2140 in chkstrlst in %process in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static C_word C_fcall f_7386(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_pairp(t1))){
t2=(
/* posixunix.scm:1257: g2141 */
  f_7377(((C_word*)t0)[2],C_slot(t1,C_fix(0)))
);
t4=C_slot(t1,C_fix(1));
t1=t4;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* k7411 in %process in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7413(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_7413,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7416,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[5])){
/* posixunix.scm:1264: check-environment-list */
f_4113(t2,((C_word*)t0)[5],((C_word*)t0)[2]);}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_7416(2,av2);}}}

/* k7414 in k7411 in %process in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7416(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_7416,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7421,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li192),tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm:1265: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[7];
av2[2]=t2;
av2[3]=((C_word*)t0)[8];
C_call_with_values(4,av2);}}

/* a7420 in k7414 in k7411 in %process in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7421(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_7421,c,av);}
/* posixunix.scm:1266: process-impl */
t2=lf[412];
f_7314(t2,t1,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[5],C_SCHEME_TRUE,C_SCHEME_TRUE,((C_word*)t0)[6]);}

/* chicken.process#process in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7441(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_7441,c,av);}
a=C_alloc(3);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=C_rest_nullp(c,3);
t6=C_rest_nullp(c,4);
t7=(C_truep(t6)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,3,t0));
t8=C_rest_nullp(c,4);
t9=C_rest_nullp(c,5);
t10=(C_truep(t9)?C_SCHEME_FALSE:C_get_rest_arg(c,5,av,3,t0));
t11=C_rest_nullp(c,5);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7465,a[2]=((C_word)li194),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1270: %process */
f_7370(t1,lf[413],C_SCHEME_FALSE,t2,t4,t7,t12);}

/* a7464 in chicken.process#process in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7465(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7465,c,av);}
/* posixunix.scm:1272: scheme#values */{
C_word *av2=av;
av2[0]=0;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t4;
C_values(5,av2);}}

/* chicken.process#process* in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7507(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_7507,c,av);}
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=C_rest_nullp(c,3);
t6=C_rest_nullp(c,4);
t7=(C_truep(t6)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,3,t0));
t8=C_rest_nullp(c,4);
t9=C_rest_nullp(c,5);
t10=(C_truep(t9)?C_SCHEME_FALSE:C_get_rest_arg(c,5,av,3,t0));
if(C_truep(C_rest_nullp(c,5))){
/* posixunix.scm:1275: %process */
f_7370(t1,lf[414],C_SCHEME_TRUE,t2,t4,t7,*((C_word*)lf[302]+1));}
else{
/* posixunix.scm:1275: %process */
f_7370(t1,lf[414],C_SCHEME_TRUE,t2,t4,t7,*((C_word*)lf[302]+1));}}

/* k7570 in chicken.process-context.posix#set-root-directory! in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7572(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_7572,c,av);}
if(C_truep(C_fixnum_lessp(stub2211(C_SCHEME_UNDEFINED,t1),C_fix(0)))){
/* posixunix.scm:1287: posix-error */
t2=lf[183];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[188];
av2[3]=lf[415];
av2[4]=lf[416];
av2[5]=((C_word*)t0)[3];
f_2963(6,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* chicken.process-context.posix#set-root-directory! in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7577(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7577,c,av);}
a=C_alloc(4);
t3=C_i_check_string_2(t2,lf[415]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7572,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1283: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[190]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t4;
av2[2]=C_i_foreign_string_argumentp(t2);
tp(3,av2);}}

/* chicken.process#process-spawn in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7596(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7596,c,av);}
/* posixunix.scm:1291: chicken.base#error */
t2=*((C_word*)lf[101]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[111];
av2[3]=lf[417];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.errno#errno in k5529 in k5498 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7602(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7602,c,av);}
/* posix.scm:374: ##sys#errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[420]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[420]+1);
av2[1]=t1;
tp(2,av2);}}

/* a7650 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7651(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_7651,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7655,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:707: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[460];
tp(4,av2);}}

/* k7653 in a7650 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7655(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7655,c,av);}
a=C_alloc(8);
t2=C_getpgid(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7658,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7664,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:710: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[93]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[93]+1);
av2[1]=t4;
tp(2,av2);}}
else{
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7656 in k7653 in a7650 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7658(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7658,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7662 in k7653 in a7650 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7664(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7664,c,av);}
/* posixunix.scm:711: ##sys#error */
t2=*((C_word*)lf[95]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[460];
av2[3]=lf[461];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a7668 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7669(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7669,c,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7673,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:714: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[462];
tp(4,av2);}}

/* k7671 in a7668 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7673(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_7673,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7676,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:715: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[462];
tp(4,av2);}}

/* k7674 in k7671 in a7668 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7676(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_7676,c,av);}
a=C_alloc(5);
if(C_truep(C_fixnum_lessp(C_setpgid(((C_word*)t0)[2],((C_word*)t0)[3]),C_fix(0)))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7685,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:717: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[93]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[93]+1);
av2[1]=t2;
tp(2,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7683 in k7674 in k7671 in a7668 in k5350 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7685(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_7685,c,av);}
/* posixunix.scm:718: ##sys#error */
t2=*((C_word*)lf[95]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[462];
av2[3]=lf[463];
av2[4]=((C_word*)t0)[3];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* a7690 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7691(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7691,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=stub1550(C_SCHEME_UNDEFINED);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a7693 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7694(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_7694,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7698,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:636: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[468];
tp(4,av2);}}

/* k7696 in a7693 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7698(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7698,c,av);}
a=C_alloc(4);
if(C_truep(C_fixnum_lessp(C_setegid(((C_word*)t0)[2]),C_fix(0)))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7707,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:638: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[93]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[93]+1);
av2[1]=t2;
tp(2,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7705 in k7696 in a7693 in k5346 in k5342 in k5338 in k5296 */
static void C_ccall f_7707(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7707,c,av);}
/* posixunix.scm:639: ##sys#error */
t2=*((C_word*)lf[95]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[466];
av2[3]=lf[467];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a7712 in k5342 in k5338 in k5296 */
static void C_ccall f_7713(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7713,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=stub1545(C_SCHEME_UNDEFINED);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a7715 in k5342 in k5338 in k5296 */
static void C_ccall f_7716(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_7716,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7720,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:626: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[472];
tp(4,av2);}}

/* k7718 in a7715 in k5342 in k5338 in k5296 */
static void C_ccall f_7720(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7720,c,av);}
a=C_alloc(4);
if(C_truep(C_fixnum_lessp(C_setgid(((C_word*)t0)[2]),C_fix(0)))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7729,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:628: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[93]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[93]+1);
av2[1]=t2;
tp(2,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7727 in k7718 in a7715 in k5342 in k5338 in k5296 */
static void C_ccall f_7729(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7729,c,av);}
/* posixunix.scm:629: ##sys#error */
t2=*((C_word*)lf[95]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[470];
av2[3]=lf[471];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a7734 in k5338 in k5296 */
static void C_ccall f_7735(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7735,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=stub1540(C_SCHEME_UNDEFINED);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a7737 in k5338 in k5296 */
static void C_ccall f_7738(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_7738,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7742,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:615: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[476];
tp(4,av2);}}

/* k7740 in a7737 in k5338 in k5296 */
static void C_ccall f_7742(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7742,c,av);}
a=C_alloc(4);
if(C_truep(C_fixnum_lessp(C_seteuid(((C_word*)t0)[2]),C_fix(0)))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7751,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:617: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[93]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[93]+1);
av2[1]=t2;
tp(2,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7749 in k7740 in a7737 in k5338 in k5296 */
static void C_ccall f_7751(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7751,c,av);}
/* posixunix.scm:618: ##sys#error */
t2=*((C_word*)lf[95]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[474];
av2[3]=lf[475];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a7756 in k5296 */
static void C_ccall f_7757(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7757,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=stub1535(C_SCHEME_UNDEFINED);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a7759 in k5296 */
static void C_ccall f_7760(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_7760,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7764,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:605: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[480];
tp(4,av2);}}

/* k7762 in a7759 in k5296 */
static void C_ccall f_7764(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7764,c,av);}
a=C_alloc(4);
if(C_truep(C_fixnum_lessp(C_setuid(((C_word*)t0)[2]),C_fix(0)))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7773,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:607: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[93]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[93]+1);
av2[1]=t2;
tp(2,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7771 in k7762 in a7759 in k5296 */
static void C_ccall f_7773(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7773,c,av);}
/* posixunix.scm:608: ##sys#error */
t2=*((C_word*)lf[95]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[478];
av2[3]=lf[479];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a7778 */
static void C_ccall f_7779(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_7779,c,av);}
a=C_alloc(6);
t2=C_sigprocmask_get(C_fix(0));
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7785,a[2]=t4,a[3]=((C_word)li210),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_7785(t6,t1,*((C_word*)lf[167]+1),C_SCHEME_END_OF_LIST);}

/* loop in a7778 */
static void C_fcall f_7785(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_7785,4,t0,t1,t2,t3);}
a=C_alloc(3);
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=C_u_i_cdr(t2);
if(C_truep(C_sigismember(t4))){
t6=C_a_i_cons(&a,2,t4,t3);
/* posixunix.scm:571: loop */
t8=t1;
t9=t5;
t10=t6;
t1=t8;
t2=t9;
t3=t10;
goto loop;}
else{
/* posixunix.scm:571: loop */
t8=t1;
t9=t5;
t10=t3;
t1=t8;
t2=t9;
t3=t10;
goto loop;}}}

/* a7808 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_7809(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_7809,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7813,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:637: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[483];
tp(4,av2);}}

/* k7811 in a7808 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_7813(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7813,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_slot(*((C_word*)lf[268]+1),((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a7817 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_7818(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_7818,c,av);}
a=C_alloc(4);
t2=C_rest_nullp(c,2);
t3=(C_truep(t2)?C_SCHEME_FALSE:C_get_rest_arg(c,2,av,2,t0));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7825,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
/* posix-common.scm:562: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t4;
av2[2]=t3;
av2[3]=lf[485];
tp(4,av2);}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_7825(2,av2);}}}

/* k7823 in a7817 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_7825(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7825,c,av);}
if(C_truep(((C_word*)t0)[2])){
t2=C_umask(((C_word*)t0)[2]);
if(C_truep(((C_word*)t0)[2])){
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_umask(t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
t2=C_umask(C_fix(0));
if(C_truep(((C_word*)t0)[2])){
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_umask(t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}

/* a7842 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_7843(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_7843,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7847,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:567: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[201]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[485];
tp(4,av2);}}

/* k7845 in a7842 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_7847(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7847,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_umask(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a7848 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_7849(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7849,c,av);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7853,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7865,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:403: chicken.base#port? */
t5=*((C_word*)lf[193]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k7851 in a7848 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_7853(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_7853,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7856,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_lessp(t1,C_fix(0)))){
/* posix-common.scm:412: posix-error */
t3=lf[183];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[188];
av2[3]=lf[487];
av2[4]=lf[488];
av2[5]=((C_word*)t0)[3];
f_2963(6,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7854 in k7851 in a7848 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_7856(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7856,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7863 in a7848 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_7865(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_7865,c,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(7));
t3=C_eqp(t2,lf[230]);
if(C_truep(t3)){
t4=C_ftell(&a,1,((C_word*)t0)[2]);
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
f_7853(2,av2);}}
else{
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_fix(-1);
f_7853(2,av2);}}}
else{
if(C_truep(C_fixnump(((C_word*)t0)[2]))){
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_lseek(((C_word*)t0)[2],C_fix(0),C_fix((C_word)SEEK_CUR));
f_7853(2,av2);}}
else{
/* posix-common.scm:410: ##sys#signal-hook */
t2=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[191];
av2[3]=lf[487];
av2[4]=lf[489];
av2[5]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}}

/* a7885 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_7886(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_7886,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7890,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:326: stat */
f_2981(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[199]);}

/* k7888 in a7885 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_7890(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7890,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_stat_perm);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a7891 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_7892(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_7892,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7896,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:319: stat */
f_2981(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[492]);}

/* k7894 in a7891 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_7896(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7896,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_gid);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a7897 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_7898(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_7898,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7902,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:313: stat */
f_2981(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[494]);}

/* k7900 in a7897 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_ccall f_7902(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7902,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_uid);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_posix_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("posix"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_posix_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(2667))){
C_save(t1);
C_rereclaim2(2667*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,496);
lf[0]=C_h_intern(&lf[0],5, C_text("posix"));
lf[1]=C_h_intern(&lf[1],19, C_text("chicken.file.posix#"));
lf[2]=C_h_intern(&lf[2],30, C_text("chicken.file.posix#create-fifo"));
lf[3]=C_h_intern(&lf[3],39, C_text("chicken.file.posix#create-symbolic-link"));
lf[4]=C_h_intern(&lf[4],37, C_text("chicken.file.posix#read-symbolic-link"));
lf[5]=C_h_intern(&lf[5],35, C_text("chicken.file.posix#duplicate-fileno"));
lf[6]=C_h_intern(&lf[6],30, C_text("chicken.file.posix#fcntl/dupfd"));
lf[7]=C_h_intern(&lf[7],30, C_text("chicken.file.posix#fcntl/getfd"));
lf[8]=C_h_intern(&lf[8],30, C_text("chicken.file.posix#fcntl/getfl"));
lf[9]=C_h_intern(&lf[9],30, C_text("chicken.file.posix#fcntl/setfd"));
lf[10]=C_h_intern(&lf[10],30, C_text("chicken.file.posix#fcntl/setfl"));
lf[11]=C_h_intern(&lf[11],29, C_text("chicken.file.posix#file-close"));
lf[12]=C_h_intern(&lf[12],31, C_text("chicken.file.posix#file-control"));
lf[13]=C_h_intern(&lf[13],37, C_text("chicken.file.posix#file-creation-mode"));
lf[14]=C_h_intern(&lf[14],29, C_text("chicken.file.posix#file-group"));
lf[15]=C_h_intern(&lf[15],28, C_text("chicken.file.posix#file-link"));
lf[16]=C_h_intern(&lf[16],28, C_text("chicken.file.posix#file-lock"));
lf[17]=C_h_intern(&lf[17],37, C_text("chicken.file.posix#file-lock/blocking"));
lf[18]=C_h_intern(&lf[18],31, C_text("chicken.file.posix#file-mkstemp"));
lf[19]=C_h_intern(&lf[19],28, C_text("chicken.file.posix#file-open"));
lf[20]=C_h_intern(&lf[20],29, C_text("chicken.file.posix#file-owner"));
lf[21]=C_h_intern(&lf[21],35, C_text("chicken.file.posix#file-permissions"));
lf[22]=C_h_intern(&lf[22],32, C_text("chicken.file.posix#file-position"));
lf[23]=C_h_intern(&lf[23],28, C_text("chicken.file.posix#file-read"));
lf[24]=C_h_intern(&lf[24],30, C_text("chicken.file.posix#file-select"));
lf[25]=C_h_intern(&lf[25],33, C_text("chicken.file.posix#file-test-lock"));
lf[26]=C_h_intern(&lf[26],32, C_text("chicken.file.posix#file-truncate"));
lf[27]=C_h_intern(&lf[27],30, C_text("chicken.file.posix#file-unlock"));
lf[28]=C_h_intern(&lf[28],29, C_text("chicken.file.posix#file-write"));
lf[29]=C_h_intern(&lf[29],28, C_text("chicken.file.posix#file-type"));
lf[30]=C_h_intern(&lf[30],32, C_text("chicken.file.posix#block-device\077"));
lf[31]=C_h_intern(&lf[31],36, C_text("chicken.file.posix#character-device\077"));
lf[32]=C_h_intern(&lf[32],29, C_text("chicken.file.posix#directory\077"));
lf[33]=C_h_intern(&lf[33],24, C_text("chicken.file.posix#fifo\077"));
lf[34]=C_h_intern(&lf[34],32, C_text("chicken.file.posix#regular-file\077"));
lf[35]=C_h_intern(&lf[35],26, C_text("chicken.file.posix#socket\077"));
lf[36]=C_h_intern(&lf[36],33, C_text("chicken.file.posix#symbolic-link\077"));
lf[37]=C_h_intern(&lf[37],32, C_text("chicken.file.posix#fileno/stderr"));
lf[38]=C_h_intern(&lf[38],31, C_text("chicken.file.posix#fileno/stdin"));
lf[39]=C_h_intern(&lf[39],32, C_text("chicken.file.posix#fileno/stdout"));
lf[40]=C_h_intern(&lf[40],35, C_text("chicken.file.posix#open-input-file\052"));
lf[41]=C_h_intern(&lf[41],36, C_text("chicken.file.posix#open-output-file\052"));
lf[42]=C_h_intern(&lf[42],30, C_text("chicken.file.posix#open/append"));
lf[43]=C_h_intern(&lf[43],30, C_text("chicken.file.posix#open/binary"));
lf[44]=C_h_intern(&lf[44],29, C_text("chicken.file.posix#open/creat"));
lf[45]=C_h_intern(&lf[45],28, C_text("chicken.file.posix#open/excl"));
lf[46]=C_h_intern(&lf[46],29, C_text("chicken.file.posix#open/fsync"));
lf[47]=C_h_intern(&lf[47],30, C_text("chicken.file.posix#open/noctty"));
lf[48]=C_h_intern(&lf[48],33, C_text("chicken.file.posix#open/noinherit"));
lf[49]=C_h_intern(&lf[49],32, C_text("chicken.file.posix#open/nonblock"));
lf[50]=C_h_intern(&lf[50],30, C_text("chicken.file.posix#open/rdonly"));
lf[51]=C_h_intern(&lf[51],28, C_text("chicken.file.posix#open/rdwr"));
lf[52]=C_h_intern(&lf[52],28, C_text("chicken.file.posix#open/read"));
lf[53]=C_h_intern(&lf[53],28, C_text("chicken.file.posix#open/sync"));
lf[54]=C_h_intern(&lf[54],28, C_text("chicken.file.posix#open/text"));
lf[55]=C_h_intern(&lf[55],29, C_text("chicken.file.posix#open/trunc"));
lf[56]=C_h_intern(&lf[56],29, C_text("chicken.file.posix#open/write"));
lf[57]=C_h_intern(&lf[57],30, C_text("chicken.file.posix#open/wronly"));
lf[58]=C_h_intern(&lf[58],29, C_text("chicken.file.posix#perm/irgrp"));
lf[59]=C_h_intern(&lf[59],29, C_text("chicken.file.posix#perm/iroth"));
lf[60]=C_h_intern(&lf[60],29, C_text("chicken.file.posix#perm/irusr"));
lf[61]=C_h_intern(&lf[61],29, C_text("chicken.file.posix#perm/irwxg"));
lf[62]=C_h_intern(&lf[62],29, C_text("chicken.file.posix#perm/irwxo"));
lf[63]=C_h_intern(&lf[63],29, C_text("chicken.file.posix#perm/irwxu"));
lf[64]=C_h_intern(&lf[64],29, C_text("chicken.file.posix#perm/isgid"));
lf[65]=C_h_intern(&lf[65],29, C_text("chicken.file.posix#perm/isuid"));
lf[66]=C_h_intern(&lf[66],29, C_text("chicken.file.posix#perm/isvtx"));
lf[67]=C_h_intern(&lf[67],29, C_text("chicken.file.posix#perm/iwgrp"));
lf[68]=C_h_intern(&lf[68],29, C_text("chicken.file.posix#perm/iwoth"));
lf[69]=C_h_intern(&lf[69],29, C_text("chicken.file.posix#perm/iwusr"));
lf[70]=C_h_intern(&lf[70],29, C_text("chicken.file.posix#perm/ixgrp"));
lf[71]=C_h_intern(&lf[71],29, C_text("chicken.file.posix#perm/ixoth"));
lf[72]=C_h_intern(&lf[72],29, C_text("chicken.file.posix#perm/ixusr"));
lf[73]=C_h_intern(&lf[73],31, C_text("chicken.file.posix#port->fileno"));
lf[74]=C_h_intern(&lf[74],27, C_text("chicken.file.posix#seek/cur"));
lf[75]=C_h_intern(&lf[75],27, C_text("chicken.file.posix#seek/end"));
lf[76]=C_h_intern(&lf[76],27, C_text("chicken.file.posix#seek/set"));
lf[77]=C_h_intern(&lf[77],37, C_text("chicken.file.posix#set-file-position!"));
lf[78]=C_h_intern(&lf[78],19, C_text("chicken.time.posix#"));
lf[79]=C_h_intern(&lf[79],36, C_text("chicken.time.posix#seconds->utc-time"));
lf[80]=C_h_intern(&lf[80],36, C_text("chicken.time.posix#utc-time->seconds"));
lf[81]=C_h_intern(&lf[81],38, C_text("chicken.time.posix#seconds->local-time"));
lf[82]=C_h_intern(&lf[82],34, C_text("chicken.time.posix#seconds->string"));
lf[83]=C_h_intern(&lf[83],38, C_text("chicken.time.posix#local-time->seconds"));
lf[84]=C_h_intern(&lf[84],31, C_text("chicken.time.posix#string->time"));
lf[85]=C_h_intern(&lf[85],31, C_text("chicken.time.posix#time->string"));
lf[86]=C_h_intern(&lf[86],46, C_text("chicken.time.posix#local-timezone-abbreviation"));
lf[87]=C_h_intern(&lf[87],16, C_text("chicken.process#"));
lf[88]=C_h_intern(&lf[88],22, C_text("chicken.process#system"));
lf[89]=C_h_intern(&lf[89],6, C_text("system"));
lf[90]=C_h_intern(&lf[90],17, C_text("##sys#signal-hook"));
lf[91]=C_h_intern_kw(&lf[91],13, C_text("process-error"));
lf[92]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032`system\047 invocation failed"));
lf[93]=C_h_intern(&lf[93],18, C_text("##sys#update-errno"));
lf[94]=C_h_intern(&lf[94],23, C_text("chicken.process#system\052"));
lf[95]=C_h_intern(&lf[95],11, C_text("##sys#error"));
lf[96]=C_decode_literal(C_heaptop,C_text("\376B\000\0003shell invocation failed with non-zero return status"));
lf[97]=C_h_intern(&lf[97],18, C_text("chicken.process#qs"));
lf[98]=C_h_intern(&lf[98],7, C_text("mingw32"));
lf[99]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002\042\042"));
lf[100]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004\047\134\047\047"));
lf[101]=C_h_intern(&lf[101],18, C_text("chicken.base#error"));
lf[102]=C_h_intern(&lf[102],2, C_text("qs"));
lf[103]=C_decode_literal(C_heaptop,C_text("\376B\000\0004NUL character can not be represented in shell string"));
lf[104]=C_h_intern(&lf[104],20, C_text("scheme#string-append"));
lf[105]=C_h_intern(&lf[105],18, C_text("##sys#string->list"));
lf[106]=C_h_intern(&lf[106],33, C_text("chicken.platform#software-version"));
lf[107]=C_h_intern(&lf[107],31, C_text("chicken.process#process-execute"));
lf[108]=C_h_intern(&lf[108],28, C_text("chicken.process#process-fork"));
lf[109]=C_h_intern(&lf[109],27, C_text("chicken.process#process-run"));
lf[110]=C_h_intern(&lf[110],30, C_text("chicken.process#process-signal"));
lf[111]=C_h_intern(&lf[111],29, C_text("chicken.process#process-spawn"));
lf[112]=C_h_intern(&lf[112],28, C_text("chicken.process#process-wait"));
lf[113]=C_h_intern(&lf[113],36, C_text("chicken.process#call-with-input-pipe"));
lf[114]=C_h_intern(&lf[114],37, C_text("chicken.process#call-with-output-pipe"));
lf[115]=C_h_intern(&lf[115],32, C_text("chicken.process#close-input-pipe"));
lf[116]=C_h_intern(&lf[116],33, C_text("chicken.process#close-output-pipe"));
lf[117]=C_h_intern(&lf[117],27, C_text("chicken.process#create-pipe"));
lf[118]=C_h_intern(&lf[118],31, C_text("chicken.process#open-input-pipe"));
lf[119]=C_h_intern(&lf[119],32, C_text("chicken.process#open-output-pipe"));
lf[120]=C_h_intern(&lf[120],36, C_text("chicken.process#with-input-from-pipe"));
lf[121]=C_h_intern(&lf[121],35, C_text("chicken.process#with-output-to-pipe"));
lf[122]=C_h_intern(&lf[122],23, C_text("chicken.process#process"));
lf[123]=C_h_intern(&lf[123],24, C_text("chicken.process#process\052"));
lf[124]=C_h_intern(&lf[124],29, C_text("chicken.process#process-sleep"));
lf[125]=C_h_intern(&lf[125],24, C_text("chicken.process#pipe/buf"));
lf[126]=C_h_intern(&lf[126],29, C_text("chicken.process#spawn/overlay"));
lf[127]=C_h_intern(&lf[127],26, C_text("chicken.process#spawn/wait"));
lf[128]=C_h_intern(&lf[128],28, C_text("chicken.process#spawn/nowait"));
lf[129]=C_h_intern(&lf[129],29, C_text("chicken.process#spawn/nowaito"));
lf[130]=C_h_intern(&lf[130],28, C_text("chicken.process#spawn/detach"));
lf[131]=C_h_intern(&lf[131],23, C_text("chicken.process.signal#"));
lf[132]=C_h_intern(&lf[132],33, C_text("chicken.process.signal#set-alarm!"));
lf[133]=C_h_intern(&lf[133],42, C_text("chicken.process.signal#set-signal-handler!"));
lf[134]=C_h_intern(&lf[134],39, C_text("chicken.process.signal#set-signal-mask!"));
lf[135]=C_h_intern(&lf[135],37, C_text("chicken.process.signal#signal-handler"));
lf[136]=C_h_intern(&lf[136],34, C_text("chicken.process.signal#signal-mask"));
lf[137]=C_h_intern(&lf[137],35, C_text("chicken.process.signal#signal-mask!"));
lf[138]=C_h_intern(&lf[138],37, C_text("chicken.process.signal#signal-masked\077"));
lf[139]=C_h_intern(&lf[139],37, C_text("chicken.process.signal#signal-unmask!"));
lf[140]=C_h_intern(&lf[140],34, C_text("chicken.process.signal#signal/abrt"));
lf[141]=C_h_intern(&lf[141],34, C_text("chicken.process.signal#signal/alrm"));
lf[142]=C_h_intern(&lf[142],35, C_text("chicken.process.signal#signal/break"));
lf[143]=C_h_intern(&lf[143],33, C_text("chicken.process.signal#signal/bus"));
lf[144]=C_h_intern(&lf[144],34, C_text("chicken.process.signal#signal/chld"));
lf[145]=C_h_intern(&lf[145],34, C_text("chicken.process.signal#signal/cont"));
lf[146]=C_h_intern(&lf[146],33, C_text("chicken.process.signal#signal/fpe"));
lf[147]=C_h_intern(&lf[147],33, C_text("chicken.process.signal#signal/hup"));
lf[148]=C_h_intern(&lf[148],33, C_text("chicken.process.signal#signal/ill"));
lf[149]=C_h_intern(&lf[149],33, C_text("chicken.process.signal#signal/int"));
lf[150]=C_h_intern(&lf[150],32, C_text("chicken.process.signal#signal/io"));
lf[151]=C_h_intern(&lf[151],34, C_text("chicken.process.signal#signal/kill"));
lf[152]=C_h_intern(&lf[152],34, C_text("chicken.process.signal#signal/pipe"));
lf[153]=C_h_intern(&lf[153],34, C_text("chicken.process.signal#signal/prof"));
lf[154]=C_h_intern(&lf[154],34, C_text("chicken.process.signal#signal/quit"));
lf[155]=C_h_intern(&lf[155],34, C_text("chicken.process.signal#signal/segv"));
lf[156]=C_h_intern(&lf[156],34, C_text("chicken.process.signal#signal/stop"));
lf[157]=C_h_intern(&lf[157],34, C_text("chicken.process.signal#signal/term"));
lf[158]=C_h_intern(&lf[158],34, C_text("chicken.process.signal#signal/trap"));
lf[159]=C_h_intern(&lf[159],34, C_text("chicken.process.signal#signal/tstp"));
lf[160]=C_h_intern(&lf[160],33, C_text("chicken.process.signal#signal/urg"));
lf[161]=C_h_intern(&lf[161],34, C_text("chicken.process.signal#signal/usr1"));
lf[162]=C_h_intern(&lf[162],34, C_text("chicken.process.signal#signal/usr2"));
lf[163]=C_h_intern(&lf[163],36, C_text("chicken.process.signal#signal/vtalrm"));
lf[164]=C_h_intern(&lf[164],35, C_text("chicken.process.signal#signal/winch"));
lf[165]=C_h_intern(&lf[165],34, C_text("chicken.process.signal#signal/xcpu"));
lf[166]=C_h_intern(&lf[166],34, C_text("chicken.process.signal#signal/xfsz"));
lf[167]=C_h_intern(&lf[167],35, C_text("chicken.process.signal#signals-list"));
lf[168]=C_h_intern(&lf[168],30, C_text("chicken.process-context.posix#"));
lf[169]=C_h_intern(&lf[169],47, C_text("chicken.process-context.posix#change-directory\052"));
lf[170]=C_h_intern(&lf[170],49, C_text("chicken.process-context.posix#set-root-directory!"));
lf[171]=C_h_intern(&lf[171],56, C_text("chicken.process-context.posix#current-effective-group-id"));
lf[172]=C_h_intern(&lf[172],55, C_text("chicken.process-context.posix#current-effective-user-id"));
lf[173]=C_h_intern(&lf[173],46, C_text("chicken.process-context.posix#current-group-id"));
lf[174]=C_h_intern(&lf[174],45, C_text("chicken.process-context.posix#current-user-id"));
lf[175]=C_h_intern(&lf[175],48, C_text("chicken.process-context.posix#current-process-id"));
lf[176]=C_h_intern(&lf[176],47, C_text("chicken.process-context.posix#parent-process-id"));
lf[177]=C_h_intern(&lf[177],47, C_text("chicken.process-context.posix#current-user-name"));
lf[178]=C_h_intern(&lf[178],57, C_text("chicken.process-context.posix#current-effective-user-name"));
lf[179]=C_h_intern(&lf[179],44, C_text("chicken.process-context.posix#create-session"));
lf[180]=C_h_intern(&lf[180],46, C_text("chicken.process-context.posix#process-group-id"));
lf[181]=C_h_intern(&lf[181],46, C_text("chicken.process-context.posix#user-information"));
lf[182]=C_h_intern(&lf[182],14, C_text("chicken.posix#"));
lf[184]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003 - "));
lf[185]=C_h_intern(&lf[185],19, C_text("##sys#peek-c-string"));
lf[186]=C_h_intern(&lf[186],17, C_text("##sys#posix-error"));
lf[188]=C_h_intern_kw(&lf[188],10, C_text("file-error"));
lf[189]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022cannot access file"));
lf[190]=C_h_intern(&lf[190],19, C_text("##sys#make-c-string"));
lf[191]=C_h_intern_kw(&lf[191],10, C_text("type-error"));
lf[192]=C_decode_literal(C_heaptop,C_text("\376B\000\0000bad argument type - not a fixnum, port or string"));
lf[193]=C_h_intern(&lf[193],18, C_text("chicken.base#port\077"));
lf[194]=C_h_intern(&lf[194],28, C_text("chicken.file.posix#file-stat"));
lf[195]=C_h_intern(&lf[195],9, C_text("file-stat"));
lf[196]=C_h_intern(&lf[196],40, C_text("chicken.file.posix#set-file-permissions!"));
lf[197]=C_h_intern(&lf[197],21, C_text("set-file-permissions!"));
lf[198]=C_decode_literal(C_heaptop,C_text("\376B\000\000\036cannot change file permissions"));
lf[199]=C_h_intern(&lf[199],16, C_text("file-permissions"));
lf[200]=C_decode_literal(C_heaptop,C_text("\376B\000\0000bad argument type - not a fixnum, port or string"));
lf[201]=C_h_intern(&lf[201],18, C_text("##sys#check-fixnum"));
lf[202]=C_h_intern(&lf[202],41, C_text("chicken.file.posix#file-modification-time"));
lf[203]=C_h_intern(&lf[203],22, C_text("file-modification-time"));
lf[204]=C_h_intern(&lf[204],35, C_text("chicken.file.posix#file-access-time"));
lf[205]=C_h_intern(&lf[205],16, C_text("file-access-time"));
lf[206]=C_h_intern(&lf[206],35, C_text("chicken.file.posix#file-change-time"));
lf[207]=C_h_intern(&lf[207],16, C_text("file-change-time"));
lf[208]=C_h_intern(&lf[208],34, C_text("chicken.file.posix#set-file-times!"));
lf[209]=C_h_intern(&lf[209],15, C_text("set-file-times!"));
lf[210]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025cannot set file times"));
lf[211]=C_h_intern(&lf[211],25, C_text("##sys#check-exact-integer"));
lf[212]=C_h_intern(&lf[212],28, C_text("chicken.time#current-seconds"));
lf[213]=C_h_intern(&lf[213],28, C_text("chicken.file.posix#file-size"));
lf[214]=C_h_intern(&lf[214],9, C_text("file-size"));
lf[215]=C_h_intern(&lf[215],34, C_text("chicken.file.posix#set-file-owner!"));
lf[217]=C_h_intern(&lf[217],15, C_text("set-file-owner!"));
lf[218]=C_h_intern(&lf[218],34, C_text("chicken.file.posix#set-file-group!"));
lf[219]=C_h_intern(&lf[219],15, C_text("set-file-group!"));
lf[220]=C_h_intern(&lf[220],12, C_text("regular-file"));
lf[221]=C_h_intern(&lf[221],13, C_text("symbolic-link"));
lf[222]=C_h_intern(&lf[222],9, C_text("directory"));
lf[223]=C_h_intern(&lf[223],16, C_text("character-device"));
lf[224]=C_h_intern(&lf[224],12, C_text("block-device"));
lf[225]=C_h_intern(&lf[225],4, C_text("fifo"));
lf[226]=C_h_intern(&lf[226],6, C_text("socket"));
lf[227]=C_h_intern(&lf[227],9, C_text("file-type"));
lf[228]=C_h_intern(&lf[228],18, C_text("set-file-position!"));
lf[229]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030cannot set file position"));
lf[230]=C_h_intern(&lf[230],6, C_text("stream"));
lf[231]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014invalid file"));
lf[232]=C_h_intern_kw(&lf[232],6, C_text("append"));
lf[233]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001a"));
lf[234]=C_decode_literal(C_heaptop,C_text("\376B\000\000\033invalid mode for input file"));
lf[235]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025invalid mode argument"));
lf[236]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001r"));
lf[237]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001w"));
lf[238]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020cannot open file"));
lf[239]=C_h_intern(&lf[239],15, C_text("##sys#make-port"));
lf[240]=C_h_intern(&lf[240],23, C_text("##sys#stream-port-class"));
lf[241]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010(fdport)"));
lf[242]=C_h_intern(&lf[242],16, C_text("open-input-file\052"));
lf[243]=C_h_intern(&lf[243],17, C_text("open-output-file\052"));
lf[244]=C_h_intern(&lf[244],12, C_text("port->fileno"));
lf[245]=C_h_intern(&lf[245],15, C_text("##sys#port-data"));
lf[246]=C_decode_literal(C_heaptop,C_text("\376B\000\000%cannot access file-descriptor of port"));
lf[247]=C_decode_literal(C_heaptop,C_text("\376B\000\000\031port has no attached file"));
lf[248]=C_h_intern(&lf[248],27, C_text("##sys#peek-unsigned-integer"));
lf[249]=C_h_intern(&lf[249],16, C_text("duplicate-fileno"));
lf[250]=C_decode_literal(C_heaptop,C_text("\376B\000\000 cannot duplicate file-descriptor"));
lf[251]=C_h_intern(&lf[251],17, C_text("change-directory\052"));
lf[252]=C_decode_literal(C_heaptop,C_text("\376B\000\000\037cannot change current directory"));
lf[253]=C_h_intern(&lf[253],27, C_text("##sys#change-directory-hook"));
lf[256]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025time vector too short"));
lf[257]=C_h_intern(&lf[257],19, C_text("seconds->local-time"));
lf[258]=C_h_intern(&lf[258],17, C_text("seconds->utc-time"));
lf[259]=C_h_intern(&lf[259],15, C_text("##sys#substring"));
lf[260]=C_h_intern(&lf[260],15, C_text("seconds->string"));
lf[261]=C_decode_literal(C_heaptop,C_text("\376B\000\000 cannot convert seconds to string"));
lf[262]=C_h_intern(&lf[262],19, C_text("local-time->seconds"));
lf[263]=C_decode_literal(C_heaptop,C_text("\376B\000\000%cannot convert time vector to seconds"));
lf[264]=C_h_intern(&lf[264],17, C_text("##sys#make-string"));
lf[265]=C_h_intern(&lf[265],12, C_text("time->string"));
lf[266]=C_decode_literal(C_heaptop,C_text("\376B\000\000 time formatting overflows buffer"));
lf[267]=C_decode_literal(C_heaptop,C_text("\376B\000\000$cannot convert time vector to string"));
lf[268]=C_h_intern(&lf[268],19, C_text("##sys#signal-vector"));
lf[269]=C_h_intern(&lf[269],19, C_text("set-signal-handler!"));
lf[270]=C_h_intern(&lf[270],13, C_text("process-sleep"));
lf[272]=C_h_intern(&lf[272],12, C_text("process-wait"));
lf[273]=C_decode_literal(C_heaptop,C_text("\376B\000\000 waiting for child process failed"));
lf[275]=C_h_intern(&lf[275],24, C_text("chicken.condition#signal"));
lf[277]=C_h_intern(&lf[277],34, C_text("chicken.memory#pointer-vector-set!"));
lf[278]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015Out of memory"));
lf[279]=C_h_intern(&lf[279],40, C_text("chicken.condition#with-exception-handler"));
lf[280]=C_h_intern(&lf[280],37, C_text("scheme#call-with-current-continuation"));
lf[281]=C_h_intern(&lf[281],34, C_text("chicken.memory#make-pointer-vector"));
lf[282]=C_h_intern(&lf[282],19, C_text("chicken.memory#free"));
lf[283]=C_h_intern(&lf[283],33, C_text("chicken.memory#pointer-vector-ref"));
lf[284]=C_h_intern(&lf[284],36, C_text("chicken.memory#pointer-vector-length"));
lf[286]=C_h_intern(&lf[286],41, C_text("chicken.pathname#pathname-strip-directory"));
lf[288]=C_h_intern(&lf[288],3, C_text("map"));
lf[289]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001="));
lf[290]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020cannot open pipe"));
lf[291]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006(pipe)"));
lf[292]=C_h_intern(&lf[292],15, C_text("open-input-pipe"));
lf[293]=C_h_intern_kw(&lf[293],4, C_text("text"));
lf[294]=C_h_intern_kw(&lf[294],6, C_text("binary"));
lf[295]=C_decode_literal(C_heaptop,C_text("\376B\000\000#illegal input/output mode specifier"));
lf[296]=C_h_intern(&lf[296],16, C_text("open-output-pipe"));
lf[297]=C_h_intern(&lf[297],16, C_text("close-input-pipe"));
lf[298]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030error while closing pipe"));
lf[299]=C_h_intern(&lf[299],17, C_text("close-output-pipe"));
lf[300]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030error while closing pipe"));
lf[301]=C_h_intern(&lf[301],20, C_text("##sys#standard-input"));
lf[302]=C_h_intern(&lf[302],13, C_text("scheme#values"));
lf[303]=C_h_intern(&lf[303],18, C_text("##sys#dynamic-wind"));
lf[304]=C_h_intern(&lf[304],21, C_text("##sys#standard-output"));
lf[305]=C_h_intern(&lf[305],23, C_text("##sys#file-nonblocking!"));
lf[306]=C_h_intern(&lf[306],21, C_text("##sys#file-select-one"));
lf[307]=C_h_intern(&lf[307],12, C_text("file-control"));
lf[308]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023cannot control file"));
lf[309]=C_h_intern(&lf[309],9, C_text("file-open"));
lf[310]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020cannot open file"));
lf[311]=C_h_intern(&lf[311],24, C_text("##sys#dispatch-interrupt"));
lf[312]=C_h_intern(&lf[312],10, C_text("file-close"));
lf[313]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021cannot close file"));
lf[314]=C_h_intern(&lf[314],9, C_text("file-read"));
lf[315]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025cannot read from file"));
lf[316]=C_decode_literal(C_heaptop,C_text("\376B\000\000(bad argument type - not a string or blob"));
lf[317]=C_h_intern(&lf[317],18, C_text("scheme#make-string"));
lf[318]=C_h_intern(&lf[318],10, C_text("file-write"));
lf[319]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024cannot write to file"));
lf[320]=C_decode_literal(C_heaptop,C_text("\376B\000\000(bad argument type - not a string or blob"));
lf[321]=C_h_intern(&lf[321],12, C_text("file-mkstemp"));
lf[322]=C_decode_literal(C_heaptop,C_text("\376B\000\000\034cannot create temporary file"));
lf[323]=C_h_intern(&lf[323],11, C_text("file-select"));
lf[324]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006failed"));
lf[325]=C_h_intern(&lf[325],18, C_text("##sys#fast-reverse"));
lf[326]=C_h_intern(&lf[326],10, C_text("scheme#max"));
lf[327]=C_h_intern(&lf[327],15, C_text("##sys#make-blob"));
lf[328]=C_h_intern(&lf[328],11, C_text("create-pipe"));
lf[329]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022cannot create pipe"));
lf[330]=C_h_intern(&lf[330],16, C_text("set-signal-mask!"));
lf[331]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026cannot set signal mask"));
lf[332]=C_h_intern(&lf[332],14, C_text("signal-masked\077"));
lf[333]=C_h_intern(&lf[333],12, C_text("signal-mask!"));
lf[334]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023cannot block signal"));
lf[335]=C_h_intern(&lf[335],14, C_text("signal-unmask!"));
lf[336]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025cannot unblock signal"));
lf[337]=C_h_intern(&lf[337],13, C_text("scheme#vector"));
lf[338]=C_h_intern(&lf[338],11, C_text("scheme#list"));
lf[339]=C_h_intern(&lf[339],27, C_text("##sys#peek-nonnull-c-string"));
lf[340]=C_h_intern(&lf[340],16, C_text("user-information"));
lf[341]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030cannot change file owner"));
lf[342]=C_decode_literal(C_heaptop,C_text("\376B\000\0000bad argument type - not a fixnum, port or string"));
lf[343]=C_h_intern(&lf[343],14, C_text("create-session"));
lf[344]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025cannot create session"));
lf[345]=C_h_intern(&lf[345],20, C_text("create-symbolic-link"));
lf[346]=C_h_intern(&lf[346],18, C_text("create-symbol-link"));
lf[347]=C_decode_literal(C_heaptop,C_text("\376B\000\000\033cannot create symbolic link"));
lf[348]=C_h_intern(&lf[348],24, C_text("##sys#read-symbolic-link"));
lf[349]=C_decode_literal(C_heaptop,C_text("\376B\000\000\031cannot read symbolic link"));
lf[350]=C_h_intern(&lf[350],16, C_text("scheme#substring"));
lf[351]=C_h_intern(&lf[351],18, C_text("read-symbolic-link"));
lf[352]=C_h_intern(&lf[352],36, C_text("chicken.pathname#decompose-directory"));
lf[353]=C_h_intern(&lf[353],30, C_text("chicken.pathname#make-pathname"));
lf[354]=C_h_intern(&lf[354],35, C_text("chicken.pathname#absolute-pathname\077"));
lf[355]=C_decode_literal(C_heaptop,C_text("\376B\000\000Icould not canonicalize path with symbolic links, component does not exist"));
lf[356]=C_h_intern(&lf[356],18, C_text("##sys#file-exists\077"));
lf[357]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[358]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[359]=C_h_intern(&lf[359],9, C_text("file-link"));
lf[360]=C_h_intern(&lf[360],9, C_text("hard-link"));
lf[361]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032could not create hard link"));
lf[362]=C_h_intern(&lf[362],23, C_text("##sys#custom-input-port"));
lf[363]=C_h_intern(&lf[363],17, C_text("chicken.base#void"));
lf[364]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015cannot select"));
lf[365]=C_h_intern(&lf[365],19, C_text("##sys#thread-yield!"));
lf[366]=C_h_intern(&lf[366],27, C_text("##sys#thread-block-for-i/o!"));
lf[367]=C_h_intern(&lf[367],20, C_text("##sys#current-thread"));
lf[368]=C_h_intern_kw(&lf[368],5, C_text("input"));
lf[369]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013cannot read"));
lf[370]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013cannot read"));
lf[371]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014cannot close"));
lf[372]=C_h_intern(&lf[372],35, C_text("chicken.fixnum#most-positive-fixnum"));
lf[373]=C_h_intern(&lf[373],22, C_text("##sys#scan-buffer-line"));
lf[374]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[375]=C_h_intern(&lf[375],28, C_text("chicken.port#make-input-port"));
lf[376]=C_h_intern(&lf[376],24, C_text("##sys#custom-output-port"));
lf[377]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014cannot write"));
lf[378]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014cannot close"));
lf[379]=C_h_intern(&lf[379],29, C_text("chicken.port#make-output-port"));
lf[380]=C_h_intern(&lf[380],13, C_text("file-truncate"));
lf[381]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024cannot truncate file"));
lf[382]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014invalid file"));
lf[383]=C_h_intern(&lf[383],4, C_text("lock"));
lf[384]=C_h_intern(&lf[384],9, C_text("file-lock"));
lf[385]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020cannot lock file"));
lf[386]=C_h_intern(&lf[386],18, C_text("file-lock/blocking"));
lf[387]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020cannot lock file"));
lf[388]=C_h_intern(&lf[388],14, C_text("file-test-lock"));
lf[389]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022cannot unlock file"));
lf[390]=C_h_intern(&lf[390],11, C_text("file-unlock"));
lf[391]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022cannot unlock file"));
lf[392]=C_h_intern(&lf[392],11, C_text("create-fifo"));
lf[393]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022cannot create FIFO"));
lf[394]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027%a %b %e %H:%M:%S %Z %Y"));
lf[395]=C_h_intern(&lf[395],12, C_text("string->time"));
lf[396]=C_h_intern(&lf[396],17, C_text("utc-time->seconds"));
lf[397]=C_decode_literal(C_heaptop,C_text("\376B\000\000%cannot convert time vector to seconds"));
lf[398]=C_h_intern(&lf[398],24, C_text("##sys#kill-other-threads"));
lf[399]=C_h_intern(&lf[399],17, C_text("chicken.base#exit"));
lf[400]=C_h_intern(&lf[400],23, C_text("##sys#call-with-cthulhu"));
lf[401]=C_h_intern(&lf[401],12, C_text("process-fork"));
lf[402]=C_decode_literal(C_heaptop,C_text("\376B\000\000\033cannot create child process"));
lf[403]=C_h_intern(&lf[403],15, C_text("process-execute"));
lf[404]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026cannot execute process"));
lf[405]=C_h_intern(&lf[405],14, C_text("process-signal"));
lf[406]=C_decode_literal(C_heaptop,C_text("\376B\000\000 could not send signal to process"));
lf[407]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007/bin/sh"));
lf[408]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-c"));
lf[409]=C_h_intern(&lf[409],48, C_text("chicken.process-context#get-environment-variable"));
lf[410]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005SHELL"));
lf[411]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025abnormal process exit"));
lf[413]=C_h_intern(&lf[413],7, C_text("process"));
lf[414]=C_h_intern(&lf[414],8, C_text("process\052"));
lf[415]=C_h_intern(&lf[415],19, C_text("set-root-directory!"));
lf[416]=C_decode_literal(C_heaptop,C_text("\376B\000\000\037unable to change root directory"));
lf[417]=C_decode_literal(C_heaptop,C_text("\376B\000\000/this function is not available on this platform"));
lf[418]=C_h_intern(&lf[418],14, C_text("chicken.errno#"));
lf[419]=C_h_intern(&lf[419],19, C_text("chicken.errno#errno"));
lf[420]=C_h_intern(&lf[420],11, C_text("##sys#errno"));
lf[421]=C_h_intern(&lf[421],24, C_text("chicken.errno#errno/2big"));
lf[422]=C_h_intern(&lf[422],25, C_text("chicken.errno#errno/acces"));
lf[423]=C_h_intern(&lf[423],25, C_text("chicken.errno#errno/again"));
lf[424]=C_h_intern(&lf[424],24, C_text("chicken.errno#errno/badf"));
lf[425]=C_h_intern(&lf[425],24, C_text("chicken.errno#errno/busy"));
lf[426]=C_h_intern(&lf[426],25, C_text("chicken.errno#errno/child"));
lf[427]=C_h_intern(&lf[427],26, C_text("chicken.errno#errno/deadlk"));
lf[428]=C_h_intern(&lf[428],23, C_text("chicken.errno#errno/dom"));
lf[429]=C_h_intern(&lf[429],25, C_text("chicken.errno#errno/exist"));
lf[430]=C_h_intern(&lf[430],25, C_text("chicken.errno#errno/fault"));
lf[431]=C_h_intern(&lf[431],24, C_text("chicken.errno#errno/fbig"));
lf[432]=C_h_intern(&lf[432],25, C_text("chicken.errno#errno/ilseq"));
lf[433]=C_h_intern(&lf[433],24, C_text("chicken.errno#errno/intr"));
lf[434]=C_h_intern(&lf[434],25, C_text("chicken.errno#errno/inval"));
lf[435]=C_h_intern(&lf[435],22, C_text("chicken.errno#errno/io"));
lf[436]=C_h_intern(&lf[436],25, C_text("chicken.errno#errno/isdir"));
lf[437]=C_h_intern(&lf[437],25, C_text("chicken.errno#errno/mfile"));
lf[438]=C_h_intern(&lf[438],25, C_text("chicken.errno#errno/mlink"));
lf[439]=C_h_intern(&lf[439],31, C_text("chicken.errno#errno/nametoolong"));
lf[440]=C_h_intern(&lf[440],25, C_text("chicken.errno#errno/nfile"));
lf[441]=C_h_intern(&lf[441],25, C_text("chicken.errno#errno/nodev"));
lf[442]=C_h_intern(&lf[442],25, C_text("chicken.errno#errno/noent"));
lf[443]=C_h_intern(&lf[443],26, C_text("chicken.errno#errno/noexec"));
lf[444]=C_h_intern(&lf[444],25, C_text("chicken.errno#errno/nolck"));
lf[445]=C_h_intern(&lf[445],25, C_text("chicken.errno#errno/nomem"));
lf[446]=C_h_intern(&lf[446],25, C_text("chicken.errno#errno/nospc"));
lf[447]=C_h_intern(&lf[447],25, C_text("chicken.errno#errno/nosys"));
lf[448]=C_h_intern(&lf[448],26, C_text("chicken.errno#errno/notdir"));
lf[449]=C_h_intern(&lf[449],28, C_text("chicken.errno#errno/notempty"));
lf[450]=C_h_intern(&lf[450],25, C_text("chicken.errno#errno/notty"));
lf[451]=C_h_intern(&lf[451],24, C_text("chicken.errno#errno/nxio"));
lf[452]=C_h_intern(&lf[452],24, C_text("chicken.errno#errno/perm"));
lf[453]=C_h_intern(&lf[453],24, C_text("chicken.errno#errno/pipe"));
lf[454]=C_h_intern(&lf[454],25, C_text("chicken.errno#errno/range"));
lf[455]=C_h_intern(&lf[455],24, C_text("chicken.errno#errno/rofs"));
lf[456]=C_h_intern(&lf[456],25, C_text("chicken.errno#errno/spipe"));
lf[457]=C_h_intern(&lf[457],24, C_text("chicken.errno#errno/srch"));
lf[458]=C_h_intern(&lf[458],30, C_text("chicken.errno#errno/wouldblock"));
lf[459]=C_h_intern(&lf[459],24, C_text("chicken.errno#errno/xdev"));
lf[460]=C_h_intern(&lf[460],16, C_text("process-group-id"));
lf[461]=C_decode_literal(C_heaptop,C_text("\376B\000\000 cannot retrieve process group ID"));
lf[462]=C_h_intern(&lf[462],13, C_text("process-group"));
lf[463]=C_decode_literal(C_heaptop,C_text("\376B\000\000\033cannot set process group ID"));
lf[464]=C_h_intern(&lf[464],31, C_text("chicken.base#getter-with-setter"));
lf[465]=C_decode_literal(C_heaptop,C_text("\376B\000\0004(chicken.process-context.posix#process-group-id pid)"));
lf[466]=C_h_intern(&lf[466],26, C_text("effective-group-id!-setter"));
lf[467]=C_decode_literal(C_heaptop,C_text("\376B\000\000\035cannot set effective group ID"));
lf[468]=C_h_intern(&lf[468],26, C_text("current-effective-group-id"));
lf[469]=C_decode_literal(C_heaptop,C_text("\376B\000\000:(chicken.process-context.posix#current-effective-group-id)"));
lf[470]=C_h_intern(&lf[470],24, C_text("current-group-id!-setter"));
lf[471]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023cannot set group ID"));
lf[472]=C_h_intern(&lf[472],16, C_text("current-group-id"));
lf[473]=C_decode_literal(C_heaptop,C_text("\376B\000\0000(chicken.process-context.posix#current-group-id)"));
lf[474]=C_h_intern(&lf[474],25, C_text("effective-user-id!-setter"));
lf[475]=C_decode_literal(C_heaptop,C_text("\376B\000\000\034cannot set effective user ID"));
lf[476]=C_h_intern(&lf[476],25, C_text("current-effective-user-id"));
lf[477]=C_decode_literal(C_heaptop,C_text("\376B\000\0009(chicken.process-context.posix#current-effective-user-id)"));
lf[478]=C_h_intern(&lf[478],23, C_text("current-user-id!-setter"));
lf[479]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022cannot set user ID"));
lf[480]=C_h_intern(&lf[480],15, C_text("current-user-id"));
lf[481]=C_decode_literal(C_heaptop,C_text("\376B\000\000/(chicken.process-context.posix#current-user-id)"));
lf[482]=C_decode_literal(C_heaptop,C_text("\376B\000\000$(chicken.process.signal#signal-mask)"));
lf[483]=C_h_intern(&lf[483],14, C_text("signal-handler"));
lf[484]=C_decode_literal(C_heaptop,C_text("\376B\000\000+(chicken.process.signal#signal-handler sig)"));
lf[485]=C_h_intern(&lf[485],18, C_text("file-creation-mode"));
lf[486]=C_decode_literal(C_heaptop,C_text("\376B\000\000,(chicken.file.posix#file-creation-mode mode)"));
lf[487]=C_h_intern(&lf[487],13, C_text("file-position"));
lf[488]=C_decode_literal(C_heaptop,C_text("\376B\000\000%cannot retrieve file position of port"));
lf[489]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014invalid file"));
lf[490]=C_decode_literal(C_heaptop,C_text("\376B\000\000\047(chicken.file.posix#file-position port)"));
lf[491]=C_decode_literal(C_heaptop,C_text("\376B\000\000\047(chicken.file.posix#file-permissions f)"));
lf[492]=C_h_intern(&lf[492],10, C_text("file-group"));
lf[493]=C_decode_literal(C_heaptop,C_text("\376B\000\000!(chicken.file.posix#file-group f)"));
lf[494]=C_h_intern(&lf[494],10, C_text("file-owner"));
lf[495]=C_decode_literal(C_heaptop,C_text("\376B\000\000!(chicken.file.posix#file-owner f)"));
C_register_lf2(lf,496,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2641,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_scheduler_toplevel(2,av2);}}

/* va8716 in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_fcall va8716(C_word t0,C_word t1){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(114,0,4)))){
C_save_and_reclaim_args((void *)trva8716,2,t0,t1);}
a=C_alloc(114);
t2=C_s_a_i_bitwise_ior(&a,2,t1,C_fix((C_word)S_IWOTH));
t3=C_mutate((C_word*)lf[19]+1 /* (set! chicken.file.posix#file-open ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4644,a[2]=t2,a[3]=((C_word)li94),tmp=(C_word)a,a+=4,tmp));
t4=C_mutate((C_word*)lf[11]+1 /* (set! chicken.file.posix#file-close ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4676,a[2]=((C_word)li96),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[23]+1 /* (set! chicken.file.posix#file-read ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4707,a[2]=((C_word)li97),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[28]+1 /* (set! chicken.file.posix#file-write ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4747,a[2]=((C_word)li98),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[18]+1 /* (set! chicken.file.posix#file-mkstemp ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4784,a[2]=((C_word)li99),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[24]+1 /* (set! chicken.file.posix#file-select ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4816,a[2]=((C_word)li104),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[117]+1 /* (set! chicken.process#create-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5193,a[2]=((C_word)li105),tmp=(C_word)a,a+=3,tmp));
t10=C_set_block_item(lf[157] /* chicken.process.signal#signal/term */,0,C_fix((C_word)SIGTERM));
t11=C_set_block_item(lf[151] /* chicken.process.signal#signal/kill */,0,C_fix((C_word)SIGKILL));
t12=C_set_block_item(lf[149] /* chicken.process.signal#signal/int */,0,C_fix((C_word)SIGINT));
t13=C_set_block_item(lf[147] /* chicken.process.signal#signal/hup */,0,C_fix((C_word)SIGHUP));
t14=C_set_block_item(lf[146] /* chicken.process.signal#signal/fpe */,0,C_fix((C_word)SIGFPE));
t15=C_set_block_item(lf[148] /* chicken.process.signal#signal/ill */,0,C_fix((C_word)SIGILL));
t16=C_set_block_item(lf[155] /* chicken.process.signal#signal/segv */,0,C_fix((C_word)SIGSEGV));
t17=C_set_block_item(lf[140] /* chicken.process.signal#signal/abrt */,0,C_fix((C_word)SIGABRT));
t18=C_set_block_item(lf[158] /* chicken.process.signal#signal/trap */,0,C_fix((C_word)SIGTRAP));
t19=C_set_block_item(lf[154] /* chicken.process.signal#signal/quit */,0,C_fix((C_word)SIGQUIT));
t20=C_set_block_item(lf[141] /* chicken.process.signal#signal/alrm */,0,C_fix((C_word)SIGALRM));
t21=C_set_block_item(lf[163] /* chicken.process.signal#signal/vtalrm */,0,C_fix((C_word)SIGVTALRM));
t22=C_set_block_item(lf[153] /* chicken.process.signal#signal/prof */,0,C_fix((C_word)SIGPROF));
t23=C_set_block_item(lf[150] /* chicken.process.signal#signal/io */,0,C_fix((C_word)SIGIO));
t24=C_set_block_item(lf[160] /* chicken.process.signal#signal/urg */,0,C_fix((C_word)SIGURG));
t25=C_set_block_item(lf[144] /* chicken.process.signal#signal/chld */,0,C_fix((C_word)SIGCHLD));
t26=C_set_block_item(lf[145] /* chicken.process.signal#signal/cont */,0,C_fix((C_word)SIGCONT));
t27=C_set_block_item(lf[156] /* chicken.process.signal#signal/stop */,0,C_fix((C_word)SIGSTOP));
t28=C_set_block_item(lf[159] /* chicken.process.signal#signal/tstp */,0,C_fix((C_word)SIGTSTP));
t29=C_set_block_item(lf[152] /* chicken.process.signal#signal/pipe */,0,C_fix((C_word)SIGPIPE));
t30=C_set_block_item(lf[165] /* chicken.process.signal#signal/xcpu */,0,C_fix((C_word)SIGXCPU));
t31=C_set_block_item(lf[166] /* chicken.process.signal#signal/xfsz */,0,C_fix((C_word)SIGXFSZ));
t32=C_set_block_item(lf[161] /* chicken.process.signal#signal/usr1 */,0,C_fix((C_word)SIGUSR1));
t33=C_set_block_item(lf[162] /* chicken.process.signal#signal/usr2 */,0,C_fix((C_word)SIGUSR2));
t34=C_set_block_item(lf[164] /* chicken.process.signal#signal/winch */,0,C_fix((C_word)SIGWINCH));
t35=C_set_block_item(lf[143] /* chicken.process.signal#signal/bus */,0,C_fix((C_word)SIGBUS));
t36=C_set_block_item(lf[142] /* chicken.process.signal#signal/break */,0,C_fix(0));
t37=C_a_i_list(&a,26,*((C_word*)lf[157]+1),*((C_word*)lf[151]+1),*((C_word*)lf[149]+1),*((C_word*)lf[147]+1),*((C_word*)lf[146]+1),*((C_word*)lf[148]+1),*((C_word*)lf[155]+1),*((C_word*)lf[140]+1),*((C_word*)lf[158]+1),*((C_word*)lf[154]+1),*((C_word*)lf[141]+1),*((C_word*)lf[163]+1),*((C_word*)lf[153]+1),*((C_word*)lf[150]+1),*((C_word*)lf[160]+1),*((C_word*)lf[144]+1),*((C_word*)lf[145]+1),*((C_word*)lf[156]+1),*((C_word*)lf[159]+1),*((C_word*)lf[152]+1),*((C_word*)lf[165]+1),*((C_word*)lf[166]+1),*((C_word*)lf[161]+1),*((C_word*)lf[162]+1),*((C_word*)lf[164]+1),*((C_word*)lf[143]+1));
t38=C_mutate((C_word*)lf[167]+1 /* (set! chicken.process.signal#signals-list ...) */,t37);
t39=C_mutate((C_word*)lf[134]+1 /* (set! chicken.process.signal#set-signal-mask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5249,a[2]=((C_word)li107),tmp=(C_word)a,a+=3,tmp));
t40=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5298,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t41=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7779,a[2]=((C_word)li211),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:564: chicken.base#getter-with-setter */
t42=*((C_word*)lf[464]+1);{
C_word av2[5];
av2[0]=t42;
av2[1]=t40;
av2[2]=t41;
av2[3]=*((C_word*)lf[134]+1);
av2[4]=lf[482];
((C_proc)(void*)(*((C_word*)t42+1)))(5,av2);}}

/* va8718 in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_fcall va8718(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,1)))){
C_save_and_reclaim_args((void *)trva8718,2,t0,t1);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
va8716(t2,C_s_a_i_bitwise_ior(&a,2,t1,C_fix((C_word)S_IROTH)));}

/* va8720 in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_fcall va8720(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,1)))){
C_save_and_reclaim_args((void *)trva8720,2,t0,t1);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
va8718(t2,C_s_a_i_bitwise_ior(&a,2,t1,C_fix((C_word)S_IWGRP)));}

/* va8722 in k3881 in k3646 in k3429 in k3212 in k3208 in k3204 in k2654 in k2651 in k2648 in k2645 in k2642 in k2639 */
static void C_fcall va8722(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,1)))){
C_save_and_reclaim_args((void *)trva8722,2,t0,t1);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
va8720(t2,C_s_a_i_bitwise_ior(&a,2,t1,C_fix((C_word)S_IRGRP)));}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[519] = {
{C_text("f8727:posix_2escm"),(void*)f8727},
{C_text("f8731:posix_2escm"),(void*)f8731},
{C_text("f8773:posix_2escm"),(void*)f8773},
{C_text("f8779:posix_2escm"),(void*)f8779},
{C_text("f_2641:posix_2escm"),(void*)f_2641},
{C_text("f_2644:posix_2escm"),(void*)f_2644},
{C_text("f_2647:posix_2escm"),(void*)f_2647},
{C_text("f_2650:posix_2escm"),(void*)f_2650},
{C_text("f_2653:posix_2escm"),(void*)f_2653},
{C_text("f_2656:posix_2escm"),(void*)f_2656},
{C_text("f_2742:posix_2escm"),(void*)f_2742},
{C_text("f_2755:posix_2escm"),(void*)f_2755},
{C_text("f_2760:posix_2escm"),(void*)f_2760},
{C_text("f_2764:posix_2escm"),(void*)f_2764},
{C_text("f_2776:posix_2escm"),(void*)f_2776},
{C_text("f_2780:posix_2escm"),(void*)f_2780},
{C_text("f_2790:posix_2escm"),(void*)f_2790},
{C_text("f_2811:posix_2escm"),(void*)f_2811},
{C_text("f_2814:posix_2escm"),(void*)f_2814},
{C_text("f_2825:posix_2escm"),(void*)f_2825},
{C_text("f_2831:posix_2escm"),(void*)f_2831},
{C_text("f_2856:posix_2escm"),(void*)f_2856},
{C_text("f_2963:posix_2escm"),(void*)f_2963},
{C_text("f_2967:posix_2escm"),(void*)f_2967},
{C_text("f_2974:posix_2escm"),(void*)f_2974},
{C_text("f_2978:posix_2escm"),(void*)f_2978},
{C_text("f_2981:posix_2escm"),(void*)f_2981},
{C_text("f_2985:posix_2escm"),(void*)f_2985},
{C_text("f_3006:posix_2escm"),(void*)f_3006},
{C_text("f_3010:posix_2escm"),(void*)f_3010},
{C_text("f_3019:posix_2escm"),(void*)f_3019},
{C_text("f_3027:posix_2escm"),(void*)f_3027},
{C_text("f_3034:posix_2escm"),(void*)f_3034},
{C_text("f_3045:posix_2escm"),(void*)f_3045},
{C_text("f_3049:posix_2escm"),(void*)f_3049},
{C_text("f_3052:posix_2escm"),(void*)f_3052},
{C_text("f_3070:posix_2escm"),(void*)f_3070},
{C_text("f_3074:posix_2escm"),(void*)f_3074},
{C_text("f_3084:posix_2escm"),(void*)f_3084},
{C_text("f_3089:posix_2escm"),(void*)f_3089},
{C_text("f_3093:posix_2escm"),(void*)f_3093},
{C_text("f_3095:posix_2escm"),(void*)f_3095},
{C_text("f_3099:posix_2escm"),(void*)f_3099},
{C_text("f_3101:posix_2escm"),(void*)f_3101},
{C_text("f_3105:posix_2escm"),(void*)f_3105},
{C_text("f_3107:posix_2escm"),(void*)f_3107},
{C_text("f_3111:posix_2escm"),(void*)f_3111},
{C_text("f_3123:posix_2escm"),(void*)f_3123},
{C_text("f_3126:posix_2escm"),(void*)f_3126},
{C_text("f_3132:posix_2escm"),(void*)f_3132},
{C_text("f_3142:posix_2escm"),(void*)f_3142},
{C_text("f_3186:posix_2escm"),(void*)f_3186},
{C_text("f_3190:posix_2escm"),(void*)f_3190},
{C_text("f_3192:posix_2escm"),(void*)f_3192},
{C_text("f_3198:posix_2escm"),(void*)f_3198},
{C_text("f_3206:posix_2escm"),(void*)f_3206},
{C_text("f_3210:posix_2escm"),(void*)f_3210},
{C_text("f_3214:posix_2escm"),(void*)f_3214},
{C_text("f_3216:posix_2escm"),(void*)f_3216},
{C_text("f_3235:posix_2escm"),(void*)f_3235},
{C_text("f_3303:posix_2escm"),(void*)f_3303},
{C_text("f_3311:posix_2escm"),(void*)f_3311},
{C_text("f_3313:posix_2escm"),(void*)f_3313},
{C_text("f_3321:posix_2escm"),(void*)f_3321},
{C_text("f_3323:posix_2escm"),(void*)f_3323},
{C_text("f_3331:posix_2escm"),(void*)f_3331},
{C_text("f_3333:posix_2escm"),(void*)f_3333},
{C_text("f_3341:posix_2escm"),(void*)f_3341},
{C_text("f_3343:posix_2escm"),(void*)f_3343},
{C_text("f_3351:posix_2escm"),(void*)f_3351},
{C_text("f_3353:posix_2escm"),(void*)f_3353},
{C_text("f_3361:posix_2escm"),(void*)f_3361},
{C_text("f_3363:posix_2escm"),(void*)f_3363},
{C_text("f_3371:posix_2escm"),(void*)f_3371},
{C_text("f_3376:posix_2escm"),(void*)f_3376},
{C_text("f_3383:posix_2escm"),(void*)f_3383},
{C_text("f_3386:posix_2escm"),(void*)f_3386},
{C_text("f_3392:posix_2escm"),(void*)f_3392},
{C_text("f_3398:posix_2escm"),(void*)f_3398},
{C_text("f_3431:posix_2escm"),(void*)f_3431},
{C_text("f_3459:posix_2escm"),(void*)f_3459},
{C_text("f_3467:posix_2escm"),(void*)f_3467},
{C_text("f_3496:posix_2escm"),(void*)f_3496},
{C_text("f_3509:posix_2escm"),(void*)f_3509},
{C_text("f_3515:posix_2escm"),(void*)f_3515},
{C_text("f_3519:posix_2escm"),(void*)f_3519},
{C_text("f_3527:posix_2escm"),(void*)f_3527},
{C_text("f_3529:posix_2escm"),(void*)f_3529},
{C_text("f_3533:posix_2escm"),(void*)f_3533},
{C_text("f_3541:posix_2escm"),(void*)f_3541},
{C_text("f_3543:posix_2escm"),(void*)f_3543},
{C_text("f_3559:posix_2escm"),(void*)f_3559},
{C_text("f_3568:posix_2escm"),(void*)f_3568},
{C_text("f_3582:posix_2escm"),(void*)f_3582},
{C_text("f_3588:posix_2escm"),(void*)f_3588},
{C_text("f_3592:posix_2escm"),(void*)f_3592},
{C_text("f_3595:posix_2escm"),(void*)f_3595},
{C_text("f_3598:posix_2escm"),(void*)f_3598},
{C_text("f_3613:posix_2escm"),(void*)f_3613},
{C_text("f_3615:posix_2escm"),(void*)f_3615},
{C_text("f_3618:posix_2escm"),(void*)f_3618},
{C_text("f_3622:posix_2escm"),(void*)f_3622},
{C_text("f_3625:posix_2escm"),(void*)f_3625},
{C_text("f_3634:posix_2escm"),(void*)f_3634},
{C_text("f_3648:posix_2escm"),(void*)f_3648},
{C_text("f_3651:posix_2escm"),(void*)f_3651},
{C_text("f_3670:posix_2escm"),(void*)f_3670},
{C_text("f_3674:posix_2escm"),(void*)f_3674},
{C_text("f_3677:posix_2escm"),(void*)f_3677},
{C_text("f_3691:posix_2escm"),(void*)f_3691},
{C_text("f_3695:posix_2escm"),(void*)f_3695},
{C_text("f_3698:posix_2escm"),(void*)f_3698},
{C_text("f_3723:posix_2escm"),(void*)f_3723},
{C_text("f_3727:posix_2escm"),(void*)f_3727},
{C_text("f_3730:posix_2escm"),(void*)f_3730},
{C_text("f_3733:posix_2escm"),(void*)f_3733},
{C_text("f_3761:posix_2escm"),(void*)f_3761},
{C_text("f_3765:posix_2escm"),(void*)f_3765},
{C_text("f_3769:posix_2escm"),(void*)f_3769},
{C_text("f_3806:posix_2escm"),(void*)f_3806},
{C_text("f_3813:posix_2escm"),(void*)f_3813},
{C_text("f_3822:posix_2escm"),(void*)f_3822},
{C_text("f_3832:posix_2escm"),(void*)f_3832},
{C_text("f_3836:posix_2escm"),(void*)f_3836},
{C_text("f_3839:posix_2escm"),(void*)f_3839},
{C_text("f_3860:posix_2escm"),(void*)f_3860},
{C_text("f_3868:posix_2escm"),(void*)f_3868},
{C_text("f_3872:posix_2escm"),(void*)f_3872},
{C_text("f_3883:posix_2escm"),(void*)f_3883},
{C_text("f_3885:posix_2escm"),(void*)f_3885},
{C_text("f_3889:posix_2escm"),(void*)f_3889},
{C_text("f_3891:posix_2escm"),(void*)f_3891},
{C_text("f_3910:posix_2escm"),(void*)f_3910},
{C_text("f_3915:posix_2escm"),(void*)f_3915},
{C_text("f_3921:posix_2escm"),(void*)f_3921},
{C_text("f_3962:posix_2escm"),(void*)f_3962},
{C_text("f_3970:posix_2escm"),(void*)f_3970},
{C_text("f_3973:posix_2escm"),(void*)f_3973},
{C_text("f_3978:posix_2escm"),(void*)f_3978},
{C_text("f_3984:posix_2escm"),(void*)f_3984},
{C_text("f_3990:posix_2escm"),(void*)f_3990},
{C_text("f_3994:posix_2escm"),(void*)f_3994},
{C_text("f_3999:posix_2escm"),(void*)f_3999},
{C_text("f_4001:posix_2escm"),(void*)f_4001},
{C_text("f_4005:posix_2escm"),(void*)f_4005},
{C_text("f_4007:posix_2escm"),(void*)f_4007},
{C_text("f_4023:posix_2escm"),(void*)f_4023},
{C_text("f_4029:posix_2escm"),(void*)f_4029},
{C_text("f_4032:posix_2escm"),(void*)f_4032},
{C_text("f_4048:posix_2escm"),(void*)f_4048},
{C_text("f_4058:posix_2escm"),(void*)f_4058},
{C_text("f_4064:posix_2escm"),(void*)f_4064},
{C_text("f_4075:posix_2escm"),(void*)f_4075},
{C_text("f_4079:posix_2escm"),(void*)f_4079},
{C_text("f_4083:posix_2escm"),(void*)f_4083},
{C_text("f_4088:posix_2escm"),(void*)f_4088},
{C_text("f_4098:posix_2escm"),(void*)f_4098},
{C_text("f_4101:posix_2escm"),(void*)f_4101},
{C_text("f_4113:posix_2escm"),(void*)f_4113},
{C_text("f_4118:posix_2escm"),(void*)f_4118},
{C_text("f_4137:posix_2escm"),(void*)f_4137},
{C_text("f_4160:posix_2escm"),(void*)f_4160},
{C_text("f_4162:posix_2escm"),(void*)f_4162},
{C_text("f_4166:posix_2escm"),(void*)f_4166},
{C_text("f_4172:posix_2escm"),(void*)f_4172},
{C_text("f_4175:posix_2escm"),(void*)f_4175},
{C_text("f_4180:posix_2escm"),(void*)f_4180},
{C_text("f_4186:posix_2escm"),(void*)f_4186},
{C_text("f_4192:posix_2escm"),(void*)f_4192},
{C_text("f_4196:posix_2escm"),(void*)f_4196},
{C_text("f_4199:posix_2escm"),(void*)f_4199},
{C_text("f_4207:posix_2escm"),(void*)f_4207},
{C_text("f_4213:posix_2escm"),(void*)f_4213},
{C_text("f_4217:posix_2escm"),(void*)f_4217},
{C_text("f_4224:posix_2escm"),(void*)f_4224},
{C_text("f_4227:posix_2escm"),(void*)f_4227},
{C_text("f_4231:posix_2escm"),(void*)f_4231},
{C_text("f_4252:posix_2escm"),(void*)f_4252},
{C_text("f_4254:posix_2escm"),(void*)f_4254},
{C_text("f_4279:posix_2escm"),(void*)f_4279},
{C_text("f_4288:posix_2escm"),(void*)f_4288},
{C_text("f_4294:posix_2escm"),(void*)f_4294},
{C_text("f_4319:posix_2escm"),(void*)f_4319},
{C_text("f_4332:posix_2escm"),(void*)f_4332},
{C_text("f_4338:posix_2escm"),(void*)f_4338},
{C_text("f_4352:posix_2escm"),(void*)f_4352},
{C_text("f_4359:posix_2escm"),(void*)f_4359},
{C_text("f_4369:posix_2escm"),(void*)f_4369},
{C_text("f_4378:posix_2escm"),(void*)f_4378},
{C_text("f_4392:posix_2escm"),(void*)f_4392},
{C_text("f_4399:posix_2escm"),(void*)f_4399},
{C_text("f_4409:posix_2escm"),(void*)f_4409},
{C_text("f_4418:posix_2escm"),(void*)f_4418},
{C_text("f_4425:posix_2escm"),(void*)f_4425},
{C_text("f_4433:posix_2escm"),(void*)f_4433},
{C_text("f_4440:posix_2escm"),(void*)f_4440},
{C_text("f_4448:posix_2escm"),(void*)f_4448},
{C_text("f_4452:posix_2escm"),(void*)f_4452},
{C_text("f_4457:posix_2escm"),(void*)f_4457},
{C_text("f_4462:posix_2escm"),(void*)f_4462},
{C_text("f_4468:posix_2escm"),(void*)f_4468},
{C_text("f_4472:posix_2escm"),(void*)f_4472},
{C_text("f_4477:posix_2escm"),(void*)f_4477},
{C_text("f_4482:posix_2escm"),(void*)f_4482},
{C_text("f_4486:posix_2escm"),(void*)f_4486},
{C_text("f_4491:posix_2escm"),(void*)f_4491},
{C_text("f_4497:posix_2escm"),(void*)f_4497},
{C_text("f_4501:posix_2escm"),(void*)f_4501},
{C_text("f_4506:posix_2escm"),(void*)f_4506},
{C_text("f_4510:posix_2escm"),(void*)f_4510},
{C_text("f_4515:posix_2escm"),(void*)f_4515},
{C_text("f_4521:posix_2escm"),(void*)f_4521},
{C_text("f_4525:posix_2escm"),(void*)f_4525},
{C_text("f_4530:posix_2escm"),(void*)f_4530},
{C_text("f_4534:posix_2escm"),(void*)f_4534},
{C_text("f_4539:posix_2escm"),(void*)f_4539},
{C_text("f_4544:posix_2escm"),(void*)f_4544},
{C_text("f_4550:posix_2escm"),(void*)f_4550},
{C_text("f_4554:posix_2escm"),(void*)f_4554},
{C_text("f_4559:posix_2escm"),(void*)f_4559},
{C_text("f_4564:posix_2escm"),(void*)f_4564},
{C_text("f_4571:posix_2escm"),(void*)f_4571},
{C_text("f_4611:posix_2escm"),(void*)f_4611},
{C_text("f_4618:posix_2escm"),(void*)f_4618},
{C_text("f_4621:posix_2escm"),(void*)f_4621},
{C_text("f_4644:posix_2escm"),(void*)f_4644},
{C_text("f_4654:posix_2escm"),(void*)f_4654},
{C_text("f_4657:posix_2escm"),(void*)f_4657},
{C_text("f_4661:posix_2escm"),(void*)f_4661},
{C_text("f_4664:posix_2escm"),(void*)f_4664},
{C_text("f_4676:posix_2escm"),(void*)f_4676},
{C_text("f_4680:posix_2escm"),(void*)f_4680},
{C_text("f_4685:posix_2escm"),(void*)f_4685},
{C_text("f_4707:posix_2escm"),(void*)f_4707},
{C_text("f_4711:posix_2escm"),(void*)f_4711},
{C_text("f_4714:posix_2escm"),(void*)f_4714},
{C_text("f_4717:posix_2escm"),(void*)f_4717},
{C_text("f_4720:posix_2escm"),(void*)f_4720},
{C_text("f_4723:posix_2escm"),(void*)f_4723},
{C_text("f_4747:posix_2escm"),(void*)f_4747},
{C_text("f_4751:posix_2escm"),(void*)f_4751},
{C_text("f_4754:posix_2escm"),(void*)f_4754},
{C_text("f_4760:posix_2escm"),(void*)f_4760},
{C_text("f_4763:posix_2escm"),(void*)f_4763},
{C_text("f_4784:posix_2escm"),(void*)f_4784},
{C_text("f_4791:posix_2escm"),(void*)f_4791},
{C_text("f_4797:posix_2escm"),(void*)f_4797},
{C_text("f_4804:posix_2escm"),(void*)f_4804},
{C_text("f_4816:posix_2escm"),(void*)f_4816},
{C_text("f_4823:posix_2escm"),(void*)f_4823},
{C_text("f_4826:posix_2escm"),(void*)f_4826},
{C_text("f_4834:posix_2escm"),(void*)f_4834},
{C_text("f_4837:posix_2escm"),(void*)f_4837},
{C_text("f_4898:posix_2escm"),(void*)f_4898},
{C_text("f_4901:posix_2escm"),(void*)f_4901},
{C_text("f_4908:posix_2escm"),(void*)f_4908},
{C_text("f_4938:posix_2escm"),(void*)f_4938},
{C_text("f_4997:posix_2escm"),(void*)f_4997},
{C_text("f_5058:posix_2escm"),(void*)f_5058},
{C_text("f_5065:posix_2escm"),(void*)f_5065},
{C_text("f_5067:posix_2escm"),(void*)f_5067},
{C_text("f_5109:posix_2escm"),(void*)f_5109},
{C_text("f_5193:posix_2escm"),(void*)f_5193},
{C_text("f_5200:posix_2escm"),(void*)f_5200},
{C_text("f_5249:posix_2escm"),(void*)f_5249},
{C_text("f_5258:posix_2escm"),(void*)f_5258},
{C_text("f_5261:posix_2escm"),(void*)f_5261},
{C_text("f_5273:posix_2escm"),(void*)f_5273},
{C_text("f_5298:posix_2escm"),(void*)f_5298},
{C_text("f_5300:posix_2escm"),(void*)f_5300},
{C_text("f_5304:posix_2escm"),(void*)f_5304},
{C_text("f_5306:posix_2escm"),(void*)f_5306},
{C_text("f_5310:posix_2escm"),(void*)f_5310},
{C_text("f_5322:posix_2escm"),(void*)f_5322},
{C_text("f_5326:posix_2escm"),(void*)f_5326},
{C_text("f_5340:posix_2escm"),(void*)f_5340},
{C_text("f_5344:posix_2escm"),(void*)f_5344},
{C_text("f_5348:posix_2escm"),(void*)f_5348},
{C_text("f_5352:posix_2escm"),(void*)f_5352},
{C_text("f_5354:posix_2escm"),(void*)f_5354},
{C_text("f_5361:posix_2escm"),(void*)f_5361},
{C_text("f_5374:posix_2escm"),(void*)f_5374},
{C_text("f_5378:posix_2escm"),(void*)f_5378},
{C_text("f_5382:posix_2escm"),(void*)f_5382},
{C_text("f_5386:posix_2escm"),(void*)f_5386},
{C_text("f_5390:posix_2escm"),(void*)f_5390},
{C_text("f_5400:posix_2escm"),(void*)f_5400},
{C_text("f_5408:posix_2escm"),(void*)f_5408},
{C_text("f_5416:posix_2escm"),(void*)f_5416},
{C_text("f_5420:posix_2escm"),(void*)f_5420},
{C_text("f_5422:posix_2escm"),(void*)f_5422},
{C_text("f_5430:posix_2escm"),(void*)f_5430},
{C_text("f_5434:posix_2escm"),(void*)f_5434},
{C_text("f_5436:posix_2escm"),(void*)f_5436},
{C_text("f_5440:posix_2escm"),(void*)f_5440},
{C_text("f_5443:posix_2escm"),(void*)f_5443},
{C_text("f_5446:posix_2escm"),(void*)f_5446},
{C_text("f_5458:posix_2escm"),(void*)f_5458},
{C_text("f_5462:posix_2escm"),(void*)f_5462},
{C_text("f_5478:posix_2escm"),(void*)f_5478},
{C_text("f_5483:posix_2escm"),(void*)f_5483},
{C_text("f_5487:posix_2escm"),(void*)f_5487},
{C_text("f_5493:posix_2escm"),(void*)f_5493},
{C_text("f_5500:posix_2escm"),(void*)f_5500},
{C_text("f_5502:posix_2escm"),(void*)f_5502},
{C_text("f_5523:posix_2escm"),(void*)f_5523},
{C_text("f_5527:posix_2escm"),(void*)f_5527},
{C_text("f_5531:posix_2escm"),(void*)f_5531},
{C_text("f_5532:posix_2escm"),(void*)f_5532},
{C_text("f_5537:posix_2escm"),(void*)f_5537},
{C_text("f_5551:posix_2escm"),(void*)f_5551},
{C_text("f_5566:posix_2escm"),(void*)f_5566},
{C_text("f_5572:posix_2escm"),(void*)f_5572},
{C_text("f_5580:posix_2escm"),(void*)f_5580},
{C_text("f_5582:posix_2escm"),(void*)f_5582},
{C_text("f_5592:posix_2escm"),(void*)f_5592},
{C_text("f_5598:posix_2escm"),(void*)f_5598},
{C_text("f_5607:posix_2escm"),(void*)f_5607},
{C_text("f_5610:posix_2escm"),(void*)f_5610},
{C_text("f_5613:posix_2escm"),(void*)f_5613},
{C_text("f_5619:posix_2escm"),(void*)f_5619},
{C_text("f_5653:posix_2escm"),(void*)f_5653},
{C_text("f_5657:posix_2escm"),(void*)f_5657},
{C_text("f_5666:posix_2escm"),(void*)f_5666},
{C_text("f_5688:posix_2escm"),(void*)f_5688},
{C_text("f_5716:posix_2escm"),(void*)f_5716},
{C_text("f_5722:posix_2escm"),(void*)f_5722},
{C_text("f_5723:posix_2escm"),(void*)f_5723},
{C_text("f_5727:posix_2escm"),(void*)f_5727},
{C_text("f_5752:posix_2escm"),(void*)f_5752},
{C_text("f_5760:posix_2escm"),(void*)f_5760},
{C_text("f_5766:posix_2escm"),(void*)f_5766},
{C_text("f_5785:posix_2escm"),(void*)f_5785},
{C_text("f_5788:posix_2escm"),(void*)f_5788},
{C_text("f_5818:posix_2escm"),(void*)f_5818},
{C_text("f_5821:posix_2escm"),(void*)f_5821},
{C_text("f_5827:posix_2escm"),(void*)f_5827},
{C_text("f_5856:posix_2escm"),(void*)f_5856},
{C_text("f_5862:posix_2escm"),(void*)f_5862},
{C_text("f_5866:posix_2escm"),(void*)f_5866},
{C_text("f_5887:posix_2escm"),(void*)f_5887},
{C_text("f_5899:posix_2escm"),(void*)f_5899},
{C_text("f_5903:posix_2escm"),(void*)f_5903},
{C_text("f_5915:posix_2escm"),(void*)f_5915},
{C_text("f_5919:posix_2escm"),(void*)f_5919},
{C_text("f_5930:posix_2escm"),(void*)f_5930},
{C_text("f_5940:posix_2escm"),(void*)f_5940},
{C_text("f_5988:posix_2escm"),(void*)f_5988},
{C_text("f_6006:posix_2escm"),(void*)f_6006},
{C_text("f_6010:posix_2escm"),(void*)f_6010},
{C_text("f_6024:posix_2escm"),(void*)f_6024},
{C_text("f_6034:posix_2escm"),(void*)f_6034},
{C_text("f_6054:posix_2escm"),(void*)f_6054},
{C_text("f_6080:posix_2escm"),(void*)f_6080},
{C_text("f_6125:posix_2escm"),(void*)f_6125},
{C_text("f_6135:posix_2escm"),(void*)f_6135},
{C_text("f_6201:posix_2escm"),(void*)f_6201},
{C_text("f_6223:posix_2escm"),(void*)f_6223},
{C_text("f_6224:posix_2escm"),(void*)f_6224},
{C_text("f_6230:posix_2escm"),(void*)f_6230},
{C_text("f_6249:posix_2escm"),(void*)f_6249},
{C_text("f_6280:posix_2escm"),(void*)f_6280},
{C_text("f_6290:posix_2escm"),(void*)f_6290},
{C_text("f_6295:posix_2escm"),(void*)f_6295},
{C_text("f_6301:posix_2escm"),(void*)f_6301},
{C_text("f_6307:posix_2escm"),(void*)f_6307},
{C_text("f_6311:posix_2escm"),(void*)f_6311},
{C_text("f_6323:posix_2escm"),(void*)f_6323},
{C_text("f_6331:posix_2escm"),(void*)f_6331},
{C_text("f_6345:posix_2escm"),(void*)f_6345},
{C_text("f_6346:posix_2escm"),(void*)f_6346},
{C_text("f_6363:posix_2escm"),(void*)f_6363},
{C_text("f_6373:posix_2escm"),(void*)f_6373},
{C_text("f_6456:posix_2escm"),(void*)f_6456},
{C_text("f_6460:posix_2escm"),(void*)f_6460},
{C_text("f_6466:posix_2escm"),(void*)f_6466},
{C_text("f_6473:posix_2escm"),(void*)f_6473},
{C_text("f_6480:posix_2escm"),(void*)f_6480},
{C_text("f_6486:posix_2escm"),(void*)f_6486},
{C_text("f_6490:posix_2escm"),(void*)f_6490},
{C_text("f_6501:posix_2escm"),(void*)f_6501},
{C_text("f_6519:posix_2escm"),(void*)f_6519},
{C_text("f_6522:posix_2escm"),(void*)f_6522},
{C_text("f_6587:posix_2escm"),(void*)f_6587},
{C_text("f_6593:posix_2escm"),(void*)f_6593},
{C_text("f_6597:posix_2escm"),(void*)f_6597},
{C_text("f_6618:posix_2escm"),(void*)f_6618},
{C_text("f_6624:posix_2escm"),(void*)f_6624},
{C_text("f_6628:posix_2escm"),(void*)f_6628},
{C_text("f_6649:posix_2escm"),(void*)f_6649},
{C_text("f_6653:posix_2escm"),(void*)f_6653},
{C_text("f_6676:posix_2escm"),(void*)f_6676},
{C_text("f_6705:posix_2escm"),(void*)f_6705},
{C_text("f_6719:posix_2escm"),(void*)f_6719},
{C_text("f_6729:posix_2escm"),(void*)f_6729},
{C_text("f_6743:posix_2escm"),(void*)f_6743},
{C_text("f_6765:posix_2escm"),(void*)f_6765},
{C_text("f_6782:posix_2escm"),(void*)f_6782},
{C_text("f_6786:posix_2escm"),(void*)f_6786},
{C_text("f_6794:posix_2escm"),(void*)f_6794},
{C_text("f_6802:posix_2escm"),(void*)f_6802},
{C_text("f_6806:posix_2escm"),(void*)f_6806},
{C_text("f_6810:posix_2escm"),(void*)f_6810},
{C_text("f_6821:posix_2escm"),(void*)f_6821},
{C_text("f_6828:posix_2escm"),(void*)f_6828},
{C_text("f_6837:posix_2escm"),(void*)f_6837},
{C_text("f_6868:posix_2escm"),(void*)f_6868},
{C_text("f_6882:posix_2escm"),(void*)f_6882},
{C_text("f_6888:posix_2escm"),(void*)f_6888},
{C_text("f_6892:posix_2escm"),(void*)f_6892},
{C_text("f_6896:posix_2escm"),(void*)f_6896},
{C_text("f_6936:posix_2escm"),(void*)f_6936},
{C_text("f_6960:posix_2escm"),(void*)f_6960},
{C_text("f_6963:posix_2escm"),(void*)f_6963},
{C_text("f_7014:posix_2escm"),(void*)f_7014},
{C_text("f_7030:posix_2escm"),(void*)f_7030},
{C_text("f_7052:posix_2escm"),(void*)f_7052},
{C_text("f_7055:posix_2escm"),(void*)f_7055},
{C_text("f_7062:posix_2escm"),(void*)f_7062},
{C_text("f_7065:posix_2escm"),(void*)f_7065},
{C_text("f_7095:posix_2escm"),(void*)f_7095},
{C_text("f_7102:posix_2escm"),(void*)f_7102},
{C_text("f_7145:posix_2escm"),(void*)f_7145},
{C_text("f_7149:posix_2escm"),(void*)f_7149},
{C_text("f_7151:posix_2escm"),(void*)f_7151},
{C_text("f_7166:posix_2escm"),(void*)f_7166},
{C_text("f_7172:posix_2escm"),(void*)f_7172},
{C_text("f_7186:posix_2escm"),(void*)f_7186},
{C_text("f_7195:posix_2escm"),(void*)f_7195},
{C_text("f_7201:posix_2escm"),(void*)f_7201},
{C_text("f_7206:posix_2escm"),(void*)f_7206},
{C_text("f_7217:posix_2escm"),(void*)f_7217},
{C_text("f_7218:posix_2escm"),(void*)f_7218},
{C_text("f_7229:posix_2escm"),(void*)f_7229},
{C_text("f_7247:posix_2escm"),(void*)f_7247},
{C_text("f_7251:posix_2escm"),(void*)f_7251},
{C_text("f_7254:posix_2escm"),(void*)f_7254},
{C_text("f_7257:posix_2escm"),(void*)f_7257},
{C_text("f_7264:posix_2escm"),(void*)f_7264},
{C_text("f_7268:posix_2escm"),(void*)f_7268},
{C_text("f_7270:posix_2escm"),(void*)f_7270},
{C_text("f_7274:posix_2escm"),(void*)f_7274},
{C_text("f_7277:posix_2escm"),(void*)f_7277},
{C_text("f_7280:posix_2escm"),(void*)f_7280},
{C_text("f_7292:posix_2escm"),(void*)f_7292},
{C_text("f_7296:posix_2escm"),(void*)f_7296},
{C_text("f_7303:posix_2escm"),(void*)f_7303},
{C_text("f_7307:posix_2escm"),(void*)f_7307},
{C_text("f_7314:posix_2escm"),(void*)f_7314},
{C_text("f_7320:posix_2escm"),(void*)f_7320},
{C_text("f_7326:posix_2escm"),(void*)f_7326},
{C_text("f_7337:posix_2escm"),(void*)f_7337},
{C_text("f_7341:posix_2escm"),(void*)f_7341},
{C_text("f_7345:posix_2escm"),(void*)f_7345},
{C_text("f_7349:posix_2escm"),(void*)f_7349},
{C_text("f_7353:posix_2escm"),(void*)f_7353},
{C_text("f_7357:posix_2escm"),(void*)f_7357},
{C_text("f_7370:posix_2escm"),(void*)f_7370},
{C_text("f_7372:posix_2escm"),(void*)f_7372},
{C_text("f_7377:posix_2escm"),(void*)f_7377},
{C_text("f_7386:posix_2escm"),(void*)f_7386},
{C_text("f_7413:posix_2escm"),(void*)f_7413},
{C_text("f_7416:posix_2escm"),(void*)f_7416},
{C_text("f_7421:posix_2escm"),(void*)f_7421},
{C_text("f_7441:posix_2escm"),(void*)f_7441},
{C_text("f_7465:posix_2escm"),(void*)f_7465},
{C_text("f_7507:posix_2escm"),(void*)f_7507},
{C_text("f_7572:posix_2escm"),(void*)f_7572},
{C_text("f_7577:posix_2escm"),(void*)f_7577},
{C_text("f_7596:posix_2escm"),(void*)f_7596},
{C_text("f_7602:posix_2escm"),(void*)f_7602},
{C_text("f_7651:posix_2escm"),(void*)f_7651},
{C_text("f_7655:posix_2escm"),(void*)f_7655},
{C_text("f_7658:posix_2escm"),(void*)f_7658},
{C_text("f_7664:posix_2escm"),(void*)f_7664},
{C_text("f_7669:posix_2escm"),(void*)f_7669},
{C_text("f_7673:posix_2escm"),(void*)f_7673},
{C_text("f_7676:posix_2escm"),(void*)f_7676},
{C_text("f_7685:posix_2escm"),(void*)f_7685},
{C_text("f_7691:posix_2escm"),(void*)f_7691},
{C_text("f_7694:posix_2escm"),(void*)f_7694},
{C_text("f_7698:posix_2escm"),(void*)f_7698},
{C_text("f_7707:posix_2escm"),(void*)f_7707},
{C_text("f_7713:posix_2escm"),(void*)f_7713},
{C_text("f_7716:posix_2escm"),(void*)f_7716},
{C_text("f_7720:posix_2escm"),(void*)f_7720},
{C_text("f_7729:posix_2escm"),(void*)f_7729},
{C_text("f_7735:posix_2escm"),(void*)f_7735},
{C_text("f_7738:posix_2escm"),(void*)f_7738},
{C_text("f_7742:posix_2escm"),(void*)f_7742},
{C_text("f_7751:posix_2escm"),(void*)f_7751},
{C_text("f_7757:posix_2escm"),(void*)f_7757},
{C_text("f_7760:posix_2escm"),(void*)f_7760},
{C_text("f_7764:posix_2escm"),(void*)f_7764},
{C_text("f_7773:posix_2escm"),(void*)f_7773},
{C_text("f_7779:posix_2escm"),(void*)f_7779},
{C_text("f_7785:posix_2escm"),(void*)f_7785},
{C_text("f_7809:posix_2escm"),(void*)f_7809},
{C_text("f_7813:posix_2escm"),(void*)f_7813},
{C_text("f_7818:posix_2escm"),(void*)f_7818},
{C_text("f_7825:posix_2escm"),(void*)f_7825},
{C_text("f_7843:posix_2escm"),(void*)f_7843},
{C_text("f_7847:posix_2escm"),(void*)f_7847},
{C_text("f_7849:posix_2escm"),(void*)f_7849},
{C_text("f_7853:posix_2escm"),(void*)f_7853},
{C_text("f_7856:posix_2escm"),(void*)f_7856},
{C_text("f_7865:posix_2escm"),(void*)f_7865},
{C_text("f_7886:posix_2escm"),(void*)f_7886},
{C_text("f_7890:posix_2escm"),(void*)f_7890},
{C_text("f_7892:posix_2escm"),(void*)f_7892},
{C_text("f_7896:posix_2escm"),(void*)f_7896},
{C_text("f_7898:posix_2escm"),(void*)f_7898},
{C_text("f_7902:posix_2escm"),(void*)f_7902},
{C_text("toplevel:posix_2escm"),(void*)C_posix_toplevel},
{C_text("va8716:posix_2escm"),(void*)va8716},
{C_text("va8718:posix_2escm"),(void*)va8718},
{C_text("va8720:posix_2escm"),(void*)va8720},
{C_text("va8722:posix_2escm"),(void*)va8722},
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
o|hiding unexported module binding: chicken.posix#d 
o|hiding unexported module binding: chicken.posix#define-alias 
o|hiding unexported module binding: chicken.posix#define-unimplemented 
o|hiding unexported module binding: chicken.posix#set!-unimplemented 
o|hiding unexported module binding: chicken.posix#posix-error 
o|hiding unexported module binding: chicken.posix#stat-mode 
o|hiding unexported module binding: chicken.posix#stat 
o|hiding unexported module binding: chicken.posix#decode-seconds 
o|hiding unexported module binding: chicken.posix#check-time-vector 
o|hiding unexported module binding: chicken.posix#list->c-string-buffer 
o|hiding unexported module binding: chicken.posix#free-c-string-buffer 
o|hiding unexported module binding: chicken.posix#check-environment-list 
o|hiding unexported module binding: chicken.posix#call-with-exec-args 
o|hiding unexported module binding: chicken.posix#chown 
o|hiding unexported module binding: chicken.posix#process-wait-impl 
o|hiding unexported module binding: chicken.posix#shell-command 
o|hiding unexported module binding: chicken.posix#shell-command-arguments 
o|hiding unexported module binding: chicken.posix#process-impl 
S|applied compiler syntax:
S|  scheme#for-each		3
S|  scheme#map		2
o|eliminated procedure checks: 135 
o|specializations:
o|  1 (scheme#make-string fixnum)
o|  1 (##sys#check-output-port * * *)
o|  1 (##sys#check-input-port * * *)
o|  1 (##sys#call-with-values (procedure () *) *)
o|  11 (scheme#cdr pair)
o|  1 (chicken.base#add1 fixnum)
o|  3 (##sys#length list)
o|  1 (scheme#zero? *)
o|  2 (##sys#check-open-port * *)
o|  5 (scheme#eqv? * (or eof null fixnum char boolean symbol keyword))
o|  12 (scheme#car pair)
o|  4 (##sys#check-list (or pair list) *)
o|  1 (scheme#char=? char char)
o|  2 (scheme#zero? integer)
(o e)|safe calls: 752 
(o e)|assignments to immediate values: 123 
o|dropping redundant toplevel assignment: chicken.file.posix#file-stat 
o|dropping redundant toplevel assignment: chicken.file.posix#set-file-permissions! 
o|dropping redundant toplevel assignment: chicken.file.posix#file-modification-time 
o|dropping redundant toplevel assignment: chicken.file.posix#file-access-time 
o|dropping redundant toplevel assignment: chicken.file.posix#file-change-time 
o|dropping redundant toplevel assignment: chicken.file.posix#set-file-times! 
o|dropping redundant toplevel assignment: chicken.file.posix#file-size 
o|dropping redundant toplevel assignment: chicken.file.posix#set-file-owner! 
o|dropping redundant toplevel assignment: chicken.file.posix#set-file-group! 
o|safe globals: (chicken.file.posix#set-file-group! chicken.file.posix#set-file-owner! chicken.file.posix#file-size chicken.file.posix#set-file-times! chicken.file.posix#file-change-time chicken.file.posix#file-access-time chicken.file.posix#file-modification-time chicken.file.posix#set-file-permissions! chicken.file.posix#file-stat chicken.posix#stat ##sys#posix-error chicken.posix#posix-error chicken.process-context.posix#user-information chicken.process-context.posix#process-group-id chicken.process-context.posix#create-session chicken.process-context.posix#current-effective-user-name chicken.process-context.posix#current-user-name chicken.process-context.posix#parent-process-id chicken.process-context.posix#current-process-id chicken.process-context.posix#current-user-id chicken.process-context.posix#current-group-id chicken.process-context.posix#current-effective-user-id chicken.process-context.posix#current-effective-group-id chicken.process-context.posix#set-root-directory! chicken.process-context.posix#change-directory* chicken.process.signal#signals-list chicken.process.signal#signal/xfsz chicken.process.signal#signal/xcpu chicken.process.signal#signal/winch chicken.process.signal#signal/vtalrm chicken.process.signal#signal/usr2 chicken.process.signal#signal/usr1 chicken.process.signal#signal/urg chicken.process.signal#signal/tstp chicken.process.signal#signal/trap chicken.process.signal#signal/term chicken.process.signal#signal/stop chicken.process.signal#signal/segv chicken.process.signal#signal/quit chicken.process.signal#signal/prof chicken.process.signal#signal/pipe chicken.process.signal#signal/kill chicken.process.signal#signal/io chicken.process.signal#signal/int chicken.process.signal#signal/ill chicken.process.signal#signal/hup chicken.process.signal#signal/fpe chicken.process.signal#signal/cont chicken.process.signal#signal/chld chicken.process.signal#signal/bus chicken.process.signal#signal/break chicken.process.signal#signal/alrm chicken.process.signal#signal/abrt chicken.process.signal#signal-unmask! chicken.process.signal#signal-masked? chicken.process.signal#signal-mask! chicken.process.signal#signal-mask chicken.process.signal#signal-handler chicken.process.signal#set-signal-mask! chicken.process.signal#set-signal-handler! chicken.process.signal#set-alarm! chicken.process#spawn/detach chicken.process#spawn/nowaito chicken.process#spawn/nowait chicken.process#spawn/wait chicken.process#spawn/overlay chicken.process#pipe/buf chicken.process#process-sleep chicken.process#process* chicken.process#process chicken.process#with-output-to-pipe chicken.process#with-input-from-pipe chicken.process#open-output-pipe chicken.process#open-input-pipe chicken.process#create-pipe chicken.process#close-output-pipe chicken.process#close-input-pipe chicken.process#call-with-output-pipe chicken.process#call-with-input-pipe chicken.process#process-wait chicken.process#process-spawn chicken.process#process-signal chicken.process#process-run chicken.process#process-fork chicken.process#process-execute chicken.process#qs chicken.process#system* chicken.process#system chicken.time.posix#local-timezone-abbreviation chicken.time.posix#time->string chicken.time.posix#string->time chicken.time.posix#local-time->seconds chicken.time.posix#seconds->string chicken.time.posix#seconds->local-time chicken.time.posix#utc-time->seconds chicken.time.posix#seconds->utc-time chicken.file.posix#set-file-position! chicken.file.posix#seek/set chicken.file.posix#seek/end chicken.file.posix#seek/cur chicken.file.posix#port->fileno chicken.file.posix#perm/ixusr chicken.file.posix#perm/ixoth chicken.file.posix#perm/ixgrp chicken.file.posix#perm/iwusr chicken.file.posix#perm/iwoth chicken.file.posix#perm/iwgrp chicken.file.posix#perm/isvtx chicken.file.posix#perm/isuid chicken.file.posix#perm/isgid chicken.file.posix#perm/irwxu chicken.file.posix#perm/irwxo chicken.file.posix#perm/irwxg chicken.file.posix#perm/irusr chicken.file.posix#perm/iroth chicken.file.posix#perm/irgrp chicken.file.posix#open/wronly chicken.file.posix#open/write chicken.file.posix#open/trunc chicken.file.posix#open/text chicken.file.posix#open/sync chicken.file.posix#open/read chicken.file.posix#open/rdwr chicken.file.posix#open/rdonly chicken.file.posix#open/nonblock chicken.file.posix#open/noinherit chicken.file.posix#open/noctty chicken.file.posix#open/fsync chicken.file.posix#open/excl chicken.file.posix#open/creat chicken.file.posix#open/binary chicken.file.posix#open/append chicken.file.posix#open-output-file* chicken.file.posix#open-input-file* chicken.file.posix#fileno/stdout chicken.file.posix#fileno/stdin chicken.file.posix#fileno/stderr chicken.file.posix#symbolic-link? chicken.file.posix#socket? chicken.file.posix#regular-file? chicken.file.posix#fifo? chicken.file.posix#directory? chicken.file.posix#character-device? chicken.file.posix#block-device? chicken.file.posix#file-type chicken.file.posix#file-write chicken.file.posix#file-unlock chicken.file.posix#file-truncate chicken.file.posix#file-test-lock chicken.file.posix#file-select chicken.file.posix#file-read chicken.file.posix#file-position chicken.file.posix#file-permissions chicken.file.posix#file-owner chicken.file.posix#file-open chicken.file.posix#file-mkstemp chicken.file.posix#file-lock/blocking chicken.file.posix#file-lock chicken.file.posix#file-link chicken.file.posix#file-group chicken.file.posix#file-creation-mode chicken.file.posix#file-control chicken.file.posix#file-close chicken.file.posix#fcntl/setfl chicken.file.posix#fcntl/setfd chicken.file.posix#fcntl/getfl chicken.file.posix#fcntl/getfd chicken.file.posix#fcntl/dupfd chicken.file.posix#duplicate-fileno chicken.file.posix#read-symbolic-link chicken.file.posix#create-symbolic-link chicken.file.posix#create-fifo c2222) 
o|inlining procedure: k2747 
o|inlining procedure: k2747 
o|inlining procedure: k2765 
o|inlining procedure: k2765 
o|inlining procedure: k2792 
o|inlining procedure: k2792 
o|substituted constant variable: a2802 
o|inlining procedure: k2833 
o|inlining procedure: k2833 
o|contracted procedure: "(posix-common.scm:192) strerror647" 
o|inlining procedure: k2986 
o|inlining procedure: k2986 
o|inlining procedure: k3001 
o|inlining procedure: k3001 
o|inlining procedure: k3020 
o|inlining procedure: k3020 
o|inlining procedure: k3053 
o|inlining procedure: k3053 
o|inlining procedure: k3065 
o|inlining procedure: k3065 
o|inlining procedure: k3143 
o|inlining procedure: k3143 
o|contracted procedure: "(posix-common.scm:292) g719720" 
o|inlining procedure: k3130 
o|inlining procedure: k3130 
o|inlining procedure: k3230 
o|inlining procedure: k3242 
o|inlining procedure: k3242 
o|inlining procedure: k3254 
o|inlining procedure: k3254 
o|inlining procedure: k3266 
o|inlining procedure: k3266 
o|inlining procedure: k3230 
o|inlining procedure: k3387 
o|inlining procedure: k3387 
o|inlining procedure: k3402 
o|inlining procedure: k3402 
o|inlining procedure: k3415 
o|inlining procedure: k3415 
o|inlining procedure: k3465 
o|inlining procedure: k3478 
o|inlining procedure: k3478 
o|substituted constant variable: a3491 
o|inlining procedure: k3465 
o|inlining procedure: k3498 
o|inlining procedure: k3498 
o|inlining procedure: k3511 
o|inlining procedure: k3511 
o|substituted constant variable: a3546 
o|inlining procedure: k3547 
o|inlining procedure: k3547 
o|inlining procedure: k3566 
o|inlining procedure: k3566 
o|inlining procedure: k3596 
o|inlining procedure: k3596 
o|inlining procedure: k3623 
o|inlining procedure: k3623 
o|inlining procedure: k3636 
o|propagated global variable: r36377967 chicken.process-context.posix#change-directory* 
o|inlining procedure: k3636 
o|inlining procedure: k3656 
o|inlining procedure: k3656 
o|inlining procedure: k3734 
o|inlining procedure: k3734 
o|contracted procedure: "(posix-common.scm:595) ctime897" 
o|inlining procedure: k3770 
o|inlining procedure: k3770 
o|inlining procedure: k3814 
o|contracted procedure: "(posix-common.scm:618) strftime922" 
o|inlining procedure: k3800 
o|inlining procedure: k3800 
o|inlining procedure: k3814 
o|contracted procedure: "(posix-common.scm:620) asctime921" 
o|inlining procedure: k3787 
o|inlining procedure: k3787 
o|inlining procedure: k3923 
o|inlining procedure: k3923 
o|inlining procedure: k4009 
o|inlining procedure: k4009 
o|contracted procedure: "(posix-common.scm:688) c-string->allocated-pointer991" 
o|merged explicitly consed rest parameter: args10031024 
o|consed rest parameter at call site: tmp22549 1 
o|inlining procedure: k4090 
o|inlining procedure: k4090 
o|inlining procedure: k4139 
o|inlining procedure: k4139 
o|inlining procedure: k4197 
o|inlining procedure: k4197 
o|inlining procedure: k4256 
o|contracted procedure: "(posix-common.scm:731) g10911100" 
o|inlining procedure: k4256 
o|inlining procedure: k4303 
o|inlining procedure: k4303 
o|inlining procedure: k4321 
o|inlining procedure: k4321 
o|inlining procedure: k4334 
o|inlining procedure: k4334 
o|inlining procedure: k4350 
o|inlining procedure: k4350 
o|inlining procedure: "(posix-common.scm:760) badmode1114" 
o|substituted constant variable: a4374 
o|substituted constant variable: a4376 
o|inlining procedure: k4390 
o|inlining procedure: k4390 
o|inlining procedure: "(posix-common.scm:771) badmode1114" 
o|substituted constant variable: a4414 
o|substituted constant variable: a4416 
o|substituted constant variable: a4421 
o|substituted constant variable: a4422 
o|inlining procedure: k4423 
o|inlining procedure: k4423 
o|substituted constant variable: a4436 
o|substituted constant variable: a4437 
o|inlining procedure: k4438 
o|inlining procedure: k4438 
o|inlining procedure: k4625 
o|inlining procedure: k4625 
o|contracted procedure: "(posixunix.scm:332) fcntl1293" 
o|inlining procedure: k4662 
o|inlining procedure: k4662 
o|inlining procedure: k4687 
o|inlining procedure: k4687 
o|inlining procedure: k4721 
o|inlining procedure: k4721 
o|inlining procedure: k4761 
o|inlining procedure: k4761 
o|inlining procedure: k4864 
o|inlining procedure: k4864 
o|inlining procedure: k4887 
o|inlining procedure: k4887 
o|inlining procedure: k4910 
o|inlining procedure: k4919 
o|inlining procedure: k4919 
o|inlining procedure: k4910 
o|inlining procedure: k4925 
o|inlining procedure: k4925 
o|inlining procedure: k4940 
o|inlining procedure: k4940 
o|contracted procedure: "(posixunix.scm:440) g14651466" 
o|inlining procedure: k4959 
o|inlining procedure: k4959 
o|inlining procedure: k4999 
o|inlining procedure: k4999 
o|contracted procedure: "(posixunix.scm:432) g14461447" 
o|inlining procedure: k5018 
o|inlining procedure: k5018 
o|contracted procedure: "(posixunix.scm:425) g14201421" 
o|inlining procedure: k5069 
o|inlining procedure: k5069 
o|contracted procedure: "(posixunix.scm:419) g14051406" 
o|inlining procedure: k5086 
o|inlining procedure: k5086 
o|inlining procedure: k5111 
o|inlining procedure: k5111 
o|contracted procedure: "(posixunix.scm:413) g13881389" 
o|inlining procedure: k5128 
o|inlining procedure: k5128 
o|inlining procedure: k5161 
o|inlining procedure: k5161 
o|inlining procedure: k5176 
o|inlining procedure: k5176 
o|inlining procedure: k5198 
o|inlining procedure: k5198 
o|inlining procedure: k5262 
o|inlining procedure: k5262 
o|inlining procedure: k5275 
o|contracted procedure: "(posixunix.scm:555) g14981505" 
o|inlining procedure: k5275 
o|inlining procedure: k5311 
o|inlining procedure: k5311 
o|inlining procedure: k5327 
o|inlining procedure: k5327 
o|inlining procedure: k5362 
o|inlining procedure: k5362 
o|inlining procedure: k5447 
o|inlining procedure: k5447 
o|inlining procedure: k5463 
o|inlining procedure: k5463 
o|inlining procedure: k5485 
o|inlining procedure: k5485 
o|inlining procedure: k5510 
o|inlining procedure: k5510 
o|inlining procedure: k5538 
o|inlining procedure: k5538 
o|inlining procedure: k5559 
o|inlining procedure: k5584 
o|inlining procedure: k5584 
o|inlining procedure: k5605 
o|inlining procedure: k5605 
o|inlining procedure: k5635 
o|inlining procedure: k5635 
o|inlining procedure: k5559 
o|inlining procedure: k5674 
o|inlining procedure: k5674 
o|contracted procedure: "(posixunix.scm:773) link1632" 
o|inlining procedure: k5728 
o|inlining procedure: k5728 
o|inlining procedure: k5754 
o|inlining procedure: k5754 
o|inlining procedure: k5768 
o|inlining procedure: k5792 
o|inlining procedure: k5792 
o|inlining procedure: k5768 
o|inlining procedure: k5813 
o|inlining procedure: k5813 
o|inlining procedure: k5833 
o|inlining procedure: k5833 
o|inlining procedure: k5870 
o|inlining procedure: k5870 
o|inlining procedure: k5892 
o|inlining procedure: k5892 
o|inlining procedure: k5901 
o|inlining procedure: k5901 
o|inlining procedure: k5917 
o|inlining procedure: k5917 
o|inlining procedure: k5942 
o|inlining procedure: k5942 
o|inlining procedure: k5989 
o|inlining procedure: k5989 
o|inlining procedure: k6011 
o|inlining procedure: k6011 
o|inlining procedure: k6039 
o|inlining procedure: k6039 
o|inlining procedure: k6082 
o|inlining procedure: k6082 
o|inlining procedure: k6127 
o|inlining procedure: k6127 
o|inlining procedure: k6232 
o|inlining procedure: k6253 
o|inlining procedure: k6253 
o|inlining procedure: k6232 
o|inlining procedure: k6309 
o|inlining procedure: k6309 
o|inlining procedure: k6333 
o|inlining procedure: k6333 
o|inlining procedure: k6348 
o|inlining procedure: k6365 
o|inlining procedure: k6365 
o|inlining procedure: k6348 
o|inlining procedure: k6461 
o|inlining procedure: k6461 
o|inlining procedure: k6471 
o|inlining procedure: k6471 
o|inlining procedure: k6491 
o|inlining procedure: k6491 
o|inlining procedure: k6598 
o|inlining procedure: k6598 
o|inlining procedure: k6629 
o|inlining procedure: k6629 
o|inlining procedure: k6654 
o|contracted procedure: "(posixunix.scm:1014) g18891890" 
o|inlining procedure: k6659 
o|inlining procedure: k6659 
o|inlining procedure: k6654 
o|inlining procedure: k6689 
o|inlining procedure: k6689 
o|inlining procedure: k6730 
o|inlining procedure: k6730 
o|contracted procedure: "(posixunix.scm:1048) strptime1909" 
o|inlining procedure: k6759 
o|inlining procedure: k6759 
o|inlining procedure: k6811 
o|inlining procedure: k6811 
o|inlining procedure: k6869 
o|inlining procedure: k6869 
o|contracted procedure: "(posixunix.scm:1084) fork1949" 
o|contracted procedure: "(posixunix.scm:1081) g19671968" 
o|inlining procedure: k6854 
o|inlining procedure: k6854 
o|inlining procedure: k6968 
o|inlining procedure: k6968 
o|inlining procedure: k7020 
o|inlining procedure: k7020 
o|inlining procedure: k7039 
o|inlining procedure: k7039 
o|inlining procedure: k7066 
o|inlining procedure: k7066 
o|removed unused formal parameters: (loc2025) 
o|inlining procedure: k7085 
o|inlining procedure: k7085 
o|inlining procedure: k7103 
o|inlining procedure: k7103 
o|inlining procedure: "(posixunix.scm:1151) chicken.posix#shell-command-arguments" 
o|removed unused parameter to known procedure: loc2025 "(posixunix.scm:1150) chicken.posix#shell-command" 
o|inlining procedure: k7156 
o|inlining procedure: k7174 
o|inlining procedure: k7174 
o|inlining procedure: k7156 
o|removed unused formal parameters: (loc2060) 
o|inlining procedure: k7188 
o|inlining procedure: k7188 
o|removed unused formal parameters: (loc2065 fd2068) 
o|inlining procedure: k7208 
o|inlining procedure: k7208 
o|inlining procedure: k7220 
o|contracted procedure: "(posixunix.scm:1203) replace-fd2040" 
o|inlining procedure: k7137 
o|inlining procedure: k7137 
o|inlining procedure: k7220 
o|inlining procedure: k7235 
o|inlining procedure: k7235 
o|removed unused parameter to known procedure: loc2060 "(posixunix.scm:1213) needed-pipe2046" 
o|removed unused parameter to known procedure: loc2060 "(posixunix.scm:1212) needed-pipe2046" 
o|removed unused parameter to known procedure: loc2060 "(posixunix.scm:1211) needed-pipe2046" 
o|removed unused formal parameters: (pid2100) 
o|inlining procedure: k7297 
o|inlining procedure: k7297 
o|removed unused parameter to known procedure: loc2065 "(posixunix.scm:1224) connect-parent2047" 
o|removed unused parameter to known procedure: fd2068 "(posixunix.scm:1224) connect-parent2047" 
o|removed unused formal parameters: (pid2109) 
o|inlining procedure: k7308 
o|inlining procedure: k7308 
o|removed unused parameter to known procedure: loc2065 "(posixunix.scm:1228) connect-parent2047" 
o|removed unused parameter to known procedure: fd2068 "(posixunix.scm:1228) connect-parent2047" 
o|removed unused parameter to known procedure: pid2100 "(posixunix.scm:1245) input-port2081" 
o|removed unused parameter to known procedure: pid2109 "(posixunix.scm:1241) output-port2082" 
o|removed unused parameter to known procedure: pid2100 "(posixunix.scm:1238) input-port2081" 
o|inlining procedure: k7388 
o|inlining procedure: k7388 
o|removed unused parameter to known procedure: loc2025 "(posixunix.scm:1263) chicken.posix#shell-command" 
o|inlining procedure: "(posixunix.scm:1262) chicken.posix#shell-command-arguments" 
o|inlining procedure: k7582 
o|inlining procedure: k7582 
o|contracted procedure: "(posixunix.scm:1286) chroot2209" 
o|substituted constant variable: c2222 
o|inlining procedure: k7656 
o|inlining procedure: k7656 
o|inlining procedure: k7677 
o|inlining procedure: k7677 
o|inlining procedure: k7699 
o|inlining procedure: k7699 
o|inlining procedure: k7721 
o|inlining procedure: k7721 
o|inlining procedure: k7743 
o|inlining procedure: k7743 
o|inlining procedure: k7765 
o|inlining procedure: k7765 
o|inlining procedure: k7787 
o|inlining procedure: k7787 
o|inlining procedure: k7802 
o|inlining procedure: k7802 
o|inlining procedure: k7830 
o|inlining procedure: k7830 
o|inlining procedure: k7854 
o|inlining procedure: k7854 
o|inlining procedure: k7866 
o|inlining procedure: k7866 
o|inlining procedure: k7876 
o|inlining procedure: k7876 
o|replaced variables: 1208 
o|removed binding forms: 684 
o|removed side-effect free assignment to unused variable: c2222 
o|substituted constant variable: r29877912 
o|substituted constant variable: r31317925 
o|substituted constant variable: r31317925 
o|substituted constant variable: r32437928 
o|substituted constant variable: r32557930 
o|substituted constant variable: r32677932 
o|substituted constant variable: r32317934 
o|substituted constant variable: r34037938 
o|inlining procedure: k3465 
o|substituted constant variable: r34797943 
o|inlining procedure: k3465 
o|inlining procedure: k3465 
o|substituted constant variable: r35127949 
o|substituted constant variable: r35127949 
o|substituted constant variable: r35127951 
o|substituted constant variable: r35127951 
o|propagated global variable: g8508517968 chicken.process-context.posix#change-directory* 
o|substituted constant variable: r38017987 
o|substituted constant variable: r38017987 
o|substituted constant variable: r37887994 
o|substituted constant variable: r37887994 
o|substituted constant variable: r43048018 
o|removed side-effect free assignment to unused variable: badmode1114 
o|substituted constant variable: r43358021 
o|substituted constant variable: r43358021 
o|substituted constant variable: r43358023 
o|substituted constant variable: r43358023 
o|inlining procedure: k4350 
o|inlining procedure: k4390 
o|substituted constant variable: r48888075 
o|substituted constant variable: r48888075 
o|substituted constant variable: r48888077 
o|substituted constant variable: r48888077 
o|inlining procedure: k4910 
o|inlining procedure: k4910 
o|substituted constant variable: r49208082 
o|inlining procedure: k4910 
o|substituted constant variable: r49118083 
o|substituted constant variable: r49118083 
o|substituted constant variable: r49608091 
o|substituted constant variable: r49608091 
o|substituted constant variable: r50198097 
o|substituted constant variable: r50198097 
o|substituted constant variable: r50878103 
o|substituted constant variable: r50878103 
o|substituted constant variable: r51298109 
o|substituted constant variable: r51298109 
o|substituted constant variable: r53638134 
o|inlining procedure: k5605 
o|substituted constant variable: r56368156 
o|substituted constant variable: r56368156 
o|substituted constant variable: r57558163 
o|inlining procedure: k5825 
o|inlining procedure: k5825 
o|substituted constant variable: r60128203 
o|substituted constant variable: r61288215 
o|inlining procedure: k6471 
o|inlining procedure: k6471 
o|substituted constant variable: r66608251 
o|substituted constant variable: r67608259 
o|substituted constant variable: r67608259 
o|substituted constant variable: c-pointer19691973 
o|substituted constant variable: c-pointer19691973 
o|substituted constant variable: r68558267 
o|substituted constant variable: r68558267 
o|inlining procedure: k7039 
o|substituted constant variable: r70868280 
o|removed side-effect free assignment to unused variable: chicken.posix#shell-command-arguments 
o|substituted constant variable: r71898293 
o|substituted constant variable: r72098295 
o|substituted constant variable: r72368301 
o|removed unused formal parameters: (stdfd2104) 
o|substituted constant variable: r72988303 
o|removed unused formal parameters: (stdfd2113) 
o|substituted constant variable: r73098305 
o|removed unused parameter to known procedure: stdfd2104 "(posixunix.scm:1245) input-port2081" 
o|removed unused parameter to known procedure: stdfd2113 "(posixunix.scm:1241) output-port2082" 
o|removed unused parameter to known procedure: stdfd2104 "(posixunix.scm:1238) input-port2081" 
o|substituted constant variable: r78678344 
o|replaced variables: 151 
o|removed binding forms: 983 
o|removed conditional forms: 1 
o|inlining procedure: k3874 
o|inlining procedure: k3874 
o|inlining procedure: k4099 
o|inlining procedure: k4733 
o|inlining procedure: k4733 
o|inlining procedure: k4777 
o|inlining procedure: k4777 
o|substituted constant variable: r49118381 
o|inlining procedure: k5281 
o|inlining procedure: k5684 
o|contracted procedure: k7039 
o|removed unused formal parameters: (loc2073) 
o|removed unused parameter to known procedure: loc2073 "(posixunix.scm:1220) connect-child2048" 
o|removed unused parameter to known procedure: loc2073 "(posixunix.scm:1219) connect-child2048" 
o|removed unused parameter to known procedure: loc2073 "(posixunix.scm:1218) connect-child2048" 
o|inlining procedure: k7524 
o|inlining procedure: k7592 
o|replaced variables: 6 
o|removed binding forms: 213 
o|substituted constant variable: r34668349 
o|substituted constant variable: r34668351 
o|substituted constant variable: r34668353 
o|substituted constant variable: r38758453 
o|contracted procedure: k4024 
o|contracted procedure: k4622 
o|substituted constant variable: r47348470 
o|substituted constant variable: r47788472 
o|contracted procedure: k4861 
o|contracted procedure: k6860 
o|contracted procedure: k6863 
o|removed unused formal parameters: (loc2086) 
o|removed unused parameter to known procedure: loc2086 "(posixunix.scm:1232) spawn2080" 
o|inlining procedure: k7827 
o|inlining procedure: k7827 
o|simplifications: ((let . 2)) 
o|replaced variables: 1 
o|removed binding forms: 20 
o|removed conditional forms: 2 
o|substituted constant variable: r78288551 
o|replaced variables: 1 
o|removed binding forms: 8 
o|removed binding forms: 2 
o|simplifications: ((let . 50) (if . 95) (##core#call . 547)) 
o|  call simplifications:
o|    scheme#<
o|    chicken.bitwise#bitwise-ior
o|    scheme#vector-ref	2
o|    scheme#make-vector
o|    chicken.fixnum#fxior	2
o|    ##sys#check-structure
o|    ##sys#make-structure
o|    chicken.fixnum#fxmin	2
o|    scheme#eof-object?
o|    chicken.fixnum#fx>=	7
o|    chicken.fixnum#fx*
o|    scheme#*
o|    scheme#memq	2
o|    scheme#list	7
o|    scheme#call-with-values	4
o|    ##sys#check-pair
o|    ##sys#check-list	7
o|    ##sys#apply	2
o|    chicken.fixnum#fx+	21
o|    ##sys#call-with-values	8
o|    scheme#values	19
o|    scheme#vector-set!	3
o|    ##sys#foreign-block-argument	8
o|    scheme#=	3
o|    ##sys#foreign-ranged-integer-argument	2
o|    chicken.fixnum#fx-	12
o|    ##sys#check-vector
o|    ##sys#size	11
o|    ##sys#null-pointer?	2
o|    scheme#not	9
o|    ##sys#setislot	4
o|    chicken.fixnum#fx=	42
o|    scheme#cdr	29
o|    ##sys#foreign-string-argument	4
o|    scheme#vector	2
o|    chicken.base#fixnum?	16
o|    scheme#string?	4
o|    ##sys#foreign-fixnum-argument	14
o|    scheme#null?	72
o|    scheme#car	51
o|    scheme#string->list
o|    scheme#pair?	17
o|    scheme#cons	10
o|    ##sys#setslot	4
o|    ##sys#slot	27
o|    scheme#apply	11
o|    scheme#char=?
o|    scheme#string	3
o|    scheme#eq?	29
o|    ##sys#check-string	21
o|    chicken.fixnum#fx<	42
o|contracted procedure: k2744 
o|contracted procedure: k2750 
o|contracted procedure: k2768 
o|contracted procedure: k2867 
o|contracted procedure: k2781 
o|contracted procedure: k2864 
o|contracted procedure: k2784 
o|contracted procedure: k2787 
o|contracted procedure: k2795 
o|contracted procedure: k2819 
o|contracted procedure: k2827 
o|contracted procedure: k2836 
o|contracted procedure: k2839 
o|contracted procedure: k2842 
o|contracted procedure: k2850 
o|contracted procedure: k2858 
o|contracted procedure: k2870 
o|contracted procedure: k2960 
o|contracted procedure: k2989 
o|contracted procedure: k2998 
o|contracted procedure: k3014 
o|contracted procedure: k3038 
o|contracted procedure: k3029 
o|contracted procedure: k3056 
o|contracted procedure: k3062 
o|contracted procedure: k3078 
o|contracted procedure: k3170 
o|contracted procedure: k3112 
o|contracted procedure: k3164 
o|contracted procedure: k3115 
o|contracted procedure: k3158 
o|contracted procedure: k3118 
o|contracted procedure: k3146 
o|contracted procedure: k3137 
o|contracted procedure: k3176 
o|contracted procedure: k3296 
o|contracted procedure: k3218 
o|contracted procedure: k3290 
o|contracted procedure: k3221 
o|contracted procedure: k3284 
o|contracted procedure: k3224 
o|contracted procedure: k3278 
o|contracted procedure: k3227 
o|contracted procedure: k3239 
o|contracted procedure: k3245 
o|contracted procedure: k3251 
o|contracted procedure: k3257 
o|contracted procedure: k3263 
o|contracted procedure: k3269 
o|contracted procedure: k3275 
o|contracted procedure: k3424 
o|contracted procedure: k3378 
o|contracted procedure: k3412 
o|contracted procedure: k3399 
o|contracted procedure: k3408 
o|contracted procedure: k3418 
o|contracted procedure: k3468 
o|contracted procedure: k3475 
o|contracted procedure: k3481 
o|contracted procedure: k3501 
o|contracted procedure: k3584 
o|contracted procedure: k3550 
o|contracted procedure: k3563 
o|contracted procedure: k3569 
o|contracted procedure: k3599 
o|contracted procedure: k3605 
o|contracted procedure: k3608 
o|contracted procedure: k3626 
o|contracted procedure: k3642 
o|contracted procedure: k3653 
o|contracted procedure: k3666 
o|contracted procedure: k3659 
o|contracted procedure: k3681 
o|inlining procedure: k3672 
o|contracted procedure: k3702 
o|inlining procedure: k3693 
o|contracted procedure: k3745 
o|contracted procedure: k3741 
o|contracted procedure: k3719 
o|contracted procedure: k3751 
o|contracted procedure: k3773 
o|contracted procedure: k3861 
o|contracted procedure: k3808 
o|contracted procedure: k3817 
o|contracted procedure: k3800 
o|contracted procedure: k3851 
o|contracted procedure: k3847 
o|contracted procedure: k3787 
o|contracted procedure: k3953 
o|contracted procedure: k3893 
o|contracted procedure: k3947 
o|contracted procedure: k3896 
o|contracted procedure: k3941 
o|contracted procedure: k3899 
o|contracted procedure: k3935 
o|contracted procedure: k3902 
o|contracted procedure: k3905 
o|contracted procedure: k3926 
o|contracted procedure: k3964 
o|contracted procedure: k4012 
o|contracted procedure: k4015 
o|contracted procedure: k4052 
o|contracted procedure: k4018 
o|contracted procedure: k4039 
o|contracted procedure: k4093 
o|contracted procedure: k4106 
o|contracted procedure: k41068460 
o|contracted procedure: k4115 
o|contracted procedure: k4120 
o|contracted procedure: k4123 
o|contracted procedure: k4142 
o|contracted procedure: k4152 
o|contracted procedure: k4156 
o|contracted procedure: k4167 
o|contracted procedure: k4233 
o|contracted procedure: k4247 
o|contracted procedure: k4259 
o|contracted procedure: k4262 
o|contracted procedure: k4265 
o|contracted procedure: k4273 
o|contracted procedure: k4281 
o|contracted procedure: k4242 
o|contracted procedure: k4306 
o|contracted procedure: k4324 
o|contracted procedure: k4340 
o|contracted procedure: k4353 
o|contracted procedure: k4363 
o|contracted procedure: k4380 
o|contracted procedure: k4393 
o|contracted procedure: k4403 
o|contracted procedure: k4426 
o|contracted procedure: k4441 
o|contracted procedure: k4567 
o|contracted procedure: k4574 
o|contracted procedure: k4634 
o|contracted procedure: k4613 
o|contracted procedure: k4599 
o|contracted procedure: k4603 
o|contracted procedure: k4607 
o|contracted procedure: k4628 
o|contracted procedure: k4671 
o|contracted procedure: k4646 
o|contracted procedure: k4649 
o|contracted procedure: k4665 
o|contracted procedure: k4690 
o|contracted procedure: k4696 
o|contracted procedure: k4727 
o|contracted procedure: k4739 
o|contracted procedure: k4770 
o|contracted procedure: k4755 
o|contracted procedure: k4764 
o|contracted procedure: k4786 
o|contracted procedure: k4792 
o|contracted procedure: k4806 
o|contracted procedure: k4809 
o|contracted procedure: k5188 
o|contracted procedure: k4818 
o|contracted procedure: k4829 
o|contracted procedure: k4847 
o|contracted procedure: k4851 
o|contracted procedure: k4855 
o|contracted procedure: k4867 
o|contracted procedure: k4876 
o|contracted procedure: k4893 
o|contracted procedure: k4883 
o|contracted procedure: k4890 
o|contracted procedure: k4916 
o|contracted procedure: k4922 
o|contracted procedure: k4928 
o|contracted procedure: k4934 
o|contracted procedure: k4943 
o|contracted procedure: k4972 
o|contracted procedure: k4982 
o|contracted procedure: k4976 
o|contracted procedure: k4989 
o|contracted procedure: k4993 
o|contracted procedure: k4955 
o|contracted procedure: k4959 
o|contracted procedure: k5002 
o|contracted procedure: k5031 
o|contracted procedure: k5041 
o|contracted procedure: k5035 
o|contracted procedure: k5048 
o|contracted procedure: k5052 
o|contracted procedure: k5014 
o|contracted procedure: k5018 
o|contracted procedure: k5072 
o|contracted procedure: k5099 
o|contracted procedure: k5105 
o|contracted procedure: k5078 
o|contracted procedure: k5082 
o|contracted procedure: k5086 
o|contracted procedure: k5114 
o|contracted procedure: k5141 
o|contracted procedure: k5147 
o|contracted procedure: k5120 
o|contracted procedure: k5124 
o|contracted procedure: k5128 
o|contracted procedure: k5154 
o|contracted procedure: k5158 
o|contracted procedure: k5164 
o|contracted procedure: k5170 
o|contracted procedure: k5173 
o|contracted procedure: k5179 
o|contracted procedure: k5185 
o|contracted procedure: k5211 
o|contracted procedure: k5195 
o|contracted procedure: k5204 
o|contracted procedure: k5245 
o|contracted procedure: k5251 
o|contracted procedure: k5265 
o|contracted procedure: k5278 
o|contracted procedure: k5292 
o|contracted procedure: k52888484 
o|contracted procedure: k5314 
o|contracted procedure: k5330 
o|contracted procedure: k5401 
o|contracted procedure: k5356 
o|contracted procedure: k5365 
o|contracted procedure: k5391 
o|contracted procedure: k5394 
o|contracted procedure: k5450 
o|contracted procedure: k5466 
o|contracted procedure: k5472 
o|contracted procedure: k5488 
o|contracted procedure: k5504 
o|contracted procedure: k5507 
o|contracted procedure: k5513 
o|contracted procedure: k5541 
o|contracted procedure: k5641 
o|contracted procedure: k5553 
o|contracted procedure: k5556 
o|contracted procedure: k5587 
o|contracted procedure: k5627 
o|contracted procedure: k5631 
o|contracted procedure: k5668 
o|contracted procedure: k5671 
o|contracted procedure: k5677 
o|contracted procedure: k5659 
o|contracted procedure: k5663 
o|contracted procedure: k6194 
o|contracted procedure: k5690 
o|contracted procedure: k6188 
o|contracted procedure: k5693 
o|contracted procedure: k6182 
o|contracted procedure: k5696 
o|contracted procedure: k6176 
o|contracted procedure: k5699 
o|contracted procedure: k6170 
o|contracted procedure: k5702 
o|contracted procedure: k6164 
o|contracted procedure: k5705 
o|contracted procedure: k6158 
o|contracted procedure: k5708 
o|contracted procedure: k6152 
o|contracted procedure: k5711 
o|contracted procedure: k6143 
o|contracted procedure: k5717 
o|contracted procedure: k5731 
o|contracted procedure: k5737 
o|contracted procedure: k5740 
o|contracted procedure: k5757 
o|contracted procedure: k5771 
o|contracted procedure: k5777 
o|contracted procedure: k5780 
o|contracted procedure: k5795 
o|contracted procedure: k5810 
o|contracted procedure: k5830 
o|contracted procedure: k5836 
o|contracted procedure: k5839 
o|contracted procedure: k5858 
o|contracted procedure: k5873 
o|contracted procedure: k5877 
o|contracted procedure: k5880 
o|contracted procedure: k5889 
o|contracted procedure: k5907 
o|contracted procedure: k5923 
o|contracted procedure: k5945 
o|contracted procedure: k5951 
o|contracted procedure: k5954 
o|contracted procedure: k5983 
o|contracted procedure: k5957 
o|contracted procedure: k5961 
o|contracted procedure: k5965 
o|contracted procedure: k5972 
o|contracted procedure: k5976 
o|contracted procedure: k5980 
o|contracted procedure: k5992 
o|contracted procedure: k6002 
o|contracted procedure: k6014 
o|contracted procedure: k6017 
o|contracted procedure: k6076 
o|contracted procedure: k6030 
o|contracted procedure: k6036 
o|contracted procedure: k6042 
o|contracted procedure: k6049 
o|contracted procedure: k6058 
o|contracted procedure: k6069 
o|contracted procedure: k6065 
o|contracted procedure: k6097 
o|contracted procedure: k6093 
o|contracted procedure: k6086 
o|inlining procedure: k6082 
o|contracted procedure: k6108 
o|contracted procedure: k6112 
o|contracted procedure: k6104 
o|inlining procedure: k6082 
o|contracted procedure: k6118 
o|contracted procedure: k6130 
o|contracted procedure: k6137 
o|contracted procedure: k6449 
o|contracted procedure: k6203 
o|contracted procedure: k6443 
o|contracted procedure: k6206 
o|contracted procedure: k6437 
o|contracted procedure: k6209 
o|contracted procedure: k6431 
o|contracted procedure: k6212 
o|contracted procedure: k6425 
o|contracted procedure: k6215 
o|contracted procedure: k6419 
o|contracted procedure: k6218 
o|contracted procedure: k6235 
o|contracted procedure: k6241 
o|contracted procedure: k6244 
o|contracted procedure: k6256 
o|contracted procedure: k6271 
o|contracted procedure: k6282 
o|contracted procedure: k6410 
o|contracted procedure: k6285 
o|contracted procedure: k6297 
o|contracted procedure: k6315 
o|contracted procedure: k6328 
o|contracted procedure: k6340 
o|contracted procedure: k6355 
o|contracted procedure: k6359 
o|contracted procedure: k6368 
o|contracted procedure: k6381 
o|contracted procedure: k6388 
o|contracted procedure: k6392 
o|contracted procedure: k6398 
o|contracted procedure: k6404 
o|contracted procedure: k6474 
o|contracted procedure: k6494 
o|contracted procedure: k6562 
o|contracted procedure: k6503 
o|contracted procedure: k6556 
o|contracted procedure: k6506 
o|contracted procedure: k6550 
o|contracted procedure: k6509 
o|contracted procedure: k6544 
o|contracted procedure: k6512 
o|contracted procedure: k6534 
o|contracted procedure: k6530 
o|contracted procedure: k6524 
o|contracted procedure: k6537 
o|contracted procedure: k6575 
o|contracted procedure: k6579 
o|contracted procedure: k6583 
o|contracted procedure: k6601 
o|contracted procedure: k6607 
o|contracted procedure: k6632 
o|contracted procedure: k6638 
o|contracted procedure: k6666 
o|contracted procedure: k6662 
o|contracted procedure: k6678 
o|contracted procedure: k6682 
o|contracted procedure: k6686 
o|contracted procedure: k6715 
o|contracted procedure: k6692 
o|contracted procedure: k6698 
o|contracted procedure: k6721 
o|contracted procedure: k6733 
o|contracted procedure: k6744 
o|contracted procedure: k6752 
o|contracted procedure: k6795 
o|contracted procedure: k6767 
o|contracted procedure: k6770 
o|contracted procedure: k6773 
o|contracted procedure: k6788 
o|substituted constant variable: g8710 
o|substituted constant variable: g8710 
o|substituted constant variable: g8710 
o|substituted constant variable: g8710 
o|substituted constant variable: g8710 
o|substituted constant variable: g8710 
o|substituted constant variable: g8710 
o|substituted constant variable: g8710 
o|substituted constant variable: g8710 
o|substituted constant variable: g8710 
o|contracted procedure: k6759 
o|contracted procedure: k6814 
o|contracted procedure: k6831 
o|contracted procedure: k6929 
o|contracted procedure: k6839 
o|contracted procedure: k6923 
o|contracted procedure: k6842 
o|contracted procedure: k6917 
o|contracted procedure: k6845 
o|contracted procedure: k6911 
o|contracted procedure: k6848 
o|contracted procedure: k6872 
o|contracted procedure: k6875 
o|contracted procedure: k6905 
o|contracted procedure: k7007 
o|contracted procedure: k6938 
o|contracted procedure: k7001 
o|contracted procedure: k6941 
o|contracted procedure: k6995 
o|contracted procedure: k6944 
o|contracted procedure: k6989 
o|contracted procedure: k6947 
o|contracted procedure: k6983 
o|contracted procedure: k6950 
o|contracted procedure: k6977 
o|contracted procedure: k6953 
o|contracted procedure: k6965 
o|contracted procedure: k6971 
o|contracted procedure: k7017 
o|contracted procedure: k7045 
o|contracted procedure: k7023 
o|contracted procedure: k7075 
o|contracted procedure: k7057 
o|contracted procedure: k7069 
o|contracted procedure: k7130 
o|contracted procedure: k7097 
o|contracted procedure: k7127 
o|contracted procedure: k7106 
o|contracted procedure: k7123 
o|inlining procedure: "(posixunix.scm:1150) chicken.posix#shell-command" 
o|contracted procedure: k7153 
o|contracted procedure: k7180 
o|contracted procedure: k7159 
o|contracted procedure: k7211 
o|contracted procedure: k7223 
o|contracted procedure: k7140 
o|contracted procedure: k7242 
o|contracted procedure: k7359 
o|contracted procedure: k7363 
o|contracted procedure: k7367 
o|contracted procedure: k7328 
o|contracted procedure: k7374 
o|contracted procedure: k7391 
o|contracted procedure: k7401 
o|contracted procedure: k7405 
o|contracted procedure: k7408 
o|contracted procedure: k7433 
o|inlining procedure: "(posixunix.scm:1263) chicken.posix#shell-command" 
o|contracted procedure: k7500 
o|contracted procedure: k7443 
o|contracted procedure: k7494 
o|contracted procedure: k7446 
o|contracted procedure: k7488 
o|contracted procedure: k7449 
o|contracted procedure: k7482 
o|contracted procedure: k7452 
o|contracted procedure: k7476 
o|contracted procedure: k7455 
o|contracted procedure: k7470 
o|contracted procedure: k7458 
o|contracted procedure: k7560 
o|contracted procedure: k7509 
o|contracted procedure: k7554 
o|contracted procedure: k7512 
o|contracted procedure: k7548 
o|contracted procedure: k7515 
o|contracted procedure: k7542 
o|contracted procedure: k7518 
o|contracted procedure: k7536 
o|contracted procedure: k7521 
o|contracted procedure: k7530 
o|contracted procedure: k7524 
o|contracted procedure: k7579 
o|contracted procedure: k7585 
o|contracted procedure: k7574 
o|contracted procedure: k7647 
o|contracted procedure: k7659 
o|contracted procedure: k7680 
o|contracted procedure: k7702 
o|contracted procedure: k7724 
o|contracted procedure: k7746 
o|contracted procedure: k7768 
o|contracted procedure: k7790 
o|contracted procedure: k7793 
o|contracted procedure: k7802 
o|contracted procedure: k7836 
o|contracted procedure: k7820 
o|contracted procedure: k7857 
o|contracted procedure: k7873 
o|contracted procedure: k7869 
o|contracted procedure: k7879 
o|simplifications: ((##core#call . 5) (if . 7) (let . 143)) 
o|  call simplifications:
o|    chicken.bitwise#bitwise-ior	5
o|removed binding forms: 475 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest242244 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest242244 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest683685 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest683685 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest749751 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest749751 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest749751 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest749751 0 
(o x)|known list op on rest arg sublist: ##core#rest-car whence778 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest878879 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest878879 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest889890 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest889890 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest907908 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest907908 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest948950 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest948950 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? args971 0 
(o x)|known list op on rest arg sublist: ##core#rest-car args971 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? args971 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr args971 0 
o|inlining procedure: "(posix-common.scm:753) mode1113" 
o|inlining procedure: "(posix-common.scm:764) mode1113" 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest13061309 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest13061309 0 
o|contracted procedure: k4641 
(o x)|known list op on rest arg sublist: ##core#rest-car mode1321 0 
(o x)|known list op on rest arg sublist: ##core#rest-car timeout1364 0 
o|contracted procedure: k4965 
o|contracted procedure: k5024 
o|contracted procedure: k5092 
o|contracted procedure: k5134 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest14861487 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest14861487 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest15581560 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest15581560 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest16081610 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest16081610 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest16471651 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest16471651 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest16471651 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest16471651 0 
o|contracted procedure: k5936 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest17651769 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest17651769 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest17651769 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest17651769 0 
o|inlining procedure: "(posixunix.scm:1000) err1841" 
o|inlining procedure: "(posixunix.scm:1009) err1841" 
o|inlining procedure: "(posixunix.scm:1015) err1841" 
o|contracted procedure: k6724 
(o x)|known list op on rest arg sublist: ##core#rest-car mode1905 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest19271929 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest19271929 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest19551956 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest19551956 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest19551956 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest19551956 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest19861988 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest19861988 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest19861988 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest19861988 0 
(o x)|known list op on rest arg sublist: ##core#rest-car sig2019 0 
o|removed side-effect free assignment to unused variable: chicken.posix#shell-command 
(o x)|known list op on rest arg sublist: ##core#rest-car args2032 0 
o|inlining procedure: "(posixunix.scm:1220) swapped-ends2083" 
o|inlining procedure: "(posixunix.scm:1219) swapped-ends2083" 
o|inlining procedure: "(posixunix.scm:1215) swapped-ends2083" 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest21712173 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest21712173 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest21712173 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest21712173 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest21932195 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest21932195 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest21932195 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest21932195 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest855856 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest855856 0 
o|replaced variables: 2 
o|removed binding forms: 9 
(o x)|known list op on rest arg sublist: ##core#rest-null? r3222 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r3222 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r3222 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r3222 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r3897 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r3897 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r3897 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r3897 1 
o|removed side-effect free assignment to unused variable: mode1113 
(o x)|known list op on rest arg sublist: ##core#rest-null? r5694 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r5694 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r5694 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r5694 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r6207 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r6207 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r6207 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r6207 1 
o|removed side-effect free assignment to unused variable: err1841 
o|substituted constant variable: loc18618824 
o|substituted constant variable: msg18598822 
o|substituted constant variable: loc18618830 
o|substituted constant variable: msg18598828 
o|substituted constant variable: loc18618836 
o|substituted constant variable: msg18598834 
(o x)|known list op on rest arg sublist: ##core#rest-null? r6843 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r6843 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r6843 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r6843 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r6942 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r6942 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r6942 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r6942 1 
o|inlining procedure: k7119 
o|inlining procedure: k7437 
(o x)|known list op on rest arg sublist: ##core#rest-null? r7447 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r7447 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r7447 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r7447 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r7513 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r7513 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r7513 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r7513 1 
o|replaced variables: 33 
o|removed binding forms: 4 
(o x)|known list op on rest arg sublist: ##core#rest-null? r5700 2 
(o x)|known list op on rest arg sublist: ##core#rest-car r5700 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r5700 2 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r5700 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r6213 2 
(o x)|known list op on rest arg sublist: ##core#rest-car r6213 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r6213 2 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r6213 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r6948 2 
(o x)|known list op on rest arg sublist: ##core#rest-car r6948 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r6948 2 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r6948 2 
o|inlining procedure: k7285 
o|inlining procedure: k7285 
o|inlining procedure: k7289 
o|inlining procedure: k7289 
(o x)|known list op on rest arg sublist: ##core#rest-null? r7453 2 
(o x)|known list op on rest arg sublist: ##core#rest-car r7453 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r7453 2 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r7453 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r7519 2 
(o x)|known list op on rest arg sublist: ##core#rest-car r7519 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r7519 2 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r7519 2 
o|converted assignments to bindings: (setup1840) 
o|converted assignments to bindings: (check1115) 
o|simplifications: ((let . 2)) 
o|removed binding forms: 39 
o|contracted procedure: k4343 
o|contracted procedure: k4383 
(o x)|known list op on rest arg sublist: ##core#rest-null? r5706 3 
(o x)|known list op on rest arg sublist: ##core#rest-car r5706 3 
(o x)|known list op on rest arg sublist: ##core#rest-null? r5706 3 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r5706 3 
o|substituted constant variable: r72868934 
o|substituted constant variable: r72908936 
o|removed binding forms: 13 
o|removed binding forms: 4 
o|direct leaf routine/allocation: g10421049 0 
o|direct leaf routine/allocation: doloop13841402 0 
o|direct leaf routine/allocation: doloop13831385 0 
o|direct leaf routine/allocation: peek1671 0 
o|direct leaf routine/allocation: g21412148 0 
o|contracted procedure: "(posix-common.scm:704) k4145" 
o|contracted procedure: k4838 
o|contracted procedure: k4841 
o|converted assignments to bindings: (doloop13841402) 
o|converted assignments to bindings: (doloop13831385) 
o|contracted procedure: "(posixunix.scm:835) k5867" 
o|contracted procedure: "(posixunix.scm:1257) k7394" 
o|simplifications: ((let . 2)) 
o|removed binding forms: 5 
o|direct leaf routine/allocation: for-each-loop10411054 0 
o|direct leaf routine/allocation: for-each-loop21402158 0 
o|converted assignments to bindings: (for-each-loop10411054) 
o|converted assignments to bindings: (for-each-loop21402158) 
o|simplifications: ((let . 2)) 
o|customizable procedures: (va8722 va8720 va8718 va8716 loop1518 %process2129 chkstrlst2136 chicken.posix#process-impl output-port2082 make-on-close2045 input-port2081 spawn2080 connect-parent2047 needed-pipe2046 k7262 connect-child2048 chicken.posix#call-with-exec-args setup1840 k6464 loop1810 k6288 loop1717 ready?1670 fetch1672 loop1619 k5359 for-each-loop14971509 k4821 k4824 k5056 lp1438 lp1457 k4906 check1115 chicken.posix#check-environment-list map-loop10851103 chicken.posix#list->c-string-buffer k4215 doloop10291030 tmp12548 tmp22549 doloop10101011 chicken.posix#free-c-string-buffer chicken.posix#process-wait-impl chicken.posix#check-time-vector k3593 mode797 check798 chicken.posix#chown k3140 chicken.posix#stat g261270 map-loop255277) 
o|calls to known targets: 219 
o|unused rest argument: rest242244 f_2776 
o|unused rest argument: rest683685 f_3027 
o|unused rest argument: rest749751 f_3216 
o|unused rest argument: rest878879 f_3670 
o|unused rest argument: rest889890 f_3691 
o|unused rest argument: rest907908 f_3723 
o|unused rest argument: rest948950 f_3806 
o|unused rest argument: args971 f_3891 
o|identified direct recursive calls: f_4137 1 
o|unused rest argument: rest13061309 f_4611 
o|identified direct recursive calls: f_5109 1 
o|identified direct recursive calls: f_5067 1 
o|identified direct recursive calls: f_4938 2 
o|identified direct recursive calls: f_4997 2 
o|unused rest argument: rest14861487 f_5193 
o|unused rest argument: rest15581560 f_5354 
o|unused rest argument: rest16081610 f_5551 
o|identified direct recursive calls: f_5940 1 
o|unused rest argument: rest16471651 f_5688 
o|identified direct recursive calls: f_6363 1 
o|unused rest argument: rest17651769 f_6201 
o|unused rest argument: rest19271929 f_6765 
o|unused rest argument: rest19551956 f_6837 
o|unused rest argument: rest19861988 f_6936 
o|identified direct recursive calls: f_7386 1 
o|unused rest argument: rest21712173 f_7441 
o|unused rest argument: rest21932195 f_7507 
o|unused rest argument: _22182221 f_7596 
o|identified direct recursive calls: f_7785 2 
o|unused rest argument: rest855856 f_7818 
o|fast box initializations: 19 
o|fast global references: 76 
o|fast global assignments: 11 
o|dropping unused closure argument: f_2981 
o|dropping unused closure argument: f_3459 
o|dropping unused closure argument: f_3496 
o|dropping unused closure argument: f_3651 
o|dropping unused closure argument: f_3962 
o|dropping unused closure argument: f_4079 
o|dropping unused closure argument: f_4113 
o|dropping unused closure argument: f_4319 
o|dropping unused closure argument: f_5436 
o|dropping unused closure argument: f_6501 
o|dropping unused closure argument: f_7014 
o|dropping unused closure argument: f_7149 
o|dropping unused closure argument: f_7186 
o|dropping unused closure argument: f_7206 
o|dropping unused closure argument: f_7218 
o|dropping unused closure argument: f_7370 
*/
/* end of file */
