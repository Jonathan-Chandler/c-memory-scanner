#line 1 "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/src/c/unixfsys.d"
/* -*- Mode: C; c-basic-offset: 2; indent-tabs-mode: nil -*- */
/* vim: set filetype=c tabstop=2 shiftwidth=2 expandtab: */

/*
 * unixfsys.d - Unix file system interface
 *
 * Copyright (c) 1984 Taiichi Yuasa and Masami Hagiya
 * Copyright (c) 1990 Giuseppe Attardi
 * Copyright (c) 2001 Juan Jose Garcia Ripoll
 *
 * See file 'LICENSE' for the copyright details.
 *
 */

#include <string.h>
#include <stdio.h>
#include <limits.h>

#ifndef _MSC_VER
# include <unistd.h>
#else
# include <io.h>
# include <direct.h>
# define access _access
# define F_OK 0
typedef int mode_t; 
#endif

#include <sys/types.h>
#include <ecl/ecl.h>
#ifdef HAVE_PWD_H
# include <pwd.h>
#endif
#include <sys/stat.h>
#include <stdlib.h>
#include <ecl/ecl-inl.h>
#include <ecl/internal.h>
#ifdef HAVE_DIRENT_H
# include <dirent.h>
#else
# if !defined(_MSC_VER)
#  include <sys/dir.h>
# endif
#endif
#if defined(ECL_MS_WINDOWS_HOST)
# include <windows.h>
# undef ERROR
#endif
#include <fcntl.h>
#include <errno.h>

static int
safe_chdir(const char *path, cl_object prefix)
{
  if (prefix != ECL_NIL) {
    cl_object aux = ecl_make_constant_base_string(path,-1);
    aux = si_base_string_concatenate(2, prefix, aux);
    return safe_chdir((char *)aux->base_string.self, ECL_NIL);
  } else {
    int output;
    ecl_disable_interrupts();
    output = chdir((char *)path);
    ecl_enable_interrupts();
    return output;
  }
}

static int
safe_stat(const char *path, struct stat *sb)
{
  int output;
  ecl_disable_interrupts();
  output = stat(path, sb);
  ecl_enable_interrupts();
  return output;
}

#ifdef HAVE_LSTAT
static int
safe_lstat(const char *path, struct stat *sb)
{
  int output;
  ecl_disable_interrupts();
  output = lstat(path, sb);
  ecl_enable_interrupts();
  return output;
}
#endif

#if defined(ECL_MS_WINDOWS_HOST)
static cl_object
drive_host_prefix(cl_object pathname)
{
  cl_object device = pathname->pathname.device;
  cl_object host = pathname->pathname.host;
  cl_object output = ECL_NIL;
  if (device != ECL_NIL) {
    output = ecl_make_simple_base_string("X:",-1);
    output->base_string.self[0] = device->base_string.self[0];
  }
  if (host != ECL_NIL) {
    cl_object slash = cl_core.slash;
    if (output != ECL_NIL)
      output = si_base_string_concatenate(5, output, slash, slash,
                                          host, slash);
    else
      output = si_base_string_concatenate(4, slash, slash, host,
                                          slash);
  }
  return output;
}
#else
#define drive_host_prefix(x) ECL_NIL
#endif

/*
 * string_to_pathanme, to be used when s is a real pathname
 */
cl_object
ecl_cstring_to_pathname(char *s)
{
  cl_object string = ecl_make_simple_base_string(s, -1);
  return cl_parse_namestring(1, string);
}

/*
 * Finds current directory by using getcwd() with an adjustable
 * string which grows until it can host the whole path.
 */
static cl_object
current_dir(void) {
  cl_object output;
  const char *ok;
#ifdef _MSC_VER
  unsigned char *c;
#endif
  cl_index size = 128;

  do {
    output = ecl_alloc_adjustable_base_string(size+2);
    ecl_disable_interrupts();
    ok = getcwd((char*)output->base_string.self, size);
    if (ok == NULL && errno != ERANGE) {
      perror("ext::getcwd error");
      ecl_internal_error("Can't work without CWD");
    }
    ecl_enable_interrupts();
    size += 256;
  } while (ok == NULL);
  size = strlen((char*)output->base_string.self);
#ifdef _MSC_VER
  for (c = output->base_string.self; *c; c++) {
    if (*c == '\\') *c = '/';
  }
#endif
  if (output->base_string.self[size-1] != '/') {
    output->base_string.self[size++] = '/';
    output->base_string.self[size] = '\0';
  }
  output->base_string.fillp = size;
  return output;
}

/*
 * Using a certain path, guess the type of the object it points to.
 */

static cl_object
file_kind(char *filename, bool follow_links) {
  cl_object output;
#if defined(ECL_MS_WINDOWS_HOST)
  DWORD dw;
  ecl_disable_interrupts();
  dw = GetFileAttributes( filename );
  if (dw == -1)
    output = ECL_NIL;
  else if ( dw & FILE_ATTRIBUTE_DIRECTORY )
    output = ECL_SYM(":DIRECTORY",1241);
  else
    output = ECL_SYM(":FILE",1260);
  ecl_enable_interrupts();
#else
  struct stat buf;
# ifdef HAVE_LSTAT
  if ((follow_links? safe_stat : safe_lstat)(filename, &buf) < 0)
# else
    if (safe_stat(filename, &buf) < 0)
# endif
      output = ECL_NIL;
# ifdef HAVE_LSTAT
    else if (S_ISLNK(buf.st_mode))
      output = ECL_SYM(":LINK",1292);
# endif
    else if (S_ISDIR(buf.st_mode))
      output = ECL_SYM(":DIRECTORY",1241);
    else if (S_ISREG(buf.st_mode))
      output = ECL_SYM(":FILE",1260);
# ifdef S_ISFIFO
    else if (S_ISFIFO(buf.st_mode))
      output = ECL_SYM(":FIFO",1259);
# endif
    else
      output = ECL_SYM(":SPECIAL",1336);
#endif
  return output;
}

cl_object
si_file_kind(cl_object filename, cl_object follow_links) {
  filename = si_coerce_to_filename(filename);
  {
#line 211
	const cl_env_ptr the_env = ecl_process_env();
#line 211
	#line 211
	cl_object __value0 = file_kind((char*)filename->base_string.self, !Null(follow_links));
#line 211
	the_env->nvalues = 1;
#line 211
	the_env->values[0] = __value0;
#line 211
	#line 211
	return __value0;
#line 211
}
;
}

