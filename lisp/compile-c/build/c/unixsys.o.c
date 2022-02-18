#line 1 "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/src/c/unixsys.d"
/* -*- Mode: C; c-basic-offset: 2; indent-tabs-mode: nil -*- */
/* vim: set filetype=c tabstop=2 shiftwidth=2 expandtab: */

/*
 * unixsys.s - Unix shell interface
 *
 * Copyright (c) 1984 Taiichi Yuasa and Masami Hagiya
 * Copyright (c) 1990 Giuseppe Attardi
 * Copyright (c) 2001 Juan Jose Garcia Ripoll
 *
 * See file 'LICENSE' for the copyright details.
 *
 */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <fcntl.h>
#include <errno.h>
#include <signal.h> /* to see whether we have SIGCHLD */
#if !defined(_MSC_VER)
# include <unistd.h>
#endif
#include <ecl/ecl.h>
#include <ecl/internal.h>
#if defined(ECL_MS_WINDOWS_HOST)
# include <windows.h>
#endif
#ifdef HAVE_SYS_WAIT_H
# include <sys/wait.h>
#endif
#include <ecl/ecl-inl.h>

/* Mingw defines 'environ' to be a macro instead of a global variable. */
#ifdef environ
# undef environ
#endif

cl_object
si_system(cl_object cmd_string)
{
#if !defined(HAVE_SYSTEM)
  FElibc_error("si_system not implemented",1);
  {
#line 44
	const cl_env_ptr the_env = ecl_process_env();
#line 44
	#line 44
	cl_object __value0 = ECL_NIL;
#line 44
	the_env->nvalues = 1;
#line 44
	the_env->values[0] = __value0;
#line 44
	#line 44
	return __value0;
#line 44
}
;
#else
  cl_object cmd = si_copy_to_simple_base_string(cmd_string);
  int code = system((const char *)(cmd->base_string.self));
  {
#line 48
	const cl_env_ptr the_env = ecl_process_env();
#line 48
	#line 48
	cl_object __value0 = ecl_make_fixnum(code);
#line 48
	the_env->nvalues = 1;
#line 48
	the_env->values[0] = __value0;
#line 48
	#line 48
	return __value0;
#line 48
}
;
#endif
}

cl_object
si_getpid(void)
{
#if defined(NACL)
  FElibc_error("si_getpid not implemented",1);
  {
#line 57
	const cl_env_ptr the_env = ecl_process_env();
#line 57
	#line 57
	cl_object __value0 = ECL_NIL;
#line 57
	the_env->nvalues = 1;
#line 57
	the_env->values[0] = __value0;
#line 57
	#line 57
	return __value0;
#line 57
}
;
#else
  {
#line 59
	const cl_env_ptr the_env = ecl_process_env();
#line 59
	#line 59
	cl_object __value0 = ecl_make_fixnum(getpid());
#line 59
	the_env->nvalues = 1;
#line 59
	the_env->values[0] = __value0;
#line 59
	#line 59
	return __value0;
#line 59
}
;
#endif
}

cl_object
si_getuid(void)
{
#if defined(ECL_MS_WINDOWS_HOST)
  {
#line 67
	const cl_env_ptr the_env = ecl_process_env();
#line 67
	#line 67
	cl_object __value0 = ecl_make_fixnum(0);
#line 67
	the_env->nvalues = 1;
#line 67
	the_env->values[0] = __value0;
#line 67
	#line 67
	return __value0;
#line 67
}
;
#else
  {
#line 69
	const cl_env_ptr the_env = ecl_process_env();
#line 69
	#line 69
	cl_object __value0 = ecl_make_integer(getuid());
#line 69
	the_env->nvalues = 1;
#line 69
	the_env->values[0] = __value0;
#line 69
	#line 69
	return __value0;
#line 69
}
;
#endif
}

ecl_def_ct_base_string(fake_in_name, "PIPE-READ-ENDPOINT", 18, static, const);
ecl_def_ct_base_string(fake_out_name, "PIPE-WRITE-ENDPOINT", 19, static, const);

