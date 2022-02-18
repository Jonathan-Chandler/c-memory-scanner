#line 1 "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/src/c/print.d"
/* -*- Mode: C; c-basic-offset: 2; indent-tabs-mode: nil -*- */
/* vim: set filetype=c tabstop=2 shiftwidth=2 expandtab: */

/*
 * print.d - print
 *
 * Copyright (c) 1984 Taiichi Yuasa and Masami Hagiya
 * Copyright (c) 1990 Giuseppe Attardi
 * Copyright (c) 2001 Juan Jose Garcia Ripoll
 *
 * See file 'LICENSE' for the copyright details.
 *
 */

#include <stdio.h>
#include <ecl/ecl.h>
#include <ecl/internal.h>

cl_object
_ecl_stream_or_default_output(cl_object stream)
{
  if (Null(stream))
    return ecl_symbol_value(ECL_SYM("*STANDARD-OUTPUT*",69));
  else if (stream == ECL_T)
    return ecl_symbol_value(ECL_SYM("*TERMINAL-IO*",70));
  return stream;
}

int
ecl_print_base(void)
{
  cl_object object = ecl_symbol_value(ECL_SYM("*PRINT-BASE*",47));
  cl_fixnum base;
  unlikely_if (!ECL_FIXNUMP(object) || (base = ecl_fixnum(object)) < 2 || base > 36) {
    ECL_SETQ(ecl_process_env(), ECL_SYM("*PRINT-BASE*",47), ecl_make_fixnum(10));
    FEerror("The value of *PRINT-BASE*~%  ~S~%"
            "is not of the expected type (INTEGER 2 36)", 1, object);
  }
  return base;
}

cl_fixnum
ecl_print_level(void)
{
  cl_object object = ecl_symbol_value(ECL_SYM("*PRINT-LEVEL*",53));
  cl_fixnum level;
  if (object == ECL_NIL) {
    level = MOST_POSITIVE_FIXNUM;
  } else if (ECL_FIXNUMP(object)) {
    level = ecl_fixnum(object);
    if (level < 0) {
    ERROR:  ECL_SETQ(ecl_process_env(), ECL_SYM("*PRINT-LEVEL*",53), ECL_NIL);
      FEerror("The value of *PRINT-LEVEL*~%  ~S~%"
              "is not of the expected type (OR NULL (INTEGER 0 *))",
              1, object);
    }
  } else if (ecl_unlikely(!ECL_BIGNUMP(object))) {
    goto ERROR;
  } else {
    level = MOST_POSITIVE_FIXNUM;
  }
  return level;
}

cl_fixnum
ecl_print_length(void)
{
  cl_object object = ecl_symbol_value(ECL_SYM("*PRINT-LENGTH*",52));
  cl_fixnum length;
  if (object == ECL_NIL) {
    length = MOST_POSITIVE_FIXNUM;
  } else if (ECL_FIXNUMP(object)) {
    length = ecl_fixnum(object);
    unlikely_if (length < 0) {
    ERROR:  ECL_SETQ(ecl_process_env(), ECL_SYM("*PRINT-LENGTH*",52), ECL_NIL);
      FEerror("The value of *PRINT-LENGTH*~%  ~S~%"
              "is not of the expected type (OR NULL (INTEGER 0 *))",
              1, object);
    }
  } else if (ecl_unlikely(!ECL_BIGNUMP(object))) {
    goto ERROR;
  } else {
    length = MOST_POSITIVE_FIXNUM;
  }
  return length;
}

bool
ecl_print_radix(void)
{
  return ecl_symbol_value(ECL_SYM("*PRINT-RADIX*",58)) != ECL_NIL;
}

