#line 1 "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/src/c/typespec.d"
/* -*- Mode: C; c-basic-offset: 2; indent-tabs-mode: nil -*- */
/* vim: set filetype=c tabstop=2 shiftwidth=2 expandtab: */

/*
 * typespec.d - type specifier routines
 *
 * Copyright (c) 1984 Taiichi Yuasa and Masami Hagiya
 * Copyright (c) 1990 Giuseppe Attardi
 * Copyright (c) 2001 Juan Jose Garcia Ripoll
 *
 * See file 'LICENSE' for the copyright details.
 *
 */

#include <ecl/ecl.h>

void
FEtype_error_fixnum(cl_object x) {
  FEwrong_type_argument(ecl_make_fixnum(/*FIXNUM*/374), x);
}

void
FEtype_error_size(cl_object x) {
  FEwrong_type_argument(cl_list(3, ECL_SYM("INTEGER",439), ecl_make_fixnum(0),
                                ecl_make_fixnum(MOST_POSITIVE_FIXNUM)),
                        x);
}

void
FEtype_error_cons(cl_object x) {
  FEwrong_type_argument(ecl_make_fixnum(/*CONS*/253), x);
}

void
FEtype_error_list(cl_object x) {
  FEwrong_type_argument(ecl_make_fixnum(/*LIST*/483), x);
}

void
FEtype_error_proper_list(cl_object x) {
  cl_error(9, ECL_SYM("SIMPLE-TYPE-ERROR",775), ECL_SYM(":FORMAT-CONTROL",1263),
           ecl_make_constant_base_string("Not a proper list ~D",-1),
           ECL_SYM(":FORMAT-ARGUMENTS",1262), cl_list(1, x),
           ECL_SYM(":EXPECTED-TYPE",1254), ecl_read_from_cstring("si::proper-list"),
           ECL_SYM(":DATUM",1236), x);
}

void
FEcircular_list(cl_object x)
{
  /* FIXME: Is this the right way to rebind it? */
  ecl_bds_bind(ecl_process_env(), ECL_SYM("*PRINT-CIRCLE*",49), ECL_T);
  cl_error(9, ECL_SYM("SIMPLE-TYPE-ERROR",775), ECL_SYM(":FORMAT-CONTROL",1263),
           ecl_make_constant_base_string("Circular list ~D",-1),
           ECL_SYM(":FORMAT-ARGUMENTS",1262), cl_list(1, x),
           ECL_SYM(":EXPECTED-TYPE",1254), ECL_SYM("LIST",483),
           ECL_SYM(":DATUM",1236), x);
}

void
FEtype_error_index(cl_object seq, cl_fixnum ndx)
{
  cl_object n = ecl_make_fixnum(ndx);
  cl_index l = ECL_INSTANCEP(seq)? seq->instance.length : ecl_length(seq);
  cl_error(9, ECL_SYM("SIMPLE-TYPE-ERROR",775), ECL_SYM(":FORMAT-CONTROL",1263),
           ecl_make_constant_base_string("~S is not a valid index into the object ~S",-1),
           ECL_SYM(":FORMAT-ARGUMENTS",1262), cl_list(2, n, seq),
           ECL_SYM(":EXPECTED-TYPE",1254), cl_list(3, ECL_SYM("INTEGER",439), ecl_make_fixnum(0), ecl_make_fixnum(l-1)),
           ECL_SYM(":DATUM",1236), n);
}

void
FEtype_error_array(cl_object v)
{
  FEwrong_type_argument(ecl_make_fixnum(/*ARRAY*/98), v);
}

void
FEtype_error_vector(cl_object v)
{
  FEwrong_type_argument(ecl_make_fixnum(/*VECTOR*/900), v);
}

void
FEtype_error_sequence(cl_object x) {
  FEwrong_type_argument(ecl_make_fixnum(/*SEQUENCE*/743), x);
}