cl_object
si_make_pipe()
{
#if defined(NACL)
  FElibc_error("si_make_pipe not implemented",1);
  {
#line 81
	const cl_env_ptr the_env = ecl_process_env();
#line 81
	#line 81
	cl_object __value0 = ECL_NIL;
#line 81
	the_env->nvalues = 1;
#line 81
	the_env->values[0] = __value0;
#line 81
	#line 81
	return __value0;
#line 81
}
;
#else
  cl_object output;
  int fds[2], ret;
#if defined(ECL_MS_WINDOWS_HOST)
  ret = _pipe(fds, 4096, _O_BINARY);
#else
  ret = pipe(fds);
#endif
  if (ret < 0) {
    FElibc_error("Unable to create pipe", 0);
    output = ECL_NIL;
  } else {
    cl_object in = ecl_make_stream_from_fd(fake_in_name, fds[0], ecl_smm_input, 8,
                                           ECL_STREAM_DEFAULT_FORMAT, ECL_NIL);
    cl_object out = ecl_make_stream_from_fd(fake_out_name, fds[1], ecl_smm_output, 8,
                                            ECL_STREAM_DEFAULT_FORMAT, ECL_NIL);
    output = cl_make_two_way_stream(in, out);
  }
  {
#line 100
	const cl_env_ptr the_env = ecl_process_env();
#line 100
	#line 100
	cl_object __value0 = output;
#line 100
	the_env->nvalues = 1;
#line 100
	the_env->values[0] = __value0;
#line 100
	#line 100
	return __value0;
#line 100
}
;
#endif
}

static cl_object
from_list_to_execve_argument(cl_object l, char ***environp)
{
  cl_object p;
  cl_index i, j, total_size = 0, nstrings = 0;
  cl_object buffer;
  char **environ;
  for (p = l; !Null(p); p = ECL_CONS_CDR(p)) {
    cl_object s = ECL_CONS_CAR(p);
    total_size += s->base_string.fillp + 1;
    nstrings++;
  }
  /* Extra place for ending null */
  total_size++;
  buffer = ecl_alloc_simple_base_string(++total_size);
  environ = ecl_alloc_atomic((nstrings + 1) * sizeof(char*));
  for (j = i = 0, p = l; !Null(p); p = ECL_CONS_CDR(p)) {
    cl_object s = ECL_CONS_CAR(p);
    cl_index l = s->base_string.fillp;

    environ[j++] = (char*)(buffer->base_string.self + i);
    memcpy(buffer->base_string.self + i,
           s->base_string.self,
           l);
    i += l;
    buffer->base_string.self[i++] = 0;
  }
  buffer->base_string.self[i++] = 0;
  environ[j] = 0;
  if (environp) *environp = environ;
  return buffer;
}

cl_object
si_waitpid(cl_object pid, cl_object wait)
{
  cl_object status, code;
#if defined(NACL)
  FElibc_error("si_waitpid not implemented",1);
  {
#line 143
	const cl_env_ptr the_env = ecl_process_env();
#line 143
	#line 143
	cl_object __value0 = ECL_NIL;
#line 143
	the_env->nvalues = 1;
#line 143
	the_env->values[0] = __value0;
#line 143
	#line 143
	return __value0;
#line 143
}
;
#elif defined(ECL_MS_WINDOWS_HOST)
  cl_env_ptr the_env = ecl_process_env();
  HANDLE *hProcess = ecl_foreign_data_pointer_safe(pid);
  DWORD exitcode;
  int ok;
  WaitForSingleObject(*hProcess, Null(wait)? 0 : INFINITE);
  ecl_disable_interrupts_env(the_env);
  ok = GetExitCodeProcess(*hProcess, &exitcode);
  if (!ok) {
    status = ECL_SYM(":ERROR",1251);
    code = ECL_NIL;
  } else if (exitcode == STILL_ACTIVE) {
    status = ECL_SYM(":RUNNING",1824);
    code = ECL_NIL;
  } else {
    status = ECL_SYM(":EXITED",1825);
    code = ecl_make_fixnum((int)exitcode);
    pid->foreign.data = NULL;
    CloseHandle(*hProcess);
  }
  ecl_enable_interrupts_env(the_env);
#else
  int code_int, error;

  if (Null(wait))
    error = waitpid(ecl_to_fix(pid), &code_int, WNOHANG | WUNTRACED | WCONTINUED);
  else
    error = waitpid(ecl_to_fix(pid), &code_int, 0);

  if (error < 0) {
    if (errno == EINTR) {
      status = ECL_SYM(":ABORT",1217);
    } else {
      status = ECL_SYM(":ERROR",1251);
    }
    code = ECL_NIL;
    pid = ECL_NIL;
  } else if (error == 0) {
    status = ECL_NIL;
    code = ECL_NIL;
    pid = ECL_NIL;
  } else {
    pid = ecl_make_fixnum(error);
    if (WIFEXITED(code_int)) {
      status = ECL_SYM(":EXITED",1825);
      code = ecl_make_fixnum(WEXITSTATUS(code_int));
    } else if (WIFSIGNALED(code_int)) {
      status = ECL_SYM(":SIGNALED",1826);
      code = ecl_make_fixnum(WTERMSIG(code_int));
    } else if (WIFSTOPPED(code_int)) {
      status = ECL_SYM(":STOPPED",1827);
      code = ecl_make_fixnum(WSTOPSIG(code_int));
    } else if (WIFCONTINUED(code_int)) {
      status = ECL_SYM(":RESUMED",1828);
      code = ecl_make_fixnum(SIGCONT);
    } else {
      status = ECL_SYM(":RUNNING",1824);
      code = ECL_NIL;
    }
  }
#endif
  {
#line 205
	const cl_env_ptr the_env = ecl_process_env();
#line 205
	#line 205
	cl_object __value0 = status;
#line 205
	cl_object __value1 = code;
#line 205
	cl_object __value2 = pid;
#line 205
	the_env->nvalues = 3;
#line 205
	the_env->values[2] = __value2;
#line 205
	the_env->values[1] = __value1;
#line 205
	the_env->values[0] = __value0;
#line 205
	#line 205
	return __value0;
#line 205
}
;
}

