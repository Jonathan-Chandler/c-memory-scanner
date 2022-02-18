#line 1 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/c/structure.d"
/* -*- Mode: C; c-basic-offset: 2; indent-tabs-mode: nil -*- */
/* vim: set filetype=c tabstop=2 shiftwidth=2 expandtab: */

/*
 * structure.d - structure interface
 *
 * Copyright (c) 1984 Taiichi Yuasa and Masami Hagiya
 * Copyright (c) 1990 Giuseppe Attardi
 * Copyright (c) 2001 Juan Jose Garcia Ripoll
 *
 * See file 'LICENSE' for the copyright details.
 *
 */

#include <ecl/ecl.h>
#include <ecl/ecl-inl.h>
#include <string.h>

/******************************* ------- ******************************/

static bool
structure_subtypep(cl_object x, cl_object y)
{
  if (ECL_CLASS_NAME(x) == y) {
    return TRUE;
  } else {
    cl_object superiors = ECL_CLASS_SUPERIORS(x);
    loop_for_on_unsafe(superiors) {
      if (structure_subtypep(ECL_CONS_CAR(superiors), y))
        return TRUE;
    } end_loop_for_on_unsafe(superiors);
    return FALSE;
  }
}

cl_object
si_structure_subtype_p(cl_object x, cl_object y)
{
  {
#line 40
	const cl_env_ptr the_env = ecl_process_env();
#line 40
	#line 40
	cl_object __value0 = ((ecl_t_of(x) == T_STRUCTURE
             && structure_subtypep(ECL_STRUCT_TYPE(x), y)) ? ECL_T : ECL_NIL);
#line 40
	the_env->nvalues = 1;
#line 40
	the_env->values[0] = __value0;
#line 40
	#line 40
	return __value0;
#line 40
}
;
}

#line 43
cl_object si_make_structure(cl_narg narg, cl_object type, ...)
{
#line 43

  cl_object x;
  int i;
  #line 47
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 47
	ecl_va_list args;
	ecl_va_start(args, type, narg, 1);
#line 47
	if (ecl_unlikely(narg < 1)) FEwrong_num_arguments(ecl_make_fixnum(1109));
#line 47
  x = ecl_alloc_object(T_STRUCTURE);
  ECL_STRUCT_TYPE(x) = type;
  ECL_STRUCT_SLOTS(x) = NULL;     /* for GC sake */
  ECL_STRUCT_LENGTH(x) = --narg;
  ECL_STRUCT_SLOTS(x) = (cl_object *)ecl_alloc_align(sizeof(cl_object)*narg, sizeof(cl_object));
  x->instance.slotds = ECL_UNBOUND;
  if (narg >= ECL_SLOTS_LIMIT)
    FEerror("Limit on structure size exceeded: ~S slots requested.",
            1, ecl_make_fixnum(narg));
  for (i = 0;  i < narg;  i++)
    ECL_STRUCT_SLOT(x, i) = ecl_va_arg(args);
  {
#line 58
	#line 58
	cl_object __value0 = x;
#line 58
	the_env->nvalues = 1;
#line 58
	the_env->values[0] = __value0;
#line 58
	ecl_va_end(args);
#line 58
	return __value0;
#line 58
}
;
  }

#define ecl_copy_structure si_copy_instance

