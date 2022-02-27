#line 1 "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/src/c/threads/semaphore.d"
/* -*- Mode: C; c-basic-offset: 2; indent-tabs-mode: nil -*- */
/* vim: set filetype=c tabstop=2 shiftwidth=2 expandtab: */

/*
 * semaphore.d - POSIX-like semaphores
 *
 * Copyright (c) 2011 Juan Jose Garcia Ripoll
 *
 * See file 'LICENSE' for the copyright details.
 *
 */

#define AO_ASSUME_WINDOWS98 /* We need this for CAS */
#include <ecl/ecl.h>
#include <ecl/internal.h>

#if !defined(AO_HAVE_fetch_and_add_full)
#error "Cannot implement semaphores without AO_fetch_and_add_full"
#endif

static ECL_INLINE void
FEerror_not_a_semaphore(cl_object semaphore)
{
  FEwrong_type_argument(ECL_SYM("MP::SEMAPHORE",1479), semaphore);
}

cl_object
ecl_make_semaphore(cl_object name, cl_fixnum count)
{
  cl_object output = ecl_alloc_object(t_semaphore);
  output->semaphore.name = name;
  output->semaphore.counter = count;
  output->semaphore.queue_list = ECL_NIL;
  output->semaphore.queue_spinlock = ECL_NIL;
  return output;
}

#line 38
cl_object mp_make_semaphore(cl_narg narg, ...)
{
#line 38

  #line 39
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 39
	static cl_object KEYS[2] = {(cl_object)(cl_symbols+1300), (cl_object)(cl_symbols+1487)};
	cl_object name;
	cl_object count;
#line 39
	cl_object KEY_VARS[4];
#line 39
	ecl_va_list ARGS;
	ecl_va_start(ARGS, narg, narg, 0);
#line 39
	if (ecl_unlikely(narg < 0)) FEwrong_num_arguments(ecl_make_fixnum(1480));
#line 39
	cl_parse_key(ARGS, 2, KEYS, KEY_VARS, NULL, 0);
#line 39
	if (KEY_VARS[2]==ECL_NIL) {
#line 39
	  name = ECL_NIL;
	} else {
#line 39
	  name = KEY_VARS[0];
	}
#line 39
	if (KEY_VARS[3]==ECL_NIL) {
#line 39
	  count = ecl_make_fixnum(0);
	} else {
#line 39
	  count = KEY_VARS[1];
	}
#line 39
{
    {
#line 40
	#line 40
	cl_object __value0 = ecl_make_semaphore(name, fixnnint(count));
#line 40
	the_env->nvalues = 1;
#line 40
	the_env->values[0] = __value0;
#line 40
	ecl_va_end(ARGS);
#line 40
	return __value0;
#line 40
}
;
  } }

cl_object
mp_semaphore_name(cl_object semaphore)
{
  cl_env_ptr env = ecl_process_env();
  unlikely_if (ecl_t_of(semaphore) != t_semaphore) {
    FEerror_not_a_semaphore(semaphore);
  }
  ecl_return1(env, semaphore->semaphore.name);
}

cl_object
mp_semaphore_count(cl_object semaphore)
{
  cl_env_ptr env = ecl_process_env();
  unlikely_if (ecl_t_of(semaphore) != t_semaphore) {
    FEerror_not_a_semaphore(semaphore);
  }
  ecl_return1(env, ecl_make_fixnum(semaphore->semaphore.counter));
}

cl_object
mp_semaphore_wait_count(cl_object semaphore)
{
  cl_env_ptr env = ecl_process_env();
  unlikely_if (ecl_t_of(semaphore) != t_semaphore) {
    FEerror_not_a_semaphore(semaphore);
  }
  ecl_return1(env, cl_length(semaphore->semaphore.queue_list));
}

#line 73
cl_object mp_signal_semaphore(cl_narg narg, cl_object semaphore, ...)
{
#line 73

  #line 74
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 74
	cl_object count;
#line 74
	va_list ARGS;
	va_start(ARGS, semaphore);
#line 74
	if (ecl_unlikely(narg < 1|| narg > 2)) FEwrong_num_arguments(ecl_make_fixnum(1481));
#line 74
	if (narg > 1) {
#line 74
		count = va_arg(ARGS,cl_object);
#line 74
	} else {
#line 74
		count = ecl_make_fixnum(1);
#line 74
	}
#line 74
{
    cl_fixnum n = fixnnint(count);
    cl_env_ptr env = ecl_process_env();
    unlikely_if (ecl_t_of(semaphore) != t_semaphore) {
      FEerror_not_a_semaphore(semaphore);
    }
    AO_fetch_and_add((AO_t*)&semaphore->semaphore.counter, n);
    if (semaphore->semaphore.queue_list != ECL_NIL) {
      ecl_wakeup_waiters(env, semaphore, ECL_WAKEUP_ALL);
    }
    {
the_env->nvalues = 0; return ECL_NIL;
#line 84
}
;
  } }

static cl_object
get_semaphore_inner(cl_env_ptr env, cl_object semaphore)
{
  cl_object output;
  ecl_disable_interrupts_env(env);
  do {
    cl_fixnum counter = semaphore->semaphore.counter;
    if (!counter) {
      output = ECL_NIL;
      break;
    }
    if (AO_compare_and_swap_full((AO_t*)&(semaphore->semaphore.counter),
                                 (AO_t)counter, (AO_t)(counter-1))) {
      output = ecl_make_fixnum(counter);
      break;
    }
    ecl_process_yield();
  } while (1);
  ecl_enable_interrupts_env(env);
  return output;
}

cl_object
mp_wait_on_semaphore(cl_object semaphore)
{
  cl_env_ptr env = ecl_process_env();
  cl_object output;
  unlikely_if (ecl_t_of(semaphore) != t_semaphore) {
    FEerror_not_a_semaphore(semaphore);
  }
  output = get_semaphore_inner(env, semaphore);
  if (Null(output)) {
    output = ecl_wait_on(env, get_semaphore_inner, semaphore);
  }
  ecl_return1(env, output);
}

cl_object
mp_try_get_semaphore(cl_object semaphore)
{
  cl_env_ptr env = ecl_process_env();
  unlikely_if (ecl_t_of(semaphore) != t_semaphore) {
    FEerror_not_a_semaphore(semaphore);
  }
  ecl_return1(env, get_semaphore_inner(env, semaphore));
}