cl_object
ecl_print_case(void)
{
  cl_object output = ecl_symbol_value(ECL_SYM("*PRINT-CASE*",48));
  unlikely_if (output != ECL_SYM(":UPCASE",1350) &&
               output != ECL_SYM(":DOWNCASE",1245) &&
               output != ECL_SYM(":CAPITALIZE",1225))
    {
      ECL_SETQ(ecl_process_env(), ECL_SYM("*PRINT-CASE*",48), ECL_SYM(":DOWNCASE",1245));
      FEerror("The value of *PRINT-CASE*~%  ~S~%"
              "is not of the expected type "
              "(MEMBER :UPCASE :DOWNCASE :CAPITALIZE)", 1, output);
    }
  return output;
}

bool
ecl_print_gensym(void)
{
  return ecl_symbol_value(ECL_SYM("*PRINT-GENSYM*",51)) != ECL_NIL;
}

bool
ecl_print_array(void)
{
  return ecl_symbol_value(ECL_SYM("*PRINT-ARRAY*",46)) != ECL_NIL;
}

bool
ecl_print_readably(void)
{
  return ecl_symbol_value(ECL_SYM("*PRINT-READABLY*",59)) != ECL_NIL;
}

bool
ecl_print_escape(void)
{
  return ecl_symbol_value(ECL_SYM("*PRINT-ESCAPE*",50)) != ECL_NIL;
}

bool
ecl_print_circle(void)
{
  return ecl_symbol_value(ECL_SYM("*PRINT-CIRCLE*",49)) != ECL_NIL;
}

