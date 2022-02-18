#line 1 "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/src/c/load.d"
/* -*- Mode: C; c-basic-offset: 2; indent-tabs-mode: nil -*- */
/* vim: set filetype=c tabstop=2 shiftwidth=2 expandtab: */

/*
 * load.d - binary loader (contains also open_fasl_data)
 *
 * Copyright (c) 1990 Giuseppe Attardi
 * Copyright (c) 2001 Juan Jose Garcia Ripoll
 *
 * See file 'LICENSE' for the copyright details.
 *
 */

#include <ecl/ecl.h>
#include <ecl/ecl-inl.h>
#include <ecl/internal.h>

#ifdef ENABLE_DLOPEN
cl_object
si_load_binary(cl_object filename, cl_object verbose,
               cl_object print, cl_object external_format)
{
  const cl_env_ptr the_env = ecl_process_env();
  cl_object block;
  cl_object basename;
  cl_object init_prefix, prefix;
  cl_object output;

  /* We need the full pathname */
  filename = cl_truename(filename);

  /* Try to load shared object file */
  block = ecl_library_open(filename, 1);
  if (block->cblock.handle == NULL) {
    output = ecl_library_error(block);
    goto OUTPUT;
  }

  /* Fist try to call "init_CODE()" */
  init_prefix = _ecl_library_default_entry();
  block->cblock.entry =
    ecl_library_symbol(block, (char *)init_prefix->base_string.self, 0);
  if (block->cblock.entry != NULL)
    goto GO_ON;

  /* Next try to call "init_FILE()" where FILE is the file name */
  prefix = ecl_symbol_value(ECL_SYM("SI::*INIT-FUNCTION-PREFIX*",1024));
  init_prefix = _ecl_library_init_prefix();
  if (Null(prefix)) {
    prefix = init_prefix;
  } else {
    prefix = si_base_string_concatenate(3,
                                          init_prefix,
                                          prefix,
                                          ecl_make_constant_base_string("_",-1));
  }
  basename = cl_pathname_name(1,filename);
  basename = si_base_string_concatenate(2, prefix, cl_string_upcase(1, funcall(4, ECL_SYM("NSUBSTITUTE",601), ECL_CODE_CHAR('_'), ECL_CODE_CHAR('-'), basename)));
  block->cblock.entry = ecl_library_symbol(block, (char*)basename->base_string.self, 0);

  if (block->cblock.entry == NULL) {
    output = ecl_library_error(block);
    ecl_library_close(block);
    goto OUTPUT;
  }

 GO_ON:
  /* Finally, perform initialization */
  ecl_init_module(block, (void (*)(cl_object))(block->cblock.entry));
  output = ECL_NIL;
 OUTPUT:
  ecl_return1(the_env, output);
}
#endif /* !ENABLE_DLOPEN */

cl_object
si_load_source(cl_object source, cl_object verbose, cl_object print, cl_object external_format)
{
  cl_env_ptr the_env = ecl_process_env();
  cl_object x, strm;

  /* Source may be either a stream or a filename */
  if (ecl_t_of(source) != t_pathname && ecl_t_of(source) != t_base_string) {
    /* INV: if "source" is not a valid stream, file.d will complain */
    strm = source;
  }
  else {
    strm = ecl_open_stream(source, ecl_smm_input, ECL_NIL, ECL_NIL, 8,
                           ECL_STREAM_C_STREAM, external_format);
    if (Null(strm)) {
      {
#line 91
	const cl_env_ptr the_env = ecl_process_env();
#line 91
	#line 91
	cl_object __value0 = ECL_NIL;
#line 91
	the_env->nvalues = 1;
#line 91
	the_env->values[0] = __value0;
#line 91
	#line 91
	return __value0;
#line 91
}
;
    }
  }
  ECL_UNWIND_PROTECT_BEGIN(the_env) {
    cl_object form_index = ecl_make_fixnum(0);
    cl_object pathname = ECL_SYM_VAL(the_env, ECL_SYM("*LOAD-PATHNAME*",38));
    cl_object location = CONS(pathname, form_index);
    ecl_bds_bind(the_env, ECL_SYM("EXT::*SOURCE-LOCATION*",1202), location);
    for (;;) {
      form_index = ecl_file_position(strm);
      ECL_RPLACD(location, form_index);
      x = si_read_object_or_ignore(strm, OBJNULL);
      if (x == OBJNULL)
        break;
      if (the_env->nvalues) {
        si_eval_with_env(1, x);
        if (print != ECL_NIL) {
          cl_write(1, x);
          cl_terpri(0);
        }
      }
    }
    ecl_bds_unwind1(the_env);
  } ECL_UNWIND_PROTECT_THREAD_SAFE_EXIT {
    /* We do not want to come back here if close_stream fails,
       therefore, first we frs_pop() current jump point, then
       try to close the stream, and then jump to next catch
       point */
    if (strm != source)
      cl_close(3, strm, ECL_SYM(":ABORT",1217), ECL_SYM("T",1));
  } ECL_UNWIND_PROTECT_THREAD_SAFE_END;
  {
#line 122
	const cl_env_ptr the_env = ecl_process_env();
#line 122
	#line 122
	cl_object __value0 = ECL_NIL;
#line 122
	the_env->nvalues = 1;
#line 122
	the_env->values[0] = __value0;
#line 122
	#line 122
	return __value0;
#line 122
}
;
}


