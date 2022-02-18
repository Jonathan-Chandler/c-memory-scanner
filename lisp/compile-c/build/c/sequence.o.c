#line 1 "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/src/c/sequence.d"
/* -*- Mode: C; c-basic-offset: 2; indent-tabs-mode: nil -*- */
/* vim: set filetype=c tabstop=2 shiftwidth=2 expandtab: */

/*
 * sequence.d - sequence routines
 *
 * Copyright (c) 1984 Taiichi Yuasa and Masami Hagiya
 * Copyright (c) 1990 Giuseppe Attardi
 * Copyright (c) 2001 Juan Jose Garcia Ripoll
 *
 * See file 'LICENSE' for the copyright details.
 *
 */

#include <ecl/ecl.h>
#include <limits.h>
#include <ecl/ecl-inl.h>
#include <ecl/internal.h>

cl_index_pair
ecl_sequence_start_end(cl_object fun, cl_object sequence,
                       cl_object start, cl_object end)
{
  cl_index_pair p;
  cl_index l;
  p.length = l = ecl_length(sequence);
  unlikely_if (!ECL_FIXNUMP(start) || ecl_fixnum_minusp(start)) {
    FEwrong_type_key_arg(fun, ecl_make_fixnum(/*:START*/1337), start, ecl_make_fixnum(/*UNSIGNED-BYTE*/887));
  }
  p.start = ecl_fixnum(start);
  if (Null(end)) {
    p.end = l;
  } else {
    unlikely_if (!ECL_FIXNUMP(end) || ecl_fixnum_minusp(end)) {
      FEwrong_type_key_arg(fun, ecl_make_fixnum(/*:END*/1247), end,
                           ecl_read_from_cstring("(OR NULL UNSIGNED-BYTE)"));
    }
    p.end = ecl_fixnum(end);
    unlikely_if (p.end > l) {
      cl_object fillp = ecl_make_fixnum(l);
      FEwrong_type_key_arg(fun, ecl_make_fixnum(/*:END*/1247), end,
                           ecl_make_integer_type(start, fillp));
    }
  }
  unlikely_if (p.end < p.start) {
    FEwrong_type_key_arg(fun, ecl_make_fixnum(/*:START*/1337), start,
                         ecl_make_integer_type(ecl_make_fixnum(0),
                                               ecl_make_fixnum(p.end)));
  }
  return p;
}

cl_object
si_sequence_start_end(cl_object fun, cl_object sequence, cl_object start, cl_object end)
{
  cl_index_pair p = ecl_sequence_start_end(fun, sequence, start, end);
  {
#line 58
	const cl_env_ptr the_env = ecl_process_env();
#line 58
	#line 58
	cl_object __value0 = ecl_make_fixnum(p.start);
#line 58
	cl_object __value1 = ecl_make_fixnum(p.end);
#line 58
	cl_object __value2 = ecl_make_fixnum(p.length);
#line 58
	the_env->nvalues = 3;
#line 58
	the_env->values[2] = __value2;
#line 58
	the_env->values[1] = __value1;
#line 58
	the_env->values[0] = __value0;
#line 58
	#line 58
	return __value0;
#line 58
}
;
}

cl_object
cl_elt(cl_object x, cl_object i)
{
  {
#line 64
	const cl_env_ptr the_env = ecl_process_env();
#line 64
	#line 64
	cl_object __value0 = ecl_elt(x, ecl_to_size(i));
#line 64
	the_env->nvalues = 1;
#line 64
	the_env->values[0] = __value0;
#line 64
	#line 64
	return __value0;
#line 64
}
;
}

