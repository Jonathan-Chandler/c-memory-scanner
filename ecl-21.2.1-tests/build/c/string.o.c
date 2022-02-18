#line 1 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/c/string.d"
/* -*- Mode: C; c-basic-offset: 2; indent-tabs-mode: nil -*- */
/* vim: set filetype=c tabstop=2 shiftwidth=2 expandtab: */

/*
 * string.d - string routines
 *
 * Copyright (c) 1984 Taiichi Yuasa and Masami Hagiya
 * Copyright (c) 1990 Giuseppe Attardi
 * Copyright (c) 2001 Juan Jose Garcia Ripoll
 *
 * See file 'LICENSE' for the copyright details.
 *
 */

#include <ecl/ecl.h>
#include <string.h>
#include <ecl/internal.h>
#include <ecl/ecl-inl.h>

typedef ecl_character (*ecl_casefun)(ecl_character, bool *);

static cl_object
do_make_base_string(cl_index s, ecl_base_char code)
{
  cl_object x = ecl_alloc_simple_base_string(s);
  cl_index i;
  for (i = 0;  i < s;  i++)
    x->base_string.self[i] = code;
  return x;
}

#ifdef ECL_UNICODE
static cl_object
do_make_string(cl_index s, ecl_character code)
{
  cl_object x = ecl_alloc_simple_extended_string(s);
  cl_index i;
  for (i = 0;  i < s;  i++)
    x->string.self[i] = code;
  return x;
}
#else
#define do_make_string do_make_base_string
#endif

#line 47
cl_object cl_make_string(cl_narg narg, cl_object size, ...)
{
#line 47

  cl_index s;
  cl_object x;
  #line 51
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 51
	static cl_object KEYS[2] = {(cl_object)(cl_symbols+1277), (cl_object)(cl_symbols+1246)};
	cl_object initial_element;
	cl_object element_type;
#line 51
	cl_object KEY_VARS[4];
#line 51
	ecl_va_list ARGS;
	ecl_va_start(ARGS, size, narg, 1);
#line 51
	if (ecl_unlikely(narg < 1)) FEwrong_num_arguments(ecl_make_fixnum(536));
#line 51
	cl_parse_key(ARGS, 2, KEYS, KEY_VARS, NULL, 0);
#line 51
	if (KEY_VARS[2]==ECL_NIL) {
#line 51
	  initial_element = ECL_CODE_CHAR(' ');
	} else {
#line 51
	  initial_element = KEY_VARS[0];
	}
#line 51
	if (KEY_VARS[3]==ECL_NIL) {
#line 51
	  element_type = ECL_SYM("CHARACTER",224);
	} else {
#line 51
	  element_type = KEY_VARS[1];
	}
#line 51
  s = ecl_to_index(size);
  /* INV: ecl_[base_]char_code() checks the type of initial_element() */
  if (element_type == ECL_SYM("BASE-CHAR",122) || element_type == ECL_SYM("STANDARD-CHAR",796)) {
    int code = ecl_base_char_code(initial_element);
    x = do_make_base_string(s, code);
  } else if (element_type == ECL_SYM("CHARACTER",224)) {
    cl_index code = ecl_char_code(initial_element);
    x = do_make_string(s, code);
  } else if (_ecl_funcall3(ECL_SYM("SUBTYPEP",839), element_type, ECL_SYM("BASE-CHAR",122)) == ECL_T) {
    int code = ecl_base_char_code(initial_element);
    x = do_make_base_string(s, code);
  } else if (_ecl_funcall3(ECL_SYM("SUBTYPEP",839), element_type, ECL_SYM("CHARACTER",224)) == ECL_T) {
    cl_index code = ecl_char_code(initial_element);
    x = do_make_string(s, code);
  } else {
    FEerror("The type ~S is not a valid string char type.",
            1, element_type);
  }
  {
#line 69
	#line 69
	cl_object __value0 = x;
#line 69
	the_env->nvalues = 1;
#line 69
	the_env->values[0] = __value0;
#line 69
	ecl_va_end(ARGS);
#line 69
	return __value0;
#line 69
}
;
  }

/*
  Make a string of a certain size, with some eading zeros to
  keep C happy. The string must be adjustable, to allow further
  growth. (See unixfsys.c for its use).
*/
cl_object
ecl_alloc_adjustable_base_string(cl_index l)
{
  cl_object output = ecl_alloc_object(t_base_string);
  output->base_string.self       = (ecl_base_char *)ecl_alloc_atomic(l+1);
  output->base_string.self[l]    = 0;
  output->base_string.flags      = ECL_FLAG_HAS_FILL_POINTER | ECL_FLAG_ADJUSTABLE;
  output->base_string.elttype    = ecl_aet_bc;
  output->base_string.displaced  = ECL_NIL;
  output->base_string.dim        = l;
  output->base_string.fillp      = 0;
  return output;
}

#ifdef ECL_UNICODE
cl_object
ecl_alloc_adjustable_extended_string(cl_index l)
{
  cl_index bytes = sizeof(ecl_character) * l;
  cl_object output = ecl_alloc_object(t_string);
  output->string.self       = (ecl_character *)ecl_alloc_atomic(bytes);
  output->string.flags      = ECL_FLAG_HAS_FILL_POINTER | ECL_FLAG_ADJUSTABLE;
  output->string.elttype    = ecl_aet_ch;
  output->string.displaced  = ECL_NIL;
  output->string.dim        = l;
  output->string.fillp      = 0;
  return output;
}
#endif

/*
  ecl_make_simple_base_string(s) creates a simple-base string from C string s.
  ecl_make_constant_base_string(s) does the same, but without copying the C string.
*/
cl_object
ecl_make_constant_base_string(const char *s, cl_fixnum l)
{
  cl_object x = ecl_alloc_object(t_base_string);
  x->base_string.elttype = ecl_aet_bc;
  x->base_string.flags = 0; /* no fill pointer, not adjustable */
  x->base_string.displaced = ECL_NIL;
  if (l < 0) l = strlen(s);
  x->base_string.dim = (x->base_string.fillp = l);
  x->base_string.self = (ecl_base_char *)s;
  return x;
}

