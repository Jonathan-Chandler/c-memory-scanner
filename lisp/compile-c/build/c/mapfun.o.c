#line 1 "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/src/c/mapfun.d"
/* -*- Mode: C; c-basic-offset: 2; indent-tabs-mode: nil -*- */
/* vim: set filetype=c tabstop=2 shiftwidth=2 expandtab: */

/*
 * mapfun.d - mapping
 *
 * Copyright (c) 1993 Giuseppe Attardi
 * Copyright (c) 2001 Juan Jose Garcia Ripoll
 *
 * See file 'LICENSE' for the copyright details.
 *
 */

#include <ecl/ecl.h>
#include <ecl/internal.h>
#include <string.h>

#define PREPARE_MAP(env, list, cdrs_frame, cars_frame, narg)    \
  struct ecl_stack_frame frames_aux[2];                         \
  const cl_object cdrs_frame = (cl_object)frames_aux;           \
  const cl_object cars_frame = (cl_object)(frames_aux+1);       \
  ECL_STACK_FRAME_FROM_VA_LIST(env,cdrs_frame,list);            \
  ECL_STACK_FRAME_COPY(cars_frame, cdrs_frame);                 \
  narg = cars_frame->frame.size;                                \
  if (ecl_unlikely(narg == 0)) {                                \
    FEprogram_error("MAP*: Too few arguments", 0);              \
  }

#line 29
cl_object cl_mapcar(cl_narg narg, cl_object fun, ...)
{
#line 29

  cl_object res, *val = &res;
#line 31
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 31
	ecl_va_list lists;
	ecl_va_start(lists, fun, narg, 1);
#line 31
	if (ecl_unlikely(narg < 1)) FEwrong_num_arguments(ecl_make_fixnum(547));
#line 31
{
  PREPARE_MAP(the_env, lists, cdrs_frame, cars_frame, narg);
  res = ECL_NIL;
  while (TRUE) {
    cl_index i;
    for (i = 0;  i < narg;  i++) {
      cl_object cdr = ECL_STACK_FRAME_REF(cdrs_frame, i);
      if (ecl_unlikely(!LISTP(cdr)))
        FEwrong_type_nth_arg(ecl_make_fixnum(/*MAPCAR*/547), i+2, cdr, ecl_make_fixnum(/*LIST*/483));
      if (Null(cdr)) {
        ecl_stack_frame_close(cars_frame);
        ecl_stack_frame_close(cdrs_frame);
        {
#line 43
	#line 43
	cl_object __value0 = res;
#line 43
	the_env->nvalues = 1;
#line 43
	the_env->values[0] = __value0;
#line 43
	ecl_va_end(lists);
#line 43
	return __value0;
#line 43
}

          }
      ECL_STACK_FRAME_SET(cars_frame, i, ECL_CONS_CAR(cdr));
      ECL_STACK_FRAME_SET(cdrs_frame, i, ECL_CONS_CDR(cdr));
    }
    *val = ecl_list1(ecl_apply_from_stack_frame(cars_frame, fun));
    val = &ECL_CONS_CDR(*val);
  }
} }

#line 53
cl_object cl_maplist(cl_narg narg, cl_object fun, ...)
{
#line 53

  cl_object res, *val = &res;
#line 55
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 55
	ecl_va_list lists;
	ecl_va_start(lists, fun, narg, 1);
#line 55
	if (ecl_unlikely(narg < 1)) FEwrong_num_arguments(ecl_make_fixnum(551));
#line 55
{
  PREPARE_MAP(the_env, lists, cdrs_frame, cars_frame, narg);
  res = ECL_NIL;
  while (TRUE) {
    cl_index i;
    for (i = 0;  i < narg;  i++) {
      cl_object cdr = ECL_STACK_FRAME_REF(cdrs_frame, i);
      if (ecl_unlikely(!LISTP(cdr)))
        FEwrong_type_nth_arg(ecl_make_fixnum(/*MAPLIST*/551), i+2, cdr, ecl_make_fixnum(/*LIST*/483));
      if (Null(cdr)) {
        ecl_stack_frame_close(cars_frame);
        ecl_stack_frame_close(cdrs_frame);
        {
#line 67
	#line 67
	cl_object __value0 = res;
#line 67
	the_env->nvalues = 1;
#line 67
	the_env->values[0] = __value0;
#line 67
	ecl_va_end(lists);
#line 67
	return __value0;
#line 67
}

          }
      ECL_STACK_FRAME_SET(cars_frame, i, cdr);
      ECL_STACK_FRAME_SET(cdrs_frame, i, ECL_CONS_CDR(cdr));
    }
    *val = ecl_list1(ecl_apply_from_stack_frame(cars_frame, fun));
    val = &ECL_CONS_CDR(*val);
  }
} }

#line 77
cl_object cl_mapc(cl_narg narg, cl_object fun, ...)
{
#line 77

  cl_object onelist;
#line 79
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 79
	ecl_va_list lists;
	ecl_va_start(lists, fun, narg, 1);
#line 79
	if (ecl_unlikely(narg < 1)) FEwrong_num_arguments(ecl_make_fixnum(545));
#line 79
{
  PREPARE_MAP(the_env, lists, cdrs_frame, cars_frame, narg);
  onelist = ECL_STACK_FRAME_REF(cdrs_frame, 0);
  while (TRUE) {
    cl_index i;
    for (i = 0;  i < narg;  i++) {
      cl_object cdr = ECL_STACK_FRAME_REF(cdrs_frame, i);
      if (ecl_unlikely(!LISTP(cdr)))
        FEwrong_type_nth_arg(ecl_make_fixnum(/*MAPC*/545), i+2, cdr, ecl_make_fixnum(/*LIST*/483));
      if (Null(cdr)) {
        ecl_stack_frame_close(cars_frame);
        ecl_stack_frame_close(cdrs_frame);
        {
#line 91
	#line 91
	cl_object __value0 = onelist;
#line 91
	the_env->nvalues = 1;
#line 91
	the_env->values[0] = __value0;
#line 91
	ecl_va_end(lists);
#line 91
	return __value0;
#line 91
}

          }
      ECL_STACK_FRAME_SET(cars_frame, i, ECL_CONS_CAR(cdr));
      ECL_STACK_FRAME_SET(cdrs_frame, i, ECL_CONS_CDR(cdr));
    }
    ecl_apply_from_stack_frame(cars_frame, fun);
  }
} }

