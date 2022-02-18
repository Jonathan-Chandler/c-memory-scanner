#line 1 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/c/numbers/conjugate.d"
/* -*- Mode: C; c-basic-offset: 2; indent-tabs-mode: nil -*- */
/* vim: set filetype=c tabstop=2 shiftwidth=2 expandtab: */

/*
 * conjugate.d - trascendental functions: conjugateine
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
cl_conjugate(cl_object x)
{
  {
#line 21
	const cl_env_ptr the_env = ecl_process_env();
#line 21
	#line 21
	cl_object __value0 = ecl_conjugate(x);
#line 21
	the_env->nvalues = 1;
#line 21
	the_env->values[0] = __value0;
#line 21
	#line 21
	return __value0;
#line 21
}
;
}

static cl_object
ecl_conjugate_real(cl_object x)
{
  return x;
}

static cl_object
ecl_conjugate_complex(cl_object x)
{
  return ecl_make_complex(x->gencomplex.real, ecl_negate(x->gencomplex.imag));
}

#ifdef ECL_COMPLEX_FLOAT
static cl_object
ecl_conjugate_csfloat(cl_object x)
{
  cl_object result = ecl_alloc_object(t_csfloat);
  ecl_csfloat(result) = conjf(ecl_csfloat(x));
  return result;
}

static cl_object
ecl_conjugate_cdfloat(cl_object x)
{
  cl_object result = ecl_alloc_object(t_cdfloat);
  ecl_cdfloat(result) = conj(ecl_cdfloat(x));
  return result;
}

static cl_object
ecl_conjugate_clfloat(cl_object x)
{
  cl_object result = ecl_alloc_object(t_clfloat);
  ecl_clfloat(result) = conjl(ecl_clfloat(x));
  return result;
}
#endif

MATH_DEF_DISPATCH1_NE(conjugate, ecl_make_fixnum(/*CONJUGATE*/251), ecl_make_fixnum(/*NUMBER*/608),
                      ecl_conjugate_real, ecl_conjugate_real, ecl_conjugate_real,
                      ecl_conjugate_real, ecl_conjugate_real,
                      ecl_conjugate_real,
                      ecl_conjugate_complex,
                      ecl_conjugate_csfloat, ecl_conjugate_cdfloat, ecl_conjugate_clfloat);
