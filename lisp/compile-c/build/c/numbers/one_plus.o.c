#line 1 "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/src/c/numbers/one_plus.d"
/* -*- Mode: C; c-basic-offset: 2; indent-tabs-mode: nil -*- */
/* vim: set filetype=c tabstop=2 shiftwidth=2 expandtab: */

/*
 * one_plus.d - implementation of CL:1+
 *
 * Copyright (c) 1984 Taiichi Yuasa and Masami Hagiya
 * Copyright (c) 1990 Giuseppe Attardi
 * Copyright (c) 2001 Juan Jose Garcia Ripoll
 *
 * See file 'LICENSE' for the copyright details.
 *
 */


#include <ecl/ecl.h>
#include <ecl/impl/math_dispatch.h>

/* INV: FLT_MAX + 1 == FLT_MAX
 *      DBL_MAX + 1 == DBL_MAX
 *      LDBL_MAX + 1 == LDBL_MAX
 * (no ECL_MATHERR_TEST needed) */

static cl_object
ecl_one_plus_fix(cl_object x)
{
  if (x == ecl_make_fixnum(MOST_POSITIVE_FIXNUM))
    return ecl_make_integer(MOST_POSITIVE_FIXNUM+1);
  return (cl_object)((cl_fixnum)x + ((cl_fixnum)ecl_make_fixnum(1) - ECL_FIXNUM_TAG));
}

static cl_object
ecl_one_plus_big(cl_object x)
{
  return ecl_plus(x, ecl_make_fixnum(1));
}

static cl_object
ecl_one_plus_ratio(cl_object x)
{
  return ecl_make_ratio(ecl_plus(x->ratio.num,x->ratio.den), x->ratio.den);
}

static cl_object
ecl_one_plus_single_float(cl_object x)
{
  return ecl_make_single_float(ecl_single_float(x) + 1);
}

static cl_object
ecl_one_plus_double_float(cl_object x)
{
  return ecl_make_double_float(ecl_double_float(x) + 1);
}

static cl_object
ecl_one_plus_long_float(cl_object x)
{
  return ecl_make_long_float(ecl_long_float(x) + 1);
}

static cl_object
ecl_one_plus_complex(cl_object x)
{
  return ecl_make_complex(ecl_one_plus(x->gencomplex.real),
                          x->gencomplex.imag);
}

#ifdef ECL_COMPLEX_FLOAT
static cl_object
ecl_one_plus_csfloat(cl_object x)
{
  return ecl_make_csfloat(ecl_csfloat(x) + 1);
}

static cl_object
ecl_one_plus_cdfloat(cl_object x)
{
  return ecl_make_cdfloat(ecl_cdfloat(x) + 1);
}

static cl_object
ecl_one_plus_clfloat(cl_object x)
{
  return ecl_make_clfloat(ecl_clfloat(x) + 1);
}
#endif

MATH_DEF_DISPATCH1_NE(one_plus, ecl_make_fixnum(/*1+*/72), ecl_make_fixnum(/*NUMBER*/608),
                      ecl_one_plus_fix, ecl_one_plus_big, ecl_one_plus_ratio,
                      ecl_one_plus_single_float, ecl_one_plus_double_float,
                      ecl_one_plus_long_float,
                      ecl_one_plus_complex,
                      ecl_one_plus_csfloat, ecl_one_plus_cdfloat, ecl_one_plus_clfloat);

/*  (1+ x)  */
cl_object
cl_1P(cl_object x)
{
  /* INV: type check is in ecl_one_plus() */
  {
#line 101
	const cl_env_ptr the_env = ecl_process_env();
#line 101
	#line 101
	cl_object __value0 = ecl_one_plus(x);
#line 101
	the_env->nvalues = 1;
#line 101
	the_env->values[0] = __value0;
#line 101
	#line 101
	return __value0;
#line 101
}
;
}
