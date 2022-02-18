#line 1 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/c/symbol.d"
/* -*- Mode: C; c-basic-offset: 2; indent-tabs-mode: nil -*- */
/* vim: set filetype=c tabstop=2 shiftwidth=2 expandtab: */

/*
 * symbol.d - symbols
 *
 * Copyright (c) 1984 Taiichi Yuasa and Masami Hagiya
 * Copyright (c) 1990 Giuseppe Attardi
 * Copyright (c) 2001 Juan Jose Garcia Ripoll
 *
 * See file 'LICENSE' for the copyright details.
 *
 */

#include <ecl/ecl.h>
#include <ecl/ecl-inl.h>
#include <ecl/internal.h>
#include <string.h>

cl_object
ecl_symbol_package(cl_object s)
{
  if (Null(s))
    return ECL_NIL_SYMBOL->symbol.hpack;
  if (ecl_t_of(s) == t_symbol)
    return s->symbol.hpack;
  FEwrong_type_only_arg(ecl_make_fixnum(/*SYMBOL-PACKAGE*/846), s, ecl_make_fixnum(/*SYMBOL*/842));
}

int
ecl_symbol_type(cl_object s)
{
  if (Null(s))
    return ECL_NIL_SYMBOL->symbol.stype;
  if (ecl_t_of(s) == t_symbol)
    return s->symbol.stype;
  FEwrong_type_nth_arg(ecl_make_fixnum(/*SYMBOL-NAME*/845), 1, s, ecl_make_fixnum(/*SYMBOL*/842));
}

void
ecl_symbol_type_set(cl_object s, int type)
{
  if (Null(s)) {
    ECL_NIL_SYMBOL->symbol.stype = type;
    return;
  }
  if (ecl_t_of(s) == t_symbol) {
    s->symbol.stype = type;
    return;
  }
  FEwrong_type_nth_arg(ecl_make_fixnum(/*SYMBOL-NAME*/845), 1, s, ecl_make_fixnum(/*SYMBOL*/842));
}

cl_object
ecl_symbol_name(cl_object s)
{
  if (Null(s)) {
    return ECL_NIL_SYMBOL->symbol.name;
  }
  if (ecl_t_of(s) == t_symbol) {
    return s->symbol.name;
  }
  FEwrong_type_only_arg(ecl_make_fixnum(/*SYMBOL-NAME*/845), s, ecl_make_fixnum(/*SYMBOL*/842));
}

static cl_object *
ecl_symbol_plist(cl_object s)
{
  if (Null(s)) {
    return &ECL_NIL_SYMBOL->symbol.plist;
  }
  if (ecl_t_of(s) == t_symbol) {
    return &s->symbol.plist;
  }
  FEwrong_type_only_arg(ecl_make_fixnum(/*SYMBOL-PLIST*/847), s, ecl_make_fixnum(/*SYMBOL*/842));
}

/**********************************************************************/

static void FEtype_error_plist(cl_object x) /*__attribute__((noreturn))*/;

cl_object
cl_make_symbol(cl_object str)
{
  cl_object x;
  /* INV: In several places it is assumed that we copy the string! */
  switch (ecl_t_of(str)) {
#ifdef ECL_UNICODE
  case t_string:
    if (!ecl_fits_in_base_string(str)) {
      str = cl_copy_seq(str);
    } else {
      str = si_copy_to_simple_base_string(str);
    }
    break;
#endif
  case t_base_string:
    str = si_copy_to_simple_base_string(str);
    break;
  default:
    FEwrong_type_only_arg(ecl_make_fixnum(/*MAKE-SYMBOL*/539),str,ecl_make_fixnum(/*STRING*/807));
  }
  x = ecl_alloc_object(t_symbol);
  x->symbol.name = str;
  x->symbol.dynamic = 0;
#ifdef ECL_THREADS
  x->symbol.binding = ECL_MISSING_SPECIAL_BINDING;
#endif  /*  */
  ECL_SET(x,OBJNULL);
  ECL_SYM_FUN(x) = ECL_NIL;
  x->symbol.plist = ECL_NIL;
  x->symbol.hpack = ECL_NIL;
  x->symbol.stype = ecl_stp_ordinary;
  {
#line 114
	const cl_env_ptr the_env = ecl_process_env();
#line 114
	#line 114
	cl_object __value0 = x;
#line 114
	the_env->nvalues = 1;
#line 114
	the_env->values[0] = __value0;
#line 114
	#line 114
	return __value0;
#line 114
}
;
}

