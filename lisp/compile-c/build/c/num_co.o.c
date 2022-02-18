#line 1 "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/src/c/num_co.d"
/* -*- Mode: C; c-basic-offset: 2; indent-tabs-mode: nil -*- */
/* vim: set filetype=c tabstop=2 shiftwidth=2 expandtab: */

/*
 * num_co.d - operations on floating-point numbers
 *
 * Copyright (c) 1984 Taiichi Yuasa and Masami Hagiya
 * Copyright (c) 1990 Giuseppe Attardi
 * Copyright (c) 2001 Juan Jose Garcia Ripoll
 *
 * See file 'LICENSE' for the copyright details.
 *
 */

/*
  IMPLEMENTATION-DEPENDENT

  This file contains those functions
  that know the representation of floating-point numbers.
*/

#define ECL_INCLUDE_MATH_H
#include <ecl/ecl.h>
#include <float.h>
#include <ecl/internal.h>

/* Coerce X to single-float if one arg,
   otherwise coerce to same float type as second arg */

#line 30
cl_object cl_float(cl_narg narg, cl_object x, ...)
{
#line 30

  cl_type ty, tx;
  #line 33
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 33
	cl_object y;
#line 33
	va_list ARGS;
	va_start(ARGS, x);
#line 33
	if (ecl_unlikely(narg < 1|| narg > 2)) FEwrong_num_arguments(ecl_make_fixnum(376));
#line 33
	if (narg > 1) {
#line 33
		y = va_arg(ARGS,cl_object);
#line 33
	} else {
#line 33
		y = OBJNULL;
#line 33
	}
#line 33
  if (y != OBJNULL) {
    ty = ecl_t_of(y);
  } else {
    ty = t_singlefloat;
  }
  switch (tx = ecl_t_of(x)) {
  case t_singlefloat:
  case t_doublefloat:
  case t_longfloat:
    if (y == OBJNULL || ty == tx)
      break;
  case t_fixnum:
  case t_bignum:
  case t_ratio:
    switch (ty) {
    case t_singlefloat:
      x = ecl_make_single_float(ecl_to_double(x)); break;
    case t_doublefloat:
      x = ecl_make_double_float(ecl_to_double(x)); break;
    case t_longfloat:
      x = ecl_make_long_float(ecl_to_long_double(x)); break;
    default:
      FEwrong_type_nth_arg(ecl_make_fixnum(/*FLOAT*/376),2,y,ecl_make_fixnum(/*FLOAT*/376));
    }
    break;
  default:
    FEwrong_type_nth_arg(ecl_make_fixnum(/*FLOAT*/376),1,x,ecl_make_fixnum(/*REAL*/705));
  }
  {
#line 61
	#line 61
	cl_object __value0 = x;
#line 61
	the_env->nvalues = 1;
#line 61
	the_env->values[0] = __value0;
#line 61
	va_end(ARGS);
#line 61
	return __value0;
#line 61
}

  }

cl_object
cl_numerator(cl_object x)
{
  switch (ecl_t_of(x)) {
  case t_ratio:
    x = x->ratio.num;
    break;
  case t_fixnum:
  case t_bignum:
    break;
  default:
    FEwrong_type_only_arg(ecl_make_fixnum(/*NUMERATOR*/610),x,ecl_make_fixnum(/*RATIONAL*/689));
  }
  {
#line 77
	const cl_env_ptr the_env = ecl_process_env();
#line 77
	#line 77
	cl_object __value0 = x;
#line 77
	the_env->nvalues = 1;
#line 77
	the_env->values[0] = __value0;
#line 77
	#line 77
	return __value0;
#line 77
}

    }

cl_object
cl_denominator(cl_object x)
{
  switch (ecl_t_of(x)) {
  case t_ratio:
    x = x->ratio.den;
    break;
  case t_fixnum:
  case t_bignum:
    x = ecl_make_fixnum(1);
    break;
  default:
    FEwrong_type_only_arg(ecl_make_fixnum(/*DENOMINATOR*/299),x,ecl_make_fixnum(/*RATIONAL*/689));
  }
  {
#line 94
	const cl_env_ptr the_env = ecl_process_env();
#line 94
	#line 94
	cl_object __value0 = x;
#line 94
	the_env->nvalues = 1;
#line 94
	the_env->values[0] = __value0;
#line 94
	#line 94
	return __value0;
#line 94
}

    }

