#line 1 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/c/reference.d"
/* -*- Mode: C; c-basic-offset: 2; indent-tabs-mode: nil -*- */
/* vim: set filetype=c tabstop=2 shiftwidth=2 expandtab: */

/*
 * reference.d - reference in Constants and Variables
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
#include <ecl/ecl-inl.h>

/* Symbol-function returns */
/*         function-closure                for function */
/*         (macro . function-closure)      for macros */
/*         special                         for special forms. */
cl_object
cl_symbol_function(cl_object sym)
{
  cl_object output;
  int type = ecl_symbol_type(sym);
  if (type & ecl_stp_special_form) {
    output = ECL_SYM("SPECIAL",791);
  } else if (Null(sym) || (ECL_SYM_FUN(sym) == ECL_NIL)) {
    FEundefined_function(sym);
  } else if (type & ecl_stp_macro) {
    output = CONS(ECL_SYM("SI::MACRO",1105), ECL_SYM_FUN(sym));
  } else {
    output = ECL_SYM_FUN(sym);
  }
  {
#line 37
	const cl_env_ptr the_env = ecl_process_env();
#line 37
	#line 37
	cl_object __value0 = output;
#line 37
	the_env->nvalues = 1;
#line 37
	the_env->values[0] = __value0;
#line 37
	#line 37
	return __value0;
#line 37
}
;
}

cl_object
cl_fdefinition(cl_object fname)
{
  {
#line 43
	const cl_env_ptr the_env = ecl_process_env();
#line 43
	#line 43
	cl_object __value0 = ((ECL_SYMBOLP(fname))? cl_symbol_function(fname) : ecl_fdefinition(fname));
#line 43
	the_env->nvalues = 1;
#line 43
	the_env->values[0] = __value0;
#line 43
	#line 43
	return __value0;
#line 43
}
;
}

cl_object
cl_fboundp(cl_object fname)
{
  if (Null(fname)) {
    {
#line 50
	const cl_env_ptr the_env = ecl_process_env();
#line 50
	#line 50
	cl_object __value0 = ECL_NIL;
#line 50
	the_env->nvalues = 1;
#line 50
	the_env->values[0] = __value0;
#line 50
	#line 50
	return __value0;
#line 50
}
;
  } else if (ECL_SYMBOLP(fname)) {
    {
#line 53
	const cl_env_ptr the_env = ecl_process_env();
#line 53
	#line 53
	cl_object __value0 = (((fname->symbol.stype & ecl_stp_special_form)
               || ECL_SYM_FUN(fname) != ECL_NIL)? ECL_T : ECL_NIL);
#line 53
	the_env->nvalues = 1;
#line 53
	the_env->values[0] = __value0;
#line 53
	#line 53
	return __value0;
#line 53
}
;
  } else if (LISTP(fname)) {
    if (CAR(fname) == ECL_SYM("SETF",752)) {
      cl_object sym = CDR(fname);
      if (CONSP(sym) && CDR(sym) == ECL_NIL) {
        cl_object pair;
        sym = CAR(sym);
        if (ECL_SYMBOLP(sym)) {
          pair = ecl_setf_definition(sym, ECL_NIL);
          {
#line 62
	const cl_env_ptr the_env = ecl_process_env();
#line 62
	#line 62
	cl_object __value0 = ecl_cdr(pair);
#line 62
	the_env->nvalues = 1;
#line 62
	the_env->values[0] = __value0;
#line 62
	#line 62
	return __value0;
#line 62
}
;
        }
      }
    }
  }
  FEinvalid_function_name(fname);
}

