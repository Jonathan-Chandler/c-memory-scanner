#line 1 "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/src/c/list.d"
/* -*- Mode: C; c-basic-offset: 2; indent-tabs-mode: nil -*- */
/* vim: set filetype=c tabstop=2 shiftwidth=2 expandtab: */

/*
 * list.d - list manipulating routines
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
#include <ecl/internal.h>

struct cl_test {
  bool (*test_c_function)(struct cl_test *, cl_object);
  cl_object (*key_c_function)(struct cl_test *, cl_object);
  cl_env_ptr env;
  cl_object key_function;
  cl_objectfn key_fn;
  cl_object test_function;
  cl_objectfn test_fn;
  cl_object item_compared;
};

static cl_object subst(struct cl_test *t, cl_object new_obj, cl_object tree);
static cl_object nsubst(struct cl_test *t, cl_object new_obj, cl_object tree);
static cl_object sublis(struct cl_test *t, cl_object alist, cl_object tree);
static cl_object nsublis(struct cl_test *t, cl_object alist, cl_object tree);
static cl_object do_assoc(struct cl_test *t, cl_object alist);

#define TEST(t,k) ((t)->test_c_function)((t),(k))
#define KEY(t,x) ((t)->key_c_function)((t),(x))
#define close_test(t) (void)0

static bool
test_compare(struct cl_test *t, cl_object x)
{
  x = KEY(t,x);
  t->env->function = t->test_function;
  return t->test_fn(2, t->item_compared, x) != ECL_NIL;
}

static bool
test_compare_not(struct cl_test *t, cl_object x)
{
  x = KEY(t,x);
  t->env->function = t->test_function;
  return t->test_fn(2, t->item_compared, x) == ECL_NIL;
}

static bool
test_eq(struct cl_test *t, cl_object x)
{
  return (t->item_compared == KEY(t,x));
}

static bool
test_eql(struct cl_test *t, cl_object x)
{
  return ecl_eql(t->item_compared, KEY(t,x));
}

static bool
test_equal(struct cl_test *t, cl_object x)
{
  return ecl_equal(t->item_compared, KEY(t,x));
}

static bool
test_equalp(struct cl_test *t, cl_object x)
{
  return ecl_equalp(t->item_compared, KEY(t,x));
}

static cl_object
key_function(struct cl_test *t, cl_object x)
{
  t->env->function = t->key_function;
  return t->key_fn(1,x);
}

static cl_object
key_identity(struct cl_test *t, cl_object x)
{
  return x;
}

static void
setup_test(struct cl_test *t, cl_object item, cl_object test,
           cl_object test_not, cl_object key)
{
  cl_env_ptr env = t->env = ecl_process_env();
  t->item_compared = item;
  if (test != ECL_NIL) {
    if (test_not != ECL_NIL)
      FEerror("Both :TEST and :TEST-NOT are specified.", 0);
    t->test_function = test = si_coerce_to_function(test);
    if (test == ECL_SYM_FUN(ECL_SYM("EQ",335))) {
      t->test_c_function = test_eq;
    } else if (test == ECL_SYM_FUN(ECL_SYM("EQL",336))) {
      t->test_c_function = test_eql;
    } else if (test == ECL_SYM_FUN(ECL_SYM("EQUAL",337))) {
      t->test_c_function = test_equal;
    } else if (test == ECL_SYM_FUN(ECL_SYM("EQUALP",338))) {
      t->test_c_function = test_equalp;
    } else {
      t->test_c_function = test_compare;
      t->test_fn = ecl_function_dispatch(env, test);
      t->test_function = env->function;
    }
  } else if (test_not != ECL_NIL) {
    t->test_c_function = test_compare_not;
    test_not = si_coerce_to_function(test_not);
    t->test_fn = ecl_function_dispatch(env, test_not);
    t->test_function = env->function;
  } else {
    t->test_c_function = test_eql;
  }
  if (key != ECL_NIL) {
    key = si_coerce_to_function(key);
    t->key_fn = ecl_function_dispatch(env, key);
    t->key_function = env->function;
    t->key_c_function = key_function;
  } else {
    t->key_c_function = key_identity;
  }
}

#line 134
cl_object cl_list(cl_narg narg, ...)
{
#line 134

  cl_object head = ECL_NIL;
#line 137
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 137
	ecl_va_list args;
	ecl_va_start(args, narg, narg, 0);
#line 137
	if (ecl_unlikely(narg < 0)) FEwrong_num_arguments(ecl_make_fixnum(483));
#line 137
  if (narg--) {
    cl_object tail = head = ecl_list1(ecl_va_arg(args));
    while (narg--) {
      cl_object cons = ecl_list1(ecl_va_arg(args));
      ECL_RPLACD(tail, cons);
      tail = cons;
    }
  }
  {
#line 145
	#line 145
	cl_object __value0 = head;
#line 145
	the_env->nvalues = 1;
#line 145
	the_env->values[0] = __value0;
#line 145
	ecl_va_end(args);
#line 145
	return __value0;
#line 145
}
;
}

#line 148
cl_object cl_listX(cl_narg narg, ...)
{
#line 148

  cl_object head;
#line 151
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 151
	ecl_va_list args;
	ecl_va_start(args, narg, narg, 0);
#line 151
	if (ecl_unlikely(narg < 0)) FEwrong_num_arguments(ecl_make_fixnum(484));
#line 151
  if (narg == 0)
  FEwrong_num_arguments(ecl_make_fixnum(/*LIST**/484));
  head = ecl_va_arg(args);
  if (--narg) {
    cl_object tail = head = ecl_list1(head);
    while (--narg) {
      cl_object cons = ecl_list1(ecl_va_arg(args));
      ECL_RPLACD(tail, cons);
      tail = cons;
    }
    ECL_RPLACD(tail, ecl_va_arg(args));
  }
  {
#line 163
	#line 163
	cl_object __value0 = head;
#line 163
	the_env->nvalues = 1;
#line 163
	the_env->values[0] = __value0;
#line 163
	ecl_va_end(args);
#line 163
	return __value0;
#line 163
}
;
}

static cl_object *
append_into(cl_object head, cl_object *tail, cl_object l)
{
  if (!Null(*tail)) {
    /* (APPEND '(1 . 2) 3) */
    FEtype_error_proper_list(head);
  }
  while (CONSP(l)) {
    cl_object cons = ecl_list1(ECL_CONS_CAR(l));
    *tail = cons;
    tail = &ECL_CONS_CDR(cons);
    l = ECL_CONS_CDR(l);
  }
  *tail = l;
  return tail;
}

#line 183
cl_object cl_append(cl_narg narg, ...)
{
#line 183

  cl_object head = ECL_NIL, *tail = &head;
#line 186
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 186
	ecl_va_list rest;
	ecl_va_start(rest, narg, narg, 0);
#line 186
	if (ecl_unlikely(narg < 0)) FEwrong_num_arguments(ecl_make_fixnum(90));
#line 186
  for (; narg > 1; narg--) {
    cl_object other = ecl_va_arg(rest);
    tail = append_into(head, tail, other);
  }
  if (narg) {
    if (!Null(*tail)) {
      /* (APPEND '(1 . 2) 3) */
      FEtype_error_proper_list(head);
    }
    *tail = ecl_va_arg(rest);
  }
  {
#line 197
	#line 197
	cl_object __value0 = head;
#line 197
	the_env->nvalues = 1;
#line 197
	the_env->values[0] = __value0;
#line 197
	ecl_va_end(rest);
#line 197
	return __value0;
#line 197
}
;
}

