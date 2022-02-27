#line 1 "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/src/c/threads/process.d"
/* -*- Mode: C; c-basic-offset: 2; indent-tabs-mode: nil -*- */
/* vim: set filetype=c tabstop=2 shiftwidth=2 expandtab: */

/*
 * process.d - native threads
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
#include <time.h>
#include <signal.h>
#include <string.h>
#define ECL_INCLUDE_MATH_H
#include <ecl/ecl.h>
#ifdef ECL_WINDOWS_THREADS
# include <windows.h>
#else
# include <pthread.h>
#endif
#ifdef HAVE_GETTIMEOFDAY
# include <sys/time.h>
#endif
#include <ecl/internal.h>
#include <ecl/ecl-inl.h>

#ifdef ECL_WINDOWS_THREADS
DWORD cl_env_key;
#else
static pthread_key_t cl_env_key;
#endif /* ECL_WINDOWS_THREADS */

extern void ecl_init_env(struct cl_env_struct *env);

cl_env_ptr
ecl_process_env_unsafe(void)
{
#ifdef ECL_WINDOWS_THREADS
  return TlsGetValue(cl_env_key);
#else
  return pthread_getspecific(cl_env_key);
#endif
}

cl_env_ptr
ecl_process_env(void)
{
#ifdef ECL_WINDOWS_THREADS
  return TlsGetValue(cl_env_key);
#else
  struct cl_env_struct *rv = pthread_getspecific(cl_env_key);
  if (rv)
    return rv;
  ecl_thread_internal_error("pthread_getspecific() failed.");
  return NULL;
#endif
}

static void
ecl_set_process_env(cl_env_ptr env)
{
#ifdef ECL_WINDOWS_THREADS
  TlsSetValue(cl_env_key, env);
#else
  if (pthread_setspecific(cl_env_key, env)) {
    ecl_thread_internal_error("pthread_setspecific() failed.");
  }
#endif
}

cl_object
mp_current_process(void)
{
  return ecl_process_env()->own_process;
}

/*----------------------------------------------------------------------
 * PROCESS LIST
 */

static void
extend_process_vector()
{
  cl_object v = cl_core.processes;
  cl_index new_size = v->vector.dim + v->vector.dim/2;
  cl_env_ptr the_env = ecl_process_env();
  ECL_WITH_SPINLOCK_BEGIN(the_env, &cl_core.processes_spinlock) {
    cl_object other = cl_core.processes;
    if (new_size > other->vector.dim) {
      cl_object new = si_make_vector(ECL_T,
                                     ecl_make_fixnum(new_size),
                                     ecl_make_fixnum(other->vector.fillp),
                                     ECL_NIL, ECL_NIL, ECL_NIL);
      ecl_copy_subarray(new, 0, other, 0, other->vector.dim);
      cl_core.processes = new;
    }
  } ECL_WITH_SPINLOCK_END;
}

static void
ecl_list_process(cl_object process)
{
  cl_env_ptr the_env = ecl_process_env();
  bool ok = 0;
  do {
    ECL_WITH_SPINLOCK_BEGIN(the_env, &cl_core.processes_spinlock) {
      cl_object vector = cl_core.processes;
      cl_index size = vector->vector.dim;
      cl_index ndx = vector->vector.fillp;
      if (ndx < size) {
        vector->vector.self.t[ndx++] = process;
        vector->vector.fillp = ndx;
        ok = 1;
      }
    } ECL_WITH_SPINLOCK_END;
    if (ok) break;
    extend_process_vector();
  } while (1);
}

/* Must be called with disabled interrupts to prevent race conditions
 * in thread_cleanup */
static void
ecl_unlist_process(cl_object process)
{
  cl_env_ptr the_env = ecl_process_env();
  ecl_get_spinlock(the_env, &cl_core.processes_spinlock);
  cl_object vector = cl_core.processes;
  cl_index i;
  for (i = 0; i < vector->vector.fillp; i++) {
    if (vector->vector.self.t[i] == process) {
      vector->vector.fillp--;
      do {
        vector->vector.self.t[i] =
          vector->vector.self.t[i+1];
      } while (++i < vector->vector.fillp);
      break;
    }
  }
  ecl_giveup_spinlock(&cl_core.processes_spinlock);
}

