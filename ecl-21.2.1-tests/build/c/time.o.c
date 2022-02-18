#line 1 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/c/time.d"
/* -*- Mode: C; c-basic-offset: 2; indent-tabs-mode: nil -*- */
/* vim: set filetype=c tabstop=2 shiftwidth=2 expandtab: */

/*
 * time.d - time routines
 *
 * Copyright (c) 1984 Taiichi Yuasa and Masami Hagiya
 * Copyright (c) 1990 Giuseppe Attardi
 * Copyright (c) 2001 Juan Jose Garcia Ripoll
 *
 * See file 'LICENSE' for the copyright details.
 *
 */

#include <limits.h>
#include <time.h>
#ifndef _MSC_VER
# include <unistd.h>
# include <errno.h>
#endif
#if defined(_MSC_VER) || defined(__MINGW32__)
# include <windows.h>
# include <winsock.h>
#endif

#define ECL_INCLUDE_MATH_H
#include <ecl/ecl.h>
#include <ecl/internal.h>
#include <ecl/number.h>
#ifdef HAVE_TIMES
# include <sys/times.h>
#endif
#ifdef HAVE_GETRUSAGE
# include <sys/time.h>
# include <sys/resource.h>
#endif
#ifdef HAVE_GETTIMEOFDAY
# include <sys/time.h>
#endif
#include <ecl/impl/math_fenv.h>

static struct ecl_timeval beginning;

void
ecl_get_internal_real_time(struct ecl_timeval *tv)
{
#if defined(HAVE_GETTIMEOFDAY) && !defined(ECL_MS_WINDOWS_HOST)
  struct timezone tz;
  struct timeval aux;
  gettimeofday(&aux, &tz);
  tv->tv_usec = aux.tv_usec;
  tv->tv_sec = aux.tv_sec;
#else
# if defined(ECL_MS_WINDOWS_HOST)
  union {
    FILETIME filetime;
    DWORDLONG hundred_ns;
  } system_time;
  GetSystemTimeAsFileTime(&system_time.filetime);
  system_time.hundred_ns /= 10000;
  tv->tv_sec = system_time.hundred_ns / 1000;
  tv->tv_usec = (system_time.hundred_ns % 1000) * 1000;
# else
  time_t = time(0);
  tv->tv_sec = time_t;
  tv->tv_usec = 0;
# endif
#endif
}

void
ecl_get_internal_run_time(struct ecl_timeval *tv)
{
#ifdef HAVE_GETRUSAGE
  struct rusage r;
  getrusage(RUSAGE_SELF, &r);
  tv->tv_usec = r.ru_utime.tv_usec;
  tv->tv_sec = r.ru_utime.tv_sec;
#else
# ifdef HAVE_TIMES
  struct tms buf;
  times(&buf);
  tv->tv_sec = buf.tms_utime / CLK_TCK;
  tv->tv_usec = (buf.tms_utime % CLK_TCK) * 1000000;
# else
#  if defined(ECL_MS_WINDOWS_HOST)
  union {
    FILETIME filetime;
    DWORDLONG hundred_ns;
  } kernel_time, user_time, creation_time, exit_time;
  if (!GetProcessTimes(GetCurrentProcess(),
                       &creation_time.filetime,
                       &exit_time.filetime,
                       &kernel_time.filetime,
                       &user_time.filetime))
    FEwin32_error("GetProcessTimes() failed", 0);
  kernel_time.hundred_ns += user_time.hundred_ns;
  kernel_time.hundred_ns /= 10000;
  tv->tv_sec = kernel_time.hundred_ns / 1000;
  tv->tv_usec = (kernel_time.hundred_ns % 1000) * 1000;
#  else
  ecl_get_internal_real_time(tv);
#  endif
# endif
#endif
}