#if !defined(ECL_MS_WINDOWS_HOST)
cl_object
si_killpid(cl_object pid, cl_object signal) {
  int ret = kill(ecl_fixnum(pid), ecl_fixnum(signal));
  return ecl_make_fixnum(ret);
}
#endif

#if defined(ECL_MS_WINDOWS_HOST)
cl_object
si_close_windows_handle(cl_object h)
{
  if (ecl_t_of(h) == t_foreign) {
    HANDLE *ph = (HANDLE*)h->foreign.data;
    if (ph) CloseHandle(*ph);
  }
}

static cl_object
make_windows_handle(HANDLE h)
{
  cl_object foreign = ecl_allocate_foreign_data(ECL_SYM(":POINTER-VOID",1410),
                                                sizeof(HANDLE*));
  HANDLE *ph = (HANDLE*)foreign->foreign.data;
  *ph = h;
  si_set_finalizer(foreign, ECL_SYM("SI::CLOSE-WINDOWS-HANDLE",1833));
  return foreign;
}
#endif

#if defined(ECL_MS_WINDOWS_HOST)
HANDLE
ecl_stream_to_HANDLE(cl_object s, bool output)
{
  if (ecl_unlikely(!ECL_ANSI_STREAM_P(s)))
    return INVALID_HANDLE_VALUE;
  switch ((enum ecl_smmode)s->stream.mode) {
#if defined(ECL_WSOCK)
  case ecl_smm_input_wsock:
  case ecl_smm_output_wsock:
  case ecl_smm_io_wsock:
#endif
  case ecl_smm_io_wcon:
    return (HANDLE)IO_FILE_DESCRIPTOR(s);
  default: {
    int stream_descriptor = ecl_stream_to_handle(s, output);
    return (stream_descriptor < 0)?
      INVALID_HANDLE_VALUE:
      (HANDLE)_get_osfhandle(stream_descriptor);
  }
  }
}
#endif

