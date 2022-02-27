#line 1 "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/src/c/sse2.d"
/* -*- Mode: C; c-basic-offset: 2; indent-tabs-mode: nil -*- */
/* vim: set filetype=c tabstop=2 shiftwidth=2 expandtab: */

/*
 * sse2.d -  SSE2 vector type support
 *
 * Copyright (c) 1984 Taiichi Yuasa and Masami Hagiya
 * Copyright (c) 1990 Giuseppe Attardi
 * Copyright (c) 2001 Juan Jose Garcia Ripoll
 *
 * See file 'LICENSE' for the copyright details.
 *
 */

#include <limits.h>
#include <string.h>
#include <ecl/ecl.h>
#define ECL_DEFINE_AET_SIZE
#include <ecl/internal.h>

#ifdef ECL_SSE2

/* Predicates */

cl_object
si_sse_pack_p(cl_object x)
{
  {
#line 28
	const cl_env_ptr the_env = ecl_process_env();
#line 28
	#line 28
	cl_object __value0 = (ECL_SSE_PACK_P(x) ? ECL_T : ECL_NIL);
#line 28
	the_env->nvalues = 1;
#line 28
	the_env->values[0] = __value0;
#line 28
	#line 28
	return __value0;
#line 28
}
;
}

/* Element type substitution */

static void verify_sse_elttype(cl_elttype eltt) {
  switch (eltt) {
  case ecl_aet_sf:
  case ecl_aet_df:
  case ecl_aet_b8:
  case ecl_aet_i8:
#ifdef ecl_uint16_t
  case ecl_aet_b16:
  case ecl_aet_i16:
#endif
#ifdef ecl_uint32_t
  case ecl_aet_b32:
  case ecl_aet_i32:
#endif
#ifdef ecl_uint64_t
  case ecl_aet_b64:
  case ecl_aet_i64:
#endif
    break; /* OK */
  default:
    FEerror("Invalid element type for an SSE pack: ~S", 1, ecl_elttype_to_symbol(eltt));
  }
}

static
cl_elttype symbol_to_sse_elttype(cl_object type) {
  cl_elttype eltt = ecl_symbol_to_elttype(type);
  verify_sse_elttype(eltt);
  return eltt;
}