cl_object
cl_copy_structure(cl_object s)
{
  switch (ecl_t_of(s)) {
  case t_instance:
    s = ecl_copy_structure(s);
    break;
  case t_list:
#ifdef ECL_UNICODE
  case t_string:
#endif
  case t_base_string:
  case t_bitvector:
  case t_vector:
    s = cl_copy_seq(s);
    break;
  default:
    FEwrong_type_only_arg(ecl_make_fixnum(/*COPY-STRUCTURE*/263), s, ecl_make_fixnum(/*STRUCTURE*/828));
  }
  {
#line 82
	const cl_env_ptr the_env = ecl_process_env();
#line 82
	#line 82
	cl_object __value0 = s;
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


/* Kept only for compatibility. One should use class-of or type-of. */
cl_object
si_structure_name(cl_object s)
{
  if (ecl_unlikely(Null(si_structurep(s))))
    FEwrong_type_only_arg(ecl_make_fixnum(/*SI::STRUCTURE-NAME*/1167), s, ecl_make_fixnum(/*STRUCTURE*/828));
  {
#line 92
	const cl_env_ptr the_env = ecl_process_env();
#line 92
	#line 92
	cl_object __value0 = ECL_STRUCT_NAME(s);
#line 92
	the_env->nvalues = 1;
#line 92
	the_env->values[0] = __value0;
#line 92
	#line 92
	return __value0;
#line 92
}
;
}

cl_object
si_structure_ref(cl_object x, cl_object type, cl_object index)
{
  if (ecl_unlikely(ecl_t_of(x) != T_STRUCTURE ||
                   !structure_subtypep(ECL_STRUCT_TYPE(x), type)))
    FEwrong_type_nth_arg(ecl_make_fixnum(/*SI::STRUCTURE-REF*/1169), 1, x, type);
  {
#line 101
	const cl_env_ptr the_env = ecl_process_env();
#line 101
	#line 101
	cl_object __value0 = ECL_STRUCT_SLOT(x, ecl_fixnum(index));
#line 101
	the_env->nvalues = 1;
#line 101
	the_env->values[0] = __value0;
#line 101
	#line 101
	return __value0;
#line 101
}
;
}

cl_object
ecl_structure_ref(cl_object x, cl_object type, cl_fixnum n)
{

  if (ecl_unlikely(ecl_t_of(x) != T_STRUCTURE ||
                   !structure_subtypep(ECL_STRUCT_TYPE(x), type)))
    FEwrong_type_nth_arg(ecl_make_fixnum(/*SI::STRUCTURE-REF*/1169), 1, x, type);
  return(ECL_STRUCT_SLOT(x, n));
}

cl_object
si_structure_set(cl_object x, cl_object type, cl_object index, cl_object val)
{
  if (ecl_unlikely(ecl_t_of(x) != T_STRUCTURE ||
                   !structure_subtypep(ECL_STRUCT_TYPE(x), type)))
    FEwrong_type_nth_arg(ecl_make_fixnum(/*SI::STRUCTURE-SET*/1170), 1, x, type);
  ECL_STRUCT_SLOT(x, ecl_fixnum(index)) = val;
  {
#line 121
	const cl_env_ptr the_env = ecl_process_env();
#line 121
	#line 121
	cl_object __value0 = val;
#line 121
	the_env->nvalues = 1;
#line 121
	the_env->values[0] = __value0;
#line 121
	#line 121
	return __value0;
#line 121
}
;
}

cl_object
ecl_structure_set(cl_object x, cl_object type, cl_fixnum n, cl_object v)
{
  if (ecl_unlikely(ecl_t_of(x) != T_STRUCTURE ||
                   !structure_subtypep(ECL_STRUCT_TYPE(x), type)))
    FEwrong_type_nth_arg(ecl_make_fixnum(/*SI::STRUCTURE-SET*/1170), 1, x, type);
  ECL_STRUCT_SLOT(x, n) = v;
  return(v);
}

#ifdef ECL_THREADS
cl_object
mp_compare_and_swap_structure(cl_object x, cl_object type, cl_object index, cl_object old, cl_object new)
{
  if (ecl_unlikely(ecl_t_of(x) != T_STRUCTURE ||
                   !structure_subtypep(ECL_STRUCT_TYPE(x), type)))
    FEwrong_type_nth_arg(ecl_make_fixnum(/*MP::COMPARE-AND-SWAP-STRUCTURE*/1514), 1, x, type);
  return ecl_compare_and_swap(&(ECL_STRUCT_SLOT(x, ecl_fixnum(index))), old, new);
}
#endif

cl_object
si_structurep(cl_object s)
{
  if (ECL_INSTANCEP(s) &&
      structure_subtypep(ECL_CLASS_OF(s), ECL_SYM("STRUCTURE-OBJECT",980)))
    return ECL_T;
  else
    return ECL_NIL;
}
