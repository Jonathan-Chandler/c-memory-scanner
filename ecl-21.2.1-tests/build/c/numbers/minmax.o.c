#line 1 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/c/numbers/minmax.d"
/* -*- Mode: C; c-basic-offset: 2; indent-tabs-mode: nil -*- */
/* vim: set filetype=c tabstop=2 shiftwidth=2 expandtab: */

/*
 * minmax.c - number sorting
 *
 * Copyright (c) 1984 Taiichi Yuasa and Masami Hagiya
 * Copyright (c) 1990 Giuseppe Attardi
 * Copyright (c) 2001 Juan Jose Garcia Ripoll
 *
 * See file 'LICENSE' for the copyright details.
 *
 */

#include <ecl/ecl.h>

#line 17
cl_object cl_max(cl_narg narg, cl_object max, ...)
{
#line 17

  #line 19
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 19
	ecl_va_list nums;
	ecl_va_start(nums, max, narg, 1);
#line 19
	if (ecl_unlikely(narg < 1)) FEwrong_num_arguments(ecl_make_fixnum(553));
#line 19
  /* INV: type check occurs in ecl_number_compare() for the rest of
     numbers, but for an unary argument it happens here. */
  if (narg-- == 1) {
    if (! ECL_REAL_TYPE_P(ecl_t_of(max))) {
      FEwrong_type_nth_arg(ecl_make_fixnum(/*MAX*/553), 1, max, ecl_make_fixnum(/*REAL*/705));
    }
  } else do {
      cl_object numi = ecl_va_arg(nums);
      if (ecl_lower(max, numi)
#ifdef ECL_IEEE_FP
          || ecl_float_nan_p(max)
#endif
          )
        max = numi;
    } while (--narg);
  {
#line 34
	#line 34
	cl_object __value0 = max;
#line 34
	the_env->nvalues = 1;
#line 34
	the_env->values[0] = __value0;
#line 34
	ecl_va_end(nums);
#line 34
	return __value0;
#line 34
}
;
  }

#line 37
cl_object cl_min(cl_narg narg, cl_object min, ...)
{
#line 37

  #line 39
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 39
	ecl_va_list nums;
	ecl_va_start(nums, min, narg, 1);
#line 39
	if (ecl_unlikely(narg < 1)) FEwrong_num_arguments(ecl_make_fixnum(559));
#line 39
  /* INV: type check occurs in ecl_number_compare() for the rest of
     numbers, but for an unary argument it happens here. */
  if (narg-- == 1) {
    if (! ECL_REAL_TYPE_P(ecl_t_of(min))) {
      FEwrong_type_nth_arg(ecl_make_fixnum(/*MIN*/559), 1, min, ecl_make_fixnum(/*REAL*/705));
    }
  } else do {
      cl_object numi = ecl_va_arg(nums);
      if (ecl_greater(min, numi)
#ifdef ECL_IEEE_FP
          || ecl_float_nan_p(min)
#endif
          )
        min = numi;
    } while (--narg);
  {
#line 54
	#line 54
	cl_object __value0 = min;
#line 54
	the_env->nvalues = 1;
#line 54
	the_env->values[0] = __value0;
#line 54
	ecl_va_end(nums);
#line 54
	return __value0;
#line 54
}
;
  }