#line 156
cl_object cl_write(cl_narg narg, cl_object x, ...)
{
#line 156

  #line 158
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 158
	static cl_object KEYS[16] = {(cl_object)(cl_symbols+1340), (cl_object)(cl_symbols+1221), (cl_object)(cl_symbols+1223), (cl_object)(cl_symbols+1227), (cl_object)(cl_symbols+1228), (cl_object)(cl_symbols+1252), (cl_object)(cl_symbols+1265), (cl_object)(cl_symbols+1289), (cl_object)(cl_symbols+1290), (cl_object)(cl_symbols+1291), (cl_object)(cl_symbols+1299), (cl_object)(cl_symbols+1313), (cl_object)(cl_symbols+1316), (cl_object)(cl_symbols+1322), (cl_object)(cl_symbols+1323), (cl_object)(cl_symbols+1330)};
	cl_object strm;
	cl_object array;
	cl_object base;
	cl_object cas;
	cl_object circle;
	cl_object escape;
	cl_object gensym;
	cl_object length;
	cl_object level;
	cl_object lines;
	cl_object miser_width;
	cl_object pprint_dispatch;
	cl_object pretty;
	cl_object radix;
	cl_object readably;
	cl_object right_margin;
#line 158
	cl_object KEY_VARS[32];
#line 158
	ecl_va_list ARGS;
	ecl_va_start(ARGS, x, narg, 1);
#line 158
	if (ecl_unlikely(narg < 1)) FEwrong_num_arguments(ecl_make_fixnum(919));
#line 158
	cl_parse_key(ARGS, 16, KEYS, KEY_VARS, NULL, 0);
#line 158
	if (KEY_VARS[16]==ECL_NIL) {
#line 158
	  strm = ECL_NIL;
	} else {
#line 158
	  strm = KEY_VARS[0];
	}
#line 158
	if (KEY_VARS[17]==ECL_NIL) {
#line 158
	  array = ecl_symbol_value(ECL_SYM("*PRINT-ARRAY*",46));
	} else {
#line 158
	  array = KEY_VARS[1];
	}
#line 158
	if (KEY_VARS[18]==ECL_NIL) {
#line 158
	  base = ecl_symbol_value(ECL_SYM("*PRINT-BASE*",47));
	} else {
#line 158
	  base = KEY_VARS[2];
	}
#line 158
	if (KEY_VARS[19]==ECL_NIL) {
#line 158
	  cas = ecl_symbol_value(ECL_SYM("*PRINT-CASE*",48));
	} else {
#line 158
	  cas = KEY_VARS[3];
	}
#line 158
	if (KEY_VARS[20]==ECL_NIL) {
#line 158
	  circle = ecl_symbol_value(ECL_SYM("*PRINT-CIRCLE*",49));
	} else {
#line 158
	  circle = KEY_VARS[4];
	}
#line 158
	if (KEY_VARS[21]==ECL_NIL) {
#line 158
	  escape = ecl_symbol_value(ECL_SYM("*PRINT-ESCAPE*",50));
	} else {
#line 158
	  escape = KEY_VARS[5];
	}
#line 158
	if (KEY_VARS[22]==ECL_NIL) {
#line 158
	  gensym = ecl_symbol_value(ECL_SYM("*PRINT-GENSYM*",51));
	} else {
#line 158
	  gensym = KEY_VARS[6];
	}
#line 158
	if (KEY_VARS[23]==ECL_NIL) {
#line 158
	  length = ecl_symbol_value(ECL_SYM("*PRINT-LENGTH*",52));
	} else {
#line 158
	  length = KEY_VARS[7];
	}
#line 158
	if (KEY_VARS[24]==ECL_NIL) {
#line 158
	  level = ecl_symbol_value(ECL_SYM("*PRINT-LEVEL*",53));
	} else {
#line 158
	  level = KEY_VARS[8];
	}
#line 158
	if (KEY_VARS[25]==ECL_NIL) {
#line 158
	  lines = ecl_symbol_value(ECL_SYM("*PRINT-LINES*",54));
	} else {
#line 158
	  lines = KEY_VARS[9];
	}
#line 158
	if (KEY_VARS[26]==ECL_NIL) {
#line 158
	  miser_width = ecl_symbol_value(ECL_SYM("*PRINT-MISER-WIDTH*",55));
	} else {
#line 158
	  miser_width = KEY_VARS[10];
	}
#line 158
	if (KEY_VARS[27]==ECL_NIL) {
#line 158
	  pprint_dispatch = ecl_symbol_value(ECL_SYM("*PRINT-PPRINT-DISPATCH*",56));
	} else {
#line 158
	  pprint_dispatch = KEY_VARS[11];
	}
#line 158
	if (KEY_VARS[28]==ECL_NIL) {
#line 158
	  pretty = ecl_symbol_value(ECL_SYM("*PRINT-PRETTY*",57));
	} else {
#line 158
	  pretty = KEY_VARS[12];
	}
#line 158
	if (KEY_VARS[29]==ECL_NIL) {
#line 158
	  radix = ecl_symbol_value(ECL_SYM("*PRINT-RADIX*",58));
	} else {
#line 158
	  radix = KEY_VARS[13];
	}
#line 158
	if (KEY_VARS[30]==ECL_NIL) {
#line 158
	  readably = ecl_symbol_value(ECL_SYM("*PRINT-READABLY*",59));
	} else {
#line 158
	  readably = KEY_VARS[14];
	}
#line 158
	if (KEY_VARS[31]==ECL_NIL) {
#line 158
	  right_margin = ecl_symbol_value(ECL_SYM("*PRINT-RIGHT-MARGIN*",60));
	} else {
#line 158
	  right_margin = KEY_VARS[15];
	}
#line 158
  ecl_bds_bind(the_env, ECL_SYM("*PRINT-ARRAY*",46), array);
  ecl_bds_bind(the_env, ECL_SYM("*PRINT-BASE*",47), base);
  ecl_bds_bind(the_env, ECL_SYM("*PRINT-CASE*",48), cas);
  ecl_bds_bind(the_env, ECL_SYM("*PRINT-CIRCLE*",49), circle);
  ecl_bds_bind(the_env, ECL_SYM("*PRINT-ESCAPE*",50), escape);
  ecl_bds_bind(the_env, ECL_SYM("*PRINT-GENSYM*",51), gensym);
  ecl_bds_bind(the_env, ECL_SYM("*PRINT-LEVEL*",53), level);
  ecl_bds_bind(the_env, ECL_SYM("*PRINT-LENGTH*",52), length);
  ecl_bds_bind(the_env, ECL_SYM("*PRINT-LINES*",54), lines);
  ecl_bds_bind(the_env, ECL_SYM("*PRINT-MISER-WIDTH*",55), miser_width);
  ecl_bds_bind(the_env, ECL_SYM("*PRINT-PPRINT-DISPATCH*",56), pprint_dispatch);
  ecl_bds_bind(the_env, ECL_SYM("*PRINT-PRETTY*",57), pretty);
  ecl_bds_bind(the_env, ECL_SYM("*PRINT-RADIX*",58), radix);
  ecl_bds_bind(the_env, ECL_SYM("*PRINT-READABLY*",59), readably);
  ecl_bds_bind(the_env, ECL_SYM("*PRINT-RIGHT-MARGIN*",60), right_margin);

  strm = _ecl_stream_or_default_output(strm);
  si_write_object(x, strm);
  ecl_force_output(strm);

  ecl_bds_unwind_n(the_env, 15);
  {
#line 179
	#line 179
	cl_object __value0 = x;
#line 179
	the_env->nvalues = 1;
#line 179
	the_env->values[0] = __value0;
#line 179
	ecl_va_end(ARGS);
#line 179
	return __value0;
#line 179
}
;
  }