#if defined(ECL_MS_WINDOWS_HOST)
static void
create_descriptor(cl_object stream, cl_object direction,
                  HANDLE *child, int *parent) {
  SECURITY_ATTRIBUTES attr;
  HANDLE current = GetCurrentProcess();
  attr.nLength = sizeof(SECURITY_ATTRIBUTES);
  attr.lpSecurityDescriptor = NULL;
  attr.bInheritHandle = TRUE;

  if (stream == ECL_SYM(":STREAM",1340)) {
    /* Creates a pipe that we can write to and the child reads
       from. We duplicate one extreme of the pipe so that the child
       does not inherit it. */
    HANDLE tmp;
    if (direction == ECL_SYM(":INPUT",1280)) {
      if (CreatePipe(child, &tmp, &attr, 0) == 0)
        return;
      if (DuplicateHandle(current, tmp, current,
                          &tmp, 0, FALSE,
                          DUPLICATE_CLOSE_SOURCE |
                          DUPLICATE_SAME_ACCESS) == 0)
        return;

      *parent = _open_osfhandle((intptr_t)tmp, _O_WRONLY);
    }
    else /* if (direction == ECL_SYM(":OUTPUT",1309)) */ {
      if (CreatePipe(&tmp, child, &attr, 0) == 0)
        return;
      if (DuplicateHandle(current, tmp, current,
                          &tmp, 0, FALSE,
                          DUPLICATE_CLOSE_SOURCE |
                          DUPLICATE_SAME_ACCESS) == 0)
        return;

      *parent = _open_osfhandle((intptr_t)tmp, _O_RDONLY);
    }

    if (*parent < 0)
      printf("open_osfhandle failed\n");
  }
  else if (!Null(cl_streamp(stream))) {
    HANDLE stream_handle = ecl_stream_to_HANDLE
      (stream, direction != ECL_SYM(":INPUT",1280));
    if (stream_handle == INVALID_HANDLE_VALUE) {
      CEerror(ecl_make_constant_base_string("Create a new stream.",-1),
              "~S argument to RUN-PROGRAM does not have a file handle:~%~S",
              2, direction, stream);
      create_descriptor(ECL_SYM(":STREAM",1340), direction, child, parent);
      return;
    }
    DuplicateHandle(current, stream_handle,
                    current, child, 0, TRUE,
                    DUPLICATE_SAME_ACCESS);
  }
  else {
    FEerror("Invalid ~S argument to EXT:RUN-PROGRAM.", 1, stream);
  }
}
#else
static void
create_descriptor(cl_object stream, cl_object direction,
                  int *child, int *parent) {
  if (stream == ECL_SYM(":STREAM",1340)) {
    int fd[2], ret;
    ret = pipe(fd);
    if (ret != 0) {
      FElibc_error("Unable to create pipe", 0);
    }
    if (direction == ECL_SYM(":INPUT",1280)) {
      *parent = fd[1];
      *child = fd[0];
    } else {
      *parent = fd[0];
      *child = fd[1];
    }
  }
  else if (!Null(cl_streamp(stream))) {
    *child = ecl_stream_to_handle
      (stream, direction != ECL_SYM(":INPUT",1280));
    if (*child >= 0) {
      *child = dup(*child);
    } else {
      CEerror(ecl_make_constant_base_string("Create a new stream.",-1),
              "~S argument to RUN-PROGRAM does not have a file handle:~%~S",
              2, direction, stream);
      create_descriptor(ECL_SYM(":STREAM",1340), direction, child, parent);
      return;
    }
  }
  else {
    FEerror("Invalid ~S argument to EXT:RUN-PROGRAM.", 1, stream);
  }
}
#endif


cl_object
si_run_program_inner(cl_object command, cl_object argv, cl_object environ, cl_object wait)
{
  cl_env_ptr the_env = ecl_process_env();
  int parent_write = 0, parent_read = 0, parent_error = 0;
  cl_object pid, stream_read, exit_status;

  command = si_copy_to_simple_base_string(command);

#if defined(ECL_MS_WINDOWS_HOST)
  argv = cl_format(4, ECL_NIL,
                   ecl_make_constant_base_string("~A~{ ~A~}",-1),
                   command, argv);
  argv = si_copy_to_simple_base_string(argv);
#else
  argv = CONS(command, cl_mapcar(2, ECL_SYM("SI::COPY-TO-SIMPLE-BASE-STRING",1062), argv));
#endif

  pid = si_spawn_subprocess(command, argv, environ, ECL_SYM(":STREAM",1340), ECL_SYM(":STREAM",1340), ECL_SYM(":OUTPUT",1309));
  parent_write = ecl_fixnum(ecl_nth_value(the_env, 1));
  parent_read = ecl_fixnum(ecl_nth_value(the_env, 2));
  parent_error = ecl_fixnum(ecl_nth_value(the_env, 3));

  /* descriptor is closed in the stream finalizer */
  stream_read = ecl_make_stream_from_fd(command, parent_read,
                                        ecl_smm_input, 8,
                                        ECL_STREAM_DEFAULT_FORMAT,
                                        ECL_SYM(":DEFAULT",1237));

  if (wait != ECL_NIL) {
    si_waitpid(pid, ECL_T);
    exit_status = ecl_nth_value(the_env, 1);
  } else {
    exit_status = ECL_NIL;
  }

  /* close unused descriptors */
  close(parent_write);
  close(parent_error);

  {
#line 399
	const cl_env_ptr the_env = ecl_process_env();
#line 399
	#line 399
	cl_object __value0 = stream_read;
#line 399
	cl_object __value1 = exit_status;
#line 399
	cl_object __value2 = pid;
#line 399
	the_env->nvalues = 3;
#line 399
	the_env->values[2] = __value2;
#line 399
	the_env->values[1] = __value1;
#line 399
	the_env->values[0] = __value0;
#line 399
	#line 399
	return __value0;
#line 399
}

}

