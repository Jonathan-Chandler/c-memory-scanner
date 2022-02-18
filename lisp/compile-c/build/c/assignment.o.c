#line 1 "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/src/c/assignment.d"
/* -*- Mode: C; c-basic-offset: 2; indent-tabs-mode: nil -*- */
/* vim: set filetype=c tabstop=2 shiftwidth=2 expandtab: */

/*
 * assignment.c - assignment
 *
 * Copyright (c) 1984, Taiichi Yuasa and Masami Hagiya.
 * Copyright (c) 1990, Giuseppe Attardi.
 * Copyright (c) 2001, Juan Jose Garcia Ripoll.
 *
 * See file 'LICENSE' for the copyright details.
 *
 */

#include <string.h>
#include <ecl/ecl.h>
#include <ecl/internal.h>

static void FEconstant_assignment(cl_object var) ecl_attr_noreturn;

static void
FEconstant_assignment(cl_object var)
{
  FEinvalid_variable("Cannot assign to the constant ~S.", var);
}

cl_object
cl_set(cl_object var, cl_object value)
{
  const cl_env_ptr env = ecl_process_env();
  unlikely_if (Null(var)) {
    FEconstant_assignment(var);
  }
  unlikely_if (ecl_t_of(var) != t_symbol) {
    FEwrong_type_nth_arg(ecl_make_fixnum(/*SET*/745), 1, var, ecl_make_fixnum(/*SYMBOL*/842));
  }
  unlikely_if (var->symbol.stype & ecl_stp_constant) {
    FEconstant_assignment(var);
  }
  ecl_return1(env, ECL_SETQ(env, var, value));
}

#ifdef ECL_THREADS
cl_object
mp_compare_and_swap_symbol_value(cl_object var, cl_object old, cl_object new)
{
  unlikely_if (Null(var)) {
    FEconstant_assignment(var);
  }
  unlikely_if (ecl_t_of(var) != t_symbol) {
    FEwrong_type_nth_arg(ecl_make_fixnum(/*MP::COMPARE-AND-SWAP-SYMBOL-VALUE*/1511), 1, var, ecl_make_fixnum(/*SYMBOL*/842));
  }
  unlikely_if (var->symbol.stype & ecl_stp_constant) {
    FEconstant_assignment(var);
  }
  return ecl_compare_and_swap(ecl_bds_ref(ecl_process_env(), var), old, new);
}

cl_object
mp_atomic_incf_symbol_value(cl_object var, cl_object increment)
{
  unlikely_if (Null(var)) {
    FEconstant_assignment(var);
  }
  unlikely_if (ecl_t_of(var) != t_symbol) {
    FEwrong_type_nth_arg(ecl_make_fixnum(/*MP::ATOMIC-INCF-SYMBOL-VALUE*/1517), 1, var, ecl_make_fixnum(/*SYMBOL*/842));
  }
  unlikely_if (var->symbol.stype & ecl_stp_constant) {
    FEconstant_assignment(var);
  }
  return ecl_atomic_incf(ecl_bds_ref(ecl_process_env(), var), increment);
}
#endif /* ECL_THREADS */

cl_object
ecl_setq(cl_env_ptr env, cl_object var, cl_object value)
{
  unlikely_if (Null(var)) {
    FEconstant_assignment(var);
  }
  unlikely_if (ecl_t_of(var) != t_symbol) {
    FEwrong_type_nth_arg(ecl_make_fixnum(/*SETQ*/753), 1, var, ecl_make_fixnum(/*SYMBOL*/842));
  }
  return ECL_SETQ(env, var, value);
}

static cl_object
unbound_setf_function_error(cl_narg narg, ...)
{
  const cl_env_ptr the_env = ecl_process_env();
  cl_object name = the_env->function->cclosure.env;
  FEundefined_function(cl_list(2, ECL_SYM("SETF",752), name));
}

static cl_object
make_setf_function_error(cl_object name)
{
  return ecl_make_cclosure_va((cl_objectfn)unbound_setf_function_error,
                              name, ECL_NIL, 0);
}

cl_object
ecl_setf_definition(cl_object sym, cl_object createp)
{
  cl_env_ptr the_env = ecl_process_env();
  cl_object pair;
  ECL_WITH_GLOBAL_ENV_RDLOCK_BEGIN(the_env) {
    pair = ecl_gethash_safe(sym, cl_core.setf_definitions, ECL_NIL);
    if (Null(pair) && !Null(createp)) {
      createp = make_setf_function_error(sym);
      pair = ecl_cons(createp, ECL_NIL);
      ecl_sethash(sym, cl_core.setf_definitions, pair);
    }
  } ECL_WITH_GLOBAL_ENV_RDLOCK_END;
  return pair;
}