cl_object
ecl_type_error(cl_object function, const char *place, cl_object o,
               cl_object type)
{
  return si_wrong_type_argument(4, o, type,
                                (*place? ecl_make_constant_base_string(place,-1) : ECL_NIL),
                                function);
}

/**********************************************************************/

static cl_object
ecl_type_to_symbol(cl_type t)
{
  switch(t) {
  case t_character:
    return ECL_SYM("CHARACTER",224);
  case t_fixnum:
    return ECL_SYM("FIXNUM",374);
  case t_bignum:
    return ECL_SYM("BIGNUM",124);
  case t_ratio:
    return ECL_SYM("RATIO",688);
  case t_singlefloat:
    return ECL_SYM("SINGLE-FLOAT",780);
  case t_doublefloat:
    return ECL_SYM("DOUBLE-FLOAT",317);
  case t_longfloat:
    return ECL_SYM("LONG-FLOAT",510);
  case t_complex:
    return ECL_SYM("COMPLEX",243);
#ifdef ECL_COMPLEX_FLOAT
  case t_csfloat:
    return ECL_SYM("SI::COMPLEX-SINGLE-FLOAT",1872);
  case t_cdfloat:
    return ECL_SYM("SI::COMPLEX-DOUBLE-FLOAT",1873);
  case t_clfloat:
    return ECL_SYM("SI::COMPLEX-LONG-FLOAT",1874);
#endif
  case t_symbol:
    return ECL_SYM("SYMBOL",842);
  case t_package:
    return ECL_SYM("PACKAGE",619);
  case t_list:
    return ECL_SYM("LIST",483);
  case t_hashtable:
    return ECL_SYM("HASH-TABLE",420);
  case t_array:
    return ECL_SYM("ARRAY",98);
  case t_vector:
    return ECL_SYM("VECTOR",900);
  case t_bitvector:
    return ECL_SYM("BIT-VECTOR",136);
#ifdef ECL_UNICODE
  case t_string:
    return ECL_SYM("STRING",807);
#endif
  case t_base_string:
    return ECL_SYM("BASE-STRING",123);
  case t_stream:
    return ECL_SYM("STREAM",801);
  case t_readtable:
    return ECL_SYM("READTABLE",702);
  case t_pathname:
    return ECL_SYM("PATHNAME",632);
  case t_random:
    return ECL_SYM("RANDOM-STATE",683);
  case t_bytecodes:
  case t_bclosure:
  case t_cfun:
  case t_cfunfixed:
  case t_cclosure:
    return ECL_SYM("COMPILED-FUNCTION",238);
#ifdef ECL_THREADS
  case t_process:
    return ECL_SYM("MP::PROCESS",1429);
  case t_lock:
    return ECL_SYM("MP::LOCK",1430);
  case t_rwlock:
    return ECL_SYM("MP::RWLOCK",1471);
  case t_condition_variable:
    return ECL_SYM("MP::CONDITION-VARIABLE",1431);
  case t_semaphore:
    return ECL_SYM("MP::SEMAPHORE",1479);
  case t_barrier:
    return ECL_SYM("MP::BARRIER",1488);
  case t_mailbox:
    return ECL_SYM("MP::MAILBOX",1499);
#endif
  case t_codeblock:
    return ECL_SYM("SI::CODE-BLOCK",1668);
  case t_foreign:
    return ECL_SYM("SI::FOREIGN-DATA",1373);
  case t_frame:
    return ECL_SYM("SI::FRAME",1669);
  case t_weak_pointer:
    return ECL_SYM("EXT::WEAK-POINTER",1790);
#ifdef ECL_SSE2
  case t_sse_pack:
    return ECL_SYM("EXT::SSE-PACK",1875);
#endif
  default:
    ecl_internal_error("not a lisp data object");
  }
}

cl_object
ecl_check_cl_type(cl_object fun, cl_object p, cl_type t)
{
  while (ecl_t_of(p) != t) {
    p = ecl_type_error(fun, "argument", p, ecl_type_to_symbol(t));
  }
  return p;
}

