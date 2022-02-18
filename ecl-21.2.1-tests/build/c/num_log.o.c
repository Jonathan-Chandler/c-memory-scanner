#line 1 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/c/num_log.d"
/* -*- Mode: C; c-basic-offset: 2; indent-tabs-mode: nil -*- */
/* vim: set filetype=c tabstop=2 shiftwidth=2 expandtab: */

/*
 * num_log.c - logical operations on numbers
 *
 * Copyright (c) 1984 Taiichi Yuasa and Masami Hagiya
 * Copyright (c) 1990 Giuseppe Attardi
 * Copyright (c) 2001 Juan Jose Garcia Ripoll
 *
 * See file 'LICENSE' for the copyright details.
 *
 */

#include <ecl/ecl.h>
#include <stdlib.h>
#include <ecl/internal.h>

/*
 * BIT OPERATIONS FOR FIXNUMS
 */

static cl_fixnum
ior_op(cl_fixnum i, cl_fixnum j)
{
  return(i | j);
}

static cl_fixnum
xor_op(cl_fixnum i, cl_fixnum j)
{
  return(i ^ j);
}

static cl_fixnum
and_op(cl_fixnum i, cl_fixnum j)
{
  return(i & j);
}

static cl_fixnum
eqv_op(cl_fixnum i, cl_fixnum j)
{
  return(~(i ^ j));
}

static cl_fixnum
nand_op(cl_fixnum i, cl_fixnum j)
{
  return(~(i & j));
}

static cl_fixnum
nor_op(cl_fixnum i, cl_fixnum j)
{
  return(~(i | j));
}

static cl_fixnum
andc1_op(cl_fixnum i, cl_fixnum j)
{
  return((~i) & j);
}

static cl_fixnum
andc2_op(cl_fixnum i, cl_fixnum j)
{
  return(i & (~j));
}

static cl_fixnum
orc1_op(cl_fixnum i, cl_fixnum j)
{
  return((~i) | j);
}

static cl_fixnum
orc2_op(cl_fixnum i, cl_fixnum j)
{
  return(i | (~j));
}

static cl_fixnum
b_clr_op(cl_fixnum i, cl_fixnum j)
{
  return(0);
}

static cl_fixnum
b_set_op(cl_fixnum i, cl_fixnum j)
{
  return(-1);
}

static cl_fixnum
b_1_op(cl_fixnum i, cl_fixnum j)
{
  return(i);
}

static cl_fixnum
b_2_op(cl_fixnum i, cl_fixnum j)
{
  return(j);
}

static cl_fixnum
b_c1_op(cl_fixnum i, cl_fixnum j)
{
  return(~i);
}

static cl_fixnum
b_c2_op(cl_fixnum i, cl_fixnum j)
{
  return(~j);
}

typedef cl_fixnum (*bit_operator)(cl_fixnum, cl_fixnum);

static bit_operator fixnum_operations[16] = {
  b_clr_op,
  and_op,
  andc2_op,
  b_1_op,
  andc1_op,
  b_2_op,
  xor_op,
  ior_op,
  nor_op,
  eqv_op,
  b_c2_op,
  orc2_op,
  b_c1_op,
  orc1_op,
  nand_op,
  b_set_op};


static cl_object
log_op(cl_narg narg, int op, ecl_va_list ARGS)
{
  cl_object x, y;
  /* FIXME! This can be optimized */
  x = ecl_va_arg(ARGS);
  if (narg-- == 1) {
    assert_type_integer(x);
  } else {
    do {
      y = ecl_va_arg(ARGS);
      x = ecl_boole(op, x, y);
    } while (--narg);
  }
  return x;
}

