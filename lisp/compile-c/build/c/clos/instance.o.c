#line 1 "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/src/c/clos/instance.d"
/* -*- Mode: C; c-basic-offset: 2; indent-tabs-mode: nil -*- */
/* vim: set filetype=c tabstop=2 shiftwidth=2 expandtab: */

/*
 * instance.d - CLOS interface
 *
 * Copyright (c) 1990 Giuseppe Attardi
 * Copyright (c) 2001 Juan Jose Garcia Ripoll
 *
 * See file 'LICENSE' for the copyright details.
 *
 */

#include <string.h>
#include <ecl/ecl.h>
#include <ecl/internal.h>

cl_object
ecl_allocate_instance(cl_object clas, cl_index size)
{
  cl_object x = ecl_alloc_instance(size);
  cl_index i;
  ECL_CLASS_OF(x) = clas;
  for (i = 0;  i < size;  i++)
    x->instance.slots[i] = ECL_UNBOUND;
  return x;
}

cl_object
si_allocate_raw_instance(cl_object orig, cl_object clas, cl_object size)
{
  cl_object output = ecl_allocate_instance(clas, ecl_to_size(size));
  if (orig == ECL_NIL) {
    orig = output;
  } else {
    orig->instance.clas = clas;
    orig->instance.length = output->instance.length;
    orig->instance.slots = output->instance.slots;
  }
  {
#line 40
	const cl_env_ptr the_env = ecl_process_env();
#line 40
	#line 40
	cl_object __value0 = orig;
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

cl_object
si_instance_obsolete_p(cl_object x)
{
  /* Each class has a slot class_stamp and each instance has a slot
     stamp. When an instance stamp its class class_stamp don't match,
     then the instance is obsolete. Structure stamp is always 0. */
  if (x->instance.stamp == 0)
    return ECL_NIL;
  return (x->instance.stamp != ECL_CLASS_OF(x)->instance.class_stamp)
    ? ECL_T : ECL_NIL;
}

cl_object
si_instance_new_stamp(cl_object x)
{
  x->instance.class_stamp = ecl_next_stamp();
  return ecl_make_fixnum(x->instance.class_stamp);
}

cl_object
si_instance_get_stamp(cl_object x)
{
  cl_object a = ecl_make_fixnum(x->instance.stamp);
  cl_object b = ecl_make_fixnum(ECL_CLASS_OF(x)->instance.class_stamp);
  {
#line 67
	const cl_env_ptr the_env = ecl_process_env();
#line 67
	#line 67
	cl_object __value0 = a;
#line 67
	cl_object __value1 = b;
#line 67
	the_env->nvalues = 2;
#line 67
	the_env->values[1] = __value1;
#line 67
	the_env->values[0] = __value0;
#line 67
	#line 67
	return __value0;
#line 67
}
;
}

cl_object
si_instance_slotds(cl_object x)
{
  {
#line 73
	const cl_env_ptr the_env = ecl_process_env();
#line 73
	#line 73
	cl_object __value0 = x->instance.slotds;
#line 73
	the_env->nvalues = 1;
#line 73
	the_env->values[0] = __value0;
#line 73
	#line 73
	return __value0;
#line 73
}
;
}

cl_object
si_instance_sig_set(cl_object x)
{
  x->instance.stamp = ECL_CLASS_OF(x)->instance.class_stamp;
  {
#line 80
	const cl_env_ptr the_env = ecl_process_env();
#line 80
	#line 80
	cl_object __value0 = (x->instance.slotds = ECL_CLASS_SLOTS(ECL_CLASS_OF(x)));
#line 80
	the_env->nvalues = 1;
#line 80
	the_env->values[0] = __value0;
#line 80
	#line 80
	return __value0;
#line 80
}
;
}

cl_object
si_instance_class(cl_object x)
{
  unlikely_if (!ECL_INSTANCEP(x)) {
    FEwrong_type_only_arg(ecl_make_fixnum(/*CLASS-OF*/937), x, ecl_make_fixnum(/*EXT::INSTANCE*/1370));
  }
  {
#line 89
	const cl_env_ptr the_env = ecl_process_env();
#line 89
	#line 89
	cl_object __value0 = ECL_CLASS_OF(x);
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
si_instance_class_set(cl_object x, cl_object y)
{
  unlikely_if (!ECL_INSTANCEP(x)) {
    FEwrong_type_nth_arg(ecl_make_fixnum(/*SI::INSTANCE-CLASS-SET*/1196), 1, x, ecl_make_fixnum(/*EXT::INSTANCE*/1370));
  }
  unlikely_if (!ECL_INSTANCEP(y)) {
    FEwrong_type_nth_arg(ecl_make_fixnum(/*SI::INSTANCE-CLASS-SET*/1196), 2, y, ecl_make_fixnum(/*EXT::INSTANCE*/1370));
  }
  ECL_CLASS_OF(x) = y;
  {
#line 102
	const cl_env_ptr the_env = ecl_process_env();
#line 102
	#line 102
	cl_object __value0 = x;
#line 102
	the_env->nvalues = 1;
#line 102
	the_env->values[0] = __value0;
#line 102
	#line 102
	return __value0;
#line 102
}
;
}

cl_object
ecl_instance_ref(cl_object x, cl_fixnum i)
{
  unlikely_if (!ECL_INSTANCEP(x)) {
    FEwrong_type_nth_arg(ecl_make_fixnum(/*SI::INSTANCE-REF*/1188), 1, x, ecl_make_fixnum(/*EXT::INSTANCE*/1370));
  }
  unlikely_if (i < 0 || i >= (cl_fixnum)x->instance.length) {
    FEtype_error_index(x, i);
  }
  return(x->instance.slots[i]);
}

cl_object
si_instance_ref(cl_object x, cl_object index)
{
  cl_fixnum i;

  unlikely_if (!ECL_INSTANCEP(x)) {
    FEwrong_type_nth_arg(ecl_make_fixnum(/*SI::INSTANCE-REF*/1188), 1, x, ecl_make_fixnum(/*EXT::INSTANCE*/1370));
  }
  unlikely_if (!ECL_FIXNUMP(index)) {
    FEwrong_type_nth_arg(ecl_make_fixnum(/*SI::INSTANCE-REF*/1188), 2, index, ecl_make_fixnum(/*FIXNUM*/374));
  }
  i = ecl_fixnum(index);
  unlikely_if (i < 0 || i >= (cl_fixnum)x->instance.length) {
    FEtype_error_index(x, i);
  }
  {
#line 132
	const cl_env_ptr the_env = ecl_process_env();
#line 132
	#line 132
	cl_object __value0 = x->instance.slots[i];
#line 132
	the_env->nvalues = 1;
#line 132
	the_env->values[0] = __value0;
#line 132
	#line 132
	return __value0;
#line 132
}
;
}

cl_object
clos_safe_instance_ref(cl_object x, cl_object index)
{
  cl_fixnum i;

  unlikely_if (!ECL_INSTANCEP(x)) {
    FEwrong_type_nth_arg(ecl_make_fixnum(/*SI::INSTANCE-REF*/1188), 1, x, ecl_make_fixnum(/*EXT::INSTANCE*/1370));
  }
  unlikely_if (!ECL_FIXNUMP(index)) {
    FEwrong_type_nth_arg(ecl_make_fixnum(/*SI::INSTANCE-REF*/1188), 2, index, ecl_make_fixnum(/*FIXNUM*/374));
  }
  i = ecl_fixnum(index);
  unlikely_if (i < 0 || i >= x->instance.length) {
    FEtype_error_index(x, i);
  }
  x = x->instance.slots[i];
  unlikely_if (x == ECL_UNBOUND) {
    x = _ecl_funcall4(ECL_SYM("SLOT-UNBOUND",972), ECL_NIL, x, index);
  }
  {
#line 154
	const cl_env_ptr the_env = ecl_process_env();
#line 154
	#line 154
	cl_object __value0 = x;
#line 154
	the_env->nvalues = 1;
#line 154
	the_env->values[0] = __value0;
#line 154
	#line 154
	return __value0;
#line 154
}
;
}

cl_object
ecl_instance_set(cl_object x, cl_fixnum i, cl_object v)
{
  unlikely_if (!ECL_INSTANCEP(x)) {
    FEwrong_type_nth_arg(ecl_make_fixnum(/*SI::INSTANCE-SET*/1189), 1, x, ecl_make_fixnum(/*EXT::INSTANCE*/1370));
  }
  unlikely_if (i >= x->instance.length || i < 0) {
    FEtype_error_index(x, i);
  }
  x->instance.slots[i] = v;
  return(v);
}

cl_object
si_instance_set(cl_object x, cl_object index, cl_object value)
{
  cl_fixnum i;

  unlikely_if (!ECL_INSTANCEP(x)) {
    FEwrong_type_nth_arg(ecl_make_fixnum(/*SI::INSTANCE-SET*/1189), 1, x, ecl_make_fixnum(/*EXT::INSTANCE*/1370));
  }
  unlikely_if (!ECL_FIXNUMP(index)) {
    FEwrong_type_nth_arg(ecl_make_fixnum(/*SI::INSTANCE-SET*/1189), 2, index, ecl_make_fixnum(/*FIXNUM*/374));
  }
  i = ecl_fixnum(index);
  unlikely_if (i >= (cl_fixnum)x->instance.length || i < 0) {
    FEtype_error_index(x, i);
  }
  x->instance.slots[i] = value;
  {
#line 186
	const cl_env_ptr the_env = ecl_process_env();
#line 186
	#line 186
	cl_object __value0 = value;
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

#ifdef ECL_THREADS
cl_object
ecl_compare_and_swap_instance(cl_object x, cl_fixnum i, cl_object old, cl_object new)
{
  unlikely_if (!ECL_INSTANCEP(x)) {
    FEwrong_type_nth_arg(ecl_make_fixnum(/*MP::COMPARE-AND-SWAP-INSTANCE*/1513), 1, x, ecl_make_fixnum(/*EXT::INSTANCE*/1370));
  }
  unlikely_if (i >= x->instance.length || i < 0) {
    FEtype_error_index(x, i);
  }
  return ecl_compare_and_swap(x->instance.slots + i, old, new);
}

cl_object
mp_compare_and_swap_instance(cl_object x, cl_object index, cl_object old, cl_object new)
{
  cl_fixnum i;

  unlikely_if (!ECL_INSTANCEP(x)) {
    FEwrong_type_nth_arg(ecl_make_fixnum(/*MP::COMPARE-AND-SWAP-INSTANCE*/1513), 1, x, ecl_make_fixnum(/*EXT::INSTANCE*/1370));
  }
  unlikely_if (!ECL_FIXNUMP(index)) {
    FEwrong_type_nth_arg(ecl_make_fixnum(/*MP::COMPARE-AND-SWAP-INSTANCE*/1513), 2, index, ecl_make_fixnum(/*FIXNUM*/374));
  }
  i = ecl_fixnum(index);
  unlikely_if (i >= (cl_fixnum)x->instance.length || i < 0) {
    FEtype_error_index(x, i);
  }
  return ecl_compare_and_swap(x->instance.slots + i, old, new);
}

cl_object
ecl_atomic_incf_instance(cl_object x, cl_fixnum i, cl_object increment)
{
  unlikely_if (!ECL_INSTANCEP(x)) {
    FEwrong_type_nth_arg(ecl_make_fixnum(/*MP::ATOMIC-INCF-INSTANCE*/1519), 1, x, ecl_make_fixnum(/*EXT::INSTANCE*/1370));
  }
  unlikely_if (i >= x->instance.length || i < 0) {
    FEtype_error_index(x, i);
  }
  return ecl_atomic_incf(x->instance.slots + i, increment);
}

cl_object
mp_atomic_incf_instance(cl_object x, cl_object index, cl_object increment)
{
  cl_fixnum i;

  unlikely_if (!ECL_INSTANCEP(x)) {
    FEwrong_type_nth_arg(ecl_make_fixnum(/*MP::ATOMIC-INCF-INSTANCE*/1519), 1, x, ecl_make_fixnum(/*EXT::INSTANCE*/1370));
  }
  unlikely_if (!ECL_FIXNUMP(index)) {
    FEwrong_type_nth_arg(ecl_make_fixnum(/*MP::ATOMIC-INCF-INSTANCE*/1519), 2, index, ecl_make_fixnum(/*FIXNUM*/374));
  }
  i = ecl_fixnum(index);
  unlikely_if (i >= (cl_fixnum)x->instance.length || i < 0) {
    FEtype_error_index(x, i);
  }
  return ecl_atomic_incf(x->instance.slots + i, increment);
}
#endif /* ECL_THREADS */

cl_object
si_instancep(cl_object x)
{
  {
#line 254
	const cl_env_ptr the_env = ecl_process_env();
#line 254
	#line 254
	cl_object __value0 = (ECL_INSTANCEP(x) ? ecl_make_fixnum(x->instance.length) : ECL_NIL);
#line 254
	the_env->nvalues = 1;
#line 254
	the_env->values[0] = __value0;
#line 254
	#line 254
	return __value0;
#line 254
}
;
}

cl_object
si_unbound()
{
  /* Returns an object that cannot be read or written and which
     is used to represent an unitialized slot */
  {
#line 262
	const cl_env_ptr the_env = ecl_process_env();
#line 262
	#line 262
	cl_object __value0 = ECL_UNBOUND;
#line 262
	the_env->nvalues = 1;
#line 262
	the_env->values[0] = __value0;
#line 262
	#line 262
	return __value0;
#line 262
}
;
}

cl_object
si_sl_boundp(cl_object x)
{
  {
#line 268
	const cl_env_ptr the_env = ecl_process_env();
#line 268
	#line 268
	cl_object __value0 = ((x == ECL_UNBOUND) ? ECL_NIL : ECL_T);
#line 268
	the_env->nvalues = 1;
#line 268
	the_env->values[0] = __value0;
#line 268
	#line 268
	return __value0;
#line 268
}
;
}

cl_object
si_sl_makunbound(cl_object x, cl_object index)
{
  cl_fixnum i;

  unlikely_if (!ECL_INSTANCEP(x)) {
    FEwrong_type_nth_arg(ecl_make_fixnum(/*SI::SL-MAKUNBOUND*/1199), 1, x, ecl_make_fixnum(/*EXT::INSTANCE*/1370));
  }
  unlikely_if (!ECL_FIXNUMP(index)) {
    FEwrong_type_nth_arg(ecl_make_fixnum(/*SI::SL-MAKUNBOUND*/1199), 2, index, ecl_make_fixnum(/*FIXNUM*/374));
  }
  i = ecl_fixnum(index);
  unlikely_if (i >= x->instance.length || i < 0) {
    FEtype_error_index(x, i);
  }
  x->instance.slots[i] = ECL_UNBOUND;
  {
#line 287
	const cl_env_ptr the_env = ecl_process_env();
#line 287
	#line 287
	cl_object __value0 = x;
#line 287
	the_env->nvalues = 1;
#line 287
	the_env->values[0] = __value0;
#line 287
	#line 287
	return __value0;
#line 287
}
;
}

cl_object
si_copy_instance(cl_object x)
{
  cl_object y;

  unlikely_if (!ECL_INSTANCEP(x)) {
    FEwrong_type_nth_arg(ecl_make_fixnum(/*SI::COPY-INSTANCE*/1186), 1, x, ecl_make_fixnum(/*EXT::INSTANCE*/1370));
  }
  y = ecl_allocate_instance(x->instance.clas, x->instance.length);
  y->instance.slotds = x->instance.slotds;
  y->instance.stamp = x->instance.stamp;
  y->instance.class_stamp = x->instance.class_stamp;
  memcpy(y->instance.slots, x->instance.slots,
         x->instance.length * sizeof(cl_object));
  {
#line 304
	const cl_env_ptr the_env = ecl_process_env();
#line 304
	#line 304
	cl_object __value0 = y;
#line 304
	the_env->nvalues = 1;
#line 304
	the_env->values[0] = __value0;
#line 304
	#line 304
	return __value0;
#line 304
}
;
}

#line 307
cl_object cl_find_class(cl_narg narg, cl_object name, ...)
{
#line 307

  cl_object class, hash;
#line 310
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 310
	cl_object errorp;
#line 310
	cl_object env;
#line 310
	va_list ARGS;
	va_start(ARGS, name);
#line 310
	if (ecl_unlikely(narg < 1|| narg > 3)) FEwrong_num_arguments(ecl_make_fixnum(945));
#line 310
	if (narg > 1) {
#line 310
		errorp = va_arg(ARGS,cl_object);
#line 310
	} else {
#line 310
		errorp = ECL_T;
#line 310
	}
#line 310
	if (narg > 2) {
#line 310
		env = va_arg(ARGS,cl_object);
#line 310
	} else {
#line 310
		env = ECL_NIL;
#line 310
	}
#line 310
  hash = ECL_SYM_VAL(the_env, ECL_SYM("SI::*CLASS-NAME-HASH-TABLE*",1018));
  class = ecl_gethash_safe(name, hash, ECL_NIL);
  if (class == ECL_NIL) {
    if (!Null(errorp))
      FEerror("No class named ~S.", 1, name);
  }
  {
#line 316
	#line 316
	cl_object __value0 = class;
#line 316
	the_env->nvalues = 1;
#line 316
	the_env->values[0] = __value0;
#line 316
	va_end(ARGS);
#line 316
	return __value0;
#line 316
}
;
}

cl_object
ecl_slot_value(cl_object x, const char *slot)
{
  cl_object slot_name = ecl_read_from_cstring(slot);
  return funcall(3, ECL_SYM("SLOT-VALUE",973), x, slot_name);
}

cl_object
ecl_slot_value_set(cl_object x, const char *slot, cl_object value)
{
  cl_object slot_name = ecl_read_from_cstring(slot);
  cl_object slot_setter = ecl_read_from_cstring("(SETF SLOT-VALUE)");
  return funcall(4, ecl_fdefinition(slot_setter), value, x, slot_name);
}

/**********************************************************************
 * IMPORTANT: THE FOLLOWING LIST IS LINKED TO src/clos/builtin.lsp
 **********************************************************************/
enum ecl_built_in_classes {
  ECL_BUILTIN_T = 0,
  ECL_BUILTIN_SEQUENCE,
  ECL_BUILTIN_LIST,
  ECL_BUILTIN_CONS,
  ECL_BUILTIN_ARRAY,
  ECL_BUILTIN_VECTOR,
  ECL_BUILTIN_STRING,
#ifdef ECL_UNICODE
  ECL_BUILTIN_BASE_STRING,
#endif
  ECL_BUILTIN_BIT_VECTOR,
  ECL_BUILTIN_STREAM,
  ECL_BUILTIN_ANSI_STREAM,
  ECL_BUILTIN_FILE_STREAM,
  ECL_BUILTIN_ECHO_STREAM,
  ECL_BUILTIN_STRING_STREAM,
  ECL_BUILTIN_TWO_WAY_STREAM,
  ECL_BUILTIN_SYNONYM_STREAM,
  ECL_BUILTIN_BROADCAST_STREAM,
  ECL_BUILTIN_CONCATENATED_STREAM,
  ECL_BUILTIN_SEQUENCE_STREAM,
  ECL_BUILTIN_CHARACTER,
  ECL_BUILTIN_NUMBER,
  ECL_BUILTIN_REAL,
  ECL_BUILTIN_RATIONAL,
  ECL_BUILTIN_INTEGER,
  ECL_BUILTIN_FIXNUM,
  ECL_BUILTIN_BIGNUM,
  ECL_BUILTIN_RATIO,
  ECL_BUILTIN_FLOAT,
  ECL_BUILTIN_SINGLE_FLOAT,
  ECL_BUILTIN_DOUBLE_FLOAT,
  ECL_BUILTIN_LONG_FLOAT,
  ECL_BUILTIN_COMPLEX,
#ifdef ECL_COMPLEX_FLOAT
  ECL_BUILTIN_COMPLEX_FLOAT,
  ECL_BUILTIN_COMPLEX_SINGLE_FLOAT,
  ECL_BUILTIN_COMPLEX_DOUBLE_FLOAT,
  ECL_BUILTIN_COMPLEX_LONG_FLOAT,
#endif
  ECL_BUILTIN_SYMBOL,
  ECL_BUILTIN_NULL,
  ECL_BUILTIN_KEYWORD,
  ECL_BUILTIN_PACKAGE,
  ECL_BUILTIN_FUNCTION,
  ECL_BUILTIN_PATHNAME,
  ECL_BUILTIN_LOGICAL_PATHNAME,
  ECL_BUILTIN_HASH_TABLE,
  ECL_BUILTIN_RANDOM_STATE,
  ECL_BUILTIN_READTABLE,
  ECL_BUILTIN_CODE_BLOCK,
  ECL_BUILTIN_FOREIGN_DATA,
  ECL_BUILTIN_FRAME,
  ECL_BUILTIN_WEAK_POINTER
#ifdef ECL_THREADS
  ,
  ECL_BUILTIN_PROCESS,
  ECL_BUILTIN_LOCK,
  ECL_BUILTIN_RWLOCK,
  ECL_BUILTIN_CONDITION_VARIABLE,
  ECL_BUILTIN_SEMAPHORE,
  ECL_BUILTIN_BARRIER,
  ECL_BUILTIN_MAILBOX
#endif
#ifdef ECL_SSE2
  , ECL_BUILTIN_SSE_PACK
#endif
};

cl_object
cl_class_of(cl_object x)
{
  size_t index;
  switch (ecl_t_of(x)) {
  case t_instance:
    {
#line 413
	const cl_env_ptr the_env = ecl_process_env();
#line 413
	#line 413
	cl_object __value0 = ECL_CLASS_OF(x);
#line 413
	the_env->nvalues = 1;
#line 413
	the_env->values[0] = __value0;
#line 413
	#line 413
	return __value0;
#line 413
}
;
  case t_fixnum:
    index = ECL_BUILTIN_FIXNUM; break;
  case t_bignum:
    index = ECL_BUILTIN_BIGNUM; break;
  case t_ratio:
    index = ECL_BUILTIN_RATIO; break;
  case t_singlefloat:
    index = ECL_BUILTIN_SINGLE_FLOAT; break;
  case t_doublefloat:
    index = ECL_BUILTIN_DOUBLE_FLOAT; break;
  case t_longfloat:
    index = ECL_BUILTIN_LONG_FLOAT; break;
  case t_complex:
    index = ECL_BUILTIN_COMPLEX; break;
#ifdef ECL_COMPLEX_FLOAT
  case t_csfloat:
    index = ECL_BUILTIN_COMPLEX_SINGLE_FLOAT; break;
  case t_cdfloat:
    index = ECL_BUILTIN_COMPLEX_DOUBLE_FLOAT; break;
  case t_clfloat:
    index = ECL_BUILTIN_COMPLEX_LONG_FLOAT; break;
#endif
  case t_character:
    index = ECL_BUILTIN_CHARACTER; break;
  case t_symbol:
    if (x->symbol.hpack == cl_core.keyword_package)
      index = ECL_BUILTIN_KEYWORD;
    else
      index = ECL_BUILTIN_SYMBOL;
    break;
  case t_package:
    index = ECL_BUILTIN_PACKAGE; break;
  case t_list:
    index = Null(x)? ECL_BUILTIN_NULL : ECL_BUILTIN_CONS; break;
  case t_hashtable:
    index = ECL_BUILTIN_HASH_TABLE; break;
  case t_array:
    index = ECL_BUILTIN_ARRAY; break;
  case t_vector:
    index = ECL_BUILTIN_VECTOR; break;
#ifdef ECL_UNICODE
  case t_string:
    index = ECL_BUILTIN_STRING; break;
  case t_base_string:
    index = ECL_BUILTIN_BASE_STRING; break;
#else
  case t_base_string:
    index = ECL_BUILTIN_STRING; break;
#endif
  case t_bitvector:
    index = ECL_BUILTIN_BIT_VECTOR; break;
  case t_stream:
    switch (x->stream.mode) {
    case ecl_smm_synonym:   index = ECL_BUILTIN_SYNONYM_STREAM; break;
    case ecl_smm_broadcast: index = ECL_BUILTIN_BROADCAST_STREAM; break;
    case ecl_smm_concatenated:      index = ECL_BUILTIN_CONCATENATED_STREAM; break;
    case ecl_smm_two_way:   index = ECL_BUILTIN_TWO_WAY_STREAM; break;
    case ecl_smm_string_input:
    case ecl_smm_string_output:     index = ECL_BUILTIN_STRING_STREAM; break;
    case ecl_smm_echo:              index = ECL_BUILTIN_ECHO_STREAM; break;
    case ecl_smm_sequence_input:
    case ecl_smm_sequence_output: index = ECL_BUILTIN_SEQUENCE_STREAM; break;
    default:                index = ECL_BUILTIN_FILE_STREAM; break;
    }
    break;
  case t_readtable:
    index = ECL_BUILTIN_READTABLE; break;
  case t_pathname:
    index = ECL_BUILTIN_PATHNAME; break;
  case t_random:
    index = ECL_BUILTIN_RANDOM_STATE; break;
  case t_bytecodes:
  case t_bclosure:
  case t_cfun:
  case t_cfunfixed:
  case t_cclosure:
    index = ECL_BUILTIN_FUNCTION; break;
#ifdef ECL_THREADS
  case t_process:
    index = ECL_BUILTIN_PROCESS; break;
  case t_lock:
    index = ECL_BUILTIN_LOCK; break;
  case t_rwlock:
    index = ECL_BUILTIN_RWLOCK; break;
  case t_condition_variable:
    index = ECL_BUILTIN_CONDITION_VARIABLE; break;
  case t_semaphore:
    index = ECL_BUILTIN_SEMAPHORE; break;
  case t_barrier:
    index = ECL_BUILTIN_BARRIER; break;
  case t_mailbox:
    index = ECL_BUILTIN_MAILBOX; break;
#endif
  case t_codeblock:
    index = ECL_BUILTIN_CODE_BLOCK; break;
  case t_foreign:
    index = ECL_BUILTIN_FOREIGN_DATA; break;
  case t_frame:
    index = ECL_BUILTIN_FRAME; break;
  case t_weak_pointer:
    index = ECL_BUILTIN_WEAK_POINTER; break;
#ifdef ECL_SSE2
  case t_sse_pack:
    index = ECL_BUILTIN_SSE_PACK; break;
#endif
  default:
    ecl_internal_error("not a lisp data object");
  }
  {
    /* We have to be careful because +builtin-classes+ might be empty! */
    /* In any case, since +builtin-classes+ is a constant, we may
     * optimize the slot access */
    cl_object v = ECL_SYM("CLOS::+BUILTIN-CLASSES+",1535)->symbol.value;
    cl_object output = Null(v)?
      cl_find_class(1,ECL_SYM("T",1)) :
      v->vector.self.t[index];
    {
#line 530
	const cl_env_ptr the_env = ecl_process_env();
#line 530
	#line 530
	cl_object __value0 = output;
#line 530
	the_env->nvalues = 1;
#line 530
	the_env->values[0] = __value0;
#line 530
	#line 530
	return __value0;
#line 530
}
;
  }
}