cl_object
cl_mod(cl_object x, cl_object y)
{
  const cl_env_ptr the_env = ecl_process_env();
  /* INV: #'floor always outputs two values */
  cl_floor(2, x, y);
  ecl_return1(the_env, the_env->values[1]);
}

cl_object
cl_rem(cl_object x, cl_object y)
{
  const cl_env_ptr the_env = ecl_process_env();
  cl_truncate(2, x, y);
  ecl_return1(the_env, the_env->values[1]);
}

cl_object
cl_decode_float(cl_object x)
{
  const cl_env_ptr the_env = ecl_process_env();
  int e, s;
  cl_type tx = ecl_t_of(x);
  float f;

  switch (tx) {
  case t_singlefloat: {
    f = ecl_single_float(x);
    if (f >= 0.0) {
      s = 1;
    } else {
      f = -f;
      s = 0;
    }
    f = frexpf(f, &e);
    x = ecl_make_single_float(f);
    break;
  }
  case t_doublefloat: {
    double d = ecl_double_float(x);
    if (d >= 0.0) {
      s = 1;
    } else {
      d = -d;
      s = 0;
    }
    d = frexp(d, &e);
    x = ecl_make_double_float(d);
    break;
  }
  case t_longfloat: {
    long double d = ecl_long_float(x);
    if (d >= 0.0)
      s = 1;
    else {
      d = -d;
      s = 0;
    }
    d = frexpl(d, &e);
    x = ecl_make_long_float(d);
    break;
  }
  default:
    FEwrong_type_only_arg(ecl_make_fixnum(/*DECODE-FLOAT*/277),x,ecl_make_fixnum(/*FLOAT*/376));
  }
  ecl_return3(the_env, x, ecl_make_fixnum(e), ecl_make_single_float(s));
}

cl_object
cl_scale_float(cl_object x, cl_object y)
{
  const cl_env_ptr the_env = ecl_process_env();
  cl_fixnum k;

  if (ECL_FIXNUMP(y)) {
    k = ecl_fixnum(y);
  } else {
    FEwrong_type_nth_arg(ecl_make_fixnum(/*SCALE-FLOAT*/739),2,y,ecl_make_fixnum(/*FIXNUM*/374));
  }
  switch (ecl_t_of(x)) {
  case t_singlefloat:
    x = ecl_make_single_float(ldexpf(ecl_single_float(x), k));
    break;
  case t_doublefloat:
    x = ecl_make_double_float(ldexp(ecl_double_float(x), k));
    break;
  case t_longfloat:
    x = ecl_make_long_float(ldexpl(ecl_long_float(x), k));
    break;
  default:
    FEwrong_type_nth_arg(ecl_make_fixnum(/*SCALE-FLOAT*/739),1,x,ecl_make_fixnum(/*FLOAT*/376));
  }
  ecl_return1(the_env, x);
}

cl_object
cl_float_radix(cl_object x)
{
  const cl_env_ptr the_env = ecl_process_env();
  if (ecl_unlikely(cl_floatp(x) != ECL_T)) {
    FEwrong_type_only_arg(ecl_make_fixnum(/*FLOAT-RADIX*/379),x,ecl_make_fixnum(/*FLOAT*/376));
  }
  ecl_return1(the_env, ecl_make_fixnum(FLT_RADIX));
}

int
ecl_signbit(cl_object x)
{
  switch (ecl_t_of(x)) {
  case t_singlefloat:
    return signbit(ecl_single_float(x));
  case t_doublefloat:
    return signbit(ecl_double_float(x));
  case t_longfloat:
    return signbit(ecl_long_float(x));
  default:
    FEwrong_type_nth_arg(ecl_make_fixnum(/*FLOAT-SIGN*/380),1,x,ecl_make_fixnum(/*FLOAT*/376));
  }
}