cl_object
ecl_boole(int op, cl_object x, cl_object y)
{
  switch (ecl_t_of(x)) {
  case t_fixnum:
    switch (ecl_t_of(y)) {
    case t_fixnum: {
      cl_fixnum z = fixnum_operations[op](ecl_fixnum(x), ecl_fixnum(y));
      return ecl_make_fixnum(z);
    }
    case t_bignum: {
      cl_object x_copy = _ecl_big_register0();
      _ecl_big_set_fixnum(x_copy, ecl_fixnum(x));
      (_ecl_big_boole_operator(op))(x_copy, x_copy, y);
      return _ecl_big_register_normalize(x_copy);
    }
    default:
      FEwrong_type_nth_arg(ecl_make_fixnum(/*BOOLE*/140), 2, y, ecl_make_fixnum(/*INTEGER*/439));
    }
    break;
  case t_bignum: {
    cl_object x_copy = _ecl_big_register0();
    switch (ecl_t_of(y)) {
    case t_fixnum: {
      cl_object z = _ecl_big_register1();
      _ecl_big_set_fixnum(z,ecl_fixnum(y));
      (_ecl_big_boole_operator(op))(x_copy, x, z);
      _ecl_big_register_free(z);
      break;
    }
    case t_bignum:
      (_ecl_big_boole_operator(op))(x_copy, x, y);
      break;
    default:
      FEwrong_type_nth_arg(ecl_make_fixnum(/*BOOLE*/140), 2, y, ecl_make_fixnum(/*INTEGER*/439));
    }
    return _ecl_big_register_normalize(x_copy);
  }
  default:
    FEwrong_type_nth_arg(ecl_make_fixnum(/*BOOLE*/140), 1, x, ecl_make_fixnum(/*INTEGER*/439));
  }
  return x;
}

cl_object
cl_lognot(cl_object x)
{
  return cl_logxor(2,x,ecl_make_fixnum(-1));
}

static cl_fixnum
count_bits(cl_object x)
{
  cl_fixnum count;

  switch (ecl_t_of(x)) {
  case t_fixnum: {
    cl_fixnum i = ecl_fixnum(x);
    cl_fixnum j = (i < 0) ? ~i : i;
    for (count=0 ; j ; j >>= 1)
      if (j & 1) count++;
    break;
  }
  case t_bignum:
    if (_ecl_big_sign(x) >= 0)
      count = mpz_popcount(x->big.big_num);
    else {
      cl_object z = _ecl_big_register0();
      mpz_com(z->big.big_num, x->big.big_num);
      count = mpz_popcount(z->big.big_num);
      _ecl_big_register_free(z);
    }
    break;
  default:
    FEwrong_type_only_arg(ecl_make_fixnum(/*LOGCOUNT*/498), x, ecl_make_fixnum(/*INTEGER*/439));
  }
  return count;
}

/*
  Left shift if w > 0, right shift if w < 0.
*/
cl_object
ecl_ash(cl_object x, cl_fixnum w)
{
  cl_object y;

  if (w == 0)
    return(x);
  y = _ecl_big_register0();
  if (w < 0) {
    cl_index bits = -w;
    if (ECL_FIXNUMP(x)) {
      /* The result of shifting a number further than the number
       * of digits it has is unpredictable in C. For instance, GCC
       * on intel masks out all bits of "bits" beyond the 5 and
       * it may happen that a shift of 37 becomes a shift of 5.
       * Furthermore, in general, shifting negative numbers leads
       * to implementation-specific results :-/
       */
      cl_fixnum y = ecl_fixnum(x);
      if (bits >= ECL_FIXNUM_BITS) {
        y = (y < 0)? -1 : 0;
      } else {
        y >>= bits;
      }
      return ecl_make_fixnum(y);
    }
    mpz_div_2exp(y->big.big_num, x->big.big_num, bits);
  } else {
    if (ECL_FIXNUMP(x)) {
      _ecl_big_set_fixnum(y, ecl_fixnum(x));
      x = y;
    }
    mpz_mul_2exp(y->big.big_num, x->big.big_num, (unsigned long)w);
  }
  return _ecl_big_register_normalize(y);
}

int
ecl_fixnum_bit_length(cl_fixnum i)
{
  int count;
  if (i < 0)
    i = ~i;
  for (count = 0; i && (count < ECL_FIXNUM_BITS); i >>= 1, count++)
    ;
  return count;
}

#line 287
cl_object cl_logior(cl_narg narg, ...)
{
#line 287

#line 289
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 289
	ecl_va_list nums;
	ecl_va_start(nums, narg, narg, 0);
#line 289
	if (ecl_unlikely(narg < 0)) FEwrong_num_arguments(ecl_make_fixnum(502));
#line 289
  if (narg == 0)
  {
#line 290
	#line 290
	cl_object __value0 = ecl_make_fixnum(0);
#line 290
	the_env->nvalues = 1;
#line 290
	the_env->values[0] = __value0;
#line 290
	ecl_va_end(nums);
#line 290
	return __value0;
#line 290
}

  /* INV: log_op() checks types and outputs first argument as default. */
  {
#line 292
	#line 292
	cl_object __value0 = log_op(narg, ECL_BOOLIOR, nums);
#line 292
	the_env->nvalues = 1;
#line 292
	the_env->values[0] = __value0;
#line 292
	ecl_va_end(nums);
#line 292
	return __value0;
#line 292
}
;
}