cl_object
ecl_make_simple_base_string(const char *s, cl_fixnum l)
{
  cl_object x;
  if (l < 0) l = strlen(s);

  x = ecl_alloc_simple_base_string(l);
  memcpy(x->base_string.self, s, l);
  return x;
}

cl_object
ecl_cstring_to_base_string_or_nil(const char *s)
{
  if (s == NULL)
    return ECL_NIL;
  else
    return ecl_make_simple_base_string(s,-1);
}

bool
ecl_fits_in_base_string(cl_object s)
{
  switch (ecl_t_of(s)) {
#ifdef ECL_UNICODE
  case t_string: {
    cl_index i;
    for (i = 0; i < s->string.fillp; i++) {
      if (!ECL_BASE_CHAR_CODE_P(s->string.self[i]))
        return 0;
    }
    return 1;
  }
#endif
  case t_base_string:
    return 1;
  default:
    FEwrong_type_nth_arg(ecl_make_fixnum(/*SI::COPY-TO-SIMPLE-BASE-STRING*/1062),1,s,ecl_make_fixnum(/*STRING*/807));
  }
}

cl_object
si_copy_to_simple_base_string(cl_object x)
{
  cl_object y;
 AGAIN:
  switch(ecl_t_of(x)) {
  case t_symbol:
    x = x->symbol.name;
    goto AGAIN;
  case t_character:
    x = cl_string(x);
    goto AGAIN;
#ifdef ECL_UNICODE
  case t_string: {
    cl_index index, length = x->string.fillp;
    y = ecl_alloc_simple_base_string(length);
    for (index=0; index < length; index++) {
      ecl_character c = x->string.self[index];
      if (!ECL_BASE_CHAR_CODE_P(c))
        FEerror("Cannot coerce string ~A to a base-string", 1, x);
      y->base_string.self[index] = c;
    }
    break;
  }
#endif
  case t_base_string: {
    cl_index length = x->base_string.fillp;
    y = ecl_alloc_simple_base_string(length);
    memcpy(y->base_string.self, x->base_string.self, length);
    break;
  }
  case t_list:
    if (Null(x)) {
      x = ECL_NIL_SYMBOL->symbol.name;
      goto AGAIN;
    }
  default:
    FEwrong_type_nth_arg(ecl_make_fixnum(/*SI::COPY-TO-SIMPLE-BASE-STRING*/1062),1,x,ecl_make_fixnum(/*STRING*/807));
  }
  {
#line 204
	const cl_env_ptr the_env = ecl_process_env();
#line 204
	#line 204
	cl_object __value0 = y;
#line 204
	the_env->nvalues = 1;
#line 204
	the_env->values[0] = __value0;
#line 204
	#line 204
	return __value0;
#line 204
}
;
}

cl_object
cl_string(cl_object x)
{
  switch (ecl_t_of(x)) {
  case t_symbol:
    x = x->symbol.name;
    break;
  case t_character: {
    cl_object y;
    ecl_character c = ECL_CHAR_CODE(x);
#ifdef ECL_UNICODE
    if (ECL_BASE_CHAR_CODE_P(c)) {
      y = ecl_alloc_simple_base_string(1);
      y->base_string.self[0] = c;
      x = y;
    } else {
      y = ecl_alloc_simple_extended_string(1);
      y->string.self[0] = c;
      x = y;
    }
#else
    y = ecl_alloc_simple_base_string(1);
    y->base_string.self[0] = c;
    x = y;
    break;
#endif
  }
#ifdef ECL_UNICODE
  case t_string:
#endif
  case t_base_string:
    break;
  case t_list:
    if (Null(x)) {
      x = ECL_NIL_SYMBOL->symbol.name;
      break;
    }
  default:
    FEwrong_type_only_arg(ecl_make_fixnum(/*STRING*/807),x,ecl_make_fixnum(/*STRING*/807));
  }
  {
#line 247
	const cl_env_ptr the_env = ecl_process_env();
#line 247
	#line 247
	cl_object __value0 = x;
#line 247
	the_env->nvalues = 1;
#line 247
	the_env->values[0] = __value0;
#line 247
	#line 247
	return __value0;
#line 247
}
;
}

#ifdef ECL_UNICODE
cl_object
si_coerce_to_base_string(cl_object x)
{
  if (!ECL_BASE_STRING_P(x)) {
    x = si_copy_to_simple_base_string(x);
  }
  {
#line 257
	const cl_env_ptr the_env = ecl_process_env();
#line 257
	#line 257
	cl_object __value0 = x;
#line 257
	the_env->nvalues = 1;
#line 257
	the_env->values[0] = __value0;
#line 257
	#line 257
	return __value0;
#line 257
}
;
}

cl_object
si_coerce_to_extended_string(cl_object x)
{
  cl_object y;
 AGAIN:
  switch (ecl_t_of(x)) {
  case t_symbol:
    x = x->symbol.name;
    goto AGAIN;
  case t_character:
    y = ecl_alloc_simple_extended_string(1);
    y->string.self[0] = ECL_CHAR_CODE(x);
    break;
  case t_base_string: {
    cl_index index, len = x->base_string.dim;
    y = ecl_alloc_simple_extended_string(x->base_string.fillp);
    for(index=0; index < len; index++) {
      y->string.self[index] = x->base_string.self[index];
    }
    y->string.fillp = x->base_string.fillp;
  }
  case t_string:
    y = x;
    break;
  case t_list:
    if (Null(x)) {
      x = ECL_NIL_SYMBOL->symbol.name;
      goto AGAIN;
    }
  default:
    FEwrong_type_nth_arg(ecl_make_fixnum(/*SI::COERCE-TO-EXTENDED-STRING*/1058),1,x,ecl_make_fixnum(/*STRING*/807));
  }
  {
#line 292
	const cl_env_ptr the_env = ecl_process_env();
#line 292
	#line 292
	cl_object __value0 = y;
#line 292
	the_env->nvalues = 1;
#line 292
	the_env->values[0] = __value0;
#line 292
	#line 292
	return __value0;
#line 292
}
;
}
#endif