#line 217
cl_object cl_float_sign(cl_narg narg, cl_object x, ...)
{
#line 217

  int negativep;
  #line 220
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 220
	cl_object y;
#line 220
	bool yp;
#line 220
	va_list ARGS;
	va_start(ARGS, x);
#line 220
	if (ecl_unlikely(narg < 1|| narg > 2)) FEwrong_num_arguments(ecl_make_fixnum(380));
#line 220
	if (narg > 1) {
#line 220
		y = va_arg(ARGS,cl_object);
#line 220
		yp = TRUE;
#line 220
	} else {
#line 220
		y = x;
#line 220
		yp = FALSE;
#line 220
	}
#line 220
  if (!yp) {
    y = cl_float(2, ecl_make_fixnum(1), x);
  }
  negativep = ecl_signbit(x);
  switch (ecl_t_of(y)) {
  case t_singlefloat: {
    float f = ecl_single_float(y);
    if (signbit(f) != negativep) y = ecl_make_single_float(-f);
    break;
  }
  case t_doublefloat: {
    double f = ecl_double_float(y);
    if (signbit(f) != negativep) y = ecl_make_double_float(-f);
    break;
  }
  case t_longfloat: {
    long double f = ecl_long_float(y);
    if (signbit(f) != negativep) y = ecl_make_long_float(-f);
    break;
  }
  default:
    FEwrong_type_nth_arg(ecl_make_fixnum(/*FLOAT-SIGN*/380),2,y,ecl_make_fixnum(/*FLOAT*/376));
  }
  {
#line 243
	#line 243
	cl_object __value0 = y;
#line 243
	the_env->nvalues = 1;
#line 243
	the_env->values[0] = __value0;
#line 243
	va_end(ARGS);
#line 243
	return __value0;
#line 243
}
;
  }

cl_object
cl_float_digits(cl_object x)
{
  const cl_env_ptr the_env = ecl_process_env();
  switch (ecl_t_of(x)) {
  case t_singlefloat:
    x = ecl_make_fixnum(FLT_MANT_DIG);
    break;
  case t_doublefloat:
    x = ecl_make_fixnum(DBL_MANT_DIG);
    break;
  case t_longfloat:
    x = ecl_make_fixnum(LDBL_MANT_DIG);
    break;
  default:
    FEwrong_type_only_arg(ecl_make_fixnum(/*FLOAT-DIGITS*/377),x,ecl_make_fixnum(/*FLOAT*/376));
  }
  ecl_return1(the_env, x);
}

cl_object
cl_float_precision(cl_object x)
{
  const cl_env_ptr the_env = ecl_process_env();
  int precision;
  switch (ecl_t_of(x)) {
  case t_singlefloat: {
    float f = ecl_single_float(x);
    if (f == 0.0) {
      precision = 0;
    } else {
      int exp;
      frexpf(f, &exp);
      if (exp >= FLT_MIN_EXP) {
        precision = FLT_MANT_DIG;
      } else {
        precision = FLT_MANT_DIG - (FLT_MIN_EXP - exp);
      }
    }
    break;
  }
  case t_doublefloat: {
    double f = ecl_double_float(x);
    if (f == 0.0) {
      precision = 0;
    } else {
      int exp;
      frexp(f, &exp);
      if (exp >= DBL_MIN_EXP) {
        precision = DBL_MANT_DIG;
      } else {
        precision = DBL_MANT_DIG - (DBL_MIN_EXP - exp);
      }
    }
    break;
  }
  case t_longfloat: {
    long double f = ecl_long_float(x);
    if (f == 0.0) {
      precision = 0;
    } else {
      int exp;
      frexpl(f, &exp);
      if (exp >= LDBL_MIN_EXP) {
        precision = LDBL_MANT_DIG;
      } else {
        precision = LDBL_MANT_DIG - (LDBL_MIN_EXP - exp);
      }
    }
    break;
  }
  default:
    FEwrong_type_only_arg(ecl_make_fixnum(/*FLOAT-PRECISION*/378),x,ecl_make_fixnum(/*FLOAT*/376));
  }
  ecl_return1(the_env, ecl_make_fixnum(precision));
}

cl_object
cl_integer_decode_float(cl_object x)
{
  const cl_env_ptr the_env = ecl_process_env();
  int e, s = 1;

  switch (ecl_t_of(x)) {
  case t_longfloat: {
    long double d = ecl_long_float(x);
    if (signbit(d)) {
      s = -1;
      d = -d;
    }
    if (d == 0.0) {
      e = 0;
      x = ecl_make_fixnum(0);
    } else {
      d = frexpl(d, &e);
      x = _ecl_long_double_to_integer(ldexpl(d, LDBL_MANT_DIG));
      e -= LDBL_MANT_DIG;
    }
    break;
  }
  case t_doublefloat: {
    double d = ecl_double_float(x);
    if (signbit(d)) {
      s = -1;
      d = -d;
    }
    if (d == 0.0) {
      e = 0;
      x = ecl_make_fixnum(0);
    } else {
      d = frexp(d, &e);
      x = _ecl_double_to_integer(ldexp(d, DBL_MANT_DIG));
      e -= DBL_MANT_DIG;
    }
    break;
  }
  case t_singlefloat: {
    float d = ecl_single_float(x);
    if (signbit(d)) {
      s = -1;
      d = -d;
    }
    if (d == 0.0) {
      e = 0;
      x = ecl_make_fixnum(0);
    } else {
      d = frexpf(d, &e);
      x = _ecl_double_to_integer(ldexp(d, FLT_MANT_DIG));
      e -= FLT_MANT_DIG;
    }
    break;
  }
  default:
    FEwrong_type_only_arg(ecl_make_fixnum(/*INTEGER-DECODE-FLOAT*/440),x,ecl_make_fixnum(/*FLOAT*/376));
  }
  ecl_return3(the_env, x, ecl_make_fixnum(e), ecl_make_fixnum(s));
}


