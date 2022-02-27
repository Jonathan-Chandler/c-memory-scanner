#line 1 "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/src/c/character.d"
/* -*- Mode: C; c-basic-offset: 2; indent-tabs-mode: nil -*- */
/* vim: set filetype=c tabstop=2 shiftwidth=2 expandtab: */

/*
 * character.d - character routines
 *
 * Copyright (c) 1984 Taiichi Yuasa and Masami Hagiya
 * Copyright (c) 1990 Giuseppe Attardi
 * Copyright (c) 2015 Daniel Kochmański
 *
 * See file 'LICENSE' for the copyright details.
 *
 */

#include <stdio.h>
#include <ecl/ecl.h>

#include "char_ctype.d"

ecl_character
ecl_char_code(cl_object c)
{
  if (ecl_unlikely(!ECL_CHARACTERP(c)))
    FEwrong_type_only_arg(ecl_make_fixnum(/*CHAR-CODE*/206), c, ecl_make_fixnum(/*CHARACTER*/224));
  return ECL_CHAR_CODE(c);
}

ecl_base_char
ecl_base_char_code(cl_object c)
{
#ifdef ECL_UNICODE
  if (ECL_CHARACTERP(c)) {
    cl_fixnum code = ECL_CHAR_CODE(c);
    if (code <= 255) {
      return (int)code;
    }
  }
  FEwrong_type_only_arg(ecl_make_fixnum(/*CHAR-CODE*/206), c, ecl_make_fixnum(/*BASE-CHAR*/122));
#else
  return ecl_char_code(c);
#endif
}

cl_object
cl_standard_char_p(cl_object c)
{
  /* INV: ecl_char_code() checks the type */
  cl_fixnum i = ecl_char_code(c);
  {
#line 49
	const cl_env_ptr the_env = ecl_process_env();
#line 49
	#line 49
	cl_object __value0 = (ecl_standard_char_p(i)? ECL_T : ECL_NIL);
#line 49
	the_env->nvalues = 1;
#line 49
	the_env->values[0] = __value0;
#line 49
	#line 49
	return __value0;
#line 49
}
;
}

bool
ecl_standard_char_p(ecl_character code)
{
  return ((' ' <= code) && (code < '\177')) || (code == '\n');
}

bool
ecl_base_char_p(ecl_character c)
{
  return c <= 255;
}

cl_object
cl_graphic_char_p(cl_object c)
{
  /* INV: ecl_char_code() checks the type */
  {
#line 68
	const cl_env_ptr the_env = ecl_process_env();
#line 68
	#line 68
	cl_object __value0 = (ecl_graphic_char_p(ecl_char_code(c))? ECL_T : ECL_NIL);
#line 68
	the_env->nvalues = 1;
#line 68
	the_env->values[0] = __value0;
#line 68
	#line 68
	return __value0;
#line 68
}
;
}

cl_object
cl_alpha_char_p(cl_object c)
{
  /* INV: ecl_char_code() checks the type */
  {
#line 75
	const cl_env_ptr the_env = ecl_process_env();
#line 75
	#line 75
	cl_object __value0 = (ecl_alpha_char_p(ecl_char_code(c))? ECL_T : ECL_NIL);
#line 75
	the_env->nvalues = 1;
#line 75
	the_env->values[0] = __value0;
#line 75
	#line 75
	return __value0;
#line 75
}
;
}

cl_object
cl_upper_case_p(cl_object c)
{
  /* INV: ecl_char_code() checks the type */
  {
#line 82
	const cl_env_ptr the_env = ecl_process_env();
#line 82
	#line 82
	cl_object __value0 = (ecl_upper_case_p(ecl_char_code(c))? ECL_T : ECL_NIL);
#line 82
	the_env->nvalues = 1;
#line 82
	the_env->values[0] = __value0;
#line 82
	#line 82
	return __value0;
#line 82
}
;
}

cl_object
cl_lower_case_p(cl_object c)
{
  /* INV: ecl_char_code() checks the type */
  {
#line 89
	const cl_env_ptr the_env = ecl_process_env();
#line 89
	#line 89
	cl_object __value0 = (ecl_lower_case_p(ecl_char_code(c))? ECL_T : ECL_NIL);
#line 89
	the_env->nvalues = 1;
#line 89
	the_env->values[0] = __value0;
#line 89
	#line 89
	return __value0;
#line 89
}
;
}