static cl_object
ecl_process_list()
{
  cl_env_ptr the_env = ecl_process_env();
  cl_object output = ECL_NIL;
  ECL_WITH_SPINLOCK_BEGIN(the_env, &cl_core.processes_spinlock) {
    cl_object vector = cl_core.processes;
    cl_object *data = vector->vector.self.t;
    cl_index i;
    for (i = 0; i < vector->vector.fillp; i++) {
      cl_object p = data[i];
      if (p != ECL_NIL)
        output = ecl_cons(p, output);
    }
  } ECL_WITH_SPINLOCK_END;
  return output;
}

/*----------------------------------------------------------------------
 * THREAD OBJECT
 */

static void
assert_type_process(cl_object o)
{
  if (ecl_t_of(o) != t_process)
    FEwrong_type_argument(ecl_make_fixnum(/*MP::PROCESS*/1429), o);
}

static void
thread_cleanup(void *aux)
{
  /* This routine performs some cleanup before a thread is completely
   * killed. For instance, it has to remove the associated process
   * object from the list, an it has to dealloc some memory.
   *
   * NOTE: thread_cleanup() does not provide enough "protection". In
   * order to ensure that all UNWIND-PROTECT forms are properly
   * executed, never use pthread_cancel() to kill a process, but
   * rather use the lisp functions mp_interrupt_process() and
   * mp_process_kill().
   */
  cl_object process = (cl_object)aux;
  cl_env_ptr env = process->process.env;

  /* The following flags will disable all interrupts. */
  if (env) {
    ecl_get_spinlock(env, &process->process.start_stop_spinlock);
  }
  AO_store_full((AO_t*)&process->process.phase, ECL_PROCESS_EXITING);
  if (env) {
    ecl_clear_bignum_registers(env);
    ecl_disable_interrupts_env(env);
  }
#ifdef HAVE_SIGPROCMASK
  /* ...but we might get stray signals. */
  {
    sigset_t new[1];
    sigemptyset(new);
    sigaddset(new, ecl_option_values[ECL_OPT_THREAD_INTERRUPT_SIGNAL]);
    pthread_sigmask(SIG_BLOCK, new, NULL);
  }
#endif
  process->process.env = NULL;
  ecl_unlist_process(process);
#ifdef ECL_WINDOWS_THREADS
  CloseHandle(process->process.thread);
#endif
  mp_barrier_unblock(3, process->process.exit_barrier, ECL_SYM(":DISABLE",1495), ECL_T);
  ecl_set_process_env(NULL);
  if (env) _ecl_dealloc_env(env);

  AO_store_release((AO_t*)&process->process.phase, ECL_PROCESS_INACTIVE);
  ecl_giveup_spinlock(&process->process.start_stop_spinlock);
}

#ifdef ECL_WINDOWS_THREADS
static DWORD WINAPI thread_entry_point(void *arg)
#else
  static void *
  thread_entry_point(void *arg)
#endif
{
  cl_object process = (cl_object)arg;
  cl_env_ptr env = process->process.env;

  /*
   * Upon entering this routine
   *      process.env = our environment for lisp
   *      process.phase = ECL_PROCESS_BOOTING
   *      signals are disabled in the environment
   *      the communication interrupt is disabled (sigmasked)
   *
   * This process will not receive signals that originate from
   * other processes. Furthermore, we expect not to get any
   * other interrupts (SIGSEGV, SIGFPE) if we do things right.
   */
  /* 1) Setup the environment for the execution of the thread */
  ecl_set_process_env(env = process->process.env);
#ifndef ECL_WINDOWS_THREADS
  pthread_cleanup_push(thread_cleanup, (void *)process);
#endif
  ecl_cs_set_org(env);
  ecl_get_spinlock(env, &process->process.start_stop_spinlock);
  print_lock("ENVIRON %p %p %p %p", ECL_NIL, process,
             env->bds_org, env->bds_top, env->bds_limit);

  /* 2) Execute the code. The CATCH_ALL point is the destination
   *     provides us with an elegant way to exit the thread: we just
   *     do an unwind up to frs_top.
   */
  ECL_CATCH_ALL_BEGIN(env) {
#ifdef HAVE_SIGPROCMASK
    {
      sigset_t *new = (sigset_t*)env->default_sigmask;
      pthread_sigmask(SIG_SETMASK, new, NULL);
    }
#endif
    ecl_giveup_spinlock(&process->process.start_stop_spinlock);
    process->process.phase = ECL_PROCESS_ACTIVE;
    ecl_enable_interrupts_env(env);
    si_trap_fpe(ECL_SYM("LAST",457), ECL_T);
    ecl_bds_bind(env, ECL_SYM("MP::*CURRENT-PROCESS*",1432), process);

    ECL_RESTART_CASE_BEGIN(env, ECL_SYM("ABORT",79)) {
      env->values[0] = cl_apply(2, process->process.function,
                                process->process.args);
      {
        cl_object output = ECL_NIL;
        int i = env->nvalues;
        while (i--) {
          output = CONS(env->values[i], output);
        }
        process->process.exit_values = output;
      }
    } ECL_RESTART_CASE(1,args) {
      /* ABORT restart. */
      process->process.exit_values = args;
    } ECL_RESTART_CASE_END;
    process->process.phase = ECL_PROCESS_EXITING;
    ecl_bds_unwind1(env);
  } ECL_CATCH_ALL_END;

  /* 4) If everything went right, we should be exiting the thread
   *    through this point. thread_cleanup is automatically invoked
   *    marking the process as inactive.
   */
#ifdef ECL_WINDOWS_THREADS
  thread_cleanup(process);
  return 1;
#else
  pthread_cleanup_pop(1);
  return NULL;
#endif
}

