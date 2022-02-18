#line 1 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/c/numbers/number_equalp.d"
/* -*- Mode: C; c-basic-offset: 2; indent-tabs-mode: nil -*- */
/* vim: set filetype=c tabstop=2 shiftwidth=2 expandtab: */

/*
 * number_compare.c - number comparison and sorting
 *
 * Copyright (c) 1984 Taiichi Yuasa and Masami Hagiya
 * Copyright (c) 1990 Giuseppe Attardi
 * Copyright (c) 2001 Juan Jose Garcia Ripoll
 *
 * See file 'LICENSE' for the copyright details.
 *
 */


#include <ecl/ecl.h>
#include <ecl/impl/math_dispatch2.h>
#include "numbers/float_fix_compare.d"

#line 20
cl_object cl_E(cl_narg narg, cl_object num, ...)
{
#line 20

  int i;
  #line 23
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 23
	ecl_va_list nums;
	ecl_va_start(nums, num, narg, 1);
#line 23
	if (ecl_unlikely(narg < 1)) FEwrong_num_arguments(ecl_make_fixnum(76));
#line 23
  /* INV: For >= 2 arguments, ecl_number_equalp() performs checks */
  if (!ECL_NUMBER_TYPE_P(ecl_t_of(num))) {
    FEwrong_type_nth_arg(ecl_make_fixnum(/*=*/76), 1, num, ecl_make_fixnum(/*NUMBER*/608));
  }
  for (i = 1; i < narg; i++) {
    if (!ecl_number_equalp(num, ecl_va_arg(nums))) {
      {
#line 29
	#line 29
	cl_object __value0 = ECL_NIL;
#line 29
	the_env->nvalues = 1;
#line 29
	the_env->values[0] = __value0;
#line 29
	ecl_va_end(nums);
#line 29
	return __value0;
#line 29
}
;
    }
  }
  {
#line 32
	#line 32
	cl_object __value0 = ECL_T;
#line 32
	the_env->nvalues = 1;
#line 32
	the_env->values[0] = __value0;
#line 32
	ecl_va_end(nums);
#line 32
	return __value0;
#line 32
}
;
  }