#line 182
cl_object cl_prin1(cl_narg narg, cl_object obj, ...)
{
#line 182

  #line 184
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 184
	cl_object strm;
#line 184
	va_list ARGS;
	va_start(ARGS, obj);
#line 184
	if (ecl_unlikely(narg < 1|| narg > 2)) FEwrong_num_arguments(ecl_make_fixnum(660));
#line 184
	if (narg > 1) {
#line 184
		strm = va_arg(ARGS,cl_object);
#line 184
	} else {
#line 184
		strm = ECL_NIL;
#line 184
	}
#line 184
  ecl_prin1(obj, strm);
  {
#line 185
	#line 185
	cl_object __value0 = obj;
#line 185
	the_env->nvalues = 1;
#line 185
	the_env->values[0] = __value0;
#line 185
	va_end(ARGS);
#line 185
	return __value0;
#line 185
}
;
  }

#line 188
cl_object cl_print(cl_narg narg, cl_object obj, ...)
{
#line 188

  #line 190
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 190
	cl_object strm;
#line 190
	va_list ARGS;
	va_start(ARGS, obj);
#line 190
	if (ecl_unlikely(narg < 1|| narg > 2)) FEwrong_num_arguments(ecl_make_fixnum(664));
#line 190
	if (narg > 1) {
#line 190
		strm = va_arg(ARGS,cl_object);
#line 190
	} else {
#line 190
		strm = ECL_NIL;
#line 190
	}
#line 190
  ecl_print(obj, strm);
  {
#line 191
	#line 191
	cl_object __value0 = obj;
#line 191
	the_env->nvalues = 1;
#line 191
	the_env->values[0] = __value0;
#line 191
	va_end(ARGS);
#line 191
	return __value0;
#line 191
}
;
  }

#line 194
cl_object cl_pprint(cl_narg narg, cl_object obj, ...)
{
#line 194

  #line 196
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 196
	cl_object strm;
#line 196
	va_list ARGS;
	va_start(ARGS, obj);
#line 196
	if (ecl_unlikely(narg < 1|| narg > 2)) FEwrong_num_arguments(ecl_make_fixnum(649));
#line 196
	if (narg > 1) {
#line 196
		strm = va_arg(ARGS,cl_object);
#line 196
	} else {
#line 196
		strm = ECL_NIL;
#line 196
	}
#line 196
  strm = _ecl_stream_or_default_output(strm);
  ecl_bds_bind(the_env, ECL_SYM("*PRINT-ESCAPE*",50), ECL_T);
  ecl_bds_bind(the_env, ECL_SYM("*PRINT-PRETTY*",57), ECL_T);
  ecl_write_char('\n', strm);
  si_write_object(obj, strm);
  ecl_force_output(strm);
  ecl_bds_unwind_n(the_env, 2);
  {
the_env->nvalues = 0; return ECL_NIL;
#line 203
}
;
  }