cl_object
cl_both_case_p(cl_object c)
{
  /* INV: ecl_char_code() checks the type */
  {
#line 96
	const cl_env_ptr the_env = ecl_process_env();
#line 96
	#line 96
	cl_object __value0 = (ecl_both_case_p(ecl_char_code(c))? ECL_T : ECL_NIL);
#line 96
	the_env->nvalues = 1;
#line 96
	the_env->values[0] = __value0;
#line 96
	#line 96
	return __value0;
#line 96
}
;
}

int
ecl_string_case(cl_object s)
{
  /* Returns 1 if string is all uppercase, -1 if all lowercase, and 0 if mixed case */
  int upcase;
  cl_index i;
        
  switch (ecl_t_of(s)) {
#ifdef ECL_UNICODE
  case t_string:
#endif
  case t_base_string:
    for (i = 0, upcase = 0; i < s->base_string.dim; i++) {
      ecl_character c = ecl_char(s, i);

      if (ecl_upper_case_p(c)) {
        if (upcase < 0)
          return 0;
        upcase = +1;
      } else if (ecl_lower_case_p(c)) {
        if (upcase > 0)
          return 0;
        upcase = -1;
      }
    }
    break;
  default:
    FEwrong_type_argument(ecl_make_fixnum(/*STRING*/807), s);
  }
  return upcase;
}

#line 131
cl_object cl_digit_char_p(cl_narg narg, cl_object c, ...)
{
#line 131

#line 132
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 132
	cl_object radix;
#line 132
	va_list ARGS;
	va_start(ARGS, c);
#line 132
	if (ecl_unlikely(narg < 1|| narg > 2)) FEwrong_num_arguments(ecl_make_fixnum(304));
#line 132
	if (narg > 1) {
#line 132
		radix = va_arg(ARGS,cl_object);
#line 132
	} else {
#line 132
		radix = ecl_make_fixnum(10);
#line 132
	}
#line 132
{
    cl_fixnum basis, value;
    if (ecl_unlikely(!ECL_FIXNUMP(radix) ||
                     ecl_fixnum_lower(radix, ecl_make_fixnum(2)) ||
                     ecl_fixnum_greater(radix, ecl_make_fixnum(36)))) {
      FEwrong_type_nth_arg(ecl_make_fixnum(/*DIGIT-CHAR-P*/304), 2, radix,
                           ecl_make_integer_type(ecl_make_fixnum(2),
                                                 ecl_make_fixnum(36)));
    }
    basis = ecl_fixnum(radix);
    value = ecl_digitp(ecl_char_code(c), basis);
    {
#line 143
	#line 143
	cl_object __value0 = ((value < 0)? ECL_NIL: ecl_make_fixnum(value));
#line 143
	the_env->nvalues = 1;
#line 143
	the_env->values[0] = __value0;
#line 143
	va_end(ARGS);
#line 143
	return __value0;
#line 143
}
;
} }

/*
  Ecl_Digitp(i, r) returns the weight of code i
  as a digit of radix r, which must be 1 < r <= 36.
  If i is not a digit, -1 is returned.
*/
int
ecl_digitp(ecl_character i, int r)
{
  if (('0' <= i) && (i <= '9') && (i < '0' + r))
    return i - '0';
  if (('A' <= i) && (10 < r) && (i < 'A' + (r - 10)))
    return i - 'A' + 10;
  if (('a' <= i) && (10 < r) && (i < 'a' + (r - 10)))
    return i - 'a' + 10;
#ifdef ECL_UNICODE
  if (i > 255) {
    int number = ucd_decimal_digit(i);
    if (number < r)
      return number;
  }
#endif
  return -1;
}

cl_object
cl_alphanumericp(cl_object c)
{
  /* INV: ecl_char_code() checks type of `c' */
  cl_fixnum i = ecl_char_code(c);
  {
#line 175
	const cl_env_ptr the_env = ecl_process_env();
#line 175
	#line 175
	cl_object __value0 = (ecl_alphanumericp(i)? ECL_T : ECL_NIL);
#line 175
	the_env->nvalues = 1;
#line 175
	the_env->values[0] = __value0;
#line 175
	#line 175
	return __value0;
#line 175
}
;
}