#if defined(HAVE_LSTAT) && !defined(ECL_MS_WINDOWS_HOST)
static cl_object
si_readlink(cl_object filename) {
  /* Given a filename which is a symlink, this routine returns
   * the value of this link in the form of a pathname. */
  cl_index size = 128, written;
  cl_object output, kind;
  do {
    /* We reserve 2 characters for trailing '/' and '\0' */
    output = ecl_alloc_adjustable_base_string(size+2);
    ecl_disable_interrupts();
    written = readlink((char*)filename->base_string.self,
                       (char*)output->base_string.self, size);
    ecl_enable_interrupts();
    size += 256;
  } while (written == size-256);
  output->base_string.self[written] = '\0';
  kind = file_kind((char*)output->base_string.self, FALSE);
  if (kind == ECL_SYM(":DIRECTORY",1241)) {
    output->base_string.self[written++] = '/';
    output->base_string.self[written] = '\0';
  }
  output->base_string.fillp = written;
  return output;
}
#endif /* HAVE_LSTAT */

static cl_object
enter_directory(cl_object base_dir, cl_object subdir, bool ignore_if_failure)
{
  /* Assuming we start in "base_dir", enter a subdirectory named by
   * "subdir", which may be a string, :UP, :ABSOLUTE or :RELATIVE.
   * If the operation succeeds, return the truename of the resulting
   * path -- resolving any links in the process. */
  cl_object aux, output, kind;
  if (subdir == ECL_SYM(":ABSOLUTE",1218)) {
    return cl_make_pathname(4, ECL_SYM(":DIRECTORY",1241), ecl_list1(subdir),
                            ECL_SYM(":DEFAULTS",1238), base_dir);
  } else if (subdir == ECL_SYM(":RELATIVE",1326)) {
    /* Nothing to do */
    return base_dir;
  } else if (subdir == ECL_SYM(":UP",1349)) {
    aux = ecl_make_constant_base_string("..",-1);
  } else if (!ECL_BASE_STRING_P(subdir)) {
    unlikely_if (!ecl_fits_in_base_string(subdir))
      FEerror("Directory component ~S found in pathname~&  ~S"
              "~&is not allowed in TRUENAME or DIRECTORY",
              1, subdir);
    aux = si_coerce_to_base_string(subdir);
  } else {
    aux = subdir;
  }
  /* We now compose a new path based on the base directory and
   * the new component. We have to verify that the new pathname is
   * a directory and if it is a link recover the true name. */
  aux = ecl_append(base_dir->pathname.directory, ecl_list1(aux));
  output = cl_make_pathname(4, ECL_SYM(":DIRECTORY",1241), aux, ECL_SYM(":DEFAULTS",1238), base_dir);
  aux = ecl_namestring(output, ECL_NAMESTRING_FORCE_BASE_STRING);
  /* We remove the trailing '/' from the namestring because the
   * POSIX library does not like it. */
  aux->base_string.self[--aux->base_string.fillp] = 0;
  kind = file_kind((char*)aux->base_string.self, FALSE);
  if (kind == ECL_NIL) {
    if (ignore_if_failure) return ECL_NIL;
    FEcannot_open(output);
#ifdef HAVE_LSTAT
  } else if (kind == ECL_SYM(":LINK",1292)) {
    output = cl_truename(ecl_merge_pathnames(si_readlink(aux),
                                             base_dir, ECL_SYM(":DEFAULT",1237)));
    if (output->pathname.name != ECL_NIL ||
        output->pathname.type != ECL_NIL)
      goto WRONG_DIR;
    return output;
#endif
  } else if (kind != ECL_SYM(":DIRECTORY",1241)) {
  WRONG_DIR:
    if (ignore_if_failure) return ECL_NIL;
    FEerror("The directory~&  ~S~&in pathname~&  ~S~&"
            "actually points to a file or special device.",
            2, subdir, base_dir);
  }
  if (subdir == ECL_SYM(":UP",1349)) {
    cl_object newdir= output->pathname.directory;
    newdir = ecl_nbutlast(newdir, 2);
    if (Null(newdir)) {
      if (ignore_if_failure) return ECL_NIL;
      FEerror("Pathname contained an :UP component  "
              "that goes above the base directory:"
              "~&  ~S", 1, output);
    }
    output->pathname.directory = newdir;
  }
  return output;
}

static cl_object
make_absolute_pathname(cl_object orig_pathname)
{
  cl_object base_dir = si_getcwd(0);
  cl_object pathname = coerce_to_file_pathname(orig_pathname);
  return ecl_merge_pathnames(pathname, base_dir, ECL_SYM(":DEFAULT",1237));
}

static cl_object
make_base_pathname(cl_object pathname)
{
  return ecl_make_pathname(pathname->pathname.host,
                           pathname->pathname.device,
                           ecl_list1(ECL_SYM(":ABSOLUTE",1218)),
                           ECL_NIL, ECL_NIL, ECL_NIL, ECL_SYM(":LOCAL",1294));
}

#define FOLLOW_SYMLINKS 1

static cl_object
file_truename(cl_object pathname, cl_object filename, int flags)
{
  cl_object kind;
  if (Null(pathname)) {
    if (Null(filename)) {
      ecl_internal_error("file_truename:"
                         " both FILENAME and PATHNAME are null!");
    }
    pathname = cl_pathname(filename);
  } else if (Null(filename)) {
    filename = ecl_namestring(pathname, ECL_NAMESTRING_FORCE_BASE_STRING);
    if (Null(filename)) {
      FEerror("Unprintable pathname ~S found in TRUENAME", 1, pathname);
    }
  }
  kind = file_kind((char*)filename->base_string.self, FALSE);
  if (kind == ECL_NIL) {
    FEcannot_open(filename);
#ifdef HAVE_LSTAT
  } else if (kind == ECL_SYM(":LINK",1292) && (flags & FOLLOW_SYMLINKS)) {
    /* The link might be a relative pathname. In that case
     * we have to merge with the original pathname.  On
     * the other hand, if the link is broken – return file
     * truename "as is". */
    struct stat filestatus;
    if (safe_stat((char*) filename->base_string.self, &filestatus) < 0) {
      {
#line 355
	const cl_env_ptr the_env = ecl_process_env();
#line 355
	#line 355
	cl_object __value0 = pathname;
#line 355
	cl_object __value1 = kind;
#line 355
	the_env->nvalues = 2;
#line 355
	the_env->values[1] = __value1;
#line 355
	the_env->values[0] = __value0;
#line 355
	#line 355
	return __value0;
#line 355
}
;
    }
    filename = si_readlink(filename);
    pathname = ecl_make_pathname(pathname->pathname.host,
                                 pathname->pathname.device,
                                 pathname->pathname.directory,
                                 ECL_NIL, ECL_NIL, ECL_NIL, ECL_SYM(":LOCAL",1294));
    pathname = ecl_merge_pathnames(filename, pathname, ECL_SYM(":DEFAULT",1237));
    return cl_truename(pathname);
#endif
  } else if (kind == ECL_SYM(":DIRECTORY",1241)){
    /* If the pathname is a directory but we have supplied
       a file name, correct the type by appending a directory
       separator and re-parsing again the namestring */
    if (pathname->pathname.name != ECL_NIL ||
        pathname->pathname.type != ECL_NIL) {
      pathname = si_base_string_concatenate
        (2, filename,
         ecl_make_constant_base_string("/",-1));
      pathname = cl_truename(pathname);
    }
  }
  /* ECL does not contemplate version numbers
     in directory pathnames */
  if (pathname->pathname.name == ECL_NIL &&
      pathname->pathname.type == ECL_NIL) {
    /* We have to destructively change the
     * pathname version here. Otherwise
     * merge_pathnames will not do it. It is
     * safe because coerce_to_file_pathname
     * created a copy. */
    pathname->pathname.version = ECL_NIL;
  } else {
    pathname->pathname.version = ECL_SYM(":NEWEST",1303);
  }
  {
#line 390
	const cl_env_ptr the_env = ecl_process_env();
#line 390
	#line 390
	cl_object __value0 = pathname;
#line 390
	cl_object __value1 = kind;
#line 390
	the_env->nvalues = 2;
#line 390
	the_env->values[1] = __value1;
#line 390
	the_env->values[0] = __value0;
#line 390
	#line 390
	return __value0;
#line 390
}
;
}