cl_object
ecl_append(cl_object x, cl_object y)
{
  cl_object head = ECL_NIL;
  cl_object *tail = &head;
  if (!Null(x)) {
    tail = append_into(head, tail, x);
  }
  if (!Null(*tail)) {
    /* (APPEND '(1 . 2) 3) */
    FEtype_error_proper_list(head);
  }
  *tail = y;
  return head;
}

#define LENTH(n) (cl_object x) {                        \
    const cl_env_ptr the_env = ecl_process_env();       \
    ecl_return1(the_env, ecl_nth(n, x));                \
  }
cl_object cl_fifth        LENTH(4)
cl_object cl_sixth        LENTH(5)
cl_object cl_seventh      LENTH(6)
cl_object cl_eighth       LENTH(7)
cl_object cl_ninth        LENTH(8)
cl_object cl_tenth        LENTH(9)
#undef LENTH

static bool
tree_equal(struct cl_test *t, cl_object x, cl_object y)
{
 BEGIN:
  if (CONSP(x)) {
    if (CONSP(y)) {
      if (tree_equal(t, ECL_CONS_CAR(x), ECL_CONS_CAR(y))) {
        x = ECL_CONS_CDR(x);
        y = ECL_CONS_CDR(y);
        goto BEGIN;
      } else {
        return(FALSE);
      }
    } else {
      return(FALSE);
    }
  } else {
    t->item_compared = x;
    if (TEST(t, y))
      return(TRUE);
    else
      return(FALSE);
  }
}

#line 253
cl_object cl_tree_equal(cl_narg narg, cl_object x, cl_object y, ...)
{
#line 253

  struct cl_test t;
  cl_object output;
#line 257
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 257
	static cl_object KEYS[2] = {(cl_object)(cl_symbols+1343), (cl_object)(cl_symbols+1344)};
	cl_object test;
	cl_object test_not;
#line 257
	cl_object KEY_VARS[4];
#line 257
	ecl_va_list ARGS;
	ecl_va_start(ARGS, y, narg, 2);
#line 257
	if (ecl_unlikely(narg < 2)) FEwrong_num_arguments(ecl_make_fixnum(865));
#line 257
	cl_parse_key(ARGS, 2, KEYS, KEY_VARS, NULL, 0);
#line 257
	if (KEY_VARS[2]==ECL_NIL) {
#line 257
	  test = ECL_NIL;
	} else {
#line 257
	  test = KEY_VARS[0];
	}
#line 257
	if (KEY_VARS[3]==ECL_NIL) {
#line 257
	  test_not = ECL_NIL;
	} else {
#line 257
	  test_not = KEY_VARS[1];
	}
#line 257
  setup_test(&t, ECL_NIL, test, test_not, ECL_NIL);
  output = tree_equal(&t, x, y)? ECL_T : ECL_NIL;
  close_test(&t);
  {
#line 260
	#line 260
	cl_object __value0 = output;
#line 260
	the_env->nvalues = 1;
#line 260
	the_env->values[0] = __value0;
#line 260
	ecl_va_end(ARGS);
#line 260
	return __value0;
#line 260
}
;
}

cl_object
cl_endp(cl_object x)
{
  cl_object output = ECL_NIL;
  if (Null(x)) {
    output = ECL_T;
  } else if (ecl_unlikely(!LISTP(x))) {
    FEwrong_type_only_arg(ecl_make_fixnum(/*ENDP*/332), x, ecl_make_fixnum(/*LIST*/483));
  }
  {
#line 272
	const cl_env_ptr the_env = ecl_process_env();
#line 272
	#line 272
	cl_object __value0 = output;
#line 272
	the_env->nvalues = 1;
#line 272
	the_env->values[0] = __value0;
#line 272
	#line 272
	return __value0;
#line 272
}
;
}

bool
ecl_endp(cl_object x)
{
  if (Null(x)) {
    return TRUE;
  } else if (ecl_unlikely(!LISTP(x))) {
    FEwrong_type_only_arg(ecl_make_fixnum(/*ENDP*/332), x, ecl_make_fixnum(/*LIST*/483));
  }
  return FALSE;
}

cl_object
cl_list_length(cl_object x)
{
  cl_fixnum n;
  cl_object fast, slow;
  /* INV: A list's length always fits in a fixnum */
  fast = slow = x;
  for (n = 0; !Null(fast); n++, fast = ECL_CONS_CDR(fast)) {
    if (ecl_unlikely(!LISTP(fast))) {
      FEtype_error_list(fast);
    }
    if (n & 1) {
      /* Circular list? */
      if (slow == fast) {
#line 299
	const cl_env_ptr the_env = ecl_process_env();
#line 299
	#line 299
	cl_object __value0 = ECL_NIL;
#line 299
	the_env->nvalues = 1;
#line 299
	the_env->values[0] = __value0;
#line 299
	#line 299
	return __value0;
#line 299
}
;
      slow = ECL_CONS_CDR(slow);
    }
  }
  {
#line 303
	const cl_env_ptr the_env = ecl_process_env();
#line 303
	#line 303
	cl_object __value0 = ecl_make_fixnum(n);
#line 303
	the_env->nvalues = 1;
#line 303
	the_env->values[0] = __value0;
#line 303
	#line 303
	return __value0;
#line 303
}
;
}

cl_object
si_proper_list_p(cl_object x)
{
  cl_fixnum n;
  cl_object fast, slow, test = ECL_T;
  /* INV: A list's length always fits in a fixnum */
  fast = slow = x;
  for (n = 0; !Null(fast); n++, fast = ECL_CONS_CDR(fast)) {
    if (!LISTP(fast)) {
      test = ECL_NIL;
      break;
    }
    if (n & 1) {
      /* Circular list? */
      if (slow == fast) {
        test = ECL_NIL;
        break;
      }
      slow = ECL_CONS_CDR(slow);
    }
  }
  {
#line 327
	const cl_env_ptr the_env = ecl_process_env();
#line 327
	#line 327
	cl_object __value0 = test;
#line 327
	the_env->nvalues = 1;
#line 327
	the_env->values[0] = __value0;
#line 327
	#line 327
	return __value0;
#line 327
}
;
}

cl_object
cl_nth(cl_object n, cl_object x)
{
  {
#line 333
	const cl_env_ptr the_env = ecl_process_env();
#line 333
	#line 333
	cl_object __value0 = ecl_nth(ecl_to_size(n), x);
#line 333
	the_env->nvalues = 1;
#line 333
	the_env->values[0] = __value0;
#line 333
	#line 333
	return __value0;
#line 333
}
;
}

cl_object
ecl_nth(cl_fixnum n, cl_object x)
{
  if (n < 0)
    FEtype_error_index(x, n);
  /* INV: No need to check for circularity since we visit
     at most `n' conses */
  for (; n > 0 && CONSP(x); n--)
    x = ECL_CONS_CDR(x);
  if (Null(x))
    return ECL_NIL;
  if (!LISTP(x))
    FEtype_error_list(x);
  return ECL_CONS_CAR(x);
}

