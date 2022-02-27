#line 1 "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/src/c/cinit.d"
/* -*- Mode: C; c-basic-offset: 2; indent-tabs-mode: nil -*- */
/* vim: set filetype=c tabstop=2 shiftwidth=2 expandtab: */

/*
 * cinit.d - lisp initialization
 *
 * Copyright (c) 1990 Giuseppe Attardi
 * Copyright (c) 2001 Juan Jose Garcia Ripoll
 *
 * See file 'LICENSE' for the copyright details.
 *
 */

#include <stdio.h>
#include <ecl/ecl.h>
#include <ecl/internal.h>

/*
 * HOOKS.
 *
 * The following functions are only used to bootstrap ECL. They divert
 * the calls to the interpreted code which is loaded by bare.lsp. Once
 * the whole of ECL is built, the file cinit.o will be replaced by the
 * actual initialization code, and the compiled function will be
 * called instead.
 */

extern cl_object
cl_upgraded_array_element_type(cl_narg narg, cl_object type, ...)
{
  return _ecl_funcall2(ECL_SYM("UPGRADED-ARRAY-ELEMENT-TYPE",891), type);
}

extern cl_object
si_safe_eval(cl_narg narg, cl_object form, cl_object env, ...)
{
  if (narg == 3) {
    cl_object err_value;
    va_list args; va_start(args, env);
    err_value = va_arg(args, cl_object);
    va_end(args);
    return _ecl_funcall4(ECL_SYM("EXT::SAFE-EVAL",1148), form, env, err_value);
  }
  return _ecl_funcall3(ECL_SYM("EXT::SAFE-EVAL",1148), form, env);
}

extern cl_object
cl_slot_value(cl_object instance, cl_object name)
{
  return _ecl_funcall3(ECL_SYM("SLOT-VALUE",973), instance, name);
}

extern cl_object
clos_slot_value_set(cl_object value, cl_object instance, cl_object name)
{
  return _ecl_funcall4(ECL_SYM("CLOS::SLOT-VALUE-SET",1615), value, instance, name);
}

extern cl_object
clos_std_compute_applicable_methods(cl_object gf, cl_object arglist)
{
  return _ecl_funcall3(ECL_SYM("CLOS::STD-COMPUTE-APPLICABLE-METHODS",1630), gf, arglist);
}

extern cl_object
si_bind_simple_restarts(cl_object tag, cl_object names)
{
  if (ECL_SYM_FUN(ECL_SYM("SI::BIND-SIMPLE-RESTARTS",2116)) != Cnil)
    return _ecl_funcall3(ECL_SYM("SI::BIND-SIMPLE-RESTARTS",2116), tag, names);
  else
    return ECL_SYM_VAL(ecl_process_env(), ECL_SYM("SI::*RESTART-CLUSTERS*",5));
}

extern cl_object
si_bind_simple_handlers(cl_object tag, cl_object names)
{
  if (ECL_SYM_FUN(ECL_SYM("SI::BIND-SIMPLE-HANDLERS",2117)) != Cnil)
    return _ecl_funcall3(ECL_SYM("SI::BIND-SIMPLE-HANDLERS",2117), tag, names);
  else
    return ECL_SYM_VAL(ecl_process_env(), ECL_SYM("SI::*HANDLER-CLUSTERS*",6));
}

extern cl_object
clos_std_compute_effective_method(cl_object gf, cl_object combination, cl_object methods_list)
{
  return _ecl_funcall4(ECL_SYM("CLOS::STD-COMPUTE-EFFECTIVE-METHOD",1632), gf, combination, methods_list);
}

extern cl_object
clos_compute_effective_method_function(cl_object gf, cl_object combination, cl_object methods_list)
{
  return _ecl_funcall4(ECL_SYM("CLOS::COMPUTE-EFFECTIVE-METHOD-FUNCTION",1633), gf, combination, methods_list);
}