/*
 * Search the actual name of the directory of a pathname,
 * going through links if they exist. Default is
 * current directory
 */
cl_object
cl_truename(cl_object orig_pathname)
{
  cl_object pathname = make_absolute_pathname(orig_pathname);
  cl_object base_dir = make_base_pathname(pathname);
  cl_object dir;
  /* We process the directory part of the filename, removing all
   * possible symlinks. To do so, we inspect recursively the
   * directory which contains our file, and come back. We also have to
   * ensure that the filename itself does not point to a symlink: if so,
   * then we resolve the value of the symlink and continue traversing
   * the filesystem.
   */
  for (dir = pathname->pathname.directory; !Null(dir); dir = ECL_CONS_CDR(dir))
    {
      base_dir = enter_directory(base_dir, ECL_CONS_CAR(dir), 0);
    }
  pathname = ecl_merge_pathnames(base_dir, pathname, ECL_SYM(":DEFAULT",1237));
  {
#line 416
	const cl_env_ptr the_env = ecl_process_env();
#line 416
	#line 416
	cl_object __value0 = file_truename(pathname, ECL_NIL, FOLLOW_SYMLINKS);
#line 416
	the_env->nvalues = 1;
#line 416
	the_env->values[0] = __value0;
#line 416
	#line 416
	return __value0;
#line 416
}
;
}

int
ecl_backup_open(const char *filename, int option, int mode)
{
  char *backupfilename = ecl_alloc(strlen(filename) + 5);
  if (backupfilename == NULL) {
    FElibc_error("Cannot allocate memory for backup filename", 0);
  }

  strcat(strcpy(backupfilename, filename), ".BAK");
  ecl_disable_interrupts();
#if defined(ECL_MS_WINDOWS_HOST)
  /* Windows' rename doesn't replace an existing file */
  if (access(backupfilename, F_OK) == 0 && unlink(backupfilename)) {
    ecl_enable_interrupts();
    FElibc_error("Cannot remove the file ~S", 1,
                 ecl_make_constant_base_string(backupfilename,-1));
  }
#endif
  if (rename(filename, backupfilename)) {
    ecl_enable_interrupts();
    FElibc_error("Cannot rename the file ~S to ~S.", 2,
                 ecl_make_constant_base_string(filename,-1),
                 ecl_make_constant_base_string(backupfilename,-1));
  }
  ecl_enable_interrupts();
  ecl_dealloc(backupfilename);
  return open(filename, option, mode);
}

cl_object
ecl_file_len(int f)
{
  struct stat filestatus;
  memset(&filestatus, 0, sizeof(filestatus));
  ecl_disable_interrupts();
  fstat(f, &filestatus);
  ecl_enable_interrupts();
#ifdef S_ISFIFO
  if (S_ISFIFO(filestatus.st_mode)) {
    return ECL_NIL;
  } else {
    return ecl_make_integer(filestatus.st_size);
  }
#else
  return ecl_make_integer(filestatus.st_size);
#endif
}

