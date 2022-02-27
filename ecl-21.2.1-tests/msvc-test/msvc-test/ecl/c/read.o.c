#line 1 "C:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/src/c/read.d"
/* -*- Mode: C; c-basic-offset: 2; indent-tabs-mode: nil -*- */
/* vim: set filetype=c tabstop=2 shiftwidth=2 expandtab: */

/*
 * read.d - reader
 *
 * Copyright (c) 1984 Taiichi Yuasa and Masami Hagiya
 * Copyright (c) 1990 Giuseppe Attardi
 * Copyright (c) 2001 Juan Jose Garcia Ripoll
 *
 * See file 'LICENSE' for the copyright details.
 *
 */

#define ECL_INCLUDE_MATH_H
#include <ecl/ecl.h>
#include <ecl/number.h>
#include <assert.h>  /* for assert() */
#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <string.h>
#include <stdlib.h>
#include <ecl/internal.h>
#include <ecl/ecl-inl.h>
#include <ecl/bytecodes.h>

#undef _complex

static cl_object dispatch_macro_character(cl_object table, cl_object strm, int c, bool signal_error);

#define read_suppress (ecl_symbol_value(ECL_SYM("*READ-SUPPRESS*",66)) != ECL_NIL)

#ifdef ECL_UNICODE
# define TOKEN_STRING_DIM(s) ((s)->string.dim)
# define TOKEN_STRING_FILLP(s) ((s)->string.fillp)
# define TOKEN_STRING_CHAR(s,n) ((s)->string.self[n])
# define TOKEN_STRING_CHAR_SET(s,n,c) (s)->string.self[n]=(c)
# define TOKEN_STRING_CHAR_CMP(s,n,c) ((s)->string.self[n]==(c))
#else
# define TOKEN_STRING_DIM(s) ((s)->base_string.dim)
# define TOKEN_STRING_FILLP(s) ((s)->base_string.fillp)
# define TOKEN_STRING_CHAR(s,n) ((s)->base_string.self[n])
# define TOKEN_STRING_CHAR_SET(s,n,c) ((s)->base_string.self[n]=(c))
# define TOKEN_STRING_CHAR_CMP(s,n,c) ((s)->base_string.self[n]==(c))
#endif

#define ECL_READ_ONLY_TOKEN 1
#define ECL_READ_RETURN_IGNORABLE 3
#define ECL_READ_LIST_DOT 4

