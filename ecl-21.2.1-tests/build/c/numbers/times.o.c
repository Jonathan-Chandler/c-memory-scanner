#line 1 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/c/numbers/times.d"
/* -*- Mode: C; c-basic-offset: 2; indent-tabs-mode: nil -*- */
/* vim: set filetype=c tabstop=2 shiftwidth=2 expandtab: */

/*
 * times.d - implementation of CL:*
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
#include <ecl/impl/math_dispatch2.h>

#pragma STDC FENV_ACCESS ON

#line 21
cl_object cl_X(cl_narg narg, ...)
{
#line 21

  cl_object prod = ecl_make_fixnum(1);
  #line 24
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 24
	ecl_va_list nums;
	ecl_va_start(nums, narg, narg, 0);
#line 24
	if (ecl_unlikely(narg < 0)) FEwrong_num_arguments(ecl_make_fixnum(20));
#line 24
  /* INV: type check in ecl_times() */
  while (narg--)
  prod = ecl_times(prod, ecl_va_arg(nums));
  {
#line 27
	#line 27
	cl_object __value0 = prod;
#line 27
	the_env->nvalues = 1;
#line 27
	the_env->values[0] = __value0;
#line 27
	ecl_va_end(nums);
#line 27
	return __value0;
#line 27
}
;
  }