cl_object
cl_char(cl_object object, cl_object index)
{
  cl_index position = ecl_to_index(index);
  {
#line 300
	const cl_env_ptr the_env = ecl_process_env();
#line 300
	#line 300
	cl_object __value0 = ECL_CODE_CHAR(ecl_char(object, position));
#line 300
	the_env->nvalues = 1;
#line 300
	the_env->values[0] = __value0;
#line 300
	#line 300
	return __value0;
#line 300
}
;
}

ecl_character
ecl_char(cl_object object, cl_index index)
{
  /* CHAR bypasses fill pointers when accessing strings */
  switch(ecl_t_of(object)) {
#ifdef ECL_UNICODE
  case t_string:
    if (index >= object->string.dim)
      FEtype_error_index(object, index);
    return object->string.self[index];
#endif
  case t_base_string:
    if (index >= object->base_string.dim)
      FEtype_error_index(object, index);
    return object->base_string.self[index];
  default:
    FEwrong_type_nth_arg(ecl_make_fixnum(/*CHAR*/205),1,object,ecl_make_fixnum(/*STRING*/807));
  }
}

cl_object
si_char_set(cl_object object, cl_object index, cl_object value)
{
  cl_index position = ecl_to_index(index);
  cl_index c = ecl_char_code(value);
  ecl_char_set(object, position, c);
  {
#line 329
	const cl_env_ptr the_env = ecl_process_env();
#line 329
	#line 329
	cl_object __value0 = value;
#line 329
	the_env->nvalues = 1;
#line 329
	the_env->values[0] = __value0;
#line 329
	#line 329
	return __value0;
#line 329
}
;
}

ecl_character
ecl_char_set(cl_object object, cl_index index, ecl_character value)
{
  /* CHAR bypasses fill pointers when accessing strings */
  switch(ecl_t_of(object)) {
#ifdef ECL_UNICODE
  case t_string:
    if (index >= object->string.dim)
      FEtype_error_index(object, index);
    return object->string.self[index] = value;
#endif
  case t_base_string:
    if (index >= object->base_string.dim)
      FEtype_error_index(object, index);
    return object->base_string.self[index] = value;
  default:
    FEwrong_type_nth_arg(ecl_make_fixnum(/*SI::CHAR-SET*/1054),1,object,ecl_make_fixnum(/*STRING*/807));
  }
}

#ifdef ECL_UNICODE
static int
compare_strings(cl_object string1, cl_index s1, cl_index e1,
                cl_object string2, cl_index s2, cl_index e2,
                int case_sensitive, cl_index *m)
{
  cl_index c1, c2;
  for (; s1 < e1; s1++, s2++) {
    if (s2 >= e2) { /* s1 is longer than s2, therefore s2 < s1 */
      *m = s1;
      return +1;
    }
    c1 = ecl_char(string1, s1);
    c2 = ecl_char(string2, s2);
    if (!case_sensitive) {
      c1 = ecl_char_upcase(c1);
      c2 = ecl_char_upcase(c2);
    }
    if (c1 < c2) {
      *m = s1;
      return -1;
    } else if (c1 > c2) {
      *m = s1;
      return +1;
    }
  }
  *m = s1;
  if (s2 >= e2) {
    return 0;
  } else { /* s1 is shorter than s2, hence s1 < s2 */
    return -1;
  }
}
#endif

static int
compare_base(unsigned char *s1, cl_index l1, unsigned char *s2, cl_index l2,
             int case_sensitive, cl_index *m)
{
  cl_index l, c1, c2;
  for (l = 0; l < l1; l++, s1++, s2++) {
    if (l == l2) { /* s1 is longer than s2, therefore s2 < s1 */
      *m = l;
      return +1;
    }
    c1 = *s1;
    c2 = *s2;
    if (!case_sensitive) {
      c1 = ecl_char_upcase(c1);
      c2 = ecl_char_upcase(c2);
    }
    if (c1 < c2) {
      *m = l;
      return -1;
    } else if (c1 > c2) {
      *m = l;
      return +1;
    }
  }
  *m = l;
  if (l1 == l2) 
    return 0;
  else { /* s1 is shorter than s2, hence s1 < s2 */
    return -1;
  }
}

