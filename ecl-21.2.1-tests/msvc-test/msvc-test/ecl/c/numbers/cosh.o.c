#line 1 "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/src/c/numbers/cosh.d"
/* -*- Mode: C; c-basic-offset: 2; indent-tabs-mode: nil -*- */
/* vim: set filetype=c tabstop=2 shiftwidth=2 expandtab: */

/*
 * ecl_constants.h - contstant values for all_symbols.d
 *
 * Copyright (c) 1984 Taiichi Yuasa and Masami Hagiya
 * Copyright (c) 1990 Giuseppe Attardi
 * Copyright (c) 2001 Juan Jose Garcia Ripoll
 *
 * See file 'LICENSE' for the copyright details.
 *
 */

#define ECL_INCLUDE_MATH_H
#include <ecl/ecl.h>
#include <ecl/internal.h>
#include <ecl/impl/math_dispatch.h>

#pragma STDC FENV_ACCESS ON

cl_object
cl_cosh(cl_object x)
{
  {
#line 25
	const cl_env_ptr the_env = ecl_process_env();
#line 25
	#line 25
	cl_object __value0 = ecl_cosh(x);
#line 25
	the_env->nvalues = 1;
#line 25
	the_env->values[0] = __value0;
#line 25
	#line 25
	return __value0;
#line 25
}
;
}

static cl_object
ecl_cosh_rational(cl_object x)
{
  return ecl_make_single_float(coshf(ecl_to_float(x)));
}

static cl_object
ecl_cosh_single_float(cl_object x)
{
  return ecl_make_single_float(coshf(ecl_single_float(x)));
}

static cl_object
ecl_cosh_double_float(cl_object x)
{
  return ecl_make_double_float(cosh(ecl_double_float(x)));
}

static cl_object
ecl_cosh_long_float(cl_object x)
{
  return ecl_make_long_float(coshl(ecl_long_float(x)));
}

static cl_object
ecl_cosh_complex(cl_object x)
{
  /*
    z = x + I y
    cosh(z) = (exp(z)+exp(-z))/2
    = (exp(x)*(cos(y)+Isin(y))+exp(-x)*(cos(y)-Isin(y)))/2
    = cosh(x)*cos(y) + Isinh(x)*sin(y);
  */
  cl_object dx = x->gencomplex.real;
  cl_object dy = x->gencomplex.imag;
  cl_object a = ecl_times(ecl_cosh(dx), ecl_cos(dy));
  cl_object b = ecl_times(ecl_sinh(dx), ecl_sin(dy));
  return ecl_make_complex(a, b);
}

#ifdef ECL_COMPLEX_FLOAT
static cl_object
ecl_cosh_csfloat(cl_object x)
{
  cl_object result = ecl_alloc_object(t_csfloat);
  ecl_csfloat(result) = ccoshf(ecl_csfloat(x));
  return result;
}

static cl_object
ecl_cosh_cdfloat(cl_object x)
{
  cl_object result = ecl_alloc_object(t_cdfloat);
  ecl_cdfloat(result) = ccosh(ecl_cdfloat(x));
  return result;
}

static cl_object
ecl_cosh_clfloat(cl_object x)
{
  cl_object result = ecl_alloc_object(t_clfloat);
  ecl_clfloat(result) = ccoshl(ecl_clfloat(x));
  return result;
}
#endif

MATH_DEF_DISPATCH1(cosh, ecl_make_fixnum(/*COSH*/267), ecl_make_fixnum(/*NUMBER*/608),
                   ecl_cosh_rational, ecl_cosh_rational, ecl_cosh_rational,
                   ecl_cosh_single_float, ecl_cosh_double_float, ecl_cosh_long_float,
                   ecl_cosh_complex,
                   ecl_cosh_csfloat, ecl_cosh_cdfloat, ecl_cosh_clfloat);