#line 467
cl_object cl_rename_file(cl_narg narg, cl_object oldn, cl_object newn, ...)
{
#line 467

  cl_object old_filename, new_filename, old_truename, new_truename;
#if defined(ECL_MS_WINDOWS_HOST)
  int error;
#endif
  #line 473
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 473
	static cl_object KEYS[1] = {(cl_object)(cl_symbols+1270)};
	cl_object if_exists;
#line 473
	cl_object KEY_VARS[2];
#line 473
	ecl_va_list ARGS;
	ecl_va_start(ARGS, newn, narg, 2);
#line 473
	if (ecl_unlikely(narg < 2)) FEwrong_num_arguments(ecl_make_fixnum(717));
#line 473
	cl_parse_key(ARGS, 1, KEYS, KEY_VARS, NULL, 0);
#line 473
	if (KEY_VARS[1]==ECL_NIL) {
#line 473
	  if_exists = ECL_SYM(":ERROR",1251);
	} else {
#line 473
	  if_exists = KEY_VARS[0];
	}
#line 473

  /* 1) Get the old filename, and complain if it has wild components,
   *    or if it does not exist. Notice that the filename to be renamed
   *    is not the truename, because we might be renaming a symbolic link.
   */
  old_truename = cl_truename(oldn);
  old_filename = si_coerce_to_filename(old_truename);

  /* 2) Create the new file name. */
  newn = ecl_merge_pathnames(newn, oldn, ECL_SYM(":NEWEST",1303));
  new_filename = si_coerce_to_filename(newn);

  while (if_exists == ECL_SYM(":ERROR",1251) || if_exists == ECL_NIL)
    {
      if (cl_probe_file(new_filename) == ECL_NIL) {
        if_exists = ECL_T;
        break;
      }
      /* if the file already exists */
      if (if_exists == ECL_SYM(":ERROR",1251)) {
        const char *msg = "When trying to rename ~S, ~S already exists";
        if_exists =
          si_signal_simple_error
          (6, ECL_SYM("FILE-ERROR",355), /* condition */
           ECL_SYM(":SUPERSEDE",1341), /* continuable */
           /* format */
           ecl_make_constant_base_string(msg,strlen(msg)),
           cl_list(2, oldn, new_filename), /* format args */
           ECL_SYM(":PATHNAME",1312), /* file-error options */
           new_filename);
        if (if_exists == ECL_T) if_exists= ECL_SYM(":ERROR",1251);
      }
      if (if_exists == ECL_NIL) {
        {
#line 506
	#line 506
	cl_object __value0 = ECL_NIL;
#line 506
	cl_object __value1 = ECL_NIL;
#line 506
	cl_object __value2 = ECL_NIL;
#line 506
	the_env->nvalues = 3;
#line 506
	the_env->values[2] = __value2;
#line 506
	the_env->values[1] = __value1;
#line 506
	the_env->values[0] = __value0;
#line 506
	ecl_va_end(ARGS);
#line 506
	return __value0;
#line 506
}
;
      }
    }
  if (ecl_unlikely(if_exists != ECL_SYM(":SUPERSEDE",1341) && if_exists != ECL_T)) {
    /* invalid key */
    FEerror("~S is an illegal IF-EXISTS option for RENAME-FILE.",
            1, if_exists);
  }
  {
    ecl_disable_interrupts();
#if defined(ECL_MS_WINDOWS_HOST)
    error = SetErrorMode(0);
    if (MoveFile((char*)old_filename->base_string.self,
                 (char*)new_filename->base_string.self)) {
      SetErrorMode(error);
      goto SUCCESS;
    }
    switch (GetLastError()) {
    case ERROR_ALREADY_EXISTS:
    case ERROR_FILE_EXISTS:
      break;
    default:
      goto FAILURE_CLOBBER;
    };
    if (MoveFileEx((char*)old_filename->base_string.self,
                   (char*)new_filename->base_string.self,
                   MOVEFILE_REPLACE_EXISTING)) {
      SetErrorMode(error);
      goto SUCCESS;
    }
    /* hack for win95/novell */
    chmod((char*)old_filename->base_string.self, 0777);
    chmod((char*)new_filename->base_string.self, 0777);
    SetFileAttributesA((char*)new_filename->base_string.self,
                       FILE_ATTRIBUTE_NORMAL);
    SetFileAttributesA((char*)new_filename->base_string.self,
                       FILE_ATTRIBUTE_TEMPORARY);
    if (MoveFile((char*)old_filename->base_string.self,
                 (char*)new_filename->base_string.self)) {
      SetErrorMode(error);
      goto SUCCESS;
    }
    /* fallback on old behavior */
    (void)DeleteFileA((char*)new_filename->base_string.self);
    if (MoveFile((char*)old_filename->base_string.self,
                 (char*)new_filename->base_string.self)) {
      SetErrorMode(error);
      goto SUCCESS;
    }
    /* fall through */
#else
    if (rename((char*)old_filename->base_string.self,
               (char*)new_filename->base_string.self) == 0) {
      goto SUCCESS;
    }
#endif
  }
#if defined(ECL_MS_WINDOWS_HOST)
 FAILURE_CLOBBER:
#endif
  ecl_enable_interrupts();
  {
    cl_object c_error = _ecl_strerror(errno);
    const char *msg = "Unable to rename file ~S to ~S.~%C library error: ~S";
    si_signal_simple_error
      (6, ECL_SYM("FILE-ERROR",355), /* condition */
       ECL_NIL, /* continuable */
       ecl_make_constant_base_string(msg,strlen(msg)), /* format */
       cl_list(3, oldn, newn, c_error), /* format args */
       ECL_SYM(":PATHNAME",1312), /* file-error options */
       oldn);
  }

 SUCCESS:
  ecl_enable_interrupts();
  new_truename = cl_truename(newn);
  {
#line 582
	#line 582
	cl_object __value0 = newn;
#line 582
	cl_object __value1 = old_truename;
#line 582
	cl_object __value2 = new_truename;
#line 582
	the_env->nvalues = 3;
#line 582
	the_env->values[2] = __value2;
#line 582
	the_env->values[1] = __value1;
#line 582
	the_env->values[0] = __value0;
#line 582
	ecl_va_end(ARGS);
#line 582
	return __value0;
#line 582
}
;
  }

static int
directory_pathname_p(cl_object path)
{
  return (path->pathname.name == ECL_NIL) &&
    (path->pathname.type == ECL_NIL);
}

cl_object
cl_delete_file(cl_object file)
{
  cl_object path = cl_pathname(file);
  int isdir = directory_pathname_p(path);
  cl_object filename = si_coerce_to_filename(path);
  int ok;

  ecl_disable_interrupts();
  ok = (isdir? rmdir : unlink)((char*)filename->base_string.self);
  ecl_enable_interrupts();

  if (ok < 0) {
    const char *msg =
      isdir?
      "Cannot delete the directory ~S.~%C library error: ~S" :
      "Cannot delete the file ~S.~%C library error: ~S";
    cl_object c_error = _ecl_strerror(errno);
    si_signal_simple_error
      (6, ECL_SYM("FILE-ERROR",355), /* condition */
       ECL_T, /* continuable */
       ecl_make_constant_base_string(msg,strlen(msg)), /* format */
       cl_list(2, file, c_error), /* format args */
       ECL_SYM(":PATHNAME",1312), /* file-error options */
       file);
  }
  {
#line 618
	const cl_env_ptr the_env = ecl_process_env();
#line 618
	#line 618
	cl_object __value0 = ECL_T;
#line 618
	the_env->nvalues = 1;
#line 618
	the_env->values[0] = __value0;
#line 618
	#line 618
	return __value0;
#line 618
}
;
}

cl_object
cl_probe_file(cl_object file)
{
  /* INV: Both SI:FILE-KIND and TRUENAME complain if "file" has wildcards */
  {
#line 625
	const cl_env_ptr the_env = ecl_process_env();
#line 625
	#line 625
	cl_object __value0 = (si_file_kind(file, ECL_T) != ECL_NIL? cl_truename(file) : ECL_NIL);
#line 625
	the_env->nvalues = 1;
#line 625
	the_env->values[0] = __value0;
#line 625
	#line 625
	return __value0;
#line 625
}
;
}

cl_object
cl_file_write_date(cl_object file)
{
  cl_object time, filename = si_coerce_to_filename(file);
  struct stat filestatus;
  if (safe_stat((char*)filename->base_string.self, &filestatus) < 0) {
    time = ECL_NIL;
  } else {
    time = UTC_time_to_universal_time(filestatus.st_mtime);
  }
  {
#line 638
	const cl_env_ptr the_env = ecl_process_env();
#line 638
	#line 638
	cl_object __value0 = time;
#line 638
	the_env->nvalues = 1;
#line 638
	the_env->values[0] = __value0;
#line 638
	#line 638
	return __value0;
#line 638
}
;
}