#line 178
cl_object cl_charE(cl_narg narg, cl_object c, ...)
{
#line 178

#line 179
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 179
	ecl_va_list cs;
	ecl_va_start(cs, c, narg, 1);
#line 179
	if (ecl_unlikely(narg < 1)) FEwrong_num_arguments(ecl_make_fixnum(221));
#line 179
{
  /* INV: ecl_char_eq() checks types of `c' and `cs' */
  while (--narg) {
    if (!ecl_char_eq(c, ecl_va_arg(cs))) {
      {
#line 183
	#line 183
	cl_object __value0 = ECL_NIL;
#line 183
	the_env->nvalues = 1;
#line 183
	the_env->values[0] = __value0;
#line 183
	ecl_va_end(cs);
#line 183
	return __value0;
#line 183
}
;
    }
  }
  {
#line 186
	#line 186
	cl_object __value0 = ECL_T;
#line 186
	the_env->nvalues = 1;
#line 186
	the_env->values[0] = __value0;
#line 186
	ecl_va_end(cs);
#line 186
	return __value0;
#line 186
}
;
} }

bool
ecl_char_eq(cl_object x, cl_object y)
{
  return ecl_char_code(x) == ecl_char_code(y);
}

#line 195
cl_object cl_charNE(cl_narg narg, ...)
{
#line 195

  int i, j;
  cl_object c;
#line 198
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 198
	ecl_va_list cs;
	ecl_va_start(cs, narg, narg, 0);
#line 198
	if (ecl_unlikely(narg < 0)) FEwrong_num_arguments(ecl_make_fixnum(218));
#line 198
{
  /* INV: ecl_char_eq() checks types of its arguments */
  if (narg == 0)
    FEwrong_num_arguments(ecl_make_fixnum(/*CHAR/=*/218));
  c = ecl_va_arg(cs);
  for (i = 2; i<=narg; i++) {
    ecl_va_list ds;
    ecl_va_start(ds, narg, narg, 0);
    c = ecl_va_arg(cs);
    for (j = 1; j<i; j++)
      if (ecl_char_eq(ecl_va_arg(ds), c)) {
        ecl_va_end(ds);
        {
#line 210
	#line 210
	cl_object __value0 = ECL_NIL;
#line 210
	the_env->nvalues = 1;
#line 210
	the_env->values[0] = __value0;
#line 210
	ecl_va_end(cs);
#line 210
	return __value0;
#line 210
}
;
      }
    ecl_va_end(ds);
  }
  {
#line 214
	#line 214
	cl_object __value0 = ECL_T;
#line 214
	the_env->nvalues = 1;
#line 214
	the_env->values[0] = __value0;
#line 214
	ecl_va_end(cs);
#line 214
	return __value0;
#line 214
}
;
} }

static cl_object
Lchar_cmp(cl_env_ptr env, cl_narg narg, int s, int t, ecl_va_list args)
{
  cl_object c, d;

  if (narg == 0)
    FEwrong_num_arguments_anonym();
  c = ecl_va_arg(args);
  for (; --narg; c = d) {
    d = ecl_va_arg(args);
    if (s*ecl_char_cmp(d, c) < t)
      ecl_return1(env, ECL_NIL);
  }
  ecl_return1(env, ECL_T);
}

int
ecl_char_cmp(cl_object x, cl_object y)
{
  /* ecl_char_code(x) returns an integer which is well in the range
   * of positive fixnums. Therefore, this subtraction never
   * oveflows. */
  return ecl_char_code(x) - ecl_char_code(y);
}

#line 242
cl_object cl_charL(cl_narg narg, ...)
{
#line 242

  #line 244
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 244
	ecl_va_list args;
	ecl_va_start(args, narg, narg, 0);
#line 244
	if (ecl_unlikely(narg < 0)) FEwrong_num_arguments(ecl_make_fixnum(219));
#line 244
  {
#line 244
	#line 244
	cl_object __value0 = Lchar_cmp(the_env, narg, 1, 1, args);
#line 244
	the_env->nvalues = 1;
#line 244
	the_env->values[0] = __value0;
#line 244
	ecl_va_end(args);
#line 244
	return __value0;
#line 244
}
;
  }