cl_object
si_sse_pack_as_elt_type(cl_object x, cl_object type)
{
  cl_elttype rtype;

  if (ecl_unlikely(!ECL_SSE_PACK_P(x))) {
    FEwrong_type_nth_arg(ecl_make_fixnum(/*EXT::SSE-PACK-AS-ELT-TYPE*/1877), 1, x, ecl_make_fixnum(/*EXT::SSE-PACK*/1875));
  }

  rtype = symbol_to_sse_elttype(type);

  if (x->sse.elttype != rtype) {
    cl_object new = ecl_alloc_object(t_sse_pack);
    new->sse.elttype = rtype;
    new->sse.data.vi = x->sse.data.vi;
    x = new;
  }

  {
#line 82
	const cl_env_ptr the_env = ecl_process_env();
#line 82
	#line 82
	cl_object __value0 = x;
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
si_sse_pack_element_type(cl_object x)
{
  if (ecl_unlikely(!ECL_SSE_PACK_P(x))) {
    FEwrong_type_nth_arg(ecl_make_fixnum(/*EXT::SSE-PACK-ELEMENT-TYPE*/1883), 1, x, ecl_make_fixnum(/*EXT::SSE-PACK*/1875));
  }

  {
#line 92
	const cl_env_ptr the_env = ecl_process_env();
#line 92
	#line 92
	cl_object __value0 = ecl_elttype_to_symbol(x->sse.elttype);
#line 92
	cl_object __value1 = ecl_make_fixnum(x->sse.elttype);
#line 92
	the_env->nvalues = 2;
#line 92
	the_env->values[1] = __value1;
#line 92
	the_env->values[0] = __value0;
#line 92
	#line 92
	return __value0;
#line 92
}
;
}

/* Conversion to and from specialized vectors */

cl_object
si_sse_pack_to_vector(cl_object x, cl_object elt_type)
{
  cl_elttype etype;
  cl_object vec;

  if (ecl_unlikely(!ECL_SSE_PACK_P(x))) {
    FEwrong_type_nth_arg(ecl_make_fixnum(/*EXT::SSE-PACK-TO-VECTOR*/1879), 1, x, ecl_make_fixnum(/*EXT::SSE-PACK*/1875));
  }

  etype = x->sse.elttype;
  if (elt_type != ECL_NIL)
    etype = symbol_to_sse_elttype(elt_type);

  vec = ecl_alloc_simple_vector(16/ecl_aet_size[etype], etype);
  memcpy(vec->vector.self.b8, x->sse.data.b8, 16);

  {
#line 114
	const cl_env_ptr the_env = ecl_process_env();
#line 114
	#line 114
	cl_object __value0 = vec;
#line 114
	the_env->nvalues = 1;
#line 114
	the_env->values[0] = __value0;
#line 114
	#line 114
	return __value0;
#line 114
}
;
}

cl_object
si_vector_to_sse_pack(cl_object x)
{
  cl_object ssev;

  if (ecl_unlikely(!ECL_ARRAYP(x))) {
    FEwrong_type_nth_arg(ecl_make_fixnum(/*EXT::VECTOR-TO-SSE-PACK*/1878), 1, x, ecl_make_fixnum(/*ARRAY*/98));
  }

  verify_sse_elttype(x->vector.elttype);

  if (ecl_unlikely(x->vector.dim * ecl_aet_size[x->vector.elttype] != 16))
    FEerror("Wrong vector size in VECTOR-TO-SSE-PACK: ~S",1,ecl_make_fixnum(x->vector.dim));

  ssev = ecl_alloc_object(t_sse_pack);
  ssev->sse.elttype = x->vector.elttype;
  memcpy(ssev->sse.data.b8, x->vector.self.b8, 16);

  {
#line 135
	const cl_env_ptr the_env = ecl_process_env();
#line 135
	#line 135
	cl_object __value0 = ssev;
#line 135
	the_env->nvalues = 1;
#line 135
	the_env->values[0] = __value0;
#line 135
	#line 135
	return __value0;
#line 135
}
;
}

/* Boxing and unboxing.

   The unboxing primitives accept any kind of sse-pack on purpose. */

cl_object
ecl_make_int_sse_pack(__m128i value)
{
  cl_object obj = ecl_alloc_object(t_sse_pack);
  obj->sse.elttype = ecl_aet_b8;
  obj->sse.data.vi = value;
  {
#line 148
	const cl_env_ptr the_env = ecl_process_env();
#line 148
	#line 148
	cl_object __value0 = obj;
#line 148
	the_env->nvalues = 1;
#line 148
	the_env->values[0] = __value0;
#line 148
	#line 148
	return __value0;
#line 148
}
;
}

__m128i
ecl_unbox_int_sse_pack(cl_object x)
{
  do {
    if (ECL_SSE_PACK_P(x))
      return x->sse.data.vi;
    x = ecl_type_error(ECL_SYM("COERCE",233), "variable", x, ECL_SYM("EXT::SSE-PACK",1875));
  } while(1);
}

cl_object
ecl_make_float_sse_pack(__m128 value)
{
  cl_object obj = ecl_alloc_object(t_sse_pack);
  obj->sse.elttype = ecl_aet_sf;
  obj->sse.data.vf = value;
  {
#line 167
	const cl_env_ptr the_env = ecl_process_env();
#line 167
	#line 167
	cl_object __value0 = obj;
#line 167
	the_env->nvalues = 1;
#line 167
	the_env->values[0] = __value0;
#line 167
	#line 167
	return __value0;
#line 167
}
;
}

__m128
ecl_unbox_float_sse_pack(cl_object x)
{
  do {
    if (ECL_SSE_PACK_P(x))
      return x->sse.data.vf;
    x = ecl_type_error(ECL_SYM("COERCE",233), "variable", x, ECL_SYM("EXT::SSE-PACK",1875));
  } while(1);
}

cl_object
ecl_make_double_sse_pack(__m128d value)
{
  cl_object obj = ecl_alloc_object(t_sse_pack);
  obj->sse.elttype = ecl_aet_df;
  obj->sse.data.vd = value;
  {
#line 186
	const cl_env_ptr the_env = ecl_process_env();
#line 186
	#line 186
	cl_object __value0 = obj;
#line 186
	the_env->nvalues = 1;
#line 186
	the_env->values[0] = __value0;
#line 186
	#line 186
	return __value0;
#line 186
}
;
}

__m128d
ecl_unbox_double_sse_pack(cl_object x)
{
  do {
    if (ECL_SSE_PACK_P(x))
      return x->sse.data.vd;
    x = ecl_type_error(ECL_SYM("COERCE",233), "variable", x, ECL_SYM("EXT::SSE-PACK",1875));
  } while(1);
}

#endif /* ECL_SSE2 */
