#line 1 "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/src/c/threads/mutex.d"
/* -*- Mode: C; c-basic-offset: 2; indent-tabs-mode: nil -*- */
/* vim: set filetype=c tabstop=2 shiftwidth=2 expandtab: */

/*
 * mutex.d - mutually exclusive locks
 *
 * Copyright (c) 2003 Juan Jose Garcia Ripoll
 *
 * See file 'LICENSE' for the copyright details.
 *
 */

#include <ecl/ecl.h>
#include <ecl/internal.h>


/*----------------------------------------------------------------------
 * LOCKS or MUTEX
 */

static void
FEerror_not_a_lock(cl_object lock)
{
  FEwrong_type_argument(ECL_SYM("MP::LOCK",1430), lock);
}

static void
FEerror_not_a_recursive_lock(cl_object lock)
{
  FEerror("Attempted to recursively lock ~S which is already owned by ~S",
          2, lock, lock->lock.owner);
}

static void
FEerror_not_owned(cl_object lock)
{
  FEerror("Attempted to give up lock ~S that is not owned by process ~S",
          2, lock, mp_current_process());
}

cl_object
ecl_make_lock(cl_object name, bool recursive)
{
  cl_object output = ecl_alloc_object(t_lock);
  output->lock.name = name;
  output->lock.owner = ECL_NIL;
  output->lock.counter = 0;
  output->lock.recursive = recursive;
  output->lock.queue_list = ECL_NIL;
  output->lock.queue_spinlock = ECL_NIL;
  return output;
}

#line 54
cl_object mp_make_lock(cl_narg narg, ...)
{
#line 54

  #line 56
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 56
	static cl_object KEYS[2] = {(cl_object)(cl_symbols+1300), (cl_object)(cl_symbols+1446)};
	cl_object name;
	cl_object recursive;
#line 56
	cl_object KEY_VARS[4];
#line 56
	ecl_va_list ARGS;
	ecl_va_start(ARGS, narg, narg, 0);
#line 56
	if (ecl_unlikely(narg < 0)) FEwrong_num_arguments(ecl_make_fixnum(1445));
#line 56
	cl_parse_key(ARGS, 2, KEYS, KEY_VARS, NULL, 0);
#line 56
	if (KEY_VARS[2]==ECL_NIL) {
#line 56
	  name = ECL_NIL;
	} else {
#line 56
	  name = KEY_VARS[0];
	}
#line 56
	if (KEY_VARS[3]==ECL_NIL) {
#line 56
	  recursive = ECL_NIL;
	} else {
#line 56
	  recursive = KEY_VARS[1];
	}
#line 56
  {
#line 56
	#line 56
	cl_object __value0 = ecl_make_lock(name, !Null(recursive));
#line 56
	the_env->nvalues = 1;
#line 56
	the_env->values[0] = __value0;
#line 56
	ecl_va_end(ARGS);
#line 56
	return __value0;
#line 56
}
;
  }

cl_object
mp_recursive_lock_p(cl_object lock)
{
  cl_env_ptr env = ecl_process_env();
  unlikely_if (ecl_t_of(lock) != t_lock)
    FEerror_not_a_lock(lock);
  ecl_return1(env, lock->lock.recursive? ECL_T : ECL_NIL);
}

cl_object
mp_holding_lock_p(cl_object lock)
{
  cl_env_ptr env = ecl_process_env();
  cl_object own_process = env->own_process;
  unlikely_if (ecl_t_of(lock) != t_lock)
    FEerror_not_a_lock(lock);
  ecl_return1(env, (lock->lock.owner == own_process) ? ECL_T : ECL_NIL);
}

cl_object
mp_lock_name(cl_object lock)
{
  cl_env_ptr env = ecl_process_env();
  unlikely_if (ecl_t_of(lock) != t_lock) {
    FEerror_not_a_lock(lock);
  }
  ecl_return1(env, lock->lock.name);
}

cl_object
mp_lock_owner(cl_object lock)
{
  cl_env_ptr env = ecl_process_env();
  unlikely_if (ecl_t_of(lock) != t_lock) {
    FEerror_not_a_lock(lock);
  }
  ecl_return1(env, lock->lock.owner);
}

