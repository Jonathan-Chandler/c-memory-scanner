#line 1 "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/src/c/numbers/plusp.d"
/* -*- Mode: C; c-basic-offset: 2; indent-tabs-mode: nil -*- */
/* vim: set filetype=c tabstop=2 shiftwidth=2 expandtab: */

/*
 * plusp.d - implementation of CL:PLUSP
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

cl_object
cl_plusp(cl_object x)
{       /* INV: ecl_plusp()  checks type */
  {
#line 22
	const cl_env_ptr the_env = ecl_process_env();
#line 22
	#line 22
	cl_object __value0 = (ecl_plusp(x) ? ECL_T : ECL_NIL);
#line 22
	the_env->nvalues = 1;
#line 22
	the_env->values[0] = __value0;
#line 22
	#line 22
	return __value0;
#line 22
}
;
}

static int
ecl_plusp_fixnum(cl_object x)
{
  return ecl_fixnum_plusp(x);
}

static int
ecl_plusp_big(cl_object x)
{
  return _ecl_big_sign(x) > 0;
}

static int
ecl_plusp_ratio(cl_object x)
{
  return ecl_plusp(x->ratio.num);
}

static int
ecl_plusp_single_float(cl_object x)
{
  return ecl_single_float(x) > 0;
}

static int
ecl_plusp_double_float(cl_object x)
{
  return ecl_double_float(x) > 0;
}

static int ecl_plusp_long_float(cl_object x)
{
  return ecl_long_float(x) > 0;
}

MATH_DEF_DISPATCH1_BOOL(plusp, ecl_make_fixnum(/*PLUSP*/644), ecl_make_fixnum(/*REAL*/705),
                        ecl_plusp_fixnum, ecl_plusp_big, ecl_plusp_ratio,
                        ecl_plusp_single_float, ecl_plusp_double_float,
                        ecl_plusp_long_float,
                        pluspfailed,
                        pluspfailed, pluspfailed, pluspfailed)