/*
  ecl_make_keyword(s) makes a keyword from C string s.
*/
cl_object
ecl_make_keyword(const char *s)
{
  cl_object x = _ecl_intern(s, cl_core.keyword_package);
  /* cl_export(x, keyword_package); this is implicit in ecl_intern() */
  return x;
}

cl_object
ecl_make_symbol(const char *s, const char *p)
{
  ecl_def_ct_base_string(pack_name,p,strlen(p),,);
  cl_object x = _ecl_intern(s, pack_name);
  /* cl_export(x, keyword_package); this is implicit in ecl_intern() */
  return x;
}

cl_object
ecl_symbol_value(cl_object s)
{
#ifndef ECL_FINAL
  /* Symbols are not initialized yet. This test is issued only during ECL
     compilation to ensure, that we have no early references in the core. */
  if(cl_num_symbols_in_core < 3) {
    ecl_internal_error("SYMBOL-VALUE: symbols are not initialized yet.");
  }
#endif
  if (Null(s)) {
    return s;
  } else {
    /* FIXME: Should we check symbol type? */
    const cl_env_ptr the_env = ecl_process_env();
    cl_object value = ECL_SYM_VAL(the_env, s);
    unlikely_if (value == OBJNULL)
      FEunbound_variable(s);
    return value;
  }
}

static void
FEtype_error_plist(cl_object x)
{
  cl_error(9, ECL_SYM("SIMPLE-TYPE-ERROR",775), ECL_SYM(":FORMAT-CONTROL",1263),
           ecl_make_constant_base_string("Not a valid property list ~D",-1),
           ECL_SYM(":FORMAT-ARGUMENTS",1262), cl_list(1, x),
           ECL_SYM(":EXPECTED-TYPE",1254), ECL_SYM("SI::PROPERTY-LIST",1713),
           ECL_SYM(":DATUM",1236), x);
}

cl_object
ecl_getf(cl_object place, cl_object indicator, cl_object deflt)
{
  cl_object l;

#ifdef ECL_SAFE
  assert_type_proper_list(place);
#endif
  for (l = place; CONSP(l); ) {
    cl_object cdr_l = ECL_CONS_CDR(l);
    if (!CONSP(cdr_l))
      break;
    if (ECL_CONS_CAR(l) == indicator)
      return ECL_CONS_CAR(cdr_l);
    l = ECL_CONS_CDR(cdr_l);
  }
  if (l != ECL_NIL)
    FEtype_error_plist(place);
  return(deflt);
}

cl_object
ecl_get(cl_object s, cl_object p, cl_object d)
{
  return ecl_getf(*ecl_symbol_plist(s), p, d);
}

/*
  (SI:PUT-F plist value indicator)
  returns the new property list with value for property indicator.
  It will be used in SETF for GETF.
*/
cl_object
si_put_f(cl_object place, cl_object value, cl_object indicator)
{
  cl_object l;

#ifdef ECL_SAFE
  assert_type_proper_list(place);
#endif
  /* This loop guarantees finishing for circular lists */
  for (l = place; CONSP(l); ) {
    cl_object cdr_l = ECL_CONS_CDR(l);
    if (!CONSP(cdr_l))
      break;
    if (ECL_CONS_CAR(l) == indicator) {
      ECL_RPLACA(cdr_l, value);
      {
#line 216
	const cl_env_ptr the_env = ecl_process_env();
#line 216
	#line 216
	cl_object __value0 = place;
#line 216
	the_env->nvalues = 1;
#line 216
	the_env->values[0] = __value0;
#line 216
	#line 216
	return __value0;
#line 216
}
;
    }
    l = ECL_CONS_CDR(cdr_l);
  }
  if (l != ECL_NIL)
    FEtype_error_plist(place);
  place = CONS(value, place);
  {
#line 223
	const cl_env_ptr the_env = ecl_process_env();
#line 223
	#line 223
	cl_object __value0 = CONS(indicator, place);
#line 223
	the_env->nvalues = 1;
#line 223
	the_env->values[0] = __value0;
#line 223
	#line 223
	return __value0;
#line 223
}
;
}