#line 295
cl_object cl_logxor(cl_narg narg, ...)
{
#line 295

#line 297
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 297
	ecl_va_list nums;
	ecl_va_start(nums, narg, narg, 0);
#line 297
	if (ecl_unlikely(narg < 0)) FEwrong_num_arguments(ecl_make_fixnum(509));
#line 297
  if (narg == 0) {
    {
#line 298
	#line 298
	cl_object __value0 = ecl_make_fixnum(0);
#line 298
	the_env->nvalues = 1;
#line 298
	the_env->values[0] = __value0;
#line 298
	ecl_va_end(nums);
#line 298
	return __value0;
#line 298
}
;
  }
  /* INV: log_op() checks types and outputs first argument as default. */
  {
#line 301
	#line 301
	cl_object __value0 = log_op(narg, ECL_BOOLXOR, nums);
#line 301
	the_env->nvalues = 1;
#line 301
	the_env->values[0] = __value0;
#line 301
	ecl_va_end(nums);
#line 301
	return __value0;
#line 301
}
;
}

#line 304
cl_object cl_logand(cl_narg narg, ...)
{
#line 304

#line 306
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 306
	ecl_va_list nums;
	ecl_va_start(nums, narg, narg, 0);
#line 306
	if (ecl_unlikely(narg < 0)) FEwrong_num_arguments(ecl_make_fixnum(494));
#line 306
  if (narg == 0) {
    {
#line 307
	#line 307
	cl_object __value0 = ecl_make_fixnum(-1);
#line 307
	the_env->nvalues = 1;
#line 307
	the_env->values[0] = __value0;
#line 307
	ecl_va_end(nums);
#line 307
	return __value0;
#line 307
}
;
  }
  /* INV: log_op() checks types and outputs first argument as default. */
  {
#line 310
	#line 310
	cl_object __value0 = log_op(narg, ECL_BOOLAND, nums);
#line 310
	the_env->nvalues = 1;
#line 310
	the_env->values[0] = __value0;
#line 310
	ecl_va_end(nums);
#line 310
	return __value0;
#line 310
}
;
}

#line 313
cl_object cl_logeqv(cl_narg narg, ...)
{
#line 313

#line 315
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 315
	ecl_va_list nums;
	ecl_va_start(nums, narg, narg, 0);
#line 315
	if (ecl_unlikely(narg < 0)) FEwrong_num_arguments(ecl_make_fixnum(499));
#line 315
  if (narg == 0) {
    {
#line 316
	#line 316
	cl_object __value0 = ecl_make_fixnum(-1);
#line 316
	the_env->nvalues = 1;
#line 316
	the_env->values[0] = __value0;
#line 316
	ecl_va_end(nums);
#line 316
	return __value0;
#line 316
}
;
  }
  /* INV: log_op() checks types and outputs first argument as default. */
  {
#line 319
	#line 319
	cl_object __value0 = log_op(narg, ECL_BOOLEQV, nums);
#line 319
	the_env->nvalues = 1;
#line 319
	the_env->values[0] = __value0;
#line 319
	ecl_va_end(nums);
#line 319
	return __value0;
#line 319
}
;
}

cl_object
cl_lognand(cl_object x, cl_object y)
{
  {
#line 325
	const cl_env_ptr the_env = ecl_process_env();
#line 325
	#line 325
	cl_object __value0 = ecl_boole(ECL_BOOLNAND, x, y);
#line 325
	the_env->nvalues = 1;
#line 325
	the_env->values[0] = __value0;
#line 325
	#line 325
	return __value0;
#line 325
}
;
}

cl_object
cl_lognor(cl_object x, cl_object y)
{
  {
#line 331
	const cl_env_ptr the_env = ecl_process_env();
#line 331
	#line 331
	cl_object __value0 = ecl_boole(ECL_BOOLNOR, x, y);
#line 331
	the_env->nvalues = 1;
#line 331
	the_env->values[0] = __value0;
#line 331
	#line 331
	return __value0;
#line 331
}
;
}