#line 420
cl_object cl_stringE(cl_narg narg, cl_object string1, cl_object string2, ...)
{
#line 420

  cl_index_pair p;
  cl_index s1, e1, s2, e2;
  #line 424
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 424
	static cl_object KEYS[4] = {(cl_object)(cl_symbols+1338), (cl_object)(cl_symbols+1248), (cl_object)(cl_symbols+1339), (cl_object)(cl_symbols+1249)};
	cl_object start1;
	cl_object end1;
	cl_object start2;
	cl_object end2;
#line 424
	cl_object KEY_VARS[8];
#line 424
	ecl_va_list ARGS;
	ecl_va_start(ARGS, string2, narg, 2);
#line 424
	if (ecl_unlikely(narg < 2)) FEwrong_num_arguments(ecl_make_fixnum(824));
#line 424
	cl_parse_key(ARGS, 4, KEYS, KEY_VARS, NULL, 0);
#line 424
	if (KEY_VARS[4]==ECL_NIL) {
#line 424
	  start1 = ecl_make_fixnum(0);
	} else {
#line 424
	  start1 = KEY_VARS[0];
	}
#line 424
	if (KEY_VARS[5]==ECL_NIL) {
#line 424
	  end1 = ECL_NIL;
	} else {
#line 424
	  end1 = KEY_VARS[1];
	}
#line 424
	if (KEY_VARS[6]==ECL_NIL) {
#line 424
	  start2 = ecl_make_fixnum(0);
	} else {
#line 424
	  start2 = KEY_VARS[2];
	}
#line 424
	if (KEY_VARS[7]==ECL_NIL) {
#line 424
	  end2 = ECL_NIL;
	} else {
#line 424
	  end2 = KEY_VARS[3];
	}
#line 424
  {
    string1 = cl_string(string1);
    string2 = cl_string(string2);
    p = ecl_vector_start_end(ecl_make_fixnum(/*STRING=*/824), string1, start1, end1);
    s1 = p.start; e1 = p.end;
    p = ecl_vector_start_end(ecl_make_fixnum(/*STRING=*/824), string2, start2, end2);
    s2 = p.start; e2 = p.end;
    if (e1 - s1 != e2 - s2) {
      {
#line 432
	#line 432
	cl_object __value0 = ECL_NIL;
#line 432
	the_env->nvalues = 1;
#line 432
	the_env->values[0] = __value0;
#line 432
	ecl_va_end(ARGS);
#line 432
	return __value0;
#line 432
}
;
    }
#ifdef ECL_UNICODE
    if (string1->string.t == t_string) {
      if (string2->string.t == t_string) {
        while (s1 < e1)
          if (string1->string.self[s1++] != string2->string.self[s2++]) {
            {
#line 439
	#line 439
	cl_object __value0 = ECL_NIL;
#line 439
	the_env->nvalues = 1;
#line 439
	the_env->values[0] = __value0;
#line 439
	ecl_va_end(ARGS);
#line 439
	return __value0;
#line 439
}
;
          }
        {
#line 441
	#line 441
	cl_object __value0 = ECL_T;
#line 441
	the_env->nvalues = 1;
#line 441
	the_env->values[0] = __value0;
#line 441
	ecl_va_end(ARGS);
#line 441
	return __value0;
#line 441
}
;
      } else {
        while (s1 < e1)
          if (string1->string.self[s1++] != string2->base_string.self[s2++]) {
            {
#line 445
	#line 445
	cl_object __value0 = ECL_NIL;
#line 445
	the_env->nvalues = 1;
#line 445
	the_env->values[0] = __value0;
#line 445
	ecl_va_end(ARGS);
#line 445
	return __value0;
#line 445
}
;
          }
        {
#line 447
	#line 447
	cl_object __value0 = ECL_T;
#line 447
	the_env->nvalues = 1;
#line 447
	the_env->values[0] = __value0;
#line 447
	ecl_va_end(ARGS);
#line 447
	return __value0;
#line 447
}
;
      }
    } else {
      if (string2->string.t == t_string) {
        while (s1 < e1)
          if (string1->base_string.self[s1++] != string2->string.self[s2++]) {
            {
#line 453
	#line 453
	cl_object __value0 = ECL_NIL;
#line 453
	the_env->nvalues = 1;
#line 453
	the_env->values[0] = __value0;
#line 453
	ecl_va_end(ARGS);
#line 453
	return __value0;
#line 453
}
;
          }
        {
#line 455
	#line 455
	cl_object __value0 = ECL_T;
#line 455
	the_env->nvalues = 1;
#line 455
	the_env->values[0] = __value0;
#line 455
	ecl_va_end(ARGS);
#line 455
	return __value0;
#line 455
}
;
      } else {
        while (s1 < e1)
          if (string1->base_string.self[s1++] != string2->base_string.self[s2++]) {
            {
#line 459
	#line 459
	cl_object __value0 = ECL_NIL;
#line 459
	the_env->nvalues = 1;
#line 459
	the_env->values[0] = __value0;
#line 459
	ecl_va_end(ARGS);
#line 459
	return __value0;
#line 459
}
;
          }
        {
#line 461
	#line 461
	cl_object __value0 = ECL_T;
#line 461
	the_env->nvalues = 1;
#line 461
	the_env->values[0] = __value0;
#line 461
	ecl_va_end(ARGS);
#line 461
	return __value0;
#line 461
}
;
      }
    }
#else
    while (s1 < e1)
      if (string1->base_string.self[s1++] != string2->base_string.self[s2++]) {
        {
#line 467
	#line 467
	cl_object __value0 = ECL_NIL;
#line 467
	the_env->nvalues = 1;
#line 467
	the_env->values[0] = __value0;
#line 467
	ecl_va_end(ARGS);
#line 467
	return __value0;
#line 467
}
;
      }
#endif
    {
#line 470
	#line 470
	cl_object __value0 = ECL_T;
#line 470
	the_env->nvalues = 1;
#line 470
	the_env->values[0] = __value0;
#line 470
	ecl_va_end(ARGS);
#line 470
	return __value0;
#line 470
}
;
  }
  }

/*
  This correponds to string= (just the string equality).
*/
bool
ecl_string_eq(cl_object x, cl_object y)
{
  cl_index i, j;
  i = x->base_string.fillp;
  j = y->base_string.fillp;
  if (i != j) return 0;
#ifdef ECL_UNICODE
  switch(ecl_t_of(x)) {
  case t_string:
    switch(ecl_t_of(y)) {
    case t_string:
      return memcmp(x->string.self, y->string.self, i * sizeof *x->string.self) == 0;
    case t_base_string: {
      cl_index index;
      for(index=0; index<i; index++)
        if (x->string.self[index] != y->base_string.self[index])
          return 0;
      return 1;
    }
    default:
      FEwrong_type_nth_arg(ecl_make_fixnum(/*STRING=*/824),2,y,ecl_make_fixnum(/*STRING*/807));
    }
    break;
  case t_base_string:
    switch(ecl_t_of(y)) {
    case t_string:
      return ecl_string_eq(y, x);
    case t_base_string:
      return memcmp(x->base_string.self, y->base_string.self, i) == 0;
    default:
      FEwrong_type_nth_arg(ecl_make_fixnum(/*STRING=*/824),2,y,ecl_make_fixnum(/*STRING*/807));
    }
    break;
  default:
    FEwrong_type_nth_arg(ecl_make_fixnum(/*STRING=*/824),2,x,ecl_make_fixnum(/*STRING*/807));
  }
#else
  return memcmp(x->base_string.self, y->base_string.self, i) == 0;
#endif
}