cl_object
ecl_elt(cl_object seq, cl_fixnum index)
{
  cl_fixnum i;
  cl_object l;

  if (index < 0)
    goto E;
  switch (ecl_t_of(seq)) {
  case t_list:
    for (i = index, l = seq;  i > 0;  --i) {
      if (!LISTP(l)) goto E0;
      if (Null(l)) goto E;
      l = ECL_CONS_CDR(l);
    }
    if (!LISTP(l)) goto E0;
    if (Null(l)) goto E;
    return ECL_CONS_CAR(l);

#ifdef ECL_UNICODE
  case t_string:
#endif
  case t_vector:
  case t_bitvector:
  case t_base_string:
    if (index >= seq->vector.fillp) goto E;
    return ecl_aref_unsafe(seq, index);
  default:
  E0:
    FEtype_error_sequence(seq);
  }
 E:
  FEtype_error_index(seq, index);
}

cl_object
si_elt_set(cl_object seq, cl_object index, cl_object val)
{
  {
#line 105
	const cl_env_ptr the_env = ecl_process_env();
#line 105
	#line 105
	cl_object __value0 = ecl_elt_set(seq, ecl_to_size(index), val);
#line 105
	the_env->nvalues = 1;
#line 105
	the_env->values[0] = __value0;
#line 105
	#line 105
	return __value0;
#line 105
}
;
}

cl_object
ecl_elt_set(cl_object seq, cl_fixnum index, cl_object val)
{
  cl_fixnum i;
  cl_object l;

  if (index < 0)
    goto E;
  switch (ecl_t_of(seq)) {
  case t_list:
    for (i = index, l = seq;  i > 0;  --i) {
      if (!LISTP(l)) goto E0;
      if (Null(l)) goto E;
      l = ECL_CONS_CDR(l);
    }
    if (!LISTP(l)) goto E0;
    if (Null(l)) goto E;
    ECL_RPLACA(l, val);
    return val;

#ifdef ECL_UNICODE
  case t_string:
#endif
  case t_vector:
  case t_bitvector:
  case t_base_string:
    if (index >= seq->vector.fillp) goto E;
    return ecl_aset_unsafe(seq, index, val);
  default:
  E0:
    FEtype_error_sequence(seq);
  }
 E:
  FEtype_error_index(seq, index);
}

cl_object
ecl_subseq(cl_object sequence, cl_index start, cl_index limit)
{
  switch (ecl_t_of(sequence)) {
  case t_list:
    if (start)
      sequence = ecl_nthcdr(start, sequence);
    {
      cl_object x = ECL_NIL;
      cl_object *z = &x;
      while (!Null(sequence) && (limit--)) {
        if (ECL_ATOM(sequence))
          FEtype_error_cons(sequence);
        z = &ECL_CONS_CDR(*z = ecl_list1(ECL_CONS_CAR(sequence)));
        sequence = ECL_CONS_CDR(sequence);
      }
      return x;
    }
#ifdef ECL_UNICODE
  case t_string:
#endif
  case t_vector:
  case t_bitvector:
  case t_base_string: {
    cl_index size;
    cl_object x;
    if (start > sequence->vector.fillp) {
      x = ecl_alloc_simple_vector(0, ecl_array_elttype(sequence));
    } else {
      size = sequence->vector.fillp - start;
      if (size > limit)
        size = limit;
      x = ecl_alloc_simple_vector(size, ecl_array_elttype(sequence));
      ecl_copy_subarray(x, 0, sequence, start, size);
    }
    return x;
  }
  default:
    FEtype_error_sequence(sequence);
  }
}

cl_object
ecl_copy_seq(cl_object sequence)
{
  return ecl_subseq(sequence, 0, MOST_POSITIVE_FIXNUM);
}

#line 192
cl_object cl_subseq(cl_narg narg, cl_object sequence, cl_object start, ...)
{
#line 192

  cl_index_pair p;
  #line 195
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 195
	cl_object end;
#line 195
	va_list ARGS;
	va_start(ARGS, start);
#line 195
	if (ecl_unlikely(narg < 2|| narg > 3)) FEwrong_num_arguments(ecl_make_fixnum(831));
#line 195
	if (narg > 2) {
#line 195
		end = va_arg(ARGS,cl_object);
#line 195
	} else {
#line 195
		end = ECL_NIL;
#line 195
	}
#line 195
  p = ecl_sequence_start_end(ecl_make_fixnum(/*SUBSEQ*/831), sequence, start, end);
  sequence = ecl_subseq(sequence, p.start, p.end - p.start);
  {
#line 197
	#line 197
	cl_object __value0 = sequence;
#line 197
	the_env->nvalues = 1;
#line 197
	the_env->values[0] = __value0;
#line 197
	va_end(ARGS);
#line 197
	return __value0;
#line 197
}
;
  }