/*
  Remf(p, i) removes property i
  from the property list pointed by p,
  which is a pointer to an cl_object.
  The returned value of remf(p, i) is:

  TRUE    if the property existed
  FALSE   otherwise.
*/
static bool
remf(cl_object *place, cl_object indicator)
{
  cl_object l = *place, tail = ECL_NIL;
  while (!Null(l)) {
    cl_object ind;
    if (!LISTP(l))
      FEtype_error_plist(*place);
    ind = ECL_CONS_CAR(l);
    l = ECL_CONS_CDR(l);
    if (!CONSP(l))
      FEtype_error_plist(*place);
    if (ind == indicator) {
      l = ECL_CONS_CDR(l);
      if (Null(tail))
        *place = l;
      else
        ECL_RPLACD(tail, l);
      return TRUE;
    }
    tail = l;
    l = ECL_CONS_CDR(l);
  }
  return FALSE;
}

bool
ecl_keywordp(cl_object s)
{
  return (ecl_t_of(s) == t_symbol) && (s->symbol.hpack == cl_core.keyword_package);
}

#line 267
cl_object cl_get(cl_narg narg, cl_object sym, cl_object indicator, ...)
{
#line 267

  cl_object *plist;
  #line 270
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 270
	cl_object deflt;
#line 270
	va_list ARGS;
	va_start(ARGS, indicator);
#line 270
	if (ecl_unlikely(narg < 2|| narg > 3)) FEwrong_num_arguments(ecl_make_fixnum(404));
#line 270
	if (narg > 2) {
#line 270
		deflt = va_arg(ARGS,cl_object);
#line 270
	} else {
#line 270
		deflt = ECL_NIL;
#line 270
	}
#line 270
  plist = ecl_symbol_plist(sym);
  {
#line 271
	#line 271
	cl_object __value0 = ecl_getf(*plist, indicator, deflt);
#line 271
	the_env->nvalues = 1;
#line 271
	the_env->values[0] = __value0;
#line 271
	va_end(ARGS);
#line 271
	return __value0;
#line 271
}
;
  }

cl_object
cl_remprop(cl_object sym, cl_object prop)
{
  cl_object *plist = ecl_symbol_plist(sym);
  {
#line 278
	const cl_env_ptr the_env = ecl_process_env();
#line 278
	#line 278
	cl_object __value0 = (remf(plist, prop)? ECL_T: ECL_NIL);
#line 278
	the_env->nvalues = 1;
#line 278
	the_env->values[0] = __value0;
#line 278
	#line 278
	return __value0;
#line 278
}
;
}

cl_object
cl_symbol_plist(cl_object sym)
{
  {
#line 284
	const cl_env_ptr the_env = ecl_process_env();
#line 284
	#line 284
	cl_object __value0 = *ecl_symbol_plist(sym);
#line 284
	the_env->nvalues = 1;
#line 284
	the_env->values[0] = __value0;
#line 284
	#line 284
	return __value0;
#line 284
}
;
}

#line 287
cl_object cl_getf(cl_narg narg, cl_object place, cl_object indicator, ...)
{
#line 287

  #line 289
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 289
	cl_object deflt;
#line 289
	va_list ARGS;
	va_start(ARGS, indicator);
#line 289
	if (ecl_unlikely(narg < 2|| narg > 3)) FEwrong_num_arguments(ecl_make_fixnum(414));
#line 289
	if (narg > 2) {
#line 289
		deflt = va_arg(ARGS,cl_object);
#line 289
	} else {
#line 289
		deflt = ECL_NIL;
#line 289
	}
#line 289
  {
#line 289
	#line 289
	cl_object __value0 = ecl_getf(place, indicator, deflt);
#line 289
	the_env->nvalues = 1;
#line 289
	the_env->values[0] = __value0;
#line 289
	va_end(ARGS);
#line 289
	return __value0;
#line 289
}
;
  }