#line 521
cl_object cl_string_equal(cl_narg narg, cl_object string1, cl_object string2, ...)
{
#line 521

  cl_index s1, e1, s2, e2;
  cl_index_pair p;
  int output;
  #line 526
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 526
	static cl_object KEYS[4] = {(cl_object)(cl_symbols+1338), (cl_object)(cl_symbols+1248), (cl_object)(cl_symbols+1339), (cl_object)(cl_symbols+1249)};
	cl_object start1;
	cl_object end1;
	cl_object start2;
	cl_object end2;
#line 526
	cl_object KEY_VARS[8];
#line 526
	ecl_va_list ARGS;
	ecl_va_start(ARGS, string2, narg, 2);
#line 526
	if (ecl_unlikely(narg < 2)) FEwrong_num_arguments(ecl_make_fixnum(810));
#line 526
	cl_parse_key(ARGS, 4, KEYS, KEY_VARS, NULL, 0);
#line 526
	if (KEY_VARS[4]==ECL_NIL) {
#line 526
	  start1 = ecl_make_fixnum(0);
	} else {
#line 526
	  start1 = KEY_VARS[0];
	}
#line 526
	if (KEY_VARS[5]==ECL_NIL) {
#line 526
	  end1 = ECL_NIL;
	} else {
#line 526
	  end1 = KEY_VARS[1];
	}
#line 526
	if (KEY_VARS[6]==ECL_NIL) {
#line 526
	  start2 = ecl_make_fixnum(0);
	} else {
#line 526
	  start2 = KEY_VARS[2];
	}
#line 526
	if (KEY_VARS[7]==ECL_NIL) {
#line 526
	  end2 = ECL_NIL;
	} else {
#line 526
	  end2 = KEY_VARS[3];
	}
#line 526
  string1 = cl_string(string1);
  string2 = cl_string(string2);
  p = ecl_vector_start_end(ecl_make_fixnum(/*STRING=*/824), string1, start1, end1);
  s1 = p.start; e1 = p.end;
  p = ecl_vector_start_end(ecl_make_fixnum(/*STRING=*/824), string2, start2, end2);
  s2 = p.start; e2 = p.end;
  if (e1 - s1 != e2 - s2) {
    {
#line 533
	#line 533
	cl_object __value0 = ECL_NIL;
#line 533
	the_env->nvalues = 1;
#line 533
	the_env->values[0] = __value0;
#line 533
	ecl_va_end(ARGS);
#line 533
	return __value0;
#line 533
}
;
  }
#ifdef ECL_UNICODE
  if (ECL_EXTENDED_STRING_P(string1) || ECL_EXTENDED_STRING_P(string2)) {
    output = compare_strings(string1, s1, e1, string2, s2, e2, 0, &e1);
  } else
#endif
    output = compare_base(string1->base_string.self + s1, e1 - s1,
                          string2->base_string.self + s2, e2 - s2,
                          0, &e1);
  {
#line 543
	#line 543
	cl_object __value0 = ((output == 0)? ECL_T : ECL_NIL);
#line 543
	the_env->nvalues = 1;
#line 543
	the_env->values[0] = __value0;
#line 543
	ecl_va_end(ARGS);
#line 543
	return __value0;
#line 543
}
;
  }

static cl_object
string_compare(cl_narg narg, int sign1, int sign2, int case_sensitive, ecl_va_list ARGS)
{
  cl_object string1 = ecl_va_arg(ARGS);
  cl_object string2 = ecl_va_arg(ARGS);
  cl_index s1, e1, s2, e2;
  cl_index_pair p;
  int output;
  cl_object result;
  cl_object KEYS[4];
#define start1 KEY_VARS[0]
#define end1 KEY_VARS[1]
#define start2 KEY_VARS[2]
#define end2 KEY_VARS[3]
#define start1p KEY_VARS[4]
#define start2p KEY_VARS[6]
  cl_object KEY_VARS[8];

  if (narg < 2) FEwrong_num_arguments_anonym();
  KEYS[0]=ECL_SYM(":START1",1338);
  KEYS[1]=ECL_SYM(":END1",1248);
  KEYS[2]=ECL_SYM(":START2",1339);
  KEYS[3]=ECL_SYM(":END2",1249);
  cl_parse_key(ARGS, 4, KEYS, KEY_VARS, NULL, FALSE);

  string1 = cl_string(string1);
  string2 = cl_string(string2);
  if (start1p == ECL_NIL) start1 = ecl_make_fixnum(0);
  if (start2p == ECL_NIL) start2 = ecl_make_fixnum(0);
  p = ecl_vector_start_end(ecl_make_fixnum(/*STRING=*/824), string1, start1, end1);
  s1 = p.start; e1 = p.end;
  p = ecl_vector_start_end(ecl_make_fixnum(/*STRING=*/824), string2, start2, end2);
  s2 = p.start; e2 = p.end;
#ifdef ECL_UNICODE
  if (ECL_EXTENDED_STRING_P(string1) || ECL_EXTENDED_STRING_P(string2)) {
    output = compare_strings(string1, s1, e1, string2, s2, e2,
                             case_sensitive, &e1);
  } else
#endif
    {
      output = compare_base(string1->base_string.self + s1, e1 - s1,
                            string2->base_string.self + s2, e2 - s2,
                            case_sensitive, &e1);
      e1 += s1;
    }
  if (output == sign1 || output == sign2) {
    result = ecl_make_fixnum(e1);
  } else {
    result = ECL_NIL;
  }
  {
#line 596
	const cl_env_ptr the_env = ecl_process_env();
#line 596
	#line 596
	cl_object __value0 = result;
#line 596
	the_env->nvalues = 1;
#line 596
	the_env->values[0] = __value0;
#line 596
	#line 596
	return __value0;
#line 596
}
;
#undef start1p
#undef start2p
#undef start1
#undef end1
#undef start2
#undef end2
    }

#line 605
cl_object cl_stringL(cl_narg narg, ...)
{
#line 605

  #line 607
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 607
	ecl_va_list args;
	ecl_va_start(args, narg, narg, 0);
#line 607
	if (ecl_unlikely(narg < 0)) FEwrong_num_arguments(ecl_make_fixnum(822));
#line 607
  {
#line 607
	#line 607
	cl_object __value0 = string_compare(narg, -1, -1, 1, args);
#line 607
	the_env->nvalues = 1;
#line 607
	the_env->values[0] = __value0;
#line 607
	ecl_va_end(args);
#line 607
	return __value0;
#line 607
}
;
  }