static cl_object
alloc_process(cl_object name, cl_object initial_bindings)
{
  cl_object process = ecl_alloc_object(t_process), array;
  process->process.phase = ECL_PROCESS_INACTIVE;
  process->process.name = name;
  process->process.function = ECL_NIL;
  process->process.args = ECL_NIL;
  process->process.interrupt = ECL_NIL;
  process->process.exit_values = ECL_NIL;
  process->process.env = NULL;
  if (initial_bindings != OBJNULL) {
    array = si_make_vector(ECL_T, ecl_make_fixnum(256),
                           ECL_NIL, ECL_NIL, ECL_NIL, ECL_NIL);
    si_fill_array_with_elt(array, ECL_NO_TL_BINDING, ecl_make_fixnum(0), ECL_NIL);
  } else {
    array = cl_copy_seq(ecl_process_env()->bindings_array);
  }
  process->process.initial_bindings = array;
  process->process.woken_up = ECL_NIL;
  process->process.start_stop_spinlock = ECL_NIL;
  process->process.queue_record = ecl_list1(process);
  /* Creates the exit barrier so that processes can wait for termination,
   * but it is created in a disabled state. */
  process->process.exit_barrier = ecl_make_barrier(name, MOST_POSITIVE_FIXNUM);
  mp_barrier_unblock(3, process->process.exit_barrier, ECL_SYM(":DISABLE",1495), ECL_T);
  return process;
}

