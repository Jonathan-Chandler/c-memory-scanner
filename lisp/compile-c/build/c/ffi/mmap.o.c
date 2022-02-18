#line 1 "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/src/c/ffi/mmap.d"
/* -*- Mode: C; c-basic-offset: 2; indent-tabs-mode: nil -*- */
/* vim: set filetype=c tabstop=2 shiftwidth=2 expandtab: */

/*
 * mmap.d - mapping of binary files
 *
 * Copyright (c) 2011 Juan Jose Garcia Ripoll
 *
 * See file 'LICENSE' for the copyright details.
 *
 */

#include <ecl/ecl.h>
#ifdef HAVE_SYS_MMAN_H
# include <sys/mman.h>
#endif
#include <ecl/ecl-inl.h>
#include <ecl/internal.h>

#line 28
cl_object si_mmap(cl_narg narg, cl_object filename, ...)
{
#line 28

#line 30
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 30
	static cl_object KEYS[7] = {(cl_object)(cl_symbols+1289), (cl_object)(cl_symbols+1306), (cl_object)(cl_symbols+1240), (cl_object)(cl_symbols+1246), (cl_object)(cl_symbols+1270), (cl_object)(cl_symbols+1268), (cl_object)(cl_symbols+1258)};
	cl_object length;
	cl_object offset;
	cl_object direction;
	cl_object element_type;
	cl_object if_exists;
	cl_object if_does_not_exist;
	cl_object external_format;
#line 30
	cl_object KEY_VARS[14];
#line 30
	ecl_va_list ARGS;
	ecl_va_start(ARGS, filename, narg, 1);
#line 30
	if (ecl_unlikely(narg < 1)) FEwrong_num_arguments(ecl_make_fixnum(1925));
#line 30
	cl_parse_key(ARGS, 7, KEYS, KEY_VARS, NULL, 0);
#line 30
	if (KEY_VARS[7]==ECL_NIL) {
#line 30
	  length = ECL_NIL;
	} else {
#line 30
	  length = KEY_VARS[0];
	}
#line 30
	if (KEY_VARS[8]==ECL_NIL) {
#line 30
	  offset = ecl_make_fixnum(0);
	} else {
#line 30
	  offset = KEY_VARS[1];
	}
#line 30
	if (KEY_VARS[9]==ECL_NIL) {
#line 30
	  direction = ECL_SYM(":INPUT",1280);
	} else {
#line 30
	  direction = KEY_VARS[2];
	}
#line 30
	if (KEY_VARS[10]==ECL_NIL) {
#line 30
	  element_type = ECL_SYM("BASE-CHAR",122);
	} else {
#line 30
	  element_type = KEY_VARS[3];
	}
#line 30
	if (KEY_VARS[11]==ECL_NIL) {
#line 30
	  if_exists = ECL_SYM(":NEW-VERSION",1302);
	} else {
#line 30
	  if_exists = KEY_VARS[4];
	}
#line 30
	if (KEY_VARS[12]==ECL_NIL) {
#line 30
	  if_does_not_exist = ECL_SYM(":ERROR",1251);
	} else {
#line 30
	  if_does_not_exist = KEY_VARS[5];
	}
#line 30
	if (KEY_VARS[13]==ECL_NIL) {
#line 30
	  external_format = ECL_SYM(":DEFAULT",1237);
	} else {
#line 30
	  external_format = KEY_VARS[6];
	}
#line 30
#ifdef HAVE_SYS_MMAN_H
  {
    cl_object output, stream;
    int c_prot, c_flags, fd;
    size_t len;
    void *pa;
    if (direction == ECL_SYM(":INPUT",1280))
      c_prot = PROT_READ;
    else if (direction == ECL_SYM(":OUTPUT",1309))
      c_prot = PROT_WRITE;
    else if (direction == ECL_SYM(":IO",1286))
      c_prot = PROT_READ | PROT_WRITE;
    else
      c_prot = PROT_NONE;
    if (Null(filename)) {
      c_flags = MAP_ANON | MAP_PRIVATE;
      fd = -1;
      len = ecl_to_unsigned_integer(length);
      stream = ECL_NIL;
    } else {
      c_flags = MAP_SHARED;
      stream = cl_open(13, filename,
                       ECL_SYM(":DIRECTION",1240), direction,
                       ECL_SYM(":ELEMENT-TYPE",1246), element_type,
                       ECL_SYM(":IF-EXISTS",1270), if_exists,
                       ECL_SYM(":IF-DOES-NOT-EXIST",1268), if_does_not_exist,
                       ECL_SYM(":EXTERNAL-FORMAT",1258), external_format,
                       ECL_SYM(":CSTREAM",1352), ECL_NIL);
      fd = ecl_to_int(si_file_stream_fd(stream));
      if (Null(length))
        len = ecl_to_unsigned_integer(ecl_file_length(stream));
      else
        len = ecl_to_unsigned_integer(length);
    }
    output = si_make_vector(element_type, ecl_make_fixnum(0), ECL_NIL,
                            ECL_NIL, ECL_NIL, ECL_NIL);
    pa = mmap(0, len, c_prot, c_flags, fd,
              ecl_integer_to_off_t(offset));
    if (pa == MAP_FAILED) {
      FElibc_error("EXT::MMAP failed.", 0);
    } else {
      output->base_string.self = pa;
      output->base_string.dim =
        output->base_string.fillp = len;
    }
    {
#line 75
	#line 75
	cl_object __value0 = CONS(output, stream);
#line 75
	the_env->nvalues = 1;
#line 75
	the_env->values[0] = __value0;
#line 75
	ecl_va_end(ARGS);
#line 75
	return __value0;
#line 75
}
;
  }
#else
  {
    cl_object output, vector;
    if (Null(filename)) {
      output = si_make_vector(element_type, length, ECL_NIL,
                              ECL_NIL, ECL_NIL, ECL_NIL);
    } else {
      cl_object stream = cl_open(13, filename,
                                 ECL_SYM(":DIRECTION",1240), direction,
                                 ECL_SYM(":ELEMENT-TYPE",1246), element_type,
                                 ECL_SYM(":IF-EXISTS",1270), if_exists,
                                 ECL_SYM(":IF-DOES-NOT-EXIST",1268), if_does_not_exist,
                                 ECL_SYM(":EXTERNAL-FORMAT",1258), ECL_SYM(":PASS-THROUGH",1846),
                                 ECL_SYM(":CSTREAM",1352), ECL_T);
      if (Null(length))
        length = ecl_file_length(stream);
      else
        length = ecl_to_unsigned_integer(length);
      output = si_make_vector(element_type, length, ECL_NIL,
                              ECL_NIL, ECL_NIL, ECL_NIL);
      cl_read_sequence(2, output, stream);
      cl_close(1, stream);
    }
    {
#line 100
	#line 100
	cl_object __value0 = output;
#line 100
	the_env->nvalues = 1;
#line 100
	the_env->values[0] = __value0;
#line 100
	ecl_va_end(ARGS);
#line 100
	return __value0;
#line 100
}
;
  }
#endif
}