cl_object
cl_logandc1(cl_object x, cl_object y)
{
  {
#line 337
	const cl_env_ptr the_env = ecl_process_env();
#line 337
	#line 337
	cl_object __value0 = ecl_boole(ECL_BOOLANDC1, x, y);
#line 337
	the_env->nvalues = 1;
#line 337
	the_env->values[0] = __value0;
#line 337
	#line 337
	return __value0;
#line 337
}
;
}

cl_object
cl_logandc2(cl_object x, cl_object y)
{
  {
#line 343
	const cl_env_ptr the_env = ecl_process_env();
#line 343
	#line 343
	cl_object __value0 = ecl_boole(ECL_BOOLANDC2, x, y);
#line 343
	the_env->nvalues = 1;
#line 343
	the_env->values[0] = __value0;
#line 343
	#line 343
	return __value0;
#line 343
}
;
}

cl_object
cl_logorc1(cl_object x, cl_object y)
{
  {
#line 349
	const cl_env_ptr the_env = ecl_process_env();
#line 349
	#line 349
	cl_object __value0 = ecl_boole(ECL_BOOLORC1, x, y);
#line 349
	the_env->nvalues = 1;
#line 349
	the_env->values[0] = __value0;
#line 349
	#line 349
	return __value0;
#line 349
}
;
}

cl_object
cl_logorc2(cl_object x, cl_object y)
{
  {
#line 355
	const cl_env_ptr the_env = ecl_process_env();
#line 355
	#line 355
	cl_object __value0 = ecl_boole(ECL_BOOLORC2, x, y);
#line 355
	the_env->nvalues = 1;
#line 355
	the_env->values[0] = __value0;
#line 355
	#line 355
	return __value0;
#line 355
}
;
}

static int
coerce_to_logical_operator(cl_object o)
{
  cl_fixnum op;
  op = ecl_to_fix(o);
  if (op < 0 || op > ECL_BOOLSET)
    FEerror("~S is an invalid logical operator.", 1, o);
  return op;
}

cl_object
cl_boole(cl_object o, cl_object x, cl_object y)
{
  /* INV: log_op2() checks types */
  {
#line 372
	const cl_env_ptr the_env = ecl_process_env();
#line 372
	#line 372
	cl_object __value0 = ecl_boole(coerce_to_logical_operator(o), x, y);
#line 372
	the_env->nvalues = 1;
#line 372
	the_env->values[0] = __value0;
#line 372
	#line 372
	return __value0;
#line 372
}
;
}

cl_object
cl_logbitp(cl_object p, cl_object x)
{
  bool i;

  assert_type_integer(x);
  if (ECL_FIXNUMP(p)) {
    cl_index n = ecl_to_size(p);
    if (ECL_FIXNUMP(x)) {
      cl_fixnum y = ecl_fixnum(x);
      if (n >= ECL_FIXNUM_BITS) {
        i = (y < 0);
      } else {
        i = ((y >> n) & 1);
      }
    } else {
      i = mpz_tstbit(x->big.big_num, n);
    }
  } else {
    assert_type_non_negative_integer(p);
    if (ECL_FIXNUMP(x))
      i = (ecl_fixnum(x) < 0);
    else
      i = (_ecl_big_sign(x) < 0);
  }
  {
#line 400
	const cl_env_ptr the_env = ecl_process_env();
#line 400
	#line 400
	cl_object __value0 = (i ? ECL_T : ECL_NIL);
#line 400
	the_env->nvalues = 1;
#line 400
	the_env->values[0] = __value0;
#line 400
	#line 400
	return __value0;
#line 400
}
;
}

cl_object
cl_ash(cl_object x, cl_object y)
{
  cl_object r;
  int sign_x;

  assert_type_integer(x);
  assert_type_integer(y);
  if (ECL_FIXNUMP(y))
    r = ecl_ash(x, ecl_fixnum(y));
  else {
    /*
      bit position represented by bignum is probably
      out of our address space. So, result is returned
      according to sign of integer.
    */
    if (ECL_FIXNUMP(x))
      if (ecl_fixnum_minusp(x))
        sign_x = -1;
      else if (x == ecl_make_fixnum(0))
        sign_x = 0;
      else
        sign_x = 1;
    else
      sign_x = _ecl_big_sign(x);
    if (_ecl_big_sign(y) < 0)
      if (sign_x < 0)
        r = ecl_make_fixnum(-1);
      else
        r = ecl_make_fixnum(0);
    else if (sign_x == 0)
      r = x;
    else
      FEerror("Insufficient memory.", 0);
  }
  {
#line 438
	const cl_env_ptr the_env = ecl_process_env();
#line 438
	#line 438
	cl_object __value0 = r;
#line 438
	the_env->nvalues = 1;
#line 438
	the_env->values[0] = __value0;
#line 438
	#line 438
	return __value0;
#line 438
}
;
}