cl_object
si_load_bytecodes(cl_object source, cl_object verbose, cl_object print, cl_object external_format)
{
  cl_env_ptr env = ecl_process_env();
  cl_object forms, strm;
  cl_object old_eptbc = env->packages_to_be_created;

  /* Source may be either a stream or a filename */
  if (ecl_t_of(source) != t_pathname && ecl_t_of(source) != t_base_string) {
    /* INV: if "source" is not a valid stream, file.d will complain */
    strm = source;
  } else {
    strm = ecl_open_stream(source, ecl_smm_input, ECL_NIL, ECL_NIL, 8,
                           ECL_STREAM_C_STREAM, external_format);
    if (Null(strm)) {
      {
#line 141
	const cl_env_ptr the_env = ecl_process_env();
#line 141
	#line 141
	cl_object __value0 = ECL_NIL;
#line 141
	the_env->nvalues = 1;
#line 141
	the_env->values[0] = __value0;
#line 141
	#line 141
	return __value0;
#line 141
}
;
    }
  }
  ECL_UNWIND_PROTECT_BEGIN(env) {
    {
      cl_object progv_list = ECL_SYM_VAL(env, ECL_SYM("SI::+ECL-SYNTAX-PROGV-LIST+",1778));
      cl_index bds_ndx = ecl_progv(env, ECL_CONS_CAR(progv_list),
                                   ECL_CONS_CDR(progv_list));
      env->packages_to_be_created_p = ECL_T;
      forms = cl_read(1, strm);
      env->packages_to_be_created_p = ECL_NIL;
      ecl_bds_unwind(env, bds_ndx);
    }
    while (!Null(forms)) {
      if (ECL_LISTP(forms)) {
        cl_object x = ECL_CONS_CAR(forms);
        forms = ECL_CONS_CDR(forms);
        if (ecl_t_of(x) == t_bytecodes) {
          _ecl_funcall1(x);
          continue;
        }
      }
      FEerror("Corrupt bytecodes file ~S", 1, source);
    }
    {
      cl_object x;
      x = cl_set_difference(2, env->packages_to_be_created, old_eptbc);
      old_eptbc = env->packages_to_be_created;
      unlikely_if (!Null(x)) {
        CEerror(ECL_T,
                Null(ECL_CONS_CDR(x))?
                "Package ~A referenced in "
                "compiled file~&  ~A~&but has not been created":
                "The packages~&  ~A~&were referenced in "
                "compiled file~&  ~A~&but have not been created",
                2, x, source);
      }
    }
  } ECL_UNWIND_PROTECT_THREAD_SAFE_EXIT {
    /* We do not want to come back here if close_stream fails,
       therefore, first we frs_pop() current jump point, then
       try to close the stream, and then jump to next catch
       point */
    if (strm != source)
      cl_close(3, strm, ECL_SYM(":ABORT",1217), ECL_SYM("T",1));
  } ECL_UNWIND_PROTECT_THREAD_SAFE_END;
  {
#line 187
	const cl_env_ptr the_env = ecl_process_env();
#line 187
	#line 187
	cl_object __value0 = ECL_NIL;
#line 187
	the_env->nvalues = 1;
#line 187
	the_env->values[0] = __value0;
#line 187
	#line 187
	return __value0;
#line 187
}
;
}