#line 247
cl_object cl_charG(cl_narg narg, ...)
{
#line 247

  #line 249
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 249
	ecl_va_list args;
	ecl_va_start(args, narg, narg, 0);
#line 249
	if (ecl_unlikely(narg < 0)) FEwrong_num_arguments(ecl_make_fixnum(222));
#line 249
  {
#line 249
	#line 249
	cl_object __value0 = Lchar_cmp(the_env, narg,-1, 1, args);
#line 249
	the_env->nvalues = 1;
#line 249
	the_env->values[0] = __value0;
#line 249
	ecl_va_end(args);
#line 249
	return __value0;
#line 249
}
;
  }

#line 252
cl_object cl_charLE(cl_narg narg, ...)
{
#line 252

  #line 254
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 254
	ecl_va_list args;
	ecl_va_start(args, narg, narg, 0);
#line 254
	if (ecl_unlikely(narg < 0)) FEwrong_num_arguments(ecl_make_fixnum(220));
#line 254
  {
#line 254
	#line 254
	cl_object __value0 = Lchar_cmp(the_env, narg, 1, 0, args);
#line 254
	the_env->nvalues = 1;
#line 254
	the_env->values[0] = __value0;
#line 254
	ecl_va_end(args);
#line 254
	return __value0;
#line 254
}
;
  }

#line 257
cl_object cl_charGE(cl_narg narg, ...)
{
#line 257

  #line 259
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 259
	ecl_va_list args;
	ecl_va_start(args, narg, narg, 0);
#line 259
	if (ecl_unlikely(narg < 0)) FEwrong_num_arguments(ecl_make_fixnum(223));
#line 259
  {
#line 259
	#line 259
	cl_object __value0 = Lchar_cmp(the_env, narg,-1, 0, args);
#line 259
	the_env->nvalues = 1;
#line 259
	the_env->values[0] = __value0;
#line 259
	ecl_va_end(args);
#line 259
	return __value0;
#line 259
}
;
  }

#line 262
cl_object cl_char_equal(cl_narg narg, cl_object c, ...)
{
#line 262

  int i;
#line 264
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 264
	ecl_va_list cs;
	ecl_va_start(cs, c, narg, 1);
#line 264
	if (ecl_unlikely(narg < 1)) FEwrong_num_arguments(ecl_make_fixnum(209));
#line 264
{
  /* INV: ecl_char_equal() checks the type of its arguments */
  for (narg--, i = 0;  i < narg;  i++) {
    if (!ecl_char_equal(c, ecl_va_arg(cs))) {
      {
#line 268
	#line 268
	cl_object __value0 = ECL_NIL;
#line 268
	the_env->nvalues = 1;
#line 268
	the_env->values[0] = __value0;
#line 268
	ecl_va_end(cs);
#line 268
	return __value0;
#line 268
}
;
    }
  }
  {
#line 271
	#line 271
	cl_object __value0 = ECL_T;
#line 271
	the_env->nvalues = 1;
#line 271
	the_env->values[0] = __value0;
#line 271
	ecl_va_end(cs);
#line 271
	return __value0;
#line 271
}
;
} }

#define char_equal_code(x) ecl_char_upcase(ecl_char_code(x))

bool
ecl_char_equal(cl_object x, cl_object y)
{
  return char_equal_code(x) == char_equal_code(y);
}

#line 282
cl_object cl_char_not_equal(cl_narg narg, ...)
{
#line 282

  int i, j;
  cl_object c;
#line 285
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 285
	ecl_va_list cs;
	ecl_va_start(cs, narg, narg, 0);
#line 285
	if (ecl_unlikely(narg < 0)) FEwrong_num_arguments(ecl_make_fixnum(214));
#line 285
{
  /* INV: ecl_char_equal() checks the type of its arguments */
  if (narg == 0)
  FEwrong_num_arguments(ecl_make_fixnum(/*CHAR-NOT-EQUAL*/214));
  c = ecl_va_arg(cs);
  for (i = 2;  i<=narg;  i++) {
    ecl_va_list ds;
    ecl_va_start(ds, narg, narg, 0);
    c = ecl_va_arg(cs);
    for (j=1;  j<i;  j++)
      if (ecl_char_equal(c, ecl_va_arg(ds))) {
        ecl_va_end(ds);
        {
#line 297
	#line 297
	cl_object __value0 = ECL_NIL;
#line 297
	the_env->nvalues = 1;
#line 297
	the_env->values[0] = __value0;
#line 297
	ecl_va_end(cs);
#line 297
	return __value0;
#line 297
}
;
      }
  }
  {
#line 300
	#line 300
	cl_object __value0 = ECL_T;
#line 300
	the_env->nvalues = 1;
#line 300
	the_env->values[0] = __value0;
#line 300
	ecl_va_end(cs);
#line 300
	return __value0;
#line 300
}
;
} }