cl_object
si_get_buffer_string()
{
  const cl_env_ptr env = ecl_process_env();
  cl_object pool = env->string_pool;
  cl_object output;
  if (pool == ECL_NIL) {
#ifdef ECL_UNICODE
    output = ecl_alloc_adjustable_extended_string(ECL_BUFFER_STRING_SIZE);
#else
    output = ecl_alloc_adjustable_base_string(ECL_BUFFER_STRING_SIZE);
#endif
  } else {
    output = CAR(pool);
    env->string_pool = CDR(pool);
  }
  TOKEN_STRING_FILLP(output) = 0;
  {
#line 69
	const cl_env_ptr the_env = ecl_process_env();
#line 69
	#line 69
	cl_object __value0 = output;
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
}

cl_object
si_put_buffer_string(cl_object string)
{
  if (string != ECL_NIL) {
    const cl_env_ptr env = ecl_process_env();
    cl_object pool = env->string_pool;
    cl_index l = 0;
    if (pool != ECL_NIL) {
      /* We store the size of the pool in the string index */
      l = TOKEN_STRING_FILLP(ECL_CONS_CAR(pool));
    }
    if (l < ECL_MAX_STRING_POOL_SIZE) {
      /* Ok, by ignoring the following code, here we
       * are doing like SBCL: we simply grow the
       * input buffer and do not care about its
       * size. */
#if 0
      if (TOKEN_STRING_DIM(string) > 32*ECL_BUFFER_STRING_SIZE) {
        /* String has been enlarged. Cut it. */
#ifdef ECL_UNICODE
        string = ecl_alloc_adjustable_extended_string(ECL_BUFFER_STRING_SIZE);
#else
        string = ecl_alloc_adjustable_base_string(ECL_BUFFER_STRING_SIZE);
#endif
      }
#endif
      TOKEN_STRING_FILLP(string) = l+1;
      env->string_pool = CONS(string, pool);
    }
  }
  {
#line 102
	const cl_env_ptr the_env = ecl_process_env();
the_env->nvalues = 0; return ECL_NIL;
#line 102
}
;
}

static void extra_argument (int c, cl_object stream, cl_object d);
static cl_object patch_sharp(const cl_env_ptr env, cl_object x);
static cl_object do_read_delimited_list(int d, cl_object strm, bool proper_list);

cl_object
ecl_read_object_non_recursive(cl_object in)
{
  cl_object x;
  const cl_env_ptr env = ecl_process_env();

  ecl_bds_bind(env, ECL_SYM("SI::*SHARP-EQ-CONTEXT*",1032), ECL_NIL);
  ecl_bds_bind(env, ECL_SYM("SI::*BACKQ-LEVEL*",1014), ecl_make_fixnum(0));
  x = ecl_read_object(in);
  x = patch_sharp(env, x);
  ecl_bds_unwind_n(env, 2);
  return x;
}

/*
 * This routine inverts the case of the characters in the buffer which
 * were not escaped. ESCAPE_LIST is a list of intevals of characters
 * that were escaped, as in ({(low-limit . high-limit)}*). The list
 * goes from the last interval to the first one, in reverse order,
 * and thus we run the buffer from the end to the beginning.
 */
static void
invert_buffer_case(cl_object x, cl_object escape_list, int sign)
{
  cl_fixnum high_limit, low_limit;
  cl_fixnum i = TOKEN_STRING_FILLP(x)-1;
  do {
    if (escape_list != ECL_NIL) {
      cl_object escape_interval = CAR(escape_list);
      high_limit = ecl_fixnum(CAR(escape_interval));
      low_limit = ecl_fixnum(CDR(escape_interval));
      escape_list = CDR(escape_list);
    } else {
      high_limit = low_limit = -1;
    }
    for (; i > high_limit; i--) {
      /* The character is not escaped */
      int c = TOKEN_STRING_CHAR(x,i);
      if (ecl_upper_case_p(c) && (sign < 0)) {
        c = ecl_char_downcase(c);
      } else if (ecl_lower_case_p(c) && (sign > 0)) {
        c = ecl_char_upcase(c);
      }
      TOKEN_STRING_CHAR_SET(x,i,c);
    }
    for (; i > low_limit; i--) {
      /* The character is within an escaped interval */
      ;
    }
  } while (i >= 0);
}

static cl_object
ecl_read_object_with_delimiter(cl_object in, int delimiter, int flags,
                               enum ecl_chattrib a)
{
  cl_object x, token;
  int c, base;
  cl_object p;
  cl_index length, i;
  int colon, intern_flag;
  bool external_symbol;
  cl_env_ptr the_env = ecl_process_env();
  cl_object rtbl = ecl_current_readtable();
  enum ecl_readtable_case read_case = rtbl->readtable.read_case;
  cl_object escape_list; /* intervals of escaped characters */
  cl_fixnum upcase; /* # uppercase characters - # downcase characters */
  cl_fixnum count; /* number of unescaped characters */
  bool suppress = read_suppress;
  if (a != cat_constituent) {
    c = 0;
    goto LOOP;
  }
 BEGIN:
  do {
    c = ecl_read_char(in);
    if (c == delimiter) {
      the_env->nvalues = 0;
      return OBJNULL;
    }
    if (c == EOF)
      FEend_of_file(in);
    a = ecl_readtable_get(rtbl, c, &x);
  } while (a == cat_whitespace);
  if ((a == cat_terminating || a == cat_non_terminating) &&
      (flags != ECL_READ_ONLY_TOKEN)) {
    cl_object o;
    if (ECL_HASH_TABLE_P(x)) {
      if (suppress) {
        o = dispatch_macro_character(x, in, c, FALSE);
        if (o == OBJNULL)
          goto BEGIN;
      } else {
        o = dispatch_macro_character(x, in, c, TRUE);
      }
    } else {
      o = _ecl_funcall3(x, in, ECL_CODE_CHAR(c));
    }
    if (the_env->nvalues == 0) {
      if (flags == ECL_READ_RETURN_IGNORABLE)
        return ECL_NIL;
      goto BEGIN;
    }
    unlikely_if (the_env->nvalues > 1) {
      FEerror("The readmacro ~S returned ~D values.",
              2, x, ecl_make_fixnum(the_env->nvalues));
    }
    return o;
  }
 LOOP:
  p = escape_list = ECL_NIL;
  upcase = count = length = 0;
  external_symbol = colon = 0;
  token = si_get_buffer_string();
  for (;;) {
    if (c == ':' && (flags != ECL_READ_ONLY_TOKEN) &&
        a == cat_constituent) {
      colon++;
      goto NEXT;
    }
    if (colon > 2) {
      while (colon--) {
        ecl_string_push_extend(token, ':');
        length++;
      }
    } else if (colon) {
      external_symbol = (colon == 1);
      TOKEN_STRING_CHAR_SET(token,length,'\0');
      /* If the readtable case was :INVERT and all non-escaped characters
       * had the same case, we revert their case. */
      if (read_case == ecl_case_invert && count != 0) {
        if (upcase == count) {
          invert_buffer_case(token, escape_list, -1);
        } else if (upcase == -count) {
          invert_buffer_case(token, escape_list, +1);
        }
      }
      if (length == 0) {
        p = cl_core.keyword_package;
        external_symbol = 0;
      } else {
        p = ecl_find_package_nolock(token);
      }
      if (Null(p) && !suppress) {
        /* When loading binary files, we sometimes must create
           symbols whose package has not yet been maked. We
           allow it, but later on in ecl_init_module we make sure that
           all referenced packages have been properly built.
        */
        cl_object name = cl_copy_seq(token);
        unlikely_if (Null(the_env->packages_to_be_created_p)) {
          FEerror("There is no package with the name ~A.",
                  1, name);
        }
        p = _ecl_package_to_be_created(the_env, name);
      }
      TOKEN_STRING_FILLP(token) = length = 0;
      upcase = count = colon = 0;
      escape_list = ECL_NIL;
    }
    if (a == cat_single_escape) {
      c = ecl_read_char_noeof(in);
      a = cat_constituent;
      if (read_case == ecl_case_invert) {
        escape_list = CONS(CONS(ecl_make_fixnum(length),
                                ecl_make_fixnum(length-1)),
                           escape_list);
      } else {
        escape_list = ECL_T;
      }
      ecl_string_push_extend(token, c);
      length++;
      goto NEXT;
    }
    if (a == cat_multiple_escape) {
      cl_index begin = length;
      for (;;) {
        c = ecl_read_char_noeof(in);
        a = ecl_readtable_get(rtbl, c, NULL);
        if (a == cat_single_escape) {
          c = ecl_read_char_noeof(in);
          a = cat_constituent;
        } else if (a == cat_multiple_escape)
          break;
        ecl_string_push_extend(token, c);
        length++;
      }
      if (read_case == ecl_case_invert) {
        escape_list = CONS(CONS(ecl_make_fixnum(begin),
                                ecl_make_fixnum(length-1)),
                           escape_list);
      } else {
        escape_list = ECL_T;
      }
      goto NEXT;
    }
    if (a == cat_whitespace || a == cat_terminating) {
      ecl_unread_char(c, in);
      break;
    }
    unlikely_if (ecl_invalid_character_p(c) && !suppress) {
      FEreader_error("Found invalid character ~:C", in,
                     1, ECL_CODE_CHAR(c));
    }
    if (read_case != ecl_case_preserve) {
      if (ecl_upper_case_p(c)) {
        upcase++;
        count++;
        if (read_case == ecl_case_downcase)
          c = ecl_char_downcase(c);
      } else if (ecl_lower_case_p(c)) {
        upcase--;
        count++;
        if (read_case == ecl_case_upcase)
          c = ecl_char_upcase(c);
      }
    }
    ecl_string_push_extend(token, c);
    length++;
  NEXT:
    c = ecl_read_char(in);
    if (c == EOF)
      break;
    a = ecl_readtable_get(rtbl, c, NULL);
  }

  if (suppress) {
    x = ECL_NIL;
    goto OUTPUT;
  }

  /* If there are some escaped characters, it must be a symbol */
  if ((flags == ECL_READ_ONLY_TOKEN) || p != ECL_NIL ||
      escape_list != ECL_NIL || length == 0)
    goto SYMBOL;

  /* The case in which the buffer is full of dots has to be especial cased */
  if (length == 1 && TOKEN_STRING_CHAR_CMP(token,0,'.')) {
    if (flags == ECL_READ_LIST_DOT) {
      x = ECL_SYM("SI::.",1035);
      goto OUTPUT;
    } else {
      FEreader_error("Dots appeared illegally.", in, 0);
    }
  } else {
    int i;
    for (i = 0;  i < length;  i++) {
      if (!TOKEN_STRING_CHAR_CMP(token,i,'.'))
        goto MAYBE_NUMBER;
    }
    FEreader_error("Dots appeared illegally.", in, 0);
  }

 MAYBE_NUMBER:
  /* Here we try to parse a number from the content of the buffer */
  base = ecl_current_read_base();
  if ((base <= 10) && ecl_alpha_char_p(TOKEN_STRING_CHAR(token,0)))
    goto SYMBOL;
  x = ecl_parse_number(token, 0, TOKEN_STRING_FILLP(token), &i, base);
  unlikely_if (x == ECL_NIL)
    FEreader_error("Syntax error when reading number.~%Offending string: ~S.",
                   in, 1, token);
  if (x != OBJNULL && length == i)
    goto OUTPUT;
 SYMBOL:
  if (flags == ECL_READ_ONLY_TOKEN) {
    the_env->nvalues = 1;
    return token;
  }

  /*TOKEN_STRING_CHAR_SET(token,length,'\0');*/
  /* If the readtable case was :INVERT and all non-escaped characters
   * had the same case, we revert their case. */
  if (read_case == ecl_case_invert && count != 0) {
    if (upcase == count) {
      invert_buffer_case(token, escape_list, -1);
    } else if (upcase == -count) {
      invert_buffer_case(token, escape_list, +1);
    }
  }
  if (external_symbol) {
    x = ecl_find_symbol(token, p, &intern_flag);
    unlikely_if (intern_flag != ECL_EXTERNAL) {
      FEreader_error("Cannot find the external symbol ~A in ~S.", in,
                     2, cl_copy_seq(token), p);
    }
  } else {
    if (p == ECL_NIL) {
      p = ecl_current_package();
    }
    /* INV: cl_make_symbol() copies the string */
    x = ecl_intern(token, p, &intern_flag);
  }
 OUTPUT:
  si_put_buffer_string(token);
  the_env->nvalues = 1;
  return x;
}

/*
  ecl_read_object(in) reads an object from stream in.
  This routine corresponds to COMMON Lisp function READ.
*/
cl_object
ecl_read_object(cl_object in)
{
  return ecl_read_object_with_delimiter(in, EOF, 0, cat_constituent);
}

cl_object
si_read_object_or_ignore(cl_object in, cl_object eof)
{
  cl_object x;
  const cl_env_ptr env = ecl_process_env();

  ecl_bds_bind(env, ECL_SYM("SI::*SHARP-EQ-CONTEXT*",1032), ECL_NIL);
  ecl_bds_bind(env, ECL_SYM("SI::*BACKQ-LEVEL*",1014), ecl_make_fixnum(0));
  x = ecl_read_object_with_delimiter(in, EOF, ECL_READ_RETURN_IGNORABLE, 
                                     cat_constituent);
  if (x == OBJNULL) {
    env->nvalues = 1;
    x = eof;
  } else if (env->nvalues) {
    x = patch_sharp(env, x);
  }
  ecl_bds_unwind_n(env, 2);
  return x;
}

static cl_object
right_parenthesis_reader(cl_object in, cl_object character)
{
  FEreader_error("Unmatched right parenthesis, #\\)", in, 0);
}

static cl_object
left_parenthesis_reader(cl_object in, cl_object character)
{
  const char c = ')';
  {
#line 448
	const cl_env_ptr the_env = ecl_process_env();
#line 448
	#line 448
	cl_object __value0 = do_read_delimited_list(c, in, 0);
#line 448
	the_env->nvalues = 1;
#line 448
	the_env->values[0] = __value0;
#line 448
	#line 448
	return __value0;
#line 448
}
;
}

/*
 * BACKQUOTE READER
 */

static
cl_object comma_reader(cl_object in, cl_object c)
{
  cl_object x, y;
  const cl_env_ptr env = ecl_process_env();
  cl_fixnum backq_level = ecl_fixnum(ECL_SYM_VAL(env, ECL_SYM("SI::*BACKQ-LEVEL*",1014)));

  unlikely_if (backq_level <= 0 && !read_suppress)
    FEreader_error("A comma has appeared out of a backquote.", in, 0);
  /* Read character & complain at EOF */
  c = cl_peek_char(2,ECL_NIL,in);
  if (c == ECL_CODE_CHAR('@')) {
    x = ECL_SYM("SI::UNQUOTE-SPLICE",1038);
    ecl_read_char(in);
  } else if (c == ECL_CODE_CHAR('.')) {
    x = ECL_SYM("SI::UNQUOTE-NSPLICE",1037);
    ecl_read_char(in);
  } else {
    x = ECL_SYM("SI::UNQUOTE",1036);
  }
  ECL_SETQ(env, ECL_SYM("SI::*BACKQ-LEVEL*",1014), ecl_make_fixnum(backq_level-1));
  y = ecl_read_object(in);
  ECL_SETQ(env, ECL_SYM("SI::*BACKQ-LEVEL*",1014), ecl_make_fixnum(backq_level));
  return cl_list(2, x, y);
}

static
cl_object backquote_reader(cl_object in, cl_object c)
{
  const cl_env_ptr the_env = ecl_process_env();
  cl_fixnum backq_level = ecl_fixnum(ECL_SYM_VAL(the_env, ECL_SYM("SI::*BACKQ-LEVEL*",1014)));
  ECL_SETQ(the_env, ECL_SYM("SI::*BACKQ-LEVEL*",1014), ecl_make_fixnum(backq_level+1));
  c = ecl_read_object(in);
  ECL_SETQ(the_env, ECL_SYM("SI::*BACKQ-LEVEL*",1014), ecl_make_fixnum(backq_level));
  unlikely_if (c == OBJNULL)
    FEend_of_file(in);
  unlikely_if (read_suppress)
    {
#line 492
	const cl_env_ptr the_env = ecl_process_env();
#line 492
	#line 492
	cl_object __value0 = ECL_NIL;
#line 492
	the_env->nvalues = 1;
#line 492
	the_env->values[0] = __value0;
#line 492
	#line 492
	return __value0;
#line 492
}
;
#if 0
  {
#line 494
	const cl_env_ptr the_env = ecl_process_env();
#line 494
	#line 494
	cl_object __value0 = cl_macroexpand_1(2, cl_list(2, ECL_SYM("SI::QUASIQUOTE",1532), in), ECL_NIL);
#line 494
	the_env->nvalues = 1;
#line 494
	the_env->values[0] = __value0;
#line 494
	#line 494
	return __value0;
#line 494
}
;;
#else
  {
#line 496
	const cl_env_ptr the_env = ecl_process_env();
#line 496
	#line 496
	cl_object __value0 = cl_list(2,ECL_SYM("SI::QUASIQUOTE",1532),c);
#line 496
	the_env->nvalues = 1;
#line 496
	the_env->values[0] = __value0;
#line 496
	#line 496
	return __value0;
#line 496
}
;
#endif
}

/*
  read_constituent(in) reads a sequence of constituent characters from
  stream in and places it in token.  As a help, it returns TRUE
  or FALSE depending on the value of *READ-SUPPRESS*.
*/
static cl_object
read_constituent(cl_object in)
{
  int store = !read_suppress;
  cl_object rtbl = ecl_current_readtable();
  bool not_first = 0;
  cl_object token = si_get_buffer_string();
  do {
    int c = ecl_read_char(in);
    enum ecl_chattrib c_cat;
    if (c == EOF) {
      break;
    }
    c_cat = ecl_readtable_get(rtbl, c, NULL);
    if (c_cat == cat_constituent ||
        ((c_cat == cat_non_terminating) && not_first))
      {
        if (store) {
          ecl_string_push_extend(token, c);
        }
      } else {
      ecl_unread_char(c, in);
      break;
    }
    not_first = 1;
  } while(1);
  return (read_suppress)? ECL_NIL : token;
}

static cl_object
double_quote_reader(cl_object in, cl_object c)
{
  int delim = ECL_CHAR_CODE(c);
  cl_object rtbl = ecl_current_readtable();
  cl_object token = si_get_buffer_string();
  cl_object output;
  for (;;) {
    int c = ecl_read_char_noeof(in);
    if (c == delim)
      break;
    else if (ecl_readtable_get(rtbl, c, NULL) == cat_single_escape)
      c = ecl_read_char_noeof(in);
    ecl_string_push_extend(token, c);
  }

  /* Must be kept a (SIMPLE-ARRAY CHARACTERS (*)), see
   * http://sourceforge.net/p/ecls/mailman/message/32272388/ */
  output = cl_copy_seq(token);
  si_put_buffer_string(token);
  {
#line 554
	const cl_env_ptr the_env = ecl_process_env();
#line 554
	#line 554
	cl_object __value0 = output;
#line 554
	the_env->nvalues = 1;
#line 554
	the_env->values[0] = __value0;
#line 554
	#line 554
	return __value0;
#line 554
}
;
}

static cl_object
dispatch_reader_fun(cl_object in, cl_object dc)
{
  cl_object readtable = ecl_current_readtable();
  cl_object dispatch_table;
  int c = ecl_char_code(dc);
  ecl_readtable_get(readtable, c, &dispatch_table);
  unlikely_if (!ECL_HASH_TABLE_P(dispatch_table))
    FEreader_error("~C is not a dispatching macro character",
                   in, 1, dc);
  return dispatch_macro_character(dispatch_table, in, c, TRUE);
}

/*
  Returns OBJNULL if no dispatch function is defined and signal_error
  is false
 */
static cl_object
dispatch_macro_character(cl_object table, cl_object in, int c, bool signal_error)
{
  cl_object arg;
  int d;
  c = ecl_read_char_noeof(in);
  d = ecl_digitp(c, 10);
  if (d >= 0) {
    cl_fixnum i = 0;
    do {
      i = 10*i + d;
      c = ecl_read_char_noeof(in);
      d = ecl_digitp(c, 10);
    } while (d >= 0);
    arg = ecl_make_fixnum(i);
  } else {
    arg = ECL_NIL;
  }
  {
    cl_object dc = ECL_CODE_CHAR(c);
    cl_object fun = ecl_gethash_safe(dc, table, ECL_NIL);
    unlikely_if (Null(fun)) {
      if (signal_error) {
        FEreader_error("No dispatch function defined "
                       "for character ~S",
                       in, 1, dc);
      } else {
        return OBJNULL;
      }
    }
    return _ecl_funcall4(fun, in, dc, arg);
  }
}

static cl_object
single_quote_reader(cl_object in, cl_object c)
{
  c = ecl_read_object(in);
  unlikely_if (c == OBJNULL)
    FEend_of_file(in);
  {
#line 614
	const cl_env_ptr the_env = ecl_process_env();
#line 614
	#line 614
	cl_object __value0 = cl_list(2, ECL_SYM("QUOTE",681), c);
#line 614
	the_env->nvalues = 1;
#line 614
	the_env->values[0] = __value0;
#line 614
	#line 614
	return __value0;
#line 614
}
;
}

static cl_object
void_reader(cl_object in, cl_object c)
{
  /*  no result  */
  {
#line 621
	const cl_env_ptr the_env = ecl_process_env();
the_env->nvalues = 0; return ECL_NIL;
#line 621
}
;
}

static cl_object
semicolon_reader(cl_object in, cl_object c)
{
  int auxc;

  do
    auxc = ecl_read_char(in);
  while (auxc != '\n' && auxc != EOF);
  /*  no result  */
  {
#line 633
	const cl_env_ptr the_env = ecl_process_env();
the_env->nvalues = 0; return ECL_NIL;
#line 633
}
;
}

/*
  sharpmacro routines
*/

static cl_object
sharp_generic_error(cl_object in, cl_object c, cl_object n)
{
  FEreader_error("The character ~:C is not a valid dispatch macro character",
                 in, 1, c);
}

static cl_object
sharp_C_reader(cl_object in, cl_object c, cl_object d)
{
  const cl_env_ptr the_env = ecl_process_env();
  cl_object x, real, imag;

  if (d != ECL_NIL && !read_suppress)
    extra_argument('C', in, d);
  x = ecl_read_object(in);
  unlikely_if (x == OBJNULL)
    FEend_of_file(in);
  if (read_suppress)
    {
#line 659
	const cl_env_ptr the_env = ecl_process_env();
#line 659
	#line 659
	cl_object __value0 = ECL_NIL;
#line 659
	the_env->nvalues = 1;
#line 659
	the_env->values[0] = __value0;
#line 659
	#line 659
	return __value0;
#line 659
}
;
  unlikely_if (!ECL_CONSP(x) || ecl_length(x) != 2)
    FEreader_error("Reader macro #C should be followed by a list",
                   in, 0);
  real = CAR(x);
  imag = CADR(x);
  /* INV: ecl_make_complex() checks its types. When reading circular
     structures, we cannot check the types of the elements, and we
     must build the complex number by hand. */
  if ((CONSP(real) || CONSP(imag)) &&
      !Null(ECL_SYM_VAL(the_env, ECL_SYM("SI::*SHARP-EQ-CONTEXT*",1032))))
    {
      x = ecl_alloc_object(t_complex);
      x->gencomplex.real = real;
      x->gencomplex.imag = imag;
    } else {
    x = ecl_make_complex(real, imag);
  }
  {
#line 677
	const cl_env_ptr the_env = ecl_process_env();
#line 677
	#line 677
	cl_object __value0 = x;
#line 677
	the_env->nvalues = 1;
#line 677
	the_env->values[0] = __value0;
#line 677
	#line 677
	return __value0;
#line 677
}
;
}

static cl_object
sharp_backslash_reader(cl_object in, cl_object c, cl_object d)
{
  const cl_env_ptr the_env = ecl_process_env();
  cl_object token;
  if (d != ECL_NIL && !read_suppress) {
    unlikely_if (!ECL_FIXNUMP(d) || d != ecl_make_fixnum(0)) {
      FEreader_error("~S is an illegal CHAR-FONT.", in, 1, d);
    }
  }
  token = ecl_read_object_with_delimiter(in, EOF, ECL_READ_ONLY_TOKEN,
                                         cat_single_escape);
  if (token == ECL_NIL) {
    c = ECL_NIL;
  } else if (TOKEN_STRING_FILLP(token) == 1) {
    c = ECL_CODE_CHAR(TOKEN_STRING_CHAR(token,0));
  } else if (TOKEN_STRING_FILLP(token) == 2 && TOKEN_STRING_CHAR_CMP(token,0,'^')) {
    /*      #\^x    */
    c = ECL_CODE_CHAR(TOKEN_STRING_CHAR(token,1) & 037);
  } else {
    cl_object nc = cl_name_char(token);
    unlikely_if (Null(nc)) {
      FEreader_error("~S is an illegal character name.", in, 1, token);
    }
    c = nc;
  }
  si_put_buffer_string(token);
  ecl_return1(the_env, c);
}

static cl_object
sharp_single_quote_reader(cl_object in, cl_object c, cl_object d)
{
  bool suppress = read_suppress;
  if(d != ECL_NIL && !suppress)
    extra_argument('\'', in, d);
  c = ecl_read_object(in);
  unlikely_if (c == OBJNULL) {
    FEend_of_file(in);
  } else if (suppress) {
    c = ECL_NIL;
  } else {
    c = cl_list(2, ECL_SYM("FUNCTION",398), c);
  }
  {
#line 724
	const cl_env_ptr the_env = ecl_process_env();
#line 724
	#line 724
	cl_object __value0 = c;
#line 724
	the_env->nvalues = 1;
#line 724
	the_env->values[0] = __value0;
#line 724
	#line 724
	return __value0;
#line 724
}
;
}

static cl_object
sharp_Y_reader(cl_object in, cl_object c, cl_object d)
{
  cl_index i;
  cl_object x, rv, nth, lex;

  if (d != ECL_NIL && !read_suppress)
    extra_argument('Y', in, d);
  x = ecl_read_object(in);
  unlikely_if (x == OBJNULL) {
    FEend_of_file(in);
  }
  if (read_suppress) {
    {
#line 740
	const cl_env_ptr the_env = ecl_process_env();
#line 740
	#line 740
	cl_object __value0 = ECL_NIL;
#line 740
	the_env->nvalues = 1;
#line 740
	the_env->values[0] = __value0;
#line 740
	#line 740
	return __value0;
#line 740
}
;
  }

  unlikely_if (!ECL_CONSP(x) || ecl_length(x) < 5) {
    FEreader_error("Reader macro #Y should be followed by a list", in, 0);
  }

  rv = ecl_alloc_object(t_bytecodes);

  rv->bytecodes.name = ECL_CONS_CAR(x);
  x = ECL_CONS_CDR(x);

  lex = ECL_CONS_CAR(x);
  x = ECL_CONS_CDR(x);

  rv->bytecodes.definition = ECL_CONS_CAR(x);
  x = ECL_CONS_CDR(x);

  nth = ECL_CONS_CAR(x);
  x = ECL_CONS_CDR(x);
  rv->bytecodes.code_size = ecl_to_fix(cl_list_length(nth));
  rv->bytecodes.code = ecl_alloc_atomic(rv->bytecodes.code_size * sizeof(uint16_t));
  for ( i=0; !ecl_endp(nth) ; i++, nth=ECL_CONS_CDR(nth) )
    ((cl_opcode*)(rv->bytecodes.code))[i] = ecl_to_fix(ECL_CONS_CAR(nth));

  nth = ECL_CONS_CAR(x);
  x = ECL_CONS_CDR(x);
  rv->bytecodes.data = nth;

  if (ECL_ATOM(x)) {
    nth = ECL_NIL;
  } else {
    nth = ECL_CONS_CAR(x);
    x = ECL_CONS_CDR(x);
  }
  rv->bytecodes.file = nth;
  if (ECL_ATOM(x)) {
    nth = ecl_make_fixnum(0);
  } else {
    nth = ECL_CONS_CAR(x);
    x = ECL_CONS_CDR(x);
  }
  rv->bytecodes.file_position = nth;

  rv->bytecodes.entry = _ecl_bytecodes_dispatch_vararg;

  if (lex != ECL_NIL) {
    cl_object x = ecl_alloc_object(t_bclosure);
    x->bclosure.code = rv;
    x->bclosure.lex = lex;
    x->bclosure.entry = _ecl_bclosure_dispatch_vararg;
    rv = x;
  }
  {
#line 793
	const cl_env_ptr the_env = ecl_process_env();
#line 793
	#line 793
	cl_object __value0 = rv;
#line 793
	the_env->nvalues = 1;
#line 793
	the_env->values[0] = __value0;
#line 793
	#line 793
	return __value0;
#line 793
}
;
}

#define QUOTE   1
#define EVAL    2
#define LIST    3
#define LISTX   4
#define APPEND  5
#define NCONC   6


/*
 *----------------------------------------------------------------------
 *      Stack of unknown size
 *----------------------------------------------------------------------
 */

cl_object
si_make_backq_vector(cl_object d, cl_object data, cl_object in)
{
  const cl_env_ptr the_env = ecl_process_env();
  cl_object v, last;
  cl_index dim, i;
  if (Null(d)) {
    dim = ecl_length(data);
  } else {
    dim = ecl_fixnum(d);
  }
  v = ecl_alloc_simple_vector(dim, ecl_aet_object);
  for (i = 0, last = ECL_NIL; i < dim; i++) {
    if (data == ECL_NIL) {
      /* ... we fill the vector with the last element read (or NIL). */
      for (; i < dim; i++) {
        ecl_aset_unsafe(v, i, last);
      }
      break;
    }
    ecl_aset_unsafe(v, i, last = ecl_car(data));
    data = ECL_CONS_CDR(data);
  }
  unlikely_if (data != ECL_NIL) {
    if (in != ECL_NIL) {
      FEreader_error("Vector larger than specified length,"
                     "~D.", in, 1, d);
    } else {
      FEerror("Vector larger than specified length, ~D", 1, d);
    }
  }
  ecl_return1(the_env, v);
}

static cl_object
sharp_left_parenthesis_reader(cl_object in, cl_object c, cl_object d)
{
  extern int _cl_backq_car(cl_object *);
  const cl_env_ptr the_env = ecl_process_env();
  cl_object v;
  unlikely_if (!Null(d) &&
               (!ECL_FIXNUMP(d) || ecl_fixnum_minusp(d) ||
                ecl_fixnum_greater(d, ecl_make_fixnum(ECL_ARRAY_DIMENSION_LIMIT))))
    {
      FEreader_error("Invalid dimension size ~D in #()", in, 1, d);
    }
  if (ecl_fixnum_plusp(ECL_SYM_VAL(the_env, ECL_SYM("SI::*BACKQ-LEVEL*",1014)))) {
    /* First case: ther might be unquoted elements in the vector.
     * Then we just create a form that generates the vector.
     */
    cl_object x = do_read_delimited_list(')', in, 1);
    cl_index a = _cl_backq_car(&x);
    if (a != QUOTE) {
      v = cl_list(2, ECL_SYM("SI::UNQUOTE",1036), 
                  cl_list(4, ECL_SYM("SI::MAKE-BACKQ-VECTOR",2120), d, x, ECL_NIL));
    } else {
      return si_make_backq_vector(d, x, in);
    }
  } else if (read_suppress) {
    /* Second case: *read-suppress* = t, we ignore the data */
    do_read_delimited_list(')', in, 1);
    v = ECL_NIL;
  } else if (Null(d)) {
    /* Third case: no dimension provided. Read a list and
       coerce it to vector. */
    return si_make_backq_vector(d, do_read_delimited_list(')', in, 1), in);
  } else {
    /* Finally: Both dimension and data are provided. The
       amount of data cannot exceed the length, but it may
       be smaller, and in that case...*/
    cl_object last;
    cl_index dim = ecl_fixnum(d), i;
    v = ecl_alloc_simple_vector(dim, ecl_aet_object);
    for (i = 0, last = ECL_NIL;; i++) {
      cl_object aux = ecl_read_object_with_delimiter(in, ')', 0,
                                                     cat_constituent);
      if (aux == OBJNULL)
        break;
      unlikely_if (i >= dim) {
        FEreader_error("Vector larger than specified length,"
                       "~D.", in, 1, d);
      }
      ecl_aset_unsafe(v, i, last = aux);
    }
    /* ... we fill the vector with the last element read (or NIL). */
    for (; i < dim; i++) {
      ecl_aset_unsafe(v, i, last);
    }
  }
  {
#line 899
	const cl_env_ptr the_env = ecl_process_env();
#line 899
	#line 899
	cl_object __value0 = v;
#line 899
	the_env->nvalues = 1;
#line 899
	the_env->values[0] = __value0;
#line 899
	#line 899
	return __value0;
#line 899
}
;
}

static cl_object
sharp_asterisk_reader(cl_object in, cl_object c, cl_object d)
{
  cl_env_ptr env = ecl_process_env();
  cl_index sp = ECL_STACK_INDEX(env);
  cl_object last, elt, x;
  cl_fixnum dim, dimcount, i;
  cl_object rtbl = ecl_current_readtable();
  enum ecl_chattrib a;

  if (read_suppress) {
    read_constituent(in);
    {
#line 914
	const cl_env_ptr the_env = ecl_process_env();
#line 914
	#line 914
	cl_object __value0 = ECL_NIL;
#line 914
	the_env->nvalues = 1;
#line 914
	the_env->values[0] = __value0;
#line 914
	#line 914
	return __value0;
#line 914
}
;
  }
  for (dimcount = 0 ;; dimcount++) {
    int x = ecl_read_char(in);
    if (x == EOF)
      break;
    a = ecl_readtable_get(rtbl, x, NULL);
    if (a == cat_terminating || a == cat_whitespace) {
      ecl_unread_char(x, in);
      break;
    }
    unlikely_if (a == cat_single_escape || a == cat_multiple_escape ||
                 (x != '0' && x != '1'))
      {
        FEreader_error("Character ~:C is not allowed after #*",
                       in, 1, ECL_CODE_CHAR(x));
      }
    ECL_STACK_PUSH(env, ecl_make_fixnum(x == '1'));
  }
  if (Null(d)) {
    dim = dimcount;
  } else {
    unlikely_if (!ECL_FIXNUMP(d) || ((dim = ecl_fixnum(d)) < 0) ||
                 (dim > ECL_ARRAY_DIMENSION_LIMIT))
      {
        FEreader_error("Wrong vector dimension size ~D in #*.",
                       in, 1, d);
      }
    unlikely_if (dimcount > dim)
      FEreader_error("Too many elements in #*.", in, 0);
    unlikely_if (dim && (dimcount == 0))
      FEreader_error("Cannot fill the bit-vector #*.", in, 0);
  }
  last = ECL_STACK_REF(env,-1);
  x = ecl_alloc_simple_vector(dim, ecl_aet_bit);
  for (i = 0; i < dim; i++) {
    elt = (i < dimcount) ? env->stack[sp+i] : last;
    if (elt == ecl_make_fixnum(0))
      x->vector.self.bit[i/CHAR_BIT] &= ~(0200 >> i%CHAR_BIT);
    else
      x->vector.self.bit[i/CHAR_BIT] |= 0200 >> i%CHAR_BIT;
  }
  ECL_STACK_POP_N_UNSAFE(env, dimcount);
  {
#line 957
	const cl_env_ptr the_env = ecl_process_env();
#line 957
	#line 957
	cl_object __value0 = x;
#line 957
	the_env->nvalues = 1;
#line 957
	the_env->values[0] = __value0;
#line 957
	#line 957
	return __value0;
#line 957
}
;
}

static cl_object
sharp_colon_reader(cl_object in, cl_object ch, cl_object d)
{
  cl_object rtbl = ecl_current_readtable();
  enum ecl_chattrib a;
  int c;
  cl_object output, token;

  if (d != ECL_NIL && !read_suppress)
    extra_argument(':', in, d);
  c = ecl_read_char_noeof(in);
  a = ecl_readtable_get(rtbl, c, NULL);
  token = si_get_buffer_string();
  goto L;
  for (;;) {
    ecl_string_push_extend(token, c);
  K:
    c = ecl_read_char(in);
    if (c == EOF)
      goto M;
    a = ecl_readtable_get(rtbl, c, NULL);
  L:
    if (a == cat_single_escape) {
      c = ecl_read_char_noeof(in);
      a = cat_constituent;
    } else if (a == cat_multiple_escape) {
      for (;;) {
        c = ecl_read_char_noeof(in);
        a = ecl_readtable_get(rtbl, c, NULL);
        if (a == cat_single_escape) {
          c = ecl_read_char_noeof(in);
          a = cat_constituent;
        } else if (a == cat_multiple_escape)
          break;
        ecl_string_push_extend(token, c);
      }
      goto K;
    } else if (ecl_lower_case_p(c)) {
      c = ecl_char_upcase(c);
    } else if (c == ':' && !read_suppress) {
      FEreader_error("An uninterned symbol must not contain a package prefix", in, 0);
    }
    if (a == cat_whitespace || a == cat_terminating)
      break;
  }
  ecl_unread_char(c, in);

 M:
  if (read_suppress) {
    output = ECL_NIL;
  } else {
    output = cl_make_symbol(token);
  }
  si_put_buffer_string(token);
  {
#line 1014
	const cl_env_ptr the_env = ecl_process_env();
#line 1014
	#line 1014
	cl_object __value0 = output;
#line 1014
	the_env->nvalues = 1;
#line 1014
	the_env->values[0] = __value0;
#line 1014
	#line 1014
	return __value0;
#line 1014
}
;
}

static cl_object
sharp_dot_reader(cl_object in, cl_object c, cl_object d)
{
  const cl_env_ptr env = ecl_process_env();
  if (d != ECL_NIL && !read_suppress)
    extra_argument('.', in, d);
  c = ecl_read_object(in);
  unlikely_if (c == OBJNULL)
    FEend_of_file(in);
  if (read_suppress) {
    {
#line 1027
	const cl_env_ptr the_env = ecl_process_env();
#line 1027
	#line 1027
	cl_object __value0 = ECL_NIL;
#line 1027
	the_env->nvalues = 1;
#line 1027
	the_env->values[0] = __value0;
#line 1027
	#line 1027
	return __value0;
#line 1027
}
;
  }
  unlikely_if (ecl_symbol_value(ECL_SYM("*READ-EVAL*",65)) == ECL_NIL)
    FEreader_error("Cannot evaluate the form #.~A", in, 1, c);
  /* FIXME! We should do something here to ensure that the #.
   * only uses the #n# that have been defined */
  c = patch_sharp(env, c);
  c = si_eval_with_env(1, c);
  {
#line 1035
	const cl_env_ptr the_env = ecl_process_env();
#line 1035
	#line 1035
	cl_object __value0 = c;
#line 1035
	the_env->nvalues = 1;
#line 1035
	the_env->values[0] = __value0;
#line 1035
	#line 1035
	return __value0;
#line 1035
}
;
}

static cl_object
read_number(cl_object in, int radix, cl_object macro_char)
{
  cl_index i;
  cl_object x;
  cl_object token = read_constituent(in);
  if (token == ECL_NIL) {
    x = ECL_NIL;
  } else {
    x = ecl_parse_number(token, 0, TOKEN_STRING_FILLP(token), &i, radix);
    unlikely_if (x == OBJNULL || x == ECL_NIL ||
                 i != TOKEN_STRING_FILLP(token))
      {
        FEreader_error("Cannot parse the #~A readmacro.", in, 1,
                       macro_char);
      }
    unlikely_if (cl_rationalp(x) == ECL_NIL) {
      FEreader_error("The float ~S appeared after the #~A readmacro.",
                     in, 2, x, macro_char);
    }
    si_put_buffer_string(token);
  }
  return x;
}

static cl_object
sharp_B_reader(cl_object in, cl_object c, cl_object d)
{
  if(d != ECL_NIL && !read_suppress)
    extra_argument('B', in, d);
  {
#line 1068
	const cl_env_ptr the_env = ecl_process_env();
#line 1068
	#line 1068
	cl_object __value0 = (read_number(in, 2, ECL_CODE_CHAR('B')));
#line 1068
	the_env->nvalues = 1;
#line 1068
	the_env->values[0] = __value0;
#line 1068
	#line 1068
	return __value0;
#line 1068
}
;
}

static cl_object
sharp_O_reader(cl_object in, cl_object c, cl_object d)
{
  if(d != ECL_NIL && !read_suppress)
    extra_argument('O', in, d);
  {
#line 1076
	const cl_env_ptr the_env = ecl_process_env();
#line 1076
	#line 1076
	cl_object __value0 = (read_number(in, 8, ECL_CODE_CHAR('O')));
#line 1076
	the_env->nvalues = 1;
#line 1076
	the_env->values[0] = __value0;
#line 1076
	#line 1076
	return __value0;
#line 1076
}
;
}

static cl_object
sharp_X_reader(cl_object in, cl_object c, cl_object d)
{
  if(d != ECL_NIL && !read_suppress)
    extra_argument('X', in, d);
  {
#line 1084
	const cl_env_ptr the_env = ecl_process_env();
#line 1084
	#line 1084
	cl_object __value0 = (read_number(in, 16, ECL_CODE_CHAR('X')));
#line 1084
	the_env->nvalues = 1;
#line 1084
	the_env->values[0] = __value0;
#line 1084
	#line 1084
	return __value0;
#line 1084
}
;
}

static cl_object
sharp_R_reader(cl_object in, cl_object c, cl_object d)
{
  int radix;
  if (read_suppress) {
    radix = 10;
  } else unlikely_if (!ECL_FIXNUMP(d)) {
      FEreader_error("No radix was supplied in the #R readmacro.", in, 0);
    } else {
    radix = ecl_fixnum(d);
    unlikely_if (radix > 36 || radix < 2) {
      FEreader_error("~S is an illegal radix.", in, 1, d);
    }
  }
  {
#line 1101
	const cl_env_ptr the_env = ecl_process_env();
#line 1101
	#line 1101
	cl_object __value0 = (read_number(in, radix, ECL_CODE_CHAR('R')));
#line 1101
	the_env->nvalues = 1;
#line 1101
	the_env->values[0] = __value0;
#line 1101
	#line 1101
	return __value0;
#line 1101
}
;
}

#define sharp_A_reader void_reader
#define sharp_S_reader void_reader

static cl_object
sharp_eq_reader(cl_object in, cl_object c, cl_object d)
{
  const cl_env_ptr the_env = ecl_process_env();
  cl_object pair, value;
  cl_object sharp_eq_context = ECL_SYM_VAL(the_env, ECL_SYM("SI::*SHARP-EQ-CONTEXT*",1032));

  if (read_suppress) {
    {
#line 1115
	const cl_env_ptr the_env = ecl_process_env();
the_env->nvalues = 0; return ECL_NIL;
#line 1115
}
;
  }
  unlikely_if (Null(d)) {
    FEreader_error("The #= readmacro requires an argument.", in, 0);
  }
  unlikely_if (ecl_assq(d, sharp_eq_context) != ECL_NIL) {
    FEreader_error("Duplicate definitions for #~D=.", in, 1, d);
  }
  pair = CONS(d, OBJNULL);
  ECL_SETQ(the_env, ECL_SYM("SI::*SHARP-EQ-CONTEXT*",1032), CONS(pair, sharp_eq_context));
  value = ecl_read_object(in);
  unlikely_if (value == pair) {
    FEreader_error("#~D# is defined by itself.", in, 1, d);
  }
  ECL_RPLACD(pair, value);
  ecl_return1(the_env, value);
}

static cl_object
sharp_sharp_reader(cl_object in, cl_object c, cl_object d)
{
  const cl_env_ptr the_env = ecl_process_env();
  cl_object pair;

  if (read_suppress)
    ecl_return1(the_env, ECL_NIL);
  unlikely_if (Null(d)) {
    FEreader_error("The ## readmacro requires an argument.", in, 0);
  }
  pair = ecl_assq(d, ECL_SYM_VAL(the_env, ECL_SYM("SI::*SHARP-EQ-CONTEXT*",1032)));
  unlikely_if (pair == ECL_NIL) {
    FEreader_error("#~D# is undefined.", in, 1, d);
  } else {
    cl_object value = ECL_CONS_CDR(pair);
    ecl_return1(the_env, (value == OBJNULL)? pair : value);
  }
}

static cl_object
do_patch_sharp(cl_object x, cl_object table)
{
  /* The hash table maintains an association as follows:
   *
   * [1] object -> itself
   *      The object has been processed by patch_sharp, use as it is.
   * [2] object -> nothing
   *      The object has to be processed by do_patch_sharp.
   * [3] (# . object) -> object
   *      This is the value of a #n# statement. The object might
   *      or might not yet be processed by do_patch_sharp().
   */
  /* If x is a list, it is processed iteratively. For this, we store
   * the first and current cons cell */
  cl_object first_cons = OBJNULL;
  cl_object current_cons = OBJNULL;
 AGAIN:
  switch (ecl_t_of(x)) {
  case t_list: {
    cl_object y;
    if (Null(x))
      return (first_cons ? first_cons : x);
    y = ecl_gethash_safe(x, table, table);
    if (y == table) {
      /* case [2] */
      if (first_cons == OBJNULL)
        first_cons = x;
      break;
    } else if (y == x) {
      /* case [1] */
      return (first_cons ? first_cons : x);
    } else {
      /* case [3] */
      x = y;
      if (current_cons != OBJNULL)
        ECL_RPLACD(current_cons, x);
      goto AGAIN;
    }
  }
  case t_vector:
  case t_array:
  case t_complex:
  case t_bclosure:
  case t_bytecodes: {
    cl_object y = ecl_gethash_safe(x, table, table);
    if (y == table) {
      /* case [2] */
      break;
    }
    /* it can only be case [1] */
  }
  default:
    return (first_cons ? first_cons : x);
  }
  /* We eagerly mark the object as processed, to avoid infinite
   * recursion. */
  _ecl_sethash(x, table, x);
  switch (ecl_t_of(x)) {
  case t_list:
    current_cons = x;
    ECL_RPLACA(x, do_patch_sharp(ECL_CONS_CAR(x), table));
    cl_object rest = ECL_CONS_CDR(x);
    if (ecl_t_of(rest) == t_list) {
      x = rest;
      goto AGAIN;
    } else {
      ECL_RPLACD(x, do_patch_sharp(rest, table));
    }
    break;
  case t_vector:
    if (x->vector.elttype == ecl_aet_object) {
      cl_index i;
      for (i = 0;  i < x->vector.fillp;  i++)
        x->vector.self.t[i] =
          do_patch_sharp(x->vector.self.t[i], table);
    }
    break;
  case t_array:
    if (x->vector.elttype == ecl_aet_object) {
      cl_index i, j = x->array.dim;
      for (i = 0;  i < j;  i++)
        x->array.self.t[i] =
          do_patch_sharp(x->array.self.t[i], table);
    }
    break;
  case t_complex: {
    cl_object r = do_patch_sharp(x->gencomplex.real, table);
    cl_object i = do_patch_sharp(x->gencomplex.imag, table);
    if (r != x->gencomplex.real || i != x->gencomplex.imag) {
      cl_object c = ecl_make_complex(r, i);
      x->gencomplex = c->gencomplex;
    }
    break;
  }
  case t_bclosure: {
    x->bclosure.lex = do_patch_sharp(x->bclosure.lex, table);
    x->bclosure.code = do_patch_sharp(x->bclosure.code, table);
    break;
  }
  case t_bytecodes: {
    x->bytecodes.name = do_patch_sharp(x->bytecodes.name, table);
    x->bytecodes.definition = do_patch_sharp(x->bytecodes.definition, table);
    x->bytecodes.data = do_patch_sharp(x->bytecodes.data, table);
    break;
  }
  default:;
  }
  return (first_cons ? first_cons : x);
}

static cl_object
patch_sharp(const cl_env_ptr the_env, cl_object x)
{
  cl_object pairs = ECL_SYM_VAL(the_env, ECL_SYM("SI::*SHARP-EQ-CONTEXT*",1032));
  if (pairs == ECL_NIL) {
    return x;
  } else {
    cl_object table = 
      cl__make_hash_table(ECL_SYM("EQ",335), ecl_make_fixnum(20), /* size */
                          cl_core.rehash_size,
                          cl_core.rehash_threshold);
    do {
      cl_object pair = ECL_CONS_CAR(pairs);
      _ecl_sethash(pair, table, ECL_CONS_CDR(pair));
      pairs = ECL_CONS_CDR(pairs);
    } while (pairs != ECL_NIL);
    return do_patch_sharp(x, table);
  }
}

#define sharp_plus_reader void_reader
#define sharp_minus_reader void_reader
#define sharp_less_than_reader void_reader
#define sharp_whitespace_reader void_reader
#define sharp_right_parenthesis_reader void_reader

static cl_object
sharp_vertical_bar_reader(cl_object in, cl_object ch, cl_object d)
{
  int c;
  int level = 0;

  if (d != ECL_NIL && !read_suppress)
    extra_argument('|', in, d);
  for (;;) {
    c = ecl_read_char_noeof(in);
  L:
    if (c == '#') {
      c = ecl_read_char_noeof(in);
      if (c == '|')
        level++;
    } else if (c == '|') {
      c = ecl_read_char_noeof(in);
      if (c == '#') {
        if (level == 0)
          break;
        else
          --level;
      } else
        goto L;
    }
  }
  /*  no result  */
  {
#line 1317
	const cl_env_ptr the_env = ecl_process_env();
the_env->nvalues = 0; return ECL_NIL;
#line 1317
}
;
}

static cl_object
default_dispatch_macro_fun(cl_object in, cl_object c, cl_object d)
{
  FEreader_error("No dispatch function defined for character ~s.", in, 1, c);
}

/*
  #P" ... " returns the pathname with namestring ... .
*/
static cl_object
sharp_P_reader(cl_object in, cl_object c, cl_object d)
{
  bool suppress = read_suppress;
  if (d != ECL_NIL && !suppress)
    extra_argument('P', in, d);
  d = ecl_read_object(in);
  if (suppress) {
    d = ECL_NIL;
  } else {
    d = cl_parse_namestring(3, d, ECL_NIL, ECL_NIL);
  }
  {
#line 1341
	const cl_env_ptr the_env = ecl_process_env();
#line 1341
	#line 1341
	cl_object __value0 = d;
#line 1341
	the_env->nvalues = 1;
#line 1341
	the_env->values[0] = __value0;
#line 1341
	#line 1341
	return __value0;
#line 1341
}
;
}

/*
  #$ fixnum returns a random-state with the fixnum
  as its content.
*/
static cl_object
sharp_dollar_reader(cl_object in, cl_object c, cl_object d)
{
  cl_object rs;
  if (d != ECL_NIL && !read_suppress)
    extra_argument('$', in, d);
  c = ecl_read_object(in);
  rs = ecl_make_random_state(c);

  {
#line 1357
	const cl_env_ptr the_env = ecl_process_env();
#line 1357
	#line 1357
	cl_object __value0 = rs;
#line 1357
	the_env->nvalues = 1;
#line 1357
	the_env->values[0] = __value0;
#line 1357
	#line 1357
	return __value0;
#line 1357
}
;
}

/*
  readtable routines
*/

static void ECL_INLINE
assert_type_readtable(cl_object function, cl_narg narg, cl_object p)
{
  unlikely_if (!ECL_READTABLEP(p)) {
    FEwrong_type_nth_arg(function, narg, p, ecl_make_fixnum(/*READTABLE*/702));
  }
}


cl_object
ecl_copy_readtable(cl_object from, cl_object to)
{
  struct ecl_readtable_entry *from_rtab, *to_rtab;
  cl_index i;
  size_t entry_bytes = sizeof(struct ecl_readtable_entry);
  size_t total_bytes = entry_bytes * RTABSIZE;
  cl_object output;

  assert_type_readtable(ecl_make_fixnum(/*COPY-READTABLE*/261), 1, from);
  /* For the sake of garbage collector and thread safety we
   * create an incomplete object and only copy to the destination
   * at the end in a more or less "atomic" (meaning "fast") way.
   */
  output = ecl_alloc_object(t_readtable);
  output->readtable.locked = 0;
  output->readtable.table = to_rtab = (struct ecl_readtable_entry *)
    ecl_alloc_align(total_bytes, entry_bytes);
  from_rtab = from->readtable.table;
  memcpy(to_rtab, from_rtab, total_bytes);
  for (i = 0;  i < RTABSIZE;  i++) {
    cl_object d = from_rtab[i].dispatch;
    if (ECL_HASH_TABLE_P(d)) {
      d = si_copy_hash_table(d);
    }
    to_rtab[i].dispatch = d;
  }
  output->readtable.read_case = from->readtable.read_case;
#ifdef ECL_UNICODE
  if (!Null(from->readtable.hash)) {
    output->readtable.hash = si_copy_hash_table(from->readtable.hash);
  } else {
    output->readtable.hash = ECL_NIL;
  }
#endif
  if (!Null(to)) {
    assert_type_readtable(ecl_make_fixnum(/*COPY-READTABLE*/261), 2, to);
    to->readtable = output->readtable;
    output = to;
  }
  return output;
}

cl_object
ecl_current_readtable(void)
{
  const cl_env_ptr the_env = ecl_process_env();
  cl_object r;

  /* INV: *readtable* always has a value */
  r = ECL_SYM_VAL(the_env, ECL_SYM("*READTABLE*",67));
  unlikely_if (!ECL_READTABLEP(r)) {
    ECL_SETQ(the_env, ECL_SYM("*READTABLE*",67), cl_core.standard_readtable);
    FEerror("The value of *READTABLE*, ~S, was not a readtable.",
            1, r);
  }
  return r;
}

int
ecl_current_read_base(void)
{
  const cl_env_ptr the_env = ecl_process_env();
  /* INV: *READ-BASE* always has a value */
  cl_object x = ECL_SYM_VAL(the_env, ECL_SYM("*READ-BASE*",63));
  cl_fixnum b;

  unlikely_if (!ECL_FIXNUMP(x) || ((b = ecl_fixnum(x)) < 2) || (b > 36))
    {
      ECL_SETQ(the_env, ECL_SYM("*READ-BASE*",63), ecl_make_fixnum(10));
      FEerror("The value of *READ-BASE*~&  ~S~%"
              "is not in the range (INTEGER 2 36)", 1, x);
    }
  return b;
}

char
ecl_current_read_default_float_format(void)
{
  const cl_env_ptr the_env = ecl_process_env();
  cl_object x;

  /* INV: *READ-DEFAULT-FLOAT-FORMAT* is always bound to something */
  x = ECL_SYM_VAL(the_env, ECL_SYM("*READ-DEFAULT-FLOAT-FORMAT*",64));
  if (x == ECL_SYM("SINGLE-FLOAT",780) || x == ECL_SYM("SHORT-FLOAT",758))
    return 'F';
  if (x == ECL_SYM("DOUBLE-FLOAT",317))
    return 'D';
  if (x == ECL_SYM("LONG-FLOAT",510)) {
    return 'L';
  }
  ECL_SETQ(the_env, ECL_SYM("*READ-DEFAULT-FLOAT-FORMAT*",64), ECL_SYM("SINGLE-FLOAT",780));
  FEerror("The value of *READ-DEFAULT-FLOAT-FORMAT*~& ~S~%"
          "is not one of (SINGLE-FLOAT SHORT-FLOAT DOUBLE-FLOAT LONG-FLOAT)",
          1, x);
}

static cl_object
stream_or_default_input(cl_object stream)
{
  const cl_env_ptr the_env = ecl_process_env();
  if (Null(stream))
    return ECL_SYM_VAL(the_env, ECL_SYM("*STANDARD-INPUT*",68));
  if (stream == ECL_T)
    return ECL_SYM_VAL(the_env, ECL_SYM("*TERMINAL-IO*",70));
  return stream;
}

#line 1481
cl_object cl_read(cl_narg narg, ...)
{
#line 1481

  cl_object x;
  #line 1484
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 1484
	cl_object strm;
#line 1484
	cl_object eof_errorp;
#line 1484
	cl_object eof_value;
#line 1484
	cl_object recursivep;
#line 1484
	va_list ARGS;
	va_start(ARGS, narg);
#line 1484
	if (ecl_unlikely(narg < 0|| narg > 4)) FEwrong_num_arguments(ecl_make_fixnum(692));
#line 1484
	if (narg > 0) {
#line 1484
		strm = va_arg(ARGS,cl_object);
#line 1484
	} else {
#line 1484
		strm = ECL_NIL;
#line 1484
	}
#line 1484
	if (narg > 1) {
#line 1484
		eof_errorp = va_arg(ARGS,cl_object);
#line 1484
	} else {
#line 1484
		eof_errorp = ECL_T;
#line 1484
	}
#line 1484
	if (narg > 2) {
#line 1484
		eof_value = va_arg(ARGS,cl_object);
#line 1484
	} else {
#line 1484
		eof_value = ECL_NIL;
#line 1484
	}
#line 1484
	if (narg > 3) {
#line 1484
		recursivep = va_arg(ARGS,cl_object);
#line 1484
	} else {
#line 1484
		recursivep = ECL_NIL;
#line 1484
	}
#line 1484
  strm = stream_or_default_input(strm);
  if (Null(recursivep)) {
    x = ecl_read_object_non_recursive(strm);
  } else {
    x = ecl_read_object(strm);
  }
  if (x == OBJNULL) {
    if (Null(eof_errorp)) {
      {
#line 1492
	#line 1492
	cl_object __value0 = eof_value;
#line 1492
	the_env->nvalues = 1;
#line 1492
	the_env->values[0] = __value0;
#line 1492
	va_end(ARGS);
#line 1492
	return __value0;
#line 1492
}
;
    }
    FEend_of_file(strm);
  }
  /* Skip whitespace characters, but stop at beginning of new line or token */
  if (Null(recursivep)) {
    cl_object rtbl = ecl_current_readtable();
    int c = ecl_read_char(strm);
    if (c != EOF && (ecl_readtable_get(rtbl, c, NULL) != cat_whitespace)) {
      ecl_unread_char(c, strm);
    }
  }
  {
#line 1504
	#line 1504
	cl_object __value0 = x;
#line 1504
	the_env->nvalues = 1;
#line 1504
	the_env->values[0] = __value0;
#line 1504
	va_end(ARGS);
#line 1504
	return __value0;
#line 1504
}
;
  }

#line 1511
cl_object cl_read_preserving_whitespace(cl_narg narg, ...)
{
#line 1511

  cl_object x;
  #line 1514
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 1514
	cl_object strm;
#line 1514
	cl_object eof_errorp;
#line 1514
	cl_object eof_value;
#line 1514
	cl_object recursivep;
#line 1514
	va_list ARGS;
	va_start(ARGS, narg);
#line 1514
	if (ecl_unlikely(narg < 0|| narg > 4)) FEwrong_num_arguments(ecl_make_fixnum(699));
#line 1514
	if (narg > 0) {
#line 1514
		strm = va_arg(ARGS,cl_object);
#line 1514
	} else {
#line 1514
		strm = ECL_NIL;
#line 1514
	}
#line 1514
	if (narg > 1) {
#line 1514
		eof_errorp = va_arg(ARGS,cl_object);
#line 1514
	} else {
#line 1514
		eof_errorp = ECL_T;
#line 1514
	}
#line 1514
	if (narg > 2) {
#line 1514
		eof_value = va_arg(ARGS,cl_object);
#line 1514
	} else {
#line 1514
		eof_value = ECL_NIL;
#line 1514
	}
#line 1514
	if (narg > 3) {
#line 1514
		recursivep = va_arg(ARGS,cl_object);
#line 1514
	} else {
#line 1514
		recursivep = ECL_NIL;
#line 1514
	}
#line 1514
  strm = stream_or_default_input(strm);
  if (Null(recursivep)) {
    x = ecl_read_object_non_recursive(strm);
  } else {
    x = ecl_read_object(strm);
  }
  if (x == OBJNULL) {
    if (Null(eof_errorp))
      {
#line 1522
	#line 1522
	cl_object __value0 = eof_value;
#line 1522
	the_env->nvalues = 1;
#line 1522
	the_env->values[0] = __value0;
#line 1522
	va_end(ARGS);
#line 1522
	return __value0;
#line 1522
}
;
    FEend_of_file(strm);
  }
  {
#line 1525
	#line 1525
	cl_object __value0 = x;
#line 1525
	the_env->nvalues = 1;
#line 1525
	the_env->values[0] = __value0;
#line 1525
	va_end(ARGS);
#line 1525
	return __value0;
#line 1525
}
;
  }

static cl_object
do_read_delimited_list(int d, cl_object in, bool proper_list)
{
  int after_dot = 0;
  bool suppress = read_suppress;
  cl_object x, y = ECL_NIL;
  cl_object *p = &y;
  do {
    x = ecl_read_object_with_delimiter(in, d, ECL_READ_LIST_DOT,
                                       cat_constituent);
    if (x == OBJNULL) {
      /* End of the list. */
      unlikely_if (after_dot == 1) {
        /* Something like (1 . ) */
        FEreader_error("Object missing after a list dot", in, 0);
      }
      return y;
    } else if (x == ECL_SYM("SI::.",1035)) {
      unlikely_if (proper_list) {
        FEreader_error("A dotted list was found where a proper list was expected.", in, 0);
      }
      unlikely_if (p == &y) {
        /* Something like (. 2) */
        FEreader_error("A dot appeared after a left parenthesis.", in, 0);
      }
      unlikely_if (after_dot) {
        /* Something like (1 . . 2) */
        FEreader_error("Two dots appeared consecutively.", in, 0);
      }
      after_dot = 1;
    } else if (after_dot) {
      unlikely_if (after_dot++ > 1) {
        /* Something like (1 . 2 3) */
        FEreader_error("Too many objects after a list dot", in, 0);
      }
      *p = x;
    } else if (!suppress) {
      *p = ecl_list1(x);
      p = &ECL_CONS_CDR(*p);
    }
  } while (1);
}

#line 1571
cl_object cl_read_delimited_list(cl_narg narg, cl_object d, ...)
{
#line 1571

  cl_object l;
  int delimiter;
  #line 1575
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 1575
	cl_object strm;
#line 1575
	cl_object recursivep;
#line 1575
	va_list ARGS;
	va_start(ARGS, d);
#line 1575
	if (ecl_unlikely(narg < 1|| narg > 3)) FEwrong_num_arguments(ecl_make_fixnum(696));
#line 1575
	if (narg > 1) {
#line 1575
		strm = va_arg(ARGS,cl_object);
#line 1575
	} else {
#line 1575
		strm = ECL_NIL;
#line 1575
	}
#line 1575
	if (narg > 2) {
#line 1575
		recursivep = va_arg(ARGS,cl_object);
#line 1575
	} else {
#line 1575
		recursivep = ECL_NIL;
#line 1575
	}
#line 1575
  delimiter = ecl_char_code(d);
  strm = stream_or_default_input(strm);
  if (!Null(recursivep)) {
    l = do_read_delimited_list(delimiter, strm, 1);
  } else {
    ecl_bds_bind(the_env, ECL_SYM("SI::*SHARP-EQ-CONTEXT*",1032), ECL_NIL);
    ecl_bds_bind(the_env, ECL_SYM("SI::*BACKQ-LEVEL*",1014), ecl_make_fixnum(0));
    l = do_read_delimited_list(delimiter, strm, 1);
    l = patch_sharp(the_env, l);
    ecl_bds_unwind_n(the_env, 2);
  }
  {
#line 1586
	#line 1586
	cl_object __value0 = l;
#line 1586
	the_env->nvalues = 1;
#line 1586
	the_env->values[0] = __value0;
#line 1586
	va_end(ARGS);
#line 1586
	return __value0;
#line 1586
}
;
  }

#line 1589
cl_object cl_read_line(cl_narg narg, ...)
{
#line 1589

  int c;
  cl_object token, value0, value1;
  #line 1593
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 1593
	cl_object strm;
#line 1593
	cl_object eof_errorp;
#line 1593
	cl_object eof_value;
#line 1593
	cl_object recursivep;
#line 1593
	va_list ARGS;
	va_start(ARGS, narg);
#line 1593
	if (ecl_unlikely(narg < 0|| narg > 4)) FEwrong_num_arguments(ecl_make_fixnum(698));
#line 1593
	if (narg > 0) {
#line 1593
		strm = va_arg(ARGS,cl_object);
#line 1593
	} else {
#line 1593
		strm = ECL_NIL;
#line 1593
	}
#line 1593
	if (narg > 1) {
#line 1593
		eof_errorp = va_arg(ARGS,cl_object);
#line 1593
	} else {
#line 1593
		eof_errorp = ECL_T;
#line 1593
	}
#line 1593
	if (narg > 2) {
#line 1593
		eof_value = va_arg(ARGS,cl_object);
#line 1593
	} else {
#line 1593
		eof_value = ECL_NIL;
#line 1593
	}
#line 1593
	if (narg > 3) {
#line 1593
		recursivep = va_arg(ARGS,cl_object);
#line 1593
	} else {
#line 1593
		recursivep = ECL_NIL;
#line 1593
	}
#line 1593
  strm = stream_or_default_input(strm);
#ifdef ECL_CLOS_STREAMS
  if (!ECL_ANSI_STREAM_P(strm)) {
    value0 = _ecl_funcall2(ECL_SYM("GRAY::STREAM-READ-LINE",1692), strm);
    value1 = ecl_nth_value(the_env, 1);
    if (Null(value0) && !Null(value1)) {
      if (!Null(eof_errorp))
        FEend_of_file(strm);
      value0 = eof_value;
      value1 = ECL_T;
    }
    goto OUTPUT;
  }
#endif
  token = si_get_buffer_string();
  do {
    c = ecl_read_char(strm);
    if (c == EOF || c == '\n')
      break;
    ecl_string_push_extend(token, c);
  } while(1);
  if (c == EOF && TOKEN_STRING_FILLP(token) == 0) {
    if (!Null(eof_errorp))
      FEend_of_file(strm);
    value0 = eof_value;
    value1 = ECL_T;
  } else {
#ifdef ECL_NEWLINE_IS_CRLF      /* From \r\n, ignore \r */
    if (TOKEN_STRING_FILLP(token) > 0 &&
        TOKEN_STRING_CHAR_CMP(token,TOKEN_STRING_FILLP(token)-1,'\r'))
      TOKEN_STRING_FILLP(token)--;
#endif
#ifdef ECL_NEWLINE_IS_LFCR      /* From \n\r, ignore \r */
    ecl_read_char(strm);
#endif
    value0 = cl_copy_seq(token);
    value1 = (c == EOF? ECL_T : ECL_NIL);
  }
  si_put_buffer_string(token);
 OUTPUT:
  {
#line 1633
	#line 1633
	cl_object __value0 = value0;
#line 1633
	cl_object __value1 = value1;
#line 1633
	the_env->nvalues = 2;
#line 1633
	the_env->values[1] = __value1;
#line 1633
	the_env->values[0] = __value0;
#line 1633
	va_end(ARGS);
#line 1633
	return __value0;
#line 1633
}
;
  }

#line 1636
cl_object cl_read_char(cl_narg narg, ...)
{
#line 1636

  int c;
  cl_object output;
  #line 1640
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 1640
	cl_object strm;
#line 1640
	cl_object eof_errorp;
#line 1640
	cl_object eof_value;
#line 1640
	cl_object recursivep;
#line 1640
	va_list ARGS;
	va_start(ARGS, narg);
#line 1640
	if (ecl_unlikely(narg < 0|| narg > 4)) FEwrong_num_arguments(ecl_make_fixnum(694));
#line 1640
	if (narg > 0) {
#line 1640
		strm = va_arg(ARGS,cl_object);
#line 1640
	} else {
#line 1640
		strm = ECL_NIL;
#line 1640
	}
#line 1640
	if (narg > 1) {
#line 1640
		eof_errorp = va_arg(ARGS,cl_object);
#line 1640
	} else {
#line 1640
		eof_errorp = ECL_T;
#line 1640
	}
#line 1640
	if (narg > 2) {
#line 1640
		eof_value = va_arg(ARGS,cl_object);
#line 1640
	} else {
#line 1640
		eof_value = ECL_NIL;
#line 1640
	}
#line 1640
	if (narg > 3) {
#line 1640
		recursivep = va_arg(ARGS,cl_object);
#line 1640
	} else {
#line 1640
		recursivep = ECL_NIL;
#line 1640
	}
#line 1640
  strm = stream_or_default_input(strm);
  c = ecl_read_char(strm);
  if (c != EOF)
    output = ECL_CODE_CHAR(c);
  else if (Null(eof_errorp))
    output = eof_value;
  else
    FEend_of_file(strm);
  {
#line 1648
	#line 1648
	cl_object __value0 = output;
#line 1648
	the_env->nvalues = 1;
#line 1648
	the_env->values[0] = __value0;
#line 1648
	va_end(ARGS);
#line 1648
	return __value0;
#line 1648
}
;
  }

#line 1651
cl_object cl_unread_char(cl_narg narg, cl_object c, ...)
{
#line 1651

  #line 1653
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 1653
	cl_object strm;
#line 1653
	va_list ARGS;
	va_start(ARGS, c);
#line 1653
	if (ecl_unlikely(narg < 1|| narg > 2)) FEwrong_num_arguments(ecl_make_fixnum(886));
#line 1653
	if (narg > 1) {
#line 1653
		strm = va_arg(ARGS,cl_object);
#line 1653
	} else {
#line 1653
		strm = ECL_NIL;
#line 1653
	}
#line 1653
  /* INV: unread_char() checks the type `c' */
  strm = stream_or_default_input(strm);
  ecl_unread_char(ecl_char_code(c), strm);
  {
#line 1656
	#line 1656
	cl_object __value0 = ECL_NIL;
#line 1656
	the_env->nvalues = 1;
#line 1656
	the_env->values[0] = __value0;
#line 1656
	va_end(ARGS);
#line 1656
	return __value0;
#line 1656
}
;
  }

#line 1659
cl_object cl_peek_char(cl_narg narg, ...)
{
#line 1659

  int c;
  cl_object rtbl = ecl_current_readtable();
  #line 1663
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 1663
	cl_object peek_type;
#line 1663
	cl_object strm;
#line 1663
	cl_object eof_errorp;
#line 1663
	cl_object eof_value;
#line 1663
	cl_object recursivep;
#line 1663
	va_list ARGS;
	va_start(ARGS, narg);
#line 1663
	if (ecl_unlikely(narg < 0|| narg > 5)) FEwrong_num_arguments(ecl_make_fixnum(641));
#line 1663
	if (narg > 0) {
#line 1663
		peek_type = va_arg(ARGS,cl_object);
#line 1663
	} else {
#line 1663
		peek_type = ECL_NIL;
#line 1663
	}
#line 1663
	if (narg > 1) {
#line 1663
		strm = va_arg(ARGS,cl_object);
#line 1663
	} else {
#line 1663
		strm = ECL_NIL;
#line 1663
	}
#line 1663
	if (narg > 2) {
#line 1663
		eof_errorp = va_arg(ARGS,cl_object);
#line 1663
	} else {
#line 1663
		eof_errorp = ECL_T;
#line 1663
	}
#line 1663
	if (narg > 3) {
#line 1663
		eof_value = va_arg(ARGS,cl_object);
#line 1663
	} else {
#line 1663
		eof_value = ECL_NIL;
#line 1663
	}
#line 1663
	if (narg > 4) {
#line 1663
		recursivep = va_arg(ARGS,cl_object);
#line 1663
	} else {
#line 1663
		recursivep = ECL_NIL;
#line 1663
	}
#line 1663
  strm = stream_or_default_input(strm);
  c = ecl_peek_char(strm);
  if (c != EOF && !Null(peek_type)) {
    if (peek_type == ECL_T) {
      do {
        /* If the character is not a whitespace, output */
        if (ecl_readtable_get(rtbl, c, NULL) != cat_whitespace)
          break;
        /* Otherwise, read the whitespace and peek the
         * next character */
        ecl_read_char(strm);
        c = ecl_peek_char(strm);
      } while (c != EOF);
    } else {
      do {
        /* If the character belongs to the given class,
         * we're done. */
        if (ecl_char_eq(ECL_CODE_CHAR(c), peek_type))
          break;
        /* Otherwise, consume the character and
         * peek the next one. */
        ecl_read_char(strm);
        c = ecl_peek_char(strm);
      } while (c != EOF);
    }
  }
  if (c != EOF) {
    eof_value = ECL_CODE_CHAR(c);
  } else if (!Null(eof_errorp)) {
    FEend_of_file(strm);
  }
  {
#line 1694
	#line 1694
	cl_object __value0 = eof_value;
#line 1694
	the_env->nvalues = 1;
#line 1694
	the_env->values[0] = __value0;
#line 1694
	va_end(ARGS);
#line 1694
	return __value0;
#line 1694
}
;
  }

#line 1697
cl_object cl_listen(cl_narg narg, ...)
{
#line 1697

  #line 1699
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 1699
	cl_object strm;
#line 1699
	va_list ARGS;
	va_start(ARGS, narg);
#line 1699
	if (ecl_unlikely(narg < 0|| narg > 1)) FEwrong_num_arguments(ecl_make_fixnum(487));
#line 1699
	if (narg > 0) {
#line 1699
		strm = va_arg(ARGS,cl_object);
#line 1699
	} else {
#line 1699
		strm = ECL_NIL;
#line 1699
	}
#line 1699
  strm = stream_or_default_input(strm);
  {
#line 1700
	#line 1700
	cl_object __value0 = ((ecl_listen_stream(strm) == ECL_LISTEN_AVAILABLE)? ECL_T : ECL_NIL);
#line 1700
	the_env->nvalues = 1;
#line 1700
	the_env->values[0] = __value0;
#line 1700
	va_end(ARGS);
#line 1700
	return __value0;
#line 1700
}
;
  }

#line 1703
cl_object cl_read_char_no_hang(cl_narg narg, ...)
{
#line 1703

  int f;
  #line 1706
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 1706
	cl_object strm;
#line 1706
	cl_object eof_errorp;
#line 1706
	cl_object eof_value;
#line 1706
	cl_object recursivep;
#line 1706
	va_list ARGS;
	va_start(ARGS, narg);
#line 1706
	if (ecl_unlikely(narg < 0|| narg > 4)) FEwrong_num_arguments(ecl_make_fixnum(695));
#line 1706
	if (narg > 0) {
#line 1706
		strm = va_arg(ARGS,cl_object);
#line 1706
	} else {
#line 1706
		strm = ECL_NIL;
#line 1706
	}
#line 1706
	if (narg > 1) {
#line 1706
		eof_errorp = va_arg(ARGS,cl_object);
#line 1706
	} else {
#line 1706
		eof_errorp = ECL_T;
#line 1706
	}
#line 1706
	if (narg > 2) {
#line 1706
		eof_value = va_arg(ARGS,cl_object);
#line 1706
	} else {
#line 1706
		eof_value = ECL_NIL;
#line 1706
	}
#line 1706
	if (narg > 3) {
#line 1706
		recursivep = va_arg(ARGS,cl_object);
#line 1706
	} else {
#line 1706
		recursivep = ECL_NIL;
#line 1706
	}
#line 1706
  strm = stream_or_default_input(strm);
#ifdef ECL_CLOS_STREAMS
  if (!ECL_ANSI_STREAM_P(strm)) {
    cl_object output =
      _ecl_funcall2(ECL_SYM("GRAY::STREAM-READ-CHAR-NO-HANG",1691), strm);
    if (output == ECL_SYM(":EOF",1250))
      goto END_OF_FILE;
    {
#line 1713
	#line 1713
	cl_object __value0 = output;
#line 1713
	the_env->nvalues = 1;
#line 1713
	the_env->values[0] = __value0;
#line 1713
	va_end(ARGS);
#line 1713
	return __value0;
#line 1713
}
;
  }
#endif
  f = ecl_listen_stream(strm);
  if (f == ECL_LISTEN_AVAILABLE) {
    int c = ecl_read_char(strm);
    if (c != EOF) {
      {
#line 1720
	#line 1720
	cl_object __value0 = ECL_CODE_CHAR(c);
#line 1720
	the_env->nvalues = 1;
#line 1720
	the_env->values[0] = __value0;
#line 1720
	va_end(ARGS);
#line 1720
	return __value0;
#line 1720
}
;
    }
  } else if (f == ECL_LISTEN_NO_CHAR) {
    {
#line 1723
	#line 1723
	cl_object __value0 = ECL_NIL;
#line 1723
	the_env->nvalues = 1;
#line 1723
	the_env->values[0] = __value0;
#line 1723
	va_end(ARGS);
#line 1723
	return __value0;
#line 1723
}
;
  }
  /* We reach here if there was an EOF */
 END_OF_FILE:
  if (Null(eof_errorp)) {
    {
#line 1728
	#line 1728
	cl_object __value0 = eof_value;
#line 1728
	the_env->nvalues = 1;
#line 1728
	the_env->values[0] = __value0;
#line 1728
	va_end(ARGS);
#line 1728
	return __value0;
#line 1728
}
;
  }
  else {
      FEend_of_file(strm);
  }
  }

#line 1735
cl_object cl_clear_input(cl_narg narg, ...)
{
#line 1735

  #line 1737
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 1737
	cl_object strm;
#line 1737
	va_list ARGS;
	va_start(ARGS, narg);
#line 1737
	if (ecl_unlikely(narg < 0|| narg > 1)) FEwrong_num_arguments(ecl_make_fixnum(228));
#line 1737
	if (narg > 0) {
#line 1737
		strm = va_arg(ARGS,cl_object);
#line 1737
	} else {
#line 1737
		strm = ECL_NIL;
#line 1737
	}
#line 1737
  strm = stream_or_default_input(strm);
  ecl_clear_input(strm);
  {
#line 1739
	#line 1739
	cl_object __value0 = ECL_NIL;
#line 1739
	the_env->nvalues = 1;
#line 1739
	the_env->values[0] = __value0;
#line 1739
	va_end(ARGS);
#line 1739
	return __value0;
#line 1739
}
;
  }

#line 1742
cl_object cl_read_byte(cl_narg narg, cl_object binary_input_stream, ...)
{
#line 1742

  cl_object c;
  #line 1745
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 1745
	cl_object eof_errorp;
#line 1745
	cl_object eof_value;
#line 1745
	va_list ARGS;
	va_start(ARGS, binary_input_stream);
#line 1745
	if (ecl_unlikely(narg < 1|| narg > 3)) FEwrong_num_arguments(ecl_make_fixnum(693));
#line 1745
	if (narg > 1) {
#line 1745
		eof_errorp = va_arg(ARGS,cl_object);
#line 1745
	} else {
#line 1745
		eof_errorp = ECL_T;
#line 1745
	}
#line 1745
	if (narg > 2) {
#line 1745
		eof_value = va_arg(ARGS,cl_object);
#line 1745
	} else {
#line 1745
		eof_value = ECL_NIL;
#line 1745
	}
#line 1745
  c = ecl_read_byte(binary_input_stream);
  if (c == ECL_NIL) {
    if (Null(eof_errorp)) {
      {
#line 1748
	#line 1748
	cl_object __value0 = eof_value;
#line 1748
	the_env->nvalues = 1;
#line 1748
	the_env->values[0] = __value0;
#line 1748
	va_end(ARGS);
#line 1748
	return __value0;
#line 1748
}
;
    }
    else
        FEend_of_file(binary_input_stream);
  }
  {
#line 1753
	#line 1753
	cl_object __value0 = c;
#line 1753
	the_env->nvalues = 1;
#line 1753
	the_env->values[0] = __value0;
#line 1753
	va_end(ARGS);
#line 1753
	return __value0;
#line 1753
}
;
  }

#line 1756
cl_object cl_read_sequence(cl_narg narg, cl_object sequence, cl_object stream, ...)
{
#line 1756

  #line 1758
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 1758
	static cl_object KEYS[2] = {(cl_object)(cl_symbols+1337), (cl_object)(cl_symbols+1247)};
	cl_object start;
	cl_object end;
#line 1758
	cl_object KEY_VARS[4];
#line 1758
	ecl_va_list ARGS;
	ecl_va_start(ARGS, stream, narg, 2);
#line 1758
	if (ecl_unlikely(narg < 2)) FEwrong_num_arguments(ecl_make_fixnum(700));
#line 1758
	cl_parse_key(ARGS, 2, KEYS, KEY_VARS, NULL, 0);
#line 1758
	if (KEY_VARS[2]==ECL_NIL) {
#line 1758
	  start = ecl_make_fixnum(0);
	} else {
#line 1758
	  start = KEY_VARS[0];
	}
#line 1758
	if (KEY_VARS[3]==ECL_NIL) {
#line 1758
	  end = ECL_NIL;
	} else {
#line 1758
	  end = KEY_VARS[1];
	}
#line 1758
#ifdef ECL_CLOS_STREAMS
  if (!ECL_ANSI_STREAM_P(stream))
  return funcall(5, ECL_SYM("GRAY::STREAM-READ-SEQUENCE",1693), stream, sequence, start, end);
  else
#endif
	  {
#line 1763
		#line 1763
		cl_object __value0 = si_do_read_sequence(sequence, stream, start, end);
#line 1763
		the_env->nvalues = 1;
#line 1763
		the_env->values[0] = __value0;
#line 1763
		ecl_va_end(ARGS);
#line 1763
		return __value0;
#line 1763
	}
;
  }


#line 1767
cl_object cl_copy_readtable(cl_narg narg, ...)
{
#line 1767

  #line 1769
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 1769
	cl_object from;
#line 1769
	cl_object to;
#line 1769
	va_list ARGS;
	va_start(ARGS, narg);
#line 1769
	if (ecl_unlikely(narg < 0|| narg > 2)) FEwrong_num_arguments(ecl_make_fixnum(261));
#line 1769
	if (narg > 0) {
#line 1769
		from = va_arg(ARGS,cl_object);
#line 1769
	} else {
#line 1769
		from = ecl_current_readtable();
#line 1769
	}
#line 1769
	if (narg > 1) {
#line 1769
		to = va_arg(ARGS,cl_object);
#line 1769
	} else {
#line 1769
		to = ECL_NIL;
#line 1769
	}
#line 1769
  if (Null(from)) {
    to = ecl_copy_readtable(cl_core.standard_readtable, to);
  } else {
    to = ecl_copy_readtable(from, to);
  }
  {
#line 1774
	#line 1774
	cl_object __value0 = to;
#line 1774
	the_env->nvalues = 1;
#line 1774
	the_env->values[0] = __value0;
#line 1774
	va_end(ARGS);
#line 1774
	return __value0;
#line 1774
}
;
  }

cl_object
cl_readtable_case(cl_object r)
{
  assert_type_readtable(ecl_make_fixnum(/*READTABLE-CASE*/703), 1, r);
  switch (r->readtable.read_case) {
  case ecl_case_upcase: r = ECL_SYM(":UPCASE",1350); break;
  case ecl_case_downcase: r = ECL_SYM(":DOWNCASE",1245); break;
  case ecl_case_invert: r = ECL_SYM(":INVERT",1285); break;
  case ecl_case_preserve: r = ECL_SYM(":PRESERVE",1315);
  }
  {
#line 1787
	const cl_env_ptr the_env = ecl_process_env();
#line 1787
	#line 1787
	cl_object __value0 = r;
#line 1787
	the_env->nvalues = 1;
#line 1787
	the_env->values[0] = __value0;
#line 1787
	#line 1787
	return __value0;
#line 1787
}
;
}

static void
error_locked_readtable(cl_object r)
{
  cl_error(2,
           ecl_make_constant_base_string("Cannot modify locked readtable ~A.",-1),
           r);
}

cl_object
si_readtable_case_set(cl_object r, cl_object mode)
{
  assert_type_readtable(ecl_make_fixnum(/*READTABLE-CASE*/703), 1, r);
  if (r->readtable.locked) {
    error_locked_readtable(r);
  }
  if (mode == ECL_SYM(":UPCASE",1350)) {
    r->readtable.read_case = ecl_case_upcase;
  } else if (mode == ECL_SYM(":DOWNCASE",1245)) {
    r->readtable.read_case = ecl_case_downcase;
  } else if (mode == ECL_SYM(":PRESERVE",1315)) {
    r->readtable.read_case = ecl_case_preserve;
  } else if (mode == ECL_SYM(":INVERT",1285)) {
    r->readtable.read_case = ecl_case_invert;
  } else {
    const char *type = "(member :upcase :downcase :preserve :invert)";
    FEwrong_type_nth_arg(ecl_make_fixnum(/*SI::READTABLE-CASE-SET*/1143), 2,
                         mode, ecl_read_from_cstring(type));
  }
  {
#line 1818
	const cl_env_ptr the_env = ecl_process_env();
#line 1818
	#line 1818
	cl_object __value0 = mode;
#line 1818
	the_env->nvalues = 1;
#line 1818
	the_env->values[0] = __value0;
#line 1818
	#line 1818
	return __value0;
#line 1818
}
;
}

cl_object
cl_readtablep(cl_object readtable)
{
  {
#line 1824
	const cl_env_ptr the_env = ecl_process_env();
#line 1824
	#line 1824
	cl_object __value0 = (ECL_READTABLEP(readtable) ? ECL_T : ECL_NIL);
#line 1824
	the_env->nvalues = 1;
#line 1824
	the_env->values[0] = __value0;
#line 1824
	#line 1824
	return __value0;
#line 1824
}
;
}

int
ecl_readtable_get(cl_object readtable, int c, cl_object *macro_or_table)
{
  cl_object m;
  enum ecl_chattrib cat;
#ifdef ECL_UNICODE
  if (c >= RTABSIZE) {
    cl_object hash = readtable->readtable.hash;
    cat = cat_constituent;
    m = ECL_NIL;
    if (!Null(hash)) {
      cl_object pair = ecl_gethash_safe(ECL_CODE_CHAR(c), hash, ECL_NIL);
      if (!Null(pair)) {
        cat = ecl_fixnum(ECL_CONS_CAR(pair));
        m = ECL_CONS_CDR(pair);
      }
    }
  } else
#endif
    {
      m = readtable->readtable.table[c].dispatch;
      cat = readtable->readtable.table[c].syntax_type;
    }
  if (macro_or_table) *macro_or_table = m;
  return cat;
}

void
ecl_readtable_set(cl_object readtable, int c, enum ecl_chattrib cat,
                  cl_object macro_or_table)
{
  if (readtable->readtable.locked) {
    error_locked_readtable(readtable);
  }
#ifdef ECL_UNICODE
  if (c >= RTABSIZE) {
    cl_object hash = readtable->readtable.hash;
    if (Null(hash)) {
      hash = cl__make_hash_table(ECL_SYM("EQL",336), ecl_make_fixnum(128),
                                 cl_core.rehash_size,
                                 cl_core.rehash_threshold);
      readtable->readtable.hash = hash;
    }
    _ecl_sethash(ECL_CODE_CHAR(c), hash,
                 CONS(ecl_make_fixnum(cat), macro_or_table));
  } else
#endif
    {
      readtable->readtable.table[c].dispatch = macro_or_table;
      readtable->readtable.table[c].syntax_type = cat;
    }
}

bool
ecl_invalid_character_p(int c)
{
  return (c <= 32) || (c == 127);
}

#line 1888
cl_object cl_set_syntax_from_char(cl_narg narg, cl_object tochr, cl_object fromchr, ...)
{
#line 1888

  enum ecl_chattrib cat;
  cl_object dispatch;
  cl_fixnum fc, tc;
  #line 1893
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 1893
	cl_object tordtbl;
#line 1893
	cl_object fromrdtbl;
#line 1893
	va_list ARGS;
	va_start(ARGS, fromchr);
#line 1893
	if (ecl_unlikely(narg < 2|| narg > 4)) FEwrong_num_arguments(ecl_make_fixnum(751));
#line 1893
	if (narg > 2) {
#line 1893
		tordtbl = va_arg(ARGS,cl_object);
#line 1893
	} else {
#line 1893
		tordtbl = ecl_current_readtable();
#line 1893
	}
#line 1893
	if (narg > 3) {
#line 1893
		fromrdtbl = va_arg(ARGS,cl_object);
#line 1893
	} else {
#line 1893
		fromrdtbl = ECL_NIL;
#line 1893
	}
#line 1893
  if (tordtbl->readtable.locked) {
    error_locked_readtable(tordtbl);
  }
  if (Null(fromrdtbl))
    fromrdtbl = cl_core.standard_readtable;
  assert_type_readtable(ecl_make_fixnum(/*READTABLE-CASE*/703), 1, tordtbl);
  assert_type_readtable(ecl_make_fixnum(/*READTABLE-CASE*/703), 2, fromrdtbl);
  fc = ecl_char_code(fromchr);
  tc = ecl_char_code(tochr);

  cat = ecl_readtable_get(fromrdtbl, fc, &dispatch);
  if (ECL_READTABLEP(dispatch)) {
    dispatch = si_copy_hash_table(dispatch);
  }
  ecl_readtable_set(tordtbl, tc, cat, dispatch);
  {
#line 1908
	#line 1908
	cl_object __value0 = ECL_T;
#line 1908
	the_env->nvalues = 1;
#line 1908
	the_env->values[0] = __value0;
#line 1908
	va_end(ARGS);
#line 1908
	return __value0;
#line 1908
}
;
  }

#line 1912
cl_object cl_set_macro_character(cl_narg narg, cl_object c, cl_object function, ...)
{
#line 1912

  #line 1914
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 1914
	cl_object non_terminating_p;
#line 1914
	cl_object readtable;
#line 1914
	va_list ARGS;
	va_start(ARGS, function);
#line 1914
	if (ecl_unlikely(narg < 2|| narg > 4)) FEwrong_num_arguments(ecl_make_fixnum(749));
#line 1914
	if (narg > 2) {
#line 1914
		non_terminating_p = va_arg(ARGS,cl_object);
#line 1914
	} else {
#line 1914
		non_terminating_p = ECL_NIL;
#line 1914
	}
#line 1914
	if (narg > 3) {
#line 1914
		readtable = va_arg(ARGS,cl_object);
#line 1914
	} else {
#line 1914
		readtable = ecl_current_readtable();
#line 1914
	}
#line 1914
  ecl_readtable_set(readtable, ecl_char_code(c),
                    Null(non_terminating_p)?
                    cat_terminating :
                    cat_non_terminating,
                    function);
  {
#line 1919
	#line 1919
	cl_object __value0 = ECL_T;
#line 1919
	the_env->nvalues = 1;
#line 1919
	the_env->values[0] = __value0;
#line 1919
	va_end(ARGS);
#line 1919
	return __value0;
#line 1919
}
;
  }

#line 1922
cl_object cl_get_macro_character(cl_narg narg, cl_object c, ...)
{
#line 1922

  enum ecl_chattrib cat;
  cl_object dispatch;
  #line 1926
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 1926
	cl_object readtable;
#line 1926
	va_list ARGS;
	va_start(ARGS, c);
#line 1926
	if (ecl_unlikely(narg < 1|| narg > 2)) FEwrong_num_arguments(ecl_make_fixnum(409));
#line 1926
	if (narg > 1) {
#line 1926
		readtable = va_arg(ARGS,cl_object);
#line 1926
	} else {
#line 1926
		readtable = ecl_current_readtable();
#line 1926
	}
#line 1926
  if (Null(readtable))
  readtable = cl_core.standard_readtable;
  cat = ecl_readtable_get(readtable, ecl_char_code(c), &dispatch);
  if (ECL_HASH_TABLE_P(dispatch))
    dispatch = cl_core.dispatch_reader;
  {
#line 1931
	#line 1931
	cl_object __value0 = dispatch;
#line 1931
	cl_object __value1 = ((cat == cat_non_terminating)? ECL_T : ECL_NIL);
#line 1931
	the_env->nvalues = 2;
#line 1931
	the_env->values[1] = __value1;
#line 1931
	the_env->values[0] = __value0;
#line 1931
	va_end(ARGS);
#line 1931
	return __value0;
#line 1931
}
;
  }

#line 1935
cl_object cl_make_dispatch_macro_character(cl_narg narg, cl_object chr, ...)
{
#line 1935

  enum ecl_chattrib cat;
  cl_object table;
  int c;
  #line 1940
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 1940
	cl_object non_terminating_p;
#line 1940
	cl_object readtable;
#line 1940
	va_list ARGS;
	va_start(ARGS, chr);
#line 1940
	if (ecl_unlikely(narg < 1|| narg > 3)) FEwrong_num_arguments(ecl_make_fixnum(528));
#line 1940
	if (narg > 1) {
#line 1940
		non_terminating_p = va_arg(ARGS,cl_object);
#line 1940
	} else {
#line 1940
		non_terminating_p = ECL_NIL;
#line 1940
	}
#line 1940
	if (narg > 2) {
#line 1940
		readtable = va_arg(ARGS,cl_object);
#line 1940
	} else {
#line 1940
		readtable = ecl_current_readtable();
#line 1940
	}
#line 1940
  assert_type_readtable(ecl_make_fixnum(/*MAKE-DISPATCH-MACRO-CHARACTER*/528), 3, readtable);
  c = ecl_char_code(chr);
  cat = Null(non_terminating_p)? cat_terminating : cat_non_terminating;
  table = cl__make_hash_table(ECL_SYM("EQL",336), ecl_make_fixnum(128),
                              cl_core.rehash_size,
                              cl_core.rehash_threshold);
  ecl_readtable_set(readtable, c, cat, table);
  {
#line 1947
	#line 1947
	cl_object __value0 = ECL_T;
#line 1947
	the_env->nvalues = 1;
#line 1947
	the_env->values[0] = __value0;
#line 1947
	va_end(ARGS);
#line 1947
	return __value0;
#line 1947
}
;
  }

#line 1951
cl_object cl_set_dispatch_macro_character(cl_narg narg, cl_object dspchr, cl_object subchr, cl_object fnc, ...)
{
#line 1951

  cl_object table;
  cl_fixnum subcode;
  #line 1955
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 1955
	cl_object readtable;
#line 1955
	va_list ARGS;
	va_start(ARGS, fnc);
#line 1955
	if (ecl_unlikely(narg < 3|| narg > 4)) FEwrong_num_arguments(ecl_make_fixnum(747));
#line 1955
	if (narg > 3) {
#line 1955
		readtable = va_arg(ARGS,cl_object);
#line 1955
	} else {
#line 1955
		readtable = ecl_current_readtable();
#line 1955
	}
#line 1955
  assert_type_readtable(ecl_make_fixnum(/*SET-DISPATCH-MACRO-CHARACTER*/747), 4, readtable);
  ecl_readtable_get(readtable, ecl_char_code(dspchr), &table);
  unlikely_if (readtable->readtable.locked) {
    error_locked_readtable(readtable);
  }
  unlikely_if (!ECL_HASH_TABLE_P(table)) {
    FEerror("~S is not a dispatch character.", 1, dspchr);
  }
  subcode = ecl_char_code(subchr);
  if (Null(fnc)) {
    ecl_remhash(ECL_CODE_CHAR(subcode), table);
  } else {
    _ecl_sethash(ECL_CODE_CHAR(subcode), table, fnc);
  }
  if (ecl_lower_case_p(subcode)) {
    subcode = ecl_char_upcase(subcode);
  } else if (ecl_upper_case_p(subcode)) {
    subcode = ecl_char_downcase(subcode);
  }
  if (Null(fnc)) {
    ecl_remhash(ECL_CODE_CHAR(subcode), table);
  } else {
    _ecl_sethash(ECL_CODE_CHAR(subcode), table, fnc);
  }
  {
#line 1979
	#line 1979
	cl_object __value0 = ECL_T;
#line 1979
	the_env->nvalues = 1;
#line 1979
	the_env->values[0] = __value0;
#line 1979
	va_end(ARGS);
#line 1979
	return __value0;
#line 1979
}
;
  }

#line 1983
cl_object cl_get_dispatch_macro_character(cl_narg narg, cl_object dspchr, cl_object subchr, ...)
{
#line 1983

  cl_object table;
  cl_fixnum c;
  #line 1987
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 1987
	cl_object readtable;
#line 1987
	va_list ARGS;
	va_start(ARGS, subchr);
#line 1987
	if (ecl_unlikely(narg < 2|| narg > 3)) FEwrong_num_arguments(ecl_make_fixnum(406));
#line 1987
	if (narg > 2) {
#line 1987
		readtable = va_arg(ARGS,cl_object);
#line 1987
	} else {
#line 1987
		readtable = ecl_current_readtable();
#line 1987
	}
#line 1987
  if (Null(readtable)) {
    readtable = cl_core.standard_readtable;
  }
  assert_type_readtable(ecl_make_fixnum(/*GET-DISPATCH-MACRO-CHARACTER*/406), 3, readtable);
  c = ecl_char_code(dspchr);
  ecl_readtable_get(readtable, c, &table);
  unlikely_if (!ECL_HASH_TABLE_P(table)) {
    FEerror("~S is not a dispatch character.", 1, dspchr);
  }
  c = ecl_char_code(subchr);

  /* Since macro characters may take a number as argument, it is
     not allowed to turn digits into dispatch macro characters */
  if (ecl_digitp(c, 10) >= 0)
    {
#line 2001
	#line 2001
	cl_object __value0 = ECL_NIL;
#line 2001
	the_env->nvalues = 1;
#line 2001
	the_env->values[0] = __value0;
#line 2001
	va_end(ARGS);
#line 2001
	return __value0;
#line 2001
}
;
  {
#line 2002
	#line 2002
	cl_object __value0 = ecl_gethash_safe(subchr, table, ECL_NIL);
#line 2002
	the_env->nvalues = 1;
#line 2002
	the_env->values[0] = __value0;
#line 2002
	va_end(ARGS);
#line 2002
	return __value0;
#line 2002
}
;
  }

cl_object
si_standard_readtable()
{
  {
#line 2008
	const cl_env_ptr the_env = ecl_process_env();
#line 2008
	#line 2008
	cl_object __value0 = cl_core.standard_readtable;
#line 2008
	the_env->nvalues = 1;
#line 2008
	the_env->values[0] = __value0;
#line 2008
	#line 2008
	return __value0;
#line 2008
}
;
}

#line 2011
cl_object si_readtable_lock(cl_narg narg, cl_object r, ...)
{
#line 2011

  cl_object output;
  #line 2014
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 2014
	cl_object yesno;
#line 2014
	va_list ARGS;
	va_start(ARGS, r);
#line 2014
	if (ecl_unlikely(narg < 1|| narg > 2)) FEwrong_num_arguments(ecl_make_fixnum(1776));
#line 2014
	if (narg > 1) {
#line 2014
		yesno = va_arg(ARGS,cl_object);
#line 2014
	} else {
#line 2014
		yesno = ECL_NIL;
#line 2014
	}
#line 2014
  assert_type_readtable(ecl_make_fixnum(/*EXT::READTABLE-LOCK*/1776), 1, r);
  output = (r->readtable.locked)? ECL_T : ECL_NIL;
  if (narg > 1) {
    r->readtable.locked = !Null(yesno);
  }
  {
#line 2019
	#line 2019
	cl_object __value0 = output;
#line 2019
	the_env->nvalues = 1;
#line 2019
	the_env->values[0] = __value0;
#line 2019
	va_end(ARGS);
#line 2019
	return __value0;
#line 2019
}
;
  }

static void
extra_argument(int c, cl_object stream, cl_object d)
{
  FEreader_error("~S is an extra argument for the #~C readmacro.",
                 stream, 2, d, ECL_CODE_CHAR(c));
}


#define make_cf2(f)     ecl_make_cfun((f), ECL_NIL, NULL, 2)
#define make_cf3(f)     ecl_make_cfun((f), ECL_NIL, NULL, 3)

void
init_read(void)
{
  struct ecl_readtable_entry *rtab;
  cl_object r;
  int i;

  cl_core.standard_readtable = r = ecl_alloc_object(t_readtable);
  r->readtable.locked = 0;
  r->readtable.read_case = ecl_case_upcase;
  r->readtable.table = rtab
    = (struct ecl_readtable_entry *)
    ecl_alloc(RTABSIZE * sizeof(struct ecl_readtable_entry));
  for (i = 0;  i < RTABSIZE;  i++) {
    rtab[i].syntax_type = cat_constituent;
    rtab[i].dispatch = ECL_NIL;
  }
#ifdef ECL_UNICODE
  r->readtable.hash = ECL_NIL;
#endif

  cl_core.dispatch_reader = make_cf2(dispatch_reader_fun);

  ecl_readtable_set(r, '\t', cat_whitespace, ECL_NIL);
  ecl_readtable_set(r, '\n', cat_whitespace, ECL_NIL);
  ecl_readtable_set(r, '\f', cat_whitespace, ECL_NIL);
  ecl_readtable_set(r, '\r', cat_whitespace, ECL_NIL);
  ecl_readtable_set(r, ' ', cat_whitespace, ECL_NIL);

  ecl_readtable_set(r, '"', cat_terminating,
                    make_cf2(double_quote_reader));

  ecl_readtable_set(r, '\'', cat_terminating,
                    make_cf2(single_quote_reader));
  ecl_readtable_set(r, '(', cat_terminating,
                    make_cf2(left_parenthesis_reader));
  ecl_readtable_set(r, ')', cat_terminating,
                    make_cf2(right_parenthesis_reader));
  ecl_readtable_set(r, ',', cat_terminating,
                    make_cf2(comma_reader));
  ecl_readtable_set(r, ';', cat_terminating,
                    make_cf2(semicolon_reader));
  ecl_readtable_set(r, '\\', cat_single_escape, ECL_NIL);
  ecl_readtable_set(r, '`', cat_terminating,
                    make_cf2(backquote_reader));
  ecl_readtable_set(r, '|', cat_multiple_escape, ECL_NIL);

  cl_core.default_dispatch_macro = make_cf3(default_dispatch_macro_fun);

  cl_make_dispatch_macro_character(3, ECL_CODE_CHAR('#'),
                                   ECL_T /* non terminating */, r);

  cl_set_dispatch_macro_character(4, ECL_CODE_CHAR('#'), ECL_CODE_CHAR('C'),
                                  make_cf3(sharp_C_reader), r);
  cl_set_dispatch_macro_character(4, ECL_CODE_CHAR('#'), ECL_CODE_CHAR('\\'),
                                  make_cf3(sharp_backslash_reader), r);
  cl_set_dispatch_macro_character(4, ECL_CODE_CHAR('#'), ECL_CODE_CHAR('\''),
                                  make_cf3(sharp_single_quote_reader), r);
  cl_set_dispatch_macro_character(4, ECL_CODE_CHAR('#'), ECL_CODE_CHAR('('),
                                  make_cf3(sharp_left_parenthesis_reader), r);
  cl_set_dispatch_macro_character(4, ECL_CODE_CHAR('#'), ECL_CODE_CHAR('*'),
                                  make_cf3(sharp_asterisk_reader), r);
  cl_set_dispatch_macro_character(4, ECL_CODE_CHAR('#'), ECL_CODE_CHAR(':'),
                                  make_cf3(sharp_colon_reader), r);
  cl_set_dispatch_macro_character(4, ECL_CODE_CHAR('#'), ECL_CODE_CHAR('.'),
                                  make_cf3(sharp_dot_reader), r);
  /*  Used for fasload only. */
  cl_set_dispatch_macro_character(4, ECL_CODE_CHAR('#'), ECL_CODE_CHAR('B'),
                                  make_cf3(sharp_B_reader), r);
  cl_set_dispatch_macro_character(4, ECL_CODE_CHAR('#'), ECL_CODE_CHAR('O'),
                                  make_cf3(sharp_O_reader), r);
  cl_set_dispatch_macro_character(4, ECL_CODE_CHAR('#'), ECL_CODE_CHAR('X'),
                                  make_cf3(sharp_X_reader), r);
  cl_set_dispatch_macro_character(4, ECL_CODE_CHAR('#'), ECL_CODE_CHAR('R'),
                                  make_cf3(sharp_R_reader), r);
  cl_set_dispatch_macro_character(4, ECL_CODE_CHAR('#'), ECL_CODE_CHAR('A'),
                                  ECL_SYM("SI::SHARP-A-READER",1152), r);
  cl_set_dispatch_macro_character(4, ECL_CODE_CHAR('#'), ECL_CODE_CHAR('S'),
                                  ECL_SYM("SI::SHARP-S-READER",1153), r);
  cl_set_dispatch_macro_character(4, ECL_CODE_CHAR('#'), ECL_CODE_CHAR('P'),
                                  make_cf3(sharp_P_reader), r);

  cl_set_dispatch_macro_character(4, ECL_CODE_CHAR('#'), ECL_CODE_CHAR('='),
                                  make_cf3(sharp_eq_reader), r);
  cl_set_dispatch_macro_character(4, ECL_CODE_CHAR('#'), ECL_CODE_CHAR('#'),
                                  make_cf3(sharp_sharp_reader), r);
  cl_set_dispatch_macro_character(4, ECL_CODE_CHAR('#'), ECL_CODE_CHAR('+'),
                                  make_cf3(sharp_plus_reader), r);
  cl_set_dispatch_macro_character(4, ECL_CODE_CHAR('#'), ECL_CODE_CHAR('-'),
                                  make_cf3(sharp_minus_reader), r);
  cl_set_dispatch_macro_character(4, ECL_CODE_CHAR('#'), ECL_CODE_CHAR('|'),
                                  make_cf3(sharp_vertical_bar_reader), r);
  cl_set_dispatch_macro_character(4, ECL_CODE_CHAR('#'), ECL_CODE_CHAR('\b'),
                                  make_cf3(sharp_generic_error), r);
  cl_set_dispatch_macro_character(4, ECL_CODE_CHAR('#'), ECL_CODE_CHAR('\t'),
                                  make_cf3(sharp_generic_error), r);
  cl_set_dispatch_macro_character(4, ECL_CODE_CHAR('#'), ECL_CODE_CHAR(ECL_CHAR_CODE_NEWLINE),
                                  make_cf3(sharp_generic_error), r);
  cl_set_dispatch_macro_character(4, ECL_CODE_CHAR('#'), ECL_CODE_CHAR(ECL_CHAR_CODE_LINEFEED),
                                  make_cf3(sharp_generic_error), r);
  cl_set_dispatch_macro_character(4, ECL_CODE_CHAR('#'), ECL_CODE_CHAR('\f'),
                                  make_cf3(sharp_generic_error), r);
  cl_set_dispatch_macro_character(4, ECL_CODE_CHAR('#'), ECL_CODE_CHAR(ECL_CHAR_CODE_RETURN),
                                  make_cf3(sharp_generic_error), r);
  cl_set_dispatch_macro_character(4, ECL_CODE_CHAR('#'), ECL_CODE_CHAR(' '),
                                  make_cf3(sharp_generic_error), r);
  cl_set_dispatch_macro_character(4, ECL_CODE_CHAR('#'), ECL_CODE_CHAR(')'),
                                  make_cf3(sharp_generic_error), r);
  cl_set_dispatch_macro_character(4, ECL_CODE_CHAR('#'), ECL_CODE_CHAR('<'),
                                  make_cf3(sharp_generic_error), r);
  /*  This is specific to this implementation  */
  cl_set_dispatch_macro_character(4, ECL_CODE_CHAR('#'), ECL_CODE_CHAR('$'),
                                  make_cf3(sharp_dollar_reader), r);
  /*  This is specific to this implementation  */
  cl_set_dispatch_macro_character(4, ECL_CODE_CHAR('#'), ECL_CODE_CHAR('Y'),
                                  make_cf3(sharp_Y_reader), r);
  /*  This is specific to this implementation: ignore BOM  */
#ifdef ECL_UNICODE
  ecl_readtable_set(r, 0xfeff, cat_whitespace, ECL_NIL);
#endif

  /* Lock the standard read table so that we do not have to make copies
   * to keep it unchanged */
  r->readtable.locked = 1;

  init_backq();

  ECL_SET(ECL_SYM("*READTABLE*",67),
          r=ecl_copy_readtable(cl_core.standard_readtable, ECL_NIL));
  cl_set_dispatch_macro_character(4, ECL_CODE_CHAR('#'), ECL_CODE_CHAR('!'),
                                  ECL_NIL, r);
  ECL_SET(ECL_SYM("*READ-DEFAULT-FLOAT-FORMAT*",64), ECL_SYM("SINGLE-FLOAT",780));

  {
    cl_object var, val;
    var = cl_list(25,
                  ECL_SYM("*PRINT-PPRINT-DISPATCH*",56), /* See end of pprint.lsp */
                  ECL_SYM("*PRINT-ARRAY*",46),
                  ECL_SYM("*PRINT-BASE*",47),
                  ECL_SYM("*PRINT-CASE*",48),
                  ECL_SYM("*PRINT-CIRCLE*",49),
                  ECL_SYM("*PRINT-ESCAPE*",50),
                  ECL_SYM("*PRINT-GENSYM*",51),
                  ECL_SYM("*PRINT-LENGTH*",52),
                  ECL_SYM("*PRINT-LEVEL*",53),
                  ECL_SYM("*PRINT-LINES*",54),
                  ECL_SYM("*PRINT-MISER-WIDTH*",55),
                  ECL_SYM("*PRINT-PRETTY*",57),
                  ECL_SYM("*PRINT-RADIX*",58),
                  ECL_SYM("*PRINT-READABLY*",59),
                  ECL_SYM("*PRINT-RIGHT-MARGIN*",60),
                  ECL_SYM("*READ-BASE*",63),
                  ECL_SYM("*READ-DEFAULT-FLOAT-FORMAT*",64),
                  ECL_SYM("*READ-EVAL*",65),
                  ECL_SYM("*READ-SUPPRESS*",66),
                  ECL_SYM("*READTABLE*",67),
                  ECL_SYM("*PACKAGE*",45),
                  ECL_SYM("SI::*PRINT-PACKAGE*",1030),
                  ECL_SYM("SI::*PRINT-STRUCTURE*",1031),
                  ECL_SYM("SI::*SHARP-EQ-CONTEXT*",1032),
                  ECL_SYM("SI::*CIRCLE-COUNTER*",1016));
    val = cl_list(25,
                  /**pprint-dispatch-table**/ ECL_NIL,
                  /**print-array**/ ECL_T,
                  /**print-base**/ ecl_make_fixnum(10),
                  /**print-case**/ ECL_SYM(":DOWNCASE",1245),
                  /**print-circle**/ ECL_T,
                  /**print-escape**/ ECL_T,
                  /**print-gensym**/ ECL_T,
                  /**print-length**/ ECL_NIL,
                  /**print-level**/ ECL_NIL,
                  /**print-lines**/ ECL_NIL,
                  /**print-miser-width**/ ECL_NIL,
                  /**print-pretty**/ ECL_NIL,
                  /**print-radix**/ ECL_NIL,
                  /**print-readably**/ ECL_T,
                  /**print-right-margin**/ ECL_NIL,
                  /**read-base**/ ecl_make_fixnum(10),
                  /**read-default-float-format**/ ECL_SYM("SINGLE-FLOAT",780),
                  /**read-eval**/ ECL_T,
                  /**read-suppress**/ ECL_NIL,
                  /**readtable**/ cl_core.standard_readtable,
                  /**package**/ cl_core.lisp_package,
                  /*si::*print-package**/ cl_core.lisp_package,
                  /*si::*print-structure**/ ECL_T,
                  /*si::*sharp-eq-context**/ ECL_NIL,
                  /*si::*cicle-counter**/ ECL_NIL);
    ECL_SET(ECL_SYM("SI::+ECL-SYNTAX-PROGV-LIST+",1778), CONS(var,val));
    var = cl_list(23,
                  ECL_SYM("*PRINT-PPRINT-DISPATCH*",56), /* See end of pprint.lsp */
                  ECL_SYM("*PRINT-ARRAY*",46),
                  ECL_SYM("*PRINT-BASE*",47),
                  ECL_SYM("*PRINT-CASE*",48),
                  ECL_SYM("*PRINT-CIRCLE*",49),
                  ECL_SYM("*PRINT-ESCAPE*",50),
                  ECL_SYM("*PRINT-GENSYM*",51),
                  ECL_SYM("*PRINT-LENGTH*",52),
                  ECL_SYM("*PRINT-LEVEL*",53),
                  ECL_SYM("*PRINT-LINES*",54),
                  ECL_SYM("*PRINT-MISER-WIDTH*",55),
                  ECL_SYM("*PRINT-PRETTY*",57),
                  ECL_SYM("*PRINT-RADIX*",58),
                  ECL_SYM("*PRINT-READABLY*",59),
                  ECL_SYM("*PRINT-RIGHT-MARGIN*",60),
                  ECL_SYM("*READ-BASE*",63),
                  ECL_SYM("*READ-DEFAULT-FLOAT-FORMAT*",64),
                  ECL_SYM("*READ-EVAL*",65),
                  ECL_SYM("*READ-SUPPRESS*",66),
                  ECL_SYM("*READTABLE*",67),
                  ECL_SYM("*PACKAGE*",45),
                  ECL_SYM("SI::*SHARP-EQ-CONTEXT*",1032),
                  ECL_SYM("SI::*CIRCLE-COUNTER*",1016));
    val = cl_list(23,
                  /**pprint-dispatch-table**/ ECL_NIL,
                  /**print-array**/ ECL_T,
                  /**print-base**/ ecl_make_fixnum(10),
                  /**print-case**/ ECL_SYM(":UPCASE",1350),
                  /**print-circle**/ ECL_NIL,
                  /**print-escape**/ ECL_T,
                  /**print-gensym**/ ECL_T,
                  /**print-length**/ ECL_NIL,
                  /**print-level**/ ECL_NIL,
                  /**print-lines**/ ECL_NIL,
                  /**print-miser-width**/ ECL_NIL,
                  /**print-pretty**/ ECL_NIL,
                  /**print-radix**/ ECL_NIL,
                  /**print-readably**/ ECL_T,
                  /**print-right-margin**/ ECL_NIL,
                  /**read-base**/ ecl_make_fixnum(10),
                  /**read-default-float-format**/ ECL_SYM("SINGLE-FLOAT",780),
                  /**read-eval**/ ECL_T,
                  /**read-suppress**/ ECL_NIL,
                  /**readtable**/ cl_core.standard_readtable,
                  /**package**/ cl_core.user_package,
                  /*si::*sharp-eq-context**/ ECL_NIL,
                  /*si::*cicle-counter**/ ECL_NIL);
    ECL_SET(ECL_SYM("SI::+IO-SYNTAX-PROGV-LIST+",1777), CONS(var,val));
  }
}

/*
 *----------------------------------------------------------------------
 *
 * ecl_init_module --
 *     reads the data vector from stream into vector VV
 *
 * Results:
 *      a vector.
 *
 *----------------------------------------------------------------------
 */
static cl_object
make_one_data_stream(const cl_object string)
{
#ifdef ECL_UNICODE
  return si_make_sequence_input_stream(3, string, ECL_SYM(":EXTERNAL-FORMAT",1258),
                                       ECL_SYM(":UTF-8",1737));
#else
  return ecl_make_string_input_stream(string, 0, ecl_length(string));
#endif
}

static cl_object
make_data_stream(const cl_object *data)
{
  if (data == 0 || data[0] == NULL) {
    return cl_core.null_stream;
  }
  if (data[1] == NULL) {
    return make_one_data_stream(data[0]);
  } else {
    cl_object stream_list = ECL_NIL;
    cl_index i;
    for (i = 0; data[i]; i++) {
      cl_object s = make_one_data_stream(data[i]);
      stream_list = ecl_cons(s, stream_list);
    }
    return cl_apply(2, ECL_SYM("MAKE-CONCATENATED-STREAM",527),
                    cl_nreverse(stream_list));
  }
}

cl_object
ecl_init_module(cl_object block, void (*entry_point)(cl_object))
{
  const cl_env_ptr env = ecl_process_env();
  volatile cl_object old_eptbc = env->packages_to_be_created;
  volatile cl_object x;
  cl_index i, len, perm_len, temp_len;
  cl_object in;
  cl_object *VV = NULL, *VVtemp = NULL;

  if (block == NULL)
    block = ecl_make_codeblock();
  block->cblock.entry = entry_point;

  in = OBJNULL;
  ECL_UNWIND_PROTECT_BEGIN(env) {
    cl_index bds_ndx;
    cl_object progv_list;

    ecl_bds_bind(env, ECL_SYM("SI::*CBLOCK*",1015), block);
    env->packages_to_be_created_p = ECL_T;

    /* Communicate the library which Cblock we are using, and get
     * back the amount of data to be processed.
     */
    (*entry_point)(block);
    perm_len = block->cblock.data_size;
    temp_len = block->cblock.temp_data_size;
    len = perm_len + temp_len;

    if (block->cblock.data_text == 0) {
      if (len) {
        /* Code from COMPILE uses data in *compiler-constants* */
        cl_object v = ECL_SYM_VAL(env,ECL_SYM("SI::*COMPILER-CONSTANTS*",1019));
        unlikely_if (ecl_t_of(v) != t_vector ||
                     v->vector.dim != len ||
                     v->vector.elttype != ecl_aet_object)
          FEerror("Internal error: corrupted data in "
                  "si::*compiler-constants*", 0);
        VV = block->cblock.data = v->vector.self.t;
        VVtemp = block->cblock.temp_data = NULL;
      }
      goto NO_DATA_LABEL;
    }
    if (len == 0) {
      VV = VVtemp = NULL;
      goto NO_DATA_LABEL;
    }
#ifdef ECL_DYNAMIC_VV
    VV = block->cblock.data = perm_len? (cl_object *)ecl_alloc(perm_len * sizeof(cl_object)) : NULL;
#else
    VV = block->cblock.data;
#endif
    memset(VV, 0, perm_len * sizeof(*VV));

    VVtemp = block->cblock.temp_data = temp_len? (cl_object *)ecl_alloc(temp_len * sizeof(cl_object)) : NULL;
    memset(VVtemp, 0, temp_len * sizeof(*VVtemp));

    /* Read all data for the library */
#ifdef ECL_EXTERNALIZABLE
    {
      unlikely_if (block->cblock.data_text == NULL) {
        unlikely_if (len > 0)
          FEreader_error("Not enough data while loading"
                         "binary file", in, 0);
      } else {
        cl_object v = si_deserialize(*(block->cblock.data_text));
        unlikely_if (v->vector.dim < len)
          FEreader_error("Not enough data while loading"
                         "binary file", in, 0);
        memcpy(VV, v->vector.self.t, perm_len * sizeof(cl_object));
        memcpy(VVtemp, v->vector.self.t + perm_len, temp_len * sizeof(cl_object));
      }
    }
#else
    in = make_data_stream(block->cblock.data_text);
    progv_list = ECL_SYM_VAL(env, ECL_SYM("SI::+ECL-SYNTAX-PROGV-LIST+",1778));
    bds_ndx = ecl_progv(env, ECL_CONS_CAR(progv_list),
                        ECL_CONS_CDR(progv_list));
    for (i = 0 ; i < len; i++) {
      x = ecl_read_object(in);
      if (x == OBJNULL)
        break;
      if (i < perm_len)
        VV[i] = x;
      else
        VVtemp[i-perm_len] = x;
    }
    if (!Null(ECL_SYM_VAL(env, ECL_SYM("SI::*SHARP-EQ-CONTEXT*",1032)))) {
      while (i--) {
        if (i < perm_len) {
          VV[i] = patch_sharp(env, VV[i]);
        } else {
          VVtemp[i-perm_len] = patch_sharp(env, VVtemp[i-perm_len]);
        }
      }
    }
    ecl_bds_unwind(env, bds_ndx);
    unlikely_if (i < len)
      FEreader_error("Not enough data while loading"
                     "binary file", in, 0);
    cl_close(1,in);
    in = OBJNULL;
#endif
  NO_DATA_LABEL:
    env->packages_to_be_created_p = ECL_NIL;

    assert(block->cblock.cfuns_size == 0 || VV != NULL);
    for (i = 0; i < block->cblock.cfuns_size; i++) {
      const struct ecl_cfunfixed *prototype = block->cblock.cfuns+i;
      cl_index fname_location = ecl_fixnum(prototype->block);
      cl_object fname = VV[fname_location];
      cl_index location = ecl_fixnum(prototype->name);
      cl_object position = prototype->file_position;
      int narg = prototype->narg;
      VV[location] = narg<0?
        ecl_make_cfun_va((cl_objectfn)prototype->entry,
                         fname, block, -narg - 1) :
        ecl_make_cfun((cl_objectfn_fixed)prototype->entry,
                      fname, block, narg);
      /* Add source file info */
      if (position != ecl_make_fixnum(-1)) {
        ecl_set_function_source_file_info(VV[location],
                                          block->cblock.source,
                                          position);
      }
    }
    /* Execute top-level code */
    (*entry_point)(OBJNULL);
    x = cl_set_difference(2, env->packages_to_be_created, old_eptbc);
    old_eptbc = env->packages_to_be_created;
    unlikely_if (!Null(x)) {
      CEerror(ECL_T,
              Null(ECL_CONS_CDR(x))?
              "Package ~A referenced in "
              "compiled file~&  ~A~&but has not been created":
              "The packages~&  ~A~&were referenced in "
              "compiled file~&  ~A~&but have not been created",
              2, x, block->cblock.name);
    }
    if (VVtemp) {
      block->cblock.temp_data = NULL;
      block->cblock.temp_data_size = 0;
      ecl_dealloc(VVtemp);
    }
    ecl_bds_unwind1(env);
  } ECL_UNWIND_PROTECT_THREAD_SAFE_EXIT {
    if (in != OBJNULL)
      cl_close(1,in);
    env->packages_to_be_created = old_eptbc;
    env->packages_to_be_created_p = ECL_NIL;
  } ECL_UNWIND_PROTECT_THREAD_SAFE_END;

  return block;
}