cl_object
ecl_times(cl_object x, cl_object y)
{
  cl_object ret;
  ECL_MATHERR_CLEAR;

  MATH_DISPATCH2_BEGIN(x,y)
    {
      CASE_FIXNUM_FIXNUM {
        return _ecl_fix_times_fix(ecl_fixnum(x), ecl_fixnum(y));
      }
      CASE_FIXNUM_BIGNUM {
        return _ecl_big_times_fix(y, ecl_fixnum(x));
      }
      CASE_FIXNUM_RATIO;
      CASE_BIGNUM_RATIO {
        return ecl_make_ratio(ecl_times(x, y->ratio.num),
                              y->ratio.den);
      }
      CASE_FIXNUM_SINGLE_FLOAT {
        ret = ecl_make_single_float(ecl_fixnum(x) * ecl_single_float(y));
        break;
      }
      CASE_FIXNUM_DOUBLE_FLOAT {
        ret = ecl_make_double_float(ecl_fixnum(x) * ecl_double_float(y));
        break;
      }
      CASE_BIGNUM_FIXNUM {
        return _ecl_big_times_fix(x, ecl_fixnum(y));
      }
      CASE_BIGNUM_BIGNUM {
        return _ecl_big_times_big(x, y);
      }
      CASE_BIGNUM_SINGLE_FLOAT {
        ret = ecl_make_single_float(ecl_to_float(x) * ecl_single_float(y));
        break;
      }
      CASE_BIGNUM_DOUBLE_FLOAT {
        ret = ecl_make_double_float(ecl_to_double(x) * ecl_double_float(y));
        break;
      }
      CASE_RATIO_FIXNUM;
      CASE_RATIO_BIGNUM {
        cl_object z = ecl_times(x->ratio.num, y);
        return ecl_make_ratio(z, x->ratio.den);
      }
      CASE_RATIO_RATIO {
        cl_object num = ecl_times(x->ratio.num,y->ratio.num);
        cl_object den = ecl_times(x->ratio.den,y->ratio.den);
        return ecl_make_ratio(num, den);
      }
      CASE_RATIO_SINGLE_FLOAT {
        ret = ecl_make_single_float(ecl_to_float(x) * ecl_single_float(y));
        break;
      }
      CASE_RATIO_DOUBLE_FLOAT {
        ret = ecl_make_double_float(ecl_to_double(x) * ecl_double_float(y));
        break;
      }
      CASE_SINGLE_FLOAT_FIXNUM {
        ret = ecl_make_single_float(ecl_single_float(x) * ecl_fixnum(y));
        break;
      }
      CASE_SINGLE_FLOAT_BIGNUM;
      CASE_SINGLE_FLOAT_RATIO {
        ret = ecl_make_single_float(ecl_single_float(x) * ecl_to_float(y));
        break;
      }
      CASE_SINGLE_FLOAT_SINGLE_FLOAT {
        ret = ecl_make_single_float(ecl_single_float(x) * ecl_single_float(y));
        break;
      }
      CASE_SINGLE_FLOAT_DOUBLE_FLOAT {
        ret = ecl_make_double_float(ecl_single_float(x) * ecl_double_float(y));
        break;
      }
      CASE_DOUBLE_FLOAT_FIXNUM {
        ret = ecl_make_double_float(ecl_double_float(x) * ecl_fixnum(y));
        break;
      }
      CASE_DOUBLE_FLOAT_BIGNUM;
      CASE_DOUBLE_FLOAT_RATIO {
        ret = ecl_make_double_float(ecl_double_float(x) * ecl_to_double(y));
        break;
      }
      CASE_DOUBLE_FLOAT_SINGLE_FLOAT {
        ret = ecl_make_double_float(ecl_double_float(x) * ecl_single_float(y));
        break;
      }
      CASE_DOUBLE_FLOAT_DOUBLE_FLOAT {
        ret = ecl_make_double_float(ecl_double_float(x) * ecl_double_float(y));
        break;
      }
      CASE_FIXNUM_LONG_FLOAT {
        ret = ecl_make_long_float(ecl_fixnum(x) * ecl_long_float(y));
        break;
      }
      CASE_BIGNUM_LONG_FLOAT;
      CASE_RATIO_LONG_FLOAT {
        ret = ecl_make_long_float(ecl_to_long_double(x) * ecl_long_float(y));
        break;
      }
      CASE_SINGLE_FLOAT_LONG_FLOAT {
        ret = ecl_make_long_float(ecl_single_float(x) * ecl_long_float(y));
        break;
      }
      CASE_DOUBLE_FLOAT_LONG_FLOAT {
        ret = ecl_make_long_float(ecl_double_float(x) * ecl_long_float(y));
        break;
      }
      CASE_LONG_FLOAT_FIXNUM {
        ret = ecl_make_long_float(ecl_long_float(x) * ecl_fixnum(y));
        break;
      }
      CASE_LONG_FLOAT_BIGNUM;
      CASE_LONG_FLOAT_RATIO {
        ret = ecl_make_long_float(ecl_long_float(x) * ecl_to_long_double(y));
        break;
      }
      CASE_LONG_FLOAT_SINGLE_FLOAT {
        ret = ecl_make_long_float(ecl_long_float(x) * ecl_single_float(y));
        break;
      }
      CASE_LONG_FLOAT_DOUBLE_FLOAT {
        ret = ecl_make_long_float(ecl_long_float(x) * ecl_double_float(y));
        break;
      }
      CASE_LONG_FLOAT_LONG_FLOAT {
        ret = ecl_make_long_float(ecl_long_float(x) * ecl_long_float(y));
        break;
      }
      CASE_LONG_FLOAT_COMPLEX {
        goto COMPLEX_Y;
      }
      CASE_COMPLEX_LONG_FLOAT;  {
        goto COMPLEX_X;
      }
      CASE_COMPLEX_FIXNUM;
      /* fallthrough */
      CASE_COMPLEX_BIGNUM;
      /* fallthrough */
      CASE_COMPLEX_RATIO;
      /* fallthrough */
      CASE_COMPLEX_SINGLE_FLOAT;
      /* fallthrough */
      CASE_COMPLEX_DOUBLE_FLOAT; COMPLEX_X: {
        cl_object aux = x;
        x = y; y = aux;
        goto COMPLEX_Y;
      }
      CASE_BIGNUM_COMPLEX;
      CASE_RATIO_COMPLEX;
      CASE_SINGLE_FLOAT_COMPLEX;
      CASE_DOUBLE_FLOAT_COMPLEX;
      CASE_FIXNUM_COMPLEX {
      COMPLEX_Y:
        return ecl_make_complex(ecl_times(x, y->gencomplex.real),
                                ecl_times(x, y->gencomplex.imag));
      }
      CASE_COMPLEX_COMPLEX {
        cl_object z11 = ecl_times(x->gencomplex.real, y->gencomplex.real);
        cl_object z12 = ecl_times(x->gencomplex.imag, y->gencomplex.imag);
        cl_object z21 = ecl_times(x->gencomplex.imag, y->gencomplex.real);
        cl_object z22 = ecl_times(x->gencomplex.real, y->gencomplex.imag);
        return ecl_make_complex(ecl_minus(z11, z12), ecl_plus(z21, z22));
      }
#ifdef ECL_COMPLEX_FLOAT
      /* upgraded type csfloat */
      CASE_CSFLOAT_FIXNUM;
      CASE_CSFLOAT_BIGNUM;
      CASE_CSFLOAT_RATIO;
      CASE_CSFLOAT_SINGLE_FLOAT;
      CASE_CSFLOAT_COMPLEX;

      CASE_FIXNUM_CSFLOAT;
      CASE_BIGNUM_CSFLOAT;
      CASE_RATIO_CSFLOAT;
      CASE_SINGLE_FLOAT_CSFLOAT;
      CASE_COMPLEX_CSFLOAT;
      CASE_CSFLOAT_CSFLOAT {
        ret = ecl_alloc_object(t_csfloat);
        ecl_csfloat(ret) = ecl_to_csfloat(x) * ecl_to_csfloat(y);
        break;
      }
      /* upgraded type cdfloat */
      CASE_CSFLOAT_DOUBLE_FLOAT;
      CASE_DOUBLE_FLOAT_CSFLOAT;

      CASE_CDFLOAT_FIXNUM;
      CASE_CDFLOAT_BIGNUM;
      CASE_CDFLOAT_RATIO;
      CASE_CDFLOAT_SINGLE_FLOAT;
      CASE_CDFLOAT_DOUBLE_FLOAT;
      CASE_CDFLOAT_COMPLEX;
      CASE_CDFLOAT_CSFLOAT;

      CASE_FIXNUM_CDFLOAT;
      CASE_BIGNUM_CDFLOAT;
      CASE_RATIO_CDFLOAT;
      CASE_SINGLE_FLOAT_CDFLOAT;
      CASE_DOUBLE_FLOAT_CDFLOAT;
      CASE_COMPLEX_CDFLOAT;
      CASE_CSFLOAT_CDFLOAT;
      CASE_CDFLOAT_CDFLOAT {
        ret = ecl_alloc_object(t_cdfloat);
        ecl_cdfloat(ret) = ecl_to_cdfloat(x) * ecl_to_cdfloat(y);
        break;
      }
      /* upgraded type clfloat */
      CASE_CSFLOAT_LONG_FLOAT;
      CASE_LONG_FLOAT_CSFLOAT;
      CASE_CDFLOAT_LONG_FLOAT;
      CASE_LONG_FLOAT_CDFLOAT;

      CASE_CLFLOAT_FIXNUM;
      CASE_CLFLOAT_BIGNUM;
      CASE_CLFLOAT_RATIO;
      CASE_CLFLOAT_SINGLE_FLOAT;
      CASE_CLFLOAT_DOUBLE_FLOAT;
      CASE_CLFLOAT_LONG_FLOAT;
      CASE_CLFLOAT_COMPLEX;
      CASE_CLFLOAT_CSFLOAT;
      CASE_CLFLOAT_CDFLOAT;

      CASE_FIXNUM_CLFLOAT;
      CASE_BIGNUM_CLFLOAT;
      CASE_RATIO_CLFLOAT;
      CASE_SINGLE_FLOAT_CLFLOAT;
      CASE_DOUBLE_FLOAT_CLFLOAT;
      CASE_LONG_FLOAT_CLFLOAT;
      CASE_COMPLEX_CLFLOAT;
      CASE_CSFLOAT_CLFLOAT;
      CASE_CDFLOAT_CLFLOAT;
      CASE_CLFLOAT_CLFLOAT
        {
          ret = ecl_alloc_object(t_clfloat);
          ecl_clfloat(ret) = ecl_to_clfloat(x) * ecl_to_clfloat(y);
          break;
        }
#endif
      CASE_UNKNOWN(ecl_make_fixnum(/***/20),x,y,ecl_make_fixnum(/*NUMBER*/608));
    }
  MATH_DISPATCH2_END;

  ECL_MATHERR_TEST;
  return ret;
}