bool
ecl_import_current_thread(cl_object name, cl_object bindings)
{
  struct cl_env_struct env_aux[1];
  cl_object process;
  pthread_t current;
  cl_env_ptr env;
  int registered;
  struct GC_stack_base stack;
#ifdef ECL_WINDOWS_THREADS
  {
    HANDLE aux = GetCurrentThread();
    if ( !DuplicateHandle(GetCurrentProcess(),
                          aux,
                          GetCurrentProcess(),
                          &current,
                          0,
                          FALSE,
                          DUPLICATE_SAME_ACCESS) )
    {
	   return 0;
    }
  }
#else
  current = pthread_self();
#endif
#ifdef GBC_BOEHM
  GC_get_stack_base(&stack);
  switch (GC_register_my_thread(&stack)) {
  case GC_SUCCESS:
    registered = 1;
    break;
  case GC_DUPLICATE:
    /* Thread was probably created using the GC hooks
     * for thread creation */
    registered = 0;
    break;
  default:
    return 0;
  }
#endif
  {
    cl_object processes = cl_core.processes;
    cl_index i, size;
    for (i = 0, size = processes->vector.fillp; i < size; i++) {
      cl_object p = processes->vector.self.t[i];
      if (!Null(p)
          &&
#ifdef ECL_WINDOWS_THREADS
          GetThreadId(p->process.thread) == GetThreadId(current)
#else
	      p->process.thread == current
#endif
	      )
        return 0;
    }
  }
  /* We need a fake env to allow for interrupts blocking and to set up
   * frame stacks or other stuff which may be needed by alloc_process
   * and ecl_list_process. Since the fake env is allocated on the stack,
   * we can safely store pointers to memory allocated by the gc there. */
  memset(env_aux, 0, sizeof(*env_aux));
  env_aux->disable_interrupts = 1;
  env_aux->interrupt_struct = ecl_alloc_unprotected(sizeof(*env_aux->interrupt_struct));
  env_aux->interrupt_struct->pending_interrupt = ECL_NIL;
  env_aux->interrupt_struct->signal_queue_spinlock = ECL_NIL;
  env_aux->interrupt_struct->signal_queue = ECL_NIL;
  ecl_set_process_env(env_aux);
  ecl_init_env(env_aux);

  /* Allocate real environment, link it together with process */
  env = _ecl_alloc_env(0);
  process = alloc_process(name, bindings);
  process->process.env = env;
  process->process.phase = ECL_PROCESS_BOOTING;
  process->process.thread = current;

  /* Copy initial bindings from process to the fake environment */
  env_aux->cleanup = registered;
  env_aux->bindings_array = process->process.initial_bindings;
  env_aux->thread_local_bindings_size = env_aux->bindings_array->vector.dim;
  env_aux->thread_local_bindings = env_aux->bindings_array->vector.self.t;

  /* Switch over to the real environment */
  memcpy(env, env_aux, sizeof(*env));
  env->own_process = process;
  ecl_set_process_env(env);
  ecl_list_process(process);
  ecl_enable_interrupts_env(env);

  /* Activate the barrier so that processes can immediately start waiting. */
  mp_barrier_unblock(1, process->process.exit_barrier);
  process->process.phase = ECL_PROCESS_ACTIVE;

  ecl_bds_bind(env, ECL_SYM("MP::*CURRENT-PROCESS*",1432), process);
  return 1;
}

void
ecl_release_current_thread(void)
{
  cl_env_ptr env = ecl_process_env();

  int cleanup = env->cleanup;
  cl_object own_process = env->own_process;
  thread_cleanup(own_process);
#ifdef GBC_BOEHM
  if (cleanup) {
    GC_unregister_my_thread();
  }
#endif
}

#line 447
cl_object mp_make_process(cl_narg narg, ...)
{
#line 447

  cl_object process;
  #line 450
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 450
	static cl_object KEYS[2] = {(cl_object)(cl_symbols+1300), (cl_object)(cl_symbols+1459)};
	cl_object name;
	cl_object initial_bindings;
#line 450
	cl_object KEY_VARS[4];
#line 450
	ecl_va_list ARGS;
	ecl_va_start(ARGS, narg, narg, 0);
#line 450
	if (ecl_unlikely(narg < 0)) FEwrong_num_arguments(ecl_make_fixnum(1435));
#line 450
	cl_parse_key(ARGS, 2, KEYS, KEY_VARS, NULL, 0);
#line 450
	if (KEY_VARS[2]==ECL_NIL) {
#line 450
	  name = ECL_NIL;
	} else {
#line 450
	  name = KEY_VARS[0];
	}
#line 450
	if (KEY_VARS[3]==ECL_NIL) {
#line 450
	  initial_bindings = ECL_T;
	} else {
#line 450
	  initial_bindings = KEY_VARS[1];
	}
#line 450
  process = alloc_process(name, initial_bindings);
  {
#line 451
	#line 451
	cl_object __value0 = process;
#line 451
	the_env->nvalues = 1;
#line 451
	the_env->values[0] = __value0;
#line 451
	ecl_va_end(ARGS);
#line 451
	return __value0;
#line 451
}
;
  }

cl_object
mp_process_preset(cl_narg narg, cl_object process, cl_object function, ...)
{
  ecl_va_list args;
  if (narg < 2)
    FEwrong_num_arguments(ecl_make_fixnum(/*MP::PROCESS-PRESET*/1441));
  ecl_va_start(args, function, narg, 2);
  assert_type_process(process);
  process->process.function = function;
  process->process.args = cl_grab_rest_args(args);
  ecl_va_end(args);
  {
#line 465
	const cl_env_ptr the_env = ecl_process_env();
#line 465
	#line 465
	cl_object __value0 = process;
#line 465
	the_env->nvalues = 1;
#line 465
	the_env->values[0] = __value0;
#line 465
	#line 465
	return __value0;
#line 465
}
;
}