#line 206
cl_object cl_princ(cl_narg narg, cl_object obj, ...)
{
#line 206

  #line 208
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 208
	cl_object strm;
#line 208
	va_list ARGS;
	va_start(ARGS, obj);
#line 208
	if (ecl_unlikely(narg < 1|| narg > 2)) FEwrong_num_arguments(ecl_make_fixnum(662));
#line 208
	if (narg > 1) {
#line 208
		strm = va_arg(ARGS,cl_object);
#line 208
	} else {
#line 208
		strm = ECL_NIL;
#line 208
	}
#line 208
  ecl_princ(obj, strm);
  {
#line 209
	#line 209
	cl_object __value0 = obj;
#line 209
	the_env->nvalues = 1;
#line 209
	the_env->values[0] = __value0;
#line 209
	va_end(ARGS);
#line 209
	return __value0;
#line 209
}
;
  }

#line 212
cl_object cl_write_char(cl_narg narg, cl_object c, ...)
{
#line 212

  #line 214
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 214
	cl_object strm;
#line 214
	va_list ARGS;
	va_start(ARGS, c);
#line 214
	if (ecl_unlikely(narg < 1|| narg > 2)) FEwrong_num_arguments(ecl_make_fixnum(921));
#line 214
	if (narg > 1) {
#line 214
		strm = va_arg(ARGS,cl_object);
#line 214
	} else {
#line 214
		strm = ECL_NIL;
#line 214
	}
#line 214
  /* INV: ecl_char_code() checks the type of `c' */
  strm = _ecl_stream_or_default_output(strm);
  c = ECL_CODE_CHAR(ecl_write_char(ecl_char_code(c), strm));
  {
#line 217
	#line 217
	cl_object __value0 = c;
#line 217
	the_env->nvalues = 1;
#line 217
	the_env->values[0] = __value0;
#line 217
	va_end(ARGS);
#line 217
	return __value0;
#line 217
}
;
  }

#line 220
cl_object cl_write_string(cl_narg narg, cl_object strng, ...)
{
#line 220

  #line 222
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 222
	cl_object strm;
#line 222
	static cl_object KEYS[2] = {(cl_object)(cl_symbols+1337), (cl_object)(cl_symbols+1247)};
	cl_object start;
	cl_object end;
#line 222
	cl_object KEY_VARS[4];
#line 222
	ecl_va_list ARGS;
	ecl_va_start(ARGS, strng, narg, 1);
#line 222
	if (ecl_unlikely(narg < 1)) FEwrong_num_arguments(ecl_make_fixnum(924));
#line 222
	if (narg > 1) {
#line 222
		strm = ecl_va_arg(ARGS);
#line 222
	} else {
#line 222
		strm = ECL_NIL;
#line 222
	}
#line 222
	cl_parse_key(ARGS, 2, KEYS, KEY_VARS, NULL, 0);
#line 222
	if (KEY_VARS[2]==ECL_NIL) {
#line 222
	  start = ecl_make_fixnum(0);
	} else {
#line 222
	  start = KEY_VARS[0];
	}
#line 222
	if (KEY_VARS[3]==ECL_NIL) {
#line 222
	  end = ECL_NIL;
	} else {
#line 222
	  end = KEY_VARS[1];
	}
#line 222
  unlikely_if (!ECL_STRINGP(strng))
    FEwrong_type_nth_arg(ecl_make_fixnum(/*WRITE-STRING*/924), 1, strng, ecl_make_fixnum(/*STRING*/807));
  strm = _ecl_stream_or_default_output(strm);
  /* Optimization: directly call stream-write-string for CLOS streams */
#ifdef ECL_CLOS_STREAMS
  if (!ECL_ANSI_STREAM_P(strm))
    _ecl_funcall5(ECL_SYM("GRAY::STREAM-WRITE-STRING",1700), strm, strng, start, end);
  else
#endif
    si_do_write_sequence(strng, strm, start, end);
  {
#line 232
	#line 232
	cl_object __value0 = strng;
#line 232
	the_env->nvalues = 1;
#line 232
	the_env->values[0] = __value0;
#line 232
	ecl_va_end(ARGS);
#line 232
	return __value0;
#line 232
}
;
  }