cl_object
cl_logcount(cl_object x)
{
  {
#line 444
	const cl_env_ptr the_env = ecl_process_env();
#line 444
	#line 444
	cl_object __value0 = ecl_make_fixnum(count_bits(x));
#line 444
	the_env->nvalues = 1;
#line 444
	the_env->values[0] = __value0;
#line 444
	#line 444
	return __value0;
#line 444
}
;
}

cl_index
ecl_integer_length(cl_object x)
{
  int count;
  cl_fixnum i;

  switch (ecl_t_of(x)) {
  case t_fixnum:
    i = ecl_fixnum(x);
    count = ecl_fixnum_bit_length(i);
    break;
  case t_bignum:
    if (_ecl_big_sign(x) < 0)
      x = cl_lognot(x);
    count = mpz_sizeinbase(x->big.big_num, 2);
    break;
  default:
    FEwrong_type_only_arg(ecl_make_fixnum(/*INTEGER-LENGTH*/441), x, ecl_make_fixnum(/*INTEGER*/439));
  }
  return count;
}

cl_object
cl_integer_length(cl_object x)
{
  {
#line 472
	const cl_env_ptr the_env = ecl_process_env();
#line 472
	#line 472
	cl_object __value0 = ecl_make_fixnum(ecl_integer_length(x));
#line 472
	the_env->nvalues = 1;
#line 472
	the_env->values[0] = __value0;
#line 472
	#line 472
	return __value0;
#line 472
}
;
}

