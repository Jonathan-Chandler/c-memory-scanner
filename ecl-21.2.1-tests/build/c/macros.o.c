#line 1 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/c/macros.d"
/* -*- Mode: C; c-basic-offset: 2; indent-tabs-mode: nil -*- */
/* vim: set filetype=c tabstop=2 shiftwidth=2 expandtab: */

/*
 * macros.d -- macros
 *
 * Copyright (c) 1984 Taiichi Yuasa and Masami Hagiya
 * Copyright (c) 1990 Giuseppe Attardi
 * Copyright (c) 2001 Juan Jose Garcia Ripoll
 *
 * See file 'LICENSE' for the copyright details.
 *
 */

#include <ecl/ecl.h>
#include <ecl/internal.h>

/******************************* ------- ******************************/
/*
 * The are two kinds of lisp environments. One of them is by the interpreter
 * when executing bytecodes and it contains local variable and function
 * definitions.
 *
 * The other environment is shared by the bytecodes compiler and by the C
 * compiler and it contains information for the compiler, including local
 * variable definitions, and local function and macro definitions. The
 * structure is as follows:
 *
 *      env -> ( var-list . fun-list )
 *      fun-list -> ( { definition | atomic-marker }* )
 *      definition -> ( macro-name SI::MACRO { extra-data }* )
 *                  | ( function-name FUNCTION { extra-data }* )
 *                  | ( a-symbol anything { extra-data }* )
 *      atomic-marker -> CB | LB
 *
 * The main difference between the bytecode and C compilers is on the extra
 * information. On the other hand, both environments are similar enough that
 * the functions MACROEXPAND-1, MACROEXPAND and MACRO-FUNCTION can find the
 * required information.
 */

static cl_object
search_symbol_macro(cl_object name, cl_object env)
{
  for (env = CAR(env); env != ECL_NIL; env = CDR(env)) {
    cl_object record = CAR(env);
    if (CONSP(record) && CAR(record) == name) {
      if (CADR(record) == ECL_SYM("SI::SYMBOL-MACRO",1175))
        return CADDR(record);
      return ECL_NIL;
    }
  }
  return si_get_sysprop(name, ECL_SYM("SI::SYMBOL-MACRO",1175));
}

static cl_object
search_macro_function(cl_object name, cl_object env)
{
  int type = ecl_symbol_type(name);
  if (env != ECL_NIL) {
    /* When the environment has been produced by the compiler, there might be
       atoms/symbols signaling function and unwind-protect boundaries. */
    while (!Null(env = CDR(env))) {
      cl_object record = CAR(env);
      if (CONSP(record) && CAR(record) == name) {
        cl_object tag = CADR(record);
        if (tag == ECL_SYM("SI::MACRO",1105))
          return CADDR(record);
        if (tag == ECL_SYM("FUNCTION",398))
          return ECL_NIL;
        break;
      }
    }
  }
  if (type & ecl_stp_macro) {
    return ECL_SYM_FUN(name);
  } else {
    return ECL_NIL;
  }
}

#line 82
cl_object cl_macro_function(cl_narg narg, cl_object sym, ...)
{
#line 82

#line 84
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 84
	cl_object env;
#line 84
	va_list ARGS;
	va_start(ARGS, sym);
#line 84
	if (ecl_unlikely(narg < 1|| narg > 2)) FEwrong_num_arguments(ecl_make_fixnum(520));
#line 84
	if (narg > 1) {
#line 84
		env = va_arg(ARGS,cl_object);
#line 84
	} else {
#line 84
		env = ECL_NIL;
#line 84
	}
#line 84
  {
#line 84
	#line 84
	cl_object __value0 = (search_macro_function(sym, env));
#line 84
	the_env->nvalues = 1;
#line 84
	the_env->values[0] = __value0;
#line 84
	va_end(ARGS);
#line 84
	return __value0;
#line 84
}
;
}

/*
  Analyze a form and expand it once if it is a macro form.
  VALUES(0) contains either the expansion or the original form.
  VALUES(1) is true when there was a macroexpansion.
*/

#line 93
cl_object cl_macroexpand_1(cl_narg narg, cl_object form, ...)
{
#line 93

  cl_object exp_fun = ECL_NIL;
#line 96
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 96
	cl_object env;
#line 96
	va_list ARGS;
	va_start(ARGS, form);
#line 96
	if (ecl_unlikely(narg < 1|| narg > 2)) FEwrong_num_arguments(ecl_make_fixnum(522));
#line 96
	if (narg > 1) {
#line 96
		env = va_arg(ARGS,cl_object);
#line 96
	} else {
#line 96
		env = ECL_NIL;
#line 96
	}
#line 96
  if (ECL_ATOM(form)) {
    if (ECL_SYMBOLP(form))
      exp_fun = search_symbol_macro(form, env);
  } else {
    cl_object head = CAR(form);
    if (ECL_SYMBOLP(head))
      exp_fun = search_macro_function(head, env);
  }
  if (!Null(exp_fun)) {
    cl_object hook = ecl_symbol_value(ECL_SYM("*MACROEXPAND-HOOK*",42));
    if (hook == ECL_SYM("FUNCALL",396))
      form = _ecl_funcall3(exp_fun, form, env);
    else
      form = _ecl_funcall4(hook, exp_fun, form, env);
  }
  {
#line 111
	#line 111
	cl_object __value0 = form;
#line 111
	cl_object __value1 = exp_fun;
#line 111
	the_env->nvalues = 2;
#line 111
	the_env->values[1] = __value1;
#line 111
	the_env->values[0] = __value0;
#line 111
	va_end(ARGS);
#line 111
	return __value0;
#line 111
}
;
}