cl_object
mp_interrupt_process(cl_object process, cl_object function)
{
  cl_env_ptr env = ecl_process_env();
  /* Make sure we don't interrupt an exiting process */
  ECL_WITH_SPINLOCK_BEGIN(env, &process->process.start_stop_spinlock) {
    unlikely_if (mp_process_active_p(process) == ECL_NIL)
      FEerror("Cannot interrupt the inactive process ~A", 1, process);
    ecl_interrupt_process(process, function);
  } ECL_WITH_SPINLOCK_END;
  {
#line 478
	const cl_env_ptr the_env = ecl_process_env();
#line 478
	#line 478
	cl_object __value0 = ECL_T;
#line 478
	the_env->nvalues = 1;
#line 478
	the_env->values[0] = __value0;
#line 478
	#line 478
	return __value0;
#line 478
}
;
}

cl_object
mp_suspend_loop()
{
  cl_env_ptr env = ecl_process_env();
  ECL_CATCH_BEGIN(env,ECL_SYM("MP::SUSPEND-LOOP",1468)) {
    for ( ; ; ) {
      cl_sleep(ecl_make_fixnum(100));
    }
  } ECL_CATCH_END;
  ecl_return0(env);
}

cl_object
mp_break_suspend_loop()
{
  cl_env_ptr the_env = ecl_process_env();
  if (frs_sch(ECL_SYM("MP::SUSPEND-LOOP",1468))) {
    cl_throw(ECL_SYM("MP::SUSPEND-LOOP",1468));
  }
  ecl_return0(the_env);
}

cl_object
mp_process_suspend(cl_object process)
{
  return mp_interrupt_process(process, ECL_SYM("MP::SUSPEND-LOOP",1468));
}

cl_object
mp_process_resume(cl_object process)
{
  return mp_interrupt_process(process, ECL_SYM("MP::BREAK-SUSPEND-LOOP",1469));
}

cl_object
mp_process_kill(cl_object process)
{
  return mp_interrupt_process(process, ECL_SYM("MP::EXIT-PROCESS",1434));
}

cl_object
mp_process_yield(void)
{
  ecl_process_yield();
  {
#line 525
	const cl_env_ptr the_env = ecl_process_env();
the_env->nvalues = 0; return ECL_NIL;
#line 525
}
;
}