cl_object
si_bit_array_op(cl_object o, cl_object x, cl_object y, cl_object r)
{
  cl_fixnum i, j, n, d;
  cl_object r0;
  bit_operator op;
  bool replace = FALSE;
  int xi, yi, ri;
  byte *xp, *yp, *rp;
  int xo, yo, ro;

  if (ecl_t_of(x) == t_bitvector) {
    d = x->vector.dim;
    xp = x->vector.self.bit;
    xo = x->vector.offset;
    if (ecl_t_of(y) != t_bitvector)
      goto ERROR;
    if (d != y->vector.dim)
      goto ERROR;
    yp = y->vector.self.bit;
    yo = y->vector.offset;
    if (r == ECL_T)
      r = x;
    if (r != ECL_NIL) {
      if (ecl_t_of(r) != t_bitvector)
        goto ERROR;
      if (r->vector.dim != d)
        goto ERROR;
      i = (r->vector.self.bit - xp)*8 + (r->vector.offset - xo);
      if ((i > 0 && i < d) || (i < 0 && -i < d)) {
        r0 = r;
        r = ECL_NIL;
        replace = TRUE;
        goto L1;
      }
      i = (r->vector.self.bit - yp)*8 + (r->vector.offset - yo);
      if ((i > 0 && i < d) || (i < 0 && -i < d)) {
        r0 = r;
        r = ECL_NIL;
        replace = TRUE;
      }
    }
  L1:
    if (Null(r)) {
      r = ecl_alloc_simple_vector(d, ecl_aet_bit);
    }
  } else {
    if (ecl_t_of(x) != t_array)
      goto ERROR;
    if ((cl_elttype)x->array.elttype != ecl_aet_bit)
      goto ERROR;
    d = x->array.dim;
    xp = x->vector.self.bit;
    xo = x->vector.offset;
    if (ecl_t_of(y) != t_array)
      goto ERROR;
    if ((cl_elttype)y->array.elttype != ecl_aet_bit)
      goto ERROR;
    if (x->array.rank != y->array.rank)
      goto ERROR;
    yp = y->vector.self.bit;
    yo = y->vector.offset;
    for (i = 0;  i < x->array.rank;  i++)
      if (x->array.dims[i] != y->array.dims[i])
        goto ERROR;
    if (r == ECL_T)
      r = x;
    if (r != ECL_NIL) {
      if (ecl_t_of(r) != t_array)
        goto ERROR;
      if ((cl_elttype)r->array.elttype != ecl_aet_bit)
        goto ERROR;
      if (r->array.rank != x->array.rank)
        goto ERROR;
      for (i = 0;  i < x->array.rank;  i++)
        if (r->array.dims[i] != x->array.dims[i])
          goto ERROR;
      i = (r->vector.self.bit - xp)*8 + (r->vector.offset - xo);
      if ((i > 0 && i < d) || (i < 0 && -i < d)) {
        r0 = r;
        r = ECL_NIL;
        replace = TRUE;
        goto L2;
      } 
      i = (r->vector.self.bit - yp)*8 + (r->vector.offset - yo);
      if ((i > 0 && i < d) || (i < 0 && -i < d)) {
        r0 = r;
        r = ECL_NIL;
        replace = TRUE;
      }
    }
  L2:
    if (Null(r)) {
      r = ecl_alloc_object(t_array);
      r->array.self.t = NULL;
      r->array.displaced = ECL_NIL;
      r->array.rank = x->array.rank;
      r->array.dims = x->array.dims;
      r->array.elttype = ecl_aet_bit;
      r->array.dim = x->array.dim;
      r->array.flags = 0; /* no fill pointer, not adjustable */
      ecl_array_allocself(r);
    }
  }
  rp = r->vector.self.bit;
  ro = r->vector.offset;
  op = fixnum_operations[coerce_to_logical_operator(o)];

#define set_high(place, nbits, value)                                   \
  (place)=((place)&~(-0400>>(nbits)))|((value)&(-0400>>(nbits)))

#define set_low(place, nbits, value)                                    \
  (place)=((place)&(-0400>>(8-(nbits))))|((value)&~(-0400>>(8-(nbits))))

#define extract_byte(integer, pointer, index, offset)                   \
  (integer) = (pointer)[(index)+1] & 0377;                              \
  (integer) = ((pointer)[index]<<(offset))|((integer)>>(8-(offset)))

#define store_byte(pointer, index, offset, value)               \
  set_low((pointer)[index], 8-(offset), (value)>>(offset));     \
  set_high((pointer)[(index)+1], offset, (value)<<(8-(offset)))

  if (xo == 0 && yo == 0 && ro == 0) {
    for (n = d/8, i = 0;  i < n;  i++)
      rp[i] = (*op)(xp[i], yp[i]);
    if ((j = d%8) > 0)
      set_high(rp[n], j, (*op)(xp[n], yp[n]));
    if (!replace) {
      {
#line 603
	const cl_env_ptr the_env = ecl_process_env();
#line 603
	#line 603
	cl_object __value0 = r;
#line 603
	the_env->nvalues = 1;
#line 603
	the_env->values[0] = __value0;
#line 603
	#line 603
	return __value0;
#line 603
}
;
    }
  } else {
    for (n = d/8, i = 0;  i <= n;  i++) {
      extract_byte(xi, xp, i, xo);
      extract_byte(yi, yp, i, yo);
      if (i == n) {
        if ((j = d%8) == 0)
          break;
        extract_byte(ri, rp, n, ro);
        set_high(ri, j, (*op)(xi, yi));
      } else
        ri = (*op)(xi, yi);
      store_byte(rp, i, ro, ri);
    }
    if (!replace) {
      {
#line 619
	const cl_env_ptr the_env = ecl_process_env();
#line 619
	#line 619
	cl_object __value0 = r;
#line 619
	the_env->nvalues = 1;
#line 619
	the_env->values[0] = __value0;
#line 619
	#line 619
	return __value0;
#line 619
}
;
    }
  }
  rp = r0->vector.self.bit;
  ro = r0->vector.offset;
  for (n = d/8, i = 0;  i <= n;  i++) {
    if (i == n) {
      if ((j = d%8) == 0)
        break;
      extract_byte(ri, rp, n, ro);
      set_high(ri, j, r->vector.self.bit[n]);
    } else
      ri = r->vector.self.bit[i];
    store_byte(rp, i, ro, ri);
  }
  {
#line 634
	const cl_env_ptr the_env = ecl_process_env();
#line 634
	#line 634
	cl_object __value0 = r0;
#line 634
	the_env->nvalues = 1;
#line 634
	the_env->values[0] = __value0;
#line 634
	#line 634
	return __value0;
#line 634
}
;
 ERROR:
  FEerror("Illegal arguments for bit-array operation.", 0);
}