cl_object
cl_get_properties(cl_object place, cl_object indicator_list)
{
  const cl_env_ptr the_env = ecl_process_env();
  cl_object l;

#ifdef ECL_SAFE
  assert_type_proper_list(place);
#endif
  for (l = place;  CONSP(l); ) {
    cl_object cdr_l = ECL_CONS_CDR(l);
    if (!CONSP(cdr_l))
      break;
    if (ecl_member_eq(ECL_CONS_CAR(l), indicator_list))
      ecl_return3(the_env,ECL_CONS_CAR(l),ECL_CONS_CAR(cdr_l),l);
    l = ECL_CONS_CDR(cdr_l);
  }
  if (l != ECL_NIL)
    FEtype_error_plist(place);
  ecl_return3(the_env, ECL_NIL, ECL_NIL, ECL_NIL);
}

cl_object
cl_symbol_name(cl_object x)
{
  ecl_return1(ecl_process_env(), ecl_symbol_name(x));
}

#line 320
cl_object cl_copy_symbol(cl_narg narg, cl_object sym, ...)
{
#line 320

  #line 322
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 322
	cl_object cp;
#line 322
	cl_object x;
#line 322
	va_list ARGS;
	va_start(ARGS, sym);
#line 322
	if (ecl_unlikely(narg < 1|| narg > 2)) FEwrong_num_arguments(ecl_make_fixnum(264));
#line 322
	if (narg > 1) {
#line 322
		cp = va_arg(ARGS,cl_object);
#line 322
	} else {
#line 322
		cp = ECL_NIL;
#line 322
	}
#line 322
	x = ECL_NIL;
#line 322
  if (Null(sym))
  sym = ECL_NIL_SYMBOL;
  x = cl_make_symbol(ecl_symbol_name(sym));
  if (!Null(cp)) {
    x->symbol.dynamic = 0;
    x->symbol.stype = sym->symbol.stype;
    x->symbol.value = sym->symbol.value;
    x->symbol.gfdef = sym->symbol.gfdef;
    x->symbol.plist = cl_copy_list(sym->symbol.plist);
#ifdef ECL_THREADS
    x->symbol.binding = ECL_MISSING_SPECIAL_BINDING;
#endif
    /* FIXME!!! We should also copy the system property list */
  }
  {
#line 336
	#line 336
	cl_object __value0 = x;
#line 336
	the_env->nvalues = 1;
#line 336
	the_env->values[0] = __value0;
#line 336
	va_end(ARGS);
#line 336
	return __value0;
#line 336
}
;
  }

#line 339
cl_object cl_gensym(cl_narg narg, ...)
{
#line 339

  cl_object counter, output;
  bool increment;
  #line 342
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 342
	cl_object prefix;
#line 342
	va_list ARGS;
	va_start(ARGS, narg);
#line 342
	if (ecl_unlikely(narg < 0|| narg > 1)) FEwrong_num_arguments(ecl_make_fixnum(402));
#line 342
	if (narg > 0) {
#line 342
		prefix = va_arg(ARGS,cl_object);
#line 342
	} else {
#line 342
		prefix = cl_core.gensym_prefix;
#line 342
	}
#line 342
{
    if (ecl_stringp(prefix)) {
      counter = ECL_SYM_VAL(the_env, ECL_SYM("*GENSYM-COUNTER*",37));
      increment = 1;
    } else if (ecl_t_of(prefix) == t_fixnum || ecl_t_of(prefix) == t_bignum) {
      counter = prefix;
      prefix = cl_core.gensym_prefix;
      increment = 0;
    } else {
      FEwrong_type_nth_arg(ecl_make_fixnum(/*GENSYM*/402),2,prefix,
                           cl_list(3, ECL_SYM("OR",616), ECL_SYM("STRING",807), ECL_SYM("INTEGER",439)));
    }
    assert_type_non_negative_integer(counter);
    output = ecl_make_string_output_stream(64, 1);
    ecl_bds_bind(the_env, ECL_SYM("*PRINT-ESCAPE*",50), ECL_NIL);
    ecl_bds_bind(the_env, ECL_SYM("*PRINT-READABLY*",59), ECL_NIL);
    ecl_bds_bind(the_env, ECL_SYM("*PRINT-BASE*",47), ecl_make_fixnum(10));
    ecl_bds_bind(the_env, ECL_SYM("*PRINT-RADIX*",58), ECL_NIL);
    si_write_ugly_object(prefix, output);
    si_write_ugly_object(counter, output);
    ecl_bds_unwind_n(the_env, 4);
    output = cl_make_symbol(cl_get_output_stream_string(output));
    if (increment)
      ECL_SETQ(the_env, ECL_SYM("*GENSYM-COUNTER*",37),ecl_one_plus(counter));
    {
#line 366
	#line 366
	cl_object __value0 = output;
#line 366
	the_env->nvalues = 1;
#line 366
	the_env->values[0] = __value0;
#line 366
	va_end(ARGS);
#line 366
	return __value0;
#line 366
}
;
  } }