cl_object
cl_file_author(cl_object file)
{
  cl_object output, filename = si_coerce_to_filename(file);
  struct stat filestatus;
  if (safe_stat((char*)filename->base_string.self, &filestatus) < 0) {
    const char *msg = "Unable to read file author for ~S."
      "~%C library error: ~S";
    cl_object c_error = _ecl_strerror(errno);
    si_signal_simple_error
      (6, ECL_SYM("FILE-ERROR",355), /* condition */
       ECL_T, /* continuable */
       ecl_make_constant_base_string(msg,strlen(msg)), /* format */
       cl_list(2, file, c_error), /* format args */
       ECL_SYM(":PATHNAME",1312), /* file-error options */
       file);
  }
#ifdef HAVE_PWD_H
  {
    struct passwd *pwent;
    ecl_disable_interrupts();
    pwent = getpwuid(filestatus.st_uid);
    ecl_enable_interrupts();
    output = ecl_make_simple_base_string(pwent->pw_name,-1);
  }
#else
  output = ecl_make_constant_base_string("UNKNOWN",-1);
#endif
  {
#line 669
	const cl_env_ptr the_env = ecl_process_env();
#line 669
	#line 669
	cl_object __value0 = output;
#line 669
	the_env->nvalues = 1;
#line 669
	the_env->values[0] = __value0;
#line 669
	#line 669
	return __value0;
#line 669
}
;
}

cl_object
ecl_homedir_pathname(cl_object user)
{
  cl_index i;
  cl_object namestring;
  const char *h;
#if defined(ECL_MS_WINDOWS_HOST)
  const char *d;
#endif
  if (!Null(user)) {
#ifdef HAVE_PWD_H
    struct passwd *pwent = NULL;
#endif
    char *p;
    /* This ensures that our string has the right length
       and it is terminated with a '\0' */
    user = si_copy_to_simple_base_string(user);
    p = (char*)user->base_string.self;
    i = user->base_string.fillp;
    if (i > 0 && *p == '~') {
      p++;
      i--;
    }
    if (i == 0)
      return ecl_homedir_pathname(ECL_NIL);
#ifdef HAVE_PWD_H
    pwent = getpwnam(p);
    if (pwent == NULL)
      FEerror("Unknown user ~S.", 1, p);
    namestring = ecl_make_simple_base_string(pwent->pw_dir,-1);
#endif
    FEerror("Unknown user ~S.", 1, p);
  } else if ((h = getenv("HOME"))) {
    namestring = ecl_make_simple_base_string(h,-1);
#if defined(ECL_MS_WINDOWS_HOST)
  } else if ((h = getenv("HOMEPATH")) && (d = getenv("HOMEDRIVE"))) {
    namestring =
      si_base_string_concatenate(2,
                                 ecl_make_constant_base_string(d,-1),
                                 ecl_make_constant_base_string(h,-1));
#endif
  } else {
    namestring = ecl_make_constant_base_string("/",-1);
  }
  if (namestring->base_string.self[0] == '~') {
    FEerror("Not a valid home pathname ~S", 1, namestring);
  }
  i = namestring->base_string.fillp;
  if (!IS_DIR_SEPARATOR(namestring->base_string.self[i-1]))
    namestring = si_base_string_concatenate(2, namestring,
                                            ECL_CODE_CHAR(DIR_SEPARATOR));
  return cl_parse_namestring(3, namestring, ECL_NIL, ECL_NIL);
}

#line 726
cl_object cl_user_homedir_pathname(cl_narg narg, ...)
{
#line 726

  #line 728
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 728
	cl_object host;
#line 728
	va_list ARGS;
	va_start(ARGS, narg);
#line 728
	if (ecl_unlikely(narg < 0|| narg > 1)) FEwrong_num_arguments(ecl_make_fixnum(896));
#line 728
	if (narg > 0) {
#line 728
		host = va_arg(ARGS,cl_object);
#line 728
	} else {
#line 728
		host = ECL_NIL;
#line 728
	}
#line 728
  /* Ignore optional host argument. */
  {
#line 729
	#line 729
	cl_object __value0 = ecl_homedir_pathname(ECL_NIL);
#line 729
	the_env->nvalues = 1;
#line 729
	the_env->values[0] = __value0;
#line 729
	va_end(ARGS);
#line 729
	return __value0;
#line 729
}
;
  }

static bool
string_match(const char *s, cl_object pattern)
{
  if (pattern == ECL_NIL || pattern == ECL_SYM(":WILD",1355)) {
    return 1;
  } else {
    cl_index ls = strlen(s);
    ecl_def_ct_base_string(strng, s, ls, /*auto*/, const);
    return ecl_string_match(strng, 0, ls,
                            pattern, 0, ecl_length(pattern));
  }
}

/*XXX:*/
#define PARSE_DIRECTORY_ENTRY                                           \
  {                                                                     \
    cl_object component, component_path, kind;                          \
    if (text[0] == '.' &&                                               \
        (text[1] == '\0' ||                                             \
         (text[1] == '.' && text[2] == '\0')))                          \
      continue;                                                         \
    if (!string_match(text, text_mask))                                 \
      continue;                                                         \
    component = ecl_make_constant_base_string(text,-1);                 \
    component = si_base_string_concatenate(2, prefix, component);       \
    component_path = cl_pathname(component);                            \
    if (!Null(pathname_mask)) {                                         \
      if (Null(cl_pathname_match_p(component, pathname_mask)))          \
        continue;                                                       \
    }                                                                   \
    component_path = file_truename(component_path, component, flags);   \
    kind = ecl_nth_value(the_env, 1);                                   \
    out = CONS(CONS(component_path, kind), out);                        \
  }

/*
 * list_current_directory() lists the files and directories which are contained
 * in the current working directory (as given by current_dir()). If ONLY_DIR is
 * true, the list is made of only the directories -- a propert which is checked
 * by following the symlinks.
 */