#line 385
cl_object cl_complex(cl_narg narg, cl_object r, ...)
{
#line 385

  #line 386
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 386
	cl_object i;
#line 386
	va_list ARGS;
	va_start(ARGS, r);
#line 386
	if (ecl_unlikely(narg < 1|| narg > 2)) FEwrong_num_arguments(ecl_make_fixnum(243));
#line 386
	if (narg > 1) {
#line 386
		i = va_arg(ARGS,cl_object);
#line 386
	} else {
#line 386
		i = ecl_make_fixnum(0);
#line 386
	}
#line 386
      /* INV: ecl_make_complex() checks types */
  {
#line 387
	#line 387
	cl_object __value0 = ecl_make_complex(r, i);
#line 387
	the_env->nvalues = 1;
#line 387
	the_env->values[0] = __value0;
#line 387
	va_end(ARGS);
#line 387
	return __value0;
#line 387
}

  }

cl_object
cl_realpart(cl_object x)
{
  switch (ecl_t_of(x)) {
  case t_fixnum:
  case t_bignum:
  case t_ratio:
  case t_singlefloat:
  case t_doublefloat:
  case t_longfloat:
    break;
  case t_complex:
    x = x->gencomplex.real;
    break;
#ifdef ECL_COMPLEX_FLOAT
  case t_csfloat: {
    float f = crealf(ecl_csfloat(x));
    x = ecl_make_single_float(f);
    break;
  }
  case t_cdfloat: {
    double f = creal(ecl_cdfloat(x));
    x = ecl_make_double_float(f);
    break;
  }
  case t_clfloat: {
    long double f = creall(ecl_clfloat(x));
    x = ecl_make_long_float(f);
    break;
  }
#endif
  default:
    FEwrong_type_only_arg(ecl_make_fixnum(/*REALPART*/707),x,ecl_make_fixnum(/*NUMBER*/608));
  }
  {
#line 424
	const cl_env_ptr the_env = ecl_process_env();
#line 424
	#line 424
	cl_object __value0 = x;
#line 424
	the_env->nvalues = 1;
#line 424
	the_env->values[0] = __value0;
#line 424
	#line 424
	return __value0;
#line 424
}
;
}

cl_object
cl_imagpart(cl_object x)
{
  switch (ecl_t_of(x)) {
  case t_fixnum:
  case t_bignum:
  case t_ratio:
    x = ecl_make_fixnum(0);
    break;
  case t_singlefloat:
    if (signbit(ecl_single_float(x)))
      x = cl_core.singlefloat_minus_zero;
    else
      x = cl_core.singlefloat_zero;
    break;
  case t_doublefloat:
    if (signbit(ecl_double_float(x)))
      x = cl_core.doublefloat_minus_zero;
    else
      x = cl_core.doublefloat_zero;
    break;
  case t_longfloat:
    if (signbit(ecl_long_float(x)))
      x = cl_core.longfloat_minus_zero;
    else
      x = cl_core.longfloat_zero;
    break;
  case t_complex:
    x = x->gencomplex.imag;
    break;
#ifdef ECL_COMPLEX_FLOAT
  case t_csfloat: {
    float f = cimagf(ecl_csfloat(x));
    x = ecl_make_single_float(f);
    break;
  }
  case t_cdfloat: {
    double f = cimag(ecl_cdfloat(x));
    x = ecl_make_double_float(f);
    break;
  }
  case t_clfloat: {
    long double f = cimagl(ecl_clfloat(x));
    x = ecl_make_long_float(f);
    break;
  }
#endif
  default:
    FEwrong_type_only_arg(ecl_make_fixnum(/*IMAGPART*/432),x,ecl_make_fixnum(/*NUMBER*/608));
  }
  {
#line 477
	const cl_env_ptr the_env = ecl_process_env();
#line 477
	#line 477
	cl_object __value0 = x;
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