#line 610
cl_object cl_stringG(cl_narg narg, ...)
{
#line 610

  #line 612
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 612
	ecl_va_list args;
	ecl_va_start(args, narg, narg, 0);
#line 612
	if (ecl_unlikely(narg < 0)) FEwrong_num_arguments(ecl_make_fixnum(825));
#line 612
  {
#line 612
	#line 612
	cl_object __value0 = string_compare(narg, +1, +1, 1, args);
#line 612
	the_env->nvalues = 1;
#line 612
	the_env->values[0] = __value0;
#line 612
	ecl_va_end(args);
#line 612
	return __value0;
#line 612
}
;
  }

#line 615
cl_object cl_stringLE(cl_narg narg, ...)
{
#line 615

  #line 617
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 617
	ecl_va_list args;
	ecl_va_start(args, narg, narg, 0);
#line 617
	if (ecl_unlikely(narg < 0)) FEwrong_num_arguments(ecl_make_fixnum(823));
#line 617
  {
#line 617
	#line 617
	cl_object __value0 = string_compare(narg, -1, 0, 1, args);
#line 617
	the_env->nvalues = 1;
#line 617
	the_env->values[0] = __value0;
#line 617
	ecl_va_end(args);
#line 617
	return __value0;
#line 617
}
;
  }

#line 620
cl_object cl_stringGE(cl_narg narg, ...)
{
#line 620

  #line 622
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 622
	ecl_va_list args;
	ecl_va_start(args, narg, narg, 0);
#line 622
	if (ecl_unlikely(narg < 0)) FEwrong_num_arguments(ecl_make_fixnum(826));
#line 622
  {
#line 622
	#line 622
	cl_object __value0 = string_compare(narg, 0, +1, 1, args);
#line 622
	the_env->nvalues = 1;
#line 622
	the_env->values[0] = __value0;
#line 622
	ecl_va_end(args);
#line 622
	return __value0;
#line 622
}
;
  }

#line 625
cl_object cl_stringNE(cl_narg narg, ...)
{
#line 625

  #line 627
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 627
	ecl_va_list args;
	ecl_va_start(args, narg, narg, 0);
#line 627
	if (ecl_unlikely(narg < 0)) FEwrong_num_arguments(ecl_make_fixnum(821));
#line 627
  {
#line 627
	#line 627
	cl_object __value0 = string_compare(narg, -1, +1, 1, args);
#line 627
	the_env->nvalues = 1;
#line 627
	the_env->values[0] = __value0;
#line 627
	ecl_va_end(args);
#line 627
	return __value0;
#line 627
}
;
  }

#line 630
cl_object cl_string_lessp(cl_narg narg, ...)
{
#line 630

  #line 632
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 632
	ecl_va_list args;
	ecl_va_start(args, narg, narg, 0);
#line 632
	if (ecl_unlikely(narg < 0)) FEwrong_num_arguments(ecl_make_fixnum(813));
#line 632
  {
#line 632
	#line 632
	cl_object __value0 = string_compare(narg, -1, -1, 0, args);
#line 632
	the_env->nvalues = 1;
#line 632
	the_env->values[0] = __value0;
#line 632
	ecl_va_end(args);
#line 632
	return __value0;
#line 632
}
;
  }

#line 635
cl_object cl_string_greaterp(cl_narg narg, ...)
{
#line 635

  #line 637
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 637
	ecl_va_list args;
	ecl_va_start(args, narg, narg, 0);
#line 637
	if (ecl_unlikely(narg < 0)) FEwrong_num_arguments(ecl_make_fixnum(811));
#line 637
  {
#line 637
	#line 637
	cl_object __value0 = string_compare(narg, +1, +1, 0, args);
#line 637
	the_env->nvalues = 1;
#line 637
	the_env->values[0] = __value0;
#line 637
	ecl_va_end(args);
#line 637
	return __value0;
#line 637
}
;
  }

#line 640
cl_object cl_string_not_greaterp(cl_narg narg, ...)
{
#line 640

  #line 642
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 642
	ecl_va_list args;
	ecl_va_start(args, narg, narg, 0);
#line 642
	if (ecl_unlikely(narg < 0)) FEwrong_num_arguments(ecl_make_fixnum(815));
#line 642
  {
#line 642
	#line 642
	cl_object __value0 = string_compare(narg, -1, 0, 0, args);
#line 642
	the_env->nvalues = 1;
#line 642
	the_env->values[0] = __value0;
#line 642
	ecl_va_end(args);
#line 642
	return __value0;
#line 642
}
;
  }

#line 645
cl_object cl_string_not_lessp(cl_narg narg, ...)
{
#line 645

  #line 647
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 647
	ecl_va_list args;
	ecl_va_start(args, narg, narg, 0);
#line 647
	if (ecl_unlikely(narg < 0)) FEwrong_num_arguments(ecl_make_fixnum(816));
#line 647
  {
#line 647
	#line 647
	cl_object __value0 = string_compare(narg, 0, +1, 0, args);
#line 647
	the_env->nvalues = 1;
#line 647
	the_env->values[0] = __value0;
#line 647
	ecl_va_end(args);
#line 647
	return __value0;
#line 647
}
;
  }

#line 650
cl_object cl_string_not_equal(cl_narg narg, ...)
{
#line 650

  #line 652
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 652
	ecl_va_list args;
	ecl_va_start(args, narg, narg, 0);
#line 652
	if (ecl_unlikely(narg < 0)) FEwrong_num_arguments(ecl_make_fixnum(814));
#line 652
  {
#line 652
	#line 652
	cl_object __value0 = string_compare(narg, -1, +1, 0, args);
#line 652
	the_env->nvalues = 1;
#line 652
	the_env->values[0] = __value0;
#line 652
	ecl_va_end(args);
#line 652
	return __value0;
#line 652
}
;
  }

