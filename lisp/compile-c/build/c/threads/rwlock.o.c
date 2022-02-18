#line 1 "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/src/c/threads/rwlock.d"
/* -*- Mode: C; c-basic-offset: 2; indent-tabs-mode: nil -*- */
/* vim: set filetype=c tabstop=2 shiftwidth=2 expandtab: */

/*
 * rwlock.d - POSIX read-write locks
 *
 * Copyright (c) 2003 Juan Jose Garcia Ripoll
 *
 * See file 'LICENSE' for the copyright details.
 *
 */

#ifndef __sun__ /* See unixinit.d for this */
#define _XOPEN_SOURCE 600       /* For pthread mutex attributes */
#endif
#include <errno.h>
#include <ecl/ecl.h>
#ifdef ECL_WINDOWS_THREADS
# include <windows.h>
#else
# include <pthread.h>
#endif
#include <ecl/internal.h>

/*----------------------------------------------------------------------
 * READ/WRITE LOCKS
 */

static void
FEerror_not_a_rwlock(cl_object lock)
{
  FEwrong_type_argument(ECL_SYM("MP::RWLOCK",1471), lock);
}

static void
FEunknown_rwlock_error(cl_object lock, int rc)
{
#ifdef ECL_WINDOWS_THREADS
  FEwin32_error("When acting on rwlock ~A, got an unexpected error.", 1, lock);
#else
  const char *msg = NULL;
  switch (rc) {
  case EINVAL:
    msg = "The value specified by rwlock is invalid";
    break;
  case EPERM:
    msg = "Read/write lock not owned by us";
    break;
  case EDEADLK:
    msg = "Thread already owns this lock";
    break;
  case ENOMEM:
    msg = "Out of memory";
    break;
  default:
    FElibc_error("When acting on rwlock ~A, got an unexpected error.",
                 1, lock);
  }
  FEerror("When acting on rwlock ~A, got the following C library error:~%"
          "~A", 2, lock, ecl_make_constant_base_string(msg,-1));
#endif
}

cl_object
ecl_make_rwlock(cl_object name)
{
  const cl_env_ptr the_env = ecl_process_env();
  cl_object output = ecl_alloc_object(t_rwlock);
#ifdef ECL_RWLOCK
  int rc;
  ecl_disable_interrupts_env(the_env);
  rc = pthread_rwlock_init(&output->rwlock.mutex, NULL);
  ecl_enable_interrupts_env(the_env);
  if (rc) {
    FEerror("Unable to create read/write lock", 0);
  }
  ecl_set_finalizer_unprotected(output, ECL_T);
#else
  output->rwlock.mutex = ecl_make_lock(name, 0);
#endif
  output->rwlock.name = name;
  return output;
}

#line 85
cl_object mp_make_rwlock(cl_narg narg, ...)
{
#line 85

  #line 87
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 87
	static cl_object KEYS[1] = {(cl_object)(cl_symbols+1300)};
	cl_object name;
#line 87
	cl_object KEY_VARS[2];
#line 87
	ecl_va_list ARGS;
	ecl_va_start(ARGS, narg, narg, 0);
#line 87
	if (ecl_unlikely(narg < 0)) FEwrong_num_arguments(ecl_make_fixnum(1470));
#line 87
	cl_parse_key(ARGS, 1, KEYS, KEY_VARS, NULL, 0);
#line 87
	if (KEY_VARS[1]==ECL_NIL) {
#line 87
	  name = ECL_NIL;
	} else {
#line 87
	  name = KEY_VARS[0];
	}
#line 87
  {
#line 87
	#line 87
	cl_object __value0 = ecl_make_rwlock(name);
#line 87
	the_env->nvalues = 1;
#line 87
	the_env->values[0] = __value0;
#line 87
	ecl_va_end(ARGS);
#line 87
	return __value0;
#line 87
}
;
  }

cl_object
mp_rwlock_name(cl_object lock)
{
  const cl_env_ptr env = ecl_process_env();
  if (ecl_t_of(lock) != t_rwlock)
    FEerror_not_a_rwlock(lock);
  ecl_return1(env, lock->rwlock.name);
}

cl_object
mp_giveup_rwlock_read(cl_object lock)
{
  /* Must be called with interrupts disabled. */
  if (ecl_t_of(lock) != t_rwlock)
    FEerror_not_a_rwlock(lock);
#ifdef ECL_RWLOCK
  {
    int rc = pthread_rwlock_unlock(&lock->rwlock.mutex);
    if (rc)
      FEunknown_rwlock_error(lock, rc);
    {
#line 110
	const cl_env_ptr the_env = ecl_process_env();
#line 110
	#line 110
	cl_object __value0 = ECL_T;
#line 110
	the_env->nvalues = 1;
#line 110
	the_env->values[0] = __value0;
#line 110
	#line 110
	return __value0;
#line 110
}
;
  }
#else
  return mp_giveup_lock(lock->rwlock.mutex);
#endif
}