cl_object
ecl_fdefinition(cl_object fun)
{
  cl_type t = ecl_t_of(fun);
  cl_object output;

  if (t == t_symbol) {
    output = ECL_SYM_FUN(fun);
    unlikely_if (output == ECL_NIL)
      FEundefined_function(fun);
    unlikely_if (fun->symbol.stype & (ecl_stp_macro | ecl_stp_special_form))
      FEundefined_function(fun);
  } else unlikely_if (Null(fun)) {
      FEundefined_function(fun);
    } else if (t == t_list) {
    cl_object sym = CDR(fun);
    unlikely_if (!CONSP(sym))
      FEinvalid_function_name(fun);
    if (CAR(fun) == ECL_SYM("SETF",752)) {
      unlikely_if (CDR(sym) != ECL_NIL)
        FEinvalid_function_name(fun);
      sym = CAR(sym);
      unlikely_if (ecl_t_of(sym) != t_symbol)
        FEinvalid_function_name(fun);
      output = ecl_setf_definition(sym, ECL_NIL);
      unlikely_if (Null(ecl_cdr(output)))
        FEundefined_function(fun);
      output = ECL_CONS_CAR(output);
    } else if (CAR(fun) == ECL_SYM("LAMBDA",454)) {
      return si_make_lambda(ECL_NIL, sym);
    } else if (CAR(fun) == ECL_SYM("EXT::LAMBDA-BLOCK",1367)) {
      return si_make_lambda(CAR(sym), CDR(sym));
    } else {
      FEinvalid_function_name(fun);
    }
  } else {
    FEinvalid_function_name(fun);
  }
  return output;
}

cl_object
si_coerce_to_function(cl_object fun)
{
  cl_type t = ecl_t_of(fun);
  if (!(t == t_cfun || t == t_cfunfixed || t == t_cclosure
        || t == t_bytecodes || t == t_bclosure
        || (t == t_instance && fun->instance.isgf))) {
    fun = ecl_fdefinition(fun);
  }
  {
#line 120
	const cl_env_ptr the_env = ecl_process_env();
#line 120
	#line 120
	cl_object __value0 = fun;
#line 120
	the_env->nvalues = 1;
#line 120
	the_env->values[0] = __value0;
#line 120
	#line 120
	return __value0;
#line 120
}
;
}

cl_object
cl_symbol_value(cl_object sym)
{
  const cl_env_ptr the_env = ecl_process_env();
  cl_object value;
  if (Null(sym)) {
    value = sym;
  } else {
    if (ecl_unlikely(!ECL_SYMBOLP(sym))) {
      FEwrong_type_only_arg(ecl_make_fixnum(/*SYMBOL-VALUE*/848), sym, ecl_make_fixnum(/*SYMBOL*/842));
    }
    value = ECL_SYM_VAL(the_env, sym);
    if (ecl_unlikely(value == OBJNULL)) {
      FEunbound_variable(sym);
    }
  }
  {
#line 139
	const cl_env_ptr the_env = ecl_process_env();
#line 139
	#line 139
	cl_object __value0 = value;
#line 139
	the_env->nvalues = 1;
#line 139
	the_env->values[0] = __value0;
#line 139
	#line 139
	return __value0;
#line 139
}
;
}

bool
ecl_boundp(cl_env_ptr env, cl_object sym)
{
  if (Null(sym)) {
    return 1;
  } else {
    if (ecl_unlikely(!ECL_SYMBOLP(sym)))
      FEwrong_type_only_arg(ecl_make_fixnum(/*BOUNDP*/159), sym, ecl_make_fixnum(/*SYMBOL*/842));
    return ECL_SYM_VAL(env, sym) != OBJNULL;
  }
}

cl_object
cl_boundp(cl_object sym)
{
  const cl_env_ptr the_env = ecl_process_env();
  ecl_return1(the_env, ecl_boundp(the_env,sym)? ECL_T : ECL_NIL);
}

cl_object
cl_special_operator_p(cl_object form)
{
  const cl_env_ptr the_env = ecl_process_env();
  int special = ecl_symbol_type(form) & ecl_stp_special_form;
  ecl_return1(the_env, special? ECL_T : ECL_NIL);
}