bool
ecl_member_char(ecl_character c, cl_object char_bag)
{
  cl_index i, f;
  switch (ecl_t_of(char_bag)) {
  case t_list:
    loop_for_in(char_bag) {
      cl_object other = CAR(char_bag);
      if (ECL_CHARACTERP(other) && c == ECL_CHAR_CODE(other))
        return(TRUE);
    } end_loop_for_in;
    return(FALSE);
  case t_vector:
    for (i = 0, f = char_bag->vector.fillp;  i < f;  i++) {
      cl_object other = char_bag->vector.self.t[i];
      if (ECL_CHARACTERP(other) && c == ECL_CHAR_CODE(other))
        return(TRUE);
    }
    return(FALSE);
#ifdef ECL_UNICODE
  case t_string:
    for (i = 0, f = char_bag->string.fillp;  i < f;  i++) {
      if (c == char_bag->string.self[i])
        return(TRUE);
    }
    return(FALSE);
#endif
  case t_base_string:
    for (i = 0, f = char_bag->base_string.fillp;  i < f;  i++) {
      if (c == char_bag->base_string.self[i])
        return(TRUE);
    }
    return(FALSE);
  case t_bitvector:
    return(FALSE);
  default:
    FEwrong_type_nth_arg(ecl_make_fixnum(/*MEMBER*/554),2,char_bag,ecl_make_fixnum(/*SEQUENCE*/743));
  }
}

static cl_object
string_trim0(bool left_trim, bool right_trim, cl_object char_bag, cl_object strng)
{
  cl_index i, j;

  strng = cl_string(strng);
  i = 0;
  j = ecl_length(strng);
  if (left_trim) {
    for (;  i < j;  i++) {
      cl_index c = ecl_char(strng, i);
      if (!ecl_member_char(c, char_bag))
        break;
    }
  }
  if (right_trim) {
    for (; j > i; j--) {
      cl_index c = ecl_char(strng, j-1);
      if (!ecl_member_char(c, char_bag)) {
        break;
      }
    }
  }
  return cl_subseq(3, strng, ecl_make_fixnum(i), ecl_make_fixnum(j));
}

cl_object
cl_string_trim(cl_object char_bag, cl_object strng)
{
  return string_trim0(TRUE, TRUE, char_bag, strng);
}

cl_object
cl_string_left_trim(cl_object char_bag, cl_object strng)
{
  return string_trim0(TRUE, FALSE, char_bag, strng);
}

cl_object
cl_string_right_trim(cl_object char_bag, cl_object strng)
{
  return string_trim0(FALSE, TRUE, char_bag, strng);
}

static cl_object
string_case(cl_narg narg, cl_object fun, ecl_casefun casefun, ecl_va_list ARGS)
{
  cl_object strng = ecl_va_arg(ARGS);
  cl_index_pair p;
  cl_index i;
  bool b;
  cl_object KEYS[2];
#define kstart KEY_VARS[0]
#define kend KEY_VARS[1]
#define kstartp KEY_VARS[2]
  cl_object KEY_VARS[4];

  if (narg < 1) FEwrong_num_arguments_anonym();
  KEYS[0]=ECL_SYM(":START",1337);
  KEYS[1]=ECL_SYM(":END",1247);
  cl_parse_key(ARGS, 2, KEYS, KEY_VARS, NULL, FALSE);

  strng = cl_string(strng);
  strng = cl_copy_seq(strng);
  if (kstartp == ECL_NIL)
    kstart = ecl_make_fixnum(0);
  p = ecl_vector_start_end(fun, strng, kstart, kend);
  b = TRUE;
#ifdef ECL_UNICODE
  if (ECL_EXTENDED_STRING_P(strng)) {
    for (i = p.start;  i < p.end;  i++)
      strng->string.self[i] = (*casefun)(strng->string.self[i], &b);
  } else
#endif
    for (i = p.start;  i < p.end;  i++)
      strng->base_string.self[i] = (*casefun)(strng->base_string.self[i], &b);
  {
#line 771
	const cl_env_ptr the_env = ecl_process_env();
#line 771
	#line 771
	cl_object __value0 = strng;
#line 771
	the_env->nvalues = 1;
#line 771
	the_env->values[0] = __value0;
#line 771
	#line 771
	return __value0;
#line 771
}
;
#undef kstartp
#undef kstart
#undef kend
}

static ecl_character
char_upcase(ecl_character c, bool *bp)
{
  return ecl_char_upcase(c);
}

#line 783
cl_object cl_string_upcase(cl_narg narg, ...)
{
#line 783

  #line 785
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 785
	ecl_va_list args;
	ecl_va_start(args, narg, narg, 0);
#line 785
	if (ecl_unlikely(narg < 0)) FEwrong_num_arguments(ecl_make_fixnum(820));
#line 785
  {
#line 785
	#line 785
	cl_object __value0 = string_case(narg, ecl_make_fixnum(/*STRING-UPCASE*/820), char_upcase, args);
#line 785
	the_env->nvalues = 1;
#line 785
	the_env->values[0] = __value0;
#line 785
	ecl_va_end(args);
#line 785
	return __value0;
#line 785
}
;
  }

static ecl_character
char_downcase(ecl_character c, bool *bp)
{
  return ecl_char_downcase(c);
}

#line 794
cl_object cl_string_downcase(cl_narg narg, ...)
{
#line 794

  #line 796
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 796
	ecl_va_list args;
	ecl_va_start(args, narg, narg, 0);
#line 796
	if (ecl_unlikely(narg < 0)) FEwrong_num_arguments(ecl_make_fixnum(808));
#line 796
  {
#line 796
	#line 796
	cl_object __value0 = string_case(narg, ecl_make_fixnum(/*STRING-DOWNCASE*/808), char_downcase, args);
#line 796
	the_env->nvalues = 1;
#line 796
	the_env->values[0] = __value0;
#line 796
	ecl_va_end(args);
#line 796
	return __value0;
#line 796
}
;
  }

static ecl_character
char_capitalize(ecl_character c, bool *bp)
{
  if (ecl_lower_case_p(c)) {
    if (*bp)
      c = ecl_char_upcase(c);
    *bp = FALSE;
  } else if (ecl_upper_case_p(c)) {
    if (!*bp)
      c = ecl_char_downcase(c);
    *bp = FALSE;
  } else {
    *bp = !ecl_alphanumericp(c);
  }
  return c;
}