/* Returns 1 if both numbers compare to equal */
int
ecl_number_equalp(cl_object x, cl_object y)
{
  /* INV: (= fixnum bignum) => 0 */
  /* INV: (= fixnum ratio) => 0 */
  /* INV: (= bignum ratio) => 0 */
  MATH_DISPATCH2_BEGIN(x,y) {
    /* rational x rational */
    CASE_FIXNUM_FIXNUM       { return x == y; }
    CASE_BIGNUM_BIGNUM       { return _ecl_big_compare(x,y) == 0; }
    CASE_RATIO_RATIO         { return (ecl_number_equalp(x->ratio.num, y->ratio.num) &&
                                       ecl_number_equalp(x->ratio.den, y->ratio.den)); }
    CASE_FIXNUM_BIGNUM;
    CASE_FIXNUM_RATIO;
    CASE_BIGNUM_FIXNUM;
    CASE_BIGNUM_RATIO;
    CASE_RATIO_FIXNUM;
    CASE_RATIO_BIGNUM        { return 0; }
    /* rational x float */
    CASE_FIXNUM_SINGLE_FLOAT { return double_fix_compare(ecl_fixnum(x), ecl_single_float(y)) == 0; }
    CASE_SINGLE_FLOAT_FIXNUM { return double_fix_compare(ecl_fixnum(y), ecl_single_float(x)) == 0; }
    CASE_FIXNUM_DOUBLE_FLOAT { return double_fix_compare(ecl_fixnum(x), ecl_double_float(y)) == 0; }
    CASE_DOUBLE_FLOAT_FIXNUM { return double_fix_compare(ecl_fixnum(y), ecl_double_float(x)) == 0; }
    CASE_FIXNUM_LONG_FLOAT   { return long_double_fix_compare(ecl_fixnum(x), ecl_long_float(y)) == 0; }
    CASE_LONG_FLOAT_FIXNUM   { return long_double_fix_compare(ecl_fixnum(y), ecl_long_float(x)) == 0; }
    CASE_BIGNUM_SINGLE_FLOAT;
    CASE_BIGNUM_DOUBLE_FLOAT;
    CASE_RATIO_SINGLE_FLOAT;
    CASE_RATIO_DOUBLE_FLOAT  {
#ifdef ECL_IEEE_FP
      if (ecl_float_nan_p(y) || ecl_float_infinity_p(y)) {
        return 0;
      }
#endif
      return ecl_number_equalp(x, cl_rational(y)); }
    CASE_SINGLE_FLOAT_BIGNUM;
    CASE_DOUBLE_FLOAT_BIGNUM;
    CASE_SINGLE_FLOAT_RATIO;
    CASE_DOUBLE_FLOAT_RATIO  {
#ifdef ECL_IEEE_FP
      if (ecl_float_nan_p(x) || ecl_float_infinity_p(x)) {
        return 0;
      }
#endif
      return ecl_number_equalp(cl_rational(x), y); }
    CASE_BIGNUM_LONG_FLOAT;
    CASE_RATIO_LONG_FLOAT {
#ifdef ECL_IEEE_FP
      if (ecl_float_nan_p(y) || ecl_float_infinity_p(y)) {
        return 0;
      }
#endif
      return ecl_number_equalp(x, cl_rational(y)); }
    CASE_LONG_FLOAT_BIGNUM;
    CASE_LONG_FLOAT_RATIO {
#ifdef ECL_IEEE_FP
      if (ecl_float_nan_p(x) || ecl_float_infinity_p(x)) {
        return 0;
      }
#endif
      return ecl_number_equalp(y, cl_rational(x)); }
    /* float x float */
    CASE_SINGLE_FLOAT_SINGLE_FLOAT { return ecl_single_float(x) == ecl_single_float(y); }
    CASE_SINGLE_FLOAT_DOUBLE_FLOAT { return ecl_single_float(x) == ecl_double_float(y); }
    CASE_DOUBLE_FLOAT_SINGLE_FLOAT { return ecl_double_float(x) == ecl_single_float(y); }
    CASE_DOUBLE_FLOAT_DOUBLE_FLOAT { return ecl_double_float(x) == ecl_double_float(y); }
    CASE_SINGLE_FLOAT_LONG_FLOAT { return ecl_single_float(x) == ecl_long_float(y); }
    CASE_LONG_FLOAT_SINGLE_FLOAT { return ecl_long_float(x) == ecl_single_float(y); }
    CASE_DOUBLE_FLOAT_LONG_FLOAT { return ecl_double_float(x) == ecl_long_float(y); }
    CASE_LONG_FLOAT_DOUBLE_FLOAT { return ecl_long_float(x) == ecl_double_float(y); }
    CASE_LONG_FLOAT_LONG_FLOAT   { return ecl_long_float(x) == ecl_long_float(y); }
    /* complex x real ; c?float x real */
    CASE_COMPLEX_FIXNUM;
    CASE_COMPLEX_BIGNUM;
    CASE_COMPLEX_RATIO;
    CASE_COMPLEX_SINGLE_FLOAT;
    CASE_COMPLEX_DOUBLE_FLOAT;
#ifdef ECL_COMPLEX_FLOAT
    CASE_CSFLOAT_FIXNUM;
    CASE_CSFLOAT_BIGNUM;
    CASE_CSFLOAT_RATIO;
    CASE_CSFLOAT_SINGLE_FLOAT;
    CASE_CSFLOAT_DOUBLE_FLOAT;
    CASE_CDFLOAT_FIXNUM;
    CASE_CDFLOAT_BIGNUM;
    CASE_CDFLOAT_RATIO;
    CASE_CDFLOAT_SINGLE_FLOAT;
    CASE_CDFLOAT_DOUBLE_FLOAT;
    CASE_CLFLOAT_FIXNUM;
    CASE_CLFLOAT_BIGNUM;
    CASE_CLFLOAT_RATIO;
    CASE_CLFLOAT_SINGLE_FLOAT;
    CASE_CLFLOAT_DOUBLE_FLOAT;
#endif
    CASE_COMPLEX_LONG_FLOAT;
#ifdef ECL_COMPLEX_FLOAT
    CASE_CSFLOAT_LONG_FLOAT;
    CASE_CDFLOAT_LONG_FLOAT;
    CASE_CLFLOAT_LONG_FLOAT;
#endif
    {
      if (!ecl_zerop(cl_imagpart(x))) { return 0; }
      return ecl_number_equalp(cl_realpart(x), y);
    }
    CASE_FIXNUM_COMPLEX;
    CASE_BIGNUM_COMPLEX;
    CASE_RATIO_COMPLEX;
    CASE_SINGLE_FLOAT_COMPLEX;
    CASE_DOUBLE_FLOAT_COMPLEX;
#ifdef ECL_COMPLEX_FLOAT
    CASE_FIXNUM_CSFLOAT;
    CASE_BIGNUM_CSFLOAT;
    CASE_RATIO_CSFLOAT;
    CASE_SINGLE_FLOAT_CSFLOAT;
    CASE_DOUBLE_FLOAT_CSFLOAT;
    CASE_FIXNUM_CDFLOAT;
    CASE_BIGNUM_CDFLOAT;
    CASE_RATIO_CDFLOAT;
    CASE_SINGLE_FLOAT_CDFLOAT;
    CASE_DOUBLE_FLOAT_CDFLOAT;
    CASE_FIXNUM_CLFLOAT;
    CASE_BIGNUM_CLFLOAT;
    CASE_RATIO_CLFLOAT;
    CASE_SINGLE_FLOAT_CLFLOAT;
    CASE_DOUBLE_FLOAT_CLFLOAT;
#endif
    CASE_LONG_FLOAT_COMPLEX;
#ifdef ECL_COMPLEX_FLOAT
    CASE_LONG_FLOAT_CSFLOAT;
    CASE_LONG_FLOAT_CDFLOAT;
    CASE_LONG_FLOAT_CLFLOAT;
#endif
    {
      if (!ecl_zerop(cl_imagpart(y))) { return 0; }
      return ecl_number_equalp(cl_realpart(y), x);
    }
    /* complex x complex */
    CASE_COMPLEX_COMPLEX {
      return (ecl_number_equalp(x->gencomplex.real, y->gencomplex.real) &&
              ecl_number_equalp(x->gencomplex.imag, y->gencomplex.imag));
    }
#ifdef ECL_COMPLEX_FLOAT
    /* complex x c?float */
    CASE_COMPLEX_CSFLOAT;
    CASE_COMPLEX_CDFLOAT;
    CASE_COMPLEX_CLFLOAT {
      cl_object aux = ecl_alloc_object(t_csfloat);
      ecl_csfloat(aux) = ecl_to_float(x->gencomplex.real) + I * ecl_to_float(x->gencomplex.imag);
      return ecl_number_equalp(aux, y);
    }
    CASE_CSFLOAT_COMPLEX;
    CASE_CDFLOAT_COMPLEX;
    CASE_CLFLOAT_COMPLEX {
      cl_object aux = ecl_alloc_object(t_csfloat);
      ecl_csfloat(aux) = ecl_to_float(y->gencomplex.real) + I * ecl_to_float(y->gencomplex.imag);
      return ecl_number_equalp(x, aux);
    }
    /* c?float x c?float */
    CASE_CSFLOAT_CSFLOAT { return ecl_csfloat(x) == ecl_csfloat(y); }
    CASE_CSFLOAT_CDFLOAT { return ecl_csfloat(x) == ecl_cdfloat(y); }
    CASE_CDFLOAT_CSFLOAT { return ecl_cdfloat(x) == ecl_csfloat(y); }
    CASE_CDFLOAT_CDFLOAT { return ecl_cdfloat(x) == ecl_cdfloat(y); }
    CASE_CSFLOAT_CLFLOAT { return ecl_csfloat(x) == ecl_clfloat(y); }
    CASE_CLFLOAT_CSFLOAT { return ecl_clfloat(x) == ecl_csfloat(y); }
    CASE_CDFLOAT_CLFLOAT { return ecl_cdfloat(x) == ecl_clfloat(y); }
    CASE_CLFLOAT_CDFLOAT { return ecl_clfloat(x) == ecl_cdfloat(y); }
    CASE_CLFLOAT_CLFLOAT { return ecl_clfloat(x) == ecl_clfloat(y); }
#endif
    CASE_UNKNOWN(ecl_make_fixnum(/*=*/76),x,y,ecl_make_fixnum(/*NUMBER*/608));
  }
  MATH_DISPATCH2_END;;
}