static cl_object
Lchar_compare(cl_env_ptr env, cl_narg narg, int s, int t, ecl_va_list args)
{
  cl_object c, d;

  /* INV: ecl_char_compare() checks the types of its arguments */
  if (narg == 0)
    FEwrong_num_arguments_anonym();
  c = ecl_va_arg(args);
  for (; --narg; c = d) {
    d = ecl_va_arg(args);
    if (s*ecl_char_compare(d, c) < t)
      ecl_return1(env, ECL_NIL);
  }
  ecl_return1(env, ECL_T);
}

int
ecl_char_compare(cl_object x, cl_object y)
{
  cl_fixnum i = char_equal_code(x);
  cl_fixnum j = char_equal_code(y);

  if (i < j)
    return(-1);
  else if (i == j)
    return(0);
  else
    return(1);
}

#line 334
cl_object cl_char_lessp(cl_narg narg, ...)
{
#line 334

  #line 336
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 336
	ecl_va_list args;
	ecl_va_start(args, narg, narg, 0);
#line 336
	if (ecl_unlikely(narg < 0)) FEwrong_num_arguments(ecl_make_fixnum(212));
#line 336
  {
#line 336
	#line 336
	cl_object __value0 = Lchar_compare(the_env, narg, 1, 1, args);
#line 336
	the_env->nvalues = 1;
#line 336
	the_env->values[0] = __value0;
#line 336
	ecl_va_end(args);
#line 336
	return __value0;
#line 336
}
;
  }

#line 339
cl_object cl_char_greaterp(cl_narg narg, ...)
{
#line 339

  #line 341
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 341
	ecl_va_list args;
	ecl_va_start(args, narg, narg, 0);
#line 341
	if (ecl_unlikely(narg < 0)) FEwrong_num_arguments(ecl_make_fixnum(210));
#line 341
  {
#line 341
	#line 341
	cl_object __value0 = Lchar_compare(the_env, narg,-1, 1, args);
#line 341
	the_env->nvalues = 1;
#line 341
	the_env->values[0] = __value0;
#line 341
	ecl_va_end(args);
#line 341
	return __value0;
#line 341
}
;
  }

#line 344
cl_object cl_char_not_greaterp(cl_narg narg, ...)
{
#line 344

  #line 346
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 346
	ecl_va_list args;
	ecl_va_start(args, narg, narg, 0);
#line 346
	if (ecl_unlikely(narg < 0)) FEwrong_num_arguments(ecl_make_fixnum(215));
#line 346
  {
#line 346
	#line 346
	cl_object __value0 = Lchar_compare(the_env, narg, 1, 0, args);
#line 346
	the_env->nvalues = 1;
#line 346
	the_env->values[0] = __value0;
#line 346
	ecl_va_end(args);
#line 346
	return __value0;
#line 346
}
;
  }

#line 349
cl_object cl_char_not_lessp(cl_narg narg, ...)
{
#line 349

  #line 351
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 351
	ecl_va_list args;
	ecl_va_start(args, narg, narg, 0);
#line 351
	if (ecl_unlikely(narg < 0)) FEwrong_num_arguments(ecl_make_fixnum(216));
#line 351
  {
#line 351
	#line 351
	cl_object __value0 = Lchar_compare(the_env, narg,-1, 0, args);
#line 351
	the_env->nvalues = 1;
#line 351
	the_env->values[0] = __value0;
#line 351
	ecl_va_end(args);
#line 351
	return __value0;
#line 351
}
;
  }