#line 816
cl_object cl_string_capitalize(cl_narg narg, ...)
{
#line 816

  #line 818
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 818
	ecl_va_list args;
	ecl_va_start(args, narg, narg, 0);
#line 818
	if (ecl_unlikely(narg < 0)) FEwrong_num_arguments(ecl_make_fixnum(809));
#line 818
  {
#line 818
	#line 818
	cl_object __value0 = string_case(narg, ecl_make_fixnum(/*STRING-CAPITALIZE*/809), char_capitalize, args);
#line 818
	the_env->nvalues = 1;
#line 818
	the_env->values[0] = __value0;
#line 818
	ecl_va_end(args);
#line 818
	return __value0;
#line 818
}
;
  }


static cl_object
nstring_case(cl_narg narg, cl_object fun, ecl_casefun casefun, ecl_va_list ARGS)
{
  cl_object strng = ecl_va_arg(ARGS);
  cl_index_pair p;
  cl_index i;
  bool b;
  cl_object KEYS[2];
#define kstart KEY_VARS[0]
#define kend KEY_VARS[1]
#define kstartp KEY_VARS[2]
  cl_object KEY_VARS[4];

  if (narg < 1) FEwrong_num_arguments_anonym();
  KEYS[0]=ECL_SYM(":START",1337);
  KEYS[1]=ECL_SYM(":END",1247);
  cl_parse_key(ARGS, 2, KEYS, KEY_VARS, NULL, FALSE);

  if (ecl_unlikely(!ECL_STRINGP(strng)))
    FEwrong_type_nth_arg(fun, 1, strng, ecl_make_fixnum(/*STRING*/807));
  if (kstartp == ECL_NIL)
    kstart = ecl_make_fixnum(0);
  p = ecl_vector_start_end(fun, strng, kstart, kend);
  b = TRUE;
#ifdef ECL_UNICODE
  if (ECL_EXTENDED_STRING_P(strng)) {
    for (i = p.start;  i < p.end;  i++)
      strng->string.self[i] = (*casefun)(strng->string.self[i], &b);
  } else
#endif
    for (i = p.start;  i < p.end;  i++)
      strng->base_string.self[i] = (*casefun)(strng->base_string.self[i], &b);
  {
#line 854
	const cl_env_ptr the_env = ecl_process_env();
#line 854
	#line 854
	cl_object __value0 = strng;
#line 854
	the_env->nvalues = 1;
#line 854
	the_env->values[0] = __value0;
#line 854
	#line 854
	return __value0;
#line 854
}
;
#undef kstartp
#undef kstart
#undef kend
}

#line 860
cl_object cl_nstring_upcase(cl_narg narg, ...)
{
#line 860

  #line 862
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 862
	ecl_va_list args;
	ecl_va_start(args, narg, narg, 0);
#line 862
	if (ecl_unlikely(narg < 0)) FEwrong_num_arguments(ecl_make_fixnum(596));
#line 862
  {
#line 862
	#line 862
	cl_object __value0 = nstring_case(narg, ECL_SYM("NSTRING-UPCASE",596), char_upcase, args);
#line 862
	the_env->nvalues = 1;
#line 862
	the_env->values[0] = __value0;
#line 862
	ecl_va_end(args);
#line 862
	return __value0;
#line 862
}
;
  }

#line 865
cl_object cl_nstring_downcase(cl_narg narg, ...)
{
#line 865

  #line 867
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 867
	ecl_va_list args;
	ecl_va_start(args, narg, narg, 0);
#line 867
	if (ecl_unlikely(narg < 0)) FEwrong_num_arguments(ecl_make_fixnum(595));
#line 867
  {
#line 867
	#line 867
	cl_object __value0 = nstring_case(narg, ECL_SYM("NSTRING-DOWNCASE",595), char_downcase, args);
#line 867
	the_env->nvalues = 1;
#line 867
	the_env->values[0] = __value0;
#line 867
	ecl_va_end(args);
#line 867
	return __value0;
#line 867
}
;
  }

#line 870
cl_object cl_nstring_capitalize(cl_narg narg, ...)
{
#line 870

  #line 872
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 872
	ecl_va_list args;
	ecl_va_start(args, narg, narg, 0);
#line 872
	if (ecl_unlikely(narg < 0)) FEwrong_num_arguments(ecl_make_fixnum(594));
#line 872
  {
#line 872
	#line 872
	cl_object __value0 = nstring_case(narg, ECL_SYM("NSTRING-CAPITALIZE",594), char_capitalize, args);
#line 872
	the_env->nvalues = 1;
#line 872
	the_env->values[0] = __value0;
#line 872
	ecl_va_end(args);
#line 872
	return __value0;
#line 872
}
;
  }

#line 875
cl_object si_base_string_concatenate(cl_narg narg, ...)
{
#line 875

  cl_index l;
  int i;
  cl_object output;
  #line 880
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 880
	ecl_va_list args;
	ecl_va_start(args, narg, narg, 0);
#line 880
	if (ecl_unlikely(narg < 0)) FEwrong_num_arguments(ecl_make_fixnum(1165));
#line 880
  /* Compute final size and store NONEMPTY coerced strings. */
  for (i = 0, l = 0; i < narg; i++) {
    cl_object s = si_coerce_to_base_string(ecl_va_arg(args));
    if (s->base_string.fillp) {
      ECL_STACK_PUSH(the_env, s);
      l += s->base_string.fillp;
    }
  }
  /* Do actual copying by recovering those strings */
  output = ecl_alloc_simple_base_string(l);
  while (l) {
    cl_object s = ECL_STACK_POP_UNSAFE(the_env);
    size_t bytes = s->base_string.fillp;
    l -= bytes;
    memcpy(output->base_string.self + l, s->base_string.self, bytes);
  }
  {
#line 896
	#line 896
	cl_object __value0 = output;
#line 896
	the_env->nvalues = 1;
#line 896
	the_env->values[0] = __value0;
#line 896
	ecl_va_end(args);
#line 896
	return __value0;
#line 896
}
;
  }