#line 209
cl_object cl_NE(cl_narg narg, ...)
{
#line 209

  int i, j;
  #line 212
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 212
	cl_object numi;
#line 212
	ecl_va_list nums;
	ecl_va_start(nums, narg, narg, 0);
#line 212
	if (ecl_unlikely(narg < 0)) FEwrong_num_arguments(ecl_make_fixnum(26));
#line 212
	numi = ECL_NIL;
#line 212
  if (narg == 0)
  FEwrong_num_arguments_anonym();
  numi = ecl_va_arg(nums);
  for (i = 2; i<=narg; i++) {
    ecl_va_list numb;
    ecl_va_start(numb, narg, narg, 0);
    numi = ecl_va_arg(nums);
    for (j = 1; j<i; j++)
      if (ecl_number_equalp(numi, ecl_va_arg(numb))) {
        ecl_va_end(numb);
        {
#line 222
	#line 222
	cl_object __value0 = ECL_NIL;
#line 222
	the_env->nvalues = 1;
#line 222
	the_env->values[0] = __value0;
#line 222
	ecl_va_end(nums);
#line 222
	return __value0;
#line 222
}
;
      }
    ecl_va_end(numb);
  }
  {
#line 226
	#line 226
	cl_object __value0 = ECL_T;
#line 226
	the_env->nvalues = 1;
#line 226
	the_env->values[0] = __value0;
#line 226
	ecl_va_end(nums);
#line 226
	return __value0;
#line 226
}
;
  }