cl_object
mp_giveup_rwlock_write(cl_object lock)
{
  return mp_giveup_rwlock_read(lock);
}

cl_object
mp_get_rwlock_read_nowait(cl_object lock)
{
  if (ecl_t_of(lock) != t_rwlock)
    FEerror_not_a_rwlock(lock);
#ifdef ECL_RWLOCK
  {
    const cl_env_ptr env = ecl_process_env();
    cl_object output = ECL_T;
    int rc = pthread_rwlock_tryrdlock(&lock->rwlock.mutex);
    if (rc == 0) {
      output = ECL_T;
    } else if (rc == EBUSY) {
      output = ECL_NIL;
    } else {
      FEunknown_rwlock_error(lock, rc);
    }
    ecl_return1(env, output);
  }
#else
  return mp_get_lock_nowait(lock->rwlock.mutex);
#endif
}

cl_object
mp_get_rwlock_read_wait(cl_object lock)
{
  if (ecl_t_of(lock) != t_rwlock)
    FEerror_not_a_rwlock(lock);
#ifdef ECL_RWLOCK
  {
    const cl_env_ptr env = ecl_process_env();
    int rc = pthread_rwlock_rdlock(&lock->rwlock.mutex);
    if (rc != 0) {
      FEunknown_rwlock_error(lock, rc);
    }
    ecl_return1(env, ECL_T);
  }
#else
  return mp_get_lock_wait(lock->rwlock.mutex);
#endif
}

#line 166
cl_object mp_get_rwlock_read(cl_narg narg, cl_object lock, ...)
{
#line 166

  #line 168
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 168
	cl_object wait;
#line 168
	va_list ARGS;
	va_start(ARGS, lock);
#line 168
	if (ecl_unlikely(narg < 1|| narg > 2)) FEwrong_num_arguments(ecl_make_fixnum(1473));
#line 168
	if (narg > 1) {
#line 168
		wait = va_arg(ARGS,cl_object);
#line 168
	} else {
#line 168
		wait = ECL_T;
#line 168
	}
#line 168
  if (Null(wait))
    return mp_get_rwlock_read_nowait(lock);
  else
    return mp_get_rwlock_read_wait(lock);
  }

cl_object
mp_get_rwlock_write_nowait(cl_object lock)
{
  if (ecl_t_of(lock) != t_rwlock)
    FEerror_not_a_rwlock(lock);
#ifdef ECL_RWLOCK
  {
    const cl_env_ptr env = ecl_process_env();
    cl_object output = ECL_T;
    int rc = pthread_rwlock_trywrlock(&lock->rwlock.mutex);
    if (rc == 0) {
      output = ECL_T;
    } else if (rc == EBUSY) {
      output = ECL_NIL;
    } else {
      FEunknown_rwlock_error(lock, rc);
    }
    ecl_return1(env, output);
  }
#else
  return mp_get_lock_nowait(lock->rwlock.mutex);
#endif
}

cl_object
mp_get_rwlock_write_wait(cl_object lock)
{
  if (ecl_t_of(lock) != t_rwlock)
    FEerror_not_a_rwlock(lock);
#ifdef ECL_RWLOCK
  {
    int rc = pthread_rwlock_wrlock(&lock->rwlock.mutex);
    if (rc != 0) {
      FEunknown_rwlock_error(lock, rc);
    }
    {
#line 209
	const cl_env_ptr the_env = ecl_process_env();
#line 209
	#line 209
	cl_object __value0 = ECL_T;
#line 209
	the_env->nvalues = 1;
#line 209
	the_env->values[0] = __value0;
#line 209
	#line 209
	return __value0;
#line 209
}
;
  }
#else
  return mp_get_lock_wait(lock->rwlock.mutex);
#endif
}

#line 216
cl_object mp_get_rwlock_write(cl_narg narg, cl_object lock, ...)
{
#line 216

  #line 218
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 218
	cl_object wait;
#line 218
	va_list ARGS;
	va_start(ARGS, lock);
#line 218
	if (ecl_unlikely(narg < 1|| narg > 2)) FEwrong_num_arguments(ecl_make_fixnum(1474));
#line 218
	if (narg > 1) {
#line 218
		wait = va_arg(ARGS,cl_object);
#line 218
	} else {
#line 218
		wait = ECL_T;
#line 218
	}
#line 218
  if (Null(wait)) {
    return mp_get_rwlock_write_nowait(lock);
  }
  else {
    return mp_get_rwlock_write_wait(lock);
  }
  }
