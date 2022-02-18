#line 1 "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/src/c/threads/condition_variable.d"
/* -*- Mode: C; c-basic-offset: 2; indent-tabs-mode: nil -*- */
/* vim: set filetype=c tabstop=2 shiftwidth=2 expandtab: */

/*
 * condition_variable.d - condition variables for native threads
 *
 * Copyright (c) 2003 Juan Jose Garcia Ripoll
 *
 * See file 'LICENSE' for the copyright details.
 *
 */

#include <ecl/ecl.h>
#include <ecl/internal.h>

/*----------------------------------------------------------------------
 * CONDITION VARIABLES
 */

cl_object
mp_make_condition_variable(void)
{
  cl_object output = ecl_alloc_object(t_condition_variable);
  output->condition_variable.queue_list = ECL_NIL;
  output->condition_variable.queue_spinlock = ECL_NIL;
  output->condition_variable.lock = ECL_NIL;
  {
#line 27
	const cl_env_ptr the_env = ecl_process_env();
#line 27
	#line 27
	cl_object __value0 = output;
#line 27
	the_env->nvalues = 1;
#line 27
	the_env->values[0] = __value0;
#line 27
	#line 27
	return __value0;
#line 27
}
;
}

static cl_object
condition_variable_wait(cl_env_ptr env, cl_object cv)
{
  cl_object lock = cv->condition_variable.lock;
  cl_object own_process = env->own_process;
  /* We have entered the queue and still own the mutex? */
  print_lock("cv lock %p is %p =? %p", cv, lock, lock->lock.owner, own_process);
  if (lock->lock.owner == own_process) {
    mp_giveup_lock(lock);
  }
  /* We always return when we have been explicitly awaken */
  return own_process->process.woken_up;
}

cl_object
mp_condition_variable_wait(cl_object cv, cl_object lock)
{
  cl_env_ptr env = ecl_process_env();
  cl_object own_process = env->own_process;
  unlikely_if (ecl_t_of(cv) != t_condition_variable) {
    FEwrong_type_nth_arg(ecl_make_fixnum(/*MP::CONDITION-VARIABLE-WAIT*/1455), 1, cv,
                         ecl_make_fixnum(/*MP::CONDITION-VARIABLE*/1431));
  }
  unlikely_if (ecl_t_of(lock) != t_lock) {
    FEwrong_type_nth_arg(ecl_make_fixnum(/*MP::CONDITION-VARIABLE-WAIT*/1455), 2, lock,
                         ecl_make_fixnum(/*MP::LOCK*/1430));
  }
  unlikely_if (cv->condition_variable.lock != ECL_NIL &&
               cv->condition_variable.lock != lock) {
      FEerror("Attempt to associate lock ~A~%with condition variable ~A,"
              "~%which is already associated to lock ~A", 2, lock,
              cv, cv->condition_variable.lock);
    }
  unlikely_if (lock->lock.owner != own_process) {
    FEerror("Attempt to wait on a condition variable using lock~%~S"
            "~%which is not owned by process~%~S", 2, lock, own_process);
  }
  unlikely_if (lock->lock.recursive) {
    FEerror("mp:condition-variable-wait can not be used with recursive"
            " locks:~%~S", 1, lock);
  }
  print_lock("waiting cv %p", cv, cv);
  cv->condition_variable.lock = lock;
  ecl_wait_on(env, condition_variable_wait, cv);
  mp_get_lock_wait(lock);
  {
#line 75
	const cl_env_ptr the_env = ecl_process_env();
#line 75
	#line 75
	cl_object __value0 = ECL_T;
#line 75
	the_env->nvalues = 1;
#line 75
	the_env->values[0] = __value0;
#line 75
	#line 75
	return __value0;
#line 75
}
;
}

cl_object
mp_condition_variable_timedwait(cl_object cv, cl_object lock, cl_object seconds)
{
  FEerror("Timed condition variables are not supported.", 0);
}

cl_object
mp_condition_variable_signal(cl_object cv)
{
  print_lock("signal cv %p", cv, cv);
  ecl_wakeup_waiters(ecl_process_env(), cv,
                     ECL_WAKEUP_RESET_FLAG | ECL_WAKEUP_ONE | ECL_WAKEUP_DELETE);
  {
#line 90
	const cl_env_ptr the_env = ecl_process_env();
#line 90
	#line 90
	cl_object __value0 = ECL_T;
#line 90
	the_env->nvalues = 1;
#line 90
	the_env->values[0] = __value0;
#line 90
	#line 90
	return __value0;
#line 90
}
;
}

cl_object
mp_condition_variable_broadcast(cl_object cv)
{
  print_lock("broadcast cv %p", cv);
  ecl_wakeup_waiters(ecl_process_env(), cv,
                     ECL_WAKEUP_RESET_FLAG | ECL_WAKEUP_ALL | ECL_WAKEUP_DELETE);
  {
#line 99
	const cl_env_ptr the_env = ecl_process_env();
#line 99
	#line 99
	cl_object __value0 = ECL_T;
#line 99
	the_env->nvalues = 1;
#line 99
	the_env->values[0] = __value0;
#line 99
	#line 99
	return __value0;
#line 99
}
;
}