cl_object
cl_nthcdr(cl_object n, cl_object x)
{
  {
#line 355
	const cl_env_ptr the_env = ecl_process_env();
#line 355
	#line 355
	cl_object __value0 = ecl_nthcdr(ecl_to_size(n), x);
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

cl_object
ecl_nthcdr(cl_fixnum n, cl_object x)
{
  if (n < 0)
    FEtype_error_index(x, n);
  while (n-- > 0 && !Null(x)) {
    if (LISTP(x)) {
      x = ECL_CONS_CDR(x);
    } else {
      FEtype_error_list(x);
    }
  }
  return x;
}

cl_object
ecl_last(cl_object l, cl_index n)
{
  /* The algorithm is very simple. We run over the list with
   * two pointers, "l" and "r". The separation between both
   * must be "n", so that when "l" finds no more conses, "r"
   * contains the output. */
  cl_object r;
  for (r = l; n && CONSP(r); n--, r = ECL_CONS_CDR(r))
    ;
  /* If "l" has not moved, we have to ensure that it is a list */
  if (r == l) {
    if (!LISTP(r)) FEtype_error_list(l);
    while (CONSP(r)) {
      r = ECL_CONS_CDR(r);
    }
    return r;
  } else if (n == 0) {
    while (CONSP(r)) {
      r = ECL_CONS_CDR(r);
      l = ECL_CONS_CDR(l);
    }
    return l;
  } else {
    return l;
  }
}

#line 401
cl_object cl_last(cl_narg narg, cl_object l, ...)
{
#line 401

#line 403
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 403
	cl_object k;
#line 403
	va_list ARGS;
	va_start(ARGS, l);
#line 403
	if (ecl_unlikely(narg < 1|| narg > 2)) FEwrong_num_arguments(ecl_make_fixnum(457));
#line 403
	if (narg > 1) {
#line 403
		k = va_arg(ARGS,cl_object);
#line 403
	} else {
#line 403
		k = ecl_make_fixnum(1);
#line 403
	}
#line 403
  if (ecl_t_of(k) == t_bignum) {
    {
#line 404
	#line 404
	cl_object __value0 = l;
#line 404
	the_env->nvalues = 1;
#line 404
	the_env->values[0] = __value0;
#line 404
	va_end(ARGS);
#line 404
	return __value0;
#line 404
}
;
  }
  {
#line 406
	#line 406
	cl_object __value0 = ecl_last(l, ecl_to_size(k));
#line 406
	the_env->nvalues = 1;
#line 406
	the_env->values[0] = __value0;
#line 406
	va_end(ARGS);
#line 406
	return __value0;
#line 406
}
;
}

#line 409
cl_object cl_make_list(cl_narg narg, cl_object size, ...)
{
#line 409

  cl_fixnum i;
#line 412
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 412
	static cl_object KEYS[1] = {(cl_object)(cl_symbols+1277)};
	cl_object initial_element;
#line 412
	cl_object x;
#line 412
	cl_object KEY_VARS[2];
#line 412
	ecl_va_list ARGS;
	ecl_va_start(ARGS, size, narg, 1);
#line 412
	if (ecl_unlikely(narg < 1)) FEwrong_num_arguments(ecl_make_fixnum(531));
#line 412
	cl_parse_key(ARGS, 1, KEYS, KEY_VARS, NULL, 0);
#line 412
	if (KEY_VARS[1]==ECL_NIL) {
#line 412
	  initial_element = ECL_NIL;
	} else {
#line 412
	  initial_element = KEY_VARS[0];
	}
#line 412
	x = ECL_NIL;
#line 412
  /* INV: ecl_to_size() signals a type-error if SIZE is not a integer >=0 */
  i = ecl_to_size(size);
  while (i-- > 0)
    x = CONS(initial_element, x);
  {
#line 416
	#line 416
	cl_object __value0 = x;
#line 416
	the_env->nvalues = 1;
#line 416
	the_env->values[0] = __value0;
#line 416
	ecl_va_end(ARGS);
#line 416
	return __value0;
#line 416
}
;
}

cl_object
cl_copy_list(cl_object x)
{
  cl_object copy;
  if (ecl_unlikely(!LISTP(x))) {
    FEwrong_type_only_arg(ecl_make_fixnum(/*COPY-LIST*/259), x, ecl_make_fixnum(/*LIST*/483));
  }
  copy = ECL_NIL;
  if (!Null(x)) {
    cl_object tail = copy = ecl_list1(CAR(x));
    while (x = ECL_CONS_CDR(x), CONSP(x)) {
      cl_object cons = ecl_list1(ECL_CONS_CAR(x));
      ECL_RPLACD(tail, cons);
      tail = cons;
    }
    ECL_RPLACD(tail, x);
  }
  {
#line 436
	const cl_env_ptr the_env = ecl_process_env();
#line 436
	#line 436
	cl_object __value0 = copy;
#line 436
	the_env->nvalues = 1;
#line 436
	the_env->values[0] = __value0;
#line 436
	#line 436
	return __value0;
#line 436
}
;
}

static cl_object
duplicate_pairs(cl_object x)
{
  cl_object p = ECL_CONS_CAR(x);
  if (CONSP(p))
    p = CONS(ECL_CONS_CAR(p), ECL_CONS_CDR(p));
  return ecl_list1(p);
}

cl_object
cl_copy_alist(cl_object x)
{
  cl_object copy;
  if (ecl_unlikely(!LISTP(x))) {
    FEwrong_type_only_arg(ecl_make_fixnum(/*COPY-ALIST*/258), x, ecl_make_fixnum(/*LIST*/483));
  }
  copy = ECL_NIL;
  if (!Null(x)) {
    cl_object tail = copy = duplicate_pairs(x);
    while (x = ECL_CONS_CDR(x), !Null(x)) {
      if (!LISTP(x)) {
        FEtype_error_list(x);
      } else {
        cl_object cons = duplicate_pairs(x);
        tail = ECL_RPLACD(tail, cons);
        tail = cons;
      }
    }
  }
  {
#line 468
	const cl_env_ptr the_env = ecl_process_env();
#line 468
	#line 468
	cl_object __value0 = copy;
#line 468
	the_env->nvalues = 1;
#line 468
	the_env->values[0] = __value0;
#line 468
	#line 468
	return __value0;
#line 468
}
;
}

static cl_object
do_copy_tree(cl_object x)
{
  if (CONSP(x)) {
    x = CONS(do_copy_tree(ECL_CONS_CAR(x)),
             do_copy_tree(ECL_CONS_CDR(x)));
  }
  return x;
}

cl_object
cl_copy_tree(cl_object x)
{
  {
#line 484
	const cl_env_ptr the_env = ecl_process_env();
#line 484
	#line 484
	cl_object __value0 = do_copy_tree(x);
#line 484
	the_env->nvalues = 1;
#line 484
	the_env->values[0] = __value0;
#line 484
	#line 484
	return __value0;
#line 484
}
;
}

cl_object
cl_revappend(cl_object x, cl_object y)
{
  loop_for_in(x) {
    y = CONS(ECL_CONS_CAR(x),y);
  } end_loop_for_in;
  {
#line 493
	const cl_env_ptr the_env = ecl_process_env();
#line 493
	#line 493
	cl_object __value0 = y;
#line 493
	the_env->nvalues = 1;
#line 493
	the_env->values[0] = __value0;
#line 493
	#line 493
	return __value0;
#line 493
}
;
}

#line 496
cl_object cl_nconc(cl_narg narg, ...)
{
#line 496

  cl_object head = ECL_NIL, tail = ECL_NIL;
#line 498
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 498
	ecl_va_list lists;
	ecl_va_start(lists, narg, narg, 0);
#line 498
	if (ecl_unlikely(narg < 0)) FEwrong_num_arguments(ecl_make_fixnum(583));
#line 498
      
  while (narg--) {
    cl_object new_tail, other = ecl_va_arg(lists);
    if (Null(other)) {
      new_tail = tail;
    } else if (CONSP(other)) {
      new_tail = ecl_last(other, 1);
    } else {
      if (narg) FEtype_error_list(other);
      new_tail = tail;
    }
    if (Null(head)) {
      head = other;
    } else {
      ECL_RPLACD(tail, other);
    }
    tail = new_tail;
  }
  {
#line 516
	#line 516
	cl_object __value0 = head;
#line 516
	the_env->nvalues = 1;
#line 516
	the_env->values[0] = __value0;
#line 516
	ecl_va_end(lists);
#line 516
	return __value0;
#line 516
}
;
}

cl_object
ecl_nconc(cl_object l, cl_object y)
{
  if (Null(l)) {
    return y;
  } else {
    ECL_RPLACD(ecl_last(l, 1), y);
    return l;
  }
}

cl_object
cl_nreconc(cl_object l, cl_object y)
{
  cl_object x, z;
  /* INV: when a circular list is "reconc'ed", the pointer ends
     up at the beginning of the original list, hence we need no
     slow pointer */
  for (x = l; !Null(x); ) {
    if (!LISTP(x)) FEtype_error_list(x);
    z = x;
    x = ECL_CONS_CDR(x);
    if (x == l) FEcircular_list(l);
    ECL_RPLACD(z, y);
    y = z;
  }
  {
#line 545
	const cl_env_ptr the_env = ecl_process_env();
#line 545
	#line 545
	cl_object __value0 = y;
#line 545
	the_env->nvalues = 1;
#line 545
	the_env->values[0] = __value0;
#line 545
	#line 545
	return __value0;
#line 545
}
;
}

cl_object
ecl_butlast(cl_object l, cl_index n)
{
  /* See LAST for details on this algorithm */
  cl_object r;
  for (r = l; n && CONSP(r); n--, r = ECL_CONS_CDR(r))
    ;
  if (Null(r)) {
    return ECL_NIL;
  } else if (!LISTP(r)) {
    /* We reach here either because l is shorter than n conses,
     * or because it is not a list */
    if (r == l) FEtype_error_list(r);
    return ECL_NIL;
  } else {
    /* We reach here because l has at least n conses and
     * thus we can take CAR(l) */
    cl_object head, tail;
    head = tail = ecl_list1(CAR(l));
    while (l = ECL_CONS_CDR(l), r = ECL_CONS_CDR(r), CONSP(r)) {
      cl_object cons = ecl_list1(ECL_CONS_CAR(l));
      ECL_RPLACD(tail, cons);
      tail = cons;
    }
    return head;
  }
}

#line 576
cl_object cl_butlast(cl_narg narg, cl_object lis, ...)
{
#line 576

  #line 578
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 578
	cl_object nn;
#line 578
	va_list ARGS;
	va_start(ARGS, lis);
#line 578
	if (ecl_unlikely(narg < 1|| narg > 2)) FEwrong_num_arguments(ecl_make_fixnum(163));
#line 578
	if (narg > 1) {
#line 578
		nn = va_arg(ARGS,cl_object);
#line 578
	} else {
#line 578
		nn = ecl_make_fixnum(1);
#line 578
	}
#line 578
  /* INV: No list has more than MOST_POSITIVE_FIXNUM elements */
  if (ecl_t_of(nn) == t_bignum) {
    {
#line 580
	#line 580
	cl_object __value0 = ECL_NIL;
#line 580
	the_env->nvalues = 1;
#line 580
	the_env->values[0] = __value0;
#line 580
	va_end(ARGS);
#line 580
	return __value0;
#line 580
}
;
  }
  /* INV: ecl_to_size() signals a type-error if NN is not an integer >=0 */
  {
#line 583
	#line 583
	cl_object __value0 = ecl_butlast(lis, ecl_to_size(nn));
#line 583
	the_env->nvalues = 1;
#line 583
	the_env->values[0] = __value0;
#line 583
	va_end(ARGS);
#line 583
	return __value0;
#line 583
}
;
}

cl_object
ecl_nbutlast(cl_object l, cl_index n)
{
  cl_object r;
  if (ecl_unlikely(!LISTP(l)))
    FEwrong_type_only_arg(ecl_make_fixnum(/*NBUTLAST*/582), l, ecl_make_fixnum(/*LIST*/483));
  for (n++, r = l; n && CONSP(r); n--, r = ECL_CONS_CDR(r))
    ;
  if (n == 0) {
    cl_object tail = l;
    while (CONSP(r)) {
      tail = ECL_CONS_CDR(tail);
      r = ECL_CONS_CDR(r);
    }
    ECL_RPLACD(tail, ECL_NIL);
    return l;
  }
  return ECL_NIL;
}

#line 606
cl_object cl_nbutlast(cl_narg narg, cl_object lis, ...)
{
#line 606

#line 608
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 608
	cl_object nn;
#line 608
	va_list ARGS;
	va_start(ARGS, lis);
#line 608
	if (ecl_unlikely(narg < 1|| narg > 2)) FEwrong_num_arguments(ecl_make_fixnum(582));
#line 608
	if (narg > 1) {
#line 608
		nn = va_arg(ARGS,cl_object);
#line 608
	} else {
#line 608
		nn = ecl_make_fixnum(1);
#line 608
	}
#line 608
  /* INV: No list has more than MOST_POSITIVE_FIXNUM elements */
  if (ecl_t_of(nn) == t_bignum) {
    {
#line 610
	#line 610
	cl_object __value0 = ECL_NIL;
#line 610
	the_env->nvalues = 1;
#line 610
	the_env->values[0] = __value0;
#line 610
	va_end(ARGS);
#line 610
	return __value0;
#line 610
}
;
  }
  /* INV: ecl_to_size() signas a type-error if NN is not an integer >=0 */
  {
#line 613
	#line 613
	cl_object __value0 = ecl_nbutlast(lis, ecl_to_size(nn));
#line 613
	the_env->nvalues = 1;
#line 613
	the_env->values[0] = __value0;
#line 613
	va_end(ARGS);
#line 613
	return __value0;
#line 613
}
;
}

cl_object
cl_ldiff(cl_object x, cl_object y)
{
  cl_object head = ECL_NIL;
  if (ecl_unlikely(!LISTP(x))) {
    FEwrong_type_only_arg(ecl_make_fixnum(/*LDIFF*/461), x, ecl_make_fixnum(/*LIST*/483));
  }
  /* Here we use that, if X or Y are CONS, then (EQL X Y)
   * only when X == Y */
  if (!Null(x) && (x != y)) {
    cl_object tail = head = ecl_list1(ECL_CONS_CAR(x));
    while (1) {
      x = ECL_CONS_CDR(x);
      if (!CONSP(x)) {
        if (!ecl_eql(x, y)) {
          ECL_RPLACD(tail, x);
        }
        break;
      } else if (x == y) {
        break;
      } else {
        cl_object cons = ecl_list1(ECL_CONS_CAR(x));
        ECL_RPLACD(tail, cons);
        tail = cons;
      }
    }
  }
  {
#line 643
	const cl_env_ptr the_env = ecl_process_env();
#line 643
	#line 643
	cl_object __value0 = head;
#line 643
	the_env->nvalues = 1;
#line 643
	the_env->values[0] = __value0;
#line 643
	#line 643
	return __value0;
#line 643
}
;
}

cl_object
cl_rplaca(cl_object x, cl_object v)
{
  if (ecl_unlikely(!ECL_CONSP(x)))
    FEwrong_type_nth_arg(ecl_make_fixnum(/*RPLACA*/734), 1, x, ecl_make_fixnum(/*CONS*/253));
  ECL_RPLACA(x, v);
  {
#line 652
	const cl_env_ptr the_env = ecl_process_env();
#line 652
	#line 652
	cl_object __value0 = x;
#line 652
	the_env->nvalues = 1;
#line 652
	the_env->values[0] = __value0;
#line 652
	#line 652
	return __value0;
#line 652
}
;
}

cl_object
cl_rplacd(cl_object x, cl_object v)
{
  if (ecl_unlikely(!ECL_CONSP(x)))
    FEwrong_type_nth_arg(ecl_make_fixnum(/*RPLACD*/735), 1, x, ecl_make_fixnum(/*CONS*/253));
  ECL_RPLACD(x, v);
  {
#line 661
	const cl_env_ptr the_env = ecl_process_env();
#line 661
	#line 661
	cl_object __value0 = x;
#line 661
	the_env->nvalues = 1;
#line 661
	the_env->values[0] = __value0;
#line 661
	#line 661
	return __value0;
#line 661
}
;
}

#ifdef ECL_THREADS
cl_object
mp_compare_and_swap_car(cl_object x, cl_object old, cl_object new)
{
  if (ecl_unlikely(!ECL_CONSP(x)))
    FEwrong_type_nth_arg(ecl_make_fixnum(/*MP::COMPARE-AND-SWAP-CAR*/1508), 1, x, ecl_make_fixnum(/*CONS*/253));
  return ecl_compare_and_swap(&ECL_CONS_CAR(x), old, new);
}

cl_object
mp_atomic_incf_car(cl_object x, cl_object increment)
{
  if (ecl_unlikely(!ECL_CONSP(x)))
    FEwrong_type_nth_arg(ecl_make_fixnum(/*MP::ATOMIC-INCF-CAR*/1515), 1, x, ecl_make_fixnum(/*CONS*/253));
  return ecl_atomic_incf(&ECL_CONS_CAR(x), increment);
}

cl_object
mp_compare_and_swap_cdr(cl_object x, cl_object old, cl_object new)
{
  if (ecl_unlikely(!ECL_CONSP(x)))
    FEwrong_type_nth_arg(ecl_make_fixnum(/*MP::COMPARE-AND-SWAP-CDR*/1509), 1, x, ecl_make_fixnum(/*CONS*/253));
  return ecl_compare_and_swap(&ECL_CONS_CDR(x), old, new);
}

cl_object
mp_atomic_incf_cdr(cl_object x, cl_object increment)
{
  if (ecl_unlikely(!ECL_CONSP(x)))
    FEwrong_type_nth_arg(ecl_make_fixnum(/*MP::ATOMIC-INCF-CDR*/1516), 1, x, ecl_make_fixnum(/*CONS*/253));
  return ecl_atomic_incf(&ECL_CONS_CDR(x), increment);
}
#endif /* ECL_THREADS */

#line 698
cl_object cl_subst(cl_narg narg, cl_object new_obj, cl_object old_obj, cl_object tree, ...)
{
#line 698

  struct cl_test t;
  cl_object output;
#line 702
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 702
	static cl_object KEYS[3] = {(cl_object)(cl_symbols+1343), (cl_object)(cl_symbols+1344), (cl_object)(cl_symbols+1288)};
	cl_object test;
	cl_object test_not;
	cl_object key;
#line 702
	cl_object KEY_VARS[6];
#line 702
	ecl_va_list ARGS;
	ecl_va_start(ARGS, tree, narg, 3);
#line 702
	if (ecl_unlikely(narg < 3)) FEwrong_num_arguments(ecl_make_fixnum(833));
#line 702
	cl_parse_key(ARGS, 3, KEYS, KEY_VARS, NULL, 0);
#line 702
	if (KEY_VARS[3]==ECL_NIL) {
#line 702
	  test = ECL_NIL;
	} else {
#line 702
	  test = KEY_VARS[0];
	}
#line 702
	if (KEY_VARS[4]==ECL_NIL) {
#line 702
	  test_not = ECL_NIL;
	} else {
#line 702
	  test_not = KEY_VARS[1];
	}
#line 702
	if (KEY_VARS[5]==ECL_NIL) {
#line 702
	  key = ECL_NIL;
	} else {
#line 702
	  key = KEY_VARS[2];
	}
#line 702
  setup_test(&t, old_obj, test, test_not, key);
  output = subst(&t, new_obj, tree);
  close_test(&t);
  {
#line 705
	#line 705
	cl_object __value0 = output;
#line 705
	the_env->nvalues = 1;
#line 705
	the_env->values[0] = __value0;
#line 705
	ecl_va_end(ARGS);
#line 705
	return __value0;
#line 705
}
;
}


static cl_object
subst(struct cl_test *t, cl_object new_obj, cl_object tree)
{
  if (TEST(t, tree)) {
    return new_obj;
  } else if (ECL_ATOM(tree)) {
    return tree;
  } else {
    cl_object head, tail = ECL_NIL;
    do {
      cl_object cons = subst(t, new_obj, ECL_CONS_CAR(tree));
      cons = ecl_cons(cons, tree = ECL_CONS_CDR(tree));
      if (Null(tail)) {
        head = cons;
      } else {
        ECL_RPLACD(tail, cons);
      }
      tail = cons;
      if (TEST(t, tree)) {
        ECL_RPLACD(tail, new_obj);
        return head;
      }
    } while (CONSP(tree));
    return head;
  }
}

#line 736
cl_object cl_nsubst(cl_narg narg, cl_object new_obj, cl_object old_obj, cl_object tree, ...)
{
#line 736

  struct cl_test t;
#line 739
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 739
	static cl_object KEYS[3] = {(cl_object)(cl_symbols+1343), (cl_object)(cl_symbols+1344), (cl_object)(cl_symbols+1288)};
	cl_object test;
	cl_object test_not;
	cl_object key;
#line 739
	cl_object KEY_VARS[6];
#line 739
	ecl_va_list ARGS;
	ecl_va_start(ARGS, tree, narg, 3);
#line 739
	if (ecl_unlikely(narg < 3)) FEwrong_num_arguments(ecl_make_fixnum(598));
#line 739
	cl_parse_key(ARGS, 3, KEYS, KEY_VARS, NULL, 0);
#line 739
	if (KEY_VARS[3]==ECL_NIL) {
#line 739
	  test = ECL_NIL;
	} else {
#line 739
	  test = KEY_VARS[0];
	}
#line 739
	if (KEY_VARS[4]==ECL_NIL) {
#line 739
	  test_not = ECL_NIL;
	} else {
#line 739
	  test_not = KEY_VARS[1];
	}
#line 739
	if (KEY_VARS[5]==ECL_NIL) {
#line 739
	  key = ECL_NIL;
	} else {
#line 739
	  key = KEY_VARS[2];
	}
#line 739
  setup_test(&t, old_obj, test, test_not, key);
  tree = nsubst(&t, new_obj, tree);
  close_test(&t);
  {
#line 742
	#line 742
	cl_object __value0 = tree;
#line 742
	the_env->nvalues = 1;
#line 742
	the_env->values[0] = __value0;
#line 742
	ecl_va_end(ARGS);
#line 742
	return __value0;
#line 742
}
;
}

static cl_object
nsubst_cons(struct cl_test *t, cl_object new_obj, cl_object tree)
{
  cl_object l = tree;
  do {
    cl_object o = ECL_CONS_CAR(l);
    if (TEST(t, o)) {
      ECL_RPLACA(l, new_obj);
    } else if (CONSP(o)) {
      nsubst_cons(t, new_obj, o);
    }
    o = ECL_CONS_CDR(l);
    if (TEST(t, o)) {
      ECL_RPLACD(l, new_obj);
      return tree;
    }
    l = o;
  } while (CONSP(l));
  return tree;
}

static cl_object
nsubst(struct cl_test *t, cl_object new_obj, cl_object tree)
{
  if (TEST(t, tree))
    return new_obj;
  if (CONSP(tree))
    return nsubst_cons(t, new_obj, tree);
  return tree;
}

#line 776
cl_object cl_sublis(cl_narg narg, cl_object alist, cl_object tree, ...)
{
#line 776

  /* t[0] is the test for the objects in the tree, configured
     with test, test_not and key. t[1] is the test for searching
     in the association list.
  */
  struct cl_test t[2];
#line 783
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 783
	static cl_object KEYS[3] = {(cl_object)(cl_symbols+1343), (cl_object)(cl_symbols+1344), (cl_object)(cl_symbols+1288)};
	cl_object test;
	cl_object test_not;
	cl_object key;
#line 783
	cl_object KEY_VARS[6];
#line 783
	ecl_va_list ARGS;
	ecl_va_start(ARGS, tree, narg, 2);
#line 783
	if (ecl_unlikely(narg < 2)) FEwrong_num_arguments(ecl_make_fixnum(830));
#line 783
	cl_parse_key(ARGS, 3, KEYS, KEY_VARS, NULL, 0);
#line 783
	if (KEY_VARS[3]==ECL_NIL) {
#line 783
	  test = ECL_NIL;
	} else {
#line 783
	  test = KEY_VARS[0];
	}
#line 783
	if (KEY_VARS[4]==ECL_NIL) {
#line 783
	  test_not = ECL_NIL;
	} else {
#line 783
	  test_not = KEY_VARS[1];
	}
#line 783
	if (KEY_VARS[5]==ECL_NIL) {
#line 783
	  key = ECL_NIL;
	} else {
#line 783
	  key = KEY_VARS[2];
	}
#line 783
  setup_test(t, ECL_NIL, ECL_NIL, ECL_NIL, key);
  setup_test(t+1, ECL_NIL, test, test_not, ECL_NIL);
  tree = sublis(t, alist, tree);
  close_test(t+1);
  close_test(t);
  {
#line 788
	#line 788
	cl_object __value0 = tree;
#line 788
	the_env->nvalues = 1;
#line 788
	the_env->values[0] = __value0;
#line 788
	ecl_va_end(ARGS);
#line 788
	return __value0;
#line 788
}
;
}

/*
  Sublis(alist, tree) returns
  result of substituting tree by alist.
*/
static cl_object
sublis(struct cl_test *t, cl_object alist, cl_object tree)
{
  cl_object node;
  t[1].item_compared = KEY(t, tree);
  node = do_assoc(t+1, alist);
  if (!Null(node)) {
    return ECL_CONS_CDR(node);
  }
  if (CONSP(tree)) {
    tree = CONS(sublis(t, alist, ECL_CONS_CAR(tree)),
                sublis(t, alist, ECL_CONS_CDR(tree)));
  }
  return tree;
}

#line 811
cl_object cl_nsublis(cl_narg narg, cl_object alist, cl_object tree, ...)
{
#line 811

  /* t[0] is the test for the objects in the tree, configured
     with test, test_not and key. t[1] is the test for searching
     in the association list.
  */
  struct cl_test t[2];
#line 818
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 818
	static cl_object KEYS[3] = {(cl_object)(cl_symbols+1343), (cl_object)(cl_symbols+1344), (cl_object)(cl_symbols+1288)};
	cl_object test;
	cl_object test_not;
	cl_object key;
#line 818
	cl_object KEY_VARS[6];
#line 818
	ecl_va_list ARGS;
	ecl_va_start(ARGS, tree, narg, 2);
#line 818
	if (ecl_unlikely(narg < 2)) FEwrong_num_arguments(ecl_make_fixnum(597));
#line 818
	cl_parse_key(ARGS, 3, KEYS, KEY_VARS, NULL, 0);
#line 818
	if (KEY_VARS[3]==ECL_NIL) {
#line 818
	  test = ECL_NIL;
	} else {
#line 818
	  test = KEY_VARS[0];
	}
#line 818
	if (KEY_VARS[4]==ECL_NIL) {
#line 818
	  test_not = ECL_NIL;
	} else {
#line 818
	  test_not = KEY_VARS[1];
	}
#line 818
	if (KEY_VARS[5]==ECL_NIL) {
#line 818
	  key = ECL_NIL;
	} else {
#line 818
	  key = KEY_VARS[2];
	}
#line 818
  setup_test(t, ECL_NIL, ECL_NIL, ECL_NIL, key);
  setup_test(t+1, ECL_NIL, test, test_not, ECL_NIL);
  tree = nsublis(t, alist, tree);
  close_test(t+1);
  close_test(t);
  {
#line 823
	#line 823
	cl_object __value0 = tree;
#line 823
	the_env->nvalues = 1;
#line 823
	the_env->values[0] = __value0;
#line 823
	ecl_va_end(ARGS);
#line 823
	return __value0;
#line 823
}
;
}

/*
  Nsublis(alist, treep) stores
  the result of substiting *treep by alist
  to *treep.
*/
static cl_object
nsublis(struct cl_test *t, cl_object alist, cl_object tree)
{
  cl_object node;
  t[1].item_compared = KEY(t, tree);
  node = do_assoc(t+1, alist);
  if (!Null(node)) {
    return ECL_CONS_CDR(node);
  }
  if (CONSP(tree)) {
    ECL_RPLACA(tree, nsublis(t, alist, ECL_CONS_CAR(tree)));
    ECL_RPLACD(tree, nsublis(t, alist, ECL_CONS_CDR(tree)));
  }
  return tree;
}

#line 847
cl_object cl_member(cl_narg narg, cl_object item, cl_object list, ...)
{
#line 847

  struct cl_test t;
#line 850
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 850
	static cl_object KEYS[3] = {(cl_object)(cl_symbols+1343), (cl_object)(cl_symbols+1344), (cl_object)(cl_symbols+1288)};
	cl_object test;
	cl_object test_not;
	cl_object key;
#line 850
	cl_object KEY_VARS[6];
#line 850
	ecl_va_list ARGS;
	ecl_va_start(ARGS, list, narg, 2);
#line 850
	if (ecl_unlikely(narg < 2)) FEwrong_num_arguments(ecl_make_fixnum(554));
#line 850
	cl_parse_key(ARGS, 3, KEYS, KEY_VARS, NULL, 0);
#line 850
	if (KEY_VARS[3]==ECL_NIL) {
#line 850
	  test = ECL_NIL;
	} else {
#line 850
	  test = KEY_VARS[0];
	}
#line 850
	if (KEY_VARS[4]==ECL_NIL) {
#line 850
	  test_not = ECL_NIL;
	} else {
#line 850
	  test_not = KEY_VARS[1];
	}
#line 850
	if (KEY_VARS[5]==ECL_NIL) {
#line 850
	  key = ECL_NIL;
	} else {
#line 850
	  key = KEY_VARS[2];
	}
#line 850
  setup_test(&t, item, test, test_not, key);
  loop_for_in(list) {
    if (TEST(&t, ECL_CONS_CAR(list)))
      break;
  } end_loop_for_in;
  close_test(&t);
  {
#line 856
	#line 856
	cl_object __value0 = list;
#line 856
	the_env->nvalues = 1;
#line 856
	the_env->values[0] = __value0;
#line 856
	ecl_va_end(ARGS);
#line 856
	return __value0;
#line 856
}
;
}

bool
ecl_member_eq(cl_object x, cl_object l)
{
  loop_for_in(l) {
    if (x == ECL_CONS_CAR(l))
      return(TRUE);
  } end_loop_for_in;
  return(FALSE);
}

cl_object
si_memq(cl_object x, cl_object l)
{
  loop_for_in(l) {
    if (x == ECL_CONS_CAR(l)) {
      {
#line 874
	const cl_env_ptr the_env = ecl_process_env();
#line 874
	#line 874
	cl_object __value0 = l;
#line 874
	the_env->nvalues = 1;
#line 874
	the_env->values[0] = __value0;
#line 874
	#line 874
	return __value0;
#line 874
}
;
    }
  } end_loop_for_in;
  {
#line 877
	const cl_env_ptr the_env = ecl_process_env();
#line 877
	#line 877
	cl_object __value0 = ECL_NIL;
#line 877
	the_env->nvalues = 1;
#line 877
	the_env->values[0] = __value0;
#line 877
	#line 877
	return __value0;
#line 877
}
;
}

/* Added for use by the compiler, instead of open coding them. Beppe */
cl_object
ecl_memql(cl_object x, cl_object l)
{
  loop_for_in(l) {
    if (ecl_eql(x, ECL_CONS_CAR(l)))
      return(l);
  } end_loop_for_in;
  return(ECL_NIL);
}

cl_object
ecl_member(cl_object x, cl_object l)
{
  loop_for_in(l) {
    if (ecl_equal(x, ECL_CONS_CAR(l)))
      return(l);
  } end_loop_for_in;
  return(ECL_NIL);
}
/* End of addition. Beppe */

cl_object
si_member1(cl_object item, cl_object list, cl_object test, cl_object test_not, cl_object key)
{
  struct cl_test t;

  if (key != ECL_NIL)
    item = funcall(2, key, item);
  setup_test(&t, item, test, test_not, key);
  loop_for_in(list) {
    if (TEST(&t, ECL_CONS_CAR(list)))
      break;
  } end_loop_for_in;
  close_test(&t);
  {
#line 915
	const cl_env_ptr the_env = ecl_process_env();
#line 915
	#line 915
	cl_object __value0 = list;
#line 915
	the_env->nvalues = 1;
#line 915
	the_env->values[0] = __value0;
#line 915
	#line 915
	return __value0;
#line 915
}
;
}

cl_object
cl_tailp(cl_object y, cl_object x)
{
  loop_for_on(x) {
    if (ecl_eql(x, y)) {
      {
#line 923
	const cl_env_ptr the_env = ecl_process_env();
#line 923
	#line 923
	cl_object __value0 = ECL_T;
#line 923
	the_env->nvalues = 1;
#line 923
	the_env->values[0] = __value0;
#line 923
	#line 923
	return __value0;
#line 923
}
;
    }
  } end_loop_for_on(x);
  return cl_eql(x, y);
}

#line 929
cl_object cl_adjoin(cl_narg narg, cl_object item, cl_object list, ...)
{
#line 929

  cl_object output;
#line 932
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 932
	static cl_object KEYS[3] = {(cl_object)(cl_symbols+1343), (cl_object)(cl_symbols+1344), (cl_object)(cl_symbols+1288)};
	cl_object test;
	cl_object test_not;
	cl_object key;
#line 932
	cl_object KEY_VARS[6];
#line 932
	ecl_va_list ARGS;
	ecl_va_start(ARGS, list, narg, 2);
#line 932
	if (ecl_unlikely(narg < 2)) FEwrong_num_arguments(ecl_make_fixnum(84));
#line 932
	cl_parse_key(ARGS, 3, KEYS, KEY_VARS, NULL, 0);
#line 932
	if (KEY_VARS[3]==ECL_NIL) {
#line 932
	  test = ECL_NIL;
	} else {
#line 932
	  test = KEY_VARS[0];
	}
#line 932
	if (KEY_VARS[4]==ECL_NIL) {
#line 932
	  test_not = ECL_NIL;
	} else {
#line 932
	  test_not = KEY_VARS[1];
	}
#line 932
	if (KEY_VARS[5]==ECL_NIL) {
#line 932
	  key = ECL_NIL;
	} else {
#line 932
	  key = KEY_VARS[2];
	}
#line 932
  if (narg < 2)
  FEwrong_num_arguments(ecl_make_fixnum(/*ADJOIN*/84));
  output = si_member1(item, list, test, test_not, key);
  if (Null(output))
    output = CONS(item, list);
  else
    output = list;
  {
#line 939
	#line 939
	cl_object __value0 = output;
#line 939
	the_env->nvalues = 1;
#line 939
	the_env->values[0] = __value0;
#line 939
	ecl_va_end(ARGS);
#line 939
	return __value0;
#line 939
}
;
}

cl_object
cl_cons(cl_object x, cl_object y)
{
  {
#line 945
	const cl_env_ptr the_env = ecl_process_env();
#line 945
	#line 945
	cl_object __value0 = CONS(x, y);
#line 945
	the_env->nvalues = 1;
#line 945
	the_env->values[0] = __value0;
#line 945
	#line 945
	return __value0;
#line 945
}
;
}

cl_object
cl_acons(cl_object x, cl_object y, cl_object z)
{
  {
#line 951
	const cl_env_ptr the_env = ecl_process_env();
#line 951
	#line 951
	cl_object __value0 = CONS(CONS(x, y), z);
#line 951
	the_env->nvalues = 1;
#line 951
	the_env->values[0] = __value0;
#line 951
	#line 951
	return __value0;
#line 951
}
;
}

#line 954
cl_object cl_pairlis(cl_narg narg, cl_object keys, cl_object data, ...)
{
#line 954

  cl_object k, d;
#line 957
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 957
	cl_object a_list;
#line 957
	va_list ARGS;
	va_start(ARGS, data);
#line 957
	if (ecl_unlikely(narg < 2|| narg > 3)) FEwrong_num_arguments(ecl_make_fixnum(628));
#line 957
	if (narg > 2) {
#line 957
		a_list = va_arg(ARGS,cl_object);
#line 957
	} else {
#line 957
		a_list = ECL_NIL;
#line 957
	}
#line 957
  k = keys;
  d = data;
  loop_for_in(k) {
    if (ecl_endp(d))
      goto error;
    a_list = CONS(CONS(ECL_CONS_CAR(k), ECL_CONS_CAR(d)), a_list);
    d = CDR(d);
  } end_loop_for_in;
  if (!ecl_endp(d))
  error:
    FEerror("The keys ~S and the data ~S are not of the same length",
            2, keys, data);
  {
#line 969
	#line 969
	cl_object __value0 = a_list;
#line 969
	the_env->nvalues = 1;
#line 969
	the_env->values[0] = __value0;
#line 969
	va_end(ARGS);
#line 969
	return __value0;
#line 969
}
;
}


#line 973
cl_object cl_assoc(cl_narg narg, cl_object item, cl_object a_list, ...)
{
#line 973

  struct cl_test t;
#line 976
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 976
	static cl_object KEYS[3] = {(cl_object)(cl_symbols+1343), (cl_object)(cl_symbols+1344), (cl_object)(cl_symbols+1288)};
	cl_object test;
	cl_object test_not;
	cl_object key;
#line 976
	cl_object KEY_VARS[6];
#line 976
	ecl_va_list ARGS;
	ecl_va_start(ARGS, a_list, narg, 2);
#line 976
	if (ecl_unlikely(narg < 2)) FEwrong_num_arguments(ecl_make_fixnum(116));
#line 976
	cl_parse_key(ARGS, 3, KEYS, KEY_VARS, NULL, 0);
#line 976
	if (KEY_VARS[3]==ECL_NIL) {
#line 976
	  test = ECL_NIL;
	} else {
#line 976
	  test = KEY_VARS[0];
	}
#line 976
	if (KEY_VARS[4]==ECL_NIL) {
#line 976
	  test_not = ECL_NIL;
	} else {
#line 976
	  test_not = KEY_VARS[1];
	}
#line 976
	if (KEY_VARS[5]==ECL_NIL) {
#line 976
	  key = ECL_NIL;
	} else {
#line 976
	  key = KEY_VARS[2];
	}
#line 976
  setup_test(&t, item, test, test_not, key);
  a_list = do_assoc(&t, a_list);
  close_test(&t);
  {
#line 979
	#line 979
	cl_object __value0 = a_list;
#line 979
	the_env->nvalues = 1;
#line 979
	the_env->values[0] = __value0;
#line 979
	ecl_va_end(ARGS);
#line 979
	return __value0;
#line 979
}
;
}

static cl_object
do_assoc(struct cl_test *t, cl_object a_list)
{
  loop_for_in(a_list) {
    cl_object pair = ECL_CONS_CAR(a_list);
    if (!Null(pair)) {
      if (!LISTP(pair))
        FEtype_error_list(pair);
      if (TEST(t, ECL_CONS_CAR(pair)))
        return pair;
    }
  } end_loop_for_in;
  return ECL_NIL;
}

#line 997
cl_object cl_rassoc(cl_narg narg, cl_object item, cl_object a_list, ...)
{
#line 997

  struct cl_test t;
#line 1000
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 1000
	static cl_object KEYS[3] = {(cl_object)(cl_symbols+1343), (cl_object)(cl_symbols+1344), (cl_object)(cl_symbols+1288)};
	cl_object test;
	cl_object test_not;
	cl_object key;
#line 1000
	cl_object KEY_VARS[6];
#line 1000
	ecl_va_list ARGS;
	ecl_va_start(ARGS, a_list, narg, 2);
#line 1000
	if (ecl_unlikely(narg < 2)) FEwrong_num_arguments(ecl_make_fixnum(685));
#line 1000
	cl_parse_key(ARGS, 3, KEYS, KEY_VARS, NULL, 0);
#line 1000
	if (KEY_VARS[3]==ECL_NIL) {
#line 1000
	  test = ECL_NIL;
	} else {
#line 1000
	  test = KEY_VARS[0];
	}
#line 1000
	if (KEY_VARS[4]==ECL_NIL) {
#line 1000
	  test_not = ECL_NIL;
	} else {
#line 1000
	  test_not = KEY_VARS[1];
	}
#line 1000
	if (KEY_VARS[5]==ECL_NIL) {
#line 1000
	  key = ECL_NIL;
	} else {
#line 1000
	  key = KEY_VARS[2];
	}
#line 1000
  setup_test(&t, item, test, test_not, key);
  loop_for_in(a_list) {
    cl_object pair = ECL_CONS_CAR(a_list);
    if (!Null(pair)) {
      if (!LISTP(pair))
        FEtype_error_list(pair);
      if (TEST(&t, ECL_CONS_CDR(pair))) {
        a_list = pair;
        break;
      }
    }
  } end_loop_for_in;
  close_test(&t);
  {
#line 1013
	#line 1013
	cl_object __value0 = a_list;
#line 1013
	the_env->nvalues = 1;
#line 1013
	the_env->values[0] = __value0;
#line 1013
	ecl_va_end(ARGS);
#line 1013
	return __value0;
#line 1013
}
;
}

cl_object
ecl_remove_eq(cl_object x, cl_object l)
{
  cl_object head = ECL_NIL, tail = ECL_NIL;
  loop_for_on_unsafe(l) {
    if (ECL_CONS_CAR(l) != x) {
      cl_object cons = ecl_list1(ECL_CONS_CAR(l));
      if (Null(tail)) {
        head = tail = cons;
      } else {
        ECL_RPLACD(tail, cons);
        tail = cons;
      }
    }
  } end_loop_for_on_unsafe(l);
  return head;
}

cl_object
ecl_delete_eq(cl_object x, cl_object l)
{
  cl_object head = l;
  cl_object *p = &head;
  while (!ECL_ATOM(l)) {
    if (ECL_CONS_CAR(l) == x) {
      *p = l = ECL_CONS_CDR(l);
    } else {
      p = &ECL_CONS_CDR(l);
      l = *p;
    }
  }
  return head;
}

/* Added for use by the compiler, instead of open coding them. Beppe */
cl_object
ecl_assq(cl_object x, cl_object l)
{
  loop_for_in(l) {
    cl_object pair = ECL_CONS_CAR(l);
    if (pair==ECL_NIL) continue;
    if (ecl_unlikely(ECL_ATOM(pair))) {
      FEtype_error_cons(pair);
    }
    if (x == CAR(pair))
      return pair;
  } end_loop_for_in;
  return(ECL_NIL);
}

cl_object
ecl_assql(cl_object x, cl_object l)
{
  loop_for_in(l) {
    cl_object pair = ECL_CONS_CAR(l);
    if (pair==ECL_NIL) continue;
    if (ecl_unlikely(ECL_ATOM(pair))) {
      FEtype_error_cons(pair);
    }
    if (ecl_eql(x, CAR(pair)))
      return pair;
  } end_loop_for_in;
  return(ECL_NIL);
}

cl_object
ecl_assoc(cl_object x, cl_object l)
{
  loop_for_in(l) {
    cl_object pair = ECL_CONS_CAR(l);
    if (pair==ECL_NIL) continue;
    if (ecl_unlikely(ECL_ATOM(pair))) {
      FEtype_error_cons(pair);
    }
    if (ecl_equal(x, CAR(pair)))
      return pair;
  } end_loop_for_in;
  return(ECL_NIL);
}

cl_object
ecl_assqlp(cl_object x, cl_object l)
{
  loop_for_in(l) {
    cl_object pair = ECL_CONS_CAR(l);
    if (pair==ECL_NIL) continue;
    if (ecl_unlikely(ECL_ATOM(pair))) {
      FEtype_error_cons(pair);
    }
    if (ecl_equalp(x, CAR(pair)))
      return pair;
  } end_loop_for_in;
  return(ECL_NIL);
}
/* End of addition. Beppe */