cl_object
mp_process_enable(cl_object process)
{
  /* process_env and ok are changed after the setjmp call in
   * ECL_UNWIND_PROTECT_BEGIN, so they need to be declared volatile */
  volatile cl_env_ptr process_env = NULL;
  cl_env_ptr the_env = ecl_process_env();
  volatile int ok = 0;
  ECL_UNWIND_PROTECT_BEGIN(the_env) {
    /* Try to gain exclusive access to the process at the same
     * time we ensure that it is inactive. This prevents two
     * concurrent calls to process-enable from different threads
     * on the same process */
    unlikely_if (!AO_compare_and_swap_full((AO_t*)&process->process.phase,
                                           ECL_PROCESS_INACTIVE,
                                           ECL_PROCESS_BOOTING)) {
      FEerror("Cannot enable the running process ~A.", 1, process);
    }
    process->process.parent = mp_current_process();
    process->process.trap_fpe_bits =
      process->process.parent->process.env->trap_fpe_bits;

    /* Link environment and process together */
    process_env = _ecl_alloc_env(the_env);
    process_env->own_process = process;
    process->process.env = process_env;

    /* Immediately list the process such that its environment is
     * marked by the gc when its contents are allocated */
    ecl_list_process(process);

    /* Now we can safely allocate memory for the environment contents
     * and store pointers to it in the environment */
    ecl_init_env(process_env);

    process_env->trap_fpe_bits = process->process.trap_fpe_bits;
    process_env->bindings_array = process->process.initial_bindings;
    process_env->thread_local_bindings_size = 
      process_env->bindings_array->vector.dim;
    process_env->thread_local_bindings =
      process_env->bindings_array->vector.self.t;

    /* Activate the barrier so that processes can immediately start waiting. */
    mp_barrier_unblock(1, process->process.exit_barrier);

    /* Block the thread with this spinlock until it is ready */
    process->process.start_stop_spinlock = ECL_T;

    ecl_disable_interrupts_env(the_env);
#ifdef ECL_WINDOWS_THREADS
    {
      HANDLE code;
      DWORD threadId;

      code = (HANDLE)CreateThread(NULL, 0, thread_entry_point, process, 0, &threadId);
      ok = (process->process.thread = code) != NULL;
    }
#else
    {
      int code;
      pthread_attr_t pthreadattr;

      pthread_attr_init(&pthreadattr);
      pthread_attr_setdetachstate(&pthreadattr, PTHREAD_CREATE_DETACHED);
      /*
       * Block all asynchronous signals until the thread is completely
       * set up. The synchronous signals SIGSEGV and SIGBUS are needed
       * by the gc and thus can't be blocked.
       */
#ifdef HAVE_SIGPROCMASK
      {
        sigset_t new, previous;
        sigfillset(&new);
        sigdelset(&new, SIGSEGV);
        sigdelset(&new, SIGBUS);
        pthread_sigmask(SIG_BLOCK, &new, &previous);
        code = pthread_create(&process->process.thread, &pthreadattr,
                              thread_entry_point, process);
        pthread_sigmask(SIG_SETMASK, &previous, NULL);
      }
#else
      code = pthread_create(&process->process.thread, &pthreadattr,
                            thread_entry_point, process);
#endif
      ok = (code == 0);
    }
#endif
    ecl_enable_interrupts_env(the_env);
  } ECL_UNWIND_PROTECT_THREAD_SAFE_EXIT {
    if (!ok) {
      /* INV: interrupts are already disabled through thread safe
       * unwind-protect */
      ecl_unlist_process(process);
      /* Disable the barrier and alert possible waiting processes. */
      mp_barrier_unblock(3, process->process.exit_barrier,
                         ECL_SYM(":DISABLE",1495), ECL_T);
      process->process.phase = ECL_PROCESS_INACTIVE;
      process->process.env = NULL;
      if (process_env != NULL)
        _ecl_dealloc_env(process_env);
    }
    /* Unleash the thread */
    ecl_giveup_spinlock(&process->process.start_stop_spinlock);
  } ECL_UNWIND_PROTECT_THREAD_SAFE_END;

  {
#line 633
	const cl_env_ptr the_env = ecl_process_env();
#line 633
	#line 633
	cl_object __value0 = (ok? process : ECL_NIL);
#line 633
	the_env->nvalues = 1;
#line 633
	the_env->values[0] = __value0;
#line 633
	#line 633
	return __value0;
#line 633
}
;
}

cl_object
mp_exit_process(void)
{
  /* We simply undo the whole of the frame stack. This brings up
     back to the thread entry point, going through all possible
     UNWIND-PROTECT.
  */
  const cl_env_ptr the_env = ecl_process_env();
  ecl_unwind(the_env, the_env->frs_org);
  /* Never reached */
}

cl_object
mp_all_processes(void)
{
  /* No race condition here because this list is never destructively
   * modified. When we add or remove processes, we create new lists. */
  {
#line 653
	const cl_env_ptr the_env = ecl_process_env();
#line 653
	#line 653
	cl_object __value0 = ecl_process_list();
#line 653
	the_env->nvalues = 1;
#line 653
	the_env->values[0] = __value0;
#line 653
	#line 653
	return __value0;
#line 653
}
;
}

cl_object
mp_process_name(cl_object process)
{
  assert_type_process(process);
  {
#line 660
	const cl_env_ptr the_env = ecl_process_env();
#line 660
	#line 660
	cl_object __value0 = process->process.name;
#line 660
	the_env->nvalues = 1;
#line 660
	the_env->values[0] = __value0;
#line 660
	#line 660
	return __value0;
#line 660
}
;
}

cl_object
mp_process_active_p(cl_object process)
{
  assert_type_process(process);
  {
#line 667
	const cl_env_ptr the_env = ecl_process_env();
#line 667
	#line 667
	cl_object __value0 = (process->process.phase? ECL_T : ECL_NIL);
#line 667
	the_env->nvalues = 1;
#line 667
	the_env->values[0] = __value0;
#line 667
	#line 667
	return __value0;
#line 667
}
;
}