static cl_object
list_directory(cl_object base_dir, cl_object text_mask, cl_object pathname_mask,
               int flags)
{
  const cl_env_ptr the_env = ecl_process_env();
  cl_object out = ECL_NIL;
  cl_object prefix = ecl_namestring(base_dir, ECL_NAMESTRING_FORCE_BASE_STRING);

  char *text;
#if defined(HAVE_DIRENT_H)
  DIR *dir;
  struct dirent *entry;

  ecl_disable_interrupts();
  dir = opendir((char*)prefix->base_string.self);
  if (dir == NULL) {
    out = ECL_NIL;
    goto OUTPUT;
  }

  while ((entry = readdir(dir))) {
    text = entry->d_name;
    PARSE_DIRECTORY_ENTRY;
  }
  closedir(dir);
#else
# ifdef ECL_MS_WINDOWS_HOST
  WIN32_FIND_DATA fd;
  HANDLE hFind = NULL;
  BOOL found = FALSE;

  ecl_disable_interrupts();
  for (;;) {
    if (hFind == NULL) {
      cl_object aux = ecl_make_constant_base_string(".\\*",-1);
      cl_object mask = si_base_string_concatenate(2, prefix, aux);
      hFind = FindFirstFile((char*)mask->base_string.self, &fd);
      if (hFind == INVALID_HANDLE_VALUE) {
        out = ECL_NIL;
        goto OUTPUT;
      }
      found = TRUE;
    } else {
      found = FindNextFile(hFind, &fd);
    }

    if (!found)
      break;

    text = fd.cFileName;
    PARSE_DIRECTORY_ENTRY;
  }
  FindClose(hFind);
# else /* sys/dir.h as in SYSV */
  FILE *fp;
  char iobuffer[BUFSIZ];
  DIRECTORY dir;

  ecl_disable_interrupts();
  fp = fopen((char*)prefix->base_string.self, OPEN_R);
  if (fp == NULL) {
    out = ECL_NIL;
    goto OUTPUT;
  }
  setbuf(fp, iobuffer);
  for (;;) {
    if (fread(&dir, sizeof(DIRECTORY), 1, fp) <= 0)
      break;
    if (dir.d_ino == 0)
      continue;

    text=dir.d_name;
    PARSE_DIRECTORY_ENTRY;
  }
  fclose(fp);
# endif /* !ECL_MS_WINDOWS_HOST */
#endif /* !HAVE_DIRENT_H */

 OUTPUT:
  ecl_enable_interrupts();
  return cl_nreverse(out);
}

#undef PARSE_DIRECTORY_ENTRY

/*
 * dir_files() lists all files which are contained in the current directory and
 * which match the masks in PATHNAME. This routine is essentially a wrapper for
 * list_current_directory(), which transforms the list of strings into a list
 * of pathnames. BASEDIR is the truename of the current directory and it is
 * used to build these pathnames.
 */
static cl_object
dir_files(cl_object base_dir, cl_object pathname, int flags)
{
  cl_object all_files, output = ECL_NIL;
  cl_object mask;
  cl_object name = pathname->pathname.name;
  cl_object type = pathname->pathname.type;
  if (name == ECL_NIL && type == ECL_NIL) {
    return cl_list(1, base_dir);
  }
  mask = ecl_make_pathname(ECL_NIL, ECL_NIL, ECL_NIL,
                           name, type, pathname->pathname.version,
                           ECL_SYM(":LOCAL",1294));
  for (all_files = list_directory(base_dir, ECL_NIL, mask, flags);
       !Null(all_files);
       all_files = ECL_CONS_CDR(all_files))
    {
      cl_object record = ECL_CONS_CAR(all_files);
      cl_object new = ECL_CONS_CAR(record);
      cl_object kind = ECL_CONS_CDR(record);
      if (kind != ECL_SYM(":DIRECTORY",1241)) {
        output = CONS(new, output);
      }
    }
  return output;
}

/*
 * dir_recursive() performs the dirty job of DIRECTORY. The routine moves
 * through the filesystem looking for files and directories which match
 * the masks in the arguments PATHNAME and DIRECTORY, collecting them in a
 * list.
 */
static cl_object
dir_recursive(cl_object base_dir, cl_object directory, cl_object filemask, int flags)
{
  cl_object item, output = ECL_NIL;
 AGAIN:
  /* There are several possibilities here:
   *
   * 1) The list of subdirectories DIRECTORY is empty, and only PATHNAME
   * remains to be inspected. If there is no file name or type, then
   * we simply output the truename of the current directory. Otherwise
   * we have to find a file which corresponds to the description.
   */
  if (directory == ECL_NIL) {
    return ecl_nconc(dir_files(base_dir, filemask, flags), output);
  }
  /*
   * 2) We have not yet exhausted the DIRECTORY component of the
   * pathname. We have to enter some subdirectory, determined by
   * CAR(DIRECTORY) and scan it.
   */
  item = ECL_CONS_CAR(directory);

  if (item == ECL_SYM(":WILD",1355) || ecl_wild_string_p(item)) {
    /*
     * 2.1) If CAR(DIRECTORY) is a string or :WILD, we have to
     * enter & scan all subdirectories in our curent directory.
     */
    cl_object next_dir = list_directory(base_dir, item, ECL_NIL, flags);
    for (; !Null(next_dir); next_dir = ECL_CONS_CDR(next_dir)) {
      cl_object record = ECL_CONS_CAR(next_dir);
      cl_object component = ECL_CONS_CAR(record);
      cl_object kind = ECL_CONS_CDR(record);
      if (kind != ECL_SYM(":DIRECTORY",1241))
        continue;
      item = dir_recursive(cl_pathname(component),
                           ECL_CONS_CDR(directory),
                           filemask, flags);
      output = ecl_nconc(item, output);
    }
  } else if (item == ECL_SYM(":WILD-INFERIORS",1356)) {
    /*
     * 2.2) If CAR(DIRECTORY) is :WILD-INFERIORS, we have to do
     * scan all subdirectories from _all_ levels, looking for a
     * tree that matches the remaining part of DIRECTORY.
     */
    cl_object next_dir = list_directory(base_dir, ECL_NIL, ECL_NIL, flags);
    for (; !Null(next_dir); next_dir = ECL_CONS_CDR(next_dir)) {
      cl_object record = ECL_CONS_CAR(next_dir);
      cl_object component = ECL_CONS_CAR(record);
      cl_object kind = ECL_CONS_CDR(record);
      if (kind != ECL_SYM(":DIRECTORY",1241))
        continue;
      item = dir_recursive(cl_pathname(component),
                           directory, filemask, flags);
      output = ecl_nconc(item, output);
    }
    directory = ECL_CONS_CDR(directory);
    goto AGAIN;
  } else { /* :ABSOLUTE, :RELATIVE, :UP, component without wildcards */
    /*
     * 2.2) If CAR(DIRECTORY) is :ABSOLUTE, :RELATIVE or :UP we update
     * the directory to reflect the root, the current or the parent one.
     */
    base_dir = enter_directory(base_dir, item, 1);
    /*
     * If enter_directory() fails, we simply ignore this path. This is
     * what other implementations do and is consistent with the behavior
     * for the file part.
     */
    if (Null(base_dir))
      return ECL_NIL;
    directory = ECL_CONS_CDR(directory);
    goto AGAIN;
  }
  return output;
}