cl_object
cl_character(cl_object x)
{
  switch (ecl_t_of(x)) {
  case t_character:
    break;
  case t_symbol:
    return cl_character(x->symbol.name);
#ifdef ECL_UNICODE
  case t_string:
    if (x->string.fillp == 1) {
      x = ECL_CODE_CHAR(x->string.self[0]);
      break;
    }
    goto ERROR;
#endif
  case t_base_string:
    if (x->base_string.fillp == 1) {
      x = ECL_CODE_CHAR(x->base_string.self[0]);
      break;
    }
  default: ERROR:
    FEwrong_type_nth_arg
      (ecl_make_fixnum(/*CHARACTER*/224),
       1, x,
       ecl_read_from_cstring("(OR CHARACTER SYMBOL (ARRAY CHARACTER (1)) (ARRAY BASE-CHAR (1)))"));
  }
  {
#line 382
	const cl_env_ptr the_env = ecl_process_env();
#line 382
	#line 382
	cl_object __value0 = x;
#line 382
	the_env->nvalues = 1;
#line 382
	the_env->values[0] = __value0;
#line 382
	#line 382
	return __value0;
#line 382
}
;
}

cl_object
cl_char_code(cl_object c)
{
  /* INV: ecl_char_code() checks the type of `c' */
  {
#line 389
	const cl_env_ptr the_env = ecl_process_env();
#line 389
	#line 389
	cl_object __value0 = ecl_make_fixnum(ecl_char_code(c));
#line 389
	the_env->nvalues = 1;
#line 389
	the_env->values[0] = __value0;
#line 389
	#line 389
	return __value0;
#line 389
}
;
}

cl_object
cl_code_char(cl_object c)
{
  cl_fixnum fc;

  switch (ecl_t_of(c)) {
  case t_fixnum:
    fc = ecl_fixnum(c);
    if (fc < ECL_CHAR_CODE_LIMIT && fc >= 0) {
      c = ECL_CODE_CHAR(fc);
      break;
    }
  case t_bignum:
    c = ECL_NIL;
    break;
  default:
    FEwrong_type_only_arg(ecl_make_fixnum(/*CODE-CHAR*/232), c, ecl_make_fixnum(/*INTEGER*/439));
  }
  {
#line 410
	const cl_env_ptr the_env = ecl_process_env();
#line 410
	#line 410
	cl_object __value0 = c;
#line 410
	the_env->nvalues = 1;
#line 410
	the_env->values[0] = __value0;
#line 410
	#line 410
	return __value0;
#line 410
}
;
}

cl_object
cl_char_upcase(cl_object c)
{
  /* INV: ecl_char_code() checks the type of `c' */
  cl_fixnum code = ecl_char_code(c);
  {
#line 418
	const cl_env_ptr the_env = ecl_process_env();
#line 418
	#line 418
	cl_object __value0 = ECL_CODE_CHAR(ecl_char_upcase(code));
#line 418
	the_env->nvalues = 1;
#line 418
	the_env->values[0] = __value0;
#line 418
	#line 418
	return __value0;
#line 418
}
;
}

cl_object
cl_char_downcase(cl_object c)
{
  /* INV: ecl_char_code() checks the type of `c' */
  cl_fixnum code = ecl_char_code(c);
  {
#line 426
	const cl_env_ptr the_env = ecl_process_env();
#line 426
	#line 426
	cl_object __value0 = ECL_CODE_CHAR(ecl_char_downcase(code));
#line 426
	the_env->nvalues = 1;
#line 426
	the_env->values[0] = __value0;
#line 426
	#line 426
	return __value0;
#line 426
}
;
}

#line 429
cl_object cl_digit_char(cl_narg narg, cl_object weight, ...)
{
#line 429

#line 430
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 430
	cl_object radix;
#line 430
	va_list ARGS;
	va_start(ARGS, weight);
#line 430
	if (ecl_unlikely(narg < 1|| narg > 2)) FEwrong_num_arguments(ecl_make_fixnum(303));
#line 430
	if (narg > 1) {
#line 430
		radix = va_arg(ARGS,cl_object);
#line 430
	} else {
#line 430
		radix = ecl_make_fixnum(10);
#line 430
	}
#line 430
{
    cl_fixnum basis;
    cl_object output = ECL_NIL;
    if (ecl_unlikely(!ECL_FIXNUMP(radix) ||
                     ecl_fixnum_lower(radix, ecl_make_fixnum(2)) ||
                     ecl_fixnum_greater(radix, ecl_make_fixnum(36)))) {
      FEwrong_type_nth_arg(ecl_make_fixnum(/*DIGIT-CHAR*/303), 2, radix,
                           ecl_make_integer_type(ecl_make_fixnum(2),
                                                 ecl_make_fixnum(36)));
    }
    basis = ecl_fixnum(radix);
    switch (ecl_t_of(weight)) {
    case t_fixnum: {
      cl_fixnum value = ecl_fixnum(weight);
      if (value >= 0) {
        int dw = ecl_digit_char(value, basis);
        if (dw >= 0) {
          output = ECL_CODE_CHAR(dw);
        }
      }
      break;
    }
    case t_bignum:
      break;
    default:
      FEwrong_type_nth_arg(ecl_make_fixnum(/*DIGIT-CHAR*/303),1,weight,ecl_make_fixnum(/*INTEGER*/439));
    }
    {
#line 457
	#line 457
	cl_object __value0 = output;
#line 457
	the_env->nvalues = 1;
#line 457
	the_env->values[0] = __value0;
#line 457
	va_end(ARGS);
#line 457
	return __value0;
#line 457
}
;
} }