cl_object
mp_process_whostate(cl_object process)
{
  assert_type_process(process);
  {
#line 674
	const cl_env_ptr the_env = ecl_process_env();
#line 674
	#line 674
	cl_object __value0 = (cl_core.null_string);
#line 674
	the_env->nvalues = 1;
#line 674
	the_env->values[0] = __value0;
#line 674
	#line 674
	return __value0;
#line 674
}
;
}

cl_object
mp_process_join(cl_object process)
{
  assert_type_process(process);
  if (process->process.phase) {
    /* We try to acquire a lock that is only owned by the process
     * while it is active. */
    mp_barrier_wait(process->process.exit_barrier);
  }
  return cl_values_list(process->process.exit_values);
}

cl_object
mp_process_run_function(cl_narg narg, cl_object name, cl_object function, ...)
{
  cl_object process;
  cl_object rest;
  ecl_va_list args;
  if (narg < 2)
    FEwrong_num_arguments(ecl_make_fixnum(/*MP::PROCESS-RUN-FUNCTION*/1442));
  if (CONSP(name)) {
    process = cl_apply(2, ECL_SYM("MP::MAKE-PROCESS",1435), name);
  } else {
    process = mp_make_process(2, ECL_SYM(":NAME",1300), name);
  }
  ecl_va_start(args, function, narg, 2);
  rest = cl_grab_rest_args(args);
  ecl_va_end(args);
  cl_apply(4, ECL_SYM("MP::PROCESS-PRESET",1441), process, function,
           rest);
  return mp_process_enable(process);
}

cl_object
mp_process_run_function_wait(cl_narg narg, ...)
{
  cl_object process;
  ecl_va_list args;
  ecl_va_start(args, narg, narg, 0);
  process = cl_apply(2, ECL_SYM("MP::PROCESS-RUN-FUNCTION",1442),
                     cl_grab_rest_args(args));
  if (!Null(process)) {
    ecl_def_ct_single_float(wait, 0.001, static, const);
    while (process->process.phase < ECL_PROCESS_ACTIVE) {
      cl_sleep(wait);
    }
  }
  ecl_va_end(args);
  {
#line 725
	const cl_env_ptr the_env = ecl_process_env();
#line 725
	#line 725
	cl_object __value0 = process;
#line 725
	the_env->nvalues = 1;
#line 725
	the_env->values[0] = __value0;
#line 725
	#line 725
	return __value0;
#line 725
}
;
}

/*----------------------------------------------------------------------
 * INTERRUPTS
 */

#ifndef ECL_WINDOWS_THREADS
static cl_object
mp_get_sigmask(void)
{
  cl_object data = ecl_alloc_simple_vector(sizeof(sigset_t), ecl_aet_b8);
  sigset_t *mask_ptr = (sigset_t*)data->vector.self.b8;
  sigset_t no_signals;
  sigemptyset(&no_signals);
  if (pthread_sigmask(SIG_BLOCK, &no_signals, mask_ptr))
    FElibc_error("MP:GET-SIGMASK failed in a call to pthread_sigmask", 0);
  {
#line 742
	const cl_env_ptr the_env = ecl_process_env();
#line 742
	#line 742
	cl_object __value0 = data;
#line 742
	the_env->nvalues = 1;
#line 742
	the_env->values[0] = __value0;
#line 742
	#line 742
	return __value0;
#line 742
}
;
}

static cl_object
mp_set_sigmask(cl_object data)
{
  sigset_t *mask_ptr = (sigset_t*)data->vector.self.b8;
  if (pthread_sigmask(SIG_SETMASK, mask_ptr, NULL))
    FElibc_error("MP:SET-SIGMASK failed in a call to pthread_sigmask", 0);
  {
#line 751
	const cl_env_ptr the_env = ecl_process_env();
#line 751
	#line 751
	cl_object __value0 = data;
#line 751
	the_env->nvalues = 1;
#line 751
	the_env->values[0] = __value0;
#line 751
	#line 751
	return __value0;
#line 751
}
;
}
#endif