#line 369
cl_object cl_gentemp(cl_narg narg, ...)
{
#line 369

  cl_object output, s;
  int intern_flag;
  #line 373
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 373
	cl_object prefix;
#line 373
	cl_object pack;
#line 373
	va_list ARGS;
	va_start(ARGS, narg);
#line 373
	if (ecl_unlikely(narg < 0|| narg > 2)) FEwrong_num_arguments(ecl_make_fixnum(403));
#line 373
	if (narg > 0) {
#line 373
		prefix = va_arg(ARGS,cl_object);
#line 373
	} else {
#line 373
		prefix = cl_core.gentemp_prefix;
#line 373
	}
#line 373
	if (narg > 1) {
#line 373
		pack = va_arg(ARGS,cl_object);
#line 373
	} else {
#line 373
		pack = ecl_current_package();
#line 373
	}
#line 373
  unlikely_if (!ECL_STRINGP(prefix))
  FEwrong_type_nth_arg(ecl_make_fixnum(/*GENTEMP*/403), 1, prefix, ecl_make_fixnum(/*STRING*/807));
  pack = si_coerce_to_package(pack);
 ONCE_MORE:
  output = ecl_make_string_output_stream(64, 1);
  ecl_bds_bind(the_env, ECL_SYM("*PRINT-ESCAPE*",50), ECL_NIL);
  ecl_bds_bind(the_env, ECL_SYM("*PRINT-READABLY*",59), ECL_NIL);
  ecl_bds_bind(the_env, ECL_SYM("*PRINT-BASE*",47), ecl_make_fixnum(10));
  ecl_bds_bind(the_env, ECL_SYM("*PRINT-RADIX*",58), ECL_NIL);
  si_write_ugly_object(prefix, output);
  si_write_ugly_object(cl_core.gentemp_counter, output);
  ecl_bds_unwind_n(the_env, 4);
  cl_core.gentemp_counter = ecl_one_plus(cl_core.gentemp_counter);
  s = ecl_intern(cl_get_output_stream_string(output), pack, &intern_flag);
  if (intern_flag != 0)
    goto ONCE_MORE;
  {
#line 389
	#line 389
	cl_object __value0 = s;
#line 389
	the_env->nvalues = 1;
#line 389
	the_env->values[0] = __value0;
#line 389
	va_end(ARGS);
#line 389
	return __value0;
#line 389
}
;
  }

cl_object
cl_symbol_package(cl_object sym)
{
  {
#line 395
	const cl_env_ptr the_env = ecl_process_env();
#line 395
	#line 395
	cl_object __value0 = ecl_symbol_package(sym);
#line 395
	the_env->nvalues = 1;
#line 395
	the_env->values[0] = __value0;
#line 395
	#line 395
	return __value0;
#line 395
}
;
}

cl_object
cl_keywordp(cl_object sym)
{
  {
#line 401
	const cl_env_ptr the_env = ecl_process_env();
#line 401
	#line 401
	cl_object __value0 = (ecl_keywordp(sym)? ECL_T: ECL_NIL);
#line 401
	the_env->nvalues = 1;
#line 401
	the_env->values[0] = __value0;
#line 401
	#line 401
	return __value0;
#line 401
}
;
}