void
assert_type_integer(cl_object p)
{
  cl_type t = ecl_t_of(p);
  if (t != t_fixnum && t != t_bignum)
    FEwrong_type_nth_arg(ecl_make_fixnum(/*COERCE*/233), 1, p, ecl_make_fixnum(/*INTEGER*/439));
}

void
assert_type_non_negative_integer(cl_object p)
{
  cl_type t = ecl_t_of(p);

  if (t == t_fixnum) {
    if (!ecl_fixnum_minusp(p))
      return;
  } else if (t == t_bignum) {
    if (_ecl_big_sign(p) >= 0)
      return;
  }
  FEwrong_type_argument(cl_list(3,ECL_SYM("INTEGER",439),ecl_make_fixnum(0),ECL_SYM("*",20)), p);
}

void
assert_type_proper_list(cl_object p)
{
  if (ECL_ATOM(p) && p != ECL_NIL)
    FEtype_error_list(p);
  if (cl_list_length(p) == ECL_NIL)
    FEcircular_list(p);
}

cl_object
cl_type_of(cl_object x)
{
  cl_object t;
  cl_type tx = ecl_t_of(x);
  switch (tx) {
  case t_instance: {
    cl_object cl = ECL_CLASS_OF(x);
    t = ECL_CLASS_NAME(cl);
    if (t == ECL_NIL || cl != cl_find_class(2, t, ECL_NIL))
      t = cl;
    break;
  }
  case t_fixnum:
  case t_bignum:
    t = cl_list(3, ECL_SYM("INTEGER",439), x, x);
    break;
  case t_character: {
    int i = ECL_CHAR_CODE(x);
    if (ecl_standard_char_p(i)) {
      t = ECL_SYM("STANDARD-CHAR",796);
    } else if (ecl_base_char_p(i)) {
      t = ECL_SYM("BASE-CHAR",122);
    } else {
      t = ECL_SYM("CHARACTER",224);
    }
    break;
  }
#ifdef ECL_COMPLEX_FLOAT
  case t_complex:
    t = cl_list(2, ECL_SYM("COMPLEX",243), ECL_SYM("RATIONAL",689));
    break;
  case t_csfloat:
    t = cl_list(2, ECL_SYM("COMPLEX",243), ECL_SYM("SINGLE-FLOAT",780));
    break;
  case t_cdfloat:
    t = cl_list(2, ECL_SYM("COMPLEX",243), ECL_SYM("DOUBLE-FLOAT",317));
    break;
  case t_clfloat:
    t = cl_list(2, ECL_SYM("COMPLEX",243), ECL_SYM("LONG-FLOAT",510));
    break;
#else
  case t_complex:
    t = cl_list(2, ECL_SYM("COMPLEX",243), ECL_SYM("REAL",705));
    break;
#endif
  case t_symbol:
    if (x == ECL_T)
      t = ECL_SYM("BOOLEAN",157);
    else if (x->symbol.hpack == cl_core.keyword_package)
      t = ECL_SYM("KEYWORD",451);
    else
      t = ECL_SYM("SYMBOL",842);
    break;
  case t_array:
    if (ECL_ADJUSTABLE_ARRAY_P(x) ||
        !Null(CAR(x->array.displaced)))
      t = ECL_SYM("ARRAY",98);
    else
      t = ECL_SYM("SIMPLE-ARRAY",765);
    t = cl_list(3, t, ecl_elttype_to_symbol(ecl_array_elttype(x)),
                cl_array_dimensions(x));
    break;
  case t_vector:
    if (ECL_ADJUSTABLE_ARRAY_P(x) ||
        !Null(CAR(x->vector.displaced))) {
      t = cl_list(3, ECL_SYM("VECTOR",900), ecl_elttype_to_symbol(ecl_array_elttype(x)),
                  ecl_make_fixnum(x->vector.dim));
    } else if (ECL_ARRAY_HAS_FILL_POINTER_P(x) ||
               (cl_elttype)x->vector.elttype != ecl_aet_object) {
      t = cl_list(3, ECL_SYM("SIMPLE-ARRAY",765),
                  ecl_elttype_to_symbol(ecl_array_elttype(x)),
                  cl_array_dimensions(x));
    } else {
      t = cl_list(2, ECL_SYM("SIMPLE-VECTOR",776), ecl_make_fixnum(x->vector.dim));
    }
    break;
#ifdef ECL_UNICODE
  case t_string:
    if (ECL_ADJUSTABLE_ARRAY_P(x) ||
        ECL_ARRAY_HAS_FILL_POINTER_P(x) ||
        !Null(CAR(x->string.displaced)))
      t = ECL_SYM("ARRAY",98);
    else
      t = ECL_SYM("SIMPLE-ARRAY",765);
    t = cl_list(3, t, ECL_SYM("CHARACTER",224), cl_list(1, ecl_make_fixnum(x->string.dim)));
    break;
#endif
  case t_base_string:
    if (ECL_ADJUSTABLE_ARRAY_P(x) ||
        ECL_ARRAY_HAS_FILL_POINTER_P(x) ||
        !Null(CAR(x->base_string.displaced)))
      t = ECL_SYM("ARRAY",98);
    else
      t = ECL_SYM("SIMPLE-ARRAY",765);
    t = cl_list(3, t, ECL_SYM("BASE-CHAR",122), cl_list(1, ecl_make_fixnum(x->base_string.dim)));
    break;
  case t_bitvector:
    if (ECL_ADJUSTABLE_ARRAY_P(x) ||
        ECL_ARRAY_HAS_FILL_POINTER_P(x) ||
        !Null(CAR(x->vector.displaced)))
      t = ECL_SYM("ARRAY",98);
    else
      t = ECL_SYM("SIMPLE-ARRAY",765);
    t = cl_list(3, t, ECL_SYM("BIT",125), cl_list(1, ecl_make_fixnum(x->vector.dim)));
    break;
  case t_stream:
    switch (x->stream.mode) {
    case ecl_smm_synonym:   t = ECL_SYM("SYNONYM-STREAM",850); break;
    case ecl_smm_broadcast: t = ECL_SYM("BROADCAST-STREAM",161); break;
    case ecl_smm_concatenated:      t = ECL_SYM("CONCATENATED-STREAM",247); break;
    case ecl_smm_two_way:   t =  ECL_SYM("TWO-WAY-STREAM",868); break;
    case ecl_smm_string_input:
    case ecl_smm_string_output:     t = ECL_SYM("STRING-STREAM",818); break;
    case ecl_smm_echo:              t = ECL_SYM("ECHO-STREAM",324); break;
    case ecl_smm_sequence_input:
    case ecl_smm_sequence_output: t = ECL_SYM("EXT::SEQUENCE-STREAM",2011); break;
    default:                t = ECL_SYM("FILE-STREAM",360); break;
    }
    break;
  case t_pathname:
    t = x->pathname.logical? ECL_SYM("LOGICAL-PATHNAME",500) : ECL_SYM("PATHNAME",632);
    break;
  case t_list:
    t = Null(x) ? ECL_SYM("NULL",607) : ECL_SYM("CONS",253);
    break;
#ifdef ECL_SSE2
  case t_sse_pack:
    t = ECL_SYM("EXT::SSE-PACK",1875);
    break;
#endif
  default:
    t = ecl_type_to_symbol(tx);
  }
  {
#line 370
	const cl_env_ptr the_env = ecl_process_env();
#line 370
	#line 370
	cl_object __value0 = t;
#line 370
	the_env->nvalues = 1;
#line 370
	the_env->values[0] = __value0;
#line 370
	#line 370
	return __value0;
#line 370
}
;
}

cl_object
ecl_make_integer_type(cl_object min, cl_object max)
{
  return cl_list(3, ECL_SYM("INTEGER",439), min, max);
}