extern cl_object
si_string_to_object(cl_narg narg, cl_object string, ...)
{
  if (narg == 2) {
    cl_object err_value;
    va_list args; va_start(args, string);
    err_value = va_arg(args, cl_object);
    va_end(args);
    return _ecl_funcall3(ECL_SYM("SI::STRING-TO-OBJECT",1166), string, err_value);
  }
  return _ecl_funcall2(ECL_SYM("SI::STRING-TO-OBJECT",1166), string);
}

extern cl_object
si_signal_simple_error(cl_narg narg, cl_object condition, cl_object continuable, cl_object format, cl_object format_args, ...)
{
  ecl_va_list args;
  cl_object rest;
  ecl_va_start(args, format_args, narg, 4);
  rest = cl_grab_rest_args(args);
  ecl_va_end(args);
  return cl_apply(6, ECL_SYM("SI::SIGNAL-SIMPLE-ERROR",1160), condition, continuable,
                  format, format_args, rest);
}

extern cl_object
cl_set_difference(cl_narg narg, cl_object l1, cl_object l2, ...)
{
  {
#line 123
	const cl_env_ptr the_env = ecl_process_env();
#line 123
	#line 123
	cl_object __value0 = l1;
#line 123
	the_env->nvalues = 1;
#line 123
	the_env->values[0] = __value0;
#line 123
	#line 123
	return __value0;
#line 123
}
;
}

extern cl_object
cl_array_dimensions(cl_object array)
{
  return _ecl_funcall2(ECL_SYM("ARRAY-DIMENSIONS",101), array);
}

extern cl_object
si_wrong_type_argument(cl_narg narg, cl_object object, cl_object type, ...)
{
  return _ecl_funcall3(ECL_SYM("SI::WRONG-TYPE-ARGUMENT",1666), object, type);
}

static cl_object si_simple_toplevel ()
{
  cl_env_ptr env = ecl_process_env();
  cl_object output = cl_core.standard_output;
  cl_object sentence;
  int i;

  /* Simple minded top level loop */
  ECL_CATCH_ALL_BEGIN(env) {
    writestr_stream(";*** Lisp core booted ****\n"
                    "ECL (Embeddable Common Lisp)\n",
                    output);
    ecl_force_output(output);
    for (i = 1; i<ecl_fixnum(si_argc()); i++) {
      cl_object arg = si_argv(ecl_make_fixnum(i));
      cl_load(1, arg);
    }
    while (1) {
      writestr_stream("\n> ", output);
      sentence = cl_read(3, ECL_NIL, ECL_NIL, OBJNULL);
      if (sentence == OBJNULL) {
        {
#line 159
	const cl_env_ptr the_env = ecl_process_env();
the_env->nvalues = 0; return ECL_NIL;
#line 159
}
;
      }
      sentence = si_eval_with_env(1, sentence);
      ecl_prin1(sentence, output);
    }
  } ECL_CATCH_ALL_END;
  {
#line 165
	const cl_env_ptr the_env = ecl_process_env();
the_env->nvalues = 0; return ECL_NIL;
#line 165
}
;
}

int
main(int argc, char **args)
{
  cl_object top_level, features;

  /* This should be always the first call */
  cl_boot(argc, args);

  /* We are computing unnormalized numbers at some point */
  si_trap_fpe(ECL_T, ECL_NIL);

#ifdef ECL_CMU_FORMAT
  ECL_SET(ECL_SYM("*LOAD-VERBOSE*",41), ECL_NIL);
#endif
  ECL_SET(ECL_SYM("*PACKAGE*",45), cl_core.system_package);

  features = ecl_symbol_value(ECL_SYM("*FEATURES*",36));
  features = CONS(ecl_make_keyword("ECL-MIN"), features);
#ifdef HAVE_UNAME
  features = CONS(ecl_make_keyword("UNAME"), features);
#endif
  ECL_SET(ECL_SYM("*FEATURES*",36), features);
  top_level = _ecl_intern("TOP-LEVEL", cl_core.system_package);
  ecl_def_c_function(top_level, si_simple_toplevel, 0);
  _ecl_funcall1(top_level);
  return(0);
}

#ifdef __cplusplus
extern "C" void init_lib_LSP(cl_object);
#endif

void init_lib_LSP(cl_object o) {}