#line 235
cl_object cl_write_line(cl_narg narg, cl_object strng, ...)
{
#line 235

  #line 237
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 237
	cl_object strm;
#line 237
	static cl_object KEYS[2] = {(cl_object)(cl_symbols+1337), (cl_object)(cl_symbols+1247)};
	cl_object start;
	cl_object end;
#line 237
	cl_object KEY_VARS[4];
#line 237
	ecl_va_list ARGS;
	ecl_va_start(ARGS, strng, narg, 1);
#line 237
	if (ecl_unlikely(narg < 1)) FEwrong_num_arguments(ecl_make_fixnum(922));
#line 237
	if (narg > 1) {
#line 237
		strm = ecl_va_arg(ARGS);
#line 237
	} else {
#line 237
		strm = ECL_NIL;
#line 237
	}
#line 237
	cl_parse_key(ARGS, 2, KEYS, KEY_VARS, NULL, 0);
#line 237
	if (KEY_VARS[2]==ECL_NIL) {
#line 237
	  start = ecl_make_fixnum(0);
	} else {
#line 237
	  start = KEY_VARS[0];
	}
#line 237
	if (KEY_VARS[3]==ECL_NIL) {
#line 237
	  end = ECL_NIL;
	} else {
#line 237
	  end = KEY_VARS[1];
	}
#line 237
  unlikely_if (!ECL_STRINGP(strng))
    FEwrong_type_nth_arg(ecl_make_fixnum(/*WRITE-LINE*/922), 1, strng, ecl_make_fixnum(/*STRING*/807));
  strm = _ecl_stream_or_default_output(strm);
  /* Optimization: directly call stream-write-string for CLOS streams */
#ifdef ECL_CLOS_STREAMS
  if (!ECL_ANSI_STREAM_P(strm))
    _ecl_funcall5(ECL_SYM("GRAY::STREAM-WRITE-STRING",1700), strm, strng,
                  start, end);
  else
#endif
    si_do_write_sequence(strng, strm, start, end);
  ecl_terpri(strm);
  {
#line 249
	#line 249
	cl_object __value0 = strng;
#line 249
	the_env->nvalues = 1;
#line 249
	the_env->values[0] = __value0;
#line 249
	ecl_va_end(ARGS);
#line 249
	return __value0;
#line 249
}
;
  }

#line 252
cl_object cl_terpri(cl_narg narg, ...)
{
#line 252

  #line 254
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 254
	cl_object strm;
#line 254
	va_list ARGS;
	va_start(ARGS, narg);
#line 254
	if (ecl_unlikely(narg < 0|| narg > 1)) FEwrong_num_arguments(ecl_make_fixnum(857));
#line 254
	if (narg > 0) {
#line 254
		strm = va_arg(ARGS,cl_object);
#line 254
	} else {
#line 254
		strm = ECL_NIL;
#line 254
	}
#line 254
  ecl_terpri(strm);
  {
#line 255
	#line 255
	cl_object __value0 = ECL_NIL;
#line 255
	the_env->nvalues = 1;
#line 255
	the_env->values[0] = __value0;
#line 255
	va_end(ARGS);
#line 255
	return __value0;
#line 255
}
;
  }