cl_object
si_setf_definition(cl_object sym, cl_object value)
{
  {
#line 121
	const cl_env_ptr the_env = ecl_process_env();
#line 121
	#line 121
	cl_object __value0 = ecl_setf_definition(sym, value);
#line 121
	the_env->nvalues = 1;
#line 121
	the_env->values[0] = __value0;
#line 121
	#line 121
	return __value0;
#line 121
}
;
}

static void
ecl_rem_setf_definition(cl_object sym)
{
  cl_env_ptr the_env = ecl_process_env();
  ECL_WITH_GLOBAL_ENV_WRLOCK_BEGIN(the_env) {
    cl_object pair = ecl_gethash_safe(sym, cl_core.setf_definitions, ECL_NIL);
    if (!Null(pair)) {
      ECL_RPLACA(pair, make_setf_function_error(sym));
      ECL_RPLACD(pair, ECL_NIL);
      /*
        FIXME: This leaks resources
        We actually cannot remove it, because some compiled
        code might be using it!
        ecl_remhash(sym, cl_core.setf_definitions);
      */
    }
  } ECL_WITH_GLOBAL_ENV_WRLOCK_END;
}

#line 143
cl_object si_fset(cl_narg narg, cl_object fname, cl_object def, ...)
{
#line 143

  cl_object sym = si_function_block_name(fname);
  cl_object pack;
  bool mflag;
  int type;
#line 149
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 149
	cl_object macro;
#line 149
	cl_object pprint;
#line 149
	va_list ARGS;
	va_start(ARGS, def);
#line 149
	if (ecl_unlikely(narg < 2|| narg > 4)) FEwrong_num_arguments(ecl_make_fixnum(1084));
#line 149
	if (narg > 2) {
#line 149
		macro = va_arg(ARGS,cl_object);
#line 149
	} else {
#line 149
		macro = ECL_NIL;
#line 149
	}
#line 149
	if (narg > 3) {
#line 149
		pprint = va_arg(ARGS,cl_object);
#line 149
	} else {
#line 149
		pprint = ECL_NIL;
#line 149
	}
#line 149
  if (Null(cl_functionp(def)))
    FEinvalid_function(def);
  pack = ecl_symbol_package(sym);
  if (pack != ECL_NIL
      && pack->pack.locked
      && ECL_SYM_VAL(ecl_process_env(),
                     ECL_SYM("SI::*IGNORE-PACKAGE-LOCKS*",1119)) == ECL_NIL) {
    CEpackage_error("Attempt to redefine function ~S in locked package.",
                    "Ignore lock and proceed", pack, 1, fname);
  }
  mflag = !Null(macro);
  type = ecl_symbol_type(sym);
  if ((type & ecl_stp_special_form) && !mflag) {
    FEerror("Given that ~S is a special form, ~S cannot be defined as a function.",
            2, sym, fname);
  }
  if (ECL_SYMBOLP(fname)) {
    if (mflag) {
      type |= ecl_stp_macro;
    } else {
      type &= ~ecl_stp_macro;
    }
    ecl_symbol_type_set(sym, type);
    ECL_SYM_FUN(sym) = def;
    ecl_clear_compiler_properties(sym);
#ifndef ECL_CMU_FORMAT
    if (pprint == ECL_NIL)
      si_rem_sysprop(sym, ECL_SYM("SI::PRETTY-PRINT-FORMAT",1135));
    else
      si_put_sysprop(sym, ECL_SYM("SI::PRETTY-PRINT-FORMAT",1135), pprint);
#endif
  } else if (mflag) {
    FEerror("~S is not a valid name for a macro.", 1, fname);
  } else {
    cl_object pair = ecl_setf_definition(sym, def);
    ECL_RPLACA(pair, def);
    ECL_RPLACD(pair, sym);
  }
  {
#line 187
	#line 187
	cl_object __value0 = def;
#line 187
	the_env->nvalues = 1;
#line 187
	the_env->values[0] = __value0;
#line 187
	va_end(ARGS);
#line 187
	return __value0;
#line 187
}
;
}

cl_object
cl_makunbound(cl_object sym)
{
  if (ecl_symbol_type(sym) & ecl_stp_constant)
    FEinvalid_variable("Cannot unbind the constant ~S.", sym);
  /* FIXME! The semantics of MAKUNBOUND is not very clear with local
     bindings ... */
  ECL_SET(sym, OBJNULL);
  {
#line 198
	const cl_env_ptr the_env = ecl_process_env();
#line 198
	#line 198
	cl_object __value0 = sym;
#line 198
	the_env->nvalues = 1;
#line 198
	the_env->values[0] = __value0;
#line 198
	#line 198
	return __value0;
#line 198
}
;
}

