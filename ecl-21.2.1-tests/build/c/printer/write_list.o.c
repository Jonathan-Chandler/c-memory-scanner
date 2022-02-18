#line 1 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/c/printer/write_list.d"
/* -*- Mode: C; c-basic-offset: 2; indent-tabs-mode: nil -*- */
/* vim: set filetype=c tabstop=2 shiftwidth=2 expandtab: */

/*
 * write_list.d - ugly printer for lists
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

void
_ecl_write_list(cl_object x, cl_object stream)
{
  const cl_env_ptr env = ecl_process_env();
  bool circle;
  cl_fixnum print_level, print_length;
  cl_index i;
  cl_object y;
  if (Null(x)) {
    _ecl_write_symbol(x, stream);
    return;
  }
  if (CAR(x) == ECL_SYM("SI::#!",1013)) {
    writestr_stream("#!", stream);
    x = CDR(x);
    si_write_object(x, stream);
    return;
  }
  if (CONSP(CDR(x)) && Null(CDDR(x))) {
    if (CAR(x) == ECL_SYM("QUOTE",681)) {
      ecl_write_char('\'', stream);
      x = CADR(x);
      si_write_object(x, stream);
      return;
    }
    if (CAR(x) == ECL_SYM("FUNCTION",398)) {
      ecl_write_char('#', stream);
      ecl_write_char('\'', stream);
      x = CADR(x);
      si_write_object(x, stream);
      return;
    }
    if (CAR(x) == ECL_SYM("SI::QUASIQUOTE",1532)) {
      ecl_write_char('`', stream);
      x = CADR(x);
      si_write_object(x, stream);
      return;
    }
    if (CAR(x) == ECL_SYM("SI::UNQUOTE",1036)) {
      ecl_write_char(',', stream);
      x = CADR(x);
      si_write_object(x, stream);
      return;
    }
    if (CAR(x) == ECL_SYM("SI::UNQUOTE-SPLICE",1038)) {
      writestr_stream(",@", stream);
      x = CADR(x);
      si_write_object(x, stream);
      return;
    }
    if (CAR(x) == ECL_SYM("SI::UNQUOTE-NSPLICE",1037)) {
      writestr_stream(",.", stream);
      x = CADR(x);
      si_write_object(x, stream);
      return;
    }
  }
  circle = ecl_print_circle();
  if (ecl_print_readably()) {
    print_level = MOST_POSITIVE_FIXNUM;
    print_length = MOST_POSITIVE_FIXNUM;
  } else {
    print_level = ecl_print_level();
    print_length = ecl_print_length();
  }
  if (print_level == 0) {
    ecl_write_char('#', stream);
    return;
  }
  ecl_bds_bind(env, ECL_SYM("*PRINT-LEVEL*",53), ecl_make_fixnum(print_level-1));
  ecl_write_char('(', stream);
  for (i = 0;  ;  i++) {
    if (i >= print_length) {
      writestr_stream("...", stream);
      break;
    }
    y = CAR(x);
    x = CDR(x);
    si_write_object(y, stream);
    /* FIXME! */
    if (x == OBJNULL || ECL_ATOM(x) ||
        (circle && _ecl_will_print_as_hash(x)))
      {
        if (x != ECL_NIL) {
          ecl_write_char(' ', stream);
          writestr_stream(". ", stream);
          si_write_object(x, stream);
        }
        break;
      }
    if (i == 0 && y != OBJNULL && ecl_t_of(y) == t_symbol)
      ecl_write_char(' ', stream);
    else
      ecl_write_char(' ', stream);
  }
  ecl_write_char(')', stream);
  ecl_bds_unwind1(env);
}