#line 258
cl_object cl_fresh_line(cl_narg narg, ...)
{
#line 258

  #line 260
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 260
	cl_object strm;
#line 260
	va_list ARGS;
	va_start(ARGS, narg);
#line 260
	if (ecl_unlikely(narg < 0|| narg > 1)) FEwrong_num_arguments(ecl_make_fixnum(392));
#line 260
	if (narg > 0) {
#line 260
		strm = va_arg(ARGS,cl_object);
#line 260
	} else {
#line 260
		strm = ECL_NIL;
#line 260
	}
#line 260
  strm = _ecl_stream_or_default_output(strm);
#ifdef ECL_CLOS_STREAMS
  if (!ECL_ANSI_STREAM_P(strm)) {
    return _ecl_funcall2(ECL_SYM("GRAY::STREAM-FRESH-LINE",1684), strm);
  }
#endif
  if (ecl_file_column(strm) == 0) {
    {
#line 267
	#line 267
	cl_object __value0 = ECL_NIL;
#line 267
	the_env->nvalues = 1;
#line 267
	the_env->values[0] = __value0;
#line 267
	va_end(ARGS);
#line 267
	return __value0;
#line 267
}
;
  }
  ecl_write_char('\n', strm);
  ecl_force_output(strm);
  {
#line 271
	#line 271
	cl_object __value0 = ECL_T;
#line 271
	the_env->nvalues = 1;
#line 271
	the_env->values[0] = __value0;
#line 271
	va_end(ARGS);
#line 271
	return __value0;
#line 271
}
;
  }

#line 274
cl_object cl_finish_output(cl_narg narg, ...)
{
#line 274

  #line 276
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 276
	cl_object strm;
#line 276
	va_list ARGS;
	va_start(ARGS, narg);
#line 276
	if (ecl_unlikely(narg < 0|| narg > 1)) FEwrong_num_arguments(ecl_make_fixnum(372));
#line 276
	if (narg > 0) {
#line 276
		strm = va_arg(ARGS,cl_object);
#line 276
	} else {
#line 276
		strm = ECL_NIL;
#line 276
	}
#line 276
  strm = _ecl_stream_or_default_output(strm);
#ifdef ECL_CLOS_STREAMS
  if (!ECL_ANSI_STREAM_P(strm)) {
    return _ecl_funcall2(ECL_SYM("GRAY::STREAM-FINISH-OUTPUT",1682), strm);
  }
#endif
  ecl_force_output(strm);
  {
#line 283
	#line 283
	cl_object __value0 = ECL_NIL;
#line 283
	the_env->nvalues = 1;
#line 283
	the_env->values[0] = __value0;
#line 283
	va_end(ARGS);
#line 283
	return __value0;
#line 283
}
;
  }

#line 286
cl_object cl_force_output(cl_narg narg, ...)
{
#line 286

  #line 288
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 288
	cl_object strm;
#line 288
	va_list ARGS;
	va_start(ARGS, narg);
#line 288
	if (ecl_unlikely(narg < 0|| narg > 1)) FEwrong_num_arguments(ecl_make_fixnum(388));
#line 288
	if (narg > 0) {
#line 288
		strm = va_arg(ARGS,cl_object);
#line 288
	} else {
#line 288
		strm = ECL_NIL;
#line 288
	}
#line 288
  strm = _ecl_stream_or_default_output(strm);
  ecl_force_output(strm);
  {
#line 290
	#line 290
	cl_object __value0 = ECL_NIL;
#line 290
	the_env->nvalues = 1;
#line 290
	the_env->values[0] = __value0;
#line 290
	va_end(ARGS);
#line 290
	return __value0;
#line 290
}
;
  }

#line 293
cl_object cl_clear_output(cl_narg narg, ...)
{
#line 293

  #line 295
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 295
	cl_object strm;
#line 295
	va_list ARGS;
	va_start(ARGS, narg);
#line 295
	if (ecl_unlikely(narg < 0|| narg > 1)) FEwrong_num_arguments(ecl_make_fixnum(229));
#line 295
	if (narg > 0) {
#line 295
		strm = va_arg(ARGS,cl_object);
#line 295
	} else {
#line 295
		strm = ECL_NIL;
#line 295
	}
#line 295
  strm = _ecl_stream_or_default_output(strm);
  ecl_clear_output(strm);
  {
#line 297
	#line 297
	cl_object __value0 = ECL_NIL;
#line 297
	the_env->nvalues = 1;
#line 297
	the_env->values[0] = __value0;
#line 297
	va_end(ARGS);
#line 297
	return __value0;
#line 297
}
;
  }