cl_object
cl_fmakunbound(cl_object fname)
{
  cl_object sym = si_function_block_name(fname);
  cl_object pack = ecl_symbol_package(sym);
  if (pack != ECL_NIL
      && pack->pack.locked
      && ECL_SYM_VAL(ecl_process_env(),
                     ECL_SYM("SI::*IGNORE-PACKAGE-LOCKS*",1119)) == ECL_NIL) {
    CEpackage_error("Attempt to redefine function ~S in locked package.",
                    "Ignore lock and proceed", pack, 1, fname);
  }
  if (ECL_SYMBOLP(fname)) {
    ecl_clear_compiler_properties(sym);
    ECL_SYM_FUN(sym) = ECL_NIL;
    ecl_symbol_type_set(sym, ecl_symbol_type(sym) & ~ecl_stp_macro);
  } else {
    ecl_rem_setf_definition(sym);
    si_rem_sysprop(sym, ECL_SYM("SI::SETF-METHOD",1157));
  }
  {
#line 221
	const cl_env_ptr the_env = ecl_process_env();
#line 221
	#line 221
	cl_object __value0 = fname;
#line 221
	the_env->nvalues = 1;
#line 221
	the_env->values[0] = __value0;
#line 221
	#line 221
	return __value0;
#line 221
}
;
}

void
ecl_clear_compiler_properties(cl_object sym)
{
  if (ecl_option_values[ECL_OPT_BOOTED]) {
    funcall(2, ECL_SYM("SI::CLEAR-COMPILER-PROPERTIES",1056), sym);
  }
}

cl_object
si_get_sysprop(cl_object sym, cl_object prop)
{
  cl_env_ptr the_env = ecl_process_env();
  ECL_WITH_GLOBAL_ENV_RDLOCK_BEGIN(the_env) {
    cl_object plist = ecl_gethash_safe(sym, cl_core.system_properties, ECL_NIL);
    prop = ecl_getf(plist, prop, OBJNULL);
  } ECL_WITH_GLOBAL_ENV_RDLOCK_END;
  if (prop == OBJNULL) {
    {
#line 241
	const cl_env_ptr the_env = ecl_process_env();
#line 241
	#line 241
	cl_object __value0 = ECL_NIL;
#line 241
	cl_object __value1 = ECL_NIL;
#line 241
	the_env->nvalues = 2;
#line 241
	the_env->values[1] = __value1;
#line 241
	the_env->values[0] = __value0;
#line 241
	#line 241
	return __value0;
#line 241
}
;
  } else {
    {
#line 243
	const cl_env_ptr the_env = ecl_process_env();
#line 243
	#line 243
	cl_object __value0 = prop;
#line 243
	cl_object __value1 = ECL_T;
#line 243
	the_env->nvalues = 2;
#line 243
	the_env->values[1] = __value1;
#line 243
	the_env->values[0] = __value0;
#line 243
	#line 243
	return __value0;
#line 243
}
;
  }
}

cl_object
si_put_sysprop(cl_object sym, cl_object prop, cl_object value)
{
  cl_env_ptr the_env = ecl_process_env();
  ECL_WITH_GLOBAL_ENV_WRLOCK_BEGIN(the_env) {
    cl_object plist = ecl_gethash_safe(sym, cl_core.system_properties, ECL_NIL);
    ecl_sethash(sym, cl_core.system_properties, si_put_f(plist, value, prop));
  } ECL_WITH_GLOBAL_ENV_WRLOCK_END;
  {
#line 255
	const cl_env_ptr the_env = ecl_process_env();
#line 255
	#line 255
	cl_object __value0 = value;
#line 255
	the_env->nvalues = 1;
#line 255
	the_env->values[0] = __value0;
#line 255
	#line 255
	return __value0;
#line 255
}
;
}

cl_object
si_rem_sysprop(cl_object sym, cl_object prop)
{
  const cl_env_ptr the_env = ecl_process_env();
  cl_object plist, found;
  plist = ecl_gethash_safe(sym, cl_core.system_properties, ECL_NIL);
  plist = si_rem_f(plist, prop);
  found = ecl_nth_value(the_env, 1);
  ecl_sethash(sym, cl_core.system_properties, plist);
  ecl_return1(the_env, found);
}