cl_object
mp_block_signals(void)
{
#ifdef ECL_WINDOWS_THREADS
  cl_env_ptr the_env = ecl_process_env();
  cl_object previous = ecl_symbol_value(ECL_SYM("EXT::*INTERRUPTS-ENABLED*",7));
  ECL_SETQ(the_env, ECL_SYM("EXT::*INTERRUPTS-ENABLED*",7), ECL_NIL);
  {
#line 762
	const cl_env_ptr the_env = ecl_process_env();
#line 762
	#line 762
	cl_object __value0 = previous;
#line 762
	the_env->nvalues = 1;
#line 762
	the_env->values[0] = __value0;
#line 762
	#line 762
	return __value0;
#line 762
}
;
#else
  cl_object previous = mp_get_sigmask();
  sigset_t all_signals;
  sigfillset(&all_signals);
  /* SIGSEGV or SIGBUS are needed by the gc in incremental mode and
   * can thus never be blocked */
  sigdelset(&all_signals, SIGSEGV);
  sigdelset(&all_signals, SIGBUS);
  if (pthread_sigmask(SIG_SETMASK, &all_signals, NULL))
    FElibc_error("MP:BLOCK-SIGNALS failed in a call to pthread_sigmask",0);
  {
#line 773
	const cl_env_ptr the_env = ecl_process_env();
#line 773
	#line 773
	cl_object __value0 = previous;
#line 773
	the_env->nvalues = 1;
#line 773
	the_env->values[0] = __value0;
#line 773
	#line 773
	return __value0;
#line 773
}
;
#endif
}

cl_object
mp_restore_signals(cl_object sigmask)
{
#ifdef ECL_WINDOWS_THREADS
  cl_env_ptr the_env = ecl_process_env();
  ECL_SETQ(the_env, ECL_SYM("EXT::*INTERRUPTS-ENABLED*",7), sigmask);
  ecl_check_pending_interrupts(the_env);
  {
#line 784
	const cl_env_ptr the_env = ecl_process_env();
#line 784
	#line 784
	cl_object __value0 = sigmask;
#line 784
	the_env->nvalues = 1;
#line 784
	the_env->values[0] = __value0;
#line 784
	#line 784
	return __value0;
#line 784
}
;
#else
  return mp_set_sigmask(sigmask);
#endif
}

/*----------------------------------------------------------------------
 * INITIALIZATION
 */

void
init_threads(cl_env_ptr env)
{
  cl_object process;
  pthread_t main_thread;

  cl_core.processes = OBJNULL;

  /* We have to set the environment before any allocation takes place,
   * so that the interrupt handling code works. */
#if defined(ECL_WINDOWS_THREADS)
  cl_env_key = TlsAlloc();
#else
  pthread_key_create(&cl_env_key, NULL);
#endif
  ecl_set_process_env(env);

#ifdef ECL_WINDOWS_THREADS
  {
    HANDLE aux = GetCurrentThread();
    DuplicateHandle(GetCurrentProcess(),
                    aux,
                    GetCurrentProcess(),
                    &main_thread,
                    0,
                    FALSE,
                    DUPLICATE_SAME_ACCESS);
  }
#else
  main_thread = pthread_self();
#endif
  process = ecl_alloc_object(t_process);
  process->process.phase = ECL_PROCESS_ACTIVE;
  process->process.name = ECL_SYM("SI::TOP-LEVEL",1178);
  process->process.function = ECL_NIL;
  process->process.args = ECL_NIL;
  process->process.thread = main_thread;
  process->process.env = env;
  process->process.woken_up = ECL_NIL;
  process->process.queue_record = ecl_list1(process);
  process->process.start_stop_spinlock = ECL_NIL;
  process->process.exit_barrier = ecl_make_barrier(process->process.name, MOST_POSITIVE_FIXNUM);

  env->own_process = process;

  {
    cl_object v = si_make_vector(ECL_T, /* Element type */
                                 ecl_make_fixnum(256), /* Size */
                                 ecl_make_fixnum(0), /* fill pointer */
                                 ECL_NIL, ECL_NIL, ECL_NIL);
    v->vector.self.t[0] = process;
    v->vector.fillp = 1;
    cl_core.processes = v;
    cl_core.global_lock = ecl_make_lock(ECL_SYM("MP::GLOBAL-LOCK",1477), 1);
    cl_core.error_lock = ecl_make_lock(ECL_SYM("MP::ERROR-LOCK",1478), 1);
    cl_core.global_env_lock = ecl_make_rwlock(ECL_SYM("EXT::PACKAGE-LOCK",1120));
  }
}