void
ecl_musleep(double time, bool alertable)
{
#ifdef HAVE_NANOSLEEP
  struct timespec tm;
  int code;
  tm.tv_sec = (time_t)floor(time);
  tm.tv_nsec = (long)((time - floor(time)) * 1e9);
 AGAIN:
  code = nanosleep(&tm, &tm);
  {
    int old_errno = errno;
    if (code < 0 && old_errno == EINTR && !alertable) {
      goto AGAIN;
    }
  }
#else
#if defined (ECL_MS_WINDOWS_HOST)
  /* Maximum waiting time that fits in SleepEx. This is the
   * largest integer that fits safely in DWORD in milliseconds
   * and has to be converted to 100ns (1e-3 / 100e-9 = 1e4) */
  const DWORDLONG maxtime = (DWORDLONG)0xfffffff * (DWORDLONG)10000;
  DWORDLONG wait = time * 1e7;
  union {
    FILETIME filetime;
    DWORDLONG hundred_ns;
  } end, now;
  if (alertable) {
    GetSystemTimeAsFileTime(&end.filetime);
    end.hundred_ns += wait;
  }
  do {
    DWORDLONG interval;
    if (wait > maxtime) {
      interval = maxtime;
      wait -= maxtime;
    } else {
      interval = wait;
      wait = 0;
    }
    if (SleepEx(interval/10000, alertable) != 0) {
      if (alertable) {
        break;
      } else {
        GetSystemTimeAsFileTime(&now.filetime);
        if (now.hundred_ns >= end.hundred_ns)
          break;
        else
          wait = end.hundred_ns - now.hundred_ns;
      }
    }
  } while (wait);
#else
  int t = (int)time;
  for (t = (time + 0.5); t > 1000; t -= 1000)
    sleep(1000);
  sleep(t);
#endif
#endif
}

cl_fixnum
ecl_runtime(void)
{
  struct ecl_timeval tv;
  ecl_get_internal_run_time(&tv);
  return tv.tv_sec * 1000 + tv.tv_usec / 1000;
}

cl_object
cl_sleep(cl_object z)
{
  double time;
  /* INV: ecl_minusp() makes sure `z' is real */
  if (ecl_minusp(z))
    cl_error(9, ECL_SYM("SIMPLE-TYPE-ERROR",775), ECL_SYM(":FORMAT-CONTROL",1263),
             ecl_make_constant_base_string("Not a non-negative number ~S",-1),
             ECL_SYM(":FORMAT-ARGUMENTS",1262), cl_list(1, z),
             ECL_SYM(":EXPECTED-TYPE",1254), ECL_SYM("REAL",705), ECL_SYM(":DATUM",1236), z);
  /* Compute time without overflows */
  ECL_WITHOUT_FPE_BEGIN {
    time = ecl_to_double(z);
    if (isnan(time) || !isfinite(time) || (time > INT_MAX)) {
      time = INT_MAX;
    } else if (time < 1e-9) {
      time = 1e-9;
    }
  } ECL_WITHOUT_FPE_END;
  ecl_musleep(time, 0);
  {
#line 197
	const cl_env_ptr the_env = ecl_process_env();
#line 197
	#line 197
	cl_object __value0 = ECL_NIL;
#line 197
	the_env->nvalues = 1;
#line 197
	the_env->values[0] = __value0;
#line 197
	#line 197
	return __value0;
#line 197
}
;
}

static cl_object
timeval_to_time(long sec, long usec)
{
  cl_object milliseconds = ecl_plus(ecl_times(ecl_make_integer(sec),
                                              ecl_make_fixnum(1000)),
                                    ecl_make_integer(usec / 1000));
  {
#line 206
	const cl_env_ptr the_env = ecl_process_env();
#line 206
	#line 206
	cl_object __value0 = milliseconds;
#line 206
	the_env->nvalues = 1;
#line 206
	the_env->values[0] = __value0;
#line 206
	#line 206
	return __value0;
#line 206
}
;
}

cl_object
cl_get_internal_run_time()
{
  struct ecl_timeval tv;
  ecl_get_internal_run_time(&tv);
  return timeval_to_time(tv.tv_sec, tv.tv_usec);
}

cl_object
cl_get_internal_real_time()
{
  struct ecl_timeval tv;
  ecl_get_internal_real_time(&tv);
  return timeval_to_time(tv.tv_sec - beginning.tv_sec,
                         tv.tv_usec - beginning.tv_usec);
}

cl_object
cl_get_universal_time()
{
  cl_object utc = ecl_make_integer(time(0));
  {
#line 230
	const cl_env_ptr the_env = ecl_process_env();
#line 230
	#line 230
	cl_object __value0 = ecl_plus(utc, cl_core.Jan1st1970UT);
#line 230
	the_env->nvalues = 1;
#line 230
	the_env->values[0] = __value0;
#line 230
	#line 230
	return __value0;
#line 230
}
;
}

void
init_unixtime(void)
{
  ecl_get_internal_real_time(&beginning);

  ECL_SET(ECL_SYM("INTERNAL-TIME-UNITS-PER-SECOND",445), ecl_make_fixnum(1000));

  cl_core.Jan1st1970UT =
    ecl_times(ecl_make_fixnum(24 * 60 * 60),
              ecl_make_fixnum(17 + 365 * 70));
}