#line 975
cl_object cl_directory(cl_narg narg, cl_object mask, ...)
{
#line 975

  cl_object base_dir;
  cl_object output;
  #line 979
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 979
	static cl_object KEYS[1] = {(cl_object)(cl_symbols+1921)};
	cl_object resolve_symlinks;
#line 979
	cl_object KEY_VARS[2];
#line 979
	ecl_va_list ARGS;
	ecl_va_start(ARGS, mask, narg, 1);
#line 979
	if (ecl_unlikely(narg < 1)) FEwrong_num_arguments(ecl_make_fixnum(305));
#line 979
	cl_parse_key(ARGS, 1, KEYS, KEY_VARS, NULL, 1);
#line 979
	if (KEY_VARS[1]==ECL_NIL) {
#line 979
	  resolve_symlinks = ECL_T;
	} else {
#line 979
	  resolve_symlinks = KEY_VARS[0];
	}
#line 979
  mask = coerce_to_file_pathname(mask);
  mask = make_absolute_pathname(mask);
  base_dir = make_base_pathname(mask);
  output = dir_recursive(base_dir, mask->pathname.directory, mask,
                         Null(resolve_symlinks)? 0 : FOLLOW_SYMLINKS);
  {
#line 984
	#line 984
	cl_object __value0 = output;
#line 984
	the_env->nvalues = 1;
#line 984
	the_env->values[0] = __value0;
#line 984
	ecl_va_end(ARGS);
#line 984
	return __value0;
#line 984
}
;
  }

#line 987
cl_object si_getcwd(cl_narg narg, ...)
{
#line 987

  cl_object output;
  #line 990
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 990
	cl_object change_d_p_d;
#line 990
	va_list ARGS;
	va_start(ARGS, narg);
#line 990
	if (ecl_unlikely(narg < 0|| narg > 1)) FEwrong_num_arguments(ecl_make_fixnum(1089));
#line 990
	if (narg > 0) {
#line 990
		change_d_p_d = va_arg(ARGS,cl_object);
#line 990
	} else {
#line 990
		change_d_p_d = ECL_NIL;
#line 990
	}
#line 990
  output = cl_parse_namestring(3, current_dir(), ECL_NIL, ECL_NIL);
  if (!Null(change_d_p_d)) {
    ECL_SETQ(the_env, ECL_SYM("*DEFAULT-PATHNAME-DEFAULTS*",34), output);
  }
  {
#line 994
	#line 994
	cl_object __value0 = output;
#line 994
	the_env->nvalues = 1;
#line 994
	the_env->values[0] = __value0;
#line 994
	va_end(ARGS);
#line 994
	return __value0;
#line 994
}
;
  }

cl_object
si_get_library_pathname(void)
{
  cl_object s = cl_core.library_pathname;
  if (!Null(s)) {
    goto OUTPUT_UNCHANGED;
  } else {
    const char *v = getenv("ECLDIR");
    if (v) {
      s = ecl_make_constant_base_string(v,-1);
      goto OUTPUT;
    }
  }
#if defined(ECL_MS_WINDOWS_HOST)
  {
    char *buffer;
    HMODULE hnd;
    cl_index len, ep;
    s = ecl_alloc_adjustable_base_string(cl_core.path_max);
    buffer = (char*)s->base_string.self;
    ecl_disable_interrupts();
    hnd = GetModuleHandle("ecl.dll");
    len = GetModuleFileName(hnd, buffer, cl_core.path_max-1);
    ecl_enable_interrupts();
    if (len == 0) {
      FEerror("GetModuleFileName failed (last error = ~S)",
              1, ecl_make_fixnum(GetLastError()));
    }
    s->base_string.fillp = len;
    /* GetModuleFileName returns a file name. We have to strip
     * the directory component. */
    s = cl_make_pathname(8, ECL_SYM(":NAME",1300), ECL_NIL, ECL_SYM(":TYPE",1346), ECL_NIL,
                         ECL_SYM(":VERSION",1354), ECL_NIL,
                         ECL_SYM(":DEFAULTS",1238), s);
    s = ecl_namestring(s, ECL_NAMESTRING_FORCE_BASE_STRING);
  }
#else
  s = ecl_make_constant_base_string(ECLDIR "/",-1);
#endif
 OUTPUT:
  {
    cl_object true_pathname = cl_probe_file(s);
    if (Null(true_pathname)) {
      s = current_dir();
    } else {
      /* Produce a string */
      s = ecl_namestring(s, ECL_NAMESTRING_FORCE_BASE_STRING);
    }
  }
  cl_core.library_pathname = s;
 OUTPUT_UNCHANGED:
  {
#line 1048
	const cl_env_ptr the_env = ecl_process_env();
#line 1048
	#line 1048
	cl_object __value0 = s;
#line 1048
	the_env->nvalues = 1;
#line 1048
	the_env->values[0] = __value0;
#line 1048
	#line 1048
	return __value0;
#line 1048
}
;
}

#line 1051
cl_object si_chdir(cl_narg narg, cl_object directory, ...)
{
#line 1051

  cl_object previous = si_getcwd(0);
  cl_object namestring;
  #line 1055
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 1055
	cl_object change_d_p_d;
#line 1055
	va_list ARGS;
	va_start(ARGS, directory);
#line 1055
	if (ecl_unlikely(narg < 1|| narg > 2)) FEwrong_num_arguments(ecl_make_fixnum(1055));
#line 1055
	if (narg > 1) {
#line 1055
		change_d_p_d = va_arg(ARGS,cl_object);
#line 1055
	} else {
#line 1055
		change_d_p_d = ECL_T;
#line 1055
	}
#line 1055
  /* This will fail if the new directory does not exist */
  directory = cl_truename(directory);
  if (directory->pathname.name != ECL_NIL ||
      directory->pathname.type != ECL_NIL)
    FEerror("~A is not a directory pathname.", 1, directory);
  namestring = ecl_namestring(directory,
                              ECL_NAMESTRING_TRUNCATE_IF_ERROR |
                              ECL_NAMESTRING_FORCE_BASE_STRING);
  if (safe_chdir((char*)namestring->base_string.self, ECL_NIL) < 0) {
    cl_object c_error = _ecl_strerror(errno);
    const char *msg = "Can't change the current directory to ~A."
      "~%C library error: ~S";
    si_signal_simple_error
      (6, ECL_SYM("FILE-ERROR",355), /* condition */
       ECL_T, /* continuable */
       /* format */
       ecl_make_constant_base_string(msg,strlen(msg)),
       cl_list(2, directory, c_error), /* format args */
       ECL_SYM(":PATHNAME",1312), /* file-error options */
       directory);
  } else if (change_d_p_d != ECL_NIL) {
    ECL_SETQ(the_env, ECL_SYM("*DEFAULT-PATHNAME-DEFAULTS*",34), directory);
  }
  {
#line 1078
	#line 1078
	cl_object __value0 = previous;
#line 1078
	the_env->nvalues = 1;
#line 1078
	the_env->values[0] = __value0;
#line 1078
	va_end(ARGS);
#line 1078
	return __value0;
#line 1078
}
;
  }