cl_object
mp_lock_count(cl_object lock)
{
  cl_env_ptr env = ecl_process_env();
  unlikely_if (ecl_t_of(lock) != t_lock) {
    FEerror_not_a_lock(lock);
  }
  ecl_return1(env, ecl_make_fixnum(lock->lock.counter));
}

cl_object
mp_giveup_lock(cl_object lock)
{
  /* Must be called with interrupts disabled. */
  cl_env_ptr env = ecl_process_env();
  cl_object own_process = env->own_process;
  unlikely_if (ecl_t_of(lock) != t_lock) {
    FEerror_not_a_lock(lock);
  }
  unlikely_if (lock->lock.owner != own_process) {
    FEerror_not_owned(lock);
  }
  if (--lock->lock.counter == 0) {
    cl_object first = ecl_waiter_pop(env, lock);;
    if (first == ECL_NIL) {
      lock->lock.owner = ECL_NIL;
    } else {
      lock->lock.counter = 1;
      lock->lock.owner = first;
      ecl_wakeup_process(first);
    }
  } 
  ecl_return1(env, ECL_T);
}

static cl_object
get_lock_inner(cl_env_ptr env, cl_object lock)
{
  cl_object output;
  cl_object own_process = env->own_process;
  ecl_disable_interrupts_env(env);
  if (AO_compare_and_swap_full((AO_t*)&(lock->lock.owner),
                               (AO_t)ECL_NIL, (AO_t)own_process)) {
    lock->lock.counter = 1;
    output = ECL_T;
    print_lock("acquired %p\t", lock, lock);
  } else if (lock->lock.owner == own_process) {
    unlikely_if (!lock->lock.recursive) {
      FEerror_not_a_recursive_lock(lock);
    }
    ++lock->lock.counter;
    output = ECL_T;
  } else {
    print_lock("failed acquiring %p for %d\t", lock, lock,
               lock->lock.owner);
    output = ECL_NIL;
  }
  ecl_enable_interrupts_env(env);
  return output;
}

cl_object
mp_get_lock_nowait(cl_object lock)
{
  cl_env_ptr env = ecl_process_env();
  unlikely_if (ecl_t_of(lock) != t_lock) {
    FEerror_not_a_lock(lock);
  }
  ecl_return1(env, get_lock_inner(env, lock));
}

static cl_object
own_or_get_lock(cl_env_ptr env, cl_object lock)
{
  cl_object output;
  cl_object own_process = env->own_process;
  ecl_disable_interrupts_env(env);
  if (AO_compare_and_swap_full((AO_t*)&(lock->lock.owner),
                               (AO_t)ECL_NIL, (AO_t)own_process)) {
    lock->lock.counter = 1;
    output = ECL_T;
    print_lock("acquired %p\t", lock, lock);
  } else if (lock->lock.owner == own_process) {
    output = ECL_T;
  } else {
    output = ECL_NIL;
  }
  ecl_enable_interrupts_env(env);
  return output;
}

cl_object
mp_get_lock_wait(cl_object lock)
{
  cl_env_ptr env = ecl_process_env();
  unlikely_if (ecl_t_of(lock) != t_lock) {
    FEerror_not_a_lock(lock);
  }
  if (get_lock_inner(env, lock) == ECL_NIL) {
    ecl_wait_on(env, own_or_get_lock, lock);
  }
  {
#line 199
	const cl_env_ptr the_env = ecl_process_env();
#line 199
	#line 199
	cl_object __value0 = ECL_T;
#line 199
	the_env->nvalues = 1;
#line 199
	the_env->values[0] = __value0;
#line 199
	#line 199
	return __value0;
#line 199
}
;
}

#line 202
cl_object mp_get_lock(cl_narg narg, cl_object lock, ...)
{
#line 202

  #line 204
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 204
	cl_object wait;
#line 204
	va_list ARGS;
	va_start(ARGS, lock);
#line 204
	if (ecl_unlikely(narg < 1|| narg > 2)) FEwrong_num_arguments(ecl_make_fixnum(1452));
#line 204
	if (narg > 1) {
#line 204
		wait = va_arg(ARGS,cl_object);
#line 204
	} else {
#line 204
		wait = ECL_T;
#line 204
	}
#line 204
  if (Null(wait)) {
    return mp_get_lock_nowait(lock);
  }
  else {
    return mp_get_lock_wait(lock);
  }
  }