/*
  Expands a form as many times as possible and returns the
  finally expanded form.
*/
#line 118
cl_object cl_macroexpand(cl_narg narg, cl_object form, ...)
{
#line 118

  cl_object done, old_form;
#line 121
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 121
	cl_object env;
#line 121
	va_list ARGS;
	va_start(ARGS, form);
#line 121
	if (ecl_unlikely(narg < 1|| narg > 2)) FEwrong_num_arguments(ecl_make_fixnum(521));
#line 121
	if (narg > 1) {
#line 121
		env = va_arg(ARGS,cl_object);
#line 121
	} else {
#line 121
		env = ECL_NIL;
#line 121
	}
#line 121
  done = ECL_NIL;
  do {
    form = cl_macroexpand_1(2, old_form = form, env);
    if (ecl_nth_value(the_env, 1) == ECL_NIL) {
      break;
    } else if (old_form == form) {
      FEerror("Infinite loop when expanding macro form ~A", 1, old_form);
    } else {
      done = ECL_T;
    }
  } while (1);
  {
#line 132
	#line 132
	cl_object __value0 = form;
#line 132
	cl_object __value1 = done;
#line 132
	the_env->nvalues = 2;
#line 132
	the_env->values[1] = __value1;
#line 132
	the_env->values[0] = __value0;
#line 132
	va_end(ARGS);
#line 132
	return __value0;
#line 132
}
;
}

static cl_object
or_macro(cl_object whole, cl_object env)
{
  cl_object output = ECL_NIL;
  whole = CDR(whole);
  if (Null(whole))        /* (OR) => NIL */
    {
#line 141
	const cl_env_ptr the_env = ecl_process_env();
#line 141
	#line 141
	cl_object __value0 = ECL_NIL;
#line 141
	the_env->nvalues = 1;
#line 141
	the_env->values[0] = __value0;
#line 141
	#line 141
	return __value0;
#line 141
}
;
  while (!Null(CDR(whole))) {
    output = CONS(CONS(CAR(whole), ECL_NIL), output);
    whole = CDR(whole);
  }
  if (Null(output)) {           /* (OR form1) => form1 */
    {
#line 147
	const cl_env_ptr the_env = ecl_process_env();
#line 147
	#line 147
	cl_object __value0 = CAR(whole);
#line 147
	the_env->nvalues = 1;
#line 147
	the_env->values[0] = __value0;
#line 147
	#line 147
	return __value0;
#line 147
}
;
  }
  /* (OR form1 ... formn forml) => (COND (form1) ... (formn) (t forml)) */
  output = CONS(cl_list(2, ECL_T, CAR(whole)), output);
  {
#line 151
	const cl_env_ptr the_env = ecl_process_env();
#line 151
	#line 151
	cl_object __value0 = CONS(ECL_SYM("COND",249), cl_nreverse(output));
#line 151
	the_env->nvalues = 1;
#line 151
	the_env->values[0] = __value0;
#line 151
	#line 151
	return __value0;
#line 151
}
;
}

static cl_object
expand_and(cl_object whole)
{
  if (Null(whole))
    return ECL_T;
  if (Null(CDR(whole)))
    return CAR(whole);
  return cl_list(3, ECL_SYM("IF",948), CAR(whole), expand_and(CDR(whole)));
}

static cl_object
and_macro(cl_object whole, cl_object env)
{
  {
#line 167
	const cl_env_ptr the_env = ecl_process_env();
#line 167
	#line 167
	cl_object __value0 = expand_and(CDR(whole));
#line 167
	the_env->nvalues = 1;
#line 167
	the_env->values[0] = __value0;
#line 167
	#line 167
	return __value0;
#line 167
}
;
}

static cl_object
when_macro(cl_object whole, cl_object env)
{
  cl_object args = CDR(whole);
  if (ecl_unlikely(ecl_endp(args)))
    FEprogram_error("Syntax error: ~S.", 1, whole);
  return cl_list(3, ECL_SYM("IF",948), CAR(args), CONS(ECL_SYM("PROGN",673), CDR(args)));
}

void
init_macros(void)
{
  ECL_SET(ECL_SYM("*MACROEXPAND-HOOK*",42), ECL_SYM("FUNCALL",396));
  ecl_def_c_macro(ECL_SYM("OR",616), or_macro, 2);
  ecl_def_c_macro(ECL_SYM("AND",89), and_macro, 2);
  ecl_def_c_macro(ECL_SYM("WHEN",907), when_macro, 2);
}