cl_object
si_mmap_array(cl_object map)
{
#ifdef HAVE_SYS_MMAN_H
  {
#line 109
	const cl_env_ptr the_env = ecl_process_env();
#line 109
	#line 109
	cl_object __value0 = cl_car(map);
#line 109
	the_env->nvalues = 1;
#line 109
	the_env->values[0] = __value0;
#line 109
	#line 109
	return __value0;
#line 109
}
;
#else
  {
#line 111
	const cl_env_ptr the_env = ecl_process_env();
#line 111
	#line 111
	cl_object __value0 = map;
#line 111
	the_env->nvalues = 1;
#line 111
	the_env->values[0] = __value0;
#line 111
	#line 111
	return __value0;
#line 111
}
;
#endif
}

cl_object
si_munmap(cl_object map)
{
#ifdef HAVE_SYS_MMAN_H
  cl_object array = cl_car(map);
  cl_object stream = cl_cdr(map);
  int code = munmap(array->base_string.self, array->base_string.dim);
  if (code < 0) {
    FElibc_error("Error when unmapping file.", 0);
  }
  cl_close(1, stream);
#endif
  {
#line 127
	const cl_env_ptr the_env = ecl_process_env();
#line 127
	#line 127
	cl_object __value0 = ECL_NIL;
#line 127
	the_env->nvalues = 1;
#line 127
	the_env->values[0] = __value0;
#line 127
	#line 127
	return __value0;
#line 127
}
;
}
