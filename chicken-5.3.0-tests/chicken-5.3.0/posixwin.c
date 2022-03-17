/* Generated from posix.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.3.0rc4 ((HEAD detached at 5.3.0rc4)) (rev b6cbb1ba)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: posix.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file posixwin.c -feature platform-windows -emit-import-library chicken.errno -emit-import-library chicken.file.posix -emit-import-library chicken.time.posix -emit-import-library chicken.process -emit-import-library chicken.process.signal -emit-import-library chicken.process-context.posix -no-module-registration
   unit: posix
   uses: extras scheduler data-structures port pathname lolevel library
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



#ifndef WIN32_LEAN_AND_MEAN
# define WIN32_LEAN_AND_MEAN
#endif

#include <direct.h>
#include <errno.h>
#include <fcntl.h>
#include <io.h>
#include <process.h>
#include <signal.h>
#include <stdio.h>
#include <utime.h>
#include <windows.h>
#include <winsock2.h>

#define PIPE_BUF	512

#ifndef EWOULDBLOCK
# define EWOULDBLOCK 0
#endif

static C_TLS int C_pipefds[ 2 ];
static C_TLS time_t C_secs;

/* pipe handles */
static C_TLS HANDLE C_rd0, C_wr0, C_wr0_, C_rd1, C_wr1, C_rd1_;
static C_TLS HANDLE C_save0, C_save1; /* saved I/O handles */
static C_TLS char C_rdbuf; /* one-char buffer for read */
static C_TLS int C_exstatus;

/* platform information; initialized for cached testing */
static C_TLS char C_shlcmd[256] = "";

/* Current user name */
static C_TLS TCHAR C_username[255 + 1] = "";

#define open_binary_input_pipe(a, n, name)   C_mpointer(a, _popen(C_c_string(name), "r"))
#define open_text_input_pipe(a, n, name)     open_binary_input_pipe(a, n, name)
#define open_binary_output_pipe(a, n, name)  C_mpointer(a, _popen(C_c_string(name), "w"))
#define open_text_output_pipe(a, n, name)    open_binary_output_pipe(a, n, name)
#define close_pipe(p)			     C_fix(_pclose(C_port_file(p)))

#define C_chmod(fn, m)	    C_fix(chmod(C_c_string(fn), C_unfix(m)))
#define C_pipe(d, m)	    C_fix(_pipe(C_pipefds, PIPE_BUF, C_unfix(m)))
#define C_close(fd)	    C_fix(close(C_unfix(fd)))

#define C_u_i_lstat(fn)     C_u_i_stat(fn)

#define C_u_i_execvp(f,a)   C_fix(execvp(C_c_string(f), (const char *const *)C_c_pointer_vector_or_null(a)))
#define C_u_i_execve(f,a,e) C_fix(execve(C_c_string(f), (const char *const *)C_c_pointer_vector_or_null(a), (const char *const *)C_c_pointer_vector_or_null(e)))

/* MS replacement for the fork-exec pair */
#define C_u_i_spawnvp(m,f,a)    C_fix(spawnvp(C_unfix(m), C_c_string(f), (const char *const *)C_c_pointer_vector_or_null(a)))
#define C_u_i_spawnvpe(m,f,a,e) C_fix(spawnvpe(C_unfix(m), C_c_string(f), (const char *const *)C_c_pointer_vector_or_null(a), (const char *const *)C_c_pointer_vector_or_null(e)))

#define C_open(fn, fl, m)   C_fix(open(C_c_string(fn), C_unfix(fl), C_unfix(m)))
#define C_read(fd, b, n)    C_fix(read(C_unfix(fd), C_data_pointer(b), C_unfix(n)))
#define C_write(fd, b, n)   C_fix(write(C_unfix(fd), C_data_pointer(b), C_unfix(n)))

#define C_flushall()	    C_fix(_flushall())

#define C_umask(m)          C_fix(_umask(C_unfix(m)))

#define C_ctime(n)	    (C_secs = (n), ctime(&C_secs))

#define TIME_STRING_MAXLENGTH 255
static char C_time_string [TIME_STRING_MAXLENGTH + 1];
#undef TIME_STRING_MAXLENGTH

/*
  mapping from Win32 error codes to errno
*/

typedef struct
{
    DWORD   win32;
    int	    libc;
} errmap_t;

static errmap_t errmap[] =
{
    {ERROR_INVALID_FUNCTION,	  EINVAL},
    {ERROR_FILE_NOT_FOUND,	  ENOENT},
    {ERROR_PATH_NOT_FOUND,	  ENOENT},
    {ERROR_TOO_MANY_OPEN_FILES,	  EMFILE},
    {ERROR_ACCESS_DENIED,	  EACCES},
    {ERROR_INVALID_HANDLE,	  EBADF},
    {ERROR_ARENA_TRASHED,	  ENOMEM},
    {ERROR_NOT_ENOUGH_MEMORY,	  ENOMEM},
    {ERROR_INVALID_BLOCK,	  ENOMEM},
    {ERROR_BAD_ENVIRONMENT,	  E2BIG},
    {ERROR_BAD_FORMAT,		  ENOEXEC},
    {ERROR_INVALID_ACCESS,	  EINVAL},
    {ERROR_INVALID_DATA,	  EINVAL},
    {ERROR_INVALID_DRIVE,	  ENOENT},
    {ERROR_CURRENT_DIRECTORY,	  EACCES},
    {ERROR_NOT_SAME_DEVICE,	  EXDEV},
    {ERROR_NO_MORE_FILES,	  ENOENT},
    {ERROR_LOCK_VIOLATION,	  EACCES},
    {ERROR_BAD_NETPATH,		  ENOENT},
    {ERROR_NETWORK_ACCESS_DENIED, EACCES},
    {ERROR_BAD_NET_NAME,	  ENOENT},
    {ERROR_FILE_EXISTS,		  EEXIST},
    {ERROR_CANNOT_MAKE,		  EACCES},
    {ERROR_FAIL_I24,		  EACCES},
    {ERROR_INVALID_PARAMETER,	  EINVAL},
    {ERROR_NO_PROC_SLOTS,	  EAGAIN},
    {ERROR_DRIVE_LOCKED,	  EACCES},
    {ERROR_BROKEN_PIPE,		  EPIPE},
    {ERROR_DISK_FULL,		  ENOSPC},
    {ERROR_INVALID_TARGET_HANDLE, EBADF},
    {ERROR_INVALID_HANDLE,	  EINVAL},
    {ERROR_WAIT_NO_CHILDREN,	  ECHILD},
    {ERROR_CHILD_NOT_COMPLETE,	  ECHILD},
    {ERROR_DIRECT_ACCESS_HANDLE,  EBADF},
    {ERROR_NEGATIVE_SEEK,	  EINVAL},
    {ERROR_SEEK_ON_DEVICE,	  EACCES},
    {ERROR_DIR_NOT_EMPTY,	  ENOTEMPTY},
    {ERROR_NOT_LOCKED,		  EACCES},
    {ERROR_BAD_PATHNAME,	  ENOENT},
    {ERROR_MAX_THRDS_REACHED,	  EAGAIN},
    {ERROR_LOCK_FAILED,		  EACCES},
    {ERROR_ALREADY_EXISTS,	  EEXIST},
    {ERROR_FILENAME_EXCED_RANGE,  ENOENT},
    {ERROR_NESTING_NOT_ALLOWED,	  EAGAIN},
    {ERROR_NOT_ENOUGH_QUOTA,	  ENOMEM},
    {0, 0}
};

static void C_fcall
set_errno(DWORD w32err)
{
    errmap_t *map;
    for (map = errmap; map->win32; ++map)
    {
	if (map->win32 == w32err)
	{
	    errno = map->libc;
	    return;
	}
    }
    errno = ENOSYS; /* For lack of anything better */
}

static int C_fcall
set_last_errno()
{
    set_errno(GetLastError());
    return 0;
}

static int fd_to_path(C_word fd, TCHAR path[])
{
  DWORD result;
  HANDLE fh = (HANDLE)_get_osfhandle(C_unfix(fd));

  if (fh == INVALID_HANDLE_VALUE) {
    set_last_errno();
    return -1;
  }

  result = GetFinalPathNameByHandle(fh, path, MAX_PATH, VOLUME_NAME_DOS);
  if (result == 0) {
    set_last_errno();
    return -1;
  } else if (result >= MAX_PATH) { /* Shouldn't happen */
    errno = ENOMEM; /* For lack of anything better */
    return -1;
  } else {
    return 0;
  }
}

static C_word C_fchmod(C_word fd, C_word m)
{
  TCHAR path[MAX_PATH];
  if (fd_to_path(fd, path) == -1) return C_fix(-1);
  else return C_fix(chmod(path, C_unfix(m)));
}

static C_word C_fchdir(C_word fd)
{
  TCHAR path[MAX_PATH];
  if (fd_to_path(fd, path) == -1) return C_fix(-1);
  else return C_fix(chdir(path));
}

static int C_fcall
process_wait(C_word h, C_word t)
{
    if (WaitForSingleObject((HANDLE)h, (t ? 0 : INFINITE)) == WAIT_OBJECT_0)
    {
	DWORD ret;
	if (GetExitCodeProcess((HANDLE)h, &ret))
	{
	    CloseHandle((HANDLE)h);
	    C_exstatus = ret;
	    return 1;
	}
    }
    return set_last_errno();
}

#define C_process_wait(p, t) (process_wait(C_unfix(p), C_truep(t)) ? C_SCHEME_TRUE : C_SCHEME_FALSE)


static C_TLS int C_isNT = 0;


static int C_fcall
C_windows_nt()
{
  static int has_info = 0;

  if(!has_info) {
    OSVERSIONINFO ovf;
    ZeroMemory(&ovf, sizeof(ovf));
    ovf.dwOSVersionInfoSize = sizeof(ovf);
    has_info = 1;

    if(GetVersionEx(&ovf)) {
      SYSTEM_INFO si;

      switch (ovf.dwPlatformId) {
      case VER_PLATFORM_WIN32_NT:
        return C_isNT = 1;
      }
    }
  }

  return C_isNT;
}


static int C_fcall
get_shlcmd()
{
    /* Do we need to build the shell command pathname? */
    if (!strlen(C_shlcmd))
    {
      char *cmdnam = C_windows_nt() ? "\\cmd.exe" : "\\command.com";
      UINT len = GetSystemDirectory(C_shlcmd, sizeof(C_shlcmd) - strlen(cmdnam));
      if (len)
	C_strlcpy(C_shlcmd + len, cmdnam, sizeof(C_shlcmd));
      else
	return set_last_errno();
    }

    return 1;
}

#define C_sysinfo() (sysinfo() ? C_SCHEME_TRUE : C_SCHEME_FALSE)
#define C_get_shlcmd() (get_shlcmd() ? C_SCHEME_TRUE : C_SCHEME_FALSE)

/* GetUserName */

static int C_fcall
get_user_name()
{
    if (!strlen(C_username))
    {
	DWORD bufCharCount = sizeof(C_username) / sizeof(C_username[0]);
	if (!GetUserName(C_username, &bufCharCount))
	    return set_last_errno();
    }
    return 1;
}

#define C_get_user_name() (get_user_name() ? C_SCHEME_TRUE : C_SCHEME_FALSE)

/*
    Spawn a process directly.
    Params:
    app		Command to execute.
    cmdlin	Command line (arguments).
    env		Environment for the new process (may be NULL).
    handle, stdin, stdout, stderr
		Spawned process info are returned in integers.
		When spawned process shares standard io stream with the parent
		process the respective value in handle, stdin, stdout, stderr
		is -1.
    params	A bitmask controling operation.
		Bit 1: Child & parent share standard input if this bit is set.
		Bit 2: Share standard output if bit is set.
		Bit 3: Share standard error if bit is set.

    Returns: zero return value indicates failure.
*/
static int C_fcall
C_process(const char *app, const char *cmdlin, const char **env,
	  int *phandle, int *pstdin_fd, int *pstdout_fd, int *pstderr_fd,
	  int params)
{
    int i;
    int success = TRUE;
    const int f_share_io[3] = { params & 1, params & 2, params & 4};
    int io_fds[3] = { -1, -1, -1 };
    HANDLE
	child_io_handles[3] = { NULL, NULL, NULL },
	standard_io_handles[3] = {
	    GetStdHandle(STD_INPUT_HANDLE),
	    GetStdHandle(STD_OUTPUT_HANDLE),
	    GetStdHandle(STD_ERROR_HANDLE)};
    const char modes[3] = "rww";
    HANDLE cur_process = GetCurrentProcess(), child_process = NULL;
    void* envblk = NULL;

    /****** create io handles & fds ***/

    for (i=0; i<3 && success; ++i)
    {
	if (f_share_io[i])
	{
	    success = DuplicateHandle(
		cur_process, standard_io_handles[i],
		cur_process, &child_io_handles[i],
		0, FALSE, DUPLICATE_SAME_ACCESS);
	}
	else
	{
	    HANDLE a, b;
	    success = CreatePipe(&a,&b,NULL,0);
	    if(success)
	    {
		HANDLE parent_end;
		if (modes[i]=='r') { child_io_handles[i]=a; parent_end=b; }
		else		   { parent_end=a; child_io_handles[i]=b; }
		success = (io_fds[i] = _open_osfhandle((C_word)parent_end,0)) >= 0;
                /* Make new handle inheritable */
		if (success)
		  success = SetHandleInformation(child_io_handles[i], HANDLE_FLAG_INHERIT, -1);
	    }
	}
    }

#if 0 /* Requires a sorted list by key! */
    /****** create environment block if necessary ****/

    if (env && success)
    {
	char** p;
	int len = 0;

	for (p = env; *p; ++p) len += strlen(*p) + 1;

	if (envblk = C_malloc(len + 1))
	{
	    char* pb = (char*)envblk;
	    for (p = env; *p; ++p)
	    {
		C_strlcpy(pb, *p, len+1);
		pb += strlen(*p) + 1;
	    }
	    *pb = '\0';
            /* This _should_ already have been checked for embedded NUL bytes */
	}
	else
	    success = FALSE;
    }
#endif

    /****** finally spawn process ****/

    if (success)
    {
	PROCESS_INFORMATION pi;
	STARTUPINFO si;

	ZeroMemory(&pi,sizeof pi);
	ZeroMemory(&si,sizeof si);
	si.cb = sizeof si;
	si.dwFlags = STARTF_USESTDHANDLES;
	si.hStdInput = child_io_handles[0];
	si.hStdOutput = child_io_handles[1];
	si.hStdError = child_io_handles[2];

	/* FIXME passing 'app' param causes failure & possible stack corruption */
	success = CreateProcess(
	    NULL, (char*)cmdlin, NULL, NULL, TRUE, 0, envblk, NULL, &si, &pi);

	if (success)
	{
	    child_process=pi.hProcess;
	    CloseHandle(pi.hThread);
	}
	else
	    set_last_errno();
    }
    else
	set_last_errno();

    /****** cleanup & return *********/

    /* parent must close child end */
    for (i=0; i<3; ++i) {
	if (child_io_handles[i] != NULL)
	    CloseHandle(child_io_handles[i]);
    }

    if (success)
    {
	*phandle = (C_word)child_process;
	*pstdin_fd = io_fds[0];
	*pstdout_fd = io_fds[1];
	*pstderr_fd = io_fds[2];
    }
    else
    {
	for (i=0; i<3; ++i) {
	    if (io_fds[i] != -1)
		_close(io_fds[i]);
	}
    }

    return success;
}

static int set_file_mtime(char *filename, C_word atime, C_word mtime)
{
  struct stat sb;
  struct _utimbuf tb;

  /* Only stat if needed */
  if (atime == C_SCHEME_FALSE || mtime == C_SCHEME_FALSE) {
    if (C_stat(filename, &sb) == -1) return -1;
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
  return _utime(filename, &tb);
}



static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_scheduler_toplevel)
C_externimport void C_ccall C_scheduler_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_port_toplevel)
C_externimport void C_ccall C_port_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_pathname_toplevel)
C_externimport void C_ccall C_pathname_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_lolevel_toplevel)
C_externimport void C_ccall C_lolevel_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[408];
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
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,7),40,97,51,53,50,56,41,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,24),40,97,51,53,51,52,32,101,112,105,100,32,101,110,111,114,109,32,101,99,111,100,101,41};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,112,114,111,99,101,115,115,45,119,97,105,116,32,46,32,97,114,103,115,41,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,7),40,97,51,54,48,51,41,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,11),40,97,51,53,57,55,32,101,120,110,41,0,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,17),40,100,111,108,111,111,112,49,48,49,48,32,115,108,32,105,41,0,0,0,0,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,10),40,116,109,112,49,50,49,57,55,41,0,0,0,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,7),40,97,51,54,55,55,41,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,15),40,116,109,112,50,50,49,57,56,32,97,114,103,115,41,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,7),40,97,51,54,49,50,41,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,9),40,97,51,53,57,49,32,107,41,0,0,0,0,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,61),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,108,105,115,116,45,62,99,45,115,116,114,105,110,103,45,98,117,102,102,101,114,32,115,116,114,105,110,103,45,108,105,115,116,32,99,111,110,118,101,114,116,32,108,111,99,41,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,14),40,100,111,108,111,111,112,49,48,50,57,32,105,41,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,102,114,101,101,45,99,45,115,116,114,105,110,103,45,98,117,102,102,101,114,32,98,117,102,102,101,114,45,97,114,114,97,121,41,0,0,0,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,7),40,103,49,48,52,50,41,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,19),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,48,52,49,41,0,0,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,46),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,99,104,101,99,107,45,101,110,118,105,114,111,110,109,101,110,116,45,108,105,115,116,32,108,115,116,32,108,111,99,41,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,7),40,110,111,112,32,120,41,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,7),40,97,51,56,48,53,41,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,11),40,97,51,55,57,57,32,101,120,110,41,0,0,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,48,56,53,32,103,49,48,57,55,41,0,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,7),40,97,51,56,50,54,41,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,7),40,97,51,57,48,55,41,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,14),40,97,51,57,48,49,32,46,32,97,114,103,115,41,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,7),40,97,51,56,50,48,41,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,9),40,97,51,55,57,51,32,107,41,0,0,0,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,77),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,99,97,108,108,45,119,105,116,104,45,101,120,101,99,45,97,114,103,115,32,108,111,99,32,102,105,108,101,110,97,109,101,32,97,114,103,99,111,110,118,32,97,114,103,108,105,115,116,32,101,110,118,108,105,115,116,32,112,114,111,99,41,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,21),40,99,104,101,99,107,32,108,111,99,32,99,109,100,32,105,110,112,32,114,41,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,111,112,101,110,45,105,110,112,117,116,45,112,105,112,101,32,99,109,100,32,46,32,109,41,0,0,0,0,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,111,112,101,110,45,111,117,116,112,117,116,45,112,105,112,101,32,99,109,100,32,46,32,109,41,0,0,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,39),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,99,108,111,115,101,45,105,110,112,117,116,45,112,105,112,101,32,112,111,114,116,41,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,99,108,111,115,101,45,111,117,116,112,117,116,45,112,105,112,101,32,112,111,114,116,41};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,7),40,97,52,48,55,48,41,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,17),40,97,52,48,56,49,32,46,32,114,101,115,117,108,116,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,7),40,97,52,48,55,53,41,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,7),40,97,52,48,57,48,41,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,55),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,119,105,116,104,45,105,110,112,117,116,45,102,114,111,109,45,112,105,112,101,32,99,109,100,32,116,104,117,110,107,32,46,32,109,111,100,101,41,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,7),40,97,52,49,48,52,41,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,17),40,97,52,49,49,48,32,46,32,114,101,115,117,108,116,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,55),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,99,97,108,108,45,119,105,116,104,45,111,117,116,112,117,116,45,112,105,112,101,32,99,109,100,32,112,114,111,99,32,46,32,109,111,100,101,41,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,7),40,97,52,49,50,56,41,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,17),40,97,52,49,51,52,32,46,32,114,101,115,117,108,116,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,54),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,99,97,108,108,45,119,105,116,104,45,105,110,112,117,116,45,112,105,112,101,32,99,109,100,32,112,114,111,99,32,46,32,109,111,100,101,41,0,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,7),40,97,52,49,53,50,41,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,17),40,97,52,49,54,51,32,46,32,114,101,115,117,108,116,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,7),40,97,52,49,53,55,41,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,7),40,97,52,49,55,50,41,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,54),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,119,105,116,104,45,111,117,116,112,117,116,45,116,111,45,112,105,112,101,32,99,109,100,32,116,104,117,110,107,32,46,32,109,111,100,101,41,0,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,52),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,111,112,101,110,32,102,105,108,101,110,97,109,101,32,102,108,97,103,115,32,46,32,109,111,100,101,41,0,0,0,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,34),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,99,108,111,115,101,32,102,100,41,0,0,0,0,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,47),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,114,101,97,100,32,102,100,32,115,105,122,101,32,46,32,98,117,102,102,101,114,41,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,48),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,119,114,105,116,101,32,102,100,32,98,117,102,102,101,114,32,46,32,115,105,122,101,41};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,13),40,115,117,102,102,105,120,45,108,111,111,112,41,0,0,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,8),40,118,97,54,49,48,54,41};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,99,111,117,110,116,41,0,0,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,8),40,118,97,54,49,49,52,41};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,109,107,115,116,101,109,112,32,116,101,109,112,108,97,116,101,41,0,0,0,0,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,99,114,101,97,116,101,45,112,105,112,101,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,100,117,112,108,105,99,97,116,101,45,102,105,108,101,110,111,32,111,108,100,32,46,32,110,101,119,41,0,0,0,0,0,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,48),40,99,104,105,99,107,101,110,46,116,105,109,101,46,112,111,115,105,120,35,108,111,99,97,108,45,116,105,109,101,122,111,110,101,45,97,98,98,114,101,118,105,97,116,105,111,110,41};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,113,117,111,116,101,45,97,114,103,45,115,116,114,105,110,103,32,115,116,114,41,0,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,10),40,102,95,52,54,56,49,32,120,41,0,0,0,0,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,25),40,97,52,54,54,54,32,112,114,103,32,97,114,103,98,117,102,32,101,110,118,98,117,102,41,0,0,0,0,0,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,112,114,111,99,101,115,115,45,101,120,101,99,117,116,101,32,102,105,108,101,110,97,109,101,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,10),40,102,95,52,55,54,52,32,120,41,0,0,0,0,0,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,25),40,97,52,55,52,57,32,112,114,103,32,97,114,103,98,117,102,32,101,110,118,98,117,102,41,0,0,0,0,0,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,52),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,112,114,111,99,101,115,115,45,115,112,97,119,110,32,109,111,100,101,32,102,105,108,101,110,97,109,101,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,33),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,115,104,101,108,108,45,99,111,109,109,97,110,100,32,108,111,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,112,114,111,99,101,115,115,45,114,117,110,32,102,32,46,32,97,114,103,115,41,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,7),40,103,49,53,57,56,41,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,19),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,53,57,55,41,0,0,0,0,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,15),40,99,104,107,115,116,114,108,115,116,32,108,115,116,41,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,53,50,49,32,103,49,53,51,51,41,0,0,0,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,7),40,97,53,49,48,51,41,0};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,22),40,97,53,49,48,57,32,105,110,32,111,117,116,32,112,105,100,32,101,114,114,41,0,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,39),40,37,112,114,111,99,101,115,115,32,108,111,99,32,101,114,114,63,32,99,109,100,32,97,114,103,115,32,101,110,118,32,101,120,97,99,116,102,41,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,112,114,111,99,101,115,115,32,99,109,100,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,112,114,111,99,101,115,115,42,32,99,109,100,32,46,32,114,101,115,116,41,0,0,0};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,99,117,114,114,101,110,116,45,117,115,101,114,45,110,97,109,101,41,0,0,0,0,0,0,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,99,114,101,97,116,101,45,102,105,102,111,32,46,32,95,41,0,0,0,0};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,50),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,99,114,101,97,116,101,45,115,101,115,115,105,111,110,32,46,32,95,41,0,0,0,0,0,0};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,99,114,101,97,116,101,45,115,121,109,98,111,108,105,99,45,108,105,110,107,32,46,32,95,41,0,0,0};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,62),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,99,117,114,114,101,110,116,45,101,102,102,101,99,116,105,118,101,45,103,114,111,117,112,45,105,100,32,46,32,95,41,0,0};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,61),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,99,117,114,114,101,110,116,45,101,102,102,101,99,116,105,118,101,45,117,115,101,114,45,105,100,32,46,32,95,41,0,0,0};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,63),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,99,117,114,114,101,110,116,45,101,102,102,101,99,116,105,118,101,45,117,115,101,114,45,110,97,109,101,32,46,32,95,41,0};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,52),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,99,117,114,114,101,110,116,45,103,114,111,117,112,45,105,100,32,46,32,95,41,0,0,0,0};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,51),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,99,117,114,114,101,110,116,45,117,115,101,114,45,105,100,32,46,32,95,41,0,0,0,0,0};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,99,111,110,116,114,111,108,32,46,32,95,41,0,0,0};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,34),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,108,105,110,107,32,46,32,95,41,0,0,0,0,0,0};
static C_char C_TLS li135[] C_aligned={C_lihdr(0,0,34),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,108,111,99,107,32,46,32,95,41,0,0,0,0,0,0};
static C_char C_TLS li136[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,108,111,99,107,47,98,108,111,99,107,105,110,103,32,46,32,95,41,0,0,0,0,0};
static C_char C_TLS li137[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,115,101,108,101,99,116,32,46,32,95,41,0,0,0,0};
static C_char C_TLS li138[] C_aligned={C_lihdr(0,0,39),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,116,101,115,116,45,108,111,99,107,32,46,32,95,41,0};
static C_char C_TLS li139[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,116,114,117,110,99,97,116,101,32,46,32,95,41,0,0};
static C_char C_TLS li140[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,117,110,108,111,99,107,32,46,32,95,41,0,0,0,0};
static C_char C_TLS li141[] C_aligned={C_lihdr(0,0,53),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,112,97,114,101,110,116,45,112,114,111,99,101,115,115,45,105,100,32,46,32,95,41,0,0,0};
static C_char C_TLS li142[] C_aligned={C_lihdr(0,0,34),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,112,114,111,99,101,115,115,45,102,111,114,107,32,46,32,95,41,0,0,0,0,0,0};
static C_char C_TLS li143[] C_aligned={C_lihdr(0,0,52),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,112,114,111,99,101,115,115,45,103,114,111,117,112,45,105,100,32,46,32,95,41,0,0,0,0};
static C_char C_TLS li144[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,112,114,111,99,101,115,115,45,115,105,103,110,97,108,32,46,32,95,41,0,0,0,0};
static C_char C_TLS li145[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,114,101,97,100,45,115,121,109,98,111,108,105,99,45,108,105,110,107,32,46,32,95,41,0,0,0,0,0};
static C_char C_TLS li146[] C_aligned={C_lihdr(0,0,39),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,46,115,105,103,110,97,108,35,115,101,116,45,97,108,97,114,109,33,32,46,32,95,41,0};
static C_char C_TLS li147[] C_aligned={C_lihdr(0,0,55),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,115,101,116,45,114,111,111,116,45,100,105,114,101,99,116,111,114,121,33,32,46,32,95,41,0};
static C_char C_TLS li148[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,46,115,105,103,110,97,108,35,115,101,116,45,115,105,103,110,97,108,45,109,97,115,107,33,32,46,32,95,41,0,0,0};
static C_char C_TLS li149[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,46,115,105,103,110,97,108,35,115,105,103,110,97,108,45,109,97,115,107,32,46,32,95,41};
static C_char C_TLS li150[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,46,115,105,103,110,97,108,35,115,105,103,110,97,108,45,109,97,115,107,33,32,46,32,95,41,0,0,0,0,0,0,0};
static C_char C_TLS li151[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,46,115,105,103,110,97,108,35,115,105,103,110,97,108,45,109,97,115,107,101,100,63,32,46,32,95,41,0,0,0,0,0};
static C_char C_TLS li152[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,46,115,105,103,110,97,108,35,115,105,103,110,97,108,45,117,110,109,97,115,107,33,32,46,32,95,41,0,0,0,0,0};
static C_char C_TLS li153[] C_aligned={C_lihdr(0,0,52),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,117,115,101,114,45,105,110,102,111,114,109,97,116,105,111,110,32,46,32,95,41,0,0,0,0};
static C_char C_TLS li154[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,116,105,109,101,46,112,111,115,105,120,35,117,116,99,45,116,105,109,101,45,62,115,101,99,111,110,100,115,32,46,32,95,41,0,0,0,0,0,0};
static C_char C_TLS li155[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,116,105,109,101,46,112,111,115,105,120,35,115,116,114,105,110,103,45,62,116,105,109,101,32,46,32,95,41,0,0,0};
static C_char C_TLS li156[] C_aligned={C_lihdr(0,0,21),40,99,104,105,99,107,101,110,46,101,114,114,110,111,35,101,114,114,110,111,41,0,0,0};
static C_char C_TLS li157[] C_aligned={C_lihdr(0,0,8),40,118,97,54,49,50,50,41};
static C_char C_TLS li158[] C_aligned={C_lihdr(0,0,8),40,118,97,54,49,50,52,41};
static C_char C_TLS li159[] C_aligned={C_lihdr(0,0,8),40,118,97,54,49,50,54,41};
static C_char C_TLS li160[] C_aligned={C_lihdr(0,0,8),40,118,97,54,49,50,56,41};
static C_char C_TLS li161[] C_aligned={C_lihdr(0,0,11),40,97,53,53,51,50,32,115,105,103,41,0,0,0,0,0};
static C_char C_TLS li162[] C_aligned={C_lihdr(0,0,14),40,97,53,53,52,49,32,46,32,114,101,115,116,41,0,0};
static C_char C_TLS li163[] C_aligned={C_lihdr(0,0,10),40,97,53,53,54,54,32,117,109,41,0,0,0,0,0,0};
static C_char C_TLS li164[] C_aligned={C_lihdr(0,0,12),40,97,53,53,55,50,32,112,111,114,116,41,0,0,0,0};
static C_char C_TLS li165[] C_aligned={C_lihdr(0,0,9),40,97,53,54,48,57,32,102,41,0,0,0,0,0,0,0};
static C_char C_TLS li166[] C_aligned={C_lihdr(0,0,9),40,97,53,54,49,53,32,102,41,0,0,0,0,0,0,0};
static C_char C_TLS li167[] C_aligned={C_lihdr(0,0,9),40,97,53,54,50,49,32,102,41,0,0,0,0,0,0,0};
static C_char C_TLS li168[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from k4888 */
C_regparm static C_word C_fcall stub1476(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4,C_word C_a5,C_word C_a6,C_word C_a7){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
char * t1=(char * )C_string_or_null(C_a1);
void * t2=(void * )C_c_pointer_or_null(C_a2);
int *t3=(int *)C_c_pointer_or_null(C_a3);
int *t4=(int *)C_c_pointer_or_null(C_a4);
int *t5=(int *)C_c_pointer_or_null(C_a5);
int *t6=(int *)C_c_pointer_or_null(C_a6);
int t7=(int )C_unfix(C_a7);
C_r=C_mk_bool(C_process(t0,t1,t2,t3,t4,t5,t6,t7));
return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub1387(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char *z = (_daylight ? _tzname[1] : _tzname[0]);

C_return(z);
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

/* from k3414 */
C_regparm static C_word C_fcall stub936(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
C_word t1=(C_word )(C_a1);
void * t2=(void * )C_data_pointer_or_null(C_a2);
C_r=C_mpointer(&C_a,(void*)C_strftime(t0,t1,t2));
return C_r;}

/* from k3401 */
C_regparm static C_word C_fcall stub926(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
C_r=C_mpointer(&C_a,(void*)C_asctime(t0,t1));
return C_r;}

/* from k3333 */
C_regparm static C_word C_fcall stub899(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_num_to_int(C_a0);
C_r=C_mpointer(&C_a,(void*)C_ctime(t0));
return C_r;}

/* from chicken.process-context.posix#current-process-id in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
C_regparm static C_word C_fcall stub843(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getpid());
return C_r;}

/* from k2744 in k2738 in k2735 in k2723 in chicken.file.posix#set-file-times! in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
C_regparm static C_word C_fcall stub724(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
C_word t1=(C_word )(C_a1);
C_word t2=(C_word )(C_a2);
C_r=C_fix((C_word)set_file_mtime(t0,t1,t2));
return C_r;}

/* from k2574 */
C_regparm static C_word C_fcall stub650(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)strerror(t0));
return C_r;}

C_noret_decl(f6133)
static void C_ccall f6133(C_word c,C_word *av) C_noret;
C_noret_decl(f6137)
static void C_ccall f6137(C_word c,C_word *av) C_noret;
C_noret_decl(f_2252)
static void C_ccall f_2252(C_word c,C_word *av) C_noret;
C_noret_decl(f_2255)
static void C_ccall f_2255(C_word c,C_word *av) C_noret;
C_noret_decl(f_2258)
static void C_ccall f_2258(C_word c,C_word *av) C_noret;
C_noret_decl(f_2261)
static void C_ccall f_2261(C_word c,C_word *av) C_noret;
C_noret_decl(f_2264)
static void C_ccall f_2264(C_word c,C_word *av) C_noret;
C_noret_decl(f_2267)
static void C_ccall f_2267(C_word c,C_word *av) C_noret;
C_noret_decl(f_2270)
static void C_ccall f_2270(C_word c,C_word *av) C_noret;
C_noret_decl(f_2356)
static void C_ccall f_2356(C_word c,C_word *av) C_noret;
C_noret_decl(f_2369)
static void C_ccall f_2369(C_word c,C_word *av) C_noret;
C_noret_decl(f_2374)
static void C_ccall f_2374(C_word c,C_word *av) C_noret;
C_noret_decl(f_2378)
static void C_ccall f_2378(C_word c,C_word *av) C_noret;
C_noret_decl(f_2390)
static void C_ccall f_2390(C_word c,C_word *av) C_noret;
C_noret_decl(f_2394)
static void C_ccall f_2394(C_word c,C_word *av) C_noret;
C_noret_decl(f_2404)
static void C_fcall f_2404(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2425)
static void C_ccall f_2425(C_word c,C_word *av) C_noret;
C_noret_decl(f_2428)
static void C_ccall f_2428(C_word c,C_word *av) C_noret;
C_noret_decl(f_2439)
static void C_ccall f_2439(C_word c,C_word *av) C_noret;
C_noret_decl(f_2445)
static void C_fcall f_2445(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2470)
static void C_ccall f_2470(C_word c,C_word *av) C_noret;
C_noret_decl(f_2577)
static void C_ccall f_2577(C_word c,C_word *av) C_noret;
C_noret_decl(f_2581)
static void C_ccall f_2581(C_word c,C_word *av) C_noret;
C_noret_decl(f_2588)
static void C_ccall f_2588(C_word c,C_word *av) C_noret;
C_noret_decl(f_2592)
static void C_ccall f_2592(C_word c,C_word *av) C_noret;
C_noret_decl(f_2595)
static void C_fcall f_2595(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2599)
static void C_ccall f_2599(C_word c,C_word *av) C_noret;
C_noret_decl(f_2620)
static void C_ccall f_2620(C_word c,C_word *av) C_noret;
C_noret_decl(f_2624)
static void C_ccall f_2624(C_word c,C_word *av) C_noret;
C_noret_decl(f_2633)
static void C_ccall f_2633(C_word c,C_word *av) C_noret;
C_noret_decl(f_2641)
static void C_ccall f_2641(C_word c,C_word *av) C_noret;
C_noret_decl(f_2648)
static void C_ccall f_2648(C_word c,C_word *av) C_noret;
C_noret_decl(f_2659)
static void C_ccall f_2659(C_word c,C_word *av) C_noret;
C_noret_decl(f_2663)
static void C_ccall f_2663(C_word c,C_word *av) C_noret;
C_noret_decl(f_2666)
static void C_ccall f_2666(C_word c,C_word *av) C_noret;
C_noret_decl(f_2684)
static void C_ccall f_2684(C_word c,C_word *av) C_noret;
C_noret_decl(f_2688)
static void C_ccall f_2688(C_word c,C_word *av) C_noret;
C_noret_decl(f_2698)
static void C_ccall f_2698(C_word c,C_word *av) C_noret;
C_noret_decl(f_2703)
static void C_ccall f_2703(C_word c,C_word *av) C_noret;
C_noret_decl(f_2707)
static void C_ccall f_2707(C_word c,C_word *av) C_noret;
C_noret_decl(f_2709)
static void C_ccall f_2709(C_word c,C_word *av) C_noret;
C_noret_decl(f_2713)
static void C_ccall f_2713(C_word c,C_word *av) C_noret;
C_noret_decl(f_2715)
static void C_ccall f_2715(C_word c,C_word *av) C_noret;
C_noret_decl(f_2719)
static void C_ccall f_2719(C_word c,C_word *av) C_noret;
C_noret_decl(f_2721)
static void C_ccall f_2721(C_word c,C_word *av) C_noret;
C_noret_decl(f_2725)
static void C_ccall f_2725(C_word c,C_word *av) C_noret;
C_noret_decl(f_2737)
static void C_ccall f_2737(C_word c,C_word *av) C_noret;
C_noret_decl(f_2740)
static void C_ccall f_2740(C_word c,C_word *av) C_noret;
C_noret_decl(f_2746)
static void C_ccall f_2746(C_word c,C_word *av) C_noret;
C_noret_decl(f_2756)
static void C_fcall f_2756(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2800)
static void C_ccall f_2800(C_word c,C_word *av) C_noret;
C_noret_decl(f_2804)
static void C_ccall f_2804(C_word c,C_word *av) C_noret;
C_noret_decl(f_2806)
static void C_ccall f_2806(C_word c,C_word *av) C_noret;
C_noret_decl(f_2812)
static void C_ccall f_2812(C_word c,C_word *av) C_noret;
C_noret_decl(f_2820)
static void C_ccall f_2820(C_word c,C_word *av) C_noret;
C_noret_decl(f_2824)
static void C_ccall f_2824(C_word c,C_word *av) C_noret;
C_noret_decl(f_2828)
static void C_ccall f_2828(C_word c,C_word *av) C_noret;
C_noret_decl(f_2830)
static void C_ccall f_2830(C_word c,C_word *av) C_noret;
C_noret_decl(f_2849)
static void C_ccall f_2849(C_word c,C_word *av) C_noret;
C_noret_decl(f_2917)
static void C_ccall f_2917(C_word c,C_word *av) C_noret;
C_noret_decl(f_2925)
static void C_ccall f_2925(C_word c,C_word *av) C_noret;
C_noret_decl(f_2927)
static void C_ccall f_2927(C_word c,C_word *av) C_noret;
C_noret_decl(f_2935)
static void C_ccall f_2935(C_word c,C_word *av) C_noret;
C_noret_decl(f_2937)
static void C_ccall f_2937(C_word c,C_word *av) C_noret;
C_noret_decl(f_2945)
static void C_ccall f_2945(C_word c,C_word *av) C_noret;
C_noret_decl(f_2947)
static void C_ccall f_2947(C_word c,C_word *av) C_noret;
C_noret_decl(f_2955)
static void C_ccall f_2955(C_word c,C_word *av) C_noret;
C_noret_decl(f_2957)
static void C_ccall f_2957(C_word c,C_word *av) C_noret;
C_noret_decl(f_2965)
static void C_ccall f_2965(C_word c,C_word *av) C_noret;
C_noret_decl(f_2967)
static void C_ccall f_2967(C_word c,C_word *av) C_noret;
C_noret_decl(f_2975)
static void C_ccall f_2975(C_word c,C_word *av) C_noret;
C_noret_decl(f_2977)
static void C_ccall f_2977(C_word c,C_word *av) C_noret;
C_noret_decl(f_2985)
static void C_ccall f_2985(C_word c,C_word *av) C_noret;
C_noret_decl(f_2990)
static void C_ccall f_2990(C_word c,C_word *av) C_noret;
C_noret_decl(f_2997)
static void C_ccall f_2997(C_word c,C_word *av) C_noret;
C_noret_decl(f_3000)
static void C_ccall f_3000(C_word c,C_word *av) C_noret;
C_noret_decl(f_3006)
static void C_ccall f_3006(C_word c,C_word *av) C_noret;
C_noret_decl(f_3012)
static void C_ccall f_3012(C_word c,C_word *av) C_noret;
C_noret_decl(f_3045)
static void C_ccall f_3045(C_word c,C_word *av) C_noret;
C_noret_decl(f_3073)
static void C_fcall f_3073(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3081)
static void C_ccall f_3081(C_word c,C_word *av) C_noret;
C_noret_decl(f_3110)
static void C_fcall f_3110(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3123)
static void C_ccall f_3123(C_word c,C_word *av) C_noret;
C_noret_decl(f_3129)
static void C_ccall f_3129(C_word c,C_word *av) C_noret;
C_noret_decl(f_3133)
static void C_ccall f_3133(C_word c,C_word *av) C_noret;
C_noret_decl(f_3141)
static void C_ccall f_3141(C_word c,C_word *av) C_noret;
C_noret_decl(f_3143)
static void C_ccall f_3143(C_word c,C_word *av) C_noret;
C_noret_decl(f_3147)
static void C_ccall f_3147(C_word c,C_word *av) C_noret;
C_noret_decl(f_3155)
static void C_ccall f_3155(C_word c,C_word *av) C_noret;
C_noret_decl(f_3157)
static void C_ccall f_3157(C_word c,C_word *av) C_noret;
C_noret_decl(f_3173)
static void C_ccall f_3173(C_word c,C_word *av) C_noret;
C_noret_decl(f_3182)
static void C_ccall f_3182(C_word c,C_word *av) C_noret;
C_noret_decl(f_3196)
static void C_ccall f_3196(C_word c,C_word *av) C_noret;
C_noret_decl(f_3202)
static void C_ccall f_3202(C_word c,C_word *av) C_noret;
C_noret_decl(f_3206)
static void C_ccall f_3206(C_word c,C_word *av) C_noret;
C_noret_decl(f_3209)
static void C_fcall f_3209(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3212)
static void C_ccall f_3212(C_word c,C_word *av) C_noret;
C_noret_decl(f_3227)
static void C_ccall f_3227(C_word c,C_word *av) C_noret;
C_noret_decl(f_3229)
static void C_ccall f_3229(C_word c,C_word *av) C_noret;
C_noret_decl(f_3232)
static void C_ccall f_3232(C_word c,C_word *av) C_noret;
C_noret_decl(f_3236)
static void C_ccall f_3236(C_word c,C_word *av) C_noret;
C_noret_decl(f_3239)
static void C_ccall f_3239(C_word c,C_word *av) C_noret;
C_noret_decl(f_3248)
static void C_ccall f_3248(C_word c,C_word *av) C_noret;
C_noret_decl(f_3262)
static void C_ccall f_3262(C_word c,C_word *av) C_noret;
C_noret_decl(f_3265)
static void C_fcall f_3265(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3284)
static void C_ccall f_3284(C_word c,C_word *av) C_noret;
C_noret_decl(f_3288)
static void C_ccall f_3288(C_word c,C_word *av) C_noret;
C_noret_decl(f_3291)
static void C_ccall f_3291(C_word c,C_word *av) C_noret;
C_noret_decl(f_3305)
static void C_ccall f_3305(C_word c,C_word *av) C_noret;
C_noret_decl(f_3309)
static void C_ccall f_3309(C_word c,C_word *av) C_noret;
C_noret_decl(f_3312)
static void C_ccall f_3312(C_word c,C_word *av) C_noret;
C_noret_decl(f_3337)
static void C_ccall f_3337(C_word c,C_word *av) C_noret;
C_noret_decl(f_3341)
static void C_ccall f_3341(C_word c,C_word *av) C_noret;
C_noret_decl(f_3344)
static void C_ccall f_3344(C_word c,C_word *av) C_noret;
C_noret_decl(f_3347)
static void C_ccall f_3347(C_word c,C_word *av) C_noret;
C_noret_decl(f_3375)
static void C_ccall f_3375(C_word c,C_word *av) C_noret;
C_noret_decl(f_3379)
static void C_ccall f_3379(C_word c,C_word *av) C_noret;
C_noret_decl(f_3383)
static void C_ccall f_3383(C_word c,C_word *av) C_noret;
C_noret_decl(f_3420)
static void C_ccall f_3420(C_word c,C_word *av) C_noret;
C_noret_decl(f_3427)
static void C_ccall f_3427(C_word c,C_word *av) C_noret;
C_noret_decl(f_3436)
static void C_ccall f_3436(C_word c,C_word *av) C_noret;
C_noret_decl(f_3446)
static void C_ccall f_3446(C_word c,C_word *av) C_noret;
C_noret_decl(f_3450)
static void C_ccall f_3450(C_word c,C_word *av) C_noret;
C_noret_decl(f_3453)
static void C_ccall f_3453(C_word c,C_word *av) C_noret;
C_noret_decl(f_3474)
static void C_ccall f_3474(C_word c,C_word *av) C_noret;
C_noret_decl(f_3482)
static void C_ccall f_3482(C_word c,C_word *av) C_noret;
C_noret_decl(f_3486)
static void C_ccall f_3486(C_word c,C_word *av) C_noret;
C_noret_decl(f_3497)
static void C_ccall f_3497(C_word c,C_word *av) C_noret;
C_noret_decl(f_3499)
static void C_ccall f_3499(C_word c,C_word *av) C_noret;
C_noret_decl(f_3503)
static void C_ccall f_3503(C_word c,C_word *av) C_noret;
C_noret_decl(f_3505)
static void C_ccall f_3505(C_word c,C_word *av) C_noret;
C_noret_decl(f_3524)
static void C_ccall f_3524(C_word c,C_word *av) C_noret;
C_noret_decl(f_3529)
static void C_ccall f_3529(C_word c,C_word *av) C_noret;
C_noret_decl(f_3535)
static void C_ccall f_3535(C_word c,C_word *av) C_noret;
C_noret_decl(f_3576)
static void C_fcall f_3576(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3584)
static void C_ccall f_3584(C_word c,C_word *av) C_noret;
C_noret_decl(f_3587)
static void C_ccall f_3587(C_word c,C_word *av) C_noret;
C_noret_decl(f_3592)
static void C_ccall f_3592(C_word c,C_word *av) C_noret;
C_noret_decl(f_3598)
static void C_ccall f_3598(C_word c,C_word *av) C_noret;
C_noret_decl(f_3604)
static void C_ccall f_3604(C_word c,C_word *av) C_noret;
C_noret_decl(f_3608)
static void C_ccall f_3608(C_word c,C_word *av) C_noret;
C_noret_decl(f_3613)
static void C_ccall f_3613(C_word c,C_word *av) C_noret;
C_noret_decl(f_3615)
static void C_fcall f_3615(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3619)
static void C_ccall f_3619(C_word c,C_word *av) C_noret;
C_noret_decl(f_3621)
static void C_fcall f_3621(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3637)
static void C_ccall f_3637(C_word c,C_word *av) C_noret;
C_noret_decl(f_3643)
static void C_ccall f_3643(C_word c,C_word *av) C_noret;
C_noret_decl(f_3646)
static void C_ccall f_3646(C_word c,C_word *av) C_noret;
C_noret_decl(f_3662)
static void C_ccall f_3662(C_word c,C_word *av) C_noret;
C_noret_decl(f_3672)
static void C_fcall f_3672(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3678)
static void C_ccall f_3678(C_word c,C_word *av) C_noret;
C_noret_decl(f_3689)
static void C_ccall f_3689(C_word c,C_word *av) C_noret;
C_noret_decl(f_3693)
static void C_fcall f_3693(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3697)
static void C_ccall f_3697(C_word c,C_word *av) C_noret;
C_noret_decl(f_3702)
static void C_fcall f_3702(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3712)
static void C_ccall f_3712(C_word c,C_word *av) C_noret;
C_noret_decl(f_3715)
static void C_ccall f_3715(C_word c,C_word *av) C_noret;
C_noret_decl(f_3727)
static void C_fcall f_3727(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3732)
static C_word C_fcall f_3732(C_word t0,C_word t1);
C_noret_decl(f_3751)
static C_word C_fcall f_3751(C_word t0,C_word t1);
C_noret_decl(f_3774)
static void C_ccall f_3774(C_word c,C_word *av) C_noret;
C_noret_decl(f_3776)
static void C_fcall f_3776(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_3780)
static void C_ccall f_3780(C_word c,C_word *av) C_noret;
C_noret_decl(f_3786)
static void C_ccall f_3786(C_word c,C_word *av) C_noret;
C_noret_decl(f_3789)
static void C_ccall f_3789(C_word c,C_word *av) C_noret;
C_noret_decl(f_3794)
static void C_ccall f_3794(C_word c,C_word *av) C_noret;
C_noret_decl(f_3800)
static void C_ccall f_3800(C_word c,C_word *av) C_noret;
C_noret_decl(f_3806)
static void C_ccall f_3806(C_word c,C_word *av) C_noret;
C_noret_decl(f_3810)
static void C_ccall f_3810(C_word c,C_word *av) C_noret;
C_noret_decl(f_3813)
static void C_ccall f_3813(C_word c,C_word *av) C_noret;
C_noret_decl(f_3821)
static void C_ccall f_3821(C_word c,C_word *av) C_noret;
C_noret_decl(f_3827)
static void C_ccall f_3827(C_word c,C_word *av) C_noret;
C_noret_decl(f_3831)
static void C_fcall f_3831(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3838)
static void C_ccall f_3838(C_word c,C_word *av) C_noret;
C_noret_decl(f_3841)
static void C_ccall f_3841(C_word c,C_word *av) C_noret;
C_noret_decl(f_3845)
static void C_ccall f_3845(C_word c,C_word *av) C_noret;
C_noret_decl(f_3866)
static void C_ccall f_3866(C_word c,C_word *av) C_noret;
C_noret_decl(f_3868)
static void C_fcall f_3868(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3893)
static void C_ccall f_3893(C_word c,C_word *av) C_noret;
C_noret_decl(f_3902)
static void C_ccall f_3902(C_word c,C_word *av) C_noret;
C_noret_decl(f_3908)
static void C_ccall f_3908(C_word c,C_word *av) C_noret;
C_noret_decl(f_3933)
static void C_fcall f_3933(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3946)
static void C_ccall f_3946(C_word c,C_word *av) C_noret;
C_noret_decl(f_3952)
static void C_ccall f_3952(C_word c,C_word *av) C_noret;
C_noret_decl(f_3966)
static void C_ccall f_3966(C_word c,C_word *av) C_noret;
C_noret_decl(f_3973)
static void C_ccall f_3973(C_word c,C_word *av) C_noret;
C_noret_decl(f_3983)
static void C_ccall f_3983(C_word c,C_word *av) C_noret;
C_noret_decl(f_3992)
static void C_ccall f_3992(C_word c,C_word *av) C_noret;
C_noret_decl(f_4006)
static void C_ccall f_4006(C_word c,C_word *av) C_noret;
C_noret_decl(f_4013)
static void C_ccall f_4013(C_word c,C_word *av) C_noret;
C_noret_decl(f_4023)
static void C_ccall f_4023(C_word c,C_word *av) C_noret;
C_noret_decl(f_4032)
static void C_ccall f_4032(C_word c,C_word *av) C_noret;
C_noret_decl(f_4039)
static void C_ccall f_4039(C_word c,C_word *av) C_noret;
C_noret_decl(f_4047)
static void C_ccall f_4047(C_word c,C_word *av) C_noret;
C_noret_decl(f_4054)
static void C_ccall f_4054(C_word c,C_word *av) C_noret;
C_noret_decl(f_4062)
static void C_ccall f_4062(C_word c,C_word *av) C_noret;
C_noret_decl(f_4066)
static void C_ccall f_4066(C_word c,C_word *av) C_noret;
C_noret_decl(f_4071)
static void C_ccall f_4071(C_word c,C_word *av) C_noret;
C_noret_decl(f_4076)
static void C_ccall f_4076(C_word c,C_word *av) C_noret;
C_noret_decl(f_4082)
static void C_ccall f_4082(C_word c,C_word *av) C_noret;
C_noret_decl(f_4086)
static void C_ccall f_4086(C_word c,C_word *av) C_noret;
C_noret_decl(f_4091)
static void C_ccall f_4091(C_word c,C_word *av) C_noret;
C_noret_decl(f_4096)
static void C_ccall f_4096(C_word c,C_word *av) C_noret;
C_noret_decl(f_4100)
static void C_ccall f_4100(C_word c,C_word *av) C_noret;
C_noret_decl(f_4105)
static void C_ccall f_4105(C_word c,C_word *av) C_noret;
C_noret_decl(f_4111)
static void C_ccall f_4111(C_word c,C_word *av) C_noret;
C_noret_decl(f_4115)
static void C_ccall f_4115(C_word c,C_word *av) C_noret;
C_noret_decl(f_4120)
static void C_ccall f_4120(C_word c,C_word *av) C_noret;
C_noret_decl(f_4124)
static void C_ccall f_4124(C_word c,C_word *av) C_noret;
C_noret_decl(f_4129)
static void C_ccall f_4129(C_word c,C_word *av) C_noret;
C_noret_decl(f_4135)
static void C_ccall f_4135(C_word c,C_word *av) C_noret;
C_noret_decl(f_4139)
static void C_ccall f_4139(C_word c,C_word *av) C_noret;
C_noret_decl(f_4144)
static void C_ccall f_4144(C_word c,C_word *av) C_noret;
C_noret_decl(f_4148)
static void C_ccall f_4148(C_word c,C_word *av) C_noret;
C_noret_decl(f_4153)
static void C_ccall f_4153(C_word c,C_word *av) C_noret;
C_noret_decl(f_4158)
static void C_ccall f_4158(C_word c,C_word *av) C_noret;
C_noret_decl(f_4164)
static void C_ccall f_4164(C_word c,C_word *av) C_noret;
C_noret_decl(f_4168)
static void C_ccall f_4168(C_word c,C_word *av) C_noret;
C_noret_decl(f_4173)
static void C_ccall f_4173(C_word c,C_word *av) C_noret;
C_noret_decl(f_4182)
static void C_ccall f_4182(C_word c,C_word *av) C_noret;
C_noret_decl(f_4192)
static void C_ccall f_4192(C_word c,C_word *av) C_noret;
C_noret_decl(f_4195)
static void C_ccall f_4195(C_word c,C_word *av) C_noret;
C_noret_decl(f_4199)
static void C_ccall f_4199(C_word c,C_word *av) C_noret;
C_noret_decl(f_4202)
static void C_ccall f_4202(C_word c,C_word *av) C_noret;
C_noret_decl(f_4208)
static void C_ccall f_4208(C_word c,C_word *av) C_noret;
C_noret_decl(f_4217)
static void C_ccall f_4217(C_word c,C_word *av) C_noret;
C_noret_decl(f_4221)
static void C_ccall f_4221(C_word c,C_word *av) C_noret;
C_noret_decl(f_4226)
static void C_ccall f_4226(C_word c,C_word *av) C_noret;
C_noret_decl(f_4248)
static void C_ccall f_4248(C_word c,C_word *av) C_noret;
C_noret_decl(f_4252)
static void C_ccall f_4252(C_word c,C_word *av) C_noret;
C_noret_decl(f_4255)
static void C_ccall f_4255(C_word c,C_word *av) C_noret;
C_noret_decl(f_4258)
static void C_ccall f_4258(C_word c,C_word *av) C_noret;
C_noret_decl(f_4261)
static void C_ccall f_4261(C_word c,C_word *av) C_noret;
C_noret_decl(f_4264)
static void C_ccall f_4264(C_word c,C_word *av) C_noret;
C_noret_decl(f_4273)
static void C_ccall f_4273(C_word c,C_word *av) C_noret;
C_noret_decl(f_4291)
static void C_ccall f_4291(C_word c,C_word *av) C_noret;
C_noret_decl(f_4295)
static void C_ccall f_4295(C_word c,C_word *av) C_noret;
C_noret_decl(f_4298)
static void C_ccall f_4298(C_word c,C_word *av) C_noret;
C_noret_decl(f_4304)
static void C_ccall f_4304(C_word c,C_word *av) C_noret;
C_noret_decl(f_4307)
static void C_ccall f_4307(C_word c,C_word *av) C_noret;
C_noret_decl(f_4313)
static void C_ccall f_4313(C_word c,C_word *av) C_noret;
C_noret_decl(f_4331)
static void C_ccall f_4331(C_word c,C_word *av) C_noret;
C_noret_decl(f_4344)
static void C_ccall f_4344(C_word c,C_word *av) C_noret;
C_noret_decl(f_4353)
static void C_ccall f_4353(C_word c,C_word *av) C_noret;
C_noret_decl(f_4358)
static void C_fcall f_4358(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4366)
static void C_ccall f_4366(C_word c,C_word *av) C_noret;
C_noret_decl(f_4405)
static C_word C_fcall f_4405(C_word t0,C_word t1);
C_noret_decl(f_4446)
static void C_ccall f_4446(C_word c,C_word *av) C_noret;
C_noret_decl(f_4450)
static void C_ccall f_4450(C_word c,C_word *av) C_noret;
C_noret_decl(f_4459)
static C_word C_fcall f_4459(C_word t0,C_word t1);
C_noret_decl(f_4490)
static void C_ccall f_4490(C_word c,C_word *av) C_noret;
C_noret_decl(f_4497)
static void C_ccall f_4497(C_word c,C_word *av) C_noret;
C_noret_decl(f_4506)
static void C_ccall f_4506(C_word c,C_word *av) C_noret;
C_noret_decl(f_4552)
static void C_ccall f_4552(C_word c,C_word *av) C_noret;
C_noret_decl(f_4556)
static void C_ccall f_4556(C_word c,C_word *av) C_noret;
C_noret_decl(f_4559)
static void C_fcall f_4559(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4562)
static void C_ccall f_4562(C_word c,C_word *av) C_noret;
C_noret_decl(f_4568)
static void C_ccall f_4568(C_word c,C_word *av) C_noret;
C_noret_decl(f_4580)
static void C_ccall f_4580(C_word c,C_word *av) C_noret;
C_noret_decl(f_4582)
static void C_ccall f_4582(C_word c,C_word *av) C_noret;
C_noret_decl(f_4603)
static C_word C_fcall f_4603(C_word t0,C_word t1);
C_noret_decl(f_4628)
static void C_ccall f_4628(C_word c,C_word *av) C_noret;
C_noret_decl(f_4640)
static void C_ccall f_4640(C_word c,C_word *av) C_noret;
C_noret_decl(f_4667)
static void C_ccall f_4667(C_word c,C_word *av) C_noret;
C_noret_decl(f_4681)
static void C_ccall f_4681(C_word c,C_word *av) C_noret;
C_noret_decl(f_4720)
static void C_ccall f_4720(C_word c,C_word *av) C_noret;
C_noret_decl(f_4745)
static void C_ccall f_4745(C_word c,C_word *av) C_noret;
C_noret_decl(f_4750)
static void C_ccall f_4750(C_word c,C_word *av) C_noret;
C_noret_decl(f_4757)
static void C_ccall f_4757(C_word c,C_word *av) C_noret;
C_noret_decl(f_4764)
static void C_ccall f_4764(C_word c,C_word *av) C_noret;
C_noret_decl(f_4803)
static void C_fcall f_4803(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4807)
static void C_ccall f_4807(C_word c,C_word *av) C_noret;
C_noret_decl(f_4819)
static void C_ccall f_4819(C_word c,C_word *av) C_noret;
C_noret_decl(f_4830)
static void C_ccall f_4830(C_word c,C_word *av) C_noret;
C_noret_decl(f_4847)
static void C_ccall f_4847(C_word c,C_word *av) C_noret;
C_noret_decl(f_4862)
static void C_ccall f_4862(C_word c,C_word *av) C_noret;
C_noret_decl(f_4866)
static void C_ccall f_4866(C_word c,C_word *av) C_noret;
C_noret_decl(f_4930)
static void C_ccall f_4930(C_word c,C_word *av) C_noret;
C_noret_decl(f_4947)
static void C_ccall f_4947(C_word c,C_word *av) C_noret;
C_noret_decl(f_4951)
static void C_ccall f_4951(C_word c,C_word *av) C_noret;
C_noret_decl(f_4955)
static void C_ccall f_4955(C_word c,C_word *av) C_noret;
C_noret_decl(f_4967)
static void C_ccall f_4967(C_word c,C_word *av) C_noret;
C_noret_decl(f_4974)
static void C_ccall f_4974(C_word c,C_word *av) C_noret;
C_noret_decl(f_4978)
static void C_ccall f_4978(C_word c,C_word *av) C_noret;
C_noret_decl(f_4982)
static void C_ccall f_4982(C_word c,C_word *av) C_noret;
C_noret_decl(f_4986)
static void C_ccall f_4986(C_word c,C_word *av) C_noret;
C_noret_decl(f_5006)
static void C_ccall f_5006(C_word c,C_word *av) C_noret;
C_noret_decl(f_5014)
static void C_fcall f_5014(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5039)
static void C_ccall f_5039(C_word c,C_word *av) C_noret;
C_noret_decl(f_5053)
static void C_fcall f_5053(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_5055)
static void C_fcall f_5055(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5060)
static C_word C_fcall f_5060(C_word t0,C_word t1);
C_noret_decl(f_5069)
static C_word C_fcall f_5069(C_word t0,C_word t1);
C_noret_decl(f_5096)
static void C_ccall f_5096(C_word c,C_word *av) C_noret;
C_noret_decl(f_5099)
static void C_ccall f_5099(C_word c,C_word *av) C_noret;
C_noret_decl(f_5104)
static void C_ccall f_5104(C_word c,C_word *av) C_noret;
C_noret_decl(f_5110)
static void C_ccall f_5110(C_word c,C_word *av) C_noret;
C_noret_decl(f_5135)
static void C_ccall f_5135(C_word c,C_word *av) C_noret;
C_noret_decl(f_5137)
static void C_ccall f_5137(C_word c,C_word *av) C_noret;
C_noret_decl(f_5197)
static void C_ccall f_5197(C_word c,C_word *av) C_noret;
C_noret_decl(f_5269)
static void C_ccall f_5269(C_word c,C_word *av) C_noret;
C_noret_decl(f_5279)
static void C_ccall f_5279(C_word c,C_word *av) C_noret;
C_noret_decl(f_5290)
static void C_ccall f_5290(C_word c,C_word *av) C_noret;
C_noret_decl(f_5296)
static void C_ccall f_5296(C_word c,C_word *av) C_noret;
C_noret_decl(f_5302)
static void C_ccall f_5302(C_word c,C_word *av) C_noret;
C_noret_decl(f_5308)
static void C_ccall f_5308(C_word c,C_word *av) C_noret;
C_noret_decl(f_5314)
static void C_ccall f_5314(C_word c,C_word *av) C_noret;
C_noret_decl(f_5320)
static void C_ccall f_5320(C_word c,C_word *av) C_noret;
C_noret_decl(f_5326)
static void C_ccall f_5326(C_word c,C_word *av) C_noret;
C_noret_decl(f_5332)
static void C_ccall f_5332(C_word c,C_word *av) C_noret;
C_noret_decl(f_5338)
static void C_ccall f_5338(C_word c,C_word *av) C_noret;
C_noret_decl(f_5344)
static void C_ccall f_5344(C_word c,C_word *av) C_noret;
C_noret_decl(f_5350)
static void C_ccall f_5350(C_word c,C_word *av) C_noret;
C_noret_decl(f_5356)
static void C_ccall f_5356(C_word c,C_word *av) C_noret;
C_noret_decl(f_5362)
static void C_ccall f_5362(C_word c,C_word *av) C_noret;
C_noret_decl(f_5368)
static void C_ccall f_5368(C_word c,C_word *av) C_noret;
C_noret_decl(f_5374)
static void C_ccall f_5374(C_word c,C_word *av) C_noret;
C_noret_decl(f_5380)
static void C_ccall f_5380(C_word c,C_word *av) C_noret;
C_noret_decl(f_5386)
static void C_ccall f_5386(C_word c,C_word *av) C_noret;
C_noret_decl(f_5392)
static void C_ccall f_5392(C_word c,C_word *av) C_noret;
C_noret_decl(f_5398)
static void C_ccall f_5398(C_word c,C_word *av) C_noret;
C_noret_decl(f_5404)
static void C_ccall f_5404(C_word c,C_word *av) C_noret;
C_noret_decl(f_5410)
static void C_ccall f_5410(C_word c,C_word *av) C_noret;
C_noret_decl(f_5416)
static void C_ccall f_5416(C_word c,C_word *av) C_noret;
C_noret_decl(f_5422)
static void C_ccall f_5422(C_word c,C_word *av) C_noret;
C_noret_decl(f_5428)
static void C_ccall f_5428(C_word c,C_word *av) C_noret;
C_noret_decl(f_5434)
static void C_ccall f_5434(C_word c,C_word *av) C_noret;
C_noret_decl(f_5440)
static void C_ccall f_5440(C_word c,C_word *av) C_noret;
C_noret_decl(f_5446)
static void C_ccall f_5446(C_word c,C_word *av) C_noret;
C_noret_decl(f_5452)
static void C_ccall f_5452(C_word c,C_word *av) C_noret;
C_noret_decl(f_5458)
static void C_ccall f_5458(C_word c,C_word *av) C_noret;
C_noret_decl(f_5464)
static void C_ccall f_5464(C_word c,C_word *av) C_noret;
C_noret_decl(f_5470)
static void C_ccall f_5470(C_word c,C_word *av) C_noret;
C_noret_decl(f_5488)
static void C_ccall f_5488(C_word c,C_word *av) C_noret;
C_noret_decl(f_5533)
static void C_ccall f_5533(C_word c,C_word *av) C_noret;
C_noret_decl(f_5537)
static void C_ccall f_5537(C_word c,C_word *av) C_noret;
C_noret_decl(f_5542)
static void C_ccall f_5542(C_word c,C_word *av) C_noret;
C_noret_decl(f_5549)
static void C_ccall f_5549(C_word c,C_word *av) C_noret;
C_noret_decl(f_5567)
static void C_ccall f_5567(C_word c,C_word *av) C_noret;
C_noret_decl(f_5571)
static void C_ccall f_5571(C_word c,C_word *av) C_noret;
C_noret_decl(f_5573)
static void C_ccall f_5573(C_word c,C_word *av) C_noret;
C_noret_decl(f_5577)
static void C_ccall f_5577(C_word c,C_word *av) C_noret;
C_noret_decl(f_5580)
static void C_ccall f_5580(C_word c,C_word *av) C_noret;
C_noret_decl(f_5589)
static void C_ccall f_5589(C_word c,C_word *av) C_noret;
C_noret_decl(f_5610)
static void C_ccall f_5610(C_word c,C_word *av) C_noret;
C_noret_decl(f_5614)
static void C_ccall f_5614(C_word c,C_word *av) C_noret;
C_noret_decl(f_5616)
static void C_ccall f_5616(C_word c,C_word *av) C_noret;
C_noret_decl(f_5620)
static void C_ccall f_5620(C_word c,C_word *av) C_noret;
C_noret_decl(f_5622)
static void C_ccall f_5622(C_word c,C_word *av) C_noret;
C_noret_decl(f_5626)
static void C_ccall f_5626(C_word c,C_word *av) C_noret;
C_noret_decl(C_posix_toplevel)
C_externexport void C_ccall C_posix_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(va6106)
static void C_fcall va6106(C_word t0,C_word t1) C_noret;
C_noret_decl(va6114)
static void C_fcall va6114(C_word t0,C_word t1) C_noret;
C_noret_decl(va6122)
static void C_fcall va6122(C_word t0,C_word t1) C_noret;
C_noret_decl(va6124)
static void C_fcall va6124(C_word t0,C_word t1) C_noret;
C_noret_decl(va6126)
static void C_fcall va6126(C_word t0,C_word t1) C_noret;
C_noret_decl(va6128)
static void C_fcall va6128(C_word t0,C_word t1) C_noret;

C_noret_decl(trf_2404)
static void C_ccall trf_2404(C_word c,C_word *av) C_noret;
static void C_ccall trf_2404(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2404(t0,t1,t2);}

C_noret_decl(trf_2445)
static void C_ccall trf_2445(C_word c,C_word *av) C_noret;
static void C_ccall trf_2445(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2445(t0,t1,t2);}

C_noret_decl(trf_2595)
static void C_ccall trf_2595(C_word c,C_word *av) C_noret;
static void C_ccall trf_2595(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_2595(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2756)
static void C_ccall trf_2756(C_word c,C_word *av) C_noret;
static void C_ccall trf_2756(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2756(t0,t1);}

C_noret_decl(trf_3073)
static void C_ccall trf_3073(C_word c,C_word *av) C_noret;
static void C_ccall trf_3073(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3073(t0,t1,t2,t3);}

C_noret_decl(trf_3110)
static void C_ccall trf_3110(C_word c,C_word *av) C_noret;
static void C_ccall trf_3110(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_3110(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3209)
static void C_ccall trf_3209(C_word c,C_word *av) C_noret;
static void C_ccall trf_3209(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3209(t0,t1);}

C_noret_decl(trf_3265)
static void C_ccall trf_3265(C_word c,C_word *av) C_noret;
static void C_ccall trf_3265(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3265(t0,t1,t2);}

C_noret_decl(trf_3576)
static void C_ccall trf_3576(C_word c,C_word *av) C_noret;
static void C_ccall trf_3576(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3576(t0,t1,t2,t3);}

C_noret_decl(trf_3615)
static void C_ccall trf_3615(C_word c,C_word *av) C_noret;
static void C_ccall trf_3615(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3615(t0,t1);}

C_noret_decl(trf_3621)
static void C_ccall trf_3621(C_word c,C_word *av) C_noret;
static void C_ccall trf_3621(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3621(t0,t1,t2,t3);}

C_noret_decl(trf_3672)
static void C_ccall trf_3672(C_word c,C_word *av) C_noret;
static void C_ccall trf_3672(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3672(t0,t1,t2);}

C_noret_decl(trf_3693)
static void C_ccall trf_3693(C_word c,C_word *av) C_noret;
static void C_ccall trf_3693(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3693(t0,t1);}

C_noret_decl(trf_3702)
static void C_ccall trf_3702(C_word c,C_word *av) C_noret;
static void C_ccall trf_3702(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3702(t0,t1,t2);}

C_noret_decl(trf_3727)
static void C_ccall trf_3727(C_word c,C_word *av) C_noret;
static void C_ccall trf_3727(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3727(t0,t1,t2);}

C_noret_decl(trf_3776)
static void C_ccall trf_3776(C_word c,C_word *av) C_noret;
static void C_ccall trf_3776(C_word c,C_word *av){
C_word t0=av[7];
C_word t1=av[6];
C_word t2=av[5];
C_word t3=av[4];
C_word t4=av[3];
C_word t5=av[2];
C_word t6=av[1];
C_word t7=av[0];
f_3776(t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(trf_3831)
static void C_ccall trf_3831(C_word c,C_word *av) C_noret;
static void C_ccall trf_3831(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3831(t0,t1);}

C_noret_decl(trf_3868)
static void C_ccall trf_3868(C_word c,C_word *av) C_noret;
static void C_ccall trf_3868(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3868(t0,t1,t2);}

C_noret_decl(trf_3933)
static void C_ccall trf_3933(C_word c,C_word *av) C_noret;
static void C_ccall trf_3933(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_3933(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4358)
static void C_ccall trf_4358(C_word c,C_word *av) C_noret;
static void C_ccall trf_4358(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4358(t0,t1,t2);}

C_noret_decl(trf_4559)
static void C_ccall trf_4559(C_word c,C_word *av) C_noret;
static void C_ccall trf_4559(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4559(t0,t1);}

C_noret_decl(trf_4803)
static void C_ccall trf_4803(C_word c,C_word *av) C_noret;
static void C_ccall trf_4803(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4803(t0,t1);}

C_noret_decl(trf_5014)
static void C_ccall trf_5014(C_word c,C_word *av) C_noret;
static void C_ccall trf_5014(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5014(t0,t1,t2);}

C_noret_decl(trf_5053)
static void C_ccall trf_5053(C_word c,C_word *av) C_noret;
static void C_ccall trf_5053(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_5053(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_5055)
static void C_ccall trf_5055(C_word c,C_word *av) C_noret;
static void C_ccall trf_5055(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5055(t0,t1,t2);}

C_noret_decl(trva6106)
static void C_ccall trva6106(C_word c,C_word *av) C_noret;
static void C_ccall trva6106(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
va6106(t0,t1);}

C_noret_decl(trva6114)
static void C_ccall trva6114(C_word c,C_word *av) C_noret;
static void C_ccall trva6114(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
va6114(t0,t1);}

C_noret_decl(trva6122)
static void C_ccall trva6122(C_word c,C_word *av) C_noret;
static void C_ccall trva6122(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
va6122(t0,t1);}

C_noret_decl(trva6124)
static void C_ccall trva6124(C_word c,C_word *av) C_noret;
static void C_ccall trva6124(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
va6124(t0,t1);}

C_noret_decl(trva6126)
static void C_ccall trva6126(C_word c,C_word *av) C_noret;
static void C_ccall trva6126(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
va6126(t0,t1);}

C_noret_decl(trva6128)
static void C_ccall trva6128(C_word c,C_word *av) C_noret;
static void C_ccall trva6128(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
va6128(t0,t1);}

/* f6133 in chicken.time.posix#seconds->local-time in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f6133(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f6133,c,av);}
/* posix-common.scm:584: decode-seconds */
{C_proc tp=(C_proc)C_fast_retrieve_proc(lf[256]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=lf[256];
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_FALSE;
tp(4,av2);}}

/* f6137 in chicken.time.posix#seconds->utc-time in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f6137(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f6137,c,av);}
/* posix-common.scm:589: decode-seconds */
{C_proc tp=(C_proc)C_fast_retrieve_proc(lf[256]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=lf[256];
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_TRUE;
tp(4,av2);}}

/* k2250 */
static void C_ccall f_2252(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2252,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2255,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_pathname_toplevel(2,av2);}}

/* k2253 in k2250 */
static void C_ccall f_2255(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2255,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2258,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k2256 in k2253 in k2250 */
static void C_ccall f_2258(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2258,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2261,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_port_toplevel(2,av2);}}

/* k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2261(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2261,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2264,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_lolevel_toplevel(2,av2);}}

/* k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2264(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2264,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2267,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

/* k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2267(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_2267,c,av);}
a=C_alloc(19);
t2=C_a_i_provide(&a,1,lf[2]);
t3=C_a_i_provide(&a,1,lf[3]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2270,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t4;
C_library_toplevel(2,av2);}}

/* k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2270(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2270,c,av);}
a=C_alloc(88);
t2=C_set_block_item(lf[4] /* chicken.file.posix#create-fifo */,0,C_SCHEME_UNDEFINED);
t3=C_set_block_item(lf[5] /* chicken.file.posix#create-symbolic-link */,0,C_SCHEME_UNDEFINED);
t4=C_set_block_item(lf[6] /* chicken.file.posix#read-symbolic-link */,0,C_SCHEME_UNDEFINED);
t5=C_set_block_item(lf[7] /* chicken.file.posix#duplicate-fileno */,0,C_SCHEME_UNDEFINED);
t6=C_set_block_item(lf[8] /* chicken.file.posix#fcntl/dupfd */,0,C_SCHEME_UNDEFINED);
t7=C_set_block_item(lf[9] /* chicken.file.posix#fcntl/getfd */,0,C_SCHEME_UNDEFINED);
t8=C_set_block_item(lf[10] /* chicken.file.posix#fcntl/getfl */,0,C_SCHEME_UNDEFINED);
t9=C_set_block_item(lf[11] /* chicken.file.posix#fcntl/setfd */,0,C_SCHEME_UNDEFINED);
t10=C_set_block_item(lf[12] /* chicken.file.posix#fcntl/setfl */,0,C_SCHEME_UNDEFINED);
t11=C_set_block_item(lf[13] /* chicken.file.posix#file-close */,0,C_SCHEME_UNDEFINED);
t12=C_set_block_item(lf[14] /* chicken.file.posix#file-control */,0,C_SCHEME_UNDEFINED);
t13=C_set_block_item(lf[15] /* chicken.file.posix#file-creation-mode */,0,C_SCHEME_UNDEFINED);
t14=C_set_block_item(lf[16] /* chicken.file.posix#file-group */,0,C_SCHEME_UNDEFINED);
t15=C_set_block_item(lf[17] /* chicken.file.posix#file-link */,0,C_SCHEME_UNDEFINED);
t16=C_set_block_item(lf[18] /* chicken.file.posix#file-lock */,0,C_SCHEME_UNDEFINED);
t17=C_set_block_item(lf[19] /* chicken.file.posix#file-lock/blocking */,0,C_SCHEME_UNDEFINED);
t18=C_set_block_item(lf[20] /* chicken.file.posix#file-mkstemp */,0,C_SCHEME_UNDEFINED);
t19=C_set_block_item(lf[21] /* chicken.file.posix#file-open */,0,C_SCHEME_UNDEFINED);
t20=C_set_block_item(lf[22] /* chicken.file.posix#file-owner */,0,C_SCHEME_UNDEFINED);
t21=C_set_block_item(lf[23] /* chicken.file.posix#file-permissions */,0,C_SCHEME_UNDEFINED);
t22=C_set_block_item(lf[24] /* chicken.file.posix#file-position */,0,C_SCHEME_UNDEFINED);
t23=C_set_block_item(lf[25] /* chicken.file.posix#file-read */,0,C_SCHEME_UNDEFINED);
t24=C_set_block_item(lf[26] /* chicken.file.posix#file-select */,0,C_SCHEME_UNDEFINED);
t25=C_set_block_item(lf[27] /* chicken.file.posix#file-test-lock */,0,C_SCHEME_UNDEFINED);
t26=C_set_block_item(lf[28] /* chicken.file.posix#file-truncate */,0,C_SCHEME_UNDEFINED);
t27=C_set_block_item(lf[29] /* chicken.file.posix#file-unlock */,0,C_SCHEME_UNDEFINED);
t28=C_set_block_item(lf[30] /* chicken.file.posix#file-write */,0,C_SCHEME_UNDEFINED);
t29=C_set_block_item(lf[31] /* chicken.file.posix#file-type */,0,C_SCHEME_UNDEFINED);
t30=C_set_block_item(lf[32] /* chicken.file.posix#block-device? */,0,C_SCHEME_UNDEFINED);
t31=C_set_block_item(lf[33] /* chicken.file.posix#character-device? */,0,C_SCHEME_UNDEFINED);
t32=C_set_block_item(lf[34] /* chicken.file.posix#directory? */,0,C_SCHEME_UNDEFINED);
t33=C_set_block_item(lf[35] /* chicken.file.posix#fifo? */,0,C_SCHEME_UNDEFINED);
t34=C_set_block_item(lf[36] /* chicken.file.posix#regular-file? */,0,C_SCHEME_UNDEFINED);
t35=C_set_block_item(lf[37] /* chicken.file.posix#socket? */,0,C_SCHEME_UNDEFINED);
t36=C_set_block_item(lf[38] /* chicken.file.posix#symbolic-link? */,0,C_SCHEME_UNDEFINED);
t37=C_set_block_item(lf[39] /* chicken.file.posix#fileno/stderr */,0,C_SCHEME_UNDEFINED);
t38=C_set_block_item(lf[40] /* chicken.file.posix#fileno/stdin */,0,C_SCHEME_UNDEFINED);
t39=C_set_block_item(lf[41] /* chicken.file.posix#fileno/stdout */,0,C_SCHEME_UNDEFINED);
t40=C_set_block_item(lf[42] /* chicken.file.posix#open-input-file* */,0,C_SCHEME_UNDEFINED);
t41=C_set_block_item(lf[43] /* chicken.file.posix#open-output-file* */,0,C_SCHEME_UNDEFINED);
t42=C_set_block_item(lf[44] /* chicken.file.posix#open/append */,0,C_SCHEME_UNDEFINED);
t43=C_set_block_item(lf[45] /* chicken.file.posix#open/binary */,0,C_SCHEME_UNDEFINED);
t44=C_set_block_item(lf[46] /* chicken.file.posix#open/creat */,0,C_SCHEME_UNDEFINED);
t45=C_set_block_item(lf[47] /* chicken.file.posix#open/excl */,0,C_SCHEME_UNDEFINED);
t46=C_set_block_item(lf[48] /* chicken.file.posix#open/fsync */,0,C_SCHEME_UNDEFINED);
t47=C_set_block_item(lf[49] /* chicken.file.posix#open/noctty */,0,C_SCHEME_UNDEFINED);
t48=C_set_block_item(lf[50] /* chicken.file.posix#open/noinherit */,0,C_SCHEME_UNDEFINED);
t49=C_set_block_item(lf[51] /* chicken.file.posix#open/nonblock */,0,C_SCHEME_UNDEFINED);
t50=C_set_block_item(lf[52] /* chicken.file.posix#open/rdonly */,0,C_SCHEME_UNDEFINED);
t51=C_set_block_item(lf[53] /* chicken.file.posix#open/rdwr */,0,C_SCHEME_UNDEFINED);
t52=C_set_block_item(lf[54] /* chicken.file.posix#open/read */,0,C_SCHEME_UNDEFINED);
t53=C_set_block_item(lf[55] /* chicken.file.posix#open/sync */,0,C_SCHEME_UNDEFINED);
t54=C_set_block_item(lf[56] /* chicken.file.posix#open/text */,0,C_SCHEME_UNDEFINED);
t55=C_set_block_item(lf[57] /* chicken.file.posix#open/trunc */,0,C_SCHEME_UNDEFINED);
t56=C_set_block_item(lf[58] /* chicken.file.posix#open/write */,0,C_SCHEME_UNDEFINED);
t57=C_set_block_item(lf[59] /* chicken.file.posix#open/wronly */,0,C_SCHEME_UNDEFINED);
t58=C_set_block_item(lf[60] /* chicken.file.posix#perm/irgrp */,0,C_SCHEME_UNDEFINED);
t59=C_set_block_item(lf[61] /* chicken.file.posix#perm/iroth */,0,C_SCHEME_UNDEFINED);
t60=C_set_block_item(lf[62] /* chicken.file.posix#perm/irusr */,0,C_SCHEME_UNDEFINED);
t61=C_set_block_item(lf[63] /* chicken.file.posix#perm/irwxg */,0,C_SCHEME_UNDEFINED);
t62=C_set_block_item(lf[64] /* chicken.file.posix#perm/irwxo */,0,C_SCHEME_UNDEFINED);
t63=C_set_block_item(lf[65] /* chicken.file.posix#perm/irwxu */,0,C_SCHEME_UNDEFINED);
t64=C_set_block_item(lf[66] /* chicken.file.posix#perm/isgid */,0,C_SCHEME_UNDEFINED);
t65=C_set_block_item(lf[67] /* chicken.file.posix#perm/isuid */,0,C_SCHEME_UNDEFINED);
t66=C_set_block_item(lf[68] /* chicken.file.posix#perm/isvtx */,0,C_SCHEME_UNDEFINED);
t67=C_set_block_item(lf[69] /* chicken.file.posix#perm/iwgrp */,0,C_SCHEME_UNDEFINED);
t68=C_set_block_item(lf[70] /* chicken.file.posix#perm/iwoth */,0,C_SCHEME_UNDEFINED);
t69=C_set_block_item(lf[71] /* chicken.file.posix#perm/iwusr */,0,C_SCHEME_UNDEFINED);
t70=C_set_block_item(lf[72] /* chicken.file.posix#perm/ixgrp */,0,C_SCHEME_UNDEFINED);
t71=C_set_block_item(lf[73] /* chicken.file.posix#perm/ixoth */,0,C_SCHEME_UNDEFINED);
t72=C_set_block_item(lf[74] /* chicken.file.posix#perm/ixusr */,0,C_SCHEME_UNDEFINED);
t73=C_set_block_item(lf[75] /* chicken.file.posix#port->fileno */,0,C_SCHEME_UNDEFINED);
t74=C_set_block_item(lf[76] /* chicken.file.posix#seek/cur */,0,C_SCHEME_UNDEFINED);
t75=C_set_block_item(lf[77] /* chicken.file.posix#seek/end */,0,C_SCHEME_UNDEFINED);
t76=C_set_block_item(lf[78] /* chicken.file.posix#seek/set */,0,C_SCHEME_UNDEFINED);
t77=C_set_block_item(lf[79] /* chicken.file.posix#set-file-position! */,0,C_SCHEME_UNDEFINED);
t78=C_a_i_provide(&a,1,lf[80]);
t79=C_set_block_item(lf[81] /* chicken.time.posix#seconds->utc-time */,0,C_SCHEME_UNDEFINED);
t80=C_set_block_item(lf[82] /* chicken.time.posix#utc-time->seconds */,0,C_SCHEME_UNDEFINED);
t81=C_set_block_item(lf[83] /* chicken.time.posix#seconds->local-time */,0,C_SCHEME_UNDEFINED);
t82=C_set_block_item(lf[84] /* chicken.time.posix#seconds->string */,0,C_SCHEME_UNDEFINED);
t83=C_set_block_item(lf[85] /* chicken.time.posix#local-time->seconds */,0,C_SCHEME_UNDEFINED);
t84=C_set_block_item(lf[86] /* chicken.time.posix#string->time */,0,C_SCHEME_UNDEFINED);
t85=C_set_block_item(lf[87] /* chicken.time.posix#time->string */,0,C_SCHEME_UNDEFINED);
t86=C_set_block_item(lf[88] /* chicken.time.posix#local-timezone-abbreviation */,0,C_SCHEME_UNDEFINED);
t87=C_a_i_provide(&a,1,lf[89]);
t88=C_mutate((C_word*)lf[90]+1 /* (set! chicken.process#system ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2356,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t89=C_mutate((C_word*)lf[96]+1 /* (set! chicken.process#system* ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2374,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t90=C_mutate((C_word*)lf[99]+1 /* (set! chicken.process#qs ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2390,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t91=C_set_block_item(lf[109] /* chicken.process#process-execute */,0,C_SCHEME_UNDEFINED);
t92=C_set_block_item(lf[110] /* chicken.process#process-fork */,0,C_SCHEME_UNDEFINED);
t93=C_set_block_item(lf[111] /* chicken.process#process-run */,0,C_SCHEME_UNDEFINED);
t94=C_set_block_item(lf[112] /* chicken.process#process-signal */,0,C_SCHEME_UNDEFINED);
t95=C_set_block_item(lf[113] /* chicken.process#process-spawn */,0,C_SCHEME_UNDEFINED);
t96=C_set_block_item(lf[114] /* chicken.process#process-wait */,0,C_SCHEME_UNDEFINED);
t97=C_set_block_item(lf[115] /* chicken.process#call-with-input-pipe */,0,C_SCHEME_UNDEFINED);
t98=C_set_block_item(lf[116] /* chicken.process#call-with-output-pipe */,0,C_SCHEME_UNDEFINED);
t99=C_set_block_item(lf[117] /* chicken.process#close-input-pipe */,0,C_SCHEME_UNDEFINED);
t100=C_set_block_item(lf[118] /* chicken.process#close-output-pipe */,0,C_SCHEME_UNDEFINED);
t101=C_set_block_item(lf[119] /* chicken.process#create-pipe */,0,C_SCHEME_UNDEFINED);
t102=C_set_block_item(lf[120] /* chicken.process#open-input-pipe */,0,C_SCHEME_UNDEFINED);
t103=C_set_block_item(lf[121] /* chicken.process#open-output-pipe */,0,C_SCHEME_UNDEFINED);
t104=C_set_block_item(lf[122] /* chicken.process#with-input-from-pipe */,0,C_SCHEME_UNDEFINED);
t105=C_set_block_item(lf[123] /* chicken.process#with-output-to-pipe */,0,C_SCHEME_UNDEFINED);
t106=C_set_block_item(lf[124] /* chicken.process#process */,0,C_SCHEME_UNDEFINED);
t107=C_set_block_item(lf[125] /* chicken.process#process* */,0,C_SCHEME_UNDEFINED);
t108=C_set_block_item(lf[126] /* chicken.process#process-sleep */,0,C_SCHEME_UNDEFINED);
t109=C_set_block_item(lf[127] /* chicken.process#pipe/buf */,0,C_SCHEME_UNDEFINED);
t110=C_set_block_item(lf[128] /* chicken.process#spawn/overlay */,0,C_SCHEME_UNDEFINED);
t111=C_set_block_item(lf[129] /* chicken.process#spawn/wait */,0,C_SCHEME_UNDEFINED);
t112=C_set_block_item(lf[130] /* chicken.process#spawn/nowait */,0,C_SCHEME_UNDEFINED);
t113=C_set_block_item(lf[131] /* chicken.process#spawn/nowaito */,0,C_SCHEME_UNDEFINED);
t114=C_set_block_item(lf[132] /* chicken.process#spawn/detach */,0,C_SCHEME_UNDEFINED);
t115=C_a_i_provide(&a,1,lf[133]);
t116=C_set_block_item(lf[134] /* chicken.process.signal#set-alarm! */,0,C_SCHEME_UNDEFINED);
t117=C_set_block_item(lf[135] /* chicken.process.signal#set-signal-handler! */,0,C_SCHEME_UNDEFINED);
t118=C_set_block_item(lf[136] /* chicken.process.signal#set-signal-mask! */,0,C_SCHEME_UNDEFINED);
t119=C_set_block_item(lf[137] /* chicken.process.signal#signal-handler */,0,C_SCHEME_UNDEFINED);
t120=C_set_block_item(lf[138] /* chicken.process.signal#signal-mask */,0,C_SCHEME_UNDEFINED);
t121=C_set_block_item(lf[139] /* chicken.process.signal#signal-mask! */,0,C_SCHEME_UNDEFINED);
t122=C_set_block_item(lf[140] /* chicken.process.signal#signal-masked? */,0,C_SCHEME_UNDEFINED);
t123=C_set_block_item(lf[141] /* chicken.process.signal#signal-unmask! */,0,C_SCHEME_UNDEFINED);
t124=C_set_block_item(lf[142] /* chicken.process.signal#signal/abrt */,0,C_SCHEME_UNDEFINED);
t125=C_set_block_item(lf[143] /* chicken.process.signal#signal/alrm */,0,C_SCHEME_UNDEFINED);
t126=C_set_block_item(lf[144] /* chicken.process.signal#signal/break */,0,C_SCHEME_UNDEFINED);
t127=C_set_block_item(lf[145] /* chicken.process.signal#signal/bus */,0,C_SCHEME_UNDEFINED);
t128=C_set_block_item(lf[146] /* chicken.process.signal#signal/chld */,0,C_SCHEME_UNDEFINED);
t129=C_set_block_item(lf[147] /* chicken.process.signal#signal/cont */,0,C_SCHEME_UNDEFINED);
t130=C_set_block_item(lf[148] /* chicken.process.signal#signal/fpe */,0,C_SCHEME_UNDEFINED);
t131=C_set_block_item(lf[149] /* chicken.process.signal#signal/hup */,0,C_SCHEME_UNDEFINED);
t132=C_set_block_item(lf[150] /* chicken.process.signal#signal/ill */,0,C_SCHEME_UNDEFINED);
t133=C_set_block_item(lf[151] /* chicken.process.signal#signal/int */,0,C_SCHEME_UNDEFINED);
t134=C_set_block_item(lf[152] /* chicken.process.signal#signal/io */,0,C_SCHEME_UNDEFINED);
t135=C_set_block_item(lf[153] /* chicken.process.signal#signal/kill */,0,C_SCHEME_UNDEFINED);
t136=C_set_block_item(lf[154] /* chicken.process.signal#signal/pipe */,0,C_SCHEME_UNDEFINED);
t137=C_set_block_item(lf[155] /* chicken.process.signal#signal/prof */,0,C_SCHEME_UNDEFINED);
t138=C_set_block_item(lf[156] /* chicken.process.signal#signal/quit */,0,C_SCHEME_UNDEFINED);
t139=C_set_block_item(lf[157] /* chicken.process.signal#signal/segv */,0,C_SCHEME_UNDEFINED);
t140=C_set_block_item(lf[158] /* chicken.process.signal#signal/stop */,0,C_SCHEME_UNDEFINED);
t141=C_set_block_item(lf[159] /* chicken.process.signal#signal/term */,0,C_SCHEME_UNDEFINED);
t142=C_set_block_item(lf[160] /* chicken.process.signal#signal/trap */,0,C_SCHEME_UNDEFINED);
t143=C_set_block_item(lf[161] /* chicken.process.signal#signal/tstp */,0,C_SCHEME_UNDEFINED);
t144=C_set_block_item(lf[162] /* chicken.process.signal#signal/urg */,0,C_SCHEME_UNDEFINED);
t145=C_set_block_item(lf[163] /* chicken.process.signal#signal/usr1 */,0,C_SCHEME_UNDEFINED);
t146=C_set_block_item(lf[164] /* chicken.process.signal#signal/usr2 */,0,C_SCHEME_UNDEFINED);
t147=C_set_block_item(lf[165] /* chicken.process.signal#signal/vtalrm */,0,C_SCHEME_UNDEFINED);
t148=C_set_block_item(lf[166] /* chicken.process.signal#signal/winch */,0,C_SCHEME_UNDEFINED);
t149=C_set_block_item(lf[167] /* chicken.process.signal#signal/xcpu */,0,C_SCHEME_UNDEFINED);
t150=C_set_block_item(lf[168] /* chicken.process.signal#signal/xfsz */,0,C_SCHEME_UNDEFINED);
t151=C_set_block_item(lf[169] /* chicken.process.signal#signals-list */,0,C_SCHEME_UNDEFINED);
t152=C_a_i_provide(&a,1,lf[170]);
t153=C_set_block_item(lf[171] /* chicken.process-context.posix#change-directory* */,0,C_SCHEME_UNDEFINED);
t154=C_set_block_item(lf[172] /* chicken.process-context.posix#set-root-directory! */,0,C_SCHEME_UNDEFINED);
t155=C_set_block_item(lf[173] /* chicken.process-context.posix#current-effective-group-id */,0,C_SCHEME_UNDEFINED);
t156=C_set_block_item(lf[174] /* chicken.process-context.posix#current-effective-user-id */,0,C_SCHEME_UNDEFINED);
t157=C_set_block_item(lf[175] /* chicken.process-context.posix#current-group-id */,0,C_SCHEME_UNDEFINED);
t158=C_set_block_item(lf[176] /* chicken.process-context.posix#current-user-id */,0,C_SCHEME_UNDEFINED);
t159=C_set_block_item(lf[177] /* chicken.process-context.posix#current-process-id */,0,C_SCHEME_UNDEFINED);
t160=C_set_block_item(lf[178] /* chicken.process-context.posix#parent-process-id */,0,C_SCHEME_UNDEFINED);
t161=C_set_block_item(lf[179] /* chicken.process-context.posix#current-user-name */,0,C_SCHEME_UNDEFINED);
t162=C_set_block_item(lf[180] /* chicken.process-context.posix#current-effective-user-name */,0,C_SCHEME_UNDEFINED);
t163=C_set_block_item(lf[181] /* chicken.process-context.posix#create-session */,0,C_SCHEME_UNDEFINED);
t164=C_set_block_item(lf[182] /* chicken.process-context.posix#process-group-id */,0,C_SCHEME_UNDEFINED);
t165=C_set_block_item(lf[183] /* chicken.process-context.posix#user-information */,0,C_SCHEME_UNDEFINED);
t166=C_a_i_provide(&a,1,lf[184]);
t167=C_mutate(&lf[185] /* (set! chicken.posix#posix-error ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2577,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t168=C_mutate((C_word*)lf[188]+1 /* (set! ##sys#posix-error ...) */,lf[185]);
t169=C_mutate(&lf[189] /* (set! chicken.posix#stat ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2595,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t170=C_mutate((C_word*)lf[196]+1 /* (set! chicken.file.posix#file-stat ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2641,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t171=C_mutate((C_word*)lf[198]+1 /* (set! chicken.file.posix#set-file-permissions! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2659,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t172=C_mutate((C_word*)lf[204]+1 /* (set! chicken.file.posix#file-modification-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2703,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t173=C_mutate((C_word*)lf[206]+1 /* (set! chicken.file.posix#file-access-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2709,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t174=C_mutate((C_word*)lf[208]+1 /* (set! chicken.file.posix#file-change-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2715,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t175=C_mutate((C_word*)lf[210]+1 /* (set! chicken.file.posix#set-file-times! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2721,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t176=C_mutate((C_word*)lf[215]+1 /* (set! chicken.file.posix#file-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2800,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t177=C_mutate((C_word*)lf[217]+1 /* (set! chicken.file.posix#set-file-owner! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2806,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t178=C_mutate((C_word*)lf[220]+1 /* (set! chicken.file.posix#set-file-group! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2812,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t179=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2820,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t180=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5622,a[2]=((C_word)li167),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:312: chicken.base#getter-with-setter */
t181=*((C_word*)lf[395]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t181;
av2[1]=t179;
av2[2]=t180;
av2[3]=*((C_word*)lf[217]+1);
av2[4]=lf[407];
((C_proc)(void*)(*((C_word*)t181+1)))(5,av2);}}

/* chicken.process#system in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2356(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2356,c,av);}
a=C_alloc(4);
t3=C_i_check_string_2(t2,lf[91]);
t4=C_execute_shell_command(t2);
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2369,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix.scm:202: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[95]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[95]+1);
av2[1]=t5;
tp(2,av2);}}
else{
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k2367 in chicken.process#system in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2369(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2369,c,av);}
/* posix.scm:203: ##sys#signal-hook */
t2=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[93];
av2[3]=lf[91];
av2[4]=lf[94];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* chicken.process#system* in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2374(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2374,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2378,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix.scm:209: system */
t4=*((C_word*)lf[90]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k2376 in chicken.process#system* in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2378(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2378,c,av);}
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
t3=*((C_word*)lf[97]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[98];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* chicken.process#qs in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2390(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2390,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2394,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_rest_nullp(c,3))){
/* posix.scm:216: chicken.platform#software-version */
t4=*((C_word*)lf[108]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=t3;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_get_rest_arg(c,3,av,3,t0);
f_2394(2,av2);}}}

/* k2392 in chicken.process#qs in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2394(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2394,c,av);}
a=C_alloc(18);
t2=C_eqp(t1,lf[100]);
t3=(C_truep(t2)?C_make_character(34):C_make_character(39));
t4=C_eqp(t1,lf[100]);
t5=(C_truep(t4)?lf[101]:lf[102]);
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2404,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[2],a[5]=((C_word)li2),tmp=(C_word)a,a+=6,tmp);
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2425,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t8,a[5]=t10,a[6]=t9,tmp=(C_word)a,a+=7,tmp);
/* ##sys#string->list */
t12=*((C_word*)lf[107]+1);{
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

/* g261 in k2392 in chicken.process#qs in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_fcall f_2404(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,0,4)))){
C_save_and_reclaim_args((void *)trf_2404,3,t0,t1,t2);}
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
t3=*((C_word*)lf[103]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t1;
av2[2]=lf[104];
av2[3]=lf[105];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_a_i_string(&a,1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}}

/* k2423 in k2392 in chicken.process#qs in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2425(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2425,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2428,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2445,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word)li3),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_2445(t6,t2,t1);}

/* k2426 in k2423 in k2392 in chicken.process#qs in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2428(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_2428,c,av);}
a=C_alloc(7);
t2=C_a_i_string(&a,1,((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2439,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t3;
av2[2]=*((C_word*)lf[106]+1);
av2[3]=t1;
C_apply(4,av2);}}

/* k2437 in k2426 in k2423 in k2392 in chicken.process#qs in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2439(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,4)))){
C_save_and_reclaim((void *)f_2439,c,av);}
a=C_alloc(2);
t2=C_a_i_string(&a,1,((C_word*)t0)[2]);
/* posix.scm:227: scheme#string-append */
t3=*((C_word*)lf[106]+1);{
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

/* map-loop255 in k2423 in k2392 in chicken.process#qs in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_fcall f_2445(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_2445,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2470,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* posix.scm:220: g261 */
t4=((C_word*)t0)[4];
f_2404(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k2468 in map-loop255 in k2423 in k2392 in chicken.process#qs in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2470(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2470,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_2445(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* chicken.posix#posix-error in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2577(C_word c,C_word *av){
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
C_save_and_reclaim((void*)f_2577,c,av);}
a=C_alloc((c-5)*C_SIZEOF_PAIR+7);
t5=C_build_rest(&a,c,5,av);
C_word t6;
C_word t7;
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2581,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t5,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* posix-common.scm:191: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[95]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[95]+1);
av2[1]=t6;
tp(2,av2);}}

/* k2579 in chicken.posix#posix-error in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2581(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2581,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2588,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2592,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t1);
/* posix-common.scm:188: ##sys#peek-c-string */
t6=*((C_word*)lf[187]+1);{
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

/* k2586 in k2579 in chicken.posix#posix-error in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2588(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_2588,c,av);}{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[92]+1);
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
av2[5]=t1;
av2[6]=((C_word*)t0)[5];
C_apply(7,av2);}}

/* k2590 in k2579 in chicken.posix#posix-error in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2592(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2592,c,av);}
/* posix-common.scm:192: string-append */
t2=*((C_word*)lf[106]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[186];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* chicken.posix#stat in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_fcall f_2595(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_2595,5,t1,t2,t3,t4,t5);}
a=C_alloc(12);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2599,a[2]=t4,a[3]=t1,a[4]=t5,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnump(t2))){
t7=t6;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_u_i_fstat(t2);
f_2599(2,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2620,a[2]=t6,a[3]=t2,a[4]=t3,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:235: chicken.base#port? */
t8=*((C_word*)lf[195]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}}

/* k2597 in chicken.posix#stat in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2599(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2599,c,av);}
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
if(C_truep(((C_word*)t0)[2])){
/* posix-common.scm:246: posix-error */
t2=lf[185];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[190];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[191];
av2[5]=((C_word*)t0)[5];
f_2577(6,av2);}}
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

/* k2618 in chicken.posix#stat in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2620(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_2620,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2624,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:235: chicken.file.posix#port->fileno */
t3=*((C_word*)lf[75]+1);{
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
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2633,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:237: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[192]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[192]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[5];
tp(4,av2);}}
else{
/* posix-common.scm:242: ##sys#signal-hook */
t2=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[193];
av2[3]=((C_word*)t0)[5];
av2[4]=lf[194];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}}

/* k2622 in k2618 in chicken.posix#stat in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2624(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2624,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_u_i_fstat(t1);
f_2599(2,av2);}}

/* k2631 in k2618 in chicken.posix#stat in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2633(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2633,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(((C_word*)t0)[3])?C_u_i_lstat(t1):C_u_i_stat(t1));
f_2599(2,av2);}}

/* chicken.file.posix#file-stat in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2641(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2641,c,av);}
a=C_alloc(3);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2648,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:252: stat */
f_2595(t5,t2,t4,C_SCHEME_TRUE,lf[197]);}

/* k2646 in chicken.file.posix#file-stat in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2648(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(42,c,1)))){
C_save_and_reclaim((void *)f_2648,c,av);}
a=C_alloc(42);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_vector(&a,13,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_ino),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_mode),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_nlink),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_uid),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_gid),C_int64_to_num(&a,C_statbuf.st_size),C_int64_to_num(&a,C_statbuf.st_atime),C_int64_to_num(&a,C_statbuf.st_ctime),C_int64_to_num(&a,C_statbuf.st_mtime),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_dev),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_rdev),((C_word)C_SCHEME_UNDEFINED),((C_word)C_SCHEME_UNDEFINED));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#set-file-permissions! in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2659(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2659,c,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2663,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:261: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[203]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[203]+1);
av2[1]=t4;
av2[2]=t3;
av2[3]=lf[199];
tp(4,av2);}}

/* k2661 in chicken.file.posix#set-file-permissions! in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2663(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_2663,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2666,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_fixnump(((C_word*)t0)[3]))){
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_fchmod(((C_word*)t0)[3],((C_word*)t0)[4]);
f_2666(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2684,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:263: chicken.base#port? */
t4=*((C_word*)lf[195]+1);{
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

/* k2664 in k2661 in chicken.file.posix#set-file-permissions! in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2666(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_2666,c,av);}
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
/* posix-common.scm:272: posix-error */
t2=lf[185];{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[190];
av2[3]=lf[199];
av2[4]=lf[200];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
f_2577(7,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k2682 in k2661 in chicken.file.posix#set-file-permissions! in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2684(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_2684,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2688,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:263: chicken.file.posix#port->fileno */
t3=*((C_word*)lf[75]+1);{
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
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2698,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:266: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[192]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[192]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[199];
tp(4,av2);}}
else{
/* posix-common.scm:268: ##sys#signal-hook */
t2=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[193];
av2[3]=lf[201];
av2[4]=lf[202];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}}

/* k2686 in k2682 in k2661 in chicken.file.posix#set-file-permissions! in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2688(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2688,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fchmod(t1,((C_word*)t0)[3]);
f_2666(2,av2);}}

/* k2696 in k2682 in k2661 in chicken.file.posix#set-file-permissions! in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2698(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2698,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_chmod(t1,((C_word*)t0)[3]);
f_2666(2,av2);}}

/* chicken.file.posix#file-modification-time in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2703(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_2703,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2707,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:276: stat */
f_2595(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[205]);}

/* k2705 in chicken.file.posix#file-modification-time in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2707(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,1)))){
C_save_and_reclaim((void *)f_2707,c,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_int64_to_num(&a,C_statbuf.st_mtime);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#file-access-time in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2709(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_2709,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2713,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:280: stat */
f_2595(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[207]);}

/* k2711 in chicken.file.posix#file-access-time in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2713(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,1)))){
C_save_and_reclaim((void *)f_2713,c,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_int64_to_num(&a,C_statbuf.st_atime);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#file-change-time in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2715(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_2715,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2719,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:284: stat */
f_2595(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[209]);}

/* k2717 in chicken.file.posix#file-change-time in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2719(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,1)))){
C_save_and_reclaim((void *)f_2719,c,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_int64_to_num(&a,C_statbuf.st_ctime);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#set-file-times! in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2721(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_2721,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2725,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t3))){
/* posix-common.scm:289: chicken.time#current-seconds */
t5=*((C_word*)lf[214]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_i_car(t3);
f_2725(2,av2);}}}

/* k2723 in chicken.file.posix#set-file-times! in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2725(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2725,c,av);}
a=C_alloc(7);
t2=C_i_nullp(((C_word*)t0)[2]);
t3=(C_truep(t2)?C_SCHEME_END_OF_LIST:C_i_cdr(((C_word*)t0)[2]));
t4=C_i_nullp(t3);
t5=(C_truep(t4)?t1:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2737,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t1)){
/* posix-common.scm:290: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[213]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[213]+1);
av2[1]=t8;
av2[2]=t1;
av2[3]=lf[211];
tp(4,av2);}}
else{
t9=t8;{
C_word *av2=av;
av2[0]=t9;
av2[1]=C_SCHEME_UNDEFINED;
f_2737(2,av2);}}}

/* k2735 in k2723 in chicken.file.posix#set-file-times! in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2737(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_2737,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2740,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[6])){
/* posix-common.scm:291: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[213]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[213]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=lf[211];
tp(4,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_2740(2,av2);}}}

/* k2738 in k2735 in k2723 in chicken.file.posix#set-file-times! in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2740(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_2740,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2756,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2746,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[3])){
/* posix-common.scm:292: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[192]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[192]+1);
av2[1]=t3;
av2[2]=C_i_foreign_string_argumentp(((C_word*)t0)[3]);
tp(3,av2);}}
else{
t4=t2;
f_2756(t4,stub724(C_SCHEME_UNDEFINED,C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6]));}}

/* k2744 in k2738 in k2735 in k2723 in chicken.file.posix#set-file-times! in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2746(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2746,c,av);}
t2=((C_word*)t0)[2];
f_2756(t2,stub724(C_SCHEME_UNDEFINED,t1,((C_word*)t0)[3],((C_word*)t0)[4]));}

/* k2754 in k2738 in k2735 in k2723 in chicken.file.posix#set-file-times! in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_fcall f_2756(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,7)))){
C_save_and_reclaim_args((void *)trf_2756,2,t0,t1);}
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){{
C_word av2[8];
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[185];
av2[3]=lf[190];
av2[4]=lf[211];
av2[5]=lf[212];
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

/* chicken.file.posix#file-size in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2800(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_2800,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2804,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:301: stat */
f_2595(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[216]);}

/* k2802 in chicken.file.posix#file-size in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2804(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,1)))){
C_save_and_reclaim((void *)f_2804,c,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_int64_to_num(&a,C_statbuf.st_size);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#set-file-owner! in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2806(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_2806,c,av);}
a=C_alloc(12);
t4=C_a_i_list(&a,4,lf[218],t2,t3,C_fix(-1));
/* posixwin.scm:877: chicken.base#error */
t5=*((C_word*)lf[103]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=lf[219];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* chicken.file.posix#set-file-group! in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2812(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_2812,c,av);}
a=C_alloc(12);
t4=C_a_i_list(&a,4,lf[221],t2,C_fix(-1),t3);
/* posixwin.scm:877: chicken.base#error */
t5=*((C_word*)lf[103]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=lf[219];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2820(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2820,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[22]+1 /* (set! chicken.file.posix#file-owner ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2824,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5616,a[2]=((C_word)li166),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:318: chicken.base#getter-with-setter */
t5=*((C_word*)lf[395]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[220]+1);
av2[4]=lf[405];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2824(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2824,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[16]+1 /* (set! chicken.file.posix#file-group ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2828,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5610,a[2]=((C_word)li165),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:324: chicken.base#getter-with-setter */
t5=*((C_word*)lf[395]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[198]+1);
av2[4]=lf[403];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2828(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2828,c,av);}
a=C_alloc(33);
t2=C_mutate((C_word*)lf[23]+1 /* (set! chicken.file.posix#file-permissions ...) */,t1);
t3=C_mutate((C_word*)lf[31]+1 /* (set! chicken.file.posix#file-type ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2830,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[36]+1 /* (set! chicken.file.posix#regular-file? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2917,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[38]+1 /* (set! chicken.file.posix#symbolic-link? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2927,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[32]+1 /* (set! chicken.file.posix#block-device? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2937,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[33]+1 /* (set! chicken.file.posix#character-device? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2947,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[35]+1 /* (set! chicken.file.posix#fifo? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2957,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[37]+1 /* (set! chicken.file.posix#socket? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2967,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[34]+1 /* (set! chicken.file.posix#directory? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2977,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t11=C_set_block_item(lf[78] /* chicken.file.posix#seek/set */,0,C_fix((C_word)SEEK_SET));
t12=C_set_block_item(lf[77] /* chicken.file.posix#seek/end */,0,C_fix((C_word)SEEK_END));
t13=C_set_block_item(lf[76] /* chicken.file.posix#seek/cur */,0,C_fix((C_word)SEEK_CUR));
t14=C_mutate((C_word*)lf[79]+1 /* (set! chicken.file.posix#set-file-position! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2990,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp));
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3045,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5573,a[2]=((C_word)li164),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:401: chicken.base#getter-with-setter */
t17=*((C_word*)lf[395]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t17;
av2[1]=t15;
av2[2]=t16;
av2[3]=*((C_word*)lf[79]+1);
av2[4]=lf[402];
((C_proc)(void*)(*((C_word*)t17+1)))(5,av2);}}

/* chicken.file.posix#file-type in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2830(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2830,c,av);}
a=C_alloc(3);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=C_rest_nullp(c,3);
t6=C_rest_nullp(c,4);
t7=(C_truep(t6)?C_SCHEME_TRUE:C_get_rest_arg(c,4,av,3,t0));
t8=C_rest_nullp(c,4);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2849,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:333: stat */
f_2595(t9,t2,t4,t7,lf[229]);}

/* k2847 in chicken.file.posix#file-type in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2849(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2849,c,av);}
if(C_truep(t1)){
t2=C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_stat_type);
t3=C_eqp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFREG));
if(C_truep(t3)){
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=lf[222];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_eqp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFLNK));
if(C_truep(t4)){
t5=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=lf[223];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_eqp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFDIR));
if(C_truep(t5)){
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=lf[224];
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_eqp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFCHR));
if(C_truep(t6)){
t7=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t7;
av2[1]=lf[225];
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t7=C_eqp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFBLK));
if(C_truep(t7)){
t8=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t8;
av2[1]=lf[226];
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=C_eqp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFIFO));
if(C_truep(t8)){
t9=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t9;
av2[1]=lf[227];
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t9=C_eqp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFSOCK));
t10=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t10;
av2[1]=(C_truep(t9)?lf[228]:lf[222]);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}}}}}}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* chicken.file.posix#regular-file? in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2917(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2917,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2925,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:347: chicken.file.posix#file-type */
t4=*((C_word*)lf[31]+1);{
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

/* k2923 in chicken.file.posix#regular-file? in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2925(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2925,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(lf[222],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#symbolic-link? in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2927(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2927,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2935,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:351: chicken.file.posix#file-type */
t4=*((C_word*)lf[31]+1);{
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

/* k2933 in chicken.file.posix#symbolic-link? in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2935(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2935,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(lf[223],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#block-device? in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2937(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2937,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2945,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:355: chicken.file.posix#file-type */
t4=*((C_word*)lf[31]+1);{
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

/* k2943 in chicken.file.posix#block-device? in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2945(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2945,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(lf[226],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#character-device? in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2947(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2947,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2955,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:359: chicken.file.posix#file-type */
t4=*((C_word*)lf[31]+1);{
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

/* k2953 in chicken.file.posix#character-device? in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2955(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2955,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(lf[225],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#fifo? in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2957(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2957,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2965,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:363: chicken.file.posix#file-type */
t4=*((C_word*)lf[31]+1);{
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

/* k2963 in chicken.file.posix#fifo? in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2965(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2965,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(lf[227],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#socket? in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2967(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2967,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2975,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:367: chicken.file.posix#file-type */
t4=*((C_word*)lf[31]+1);{
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

/* k2973 in chicken.file.posix#socket? in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2975(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2975,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(lf[228],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#directory? in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2977(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2977,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2985,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:371: chicken.file.posix#file-type */
t4=*((C_word*)lf[31]+1);{
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

/* k2983 in chicken.file.posix#directory? in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2985(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2985,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(lf[224],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#set-file-position! in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2990(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +6,c,3)))){
C_save_and_reclaim((void*)f_2990,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+6);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t5=C_i_pairp(t4);
t6=(C_truep(t5)?C_get_rest_arg(c,4,av,4,t0):C_fix((C_word)SEEK_SET));
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2997,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:387: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[203]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[203]+1);
av2[1]=t7;
av2[2]=t3;
av2[3]=lf[230];
tp(4,av2);}}

/* k2995 in chicken.file.posix#set-file-position! in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_2997(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2997,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3000,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:388: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[203]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[203]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=lf[230];
tp(4,av2);}}

/* k2998 in k2995 in chicken.file.posix#set-file-position! in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3000(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_3000,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3006,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3012,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:389: chicken.base#port? */
t4=*((C_word*)lf[195]+1);{
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

/* k3004 in k2998 in k2995 in chicken.file.posix#set-file-position! in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3006(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_3006,c,av);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* posix-common.scm:398: posix-error */
t2=lf[185];{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[190];
av2[3]=lf[230];
av2[4]=lf[231];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
f_2577(7,av2);}}}

/* k3010 in k2998 in k2995 in chicken.file.posix#set-file-position! in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3012(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3012,c,av);}
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(7));
t3=C_eqp(t2,lf[232]);
if(C_truep(t3)){
t4=C_fseek(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
if(C_truep(t4)){
t5=C_i_set_i_slot(((C_word*)t0)[2],C_fix(6),C_SCHEME_FALSE);
t6=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t4;
f_3006(2,av2);}}
else{
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
f_3006(2,av2);}}}
else{
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_3006(2,av2);}}}
else{
if(C_truep(C_fixnump(((C_word*)t0)[2]))){
t2=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_lseek(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
f_3006(2,av2);}}
else{
/* posix-common.scm:397: ##sys#signal-hook */
t2=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[5];
av2[2]=lf[193];
av2[3]=lf[230];
av2[4]=lf[233];
av2[5]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}}

/* k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3045(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3045,c,av);}
a=C_alloc(45);
t2=C_mutate((C_word*)lf[24]+1 /* (set! chicken.file.posix#file-position ...) */,t1);
t3=C_set_block_item(lf[40] /* chicken.file.posix#fileno/stdin */,0,C_fix((C_word)STDIN_FILENO));
t4=C_set_block_item(lf[41] /* chicken.file.posix#fileno/stdout */,0,C_fix((C_word)STDOUT_FILENO));
t5=C_set_block_item(lf[39] /* chicken.file.posix#fileno/stderr */,0,C_fix((C_word)STDERR_FILENO));
t6=C_set_block_item(lf[52] /* chicken.file.posix#open/rdonly */,0,C_fix((C_word)O_RDONLY));
t7=C_set_block_item(lf[59] /* chicken.file.posix#open/wronly */,0,C_fix((C_word)O_WRONLY));
t8=C_set_block_item(lf[53] /* chicken.file.posix#open/rdwr */,0,C_fix((C_word)O_RDWR));
t9=C_set_block_item(lf[54] /* chicken.file.posix#open/read */,0,C_fix((C_word)O_RDONLY));
t10=C_set_block_item(lf[58] /* chicken.file.posix#open/write */,0,C_fix((C_word)O_WRONLY));
t11=C_set_block_item(lf[46] /* chicken.file.posix#open/creat */,0,C_fix((C_word)O_CREAT));
t12=C_set_block_item(lf[44] /* chicken.file.posix#open/append */,0,C_fix((C_word)O_APPEND));
t13=C_set_block_item(lf[47] /* chicken.file.posix#open/excl */,0,C_fix((C_word)O_EXCL));
t14=C_set_block_item(lf[57] /* chicken.file.posix#open/trunc */,0,C_fix((C_word)O_TRUNC));
t15=C_set_block_item(lf[45] /* chicken.file.posix#open/binary */,0,C_fix((C_word)O_BINARY));
t16=C_set_block_item(lf[56] /* chicken.file.posix#open/text */,0,C_fix((C_word)O_TEXT));
t17=C_set_block_item(lf[62] /* chicken.file.posix#perm/irusr */,0,C_fix((C_word)S_IRUSR));
t18=C_set_block_item(lf[71] /* chicken.file.posix#perm/iwusr */,0,C_fix((C_word)S_IWUSR));
t19=C_set_block_item(lf[74] /* chicken.file.posix#perm/ixusr */,0,C_fix((C_word)S_IXUSR));
t20=C_set_block_item(lf[60] /* chicken.file.posix#perm/irgrp */,0,C_fix((C_word)S_IRGRP));
t21=C_set_block_item(lf[69] /* chicken.file.posix#perm/iwgrp */,0,C_fix((C_word)S_IWGRP));
t22=C_set_block_item(lf[72] /* chicken.file.posix#perm/ixgrp */,0,C_fix((C_word)S_IXGRP));
t23=C_set_block_item(lf[61] /* chicken.file.posix#perm/iroth */,0,C_fix((C_word)S_IROTH));
t24=C_set_block_item(lf[70] /* chicken.file.posix#perm/iwoth */,0,C_fix((C_word)S_IWOTH));
t25=C_set_block_item(lf[73] /* chicken.file.posix#perm/ixoth */,0,C_fix((C_word)S_IXOTH));
t26=C_set_block_item(lf[65] /* chicken.file.posix#perm/irwxu */,0,C_fix((C_word)S_IRUSR | S_IWUSR | S_IXUSR));
t27=C_set_block_item(lf[63] /* chicken.file.posix#perm/irwxg */,0,C_fix((C_word)S_IRGRP | S_IWGRP | S_IXGRP));
t28=C_set_block_item(lf[64] /* chicken.file.posix#perm/irwxo */,0,C_fix((C_word)S_IROTH | S_IWOTH | S_IXOTH));
t29=C_SCHEME_UNDEFINED;
t30=(*a=C_VECTOR_TYPE|1,a[1]=t29,tmp=(C_word)a,a+=2,tmp);
t31=C_SCHEME_UNDEFINED;
t32=(*a=C_VECTOR_TYPE|1,a[1]=t31,tmp=(C_word)a,a+=2,tmp);
t33=C_set_block_item(t30,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3073,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t34=C_set_block_item(t32,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3110,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t35=C_mutate((C_word*)lf[42]+1 /* (set! chicken.file.posix#open-input-file* ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3129,a[2]=t32,a[3]=t30,a[4]=((C_word)li27),tmp=(C_word)a,a+=5,tmp));
t36=C_mutate((C_word*)lf[43]+1 /* (set! chicken.file.posix#open-output-file* ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3143,a[2]=t32,a[3]=t30,a[4]=((C_word)li28),tmp=(C_word)a,a+=5,tmp));
t37=C_mutate((C_word*)lf[75]+1 /* (set! chicken.file.posix#port->fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3157,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t38=C_mutate((C_word*)lf[7]+1 /* (set! chicken.file.posix#duplicate-fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3202,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp));
t39=C_mutate((C_word*)lf[177]+1 /* (set! chicken.process-context.posix#current-process-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3229,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t40=C_mutate((C_word*)lf[171]+1 /* (set! chicken.process-context.posix#change-directory* ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3232,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp));
t41=*((C_word*)lf[255]+1);
t42=C_mutate((C_word*)lf[255]+1 /* (set! ##sys#change-directory-hook ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3248,a[2]=t41,a[3]=((C_word)li33),tmp=(C_word)a,a+=4,tmp));
t43=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3262,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t44=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5542,a[2]=((C_word)li162),tmp=(C_word)a,a+=3,tmp);
t45=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5567,a[2]=((C_word)li163),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:560: chicken.base#getter-with-setter */
t46=*((C_word*)lf[395]+1);{
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
av2[4]=lf[398];
((C_proc)(void*)(*((C_word*)t46+1)))(5,av2);}}

/* mode in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_fcall f_3073(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_3073,4,t1,t2,t3,t4);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3081,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t6=C_u_i_car(t3);
t7=C_eqp(t6,lf[234]);
if(C_truep(t7)){
if(C_truep(C_i_not(t2))){
/* posix-common.scm:482: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[192]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[192]+1);
av2[1]=t1;
av2[2]=lf[235];
av2[3]=t4;
tp(4,av2);}}
else{
/* posix-common.scm:486: ##sys#error */
t8=*((C_word*)lf[97]+1);{
C_word av2[4];
av2[0]=t8;
av2[1]=t5;
av2[2]=lf[236];
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}}
else{
/* posix-common.scm:487: ##sys#error */
t8=*((C_word*)lf[97]+1);{
C_word av2[4];
av2[0]=t8;
av2[1]=t5;
av2[2]=lf[237];
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}}
else{
if(C_truep(t2)){
/* posix-common.scm:482: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[192]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[192]+1);
av2[1]=t1;
av2[2]=lf[238];
av2[3]=t4;
tp(4,av2);}}
else{
/* posix-common.scm:482: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[192]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[192]+1);
av2[1]=t1;
av2[2]=lf[239];
av2[3]=t4;
tp(4,av2);}}}}

/* k3079 in mode in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3081(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3081,c,av);}
/* posix-common.scm:482: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[192]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[192]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* check in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_fcall f_3110(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,5)))){
C_save_and_reclaim_args((void *)trf_3110,5,t1,t2,t3,t4,t5);}
a=C_alloc(4);
if(C_truep(C_null_pointerp(t5))){
/* posix-common.scm:493: posix-error */
t6=lf[185];{
C_word av2[6];
av2[0]=t6;
av2[1]=t1;
av2[2]=lf[190];
av2[3]=t2;
av2[4]=lf[240];
av2[5]=t3;
f_2577(6,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3123,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t4)){
/* posix-common.scm:494: ##sys#make-port */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[241]+1));
C_word av2[6];
av2[0]=*((C_word*)lf[241]+1);
av2[1]=t6;
av2[2]=C_fix(1);
av2[3]=*((C_word*)lf[242]+1);
av2[4]=lf[243];
av2[5]=lf[232];
tp(6,av2);}}
else{
/* posix-common.scm:494: ##sys#make-port */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[241]+1));
C_word av2[6];
av2[0]=*((C_word*)lf[241]+1);
av2[1]=t6;
av2[2]=C_fix(2);
av2[3]=*((C_word*)lf[242]+1);
av2[4]=lf[243];
av2[5]=lf[232];
tp(6,av2);}}}}

/* k3121 in check in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3123(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3123,c,av);}
t2=C_set_file_ptr(t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.file.posix#open-input-file* in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3129(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +7,c,3)))){
C_save_and_reclaim((void*)f_3129,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+7);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3133,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* posix-common.scm:499: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[203]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[203]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[244];
tp(4,av2);}}

/* k3131 in chicken.file.posix#open-input-file* in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3133(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_3133,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3141,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:500: mode */
f_3073(t2,C_SCHEME_TRUE,((C_word*)t0)[6],lf[244]);}

/* k3139 in k3131 in chicken.file.posix#open-input-file* in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3141(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,5)))){
C_save_and_reclaim((void *)f_3141,c,av);}
a=C_alloc(2);
t2=C_fdopen(&a,2,((C_word*)t0)[2],t1);
/* posix-common.scm:500: check */
f_3110(((C_word*)t0)[4],lf[244],((C_word*)t0)[2],C_SCHEME_TRUE,t2);}

/* chicken.file.posix#open-output-file* in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3143(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +7,c,3)))){
C_save_and_reclaim((void*)f_3143,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+7);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3147,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* posix-common.scm:503: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[203]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[203]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[245];
tp(4,av2);}}

/* k3145 in chicken.file.posix#open-output-file* in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3147(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_3147,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3155,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:504: mode */
f_3073(t2,C_SCHEME_FALSE,((C_word*)t0)[6],lf[245]);}

/* k3153 in k3145 in chicken.file.posix#open-output-file* in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3155(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,5)))){
C_save_and_reclaim((void *)f_3155,c,av);}
a=C_alloc(2);
t2=C_fdopen(&a,2,((C_word*)t0)[2],t1);
/* posix-common.scm:504: check */
f_3110(((C_word*)t0)[4],lf[245],((C_word*)t0)[2],C_SCHEME_FALSE,t2);}

/* chicken.file.posix#port->fileno in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3157(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3157,c,av);}
a=C_alloc(4);
t3=C_i_check_port_2(t2,C_fix(0),C_SCHEME_TRUE,lf[246]);
t4=C_slot(t2,C_fix(7));
t5=C_eqp(lf[228],t4);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3173,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:514: ##sys#port-data */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[247]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[247]+1);
av2[1]=t6;
av2[2]=t2;
tp(3,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3196,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:515: ##sys#peek-unsigned-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[250]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[250]+1);
av2[1]=t6;
av2[2]=t2;
av2[3]=C_fix(0);
tp(4,av2);}}}

/* k3171 in chicken.file.posix#port->fileno in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3173(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3173,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_slot(t1,C_fix(0));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3180 in k3194 in chicken.file.posix#port->fileno in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3182(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3182,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3194 in chicken.file.posix#port->fileno in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3196(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_3196,c,av);}
a=C_alloc(4);
if(C_truep(C_i_not(C_i_zerop(t1)))){
t2=C_port_fileno(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3182,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posix-common.scm:518: posix-error */
t4=lf[185];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[190];
av2[3]=lf[246];
av2[4]=lf[248];
av2[5]=((C_word*)t0)[2];
f_2577(6,av2);}}
else{
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
/* posix-common.scm:520: posix-error */
t2=lf[185];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[193];
av2[3]=lf[246];
av2[4]=lf[249];
av2[5]=((C_word*)t0)[2];
f_2577(6,av2);}}}

/* chicken.file.posix#duplicate-fileno in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3202(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,3)))){
C_save_and_reclaim((void*)f_3202,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3206,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:524: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[203]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[203]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[251];
tp(4,av2);}}

/* k3204 in chicken.file.posix#duplicate-fileno in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3206(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_3206,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3209,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(((C_word*)t0)[4]))){
t3=t2;
f_3209(t3,C_dup(((C_word*)t0)[3]));}
else{
t3=C_i_car(((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3227,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:528: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[203]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[203]+1);
av2[1]=t4;
av2[2]=t3;
av2[3]=lf[251];
tp(4,av2);}}}

/* k3207 in k3204 in chicken.file.posix#duplicate-fileno in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_fcall f_3209(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,5)))){
C_save_and_reclaim_args((void *)trf_3209,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3212,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
/* posix-common.scm:531: posix-error */
t3=lf[185];{
C_word av2[6];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[190];
av2[3]=lf[251];
av2[4]=lf[252];
av2[5]=((C_word*)t0)[3];
f_2577(6,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3210 in k3207 in k3204 in chicken.file.posix#duplicate-fileno in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3212(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3212,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3225 in k3204 in chicken.file.posix#duplicate-fileno in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3227(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3227,c,av);}
t2=((C_word*)t0)[2];
f_3209(t2,C_dup2(((C_word*)t0)[3],((C_word*)t0)[4]));}

/* chicken.process-context.posix#current-process-id in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3229(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3229,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=stub843(C_SCHEME_UNDEFINED);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.process-context.posix#change-directory* in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3232(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3232,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3236,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:545: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[203]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[203]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[253];
tp(4,av2);}}

/* k3234 in chicken.process-context.posix#change-directory* in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3236(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_3236,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3239,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_eqp(C_fix(0),C_fchdir(((C_word*)t0)[3]));
if(C_truep(t3)){
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* posix-common.scm:547: posix-error */
t4=lf[185];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[190];
av2[3]=lf[253];
av2[4]=lf[254];
av2[5]=((C_word*)t0)[3];
f_2577(6,av2);}}}

/* k3237 in k3234 in chicken.process-context.posix#change-directory* in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3239(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3239,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* ##sys#change-directory-hook in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3248(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3248,c,av);}
if(C_truep(C_fixnump(t2))){
t3=*((C_word*)lf[171]+1);
t4=*((C_word*)lf[171]+1);
/* posix-common.scm:552: g850 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[171]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[171]+1);
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

/* k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3262(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3262,c,av);}
a=C_alloc(32);
t2=C_mutate((C_word*)lf[15]+1 /* (set! chicken.file.posix#file-creation-mode ...) */,t1);
t3=C_mutate(&lf[256] /* (set! chicken.posix#decode-seconds ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)C_decode_seconds,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate(&lf[257] /* (set! chicken.posix#check-time-vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3265,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[83]+1 /* (set! chicken.time.posix#seconds->local-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3284,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[81]+1 /* (set! chicken.time.posix#seconds->utc-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3305,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[84]+1 /* (set! chicken.time.posix#seconds->string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3337,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp));
t8=C_fix((C_word)sizeof(struct tm));
t9=C_mutate((C_word*)lf[85]+1 /* (set! chicken.time.posix#local-time->seconds ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3375,a[2]=t8,a[3]=((C_word)li39),tmp=(C_word)a,a+=4,tmp));
t10=C_fix((C_word)sizeof(struct tm));
t11=C_mutate((C_word*)lf[87]+1 /* (set! chicken.time.posix#time->string ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3420,a[2]=t10,a[3]=((C_word)li40),tmp=(C_word)a,a+=4,tmp));
t12=C_mutate((C_word*)lf[135]+1 /* (set! chicken.process.signal#set-signal-handler! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3482,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp));
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3497,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5533,a[2]=((C_word)li161),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:635: chicken.base#getter-with-setter */
t15=*((C_word*)lf[395]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t15;
av2[1]=t13;
av2[2]=t14;
av2[3]=*((C_word*)lf[135]+1);
av2[4]=lf[396];
((C_proc)(void*)(*((C_word*)t15+1)))(5,av2);}}

/* chicken.posix#check-time-vector in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_fcall f_3265(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_3265,3,t1,t2,t3);}
t4=C_i_check_vector_2(t3,t2);
t5=C_block_size(t3);
if(C_truep(C_fixnum_lessp(t5,C_fix(10)))){
/* posix-common.scm:579: ##sys#error */
t6=*((C_word*)lf[97]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t1;
av2[2]=t2;
av2[3]=lf[258];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* chicken.time.posix#seconds->local-time in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3284(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_3284,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3288,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_rest_nullp(c,2))){
/* posix-common.scm:582: chicken.time#current-seconds */
t3=*((C_word*)lf[214]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_get_rest_arg(c,2,av,2,t0);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f6133,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:583: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[213]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[213]+1);
av2[1]=t4;
av2[2]=t3;
av2[3]=lf[259];
tp(4,av2);}}}

/* k3286 in chicken.time.posix#seconds->local-time in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3288(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3288,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3291,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:583: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[213]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[213]+1);
av2[1]=t2;
av2[2]=t1;
av2[3]=lf[259];
tp(4,av2);}}

/* k3289 in k3286 in chicken.time.posix#seconds->local-time in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3291(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3291,c,av);}
/* posix-common.scm:584: decode-seconds */
{C_proc tp=(C_proc)C_fast_retrieve_proc(lf[256]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=lf[256];
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_FALSE;
tp(4,av2);}}

/* chicken.time.posix#seconds->utc-time in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3305(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_3305,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3309,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_rest_nullp(c,2))){
/* posix-common.scm:587: chicken.time#current-seconds */
t3=*((C_word*)lf[214]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_get_rest_arg(c,2,av,2,t0);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f6137,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:588: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[213]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[213]+1);
av2[1]=t4;
av2[2]=t3;
av2[3]=lf[260];
tp(4,av2);}}}

/* k3307 in chicken.time.posix#seconds->utc-time in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3309(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3309,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3312,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:588: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[213]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[213]+1);
av2[1]=t2;
av2[2]=t1;
av2[3]=lf[260];
tp(4,av2);}}

/* k3310 in k3307 in chicken.time.posix#seconds->utc-time in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3312(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3312,c,av);}
/* posix-common.scm:589: decode-seconds */
{C_proc tp=(C_proc)C_fast_retrieve_proc(lf[256]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=lf[256];
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_TRUE;
tp(4,av2);}}

/* chicken.time.posix#seconds->string in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3337(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3337,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3341,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_rest_nullp(c,2))){
/* posix-common.scm:593: chicken.time#current-seconds */
t3=*((C_word*)lf[214]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=t2;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_get_rest_arg(c,2,av,2,t0);
f_3341(2,av2);}}}

/* k3339 in chicken.time.posix#seconds->string in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3341(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3341,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3344,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:594: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[213]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[213]+1);
av2[1]=t2;
av2[2]=t1;
av2[3]=lf[262];
tp(4,av2);}}

/* k3342 in k3339 in chicken.time.posix#seconds->string in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3344(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3344,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3347,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=C_fix((C_word)sizeof(int) * CHAR_BIT);
t5=C_i_foreign_ranged_integer_argumentp(((C_word*)t0)[3],t4);
/* posix-common.scm:592: ##sys#peek-c-string */
t6=*((C_word*)lf[187]+1);{
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

/* k3345 in k3342 in k3339 in chicken.time.posix#seconds->string in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3347(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3347,c,av);}
if(C_truep(t1)){
t2=C_block_size(t1);
/* posix-common.scm:597: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[261]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[261]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fix(0);
av2[4]=C_fixnum_difference(t2,C_fix(1));
tp(5,av2);}}
else{
/* posix-common.scm:598: ##sys#error */
t2=*((C_word*)lf[97]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[262];
av2[3]=lf[263];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* chicken.time.posix#local-time->seconds in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3375(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3375,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3379,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:603: check-time-vector */
f_3265(t3,lf[264],t2);}

/* k3377 in chicken.time.posix#local-time->seconds in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3379(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3379,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3383,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:604: ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[266]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[266]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_make_character(0);
tp(4,av2);}}

/* k3381 in k3377 in chicken.time.posix#local-time->seconds in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3383(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_3383,c,av);}
a=C_alloc(7);
t2=C_a_mktime(&a,2,((C_word*)t0)[2],t1);
if(C_truep(C_i_nequalp(C_fix(-1),t2))){
/* posix-common.scm:606: ##sys#error */
t3=*((C_word*)lf[97]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[264];
av2[3]=lf[265];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* chicken.time.posix#time->string in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3420(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3420,c,av);}
a=C_alloc(6);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3427,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:614: check-time-vector */
f_3265(t5,lf[267],t2);}

/* k3425 in chicken.time.posix#time->string in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3427(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_3427,c,av);}
a=C_alloc(9);
if(C_truep(((C_word*)t0)[2])){
t2=C_i_check_string_2(((C_word*)t0)[2],lf[267]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3436,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3446,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:618: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[192]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[192]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[267];
tp(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3453,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3474,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:620: ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[266]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[266]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=C_make_character(0);
tp(4,av2);}}}

/* k3434 in k3425 in chicken.time.posix#time->string in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3436(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3436,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* posix-common.scm:619: ##sys#error */
t2=*((C_word*)lf[97]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[267];
av2[3]=lf[268];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* k3444 in k3425 in chicken.time.posix#time->string in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3446(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3446,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3450,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:618: ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[266]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[266]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_make_character(0);
tp(4,av2);}}

/* k3448 in k3444 in k3425 in chicken.time.posix#time->string in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3450(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3450,c,av);}
a=C_alloc(5);
t2=C_a_i_bytevector(&a,1,C_fix(3));
if(C_truep(t1)){
t3=C_i_foreign_block_argumentp(t1);
/* posix-common.scm:611: ##sys#peek-c-string */
t4=*((C_word*)lf[187]+1);{
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
t3=*((C_word*)lf[187]+1);{
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

/* k3451 in k3425 in chicken.time.posix#time->string in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3453(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3453,c,av);}
if(C_truep(t1)){
t2=C_block_size(t1);
/* posix-common.scm:622: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[261]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[261]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fix(0);
av2[4]=C_fixnum_difference(t2,C_fix(1));
tp(5,av2);}}
else{
/* posix-common.scm:623: ##sys#error */
t2=*((C_word*)lf[97]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[267];
av2[3]=lf[269];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* k3472 in k3425 in chicken.time.posix#time->string in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3474(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3474,c,av);}
a=C_alloc(5);
t2=C_a_i_bytevector(&a,1,C_fix(3));
if(C_truep(t1)){
t3=C_i_foreign_block_argumentp(t1);
/* posix-common.scm:610: ##sys#peek-c-string */
t4=*((C_word*)lf[187]+1);{
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
t3=*((C_word*)lf[187]+1);{
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

/* chicken.process.signal#set-signal-handler! in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3482(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3482,c,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3486,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:630: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[203]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[203]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[271];
tp(4,av2);}}

/* k3484 in chicken.process.signal#set-signal-handler! in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3486(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3486,c,av);}
if(C_truep(((C_word*)t0)[2])){
t2=C_establish_signal_handler(((C_word*)t0)[3],((C_word*)t0)[3]);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_vector_set(*((C_word*)lf[270]+1),((C_word*)t0)[3],((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_establish_signal_handler(((C_word*)t0)[3],C_SCHEME_FALSE);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_vector_set(*((C_word*)lf[270]+1),((C_word*)t0)[3],((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3497(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(73,c,8)))){
C_save_and_reclaim((void *)f_3497,c,av);}
a=C_alloc(73);
t2=C_mutate((C_word*)lf[137]+1 /* (set! chicken.process.signal#signal-handler ...) */,t1);
t3=C_mutate((C_word*)lf[126]+1 /* (set! chicken.process#process-sleep ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3499,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[114]+1 /* (set! chicken.process#process-wait ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3505,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate(&lf[275] /* (set! chicken.posix#list->c-string-buffer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3576,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate(&lf[277] /* (set! chicken.posix#free-c-string-buffer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3693,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate(&lf[286] /* (set! chicken.posix#check-environment-list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3727,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp));
t8=*((C_word*)lf[287]+1);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3774,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp);
t10=C_mutate(&lf[288] /* (set! chicken.posix#call-with-exec-args ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3776,a[2]=t9,a[3]=t8,a[4]=((C_word)li69),tmp=(C_word)a,a+=5,tmp));
t11=C_set_block_item(lf[127] /* chicken.process#pipe/buf */,0,C_fix((C_word)PIPE_BUF));
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3933,a[2]=((C_word)li70),tmp=(C_word)a,a+=3,tmp);
t13=C_mutate((C_word*)lf[120]+1 /* (set! chicken.process#open-input-pipe ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3952,a[2]=t12,a[3]=((C_word)li71),tmp=(C_word)a,a+=4,tmp));
t14=C_mutate((C_word*)lf[121]+1 /* (set! chicken.process#open-output-pipe ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3992,a[2]=t12,a[3]=((C_word)li72),tmp=(C_word)a,a+=4,tmp));
t15=C_mutate((C_word*)lf[117]+1 /* (set! chicken.process#close-input-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4032,a[2]=((C_word)li73),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[118]+1 /* (set! chicken.process#close-output-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4047,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[122]+1 /* (set! chicken.process#with-input-from-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4062,a[2]=((C_word)li79),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[116]+1 /* (set! chicken.process#call-with-output-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4096,a[2]=((C_word)li82),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[115]+1 /* (set! chicken.process#call-with-input-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4120,a[2]=((C_word)li85),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[123]+1 /* (set! chicken.process#with-output-to-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4144,a[2]=((C_word)li90),tmp=(C_word)a,a+=3,tmp));
t21=C_set_block_item(lf[50] /* chicken.file.posix#open/noinherit */,0,C_fix((C_word)O_NOINHERIT));
t22=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)va6122,a[2]=((C_word*)t0)[2],a[3]=((C_word)li157),tmp=(C_word)a,a+=4,tmp);
t23=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)va6124,a[2]=t22,a[3]=((C_word)li158),tmp=(C_word)a,a+=4,tmp);
t24=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)va6126,a[2]=t23,a[3]=((C_word)li159),tmp=(C_word)a,a+=4,tmp);
t25=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)va6128,a[2]=t24,a[3]=((C_word)li160),tmp=(C_word)a,a+=4,tmp);
t26=t25;
va6128(t26,C_s_a_i_bitwise_ior(&a,2,C_fix((C_word)S_IRUSR),C_fix((C_word)S_IWUSR)));}

/* chicken.process#process-sleep in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3499(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3499,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3503,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:647: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[203]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[203]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[272];
tp(4,av2);}}

/* k3501 in chicken.process#process-sleep in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3503(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3503,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_process_sleep(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.process#process-wait in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3505(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3505,c,av);}
a=C_alloc(5);
t2=C_rest_nullp(c,2);
t3=(C_truep(t2)?C_SCHEME_FALSE:C_get_rest_arg(c,2,av,2,t0));
t4=C_rest_nullp(c,2);
t5=C_rest_nullp(c,3);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,2,t0));
t7=C_rest_nullp(c,3);
t8=(C_truep(t3)?t3:C_fix(-1));
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3524,a[2]=t8,a[3]=t6,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:654: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[203]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[203]+1);
av2[1]=t9;
av2[2]=t8;
av2[3]=lf[273];
tp(4,av2);}}

/* k3522 in chicken.process#process-wait in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3524(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_3524,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3529,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li43),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3535,a[2]=((C_word*)t0)[2],a[3]=((C_word)li44),tmp=(C_word)a,a+=4,tmp);
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

/* a3528 in k3522 in chicken.process#process-wait in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3529(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3529,c,av);}
if(C_truep(C_process_wait(((C_word*)t0)[2],((C_word*)t0)[3]))){
/* posixwin.scm:858: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_fix((C_word)C_exstatus);
C_values(5,av2);}}
else{
/* posixwin.scm:859: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t1;
av2[2]=C_fix(-1);
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
C_values(5,av2);}}}

/* a3534 in k3522 in chicken.process#process-wait in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3535(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3535,c,av);}
t5=C_eqp(t2,C_fix(-1));
if(C_truep(t5)){
/* posix-common.scm:657: posix-error */
t6=lf[185];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t6;
av2[1]=t1;
av2[2]=lf[93];
av2[3]=lf[273];
av2[4]=lf[274];
av2[5]=((C_word*)t0)[2];
f_2577(6,av2);}}
else{
/* posix-common.scm:658: scheme#values */{
C_word *av2=av;
av2[0]=0;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t4;
C_values(5,av2);}}}

/* chicken.posix#list->c-string-buffer in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_fcall f_3576(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_3576,4,t1,t2,t3,t4);}
a=C_alloc(12);
t5=C_i_check_list_2(t2,t4);
t6=C_u_i_length(t2);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3584,a[2]=t1,a[3]=t6,a[4]=t4,a[5]=t3,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t8=C_a_i_fixnum_plus(&a,2,t6,C_fix(1));
/* posix-common.scm:674: chicken.memory#make-pointer-vector */
t9=*((C_word*)lf[282]+1);{
C_word av2[4];
av2[0]=t9;
av2[1]=t7;
av2[2]=t8;
av2[3]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}

/* k3582 in chicken.posix#list->c-string-buffer in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3584(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_3584,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3587,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3592,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li53),tmp=(C_word)a,a+=8,tmp);
/* posix-common.scm:676: scheme#call-with-current-continuation */
t4=*((C_word*)lf[281]+1);{
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

/* k3585 in k3582 in chicken.posix#list->c-string-buffer in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3587(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3587,c,av);}
/* posix-common.scm:672: g1005 */
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a3591 in k3582 in chicken.posix#list->c-string-buffer in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3592(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3592,c,av);}
a=C_alloc(14);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3598,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li47),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3613,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word)li52),tmp=(C_word)a,a+=9,tmp);
/* posix-common.scm:676: chicken.condition#with-exception-handler */
t5=*((C_word*)lf[280]+1);{
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

/* a3597 in a3591 in k3582 in chicken.posix#list->c-string-buffer in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3598(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3598,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3604,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li46),tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:676: k1002 */
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a3603 in a3597 in a3591 in k3582 in chicken.posix#list->c-string-buffer in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3604(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3604,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3608,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:678: free-c-string-buffer */
f_3693(t2,((C_word*)t0)[3]);}

/* k3606 in a3603 in a3597 in a3591 in k3582 in chicken.posix#list->c-string-buffer in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3608(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3608,c,av);}
/* posix-common.scm:678: chicken.condition#signal */
t2=*((C_word*)lf[276]+1);{
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

/* a3612 in a3591 in k3582 in chicken.posix#list->c-string-buffer in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3613(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3613,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3615,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li49),tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3672,a[2]=((C_word*)t0)[7],a[3]=((C_word)li51),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3689,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tmp12197 */
t5=t2;
f_3615(t5,t4);}

/* tmp12197 in a3612 in a3591 in k3582 in chicken.posix#list->c-string-buffer in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_fcall f_3615(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,4)))){
C_save_and_reclaim_args((void *)trf_3615,2,t0,t1);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3619,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3621,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],a[7]=((C_word)li48),tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_3621(t6,t2,((C_word*)t0)[6],C_fix(0));}

/* k3617 in tmp12197 in a3612 in a3591 in k3582 in chicken.posix#list->c-string-buffer in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3619(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3619,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* doloop1010 in tmp12197 in a3612 in a3591 in k3582 in chicken.posix#list->c-string-buffer in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_fcall f_3621(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_3621,4,t0,t1,t2,t3);}
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
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3637,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3662,a[2]=t8,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:687: convert */
t10=((C_word*)t0)[6];{
C_word av2[3];
av2[0]=t10;
av2[1]=t9;
av2[2]=C_u_i_car(t2);
((C_proc)C_fast_retrieve_proc(t10))(3,av2);}}}

/* k3635 in doloop1010 in tmp12197 in a3612 in a3591 in k3582 in chicken.posix#list->c-string-buffer in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3637(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_3637,c,av);}
a=C_alloc(13);
t2=C_a_i_bytevector(&a,1,C_fix(3));
t3=stub993(t2,t1);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3643,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t3,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t3)){
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_3643(2,av2);}}
else{
/* posix-common.scm:689: chicken.base#error */
t5=*((C_word*)lf[103]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[7];
av2[3]=lf[279];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k3641 in k3635 in doloop1010 in tmp12197 in a3612 in a3591 in k3582 in chicken.posix#list->c-string-buffer in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3643(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3643,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3646,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:690: chicken.memory#pointer-vector-set! */
t3=*((C_word*)lf[278]+1);{
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

/* k3644 in k3641 in k3635 in doloop1010 in tmp12197 in a3612 in a3591 in k3582 in chicken.posix#list->c-string-buffer in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in ... */
static void C_ccall f_3646(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3646,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3621(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]),C_fixnum_plus(((C_word*)t0)[5],C_fix(1)));}

/* k3660 in doloop1010 in tmp12197 in a3612 in a3591 in k3582 in chicken.posix#list->c-string-buffer in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3662(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3662,c,av);}
/* posix-common.scm:687: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[192]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[192]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* tmp22198 in a3612 in a3591 in k3582 in chicken.posix#list->c-string-buffer in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_fcall f_3672(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3672,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3678,a[2]=t2,a[3]=((C_word)li50),tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:676: k1002 */
t4=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a3677 in tmp22198 in a3612 in a3591 in k3582 in chicken.posix#list->c-string-buffer in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3678(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3678,c,av);}{
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

/* k3687 in a3612 in a3591 in k3582 in chicken.posix#list->c-string-buffer in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3689(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3689,c,av);}
a=C_alloc(3);
/* tmp22198 */
t2=((C_word*)t0)[2];
f_3672(t2,((C_word*)t0)[3],C_a_i_list(&a,1,t1));}

/* chicken.posix#free-c-string-buffer in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_fcall f_3693(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3693,2,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3697,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:695: chicken.memory#pointer-vector-length */
t4=*((C_word*)lf[285]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3695 in chicken.posix#free-c-string-buffer in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3697(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_3697,c,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3702,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word)li55),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_3702(t5,((C_word*)t0)[3],C_fix(0));}

/* doloop1029 in k3695 in chicken.posix#free-c-string-buffer in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_fcall f_3702(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_3702,3,t0,t1,t2);}
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
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3712,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:698: chicken.memory#pointer-vector-ref */
t5=*((C_word*)lf[284]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k3710 in doloop1029 in k3695 in chicken.posix#free-c-string-buffer in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3712(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3712,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3715,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
/* posix-common.scm:699: chicken.memory#free */
t3=*((C_word*)lf[283]+1);{
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
f_3702(t3,((C_word*)t0)[3],C_fixnum_plus(((C_word*)t0)[4],C_fix(1)));}}

/* k3713 in k3710 in doloop1029 in k3695 in chicken.posix#free-c-string-buffer in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3715(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3715,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3702(t2,((C_word*)t0)[3],C_fixnum_plus(((C_word*)t0)[4],C_fix(1)));}

/* chicken.posix#check-environment-list in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_fcall f_3727(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_3727,3,t1,t2,t3);}
a=C_alloc(8);
t4=C_i_check_list_2(t2,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3732,a[2]=t3,a[3]=((C_word)li57),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3751,a[2]=t5,a[3]=((C_word)li58),tmp=(C_word)a,a+=4,tmp);
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=(
  f_3751(t6,t2)
);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* g1042 in chicken.posix#check-environment-list in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static C_word C_fcall f_3732(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t2=C_i_check_pair_2(t1,((C_word*)t0)[2]);
t3=C_i_check_string_2(C_u_i_car(t1),((C_word*)t0)[2]);
return(C_i_check_string_2(C_u_i_cdr(t1),((C_word*)t0)[2]));}

/* for-each-loop1041 in chicken.posix#check-environment-list in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static C_word C_fcall f_3751(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_pairp(t1))){
t2=(
/* posix-common.scm:704: g1042 */
  f_3732(((C_word*)t0)[2],C_slot(t1,C_fix(0)))
);
t4=C_slot(t1,C_fix(1));
t1=t4;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* nop in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3774(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3774,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.posix#call-with-exec-args in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_fcall f_3776(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_3776,8,t0,t1,t2,t3,t4,t5,t6,t7);}
a=C_alloc(10);
t8=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3780,a[2]=t5,a[3]=t1,a[4]=t7,a[5]=t3,a[6]=t2,a[7]=t6,a[8]=((C_word*)t0)[2],a[9]=t4,tmp=(C_word)a,a+=10,tmp);
/* posix-common.scm:715: pathname-strip-directory */
t9=((C_word*)t0)[3];{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* k3778 in chicken.posix#call-with-exec-args in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3780(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_3780,c,av);}
a=C_alloc(11);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3786,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* posix-common.scm:717: list->c-string-buffer */
f_3576(t3,t2,((C_word*)t0)[9],((C_word*)t0)[6]);}

/* k3784 in k3778 in chicken.posix#call-with-exec-args in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3786(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3786,c,av);}
a=C_alloc(15);
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3789,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3794,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word)li68),tmp=(C_word)a,a+=10,tmp);
/* posix-common.scm:720: scheme#call-with-current-continuation */
t6=*((C_word*)lf[281]+1);{
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

/* k3787 in k3784 in k3778 in chicken.posix#call-with-exec-args in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3789(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3789,c,av);}
/* posix-common.scm:715: g1077 */
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a3793 in k3784 in k3778 in chicken.posix#call-with-exec-args in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3794(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3794,c,av);}
a=C_alloc(17);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3800,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word)li62),tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3821,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=((C_word)li67),tmp=(C_word)a,a+=11,tmp);
/* posix-common.scm:720: chicken.condition#with-exception-handler */
t5=*((C_word*)lf[280]+1);{
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

/* a3799 in a3793 in k3784 in k3778 in chicken.posix#call-with-exec-args in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3800(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3800,c,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3806,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li61),tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:720: k1074 */
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a3805 in a3799 in a3793 in k3784 in k3778 in chicken.posix#call-with-exec-args in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3806(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3806,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3810,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:722: free-c-string-buffer */
f_3693(t2,((C_word*)t0)[4]);}

/* k3808 in a3805 in a3799 in a3793 in k3784 in k3778 in chicken.posix#call-with-exec-args in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3810(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3810,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3813,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
/* posix-common.scm:723: free-c-string-buffer */
f_3693(t2,((C_word*)((C_word*)t0)[4])[1]);}
else{
/* posix-common.scm:724: chicken.condition#signal */
t3=*((C_word*)lf[276]+1);{
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

/* k3811 in k3808 in a3805 in a3799 in a3793 in k3784 in k3778 in chicken.posix#call-with-exec-args in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3813(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3813,c,av);}
/* posix-common.scm:724: chicken.condition#signal */
t2=*((C_word*)lf[276]+1);{
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

/* a3820 in a3793 in k3784 in k3778 in chicken.posix#call-with-exec-args in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3821(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_3821,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3827,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word)li64),tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3902,a[2]=((C_word*)t0)[9],a[3]=((C_word)li66),tmp=(C_word)a,a+=4,tmp);
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

/* a3826 in a3820 in a3793 in k3784 in k3778 in chicken.posix#call-with-exec-args in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3827(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_3827,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3831,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[7])){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3841,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* posix-common.scm:728: check-environment-list */
f_3727(t3,((C_word*)t0)[7],((C_word*)t0)[6]);}
else{
t3=t2;
f_3831(t3,C_SCHEME_UNDEFINED);}}

/* k3829 in a3826 in a3820 in a3793 in k3784 in k3778 in chicken.posix#call-with-exec-args in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_fcall f_3831(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_3831,2,t0,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3838,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:734: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[192]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[192]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[7];
tp(4,av2);}}

/* k3836 in k3829 in a3826 in a3820 in a3793 in k3784 in k3778 in chicken.posix#call-with-exec-args in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3838(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3838,c,av);}
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

/* k3839 in a3826 in a3820 in a3793 in k3784 in k3778 in chicken.posix#call-with-exec-args in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3841(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3841,c,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3845,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_check_list_2(((C_word*)t0)[4],lf[289]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3866,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3868,a[2]=t5,a[3]=t10,a[4]=t6,a[5]=((C_word)li63),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_3868(t12,t8,((C_word*)t0)[4]);}

/* k3843 in k3839 in a3826 in a3820 in a3793 in k3784 in k3778 in chicken.posix#call-with-exec-args in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3845(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3845,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_3831(t3,t2);}

/* k3864 in k3839 in a3826 in a3820 in a3793 in k3784 in k3778 in chicken.posix#call-with-exec-args in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3866(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3866,c,av);}
/* posix-common.scm:730: list->c-string-buffer */
f_3576(((C_word*)t0)[2],t1,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* map-loop1085 in k3839 in a3826 in a3820 in a3793 in k3784 in k3778 in chicken.posix#call-with-exec-args in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_fcall f_3868(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_3868,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3893,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* posix-common.scm:731: scheme#string-append */
t5=*((C_word*)lf[106]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t3;
av2[2]=C_i_car(t4);
av2[3]=lf[290];
av2[4]=C_u_i_cdr(t4);
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3891 in map-loop1085 in k3839 in a3826 in a3820 in a3793 in k3784 in k3778 in chicken.posix#call-with-exec-args in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 in ... */
static void C_ccall f_3893(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3893,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_3868(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* a3901 in a3820 in a3793 in k3784 in k3778 in chicken.posix#call-with-exec-args in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3902(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_3902,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3908,a[2]=t2,a[3]=((C_word)li65),tmp=(C_word)a,a+=4,tmp);
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

/* a3907 in a3901 in a3820 in a3793 in k3784 in k3778 in chicken.posix#call-with-exec-args in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3908(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3908,c,av);}{
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

/* check in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_fcall f_3933(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,5)))){
C_save_and_reclaim_args((void *)trf_3933,5,t1,t2,t3,t4,t5);}
a=C_alloc(4);
if(C_truep(C_null_pointerp(t5))){
/* posix-common.scm:746: posix-error */
t6=lf[185];{
C_word av2[6];
av2[0]=t6;
av2[1]=t1;
av2[2]=lf[190];
av2[3]=t2;
av2[4]=lf[291];
av2[5]=t3;
f_2577(6,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3946,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t4)){
/* posix-common.scm:747: ##sys#make-port */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[241]+1));
C_word av2[6];
av2[0]=*((C_word*)lf[241]+1);
av2[1]=t6;
av2[2]=C_fix(1);
av2[3]=*((C_word*)lf[242]+1);
av2[4]=lf[292];
av2[5]=lf[232];
tp(6,av2);}}
else{
/* posix-common.scm:747: ##sys#make-port */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[241]+1));
C_word av2[6];
av2[0]=*((C_word*)lf[241]+1);
av2[1]=t6;
av2[2]=C_fix(2);
av2[3]=*((C_word*)lf[242]+1);
av2[4]=lf[292];
av2[5]=lf[232];
tp(6,av2);}}}}

/* k3944 in check in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3946(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3946,c,av);}
t2=C_set_file_ptr(t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.process#open-input-pipe in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3952(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +10,c,3)))){
C_save_and_reclaim((void*)f_3952,c,av);}
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
t4=C_i_check_string_2(t2,lf[293]);
t5=C_i_pairp(t3);
t6=(C_truep(t5)?C_slot(t3,C_fix(0)):lf[294]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3966,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=C_eqp(t6,lf[294]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3973,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:758: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[192]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[192]+1);
av2[1]=t9;
av2[2]=t2;
av2[3]=lf[293];
tp(4,av2);}}
else{
t9=C_eqp(t6,lf[295]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3983,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:759: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[192]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[192]+1);
av2[1]=t10;
av2[2]=t2;
av2[3]=lf[293];
tp(4,av2);}}
else{
/* posix-common.scm:743: ##sys#error */
t10=*((C_word*)lf[97]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t10;
av2[1]=t7;
av2[2]=lf[296];
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}}}

/* k3964 in chicken.process#open-input-pipe in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3966(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_3966,c,av);}
/* posix-common.scm:754: check */
f_3933(((C_word*)t0)[3],lf[293],((C_word*)t0)[4],C_SCHEME_TRUE,t1);}

/* k3971 in chicken.process#open-input-pipe in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3973(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,5)))){
C_save_and_reclaim((void *)f_3973,c,av);}
a=C_alloc(2);
t2=open_text_input_pipe(&a,1,t1);
/* posix-common.scm:754: check */
f_3933(((C_word*)t0)[3],lf[293],((C_word*)t0)[4],C_SCHEME_TRUE,t2);}

/* k3981 in chicken.process#open-input-pipe in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3983(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,5)))){
C_save_and_reclaim((void *)f_3983,c,av);}
a=C_alloc(2);
t2=open_binary_input_pipe(&a,1,t1);
/* posix-common.scm:754: check */
f_3933(((C_word*)t0)[3],lf[293],((C_word*)t0)[4],C_SCHEME_TRUE,t2);}

/* chicken.process#open-output-pipe in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_3992(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +10,c,3)))){
C_save_and_reclaim((void*)f_3992,c,av);}
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
t4=C_i_check_string_2(t2,lf[297]);
t5=C_i_pairp(t3);
t6=(C_truep(t5)?C_slot(t3,C_fix(0)):lf[294]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4006,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=C_eqp(t6,lf[294]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4013,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:769: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[192]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[192]+1);
av2[1]=t9;
av2[2]=t2;
av2[3]=lf[297];
tp(4,av2);}}
else{
t9=C_eqp(t6,lf[295]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4023,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:770: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[192]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[192]+1);
av2[1]=t10;
av2[2]=t2;
av2[3]=lf[297];
tp(4,av2);}}
else{
/* posix-common.scm:743: ##sys#error */
t10=*((C_word*)lf[97]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t10;
av2[1]=t7;
av2[2]=lf[296];
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}}}

/* k4004 in chicken.process#open-output-pipe in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_4006(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_4006,c,av);}
/* posix-common.scm:765: check */
f_3933(((C_word*)t0)[3],lf[297],((C_word*)t0)[4],C_SCHEME_FALSE,t1);}

/* k4011 in chicken.process#open-output-pipe in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_4013(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,5)))){
C_save_and_reclaim((void *)f_4013,c,av);}
a=C_alloc(2);
t2=open_text_output_pipe(&a,1,t1);
/* posix-common.scm:765: check */
f_3933(((C_word*)t0)[3],lf[297],((C_word*)t0)[4],C_SCHEME_FALSE,t2);}

/* k4021 in chicken.process#open-output-pipe in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_4023(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,5)))){
C_save_and_reclaim((void *)f_4023,c,av);}
a=C_alloc(2);
t2=open_binary_output_pipe(&a,1,t1);
/* posix-common.scm:765: check */
f_3933(((C_word*)t0)[3],lf[297],((C_word*)t0)[4],C_SCHEME_FALSE,t2);}

/* chicken.process#close-input-pipe in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_4032(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4032,c,av);}
a=C_alloc(4);
t3=C_i_check_port_2(t2,C_fix(1),C_SCHEME_TRUE,lf[298]);
t4=close_pipe(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4039,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_eqp(C_fix(-1),t4);
if(C_truep(t6)){
/* posix-common.scm:777: posix-error */
t7=lf[185];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=lf[190];
av2[3]=lf[298];
av2[4]=lf[299];
av2[5]=t2;
f_2577(6,av2);}}
else{
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k4037 in chicken.process#close-input-pipe in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_4039(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4039,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.process#close-output-pipe in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_4047(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4047,c,av);}
a=C_alloc(4);
t3=C_i_check_port_2(t2,C_fix(2),C_SCHEME_TRUE,lf[300]);
t4=close_pipe(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4054,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_eqp(C_fix(-1),t4);
if(C_truep(t6)){
/* posix-common.scm:784: posix-error */
t7=lf[185];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=lf[190];
av2[3]=lf[300];
av2[4]=lf[301];
av2[5]=t2;
f_2577(6,av2);}}
else{
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k4052 in chicken.process#close-output-pipe in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_4054(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4054,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.process#with-input-from-pipe in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_4062(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +4,c,4)))){
C_save_and_reclaim((void*)f_4062,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+4);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4066,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[120]+1);
av2[3]=t2;
av2[4]=t4;
C_apply(5,av2);}}

/* k4064 in chicken.process#with-input-from-pipe in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_4066(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4066,c,av);}
a=C_alloc(19);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4071,a[2]=t5,a[3]=t3,a[4]=((C_word)li75),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4076,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word)li77),tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4091,a[2]=t3,a[3]=t5,a[4]=((C_word)li78),tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:790: ##sys#dynamic-wind */
t9=*((C_word*)lf[304]+1);{
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

/* a4070 in k4064 in chicken.process#with-input-from-pipe in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_4071(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4071,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[302]+1));
t3=C_mutate((C_word*)lf[302]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a4075 in k4064 in chicken.process#with-input-from-pipe in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_4076(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_4076,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4082,a[2]=((C_word*)t0)[2],a[3]=((C_word)li76),tmp=(C_word)a,a+=4,tmp);
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

/* a4081 in a4075 in k4064 in chicken.process#with-input-from-pipe in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_4082(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_4082,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4086,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:793: chicken.process#close-input-pipe */
t4=*((C_word*)lf[117]+1);{
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

/* k4084 in a4081 in a4075 in k4064 in chicken.process#with-input-from-pipe in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_4086(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4086,c,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[303]+1);
av2[3]=((C_word*)t0)[3];
C_apply(4,av2);}}

/* a4090 in k4064 in chicken.process#with-input-from-pipe in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_4091(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4091,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[302]+1));
t3=C_mutate((C_word*)lf[302]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.process#call-with-output-pipe in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_4096(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +4,c,4)))){
C_save_and_reclaim((void*)f_4096,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+4);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4100,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[121]+1);
av2[3]=t2;
av2[4]=t4;
C_apply(5,av2);}}

/* k4098 in chicken.process#call-with-output-pipe in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_4100(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_4100,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4105,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word)li80),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4111,a[2]=t1,a[3]=((C_word)li81),tmp=(C_word)a,a+=4,tmp);
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

/* a4104 in k4098 in chicken.process#call-with-output-pipe in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_4105(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4105,c,av);}
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

/* a4110 in k4098 in chicken.process#call-with-output-pipe in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_4111(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_4111,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4115,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:802: chicken.process#close-output-pipe */
t4=*((C_word*)lf[118]+1);{
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

/* k4113 in a4110 in k4098 in chicken.process#call-with-output-pipe in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_4115(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4115,c,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[303]+1);
av2[3]=((C_word*)t0)[3];
C_apply(4,av2);}}

/* chicken.process#call-with-input-pipe in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_4120(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +4,c,4)))){
C_save_and_reclaim((void*)f_4120,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+4);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4124,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[120]+1);
av2[3]=t2;
av2[4]=t4;
C_apply(5,av2);}}

/* k4122 in chicken.process#call-with-input-pipe in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_4124(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_4124,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4129,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word)li83),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4135,a[2]=t1,a[3]=((C_word)li84),tmp=(C_word)a,a+=4,tmp);
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

/* a4128 in k4122 in chicken.process#call-with-input-pipe in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_4129(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4129,c,av);}
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

/* a4134 in k4122 in chicken.process#call-with-input-pipe in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_4135(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_4135,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4139,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:811: chicken.process#close-input-pipe */
t4=*((C_word*)lf[117]+1);{
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

/* k4137 in a4134 in k4122 in chicken.process#call-with-input-pipe in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_4139(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4139,c,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[303]+1);
av2[3]=((C_word*)t0)[3];
C_apply(4,av2);}}

/* chicken.process#with-output-to-pipe in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_4144(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +4,c,4)))){
C_save_and_reclaim((void*)f_4144,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+4);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4148,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[121]+1);
av2[3]=t2;
av2[4]=t4;
C_apply(5,av2);}}

/* k4146 in chicken.process#with-output-to-pipe in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_4148(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4148,c,av);}
a=C_alloc(19);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4153,a[2]=t5,a[3]=t3,a[4]=((C_word)li86),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4158,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word)li88),tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4173,a[2]=t3,a[3]=t5,a[4]=((C_word)li89),tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:817: ##sys#dynamic-wind */
t9=*((C_word*)lf[304]+1);{
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

/* a4152 in k4146 in chicken.process#with-output-to-pipe in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_4153(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4153,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[305]+1));
t3=C_mutate((C_word*)lf[305]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a4157 in k4146 in chicken.process#with-output-to-pipe in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_4158(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_4158,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4164,a[2]=((C_word*)t0)[2],a[3]=((C_word)li87),tmp=(C_word)a,a+=4,tmp);
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

/* a4163 in a4157 in k4146 in chicken.process#with-output-to-pipe in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_4164(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_4164,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4168,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:820: chicken.process#close-output-pipe */
t4=*((C_word*)lf[118]+1);{
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

/* k4166 in a4163 in a4157 in k4146 in chicken.process#with-output-to-pipe in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_4168(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4168,c,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[303]+1);
av2[3]=((C_word*)t0)[3];
C_apply(4,av2);}}

/* a4172 in k4146 in chicken.process#with-output-to-pipe in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_4173(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4173,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[305]+1));
t3=C_mutate((C_word*)lf[305]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.file.posix#file-open */
static void C_ccall f_4182(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +6,c,3)))){
C_save_and_reclaim((void*)f_4182,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+6);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
t5=C_i_pairp(t4);
t6=(C_truep(t5)?C_get_rest_arg(c,4,av,4,t0):((C_word*)t0)[2]);
t7=C_i_check_string_2(t2,lf[306]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4192,a[2]=t3,a[3]=t6,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm:524: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[203]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[203]+1);
av2[1]=t8;
av2[2]=t3;
av2[3]=lf[306];
tp(4,av2);}}

/* k4190 in chicken.file.posix#file-open */
static void C_ccall f_4192(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4192,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4195,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm:525: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[203]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[203]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[306];
tp(4,av2);}}

/* k4193 in k4190 in chicken.file.posix#file-open */
static void C_ccall f_4195(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4195,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4199,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm:526: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[192]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[192]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=lf[306];
tp(4,av2);}}

/* k4197 in k4193 in k4190 in chicken.file.posix#file-open */
static void C_ccall f_4199(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4199,c,av);}
a=C_alloc(10);
t2=C_open(t1,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4202,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4208,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm:528: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[95]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[95]+1);
av2[1]=t5;
tp(2,av2);}}
else{
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k4200 in k4197 in k4193 in k4190 in chicken.file.posix#file-open */
static void C_ccall f_4202(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4202,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4206 in k4197 in k4193 in k4190 in chicken.file.posix#file-open */
static void C_ccall f_4208(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4208,c,av);}
/* posixwin.scm:529: ##sys#signal-hook */
t2=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[190];
av2[3]=lf[306];
av2[4]=lf[307];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
av2[7]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(8,av2);}}

/* chicken.file.posix#file-close */
static void C_ccall f_4217(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_4217,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4221,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:534: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[203]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[203]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[309];
tp(4,av2);}}

/* k4219 in chicken.file.posix#file-close */
static void C_ccall f_4221(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4221,c,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4226,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li92),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];{
C_word *av2=av;
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
f_4226(2,av2);}}

/* loop in k4219 in chicken.file.posix#file-close */
static void C_ccall f_4226(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_4226,c,av);}
if(C_truep(C_fixnum_lessp(C_close(((C_word*)t0)[2]),C_fix(0)))){
t2=C_eqp(C_fix((C_word)errno),C_fix((C_word)EINTR));
if(C_truep(t2)){
/* posixwin.scm:538: ##sys#dispatch-interrupt */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[308]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[308]+1);
av2[1]=t1;
av2[2]=((C_word*)((C_word*)t0)[3])[1];
tp(3,av2);}}
else{
/* posixwin.scm:540: posix-error */
t3=lf[185];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=lf[190];
av2[3]=lf[309];
av2[4]=lf[310];
av2[5]=((C_word*)t0)[2];
f_2577(6,av2);}}}
else{
t2=C_SCHEME_UNDEFINED;
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* chicken.file.posix#file-read */
static void C_ccall f_4248(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +6,c,3)))){
C_save_and_reclaim((void*)f_4248,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+6);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4252,a[2]=t2,a[3]=t3,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm:544: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[203]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[203]+1);
av2[1]=t5;
av2[2]=t2;
av2[3]=lf[311];
tp(4,av2);}}

/* k4250 in chicken.file.posix#file-read */
static void C_ccall f_4252(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4252,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4255,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm:545: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[203]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[203]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[311];
tp(4,av2);}}

/* k4253 in k4250 in chicken.file.posix#file-read */
static void C_ccall f_4255(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4255,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4258,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_u_i_car(((C_word*)t0)[5]);
f_4258(2,av2);}}
else{
/* posixwin.scm:546: scheme#make-string */
t3=*((C_word*)lf[314]+1);{
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

/* k4256 in k4253 in k4250 in chicken.file.posix#file-read */
static void C_ccall f_4258(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_4258,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4261,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_blockp(t1))){
if(C_truep(C_byteblockp(t1))){
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_4261(2,av2);}}
else{
/* posixwin.scm:548: ##sys#signal-hook */
t3=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[193];
av2[3]=lf[311];
av2[4]=lf[313];
av2[5]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}}
else{
/* posixwin.scm:548: ##sys#signal-hook */
t3=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[193];
av2[3]=lf[311];
av2[4]=lf[313];
av2[5]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}}

/* k4259 in k4256 in k4253 in k4250 in chicken.file.posix#file-read */
static void C_ccall f_4261(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_4261,c,av);}
a=C_alloc(11);
t2=C_read(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4264,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4273,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:551: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[95]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[95]+1);
av2[1]=t5;
tp(2,av2);}}
else{
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list2(&a,2,((C_word*)t0)[3],t2);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k4262 in k4259 in k4256 in k4253 in k4250 in chicken.file.posix#file-read */
static void C_ccall f_4264(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_4264,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list2(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4271 in k4259 in k4256 in k4253 in k4250 in chicken.file.posix#file-read */
static void C_ccall f_4273(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_4273,c,av);}
/* posixwin.scm:552: ##sys#signal-hook */
t2=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[190];
av2[3]=lf[311];
av2[4]=lf[312];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}

/* chicken.file.posix#file-write */
static void C_ccall f_4291(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +6,c,3)))){
C_save_and_reclaim((void*)f_4291,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+6);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4295,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm:557: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[203]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[203]+1);
av2[1]=t5;
av2[2]=t2;
av2[3]=lf[315];
tp(4,av2);}}

/* k4293 in chicken.file.posix#file-write */
static void C_ccall f_4295(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_4295,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4298,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_blockp(((C_word*)t0)[3]))){
if(C_truep(C_byteblockp(((C_word*)t0)[3]))){
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_4298(2,av2);}}
else{
/* posixwin.scm:559: ##sys#signal-hook */
t3=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[193];
av2[3]=lf[315];
av2[4]=lf[317];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}}
else{
/* posixwin.scm:559: ##sys#signal-hook */
t3=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[193];
av2[3]=lf[315];
av2[4]=lf[317];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}}

/* k4296 in k4293 in chicken.file.posix#file-write */
static void C_ccall f_4298(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4298,c,av);}
a=C_alloc(6);
t2=C_i_pairp(((C_word*)t0)[2]);
t3=(C_truep(t2)?C_u_i_car(((C_word*)t0)[2]):C_block_size(((C_word*)t0)[3]));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4304,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm:561: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[203]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[203]+1);
av2[1]=t4;
av2[2]=t3;
av2[3]=lf[315];
tp(4,av2);}}

/* k4302 in k4296 in k4293 in chicken.file.posix#file-write */
static void C_ccall f_4304(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4304,c,av);}
a=C_alloc(9);
t2=C_write(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4307,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4313,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:564: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[95]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[95]+1);
av2[1]=t5;
tp(2,av2);}}
else{
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k4305 in k4302 in k4296 in k4293 in chicken.file.posix#file-write */
static void C_ccall f_4307(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4307,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4311 in k4302 in k4296 in k4293 in chicken.file.posix#file-write */
static void C_ccall f_4313(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_4313,c,av);}
/* posixwin.scm:565: ##sys#signal-hook */
t2=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[190];
av2[3]=lf[315];
av2[4]=lf[316];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}

/* chicken.file.posix#file-mkstemp */
static void C_ccall f_4331(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(40,c,2)))){
C_save_and_reclaim((void *)f_4331,c,av);}
a=C_alloc(40);
t3=C_i_check_string_2(t2,lf[318]);
t4=lf[319];
t5=C_block_size(t4);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)va6114,a[2]=t5,a[3]=t4,a[4]=t2,a[5]=t1,a[6]=((C_word)li100),tmp=(C_word)a,a+=7,tmp);
t7=t6;
va6114(t7,C_s_a_i_times(&a,2,t5,t5));}

/* k4342 */
static void C_ccall f_4344(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(23,c,2)))){
C_save_and_reclaim((void *)f_4344,c,av);}
a=C_alloc(23);
t2=C_block_size(t1);
t3=C_fixnum_difference(t2,C_fix(1));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4459,a[2]=t1,a[3]=((C_word)li96),tmp=(C_word)a,a+=4,tmp);
t5=(
  f_4459(t4,t3)
);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4353,a[2]=t2,a[3]=t5,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4446,a[2]=t6,a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4450,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:581: chicken.pathname#pathname-directory */
t9=*((C_word*)lf[325]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* k4351 in k4342 */
static void C_ccall f_4353(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_4353,c,av);}
a=C_alloc(13);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4358,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t3,a[9]=((C_word*)t0)[8],a[10]=((C_word)li99),tmp=(C_word)a,a+=11,tmp));
t5=((C_word*)t3)[1];
f_4358(t5,((C_word*)t0)[9],C_fix(1));}

/* loop in k4351 in k4342 */
static void C_fcall f_4358(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,3)))){
C_save_and_reclaim_args((void *)trf_4358,3,t0,t1,t2);}
a=C_alloc(15);
t3=C_fixnum_difference(((C_word*)t0)[2],C_fix(1));
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4405,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word)li97),tmp=(C_word)a,a+=7,tmp);
t5=(
  f_4405(t4,t3)
);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4366,a[2]=t2,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=t1,a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* posixwin.scm:595: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[192]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[192]+1);
av2[1]=t6;
av2[2]=((C_word*)t0)[6];
av2[3]=lf[306];
tp(4,av2);}}

/* k4364 in loop in k4351 in k4342 */
static void C_ccall f_4366(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_4366,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)va6106,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word)li98),tmp=(C_word)a,a+=10,tmp);
t3=t2;
va6106(t3,C_s_a_i_bitwise_ior(&a,2,*((C_word*)lf[53]+1),*((C_word*)lf[46]+1)));}

/* suffix-loop in loop in k4351 in k4342 */
static C_word C_fcall f_4405(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
t2=C_i_string_ref(((C_word*)t0)[3],C_rand(((C_word*)t0)[4]));
t3=C_i_string_set(((C_word*)t0)[5],t1,t2);
t5=C_fixnum_difference(t1,C_fix(1));
t1=t5;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* k4444 in k4342 */
static void C_ccall f_4446(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_4446,c,av);}
if(C_truep(C_i_not(t1))){
/* posixwin.scm:585: ##sys#signal-hook */
t2=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[190];
av2[3]=lf[318];
av2[4]=lf[321];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}
else{
t2=C_eqp(((C_word*)t0)[4],((C_word*)t0)[5]);
if(C_truep(t2)){
/* posixwin.scm:587: ##sys#signal-hook */
t3=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[190];
av2[3]=lf[318];
av2[4]=lf[322];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
f_4353(2,av2);}}}}

/* k4448 in k4342 */
static void C_ccall f_4450(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_4450,c,av);}
if(C_truep(t1)){
/* posixwin.scm:581: ##sys#file-exists? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[323]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[323]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
av2[5]=lf[318];
tp(6,av2);}}
else{
/* posixwin.scm:581: ##sys#file-exists? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[323]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[323]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[324];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
av2[5]=lf[318];
tp(6,av2);}}}

/* loop in k4342 */
static C_word C_fcall f_4459(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
t2=C_fixnum_greater_or_equal_p(t1,C_fix(0));
t3=(C_truep(t2)?C_eqp(C_i_string_ref(((C_word*)t0)[2],t1),C_make_character(88)):C_SCHEME_FALSE);
if(C_truep(t3)){
t5=C_fixnum_difference(t1,C_fix(1));
t1=t5;
goto loop;}
else{
return(C_fixnum_plus(t1,C_fix(1)));}}

/* chicken.process#create-pipe */
static void C_ccall f_4490(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4490,c,av);}
a=C_alloc(6);
t2=C_rest_nullp(c,2);
t3=(C_truep(t2)?C_fixnum_or(*((C_word*)lf[45]+1),*((C_word*)lf[50]+1)):C_get_rest_arg(c,2,av,2,t0));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4497,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fixnum_lessp(C_pipe(C_SCHEME_FALSE,t3),C_fix(0)))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4506,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:615: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[95]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[95]+1);
av2[1]=t5;
tp(2,av2);}}
else{
/* posixwin.scm:617: scheme#values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=C_fix((C_word)C_pipefds[ 0 ]);
av2[3]=C_fix((C_word)C_pipefds[ 1 ]);
C_values(4,av2);}}}

/* k4495 in chicken.process#create-pipe */
static void C_ccall f_4497(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4497,c,av);}
/* posixwin.scm:617: scheme#values */{
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

/* k4504 in chicken.process#create-pipe */
static void C_ccall f_4506(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4506,c,av);}
/* posixwin.scm:616: ##sys#signal-hook */
t2=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[190];
av2[3]=lf[327];
av2[4]=lf[328];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* chicken.posix#duplicate-fileno */
static void C_ccall f_4552(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,3)))){
C_save_and_reclaim((void*)f_4552,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4556,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:672: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[203]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[203]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[329];
tp(4,av2);}}

/* k4554 in chicken.posix#duplicate-fileno */
static void C_ccall f_4556(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_4556,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4559,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(((C_word*)t0)[4]))){
t3=t2;
f_4559(t3,C_dup(((C_word*)t0)[3]));}
else{
t3=C_i_car(((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4580,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:676: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[203]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[203]+1);
av2[1]=t4;
av2[2]=t3;
av2[3]=lf[251];
tp(4,av2);}}}

/* k4557 in k4554 in chicken.posix#duplicate-fileno */
static void C_fcall f_4559(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_4559,2,t0,t1);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4562,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4568,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:679: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[95]+1));
C_word av2[2];
av2[0]=*((C_word*)lf[95]+1);
av2[1]=t3;
tp(2,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4560 in k4557 in k4554 in chicken.posix#duplicate-fileno */
static void C_ccall f_4562(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4562,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4566 in k4557 in k4554 in chicken.posix#duplicate-fileno */
static void C_ccall f_4568(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_4568,c,av);}
/* posixwin.scm:680: ##sys#signal-hook */
t2=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[190];
av2[3]=lf[251];
av2[4]=lf[330];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k4578 in k4554 in chicken.posix#duplicate-fileno */
static void C_ccall f_4580(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4580,c,av);}
t2=((C_word*)t0)[2];
f_4559(t2,C_dup2(((C_word*)t0)[3],((C_word*)t0)[4]));}

/* chicken.time.posix#local-timezone-abbreviation */
static void C_ccall f_4582(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4582,c,av);}
a=C_alloc(5);
t2=C_a_i_bytevector(&a,1,C_fix(3));
/* posixwin.scm:687: ##sys#peek-c-string */
t3=*((C_word*)lf[187]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=stub1387(t2);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* loop in chicken.posix#quote-arg-string */
static C_word C_fcall f_4603(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
t2=C_eqp(t1,((C_word*)t0)[2]);
if(C_truep(t2)){
return(C_SCHEME_FALSE);}
else{
t3=C_i_string_ref(((C_word*)t0)[3],t1);
if(C_truep(C_u_i_char_whitespacep(t3))){
return(C_SCHEME_TRUE);}
else{
t5=C_fixnum_plus(t1,C_fix(1));
t1=t5;
goto loop;}}}

/* chicken.posix#quote-arg-string */
static void C_ccall f_4628(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_4628,c,av);}
a=C_alloc(5);
t3=C_i_string_length(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4603,a[2]=t3,a[3]=t2,a[4]=((C_word)li105),tmp=(C_word)a,a+=5,tmp);
t5=(
  f_4603(t4,C_fix(0))
);
if(C_truep(t5)){
/* posixwin.scm:721: scheme#string-append */
t6=*((C_word*)lf[106]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t1;
av2[2]=lf[332];
av2[3]=t2;
av2[4]=lf[333];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* chicken.process#process-execute */
static void C_ccall f_4640(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4640,c,av);}
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
t12=(C_truep(t10)?(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4681,a[2]=((C_word)li107),tmp=(C_word)a,a+=3,tmp):lf[331]);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4667,a[2]=t2,a[3]=((C_word)li108),tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:726: call-with-exec-args */
t14=lf[288];
f_3776(t14,t1,lf[334],t2,t12,t4,t7,t13);}

/* a4666 in chicken.process#process-execute */
static void C_ccall f_4667(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_4667,c,av);}
t5=C_flushall();
t6=(C_truep(t4)?C_u_i_execve(t2,t3,t4):C_u_i_execvp(t2,t3));
t7=C_eqp(t6,C_fix(-1));
if(C_truep(t7)){
/* posixwin.scm:734: posix-error */
t8=lf[185];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t8;
av2[1]=t1;
av2[2]=lf[93];
av2[3]=lf[334];
av2[4]=lf[335];
av2[5]=((C_word*)t0)[2];
f_2577(6,av2);}}
else{
t8=C_SCHEME_UNDEFINED;
t9=t1;{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}

/* f_4681 in chicken.process#process-execute */
static void C_ccall f_4681(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4681,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.process#process-spawn */
static void C_ccall f_4720(C_word c,C_word *av){
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
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_4720,c,av);}
a=C_alloc(11);
t4=C_rest_nullp(c,4);
t5=(C_truep(t4)?C_SCHEME_END_OF_LIST:C_get_rest_arg(c,4,av,4,t0));
t6=C_rest_nullp(c,4);
t7=C_rest_nullp(c,5);
t8=(C_truep(t7)?C_SCHEME_FALSE:C_get_rest_arg(c,5,av,4,t0));
t9=C_rest_nullp(c,5);
t10=C_rest_nullp(c,6);
t11=(C_truep(t10)?C_SCHEME_FALSE:C_get_rest_arg(c,6,av,4,t0));
t12=C_rest_nullp(c,6);
t13=(C_truep(t11)?(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4764,a[2]=((C_word)li110),tmp=(C_word)a,a+=3,tmp):lf[331]);
t14=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4745,a[2]=t2,a[3]=t3,a[4]=t1,a[5]=t13,a[6]=t5,a[7]=t8,tmp=(C_word)a,a+=8,tmp);
/* posixwin.scm:739: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[203]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[203]+1);
av2[1]=t14;
av2[2]=t2;
av2[3]=lf[336];
tp(4,av2);}}

/* k4743 in chicken.process#process-spawn */
static void C_ccall f_4745(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,7)))){
C_save_and_reclaim((void *)f_4745,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4750,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li111),tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:740: call-with-exec-args */
t3=lf[288];
f_3776(t3,((C_word*)t0)[4],lf[336],((C_word*)t0)[3],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t2);}

/* a4749 in k4743 in chicken.process#process-spawn */
static void C_ccall f_4750(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_4750,c,av);}
a=C_alloc(4);
t5=C_flushall();
t6=(C_truep(t4)?C_u_i_spawnvpe(((C_word*)t0)[2],t2,t3,t4):C_u_i_spawnvp(((C_word*)t0)[2],t2,t3));
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4757,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=C_eqp(t6,C_fix(-1));
if(C_truep(t8)){
/* posixwin.scm:748: posix-error */
t9=lf[185];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t9;
av2[1]=t7;
av2[2]=lf[93];
av2[3]=lf[336];
av2[4]=lf[337];
av2[5]=((C_word*)t0)[3];
f_2577(6,av2);}}
else{
t9=t1;{
C_word *av2=av;
av2[0]=t9;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}

/* k4755 in a4749 in k4743 in chicken.process#process-spawn */
static void C_ccall f_4757(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4757,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4764 in chicken.process#process-spawn */
static void C_ccall f_4764(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4764,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.posix#shell-command */
static void C_fcall f_4803(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_4803,2,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4807,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:754: chicken.process-context#get-environment-variable */
t4=*((C_word*)lf[340]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[341];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4805 in chicken.posix#shell-command */
static void C_ccall f_4807(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_4807,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_get_shlcmd())){
/* ##sys#peek-c-string */
t2=*((C_word*)lf[187]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_mpointer(&a,(void*)C_shlcmd);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4819,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:758: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[95]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[95]+1);
av2[1]=t2;
tp(2,av2);}}}}

/* k4817 in k4805 in chicken.posix#shell-command */
static void C_ccall f_4819(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4819,c,av);}
/* posixwin.scm:759: ##sys#error */
t2=*((C_word*)lf[97]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[339];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process#process-run */
static void C_ccall f_4830(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +4,c,4)))){
C_save_and_reclaim((void*)f_4830,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+4);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
t4=C_i_pairp(t3);
t5=(C_truep(t4)?C_get_rest_arg(c,3,av,3,t0):C_SCHEME_FALSE);
if(C_truep(t5)){
/* posixwin.scm:768: chicken.process#process-spawn */
t6=*((C_word*)lf[113]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t1;
av2[2]=*((C_word*)lf[130]+1);
av2[3]=t2;
av2[4]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4847,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:772: shell-command */
f_4803(t6,lf[343]);}}

/* k4845 in chicken.process#process-run */
static void C_ccall f_4847(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4847,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,lf[342],((C_word*)t0)[2]);
/* posixwin.scm:770: chicken.process#process-spawn */
t3=*((C_word*)lf[113]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=*((C_word*)lf[130]+1);
av2[3]=t1;
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4860 in k4984 in k4980 in k4976 in k4972 in k4928 in a5103 in k5097 in k5094 in %process */
static void C_ccall f_4862(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_4862,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_4866,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],tmp=(C_word)a,a+=16,tmp);
if(C_truep(((C_word*)t0)[14])){
/* posixwin.scm:796: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[192]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[192]+1);
av2[1]=t2;
av2[2]=C_i_foreign_string_argumentp(((C_word*)t0)[14]);
tp(3,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_4866(2,av2);}}}

/* k4864 in k4860 in k4984 in k4980 in k4976 in k4972 in k4928 in a5103 in k5097 in k5094 in %process */
static void C_ccall f_4866(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4866,c,av);}
a=C_alloc(7);
t2=(C_truep(((C_word*)t0)[2])?C_i_foreign_pointer_argumentp(((C_word*)t0)[2]):C_SCHEME_FALSE);
t3=(C_truep(((C_word*)t0)[3])?C_i_foreign_pointer_argumentp(((C_word*)t0)[3]):C_SCHEME_FALSE);
t4=(C_truep(((C_word*)t0)[4])?C_i_foreign_pointer_argumentp(((C_word*)t0)[4]):C_SCHEME_FALSE);
t5=(C_truep(((C_word*)t0)[5])?C_i_foreign_pointer_argumentp(((C_word*)t0)[5]):C_SCHEME_FALSE);
t6=C_i_foreign_fixnum_argumentp(((C_word*)t0)[6]);
if(C_truep(stub1476(C_SCHEME_UNDEFINED,((C_word*)t0)[7],t1,C_SCHEME_FALSE,t2,t3,t4,t5,t6))){
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4947,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[12],tmp=(C_word)a,a+=7,tmp);
/* posixwin.scm:816: chicken.file.posix#open-input-file* */
t8=*((C_word*)lf[42]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[13])));
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4967,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[14],a[4]=((C_word*)t0)[15],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:824: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[95]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[95]+1);
av2[1]=t7;
tp(2,av2);}}}

/* k4928 in a5103 in k5097 in k5094 in %process */
static void C_ccall f_4930(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(23,c,5)))){
C_save_and_reclaim((void *)f_4930,c,av);}
a=C_alloc(23);
t2=C_a_i_bytevector(&a,1,C_fix(1));
t3=((*(int *)C_data_pointer(t2))=C_unfix(C_fix(-1)),C_SCHEME_UNDEFINED);
t4=C_a_i_bytevector(&a,1,C_fix(1));
t5=((*(int *)C_data_pointer(t4))=C_unfix(C_fix(-1)),C_SCHEME_UNDEFINED);
t6=C_a_i_bytevector(&a,1,C_fix(1));
t7=((*(int *)C_data_pointer(t6))=C_unfix(C_fix(-1)),C_SCHEME_UNDEFINED);
t8=C_a_i_bytevector(&a,1,C_fix(1));
t9=((*(int *)C_data_pointer(t8))=C_unfix(C_fix(-1)),C_SCHEME_UNDEFINED);
t10=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4974,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t8,a[6]=t4,a[7]=t6,a[8]=((C_word*)t0)[4],a[9]=t1,a[10]=((C_word*)t0)[5],tmp=(C_word)a,a+=11,tmp);
/* posixwin.scm:811: ##sys#make-locative */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[345]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[345]+1);
av2[1]=t10;
av2[2]=t2;
av2[3]=C_fix(0);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[346];
tp(6,av2);}}

/* k4945 in k4864 in k4860 in k4984 in k4980 in k4976 in k4972 in k4928 in a5103 in k5097 in k5094 in %process */
static void C_ccall f_4947(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4947,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4951,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* posixwin.scm:818: chicken.file.posix#open-output-file* */
t3=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[6])));
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4949 in k4945 in k4864 in k4860 in k4984 in k4980 in k4976 in k4972 in k4928 in a5103 in k5097 in k5094 in %process */
static void C_ccall f_4951(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_4951,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4955,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
/* posixwin.scm:821: chicken.file.posix#open-input-file* */
t3=*((C_word*)lf[42]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[6])));
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
/* posixwin.scm:815: scheme#values */{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[4])));
av2[5]=C_SCHEME_FALSE;
C_values(6,av2);}}}

/* k4953 in k4949 in k4945 in k4864 in k4860 in k4984 in k4980 in k4976 in k4972 in k4928 in a5103 in k5097 in k5094 in %process */
static void C_ccall f_4955(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_4955,c,av);}
/* posixwin.scm:815: scheme#values */{
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
av2[4]=C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[5])));
av2[5]=t1;
C_values(6,av2);}}

/* k4965 in k4864 in k4860 in k4984 in k4980 in k4976 in k4972 in k4928 in a5103 in k5097 in k5094 in %process */
static void C_ccall f_4967(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_4967,c,av);}
/* posixwin.scm:825: ##sys#signal-hook */
t2=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[93];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[344];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k4972 in k4928 in a5103 in k5097 in k5094 in %process */
static void C_ccall f_4974(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,5)))){
C_save_and_reclaim((void *)f_4974,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4978,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* posixwin.scm:812: ##sys#make-locative */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[345]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[345]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=C_fix(0);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[346];
tp(6,av2);}}

/* k4976 in k4972 in k4928 in a5103 in k5097 in k5094 in %process */
static void C_ccall f_4978(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,5)))){
C_save_and_reclaim((void *)f_4978,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4982,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* posixwin.scm:812: ##sys#make-locative */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[345]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[345]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[8];
av2[3]=C_fix(0);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[346];
tp(6,av2);}}

/* k4980 in k4976 in k4972 in k4928 in a5103 in k5097 in k5094 in %process */
static void C_ccall f_4982(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,5)))){
C_save_and_reclaim((void *)f_4982,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4986,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* posixwin.scm:812: ##sys#make-locative */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[345]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[345]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=C_fix(0);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[346];
tp(6,av2);}}

/* k4984 in k4980 in k4976 in k4972 in k4928 in a5103 in k5097 in k5094 in %process */
static void C_ccall f_4986(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_4986,c,av);}
a=C_alloc(15);
t2=(C_truep(((C_word*)t0)[2])?C_fix(0):C_fix(4));
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_4862,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[2],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],a[14]=((C_word*)t0)[12],tmp=(C_word)a,a+=15,tmp);
if(C_truep(((C_word*)t0)[13])){
/* posixwin.scm:796: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[192]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[192]+1);
av2[1]=t3;
av2[2]=C_i_foreign_string_argumentp(((C_word*)t0)[13]);
tp(3,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_4862(2,av2);}}}

/* k5004 in a5103 in k5097 in k5094 in %process */
static void C_ccall f_5006(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5006,c,av);}
/* posixwin.scm:803: chicken.string#string-intersperse */
t2=*((C_word*)lf[347]+1);{
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

/* map-loop1521 in a5103 in k5097 in k5094 in %process */
static void C_fcall f_5014(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_5014,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5039,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm:806: g1527 */
t4=lf[331];{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
f_4628(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5037 in map-loop1521 in a5103 in k5097 in k5094 in %process */
static void C_ccall f_5039(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5039,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_5014(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* %process */
static void C_fcall f_5053(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
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
C_word t18;
C_word t19;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(29,0,3)))){
C_save_and_reclaim_args((void *)trf_5053,7,t1,t2,t3,t4,t5,t6,t7);}
a=C_alloc(29);
t8=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5055,a[2]=t2,a[3]=((C_word)li117),tmp=(C_word)a,a+=4,tmp);
t12=C_i_check_string_2(((C_word*)t8)[1],t2);
t13=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5096,a[2]=t8,a[3]=t9,a[4]=t10,a[5]=t3,a[6]=t2,a[7]=t1,a[8]=t6,tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t9)[1])){
/* posixwin.scm:836: chkstrlst */
t14=t11;
f_5055(t14,t13,((C_word*)t9)[1]);}
else{
t14=C_set_block_item(t10,0,C_SCHEME_TRUE);
t15=((C_word*)t8)[1];
t16=C_a_i_list2(&a,2,lf[342],t15);
t17=C_set_block_item(t9,0,t16);
t18=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5135,a[2]=t8,a[3]=t13,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:840: shell-command */
f_4803(t18,t2);}}

/* chkstrlst in %process */
static void C_fcall f_5055(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_5055,3,t0,t1,t2);}
a=C_alloc(8);
t3=C_i_check_list_2(t2,((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5060,a[2]=((C_word*)t0)[2],a[3]=((C_word)li115),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5069,a[2]=t4,a[3]=((C_word)li116),tmp=(C_word)a,a+=4,tmp);
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=(
  f_5069(t5,t2)
);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* g1598 in chkstrlst in %process */
static C_word C_fcall f_5060(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_i_check_string_2(t1,((C_word*)t0)[2]));}

/* for-each-loop1597 in chkstrlst in %process */
static C_word C_fcall f_5069(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_pairp(t1))){
t2=(
/* posixwin.scm:833: g1598 */
  f_5060(((C_word*)t0)[2],C_slot(t1,C_fix(0)))
);
t4=C_slot(t1,C_fix(1));
t1=t4;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* k5094 in %process */
static void C_ccall f_5096(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_5096,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5099,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[8])){
/* posixwin.scm:841: check-environment-list */
f_3727(t2,((C_word*)t0)[8],((C_word*)t0)[6]);}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_5099(2,av2);}}}

/* k5097 in k5094 in %process */
static void C_ccall f_5099(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,6)))){
C_save_and_reclaim((void *)f_5099,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5104,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li119),tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5110,a[2]=((C_word*)t0)[5],a[3]=((C_word)li120),tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:842: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[7];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* a5103 in k5097 in k5094 in %process */
static void C_ccall f_5104(C_word c,C_word *av){
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
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(28,c,3)))){
C_save_and_reclaim((void *)f_5104,c,av);}
a=C_alloc(28);
t2=((C_word*)((C_word*)t0)[2])[1];
t3=((C_word*)((C_word*)t0)[3])[1];
t4=C_a_i_list(&a,1,((C_word*)((C_word*)t0)[4])[1]);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=C_a_i_cons(&a,2,t2,t3);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4930,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[6],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5006,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t6)){
/* posixwin.scm:803: chicken.string#string-intersperse */
t10=*((C_word*)lf[347]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t10;
av2[1]=t8;
av2[2]=t7;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
t10=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t11=t10;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=((C_word*)t12)[1];
t14=lf[331];
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5014,a[2]=t12,a[3]=t16,a[4]=t13,a[5]=((C_word)li118),tmp=(C_word)a,a+=6,tmp));
t18=((C_word*)t16)[1];
f_5014(t18,t9,t7);}}

/* a5109 in k5097 in k5094 in %process */
static void C_ccall f_5110(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_5110,c,av);}
if(C_truep(((C_word*)t0)[2])){
/* posixwin.scm:845: scheme#values */{
C_word *av2=av;
av2[0]=0;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t4;
av2[5]=t5;
C_values(6,av2);}}
else{
/* posixwin.scm:846: scheme#values */{
C_word *av2=av;
av2[0]=0;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t4;
C_values(5,av2);}}}

/* k5133 in %process */
static void C_ccall f_5135(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5135,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_5096(2,av2);}}

/* chicken.process#process */
static void C_ccall f_5137(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5137,c,av);}
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=C_rest_nullp(c,3);
t6=C_rest_nullp(c,4);
t7=(C_truep(t6)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,3,t0));
t8=C_rest_nullp(c,4);
t9=C_rest_nullp(c,5);
t10=(C_truep(t9)?C_SCHEME_FALSE:C_get_rest_arg(c,5,av,3,t0));
if(C_truep(C_rest_nullp(c,5))){
/* posixwin.scm:849: %process */
f_5053(t1,lf[348],C_SCHEME_FALSE,t2,t4,t7,t10);}
else{
/* posixwin.scm:849: %process */
f_5053(t1,lf[348],C_SCHEME_FALSE,t2,t4,t7,t10);}}

/* chicken.process#process* */
static void C_ccall f_5197(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5197,c,av);}
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=C_rest_nullp(c,3);
t6=C_rest_nullp(c,4);
t7=(C_truep(t6)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,3,t0));
t8=C_rest_nullp(c,4);
t9=C_rest_nullp(c,5);
t10=(C_truep(t9)?C_SCHEME_FALSE:C_get_rest_arg(c,5,av,3,t0));
if(C_truep(C_rest_nullp(c,5))){
/* posixwin.scm:852: %process */
f_5053(t1,lf[349],C_SCHEME_TRUE,t2,t4,t7,t10);}
else{
/* posixwin.scm:852: %process */
f_5053(t1,lf[349],C_SCHEME_TRUE,t2,t4,t7,t10);}}

/* chicken.process-context.posix#current-user-name */
static void C_ccall f_5269(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5269,c,av);}
a=C_alloc(3);
if(C_truep(C_get_user_name())){
/* ##sys#peek-c-string */
t2=*((C_word*)lf[187]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=C_mpointer(&a,(void*)C_username);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5279,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:871: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[95]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[95]+1);
av2[1]=t2;
tp(2,av2);}}}

/* k5277 in chicken.process-context.posix#current-user-name */
static void C_ccall f_5279(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5279,c,av);}
/* posixwin.scm:872: ##sys#error */
t2=*((C_word*)lf[97]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[350];
av2[3]=lf[351];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.file.posix#create-fifo */
static void C_ccall f_5290(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5290,c,av);}
/* posixwin.scm:878: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[4];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process-context.posix#create-session */
static void C_ccall f_5296(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5296,c,av);}
/* posixwin.scm:879: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[181];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.file.posix#create-symbolic-link */
static void C_ccall f_5302(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5302,c,av);}
/* posixwin.scm:880: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[5];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process-context.posix#current-effective-group-id */
static void C_ccall f_5308(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5308,c,av);}
/* posixwin.scm:881: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[173];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process-context.posix#current-effective-user-id */
static void C_ccall f_5314(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5314,c,av);}
/* posixwin.scm:882: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[174];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process-context.posix#current-effective-user-name */
static void C_ccall f_5320(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5320,c,av);}
/* posixwin.scm:883: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[180];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process-context.posix#current-group-id */
static void C_ccall f_5326(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5326,c,av);}
/* posixwin.scm:884: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[175];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process-context.posix#current-user-id */
static void C_ccall f_5332(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5332,c,av);}
/* posixwin.scm:885: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[176];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.file.posix#file-control */
static void C_ccall f_5338(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5338,c,av);}
/* posixwin.scm:887: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[14];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.file.posix#file-link */
static void C_ccall f_5344(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5344,c,av);}
/* posixwin.scm:888: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[17];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.file.posix#file-lock */
static void C_ccall f_5350(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5350,c,av);}
/* posixwin.scm:889: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[18];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.file.posix#file-lock/blocking */
static void C_ccall f_5356(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5356,c,av);}
/* posixwin.scm:890: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[19];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.file.posix#file-select */
static void C_ccall f_5362(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5362,c,av);}
/* posixwin.scm:891: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[26];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.file.posix#file-test-lock */
static void C_ccall f_5368(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5368,c,av);}
/* posixwin.scm:892: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[27];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.file.posix#file-truncate */
static void C_ccall f_5374(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5374,c,av);}
/* posixwin.scm:893: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[28];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.file.posix#file-unlock */
static void C_ccall f_5380(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5380,c,av);}
/* posixwin.scm:894: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[29];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process-context.posix#parent-process-id */
static void C_ccall f_5386(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5386,c,av);}
/* posixwin.scm:895: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[178];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process#process-fork */
static void C_ccall f_5392(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5392,c,av);}
/* posixwin.scm:896: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[110];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process-context.posix#process-group-id */
static void C_ccall f_5398(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5398,c,av);}
/* posixwin.scm:897: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[182];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process#process-signal */
static void C_ccall f_5404(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5404,c,av);}
/* posixwin.scm:898: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[112];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.file.posix#read-symbolic-link */
static void C_ccall f_5410(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5410,c,av);}
/* posixwin.scm:899: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[6];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process.signal#set-alarm! */
static void C_ccall f_5416(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5416,c,av);}
/* posixwin.scm:900: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[134];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process-context.posix#set-root-directory! */
static void C_ccall f_5422(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5422,c,av);}
/* posixwin.scm:901: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[172];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process.signal#set-signal-mask! */
static void C_ccall f_5428(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5428,c,av);}
/* posixwin.scm:902: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[136];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process.signal#signal-mask */
static void C_ccall f_5434(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5434,c,av);}
/* posixwin.scm:903: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[138];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process.signal#signal-mask! */
static void C_ccall f_5440(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5440,c,av);}
/* posixwin.scm:904: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[139];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process.signal#signal-masked? */
static void C_ccall f_5446(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5446,c,av);}
/* posixwin.scm:905: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[140];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process.signal#signal-unmask! */
static void C_ccall f_5452(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5452,c,av);}
/* posixwin.scm:906: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[141];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process-context.posix#user-information */
static void C_ccall f_5458(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5458,c,av);}
/* posixwin.scm:907: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[183];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.time.posix#utc-time->seconds */
static void C_ccall f_5464(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5464,c,av);}
/* posixwin.scm:908: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[82];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.time.posix#string->time */
static void C_ccall f_5470(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5470,c,av);}
/* posixwin.scm:909: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[86];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.errno#errno */
static void C_ccall f_5488(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5488,c,av);}
/* posix.scm:374: ##sys#errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[354]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[354]+1);
av2[1]=t1;
tp(2,av2);}}

/* a5532 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_5533(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_5533,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5537,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:637: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[203]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[203]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[394];
tp(4,av2);}}

/* k5535 in a5532 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_5537(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5537,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_slot(*((C_word*)lf[270]+1),((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a5541 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_5542(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_5542,c,av);}
a=C_alloc(4);
t2=C_rest_nullp(c,2);
t3=(C_truep(t2)?C_SCHEME_FALSE:C_get_rest_arg(c,2,av,2,t0));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5549,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
/* posix-common.scm:562: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[203]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[203]+1);
av2[1]=t4;
av2[2]=t3;
av2[3]=lf[397];
tp(4,av2);}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_5549(2,av2);}}}

/* k5547 in a5541 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_5549(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5549,c,av);}
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

/* a5566 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_5567(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_5567,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5571,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:567: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[203]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[203]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[397];
tp(4,av2);}}

/* k5569 in a5566 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_5571(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5571,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_umask(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a5572 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_5573(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5573,c,av);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5577,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5589,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:403: chicken.base#port? */
t5=*((C_word*)lf[195]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5575 in a5572 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_5577(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_5577,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5580,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_lessp(t1,C_fix(0)))){
/* posix-common.scm:412: posix-error */
t3=lf[185];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[190];
av2[3]=lf[399];
av2[4]=lf[400];
av2[5]=((C_word*)t0)[3];
f_2577(6,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5578 in k5575 in a5572 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_5580(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5580,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5587 in a5572 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_5589(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_5589,c,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(7));
t3=C_eqp(t2,lf[232]);
if(C_truep(t3)){
t4=C_ftell(&a,1,((C_word*)t0)[2]);
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
f_5577(2,av2);}}
else{
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_fix(-1);
f_5577(2,av2);}}}
else{
if(C_truep(C_fixnump(((C_word*)t0)[2]))){
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_lseek(((C_word*)t0)[2],C_fix(0),C_fix((C_word)SEEK_CUR));
f_5577(2,av2);}}
else{
/* posix-common.scm:410: ##sys#signal-hook */
t2=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[193];
av2[3]=lf[399];
av2[4]=lf[401];
av2[5]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}}

/* a5609 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_5610(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_5610,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5614,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:326: stat */
f_2595(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[201]);}

/* k5612 in a5609 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_5614(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5614,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_stat_perm);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a5615 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_5616(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_5616,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5620,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:319: stat */
f_2595(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[404]);}

/* k5618 in a5615 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_5620(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5620,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_gid);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a5621 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_5622(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_5622,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5626,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:313: stat */
f_2595(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[406]);}

/* k5624 in a5621 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_ccall f_5626(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5626,c,av);}
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
C_word t4;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("posix"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_posix_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(2296))){
C_save(t1);
C_rereclaim2(2296*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,408);
lf[1]=C_decode_literal(C_heaptop,C_text("\376B\000\000/this function is not available on this platform"));
lf[2]=C_h_intern(&lf[2],5, C_text("posix"));
lf[3]=C_h_intern(&lf[3],19, C_text("chicken.file.posix#"));
lf[4]=C_h_intern(&lf[4],30, C_text("chicken.file.posix#create-fifo"));
lf[5]=C_h_intern(&lf[5],39, C_text("chicken.file.posix#create-symbolic-link"));
lf[6]=C_h_intern(&lf[6],37, C_text("chicken.file.posix#read-symbolic-link"));
lf[7]=C_h_intern(&lf[7],35, C_text("chicken.file.posix#duplicate-fileno"));
lf[8]=C_h_intern(&lf[8],30, C_text("chicken.file.posix#fcntl/dupfd"));
lf[9]=C_h_intern(&lf[9],30, C_text("chicken.file.posix#fcntl/getfd"));
lf[10]=C_h_intern(&lf[10],30, C_text("chicken.file.posix#fcntl/getfl"));
lf[11]=C_h_intern(&lf[11],30, C_text("chicken.file.posix#fcntl/setfd"));
lf[12]=C_h_intern(&lf[12],30, C_text("chicken.file.posix#fcntl/setfl"));
lf[13]=C_h_intern(&lf[13],29, C_text("chicken.file.posix#file-close"));
lf[14]=C_h_intern(&lf[14],31, C_text("chicken.file.posix#file-control"));
lf[15]=C_h_intern(&lf[15],37, C_text("chicken.file.posix#file-creation-mode"));
lf[16]=C_h_intern(&lf[16],29, C_text("chicken.file.posix#file-group"));
lf[17]=C_h_intern(&lf[17],28, C_text("chicken.file.posix#file-link"));
lf[18]=C_h_intern(&lf[18],28, C_text("chicken.file.posix#file-lock"));
lf[19]=C_h_intern(&lf[19],37, C_text("chicken.file.posix#file-lock/blocking"));
lf[20]=C_h_intern(&lf[20],31, C_text("chicken.file.posix#file-mkstemp"));
lf[21]=C_h_intern(&lf[21],28, C_text("chicken.file.posix#file-open"));
lf[22]=C_h_intern(&lf[22],29, C_text("chicken.file.posix#file-owner"));
lf[23]=C_h_intern(&lf[23],35, C_text("chicken.file.posix#file-permissions"));
lf[24]=C_h_intern(&lf[24],32, C_text("chicken.file.posix#file-position"));
lf[25]=C_h_intern(&lf[25],28, C_text("chicken.file.posix#file-read"));
lf[26]=C_h_intern(&lf[26],30, C_text("chicken.file.posix#file-select"));
lf[27]=C_h_intern(&lf[27],33, C_text("chicken.file.posix#file-test-lock"));
lf[28]=C_h_intern(&lf[28],32, C_text("chicken.file.posix#file-truncate"));
lf[29]=C_h_intern(&lf[29],30, C_text("chicken.file.posix#file-unlock"));
lf[30]=C_h_intern(&lf[30],29, C_text("chicken.file.posix#file-write"));
lf[31]=C_h_intern(&lf[31],28, C_text("chicken.file.posix#file-type"));
lf[32]=C_h_intern(&lf[32],32, C_text("chicken.file.posix#block-device\077"));
lf[33]=C_h_intern(&lf[33],36, C_text("chicken.file.posix#character-device\077"));
lf[34]=C_h_intern(&lf[34],29, C_text("chicken.file.posix#directory\077"));
lf[35]=C_h_intern(&lf[35],24, C_text("chicken.file.posix#fifo\077"));
lf[36]=C_h_intern(&lf[36],32, C_text("chicken.file.posix#regular-file\077"));
lf[37]=C_h_intern(&lf[37],26, C_text("chicken.file.posix#socket\077"));
lf[38]=C_h_intern(&lf[38],33, C_text("chicken.file.posix#symbolic-link\077"));
lf[39]=C_h_intern(&lf[39],32, C_text("chicken.file.posix#fileno/stderr"));
lf[40]=C_h_intern(&lf[40],31, C_text("chicken.file.posix#fileno/stdin"));
lf[41]=C_h_intern(&lf[41],32, C_text("chicken.file.posix#fileno/stdout"));
lf[42]=C_h_intern(&lf[42],35, C_text("chicken.file.posix#open-input-file\052"));
lf[43]=C_h_intern(&lf[43],36, C_text("chicken.file.posix#open-output-file\052"));
lf[44]=C_h_intern(&lf[44],30, C_text("chicken.file.posix#open/append"));
lf[45]=C_h_intern(&lf[45],30, C_text("chicken.file.posix#open/binary"));
lf[46]=C_h_intern(&lf[46],29, C_text("chicken.file.posix#open/creat"));
lf[47]=C_h_intern(&lf[47],28, C_text("chicken.file.posix#open/excl"));
lf[48]=C_h_intern(&lf[48],29, C_text("chicken.file.posix#open/fsync"));
lf[49]=C_h_intern(&lf[49],30, C_text("chicken.file.posix#open/noctty"));
lf[50]=C_h_intern(&lf[50],33, C_text("chicken.file.posix#open/noinherit"));
lf[51]=C_h_intern(&lf[51],32, C_text("chicken.file.posix#open/nonblock"));
lf[52]=C_h_intern(&lf[52],30, C_text("chicken.file.posix#open/rdonly"));
lf[53]=C_h_intern(&lf[53],28, C_text("chicken.file.posix#open/rdwr"));
lf[54]=C_h_intern(&lf[54],28, C_text("chicken.file.posix#open/read"));
lf[55]=C_h_intern(&lf[55],28, C_text("chicken.file.posix#open/sync"));
lf[56]=C_h_intern(&lf[56],28, C_text("chicken.file.posix#open/text"));
lf[57]=C_h_intern(&lf[57],29, C_text("chicken.file.posix#open/trunc"));
lf[58]=C_h_intern(&lf[58],29, C_text("chicken.file.posix#open/write"));
lf[59]=C_h_intern(&lf[59],30, C_text("chicken.file.posix#open/wronly"));
lf[60]=C_h_intern(&lf[60],29, C_text("chicken.file.posix#perm/irgrp"));
lf[61]=C_h_intern(&lf[61],29, C_text("chicken.file.posix#perm/iroth"));
lf[62]=C_h_intern(&lf[62],29, C_text("chicken.file.posix#perm/irusr"));
lf[63]=C_h_intern(&lf[63],29, C_text("chicken.file.posix#perm/irwxg"));
lf[64]=C_h_intern(&lf[64],29, C_text("chicken.file.posix#perm/irwxo"));
lf[65]=C_h_intern(&lf[65],29, C_text("chicken.file.posix#perm/irwxu"));
lf[66]=C_h_intern(&lf[66],29, C_text("chicken.file.posix#perm/isgid"));
lf[67]=C_h_intern(&lf[67],29, C_text("chicken.file.posix#perm/isuid"));
lf[68]=C_h_intern(&lf[68],29, C_text("chicken.file.posix#perm/isvtx"));
lf[69]=C_h_intern(&lf[69],29, C_text("chicken.file.posix#perm/iwgrp"));
lf[70]=C_h_intern(&lf[70],29, C_text("chicken.file.posix#perm/iwoth"));
lf[71]=C_h_intern(&lf[71],29, C_text("chicken.file.posix#perm/iwusr"));
lf[72]=C_h_intern(&lf[72],29, C_text("chicken.file.posix#perm/ixgrp"));
lf[73]=C_h_intern(&lf[73],29, C_text("chicken.file.posix#perm/ixoth"));
lf[74]=C_h_intern(&lf[74],29, C_text("chicken.file.posix#perm/ixusr"));
lf[75]=C_h_intern(&lf[75],31, C_text("chicken.file.posix#port->fileno"));
lf[76]=C_h_intern(&lf[76],27, C_text("chicken.file.posix#seek/cur"));
lf[77]=C_h_intern(&lf[77],27, C_text("chicken.file.posix#seek/end"));
lf[78]=C_h_intern(&lf[78],27, C_text("chicken.file.posix#seek/set"));
lf[79]=C_h_intern(&lf[79],37, C_text("chicken.file.posix#set-file-position!"));
lf[80]=C_h_intern(&lf[80],19, C_text("chicken.time.posix#"));
lf[81]=C_h_intern(&lf[81],36, C_text("chicken.time.posix#seconds->utc-time"));
lf[82]=C_h_intern(&lf[82],36, C_text("chicken.time.posix#utc-time->seconds"));
lf[83]=C_h_intern(&lf[83],38, C_text("chicken.time.posix#seconds->local-time"));
lf[84]=C_h_intern(&lf[84],34, C_text("chicken.time.posix#seconds->string"));
lf[85]=C_h_intern(&lf[85],38, C_text("chicken.time.posix#local-time->seconds"));
lf[86]=C_h_intern(&lf[86],31, C_text("chicken.time.posix#string->time"));
lf[87]=C_h_intern(&lf[87],31, C_text("chicken.time.posix#time->string"));
lf[88]=C_h_intern(&lf[88],46, C_text("chicken.time.posix#local-timezone-abbreviation"));
lf[89]=C_h_intern(&lf[89],16, C_text("chicken.process#"));
lf[90]=C_h_intern(&lf[90],22, C_text("chicken.process#system"));
lf[91]=C_h_intern(&lf[91],6, C_text("system"));
lf[92]=C_h_intern(&lf[92],17, C_text("##sys#signal-hook"));
lf[93]=C_h_intern_kw(&lf[93],13, C_text("process-error"));
lf[94]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032`system\047 invocation failed"));
lf[95]=C_h_intern(&lf[95],18, C_text("##sys#update-errno"));
lf[96]=C_h_intern(&lf[96],23, C_text("chicken.process#system\052"));
lf[97]=C_h_intern(&lf[97],11, C_text("##sys#error"));
lf[98]=C_decode_literal(C_heaptop,C_text("\376B\000\0003shell invocation failed with non-zero return status"));
lf[99]=C_h_intern(&lf[99],18, C_text("chicken.process#qs"));
lf[100]=C_h_intern(&lf[100],7, C_text("mingw32"));
lf[101]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002\042\042"));
lf[102]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004\047\134\047\047"));
lf[103]=C_h_intern(&lf[103],18, C_text("chicken.base#error"));
lf[104]=C_h_intern(&lf[104],2, C_text("qs"));
lf[105]=C_decode_literal(C_heaptop,C_text("\376B\000\0004NUL character can not be represented in shell string"));
lf[106]=C_h_intern(&lf[106],20, C_text("scheme#string-append"));
lf[107]=C_h_intern(&lf[107],18, C_text("##sys#string->list"));
lf[108]=C_h_intern(&lf[108],33, C_text("chicken.platform#software-version"));
lf[109]=C_h_intern(&lf[109],31, C_text("chicken.process#process-execute"));
lf[110]=C_h_intern(&lf[110],28, C_text("chicken.process#process-fork"));
lf[111]=C_h_intern(&lf[111],27, C_text("chicken.process#process-run"));
lf[112]=C_h_intern(&lf[112],30, C_text("chicken.process#process-signal"));
lf[113]=C_h_intern(&lf[113],29, C_text("chicken.process#process-spawn"));
lf[114]=C_h_intern(&lf[114],28, C_text("chicken.process#process-wait"));
lf[115]=C_h_intern(&lf[115],36, C_text("chicken.process#call-with-input-pipe"));
lf[116]=C_h_intern(&lf[116],37, C_text("chicken.process#call-with-output-pipe"));
lf[117]=C_h_intern(&lf[117],32, C_text("chicken.process#close-input-pipe"));
lf[118]=C_h_intern(&lf[118],33, C_text("chicken.process#close-output-pipe"));
lf[119]=C_h_intern(&lf[119],27, C_text("chicken.process#create-pipe"));
lf[120]=C_h_intern(&lf[120],31, C_text("chicken.process#open-input-pipe"));
lf[121]=C_h_intern(&lf[121],32, C_text("chicken.process#open-output-pipe"));
lf[122]=C_h_intern(&lf[122],36, C_text("chicken.process#with-input-from-pipe"));
lf[123]=C_h_intern(&lf[123],35, C_text("chicken.process#with-output-to-pipe"));
lf[124]=C_h_intern(&lf[124],23, C_text("chicken.process#process"));
lf[125]=C_h_intern(&lf[125],24, C_text("chicken.process#process\052"));
lf[126]=C_h_intern(&lf[126],29, C_text("chicken.process#process-sleep"));
lf[127]=C_h_intern(&lf[127],24, C_text("chicken.process#pipe/buf"));
lf[128]=C_h_intern(&lf[128],29, C_text("chicken.process#spawn/overlay"));
lf[129]=C_h_intern(&lf[129],26, C_text("chicken.process#spawn/wait"));
lf[130]=C_h_intern(&lf[130],28, C_text("chicken.process#spawn/nowait"));
lf[131]=C_h_intern(&lf[131],29, C_text("chicken.process#spawn/nowaito"));
lf[132]=C_h_intern(&lf[132],28, C_text("chicken.process#spawn/detach"));
lf[133]=C_h_intern(&lf[133],23, C_text("chicken.process.signal#"));
lf[134]=C_h_intern(&lf[134],33, C_text("chicken.process.signal#set-alarm!"));
lf[135]=C_h_intern(&lf[135],42, C_text("chicken.process.signal#set-signal-handler!"));
lf[136]=C_h_intern(&lf[136],39, C_text("chicken.process.signal#set-signal-mask!"));
lf[137]=C_h_intern(&lf[137],37, C_text("chicken.process.signal#signal-handler"));
lf[138]=C_h_intern(&lf[138],34, C_text("chicken.process.signal#signal-mask"));
lf[139]=C_h_intern(&lf[139],35, C_text("chicken.process.signal#signal-mask!"));
lf[140]=C_h_intern(&lf[140],37, C_text("chicken.process.signal#signal-masked\077"));
lf[141]=C_h_intern(&lf[141],37, C_text("chicken.process.signal#signal-unmask!"));
lf[142]=C_h_intern(&lf[142],34, C_text("chicken.process.signal#signal/abrt"));
lf[143]=C_h_intern(&lf[143],34, C_text("chicken.process.signal#signal/alrm"));
lf[144]=C_h_intern(&lf[144],35, C_text("chicken.process.signal#signal/break"));
lf[145]=C_h_intern(&lf[145],33, C_text("chicken.process.signal#signal/bus"));
lf[146]=C_h_intern(&lf[146],34, C_text("chicken.process.signal#signal/chld"));
lf[147]=C_h_intern(&lf[147],34, C_text("chicken.process.signal#signal/cont"));
lf[148]=C_h_intern(&lf[148],33, C_text("chicken.process.signal#signal/fpe"));
lf[149]=C_h_intern(&lf[149],33, C_text("chicken.process.signal#signal/hup"));
lf[150]=C_h_intern(&lf[150],33, C_text("chicken.process.signal#signal/ill"));
lf[151]=C_h_intern(&lf[151],33, C_text("chicken.process.signal#signal/int"));
lf[152]=C_h_intern(&lf[152],32, C_text("chicken.process.signal#signal/io"));
lf[153]=C_h_intern(&lf[153],34, C_text("chicken.process.signal#signal/kill"));
lf[154]=C_h_intern(&lf[154],34, C_text("chicken.process.signal#signal/pipe"));
lf[155]=C_h_intern(&lf[155],34, C_text("chicken.process.signal#signal/prof"));
lf[156]=C_h_intern(&lf[156],34, C_text("chicken.process.signal#signal/quit"));
lf[157]=C_h_intern(&lf[157],34, C_text("chicken.process.signal#signal/segv"));
lf[158]=C_h_intern(&lf[158],34, C_text("chicken.process.signal#signal/stop"));
lf[159]=C_h_intern(&lf[159],34, C_text("chicken.process.signal#signal/term"));
lf[160]=C_h_intern(&lf[160],34, C_text("chicken.process.signal#signal/trap"));
lf[161]=C_h_intern(&lf[161],34, C_text("chicken.process.signal#signal/tstp"));
lf[162]=C_h_intern(&lf[162],33, C_text("chicken.process.signal#signal/urg"));
lf[163]=C_h_intern(&lf[163],34, C_text("chicken.process.signal#signal/usr1"));
lf[164]=C_h_intern(&lf[164],34, C_text("chicken.process.signal#signal/usr2"));
lf[165]=C_h_intern(&lf[165],36, C_text("chicken.process.signal#signal/vtalrm"));
lf[166]=C_h_intern(&lf[166],35, C_text("chicken.process.signal#signal/winch"));
lf[167]=C_h_intern(&lf[167],34, C_text("chicken.process.signal#signal/xcpu"));
lf[168]=C_h_intern(&lf[168],34, C_text("chicken.process.signal#signal/xfsz"));
lf[169]=C_h_intern(&lf[169],35, C_text("chicken.process.signal#signals-list"));
lf[170]=C_h_intern(&lf[170],30, C_text("chicken.process-context.posix#"));
lf[171]=C_h_intern(&lf[171],47, C_text("chicken.process-context.posix#change-directory\052"));
lf[172]=C_h_intern(&lf[172],49, C_text("chicken.process-context.posix#set-root-directory!"));
lf[173]=C_h_intern(&lf[173],56, C_text("chicken.process-context.posix#current-effective-group-id"));
lf[174]=C_h_intern(&lf[174],55, C_text("chicken.process-context.posix#current-effective-user-id"));
lf[175]=C_h_intern(&lf[175],46, C_text("chicken.process-context.posix#current-group-id"));
lf[176]=C_h_intern(&lf[176],45, C_text("chicken.process-context.posix#current-user-id"));
lf[177]=C_h_intern(&lf[177],48, C_text("chicken.process-context.posix#current-process-id"));
lf[178]=C_h_intern(&lf[178],47, C_text("chicken.process-context.posix#parent-process-id"));
lf[179]=C_h_intern(&lf[179],47, C_text("chicken.process-context.posix#current-user-name"));
lf[180]=C_h_intern(&lf[180],57, C_text("chicken.process-context.posix#current-effective-user-name"));
lf[181]=C_h_intern(&lf[181],44, C_text("chicken.process-context.posix#create-session"));
lf[182]=C_h_intern(&lf[182],46, C_text("chicken.process-context.posix#process-group-id"));
lf[183]=C_h_intern(&lf[183],46, C_text("chicken.process-context.posix#user-information"));
lf[184]=C_h_intern(&lf[184],14, C_text("chicken.posix#"));
lf[186]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003 - "));
lf[187]=C_h_intern(&lf[187],19, C_text("##sys#peek-c-string"));
lf[188]=C_h_intern(&lf[188],17, C_text("##sys#posix-error"));
lf[190]=C_h_intern_kw(&lf[190],10, C_text("file-error"));
lf[191]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022cannot access file"));
lf[192]=C_h_intern(&lf[192],19, C_text("##sys#make-c-string"));
lf[193]=C_h_intern_kw(&lf[193],10, C_text("type-error"));
lf[194]=C_decode_literal(C_heaptop,C_text("\376B\000\0000bad argument type - not a fixnum, port or string"));
lf[195]=C_h_intern(&lf[195],18, C_text("chicken.base#port\077"));
lf[196]=C_h_intern(&lf[196],28, C_text("chicken.file.posix#file-stat"));
lf[197]=C_h_intern(&lf[197],9, C_text("file-stat"));
lf[198]=C_h_intern(&lf[198],40, C_text("chicken.file.posix#set-file-permissions!"));
lf[199]=C_h_intern(&lf[199],21, C_text("set-file-permissions!"));
lf[200]=C_decode_literal(C_heaptop,C_text("\376B\000\000\036cannot change file permissions"));
lf[201]=C_h_intern(&lf[201],16, C_text("file-permissions"));
lf[202]=C_decode_literal(C_heaptop,C_text("\376B\000\0000bad argument type - not a fixnum, port or string"));
lf[203]=C_h_intern(&lf[203],18, C_text("##sys#check-fixnum"));
lf[204]=C_h_intern(&lf[204],41, C_text("chicken.file.posix#file-modification-time"));
lf[205]=C_h_intern(&lf[205],22, C_text("file-modification-time"));
lf[206]=C_h_intern(&lf[206],35, C_text("chicken.file.posix#file-access-time"));
lf[207]=C_h_intern(&lf[207],16, C_text("file-access-time"));
lf[208]=C_h_intern(&lf[208],35, C_text("chicken.file.posix#file-change-time"));
lf[209]=C_h_intern(&lf[209],16, C_text("file-change-time"));
lf[210]=C_h_intern(&lf[210],34, C_text("chicken.file.posix#set-file-times!"));
lf[211]=C_h_intern(&lf[211],15, C_text("set-file-times!"));
lf[212]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025cannot set file times"));
lf[213]=C_h_intern(&lf[213],25, C_text("##sys#check-exact-integer"));
lf[214]=C_h_intern(&lf[214],28, C_text("chicken.time#current-seconds"));
lf[215]=C_h_intern(&lf[215],28, C_text("chicken.file.posix#file-size"));
lf[216]=C_h_intern(&lf[216],9, C_text("file-size"));
lf[217]=C_h_intern(&lf[217],34, C_text("chicken.file.posix#set-file-owner!"));
lf[218]=C_h_intern(&lf[218],15, C_text("set-file-owner!"));
lf[219]=C_h_intern(&lf[219],5, C_text("chown"));
lf[220]=C_h_intern(&lf[220],34, C_text("chicken.file.posix#set-file-group!"));
lf[221]=C_h_intern(&lf[221],15, C_text("set-file-group!"));
lf[222]=C_h_intern(&lf[222],12, C_text("regular-file"));
lf[223]=C_h_intern(&lf[223],13, C_text("symbolic-link"));
lf[224]=C_h_intern(&lf[224],9, C_text("directory"));
lf[225]=C_h_intern(&lf[225],16, C_text("character-device"));
lf[226]=C_h_intern(&lf[226],12, C_text("block-device"));
lf[227]=C_h_intern(&lf[227],4, C_text("fifo"));
lf[228]=C_h_intern(&lf[228],6, C_text("socket"));
lf[229]=C_h_intern(&lf[229],9, C_text("file-type"));
lf[230]=C_h_intern(&lf[230],18, C_text("set-file-position!"));
lf[231]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030cannot set file position"));
lf[232]=C_h_intern(&lf[232],6, C_text("stream"));
lf[233]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014invalid file"));
lf[234]=C_h_intern_kw(&lf[234],6, C_text("append"));
lf[235]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001a"));
lf[236]=C_decode_literal(C_heaptop,C_text("\376B\000\000\033invalid mode for input file"));
lf[237]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025invalid mode argument"));
lf[238]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001r"));
lf[239]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001w"));
lf[240]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020cannot open file"));
lf[241]=C_h_intern(&lf[241],15, C_text("##sys#make-port"));
lf[242]=C_h_intern(&lf[242],23, C_text("##sys#stream-port-class"));
lf[243]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010(fdport)"));
lf[244]=C_h_intern(&lf[244],16, C_text("open-input-file\052"));
lf[245]=C_h_intern(&lf[245],17, C_text("open-output-file\052"));
lf[246]=C_h_intern(&lf[246],12, C_text("port->fileno"));
lf[247]=C_h_intern(&lf[247],15, C_text("##sys#port-data"));
lf[248]=C_decode_literal(C_heaptop,C_text("\376B\000\000%cannot access file-descriptor of port"));
lf[249]=C_decode_literal(C_heaptop,C_text("\376B\000\000\031port has no attached file"));
lf[250]=C_h_intern(&lf[250],27, C_text("##sys#peek-unsigned-integer"));
lf[251]=C_h_intern(&lf[251],16, C_text("duplicate-fileno"));
lf[252]=C_decode_literal(C_heaptop,C_text("\376B\000\000 cannot duplicate file-descriptor"));
lf[253]=C_h_intern(&lf[253],17, C_text("change-directory\052"));
lf[254]=C_decode_literal(C_heaptop,C_text("\376B\000\000\037cannot change current directory"));
lf[255]=C_h_intern(&lf[255],27, C_text("##sys#change-directory-hook"));
lf[258]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025time vector too short"));
lf[259]=C_h_intern(&lf[259],19, C_text("seconds->local-time"));
lf[260]=C_h_intern(&lf[260],17, C_text("seconds->utc-time"));
lf[261]=C_h_intern(&lf[261],15, C_text("##sys#substring"));
lf[262]=C_h_intern(&lf[262],15, C_text("seconds->string"));
lf[263]=C_decode_literal(C_heaptop,C_text("\376B\000\000 cannot convert seconds to string"));
lf[264]=C_h_intern(&lf[264],19, C_text("local-time->seconds"));
lf[265]=C_decode_literal(C_heaptop,C_text("\376B\000\000%cannot convert time vector to seconds"));
lf[266]=C_h_intern(&lf[266],17, C_text("##sys#make-string"));
lf[267]=C_h_intern(&lf[267],12, C_text("time->string"));
lf[268]=C_decode_literal(C_heaptop,C_text("\376B\000\000 time formatting overflows buffer"));
lf[269]=C_decode_literal(C_heaptop,C_text("\376B\000\000$cannot convert time vector to string"));
lf[270]=C_h_intern(&lf[270],19, C_text("##sys#signal-vector"));
lf[271]=C_h_intern(&lf[271],19, C_text("set-signal-handler!"));
lf[272]=C_h_intern(&lf[272],13, C_text("process-sleep"));
lf[273]=C_h_intern(&lf[273],12, C_text("process-wait"));
lf[274]=C_decode_literal(C_heaptop,C_text("\376B\000\000 waiting for child process failed"));
lf[276]=C_h_intern(&lf[276],24, C_text("chicken.condition#signal"));
lf[278]=C_h_intern(&lf[278],34, C_text("chicken.memory#pointer-vector-set!"));
lf[279]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015Out of memory"));
lf[280]=C_h_intern(&lf[280],40, C_text("chicken.condition#with-exception-handler"));
lf[281]=C_h_intern(&lf[281],37, C_text("scheme#call-with-current-continuation"));
lf[282]=C_h_intern(&lf[282],34, C_text("chicken.memory#make-pointer-vector"));
lf[283]=C_h_intern(&lf[283],19, C_text("chicken.memory#free"));
lf[284]=C_h_intern(&lf[284],33, C_text("chicken.memory#pointer-vector-ref"));
lf[285]=C_h_intern(&lf[285],36, C_text("chicken.memory#pointer-vector-length"));
lf[287]=C_h_intern(&lf[287],41, C_text("chicken.pathname#pathname-strip-directory"));
lf[289]=C_h_intern(&lf[289],3, C_text("map"));
lf[290]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001="));
lf[291]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020cannot open pipe"));
lf[292]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006(pipe)"));
lf[293]=C_h_intern(&lf[293],15, C_text("open-input-pipe"));
lf[294]=C_h_intern_kw(&lf[294],4, C_text("text"));
lf[295]=C_h_intern_kw(&lf[295],6, C_text("binary"));
lf[296]=C_decode_literal(C_heaptop,C_text("\376B\000\000#illegal input/output mode specifier"));
lf[297]=C_h_intern(&lf[297],16, C_text("open-output-pipe"));
lf[298]=C_h_intern(&lf[298],16, C_text("close-input-pipe"));
lf[299]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030error while closing pipe"));
lf[300]=C_h_intern(&lf[300],17, C_text("close-output-pipe"));
lf[301]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030error while closing pipe"));
lf[302]=C_h_intern(&lf[302],20, C_text("##sys#standard-input"));
lf[303]=C_h_intern(&lf[303],13, C_text("scheme#values"));
lf[304]=C_h_intern(&lf[304],18, C_text("##sys#dynamic-wind"));
lf[305]=C_h_intern(&lf[305],21, C_text("##sys#standard-output"));
lf[306]=C_h_intern(&lf[306],9, C_text("file-open"));
lf[307]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020cannot open file"));
lf[308]=C_h_intern(&lf[308],24, C_text("##sys#dispatch-interrupt"));
lf[309]=C_h_intern(&lf[309],10, C_text("file-close"));
lf[310]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021cannot close file"));
lf[311]=C_h_intern(&lf[311],9, C_text("file-read"));
lf[312]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025cannot read from file"));
lf[313]=C_decode_literal(C_heaptop,C_text("\376B\000\000(bad argument type - not a string or blob"));
lf[314]=C_h_intern(&lf[314],18, C_text("scheme#make-string"));
lf[315]=C_h_intern(&lf[315],10, C_text("file-write"));
lf[316]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024cannot write to file"));
lf[317]=C_decode_literal(C_heaptop,C_text("\376B\000\000(bad argument type - not a string or blob"));
lf[318]=C_h_intern(&lf[318],12, C_text("file-mkstemp"));
lf[319]=C_decode_literal(C_heaptop,C_text("\376B\000\000$0123456789abcdefghijklmnopqrstuvwxyz"));
lf[320]=C_decode_literal(C_heaptop,C_text("\376B\000\000\034cannot create temporary file"));
lf[321]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026non-existent directory"));
lf[322]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020invalid template"));
lf[323]=C_h_intern(&lf[323],18, C_text("##sys#file-exists\077"));
lf[324]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001."));
lf[325]=C_h_intern(&lf[325],35, C_text("chicken.pathname#pathname-directory"));
lf[326]=C_h_intern(&lf[326],18, C_text("scheme#string-copy"));
lf[327]=C_h_intern(&lf[327],11, C_text("create-pipe"));
lf[328]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022cannot create pipe"));
lf[330]=C_decode_literal(C_heaptop,C_text("\376B\000\000 cannot duplicate file descriptor"));
lf[332]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\042"));
lf[333]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\042"));
lf[334]=C_h_intern(&lf[334],15, C_text("process-execute"));
lf[335]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026cannot execute process"));
lf[336]=C_h_intern(&lf[336],13, C_text("process-spawn"));
lf[337]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024cannot spawn process"));
lf[339]=C_decode_literal(C_heaptop,C_text("\376B\000\000 cannot retrieve system directory"));
lf[340]=C_h_intern(&lf[340],48, C_text("chicken.process-context#get-environment-variable"));
lf[341]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007COMSPEC"));
lf[342]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002/c"));
lf[343]=C_h_intern(&lf[343],11, C_text("process-run"));
lf[344]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026cannot execute process"));
lf[345]=C_h_intern(&lf[345],19, C_text("##sys#make-locative"));
lf[346]=C_h_intern(&lf[346],8, C_text("location"));
lf[347]=C_h_intern(&lf[347],33, C_text("chicken.string#string-intersperse"));
lf[348]=C_h_intern(&lf[348],7, C_text("process"));
lf[349]=C_h_intern(&lf[349],8, C_text("process\052"));
lf[350]=C_h_intern(&lf[350],17, C_text("current-user-name"));
lf[351]=C_decode_literal(C_heaptop,C_text("\376B\000\000!cannot retrieve current user-name"));
lf[352]=C_h_intern(&lf[352],14, C_text("chicken.errno#"));
lf[353]=C_h_intern(&lf[353],19, C_text("chicken.errno#errno"));
lf[354]=C_h_intern(&lf[354],11, C_text("##sys#errno"));
lf[355]=C_h_intern(&lf[355],24, C_text("chicken.errno#errno/2big"));
lf[356]=C_h_intern(&lf[356],25, C_text("chicken.errno#errno/acces"));
lf[357]=C_h_intern(&lf[357],25, C_text("chicken.errno#errno/again"));
lf[358]=C_h_intern(&lf[358],24, C_text("chicken.errno#errno/badf"));
lf[359]=C_h_intern(&lf[359],24, C_text("chicken.errno#errno/busy"));
lf[360]=C_h_intern(&lf[360],25, C_text("chicken.errno#errno/child"));
lf[361]=C_h_intern(&lf[361],26, C_text("chicken.errno#errno/deadlk"));
lf[362]=C_h_intern(&lf[362],23, C_text("chicken.errno#errno/dom"));
lf[363]=C_h_intern(&lf[363],25, C_text("chicken.errno#errno/exist"));
lf[364]=C_h_intern(&lf[364],25, C_text("chicken.errno#errno/fault"));
lf[365]=C_h_intern(&lf[365],24, C_text("chicken.errno#errno/fbig"));
lf[366]=C_h_intern(&lf[366],25, C_text("chicken.errno#errno/ilseq"));
lf[367]=C_h_intern(&lf[367],24, C_text("chicken.errno#errno/intr"));
lf[368]=C_h_intern(&lf[368],25, C_text("chicken.errno#errno/inval"));
lf[369]=C_h_intern(&lf[369],22, C_text("chicken.errno#errno/io"));
lf[370]=C_h_intern(&lf[370],25, C_text("chicken.errno#errno/isdir"));
lf[371]=C_h_intern(&lf[371],25, C_text("chicken.errno#errno/mfile"));
lf[372]=C_h_intern(&lf[372],25, C_text("chicken.errno#errno/mlink"));
lf[373]=C_h_intern(&lf[373],31, C_text("chicken.errno#errno/nametoolong"));
lf[374]=C_h_intern(&lf[374],25, C_text("chicken.errno#errno/nfile"));
lf[375]=C_h_intern(&lf[375],25, C_text("chicken.errno#errno/nodev"));
lf[376]=C_h_intern(&lf[376],25, C_text("chicken.errno#errno/noent"));
lf[377]=C_h_intern(&lf[377],26, C_text("chicken.errno#errno/noexec"));
lf[378]=C_h_intern(&lf[378],25, C_text("chicken.errno#errno/nolck"));
lf[379]=C_h_intern(&lf[379],25, C_text("chicken.errno#errno/nomem"));
lf[380]=C_h_intern(&lf[380],25, C_text("chicken.errno#errno/nospc"));
lf[381]=C_h_intern(&lf[381],25, C_text("chicken.errno#errno/nosys"));
lf[382]=C_h_intern(&lf[382],26, C_text("chicken.errno#errno/notdir"));
lf[383]=C_h_intern(&lf[383],28, C_text("chicken.errno#errno/notempty"));
lf[384]=C_h_intern(&lf[384],25, C_text("chicken.errno#errno/notty"));
lf[385]=C_h_intern(&lf[385],24, C_text("chicken.errno#errno/nxio"));
lf[386]=C_h_intern(&lf[386],24, C_text("chicken.errno#errno/perm"));
lf[387]=C_h_intern(&lf[387],24, C_text("chicken.errno#errno/pipe"));
lf[388]=C_h_intern(&lf[388],25, C_text("chicken.errno#errno/range"));
lf[389]=C_h_intern(&lf[389],24, C_text("chicken.errno#errno/rofs"));
lf[390]=C_h_intern(&lf[390],25, C_text("chicken.errno#errno/spipe"));
lf[391]=C_h_intern(&lf[391],24, C_text("chicken.errno#errno/srch"));
lf[392]=C_h_intern(&lf[392],30, C_text("chicken.errno#errno/wouldblock"));
lf[393]=C_h_intern(&lf[393],24, C_text("chicken.errno#errno/xdev"));
lf[394]=C_h_intern(&lf[394],14, C_text("signal-handler"));
lf[395]=C_h_intern(&lf[395],31, C_text("chicken.base#getter-with-setter"));
lf[396]=C_decode_literal(C_heaptop,C_text("\376B\000\000+(chicken.process.signal#signal-handler sig)"));
lf[397]=C_h_intern(&lf[397],18, C_text("file-creation-mode"));
lf[398]=C_decode_literal(C_heaptop,C_text("\376B\000\000,(chicken.file.posix#file-creation-mode mode)"));
lf[399]=C_h_intern(&lf[399],13, C_text("file-position"));
lf[400]=C_decode_literal(C_heaptop,C_text("\376B\000\000%cannot retrieve file position of port"));
lf[401]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014invalid file"));
lf[402]=C_decode_literal(C_heaptop,C_text("\376B\000\000\047(chicken.file.posix#file-position port)"));
lf[403]=C_decode_literal(C_heaptop,C_text("\376B\000\000\047(chicken.file.posix#file-permissions f)"));
lf[404]=C_h_intern(&lf[404],10, C_text("file-group"));
lf[405]=C_decode_literal(C_heaptop,C_text("\376B\000\000!(chicken.file.posix#file-group f)"));
lf[406]=C_h_intern(&lf[406],10, C_text("file-owner"));
lf[407]=C_decode_literal(C_heaptop,C_text("\376B\000\000!(chicken.file.posix#file-owner f)"));
C_register_lf2(lf,408,create_ptable());{}
t2=C_mutate(&lf[0] /* (set! c1677 ...) */,lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2252,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t3;
C_scheduler_toplevel(2,av2);}}

/* va6106 in k4364 in loop in k4351 in k4342 */
static void C_fcall va6106(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,5)))){
C_save_and_reclaim_args((void *)trva6106,2,t0,t1);}
a=C_alloc(5);
t2=C_s_a_i_bitwise_ior(&a,2,t1,*((C_word*)lf[47]+1));
t3=C_fixnum_or(C_fix((C_word)S_IRUSR),C_fix((C_word)S_IWUSR));
t4=C_open(((C_word*)t0)[2],t2,t3);
t5=C_eqp(C_fix(-1),t4);
if(C_truep(t5)){
if(C_truep(C_fixnum_lessp(((C_word*)t0)[3],((C_word*)t0)[4]))){
/* posixwin.scm:602: loop */
t6=((C_word*)((C_word*)t0)[5])[1];
f_4358(t6,((C_word*)t0)[6],C_fixnum_plus(((C_word*)t0)[3],C_fix(1)));}
else{
/* posixwin.scm:603: posix-error */
t6=lf[185];{
C_word av2[6];
av2[0]=t6;
av2[1]=((C_word*)t0)[6];
av2[2]=lf[190];
av2[3]=lf[318];
av2[4]=lf[320];
av2[5]=((C_word*)t0)[7];
f_2577(6,av2);}}}
else{
/* posixwin.scm:604: scheme#values */{
C_word av2[4];
av2[0]=0;
av2[1]=((C_word*)t0)[6];
av2[2]=t4;
av2[3]=((C_word*)t0)[8];
C_values(4,av2);}}}

/* va6114 in chicken.file.posix#file-mkstemp */
static void C_fcall va6114(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(40,0,2)))){
C_save_and_reclaim_args((void *)trva6114,2,t0,t1);}
a=C_alloc(40);
t2=C_s_a_i_times(&a,2,t1,((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4344,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* posixwin.scm:574: scheme#string-copy */
t4=*((C_word*)lf[326]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* va6122 in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_fcall va6122(C_word t0,C_word t1){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(184,0,8)))){
C_save_and_reclaim_args((void *)trva6122,2,t0,t1);}
a=C_alloc(184);
t2=C_s_a_i_bitwise_ior(&a,2,t1,C_fix((C_word)S_IWOTH));
t3=C_mutate((C_word*)lf[21]+1 /* (set! chicken.file.posix#file-open ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4182,a[2]=t2,a[3]=((C_word)li91),tmp=(C_word)a,a+=4,tmp));
t4=C_mutate((C_word*)lf[13]+1 /* (set! chicken.file.posix#file-close ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4217,a[2]=((C_word)li93),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[25]+1 /* (set! chicken.file.posix#file-read ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4248,a[2]=((C_word)li94),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[30]+1 /* (set! chicken.file.posix#file-write ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4291,a[2]=((C_word)li95),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[20]+1 /* (set! chicken.file.posix#file-mkstemp ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4331,a[2]=((C_word)li101),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[119]+1 /* (set! chicken.process#create-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4490,a[2]=((C_word)li102),tmp=(C_word)a,a+=3,tmp));
t9=C_set_block_item(lf[159] /* chicken.process.signal#signal/term */,0,C_fix((C_word)SIGTERM));
t10=C_set_block_item(lf[151] /* chicken.process.signal#signal/int */,0,C_fix((C_word)SIGINT));
t11=C_set_block_item(lf[148] /* chicken.process.signal#signal/fpe */,0,C_fix((C_word)SIGFPE));
t12=C_set_block_item(lf[150] /* chicken.process.signal#signal/ill */,0,C_fix((C_word)SIGILL));
t13=C_set_block_item(lf[157] /* chicken.process.signal#signal/segv */,0,C_fix((C_word)SIGSEGV));
t14=C_set_block_item(lf[142] /* chicken.process.signal#signal/abrt */,0,C_fix((C_word)SIGABRT));
t15=C_set_block_item(lf[144] /* chicken.process.signal#signal/break */,0,C_fix((C_word)SIGBREAK));
t16=C_set_block_item(lf[143] /* chicken.process.signal#signal/alrm */,0,C_fix(0));
t17=C_set_block_item(lf[145] /* chicken.process.signal#signal/bus */,0,C_fix(0));
t18=C_set_block_item(lf[146] /* chicken.process.signal#signal/chld */,0,C_fix(0));
t19=C_set_block_item(lf[147] /* chicken.process.signal#signal/cont */,0,C_fix(0));
t20=C_set_block_item(lf[149] /* chicken.process.signal#signal/hup */,0,C_fix(0));
t21=C_set_block_item(lf[152] /* chicken.process.signal#signal/io */,0,C_fix(0));
t22=C_set_block_item(lf[153] /* chicken.process.signal#signal/kill */,0,C_fix(0));
t23=C_set_block_item(lf[154] /* chicken.process.signal#signal/pipe */,0,C_fix(0));
t24=C_set_block_item(lf[155] /* chicken.process.signal#signal/prof */,0,C_fix(0));
t25=C_set_block_item(lf[156] /* chicken.process.signal#signal/quit */,0,C_fix(0));
t26=C_set_block_item(lf[158] /* chicken.process.signal#signal/stop */,0,C_fix(0));
t27=C_set_block_item(lf[160] /* chicken.process.signal#signal/trap */,0,C_fix(0));
t28=C_set_block_item(lf[161] /* chicken.process.signal#signal/tstp */,0,C_fix(0));
t29=C_set_block_item(lf[162] /* chicken.process.signal#signal/urg */,0,C_fix(0));
t30=C_set_block_item(lf[163] /* chicken.process.signal#signal/usr1 */,0,C_fix(0));
t31=C_set_block_item(lf[164] /* chicken.process.signal#signal/usr2 */,0,C_fix(0));
t32=C_set_block_item(lf[165] /* chicken.process.signal#signal/vtalrm */,0,C_fix(0));
t33=C_set_block_item(lf[166] /* chicken.process.signal#signal/winch */,0,C_fix(0));
t34=C_set_block_item(lf[167] /* chicken.process.signal#signal/xcpu */,0,C_fix(0));
t35=C_set_block_item(lf[168] /* chicken.process.signal#signal/xfsz */,0,C_fix(0));
t36=C_a_i_list7(&a,7,*((C_word*)lf[159]+1),*((C_word*)lf[151]+1),*((C_word*)lf[148]+1),*((C_word*)lf[150]+1),*((C_word*)lf[157]+1),*((C_word*)lf[142]+1),*((C_word*)lf[144]+1));
t37=C_mutate((C_word*)lf[169]+1 /* (set! chicken.process.signal#signals-list ...) */,t36);
t38=C_mutate(&lf[329] /* (set! chicken.posix#duplicate-fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4552,a[2]=((C_word)li103),tmp=(C_word)a,a+=3,tmp));
t39=C_mutate((C_word*)lf[88]+1 /* (set! chicken.time.posix#local-timezone-abbreviation ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4582,a[2]=((C_word)li104),tmp=(C_word)a,a+=3,tmp));
t40=C_set_block_item(lf[128] /* chicken.process#spawn/overlay */,0,C_fix((C_word)P_OVERLAY));
t41=C_set_block_item(lf[129] /* chicken.process#spawn/wait */,0,C_fix((C_word)P_WAIT));
t42=C_set_block_item(lf[130] /* chicken.process#spawn/nowait */,0,C_fix((C_word)P_NOWAIT));
t43=C_set_block_item(lf[131] /* chicken.process#spawn/nowaito */,0,C_fix((C_word)P_NOWAITO));
t44=C_set_block_item(lf[132] /* chicken.process#spawn/detach */,0,C_fix((C_word)P_DETACH));
t45=C_mutate(&lf[331] /* (set! chicken.posix#quote-arg-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4628,a[2]=((C_word)li106),tmp=(C_word)a,a+=3,tmp));
t46=C_mutate((C_word*)lf[109]+1 /* (set! chicken.process#process-execute ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4640,a[2]=((C_word)li109),tmp=(C_word)a,a+=3,tmp));
t47=C_mutate((C_word*)lf[113]+1 /* (set! chicken.process#process-spawn ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4720,a[2]=((C_word)li112),tmp=(C_word)a,a+=3,tmp));
t48=C_mutate(&lf[338] /* (set! chicken.posix#shell-command ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4803,a[2]=((C_word)li113),tmp=(C_word)a,a+=3,tmp));
t49=C_mutate((C_word*)lf[111]+1 /* (set! chicken.process#process-run ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4830,a[2]=((C_word)li114),tmp=(C_word)a,a+=3,tmp));
t50=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5053,a[2]=((C_word)li121),tmp=(C_word)a,a+=3,tmp);
t51=C_mutate((C_word*)lf[124]+1 /* (set! chicken.process#process ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5137,a[2]=t50,a[3]=((C_word)li122),tmp=(C_word)a,a+=4,tmp));
t52=C_mutate((C_word*)lf[125]+1 /* (set! chicken.process#process* ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5197,a[2]=t50,a[3]=((C_word)li123),tmp=(C_word)a,a+=4,tmp));
t53=C_mutate((C_word*)lf[179]+1 /* (set! chicken.process-context.posix#current-user-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5269,a[2]=((C_word)li124),tmp=(C_word)a,a+=3,tmp));
t54=C_mutate((C_word*)lf[4]+1 /* (set! chicken.file.posix#create-fifo ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5290,a[2]=((C_word)li125),tmp=(C_word)a,a+=3,tmp));
t55=C_mutate((C_word*)lf[181]+1 /* (set! chicken.process-context.posix#create-session ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5296,a[2]=((C_word)li126),tmp=(C_word)a,a+=3,tmp));
t56=C_mutate((C_word*)lf[5]+1 /* (set! chicken.file.posix#create-symbolic-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5302,a[2]=((C_word)li127),tmp=(C_word)a,a+=3,tmp));
t57=C_mutate((C_word*)lf[173]+1 /* (set! chicken.process-context.posix#current-effective-group-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5308,a[2]=((C_word)li128),tmp=(C_word)a,a+=3,tmp));
t58=C_mutate((C_word*)lf[174]+1 /* (set! chicken.process-context.posix#current-effective-user-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5314,a[2]=((C_word)li129),tmp=(C_word)a,a+=3,tmp));
t59=C_mutate((C_word*)lf[180]+1 /* (set! chicken.process-context.posix#current-effective-user-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5320,a[2]=((C_word)li130),tmp=(C_word)a,a+=3,tmp));
t60=C_mutate((C_word*)lf[175]+1 /* (set! chicken.process-context.posix#current-group-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5326,a[2]=((C_word)li131),tmp=(C_word)a,a+=3,tmp));
t61=C_mutate((C_word*)lf[176]+1 /* (set! chicken.process-context.posix#current-user-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5332,a[2]=((C_word)li132),tmp=(C_word)a,a+=3,tmp));
t62=C_mutate((C_word*)lf[14]+1 /* (set! chicken.file.posix#file-control ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5338,a[2]=((C_word)li133),tmp=(C_word)a,a+=3,tmp));
t63=C_mutate((C_word*)lf[17]+1 /* (set! chicken.file.posix#file-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5344,a[2]=((C_word)li134),tmp=(C_word)a,a+=3,tmp));
t64=C_mutate((C_word*)lf[18]+1 /* (set! chicken.file.posix#file-lock ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5350,a[2]=((C_word)li135),tmp=(C_word)a,a+=3,tmp));
t65=C_mutate((C_word*)lf[19]+1 /* (set! chicken.file.posix#file-lock/blocking ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5356,a[2]=((C_word)li136),tmp=(C_word)a,a+=3,tmp));
t66=C_mutate((C_word*)lf[26]+1 /* (set! chicken.file.posix#file-select ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5362,a[2]=((C_word)li137),tmp=(C_word)a,a+=3,tmp));
t67=C_mutate((C_word*)lf[27]+1 /* (set! chicken.file.posix#file-test-lock ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5368,a[2]=((C_word)li138),tmp=(C_word)a,a+=3,tmp));
t68=C_mutate((C_word*)lf[28]+1 /* (set! chicken.file.posix#file-truncate ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5374,a[2]=((C_word)li139),tmp=(C_word)a,a+=3,tmp));
t69=C_mutate((C_word*)lf[29]+1 /* (set! chicken.file.posix#file-unlock ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5380,a[2]=((C_word)li140),tmp=(C_word)a,a+=3,tmp));
t70=C_mutate((C_word*)lf[178]+1 /* (set! chicken.process-context.posix#parent-process-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5386,a[2]=((C_word)li141),tmp=(C_word)a,a+=3,tmp));
t71=C_mutate((C_word*)lf[110]+1 /* (set! chicken.process#process-fork ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5392,a[2]=((C_word)li142),tmp=(C_word)a,a+=3,tmp));
t72=C_mutate((C_word*)lf[182]+1 /* (set! chicken.process-context.posix#process-group-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5398,a[2]=((C_word)li143),tmp=(C_word)a,a+=3,tmp));
t73=C_mutate((C_word*)lf[112]+1 /* (set! chicken.process#process-signal ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5404,a[2]=((C_word)li144),tmp=(C_word)a,a+=3,tmp));
t74=C_mutate((C_word*)lf[6]+1 /* (set! chicken.file.posix#read-symbolic-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5410,a[2]=((C_word)li145),tmp=(C_word)a,a+=3,tmp));
t75=C_mutate((C_word*)lf[134]+1 /* (set! chicken.process.signal#set-alarm! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5416,a[2]=((C_word)li146),tmp=(C_word)a,a+=3,tmp));
t76=C_mutate((C_word*)lf[172]+1 /* (set! chicken.process-context.posix#set-root-directory! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5422,a[2]=((C_word)li147),tmp=(C_word)a,a+=3,tmp));
t77=C_mutate((C_word*)lf[136]+1 /* (set! chicken.process.signal#set-signal-mask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5428,a[2]=((C_word)li148),tmp=(C_word)a,a+=3,tmp));
t78=C_mutate((C_word*)lf[138]+1 /* (set! chicken.process.signal#signal-mask ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5434,a[2]=((C_word)li149),tmp=(C_word)a,a+=3,tmp));
t79=C_mutate((C_word*)lf[139]+1 /* (set! chicken.process.signal#signal-mask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5440,a[2]=((C_word)li150),tmp=(C_word)a,a+=3,tmp));
t80=C_mutate((C_word*)lf[140]+1 /* (set! chicken.process.signal#signal-masked? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5446,a[2]=((C_word)li151),tmp=(C_word)a,a+=3,tmp));
t81=C_mutate((C_word*)lf[141]+1 /* (set! chicken.process.signal#signal-unmask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5452,a[2]=((C_word)li152),tmp=(C_word)a,a+=3,tmp));
t82=C_mutate((C_word*)lf[183]+1 /* (set! chicken.process-context.posix#user-information ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5458,a[2]=((C_word)li153),tmp=(C_word)a,a+=3,tmp));
t83=C_mutate((C_word*)lf[82]+1 /* (set! chicken.time.posix#utc-time->seconds ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5464,a[2]=((C_word)li154),tmp=(C_word)a,a+=3,tmp));
t84=C_mutate((C_word*)lf[86]+1 /* (set! chicken.time.posix#string->time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5470,a[2]=((C_word)li155),tmp=(C_word)a,a+=3,tmp));
t85=C_set_block_item(lf[8] /* chicken.file.posix#fcntl/dupfd */,0,C_fix(0));
t86=C_set_block_item(lf[9] /* chicken.file.posix#fcntl/getfd */,0,C_fix(0));
t87=C_set_block_item(lf[11] /* chicken.file.posix#fcntl/setfd */,0,C_fix(0));
t88=C_set_block_item(lf[10] /* chicken.file.posix#fcntl/getfl */,0,C_fix(0));
t89=C_set_block_item(lf[12] /* chicken.file.posix#fcntl/setfl */,0,C_fix(0));
t90=C_set_block_item(lf[49] /* chicken.file.posix#open/noctty */,0,C_fix(0));
t91=C_set_block_item(lf[51] /* chicken.file.posix#open/nonblock */,0,C_fix(0));
t92=C_set_block_item(lf[48] /* chicken.file.posix#open/fsync */,0,C_fix(0));
t93=C_set_block_item(lf[55] /* chicken.file.posix#open/sync */,0,C_fix(0));
t94=C_set_block_item(lf[66] /* chicken.file.posix#perm/isgid */,0,C_fix(0));
t95=C_set_block_item(lf[67] /* chicken.file.posix#perm/isuid */,0,C_fix(0));
t96=C_set_block_item(lf[68] /* chicken.file.posix#perm/isvtx */,0,C_fix(0));
t97=C_a_i_provide(&a,1,lf[352]);
t98=C_mutate((C_word*)lf[353]+1 /* (set! chicken.errno#errno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5488,a[2]=((C_word)li156),tmp=(C_word)a,a+=3,tmp));
t99=C_set_block_item(lf[355] /* chicken.errno#errno/2big */,0,C_fix((C_word)E2BIG));
t100=C_set_block_item(lf[356] /* chicken.errno#errno/acces */,0,C_fix((C_word)EACCES));
t101=C_set_block_item(lf[357] /* chicken.errno#errno/again */,0,C_fix((C_word)EAGAIN));
t102=C_set_block_item(lf[358] /* chicken.errno#errno/badf */,0,C_fix((C_word)EBADF));
t103=C_set_block_item(lf[359] /* chicken.errno#errno/busy */,0,C_fix((C_word)EBUSY));
t104=C_set_block_item(lf[360] /* chicken.errno#errno/child */,0,C_fix((C_word)ECHILD));
t105=C_set_block_item(lf[361] /* chicken.errno#errno/deadlk */,0,C_fix((C_word)EDEADLK));
t106=C_set_block_item(lf[362] /* chicken.errno#errno/dom */,0,C_fix((C_word)EDOM));
t107=C_set_block_item(lf[363] /* chicken.errno#errno/exist */,0,C_fix((C_word)EEXIST));
t108=C_set_block_item(lf[364] /* chicken.errno#errno/fault */,0,C_fix((C_word)EFAULT));
t109=C_set_block_item(lf[365] /* chicken.errno#errno/fbig */,0,C_fix((C_word)EFBIG));
t110=C_set_block_item(lf[366] /* chicken.errno#errno/ilseq */,0,C_fix((C_word)EILSEQ));
t111=C_set_block_item(lf[367] /* chicken.errno#errno/intr */,0,C_fix((C_word)EINTR));
t112=C_set_block_item(lf[368] /* chicken.errno#errno/inval */,0,C_fix((C_word)EINVAL));
t113=C_set_block_item(lf[369] /* chicken.errno#errno/io */,0,C_fix((C_word)EIO));
t114=C_set_block_item(lf[370] /* chicken.errno#errno/isdir */,0,C_fix((C_word)EISDIR));
t115=C_set_block_item(lf[371] /* chicken.errno#errno/mfile */,0,C_fix((C_word)EMFILE));
t116=C_set_block_item(lf[372] /* chicken.errno#errno/mlink */,0,C_fix((C_word)EMLINK));
t117=C_set_block_item(lf[373] /* chicken.errno#errno/nametoolong */,0,C_fix((C_word)ENAMETOOLONG));
t118=C_set_block_item(lf[374] /* chicken.errno#errno/nfile */,0,C_fix((C_word)ENFILE));
t119=C_set_block_item(lf[375] /* chicken.errno#errno/nodev */,0,C_fix((C_word)ENODEV));
t120=C_set_block_item(lf[376] /* chicken.errno#errno/noent */,0,C_fix((C_word)ENOENT));
t121=C_set_block_item(lf[377] /* chicken.errno#errno/noexec */,0,C_fix((C_word)ENOEXEC));
t122=C_set_block_item(lf[378] /* chicken.errno#errno/nolck */,0,C_fix((C_word)ENOLCK));
t123=C_set_block_item(lf[379] /* chicken.errno#errno/nomem */,0,C_fix((C_word)ENOMEM));
t124=C_set_block_item(lf[380] /* chicken.errno#errno/nospc */,0,C_fix((C_word)ENOSPC));
t125=C_set_block_item(lf[381] /* chicken.errno#errno/nosys */,0,C_fix((C_word)ENOSYS));
t126=C_set_block_item(lf[382] /* chicken.errno#errno/notdir */,0,C_fix((C_word)ENOTDIR));
t127=C_set_block_item(lf[383] /* chicken.errno#errno/notempty */,0,C_fix((C_word)ENOTEMPTY));
t128=C_set_block_item(lf[384] /* chicken.errno#errno/notty */,0,C_fix((C_word)ENOTTY));
t129=C_set_block_item(lf[385] /* chicken.errno#errno/nxio */,0,C_fix((C_word)ENXIO));
t130=C_set_block_item(lf[386] /* chicken.errno#errno/perm */,0,C_fix((C_word)EPERM));
t131=C_set_block_item(lf[387] /* chicken.errno#errno/pipe */,0,C_fix((C_word)EPIPE));
t132=C_set_block_item(lf[388] /* chicken.errno#errno/range */,0,C_fix((C_word)ERANGE));
t133=C_set_block_item(lf[389] /* chicken.errno#errno/rofs */,0,C_fix((C_word)EROFS));
t134=C_set_block_item(lf[390] /* chicken.errno#errno/spipe */,0,C_fix((C_word)ESPIPE));
t135=C_set_block_item(lf[391] /* chicken.errno#errno/srch */,0,C_fix((C_word)ESRCH));
t136=C_set_block_item(lf[392] /* chicken.errno#errno/wouldblock */,0,C_fix((C_word)EWOULDBLOCK));
t137=C_set_block_item(lf[393] /* chicken.errno#errno/xdev */,0,C_fix((C_word)EXDEV));
t138=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t138;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t138+1)))(2,av2);}}

/* va6124 in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_fcall va6124(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,1)))){
C_save_and_reclaim_args((void *)trva6124,2,t0,t1);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
va6122(t2,C_s_a_i_bitwise_ior(&a,2,t1,C_fix((C_word)S_IROTH)));}

/* va6126 in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_fcall va6126(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,1)))){
C_save_and_reclaim_args((void *)trva6126,2,t0,t1);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
va6124(t2,C_s_a_i_bitwise_ior(&a,2,t1,C_fix((C_word)S_IWGRP)));}

/* va6128 in k3495 in k3260 in k3043 in k2826 in k2822 in k2818 in k2268 in k2265 in k2262 in k2259 in k2256 in k2253 in k2250 */
static void C_fcall va6128(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,1)))){
C_save_and_reclaim_args((void *)trva6128,2,t0,t1);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
va6126(t2,C_s_a_i_bitwise_ior(&a,2,t1,C_fix((C_word)S_IRGRP)));}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[358] = {
{C_text("f6133:posix_2escm"),(void*)f6133},
{C_text("f6137:posix_2escm"),(void*)f6137},
{C_text("f_2252:posix_2escm"),(void*)f_2252},
{C_text("f_2255:posix_2escm"),(void*)f_2255},
{C_text("f_2258:posix_2escm"),(void*)f_2258},
{C_text("f_2261:posix_2escm"),(void*)f_2261},
{C_text("f_2264:posix_2escm"),(void*)f_2264},
{C_text("f_2267:posix_2escm"),(void*)f_2267},
{C_text("f_2270:posix_2escm"),(void*)f_2270},
{C_text("f_2356:posix_2escm"),(void*)f_2356},
{C_text("f_2369:posix_2escm"),(void*)f_2369},
{C_text("f_2374:posix_2escm"),(void*)f_2374},
{C_text("f_2378:posix_2escm"),(void*)f_2378},
{C_text("f_2390:posix_2escm"),(void*)f_2390},
{C_text("f_2394:posix_2escm"),(void*)f_2394},
{C_text("f_2404:posix_2escm"),(void*)f_2404},
{C_text("f_2425:posix_2escm"),(void*)f_2425},
{C_text("f_2428:posix_2escm"),(void*)f_2428},
{C_text("f_2439:posix_2escm"),(void*)f_2439},
{C_text("f_2445:posix_2escm"),(void*)f_2445},
{C_text("f_2470:posix_2escm"),(void*)f_2470},
{C_text("f_2577:posix_2escm"),(void*)f_2577},
{C_text("f_2581:posix_2escm"),(void*)f_2581},
{C_text("f_2588:posix_2escm"),(void*)f_2588},
{C_text("f_2592:posix_2escm"),(void*)f_2592},
{C_text("f_2595:posix_2escm"),(void*)f_2595},
{C_text("f_2599:posix_2escm"),(void*)f_2599},
{C_text("f_2620:posix_2escm"),(void*)f_2620},
{C_text("f_2624:posix_2escm"),(void*)f_2624},
{C_text("f_2633:posix_2escm"),(void*)f_2633},
{C_text("f_2641:posix_2escm"),(void*)f_2641},
{C_text("f_2648:posix_2escm"),(void*)f_2648},
{C_text("f_2659:posix_2escm"),(void*)f_2659},
{C_text("f_2663:posix_2escm"),(void*)f_2663},
{C_text("f_2666:posix_2escm"),(void*)f_2666},
{C_text("f_2684:posix_2escm"),(void*)f_2684},
{C_text("f_2688:posix_2escm"),(void*)f_2688},
{C_text("f_2698:posix_2escm"),(void*)f_2698},
{C_text("f_2703:posix_2escm"),(void*)f_2703},
{C_text("f_2707:posix_2escm"),(void*)f_2707},
{C_text("f_2709:posix_2escm"),(void*)f_2709},
{C_text("f_2713:posix_2escm"),(void*)f_2713},
{C_text("f_2715:posix_2escm"),(void*)f_2715},
{C_text("f_2719:posix_2escm"),(void*)f_2719},
{C_text("f_2721:posix_2escm"),(void*)f_2721},
{C_text("f_2725:posix_2escm"),(void*)f_2725},
{C_text("f_2737:posix_2escm"),(void*)f_2737},
{C_text("f_2740:posix_2escm"),(void*)f_2740},
{C_text("f_2746:posix_2escm"),(void*)f_2746},
{C_text("f_2756:posix_2escm"),(void*)f_2756},
{C_text("f_2800:posix_2escm"),(void*)f_2800},
{C_text("f_2804:posix_2escm"),(void*)f_2804},
{C_text("f_2806:posix_2escm"),(void*)f_2806},
{C_text("f_2812:posix_2escm"),(void*)f_2812},
{C_text("f_2820:posix_2escm"),(void*)f_2820},
{C_text("f_2824:posix_2escm"),(void*)f_2824},
{C_text("f_2828:posix_2escm"),(void*)f_2828},
{C_text("f_2830:posix_2escm"),(void*)f_2830},
{C_text("f_2849:posix_2escm"),(void*)f_2849},
{C_text("f_2917:posix_2escm"),(void*)f_2917},
{C_text("f_2925:posix_2escm"),(void*)f_2925},
{C_text("f_2927:posix_2escm"),(void*)f_2927},
{C_text("f_2935:posix_2escm"),(void*)f_2935},
{C_text("f_2937:posix_2escm"),(void*)f_2937},
{C_text("f_2945:posix_2escm"),(void*)f_2945},
{C_text("f_2947:posix_2escm"),(void*)f_2947},
{C_text("f_2955:posix_2escm"),(void*)f_2955},
{C_text("f_2957:posix_2escm"),(void*)f_2957},
{C_text("f_2965:posix_2escm"),(void*)f_2965},
{C_text("f_2967:posix_2escm"),(void*)f_2967},
{C_text("f_2975:posix_2escm"),(void*)f_2975},
{C_text("f_2977:posix_2escm"),(void*)f_2977},
{C_text("f_2985:posix_2escm"),(void*)f_2985},
{C_text("f_2990:posix_2escm"),(void*)f_2990},
{C_text("f_2997:posix_2escm"),(void*)f_2997},
{C_text("f_3000:posix_2escm"),(void*)f_3000},
{C_text("f_3006:posix_2escm"),(void*)f_3006},
{C_text("f_3012:posix_2escm"),(void*)f_3012},
{C_text("f_3045:posix_2escm"),(void*)f_3045},
{C_text("f_3073:posix_2escm"),(void*)f_3073},
{C_text("f_3081:posix_2escm"),(void*)f_3081},
{C_text("f_3110:posix_2escm"),(void*)f_3110},
{C_text("f_3123:posix_2escm"),(void*)f_3123},
{C_text("f_3129:posix_2escm"),(void*)f_3129},
{C_text("f_3133:posix_2escm"),(void*)f_3133},
{C_text("f_3141:posix_2escm"),(void*)f_3141},
{C_text("f_3143:posix_2escm"),(void*)f_3143},
{C_text("f_3147:posix_2escm"),(void*)f_3147},
{C_text("f_3155:posix_2escm"),(void*)f_3155},
{C_text("f_3157:posix_2escm"),(void*)f_3157},
{C_text("f_3173:posix_2escm"),(void*)f_3173},
{C_text("f_3182:posix_2escm"),(void*)f_3182},
{C_text("f_3196:posix_2escm"),(void*)f_3196},
{C_text("f_3202:posix_2escm"),(void*)f_3202},
{C_text("f_3206:posix_2escm"),(void*)f_3206},
{C_text("f_3209:posix_2escm"),(void*)f_3209},
{C_text("f_3212:posix_2escm"),(void*)f_3212},
{C_text("f_3227:posix_2escm"),(void*)f_3227},
{C_text("f_3229:posix_2escm"),(void*)f_3229},
{C_text("f_3232:posix_2escm"),(void*)f_3232},
{C_text("f_3236:posix_2escm"),(void*)f_3236},
{C_text("f_3239:posix_2escm"),(void*)f_3239},
{C_text("f_3248:posix_2escm"),(void*)f_3248},
{C_text("f_3262:posix_2escm"),(void*)f_3262},
{C_text("f_3265:posix_2escm"),(void*)f_3265},
{C_text("f_3284:posix_2escm"),(void*)f_3284},
{C_text("f_3288:posix_2escm"),(void*)f_3288},
{C_text("f_3291:posix_2escm"),(void*)f_3291},
{C_text("f_3305:posix_2escm"),(void*)f_3305},
{C_text("f_3309:posix_2escm"),(void*)f_3309},
{C_text("f_3312:posix_2escm"),(void*)f_3312},
{C_text("f_3337:posix_2escm"),(void*)f_3337},
{C_text("f_3341:posix_2escm"),(void*)f_3341},
{C_text("f_3344:posix_2escm"),(void*)f_3344},
{C_text("f_3347:posix_2escm"),(void*)f_3347},
{C_text("f_3375:posix_2escm"),(void*)f_3375},
{C_text("f_3379:posix_2escm"),(void*)f_3379},
{C_text("f_3383:posix_2escm"),(void*)f_3383},
{C_text("f_3420:posix_2escm"),(void*)f_3420},
{C_text("f_3427:posix_2escm"),(void*)f_3427},
{C_text("f_3436:posix_2escm"),(void*)f_3436},
{C_text("f_3446:posix_2escm"),(void*)f_3446},
{C_text("f_3450:posix_2escm"),(void*)f_3450},
{C_text("f_3453:posix_2escm"),(void*)f_3453},
{C_text("f_3474:posix_2escm"),(void*)f_3474},
{C_text("f_3482:posix_2escm"),(void*)f_3482},
{C_text("f_3486:posix_2escm"),(void*)f_3486},
{C_text("f_3497:posix_2escm"),(void*)f_3497},
{C_text("f_3499:posix_2escm"),(void*)f_3499},
{C_text("f_3503:posix_2escm"),(void*)f_3503},
{C_text("f_3505:posix_2escm"),(void*)f_3505},
{C_text("f_3524:posix_2escm"),(void*)f_3524},
{C_text("f_3529:posix_2escm"),(void*)f_3529},
{C_text("f_3535:posix_2escm"),(void*)f_3535},
{C_text("f_3576:posix_2escm"),(void*)f_3576},
{C_text("f_3584:posix_2escm"),(void*)f_3584},
{C_text("f_3587:posix_2escm"),(void*)f_3587},
{C_text("f_3592:posix_2escm"),(void*)f_3592},
{C_text("f_3598:posix_2escm"),(void*)f_3598},
{C_text("f_3604:posix_2escm"),(void*)f_3604},
{C_text("f_3608:posix_2escm"),(void*)f_3608},
{C_text("f_3613:posix_2escm"),(void*)f_3613},
{C_text("f_3615:posix_2escm"),(void*)f_3615},
{C_text("f_3619:posix_2escm"),(void*)f_3619},
{C_text("f_3621:posix_2escm"),(void*)f_3621},
{C_text("f_3637:posix_2escm"),(void*)f_3637},
{C_text("f_3643:posix_2escm"),(void*)f_3643},
{C_text("f_3646:posix_2escm"),(void*)f_3646},
{C_text("f_3662:posix_2escm"),(void*)f_3662},
{C_text("f_3672:posix_2escm"),(void*)f_3672},
{C_text("f_3678:posix_2escm"),(void*)f_3678},
{C_text("f_3689:posix_2escm"),(void*)f_3689},
{C_text("f_3693:posix_2escm"),(void*)f_3693},
{C_text("f_3697:posix_2escm"),(void*)f_3697},
{C_text("f_3702:posix_2escm"),(void*)f_3702},
{C_text("f_3712:posix_2escm"),(void*)f_3712},
{C_text("f_3715:posix_2escm"),(void*)f_3715},
{C_text("f_3727:posix_2escm"),(void*)f_3727},
{C_text("f_3732:posix_2escm"),(void*)f_3732},
{C_text("f_3751:posix_2escm"),(void*)f_3751},
{C_text("f_3774:posix_2escm"),(void*)f_3774},
{C_text("f_3776:posix_2escm"),(void*)f_3776},
{C_text("f_3780:posix_2escm"),(void*)f_3780},
{C_text("f_3786:posix_2escm"),(void*)f_3786},
{C_text("f_3789:posix_2escm"),(void*)f_3789},
{C_text("f_3794:posix_2escm"),(void*)f_3794},
{C_text("f_3800:posix_2escm"),(void*)f_3800},
{C_text("f_3806:posix_2escm"),(void*)f_3806},
{C_text("f_3810:posix_2escm"),(void*)f_3810},
{C_text("f_3813:posix_2escm"),(void*)f_3813},
{C_text("f_3821:posix_2escm"),(void*)f_3821},
{C_text("f_3827:posix_2escm"),(void*)f_3827},
{C_text("f_3831:posix_2escm"),(void*)f_3831},
{C_text("f_3838:posix_2escm"),(void*)f_3838},
{C_text("f_3841:posix_2escm"),(void*)f_3841},
{C_text("f_3845:posix_2escm"),(void*)f_3845},
{C_text("f_3866:posix_2escm"),(void*)f_3866},
{C_text("f_3868:posix_2escm"),(void*)f_3868},
{C_text("f_3893:posix_2escm"),(void*)f_3893},
{C_text("f_3902:posix_2escm"),(void*)f_3902},
{C_text("f_3908:posix_2escm"),(void*)f_3908},
{C_text("f_3933:posix_2escm"),(void*)f_3933},
{C_text("f_3946:posix_2escm"),(void*)f_3946},
{C_text("f_3952:posix_2escm"),(void*)f_3952},
{C_text("f_3966:posix_2escm"),(void*)f_3966},
{C_text("f_3973:posix_2escm"),(void*)f_3973},
{C_text("f_3983:posix_2escm"),(void*)f_3983},
{C_text("f_3992:posix_2escm"),(void*)f_3992},
{C_text("f_4006:posix_2escm"),(void*)f_4006},
{C_text("f_4013:posix_2escm"),(void*)f_4013},
{C_text("f_4023:posix_2escm"),(void*)f_4023},
{C_text("f_4032:posix_2escm"),(void*)f_4032},
{C_text("f_4039:posix_2escm"),(void*)f_4039},
{C_text("f_4047:posix_2escm"),(void*)f_4047},
{C_text("f_4054:posix_2escm"),(void*)f_4054},
{C_text("f_4062:posix_2escm"),(void*)f_4062},
{C_text("f_4066:posix_2escm"),(void*)f_4066},
{C_text("f_4071:posix_2escm"),(void*)f_4071},
{C_text("f_4076:posix_2escm"),(void*)f_4076},
{C_text("f_4082:posix_2escm"),(void*)f_4082},
{C_text("f_4086:posix_2escm"),(void*)f_4086},
{C_text("f_4091:posix_2escm"),(void*)f_4091},
{C_text("f_4096:posix_2escm"),(void*)f_4096},
{C_text("f_4100:posix_2escm"),(void*)f_4100},
{C_text("f_4105:posix_2escm"),(void*)f_4105},
{C_text("f_4111:posix_2escm"),(void*)f_4111},
{C_text("f_4115:posix_2escm"),(void*)f_4115},
{C_text("f_4120:posix_2escm"),(void*)f_4120},
{C_text("f_4124:posix_2escm"),(void*)f_4124},
{C_text("f_4129:posix_2escm"),(void*)f_4129},
{C_text("f_4135:posix_2escm"),(void*)f_4135},
{C_text("f_4139:posix_2escm"),(void*)f_4139},
{C_text("f_4144:posix_2escm"),(void*)f_4144},
{C_text("f_4148:posix_2escm"),(void*)f_4148},
{C_text("f_4153:posix_2escm"),(void*)f_4153},
{C_text("f_4158:posix_2escm"),(void*)f_4158},
{C_text("f_4164:posix_2escm"),(void*)f_4164},
{C_text("f_4168:posix_2escm"),(void*)f_4168},
{C_text("f_4173:posix_2escm"),(void*)f_4173},
{C_text("f_4182:posix_2escm"),(void*)f_4182},
{C_text("f_4192:posix_2escm"),(void*)f_4192},
{C_text("f_4195:posix_2escm"),(void*)f_4195},
{C_text("f_4199:posix_2escm"),(void*)f_4199},
{C_text("f_4202:posix_2escm"),(void*)f_4202},
{C_text("f_4208:posix_2escm"),(void*)f_4208},
{C_text("f_4217:posix_2escm"),(void*)f_4217},
{C_text("f_4221:posix_2escm"),(void*)f_4221},
{C_text("f_4226:posix_2escm"),(void*)f_4226},
{C_text("f_4248:posix_2escm"),(void*)f_4248},
{C_text("f_4252:posix_2escm"),(void*)f_4252},
{C_text("f_4255:posix_2escm"),(void*)f_4255},
{C_text("f_4258:posix_2escm"),(void*)f_4258},
{C_text("f_4261:posix_2escm"),(void*)f_4261},
{C_text("f_4264:posix_2escm"),(void*)f_4264},
{C_text("f_4273:posix_2escm"),(void*)f_4273},
{C_text("f_4291:posix_2escm"),(void*)f_4291},
{C_text("f_4295:posix_2escm"),(void*)f_4295},
{C_text("f_4298:posix_2escm"),(void*)f_4298},
{C_text("f_4304:posix_2escm"),(void*)f_4304},
{C_text("f_4307:posix_2escm"),(void*)f_4307},
{C_text("f_4313:posix_2escm"),(void*)f_4313},
{C_text("f_4331:posix_2escm"),(void*)f_4331},
{C_text("f_4344:posix_2escm"),(void*)f_4344},
{C_text("f_4353:posix_2escm"),(void*)f_4353},
{C_text("f_4358:posix_2escm"),(void*)f_4358},
{C_text("f_4366:posix_2escm"),(void*)f_4366},
{C_text("f_4405:posix_2escm"),(void*)f_4405},
{C_text("f_4446:posix_2escm"),(void*)f_4446},
{C_text("f_4450:posix_2escm"),(void*)f_4450},
{C_text("f_4459:posix_2escm"),(void*)f_4459},
{C_text("f_4490:posix_2escm"),(void*)f_4490},
{C_text("f_4497:posix_2escm"),(void*)f_4497},
{C_text("f_4506:posix_2escm"),(void*)f_4506},
{C_text("f_4552:posix_2escm"),(void*)f_4552},
{C_text("f_4556:posix_2escm"),(void*)f_4556},
{C_text("f_4559:posix_2escm"),(void*)f_4559},
{C_text("f_4562:posix_2escm"),(void*)f_4562},
{C_text("f_4568:posix_2escm"),(void*)f_4568},
{C_text("f_4580:posix_2escm"),(void*)f_4580},
{C_text("f_4582:posix_2escm"),(void*)f_4582},
{C_text("f_4603:posix_2escm"),(void*)f_4603},
{C_text("f_4628:posix_2escm"),(void*)f_4628},
{C_text("f_4640:posix_2escm"),(void*)f_4640},
{C_text("f_4667:posix_2escm"),(void*)f_4667},
{C_text("f_4681:posix_2escm"),(void*)f_4681},
{C_text("f_4720:posix_2escm"),(void*)f_4720},
{C_text("f_4745:posix_2escm"),(void*)f_4745},
{C_text("f_4750:posix_2escm"),(void*)f_4750},
{C_text("f_4757:posix_2escm"),(void*)f_4757},
{C_text("f_4764:posix_2escm"),(void*)f_4764},
{C_text("f_4803:posix_2escm"),(void*)f_4803},
{C_text("f_4807:posix_2escm"),(void*)f_4807},
{C_text("f_4819:posix_2escm"),(void*)f_4819},
{C_text("f_4830:posix_2escm"),(void*)f_4830},
{C_text("f_4847:posix_2escm"),(void*)f_4847},
{C_text("f_4862:posix_2escm"),(void*)f_4862},
{C_text("f_4866:posix_2escm"),(void*)f_4866},
{C_text("f_4930:posix_2escm"),(void*)f_4930},
{C_text("f_4947:posix_2escm"),(void*)f_4947},
{C_text("f_4951:posix_2escm"),(void*)f_4951},
{C_text("f_4955:posix_2escm"),(void*)f_4955},
{C_text("f_4967:posix_2escm"),(void*)f_4967},
{C_text("f_4974:posix_2escm"),(void*)f_4974},
{C_text("f_4978:posix_2escm"),(void*)f_4978},
{C_text("f_4982:posix_2escm"),(void*)f_4982},
{C_text("f_4986:posix_2escm"),(void*)f_4986},
{C_text("f_5006:posix_2escm"),(void*)f_5006},
{C_text("f_5014:posix_2escm"),(void*)f_5014},
{C_text("f_5039:posix_2escm"),(void*)f_5039},
{C_text("f_5053:posix_2escm"),(void*)f_5053},
{C_text("f_5055:posix_2escm"),(void*)f_5055},
{C_text("f_5060:posix_2escm"),(void*)f_5060},
{C_text("f_5069:posix_2escm"),(void*)f_5069},
{C_text("f_5096:posix_2escm"),(void*)f_5096},
{C_text("f_5099:posix_2escm"),(void*)f_5099},
{C_text("f_5104:posix_2escm"),(void*)f_5104},
{C_text("f_5110:posix_2escm"),(void*)f_5110},
{C_text("f_5135:posix_2escm"),(void*)f_5135},
{C_text("f_5137:posix_2escm"),(void*)f_5137},
{C_text("f_5197:posix_2escm"),(void*)f_5197},
{C_text("f_5269:posix_2escm"),(void*)f_5269},
{C_text("f_5279:posix_2escm"),(void*)f_5279},
{C_text("f_5290:posix_2escm"),(void*)f_5290},
{C_text("f_5296:posix_2escm"),(void*)f_5296},
{C_text("f_5302:posix_2escm"),(void*)f_5302},
{C_text("f_5308:posix_2escm"),(void*)f_5308},
{C_text("f_5314:posix_2escm"),(void*)f_5314},
{C_text("f_5320:posix_2escm"),(void*)f_5320},
{C_text("f_5326:posix_2escm"),(void*)f_5326},
{C_text("f_5332:posix_2escm"),(void*)f_5332},
{C_text("f_5338:posix_2escm"),(void*)f_5338},
{C_text("f_5344:posix_2escm"),(void*)f_5344},
{C_text("f_5350:posix_2escm"),(void*)f_5350},
{C_text("f_5356:posix_2escm"),(void*)f_5356},
{C_text("f_5362:posix_2escm"),(void*)f_5362},
{C_text("f_5368:posix_2escm"),(void*)f_5368},
{C_text("f_5374:posix_2escm"),(void*)f_5374},
{C_text("f_5380:posix_2escm"),(void*)f_5380},
{C_text("f_5386:posix_2escm"),(void*)f_5386},
{C_text("f_5392:posix_2escm"),(void*)f_5392},
{C_text("f_5398:posix_2escm"),(void*)f_5398},
{C_text("f_5404:posix_2escm"),(void*)f_5404},
{C_text("f_5410:posix_2escm"),(void*)f_5410},
{C_text("f_5416:posix_2escm"),(void*)f_5416},
{C_text("f_5422:posix_2escm"),(void*)f_5422},
{C_text("f_5428:posix_2escm"),(void*)f_5428},
{C_text("f_5434:posix_2escm"),(void*)f_5434},
{C_text("f_5440:posix_2escm"),(void*)f_5440},
{C_text("f_5446:posix_2escm"),(void*)f_5446},
{C_text("f_5452:posix_2escm"),(void*)f_5452},
{C_text("f_5458:posix_2escm"),(void*)f_5458},
{C_text("f_5464:posix_2escm"),(void*)f_5464},
{C_text("f_5470:posix_2escm"),(void*)f_5470},
{C_text("f_5488:posix_2escm"),(void*)f_5488},
{C_text("f_5533:posix_2escm"),(void*)f_5533},
{C_text("f_5537:posix_2escm"),(void*)f_5537},
{C_text("f_5542:posix_2escm"),(void*)f_5542},
{C_text("f_5549:posix_2escm"),(void*)f_5549},
{C_text("f_5567:posix_2escm"),(void*)f_5567},
{C_text("f_5571:posix_2escm"),(void*)f_5571},
{C_text("f_5573:posix_2escm"),(void*)f_5573},
{C_text("f_5577:posix_2escm"),(void*)f_5577},
{C_text("f_5580:posix_2escm"),(void*)f_5580},
{C_text("f_5589:posix_2escm"),(void*)f_5589},
{C_text("f_5610:posix_2escm"),(void*)f_5610},
{C_text("f_5614:posix_2escm"),(void*)f_5614},
{C_text("f_5616:posix_2escm"),(void*)f_5616},
{C_text("f_5620:posix_2escm"),(void*)f_5620},
{C_text("f_5622:posix_2escm"),(void*)f_5622},
{C_text("f_5626:posix_2escm"),(void*)f_5626},
{C_text("toplevel:posix_2escm"),(void*)C_posix_toplevel},
{C_text("va6106:posix_2escm"),(void*)va6106},
{C_text("va6114:posix_2escm"),(void*)va6114},
{C_text("va6122:posix_2escm"),(void*)va6122},
{C_text("va6124:posix_2escm"),(void*)va6124},
{C_text("va6126:posix_2escm"),(void*)va6126},
{C_text("va6128:posix_2escm"),(void*)va6128},
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
o|hiding unexported module binding: chicken.posix#duplicate-fileno 
o|hiding unexported module binding: chicken.posix#quote-arg-string 
o|hiding unexported module binding: chicken.posix#shell-command 
o|hiding unexported module binding: chicken.posix#shell-command-arguments 
o|hiding unexported module binding: chicken.posix#process-impl 
o|hiding unexported module binding: chicken.posix#process-wait-impl 
o|hiding unexported module binding: chicken.posix#chown 
S|applied compiler syntax:
S|  scheme#for-each		2
S|  scheme#map		3
o|eliminated procedure checks: 80 
o|specializations:
o|  4 (##sys#foreign-fixnum-argument fixnum)
o|  2 (scheme#string-length string)
o|  1 (##sys#check-output-port * * *)
o|  1 (##sys#check-input-port * * *)
o|  1 (##sys#call-with-values (procedure () *) *)
o|  3 (scheme#cdr pair)
o|  1 (chicken.base#add1 fixnum)
o|  1 (##sys#length list)
o|  1 (scheme#zero? *)
o|  1 (##sys#check-open-port * *)
o|  5 (scheme#eqv? * (or eof null fixnum char boolean symbol keyword))
o|  8 (scheme#car pair)
o|  4 (##sys#check-list (or pair list) *)
o|  1 (scheme#char=? char char)
o|  1 (scheme#zero? integer)
(o e)|safe calls: 474 
(o e)|assignments to immediate values: 114 
o|dropping redundant toplevel assignment: chicken.file.posix#file-stat 
o|dropping redundant toplevel assignment: chicken.file.posix#set-file-permissions! 
o|dropping redundant toplevel assignment: chicken.file.posix#file-modification-time 
o|dropping redundant toplevel assignment: chicken.file.posix#file-access-time 
o|dropping redundant toplevel assignment: chicken.file.posix#file-change-time 
o|dropping redundant toplevel assignment: chicken.file.posix#set-file-times! 
o|dropping redundant toplevel assignment: chicken.file.posix#file-size 
o|dropping redundant toplevel assignment: chicken.file.posix#set-file-owner! 
o|dropping redundant toplevel assignment: chicken.file.posix#set-file-group! 
o|dropping redundant toplevel assignment: chicken.process-context.posix#user-information 
o|safe globals: (chicken.file.posix#set-file-group! chicken.file.posix#set-file-owner! chicken.file.posix#file-size chicken.file.posix#set-file-times! chicken.file.posix#file-change-time chicken.file.posix#file-access-time chicken.file.posix#file-modification-time chicken.file.posix#set-file-permissions! chicken.file.posix#file-stat chicken.posix#stat ##sys#posix-error chicken.posix#posix-error chicken.process-context.posix#user-information chicken.process-context.posix#process-group-id chicken.process-context.posix#create-session chicken.process-context.posix#current-effective-user-name chicken.process-context.posix#current-user-name chicken.process-context.posix#parent-process-id chicken.process-context.posix#current-process-id chicken.process-context.posix#current-user-id chicken.process-context.posix#current-group-id chicken.process-context.posix#current-effective-user-id chicken.process-context.posix#current-effective-group-id chicken.process-context.posix#set-root-directory! chicken.process-context.posix#change-directory* chicken.process.signal#signals-list chicken.process.signal#signal/xfsz chicken.process.signal#signal/xcpu chicken.process.signal#signal/winch chicken.process.signal#signal/vtalrm chicken.process.signal#signal/usr2 chicken.process.signal#signal/usr1 chicken.process.signal#signal/urg chicken.process.signal#signal/tstp chicken.process.signal#signal/trap chicken.process.signal#signal/term chicken.process.signal#signal/stop chicken.process.signal#signal/segv chicken.process.signal#signal/quit chicken.process.signal#signal/prof chicken.process.signal#signal/pipe chicken.process.signal#signal/kill chicken.process.signal#signal/io chicken.process.signal#signal/int chicken.process.signal#signal/ill chicken.process.signal#signal/hup chicken.process.signal#signal/fpe chicken.process.signal#signal/cont chicken.process.signal#signal/chld chicken.process.signal#signal/bus chicken.process.signal#signal/break chicken.process.signal#signal/alrm chicken.process.signal#signal/abrt chicken.process.signal#signal-unmask! chicken.process.signal#signal-masked? chicken.process.signal#signal-mask! chicken.process.signal#signal-mask chicken.process.signal#signal-handler chicken.process.signal#set-signal-mask! chicken.process.signal#set-signal-handler! chicken.process.signal#set-alarm! chicken.process#spawn/detach chicken.process#spawn/nowaito chicken.process#spawn/nowait chicken.process#spawn/wait chicken.process#spawn/overlay chicken.process#pipe/buf chicken.process#process-sleep chicken.process#process* chicken.process#process chicken.process#with-output-to-pipe chicken.process#with-input-from-pipe chicken.process#open-output-pipe chicken.process#open-input-pipe chicken.process#create-pipe chicken.process#close-output-pipe chicken.process#close-input-pipe chicken.process#call-with-output-pipe chicken.process#call-with-input-pipe chicken.process#process-wait chicken.process#process-spawn chicken.process#process-signal chicken.process#process-run chicken.process#process-fork chicken.process#process-execute chicken.process#qs chicken.process#system* chicken.process#system chicken.time.posix#local-timezone-abbreviation chicken.time.posix#time->string chicken.time.posix#string->time chicken.time.posix#local-time->seconds chicken.time.posix#seconds->string chicken.time.posix#seconds->local-time chicken.time.posix#utc-time->seconds chicken.time.posix#seconds->utc-time chicken.file.posix#set-file-position! chicken.file.posix#seek/set chicken.file.posix#seek/end chicken.file.posix#seek/cur chicken.file.posix#port->fileno chicken.file.posix#perm/ixusr chicken.file.posix#perm/ixoth chicken.file.posix#perm/ixgrp chicken.file.posix#perm/iwusr chicken.file.posix#perm/iwoth chicken.file.posix#perm/iwgrp chicken.file.posix#perm/isvtx chicken.file.posix#perm/isuid chicken.file.posix#perm/isgid chicken.file.posix#perm/irwxu chicken.file.posix#perm/irwxo chicken.file.posix#perm/irwxg chicken.file.posix#perm/irusr chicken.file.posix#perm/iroth chicken.file.posix#perm/irgrp chicken.file.posix#open/wronly chicken.file.posix#open/write chicken.file.posix#open/trunc chicken.file.posix#open/text chicken.file.posix#open/sync chicken.file.posix#open/read chicken.file.posix#open/rdwr chicken.file.posix#open/rdonly chicken.file.posix#open/nonblock chicken.file.posix#open/noinherit chicken.file.posix#open/noctty chicken.file.posix#open/fsync chicken.file.posix#open/excl chicken.file.posix#open/creat chicken.file.posix#open/binary chicken.file.posix#open/append chicken.file.posix#open-output-file* chicken.file.posix#open-input-file* chicken.file.posix#fileno/stdout chicken.file.posix#fileno/stdin chicken.file.posix#fileno/stderr chicken.file.posix#symbolic-link? chicken.file.posix#socket? chicken.file.posix#regular-file? chicken.file.posix#fifo? chicken.file.posix#directory? chicken.file.posix#character-device? chicken.file.posix#block-device? chicken.file.posix#file-type chicken.file.posix#file-write chicken.file.posix#file-unlock chicken.file.posix#file-truncate chicken.file.posix#file-test-lock chicken.file.posix#file-select chicken.file.posix#file-read chicken.file.posix#file-position chicken.file.posix#file-permissions chicken.file.posix#file-owner chicken.file.posix#file-open chicken.file.posix#file-mkstemp chicken.file.posix#file-lock/blocking chicken.file.posix#file-lock chicken.file.posix#file-link chicken.file.posix#file-group chicken.file.posix#file-creation-mode chicken.file.posix#file-control chicken.file.posix#file-close chicken.file.posix#fcntl/setfl chicken.file.posix#fcntl/setfd chicken.file.posix#fcntl/getfl chicken.file.posix#fcntl/getfd chicken.file.posix#fcntl/dupfd chicken.file.posix#duplicate-fileno chicken.file.posix#read-symbolic-link chicken.file.posix#create-symbolic-link chicken.file.posix#create-fifo c1677) 
o|inlining procedure: k2361 
o|inlining procedure: k2361 
o|inlining procedure: k2379 
o|inlining procedure: k2379 
o|inlining procedure: k2406 
o|inlining procedure: k2406 
o|substituted constant variable: a2416 
o|inlining procedure: k2447 
o|inlining procedure: k2447 
o|contracted procedure: "(posix-common.scm:192) strerror647" 
o|inlining procedure: k2600 
o|inlining procedure: k2600 
o|inlining procedure: k2615 
o|inlining procedure: k2615 
o|inlining procedure: k2634 
o|inlining procedure: k2634 
o|inlining procedure: k2667 
o|inlining procedure: k2667 
o|inlining procedure: k2679 
o|inlining procedure: k2679 
o|inlining procedure: k2757 
o|inlining procedure: k2757 
o|contracted procedure: "(posix-common.scm:292) g719720" 
o|inlining procedure: k2744 
o|inlining procedure: k2744 
o|consed rest parameter at call site: "(posix-common.scm:305) chicken.posix#chown" 1 
o|consed rest parameter at call site: "(posix-common.scm:309) chicken.posix#chown" 1 
o|inlining procedure: k2844 
o|inlining procedure: k2856 
o|inlining procedure: k2856 
o|inlining procedure: k2868 
o|inlining procedure: k2868 
o|inlining procedure: k2880 
o|inlining procedure: k2880 
o|inlining procedure: k2844 
o|inlining procedure: k3001 
o|inlining procedure: k3001 
o|inlining procedure: k3016 
o|inlining procedure: k3016 
o|inlining procedure: k3029 
o|inlining procedure: k3029 
o|inlining procedure: k3079 
o|inlining procedure: k3092 
o|inlining procedure: k3092 
o|substituted constant variable: a3105 
o|inlining procedure: k3079 
o|inlining procedure: k3112 
o|inlining procedure: k3112 
o|inlining procedure: k3125 
o|inlining procedure: k3125 
o|substituted constant variable: a3160 
o|inlining procedure: k3161 
o|inlining procedure: k3161 
o|inlining procedure: k3180 
o|inlining procedure: k3180 
o|inlining procedure: k3210 
o|inlining procedure: k3210 
o|inlining procedure: k3237 
o|inlining procedure: k3237 
o|inlining procedure: k3250 
o|propagated global variable: r32515691 chicken.process-context.posix#change-directory* 
o|inlining procedure: k3250 
o|inlining procedure: k3270 
o|inlining procedure: k3270 
o|inlining procedure: k3348 
o|inlining procedure: k3348 
o|contracted procedure: "(posix-common.scm:595) ctime897" 
o|inlining procedure: k3384 
o|inlining procedure: k3384 
o|inlining procedure: k3428 
o|contracted procedure: "(posix-common.scm:618) strftime922" 
o|inlining procedure: k3414 
o|inlining procedure: k3414 
o|inlining procedure: k3428 
o|contracted procedure: "(posix-common.scm:620) asctime921" 
o|inlining procedure: k3401 
o|inlining procedure: k3401 
o|contracted procedure: "(posix-common.scm:655) chicken.posix#process-wait-impl" 
o|inlining procedure: k5259 
o|inlining procedure: k5259 
o|inlining procedure: k3537 
o|inlining procedure: k3537 
o|inlining procedure: k3623 
o|inlining procedure: k3623 
o|contracted procedure: "(posix-common.scm:688) c-string->allocated-pointer991" 
o|merged explicitly consed rest parameter: args10031024 
o|consed rest parameter at call site: tmp22198 1 
o|inlining procedure: k3704 
o|inlining procedure: k3704 
o|inlining procedure: k3753 
o|inlining procedure: k3753 
o|inlining procedure: k3811 
o|inlining procedure: k3811 
o|inlining procedure: k3870 
o|contracted procedure: "(posix-common.scm:731) g10911100" 
o|inlining procedure: k3870 
o|inlining procedure: k3917 
o|inlining procedure: k3917 
o|inlining procedure: k3935 
o|inlining procedure: k3935 
o|inlining procedure: k3948 
o|inlining procedure: k3948 
o|inlining procedure: k3964 
o|inlining procedure: k3964 
o|inlining procedure: "(posix-common.scm:760) badmode1114" 
o|substituted constant variable: a3988 
o|substituted constant variable: a3990 
o|inlining procedure: k4004 
o|inlining procedure: k4004 
o|inlining procedure: "(posix-common.scm:771) badmode1114" 
o|substituted constant variable: a4028 
o|substituted constant variable: a4030 
o|substituted constant variable: a4035 
o|substituted constant variable: a4036 
o|inlining procedure: k4037 
o|inlining procedure: k4037 
o|substituted constant variable: a4050 
o|substituted constant variable: a4051 
o|inlining procedure: k4052 
o|inlining procedure: k4052 
o|inlining procedure: k4200 
o|inlining procedure: k4200 
o|inlining procedure: k4228 
o|inlining procedure: k4228 
o|inlining procedure: k4262 
o|inlining procedure: k4262 
o|inlining procedure: k4305 
o|inlining procedure: k4305 
o|inlining procedure: k4375 
o|inlining procedure: k4375 
o|inlining procedure: k4407 
o|inlining procedure: k4407 
o|inlining procedure: k4434 
o|inlining procedure: k4434 
o|inlining procedure: k4451 
o|inlining procedure: k4451 
o|inlining procedure: k4461 
o|inlining procedure: k4461 
o|inlining procedure: k4495 
o|inlining procedure: k4495 
o|inlining procedure: k4560 
o|inlining procedure: k4560 
o|inlining procedure: k4630 
o|inlining procedure: k4630 
o|contracted procedure: "(posixwin.scm:721) needs-quoting?1391" 
o|inlining procedure: k4605 
o|inlining procedure: k4605 
o|inlining procedure: k4672 
o|inlining procedure: k4672 
o|inlining procedure: k4755 
o|inlining procedure: k4755 
o|inlining procedure: k4808 
o|inlining procedure: k4808 
o|inlining procedure: k4835 
o|inlining procedure: k4835 
o|inlining procedure: "(posixwin.scm:773) chicken.posix#shell-command-arguments" 
o|merged explicitly consed rest parameter: rest15031511 
o|substituted constant variable: g154515461553 
o|substituted constant variable: g154515461553 
o|substituted constant variable: g154515461553 
o|substituted constant variable: g154715481554 
o|substituted constant variable: g154715481554 
o|substituted constant variable: g154715481554 
o|substituted constant variable: g154915501555 
o|substituted constant variable: g154915501555 
o|substituted constant variable: g154915501555 
o|substituted constant variable: g155115521556 
o|substituted constant variable: g155115521556 
o|substituted constant variable: g155115521556 
o|inlining procedure: k4938 
o|inlining procedure: k4953 
o|inlining procedure: k4953 
o|inlining procedure: k4938 
o|contracted procedure: "(posixwin.scm:810) c-process1467" 
o|inlining procedure: k5000 
o|inlining procedure: k5000 
o|inlining procedure: k5004 
o|inlining procedure: k5004 
o|inlining procedure: k5016 
o|inlining procedure: k5016 
o|inlining procedure: k5071 
o|inlining procedure: k5071 
o|consed rest parameter at call site: "(posixwin.scm:843) chicken.posix#process-impl" 8 
o|inlining procedure: k5112 
o|inlining procedure: k5112 
o|inlining procedure: "(posixwin.scm:839) chicken.posix#shell-command-arguments" 
o|inlining procedure: k5271 
o|inlining procedure: k5271 
o|merged explicitly consed rest parameter: _16721676 
o|inlining procedure: k5554 
o|inlining procedure: k5554 
o|inlining procedure: k5578 
o|inlining procedure: k5578 
o|inlining procedure: k5590 
o|inlining procedure: k5590 
o|inlining procedure: k5600 
o|inlining procedure: k5600 
o|replaced variables: 769 
o|removed binding forms: 578 
o|substituted constant variable: r26015636 
o|substituted constant variable: r27455649 
o|substituted constant variable: r27455649 
o|inlining procedure: "(posix-common.scm:305) chicken.posix#chown" 
o|inlining procedure: "(posix-common.scm:309) chicken.posix#chown" 
o|substituted constant variable: r28575652 
o|substituted constant variable: r28695654 
o|substituted constant variable: r28815656 
o|substituted constant variable: r28455658 
o|substituted constant variable: r30175662 
o|inlining procedure: k3079 
o|substituted constant variable: r30935667 
o|inlining procedure: k3079 
o|inlining procedure: k3079 
o|substituted constant variable: r31265673 
o|substituted constant variable: r31265673 
o|substituted constant variable: r31265675 
o|substituted constant variable: r31265675 
o|propagated global variable: g8508515692 chicken.process-context.posix#change-directory* 
o|substituted constant variable: r34155711 
o|substituted constant variable: r34155711 
o|substituted constant variable: r34025718 
o|substituted constant variable: r34025718 
o|substituted constant variable: r39185744 
o|removed side-effect free assignment to unused variable: badmode1114 
o|substituted constant variable: r39495747 
o|substituted constant variable: r39495747 
o|substituted constant variable: r39495749 
o|substituted constant variable: r39495749 
o|inlining procedure: k3964 
o|inlining procedure: k4004 
o|substituted constant variable: r44525805 
o|substituted constant variable: r44525805 
o|substituted constant variable: r46065825 
o|removed side-effect free assignment to unused variable: chicken.posix#shell-command-arguments 
o|contracted procedure: "(posixwin.scm:843) chicken.posix#process-impl" 
o|substituted constant variable: r49545845 
o|substituted constant variable: r49545845 
o|substituted constant variable: c-pointer14701487 
o|substituted constant variable: c-pointer14701487 
o|substituted constant variable: r50015848 
o|substituted constant variable: r50015848 
o|substituted constant variable: r50015850 
o|substituted constant variable: r50015850 
o|removed unused formal parameters: (_16721676) 
o|substituted constant variable: r55915878 
o|replaced variables: 84 
o|removed binding forms: 642 
o|removed conditional forms: 1 
o|inlining procedure: k3488 
o|inlining procedure: k3488 
o|inlining procedure: k3713 
o|inlining procedure: k4277 
o|inlining procedure: k4277 
o|inlining procedure: k4324 
o|inlining procedure: k4324 
o|substituted constant variable: stdinf1509 
o|substituted constant variable: stdoutf1508 
o|contracted procedure: k4868 
o|substituted constant variable: stdoutf1508 
o|substituted constant variable: stdinf1509 
o|inlining procedure: k5154 
o|inlining procedure: k5214 
o|removed side-effect free assignment to unused variable: chicken.posix#chown 
o|replaced variables: 8 
o|removed binding forms: 123 
o|removed conditional forms: 4 
o|substituted constant variable: r30805893 
o|substituted constant variable: r30805895 
o|substituted constant variable: r30805897 
o|substituted constant variable: r34895957 
o|contracted procedure: k3638 
o|substituted constant variable: r42785974 
o|substituted constant variable: r43255976 
o|contracted procedure: k4935 
o|substituted constant variable: r4869 
o|contracted procedure: k4992 
o|contracted procedure: k4996 
o|inlining procedure: k5551 
o|inlining procedure: k5551 
o|simplifications: ((let . 3)) 
o|replaced variables: 1 
o|removed binding forms: 18 
o|removed conditional forms: 2 
o|substituted constant variable: r4993 
o|substituted constant variable: r4997 
o|folded constant expression: (scheme#+ (quote 0) (quote 0) (quote 0)) 
o|substituted constant variable: r4993 
o|substituted constant variable: r4997 
o|folded constant expression: (scheme#+ (quote 0) (quote 0) (quote 4)) 
o|substituted constant variable: r55526018 
o|replaced variables: 1 
o|removed binding forms: 9 
o|removed binding forms: 4 
o|simplifications: ((let . 22) (if . 58) (##core#call . 309)) 
o|  call simplifications:
o|    scheme#<
o|    ##sys#foreign-pointer-argument	4
o|    scheme#string-length
o|    scheme#char-whitespace?
o|    scheme#*
o|    chicken.fixnum#fx>=	2
o|    scheme#string-ref	3
o|    scheme#string-set!
o|    chicken.bitwise#bitwise-ior	2
o|    chicken.fixnum#fxior	2
o|    scheme#list	5
o|    scheme#call-with-values	4
o|    ##sys#check-pair
o|    ##sys#check-list	4
o|    ##sys#apply	2
o|    chicken.fixnum#fx+	6
o|    ##sys#call-with-values	3
o|    scheme#values	10
o|    scheme#vector-set!	2
o|    ##sys#foreign-block-argument	2
o|    scheme#=
o|    ##sys#foreign-ranged-integer-argument
o|    chicken.fixnum#fx-	6
o|    ##sys#check-vector
o|    ##sys#size	6
o|    ##sys#null-pointer?	2
o|    scheme#not	3
o|    ##sys#setislot
o|    chicken.fixnum#fx=	16
o|    scheme#cdr	18
o|    ##sys#foreign-string-argument	3
o|    scheme#vector
o|    chicken.base#fixnum?	5
o|    scheme#string?	2
o|    ##sys#foreign-fixnum-argument	2
o|    scheme#null?	48
o|    scheme#car	31
o|    scheme#string->list
o|    scheme#pair?	12
o|    scheme#cons	8
o|    ##sys#setslot	3
o|    ##sys#slot	19
o|    scheme#apply	11
o|    scheme#char=?
o|    scheme#string	3
o|    scheme#eq?	25
o|    ##sys#check-string	11
o|    chicken.fixnum#fx<	11
o|contracted procedure: k2358 
o|contracted procedure: k2364 
o|contracted procedure: k2382 
o|contracted procedure: k2481 
o|contracted procedure: k2395 
o|contracted procedure: k2478 
o|contracted procedure: k2398 
o|contracted procedure: k2401 
o|contracted procedure: k2409 
o|contracted procedure: k2433 
o|contracted procedure: k2441 
o|contracted procedure: k2450 
o|contracted procedure: k2453 
o|contracted procedure: k2456 
o|contracted procedure: k2464 
o|contracted procedure: k2472 
o|contracted procedure: k2484 
o|contracted procedure: k2574 
o|contracted procedure: k2603 
o|contracted procedure: k2612 
o|contracted procedure: k2628 
o|contracted procedure: k2652 
o|contracted procedure: k2643 
o|contracted procedure: k2670 
o|contracted procedure: k2676 
o|contracted procedure: k2692 
o|contracted procedure: k2784 
o|contracted procedure: k2726 
o|contracted procedure: k2778 
o|contracted procedure: k2729 
o|contracted procedure: k2772 
o|contracted procedure: k2732 
o|contracted procedure: k2760 
o|contracted procedure: k2751 
o|contracted procedure: k2790 
o|contracted procedure: k2910 
o|contracted procedure: k2832 
o|contracted procedure: k2904 
o|contracted procedure: k2835 
o|contracted procedure: k2898 
o|contracted procedure: k2838 
o|contracted procedure: k2892 
o|contracted procedure: k2841 
o|contracted procedure: k2853 
o|contracted procedure: k2859 
o|contracted procedure: k2865 
o|contracted procedure: k2871 
o|contracted procedure: k2877 
o|contracted procedure: k2883 
o|contracted procedure: k2889 
o|contracted procedure: k3038 
o|contracted procedure: k2992 
o|contracted procedure: k3026 
o|contracted procedure: k3013 
o|contracted procedure: k3022 
o|contracted procedure: k3032 
o|contracted procedure: k3082 
o|contracted procedure: k3089 
o|contracted procedure: k3095 
o|contracted procedure: k3115 
o|contracted procedure: k3198 
o|contracted procedure: k3164 
o|contracted procedure: k3177 
o|contracted procedure: k3183 
o|contracted procedure: k3213 
o|contracted procedure: k3219 
o|contracted procedure: k3222 
o|contracted procedure: k3240 
o|contracted procedure: k3256 
o|contracted procedure: k3267 
o|contracted procedure: k3280 
o|contracted procedure: k3273 
o|contracted procedure: k3295 
o|inlining procedure: k3286 
o|contracted procedure: k3316 
o|inlining procedure: k3307 
o|contracted procedure: k3359 
o|contracted procedure: k3355 
o|contracted procedure: k3333 
o|contracted procedure: k3365 
o|contracted procedure: k3387 
o|contracted procedure: k3475 
o|contracted procedure: k3422 
o|contracted procedure: k3431 
o|contracted procedure: k3414 
o|contracted procedure: k3465 
o|contracted procedure: k3461 
o|contracted procedure: k3401 
o|contracted procedure: k3567 
o|contracted procedure: k3507 
o|contracted procedure: k3561 
o|contracted procedure: k3510 
o|contracted procedure: k3555 
o|contracted procedure: k3513 
o|contracted procedure: k3549 
o|contracted procedure: k3516 
o|contracted procedure: k3519 
o|contracted procedure: k3540 
o|contracted procedure: k3578 
o|contracted procedure: k3626 
o|contracted procedure: k3629 
o|contracted procedure: k3666 
o|contracted procedure: k3632 
o|contracted procedure: k3653 
o|contracted procedure: k3707 
o|contracted procedure: k3720 
o|contracted procedure: k37205964 
o|contracted procedure: k3729 
o|contracted procedure: k3734 
o|contracted procedure: k3737 
o|contracted procedure: k3756 
o|contracted procedure: k3766 
o|contracted procedure: k3770 
o|contracted procedure: k3781 
o|contracted procedure: k3847 
o|contracted procedure: k3861 
o|contracted procedure: k3873 
o|contracted procedure: k3876 
o|contracted procedure: k3879 
o|contracted procedure: k3887 
o|contracted procedure: k3895 
o|contracted procedure: k3856 
o|contracted procedure: k3920 
o|contracted procedure: k3938 
o|contracted procedure: k3954 
o|contracted procedure: k3967 
o|contracted procedure: k3977 
o|contracted procedure: k3994 
o|contracted procedure: k4007 
o|contracted procedure: k4017 
o|contracted procedure: k4040 
o|contracted procedure: k4055 
o|contracted procedure: k4212 
o|contracted procedure: k4184 
o|contracted procedure: k4187 
o|contracted procedure: k4203 
o|contracted procedure: k4231 
o|contracted procedure: k4237 
o|contracted procedure: k4268 
o|contracted procedure: k4283 
o|contracted procedure: k4317 
o|contracted procedure: k4299 
o|contracted procedure: k4308 
o|contracted procedure: k4333 
o|contracted procedure: k4336 
o|contracted procedure: k4345 
o|contracted procedure: k4372 
o|contracted procedure: k4378 
o|contracted procedure: k4384 
o|contracted procedure: k4391 
o|contracted procedure: k4401 
o|contracted procedure: k4410 
o|contracted procedure: k4424 
o|contracted procedure: k4413 
o|contracted procedure: k4420 
o|contracted procedure: k4428 
o|contracted procedure: k4437 
o|contracted procedure: k4455 
o|contracted procedure: k4471 
o|contracted procedure: k4477 
o|contracted procedure: k4484 
o|contracted procedure: k4511 
o|contracted procedure: k4492 
o|contracted procedure: k4501 
o|contracted procedure: k4548 
o|contracted procedure: k4563 
o|contracted procedure: k4572 
o|contracted procedure: k4575 
o|contracted procedure: k4596 
o|contracted procedure: k4608 
o|contracted procedure: k4625 
o|contracted procedure: k4614 
o|contracted procedure: k4621 
o|contracted procedure: k4713 
o|contracted procedure: k4642 
o|contracted procedure: k4707 
o|contracted procedure: k4645 
o|contracted procedure: k4701 
o|contracted procedure: k4648 
o|contracted procedure: k4695 
o|contracted procedure: k4651 
o|contracted procedure: k4689 
o|contracted procedure: k4654 
o|contracted procedure: k4683 
o|contracted procedure: k4657 
o|contracted procedure: k4660 
o|contracted procedure: k4669 
o|contracted procedure: k4675 
o|contracted procedure: k4796 
o|contracted procedure: k4722 
o|contracted procedure: k4790 
o|contracted procedure: k4725 
o|contracted procedure: k4784 
o|contracted procedure: k4728 
o|contracted procedure: k4778 
o|contracted procedure: k4731 
o|contracted procedure: k4772 
o|contracted procedure: k4734 
o|contracted procedure: k4766 
o|contracted procedure: k4737 
o|contracted procedure: k4740 
o|contracted procedure: k4752 
o|contracted procedure: k4758 
o|contracted procedure: k4852 
o|contracted procedure: k4832 
o|contracted procedure: k4849 
o|contracted procedure: k5057 
o|contracted procedure: k5074 
o|contracted procedure: k5084 
o|contracted procedure: k5088 
o|contracted procedure: k5091 
o|contracted procedure: k5047 
o|contracted procedure: k4922 
o|contracted procedure: k4925 
o|contracted procedure: k4988 
o|contracted procedure: k4872 
o|contracted procedure: k4876 
o|contracted procedure: k4880 
o|contracted procedure: k4884 
o|contracted procedure: k4888 
o|contracted procedure: k4910 
o|contracted procedure: k4917 
o|contracted procedure: k5007 
o|contracted procedure: k5019 
o|contracted procedure: k5022 
o|contracted procedure: k5025 
o|contracted procedure: k5033 
o|contracted procedure: k5041 
o|contracted procedure: k5129 
o|contracted procedure: k5190 
o|contracted procedure: k5139 
o|contracted procedure: k5184 
o|contracted procedure: k5142 
o|contracted procedure: k5178 
o|contracted procedure: k5145 
o|contracted procedure: k5172 
o|contracted procedure: k5148 
o|contracted procedure: k5166 
o|contracted procedure: k5151 
o|contracted procedure: k5160 
o|contracted procedure: k5154 
o|contracted procedure: k5250 
o|contracted procedure: k5199 
o|contracted procedure: k5244 
o|contracted procedure: k5202 
o|contracted procedure: k5238 
o|contracted procedure: k5205 
o|contracted procedure: k5232 
o|contracted procedure: k5208 
o|contracted procedure: k5226 
o|contracted procedure: k5211 
o|contracted procedure: k5220 
o|contracted procedure: k5214 
o|contracted procedure: k5560 
o|contracted procedure: k5544 
o|contracted procedure: k5581 
o|contracted procedure: k5597 
o|contracted procedure: k5593 
o|contracted procedure: k5603 
o|simplifications: ((if . 1) (##core#call . 9) (let . 68)) 
o|  call simplifications:
o|    scheme#*	2
o|    chicken.bitwise#bitwise-ior	7
o|removed binding forms: 257 
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
o|contracted procedure: k4179 
(o x)|known list op on rest arg sublist: ##core#rest-car mode1299 0 
o|contracted procedure: k4339 
o|contracted procedure: k4368 
o|contracted procedure: k4464 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest13691370 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest13691370 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest14051407 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest14051407 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest14051407 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest14051407 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest14301433 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest14301433 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest14301433 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest14301433 0 
(o x)|known list op on rest arg sublist: ##core#rest-car args1464 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest16331635 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest16331635 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest16331635 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest16331635 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest16511653 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest16511653 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest16511653 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest16511653 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest855856 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest855856 0 
o|removed binding forms: 4 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2836 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r2836 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2836 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r2836 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r3511 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r3511 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r3511 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r3511 1 
o|removed side-effect free assignment to unused variable: mode1113 
(o x)|known list op on rest arg sublist: ##core#rest-null? r4646 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r4646 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r4646 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r4646 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r4726 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r4726 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r4726 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r4726 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r5143 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r5143 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r5143 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r5143 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r5203 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r5203 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r5203 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r5203 1 
o|replaced variables: 6 
(o x)|known list op on rest arg sublist: ##core#rest-null? r4652 2 
(o x)|known list op on rest arg sublist: ##core#rest-car r4652 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r4652 2 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r4652 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r4732 2 
(o x)|known list op on rest arg sublist: ##core#rest-car r4732 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r4732 2 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r4732 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r5149 2 
(o x)|known list op on rest arg sublist: ##core#rest-car r5149 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r5149 2 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r5149 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r5209 2 
(o x)|known list op on rest arg sublist: ##core#rest-car r5209 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r5209 2 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r5209 2 
o|converted assignments to bindings: (check1115) 
o|simplifications: ((let . 1)) 
o|removed binding forms: 14 
o|contracted procedure: k3957 
o|contracted procedure: k3997 
o|removed binding forms: 10 
o|direct leaf routine/allocation: g10421049 0 
o|direct leaf routine/allocation: suffix-loop1357 0 
o|direct leaf routine/allocation: loop1344 0 
o|direct leaf routine/allocation: loop1394 0 
o|direct leaf routine/allocation: g15981605 0 
o|contracted procedure: "(posix-common.scm:704) k3759" 
o|contracted procedure: k4348 
o|contracted procedure: k4360 
o|converted assignments to bindings: (suffix-loop1357) 
o|converted assignments to bindings: (loop1344) 
o|contracted procedure: k4633 
o|converted assignments to bindings: (loop1394) 
o|contracted procedure: "(posixwin.scm:833) k5077" 
o|simplifications: ((let . 3)) 
o|removed binding forms: 5 
o|direct leaf routine/allocation: for-each-loop10411054 0 
o|direct leaf routine/allocation: for-each-loop15971615 0 
o|converted assignments to bindings: (for-each-loop10411054) 
o|converted assignments to bindings: (for-each-loop15971615) 
o|simplifications: ((let . 2)) 
o|customizable procedures: (va6128 va6126 va6124 va6122 %process1586 chkstrlst1593 map-loop15211538 chicken.posix#shell-command chicken.posix#call-with-exec-args k4557 va6114 va6106 loop1355 check1115 chicken.posix#check-environment-list map-loop10851103 chicken.posix#list->c-string-buffer k3829 doloop10291030 tmp12197 tmp22198 doloop10101011 chicken.posix#free-c-string-buffer chicken.posix#check-time-vector k3207 mode797 check798 k2754 chicken.posix#stat g261270 map-loop255277) 
o|calls to known targets: 114 
o|unused rest argument: rest242244 f_2390 
o|unused rest argument: rest683685 f_2641 
o|unused rest argument: rest749751 f_2830 
o|unused rest argument: rest878879 f_3284 
o|unused rest argument: rest889890 f_3305 
o|unused rest argument: rest907908 f_3337 
o|unused rest argument: rest948950 f_3420 
o|unused rest argument: args971 f_3505 
o|identified direct recursive calls: f_3751 1 
o|identified direct recursive calls: f_4459 1 
o|identified direct recursive calls: f_4405 1 
o|unused rest argument: rest13691370 f_4490 
o|identified direct recursive calls: f_4603 1 
o|unused rest argument: rest14051407 f_4640 
o|unused rest argument: rest14301433 f_4720 
o|identified direct recursive calls: f_5069 1 
o|unused rest argument: rest16331635 f_5137 
o|unused rest argument: rest16511653 f_5197 
o|unused rest argument: _16801683 f_5290 
o|unused rest argument: _16861689 f_5296 
o|unused rest argument: _16921695 f_5302 
o|unused rest argument: _16981701 f_5308 
o|unused rest argument: _17041707 f_5314 
o|unused rest argument: _17101713 f_5320 
o|unused rest argument: _17161719 f_5326 
o|unused rest argument: _17221725 f_5332 
o|unused rest argument: _17341737 f_5338 
o|unused rest argument: _17401743 f_5344 
o|unused rest argument: _17461749 f_5350 
o|unused rest argument: _17521755 f_5356 
o|unused rest argument: _17581761 f_5362 
o|unused rest argument: _17641767 f_5368 
o|unused rest argument: _17701773 f_5374 
o|unused rest argument: _17761779 f_5380 
o|unused rest argument: _17821785 f_5386 
o|unused rest argument: _17881791 f_5392 
o|unused rest argument: _17941797 f_5398 
o|unused rest argument: _18001803 f_5404 
o|unused rest argument: _18061809 f_5410 
o|unused rest argument: _18121815 f_5416 
o|unused rest argument: _18181821 f_5422 
o|unused rest argument: _18241827 f_5428 
o|unused rest argument: _18301833 f_5434 
o|unused rest argument: _18361839 f_5440 
o|unused rest argument: _18421845 f_5446 
o|unused rest argument: _18481851 f_5452 
o|unused rest argument: _18541857 f_5458 
o|unused rest argument: _18601863 f_5464 
o|unused rest argument: _18661869 f_5470 
o|unused rest argument: rest855856 f_5542 
o|fast box initializations: 10 
o|fast global references: 83 
o|fast global assignments: 12 
o|dropping unused closure argument: f_2595 
o|dropping unused closure argument: f_3073 
o|dropping unused closure argument: f_3110 
o|dropping unused closure argument: f_3265 
o|dropping unused closure argument: f_3576 
o|dropping unused closure argument: f_3693 
o|dropping unused closure argument: f_3727 
o|dropping unused closure argument: f_3933 
o|dropping unused closure argument: f_4803 
o|dropping unused closure argument: f_5053 
*/
/* end of file */