short
ecl_digit_char(cl_fixnum w, cl_fixnum r)
{
  if (r < 2 || r > 36 || w < 0 || w >= r)
    return(-1);
  if (w < 10)
    return(w + '0');
  else
    return(w - 10 + 'A');
}

cl_object
cl_char_int(cl_object c)
{
  const cl_env_ptr the_env = ecl_process_env();
  /* INV: ecl_char_code() checks the type of `c' */
  ecl_return1(the_env, ecl_make_fixnum(ecl_char_code(c)));
}

/* here we give every character an implicit name of the form 'u#' where # is a hexadecimal number,
   corresponding to a unicode code point.
   #\u14ea should work, for example
*/

cl_object
cl_char_name(cl_object c)
{
  ecl_character code = ecl_char_code(c);
  cl_object output;
  if (code <= 127) {
    output = ecl_gethash_safe(ecl_make_fixnum(code), cl_core.char_names, ECL_NIL);
#ifdef ECL_UNICODE
  } else if (!Null(output = _ecl_ucd_code_to_name(code))) {
    (void)0;
#endif
  } else {
    ecl_base_char name[8];
    ecl_base_char *start;
    name[7] = 0;
    name[6] = ecl_digit_char(code & 0xF, 16); code >>= 4;
    name[5] = ecl_digit_char(code & 0xF, 16); code >>= 4;
    name[4] = ecl_digit_char(code & 0xF, 16); code >>= 4;
    name[3] = ecl_digit_char(code & 0xF, 16); code >>= 4;
    if (code == 0) {
      start = name + 2;
    } else {
      name[2] = ecl_digit_char(code & 0xF, 16); code >>= 4;
      name[1] = ecl_digit_char(code & 0xF, 16);
      start = name;
    }
    start[0] = 'U';
    output = ecl_make_simple_base_string((const char*)start,-1);
  }
  {
#line 513
	const cl_env_ptr the_env = ecl_process_env();
#line 513
	#line 513
	cl_object __value0 = output;
#line 513
	the_env->nvalues = 1;
#line 513
	the_env->values[0] = __value0;
#line 513
	#line 513
	return __value0;
#line 513
}
;
}

cl_object
cl_name_char(cl_object name)
{
  const cl_env_ptr the_env = ecl_process_env();
  cl_object c;
  cl_index l;
  name = cl_string(name);
  c = ecl_gethash_safe(name, cl_core.char_names, ECL_NIL);
  if (c != ECL_NIL) {
    ecl_return1(the_env, ECL_CODE_CHAR(ecl_fixnum(c)));
  }
#ifdef ECL_UNICODE
  c = _ecl_ucd_name_to_code(name);
  if (c != ECL_NIL) {
    ecl_return1(the_env, cl_code_char(c));
  }
#endif
  if (ecl_stringp(name) && (l = ecl_length(name))) {
    c = cl_char(name, ecl_make_fixnum(0));
    if (l == 1) {
      (void)0;
    } else if (c != ECL_CODE_CHAR('u') && c != ECL_CODE_CHAR('U')) {
      c = ECL_NIL;
    } else {
      cl_index used_l;
      cl_index end = name->base_string.fillp;
      cl_index real_end = end;
      c = ecl_parse_integer(name, 1, end, &real_end, 16);
      used_l = real_end;
      if (!ECL_FIXNUMP(c) || (used_l == (l - 1))) {
        c = ECL_NIL;
      } else {
        c = ECL_CODE_CHAR(ecl_fixnum(c));
      }
    }
  }
  ecl_return1(the_env, c);
}