#line 196
cl_object cl_load(cl_narg narg, cl_object source, ...)
{
#line 196

  bool not_a_filename = 0;
#line 199
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 199
	static cl_object KEYS[5] = {(cl_object)(cl_symbols+1353), (cl_object)(cl_symbols+1317), (cl_object)(cl_symbols+1268), (cl_object)(cl_symbols+1258), (cl_object)(cl_symbols+1332)};
	cl_object verbose;
	cl_object print;
	cl_object if_does_not_exist;
	cl_object external_format;
	cl_object search_list;
#line 199
	cl_object pathname;
#line 199
	cl_object pntype;
#line 199
	cl_object hooks;
#line 199
	cl_object filename;
#line 199
	cl_object function;
#line 199
	cl_object ok;
#line 199
	cl_object KEY_VARS[10];
#line 199
	ecl_va_list ARGS;
	ecl_va_start(ARGS, source, narg, 1);
#line 199
	if (ecl_unlikely(narg < 1)) FEwrong_num_arguments(ecl_make_fixnum(489));
#line 199
	cl_parse_key(ARGS, 5, KEYS, KEY_VARS, NULL, 0);
#line 199
	if (KEY_VARS[5]==ECL_NIL) {
#line 199
	  verbose = ecl_symbol_value(ECL_SYM("*LOAD-VERBOSE*",41));
	} else {
#line 199
	  verbose = KEY_VARS[0];
	}
#line 199
	if (KEY_VARS[6]==ECL_NIL) {
#line 199
	  print = ecl_symbol_value(ECL_SYM("*LOAD-PRINT*",39));
	} else {
#line 199
	  print = KEY_VARS[1];
	}
#line 199
	if (KEY_VARS[7]==ECL_NIL) {
#line 199
	  if_does_not_exist = ECL_SYM(":ERROR",1251);
	} else {
#line 199
	  if_does_not_exist = KEY_VARS[2];
	}
#line 199
	if (KEY_VARS[8]==ECL_NIL) {
#line 199
	  external_format = ECL_SYM(":DEFAULT",1237);
	} else {
#line 199
	  external_format = KEY_VARS[3];
	}
#line 199
	if (KEY_VARS[9]==ECL_NIL) {
#line 199
	  search_list = ecl_symbol_value(ECL_SYM("SI::*LOAD-SEARCH-LIST*",1027));
	} else {
#line 199
	  search_list = KEY_VARS[4];
	}
#line 199
	pathname = ECL_NIL;
#line 199
	pntype = ECL_NIL;
#line 199
	hooks = ECL_NIL;
#line 199
	filename = ECL_NIL;
#line 199
	function = ECL_NIL;
#line 199
	ok = ECL_NIL;
#line 199
  /* If source is a stream, read conventional lisp code from it */
  if (ecl_t_of(source) != t_pathname && !ecl_stringp(source)) {
    /* INV: if "source" is not a valid stream, file.d will complain */
    filename = source;
    function = ECL_NIL;
    not_a_filename = 1;
    goto NOT_A_FILENAME;
  }
  /* INV: coerce_to_file_pathname() creates a fresh new pathname object */
  source   = cl_merge_pathnames(1, source);
  pathname = coerce_to_file_pathname(source);
  pntype   = pathname->pathname.type;

  filename = ECL_NIL;
  hooks = ecl_symbol_value(ECL_SYM("EXT::*LOAD-HOOKS*",1026));
  if (Null(pathname->pathname.directory) &&
      Null(pathname->pathname.host) &&
      Null(pathname->pathname.device) &&
      !Null(search_list))
    {
      loop_for_in(search_list) {
        cl_object d = CAR(search_list);
        cl_object f = cl_merge_pathnames(2, pathname, d);
        cl_object ok = cl_load(11, f, ECL_SYM(":VERBOSE",1353), verbose,
                               ECL_SYM(":PRINT",1317), print,
                               ECL_SYM(":IF-DOES-NOT-EXIST",1268), ECL_NIL,
                               ECL_SYM(":EXTERNAL-FORMAT",1258), external_format,
                               ECL_SYM(":SEARCH-LIST",1332), ECL_NIL);
        if (!Null(ok)) {
          {
#line 228
	#line 228
	cl_object __value0 = ok;
#line 228
	the_env->nvalues = 1;
#line 228
	the_env->values[0] = __value0;
#line 228
	ecl_va_end(ARGS);
#line 228
	return __value0;
#line 228
}
;
        }
      } end_loop_for_in;
    }
  if (!Null(pntype) && (pntype != ECL_SYM(":WILD",1355))) {
    /* If filename already has an extension, make sure
       that the file exists */
    cl_object kind;
    filename = si_coerce_to_filename(pathname);
    kind = si_file_kind(filename, ECL_T);
    if (kind != ECL_SYM(":FILE",1260) && kind != ECL_SYM(":SPECIAL",1336)) {
      filename = ECL_NIL;
    } else {
      function = cl_cdr(ecl_assoc(pathname->pathname.type, hooks));
    }
  } else loop_for_in(hooks) {
      /* Otherwise try with known extensions until a matching
         file is found */
      cl_object kind;
      filename = pathname;
      filename->pathname.type = CAAR(hooks);
      function = CDAR(hooks);
      kind = si_file_kind(filename, ECL_T);
      if (kind == ECL_SYM(":FILE",1260) || kind == ECL_SYM(":SPECIAL",1336))
        break;
      else
        filename = ECL_NIL;
    } end_loop_for_in;
  if (Null(filename)) {
    if (Null(if_does_not_exist)) {
      {
#line 258
	#line 258
	cl_object __value0 = ECL_NIL;
#line 258
	the_env->nvalues = 1;
#line 258
	the_env->values[0] = __value0;
#line 258
	ecl_va_end(ARGS);
#line 258
	return __value0;
#line 258
}
;
    }
    else {
        FEcannot_open(source);
    }
  }
 NOT_A_FILENAME:
  if (verbose != ECL_NIL) {
    cl_format(3, ECL_T, ecl_make_constant_base_string("~&;;; Loading ~s~%",-1),
              filename);
  }
  ecl_bds_bind(the_env, ECL_SYM("*PACKAGE*",45), ecl_symbol_value(ECL_SYM("*PACKAGE*",45)));
  ecl_bds_bind(the_env, ECL_SYM("*READTABLE*",67), ecl_symbol_value(ECL_SYM("*READTABLE*",67)));
  ecl_bds_bind(the_env, ECL_SYM("*LOAD-PATHNAME*",38), not_a_filename? ECL_NIL : source);
  ecl_bds_bind(the_env, ECL_SYM("*LOAD-TRUENAME*",40),
               not_a_filename? ECL_NIL : (filename = cl_truename(filename)));
  if (!Null(function)) {
    ok = funcall(5, function, filename, verbose, print, external_format);
  } else {
#if 0 /* defined(ENABLE_DLOPEN) && !defined(ECL_MS_WINDOWS_HOST)*/
    /*
     * DISABLED BECAUSE OF SECURITY ISSUES!
     * In systems where we can do this, we try to load the file
     * as a binary. When it fails, we will revert to source
     * loading below. Is this safe? Well, it depends on whether
     * your op.sys. checks integrity of binary exectables or
     * just loads _anything_.
     */
    if (not_a_filename) {
      ok = ECL_T;
    } else {
      ok = si_load_binary(filename, verbose, print);
    }
    if (!Null(ok))
#endif
      ok = si_load_source(filename, verbose, print, external_format);
  }
  ecl_bds_unwind_n(the_env, 4);
  if (!Null(ok))
    FEerror("LOAD: Could not load file ~S (Error: ~S)",
            2, filename, ok);
  if (print != ECL_NIL) {
    cl_format(3, ECL_T, ecl_make_constant_base_string("~&;;; Loading ~s~%",-1),
              filename);
  }
  {
#line 303
	#line 303
	cl_object __value0 = filename;
#line 303
	the_env->nvalues = 1;
#line 303
	the_env->values[0] = __value0;
#line 303
	ecl_va_end(ARGS);
#line 303
	return __value0;
#line 303
}
;
}
