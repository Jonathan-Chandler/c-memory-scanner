#line 1 "C:/work/lisp/ecl-21.2.1/ecl-21.2.1/src/c/ffi/cdata.d"
/* -*- Mode: C; c-basic-offset: 2; indent-tabs-mode: nil -*- */
/* vim: set filetype=c tabstop=2 shiftwidth=2 expandtab: */

/*
 * cdata.d - data for compiled files
 *
 * Copyright (c) 2011 Juan Jose Garcia Ripoll
 *
 * See file 'LICENSE' for the copyright details.
 *
 */

#include <string.h>
#include <ecl/ecl.h>
#include <ecl/ecl-inl.h>

#define HEADER_PREFIX "eClDaTa20110719"
#define HEADER_PREFIX_LENGTH 15

typedef struct {
  char code[16];
  cl_index offset, size;
} cdata_header;

ecl_def_ct_base_string(str_no_data,"",0,static,const);

cl_object
si_get_cdata(cl_object filename)
{
  cl_object map, array, displaced;
  cdata_header *header;
  map = si_mmap(3, filename, ECL_SYM(":DIRECTION",1240), ECL_SYM(":INPUT",1280));
  array = si_mmap_array(map);
  {
    char *v = (char*)array->base_string.self
      + array->base_string.dim
      - sizeof(cdata_header);
    header = (cdata_header*)v;
                
  }
  if (memcmp(header->code, HEADER_PREFIX, HEADER_PREFIX_LENGTH)) {
    displaced = str_no_data;
  } else {
    displaced = cl_funcall(8, ECL_SYM("MAKE-ARRAY",524),
                           ecl_make_fixnum(header->size),
                           ECL_SYM(":ELEMENT-TYPE",1246), ECL_SYM("BASE-CHAR",122),
                           ECL_SYM(":DISPLACED-TO",1243), array,
                           ECL_SYM(":DISPLACED-INDEX-OFFSET",1242),
                           ecl_make_fixnum(header->offset));
  }
  {
#line 51
	const cl_env_ptr the_env = ecl_process_env();
#line 51
	#line 51
	cl_object __value0 = map;
#line 51
	cl_object __value1 = displaced;
#line 51
	the_env->nvalues = 2;
#line 51
	the_env->values[1] = __value1;
#line 51
	the_env->values[0] = __value0;
#line 51
	#line 51
	return __value0;
#line 51
}
;
}

cl_object
si_add_cdata(cl_object filename, cl_object data)
{
  cl_object stream, offset;
  cdata_header header;

  data = si_copy_to_simple_base_string(data);
  stream = cl_open(9, filename,
                   ECL_SYM(":ELEMENT-TYPE",1246), ECL_SYM("BASE-CHAR",122),
                   ECL_SYM(":DIRECTION",1240), ECL_SYM(":OUTPUT",1309),
                   ECL_SYM(":IF-DOES-NOT-EXIST",1268), ECL_SYM(":ERROR",1251),
                   ECL_SYM(":IF-EXISTS",1270), ECL_SYM(":APPEND",1220));
  offset = ecl_file_length(stream);
  ecl_file_position_set(stream, offset);
  cl_write_sequence(2, data, stream);
  memcpy(header.code, HEADER_PREFIX, HEADER_PREFIX_LENGTH);
  header.offset = fixnnint(offset);
  header.size = data->base_string.dim;
  {
    unsigned char *c = (unsigned char *)&header;
    int i;
    for (i = 0; i < sizeof(header); i++) {
      ecl_write_byte(ecl_make_fixnum(c[i]), stream);
    }
  }
  cl_close(1, stream);
  {
#line 80
	const cl_env_ptr the_env = ecl_process_env();
the_env->nvalues = 0; return ECL_NIL;
#line 80
}
;
}
