#line 1 "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/src/c/num_arith.d"
/* -*- Mode: C; c-basic-offset: 2; indent-tabs-mode: nil -*- */
/* vim: set filetype=c tabstop=2 shiftwidth=2 expandtab: */

/*
 * num_arith.d - arithmetic operations
 *
 * Copyright (c) 1990 Giuseppe Attardi
 * Copyright (c) 2001 Juan Jose Garcia Ripoll
 *
 * See file 'LICENSE' for the copyright details.
 *
 */

#include <ecl/ecl.h>
#include <ecl/number.h>
#include <stdlib.h>
#include <ecl/impl/math_dispatch2.h>

cl_object
ecl_integer_divide(cl_object x, cl_object y)
{
  MATH_DISPATCH2_BEGIN(x,y) {
    CASE_FIXNUM_FIXNUM;
    if (y == ecl_make_fixnum(0)) {
      FEdivision_by_zero(x,y);
    }
    return ecl_make_fixnum(ecl_fixnum(x) / ecl_fixnum(y));
    CASE_FIXNUM_BIGNUM return _ecl_fix_divided_by_big(ecl_fixnum(x), y);
    CASE_BIGNUM_FIXNUM return _ecl_big_divided_by_fix(x, ecl_fixnum(y));
    CASE_BIGNUM_BIGNUM return _ecl_big_divided_by_big(x, y);
    CASE_UNKNOWN(ecl_make_fixnum(/*ROUND*/732),x,y,ecl_make_fixnum(/*INTEGER*/439));
  }
  MATH_DISPATCH2_END;
}

#line 36
cl_object cl_gcd(cl_narg narg, ...)
{
#line 36

  cl_object gcd;
#line 39
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 39
	ecl_va_list nums;
	ecl_va_start(nums, narg, narg, 0);
#line 39
	if (ecl_unlikely(narg < 0)) FEwrong_num_arguments(ecl_make_fixnum(401));
#line 39
  if (narg == 0) {
    {
#line 40
	#line 40
	cl_object __value0 = ecl_make_fixnum(0);
#line 40
	the_env->nvalues = 1;
#line 40
	the_env->values[0] = __value0;
#line 40
	ecl_va_end(nums);
#line 40
	return __value0;
#line 40
}
;
  }
  /* INV: ecl_gcd() checks types */
  gcd = ecl_va_arg(nums);
  if (narg == 1) {
    assert_type_integer(gcd);
    {
#line 46
	#line 46
	cl_object __value0 = (ecl_minusp(gcd) ? ecl_negate(gcd) : gcd);
#line 46
	the_env->nvalues = 1;
#line 46
	the_env->values[0] = __value0;
#line 46
	ecl_va_end(nums);
#line 46
	return __value0;
#line 46
}
;
  }
  while (--narg)
    gcd = ecl_gcd(gcd, ecl_va_arg(nums));
  {
#line 50
	#line 50
	cl_object __value0 = gcd;
#line 50
	the_env->nvalues = 1;
#line 50
	the_env->values[0] = __value0;
#line 50
	ecl_va_end(nums);
#line 50
	return __value0;
#line 50
}
;
}

cl_object
ecl_gcd(cl_object x, cl_object y)
{
  ECL_WITH_TEMP_BIGNUM(x_big,1);
  ECL_WITH_TEMP_BIGNUM(y_big,1);

  switch (ecl_t_of(x)) {
  case t_fixnum:
    _ecl_big_set_fixnum(x_big, ecl_fixnum(x));
    x = x_big;
  case t_bignum:
    break;
  default:
    FEwrong_type_nth_arg(ecl_make_fixnum(/*GCD*/401), 1, x, ecl_make_fixnum(/*INTEGER*/439));
  }
  switch (ecl_t_of(y)) {
  case t_fixnum:
    _ecl_big_set_fixnum(y_big, ecl_fixnum(y));
    y = y_big;
  case t_bignum:
    break;
  default:
    FEwrong_type_nth_arg(ecl_make_fixnum(/*GCD*/401), 2, y, ecl_make_fixnum(/*INTEGER*/439));
  }
  return _ecl_big_gcd(x, y);
}

#line 80
cl_object cl_lcm(cl_narg narg, ...)
{
#line 80

  cl_object lcm;
#line 83
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 83
	ecl_va_list nums;
	ecl_va_start(nums, narg, narg, 0);
#line 83
	if (ecl_unlikely(narg < 0)) FEwrong_num_arguments(ecl_make_fixnum(458));
#line 83
  if (narg == 0) {
    {
#line 84
	#line 84
	cl_object __value0 = ecl_make_fixnum(1);
#line 84
	the_env->nvalues = 1;
#line 84
	the_env->values[0] = __value0;
#line 84
	ecl_va_end(nums);
#line 84
	return __value0;
#line 84
}
;
  }
  /* INV: ecl_gcd() checks types. By placing `numi' before `lcm' in
     this call, we make sure that errors point to `numi' */
  lcm = ecl_va_arg(nums);
  assert_type_integer(lcm);
  while (narg-- > 1) {
    cl_object numi = ecl_va_arg(nums);
    cl_object t = ecl_times(lcm, numi);
    cl_object g = ecl_gcd(numi, lcm);
    if (g != ecl_make_fixnum(0))
      lcm = ecl_divide(t, g);
  }
  {
#line 97
	#line 97
	cl_object __value0 = (ecl_minusp(lcm) ? ecl_negate(lcm) : lcm);
#line 97
	the_env->nvalues = 1;
#line 97
	the_env->values[0] = __value0;
#line 97
	ecl_va_end(nums);
#line 97
	return __value0;
#line 97
}
;
}