#line 100
cl_object cl_mapl(cl_narg narg, cl_object fun, ...)
{
#line 100

  cl_object onelist;
#line 102
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 102
	ecl_va_list lists;
	ecl_va_start(lists, fun, narg, 1);
#line 102
	if (ecl_unlikely(narg < 1)) FEwrong_num_arguments(ecl_make_fixnum(550));
#line 102
{
  PREPARE_MAP(the_env, lists, cdrs_frame, cars_frame, narg);
  onelist = ECL_STACK_FRAME_REF(cdrs_frame, 0);
  while (TRUE) {
    cl_index i;
    for (i = 0;  i < narg;  i++) {
      cl_object cdr = ECL_STACK_FRAME_REF(cdrs_frame, i);
      if (ecl_unlikely(!LISTP(cdr)))
        FEwrong_type_nth_arg(ecl_make_fixnum(/*MAPL*/550), i+2, cdr, ecl_make_fixnum(/*LIST*/483));
      if (Null(cdr)) {
        ecl_stack_frame_close(cars_frame);
        ecl_stack_frame_close(cdrs_frame);
        {
#line 114
	#line 114
	cl_object __value0 = onelist;
#line 114
	the_env->nvalues = 1;
#line 114
	the_env->values[0] = __value0;
#line 114
	ecl_va_end(lists);
#line 114
	return __value0;
#line 114
}

          }
      ECL_STACK_FRAME_SET(cars_frame, i, cdr);
      ECL_STACK_FRAME_SET(cdrs_frame, i, ECL_CONS_CDR(cdr));
    }
    ecl_apply_from_stack_frame(cars_frame, fun);
  }
} }

#line 123
cl_object cl_mapcan(cl_narg narg, cl_object fun, ...)
{
#line 123

  cl_object res, *val = &res;
#line 125
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 125
	ecl_va_list lists;
	ecl_va_start(lists, fun, narg, 1);
#line 125
	if (ecl_unlikely(narg < 1)) FEwrong_num_arguments(ecl_make_fixnum(546));
#line 125
{
  PREPARE_MAP(the_env, lists, cdrs_frame, cars_frame, narg);
  res = ECL_NIL;
  while (TRUE) {
    cl_index i;
    for (i = 0;  i < narg;  i++) {
      cl_object cdr = ECL_STACK_FRAME_REF(cdrs_frame, i);
      if (ecl_unlikely(!LISTP(cdr)))
        FEwrong_type_nth_arg(ecl_make_fixnum(/*MAPCAN*/546), i+2, cdr, ecl_make_fixnum(/*LIST*/483));
      if (Null(cdr)) {
        ecl_stack_frame_close(cars_frame);
        ecl_stack_frame_close(cdrs_frame);
        {
#line 137
	#line 137
	cl_object __value0 = res;
#line 137
	the_env->nvalues = 1;
#line 137
	the_env->values[0] = __value0;
#line 137
	ecl_va_end(lists);
#line 137
	return __value0;
#line 137
}

          }
      ECL_STACK_FRAME_SET(cars_frame, i, ECL_CONS_CAR(cdr));
      ECL_STACK_FRAME_SET(cdrs_frame, i, ECL_CONS_CDR(cdr));
    }
    *val = ecl_apply_from_stack_frame(cars_frame, fun);
    while (CONSP(*val))
      val = &ECL_CONS_CDR(*val);
  }
} }

#line 148
cl_object cl_mapcon(cl_narg narg, cl_object fun, ...)
{
#line 148

  cl_object res, *val = &res;
#line 150
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 150
	ecl_va_list lists;
	ecl_va_start(lists, fun, narg, 1);
#line 150
	if (ecl_unlikely(narg < 1)) FEwrong_num_arguments(ecl_make_fixnum(548));
#line 150
{
  PREPARE_MAP(the_env, lists, cdrs_frame, cars_frame, narg);
  res = ECL_NIL;
  while (TRUE) {
    cl_index i;
    for (i = 0;  i < narg;  i++) {
      cl_object cdr = ECL_STACK_FRAME_REF(cdrs_frame, i);
      if (ecl_unlikely(!LISTP(cdr)))
        FEwrong_type_nth_arg(ecl_make_fixnum(/*MAPCON*/548), i+2, cdr, ecl_make_fixnum(/*LIST*/483));
      if (Null(cdr)) {
        ecl_stack_frame_close(cars_frame);
        ecl_stack_frame_close(cdrs_frame);
        {
#line 162
	#line 162
	cl_object __value0 = res;
#line 162
	the_env->nvalues = 1;
#line 162
	the_env->values[0] = __value0;
#line 162
	ecl_va_end(lists);
#line 162
	return __value0;
#line 162
}

          }
      ECL_STACK_FRAME_SET(cars_frame, i, cdr);
      ECL_STACK_FRAME_SET(cdrs_frame, i, ECL_CONS_CDR(cdr));
    }
    *val = ecl_apply_from_stack_frame(cars_frame, fun);
    while (CONSP(*val))
      val = &ECL_CONS_CDR(*val);
  }
} }