cl_object
cl_copy_seq(cl_object x)
{
  {
#line 203
	const cl_env_ptr the_env = ecl_process_env();
#line 203
	#line 203
	cl_object __value0 = ecl_subseq(x, 0, MOST_POSITIVE_FIXNUM);
#line 203
	the_env->nvalues = 1;
#line 203
	the_env->values[0] = __value0;
#line 203
	#line 203
	return __value0;
#line 203
}
;
}

cl_object
cl_length(cl_object x)
{
  {
#line 209
	const cl_env_ptr the_env = ecl_process_env();
#line 209
	#line 209
	cl_object __value0 = ecl_make_fixnum(ecl_length(x));
#line 209
	the_env->nvalues = 1;
#line 209
	the_env->values[0] = __value0;
#line 209
	#line 209
	return __value0;
#line 209
}
;
}

cl_fixnum
ecl_length(cl_object x)
{
  cl_fixnum i;

  switch (ecl_t_of(x)) {
  case t_list:
    /* INV: A list's length always fits in a fixnum */
    i = 0;
    loop_for_in(x) {
      i++;
    } end_loop_for_in;
    return(i);

#ifdef ECL_UNICODE
  case t_string:
#endif
  case t_vector:
  case t_base_string:
  case t_bitvector:
    return(x->vector.fillp);

  default:
    FEtype_error_sequence(x);
  }
}

cl_object
cl_reverse(cl_object seq)
{
  cl_object output, x;

  switch (ecl_t_of(seq)) {
  case t_list: {
    for (x = seq, output = ECL_NIL; !Null(x); x = ECL_CONS_CDR(x)) {
      if (!LISTP(x)) goto E;
      output = CONS(ECL_CONS_CAR(x), output);
    }
    break;
  }
#ifdef ECL_UNICODE
  case t_string:
#endif
  case t_vector:
  case t_bitvector:
  case t_base_string:
    output = ecl_alloc_simple_vector(seq->vector.fillp, ecl_array_elttype(seq));
    ecl_copy_subarray(output, 0, seq, 0, seq->vector.fillp);
    ecl_reverse_subarray(output, 0, seq->vector.fillp);
    break;
  default:
  E:
    FEtype_error_sequence(seq);
  }
  {
#line 266
	const cl_env_ptr the_env = ecl_process_env();
#line 266
	#line 266
	cl_object __value0 = output;
#line 266
	the_env->nvalues = 1;
#line 266
	the_env->values[0] = __value0;
#line 266
	#line 266
	return __value0;
#line 266
}
;
}

cl_object
cl_nreverse(cl_object seq)
{
  switch (ecl_t_of(seq)) {
  case t_list: {
    cl_object x, y, z;
    for (x = seq, y = ECL_NIL; !Null(x); ) {
      if (!LISTP(x)) FEtype_error_list(x);
      z = x;
      x = ECL_CONS_CDR(x);
      if (x == seq) FEcircular_list(seq);
      ECL_RPLACD(z, y);
      y = z;
    }
    seq = y;
    break;
  }
#ifdef ECL_UNICODE
  case t_string:
#endif
  case t_vector:
  case t_base_string:
  case t_bitvector:
    ecl_reverse_subarray(seq, 0, seq->vector.fillp);
    break;
  default:
    FEtype_error_sequence(seq);
  }
  {
#line 297
	const cl_env_ptr the_env = ecl_process_env();
#line 297
	#line 297
	cl_object __value0 = seq;
#line 297
	the_env->nvalues = 1;
#line 297
	the_env->values[0] = __value0;
#line 297
	#line 297
	return __value0;
#line 297
}
;
}
