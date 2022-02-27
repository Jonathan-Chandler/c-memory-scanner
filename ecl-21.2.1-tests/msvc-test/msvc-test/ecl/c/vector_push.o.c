#line 1 "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/src/c/vector_push.d"
/* -*- Mode: C; c-basic-offset: 2; indent-tabs-mode: nil -*- */
/* vim: set filetype=c tabstop=2 shiftwidth=2 expandtab: */

/*
 * vector_push.d - vector optimizations
 *
 * Copyright (c) 1984 Taiichi Yuasa and Masami Hagiya
 * Copyright (c) 1990 Giuseppe Attardi
 * Copyright (c) 2001 Juan Jose Garcia Ripoll
 *
 * See file 'LICENSE' for the copyright details.
 *
 */

#include <ecl/ecl.h>
#include <ecl/internal.h>

static cl_object
extend_vector(cl_object v, cl_index amount)
{
        cl_object other;
        cl_index new_length;
        unlikely_if (!ECL_VECTORP(v)) {
                FEwrong_type_nth_arg(ecl_make_fixnum(/*VECTOR-PUSH-EXTEND*/903),1,v,ecl_make_fixnum(/*VECTOR*/900));
        }
        if (!ECL_ADJUSTABLE_ARRAY_P(v))
                FEerror("vector-push-extend: the array ~S is not adjustable.",
                        1, v);
        if (v->vector.dim >= ECL_ARRAY_DIMENSION_LIMIT)
                FEerror("Can't extend the array.", 0);
        if (amount == 0)
                amount = v->vector.dim / 2 + 1;
        new_length = v->vector.dim + amount;
        if (new_length > ECL_ARRAY_DIMENSION_LIMIT)
                new_length = ECL_ARRAY_DIMENSION_LIMIT;
        other = si_make_vector(cl_array_element_type(v),
                               ecl_make_fixnum(new_length), ECL_T,
                               ecl_make_fixnum(v->vector.fillp),
                               ECL_NIL, ecl_make_fixnum(0));
        ecl_copy_subarray(other, 0, v, 0, v->vector.fillp);
        return si_replace_array(v, other);
}

ecl_character
ecl_string_push_extend(cl_object s, ecl_character c)
{
        switch(ecl_t_of(s)) {
#ifdef ECL_UNICODE
        case t_string:
#endif
        case t_base_string:
                /* We use the fact that both string types are
                   byte-compatible except for the data. */
                if (s->base_string.fillp >= s->base_string.dim) {
                        s = extend_vector(s, 0);
                }
                ecl_char_set(s, s->base_string.fillp++, c);
                return c;
        default:
                FEwrong_type_nth_arg(ecl_make_fixnum(/*VECTOR-PUSH-EXTEND*/903),1,s,ecl_make_fixnum(/*STRING*/807));
        }
}

cl_object
cl_vector_push(cl_object value, cl_object v)
{
        cl_index f = ecl_fixnum(cl_fill_pointer(v));
        if (f >= v->vector.dim) {
                {
#line 69
	const cl_env_ptr the_env = ecl_process_env();
#line 69
	#line 69
	cl_object __value0 = ECL_NIL;
#line 69
	the_env->nvalues = 1;
#line 69
	the_env->values[0] = __value0;
#line 69
	#line 69
	return __value0;
#line 69
}
;
        } else {
                ecl_aset1(v, v->vector.fillp, value);
                {
#line 72
	const cl_env_ptr the_env = ecl_process_env();
#line 72
	#line 72
	cl_object __value0 = ecl_make_fixnum(v->vector.fillp++);
#line 72
	the_env->nvalues = 1;
#line 72
	the_env->values[0] = __value0;
#line 72
	#line 72
	return __value0;
#line 72
}
;
        }
}

#line 76
cl_object cl_vector_push_extend(cl_narg narg, cl_object value, cl_object v, ...)
{
#line 76

#line 78
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 78
	cl_object extent;
#line 78
	va_list ARGS;
	va_start(ARGS, v);
#line 78
	if (ecl_unlikely(narg < 2|| narg > 3)) FEwrong_num_arguments(ecl_make_fixnum(903));
#line 78
	if (narg > 2) {
#line 78
		extent = va_arg(ARGS,cl_object);
#line 78
	} else {
#line 78
		extent = ecl_make_fixnum(0);
#line 78
	}
#line 78
{
        cl_index f = ecl_fixnum(cl_fill_pointer(v));
        if (f >= v->vector.dim) {
                v = extend_vector(v, ecl_to_size(extent));
        }
        ecl_aset1(v, v->vector.fillp, value);
        {
#line 84
	#line 84
	cl_object __value0 = ecl_make_fixnum(v->vector.fillp++);
#line 84
	the_env->nvalues = 1;
#line 84
	the_env->values[0] = __value0;
#line 84
	va_end(ARGS);
#line 84
	return __value0;
#line 84
}
;
}
}