/*
  (SI:REM-F plist indicator) returns two values:

  * the new property list
  in which property indcator is removed

  * T     if really removed
  NIL   otherwise.

  It will be used for macro REMF.
*/
cl_object
si_rem_f(cl_object plist, cl_object indicator)
{
  cl_env_ptr the_env = ecl_process_env();
  bool found = remf(&plist, indicator);
  ecl_return2(the_env, plist, (found? ECL_T : ECL_NIL));
}

cl_object
si_set_symbol_plist(cl_object sym, cl_object plist)
{
  *ecl_symbol_plist(sym) = plist;
  {
#line 427
	const cl_env_ptr the_env = ecl_process_env();
#line 427
	#line 427
	cl_object __value0 = plist;
#line 427
	the_env->nvalues = 1;
#line 427
	the_env->values[0] = __value0;
#line 427
	#line 427
	return __value0;
#line 427
}
;
}

#ifdef ECL_THREADS
cl_object
mp_compare_and_swap_symbol_plist(cl_object x, cl_object old, cl_object new)
{
  return ecl_compare_and_swap(ecl_symbol_plist(x), old, new);
}
#endif /* ECL_THREADS */

cl_object
si_putprop(cl_object sym, cl_object value, cl_object indicator)
{
  cl_object *plist = ecl_symbol_plist(sym);
  *plist = si_put_f(*plist, value, indicator);
  {
#line 443
	const cl_env_ptr the_env = ecl_process_env();
#line 443
	#line 443
	cl_object __value0 = value;
#line 443
	the_env->nvalues = 1;
#line 443
	the_env->values[0] = __value0;
#line 443
	#line 443
	return __value0;
#line 443
}
;
}

/* Added for defstruct. Beppe */
#line 447
cl_object si_put_properties(cl_narg narg, cl_object sym, ...)
{
#line 447

  #line 449
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 449
	ecl_va_list ind_values;
	ecl_va_start(ind_values, sym, narg, 1);
#line 449
	if (ecl_unlikely(narg < 1)) FEwrong_num_arguments(ecl_make_fixnum(1140));
#line 449
  while (--narg >= 2) {
    cl_object prop = ecl_va_arg(ind_values);
    si_putprop(sym, ecl_va_arg(ind_values), prop);
    narg--;
  }
  {
#line 454
	#line 454
	cl_object __value0 = sym;
#line 454
	the_env->nvalues = 1;
#line 454
	the_env->values[0] = __value0;
#line 454
	ecl_va_end(ind_values);
#line 454
	return __value0;
#line 454
}
;
  }

cl_object
si_Xmake_special(cl_object sym)
{
  int type = ecl_symbol_type(sym);
  if (type & ecl_stp_constant)
    FEerror("~S is a constant.", 1, sym);
  ecl_symbol_type_set(sym, type | ecl_stp_special);
  cl_remprop(sym, ECL_SYM("SI::SYMBOL-MACRO",1175));
  {
#line 465
	const cl_env_ptr the_env = ecl_process_env();
#line 465
	#line 465
	cl_object __value0 = sym;
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
si_Xmake_constant(cl_object sym, cl_object val)
{
  int type = ecl_symbol_type(sym);
  if (type & ecl_stp_special)
    FEerror("The argument ~S to DEFCONSTANT is a special variable.",
            1, sym);
  ecl_symbol_type_set(sym, type | ecl_stp_constant);
  ECL_SET(sym, val);
  {
#line 477
	const cl_env_ptr the_env = ecl_process_env();
#line 477
	#line 477
	cl_object __value0 = sym;
#line 477
	the_env->nvalues = 1;
#line 477
	the_env->values[0] = __value0;
#line 477
	#line 477
	return __value0;
#line 477
}
;
}

void
ecl_defvar(cl_object sym, cl_object val)
{
  si_safe_eval(3, cl_list(3, ECL_SYM("DEFVAR",292), sym, cl_list(2, ECL_SYM("QUOTE",681), val)), ECL_NIL, ECL_NIL);
}

void
ecl_defparameter(cl_object sym, cl_object val)
{
  si_safe_eval(3, cl_list(3, ECL_SYM("DEFPARAMETER",287), sym, cl_list(2, ECL_SYM("QUOTE",681), val)), ECL_NIL, ECL_NIL);
}