cl_object
cl_write_byte(cl_object integer, cl_object binary_output_stream)
{
  ecl_write_byte(integer, binary_output_stream);
  {
#line 304
	const cl_env_ptr the_env = ecl_process_env();
#line 304
	#line 304
	cl_object __value0 = integer;
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
cl_object cl_write_sequence(cl_narg narg, cl_object sequence, cl_object stream, ...)
{
#line 307

  #line 309
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 309
	static cl_object KEYS[2] = {(cl_object)(cl_symbols+1337), (cl_object)(cl_symbols+1247)};
	cl_object start;
	cl_object end;
#line 309
	cl_object KEY_VARS[4];
#line 309
	ecl_va_list ARGS;
	ecl_va_start(ARGS, stream, narg, 2);
#line 309
	if (ecl_unlikely(narg < 2)) FEwrong_num_arguments(ecl_make_fixnum(923));
#line 309
	cl_parse_key(ARGS, 2, KEYS, KEY_VARS, NULL, 0);
#line 309
	if (KEY_VARS[2]==ECL_NIL) {
#line 309
	  start = ecl_make_fixnum(0);
	} else {
#line 309
	  start = KEY_VARS[0];
	}
#line 309
	if (KEY_VARS[3]==ECL_NIL) {
#line 309
	  end = ECL_NIL;
	} else {
#line 309
	  end = KEY_VARS[1];
	}
#line 309
#ifdef ECL_CLOS_STREAMS
  if (!ECL_ANSI_STREAM_P(stream)) {
    return _ecl_funcall5(ECL_SYM("GRAY::STREAM-WRITE-SEQUENCE",1699),
                         stream, sequence, start, end);
  } else
#endif
    return si_do_write_sequence(sequence, stream, start, end);
  }

cl_object
ecl_princ(cl_object obj, cl_object strm)
{
  const cl_env_ptr the_env = ecl_process_env();
  strm = _ecl_stream_or_default_output(strm);
  ecl_bds_bind(the_env, ECL_SYM("*PRINT-ESCAPE*",50), ECL_NIL);
  ecl_bds_bind(the_env, ECL_SYM("*PRINT-READABLY*",59), ECL_NIL);
  si_write_object(obj, strm);
  ecl_bds_unwind_n(the_env, 2);
  return obj;
}

cl_object
ecl_prin1(cl_object obj, cl_object strm)
{
  const cl_env_ptr the_env = ecl_process_env();
  strm = _ecl_stream_or_default_output(strm);
  ecl_bds_bind(the_env, ECL_SYM("*PRINT-ESCAPE*",50), ECL_T);
  si_write_object(obj, strm);
  ecl_force_output(strm);
  ecl_bds_unwind1(the_env);
  return obj;
}

cl_object
ecl_print(cl_object obj, cl_object strm)
{
  strm = _ecl_stream_or_default_output(strm);
  ecl_terpri(strm);
  ecl_prin1(obj, strm);
  ecl_princ_char(' ', strm);
  return obj;
}

cl_object
ecl_terpri(cl_object strm)
{
  strm = _ecl_stream_or_default_output(strm);
#ifdef ECL_CLOS_STREAMS
  if (!ECL_ANSI_STREAM_P(strm)) {
    return _ecl_funcall2(ECL_SYM("GRAY::STREAM-TERPRI",1695), strm);
  }
#endif
  ecl_write_char('\n', strm);
  ecl_force_output(strm);
  return(ECL_NIL);
}

void
ecl_write_string(cl_object strng, cl_object strm)
{
  cl_write_string(2, strng, strm);
  ecl_force_output(strm);
}

/*
  THE ULTRA-SPECIAL-DINNER-SERVICE OPTIMIZATION
*/
void
ecl_princ_str(const char *s, cl_object strm)
{
  strm = _ecl_stream_or_default_output(strm);
  writestr_stream(s, strm);
}

int
ecl_princ_char(int c, cl_object strm)
{
  strm = _ecl_stream_or_default_output(strm);
  ecl_write_char(c, strm);
  if (c == '\n') {
    ecl_force_output(strm);
  }
  return c;
}