cl_object
si_mkdir(cl_object directory, cl_object mode)
{
  int modeint, ok;
  cl_object filename = si_coerce_to_base_string(directory);

  if (ecl_unlikely(!ECL_FIXNUMP(mode) ||
                   ecl_fixnum_minusp(mode) ||
                   ecl_fixnum_greater(mode, ecl_make_fixnum(0777)))) {
    FEwrong_type_nth_arg(ecl_make_fixnum(/*SI::MKDIR*/1114), 2, mode,
                         ecl_make_integer_type(ecl_make_fixnum(0),
                                               ecl_make_fixnum(0777)));
  }
  modeint = ecl_fixnum(mode);
  {
    /* Ensure a clean string, without trailing slashes,
     * and null terminated. */
    cl_index last = filename->base_string.fillp;
    if (last > 1) {
      ecl_character c = filename->base_string.self[last-1];
      if (IS_DIR_SEPARATOR(c))
        last--;
    }
    filename = ecl_subseq(filename, 0, last);
  }
  ecl_disable_interrupts();
#if defined(ECL_MS_WINDOWS_HOST)
  ok = mkdir((char*)filename->base_string.self);
#else
  ok = mkdir((char*)filename->base_string.self, modeint);
#endif
  ecl_enable_interrupts();

  if (ecl_unlikely(ok < 0)) {
    cl_object c_error = _ecl_strerror(errno);
    const char *msg = "Could not create directory ~S"
      "~%C library error: ~S";
    si_signal_simple_error
      (6, ECL_SYM("FILE-ERROR",355), /* condition */
       ECL_T, /* continuable */
       /* format */
       ecl_make_constant_base_string(msg,strlen(msg)),
       cl_list(2, filename, c_error), /* format args */
       ECL_SYM(":PATHNAME",1312), /* file-error options */
       filename);
  }
  {
#line 1127
	const cl_env_ptr the_env = ecl_process_env();
#line 1127
	#line 1127
	cl_object __value0 = filename;
#line 1127
	the_env->nvalues = 1;
#line 1127
	the_env->values[0] = __value0;
#line 1127
	#line 1127
	return __value0;
#line 1127
}
;
}

cl_object
si_mkstemp(cl_object template)
{
  cl_object output;
  cl_index l;
  int fd;

#if defined(ECL_MS_WINDOWS_HOST)
  cl_object phys, dir, file;
  char strTempDir[MAX_PATH];
  char strTempFileName[MAX_PATH];
  char *s;
  int ok;

  phys = cl_translate_logical_pathname(1, template);
  dir = cl_make_pathname(8,
                         ECL_SYM(":TYPE",1346), ECL_NIL,
                         ECL_SYM(":NAME",1300), ECL_NIL,
                         ECL_SYM(":VERSION",1354), ECL_NIL,
                         ECL_SYM(":DEFAULTS",1238), phys);
  dir = si_coerce_to_filename(dir);
  file = cl_file_namestring(phys);
        
  l = dir->base_string.fillp;
  memcpy(strTempDir, dir->base_string.self, l);
  strTempDir[l] = 0;
  for (s = strTempDir; *s; s++)
    if (*s == '/')
      *s = '\\';

  ecl_disable_interrupts();
  ok = GetTempFileName(strTempDir, (char*)file->base_string.self, 0,
                       strTempFileName);
  ecl_enable_interrupts();
  if (!ok) {
    output = ECL_NIL;
  } else {
    l = strlen(strTempFileName);
    output = ecl_alloc_simple_base_string(l);
    memcpy(output->base_string.self, strTempFileName, l);
  }
#else
  template = si_coerce_to_filename(template);
  l = template->base_string.fillp;
  output = ecl_alloc_simple_base_string(l + 6);
  memcpy(output->base_string.self, template->base_string.self, l);
  memcpy(output->base_string.self + l, "XXXXXX", 6);

  ecl_disable_interrupts();
# ifdef HAVE_MKSTEMP
  fd = mkstemp((char*)output->base_string.self);
# else
  if (mktemp((char*)output->base_string.self)) {
    fd = open((char*)output->base_string.self, O_CREAT|O_TRUNC, 0666);
  } else {
    fd = -1;
  }
# endif
  ecl_enable_interrupts();

  if (fd < 0) {
    output = ECL_NIL;
  } else {
    close(fd);
  }
#endif
  {
#line 1196
	const cl_env_ptr the_env = ecl_process_env();
#line 1196
	#line 1196
	cl_object __value0 = (Null(output)? output : cl_truename(output));
#line 1196
	the_env->nvalues = 1;
#line 1196
	the_env->values[0] = __value0;
#line 1196
	#line 1196
	return __value0;
#line 1196
}
;
}

cl_object
si_rmdir(cl_object directory)
{
  return cl_delete_file(cl_make_pathname(6, ECL_SYM(":NAME",1300), ECL_NIL,
                                         ECL_SYM(":TYPE",1346), ECL_NIL,
                                         ECL_SYM(":DEFAULTS",1238), directory));
}

cl_object
si_copy_file(cl_object orig, cl_object dest)
{
  FILE *in, *out;
  int ok = 0;
  orig = si_coerce_to_filename(orig);
  dest = si_coerce_to_filename(dest);
  ecl_disable_interrupts();
  in = fopen((char*)orig->base_string.self, OPEN_R);
  if (in) {
    out = fopen((char*)dest->base_string.self, OPEN_W);
    if (out) {
      unsigned char *buffer = ecl_alloc_atomic(1024);
      cl_index size;
      do {
        size = fread(buffer, 1, 1024, in);
        fwrite(buffer, 1, size, out);
      } while (size == 1024);
      ok = 1;
      fclose(out);
    }
    fclose(in);
  }
  ecl_enable_interrupts();
  {
#line 1231
	const cl_env_ptr the_env = ecl_process_env();
#line 1231
	#line 1231
	cl_object __value0 = (ok? ECL_T : ECL_NIL);
#line 1231
	the_env->nvalues = 1;
#line 1231
	the_env->values[0] = __value0;
#line 1231
	#line 1231
	return __value0;
#line 1231
}
;
}

cl_object
si_chmod(cl_object file, cl_object mode)
{
  mode_t code = ecl_to_uint32_t(mode);
  cl_object filename = si_coerce_to_filename(file);
  unlikely_if (chmod((char*)filename->base_string.self, code)) {
    cl_object c_error = _ecl_strerror(errno);
    const char *msg = "Unable to change mode of file ~S to value ~O"
      "~%C library error: ~S";
    si_signal_simple_error
      (6, ECL_SYM("FILE-ERROR",355), /* condition */
       ECL_T, /* continuable */
       /* format */
       ecl_make_constant_base_string(msg,strlen(msg)),
       cl_list(3, file, mode, c_error), /* format args */
       ECL_SYM(":PATHNAME",1312), /* file-error options */
       file);
  }
  {
#line 1252
	const cl_env_ptr the_env = ecl_process_env();
the_env->nvalues = 0; return ECL_NIL;
#line 1252
}
;
}