cl_object
si_spawn_subprocess(cl_object command, cl_object argv, cl_object environ,
                    cl_object input, cl_object output, cl_object error) {

  int parent_write = 0, parent_read = 0, parent_error = 0;
  int child_pid;
  cl_object pid;

  /* environ is either a list or `:default'. */
  if (ECL_LISTP(environ)) {
    environ = cl_mapcar(2, ECL_SYM("SI::COPY-TO-SIMPLE-BASE-STRING",1062), environ);
  } else if (!ecl_eql(environ, ECL_SYM(":DEFAULT",1237))) {
    FEerror("Malformed :ENVIRON argument to EXT:RUN-PROGRAM.", 0);
  }
  
#if defined(ECL_MS_WINDOWS_HOST)
  {
    BOOL ok;
    STARTUPINFO st_info;
    PROCESS_INFORMATION pr_info;
    HANDLE child_stdout, child_stdin, child_stderr;
    HANDLE current = GetCurrentProcess();
    cl_object env_buffer;
    char *env = NULL;

    if (ECL_LISTP(environ)) {
      env_buffer = from_list_to_execve_argument(environ, NULL);
      env = env_buffer->base_string.self;
    }
    create_descriptor(input,  ECL_SYM(":INPUT",1280),  &child_stdin,  &parent_write);
    create_descriptor(output, ECL_SYM(":OUTPUT",1309), &child_stdout, &parent_read);
    if (error == ECL_SYM(":OUTPUT",1309)) {
      /* The child inherits a duplicate of its own output handle. */
      DuplicateHandle(current, child_stdout, current,
                      &child_stderr, 0, TRUE,
                      DUPLICATE_SAME_ACCESS);
      /* Same for the parent_read and parent_error. */
      parent_error = dup(parent_read);
    }
    else
      create_descriptor(error, ECL_SYM(":OUTPUT",1309), &child_stderr, &parent_error);

    ZeroMemory(&st_info, sizeof(STARTUPINFO));
    st_info.cb = sizeof(STARTUPINFO);
    st_info.lpTitle = NULL; /* No window title, just exec name */
    st_info.dwFlags = STARTF_USESTDHANDLES | STARTF_USESHOWWINDOW; /* Specify std{in,out,err} */
    st_info.wShowWindow = SW_HIDE;
    st_info.hStdInput = child_stdin;
    st_info.hStdOutput = child_stdout;
    st_info.hStdError = child_stderr;
    ZeroMemory(&pr_info, sizeof(PROCESS_INFORMATION));

    /* Command is passed as is from argv. It is responsibility of
       higher level interface to decide, whenever arguments should be
       quoted or left as-is. */
    /* ecl_null_terminated_base_string(argv); */
    ok = CreateProcess(NULL, argv->base_string.self,
                       NULL, NULL, /* lpProcess/ThreadAttributes */
                       TRUE, /* Inherit handles (for files) */
                       /*CREATE_NEW_CONSOLE |*/
                       0 /*(input == ECL_T || output == ECL_T || error == ECL_T ? 0 : CREATE_NO_WINDOW)*/,
                       env, /* Inherit environment */
                       NULL, /* Current directory */
                       &st_info, /* Startup info */
                       &pr_info); /* Process info */

    /* Child handles must be closed in the parent process */
    /* otherwise the created pipes are never closed       */
    if (ok) {
      CloseHandle(pr_info.hThread);
      pid = make_windows_handle(pr_info.hProcess);
    } else {
      char *message;
      FormatMessage(FORMAT_MESSAGE_FROM_SYSTEM |
                    FORMAT_MESSAGE_ALLOCATE_BUFFER,
                    0, GetLastError(), 0, (void*)&message, 0, NULL);
      printf("%s\n", message);
      LocalFree(message);
      pid = ECL_NIL;
    }
    if (child_stdin) CloseHandle(child_stdin);
    if (child_stdout) CloseHandle(child_stdout);
    if (child_stderr) CloseHandle(child_stderr);
  }
#elif !defined(NACL) /* All POSIX but NaCL/pNaCL */
  {
    int child_stdin, child_stdout, child_stderr;
    argv = ecl_nconc(argv, ecl_list1(ECL_NIL));
    argv = _ecl_funcall3(ECL_SYM("COERCE",233), argv, ECL_SYM("VECTOR",900));

    create_descriptor(input,  ECL_SYM(":INPUT",1280),  &child_stdin,  &parent_write);
    create_descriptor(output, ECL_SYM(":OUTPUT",1309), &child_stdout, &parent_read);
    if (error == ECL_SYM(":OUTPUT",1309)) {
      child_stderr = child_stdout;
      parent_error = dup(parent_read);
    }
    else
      create_descriptor(error,  ECL_SYM(":OUTPUT",1309), &child_stderr, &parent_error);

    child_pid = fork();
    if (child_pid == 0) {
      /* Child */
      int j;
      void **argv_ptr = (void **)argv->vector.self.t;

      if (parent_write) close(parent_write);
      if (parent_read)  close(parent_read);
      if (parent_error) close(parent_error);

      dup2(child_stdin,  STDIN_FILENO);
      dup2(child_stdout, STDOUT_FILENO);
      dup2(child_stderr, STDERR_FILENO);

      for (j = 0; j < argv->vector.fillp; j++) {
        cl_object arg = argv->vector.self.t[j];
        if (arg == ECL_NIL) {
          argv_ptr[j] = NULL;
        } else {
          argv_ptr[j] = arg->base_string.self;
        }
      }
      if (ECL_LISTP(environ)) {
        char **pstrings;
        from_list_to_execve_argument(environ, &pstrings);
        execve((char*)command->base_string.self, (char **)argv_ptr, pstrings);
      } else {
        execvp((char*)command->base_string.self, (char **)argv_ptr);
      }
      /* at this point exec has failed */
      perror("exec");
      _exit(EXIT_FAILURE);
    }
    close(child_stdin);
    close(child_stdout);
    if (!(error == ECL_SYM(":OUTPUT",1309))) close(child_stderr);

    if (child_pid < 0) {
      pid = ECL_NIL;
    } else {
      pid = ecl_make_fixnum(child_pid);
    }
  }
#else  /* NACL */
  {
    FElibc_error("ext::run-program-inner not implemented",1);
    {
#line 547
	const cl_env_ptr the_env = ecl_process_env();
#line 547
	#line 547
	cl_object __value0 = ECL_NIL;
#line 547
	the_env->nvalues = 1;
#line 547
	the_env->values[0] = __value0;
#line 547
	#line 547
	return __value0;
#line 547
}
;
  }
#endif

  if (Null(pid)) {
    if (parent_write) close(parent_write);
    if (parent_read) close(parent_read);
    if (parent_error > 0) close(parent_error);
    parent_write = 0;
    parent_read = 0;
    parent_error = 0;
    FEerror("Could not spawn subprocess to run ~S.", 1, command);
  }

  {
#line 564
	const cl_env_ptr the_env = ecl_process_env();
#line 564
	#line 564
	cl_object __value0 = pid;
#line 564
	cl_object __value1 = ecl_make_fixnum(parent_write);
#line 564
	cl_object __value2 = ecl_make_fixnum(parent_read);
#line 564
	cl_object __value3 = ecl_make_fixnum(parent_error);
#line 564
	the_env->nvalues = 4;
#line 564
	the_env->values[3] = __value3;
#line 564
	the_env->values[2] = __value2;
#line 564
	the_env->values[1] = __value1;
#line 564
	the_env->values[0] = __value0;
#line 564
	#line 564
	return __value0;
#line 564
}

}
